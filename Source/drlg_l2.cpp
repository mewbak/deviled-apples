
undefined8
DRLG_L2PlaceMiniSet(byte *param_1, longlong param_2, longlong param_3, int param_4, int param_5, int param_6,
    int param_7, char param_8, undefined4 param_9, undefined param_10, undefined4 param_11,
    undefined4 param_12)

{
	byte bVar1;
	byte bVar2;
	int *piVar3;
	undefined *puVar4;
	undefined *puVar5;
	ulonglong uVar6;
	longlong lVar7;
	longlong lVar8;
	ulonglong uVar9;
	int iVar10;
	longlong lVar11;
	undefined uVar12;
	undefined uVar13;
	longlong lVar14;
	ulonglong uVar15;
	undefined uVar17;
	longlong lVar16;
	longlong lVar18;
	ulonglong uVar19;
	ulonglong uVar20;
	ulonglong uVar21;
	longlong lVar22;
	longlong lVar23;
	int iVar24;
	longlong unaff_r29;
	longlong unaff_r31;
	int iVar25;
	ulonglong uVar26;
	undefined4 in_stack_ffffff68;
	undefined in_stack_ffffff6f;
	undefined in_stack_ffffff7b;
	int local_68;
	int local_64;

	puVar5 = PTR_DAT_100f1cb4;
	puVar4 = PTR_DAT_100f1cb0;
	lVar18 = (longlong)param_8;
	lVar16 = (longlong)param_7;
	uVar15 = SEXT48(param_6);
	lVar14 = (longlong)param_5;
	lVar11 = (longlong)param_4;
	uVar6 = ZEXT48(&toc);
	uVar20 = ZEXT48(PTR_DAT_100f1abc);
	uVar21 = ZEXT48(PTR_DAT_100f1804);
	uVar19 = ZEXT48(PTR_DAT_100f1cb8);
	bVar1 = *param_1;
	bVar2 = param_1[1];
	if (param_3 - param_2 == 0) {
		local_68 = 1;
	} else {
		lVar22 = random(0, param_3 - param_2, (char)param_3, (char)param_4, (char)param_5,
		    (char)param_6, (char)param_7, param_8, in_stack_ffffff68, in_stack_ffffff6f,
		    in_stack_ffffff7b);
		local_68 = (int)param_2 + (int)lVar22;
	}
	lVar22 = 0x28 - (ulonglong)bVar1;
	local_64 = 0;
	lVar23 = 0x28 - (ulonglong)bVar2;
	while (true) {
		uVar13 = (undefined)lVar11;
		if (local_68 <= local_64) {
			iVar25 = (int)unaff_r31;
			iVar10 = (int)unaff_r29;
			iVar24 = (int)uVar6;
			if (param_6 == 1) {
				piVar3 = *(int **)(iVar24 + -0x77b4);
				**(int **)(iVar24 + -0x77b0) = iVar25 * 2 + 0x15;
				*piVar3 = iVar10 * 2 + 0x16;
			}
			if (param_7 == 0) {
				**(int **)(iVar24 + -0x751c) = iVar25 * 2 + 0x15;
				**(int **)(iVar24 + -0x7520) = iVar10 * 2 + 0x16;
			}
			if (param_7 == 6) {
				**(int **)(iVar24 + -0x751c) = iVar25 * 2 + 0x15;
				**(int **)(iVar24 + -0x7520) = iVar10 * 2 + 0x16;
			}
			return 1;
		}
		unaff_r31 = random(0, lVar22, (char)param_3, uVar13, (char)lVar14, (char)uVar15, (char)lVar16,
		    (char)lVar18, in_stack_ffffff68, in_stack_ffffff6f, in_stack_ffffff7b);
		unaff_r29 = random(0, lVar23, (char)param_3, uVar13, (char)lVar14, (char)uVar15, (char)lVar16,
		    (char)lVar18, in_stack_ffffff68, in_stack_ffffff6f, in_stack_ffffff7b);
		lVar11 = 0;
		iVar24 = 0;
		while (true) {
			uVar17 = (undefined)lVar16;
			uVar13 = (undefined)lVar14;
			if (((int)lVar11 != 0) || (199 < iVar24))
				break;
			lVar11 = 1;
			iVar10 = (int)unaff_r31;
			if ((((**(int **)((int)uVar6 + -0x7314) <= iVar10) && (iVar10 <= *(int *)uVar19)) && (*(int *)puVar5 <= (int)unaff_r29)) && ((int)unaff_r29 <= *(int *)puVar4)) {
				lVar11 = 0;
			}
			uVar12 = (undefined)lVar11;
			if (((param_4 != -1) && ((int)(param_4 - (uint)bVar1) <= iVar10)) && (iVar10 <= param_4 + 0xc)) {
				unaff_r31 = random(0, lVar22, (char)param_3, uVar12, uVar13, (char)uVar15, uVar17,
				    (char)lVar18, in_stack_ffffff68, in_stack_ffffff6f, in_stack_ffffff7b);
				unaff_r29 = random(0, lVar23, (char)param_3, uVar12, uVar13, (char)uVar15, uVar17,
				    (char)lVar18, in_stack_ffffff68, in_stack_ffffff6f, in_stack_ffffff7b);
				lVar11 = 0;
			}
			uVar12 = (undefined)lVar11;
			if (((param_5 != -1) && ((int)(param_5 - (uint)bVar2) <= (int)unaff_r29)) && ((int)unaff_r29 <= param_5 + 0xc)) {
				unaff_r31 = random(0, lVar22, (char)param_3, uVar12, uVar13, (char)uVar15, uVar17,
				    (char)lVar18, in_stack_ffffff68, in_stack_ffffff6f, in_stack_ffffff7b);
				unaff_r29 = random(0, lVar23, (char)param_3, uVar12, uVar13, (char)uVar15, uVar17,
				    (char)lVar18, in_stack_ffffff68, in_stack_ffffff6f, in_stack_ffffff7b);
				lVar11 = 0;
			}
			lVar7 = uVar21 + unaff_r29;
			lVar8 = uVar20 + unaff_r29;
			lVar14 = (longlong)(int)param_1 + 2;
			lVar16 = 0;
			while (((int)lVar16 < (int)(uint)bVar2 && ((int)lVar11 == 1))) {
				param_3 = 0;
				while ((iVar10 = (int)param_3, iVar10 < (int)(uint)bVar1 && ((int)lVar11 == 1))) {
					if ((*(byte *)lVar14 != 0) && (uVar15 = (ulonglong) * (byte *)((int)lVar7 + ((int)unaff_r31 + iVar10) * 0x28), (ulonglong) * (byte *)lVar14 != uVar15)) {
						lVar11 = 0;
					}
					if (*(char *)((int)lVar8 + ((int)unaff_r31 + iVar10) * 0x28) != '\0') {
						lVar11 = 0;
					}
					lVar14 = lVar14 + 1;
					param_3 = param_3 + 1;
				}
				lVar7 = lVar7 + 1;
				lVar8 = lVar8 + 1;
				lVar16 = lVar16 + 1;
			}
			if (((int)lVar11 == 0) && (unaff_r31 = unaff_r31 + 1, (int)unaff_r31 == (int)lVar22)) {
				unaff_r29 = unaff_r29 + 1;
				unaff_r31 = 0;
				if ((int)unaff_r29 == (int)lVar23) {
					unaff_r29 = 0;
				}
			}
			iVar24 = iVar24 + 1;
		}
		if (199 < iVar24)
			break;
		uVar9 = (ulonglong)((uint)bVar2 * (uint)bVar1 + 2);
		lVar7 = uVar21 + unaff_r29;
		uVar15 = 0;
		while ((int)uVar15 < (int)(uint)bVar2) {
			lVar11 = (longlong)(int)param_1 + uVar9;
			param_3 = 0;
			uVar26 = (ulonglong)bVar1;
			if (bVar1 != 0) {
				do {
					if (*(char *)lVar11 != '\0') {
						lVar14 = (unaff_r31 + param_3) * 0x28;
						*(char *)((int)lVar7 + (int)lVar14) = *(char *)lVar11;
					}
					uVar9 = uVar9 + 1;
					lVar11 = lVar11 + 1;
					param_3 = param_3 + 1;
					uVar26 = uVar26 - 1;
				} while (uVar26 != 0);
			}
			lVar7 = lVar7 + 1;
			uVar15 = uVar15 + 1;
		}
		local_64 = local_64 + 1;
	}
	return 0;
}

void DRLG_L2PlaceRndSet(byte *param_1, int param_2, char param_3, undefined param_4, undefined param_5,
    char param_6, undefined param_7, char param_8, undefined4 param_9)

{
	byte bVar1;
	byte bVar2;
	bool bVar3;
	undefined *puVar4;
	undefined *puVar5;
	ulonglong uVar6;
	longlong lVar7;
	ulonglong uVar8;
	undefined *puVar9;
	int iVar10;
	int iVar12;
	ulonglong uVar11;
	longlong lVar13;
	undefined uVar14;
	ulonglong uVar15;
	longlong lVar16;
	undefined uVar17;
	longlong lVar18;
	ulonglong uVar19;
	ulonglong uVar20;
	longlong lVar21;
	undefined *puVar22;
	ulonglong uVar23;
	longlong lVar24;
	int iVar25;
	int iVar26;
	longlong lVar27;
	longlong lVar28;
	int iVar29;
	longlong lVar30;
	ulonglong uVar31;
	undefined4 in_stack_ffffff78;
	undefined in_stack_ffffff7f;
	undefined in_stack_ffffff8b;

	puVar5 = PTR_DAT_100f1cb4;
	puVar4 = PTR_DAT_100f1cb0;
	lVar18 = (longlong)param_8;
	uVar15 = SEXT18(param_6);
	uVar11 = SEXT18(param_3);
	uVar6 = ZEXT48(&toc);
	uVar20 = ZEXT48(PTR_DAT_100f1804);
	uVar19 = ZEXT48(PTR_DAT_100f1cb8);
	lVar24 = 0;
	bVar1 = *param_1;
	bVar2 = param_1[1];
	lVar21 = (longlong)(int)(uint)bVar2 * (longlong)(int)(uint)bVar1 + 2;
	iVar26 = (uint)bVar2 << 1;
	uVar23 = uVar20;
	puVar22 = PTR_DAT_100f1abc;
	while (iVar25 = (int)lVar24, iVar25 < (int)(0x28 - (uint)bVar2)) {
		lVar27 = (ulonglong)bVar1 << 1;
		lVar28 = 0;
		while (iVar29 = (int)lVar28, iVar29 < (int)(0x28 - (uint)bVar1)) {
			bVar3 = true;
			if ((((**(int **)((int)uVar6 + -0x7314) <= iVar29) && (iVar29 <= *(int *)uVar19)) && (*(int *)puVar5 <= iVar25)) && (iVar25 <= *(int *)puVar4)) {
				bVar3 = false;
			}
			lVar13 = (longlong)(int)param_1 + 2;
			lVar16 = 0;
			uVar8 = uVar23;
			puVar9 = puVar22;
			while (true) {
				uVar17 = (undefined)lVar16;
				uVar14 = (undefined)lVar13;
				if (((int)(uint)bVar2 <= (int)lVar16) || (!bVar3))
					break;
				uVar11 = 0;
				while ((iVar12 = (int)uVar11, iVar12 < (int)(uint)bVar1 && (bVar3))) {
					if ((*(byte *)lVar13 != 0) && (uVar15 = (ulonglong) * (byte *)((int)uVar8 + (iVar29 + iVar12) * 0x28), (ulonglong) * (byte *)lVar13 != uVar15)) {
						bVar3 = false;
					}
					if (puVar9[(iVar29 + iVar12) * 0x28] != '\0') {
						bVar3 = false;
					}
					lVar13 = lVar13 + 1;
					uVar11 = uVar11 + 1;
				}
				uVar8 = uVar8 + 1;
				puVar9 = puVar9 + 1;
				lVar16 = lVar16 + 1;
			}
			if (bVar3) {
				uVar15 = lVar28 - (ulonglong)bVar1;
				lVar16 = uVar20 + (lVar24 - (ulonglong)bVar2);
				uVar17 = (undefined)(uVar15 * 0x28);
				lVar18 = lVar27 - uVar15;
				lVar13 = lVar24 - (ulonglong)bVar2;
				while ((uVar14 = (undefined)lVar16, (int)lVar13 < iVar26 && (bVar3))) {
					lVar7 = lVar16 + uVar15 * 0x28;
					lVar30 = lVar18;
					if ((int)uVar15 < (int)lVar27) {
						do {
							uVar11 = (ulonglong) * (byte *)lVar7;
							if (uVar11 == (ulonglong)param_1[(int)lVar21]) {
								bVar3 = false;
							}
							lVar7 = lVar7 + 0x28;
							lVar30 = lVar30 + -1;
						} while (lVar30 != 0);
					}
					lVar16 = lVar16 + 1;
					lVar13 = lVar13 + 1;
				}
			}
			if ((bVar3) && (lVar13 = random(0, 100, (char)uVar11, 1, uVar14, (char)uVar15, uVar17, (char)lVar18, in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8b), (int)lVar13 < param_2)) {
				iVar12 = 0;
				uVar8 = uVar23;
				lVar13 = lVar21;
				while (iVar12 < (int)(uint)bVar2) {
					uVar11 = (longlong)(int)param_1 + lVar13;
					iVar10 = 0;
					uVar31 = (ulonglong)bVar1;
					if (bVar1 != 0) {
						do {
							if (*(char *)uVar11 != '\0') {
								*(char *)((int)uVar8 + (iVar29 + iVar10) * 0x28) = *(char *)uVar11;
							}
							lVar13 = lVar13 + 1;
							uVar11 = uVar11 + 1;
							iVar10 = iVar10 + 1;
							uVar31 = uVar31 - 1;
						} while (uVar31 != 0);
					}
					uVar8 = uVar8 + 1;
					iVar12 = iVar12 + 1;
				}
			}
			lVar27 = lVar27 + 1;
			lVar28 = lVar28 + 1;
		}
		uVar23 = uVar23 + 1;
		puVar22 = puVar22 + 1;
		iVar26 = iVar26 + 1;
		lVar24 = lVar24 + 1;
	}
	return;
}

