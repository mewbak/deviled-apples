
undefined8 TFit_Shrine(int param_1)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	int iVar5;
	char *pcVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	puVar3 = PTR_DAT_100f2108;
	iVar11 = 0;
	iVar10 = 0;
	iVar9 = 0;
	iVar1 = *(int *)(PTR_DAT_100f2004 + param_1 * 8 + 4);
	iVar4 = 0;
	do {
		do {
			if (iVar9 != 0) {
				*(int *)PTR_DAT_100f210c = iVar11;
				puVar2 = PTR_DAT_100f2104;
				*(int *)puVar3 = iVar10;
				*(int *)puVar2 = iVar9;
				return 1;
			}
			iVar7 = iVar11 * 0x70;
			pcVar6 = (char *)(*(int *)PTR_DAT_100f1a48 + iVar7 + iVar10);
			if ((int)*pcVar6 == iVar1) {
				iVar5 = *(int *)PTR_DAT_100f1a54 + iVar11 * 0xe0 + iVar4;
				if (((((PTR_DAT_100f1d98[(int)*(short *)(iVar5 + -2)] != '\0') && (*(char *)(_DAT_100f1da4 + (int)*(short *)(iVar5 + -0xe0)) == '\0')) && (*(char *)(_DAT_100f1da4 + (int)*(short *)(iVar5 + 0xe0)) == '\0')) && (((int)pcVar6[-0x70] == iVar1 && ((int)pcVar6[0x70] == iVar1)))) && ((iVar8 = *(int *)PTR_DAT_100f194c + iVar7 + iVar10, *(char *)(iVar8 + -0x71) == '\0' && (*(char *)(iVar8 + 0x6f) == '\0')))) {
					iVar9 = 1;
				}
				if ((((iVar9 == 0) && (PTR_DAT_100f1d98[(int)*(short *)(iVar5 + -0xe0)] != '\0')) && ((*(char *)(_DAT_100f1da4 + (int)*(short *)(iVar5 + -2)) == '\0' && (((*(char *)(_DAT_100f1da4 + (int)*(short *)(iVar5 + 2)) == '\0' && ((int)pcVar6[-1] == iVar1)) && ((int)pcVar6[1] == iVar1)))))) && ((iVar7 = *(int *)PTR_DAT_100f194c + iVar7 + iVar10, *(char *)(iVar7 + -0x71) == '\0' && (*(char *)(iVar7 + -0x6f) == '\0')))) {
					iVar9 = 2;
				}
			}
		} while ((iVar9 != 0) || (iVar11 = iVar11 + 1, iVar11 != 0x70));
		iVar10 = iVar10 + 1;
		iVar4 = iVar4 + 2;
		iVar11 = 0;
	} while (iVar10 != 0x70);
	return 0;
}

undefined8
TFit_Obj5(int param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	bool bVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	longlong lVar6;
	longlong lVar7;
	int *piVar8;
	int *piVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined1 in_stack_ffffffbb;

	puVar4 = PTR_DAT_100f394c;
	puVar3 = PTR_DAT_100f3948;
	iVar2 = _DAT_100f1da4;
	ppuVar5 = &toc;
	iVar12 = 0;
	iVar11 = 0;
	lVar6 = random(0, 5, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8,
	    in_stack_ffffffaf, in_stack_ffffffbb);
	lVar7 = lVar6 + 1;
	while (true) {
		do {
			do {
				while (true) {
					if ((int)lVar7 < 1) {
						piVar8 = (int *)ppuVar5[-0x1bb2];
						*(int *)ppuVar5[-0x1bb1] = iVar12;
						*piVar8 = iVar11;
						return 1;
					}
					bVar1 = false;
					if (((int)*(char *)(*(int *)ppuVar5[-0x1d62] + iVar12 * 0x70 + iVar11) == *(int *)(ppuVar5[-0x1bf3] + param_1 * 8 + 4)) && (*(char *)(iVar2 + (int)*(short *)(*(int *)ppuVar5[-0x1d5f] + iVar12 * 0xe0 + iVar11 * 2)) == '\0')) {
						bVar1 = true;
						iVar10 = 0;
						piVar8 = (int *)puVar4;
						piVar9 = (int *)puVar3;
						while ((bVar1 && (iVar10 < 0x19))) {
							if (*(char *)(iVar2 + (int)*(short *)(*(int *)ppuVar5[-0x1d5f] + (iVar12 + *piVar8) * 0xe0 + (iVar11 + *piVar9) * 2)) != '\0') {
								bVar1 = false;
							}
							if (*(int *)(ppuVar5[-0x1bf3] + param_1 * 8 + 4) != (int)*(char *)(*(int *)ppuVar5[-0x1d62] + iVar11 + (iVar12 + *piVar8) * 0x70 + *piVar9)) {
								bVar1 = false;
							}
							piVar8 = piVar8 + 1;
							piVar9 = piVar9 + 1;
							iVar10 = iVar10 + 1;
						}
					}
					if (!bVar1)
						break;
					lVar7 = lVar7 + -1;
				}
				iVar12 = iVar12 + 1;
			} while (iVar12 != 0x70);
			iVar11 = iVar11 + 1;
			iVar12 = 0;
		} while (iVar11 != 0x70);
		if ((int)lVar7 == (int)(lVar6 + 1))
			break;
		iVar11 = 0;
	}
	return 0;
}

undefined8
TFit_SkelRoom(int param_1, undefined param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	int *piVar1;
	undefined *puVar2;
	ulonglong uVar3;
	ulonglong uVar4;
	undefined8 uVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	int iVar12;
	byte *pbVar13;
	undefined4 in_stack_ffffffb8;

	puVar2 = PTR_DAT_100f19b8;
	lVar11 = (longlong)param_8;
	lVar10 = (longlong)param_7;
	lVar9 = (longlong)param_6;
	lVar8 = (longlong)param_5;
	lVar7 = (longlong)param_4;
	lVar6 = (longlong)param_3;
	uVar3 = ZEXT48(&toc);
	if ((byte)(*PTR_DAT_100f183c - 1) < 2) {
		iVar12 = 0;
		pbVar13 = PTR_DAT_100f19c0;
		while (iVar12 < *(int *)puVar2) {
			uVar4 = IsSkel((uint)*pbVar13);
			if ((int)uVar4 != 0) {
				piVar1 = *(int **)((int)uVar3 + -0x6ecc);
				*piVar1 = iVar12;
				uVar5 = TFit_Obj5(param_1, (char)piVar1, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9,
				    (char)lVar10, (char)lVar11, in_stack_ffffffb8);
				return uVar5;
			}
			pbVar13 = pbVar13 + 0x208;
			iVar12 = iVar12 + 1;
		}
	}
	return 0;
}

undefined8
TFit_GoatShrine(int param_1, undefined param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	int *piVar1;
	undefined *puVar2;
	ulonglong uVar3;
	ulonglong uVar4;
	undefined8 uVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	int iVar12;
	byte *pbVar13;
	undefined4 in_stack_ffffffb8;

	puVar2 = PTR_DAT_100f19b8;
	lVar11 = (longlong)param_8;
	lVar10 = (longlong)param_7;
	lVar9 = (longlong)param_6;
	lVar8 = (longlong)param_5;
	lVar7 = (longlong)param_4;
	lVar6 = (longlong)param_3;
	uVar3 = ZEXT48(&toc);
	iVar12 = 0;
	pbVar13 = PTR_DAT_100f19c0;
	while (true) {
		if (*(int *)puVar2 <= iVar12) {
			return 0;
		}
		uVar4 = IsGoat((uint)*pbVar13);
		if ((int)uVar4 != 0)
			break;
		pbVar13 = pbVar13 + 0x208;
		iVar12 = iVar12 + 1;
	}
	piVar1 = *(int **)((int)uVar3 + -0x6ecc);
	*piVar1 = iVar12;
	uVar5 = TFit_Obj5(param_1, (char)piVar1, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9,
	    (char)lVar10, (char)lVar11, in_stack_ffffffb8);
	return uVar5;
}

undefined8
CheckThemeObj3(longlong param_1, longlong param_2, int param_3, longlong param_4, undefined param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	int iVar6;
	undefined *puVar7;
	longlong lVar8;
	ulonglong uVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	int iVar13;
	uint *puVar14;
	uint *puVar15;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;

	puVar7 = PTR_DAT_100f2004;
	iVar6 = _DAT_100f1da4;
	puVar5 = PTR_DAT_100f1a54;
	puVar4 = PTR_DAT_100f1a48;
	puVar3 = PTR_DAT_100f194c;
	lVar12 = (longlong)param_8;
	lVar11 = (longlong)param_7;
	lVar10 = (longlong)param_6;
	uVar9 = ZEXT48(PTR_DAT_100f2004);
	iVar13 = 0;
	puVar15 = (uint *)PTR_DAT_100f3944;
	puVar14 = (uint *)PTR_DAT_100f3940;
	while (true) {
		lVar8 = param_1 + (ulonglong)*puVar15;
		if (lVar8 < 0) {
			return 0;
		}
		uVar1 = *puVar14;
		if ((longlong)(param_2 + (ulonglong)uVar1) < 0) {
			return 0;
		}
		if (*(char *)(iVar6 + (int)*(short *)(*(int *)puVar5 + (int)lVar8 * 0xe0 + (int)(param_2 + (ulonglong)uVar1) * 2))
		    != '\0') {
			return 0;
		}
		iVar2 = (int)lVar8 * 0x70;
		if (*(int *)(puVar7 + param_3 * 8 + 4) != (int)*(char *)((int)param_2 + *(int *)puVar4 + iVar2 + uVar1))
			break;
		if (*(char *)((int)param_2 + *(int *)puVar3 + iVar2 + uVar1) != '\0') {
			return 0;
		}
		if (((int)param_4 != -1) && (lVar8 = random(0, param_4, (char)lVar8, (char)uVar1, (char)uVar9, (char)lVar10, (char)lVar11, (char)lVar12, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab), (int)lVar8 == 0)) {
			return 0;
		}
		iVar13 = iVar13 + 1;
		puVar14 = puVar14 + 1;
		puVar15 = puVar15 + 1;
		if (8 < iVar13) {
			return 1;
		}
	}
	return 0;
}