ulonglong DRLG_L2Subs(char param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	char cVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	ulonglong uVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	longlong lVar15;
	longlong lVar16;
	longlong lVar17;
	int iVar18;
	byte *pbVar19;
	byte *pbVar20;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;

	puVar7 = PTR_DAT_100f1cbc;
	puVar6 = PTR_DAT_100f1cb8;
	puVar5 = PTR_DAT_100f1cb4;
	puVar4 = PTR_DAT_100f1cb0;
	puVar3 = PTR_DAT_100f1804;
	lVar15 = (longlong)param_8;
	lVar14 = (longlong)param_7;
	lVar13 = (longlong)param_6;
	lVar12 = (longlong)param_5;
	lVar11 = (longlong)param_4;
	lVar10 = (longlong)param_3;
	uVar8 = SEXT18(param_1);
	lVar16 = 0;
	pbVar19 = PTR_DAT_100f1804;
	do {
		iVar2 = (int)lVar16;
		lVar17 = 0;
		pbVar20 = pbVar19;
		do {
			iVar18 = (int)lVar17;
			if ((((iVar18 < *(int *)puVar7) || (*(int *)puVar6 < iVar18)) && ((iVar2 < *(int *)puVar5 || (*(int *)puVar4 < iVar2)))) && ((uVar8 = random(0, 4, (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13, (char)lVar14, (char)lVar15, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab), (int)uVar8 == 0 && (cVar1 = (&DAT_100f720a)[(uint)*pbVar20], cVar1 != '\0')))) {
				uVar8 = random(0, 0x10, (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13, (char)lVar14, (char)lVar15, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
				lVar9 = -1;
				while (-1 < (int)uVar8) {
					lVar9 = lVar9 + 1;
					if ((int)lVar9 == 0xa1) {
						lVar9 = 0;
					}
					if (cVar1 == (&DAT_100f720a)[(int)lVar9]) {
						uVar8 = uVar8 - 1;
					}
				}
				lVar10 = lVar16 + -2;
				while ((int)lVar10 < iVar2 + 2) {
					lVar11 = lVar17 + -2;
					while ((int)lVar11 < iVar18 + 2) {
						uVar8 = (ulonglong)(byte)puVar3[(int)lVar11 * 0x28 + (int)lVar10];
						if ((uint)lVar9 == (uint)(byte)puVar3[(int)lVar11 * 0x28 + (int)lVar10]) {
							lVar10 = lVar16 + 3;
							lVar11 = lVar17 + 2;
						}
						lVar11 = lVar11 + 1;
					}
					lVar10 = lVar10 + 1;
				}
				if ((int)lVar10 < iVar2 + 3) {
					*pbVar20 = (byte)lVar9;
				}
			}
			lVar17 = lVar17 + 1;
			pbVar20 = pbVar20 + 0x28;
		} while ((int)lVar17 < 0x28);
		lVar16 = lVar16 + 1;
		pbVar19 = pbVar19 + 1;
	} while ((int)lVar16 < 0x28);
	return uVar8;
}

void DRLG_L2Shadows(void)

{
	char cVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	undefined *puVar5;
	bool bVar6;
	undefined *puVar7;
	undefined *puVar8;
	byte *pbVar9;
	int iVar10;
	undefined *puVar11;
	longlong lVar12;

	puVar7 = PTR_DAT_100f1804;
	iVar10 = 1;
	puVar5 = PTR_DAT_100f1804;
	do {
		pbVar9 = puVar5 + 0x29;
		lVar12 = 0x27;
		puVar11 = puVar7;
		do {
			puVar11 = puVar11 + 0x28;
			puVar8 = puVar11 + iVar10;
			cVar1 = (&DAT_100f72ab)[(uint)*pbVar9];
			cVar2 = (&DAT_100f72ab)[(uint)pbVar9[-0x28]];
			cVar3 = (&DAT_100f72ab)[(uint)pbVar9[-1]];
			cVar4 = (&DAT_100f72ab)[(uint)pbVar9[-0x29]];
			if (cVar1 == DAT_100f71fc) {
				bVar6 = true;
				if ((cRam100f71fd != '\0') && (cVar4 != cRam100f71fd)) {
					bVar6 = false;
				}
				if ((cRam100f71fe != '\0') && (cVar3 != cRam100f71fe)) {
					bVar6 = false;
				}
				if ((cRam100f71ff != '\0') && (cVar2 != cRam100f71ff)) {
					bVar6 = false;
				}
				if (bVar6) {
					if (cRam100f7200 != '\0') {
						puVar8[-0x29] = cRam100f7200;
					}
					if (cRam100f7201 != '\0') {
						puVar8[-1] = cRam100f7201;
					}
					if (cRam100f7202 != '\0') {
						puVar8[-0x28] = cRam100f7202;
					}
				}
			}
			if (cVar1 == cRam100f7203) {
				bVar6 = true;
				if ((cRam100f7204 != '\0') && (cVar4 != cRam100f7204)) {
					bVar6 = false;
				}
				if ((cRam100f7205 != '\0') && (cVar3 != cRam100f7205)) {
					bVar6 = false;
				}
				if ((cRam100f7206 != '\0') && (cVar2 != cRam100f7206)) {
					bVar6 = false;
				}
				if (bVar6) {
					if (cRam100f7207 != '\0') {
						puVar8[-0x29] = cRam100f7207;
					}
					if (cRam100f7208 != '\0') {
						puVar8[-1] = cRam100f7208;
					}
					if (cRam100f7209 != '\0') {
						puVar8[-0x28] = cRam100f7209;
					}
				}
			}
			pbVar9 = pbVar9 + 0x28;
			lVar12 = lVar12 + -1;
		} while (lVar12 != 0);
		iVar10 = iVar10 + 1;
		puVar5 = puVar5 + 1;
	} while (iVar10 < 0x28);
	return;
}

void InitDungeon(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	int iVar5;
	longlong lVar6;

	iVar5 = 0;
	puVar3 = PTR_DAT_100f1ca0;
	puVar4 = PTR_DAT_100f1abc;
	do {
		lVar6 = 5;
		puVar1 = puVar3;
		puVar2 = puVar4;
		do {
			*puVar1 = 0x20;
			*puVar2 = 0;
			puVar1[0x28] = 0x20;
			puVar2[0x28] = 0;
			puVar1[0x50] = 0x20;
			puVar2[0x50] = 0;
			puVar1[0x78] = 0x20;
			puVar2[0x78] = 0;
			puVar1[0xa0] = 0x20;
			puVar2[0xa0] = 0;
			puVar1[200] = 0x20;
			puVar2[200] = 0;
			puVar1[0xf0] = 0x20;
			puVar2[0xf0] = 0;
			puVar1[0x118] = 0x20;
			puVar1 = puVar1 + 0x140;
			puVar2[0x118] = 0;
			puVar2 = puVar2 + 0x140;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
		iVar5 = iVar5 + 1;
		puVar4 = puVar4 + 1;
		puVar3 = puVar3 + 1;
	} while (iVar5 < 0x28);
	return;
}

void DRLG_LoadL2SP(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined8 uVar4;
	longlong lVar5;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_DAT_100f1aac;
	puVar1 = PTR_DAT_100f1aa8;
	ppuVar3 = &toc;
	*(undefined4 *)PTR_DAT_100f1aac = 0;
	uVar4 = QuestStatus(8);
	if ((int)uVar4 == 0) {
		uVar4 = QuestStatus(9);
		if ((int)uVar4 == 0) {
			uVar4 = QuestStatus(0xe);
			if ((int)uVar4 != 0) {
				lVar5 = LoadFileInMem(ZEXT48(ppuVar3[-0x18e7]), (undefined4 *)0x0, param_3, param_4, param_5,
				    param_6, param_7, param_8, in_stack_ffffffc8);
				*(int *)puVar1 = (int)lVar5;
				*(undefined4 *)puVar2 = 1;
			}
		} else {
			lVar5 = LoadFileInMem(ZEXT48(ppuVar3[-0x18e6]), (undefined4 *)0x0, param_3, param_4, param_5,
			    param_6, param_7, param_8, in_stack_ffffffc8);
			*(int *)puVar1 = (int)lVar5;
			*(undefined4 *)puVar2 = 1;
		}
	} else {
		lVar5 = LoadFileInMem(ZEXT48(ppuVar3[-0x18e5]), (undefined4 *)0x0, param_3, param_4, param_5, param_6,
		    param_7, param_8, in_stack_ffffffc8);
		*(int *)puVar1 = (int)lVar5;
		*(undefined4 *)puVar2 = 1;
	}
	return;
}

void DRLG_FreeL2SP(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	mem_free_dbg((int **)PTR_DAT_100f1aa8, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	return;
}

void DRLG_L2SetRoom(int param_1, longlong param_2, undefined8 param_3, ulonglong param_4, longlong param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	byte bVar1;
	byte bVar2;
	byte bVar3;
	undefined4 *puVar4;
	uint *puVar5;
	uint *puVar6;
	undefined *puVar7;
	int iVar8;
	undefined *puVar9;
	undefined **ppuVar10;
	ulonglong uVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	int iVar15;
	undefined4 in_stack_ffffffb8;

	puVar9 = PTR_DAT_100f1aa8;
	ppuVar10 = &toc;
	uVar11 = FUN_100b8f7c((ulonglong) * (uint *)PTR_DAT_100f1aa8, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	bVar1 = *(byte *)uVar11;
	iVar15 = 0;
	bVar2 = ((byte *)uVar11)[2];
	puVar4 = (undefined4 *)ppuVar10[-0x1d54];
	*(int *)ppuVar10[-0x1d53] = param_1;
	puVar5 = (uint *)ppuVar10[-0x1d55];
	*puVar4 = (int)param_2;
	puVar6 = (uint *)ppuVar10[-0x1d56];
	*puVar5 = (uint)bVar1;
	puVar7 = ppuVar10[-0x1df3];
	*puVar6 = (uint)bVar2;
	lVar12 = ZEXT48(puVar7) + param_2;
	param_2 = ZEXT48(ppuVar10[-0x1d45]) + param_2;
	lVar13 = (ulonglong) * (uint *)(*(int *)puVar9 + 0x88) + 4;
	while (iVar15 < (int)(uint)bVar2) {
		lVar14 = 0;
		uVar11 = (ulonglong)bVar1;
		if (bVar1 != 0) {
			do {
				bVar3 = *(byte *)lVar13;
				param_4 = (ulonglong)bVar3;
				if (bVar3 == 0) {
					*(undefined *)((int)lVar12 + (param_1 + (int)lVar14) * 0x28) = 3;
				} else {
					param_5 = ((longlong)param_1 + lVar14) * 0x28;
					iVar8 = (int)param_5;
					*(byte *)((int)lVar12 + iVar8) = bVar3;
					*(byte *)((int)param_2 + iVar8) = *(byte *)((int)param_2 + iVar8) | 0x80;
				}
				lVar13 = lVar13 + 2;
				lVar14 = lVar14 + 1;
				uVar11 = uVar11 - 1;
			} while (uVar11 != 0);
		}
		lVar12 = lVar12 + 1;
		param_2 = param_2 + 1;
		iVar15 = iVar15 + 1;
	}
	FUN_100b9100(*(int *)puVar9, (char)lVar12, (char)param_2, (char)param_4, (char)param_5, (char)lVar13,
	    bVar1, bVar2, in_stack_ffffffb8);
	return;
}

void DefineRoom(int param_1, int param_2, int param_3, int param_4, int param_5)

{
	undefined *puVar1;
	undefined *puVar2;
	ulonglong uVar3;
	uint uVar4;
	uint uVar5;
	undefined *puVar6;
	undefined *puVar7;
	int iVar8;
	int iVar9;
	undefined *puVar10;
	byte *pbVar11;

	puVar7 = PTR_DAT_100f1ca0;
	puVar10 = PTR_DAT_100f1c9c;
	iVar8 = param_1 * 0x28;
	puVar1 = PTR_DAT_100f1ca0 + iVar8;
	puVar1[param_2] = 0x43;
	puVar2 = PTR_DAT_100f1c98;
	puVar6 = puVar7 + param_3 * 0x28;
	puVar1[param_4] = 0x45;
	puVar6[param_2] = 0x42;
	puVar6[param_4] = 0x41;
	*(int *)puVar10 = *(int *)puVar10 + 1;
	iVar9 = *(int *)puVar10;
	*(int *)(puVar2 + iVar9 * 0x14) = param_1;
	puVar2 = puVar2 + iVar9 * 0x14;
	*(int *)(puVar2 + 8) = param_3;
	*(int *)(puVar2 + 4) = param_2;
	*(int *)(puVar2 + 0xc) = param_4;
	puVar2 = PTR_DAT_100f1abc;
	iVar9 = param_1;
	if (param_5 == 1) {
		while (iVar9 < param_3) {
			pbVar11 = puVar2 + iVar8 + param_2;
			uVar4 = param_4 - iVar9;
			if (iVar9 < param_4) {
				uVar3 = (ulonglong)(uVar4 >> 3);
				uVar5 = uVar4;
				if (uVar4 >> 3 == 0)
					goto LAB_1002d248;
				do {
					iVar8 = iVar8 + 0x140;
					*pbVar11 = *pbVar11 | 0x80;
					pbVar11[0x28] = pbVar11[0x28] | 0x80;
					pbVar11[0x50] = pbVar11[0x50] | 0x80;
					pbVar11[0x78] = pbVar11[0x78] | 0x80;
					pbVar11[0xa0] = pbVar11[0xa0] | 0x80;
					pbVar11[200] = pbVar11[200] | 0x80;
					pbVar11[0xf0] = pbVar11[0xf0] | 0x80;
					pbVar11[0x118] = pbVar11[0x118] | 0x80;
					pbVar11 = pbVar11 + 0x140;
					uVar3 = uVar3 - 1;
				} while (uVar3 != 0);
				uVar5 = uVar4 & 7;
				while (uVar5 != 0) {
				LAB_1002d248:
					iVar8 = iVar8 + 0x28;
					*pbVar11 = *pbVar11 | 0x80;
					pbVar11 = pbVar11 + 0x28;
					uVar5 = uVar5 - 1;
				}
				iVar9 = iVar9 + uVar4;
			}
			iVar8 = iVar8 + 0x28;
			iVar9 = iVar9 + 1;
		}
	}
	iVar9 = param_1 + 1;
	iVar8 = iVar9 * 0x28;
	puVar2 = puVar7 + param_2 + iVar8;
	puVar10 = puVar7 + param_4 + iVar8;
	uVar4 = param_3 - iVar9;
	if (iVar9 <= param_3 + -1) {
		uVar3 = (ulonglong)(uVar4 >> 3);
		if (uVar4 >> 3 != 0) {
			do {
				*puVar2 = 0x23;
				*puVar10 = 0x23;
				puVar2[0x28] = 0x23;
				puVar10[0x28] = 0x23;
				puVar2[0x50] = 0x23;
				puVar10[0x50] = 0x23;
				puVar2[0x78] = 0x23;
				puVar10[0x78] = 0x23;
				puVar2[0xa0] = 0x23;
				puVar10[0xa0] = 0x23;
				puVar2[200] = 0x23;
				puVar10[200] = 0x23;
				puVar2[0xf0] = 0x23;
				puVar10[0xf0] = 0x23;
				puVar2[0x118] = 0x23;
				puVar2 = puVar2 + 0x140;
				puVar10[0x118] = 0x23;
				puVar10 = puVar10 + 0x140;
				uVar3 = uVar3 - 1;
			} while (uVar3 != 0);
			uVar4 = uVar4 & 7;
			if (uVar4 == 0)
				goto LAB_1002d31c;
		}
		do {
			*puVar2 = 0x23;
			puVar2 = puVar2 + 0x28;
			*puVar10 = 0x23;
			puVar10 = puVar10 + 0x28;
			uVar4 = uVar4 - 1;
		} while (uVar4 != 0);
	}
LAB_1002d31c:
	param_2 = param_2 + 1;
	puVar1 = puVar1 + param_2;
	puVar6 = puVar6 + param_2;
	puVar7 = puVar7 + param_2;
	do {
		if (param_4 + -1 < param_2) {
			return;
		}
		*puVar1 = 0x23;
		puVar2 = puVar7 + iVar8;
		*puVar6 = 0x23;
		uVar4 = param_3 - (param_1 + 1);
		if (param_1 + 1 < param_3) {
			uVar3 = (ulonglong)(uVar4 >> 3);
			if (uVar4 >> 3 != 0) {
				do {
					*puVar2 = 0x2e;
					puVar2[0x28] = 0x2e;
					puVar2[0x50] = 0x2e;
					puVar2[0x78] = 0x2e;
					puVar2[0xa0] = 0x2e;
					puVar2[200] = 0x2e;
					puVar2[0xf0] = 0x2e;
					puVar2[0x118] = 0x2e;
					puVar2 = puVar2 + 0x140;
					uVar3 = uVar3 - 1;
				} while (uVar3 != 0);
				uVar4 = uVar4 & 7;
				if (uVar4 == 0)
					goto LAB_1002d3a4;
			}
			do {
				*puVar2 = 0x2e;
				puVar2 = puVar2 + 0x28;
				uVar4 = uVar4 - 1;
			} while (uVar4 != 0);
		}
	LAB_1002d3a4:
		puVar1 = puVar1 + 1;
		puVar6 = puVar6 + 1;
		puVar7 = puVar7 + 1;
		param_2 = param_2 + 1;
	} while (true);
}

void CreateDoorType(int param_1, int param_2)

{
	char cVar1;
	bool bVar2;

	param_1 = param_1 * 0x28;
	bVar2 = PTR_DAT_100f1ca0[param_2 + param_1 + 1] == 'D' || (PTR_DAT_100f1ca0[param_2 + param_1 + -1] == 'D' || (PTR_DAT_100f1ca0[param_2 + param_1 + 0x28] == 'D' || PTR_DAT_100f1ca0[param_2 + param_1 + -0x28] == 'D'));
	cVar1 = PTR_DAT_100f1ca0[param_1 + param_2];
	if ((((cVar1 == 'B') || (cVar1 == 'C')) || (cVar1 == 'A')) || (cVar1 == 'E')) {
		bVar2 = true;
	}
	if (bVar2) {
		return;
	}
	PTR_DAT_100f1ca0[param_1 + param_2] = 'D';
	return;
}

void PlaceHallExt(int param_1, int param_2)

{
	if (PTR_DAT_100f1ca0[param_1 * 0x28 + param_2] != ' ') {
		return;
	}
	PTR_DAT_100f1ca0[param_1 * 0x28 + param_2] = ',';
	return;
}

void AddHall(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
    undefined4 param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined4 uVar3;
	undefined4 *puVar4;
	int iVar5;

	puVar2 = PTR_DAT_100f1c94;
	if (*(int *)PTR_DAT_100f1c94 == 0) {
		uVar3 = DiabloAllocPtr(0x18);
		*(undefined4 *)puVar2 = uVar3;
		**(undefined4 **)puVar2 = param_1;
		*(undefined4 *)(*(int *)puVar2 + 4) = param_2;
		*(undefined4 *)(*(int *)puVar2 + 8) = param_3;
		*(undefined4 *)(*(int *)puVar2 + 0xc) = param_4;
		*(undefined4 *)(*(int *)puVar2 + 0x10) = param_5;
		*(undefined4 *)(*(int *)puVar2 + 0x14) = 0;
	} else {
		puVar4 = (undefined4 *)DiabloAllocPtr(0x18);
		*puVar4 = param_1;
		puVar4[1] = param_2;
		puVar4[2] = param_3;
		puVar4[3] = param_4;
		puVar4[4] = param_5;
		puVar4[5] = 0;
		iVar1 = *(int *)puVar2;
		do {
			iVar5 = iVar1;
			iVar1 = *(int *)(iVar5 + 0x14);
		} while (iVar1 != 0);
		*(undefined4 **)(iVar5 + 0x14) = puVar4;
	}
	return;
}

void CreateRoom(longlong param_1, longlong param_2, longlong param_3, longlong param_4, int param_5,
    int param_6, int param_7, longlong param_8, undefined4 param_9, undefined param_10,
    undefined4 param_11, uint param_12)

{
	int *piVar1;
	int *piVar2;
	int param_5_00;
	undefined **ppuVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	undefined *puVar8;
	undefined uVar9;
	undefined uVar11;
	int iVar10;
	undefined uVar12;
	undefined uVar13;
	undefined uVar14;
	undefined uVar15;
	undefined uVar16;
	ulonglong uVar17;
	int unaff_r15;
	int unaff_r18;
	ulonglong uVar18;
	int iVar19;
	int unaff_r23;
	uint unaff_r24;
	uint *puVar20;
	longlong lVar21;
	int iVar22;
	int iVar23;
	longlong lVar24;
	int iVar25;
	undefined4 param_9_00;
	undefined param_10_00;
	undefined in_stack_ffffff8b;
	undefined4 param_11_00;

	puVar8 = PTR_DAT_100f1c98;
	uVar16 = (undefined)param_8;
	uVar11 = (undefined)param_4;
	uVar9 = (undefined)param_3;
	uVar13 = (undefined)param_7;
	uVar14 = (undefined)param_6;
	uVar12 = (undefined)param_5;
	ppuVar3 = &toc;
	if (*(int *)PTR_DAT_100f1c9c < 0x50) {
		uVar18 = param_3 - param_1;
		lVar21 = param_4 - param_2;
		iVar19 = (int)uVar18;
		if ((_DAT_100f71c8 <= iVar19) && (iVar22 = (int)lVar21, _DAT_100f71c8 <= iVar22)) {
			if ((int)_DAT_100f71cc < iVar19) {
				ppuVar3 = &toc;
				uVar15 = uVar13;
				lVar4 = random(0, (ulonglong)_DAT_100f71cc - (ulonglong)_DAT_100f71d0, uVar9, uVar11,
				    uVar12, uVar14, uVar13, uVar16, param_9_00, param_10_00, in_stack_ffffff8b);
				uVar17 = (ulonglong)_DAT_100f71d0 + lVar4;
			} else {
				uVar17 = uVar18;
				uVar15 = uVar13;
				if ((int)_DAT_100f71d0 < iVar19) {
					ppuVar3 = &toc;
					uVar15 = uVar13;
					lVar4 = random(0, uVar18 - (ulonglong)_DAT_100f71d0, uVar9, uVar11, uVar12, uVar14, uVar13, uVar16, param_9_00, param_10_00, in_stack_ffffff8b);
					uVar17 = (ulonglong)_DAT_100f71d0 + lVar4;
				}
			}
			if ((int)_DAT_100f71cc < iVar22) {
				lVar4 = random(0, (ulonglong)_DAT_100f71cc - (ulonglong)_DAT_100f71d0, uVar9, uVar11,
				    uVar12, uVar14, uVar15, uVar16, param_9_00, param_10_00, in_stack_ffffff8b);
				lVar4 = (ulonglong)_DAT_100f71d0 + lVar4;
			} else {
				lVar4 = lVar21;
				if ((int)_DAT_100f71d0 < iVar22) {
					lVar4 = random(0, lVar21 - (ulonglong)_DAT_100f71d0, uVar9, uVar11, uVar12, uVar14, uVar15, uVar16, param_9_00, param_10_00, in_stack_ffffff8b);
					lVar4 = (ulonglong)_DAT_100f71d0 + lVar4;
				}
			}
			if (param_7 == 1) {
				uVar17 = (ulonglong)param_12;
				lVar4 = param_8;
			}
			lVar5 = random(0, uVar18, uVar9, uVar11, uVar12, uVar14, uVar15, uVar16, param_9_00, param_10_00,
			    in_stack_ffffff8b);
			lVar5 = param_1 + lVar5;
			lVar6 = random(0, lVar21, uVar9, uVar11, uVar12, uVar14, uVar15, uVar16, param_9_00, param_10_00,
			    in_stack_ffffff8b);
			iVar19 = (int)uVar17;
			lVar6 = param_2 + lVar6;
			lVar21 = lVar5 + uVar17;
			if ((int)param_3 < (int)(lVar5 + uVar17)) {
				lVar5 = param_3 - uVar17;
				lVar21 = param_3;
			}
			lVar24 = lVar6 + lVar4;
			if ((int)param_4 < (int)(lVar6 + lVar4)) {
				lVar6 = param_4 - lVar4;
				lVar24 = param_4;
			}
			if (0x25 < (int)lVar5) {
				lVar5 = 0x26;
			}
			if (0x25 < (int)lVar6) {
				lVar6 = 0x26;
			}
			if ((int)lVar5 < 2) {
				lVar5 = 1;
			}
			iVar22 = (int)lVar5;
			if ((int)lVar6 < 2) {
				lVar6 = 1;
			}
			iVar25 = (int)lVar6;
			if (0x25 < (int)lVar21) {
				lVar21 = 0x26;
			}
			if (0x25 < (int)lVar24) {
				lVar24 = 0x26;
			}
			if ((int)lVar21 < 2) {
				lVar21 = 1;
			}
			uVar9 = (undefined)lVar21;
			iVar23 = (int)lVar21;
			if ((int)lVar24 < 2) {
				lVar24 = 1;
			}
			uVar11 = (undefined)lVar24;
			iVar10 = (int)lVar24;
			DefineRoom(iVar22, iVar25, iVar23, iVar10, param_7);
			if (param_7 == 1) {
				piVar1 = (int *)ppuVar3[-0x1cc7];
				uVar9 = SUB41(piVar1, 0);
				*(int *)ppuVar3[-0x1cc5] = iVar22 + 2;
				piVar2 = (int *)ppuVar3[-0x1cc6];
				*piVar1 = iVar25 + 2;
				piVar1 = (int *)ppuVar3[-0x1cc8];
				*piVar2 = iVar23;
				*piVar1 = iVar10;
			}
			param_5_00 = *(int *)ppuVar3[-0x1ccd];
			*(int *)(puVar8 + param_5_00 * 0x14 + 0x10) = param_5;
			if (param_5 != 0) {
				if (param_6 == 1) {
					lVar7 = random(0, (lVar21 - lVar5) + -2, uVar9, uVar11, uVar13, uVar14, uVar15, uVar16,
					    param_9_00, param_10_00, in_stack_ffffff8b);
					unaff_r15 = iVar22 + (int)lVar7 + 1;
					puVar20 = (uint *)(puVar8 + param_5 * 0x14);
					lVar7 = random(0, ((ulonglong)puVar20[2] - (ulonglong)*puVar20) + -2, uVar9, uVar11,
					    uVar13, uVar14, uVar15, uVar16, param_9_00, param_10_00, in_stack_ffffff8b);
					unaff_r24 = puVar20[3];
					unaff_r23 = *puVar20 + (int)lVar7 + 1;
					unaff_r18 = iVar25;
				}
				if (param_6 == 3) {
					lVar7 = random(0, (lVar21 - lVar5) + -2, uVar9, uVar11, uVar13, uVar14, uVar15, uVar16,
					    param_9_00, param_10_00, in_stack_ffffff8b);
					unaff_r15 = iVar22 + (int)lVar7 + 1;
					puVar20 = (uint *)(puVar8 + param_5 * 0x14);
					lVar7 = random(0, ((ulonglong)puVar20[2] - (ulonglong)*puVar20) + -2, uVar9, uVar11,
					    uVar13, uVar14, uVar15, uVar16, param_9_00, param_10_00, in_stack_ffffff8b);
					unaff_r24 = puVar20[1];
					unaff_r23 = *puVar20 + (int)lVar7 + 1;
					unaff_r18 = iVar10;
				}
				if (param_6 == 2) {
					lVar7 = random(0, (lVar24 - lVar6) + -2, uVar9, uVar11, uVar13, uVar14, uVar15, uVar16,
					    param_9_00, param_10_00, in_stack_ffffff8b);
					iVar10 = param_5 * 0x14;
					unaff_r18 = iVar25 + (int)lVar7 + 1;
					uVar9 = (undefined) * (uint *)(puVar8 + iVar10 + 0xc);
					unaff_r23 = *(int *)(puVar8 + iVar10);
					lVar7 = random(0, ((ulonglong) * (uint *)(puVar8 + iVar10 + 0xc) - (ulonglong) * (uint *)(puVar8 + iVar10 + 4)) + -2, uVar9, uVar11, uVar13, uVar14, uVar15, uVar16, param_9_00, param_10_00, in_stack_ffffff8b);
					unaff_r24 = *(uint *)(puVar8 + iVar10 + 4) + (int)lVar7 + 1;
					unaff_r15 = iVar23;
				}
				if (param_6 == 4) {
					lVar7 = random(0, (lVar24 - lVar6) + -2, uVar9, uVar11, uVar13, uVar14, uVar15, uVar16,
					    param_9_00, param_10_00, in_stack_ffffff8b);
					unaff_r18 = iVar25 + (int)lVar7 + 1;
					puVar8 = puVar8 + param_5 * 0x14;
					unaff_r23 = *(int *)(puVar8 + 8);
					lVar7 = random(0, ((ulonglong) * (uint *)(puVar8 + 0xc) - (ulonglong) * (uint *)(puVar8 + 4)) + -2,
					    (char)*(uint *)(puVar8 + 0xc), uVar11, uVar13, uVar14, uVar15, uVar16,
					    param_9_00, param_10_00, in_stack_ffffff8b);
					unaff_r24 = *(int *)(puVar8 + 4) + (int)lVar7 + 1;
					unaff_r15 = iVar22;
				}
				AddHall(unaff_r15, unaff_r18, unaff_r23, unaff_r24, param_6, uVar14, uVar15, uVar16, param_9_00);
			}
			if (iVar19 < (int)lVar4) {
				CreateRoom(param_1 + 2, param_2 + 2, lVar5 + -2, lVar24 + -2, param_5_00, 2, 0, 0, param_9_00,
				    param_10_00, param_11_00, 0);
				CreateRoom(lVar21 + 2, lVar6 + 2, param_3 + -2, param_4 + -2, param_5_00, 4, 0, 0, param_9_00,
				    param_10_00, param_11_00, 0);
				CreateRoom(param_1 + 2, lVar24 + 2, lVar21 + -2, param_4 + -2, param_5_00, 1, 0, 0, param_9_00,
				    param_10_00, param_11_00, 0);
				CreateRoom(lVar5 + 2, param_2 + 2, param_3 + -2, lVar6 + -2, param_5_00, 3, 0, 0, param_9_00,
				    param_10_00, param_11_00, 0);
			} else {
				CreateRoom(param_1 + 2, param_2 + 2, lVar21 + -2, lVar6 + -2, param_5_00, 3, 0, 0, param_9_00,
				    param_10_00, param_11_00, 0);
				CreateRoom(lVar5 + 2, lVar24 + 2, param_3 + -2, param_4 + -2, param_5_00, 1, 0, 0, param_9_00,
				    param_10_00, param_11_00, 0);
				CreateRoom(param_1 + 2, lVar6 + 2, lVar5 + -2, param_4 + -2, param_5_00, 2, 0, 0, param_9_00,
				    param_10_00, param_11_00, 0);
				CreateRoom(lVar21 + 2, param_2 + 2, param_3 + -2, lVar24 + -2, param_5_00, 4, 0, 0, param_9_00,
				    param_10_00, param_11_00, 0);
			}
		}
	}
	return;
}

void GetHall(undefined4 *param_1, undefined4 *param_2, undefined4 *param_3, undefined4 *param_4,
    undefined4 *param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 uVar1;
	undefined4 uVar2;
	uint uVar3;
	undefined *puVar4;
	undefined4 in_stack_ffffffc8;

	puVar4 = PTR_DAT_100f1c94;
	uVar1 = (*(undefined4 **)PTR_DAT_100f1c94)[5];
	uVar2 = **(undefined4 **)PTR_DAT_100f1c94;
	*param_1 = uVar2;
	*param_2 = *(undefined4 *)(*(int *)puVar4 + 4);
	*param_3 = *(undefined4 *)(*(int *)puVar4 + 8);
	*param_4 = *(undefined4 *)(*(int *)puVar4 + 0xc);
	*param_5 = *(undefined4 *)(*(int *)puVar4 + 0x10);
	uVar3 = *(uint *)puVar4;
	*(undefined4 *)puVar4 = 0;
	mem_free_dbg((ulonglong)uVar3, (char)param_2, (char)param_3, (char)param_4, (char)param_5, (char)uVar2,
	    param_7, param_8, in_stack_ffffffc8);
	*(undefined4 *)puVar4 = uVar1;
	return;
}

void ConnectHall(longlong param_1, longlong param_2, longlong param_3, longlong param_4, int param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	char cVar1;
	uint uVar2;
	uint uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	undefined *puVar8;
	longlong lVar9;
	longlong lVar10;
	int iVar13;
	longlong lVar11;
	longlong lVar12;
	int iVar14;
	undefined uVar15;
	undefined uVar16;
	longlong lVar17;
	longlong lVar18;
	longlong lVar19;
	longlong lVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	longlong lVar26;
	char *pcVar27;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined in_stack_ffffff9b;

	puVar8 = PTR_DAT_100f1ca0;
	uVar16 = (undefined)param_4;
	uVar15 = (undefined)param_3;
	lVar20 = (longlong)param_8;
	lVar19 = (longlong)param_7;
	lVar18 = (longlong)param_6;
	lVar26 = (longlong)param_5;
	bVar7 = false;
	lVar17 = lVar26;
	lVar9 = random(0, 100, uVar15, uVar16, (char)param_5, param_6, param_7, param_8, in_stack_ffffff88,
	    in_stack_ffffff8f, in_stack_ffffff9b);
	lVar10 = random(0, 100, uVar15, uVar16, (char)lVar17, (char)lVar18, (char)lVar19, (char)lVar20,
	    in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b);
	iVar13 = (int)param_1;
	iVar14 = (int)param_2;
	CreateDoorType(iVar13, iVar14);
	CreateDoorType((int)param_3, (int)param_4);
	abs(param_3 - param_1);
	abs(param_4 - param_2);
	uVar2 = *(uint *)(&DAT_100f71d4 + param_5 * 4);
	uVar3 = *(uint *)(&DAT_100f71e8 + param_5 * 4);
	iVar5 = (int)(param_3 - (ulonglong)uVar2);
	iVar4 = (int)(param_4 - (ulonglong)uVar3);
	puVar8[iVar5 * 0x28 + iVar4] = 0x2c;
	bVar6 = false;
	while (!bVar7) {
		iVar24 = (int)param_1;
		if ((0x25 < iVar24) && ((int)lVar26 == 2)) {
			lVar26 = 4;
		}
		iVar25 = (int)param_2;
		if ((0x25 < iVar25) && ((int)lVar26 == 3)) {
			lVar26 = 1;
		}
		if ((iVar24 < 2) && ((int)lVar26 == 4)) {
			lVar26 = 2;
		}
		if ((iVar25 < 2) && ((int)lVar26 == 1)) {
			lVar26 = 3;
		}
		cVar1 = puVar8[iVar24 * 0x28 + iVar25];
		if ((cVar1 == 'C') && (((int)lVar26 == 1 || ((int)lVar26 == 4)))) {
			lVar26 = 2;
		}
		if ((cVar1 == 'B') && ((lVar26 - 1U & 0xffffffff) < 2)) {
			lVar26 = 3;
		}
		if ((cVar1 == 'E') && ((lVar26 - 3U & 0xffffffff) < 2)) {
			lVar26 = 1;
		}
		if ((cVar1 == 'A') && ((lVar26 - 2U & 0xffffffff) < 2)) {
			lVar26 = 4;
		}
		iVar22 = (int)lVar26;
		param_1 = param_1 + (ulonglong) * (uint *)(&DAT_100f71d4 + iVar22 * 4);
		iVar25 = (int)param_1;
		param_2 = param_2 + (ulonglong) * (uint *)(&DAT_100f71e8 + iVar22 * 4);
		iVar24 = (int)param_2;
		pcVar27 = puVar8 + iVar25 * 0x28 + iVar24;
		if (*pcVar27 == ' ') {
			if (bVar6) {
				CreateDoorType(iVar25 - *(uint *)(&DAT_100f71d4 + iVar22 * 4),
				    iVar24 - *(uint *)(&DAT_100f71e8 + iVar22 * 4));
			} else {
				if ((int)lVar9 < 0x32) {
					if ((iVar22 == 1) || (iVar22 == 3)) {
						PlaceHallExt(iVar25 + -1, iVar24);
					} else {
						PlaceHallExt(iVar25, iVar24 + -1);
					}
				}
				if ((int)lVar10 < 0x32) {
					if ((iVar22 == 1) || (iVar22 == 3)) {
						PlaceHallExt(iVar25 + 1, iVar24);
					} else {
						PlaceHallExt(iVar25, iVar24 + 1);
					}
				}
			}
			*pcVar27 = ',';
			bVar6 = false;
		} else {
			if ((!bVar6) && (*pcVar27 == '#')) {
				CreateDoorType(iVar25, iVar24);
			}
			if (*pcVar27 != ',') {
				bVar6 = true;
			}
		}
		lVar11 = abs((param_3 - (ulonglong)uVar2) - param_1);
		lVar12 = abs((param_4 - (ulonglong)uVar3) - param_2);
		iVar23 = (int)lVar12;
		iVar22 = (int)lVar11;
		if (iVar23 < iVar22) {
			iVar21 = iVar22 << 1;
			if (0x1e < iVar21) {
				iVar21 = 0x1e;
			}
			lVar11 = random(0, 100, uVar15, uVar16, (char)lVar17, (char)lVar18, (char)lVar19, (char)lVar20,
			    in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b);
			if ((int)lVar11 < iVar21) {
				if ((iVar25 < iVar5) && (iVar25 < 0x28)) {
					lVar26 = 2;
				} else {
					lVar26 = 4;
				}
			}
		} else {
			iVar21 = iVar23 * 5;
			if (0x50 < iVar21) {
				iVar21 = 0x50;
			}
			lVar11 = random(0, 100, uVar15, uVar16, (char)lVar17, (char)lVar18, (char)lVar19, (char)lVar20,
			    in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b);
			if ((int)lVar11 < iVar21) {
				if ((iVar24 < iVar4) && (iVar24 < 0x28)) {
					lVar26 = 3;
				} else {
					lVar26 = 1;
				}
			}
		}
		if (((iVar23 < 10) && (iVar25 == iVar5)) && (((int)lVar26 == 2 || ((int)lVar26 == 4)))) {
			if ((iVar24 < iVar4) && (iVar24 < 0x28)) {
				lVar26 = 3;
			} else {
				lVar26 = 1;
			}
		}
		if (((iVar22 < 10) && (iVar24 == iVar4)) && (((int)lVar26 == 1 || ((int)lVar26 == 3)))) {
			if ((iVar25 < iVar5) && (iVar25 < 0x28)) {
				lVar26 = 2;
			} else {
				lVar26 = 4;
			}
		}
		if (((iVar23 == 1) && (1 < iVar22)) && (((int)lVar26 == 1 || ((int)lVar26 == 3)))) {
			if ((iVar25 < iVar5) && (iVar25 < 0x28)) {
				lVar26 = 2;
			} else {
				lVar26 = 4;
			}
		}
		if (((iVar22 == 1) && (1 < iVar23)) && (((int)lVar26 == 2 || ((int)lVar26 == 4)))) {
			if ((iVar24 < iVar4) && (iVar25 < 0x28)) {
				lVar26 = 3;
			} else {
				lVar26 = 1;
			}
		}
		if (((iVar22 == 0) && (*pcVar27 != ' ')) && (((int)lVar26 == 2 || ((int)lVar26 == 4)))) {
			if ((iVar13 < iVar5) && (iVar25 < 0x28)) {
				lVar26 = 3;
			} else {
				lVar26 = 1;
			}
		}
		if (((iVar23 == 0) && (*pcVar27 != ' ')) && (((int)lVar26 == 1 || ((int)lVar26 == 3)))) {
			if ((iVar14 < iVar4) && (iVar24 < 0x28)) {
				lVar26 = 2;
			} else {
				lVar26 = 4;
			}
		}
		if ((iVar25 == iVar5) && (iVar24 == iVar4)) {
			bVar7 = true;
		}
	}
	return;
}

void DoPatternCheck(int param_1, int param_2)

{
	char cVar1;
	undefined *puVar2;
	int iVar3;
	undefined4 *puVar4;
	undefined4 *puVar5;
	undefined *puVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	puVar2 = PTR_DAT_100f1ca0;
	puVar5 = (undefined4 *)&DAT_100f79f8;
	puVar6 = PTR_DAT_100f1804 + param_1 * 0x28 + param_2;
	while (puVar5[4] != 0xff) {
		iVar8 = param_1 + -1;
		iVar9 = param_2 + -1;
		iVar3 = 0xfe;
		iVar7 = 0;
		puVar4 = puVar5;
		while ((iVar7 < 9 && (iVar3 == 0xfe))) {
			iVar3 = 0xff;
			if ((iVar7 == 3) || (iVar7 == 6)) {
				iVar9 = iVar9 + 1;
				iVar8 = param_1 + -1;
			}
			if ((((iVar8 < 0) || (0x27 < iVar8)) || (iVar9 < 0)) || (0x27 < iVar9)) {
				iVar3 = 0xfe;
			} else {
				switch (*puVar4) {
				case 0:
					iVar3 = 0xfe;
					break;
				case 1:
					if (puVar2[iVar8 * 0x28 + iVar9] == '#') {
						iVar3 = 0xfe;
					}
					break;
				case 2:
					if (puVar2[iVar8 * 0x28 + iVar9] == '.') {
						iVar3 = 0xfe;
					}
					break;
				case 3:
					if (puVar2[iVar8 * 0x28 + iVar9] == 'D') {
						iVar3 = 0xfe;
					}
					break;
				case 4:
					if (puVar2[iVar8 * 0x28 + iVar9] == ' ') {
						iVar3 = 0xfe;
					}
					break;
				case 5:
					if ((puVar2[iVar8 * 0x28 + iVar9] == 'D') || (puVar2[iVar8 * 0x28 + iVar9] == '.')) {
						iVar3 = 0xfe;
					}
					break;
				case 6:
					if ((puVar2[iVar8 * 0x28 + iVar9] == 'D') || (puVar2[iVar8 * 0x28 + iVar9] == '#')) {
						iVar3 = 0xfe;
					}
					break;
				case 7:
					if ((puVar2[iVar8 * 0x28 + iVar9] == ' ') || (puVar2[iVar8 * 0x28 + iVar9] == '.')) {
						iVar3 = 0xfe;
					}
					break;
				case 8:
					cVar1 = puVar2[iVar8 * 0x28 + iVar9];
					if (((cVar1 == 'D') || (cVar1 == '#')) || (cVar1 == '.')) {
						iVar3 = 0xfe;
					}
				}
			}
			iVar8 = iVar8 + 1;
			puVar4 = puVar4 + 1;
			iVar7 = iVar7 + 1;
		}
		if (iVar3 == 0xfe) {
			*puVar6 = (char)puVar5[9];
		}
		puVar5 = puVar5 + 10;
	}
	return;
}

void L2TileFix(void)

{
	char *pcVar1;
	char *pcVar2;
	char *pcVar3;
	int iVar4;
	longlong lVar5;

	iVar4 = 0;
	pcVar3 = PTR_DAT_100f1804;
	do {
		lVar5 = 0x14;
		pcVar2 = pcVar3;
		do {
			if ((*pcVar2 == '\x01') && (pcVar2[1] == '\x03')) {
				pcVar2[1] = '\x01';
			}
			if ((*pcVar2 == '\x03') && (pcVar2[1] == '\x01')) {
				pcVar2[1] = '\x03';
			}
			if ((*pcVar2 == '\x03') && (pcVar2[0x28] == '\a')) {
				pcVar2[0x28] = '\x03';
			}
			if ((*pcVar2 == '\x02') && (pcVar2[0x28] == '\x03')) {
				pcVar2[0x28] = '\x02';
			}
			if ((*pcVar2 == '\v') && (pcVar2[0x28] == '\x0e')) {
				pcVar2[0x28] = '\x10';
			}
			pcVar1 = pcVar2 + 0x28;
			if ((*pcVar1 == '\x01') && (pcVar2[0x29] == '\x03')) {
				pcVar2[0x29] = '\x01';
			}
			if ((*pcVar1 == '\x03') && (pcVar2[0x29] == '\x01')) {
				pcVar2[0x29] = '\x03';
			}
			if ((*pcVar1 == '\x03') && (pcVar2[0x50] == '\a')) {
				pcVar2[0x50] = '\x03';
			}
			if ((*pcVar1 == '\x02') && (pcVar2[0x50] == '\x03')) {
				pcVar2[0x50] = '\x02';
			}
			if ((*pcVar1 == '\v') && (pcVar2[0x50] == '\x0e')) {
				pcVar2[0x50] = '\x10';
			}
			pcVar2 = pcVar2 + 0x50;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		pcVar3 = pcVar3 + 1;
	} while (iVar4 < 0x28);
	return;
}

undefined8 DL2_Cont(int param_1, int param_2, int param_3, int param_4)

{
	if ((((param_1 != 0) && (param_3 != 0)) && (param_2 != 0)) && (param_4 != 0)) {
		return 0;
	}
	if (((param_1 != 0) && (param_3 != 0)) && ((param_2 != 0 || (param_4 != 0)))) {
		return 1;
	}
	if (((param_2 != 0) && (param_4 != 0)) && ((param_1 != 0 || (param_3 != 0)))) {
		return 1;
	}
	return 0;
}

longlong DL2_NumNoChar(void)

{
	longlong lVar1;
	char *pcVar2;
	char *pcVar3;
	int iVar4;
	longlong lVar5;

	lVar1 = 0;
	iVar4 = 0;
	pcVar3 = PTR_DAT_100f1ca0;
	do {
		lVar5 = 4;
		pcVar2 = pcVar3;
		do {
			if (*pcVar2 == ' ') {
				lVar1 = lVar1 + 1;
			}
			if (pcVar2[0x28] == ' ') {
				lVar1 = lVar1 + 1;
			}
			if (pcVar2[0x50] == ' ') {
				lVar1 = lVar1 + 1;
			}
			if (pcVar2[0x78] == ' ') {
				lVar1 = lVar1 + 1;
			}
			if (pcVar2[0xa0] == ' ') {
				lVar1 = lVar1 + 1;
			}
			if (pcVar2[200] == ' ') {
				lVar1 = lVar1 + 1;
			}
			if (pcVar2[0xf0] == ' ') {
				lVar1 = lVar1 + 1;
			}
			if (pcVar2[0x118] == ' ') {
				lVar1 = lVar1 + 1;
			}
			if (pcVar2[0x140] == ' ') {
				lVar1 = lVar1 + 1;
			}
			if (pcVar2[0x168] == ' ') {
				lVar1 = lVar1 + 1;
			}
			pcVar2 = pcVar2 + 400;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		pcVar3 = pcVar3 + 1;
	} while (iVar4 < 0x28);
	return lVar1;
}

void DL2_DrawRoom(int param_1, int param_2, int param_3, int param_4)

{
	ulonglong uVar1;
	uint uVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	int iVar6;
	undefined *puVar7;

	puVar3 = PTR_DAT_100f1ca0;
	puVar7 = PTR_DAT_100f1ca0 + param_2;
	iVar6 = param_2;
	puVar4 = puVar7;
	while (iVar6 <= param_4) {
		puVar5 = puVar4 + param_1 * 0x28;
		uVar2 = (param_3 + 1) - param_1;
		if (param_1 <= param_3) {
			uVar1 = (ulonglong)(uVar2 >> 3);
			if (uVar2 >> 3 != 0) {
				do {
					*puVar5 = 0x2e;
					puVar5[0x28] = 0x2e;
					puVar5[0x50] = 0x2e;
					puVar5[0x78] = 0x2e;
					puVar5[0xa0] = 0x2e;
					puVar5[200] = 0x2e;
					puVar5[0xf0] = 0x2e;
					puVar5[0x118] = 0x2e;
					puVar5 = puVar5 + 0x140;
					uVar1 = uVar1 - 1;
				} while (uVar1 != 0);
				uVar2 = uVar2 & 7;
				if (uVar2 == 0)
					goto LAB_1002e524;
			}
			do {
				*puVar5 = 0x2e;
				puVar5 = puVar5 + 0x28;
				uVar2 = uVar2 - 1;
			} while (uVar2 != 0);
		}
	LAB_1002e524:
		puVar4 = puVar4 + 1;
		iVar6 = iVar6 + 1;
	}
	iVar6 = param_1 * 0x28;
	puVar4 = puVar3 + iVar6 + param_2;
	puVar5 = puVar3 + param_3 * 0x28 + param_2;
	uVar2 = (param_4 + 1) - param_2;
	if (param_2 <= param_4) {
		uVar1 = (ulonglong)(uVar2 >> 3);
		if (uVar2 >> 3 != 0) {
			do {
				*puVar4 = 0x23;
				*puVar5 = 0x23;
				puVar4[1] = 0x23;
				puVar5[1] = 0x23;
				puVar4[2] = 0x23;
				puVar5[2] = 0x23;
				puVar4[3] = 0x23;
				puVar5[3] = 0x23;
				puVar4[4] = 0x23;
				puVar5[4] = 0x23;
				puVar4[5] = 0x23;
				puVar5[5] = 0x23;
				puVar4[6] = 0x23;
				puVar5[6] = 0x23;
				puVar4[7] = 0x23;
				puVar4 = puVar4 + 8;
				puVar5[7] = 0x23;
				puVar5 = puVar5 + 8;
				uVar1 = uVar1 - 1;
			} while (uVar1 != 0);
			uVar2 = uVar2 & 7;
			if (uVar2 == 0)
				goto LAB_1002e5d8;
		}
		do {
			*puVar4 = 0x23;
			puVar4 = puVar4 + 1;
			*puVar5 = 0x23;
			puVar5 = puVar5 + 1;
			uVar2 = uVar2 - 1;
		} while (uVar2 != 0);
	}
LAB_1002e5d8:
	puVar7 = puVar7 + iVar6;
	puVar3 = puVar3 + param_4 + iVar6;
	uVar2 = (param_3 + 1) - param_1;
	if (param_1 <= param_3) {
		uVar1 = (ulonglong)(uVar2 >> 3);
		if (uVar2 >> 3 != 0) {
			do {
				*puVar7 = 0x23;
				*puVar3 = 0x23;
				puVar7[0x28] = 0x23;
				puVar3[0x28] = 0x23;
				puVar7[0x50] = 0x23;
				puVar3[0x50] = 0x23;
				puVar7[0x78] = 0x23;
				puVar3[0x78] = 0x23;
				puVar7[0xa0] = 0x23;
				puVar3[0xa0] = 0x23;
				puVar7[200] = 0x23;
				puVar3[200] = 0x23;
				puVar7[0xf0] = 0x23;
				puVar3[0xf0] = 0x23;
				puVar7[0x118] = 0x23;
				puVar7 = puVar7 + 0x140;
				puVar3[0x118] = 0x23;
				puVar3 = puVar3 + 0x140;
				uVar1 = uVar1 - 1;
			} while (uVar1 != 0);
			uVar2 = uVar2 & 7;
			if (uVar2 == 0) {
				return;
			}
		}
		do {
			*puVar7 = 0x23;
			puVar7 = puVar7 + 0x28;
			*puVar3 = 0x23;
			puVar3 = puVar3 + 0x28;
			uVar2 = uVar2 - 1;
		} while (uVar2 != 0);
	}
	return;
}

void DL2_KnockWalls(int param_1, int param_2, int param_3, int param_4)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;

	puVar3 = PTR_DAT_100f1ca0;
	iVar2 = param_1 + 1;
	iVar1 = param_3 - iVar2;
	puVar4 = PTR_DAT_100f1ca0 + param_2 + iVar2 * 0x28;
	puVar5 = PTR_DAT_100f1ca0 + param_4 + iVar2 * 0x28;
	if (iVar2 < param_3) {
		do {
			if ((puVar4[-1] == '.') && (puVar4[1] == '.')) {
				*puVar4 = 0x2e;
			}
			if ((puVar5[-1] == '.') && (puVar5[1] == '.')) {
				*puVar5 = 0x2e;
			}
			if (puVar4[-1] == 'D') {
				puVar4[-1] = 0x2e;
			}
			if (puVar5[1] == 'D') {
				puVar5[1] = 0x2e;
			}
			puVar4 = puVar4 + 0x28;
			puVar5 = puVar5 + 0x28;
			iVar1 = iVar1 + -1;
		} while (iVar1 != 0);
	}
	param_2 = param_2 + 1;
	puVar4 = puVar3 + param_1 * 0x28 + param_2;
	iVar2 = param_4 - param_2;
	puVar3 = puVar3 + param_3 * 0x28 + param_2;
	if (param_4 <= param_2) {
		return;
	}
	do {
		if ((puVar4[-0x28] == '.') && (puVar4[0x28] == '.')) {
			*puVar4 = 0x2e;
		}
		if ((puVar3[-0x28] == '.') && (puVar3[0x28] == '.')) {
			*puVar3 = 0x2e;
		}
		if (puVar4[-0x28] == 'D') {
			puVar4[-0x28] = 0x2e;
		}
		if (puVar3[0x28] == 'D') {
			puVar3[0x28] = 0x2e;
		}
		puVar4 = puVar4 + 1;
		puVar3 = puVar3 + 1;
		iVar2 = iVar2 + -1;
	} while (iVar2 != 0);
	return;
}

ulonglong DL2_FillVoids(undefined param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	longlong lVar2;
	char *pcVar6;
	undefined8 uVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar7;
	int iVar8;
	int iVar10;
	longlong lVar9;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	int iVar15;
	longlong lVar16;
	int iVar17;
	longlong lVar18;
	int iVar19;
	int iVar20;
	longlong lVar21;
	int iVar22;
	longlong lVar23;
	longlong lVar24;
	ulonglong uVar25;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	puVar1 = PTR_DAT_100f1ca0;
	lVar14 = (longlong)param_8;
	lVar13 = (longlong)param_7;
	lVar12 = (longlong)param_6;
	lVar11 = (longlong)param_5;
	lVar9 = (longlong)param_4;
	lVar5 = (longlong)param_3;
	uVar25 = ZEXT48(PTR_DAT_100f1ca0);
	iVar15 = 0;
	while ((lVar4 = DL2_NumNoChar(), 700 < (int)lVar4 && (iVar15 < 100))) {
		lVar4 = random(0, 0x26, (char)lVar5, (char)lVar9, (char)lVar11, (char)lVar12, (char)lVar13,
		    (char)lVar14, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
		lVar24 = lVar4 + 1;
		lVar2 = random(0, 0x26, (char)lVar5, (char)lVar9, (char)lVar11, (char)lVar12, (char)lVar13,
		    (char)lVar14, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
		lVar23 = lVar2 + 1;
		pcVar6 = puVar1 + (int)lVar24 * 0x28 + (int)lVar23;
		if (*pcVar6 == '#') {
			lVar16 = 0;
			iVar17 = 0;
			lVar18 = 0;
			iVar19 = 0;
			if ((pcVar6[-0x28] == ' ') && (pcVar6[0x28] == '.')) {
				if (((pcVar6[0x27] == '.') && (pcVar6[0x29] == '.')) && ((pcVar6[-0x29] == ' ' && (pcVar6[-0x27] == ' ')))) {
					lVar16 = 1;
					iVar17 = 1;
					iVar19 = 1;
				}
			} else {
				if ((pcVar6[0x28] == ' ') && (pcVar6[-0x28] == '.')) {
					if ((((pcVar6[-0x29] == '.') && (pcVar6[-0x27] == '.')) && (pcVar6[0x27] == ' ')) && (pcVar6[0x29] == ' ')) {
						lVar16 = 1;
						iVar17 = 1;
						lVar18 = 1;
					}
				} else {
					if ((pcVar6[-1] == ' ') && (pcVar6[1] == '.')) {
						if (((pcVar6[-0x27] == '.') && (pcVar6[0x29] == '.')) && ((pcVar6[-0x29] == ' ' && (pcVar6[0x27] == ' ')))) {
							lVar18 = 1;
							iVar19 = 1;
							iVar17 = 1;
						}
					} else {
						if ((pcVar6[1] == ' ') && ((((pcVar6[-1] == '.' && (pcVar6[-0x29] == '.')) && (pcVar6[0x27] == '.')) && ((pcVar6[-0x27] == ' ' && (pcVar6[0x29] == ' ')))))) {
							lVar18 = 1;
							iVar19 = 1;
							lVar16 = 1;
						}
					}
				}
			}
			iVar8 = (int)lVar18;
			iVar10 = (int)lVar16;
			lVar5 = lVar18;
			lVar9 = lVar16;
			uVar3 = DL2_Cont(iVar19, iVar17, iVar8, iVar10);
			if ((int)uVar3 != 0) {
				lVar21 = lVar24;
				if (iVar19 != 0) {
					lVar21 = lVar4;
				}
				if (iVar8 != 0) {
					lVar24 = lVar4 + 2;
				}
				lVar4 = lVar23;
				if (iVar17 != 0) {
					lVar4 = lVar2;
				}
				if (iVar10 != 0) {
					lVar23 = lVar2 + 2;
				}
				if (iVar19 == 0) {
					lVar9 = uVar25 + lVar24 * 0x28;
					lVar2 = lVar9 + lVar4;
					lVar7 = lVar9 + lVar23;
					while (true) {
						iVar8 = (int)lVar23;
						iVar19 = (int)lVar4;
						if ((iVar17 == 0) && ((int)lVar16 == 0))
							break;
						if (iVar19 == 0) {
							iVar17 = 0;
						}
						if (iVar8 == 0x27) {
							lVar16 = 0;
						}
						if (0xd < iVar8 - iVar19) {
							iVar17 = 0;
							lVar16 = 0;
						}
						if (iVar17 != 0) {
							lVar2 = lVar2 + -1;
							lVar4 = lVar4 + -1;
						}
						if ((int)lVar16 != 0) {
							lVar7 = lVar7 + 1;
							lVar23 = lVar23 + 1;
						}
						if (*(char *)lVar2 != ' ') {
							iVar17 = 0;
						}
						if (*(char *)lVar7 != ' ') {
							lVar16 = 0;
						}
					}
					iVar17 = (int)(lVar4 + 2);
					if (5 < (iVar8 + -2) - iVar17) {
						while (iVar10 = (int)lVar21, (int)lVar18 != 0) {
							if ((int)lVar24 == 0x27) {
								lVar18 = 0;
							}
							if (0xb < (int)lVar24 - iVar10) {
								lVar18 = 0;
							}
							lVar2 = (lVar23 + -1) - (lVar4 + 2);
							lVar5 = lVar4 + lVar9 + 2;
							if (iVar17 <= iVar8 + -2) {
								do {
									if (*(char *)lVar5 != ' ') {
										lVar18 = 0;
									}
									lVar5 = lVar5 + 1;
									lVar2 = lVar2 + -1;
								} while (lVar2 != 0);
							}
							if ((int)lVar18 != 0) {
								lVar9 = lVar9 + 0x28;
								lVar24 = lVar24 + 1;
							}
						}
						lVar24 = lVar24 + -2;
						iVar17 = (int)lVar24;
						if (5 < iVar17 - iVar10) {
							DL2_DrawRoom(iVar10, iVar19 + 2, iVar17, iVar8 + -2);
							lVar9 = lVar23 + -2;
							DL2_KnockWalls(iVar10, iVar19 + 2, iVar17, (int)lVar9);
							lVar5 = lVar24;
						}
					}
				} else {
					if (iVar8 == 0) {
						lVar9 = uVar25 + lVar21 * 0x28;
						lVar2 = lVar9 + lVar4;
						lVar18 = lVar9 + lVar23;
						while (true) {
							iVar10 = (int)lVar23;
							iVar8 = (int)lVar4;
							if ((iVar17 == 0) && ((int)lVar16 == 0))
								break;
							if (iVar8 == 0) {
								iVar17 = 0;
							}
							if (iVar10 == 0x27) {
								lVar16 = 0;
							}
							if (0xd < iVar10 - iVar8) {
								iVar17 = 0;
								lVar16 = 0;
							}
							if (iVar17 != 0) {
								lVar2 = lVar2 + -1;
								lVar4 = lVar4 + -1;
							}
							if ((int)lVar16 != 0) {
								lVar18 = lVar18 + 1;
								lVar23 = lVar23 + 1;
							}
							if (*(char *)lVar2 != ' ') {
								iVar17 = 0;
							}
							if (*(char *)lVar18 != ' ') {
								lVar16 = 0;
							}
						}
						iVar17 = (int)(lVar4 + 2);
						if (5 < (iVar10 + -2) - iVar17) {
							while (true) {
								iVar20 = (int)lVar24;
								iVar22 = (int)lVar21;
								if (iVar19 == 0)
									break;
								if (iVar22 == 0) {
									iVar19 = 0;
								}
								if (0xb < iVar20 - iVar22) {
									iVar19 = 0;
								}
								lVar2 = (lVar23 + -1) - (lVar4 + 2);
								lVar5 = lVar4 + lVar9 + 2;
								if (iVar17 <= iVar10 + -2) {
									do {
										if (*(char *)lVar5 != ' ') {
											iVar19 = 0;
										}
										lVar5 = lVar5 + 1;
										lVar2 = lVar2 + -1;
									} while (lVar2 != 0);
								}
								if (iVar19 != 0) {
									lVar9 = lVar9 + -0x28;
									lVar21 = lVar21 + -1;
								}
							}
							iVar22 = iVar22 + 2;
							if (5 < iVar20 - iVar22) {
								DL2_DrawRoom(iVar22, iVar8 + 2, iVar20, iVar10 + -2);
								lVar9 = lVar23 + -2;
								DL2_KnockWalls(iVar22, iVar8 + 2, iVar20, (int)lVar9);
								lVar5 = lVar24;
							}
						}
					} else {
						if (iVar17 == 0) {
							lVar11 = uVar25 + lVar23;
							lVar5 = lVar11 + lVar21 * 0x28;
							lVar2 = lVar11 + lVar24 * 0x28;
							while (true) {
								iVar8 = (int)lVar24;
								iVar17 = (int)lVar21;
								if ((iVar19 == 0) && ((int)lVar18 == 0))
									break;
								if (iVar17 == 0) {
									iVar19 = 0;
								}
								if (iVar8 == 0x27) {
									lVar18 = 0;
								}
								if (0xd < iVar8 - iVar17) {
									iVar19 = 0;
									lVar18 = 0;
								}
								if (iVar19 != 0) {
									lVar5 = lVar5 + -0x28;
									lVar21 = lVar21 + -1;
								}
								if ((int)lVar18 != 0) {
									lVar2 = lVar2 + 0x28;
									lVar24 = lVar24 + 1;
								}
								if (*(char *)lVar5 != ' ') {
									iVar19 = 0;
								}
								if (*(char *)lVar2 != ' ') {
									lVar18 = 0;
								}
							}
							lVar5 = lVar21 + 2;
							if (5 < (iVar8 + -2) - (int)lVar5) {
								while (iVar19 = (int)lVar4, (int)lVar16 != 0) {
									if ((int)lVar23 == 0x27) {
										lVar16 = 0;
									}
									if (0xb < (int)lVar23 - iVar19) {
										lVar16 = 0;
									}
									lVar2 = (lVar24 + -1) - lVar5;
									lVar9 = lVar11 + lVar5 * 0x28;
									if ((int)lVar5 <= iVar8 + -2) {
										do {
											if (*(char *)lVar9 != ' ') {
												lVar16 = 0;
											}
											lVar9 = lVar9 + 0x28;
											lVar2 = lVar2 + -1;
										} while (lVar2 != 0);
									}
									if ((int)lVar16 != 0) {
										lVar11 = lVar11 + 1;
										lVar23 = lVar23 + 1;
									}
								}
								lVar23 = lVar23 + -2;
								iVar10 = (int)lVar23;
								if (5 < iVar10 - iVar19) {
									DL2_DrawRoom(iVar17 + 2, iVar19, iVar8 + -2, iVar10);
									lVar5 = lVar24 + -2;
									DL2_KnockWalls(iVar17 + 2, iVar19, (int)lVar5, iVar10);
									lVar9 = lVar23;
								}
							}
						} else {
							if (iVar10 == 0) {
								lVar11 = uVar25 + lVar4;
								lVar5 = lVar11 + lVar21 * 0x28;
								lVar2 = lVar11 + lVar24 * 0x28;
								while (true) {
									iVar10 = (int)lVar24;
									iVar8 = (int)lVar21;
									if ((iVar19 == 0) && ((int)lVar18 == 0))
										break;
									if (iVar8 == 0) {
										iVar19 = 0;
									}
									if (iVar10 == 0x27) {
										lVar18 = 0;
									}
									if (0xd < iVar10 - iVar8) {
										iVar19 = 0;
										lVar18 = 0;
									}
									if (iVar19 != 0) {
										lVar5 = lVar5 + -0x28;
										lVar21 = lVar21 + -1;
									}
									if ((int)lVar18 != 0) {
										lVar2 = lVar2 + 0x28;
										lVar24 = lVar24 + 1;
									}
									if (*(char *)lVar5 != ' ') {
										iVar19 = 0;
									}
									if (*(char *)lVar2 != ' ') {
										lVar18 = 0;
									}
								}
								lVar5 = lVar21 + 2;
								if (5 < (iVar10 + -2) - (int)lVar5) {
									while (true) {
										iVar19 = (int)lVar23;
										iVar20 = (int)lVar4;
										if (iVar17 == 0)
											break;
										if (iVar20 == 0) {
											iVar17 = 0;
										}
										if (0xb < iVar19 - iVar20) {
											iVar17 = 0;
										}
										lVar2 = (lVar24 + -1) - lVar5;
										lVar9 = lVar11 + lVar5 * 0x28;
										if ((int)lVar5 <= iVar10 + -2) {
											do {
												if (*(char *)lVar9 != ' ') {
													iVar17 = 0;
												}
												lVar9 = lVar9 + 0x28;
												lVar2 = lVar2 + -1;
											} while (lVar2 != 0);
										}
										if (iVar17 != 0) {
											lVar11 = lVar11 + -1;
											lVar4 = lVar4 + -1;
										}
									}
									iVar20 = iVar20 + 2;
									if (5 < iVar19 - iVar20) {
										DL2_DrawRoom(iVar8 + 2, iVar20, iVar10 + -2, iVar19);
										lVar5 = lVar24 + -2;
										DL2_KnockWalls(iVar8 + 2, iVar20, (int)lVar5, iVar19);
										lVar9 = lVar23;
									}
								}
							}
						}
					}
				}
			}
			iVar15 = iVar15 + 1;
		}
	}
	lVar5 = DL2_NumNoChar();
	return (ulonglong)((int)lVar5 < 0x2bd);
}

undefined8
CreateDungeon(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	byte bVar1;
	undefined *puVar2;
	ulonglong uVar3;
	longlong lVar4;
	undefined4 uVar6;
	char *pcVar7;
	ulonglong uVar5;
	ulonglong uVar8;
	ulonglong uVar9;
	undefined8 uVar10;
	undefined8 uVar11;
	longlong lVar12;
	int iVar13;
	int iVar14;
	longlong lVar15;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffcc;
	uint local_20;
	uint local_1c;
	uint local_18;
	uint local_14;
	uint local_10[4];

	puVar2 = PTR_DAT_100f1c94;
	uVar3 = ZEXT48(&toc);
	uVar6 = 0;
	lVar12 = 0;
	uVar11 = 0;
	bVar1 = *PTR_DAT_100f17ec;
	if (bVar1 == 7) {
		if (PTR_DAT_100f19cc[0xc2] != '\0') {
			uVar11 = 1;
			uVar6 = 0xf;
			lVar12 = 0xf;
		}
	} else {
		if (bVar1 < 7) {
			if (bVar1 == 5) {
				if (PTR_DAT_100f19cc[0xda] != '\0') {
					uVar11 = 1;
					lVar12 = 0x14;
					uVar6 = 0xe;
				}
			} else {
				if ((4 < bVar1) && (PTR_DAT_100f19cc[0x152] != '\0')) {
					uVar11 = 1;
					uVar6 = 10;
					lVar12 = 10;
				}
			}
		}
	}
	uVar8 = 0x27;
	uVar9 = 0;
	uVar10 = 0;
	CreateRoom(2, 2, 0x27, 0x27, 0, 0, (int)uVar11, lVar12, in_stack_ffffffa8, in_stack_ffffffaf,
	    in_stack_ffffffcc, uVar6);
	while (true) {
		if (*(int *)puVar2 == 0)
			break;
		GetHall(local_10, &local_14, &local_18, &local_1c, &local_20, (char)uVar10, (char)uVar11,
		    (char)lVar12, in_stack_ffffffa8);
		uVar8 = (ulonglong)local_1c;
		uVar9 = (ulonglong)local_20;
		ConnectHall((ulonglong)local_10[0], (ulonglong)local_14, (ulonglong)local_18, uVar8, local_20,
		    (char)uVar10, (char)uVar11, (char)lVar12, in_stack_ffffffa8);
	}
	lVar4 = 0;
	uVar3 = (ulonglong) * (uint *)((int)uVar3 + -0x7330);
	do {
		lVar15 = 0x29;
		uVar5 = uVar3;
		do {
			pcVar7 = (char *)uVar5;
			if (*pcVar7 == 'C') {
				*pcVar7 = '#';
			}
			if (*pcVar7 == 'B') {
				*pcVar7 = '#';
			}
			if (*pcVar7 == 'E') {
				*pcVar7 = '#';
			}
			if (*pcVar7 == 'A') {
				*pcVar7 = '#';
			}
			if (*pcVar7 == ',') {
				*pcVar7 = '.';
				if (pcVar7[-0x29] == ' ') {
					pcVar7[-0x29] = '#';
				}
				if (pcVar7[-0x28] == ' ') {
					pcVar7[-0x28] = '#';
				}
				if (pcVar7[-0x27] == ' ') {
					pcVar7[-0x27] = '#';
				}
				if (pcVar7[0x27] == ' ') {
					pcVar7[0x27] = '#';
				}
				if (pcVar7[0x28] == ' ') {
					pcVar7[0x28] = '#';
				}
				if (pcVar7[0x29] == ' ') {
					pcVar7[0x29] = '#';
				}
				if (pcVar7[-1] == ' ') {
					pcVar7[-1] = '#';
				}
				if (pcVar7[1] == ' ') {
					pcVar7[1] = '#';
				}
			}
			uVar5 = uVar5 + 0x28;
			lVar15 = lVar15 + -1;
		} while (lVar15 != 0);
		lVar4 = lVar4 + 1;
		uVar3 = uVar3 + 1;
	} while ((int)lVar4 < 0x29);
	uVar3 = DL2_FillVoids((char)uVar3, (char)lVar4, (char)uVar5, (char)uVar8, (char)uVar9, (char)uVar10,
	    (char)uVar11, (char)lVar12, in_stack_ffffffa8);
	if ((int)uVar3 == 0) {
		uVar11 = 0;
	} else {
		iVar14 = 0;
		do {
			iVar13 = 0;
			do {
				DoPatternCheck(iVar13, iVar14);
				iVar13 = iVar13 + 1;
			} while (iVar13 < 0x28);
			iVar14 = iVar14 + 1;
		} while (iVar14 < 0x28);
		uVar11 = 1;
	}
	return uVar11;
}

void DRLG_L2Pass3(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	short sVar5;
	undefined **ppuVar6;
	ulonglong uVar7;
	ulonglong uVar8;
	short sVar10;
	longlong lVar9;
	short sVar11;
	longlong lVar12;
	short sVar17;
	int iVar14;
	int iVar15;
	int iVar16;
	longlong lVar13;
	int iVar19;
	longlong lVar18;
	int iVar20;
	longlong lVar21;
	longlong lVar22;
	undefined4 in_stack_ffffffb8;

	puVar4 = PTR_DAT_100f1a64;
	puVar3 = PTR_DAT_100f1a54;
	ppuVar6 = &toc;
	uVar7 = FUN_100b8f7c((ulonglong) * (uint *)PTR_DAT_100f1a64, param_2, param_3, param_4, param_5, param_6,
	    param_7, param_8, in_stack_ffffffb8);
	iVar2 = (int)uVar7;
	sVar10 = CONCAT11(*(undefined *)(iVar2 + 0x59), *(undefined *)(iVar2 + 0x58)) + 1;
	sVar11 = CONCAT11(*(undefined *)(iVar2 + 0x5b), *(undefined *)(iVar2 + 0x5a)) + 1;
	sVar17 = CONCAT11(*(undefined *)(iVar2 + 0x5d), *(undefined *)(iVar2 + 0x5c)) + 1;
	iVar20 = 0;
	sVar5 = CONCAT11(*(undefined *)(iVar2 + 0x5f), *(undefined *)(iVar2 + 0x5e)) + 1;
	iVar19 = 0;
	do {
		lVar21 = 0xe;
		iVar14 = 0;
		do {
			*(short *)(iVar19 + *(int *)puVar3 + iVar14) = sVar10;
			*(short *)(iVar19 + *(int *)puVar3 + iVar14 + 0xe0) = sVar11;
			*(short *)(iVar19 + *(int *)puVar3 + iVar14 + 2) = sVar17;
			iVar15 = iVar14 + 0x1c0;
			*(short *)(iVar19 + *(int *)puVar3 + iVar14 + 0xe2) = sVar5;
			*(short *)(iVar19 + *(int *)puVar3 + iVar15) = sVar10;
			*(short *)(iVar19 + *(int *)puVar3 + iVar15 + 0xe0) = sVar11;
			*(short *)(iVar19 + *(int *)puVar3 + iVar15 + 2) = sVar17;
			iVar16 = iVar14 + 0x380;
			*(short *)(iVar19 + *(int *)puVar3 + iVar15 + 0xe2) = sVar5;
			*(short *)(iVar19 + *(int *)puVar3 + iVar16) = sVar10;
			*(short *)(iVar19 + *(int *)puVar3 + iVar16 + 0xe0) = sVar11;
			*(short *)(iVar19 + *(int *)puVar3 + iVar16 + 2) = sVar17;
			iVar15 = iVar14 + 0x540;
			*(short *)(iVar19 + *(int *)puVar3 + iVar16 + 0xe2) = sVar5;
			*(short *)(iVar19 + *(int *)puVar3 + iVar15) = sVar10;
			*(short *)(iVar19 + *(int *)puVar3 + iVar15 + 0xe0) = sVar11;
			*(short *)(iVar19 + *(int *)puVar3 + iVar15 + 2) = sVar17;
			iVar14 = iVar14 + 0x700;
			*(short *)(iVar19 + *(int *)puVar3 + iVar15 + 0xe2) = sVar5;
			lVar21 = lVar21 + -1;
		} while (lVar21 != 0);
		iVar20 = iVar20 + 2;
		iVar19 = iVar19 + 4;
	} while (iVar20 < 0x70);
	uVar7 = ZEXT48(ppuVar6[-0x1df3]);
	lVar12 = 0;
	lVar21 = 0x20;
	do {
		lVar22 = 0x14;
		lVar9 = 0xe00;
		uVar8 = uVar7;
		do {
			puVar1 = (undefined *)(iVar2 + ((uint) * (byte *)uVar8 - 1) * 8);
			iVar20 = (int)lVar9;
			iVar19 = (int)lVar21;
			*(short *)(iVar19 + *(int *)puVar3 + iVar20) = CONCAT11(puVar1[1], *puVar1) + 1;
			*(short *)(iVar19 + *(int *)puVar3 + iVar20 + 0xe0) = CONCAT11(puVar1[3], puVar1[2]) + 1;
			*(short *)(iVar19 + *(int *)puVar3 + iVar20 + 2) = CONCAT11(puVar1[5], puVar1[4]) + 1;
			*(short *)(iVar19 + *(int *)puVar3 + iVar20 + 0xe2) = CONCAT11(puVar1[7], puVar1[6]) + 1;
			puVar1 = (undefined *)(iVar2 + ((uint)((byte *)uVar8)[0x28] - 1) * 8);
			iVar20 = (int)(lVar9 + 0x1c0);
			*(short *)(iVar19 + *(int *)puVar3 + iVar20) = CONCAT11(puVar1[1], *puVar1) + 1;
			*(short *)(iVar19 + *(int *)puVar3 + iVar20 + 0xe0) = CONCAT11(puVar1[3], puVar1[2]) + 1;
			*(short *)(iVar19 + *(int *)puVar3 + iVar20 + 2) = CONCAT11(puVar1[5], puVar1[4]) + 1;
			uVar8 = uVar8 + 0x50;
			lVar13 = (ulonglong) * (uint *)puVar3 + lVar9 + 0x1c0;
			lVar18 = (longlong)CONCAT11(puVar1[7], puVar1[6]) + 1;
			lVar9 = lVar9 + 0x380;
			*(undefined2 *)(iVar19 + (int)lVar13 + 0xe2) = (short)lVar18;
			lVar22 = lVar22 + -1;
		} while (lVar22 != 0);
		lVar12 = lVar12 + 1;
		uVar7 = uVar7 + 1;
		lVar21 = lVar21 + 4;
	} while ((int)lVar12 < 0x28);
	FUN_100b9100(*(int *)puVar4, (char)uVar8, (char)lVar9, (char)uVar7, (char)lVar21, (char)lVar12,
	    (char)lVar13, (char)lVar18, in_stack_ffffffb8);
	return;
}

void DRLG_L2TransFix(void)

{
	undefined *puVar1;
	char *pcVar2;
	int iVar3;
	char *pcVar4;
	int iVar5;
	int iVar6;
	undefined *puVar7;
	longlong lVar8;

	puVar1 = PTR_DAT_100f1a48;
	iVar6 = 0x10;
	iVar5 = 0;
	pcVar4 = PTR_DAT_100f1804;
	do {
		lVar8 = 0x28;
		iVar3 = 0x700;
		pcVar2 = pcVar4;
		do {
			if ((*pcVar2 == '\x0e') && (pcVar2[-1] == '\n')) {
				puVar7 = (undefined *)(iVar6 + *(int *)puVar1 + iVar3);
				puVar7[0x70] = *puVar7;
				puVar7 = (undefined *)(iVar6 + *(int *)puVar1 + iVar3);
				puVar7[0x71] = *puVar7;
			}
			if ((*pcVar2 == '\x0f') && (pcVar2[0x28] == '\v')) {
				puVar7 = (undefined *)(iVar6 + *(int *)puVar1 + iVar3);
				puVar7[1] = *puVar7;
				puVar7 = (undefined *)(iVar6 + *(int *)puVar1 + iVar3);
				puVar7[0x71] = *puVar7;
			}
			if (*pcVar2 == '\n') {
				puVar7 = (undefined *)(iVar6 + *(int *)puVar1 + iVar3);
				puVar7[0x70] = *puVar7;
				puVar7 = (undefined *)(iVar6 + *(int *)puVar1 + iVar3);
				puVar7[0x71] = *puVar7;
			}
			if (*pcVar2 == '\v') {
				puVar7 = (undefined *)(iVar6 + *(int *)puVar1 + iVar3);
				puVar7[1] = *puVar7;
				puVar7 = (undefined *)(iVar6 + *(int *)puVar1 + iVar3);
				puVar7[0x71] = *puVar7;
			}
			if (*pcVar2 == '\x10') {
				puVar7 = (undefined *)(iVar6 + *(int *)puVar1 + iVar3);
				puVar7[0x70] = *puVar7;
				puVar7 = (undefined *)(iVar6 + *(int *)puVar1 + iVar3);
				puVar7[1] = *puVar7;
				puVar7 = (undefined *)(iVar6 + *(int *)puVar1 + iVar3);
				puVar7[0x71] = *puVar7;
			}
			iVar3 = iVar3 + 0xe0;
			pcVar2 = pcVar2 + 0x28;
			lVar8 = lVar8 + -1;
		} while (lVar8 != 0);
		iVar5 = iVar5 + 1;
		pcVar4 = pcVar4 + 1;
		iVar6 = iVar6 + 2;
	} while (iVar5 < 0x28);
	return;
}

void L2DirtFix(void)

{
	char *pcVar1;
	char *pcVar2;
	char *pcVar3;
	int iVar4;
	longlong lVar5;

	iVar4 = 0;
	pcVar3 = PTR_DAT_100f1804;
	do {
		lVar5 = 0x14;
		pcVar2 = pcVar3;
		do {
			if ((*pcVar2 == '\r') && (pcVar2[0x28] != '\v')) {
				*pcVar2 = -0x6e;
			}
			if ((*pcVar2 == '\v') && (pcVar2[0x28] != '\v')) {
				*pcVar2 = -0x70;
			}
			if ((*pcVar2 == '\x0f') && (pcVar2[0x28] != '\v')) {
				*pcVar2 = -0x6c;
			}
			if ((*pcVar2 == '\n') && (pcVar2[1] != '\n')) {
				*pcVar2 = -0x71;
			}
			if ((*pcVar2 == '\r') && (pcVar2[1] != '\n')) {
				*pcVar2 = -0x6e;
			}
			if ((*pcVar2 == '\x0e') && (pcVar2[1] != '\x0f')) {
				*pcVar2 = -0x6d;
			}
			pcVar1 = pcVar2 + 0x28;
			if ((*pcVar1 == '\r') && (pcVar2[0x50] != '\v')) {
				*pcVar1 = -0x6e;
			}
			if ((*pcVar1 == '\v') && (pcVar2[0x50] != '\v')) {
				*pcVar1 = -0x70;
			}
			if ((*pcVar1 == '\x0f') && (pcVar2[0x50] != '\v')) {
				*pcVar1 = -0x6c;
			}
			if ((*pcVar1 == '\n') && (pcVar2[0x29] != '\n')) {
				*pcVar1 = -0x71;
			}
			if ((*pcVar1 == '\r') && (pcVar2[0x29] != '\n')) {
				*pcVar1 = -0x6e;
			}
			if ((*pcVar1 == '\x0e') && (pcVar2[0x29] != '\x0f')) {
				*pcVar1 = -0x6d;
			}
			pcVar2 = pcVar2 + 0x50;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		pcVar3 = pcVar3 + 1;
	} while (iVar4 < 0x28);
	return;
}

void L2LockoutFix(void)

{
	char *pcVar1;
	char cVar2;
	bool bVar3;
	byte *pbVar4;
	undefined *puVar5;
	byte *pbVar6;
	char *pcVar7;
	undefined *puVar8;
	char *pcVar9;
	undefined *puVar10;
	int iVar11;
	int iVar12;
	longlong lVar13;

	pbVar6 = PTR_DAT_100f1abc;
	puVar5 = PTR_DAT_100f1804;
	iVar11 = 0;
	pcVar9 = PTR_DAT_100f1804;
	do {
		lVar13 = 8;
		pcVar7 = pcVar9;
		do {
			if ((*pcVar7 == '\x04') && (pcVar7[-0x28] != '\x03')) {
				*pcVar7 = '\x01';
			}
			if ((*pcVar7 == '\x05') && (pcVar7[-1] != '\x03')) {
				*pcVar7 = '\x02';
			}
			pcVar1 = pcVar7 + 0x28;
			if ((*pcVar1 == '\x04') && (*pcVar7 != '\x03')) {
				*pcVar1 = '\x01';
			}
			if ((*pcVar1 == '\x05') && (pcVar7[0x27] != '\x03')) {
				*pcVar1 = '\x02';
			}
			pcVar1 = pcVar7 + 0x50;
			if ((*pcVar1 == '\x04') && (pcVar7[0x28] != '\x03')) {
				*pcVar1 = '\x01';
			}
			if ((*pcVar1 == '\x05') && (pcVar7[0x4f] != '\x03')) {
				*pcVar1 = '\x02';
			}
			pcVar1 = pcVar7 + 0x78;
			if ((*pcVar1 == '\x04') && (pcVar7[0x50] != '\x03')) {
				*pcVar1 = '\x01';
			}
			if ((*pcVar1 == '\x05') && (pcVar7[0x77] != '\x03')) {
				*pcVar1 = '\x02';
			}
			pcVar1 = pcVar7 + 0xa0;
			if ((*pcVar1 == '\x04') && (pcVar7[0x78] != '\x03')) {
				*pcVar1 = '\x01';
			}
			if ((*pcVar1 == '\x05') && (pcVar7[0x9f] != '\x03')) {
				*pcVar1 = '\x02';
			}
			pcVar7 = pcVar7 + 200;
			lVar13 = lVar13 + -1;
		} while (lVar13 != 0);
		iVar11 = iVar11 + 1;
		pcVar9 = pcVar9 + 1;
	} while (iVar11 < 0x28);
	lVar13 = 0x26;
	puVar10 = puVar5;
	puVar8 = pbVar6;
	do {
		puVar10 = puVar10 + 1;
		puVar8 = puVar8 + 1;
		iVar12 = 1;
		iVar11 = 0x28;
		while (true) {
			if (0x26 < iVar12)
				break;
			if ((puVar8[iVar11] & 0x80) == 0) {
				pcVar9 = puVar10 + iVar11;
				if ((((*pcVar9 == '\x02') || (*pcVar9 == '\x05')) && (pcVar9[-1] == '\x03')) && (pcVar9[1] == '\x03')) {
					bVar3 = false;
					while (((cVar2 = *pcVar9, cVar2 == '\x02' || (cVar2 == '\x05')) && ((pcVar9[-1] == '\x03' && (pcVar9[1] == '\x03'))))) {
						if (cVar2 == '\x05') {
							bVar3 = true;
						}
						pcVar9 = pcVar9 + 0x28;
						iVar12 = iVar12 + 1;
						iVar11 = iVar11 + 0x28;
					}
					if ((!bVar3) && ((puVar8[iVar11 + -0x28] & 0x80) == 0)) {
						puVar10[iVar11 + -0x28] = 5;
					}
				}
			}
			iVar12 = iVar12 + 1;
			iVar11 = iVar11 + 0x28;
		}
		lVar13 = lVar13 + -1;
	} while (lVar13 != 0);
	lVar13 = 0x26;
	do {
		pbVar6 = pbVar6 + 0x28;
		puVar5 = puVar5 + 0x28;
		iVar11 = 1;
		pbVar4 = pbVar6;
		while (true) {
			pbVar4 = pbVar4 + 1;
			if (0x26 < iVar11)
				break;
			if ((*pbVar4 & 0x80) == 0) {
				pcVar9 = puVar5 + iVar11;
				if ((((*pcVar9 == '\x01') || (*pcVar9 == '\x04')) && (pcVar9[-0x28] == '\x03')) && (pcVar9[0x28] == '\x03')) {
					bVar3 = false;
					while (((cVar2 = *pcVar9, cVar2 == '\x01' || (cVar2 == '\x04')) && ((pcVar9[-0x28] == '\x03' && (pcVar9[0x28] == '\x03'))))) {
						if (cVar2 == '\x04') {
							bVar3 = true;
						}
						pcVar9 = pcVar9 + 1;
						iVar11 = iVar11 + 1;
						pbVar4 = pbVar4 + 1;
					}
					if ((!bVar3) && ((pbVar6[iVar11 + -1] & 0x80) == 0)) {
						puVar5[iVar11 + -1] = 4;
					}
				}
			}
			iVar11 = iVar11 + 1;
		}
		lVar13 = lVar13 + -1;
	} while (lVar13 != 0);
	return;
}

void L2DoorFix(void)

{
	char *pcVar1;
	undefined *puVar2;
	char *pcVar3;
	int iVar4;
	longlong lVar5;

	iVar4 = 1;
	puVar2 = PTR_DAT_100f1804;
	do {
		pcVar3 = puVar2 + 0x29;
		lVar5 = 0xd;
		do {
			if ((*pcVar3 == '\x04') && (pcVar3[-1] == '\x03')) {
				*pcVar3 = '\a';
			}
			if ((*pcVar3 == '\x05') && (pcVar3[-0x28] == '\x03')) {
				*pcVar3 = '\t';
			}
			pcVar1 = pcVar3 + 0x28;
			if ((*pcVar1 == '\x04') && (pcVar3[0x27] == '\x03')) {
				*pcVar1 = '\a';
			}
			if ((*pcVar1 == '\x05') && (*pcVar3 == '\x03')) {
				*pcVar1 = '\t';
			}
			pcVar1 = pcVar3 + 0x50;
			if ((*pcVar1 == '\x04') && (pcVar3[0x4f] == '\x03')) {
				*pcVar1 = '\a';
			}
			if ((*pcVar1 == '\x05') && (pcVar3[0x28] == '\x03')) {
				*pcVar1 = '\t';
			}
			pcVar3 = pcVar3 + 0x78;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		puVar2 = puVar2 + 1;
	} while (iVar4 < 0x28);
	return;
}

void DRLG_L2(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, int param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	int iVar7;
	undefined8 uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar14;
	ulonglong uVar12;
	undefined *puVar13;
	undefined uVar17;
	ulonglong uVar15;
	undefined *puVar16;
	undefined uVar18;
	char cVar19;
	undefined4 uVar20;
	undefined uVar21;
	undefined4 uVar22;
	undefined uVar23;
	longlong lVar24;
	longlong lVar25;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;

	puVar6 = PTR_DAT_100f1cbc;
	puVar5 = PTR_DAT_100f1cb4;
	puVar4 = PTR_DAT_100f1c9c;
	puVar3 = PTR_DAT_100f1aac;
	puVar2 = PTR_DAT_100f1820;
	puVar16 = PTR_DAT_100f181c;
	puVar13 = PTR_DAT_100f17ec;
	lVar24 = (longlong)param_8;
	uVar12 = ZEXT48(&toc);
	lVar25 = 0;
	while (true) {
		uVar23 = (undefined)lVar24;
		uVar21 = (undefined)param_7;
		uVar18 = (undefined)param_6;
		uVar17 = (undefined)param_5;
		uVar14 = (undefined)param_4;
		uVar10 = (undefined)param_3;
		iVar7 = (int)uVar12;
		if ((int)lVar25 != 0)
			break;
		*(undefined4 *)puVar4 = 0;
		uVar10 = InitDungeon();
		uVar10 = DRLG_InitTrans(uVar10, (char)param_2, (char)param_3, (char)param_4, (char)param_5,
		    (char)param_6, (char)param_7, (char)lVar24, in_stack_ffffff88);
		uVar8 = CreateDungeon(uVar10, (char)param_2, (char)param_3, (char)param_4, (char)param_5,
		    (char)param_6, (char)param_7, (char)lVar24, in_stack_ffffff88);
		uVar22 = (undefined4)param_7;
		uVar20 = (undefined4)param_6;
		uVar10 = (undefined)param_2;
		if ((int)uVar8 != 0) {
			L2TileFix();
			uVar23 = (undefined)uVar22;
			uVar21 = (undefined)uVar20;
			uVar18 = (undefined)param_5;
			uVar17 = (undefined)param_4;
			uVar14 = (undefined)param_3;
			if (*(int *)puVar3 != 0) {
				uVar1 = *(uint *)puVar5;
				uVar10 = (undefined)uVar1;
				DRLG_L2SetRoom(*(int *)puVar6, (ulonglong)uVar1, param_3, param_4, param_5, uVar20, uVar22,
				    (int)lVar24, in_stack_ffffff88);
			}
			DRLG_L2FloodTVal(3, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23, (char)lVar24, in_stack_ffffff88);
			DRLG_L2TransFix();
			uVar10 = (undefined)lVar24;
			if (param_1 == 0) {
				param_2 = 1;
				param_3 = 1;
				param_4 = 0xffffffffffffffff;
				param_5 = 0xffffffffffffffff;
				param_6 = 1;
				param_7 = 0;
				lVar25 = DRLG_L2PlaceMiniSet(&DAT_100f782c, 1, 1, -1, -1, 1, 0, uVar10, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffffac, in_stack_ffffffb0);
				if (lVar25 != 0) {
					param_2 = 1;
					param_3 = 1;
					param_4 = 0xffffffffffffffff;
					param_5 = 0xffffffffffffffff;
					param_6 = 0;
					param_7 = 1;
					lVar25 = DRLG_L2PlaceMiniSet(&DAT_100f784e, 1, 1, -1, -1, 0, 1, (char)lVar24, in_stack_ffffff88,
					    in_stack_ffffff8f, in_stack_ffffffac, in_stack_ffffffb0);
				}
				if (((int)lVar25 != 0) && (*puVar13 == '\x05')) {
					param_2 = 1;
					param_3 = 1;
					param_4 = 0xffffffffffffffff;
					param_5 = 0xffffffffffffffff;
					param_6 = 0;
					param_7 = 6;
					lVar25 = DRLG_L2PlaceMiniSet(&DAT_100f7870, 1, 1, -1, -1, 0, 6, (char)lVar24, in_stack_ffffff88,
					    in_stack_ffffff8f, in_stack_ffffffac, in_stack_ffffffb0);
				}
				*(int *)puVar16 = *(int *)puVar16 + -2;
			} else {
				if (param_1 == 1) {
					param_2 = 1;
					param_3 = 1;
					param_4 = 0xffffffffffffffff;
					param_5 = 0xffffffffffffffff;
					param_6 = 0;
					param_7 = 0;
					lVar25 = DRLG_L2PlaceMiniSet(&DAT_100f782c, 1, 1, -1, -1, 0, 0, uVar10, in_stack_ffffff88,
					    in_stack_ffffff8f, in_stack_ffffffac, in_stack_ffffffb0);
					if (lVar25 != 0) {
						param_2 = 1;
						param_3 = 1;
						param_4 = 0xffffffffffffffff;
						param_5 = 0xffffffffffffffff;
						param_6 = 1;
						param_7 = 1;
						lVar25 = DRLG_L2PlaceMiniSet(&DAT_100f784e, 1, 1, -1, -1, 1, 1, (char)lVar24, in_stack_ffffff88,
						    in_stack_ffffff8f, in_stack_ffffffac, in_stack_ffffffb0);
					}
					if (((int)lVar25 != 0) && (*puVar13 == '\x05')) {
						param_2 = 1;
						param_3 = 1;
						param_4 = 0xffffffffffffffff;
						param_5 = 0xffffffffffffffff;
						param_6 = 0;
						param_7 = 6;
						lVar25 = DRLG_L2PlaceMiniSet(&DAT_100f7870, 1, 1, -1, -1, 0, 6, (char)lVar24, in_stack_ffffff88,
						    in_stack_ffffff8f, in_stack_ffffffac, in_stack_ffffffb0);
					}
					*(int *)puVar2 = *(int *)puVar2 + -1;
				} else {
					param_2 = 1;
					param_3 = 1;
					param_4 = 0xffffffffffffffff;
					param_5 = 0xffffffffffffffff;
					param_6 = 0;
					param_7 = 0;
					lVar25 = DRLG_L2PlaceMiniSet(&DAT_100f782c, 1, 1, -1, -1, 0, 0, uVar10, in_stack_ffffff88,
					    in_stack_ffffff8f, in_stack_ffffffac, in_stack_ffffffb0);
					if (lVar25 != 0) {
						param_2 = 1;
						param_3 = 1;
						param_4 = 0xffffffffffffffff;
						param_5 = 0xffffffffffffffff;
						param_6 = 0;
						param_7 = 1;
						lVar25 = DRLG_L2PlaceMiniSet(&DAT_100f784e, 1, 1, -1, -1, 0, 1, (char)lVar24, in_stack_ffffff88,
						    in_stack_ffffff8f, in_stack_ffffffac, in_stack_ffffffb0);
					}
					if (((int)lVar25 != 0) && (*puVar13 == '\x05')) {
						param_2 = 1;
						param_3 = 1;
						param_4 = 0xffffffffffffffff;
						param_5 = 0xffffffffffffffff;
						param_6 = 1;
						param_7 = 6;
						lVar25 = DRLG_L2PlaceMiniSet(&DAT_100f7870, 1, 1, -1, -1, 1, 6, (char)lVar24, in_stack_ffffff88,
						    in_stack_ffffff8f, in_stack_ffffffac, in_stack_ffffffb0);
					}
					*(int *)puVar16 = *(int *)puVar16 + -2;
				}
			}
		}
	}
	L2LockoutFix();
	L2DoorFix();
	L2DirtFix();
	if ((int)lVar25 != 0) {
		uVar10 = 3;
		uVar14 = 0;
		uVar17 = 0;
		DRLG_PlaceThemeRooms(6, 10, 3, 0, 0, uVar18, uVar21, uVar23, in_stack_ffffff88);
	}
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x167a), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1666), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1652), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x163e), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x162a), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1616), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1602), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x15ee), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1a64), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1a52), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1a40), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1a2e), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1a1c), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1a0a), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x19f8), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x19e6), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1c84), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1c72), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1c60), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1c4e), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1c3c), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1c2a), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1c18), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1c06), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1bf4), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1be2), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1bd0), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1bbe), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1bac), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1b9a), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1b88), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1b76), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1b64), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1b56), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1b48), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1b3a), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1b2c), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1b1e), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1b10), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1b02), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1af4), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1ae2), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1ad0), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1abe), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1aac), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1a9a), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1a88), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1a76), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x19d4), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x19c6), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x19b8), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x19aa), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x199c), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x198e), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1980), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1972), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1964), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1956), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1948), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x193a), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x192c), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x191e), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1910), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1902), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x18f4), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x18e6), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x18d8), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x18ca), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x18bc), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x18ae), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x18a0), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1892), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1884), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1876), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1868), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x185a), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x184c), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x183e), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1830), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1822), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1814), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1806), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x17f8), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x17ea), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x17dc), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x17ce), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x17c0), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x17b2), 100, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x173e), 99, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x16d6), 10, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x16d2), 10, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x16ce), 10, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x16ca), 10, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x16c6), 10, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x16c2), 10, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x16be), 0x32, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x16ba), 1, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x169a), 1, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x172a), 3, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1720), 3, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1716), 3, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1710), 3, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x170a), 3, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x1700), 0x14, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x16fa), 0x14, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x16f4), 3, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x16ea), 0x14, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	uVar11 = 0x14;
	uVar9 = DRLG_L2PlaceRndSet((byte *)(iVar7 + -0x16e0), 0x14, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23,
	    in_stack_ffffff88);
	DRLG_L2Subs(uVar9, uVar11, uVar10, uVar14, uVar17, uVar18, uVar21, uVar23, in_stack_ffffff88);
	uVar10 = DRLG_L2Shadows();
	uVar12 = (ulonglong) * (uint *)(iVar7 + -0x77cc);
	lVar25 = 0x14;
	uVar15 = (ulonglong) * (uint *)(iVar7 + -0x7540);
	cVar19 = '\0';
	do {
		puVar13 = (undefined *)uVar12;
		puVar16 = (undefined *)uVar15;
		*puVar16 = *puVar13;
		puVar16[0x28] = puVar13[0x28];
		puVar16[0x50] = puVar13[0x50];
		puVar16[0x78] = puVar13[0x78];
		puVar16[0xa0] = puVar13[0xa0];
		puVar16[200] = puVar13[200];
		puVar16[0xf0] = puVar13[0xf0];
		puVar16[0x118] = puVar13[0x118];
		puVar16[0x140] = puVar13[0x140];
		puVar16[0x168] = puVar13[0x168];
		puVar16[400] = puVar13[400];
		puVar16[0x1b8] = puVar13[0x1b8];
		puVar16[0x1e0] = puVar13[0x1e0];
		puVar16[0x208] = puVar13[0x208];
		puVar16[0x230] = puVar13[0x230];
		puVar16[600] = puVar13[600];
		puVar16[0x280] = puVar13[0x280];
		puVar16[0x2a8] = puVar13[0x2a8];
		puVar16[0x2d0] = puVar13[0x2d0];
		puVar16[0x2f8] = puVar13[0x2f8];
		puVar16[800] = puVar13[800];
		puVar16[0x348] = puVar13[0x348];
		puVar16[0x370] = puVar13[0x370];
		puVar16[0x398] = puVar13[0x398];
		puVar16[0x3c0] = puVar13[0x3c0];
		puVar16[1000] = puVar13[1000];
		puVar16[0x410] = puVar13[0x410];
		puVar16[0x438] = puVar13[0x438];
		puVar16[0x460] = puVar13[0x460];
		puVar16[0x488] = puVar13[0x488];
		puVar16[0x4b0] = puVar13[0x4b0];
		puVar16[0x4d8] = puVar13[0x4d8];
		puVar16[0x500] = puVar13[0x500];
		puVar16[0x528] = puVar13[0x528];
		puVar16[0x550] = puVar13[0x550];
		puVar16[0x578] = puVar13[0x578];
		puVar16[0x5a0] = puVar13[0x5a0];
		puVar16[0x5c8] = puVar13[0x5c8];
		puVar16[0x5f0] = puVar13[0x5f0];
		puVar16[0x618] = puVar13[0x618];
		cVar19 = cVar19 + '\x01';
		puVar16[1] = puVar13[1];
		puVar16[0x29] = puVar13[0x29];
		puVar16[0x51] = puVar13[0x51];
		puVar16[0x79] = puVar13[0x79];
		puVar16[0xa1] = puVar13[0xa1];
		puVar16[0xc9] = puVar13[0xc9];
		puVar16[0xf1] = puVar13[0xf1];
		puVar16[0x119] = puVar13[0x119];
		puVar16[0x141] = puVar13[0x141];
		puVar16[0x169] = puVar13[0x169];
		puVar16[0x191] = puVar13[0x191];
		puVar16[0x1b9] = puVar13[0x1b9];
		puVar16[0x1e1] = puVar13[0x1e1];
		puVar16[0x209] = puVar13[0x209];
		puVar16[0x231] = puVar13[0x231];
		puVar16[0x259] = puVar13[0x259];
		puVar16[0x281] = puVar13[0x281];
		puVar16[0x2a9] = puVar13[0x2a9];
		puVar16[0x2d1] = puVar13[0x2d1];
		puVar16[0x2f9] = puVar13[0x2f9];
		puVar16[0x321] = puVar13[0x321];
		puVar16[0x349] = puVar13[0x349];
		puVar16[0x371] = puVar13[0x371];
		puVar16[0x399] = puVar13[0x399];
		puVar16[0x3c1] = puVar13[0x3c1];
		puVar16[0x3e9] = puVar13[0x3e9];
		puVar16[0x411] = puVar13[0x411];
		puVar16[0x439] = puVar13[0x439];
		puVar16[0x461] = puVar13[0x461];
		puVar16[0x489] = puVar13[0x489];
		puVar16[0x4b1] = puVar13[0x4b1];
		puVar16[0x4d9] = puVar13[0x4d9];
		puVar16[0x501] = puVar13[0x501];
		puVar16[0x529] = puVar13[0x529];
		puVar16[0x551] = puVar13[0x551];
		puVar16[0x579] = puVar13[0x579];
		puVar16[0x5a1] = puVar13[0x5a1];
		puVar16[0x5c9] = puVar13[0x5c9];
		puVar16[0x5f1] = puVar13[0x5f1];
		uVar12 = uVar12 + 2;
		uVar14 = (undefined)uVar12;
		puVar16[0x619] = puVar13[0x619];
		uVar15 = uVar15 + 2;
		uVar17 = (undefined)uVar15;
		lVar25 = lVar25 + -1;
	} while (lVar25 != 0);
	DRLG_Init_Globals(uVar10, uVar11, uVar14, uVar17, cVar19, uVar18, uVar21, uVar23, in_stack_ffffff88);
	DRLG_CheckQuests((char)*(undefined4 *)puVar6, (char)*(undefined4 *)puVar5, uVar14, uVar17, cVar19, uVar18,
	    uVar21, uVar23, in_stack_ffffff88);
	return;
}

void DRLG_InitL2Vals(void)

{
	short sVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	longlong lVar10;

	puVar3 = PTR_DAT_100f1a54;
	puVar2 = PTR_DAT_100f1a38;
	iVar9 = 0;
	iVar7 = 0;
	do {
		iVar5 = 0;
		lVar10 = 0x38;
		iVar6 = 0;
		do {
			sVar1 = *(short *)(iVar7 + *(int *)puVar3 + iVar5);
			if (sVar1 == 0x21d) {
				uVar4 = 5;
			LAB_10030758:
				*(undefined *)(iVar9 + *(int *)puVar2 + iVar6) = uVar4;
			} else {
				if (sVar1 == 0xb2) {
					uVar4 = 5;
					goto LAB_10030758;
				}
				if (sVar1 == 0x227) {
					uVar4 = 5;
					goto LAB_10030758;
				}
				if (sVar1 == 0x21e) {
					uVar4 = 6;
					goto LAB_10030758;
				}
				if (sVar1 == 0x229) {
					uVar4 = 6;
					goto LAB_10030758;
				}
				if (sVar1 == 0xd) {
					uVar4 = 5;
					goto LAB_10030758;
				}
				if (sVar1 == 0x11) {
					uVar4 = 6;
					goto LAB_10030758;
				}
			}
			sVar1 = *(short *)(iVar7 + *(int *)puVar3 + iVar5 + 0xe0);
			if (sVar1 == 0x21d) {
				uVar4 = 5;
			LAB_100307e8:
				*(undefined *)(iVar9 + *(int *)puVar2 + iVar6 + 0x70) = uVar4;
			} else {
				if (sVar1 == 0xb2) {
					uVar4 = 5;
					goto LAB_100307e8;
				}
				if (sVar1 == 0x227) {
					uVar4 = 5;
					goto LAB_100307e8;
				}
				if (sVar1 == 0x21e) {
					uVar4 = 6;
					goto LAB_100307e8;
				}
				if (sVar1 == 0x229) {
					uVar4 = 6;
					goto LAB_100307e8;
				}
				if (sVar1 == 0xd) {
					uVar4 = 5;
					goto LAB_100307e8;
				}
				if (sVar1 == 0x11) {
					uVar4 = 6;
					goto LAB_100307e8;
				}
			}
			iVar5 = iVar5 + 0x1c0;
			iVar6 = iVar6 + 0xe0;
			lVar10 = lVar10 + -1;
		} while (lVar10 != 0);
		iVar9 = iVar9 + 1;
		iVar7 = iVar7 + 2;
		if (0x6f < iVar9) {
			iVar9 = 0;
			iVar7 = 0;
			do {
				lVar10 = 0x38;
				iVar5 = 0;
				iVar6 = 0;
				do {
					sVar1 = *(short *)(iVar7 + *(int *)puVar3 + iVar5);
					if (sVar1 == 0x84) {
						*(undefined *)(iVar9 + *(int *)puVar2 + iVar6 + 1) = 2;
						*(undefined *)(iVar9 + *(int *)puVar2 + iVar6 + 2) = 1;
					} else {
						if ((sVar1 == 0x87) || (sVar1 == 0x8b)) {
							*(undefined *)(iVar9 + *(int *)puVar2 + iVar6 + 0x70) = 3;
							*(undefined *)(iVar9 + *(int *)puVar2 + iVar6 + 0xe0) = 4;
						}
					}
					iVar8 = iVar6 + 0x70;
					sVar1 = *(short *)(iVar7 + *(int *)puVar3 + iVar5 + 0xe0);
					if (sVar1 == 0x84) {
						*(undefined *)(iVar9 + *(int *)puVar2 + iVar8 + 1) = 2;
						*(undefined *)(iVar9 + *(int *)puVar2 + iVar8 + 2) = 1;
					} else {
						if ((sVar1 == 0x87) || (sVar1 == 0x8b)) {
							*(undefined *)(iVar9 + *(int *)puVar2 + iVar8 + 0x70) = 3;
							*(undefined *)(iVar9 + *(int *)puVar2 + iVar8 + 0xe0) = 4;
						}
					}
					iVar5 = iVar5 + 0x1c0;
					iVar6 = iVar6 + 0xe0;
					lVar10 = lVar10 + -1;
				} while (lVar10 != 0);
				iVar9 = iVar9 + 1;
				iVar7 = iVar7 + 2;
			} while (iVar9 < 0x70);
			return;
		}
	} while (true);
}