undefined8
TFit_Obj3(int param_1, undefined param_2, undefined param_3, undefined param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	ulonglong uVar3;
	undefined8 uVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	longlong lVar9;
	undefined8 unaff_r29;
	longlong lVar10;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffffa8;
	char cStack41;
	undefined4 local_28;
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	puVar2 = PTR_DAT_100f183c;
	lVar8 = (longlong)param_8;
	lVar7 = (longlong)param_7;
	lVar6 = (longlong)param_6;
	lVar5 = (longlong)param_5;
	uVar3 = ZEXT48(&toc);
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	lVar9 = 1;
	local_28 = _DAT_100f44b0;
	do {
		lVar10 = 1;
		do {
			uVar4 = CheckThemeObj3(lVar10, lVar9, param_1, (longlong)(&cStack41)[(uint)(byte)*puVar2],
			    (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, in_stack_ffffffa8);
			if ((int)uVar4 != 0) {
				puVar1 = *(undefined4 **)((int)uVar3 + -0x6ec8);
				**(undefined4 **)((int)uVar3 + -0x6ec4) = (int)lVar10;
				*puVar1 = (int)lVar9;
				return 1;
			}
			lVar10 = lVar10 + 1;
		} while ((int)lVar10 < 0x6f);
		lVar9 = lVar9 + 1;
	} while ((int)lVar9 < 0x6f);
	return 0;
}

undefined8 CheckThemeReqs(ulonglong param_1)

{
	undefined8 uVar1;

	if ((param_1 & 0xffffffff) < 0x11) {
		// WARNING: Could not recover jumptable at 0x100ae268. Too many branches
		// WARNING: Treating indirect jump as call
		uVar1 = (**(code **)(PTR_PTR_LAB_100f393c + (int)param_1 * 4))(param_1, *(code **)(PTR_PTR_LAB_100f393c + (int)param_1 * 4),
		    ZEXT48(PTR_DAT_100f183c));
		return uVar1;
	}
	return 1;
}

void SpecialThemeFit(undefined8 param_1, ulonglong param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;

	ppuVar1 = &toc;
	CheckThemeReqs(param_2);
	if ((param_2 & 0xffffffff) < 0x11) {
		// WARNING: Could not recover jumptable at 0x100ae384. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(ppuVar1[-0x15a6] + (int)param_2 * 4))();
		return;
	}
	return;
}

undefined8 CheckThemeRoom(char param_1)

{
	ulonglong uVar1;
	char *pcVar2;
	char *pcVar3;
	int *piVar4;
	byte *pbVar5;
	char *pcVar6;
	short *psVar7;
	byte *pbVar8;
	short *psVar9;
	int iVar10;
	int iVar11;
	longlong lVar12;

	uVar1 = (ulonglong) * (uint *)PTR_DAT_100f1ed8;
	pcVar2 = *(char **)PTR_DAT_100f1a48;
	piVar4 = (int *)PTR_DAT_100f1edc;
	if (0 < (int)*(uint *)PTR_DAT_100f1ed8) {
		do {
			if (param_1 == pcVar2[*piVar4 * 0x70 + piVar4[1]]) {
				return 0;
			}
			piVar4 = piVar4 + 4;
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
	}
	iVar11 = 0;
	pbVar8 = *(byte **)PTR_DAT_100f1834;
	iVar10 = 0;
	pcVar6 = pcVar2;
	do {
		lVar12 = 0x10;
		pbVar5 = pbVar8;
		pcVar3 = pcVar6;
		do {
			if (param_1 == *pcVar3) {
				if ((*pbVar5 & 8) != 0) {
					return 0;
				}
				iVar11 = iVar11 + 1;
			}
			if (param_1 == pcVar3[0x70]) {
				if ((pbVar5[0x70] & 8) != 0) {
					return 0;
				}
				iVar11 = iVar11 + 1;
			}
			if (param_1 == pcVar3[0xe0]) {
				if ((pbVar5[0xe0] & 8) != 0) {
					return 0;
				}
				iVar11 = iVar11 + 1;
			}
			if (param_1 == pcVar3[0x150]) {
				if ((pbVar5[0x150] & 8) != 0) {
					return 0;
				}
				iVar11 = iVar11 + 1;
			}
			if (param_1 == pcVar3[0x1c0]) {
				if ((pbVar5[0x1c0] & 8) != 0) {
					return 0;
				}
				iVar11 = iVar11 + 1;
			}
			if (param_1 == pcVar3[0x230]) {
				if ((pbVar5[0x230] & 8) != 0) {
					return 0;
				}
				iVar11 = iVar11 + 1;
			}
			if (param_1 == pcVar3[0x2a0]) {
				if ((pbVar5[0x2a0] & 8) != 0) {
					return 0;
				}
				iVar11 = iVar11 + 1;
			}
			pcVar3 = pcVar3 + 0x310;
			pbVar5 = pbVar5 + 0x310;
			lVar12 = lVar12 + -1;
		} while (lVar12 != 0);
		iVar10 = iVar10 + 1;
		pbVar8 = pbVar8 + 1;
		pcVar6 = pcVar6 + 1;
	} while (iVar10 < 0x70);
	if ((*PTR_DAT_100f183c == '\x01') && ((iVar11 < 9 || (100 < iVar11)))) {
		return 0;
	}
	iVar10 = 0;
	psVar9 = *(short **)PTR_DAT_100f1a54;
	do {
		lVar12 = 0x38;
		pcVar6 = pcVar2;
		psVar7 = psVar9;
		do {
			if ((param_1 == *pcVar6) && (*(char *)(_DAT_100f1da4 + (int)*psVar7) == '\0')) {
				if ((param_1 != pcVar6[-0x70]) && (*(char *)(_DAT_100f1da4 + (int)psVar7[-0x70]) == '\0')) {
					return 0;
				}
				if ((param_1 != pcVar6[0x70]) && (*(char *)(_DAT_100f1da4 + (int)psVar7[0x70]) == '\0')) {
					return 0;
				}
				if ((param_1 != pcVar6[-1]) && (*(char *)(_DAT_100f1da4 + (int)psVar7[-1]) == '\0')) {
					return 0;
				}
				if ((param_1 != pcVar6[1]) && (*(char *)(_DAT_100f1da4 + (int)psVar7[1]) == '\0')) {
					return 0;
				}
			}
			if ((param_1 == pcVar6[0x70]) && (*(char *)(_DAT_100f1da4 + (int)psVar7[0x70]) == '\0')) {
				if ((param_1 != *pcVar6) && (*(char *)(_DAT_100f1da4 + (int)*psVar7) == '\0')) {
					return 0;
				}
				if ((param_1 != pcVar6[0xe0]) && (*(char *)(_DAT_100f1da4 + (int)psVar7[0xe0]) == '\0')) {
					return 0;
				}
				if ((param_1 != pcVar6[0x6f]) && (*(char *)(_DAT_100f1da4 + (int)psVar7[0x6f]) == '\0')) {
					return 0;
				}
				if ((param_1 != pcVar6[0x71]) && (*(char *)(_DAT_100f1da4 + (int)psVar7[0x71]) == '\0')) {
					return 0;
				}
			}
			pcVar6 = pcVar6 + 0xe0;
			psVar7 = psVar7 + 0xe0;
			lVar12 = lVar12 + -1;
		} while (lVar12 != 0);
		iVar10 = iVar10 + 1;
		psVar9 = psVar9 + 1;
		pcVar2 = pcVar2 + 1;
		if (0x6f < iVar10) {
			return 1;
		}
	} while (true);
}

void InitThemes(undefined param_1, undefined param_2, undefined param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	int iVar7;
	ulonglong uVar8;
	longlong lVar9;
	undefined8 uVar10;
	int iVar12;
	longlong lVar11;
	int iVar13;
	undefined *puVar14;
	ulonglong uVar15;
	longlong lVar16;
	longlong lVar17;
	longlong lVar18;
	longlong lVar19;
	longlong lVar20;
	longlong lVar21;
	undefined *puVar22;
	undefined *puVar23;
	char *pcVar24;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;

	iVar7 = _DAT_100f3934;
	pcVar24 = PTR_DAT_100f2004;
	puVar5 = PTR_DAT_100f2000;
	puVar14 = PTR_DAT_100f1fe0;
	puVar3 = PTR_DAT_100f1f28;
	puVar23 = PTR_DAT_100f1d64;
	puVar2 = PTR_DAT_100f1d60;
	puVar22 = PTR_DAT_100f183c;
	lVar20 = (longlong)param_8;
	lVar19 = (longlong)param_7;
	lVar18 = (longlong)param_6;
	lVar17 = (longlong)param_5;
	lVar16 = (longlong)param_4;
	*(undefined4 *)PTR_DAT_100f2000 = 0;
	*(undefined4 *)puVar3 = 0xffffffff;
	puVar4 = PTR_DAT_100f2100;
	*(undefined4 *)puVar14 = 1;
	puVar14 = PTR_DAT_100f20f0;
	*(undefined4 *)puVar4 = 1;
	puVar4 = PTR_DAT_100f20f8;
	*(undefined4 *)puVar14 = 1;
	puVar6 = PTR_DAT_100f20fc;
	*(undefined4 *)puVar4 = 1;
	puVar14 = PTR_DAT_100f20f4;
	*(undefined4 *)puVar6 = 1;
	puVar4 = PTR_DAT_100f20ec;
	*(undefined4 *)puVar14 = 1;
	puVar14 = PTR_DAT_100f20e8;
	*(undefined4 *)puVar4 = 1;
	puVar4 = PTR_DAT_100f1fd8;
	*(undefined4 *)puVar14 = 0;
	puVar14 = PTR_DAT_100f17ec;
	*(undefined4 *)puVar4 = 1;
	puVar4 = PTR_DAT_100f20e4;
	if (*puVar14 != '\x10') {
		if (*puVar22 == '\x01') {
			*(undefined4 *)PTR_DAT_100f20e4 = 0;
			lVar21 = 0;
			*(undefined4 *)(puVar4 + 4) = 0;
			*(undefined4 *)(puVar4 + 8) = 0;
			*(undefined4 *)(puVar4 + 0xc) = 0;
			while (((int)lVar21 < 0x100 && (*(int *)puVar5 < 0x32))) {
				uVar10 = CheckThemeRoom((char)lVar21);
				if ((int)uVar10 != 0) {
					uVar1 = *(int *)puVar5 * 8;
					uVar15 = (ulonglong)uVar1;
					*(int *)(pcVar24 + uVar1 + 4) = (int)lVar21;
					lVar9 = random(0, 4, (char)uVar1, (char)lVar16, (char)lVar17, (char)lVar18, (char)lVar19,
					    (char)lVar20, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
					uVar8 = (ulonglong) * (uint *)(iVar7 + (int)lVar9 * 4);
					while (iVar13 = SpecialThemeFit((ulonglong) * (uint *)puVar5, uVar8, (char)uVar15, (char)lVar16,
					           (char)lVar17, (char)lVar18, (char)lVar19, (char)lVar20,
					           in_stack_ffffff98),
					    iVar13 == 0) {
						uVar8 = random(0, 0x11, (char)uVar15, (char)lVar16, (char)lVar17, (char)lVar18,
						    (char)lVar19, (char)lVar20, in_stack_ffffff98, in_stack_ffffff9f,
						    in_stack_ffffffab);
					}
					pcVar24[*(int *)puVar5 * 8] = (char)uVar8;
					*(int *)puVar5 = *(int *)puVar5 + 1;
				}
				lVar21 = lVar21 + 1;
			}
		}
		if ((byte)(*puVar22 - 2) < 3) {
			iVar13 = *(int *)puVar2;
			lVar21 = 0;
			if (0 < iVar13) {
				if ((8 < iVar13) && (uVar8 = (ulonglong)(iVar13 - 1U >> 3), puVar14 = pcVar24, 0 < iVar13 + -8)) {
					do {
						*puVar14 = 0xff;
						lVar21 = lVar21 + 8;
						puVar14[8] = 0xff;
						puVar14[0x10] = 0xff;
						puVar14[0x18] = 0xff;
						puVar14[0x20] = 0xff;
						puVar14[0x28] = 0xff;
						puVar14[0x30] = 0xff;
						puVar14[0x38] = 0xff;
						puVar14 = puVar14 + 0x40;
						uVar8 = uVar8 - 1;
					} while (uVar8 != 0);
				}
				puVar14 = pcVar24 + (int)lVar21 * 8;
				lVar9 = (ulonglong) * (uint *)puVar2 - lVar21;
				if ((int)lVar21 < (int)*(uint *)puVar2) {
					do {
						*puVar14 = 0xff;
						puVar14 = puVar14 + 8;
						lVar9 = lVar9 + -1;
					} while (lVar9 != 0);
				}
			}
			uVar10 = QuestStatus(3);
			if ((int)uVar10 != 0) {
				lVar9 = 0;
				puVar14 = pcVar24;
				puVar22 = puVar23;
				while (iVar13 = (int)lVar9, iVar13 < *(int *)puVar2) {
					*(undefined4 *)(puVar14 + 4) = *(undefined4 *)(puVar22 + 8);
					iVar12 = SpecialThemeFit(lVar9, 5, (char)lVar21, (char)lVar16, (char)lVar17, (char)lVar18,
					    (char)lVar19, (char)lVar20, in_stack_ffffff98);
					if (iVar12 != 0) {
						pcVar24[iVar13 * 8] = 5;
						*(int *)puVar3 = iVar13;
						break;
					}
					puVar22 = puVar22 + 0x14;
					puVar14 = puVar14 + 8;
					lVar9 = lVar9 + 1;
				}
			}
			lVar9 = 0;
			while ((int)lVar9 < *(int *)puVar2) {
				if (*pcVar24 == -1) {
					*(undefined4 *)(pcVar24 + 4) = *(undefined4 *)(puVar23 + 8);
					lVar11 = random(0, 4, (char)lVar21, (char)lVar16, (char)lVar17, (char)lVar18, (char)lVar19, (char)lVar20, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
					uVar8 = (ulonglong) * (uint *)(iVar7 + (int)lVar11 * 4);
					while (iVar13 = SpecialThemeFit(lVar9, uVar8, (char)lVar21, (char)lVar16, (char)lVar17,
					           (char)lVar18, (char)lVar19, (char)lVar20, in_stack_ffffff98),
					    iVar13 == 0) {
						uVar8 = random(0, 0x11, (char)lVar21, (char)lVar16, (char)lVar17, (char)lVar18,
						    (char)lVar19, (char)lVar20, in_stack_ffffff98, in_stack_ffffff9f,
						    in_stack_ffffffab);
					}
					*pcVar24 = (char)uVar8;
				}
				pcVar24 = pcVar24 + 8;
				puVar23 = puVar23 + 0x14;
				lVar9 = lVar9 + 1;
			}
			*(int *)puVar5 = *(int *)puVar5 + *(int *)puVar2;
		}
	}
	return;
}

void HoldThemeRooms(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	char cVar4;
	int iVar5;
	int iVar6;
	undefined *puVar7;
	int iVar8;
	int iVar9;
	longlong lVar10;

	puVar3 = PTR_DAT_100f2000;
	puVar2 = PTR_DAT_100f1a48;
	puVar1 = PTR_DAT_100f1834;
	if (*PTR_DAT_100f17ec != '\x10') {
		if (*PTR_DAT_100f183c == '\x01') {
			iVar8 = 0;
			puVar7 = PTR_DAT_100f2004;
			while (iVar8 < *(int *)puVar3) {
				iVar9 = 0;
				cVar4 = (char)*(undefined4 *)(puVar7 + 4);
				do {
					lVar10 = 0x10;
					iVar6 = 0;
					do {
						if (cVar4 == *(char *)(iVar9 + *(int *)puVar2 + iVar6)) {
							*(byte *)(iVar9 + *(int *)puVar1 + iVar6) = *(byte *)(iVar9 + *(int *)puVar1 + iVar6) | 8;
						}
						if (cVar4 == *(char *)(iVar9 + *(int *)puVar2 + iVar6 + 0x70)) {
							iVar5 = *(int *)puVar1 + iVar6 + 0x70;
							*(byte *)(iVar9 + iVar5) = *(byte *)(iVar9 + iVar5) | 8;
						}
						if (cVar4 == *(char *)(iVar9 + *(int *)puVar2 + iVar6 + 0xe0)) {
							iVar5 = *(int *)puVar1 + iVar6 + 0xe0;
							*(byte *)(iVar9 + iVar5) = *(byte *)(iVar9 + iVar5) | 8;
						}
						if (cVar4 == *(char *)(iVar9 + *(int *)puVar2 + iVar6 + 0x150)) {
							iVar5 = *(int *)puVar1 + iVar6 + 0x150;
							*(byte *)(iVar9 + iVar5) = *(byte *)(iVar9 + iVar5) | 8;
						}
						if (cVar4 == *(char *)(iVar9 + *(int *)puVar2 + iVar6 + 0x1c0)) {
							iVar5 = *(int *)puVar1 + iVar6 + 0x1c0;
							*(byte *)(iVar9 + iVar5) = *(byte *)(iVar9 + iVar5) | 8;
						}
						if (cVar4 == *(char *)(iVar9 + *(int *)puVar2 + iVar6 + 0x230)) {
							iVar5 = *(int *)puVar1 + iVar6 + 0x230;
							*(byte *)(iVar9 + iVar5) = *(byte *)(iVar9 + iVar5) | 8;
						}
						if (cVar4 == *(char *)(iVar9 + *(int *)puVar2 + iVar6 + 0x2a0)) {
							iVar5 = *(int *)puVar1 + iVar6 + 0x2a0;
							*(byte *)(iVar9 + iVar5) = *(byte *)(iVar9 + iVar5) | 8;
						}
						iVar6 = iVar6 + 0x310;
						lVar10 = lVar10 + -1;
					} while (lVar10 != 0);
					iVar9 = iVar9 + 1;
				} while (iVar9 < 0x70);
				puVar7 = puVar7 + 8;
				iVar8 = iVar8 + 1;
			}
		} else {
			DRLG_HoldThemeRooms();
		}
	}
	return;
}

void PlaceThemeMonsts(int param_1, longlong param_2, undefined param_3, undefined param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	uint uVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	int iVar7;
	ulonglong uVar8;
	undefined **ppuVar9;
	longlong lVar10;
	int iVar11;
	ulonglong uVar12;
	ulonglong uVar13;
	longlong lVar14;
	longlong lVar15;
	longlong lVar16;
	longlong lVar17;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	int iVar18;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	int iVar19;
	undefined8 unaff_r25;
	int iVar20;
	undefined8 unaff_r26;
	int iVar21;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_fffffdd8;
	undefined in_stack_fffffddf;
	undefined in_stack_fffffdeb;
	uint local_1f8[113];
	undefined4 local_34;
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

	iVar7 = _DAT_100f1da4;
	puVar6 = PTR_DAT_100f1a54;
	puVar5 = PTR_DAT_100f1a48;
	puVar4 = PTR_DAT_100f194c;
	puVar3 = PTR_DAT_100f1944;
	lVar17 = (longlong)param_8;
	lVar16 = (longlong)param_7;
	lVar15 = (longlong)param_6;
	lVar14 = (longlong)param_5;
	ppuVar9 = &toc;
	local_34 = (undefined4)((ulonglong)unaff_r19 >> 0x20);
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
	lVar10 = 0;
	uVar13 = 0;
	uVar8 = (ulonglong) * (uint *)PTR_DAT_100f19b8;
	uVar12 = ZEXT48(PTR_DAT_100f19c0);
	uVar12._7_1_ = SUB41(PTR_DAT_100f19c0, 0);
	if (0 < (int)*(uint *)PTR_DAT_100f19b8) {
		do {
			if ((*(byte *)((int)uVar12 + 1) & 1) != 0) {
				iVar11 = (int)lVar10;
				lVar10 = lVar10 + 1;
				local_1f8[iVar11] = (uint)uVar13;
			}
			uVar12 = uVar12 + 0x208;
			uVar12._7_1_ = (undefined)uVar12;
			uVar13 = uVar13 + 1;
			uVar8 = uVar8 - 1;
		} while (uVar8 != 0);
	}
	lVar10 = random(0, lVar10, (undefined)uVar12, (char)uVar13, param_5, param_6, param_7, param_8,
	    in_stack_fffffdd8, in_stack_fffffddf, in_stack_fffffdeb);
	uVar8 = (ulonglong)(uint)((int)lVar10 * 4);
	puVar1 = ppuVar9[-0x1bf3];
	uVar2 = local_1f8[(int)lVar10];
	iVar11 = 0;
	iVar19 = 0;
	do {
		iVar21 = 0;
		iVar20 = 0;
		iVar18 = 0;
		do {
			if ((int)*(char *)(iVar11 + *(int *)puVar5 + iVar21) == *(int *)(puVar1 + param_1 * 8 + 4)) {
				if (*(char *)(iVar7 + (int)*(short *)(iVar19 + *(int *)puVar6 + iVar20)) == '\0') {
					if (((*(char *)(iVar11 + *(int *)puVar3 + iVar21) == '\0') && (*(char *)(iVar11 + *(int *)puVar4 + iVar21) == '\0')) && (lVar10 = random(0, param_2, (char)uVar8, (char)uVar13, (char)lVar14, (char)lVar15, (char)lVar16, (char)lVar17, in_stack_fffffdd8, in_stack_fffffddf, in_stack_fffffdeb), (int)lVar10 == 0)) {
						uVar8 = random(0, 8, (char)uVar8, (char)uVar13, (char)lVar14, (char)lVar15, (char)lVar16, (char)lVar17, in_stack_fffffdd8, in_stack_fffffddf, in_stack_fffffdeb);
						lVar14 = 1;
						uVar13 = (ulonglong)uVar2;
						AddMonster(iVar18, iVar11, (int)uVar8, uVar2, 1, (char)lVar15, (char)lVar16, (char)lVar17,
						    in_stack_fffffdd8);
					}
				}
			}
			iVar18 = iVar18 + 1;
			iVar20 = iVar20 + 0xe0;
			iVar21 = iVar21 + 0x70;
		} while (iVar18 < 0x70);
		iVar11 = iVar11 + 1;
		iVar19 = iVar19 + 2;
	} while (iVar11 < 0x70);
	return;
}

void Theme_Barrel(int param_1, undefined param_2, undefined param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	undefined *puVar5;
	longlong lVar6;
	uint uVar7;
	ulonglong uVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	ulonglong uVar14;
	undefined8 unaff_r23;
	int iVar15;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	int iVar16;
	undefined8 unaff_r26;
	int iVar17;
	undefined8 unaff_r27;
	int iVar18;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;
	char cStack57;
	undefined4 local_38;
	uint local_34;
	undefined4 local_30;
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

	puVar5 = PTR_DAT_100f2004;
	iVar4 = _DAT_100f1da4;
	puVar3 = PTR_DAT_100f1a54;
	puVar2 = PTR_DAT_100f1a48;
	puVar1 = PTR_DAT_100f183c;
	lVar13 = (longlong)param_8;
	lVar12 = (longlong)param_7;
	lVar11 = (longlong)param_6;
	lVar10 = (longlong)param_5;
	lVar9 = (longlong)param_4;
	local_30 = (undefined4)((ulonglong)unaff_r20 >> 0x20);
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
	uVar14 = 0;
	iVar16 = 0;
	uVar8 = (ulonglong)_DAT_100f44b4;
	local_34 = _DAT_100f44b4;
	local_38 = _DAT_100f44b8;
	do {
		iVar18 = 0;
		iVar17 = 0;
		iVar15 = 0;
		do {
			if ((((int)*(char *)((int)uVar14 + *(int *)puVar2 + iVar18) == *(int *)(puVar5 + param_1 * 8 + 4)) && (*(char *)(iVar4 + (int)*(short *)(iVar16 + *(int *)puVar3 + iVar17)) == '\0')) && (lVar6 = random(0, (longlong) * (char *)((int)&local_34 + ((uint)(byte)*puVar1 - 1)), (char)uVar8, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab), (int)lVar6 == 0)) {
				lVar6 = random(0, (longlong) * (char *)((int)&local_34 + ((uint)(byte)*puVar1 - 1)),
				    (char)uVar8, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12,
				    (char)lVar13, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
				if ((int)lVar6 == 0) {
					uVar7 = 0x39;
				} else {
					uVar7 = 0x3a;
				}
				uVar8 = uVar14;
				AddObject(uVar7, iVar15, (int)uVar14, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12,
				    (char)lVar13, in_stack_ffffff98);
			}
			iVar15 = iVar15 + 1;
			iVar17 = iVar17 + 0xe0;
			iVar18 = iVar18 + 0x70;
		} while (iVar15 < 0x70);
		uVar14 = uVar14 + 1;
		iVar16 = iVar16 + 2;
	} while ((int)uVar14 < 0x70);
	PlaceThemeMonsts(param_1, (longlong)(&cStack57)[(uint)(byte)*puVar1], (char)uVar8, (char)lVar9,
	    (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13, in_stack_ffffff98);
	return;
}

void Theme_Shrine(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined4 in_stack_ffffffb8;
	char cStack25;
	undefined4 local_18;

	puVar2 = PTR_DAT_100f210c;
	puVar1 = PTR_DAT_100f2108;
	ppuVar3 = &toc;
	local_18 = _DAT_100f44bc;
	TFit_Shrine(param_1);
	if (*(int *)ppuVar3[-0x1bb3] == 1) {
		AddObject(9, *(int *)puVar2 + -1, *(int *)puVar1, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
		AddObject(0x3c, *(int *)puVar2, *(int *)puVar1, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
		AddObject(9, *(int *)puVar2 + 1, *(int *)puVar1, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
	} else {
		AddObject(9, *(int *)puVar2, *(int *)puVar1 + -1, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
		AddObject(0x3b, *(int *)puVar2, *(int *)puVar1, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
		AddObject(9, *(int *)puVar2, *(int *)puVar1 + 1, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
	}
	PlaceThemeMonsts(param_1, (longlong)(&cStack25)[(uint)(byte)*ppuVar3[-0x1de5]], (char)ppuVar3[-0x1de5],
	    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	return;
}

void Theme_MonstPit(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined **ppuVar2;
	longlong lVar3;
	int iVar4;
	int iVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined1 in_stack_ffffffcb;
	char cStack25;
	undefined4 local_18;

	iVar1 = _DAT_100f1da4;
	ppuVar2 = &toc;
	local_18 = _DAT_100f44c0;
	lVar3 = random(0, 100, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8,
	    in_stack_ffffffbf, in_stack_ffffffcb);
	lVar3 = lVar3 + 1;
	iVar4 = 0;
	uVar8 = (undefined) * (int *)ppuVar2[-0x1d5f];
	iVar5 = 0;
	while (uVar9 = (undefined)lVar3, 0 < (int)lVar3) {
		if (((int)*(char *)(*(int *)ppuVar2[-0x1d62] + iVar4 * 0x70 + iVar5) == *(int *)(ppuVar2[-0x1bf3] + param_1 * 8 + 4)) && (*(char *)(iVar1 + (int)*(short *)(*(int *)ppuVar2[-0x1d5f] + iVar4 * 0xe0 + iVar5 * 2)) == '\0')) {
			lVar3 = lVar3 + -1;
		}
		if ((0 < (int)lVar3) && (iVar4 = iVar4 + 1, iVar4 == 0x70)) {
			iVar5 = iVar5 + 1;
			iVar4 = 0;
			if (iVar5 == 0x70) {
				iVar5 = 0;
			}
		}
	}
	uVar6 = 0;
	uVar7 = 1;
	CreateRndItem(iVar4, iVar5, 1, 0, 1, uVar8, uVar9, param_8, in_stack_ffffffb8);
	ItemNoFlippy();
	PlaceThemeMonsts(param_1, (longlong)(&cStack25)[(uint)(byte)*ppuVar2[-0x1de5]], (char)ppuVar2[-0x1de5],
	    uVar6, uVar7, uVar8, uVar9, param_8, in_stack_ffffffb8);
	return;
}

void Theme_SkelRoom(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	longlong lVar6;
	ulonglong uVar7;
	undefined8 uVar8;
	undefined uVar9;
	char cVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	ulonglong uVar14;
	undefined8 unaff_r31;
	ulonglong uVar15;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;
	char cStack41;
	undefined4 local_28;
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	puVar4 = PTR_DAT_100f194c;
	puVar3 = PTR_DAT_100f183c;
	ppuVar5 = &toc;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	local_28 = _DAT_100f44c4;
	TFit_SkelRoom(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	uVar1 = *(uint *)ppuVar5[-0x1bb1];
	uVar15 = (ulonglong)uVar1;
	uVar2 = *(uint *)ppuVar5[-0x1bb2];
	uVar14 = (ulonglong)uVar2;
	uVar13 = (undefined)uVar2;
	uVar9 = uVar13;
	AddObject(3, uVar1, uVar2, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	cVar10 = (&cStack41)[(uint)(byte)*puVar3];
	lVar6 = random(0, (longlong)cVar10, uVar9, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
	if ((int)lVar6 == 0) {
		uVar11 = (undefined)(uVar15 - 1);
		uVar12 = (undefined)(uVar14 - 1);
		uVar9 = AddObject(0xb, (int)(uVar15 - 1), (int)(uVar14 - 1), param_4, param_5, param_6, param_7,
		    param_8, in_stack_ffffffa8);
	} else {
		uVar7 = PreSpawnSkeleton((char)lVar6, cVar10, uVar9, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
		uVar11 = (undefined)(uVar15 - 1);
		uVar12 = (undefined)(uVar14 - 1);
		uVar8 = SpawnSkeleton((int)uVar7, uVar15 - 1, (int)(uVar14 - 1), param_4, param_5, param_6, param_7,
		    param_8, in_stack_ffffffa8);
		uVar9 = (undefined)uVar8;
	}
	uVar7 = PreSpawnSkeleton(uVar9, uVar11, uVar12, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	uVar9 = (undefined)(uVar14 - 1);
	SpawnSkeleton((int)uVar7, uVar15, (int)(uVar14 - 1), param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	cVar10 = (&cStack41)[(uint)(byte)*puVar3];
	lVar6 = random(0, (longlong)cVar10, uVar9, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
	if ((int)lVar6 == 0) {
		uVar9 = (undefined)(uVar14 - 1);
		AddObject(0xd, uVar1 + 1, (int)(uVar14 - 1), param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
	} else {
		uVar7 = PreSpawnSkeleton((char)lVar6, cVar10, uVar9, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
		uVar9 = (undefined)(uVar14 - 1);
		SpawnSkeleton((int)uVar7, uVar15 + 1, (int)(uVar14 - 1), param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
	}
	cVar10 = (&cStack41)[(uint)(byte)*puVar3];
	lVar6 = random(0, (longlong)cVar10, uVar9, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
	if ((int)lVar6 == 0) {
		uVar9 = uVar13;
		AddObject(0xc, uVar1 - 1, uVar2, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	} else {
		uVar7 = PreSpawnSkeleton((char)lVar6, cVar10, uVar9, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
		uVar9 = uVar13;
		SpawnSkeleton((int)uVar7, uVar15 - 1, uVar2, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
	}
	cVar10 = (&cStack41)[(uint)(byte)*puVar3];
	lVar6 = random(0, (longlong)cVar10, uVar9, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
	if ((int)lVar6 == 0) {
		AddObject(0xc, uVar1 + 1, uVar2, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	} else {
		uVar7 = PreSpawnSkeleton((char)lVar6, cVar10, uVar9, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
		SpawnSkeleton((int)uVar7, uVar15 + 1, uVar2, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
	}
	cVar10 = (&cStack41)[(uint)(byte)*puVar3];
	lVar6 = random(0, (longlong)cVar10, uVar13, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
	if ((int)lVar6 == 0) {
		uVar13 = (undefined)(uVar15 - 1);
		uVar11 = (undefined)(uVar14 + 1);
		uVar9 = AddObject(0xd, (int)(uVar15 - 1), (int)(uVar14 + 1), param_4, param_5, param_6, param_7,
		    param_8, in_stack_ffffffa8);
	} else {
		uVar7 = PreSpawnSkeleton((char)lVar6, cVar10, uVar13, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
		uVar13 = (undefined)(uVar15 - 1);
		uVar11 = (undefined)(uVar14 + 1);
		uVar8 = SpawnSkeleton((int)uVar7, uVar15 - 1, (int)(uVar14 + 1), param_4, param_5, param_6, param_7,
		    param_8, in_stack_ffffffa8);
		uVar9 = (undefined)uVar8;
	}
	uVar7 = PreSpawnSkeleton(uVar9, uVar13, uVar11, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	uVar9 = (undefined)(uVar14 + 1);
	SpawnSkeleton((int)uVar7, uVar15, (int)(uVar14 + 1), param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	cVar10 = (&cStack41)[(uint)(byte)*puVar3];
	lVar6 = random(0, (longlong)cVar10, uVar9, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
	if ((int)lVar6 == 0) {
		AddObject(0xb, uVar1 + 1, uVar2 + 1, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	} else {
		uVar14 = PreSpawnSkeleton((char)lVar6, cVar10, uVar9, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
		SpawnSkeleton((int)uVar14, uVar15 + 1, uVar2 + 1, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
	}
	if (*(char *)(*(int *)puVar4 + uVar1 * 0x70 + uVar2 + -3) == '\0') {
		AddObject(0x3d, uVar1, uVar2 - 2, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	}
	if (*(char *)(*(int *)puVar4 + uVar1 * 0x70 + uVar2 + 3) == '\0') {
		AddObject(0x3d, uVar1, uVar2 + 2, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	}
	return;
}

void Theme_Treasure(int param_1, undefined param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	byte bVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	int iVar7;
	undefined **ppuVar8;
	longlong lVar9;
	ulonglong uVar10;
	int iVar11;
	ulonglong uVar12;
	longlong lVar13;
	longlong lVar14;
	longlong lVar15;
	longlong lVar16;
	longlong lVar17;
	undefined8 unaff_r18;
	undefined8 unaff_r19;
	int iVar18;
	undefined8 unaff_r20;
	int iVar19;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	int iVar20;
	undefined8 unaff_r23;
	int iVar21;
	undefined8 unaff_r24;
	int iVar22;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int iVar23;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined in_stack_ffffff9b;
	char cStack69;
	undefined4 local_44;
	undefined4 local_40[2];
	undefined4 local_38;
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

	iVar7 = _DAT_100f1da4;
	puVar6 = PTR_DAT_100f1a54;
	puVar5 = PTR_DAT_100f1a48;
	puVar4 = PTR_DAT_100f1940;
	puVar3 = PTR_DAT_100f183c;
	lVar17 = (longlong)param_8;
	lVar16 = (longlong)param_7;
	lVar15 = (longlong)param_6;
	lVar14 = (longlong)param_5;
	lVar13 = (longlong)param_4;
	uVar12 = SEXT18(param_3);
	ppuVar8 = &toc;
	local_38 = (undefined4)((ulonglong)unaff_r18 >> 0x20);
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
	local_40[0] = _DAT_100f44c8;
	local_44 = _DAT_100f44cc;
	GetRndSeed((char)param_1, (char)_DAT_100f44c8, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffff88);
	puVar2 = ppuVar8[-0x1bf3];
	iVar18 = 0;
	iVar20 = 0;
	do {
		iVar22 = 0;
		iVar21 = 0;
		iVar19 = 0;
		do {
			if (((int)*(char *)(iVar18 + *(int *)puVar5 + iVar22) == *(int *)(puVar2 + param_1 * 8 + 4))
			    && (*(char *)(iVar7 + (int)*(short *)(iVar20 + *(int *)puVar6 + iVar21)) == '\0')) {
				lVar9 = random(0, (longlong) * (char *)((int)local_40 + ((uint)(byte)*puVar3 - 1)),
				    (char)uVar12, (char)lVar13, (char)lVar14, (char)lVar15, (char)lVar16,
				    (char)lVar17, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b);
				uVar10 = random(0, (longlong) * (char *)((int)local_40 + ((uint)(byte)*puVar3 - 1)),
				    (char)uVar12, (char)lVar13, (char)lVar14, (char)lVar15, (char)lVar16,
				    (char)lVar17, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b);
				if ((uVar10 & 0x7fffffff) == 0) {
					uVar12 = 0;
					lVar13 = 0xb;
					lVar14 = 0;
					lVar15 = 0;
					lVar16 = 1;
					CreateTypeItem(iVar19, iVar18, 0, 0xb, 0, 0, 1, (char)lVar17, in_stack_ffffff88);
					ItemNoFlippy();
				}
				iVar23 = (int)lVar9;
				if (iVar23 == 0) {
					lVar13 = 0;
					lVar14 = 1;
					CreateRndItem(iVar19, iVar18, 0, 0, 1, (char)lVar15, (char)lVar16, (char)lVar17, in_stack_ffffff88);
					ItemNoFlippy();
				} else {
					if (iVar23 < (int)*(char *)((int)local_40 + ((uint)(byte)*puVar3 - 1)) + -2)
						goto LAB_100af624;
				}
				iVar11 = ItemNoFlippy();
				bVar1 = *puVar3;
				uVar12 = (ulonglong)bVar1;
				if (((int)*(char *)((int)local_40 + ((uint)bVar1 - 1)) + -2 <= iVar23) && (bVar1 != 1)) {
					*(int *)(puVar4 + iVar11 * 0x170 + 0xc4) = *(int *)(puVar4 + iVar11 * 0x170 + 0xc4) >> 1;
				}
			}
		LAB_100af624:
			iVar19 = iVar19 + 1;
			iVar21 = iVar21 + 0xe0;
			iVar22 = iVar22 + 0x70;
		} while (iVar19 < 0x70);
		iVar18 = iVar18 + 1;
		iVar20 = iVar20 + 2;
		if (0x6f < iVar18) {
			PlaceThemeMonsts(param_1, (longlong)(&cStack69)[(uint)(byte)*puVar3], (char)uVar12, (char)lVar13,
			    (char)lVar14, (char)lVar15, (char)lVar16, (char)lVar17, in_stack_ffffff88);
			return;
		}
	} while (true);
}

void Theme_Library(int param_1, undefined param_2, undefined param_3, undefined param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	ulonglong uVar6;
	int iVar7;
	undefined8 uVar8;
	longlong lVar9;
	undefined uVar10;
	undefined uVar11;
	longlong lVar12;
	undefined uVar13;
	longlong lVar14;
	undefined uVar15;
	longlong lVar16;
	undefined uVar17;
	longlong lVar18;
	undefined uVar19;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	longlong lVar20;
	undefined8 unaff_r23;
	longlong lVar21;
	undefined8 unaff_r24;
	int iVar22;
	undefined8 unaff_r25;
	int iVar23;
	undefined8 unaff_r26;
	int iVar24;
	undefined8 unaff_r27;
	ulonglong uVar25;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined in_stack_ffffff9b;
	undefined4 local_48;
	undefined4 local_44[6];
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

	puVar5 = PTR_DAT_100f210c;
	puVar4 = PTR_DAT_100f2108;
	puVar3 = PTR_DAT_100f1954;
	puVar2 = PTR_DAT_100f194c;
	puVar1 = PTR_DAT_100f183c;
	lVar18 = (longlong)param_8;
	lVar16 = (longlong)param_7;
	lVar14 = (longlong)param_6;
	lVar12 = (longlong)param_5;
	uVar6 = ZEXT48(&toc);
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
	uVar25 = ZEXT48(PTR_DAT_100f1948);
	local_44[0] = _DAT_100f44d0;
	local_48 = _DAT_100f44d4;
	TFit_Shrine(param_1);
	if (**(int **)((int)uVar6 + -0x6ecc) == 1) {
		AddObject(0x41, *(int *)puVar5 + -1, *(int *)puVar4, param_4, (char)lVar12, (char)lVar14,
		    (char)lVar16, (char)lVar18, in_stack_ffffff88);
		AddObject(0x3f, *(int *)puVar5, *(int *)puVar4, param_4, (char)lVar12, (char)lVar14, (char)lVar16,
		    (char)lVar18, in_stack_ffffff88);
		AddObject(0x41, *(int *)puVar5 + 1, *(int *)puVar4, param_4, (char)lVar12, (char)lVar14,
		    (char)lVar16, (char)lVar18, in_stack_ffffff88);
	} else {
		AddObject(0x41, *(int *)puVar5, *(int *)puVar4 + -1, param_4, (char)lVar12, (char)lVar14,
		    (char)lVar16, (char)lVar18, in_stack_ffffff88);
		AddObject(0x3e, *(int *)puVar5, *(int *)puVar4, param_4, (char)lVar12, (char)lVar14, (char)lVar16,
		    (char)lVar18, in_stack_ffffff88);
		AddObject(0x41, *(int *)puVar5, *(int *)puVar4 + 1, param_4, (char)lVar12, (char)lVar14,
		    (char)lVar16, (char)lVar18, in_stack_ffffff88);
	}
	lVar20 = 1;
	iVar22 = 2;
	do {
		lVar21 = 1;
		iVar24 = 0xe0;
		iVar23 = 0x70;
		do {
			uVar11 = 0xff;
			uVar10 = (char)param_1;
			uVar8 = CheckThemeObj3(lVar21, lVar20, param_1, -1, (char)lVar12, (char)lVar14, (char)lVar16,
			    (char)lVar18, in_stack_ffffff88);
			if ((((int)uVar8 != 0) && (*(short *)(iVar22 + *(int *)puVar3 + iVar24) == 0)) && (lVar9 = random(0, (longlong) * (char *)((int)local_44 + ((uint)(byte)*puVar1 - 1)), uVar10, uVar11, (char)lVar12, (char)lVar14, (char)lVar16, (char)lVar18, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b), (int)lVar9 == 0)) {
				uVar10 = (char)lVar20;
				AddObject(0x40, (int)lVar21, (int)lVar20, uVar11, (char)lVar12, (char)lVar14, (char)lVar16,
				    (char)lVar18, in_stack_ffffff88);
				lVar9 = random(0, (ulonglong)(uint)((int)*(char *)((int)local_44 + ((uint)(byte)*puVar1 - 1)) << 1), uVar10, uVar11, (char)lVar12, (char)lVar14, (char)lVar16,
				    (char)lVar18, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b);
				if ((int)lVar9 != 0) {
					lVar9 = uVar25 + ((longlong) * (char *)((int)lVar20 + *(int *)puVar2 + iVar23) + -1) * 0x78;
					uVar10 = (undefined)lVar9;
					iVar7 = (int)lVar9;
					*(undefined *)(iVar7 + 0x40) = 0;
					*(int *)(iVar7 + 0x24) = *(int *)(iVar7 + 0x24) + 2;
				}
			}
			uVar19 = (undefined)lVar18;
			uVar17 = (undefined)lVar16;
			uVar15 = (undefined)lVar14;
			uVar13 = (undefined)lVar12;
			iVar7 = (int)uVar6;
			lVar21 = lVar21 + 1;
			iVar23 = iVar23 + 0x70;
			iVar24 = iVar24 + 0xe0;
		} while ((int)lVar21 < 0x6f);
		lVar20 = lVar20 + 1;
		iVar22 = iVar22 + 2;
	} while ((int)lVar20 < 0x6f);
	uVar8 = QuestStatus(3);
	if ((int)uVar8 == 0) {
		PlaceThemeMonsts(param_1, (longlong) * (char *)((int)&local_48 + (uint)(byte)*puVar1), uVar10, uVar11,
		    uVar13, uVar15, uVar17, uVar19, in_stack_ffffff88);
	} else {
		if (param_1 != **(int **)(iVar7 + -0x70a8)) {
			PlaceThemeMonsts(param_1, (longlong) * (char *)((int)&local_48 + (uint)(byte)*puVar1), uVar10, uVar11,
			    uVar13, uVar15, uVar17, uVar19, in_stack_ffffff88);
		}
	}
	return;
}

void Theme_Torture(int param_1, undefined param_2, undefined param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	undefined *puVar5;
	undefined8 uVar6;
	longlong lVar7;
	ulonglong uVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	ulonglong uVar14;
	undefined8 unaff_r23;
	longlong lVar15;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	int iVar16;
	undefined8 unaff_r26;
	int iVar17;
	undefined8 unaff_r27;
	int iVar18;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;
	char cStack57;
	undefined4 local_38;
	uint local_34;
	undefined4 local_30;
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

	puVar5 = PTR_DAT_100f2004;
	iVar4 = _DAT_100f1da4;
	puVar3 = PTR_DAT_100f1a54;
	puVar2 = PTR_DAT_100f1a48;
	puVar1 = PTR_DAT_100f183c;
	lVar13 = (longlong)param_8;
	lVar12 = (longlong)param_7;
	lVar11 = (longlong)param_6;
	lVar10 = (longlong)param_5;
	lVar9 = (longlong)param_4;
	local_30 = (undefined4)((ulonglong)unaff_r20 >> 0x20);
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
	uVar14 = 1;
	iVar16 = 2;
	uVar8 = (ulonglong)_DAT_100f44d8;
	local_34 = _DAT_100f44d8;
	local_38 = _DAT_100f44dc;
	do {
		lVar15 = 1;
		iVar18 = 0x70;
		iVar17 = 0xe0;
		do {
			if (((int)*(char *)((int)uVar14 + *(int *)puVar2 + iVar18) == *(int *)(puVar5 + param_1 * 8 + 4)) && (*(char *)(iVar4 + (int)*(short *)(iVar16 + *(int *)puVar3 + iVar17)) == '\0')) {
				lVar9 = -1;
				uVar8 = (longlong)param_1;
				uVar6 = CheckThemeObj3(lVar15, uVar14, param_1, -1, (char)lVar10, (char)lVar11, (char)lVar12,
				    (char)lVar13, in_stack_ffffff98);
				if (((int)uVar6 != 0) && (lVar7 = random(0, (longlong) * (char *)((int)&local_38 + (uint)(byte)*puVar1 + 3), (char)uVar8, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab), (int)lVar7 == 0)) {
					uVar8 = uVar14;
					AddObject(0x1e, (int)lVar15, (int)uVar14, (char)lVar9, (char)lVar10, (char)lVar11,
					    (char)lVar12, (char)lVar13, in_stack_ffffff98);
				}
			}
			lVar15 = lVar15 + 1;
			iVar17 = iVar17 + 0xe0;
			iVar18 = iVar18 + 0x70;
		} while ((int)lVar15 < 0x6f);
		uVar14 = uVar14 + 1;
		iVar16 = iVar16 + 2;
	} while ((int)uVar14 < 0x6f);
	PlaceThemeMonsts(param_1, (longlong)(&cStack57)[(uint)(byte)*puVar1], (char)uVar8, (char)lVar9,
	    (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13, in_stack_ffffff98);
	return;
}

void Theme_BloodFountain(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 in_stack_ffffffb8;
	char cStack25;
	undefined4 local_18;

	ppuVar1 = &toc;
	local_18 = _DAT_100f44e0;
	TFit_Obj5(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	AddObject(0x42, *(int *)ppuVar1[-0x1bb1], *(int *)ppuVar1[-0x1bb2], param_4, param_5, param_6,
	    param_7, param_8, in_stack_ffffffb8);
	PlaceThemeMonsts(param_1, (longlong)(&cStack25)[(uint)(byte)*ppuVar1[-0x1de5]], (char)ppuVar1[-0x1de5],
	    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	return;
}

void Theme_Decap(int param_1, undefined param_2, undefined param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	undefined *puVar5;
	undefined8 uVar6;
	longlong lVar7;
	ulonglong uVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	ulonglong uVar14;
	undefined8 unaff_r23;
	longlong lVar15;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	int iVar16;
	undefined8 unaff_r26;
	int iVar17;
	undefined8 unaff_r27;
	int iVar18;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;
	char cStack57;
	undefined4 local_38;
	uint local_34;
	undefined4 local_30;
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

	puVar5 = PTR_DAT_100f2004;
	iVar4 = _DAT_100f1da4;
	puVar3 = PTR_DAT_100f1a54;
	puVar2 = PTR_DAT_100f1a48;
	puVar1 = PTR_DAT_100f183c;
	lVar13 = (longlong)param_8;
	lVar12 = (longlong)param_7;
	lVar11 = (longlong)param_6;
	lVar10 = (longlong)param_5;
	lVar9 = (longlong)param_4;
	local_30 = (undefined4)((ulonglong)unaff_r20 >> 0x20);
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
	uVar14 = 1;
	iVar16 = 2;
	uVar8 = (ulonglong)_DAT_100f44e4;
	local_34 = _DAT_100f44e4;
	local_38 = _DAT_100f44e8;
	do {
		lVar15 = 1;
		iVar18 = 0x70;
		iVar17 = 0xe0;
		do {
			if (((int)*(char *)((int)uVar14 + *(int *)puVar2 + iVar18) == *(int *)(puVar5 + param_1 * 8 + 4)) && (*(char *)(iVar4 + (int)*(short *)(iVar16 + *(int *)puVar3 + iVar17)) == '\0')) {
				lVar9 = -1;
				uVar8 = (longlong)param_1;
				uVar6 = CheckThemeObj3(lVar15, uVar14, param_1, -1, (char)lVar10, (char)lVar11, (char)lVar12,
				    (char)lVar13, in_stack_ffffff98);
				if (((int)uVar6 != 0) && (lVar7 = random(0, (longlong) * (char *)((int)&local_38 + (uint)(byte)*puVar1 + 3), (char)uVar8, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab), (int)lVar7 == 0)) {
					uVar8 = uVar14;
					AddObject(0x43, (int)lVar15, (int)uVar14, (char)lVar9, (char)lVar10, (char)lVar11,
					    (char)lVar12, (char)lVar13, in_stack_ffffff98);
				}
			}
			lVar15 = lVar15 + 1;
			iVar17 = iVar17 + 0xe0;
			iVar18 = iVar18 + 0x70;
		} while ((int)lVar15 < 0x6f);
		uVar14 = uVar14 + 1;
		iVar16 = iVar16 + 2;
	} while ((int)uVar14 < 0x6f);
	PlaceThemeMonsts(param_1, (longlong)(&cStack57)[(uint)(byte)*puVar1], (char)uVar8, (char)lVar9,
	    (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13, in_stack_ffffff98);
	return;
}

void Theme_PurifyingFountain(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 in_stack_ffffffb8;
	char cStack25;
	undefined4 local_18;

	ppuVar1 = &toc;
	local_18 = _DAT_100f44ec;
	TFit_Obj5(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	AddObject(0x4c, *(int *)ppuVar1[-0x1bb1], *(int *)ppuVar1[-0x1bb2], param_4, param_5, param_6,
	    param_7, param_8, in_stack_ffffffb8);
	PlaceThemeMonsts(param_1, (longlong)(&cStack25)[(uint)(byte)*ppuVar1[-0x1de5]], (char)ppuVar1[-0x1de5],
	    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	return;
}

void Theme_ArmorStand(int param_1, undefined param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	int iVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	undefined8 uVar8;
	longlong lVar9;
	ulonglong uVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	longlong lVar15;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	ulonglong uVar16;
	undefined8 unaff_r22;
	longlong lVar17;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	int iVar18;
	undefined8 unaff_r25;
	int iVar19;
	undefined8 unaff_r26;
	int iVar20;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined in_stack_ffffff9b;
	char cStack73;
	undefined4 local_48;
	undefined4 local_44;
	undefined4 local_34;
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

	puVar6 = PTR_DAT_100f1fe0;
	iVar5 = _DAT_100f1da4;
	puVar4 = PTR_DAT_100f1a54;
	puVar3 = PTR_DAT_100f1a48;
	puVar2 = PTR_DAT_100f183c;
	lVar15 = (longlong)param_8;
	lVar14 = (longlong)param_7;
	lVar13 = (longlong)param_6;
	lVar12 = (longlong)param_5;
	lVar11 = (longlong)param_4;
	uVar10 = SEXT18(param_3);
	ppuVar7 = &toc;
	local_34 = (undefined4)((ulonglong)unaff_r19 >> 0x20);
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
	local_44 = _DAT_100f44f0;
	local_48 = _DAT_100f44f4;
	if (*(int *)PTR_DAT_100f1fe0 != 0) {
		ppuVar7 = &toc;
		TFit_Obj3(param_1, (char)_DAT_100f44f0, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffff88);
		uVar10 = (ulonglong) * (uint *)ppuVar7[-0x1bb2];
		AddObject(0x4d, *(int *)ppuVar7[-0x1bb1], *(uint *)ppuVar7[-0x1bb2], (char)lVar11, (char)lVar12,
		    (char)lVar13, (char)lVar14, (char)lVar15, in_stack_ffffff88);
	}
	puVar1 = ppuVar7[-0x1bf3];
	uVar16 = 0;
	iVar18 = 0;
	do {
		iVar20 = 0;
		iVar19 = 0;
		lVar17 = 0;
		do {
			if (((int)*(char *)((int)uVar16 + *(int *)puVar3 + iVar20) == *(int *)(puVar1 + param_1 * 8 + 4)) && (*(char *)(iVar5 + (int)*(short *)(iVar18 + *(int *)puVar4 + iVar19)) == '\0')) {
				lVar11 = -1;
				uVar10 = (longlong)param_1;
				uVar8 = CheckThemeObj3(lVar17, uVar16, param_1, -1, (char)lVar12, (char)lVar13, (char)lVar14,
				    (char)lVar15, in_stack_ffffff88);
				if (((int)uVar8 != 0) && (lVar9 = random(0, (longlong) * (char *)((int)&local_48 + (uint)(byte)*puVar2 + 3), (char)uVar10, (char)lVar11, (char)lVar12, (char)lVar13, (char)lVar14, (char)lVar15, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b), (int)lVar9 == 0)) {
					uVar10 = uVar16;
					AddObject(0x4e, (int)lVar17, (int)uVar16, (char)lVar11, (char)lVar12, (char)lVar13,
					    (char)lVar14, (char)lVar15, in_stack_ffffff88);
				}
			}
			lVar17 = lVar17 + 1;
			iVar19 = iVar19 + 0xe0;
			iVar20 = iVar20 + 0x70;
		} while ((int)lVar17 < 0x70);
		uVar16 = uVar16 + 1;
		iVar18 = iVar18 + 2;
	} while ((int)uVar16 < 0x70);
	PlaceThemeMonsts(param_1, (longlong)(&cStack73)[(uint)(byte)*puVar2], (char)uVar10, (char)lVar11,
	    (char)lVar12, (char)lVar13, (char)lVar14, (char)lVar15, in_stack_ffffff88);
	*(undefined4 *)puVar6 = 0;
	return;
}

void Theme_GoatShrine(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined **ppuVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	undefined4 in_stack_ffffff98;

	puVar7 = PTR_DAT_100f210c;
	puVar6 = PTR_DAT_100f2108;
	puVar5 = PTR_DAT_100f2104;
	iVar4 = _DAT_100f1da4;
	puVar3 = PTR_DAT_100f1a54;
	puVar2 = PTR_DAT_100f1a48;
	lVar11 = (longlong)param_8;
	lVar10 = (longlong)param_7;
	lVar9 = (longlong)param_6;
	ppuVar8 = &toc;
	TFit_GoatShrine(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff98);
	AddObject(0x4f, *(int *)puVar7, *(int *)puVar6, param_4, param_5, (char)lVar9, (char)lVar10,
	    (char)lVar11, in_stack_ffffff98);
	puVar1 = ppuVar8[-0x1bf3];
	iVar12 = *(int *)puVar6 + -1;
	iVar14 = iVar12 * 2;
	while (iVar12 <= *(int *)puVar6 + 1) {
		iVar13 = *(int *)puVar7 + -1;
		iVar16 = iVar13 * 0x70;
		iVar15 = iVar13 * 0xe0;
		while (iVar13 <= *(int *)puVar7 + 1) {
			if ((((int)*(char *)(iVar12 + *(int *)puVar2 + iVar16) == *(int *)(puVar1 + param_1 * 8 + 4))
			        && (*(char *)(iVar4 + (int)*(short *)(iVar14 + *(int *)puVar3 + iVar15)) == '\0'))
			    && ((iVar13 != *(int *)puVar7 || (iVar12 != *(int *)puVar6)))) {
				AddMonster(iVar13, iVar12, 1, *(int *)puVar5, 1, (char)lVar9, (char)lVar10, (char)lVar11,
				    in_stack_ffffff98);
			}
			iVar16 = iVar16 + 0x70;
			iVar15 = iVar15 + 0xe0;
			iVar13 = iVar13 + 1;
		}
		iVar14 = iVar14 + 2;
		iVar12 = iVar12 + 1;
	}
	return;
}

void Theme_Cauldron(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 in_stack_ffffffb8;
	char cStack25;
	undefined4 local_18;

	ppuVar1 = &toc;
	local_18 = _DAT_100f44f8;
	TFit_Obj5(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	AddObject(0x50, *(int *)ppuVar1[-0x1bb1], *(int *)ppuVar1[-0x1bb2], param_4, param_5, param_6,
	    param_7, param_8, in_stack_ffffffb8);
	PlaceThemeMonsts(param_1, (longlong)(&cStack25)[(uint)(byte)*ppuVar1[-0x1de5]], (char)ppuVar1[-0x1de5],
	    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	return;
}

void Theme_MurkyFountain(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 in_stack_ffffffb8;
	char cStack25;
	undefined4 local_18;

	ppuVar1 = &toc;
	local_18 = _DAT_100f44fc;
	TFit_Obj5(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	AddObject(0x51, *(int *)ppuVar1[-0x1bb1], *(int *)ppuVar1[-0x1bb2], param_4, param_5, param_6,
	    param_7, param_8, in_stack_ffffffb8);
	PlaceThemeMonsts(param_1, (longlong)(&cStack25)[(uint)(byte)*ppuVar1[-0x1de5]], (char)ppuVar1[-0x1de5],
	    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	return;
}

void Theme_TearFountain(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 in_stack_ffffffb8;
	char cStack25;
	undefined4 local_18;

	ppuVar1 = &toc;
	local_18 = _DAT_100f4500;
	TFit_Obj5(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	AddObject(0x52, *(int *)ppuVar1[-0x1bb1], *(int *)ppuVar1[-0x1bb2], param_4, param_5, param_6,
	    param_7, param_8, in_stack_ffffffb8);
	PlaceThemeMonsts(param_1, (longlong)(&cStack25)[(uint)(byte)*ppuVar1[-0x1de5]], (char)ppuVar1[-0x1de5],
	    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	return;
}

void Theme_WeaponRack(int param_1, undefined param_2, undefined param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	undefined *puVar5;
	ulonglong uVar6;
	int iVar7;
	undefined8 uVar8;
	longlong lVar9;
	ulonglong uVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	longlong lVar15;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	ulonglong uVar16;
	undefined8 unaff_r23;
	longlong lVar17;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	int iVar18;
	undefined8 unaff_r26;
	int iVar19;
	undefined8 unaff_r27;
	int iVar20;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;
	char cStack57;
	undefined4 local_38;
	uint local_34;
	undefined4 local_30;
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

	puVar5 = PTR_DAT_100f2004;
	iVar4 = _DAT_100f1da4;
	puVar3 = PTR_DAT_100f1a54;
	puVar2 = PTR_DAT_100f1a48;
	puVar1 = PTR_DAT_100f183c;
	lVar15 = (longlong)param_8;
	lVar14 = (longlong)param_7;
	lVar13 = (longlong)param_6;
	lVar12 = (longlong)param_5;
	lVar11 = (longlong)param_4;
	uVar6 = ZEXT48(&toc);
	local_30 = (undefined4)((ulonglong)unaff_r20 >> 0x20);
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
	uVar16 = 0;
	iVar18 = 0;
	uVar10 = (ulonglong)_DAT_100f4504;
	local_34 = _DAT_100f4504;
	local_38 = _DAT_100f4508;
	do {
		iVar20 = 0;
		iVar19 = 0;
		lVar17 = 0;
		do {
			if (((int)*(char *)((int)uVar16 + *(int *)puVar2 + iVar20) == *(int *)(puVar5 + param_1 * 8 + 4)) && (*(char *)(iVar4 + (int)*(short *)(iVar18 + *(int *)puVar3 + iVar19)) == '\0')) {
				lVar11 = -1;
				uVar10 = (longlong)param_1;
				uVar8 = CheckThemeObj3(lVar17, uVar16, param_1, -1, (char)lVar12, (char)lVar13, (char)lVar14,
				    (char)lVar15, in_stack_ffffff98);
				if (((int)uVar8 != 0) && (lVar9 = random(0, (longlong)(&cStack57)[(uint)(byte)*puVar1], (char)uVar10, (char)lVar11, (char)lVar12, (char)lVar13, (char)lVar14, (char)lVar15, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab), (int)lVar9 == 0)) {
					uVar10 = uVar16;
					AddObject(0x5b, (int)lVar17, (int)uVar16, (char)lVar11, (char)lVar12, (char)lVar13,
					    (char)lVar14, (char)lVar15, in_stack_ffffff98);
				}
			}
			iVar7 = (int)uVar6;
			lVar17 = lVar17 + 1;
			iVar19 = iVar19 + 0xe0;
			iVar20 = iVar20 + 0x70;
		} while ((int)lVar17 < 0x70);
		uVar16 = uVar16 + 1;
		iVar18 = iVar18 + 2;
	} while ((int)uVar16 < 0x70);
	PlaceThemeMonsts(param_1, (longlong) * (char *)((int)&local_38 + (uint)(byte)*puVar1 + 3), (char)uVar10,
	    (char)lVar11, (char)lVar12, (char)lVar13, (char)lVar14, (char)lVar15, in_stack_ffffff98);
	**(undefined4 **)(iVar7 + -0x6ee8) = 1;
	return;
}

void Theme_WeaponRack(int param_1, undefined param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	int iVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	undefined8 uVar8;
	longlong lVar9;
	ulonglong uVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	longlong lVar15;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	ulonglong uVar16;
	undefined8 unaff_r22;
	longlong lVar17;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	int iVar18;
	undefined8 unaff_r25;
	int iVar19;
	undefined8 unaff_r26;
	int iVar20;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined in_stack_ffffff9b;
	char cStack73;
	undefined4 local_48;
	undefined4 local_44;
	undefined4 local_34;
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

	puVar6 = PTR_DAT_100f1fd8;
	iVar5 = _DAT_100f1da4;
	puVar4 = PTR_DAT_100f1a54;
	puVar3 = PTR_DAT_100f1a48;
	puVar2 = PTR_DAT_100f183c;
	lVar15 = (longlong)param_8;
	lVar14 = (longlong)param_7;
	lVar13 = (longlong)param_6;
	lVar12 = (longlong)param_5;
	lVar11 = (longlong)param_4;
	uVar10 = SEXT18(param_3);
	ppuVar7 = &toc;
	local_34 = (undefined4)((ulonglong)unaff_r19 >> 0x20);
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
	local_44 = _DAT_100f450c;
	local_48 = _DAT_100f4510;
	if (*(int *)PTR_DAT_100f1fd8 != 0) {
		ppuVar7 = &toc;
		TFit_Obj3(param_1, (char)_DAT_100f450c, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffff88);
		uVar10 = (ulonglong) * (uint *)ppuVar7[-0x1bb2];
		AddObject(0x5c, *(int *)ppuVar7[-0x1bb1], *(uint *)ppuVar7[-0x1bb2], (char)lVar11, (char)lVar12,
		    (char)lVar13, (char)lVar14, (char)lVar15, in_stack_ffffff88);
	}
	puVar1 = ppuVar7[-0x1bf3];
	uVar16 = 0;
	iVar18 = 0;
	do {
		iVar20 = 0;
		iVar19 = 0;
		lVar17 = 0;
		do {
			if (((int)*(char *)((int)uVar16 + *(int *)puVar3 + iVar20) == *(int *)(puVar1 + param_1 * 8 + 4)) && (*(char *)(iVar5 + (int)*(short *)(iVar18 + *(int *)puVar4 + iVar19)) == '\0')) {
				lVar11 = -1;
				uVar10 = (longlong)param_1;
				uVar8 = CheckThemeObj3(lVar17, uVar16, param_1, -1, (char)lVar12, (char)lVar13, (char)lVar14,
				    (char)lVar15, in_stack_ffffff88);
				if (((int)uVar8 != 0) && (lVar9 = random(0, (longlong) * (char *)((int)&local_48 + (uint)(byte)*puVar2 + 3), (char)uVar10, (char)lVar11, (char)lVar12, (char)lVar13, (char)lVar14, (char)lVar15, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b), (int)lVar9 == 0)) {
					uVar10 = uVar16;
					AddObject(0x5d, (int)lVar17, (int)uVar16, (char)lVar11, (char)lVar12, (char)lVar13,
					    (char)lVar14, (char)lVar15, in_stack_ffffff88);
				}
			}
			lVar17 = lVar17 + 1;
			iVar19 = iVar19 + 0xe0;
			iVar20 = iVar20 + 0x70;
		} while ((int)lVar17 < 0x70);
		uVar16 = uVar16 + 1;
		iVar18 = iVar18 + 2;
	} while ((int)uVar16 < 0x70);
	PlaceThemeMonsts(param_1, (longlong)(&cStack73)[(uint)(byte)*puVar2], (char)uVar10, (char)lVar11,
	    (char)lVar12, (char)lVar13, (char)lVar14, (char)lVar15, in_stack_ffffff88);
	*(undefined4 *)puVar6 = 0;
	return;
}

void UpdateL4Trans(void)

{
	undefined *puVar1;
	int iVar2;
	char *pcVar3;
	int iVar4;
	longlong lVar5;

	puVar1 = PTR_DAT_100f1a48;
	iVar4 = 0;
	do {
		lVar5 = 0xe;
		iVar2 = 0;
		do {
			pcVar3 = (char *)(iVar4 + *(int *)puVar1 + iVar2);
			if (*pcVar3 != '\0') {
				*pcVar3 = '\x01';
			}
			pcVar3 = (char *)(iVar4 + *(int *)puVar1 + iVar2 + 0x70);
			if (*pcVar3 != '\0') {
				*pcVar3 = '\x01';
			}
			pcVar3 = (char *)(iVar4 + *(int *)puVar1 + iVar2 + 0xe0);
			if (*pcVar3 != '\0') {
				*pcVar3 = '\x01';
			}
			pcVar3 = (char *)(iVar4 + *(int *)puVar1 + iVar2 + 0x150);
			if (*pcVar3 != '\0') {
				*pcVar3 = '\x01';
			}
			pcVar3 = (char *)(iVar4 + *(int *)puVar1 + iVar2 + 0x1c0);
			if (*pcVar3 != '\0') {
				*pcVar3 = '\x01';
			}
			pcVar3 = (char *)(iVar4 + *(int *)puVar1 + iVar2 + 0x230);
			if (*pcVar3 != '\0') {
				*pcVar3 = '\x01';
			}
			pcVar3 = (char *)(iVar4 + *(int *)puVar1 + iVar2 + 0x2a0);
			if (*pcVar3 != '\0') {
				*pcVar3 = '\x01';
			}
			pcVar3 = (char *)(iVar4 + *(int *)puVar1 + iVar2 + 0x310);
			if (*pcVar3 != '\0') {
				*pcVar3 = '\x01';
			}
			iVar2 = iVar2 + 0x380;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
	} while (iVar4 < 0x70);
	return;
}

void CreateThemeRooms(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	code *UNRECOVERED_JUMPTABLE;
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	int iVar6;
	char *pcVar7;

	puVar5 = PTR_DAT_100f210c;
	puVar4 = PTR_DAT_100f2108;
	pcVar7 = PTR_DAT_100f2004;
	puVar3 = PTR_DAT_100f2000;
	puVar2 = PTR_DAT_100f1fe8;
	if (*PTR_DAT_100f17ec != '\x10') {
		*(undefined4 *)PTR_DAT_100f1fe8 = 1;
		iVar6 = 0;
		while (puVar1 = PTR_DAT_100f183c, iVar6 < *(int *)puVar3) {
			*(undefined4 *)puVar5 = 0;
			*(undefined4 *)puVar4 = 0;
			if (((longlong)*pcVar7 & 0xffffffffU) < 0x11) {
				UNRECOVERED_JUMPTABLE = *(code **)(_DAT_100f3930 + (int)*pcVar7 * 4);
				// WARNING: Could not recover jumptable at 0x100b03b4. Too many branches
				// WARNING: Treating indirect jump as call
				(*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
				return;
			}
			pcVar7 = pcVar7 + 8;
			iVar6 = iVar6 + 1;
		}
		*(undefined4 *)puVar2 = 0;
		if ((*puVar1 == '\x04') && (0 < *(int *)PTR_DAT_100f1d60)) {
			UpdateL4Trans();
		}
	}
	return;
}