void LoadL2Dungeon(longlong param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	byte bVar1;
	short sVar2;
	undefined4 *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined **ppuVar6;
	undefined uVar9;
	ulonglong uVar7;
	ulonglong uVar8;
	undefined uVar10;
	undefined uVar16;
	undefined8 uVar11;
	undefined *puVar13;
	ulonglong uVar12;
	char *pcVar14;
	undefined uVar17;
	int iVar15;
	undefined8 uVar18;
	undefined *puVar20;
	ulonglong uVar19;
	undefined uVar22;
	int iVar21;
	longlong lVar23;
	undefined uVar24;
	ulonglong uVar25;
	byte bVar26;
	ulonglong uVar27;
	undefined uVar29;
	int iVar28;
	ulonglong uVar30;
	longlong lVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	longlong lVar35;
	longlong lVar36;
	undefined4 in_stack_ffffff98;
	int *local_28[5];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	puVar5 = PTR_DAT_100f1a54;
	puVar4 = PTR_DAT_100f1a38;
	uVar16 = (undefined)param_2;
	ppuVar6 = &toc;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar18 = param_3;
	uVar9 = InitDungeon();
	DRLG_InitTrans(uVar9, uVar16, (char)uVar18, (char)param_4, (char)param_5, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffff98);
	uVar11 = 0;
	uVar7 = LoadFileInMem(param_1, (undefined4 *)0x0, uVar18, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffff98);
	local_28[0] = (int *)uVar7;
	uVar8 = FUN_100b8f7c(uVar7 & 0xffffffff, uVar11, uVar18, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffff98);
	uVar27 = ZEXT48(ppuVar6[-0x1df3]);
	iVar34 = 0;
	uVar30 = ZEXT48(ppuVar6[-0x1d45]);
	uVar7 = uVar27;
	uVar25 = uVar30;
	do {
		lVar35 = 5;
		lVar31 = 0;
		uVar12 = uVar7;
		uVar19 = uVar25;
		do {
			puVar13 = (undefined *)uVar12;
			*puVar13 = 0xc;
			puVar20 = (undefined *)uVar19;
			*puVar20 = 0;
			puVar13[0x28] = 0xc;
			puVar20[0x28] = 0;
			puVar13[0x50] = 0xc;
			puVar20[0x50] = 0;
			puVar13[0x78] = 0xc;
			puVar20[0x78] = 0;
			puVar13[0xa0] = 0xc;
			puVar20[0xa0] = 0;
			puVar13[200] = 0xc;
			puVar20[200] = 0;
			puVar13[0xf0] = 0xc;
			puVar20[0xf0] = 0;
			puVar13[0x118] = 0xc;
			uVar12 = uVar12 + 0x140;
			puVar20[0x118] = 0;
			uVar19 = uVar19 + 0x140;
			lVar35 = lVar35 + -1;
		} while (lVar35 != 0);
		iVar34 = iVar34 + 1;
		uVar25 = uVar25 + 1;
		uVar7 = uVar7 + 1;
	} while (iVar34 < 0x28);
	bVar26 = *(byte *)uVar8;
	bVar1 = ((byte *)uVar8)[2];
	lVar35 = uVar8 + 4;
	uVar7 = uVar27;
	while (true) {
		uVar16 = (undefined)lVar31;
		uVar9 = (undefined)uVar30;
		if ((int)(uint)bVar1 <= (int)lVar31)
			break;
		uVar25 = uVar7;
		uVar8 = uVar30;
		uVar12 = (ulonglong)bVar26;
		if (bVar26 != 0) {
			do {
				if (*(char *)lVar35 == '\0') {
					*(char *)uVar25 = '\x03';
				} else {
					*(char *)uVar25 = *(char *)lVar35;
					*(byte *)uVar8 = *(byte *)uVar8 | 0x80;
				}
				lVar35 = lVar35 + 2;
				uVar25 = uVar25 + 0x28;
				uVar8 = uVar8 + 0x28;
				uVar12 = uVar12 - 1;
			} while (uVar12 != 0);
		}
		uVar7 = uVar7 + 1;
		uVar30 = uVar30 + 1;
		lVar31 = lVar31 + 1;
	}
	lVar35 = 0;
	do {
		lVar36 = 4;
		lVar23 = 0;
		uVar7 = uVar27;
		do {
			pcVar14 = (char *)uVar7;
			if (*pcVar14 == '\0') {
				*pcVar14 = '\f';
			}
			if (pcVar14[0x28] == '\0') {
				pcVar14[0x28] = '\f';
			}
			if (pcVar14[0x50] == '\0') {
				pcVar14[0x50] = '\f';
			}
			if (pcVar14[0x78] == '\0') {
				pcVar14[0x78] = '\f';
			}
			if (pcVar14[0xa0] == '\0') {
				pcVar14[0xa0] = '\f';
			}
			if (pcVar14[200] == '\0') {
				pcVar14[200] = '\f';
			}
			if (pcVar14[0xf0] == '\0') {
				pcVar14[0xf0] = '\f';
			}
			if (pcVar14[0x118] == '\0') {
				pcVar14[0x118] = '\f';
			}
			if (pcVar14[0x140] == '\0') {
				pcVar14[0x140] = '\f';
			}
			if (pcVar14[0x168] == '\0') {
				pcVar14[0x168] = '\f';
			}
			uVar7 = uVar7 + 400;
			uVar17 = (undefined)uVar7;
			lVar23 = lVar23 + 9;
			uVar24 = (undefined)lVar23;
			lVar36 = lVar36 + -1;
		} while (lVar36 != 0);
		lVar35 = lVar35 + 1;
		uVar22 = (undefined)lVar35;
		uVar27 = uVar27 + 1;
		uVar29 = (undefined)uVar27;
	} while ((int)lVar35 < 0x28);
	uVar10 = DRLG_L2Pass3(0xc, uVar7, lVar35, lVar23, (ulonglong)bVar26, (int)uVar27, (int)uVar30,
	    (int)lVar31, in_stack_ffffff98);
	DRLG_Init_Globals(uVar10, uVar17, uVar22, uVar24, bVar26, uVar29, uVar9, uVar16, in_stack_ffffff98);
	lVar31 = 0;
	iVar34 = 0;
	do {
		iVar28 = 0;
		lVar35 = 0x38;
		iVar15 = 0;
		iVar21 = 0;
		do {
			uVar9 = 0;
			sVar2 = *(short *)(iVar34 + *(int *)puVar5 + iVar15);
			if (sVar2 == 0x21d) {
				uVar9 = 5;
			}
			if (sVar2 == 0xb2) {
				uVar9 = 5;
			}
			if (sVar2 == 0x227) {
				uVar9 = 5;
			}
			if (sVar2 == 0x21e) {
				uVar9 = 6;
			}
			if (sVar2 == 0x229) {
				uVar9 = 6;
			}
			if (sVar2 == 0xd) {
				uVar9 = 5;
			}
			if (sVar2 == 0x11) {
				uVar9 = 6;
			}
			*(undefined *)((int)lVar31 + *(int *)puVar4 + iVar21) = uVar9;
			uVar9 = 0;
			sVar2 = *(short *)(iVar34 + *(int *)puVar5 + iVar15 + 0xe0);
			if (sVar2 == 0x21d) {
				uVar9 = 5;
			}
			if (sVar2 == 0xb2) {
				uVar9 = 5;
			}
			if (sVar2 == 0x227) {
				uVar9 = 5;
			}
			if (sVar2 == 0x21e) {
				uVar9 = 6;
			}
			if (sVar2 == 0x229) {
				uVar9 = 6;
			}
			if (sVar2 == 0xd) {
				uVar9 = 5;
			}
			if (sVar2 == 0x11) {
				uVar9 = 6;
			}
			iVar15 = iVar15 + 0x1c0;
			iVar28 = iVar28 + 1;
			*(undefined *)((int)lVar31 + *(int *)puVar4 + iVar21 + 0x70) = uVar9;
			iVar21 = iVar21 + 0xe0;
			lVar35 = lVar35 + -1;
		} while (lVar35 != 0);
		lVar31 = lVar31 + 1;
		iVar34 = iVar34 + 2;
	} while ((int)lVar31 < 0x70);
	iVar15 = 0;
	iVar34 = 0;
	do {
		lVar35 = 0x38;
		iVar21 = 0;
		iVar33 = 0;
		do {
			sVar2 = *(short *)(iVar34 + *(int *)puVar5 + iVar21);
			if (sVar2 == 0x84) {
				iVar28 = 2;
				lVar31 = 1;
				*(undefined *)(iVar15 + *(int *)puVar4 + iVar33 + 1) = 2;
				*(undefined *)(iVar15 + *(int *)puVar4 + iVar33 + 2) = 1;
			} else {
				if ((sVar2 == 0x87) || (sVar2 == 0x8b)) {
					iVar28 = 3;
					lVar31 = 4;
					*(undefined *)(iVar15 + *(int *)puVar4 + iVar33 + 0x70) = 3;
					*(undefined *)(iVar15 + *(int *)puVar4 + iVar33 + 0xe0) = 4;
				}
			}
			iVar32 = iVar33 + 0x70;
			sVar2 = *(short *)(iVar34 + *(int *)puVar5 + iVar21 + 0xe0);
			if (sVar2 == 0x84) {
				iVar28 = 2;
				lVar31 = 1;
				*(undefined *)(iVar15 + *(int *)puVar4 + iVar32 + 1) = 2;
				*(undefined *)(iVar15 + *(int *)puVar4 + iVar32 + 2) = 1;
			} else {
				if ((sVar2 == 0x87) || (sVar2 == 0x8b)) {
					iVar28 = 3;
					lVar31 = 4;
					*(undefined *)(iVar15 + *(int *)puVar4 + iVar32 + 0x70) = 3;
					*(undefined *)(iVar15 + *(int *)puVar4 + iVar32 + 0xe0) = 4;
				}
			}
			iVar21 = iVar21 + 0x1c0;
			iVar33 = iVar33 + 0xe0;
			lVar35 = lVar35 + -1;
		} while (lVar35 != 0);
		iVar15 = iVar15 + 1;
		iVar34 = iVar34 + 2;
	} while (iVar15 < 0x70);
	uVar7 = ZEXT48(ppuVar6[-0x1dec]);
	puVar3 = (undefined4 *)ppuVar6[-0x1ded];
	*(undefined4 *)ppuVar6[-0x1dec] = param_2;
	*puVar3 = (int)param_3;
	FUN_1006aeb8(ZEXT48(local_28[0]), 0, 0, uVar7, lVar31, iVar28, iVar21, iVar33, in_stack_ffffff98);
	uVar10 = (undefined)iVar33;
	uVar29 = (undefined)iVar21;
	uVar22 = (undefined)iVar28;
	uVar24 = (undefined)lVar31;
	uVar17 = (undefined)uVar7;
	uVar9 = 0;
	uVar16 = 0;
	FUN_10083ca0(ZEXT48(local_28[0]), 0, 0, uVar7, lVar31, iVar28, iVar21, iVar33, in_stack_ffffff98);
	FUN_100b9100((int)local_28[0], uVar9, uVar16, uVar17, uVar24, uVar22, uVar29, uVar10, in_stack_ffffff98);
	mem_free_dbg(local_28, uVar9, uVar16, uVar17, uVar24, uVar22, uVar29, uVar10, in_stack_ffffff98);
	return;
}

void LoadPreL2Dungeon(longlong param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9, undefined param_10, undefined4 param_11, undefined4 param_12)

{
	byte bVar1;
	byte bVar2;
	undefined **ppuVar3;
	undefined uVar6;
	ulonglong uVar4;
	ulonglong uVar5;
	undefined8 uVar7;
	ulonglong uVar8;
	undefined uVar9;
	undefined *puVar11;
	ulonglong uVar10;
	char *pcVar12;
	undefined uVar13;
	undefined *puVar15;
	ulonglong uVar14;
	undefined uVar16;
	char cVar17;
	ulonglong uVar18;
	char cVar19;
	ulonglong uVar20;
	longlong lVar21;
	undefined uVar22;
	int iVar23;
	longlong lVar24;
	undefined4 in_stack_ffffff98;
	int *local_18[6];

	ppuVar3 = &toc;
	uVar6 = InitDungeon();
	DRLG_InitTrans(uVar6, (undefined)param_2, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
	    (char)param_7, (char)param_8, in_stack_ffffff98);
	uVar7 = 0;
	uVar4 = LoadFileInMem(param_1, (undefined4 *)0x0, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffff98);
	local_18[0] = (int *)uVar4;
	uVar5 = FUN_100b8f7c(uVar4 & 0xffffffff, uVar7, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffff98);
	uVar8 = ZEXT48(ppuVar3[-0x1df3]);
	iVar23 = 0;
	uVar20 = ZEXT48(ppuVar3[-0x1d45]);
	uVar4 = uVar8;
	uVar18 = uVar20;
	do {
		lVar24 = 5;
		lVar21 = 0;
		uVar10 = uVar4;
		uVar14 = uVar18;
		do {
			puVar11 = (undefined *)uVar10;
			*puVar11 = 0xc;
			puVar15 = (undefined *)uVar14;
			*puVar15 = 0;
			puVar11[0x28] = 0xc;
			puVar15[0x28] = 0;
			puVar11[0x50] = 0xc;
			puVar15[0x50] = 0;
			puVar11[0x78] = 0xc;
			puVar15[0x78] = 0;
			puVar11[0xa0] = 0xc;
			puVar15[0xa0] = 0;
			puVar11[200] = 0xc;
			puVar15[200] = 0;
			puVar11[0xf0] = 0xc;
			puVar15[0xf0] = 0;
			puVar11[0x118] = 0xc;
			uVar10 = uVar10 + 0x140;
			puVar15[0x118] = 0;
			uVar14 = uVar14 + 0x140;
			lVar24 = lVar24 + -1;
		} while (lVar24 != 0);
		iVar23 = iVar23 + 1;
		uVar18 = uVar18 + 1;
		uVar4 = uVar4 + 1;
	} while (iVar23 < 0x28);
	bVar1 = *(byte *)uVar5;
	bVar2 = ((byte *)uVar5)[2];
	lVar24 = uVar5 + 4;
	uVar4 = uVar8;
	while (true) {
		uVar22 = (undefined)lVar21;
		uVar6 = (undefined)uVar20;
		if ((int)(uint)bVar2 <= (int)lVar21)
			break;
		uVar18 = uVar4;
		uVar5 = uVar20;
		uVar10 = (ulonglong)bVar1;
		if (bVar1 != 0) {
			do {
				if (*(char *)lVar24 == '\0') {
					*(char *)uVar18 = '\x03';
				} else {
					*(char *)uVar18 = *(char *)lVar24;
					*(byte *)uVar5 = *(byte *)uVar5 | 0x80;
				}
				lVar24 = lVar24 + 2;
				uVar18 = uVar18 + 0x28;
				uVar5 = uVar5 + 0x28;
				uVar10 = uVar10 - 1;
			} while (uVar10 != 0);
		}
		uVar4 = uVar4 + 1;
		uVar20 = uVar20 + 1;
		lVar21 = lVar21 + 1;
	}
	iVar23 = 0;
	uVar4 = uVar8;
	do {
		lVar21 = 4;
		cVar19 = '\0';
		uVar18 = uVar4;
		do {
			pcVar12 = (char *)uVar18;
			if (*pcVar12 == '\0') {
				*pcVar12 = '\f';
			}
			if (pcVar12[0x28] == '\0') {
				pcVar12[0x28] = '\f';
			}
			if (pcVar12[0x50] == '\0') {
				pcVar12[0x50] = '\f';
			}
			if (pcVar12[0x78] == '\0') {
				pcVar12[0x78] = '\f';
			}
			if (pcVar12[0xa0] == '\0') {
				pcVar12[0xa0] = '\f';
			}
			if (pcVar12[200] == '\0') {
				pcVar12[200] = '\f';
			}
			if (pcVar12[0xf0] == '\0') {
				pcVar12[0xf0] = '\f';
			}
			if (pcVar12[0x118] == '\0') {
				pcVar12[0x118] = '\f';
			}
			if (pcVar12[0x140] == '\0') {
				pcVar12[0x140] = '\f';
			}
			if (pcVar12[0x168] == '\0') {
				pcVar12[0x168] = '\f';
			}
			uVar18 = uVar18 + 400;
			uVar13 = (undefined)uVar18;
			cVar19 = cVar19 + '\t';
			lVar21 = lVar21 + -1;
		} while (lVar21 != 0);
		iVar23 = iVar23 + 1;
		uVar4 = uVar4 + 1;
	} while (iVar23 < 0x28);
	uVar4 = ZEXT48(ppuVar3[-0x1d50]);
	lVar21 = 0x14;
	cVar17 = '\0';
	do {
		puVar11 = (undefined *)uVar8;
		puVar15 = (undefined *)uVar4;
		*puVar15 = *puVar11;
		puVar15[0x28] = puVar11[0x28];
		puVar15[0x50] = puVar11[0x50];
		puVar15[0x78] = puVar11[0x78];
		puVar15[0xa0] = puVar11[0xa0];
		puVar15[200] = puVar11[200];
		puVar15[0xf0] = puVar11[0xf0];
		puVar15[0x118] = puVar11[0x118];
		puVar15[0x140] = puVar11[0x140];
		puVar15[0x168] = puVar11[0x168];
		puVar15[400] = puVar11[400];
		puVar15[0x1b8] = puVar11[0x1b8];
		puVar15[0x1e0] = puVar11[0x1e0];
		puVar15[0x208] = puVar11[0x208];
		puVar15[0x230] = puVar11[0x230];
		puVar15[600] = puVar11[600];
		puVar15[0x280] = puVar11[0x280];
		puVar15[0x2a8] = puVar11[0x2a8];
		puVar15[0x2d0] = puVar11[0x2d0];
		puVar15[0x2f8] = puVar11[0x2f8];
		puVar15[800] = puVar11[800];
		puVar15[0x348] = puVar11[0x348];
		puVar15[0x370] = puVar11[0x370];
		puVar15[0x398] = puVar11[0x398];
		puVar15[0x3c0] = puVar11[0x3c0];
		puVar15[1000] = puVar11[1000];
		puVar15[0x410] = puVar11[0x410];
		puVar15[0x438] = puVar11[0x438];
		puVar15[0x460] = puVar11[0x460];
		puVar15[0x488] = puVar11[0x488];
		puVar15[0x4b0] = puVar11[0x4b0];
		puVar15[0x4d8] = puVar11[0x4d8];
		puVar15[0x500] = puVar11[0x500];
		puVar15[0x528] = puVar11[0x528];
		puVar15[0x550] = puVar11[0x550];
		puVar15[0x578] = puVar11[0x578];
		puVar15[0x5a0] = puVar11[0x5a0];
		puVar15[0x5c8] = puVar11[0x5c8];
		puVar15[0x5f0] = puVar11[0x5f0];
		puVar15[0x618] = puVar11[0x618];
		cVar17 = cVar17 + '\x01';
		puVar15[1] = puVar11[1];
		puVar15[0x29] = puVar11[0x29];
		puVar15[0x51] = puVar11[0x51];
		puVar15[0x79] = puVar11[0x79];
		puVar15[0xa1] = puVar11[0xa1];
		puVar15[0xc9] = puVar11[0xc9];
		puVar15[0xf1] = puVar11[0xf1];
		puVar15[0x119] = puVar11[0x119];
		puVar15[0x141] = puVar11[0x141];
		puVar15[0x169] = puVar11[0x169];
		puVar15[0x191] = puVar11[0x191];
		puVar15[0x1b9] = puVar11[0x1b9];
		puVar15[0x1e1] = puVar11[0x1e1];
		puVar15[0x209] = puVar11[0x209];
		puVar15[0x231] = puVar11[0x231];
		puVar15[0x259] = puVar11[0x259];
		puVar15[0x281] = puVar11[0x281];
		puVar15[0x2a9] = puVar11[0x2a9];
		puVar15[0x2d1] = puVar11[0x2d1];
		puVar15[0x2f9] = puVar11[0x2f9];
		puVar15[0x321] = puVar11[0x321];
		puVar15[0x349] = puVar11[0x349];
		puVar15[0x371] = puVar11[0x371];
		puVar15[0x399] = puVar11[0x399];
		puVar15[0x3c1] = puVar11[0x3c1];
		puVar15[0x3e9] = puVar11[0x3e9];
		puVar15[0x411] = puVar11[0x411];
		puVar15[0x439] = puVar11[0x439];
		puVar15[0x461] = puVar11[0x461];
		puVar15[0x489] = puVar11[0x489];
		puVar15[0x4b1] = puVar11[0x4b1];
		puVar15[0x4d9] = puVar11[0x4d9];
		puVar15[0x501] = puVar11[0x501];
		puVar15[0x529] = puVar11[0x529];
		puVar15[0x551] = puVar11[0x551];
		puVar15[0x579] = puVar11[0x579];
		puVar15[0x5a1] = puVar11[0x5a1];
		puVar15[0x5c9] = puVar11[0x5c9];
		puVar15[0x5f1] = puVar11[0x5f1];
		uVar8 = uVar8 + 2;
		uVar9 = (undefined)uVar8;
		puVar15[0x619] = puVar11[0x619];
		uVar4 = uVar4 + 2;
		uVar16 = (undefined)uVar4;
		lVar21 = lVar21 + -1;
	} while (lVar21 != 0);
	FUN_100b9100((int)local_18[0], uVar9, uVar13, uVar16, cVar17, cVar19, uVar6, uVar22, in_stack_ffffff98);
	mem_free_dbg(local_18, uVar9, uVar13, uVar16, cVar17, cVar19, uVar6, uVar22, in_stack_ffffff98);
	return;
}

void CreateL2Dungeon(undefined4 param_1, int param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined4 *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined **ppuVar6;
	undefined8 uVar7;
	undefined8 extraout_r3;
	undefined uVar8;
	undefined uVar9;
	ulonglong param_3_00;
	undefined8 uVar10;
	undefined uVar11;
	undefined7 uVar12;
	undefined uVar13;
	undefined7 uVar14;
	undefined uVar15;
	undefined4 uVar16;
	undefined uVar17;
	undefined4 uVar18;
	undefined uVar19;
	undefined uVar20;
	undefined4 param_9_00;

	puVar5 = PTR_DAT_100f19e4;
	puVar4 = PTR_DAT_100f19cc;
	puVar3 = PTR_DAT_100f17ec;
	uVar14 = (undefined7)((ulonglong)param_5 >> 8);
	uVar15 = (undefined)param_5;
	uVar12 = (undefined7)((ulonglong)param_4 >> 8);
	uVar13 = (undefined)param_4;
	ppuVar6 = &toc;
	param_3_00 = ZEXT48(PTR_DAT_100f17e0);
	if (*PTR_DAT_100f17e0 == '\x01') {
		ppuVar6 = &toc;
		if ((*PTR_DAT_100f17ec == '\a') && (ppuVar6 = &toc, PTR_DAT_100f19cc[0xc2] == '\0')) {
			*PTR_DAT_100f17ec = 6;
			ppuVar6 = &toc;
			CreateL2Dungeon(*(undefined4 *)(puVar5 + 0x18), 4, param_3_00, param_4, param_5, param_6, param_7,
			    param_8, param_9_00);
			*puVar3 = 7;
		}
		if (*puVar3 == '\b') {
			if (puVar4[0xc2] == '\0') {
				*puVar3 = 6;
				CreateL2Dungeon(*(undefined4 *)(puVar5 + 0x18), 4, param_3_00, CONCAT71(uVar12, uVar13),
				    CONCAT71(uVar14, uVar15), param_6, param_7, param_8, param_9_00);
				*puVar3 = 8;
			} else {
				*puVar3 = 7;
				CreateL2Dungeon(*(undefined4 *)(puVar5 + 0x1c), 4, param_3_00, CONCAT71(uVar12, uVar13),
				    CONCAT71(uVar14, uVar15), param_6, param_7, param_8, param_9_00);
				*puVar3 = 8;
			}
		}
	}
	SetRndSeed(param_1);
	uVar10 = 0x10;
	puVar1 = (undefined4 *)ppuVar6[-0x1d4d];
	*(undefined4 *)ppuVar6[-0x1d4c] = 0x10;
	puVar2 = (undefined4 *)ppuVar6[-0x1d4e];
	param_3_00 = ZEXT48(puVar2);
	*puVar1 = 0x10;
	puVar1 = (undefined4 *)ppuVar6[-0x1d4f];
	*puVar2 = 0x60;
	*puVar1 = 0x60;
	DRLG_InitTrans((char)puVar1, (char)puVar2, 0x10, uVar13, uVar15, (char)param_6, (char)param_7,
	    (char)param_8, param_9_00);
	uVar7 = DRLG_InitSetPC();
	DRLG_LoadL2SP(uVar7, param_3_00, uVar10, CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), (int)param_6,
	    (int)param_7, param_8, param_9_00);
	uVar18 = (undefined4)param_7;
	uVar16 = (undefined4)param_6;
	DRLG_L2(param_2, param_3_00, uVar10, CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), param_6,
	    param_7, param_8, param_9_00);
	uVar20 = (undefined)param_8;
	uVar19 = (undefined)uVar18;
	uVar17 = (undefined)uVar16;
	uVar11 = (undefined)uVar10;
	uVar9 = (undefined)param_3_00;
	uVar8 = DRLG_L2Pass3(extraout_r3, param_3_00, uVar10, CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), uVar16, uVar18, param_8, param_9_00);
	DRLG_FreeL2SP(uVar8, uVar9, uVar11, uVar13, uVar15, uVar17, uVar19, uVar20, param_9_00);
	DRLG_InitL2Vals();
	DRLG_SetPC();
	return;
}
