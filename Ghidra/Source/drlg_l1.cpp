
void DRLG_PlaceDoor(int param_1, int param_2)

{
	byte bVar1;
	char cVar2;
	char *pcVar3;
	byte *pbVar4;

	pbVar4 = PTR_DAT_100f1abc + param_1 * 0x28 + param_2;
	bVar1 = *pbVar4;
	if ((bVar1 & 0x80) == 0) {
		pcVar3 = PTR_DAT_100f1804 + param_1 * 0x28 + param_2;
		cVar2 = *pcVar3;
		if ((bVar1 & 0x7f) == 1) {
			if ((param_2 != 1) && (cVar2 == '\x02')) {
				*pcVar3 = '\x1a';
			}
			if ((param_2 != 1) && (cVar2 == '\a')) {
				*pcVar3 = '\x1f';
			}
			if ((param_2 != 1) && (cVar2 == '\x0e')) {
				*pcVar3 = '*';
			}
			if ((param_2 != 1) && (cVar2 == '\x04')) {
				*pcVar3 = '+';
			}
			if ((param_1 != 1) && (cVar2 == '\x01')) {
				*pcVar3 = '\x19';
			}
			if ((param_1 != 1) && (cVar2 == '\n')) {
				*pcVar3 = '(';
			}
			if ((param_1 != 1) && (cVar2 == '\x06')) {
				*pcVar3 = '\x1e';
			}
		}
		if ((bVar1 & 0x7f) == 2) {
			if ((param_1 != 1) && (cVar2 == '\x01')) {
				*pcVar3 = '\x19';
			}
			if ((param_1 != 1) && (cVar2 == '\x06')) {
				*pcVar3 = '\x1e';
			}
			if ((param_1 != 1) && (cVar2 == '\n')) {
				*pcVar3 = '(';
			}
			if ((param_1 != 1) && (cVar2 == '\x04')) {
				*pcVar3 = ')';
			}
			if ((param_2 != 1) && (cVar2 == '\x02')) {
				*pcVar3 = '\x1a';
			}
			if ((param_2 != 1) && (cVar2 == '\x0e')) {
				*pcVar3 = '*';
			}
			if ((param_2 != 1) && (cVar2 == '\a')) {
				*pcVar3 = '\x1f';
			}
		}
		if ((bVar1 & 0x7f) == 3) {
			if (((param_1 != 1) && (param_2 != 1)) && (cVar2 == '\x04')) {
				*pcVar3 = '\x1c';
			}
			if ((param_1 != 1) && (cVar2 == '\n')) {
				*pcVar3 = '(';
			}
			if ((param_2 != 1) && (cVar2 == '\x0e')) {
				*pcVar3 = '*';
			}
			if ((param_2 != 1) && (cVar2 == '\x02')) {
				*pcVar3 = '\x1a';
			}
			if ((param_1 != 1) && (cVar2 == '\x01')) {
				*pcVar3 = '\x19';
			}
			if ((param_2 != 1) && (cVar2 == '\a')) {
				*pcVar3 = '\x1f';
			}
			if ((param_1 != 1) && (cVar2 == '\x06')) {
				*pcVar3 = '\x1e';
			}
		}
	}
	*pbVar4 = 0x80;
	return;
}

void DRLG_L1Shadows(void)

{
	char cVar1;
	char cVar2;
	char cVar3;
	byte bVar4;
	char cVar5;
	char cVar6;
	char cVar7;
	char cVar8;
	char *pcVar9;
	bool bVar10;
	undefined *puVar11;
	byte *pbVar12;
	char *pcVar13;
	int iVar14;
	byte *pbVar15;
	int iVar16;
	byte bVar17;
	char *pcVar18;
	byte *pbVar19;
	undefined *puVar20;
	undefined *puVar21;
	char *pcVar22;
	longlong lVar23;

	puVar11 = PTR_DAT_100f1804;
	iVar16 = 1;
	pbVar12 = PTR_DAT_100f1804 + 1;
	pcVar13 = PTR_DAT_100f1abc + 1;
	pbVar19 = pbVar12;
	pcVar18 = pcVar13;
	do {
		iVar14 = 1;
		pbVar15 = pbVar19;
		puVar20 = puVar11;
		pcVar9 = pcVar18;
		do {
			puVar20 = puVar20 + 0x28;
			lVar23 = 0x25;
			cVar5 = (&DAT_100f6f43)[(uint)pbVar15[0x28]];
			puVar21 = puVar20 + iVar16;
			cVar6 = (&DAT_100f6f43)[(uint)*pbVar15];
			cVar7 = (&DAT_100f6f43)[(uint)pbVar15[0x27]];
			cVar8 = (&DAT_100f6f43)[(uint)pbVar15[-1]];
			cVar1 = pcVar9[-1];
			cVar2 = pcVar9[0x27];
			cVar3 = *pcVar9;
			pcVar22 = &DAT_100f6e40;
			do {
				if (cVar5 == *pcVar22) {
					bVar10 = true;
					if ((pcVar22[1] != '\0') && (cVar8 != pcVar22[1])) {
						bVar10 = false;
					}
					if ((pcVar22[2] != '\0') && (cVar7 != pcVar22[2])) {
						bVar10 = false;
					}
					if ((pcVar22[3] != '\0') && (cVar6 != pcVar22[3])) {
						bVar10 = false;
					}
					if (bVar10) {
						if ((pcVar22[4] != '\0') && (cVar1 == '\0')) {
							puVar21[-0x29] = pcVar22[4];
						}
						if ((pcVar22[5] != '\0') && (cVar2 == '\0')) {
							puVar21[-1] = pcVar22[5];
						}
						if ((pcVar22[6] != '\0') && (cVar3 == '\0')) {
							puVar21[-0x28] = pcVar22[6];
						}
					}
				}
				pcVar22 = pcVar22 + 7;
				lVar23 = lVar23 + -1;
			} while (lVar23 != 0);
			iVar14 = iVar14 + 1;
			pbVar15 = pbVar15 + 0x28;
			pcVar9 = pcVar9 + 0x28;
		} while (iVar14 < 0x28);
		iVar16 = iVar16 + 1;
		pcVar18 = pcVar18 + 1;
		pbVar19 = pbVar19 + 1;
	} while (iVar16 < 0x28);
	iVar16 = 1;
	do {
		lVar23 = 0x27;
		pbVar19 = pbVar12;
		pcVar18 = pcVar13;
		do {
			pbVar15 = pbVar19 + 0x28;
			if ((*pbVar19 == 0x8b) && (*pcVar18 == '\0')) {
				bVar4 = *pbVar15;
				bVar17 = 0x8b;
				if (bVar4 == 0x1d) {
					bVar17 = 0x8d;
				}
				if (bVar4 == 0x20) {
					bVar17 = 0x8d;
				}
				if (bVar4 == 0x23) {
					bVar17 = 0x8d;
				}
				if (bVar4 == 0x25) {
					bVar17 = 0x8d;
				}
				if (bVar4 == 0x26) {
					bVar17 = 0x8d;
				}
				if (bVar4 == 0x27) {
					bVar17 = 0x8d;
				}
				*pbVar19 = bVar17;
			}
			if ((*pbVar19 == 0x95) && (*pcVar18 == '\0')) {
				bVar4 = *pbVar15;
				bVar17 = 0x95;
				if (bVar4 == 0x1d) {
					bVar17 = 0x99;
				}
				if (bVar4 == 0x20) {
					bVar17 = 0x99;
				}
				if (bVar4 == 0x23) {
					bVar17 = 0x99;
				}
				if (bVar4 == 0x25) {
					bVar17 = 0x99;
				}
				if (bVar4 == 0x26) {
					bVar17 = 0x99;
				}
				if (bVar4 == 0x27) {
					bVar17 = 0x99;
				}
				*pbVar19 = bVar17;
			}
			if ((*pbVar19 == 0x94) && (*pcVar18 == '\0')) {
				bVar4 = *pbVar15;
				bVar17 = 0x94;
				if (bVar4 == 0x1d) {
					bVar17 = 0x9a;
				}
				if (bVar4 == 0x20) {
					bVar17 = 0x9a;
				}
				if (bVar4 == 0x23) {
					bVar17 = 0x9a;
				}
				if (bVar4 == 0x25) {
					bVar17 = 0x9a;
				}
				if (bVar4 == 0x26) {
					bVar17 = 0x9a;
				}
				if (bVar4 == 0x27) {
					bVar17 = 0x9a;
				}
				*pbVar19 = bVar17;
			}
			lVar23 = lVar23 + -1;
			pbVar19 = pbVar15;
			pcVar18 = pcVar18 + 0x28;
		} while (lVar23 != 0);
		iVar16 = iVar16 + 1;
		pcVar13 = pcVar13 + 1;
		pbVar12 = pbVar12 + 1;
	} while (iVar16 < 0x28);
	return;
}

undefined8
DRLG_PlaceMiniSet(ulonglong param_1, longlong param_2, longlong param_3, int param_4, int param_5, int param_6, int param_7, int param_8, undefined4 param_9, undefined param_10, undefined4 param_11,
    undefined4 param_12)

{
	byte bVar1;
	byte bVar2;
	int *piVar3;
	ulonglong uVar4;
	longlong lVar5;
	undefined8 uVar6;
	longlong lVar7;
	int iVar8;
	longlong lVar9;
	undefined uVar10;
	longlong lVar11;
	longlong lVar12;
	undefined uVar13;
	longlong lVar14;
	longlong lVar15;
	undefined uVar16;
	longlong lVar17;
	int iVar18;
	int iVar19;
	ulonglong uVar20;
	ulonglong uVar21;
	longlong lVar22;
	longlong unaff_r29;
	longlong unaff_r31;
	int iVar23;
	ulonglong uVar24;
	undefined4 in_stack_ffffff78;
	undefined in_stack_ffffff7f;
	undefined in_stack_ffffff8b;

	iVar18 = (int)param_2;
	lVar15 = (longlong)param_8;
	lVar14 = (longlong)param_7;
	lVar12 = (longlong)param_6;
	lVar11 = (longlong)param_5;
	lVar9 = (longlong)param_4;
	uVar4 = ZEXT48(&toc);
	uVar21 = ZEXT48(PTR_DAT_100f1804);
	uVar20 = ZEXT48(PTR_DAT_100f1abc);
	bVar1 = *(byte *)param_1;
	bVar2 = ((byte *)param_1)[1];
	if (param_3 - param_2 == 0) {
		iVar18 = 1;
	} else {
		lVar17 = random(0, param_3 - param_2, (char)param_3, (char)param_4, (char)param_5,
		    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff78,
		    in_stack_ffffff7f, in_stack_ffffff8b);
		iVar18 = iVar18 + (int)lVar17;
	}
	lVar22 = 0x28 - (ulonglong)bVar1;
	lVar17 = (longlong)(int)(uint)bVar2 * (longlong)(int)(uint)bVar1 + 2;
	iVar19 = 0;
	do {
		iVar8 = (int)uVar4;
		uVar16 = (undefined)lVar15;
		uVar13 = (undefined)lVar12;
		uVar10 = (undefined)lVar9;
		if (iVar18 <= iVar19) {
			iVar18 = (int)unaff_r29;
			iVar19 = (int)unaff_r31;
			if ((param_1 & 0xffffffff) == (uVar4 - 0x1e87 & 0xffffffff)) {
				uVar10 = **(undefined **)(iVar8 + -0x7518);
				**(undefined **)(iVar8 + -0x7518) = 0;
				DRLG_MRectTrans(iVar19, iVar18 + 2, iVar19 + 5, iVar18 + 4);
				**(undefined **)(iVar8 + -0x7518) = uVar10;
				*(int *)(*(int *)(iVar8 + -0x7604) + 0x13c) = iVar19 * 2 + 0x15;
				*(int *)(*(int *)(iVar8 + -0x7604) + 0x140) = iVar18 * 2 + 0x16;
			}
			if (param_6 == 1) {
				piVar3 = *(int **)(iVar8 + -0x77b4);
				**(int **)(iVar8 + -0x77b0) = iVar19 * 2 + 0x13;
				*piVar3 = iVar18 * 2 + 0x14;
			}
			if (param_8 == 0) {
				piVar3 = *(int **)(iVar8 + -0x7520);
				**(int **)(iVar8 + -0x751c) = iVar19 * 2 + 0x13;
				*piVar3 = iVar18 * 2 + 0x14;
			}
			if ((iVar19 < param_4) && (iVar18 < param_5)) {
				uVar6 = 0;
			} else {
				if ((param_4 < iVar19) && (iVar18 < param_5)) {
					uVar6 = 1;
				} else {
					if ((iVar19 < param_4) && (param_5 < iVar18)) {
						uVar6 = 2;
					} else {
						uVar6 = 3;
					}
				}
			}
			return uVar6;
		}
		unaff_r31 = random(0, lVar22, (char)param_3, uVar10, (char)lVar11, uVar13, (char)lVar14, uVar16,
		    in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8b);
		unaff_r29 = random(0, 0x28 - (ulonglong)bVar2, (char)param_3, uVar10, (char)lVar11, uVar13,
		    (char)lVar14, uVar16, in_stack_ffffff78, in_stack_ffffff7f,
		    in_stack_ffffff8b);
		lVar9 = 0;
		lVar15 = 0;
		while ((int)lVar9 == 0) {
			lVar9 = 1;
			if (((param_4 != -1) && ((int)(param_4 - (uint)bVar1) <= (int)unaff_r31)) && ((int)unaff_r31 <= param_4 + 0xc)) {
				lVar9 = 0;
				unaff_r31 = unaff_r31 + 1;
			}
			if (((param_5 != -1) && ((int)(param_5 - (uint)bVar2) <= (int)unaff_r29)) && ((int)unaff_r29 <= param_5 + 0xc)) {
				lVar9 = 0;
				unaff_r29 = unaff_r29 + 1;
			}
			iVar23 = (int)unaff_r31;
			iVar8 = (int)unaff_r29;
			if (param_7 == 2) {
				if ((iVar23 < param_4) && (param_5 < iVar8)) {
					lVar9 = 0;
				}
			} else {
				if (param_7 < 2) {
					if (param_7 == 0) {
						if ((iVar23 < param_4) && (iVar8 < param_5)) {
							lVar9 = 0;
						}
					} else {
						if (((-1 < param_7) && (param_4 < iVar23)) && (iVar8 < param_5)) {
							lVar9 = 0;
						}
					}
				} else {
					if (((param_7 < 4) && (param_4 < iVar23)) && (param_5 < iVar8)) {
						lVar9 = 0;
					}
				}
			}
			lVar12 = uVar21 + unaff_r29;
			lVar7 = uVar20 + unaff_r29;
			lVar11 = param_1 + 2;
			lVar14 = 0;
			while (((int)lVar14 < (int)(uint)bVar2 && ((int)lVar9 == 1))) {
				param_3 = 0;
				while ((iVar8 = (int)param_3, iVar8 < (int)(uint)bVar1 && ((int)lVar9 == 1))) {
					if ((*(char *)lVar11 != '\0') && (*(char *)lVar11 != *(char *)((int)lVar12 + (iVar23 + iVar8) * 0x28))) {
						lVar9 = 0;
					}
					if (*(char *)((int)lVar7 + (iVar23 + iVar8) * 0x28) != '\0') {
						lVar9 = 0;
					}
					lVar11 = lVar11 + 1;
					param_3 = param_3 + 1;
				}
				lVar12 = lVar12 + 1;
				lVar7 = lVar7 + 1;
				lVar14 = lVar14 + 1;
			}
			if ((int)lVar9 == 0) {
				unaff_r31 = unaff_r31 + 1;
				if ((int)unaff_r31 == (int)lVar22) {
					unaff_r29 = unaff_r29 + 1;
					unaff_r31 = 0;
					if ((int)unaff_r29 == (int)(0x28 - (ulonglong)bVar2)) {
						unaff_r29 = 0;
					}
				}
				lVar15 = lVar15 + 1;
				if (4000 < (int)lVar15) {
					return 0xffffffffffffffff;
				}
			}
		}
		lVar5 = uVar21 + unaff_r29;
		lVar12 = 0;
		lVar7 = lVar17;
		while ((int)lVar12 < (int)(uint)bVar2) {
			lVar9 = param_1 + lVar7;
			param_3 = 0;
			uVar24 = (ulonglong)bVar1;
			if (bVar1 != 0) {
				do {
					if (*(char *)lVar9 != '\0') {
						lVar11 = (unaff_r31 + param_3) * 0x28;
						*(char *)((int)lVar5 + (int)lVar11) = *(char *)lVar9;
					}
					lVar7 = lVar7 + 1;
					lVar9 = lVar9 + 1;
					param_3 = param_3 + 1;
					uVar24 = uVar24 - 1;
				} while (uVar24 != 0);
			}
			lVar5 = lVar5 + 1;
			lVar12 = lVar12 + 1;
		}
		iVar19 = iVar19 + 1;
	} while (true);
}

longlong DRLG_L1Floor(char param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	longlong lVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	int iVar8;
	int iVar9;
	char *pcVar10;
	char *pcVar11;
	char *pcVar12;
	char *pcVar13;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	lVar7 = (longlong)param_8;
	lVar6 = (longlong)param_7;
	lVar5 = (longlong)param_6;
	lVar4 = (longlong)param_5;
	lVar3 = (longlong)param_4;
	lVar2 = (longlong)param_3;
	lVar1 = (longlong)param_1;
	iVar8 = 0;
	pcVar11 = PTR_DAT_100f1abc;
	pcVar10 = PTR_DAT_100f1804;
	do {
		iVar9 = 0;
		pcVar13 = pcVar11;
		pcVar12 = pcVar10;
		do {
			if ((*pcVar13 == '\0') && (*pcVar12 == '\r')) {
				lVar1 = random(0, 3, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6,
				    (char)lVar7, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
				if ((int)lVar1 == 1) {
					*pcVar12 = -0x5e;
				}
				if ((int)lVar1 == 2) {
					*pcVar12 = -0x5d;
				}
			}
			iVar9 = iVar9 + 1;
			pcVar12 = pcVar12 + 0x28;
			pcVar13 = pcVar13 + 0x28;
		} while (iVar9 < 0x28);
		iVar8 = iVar8 + 1;
		pcVar10 = pcVar10 + 1;
		pcVar11 = pcVar11 + 1;
	} while (iVar8 < 0x28);
	return lVar1;
}

void DRLG_L1Pass3(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
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
	sVar10 = CONCAT11(*(undefined *)(iVar2 + 0xa9), *(undefined *)(iVar2 + 0xa8)) + 1;
	sVar11 = CONCAT11(*(undefined *)(iVar2 + 0xab), *(undefined *)(iVar2 + 0xaa)) + 1;
	sVar17 = CONCAT11(*(undefined *)(iVar2 + 0xad), *(undefined *)(iVar2 + 0xac)) + 1;
	iVar20 = 0;
	sVar5 = CONCAT11(*(undefined *)(iVar2 + 0xaf), *(undefined *)(iVar2 + 0xae)) + 1;
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

void DRLG_LoadL1SP(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
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
	uVar4 = QuestStatus(6);
	if ((int)uVar4 != 0) {
		lVar5 = LoadFileInMem(ZEXT48(ppuVar3[-0x18ec]), (undefined4 *)0x0, param_3, param_4, param_5, param_6,
		    param_7, param_8, in_stack_ffffffc8);
		*(int *)puVar1 = (int)lVar5;
		*(undefined4 *)puVar2 = 1;
	}
	uVar4 = QuestStatus(0xc);
	if (((int)uVar4 != 0) && (*ppuVar3[-0x1dfc] == '\x01')) {
		lVar5 = LoadFileInMem(ZEXT48(ppuVar3[-0x18ed]), (undefined4 *)0x0, param_3, param_4, param_5, param_6,
		    param_7, param_8, in_stack_ffffffc8);
		*(int *)puVar1 = (int)lVar5;
		*(undefined4 *)puVar2 = 1;
	}
	uVar4 = QuestStatus(7);
	if ((int)uVar4 != 0) {
		lVar5 = LoadFileInMem(ZEXT48(ppuVar3[-0x18ee]), (undefined4 *)0x0, param_3, param_4, param_5, param_6,
		    param_7, param_8, in_stack_ffffffc8);
		*(int *)puVar1 = (int)lVar5;
		*(undefined4 *)puVar2 = 1;
	}
	return;
}

void DRLG_FreeL1SP(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	mem_free_dbg((int **)PTR_DAT_100f1aa8, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	return;
}

void DRLG_Init_Globals(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined uVar1;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	memset((char)*(undefined4 *)PTR_DAT_100f1834, 0, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	memset((char)**(undefined4 **)(local_2c + -0x7680), 0, param_3, param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	memset((char)**(undefined4 **)(local_2c + -0x767c), 0, param_3, param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	memset((char)**(undefined4 **)(local_2c + -0x7630), 0, param_3, param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	memset((char)**(undefined4 **)(local_2c + -0x7684), 0, param_3, param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	memset((char)**(undefined4 **)(local_2c + -0x768c), 0, param_3, param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	memset((char)**(undefined4 **)(local_2c + -0x7594), 0, param_3, param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	memset((char)**(undefined4 **)(local_2c + -0x7598), 0, param_3, param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	if (**(int **)(local_2c + -0x752c) == 0) {
		if (**(int **)(local_2c + -0x776c) == 0) {
			uVar1 = 0xf;
		} else {
			uVar1 = 3;
		}
	} else {
		uVar1 = 0;
	}
	memset((char)**(undefined4 **)(local_2c + -0x758c), 0, uVar1, param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	return;
}

void DRLG_InitL1Vals(void)

{
	short sVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	longlong lVar9;

	puVar3 = PTR_DAT_100f1a54;
	puVar2 = PTR_DAT_100f1a38;
	iVar8 = 0;
	iVar7 = 0;
	do {
		iVar5 = 0;
		lVar9 = 0x70;
		iVar6 = 0;
		do {
			sVar1 = *(short *)(iVar7 + *(int *)puVar3 + iVar5);
			if (sVar1 == 0xc) {
				uVar4 = 1;
			LAB_1002875c:
				*(undefined *)(iVar8 + *(int *)puVar2 + iVar6) = uVar4;
			} else {
				if (sVar1 == 0xb) {
					uVar4 = 2;
					goto LAB_1002875c;
				}
				if (sVar1 == 0x47) {
					uVar4 = 1;
					goto LAB_1002875c;
				}
				if (sVar1 == 0x103) {
					uVar4 = 5;
					goto LAB_1002875c;
				}
				if (sVar1 == 0xf9) {
					uVar4 = 2;
					goto LAB_1002875c;
				}
				if (sVar1 == 0x145) {
					uVar4 = 2;
					goto LAB_1002875c;
				}
				if (sVar1 == 0x141) {
					uVar4 = 1;
					goto LAB_1002875c;
				}
				if (sVar1 == 0xff) {
					uVar4 = 4;
					goto LAB_1002875c;
				}
				if (sVar1 == 0xd3) {
					uVar4 = 1;
					goto LAB_1002875c;
				}
				if (sVar1 == 0x158) {
					uVar4 = 2;
					goto LAB_1002875c;
				}
				if (sVar1 == 0x155) {
					uVar4 = 1;
					goto LAB_1002875c;
				}
				if (sVar1 == 0x14b) {
					uVar4 = 2;
					goto LAB_1002875c;
				}
				if (sVar1 == 0x1a2) {
					uVar4 = 1;
					goto LAB_1002875c;
				}
				if (sVar1 == 0x1a5) {
					uVar4 = 2;
					goto LAB_1002875c;
				}
			}
			iVar5 = iVar5 + 0xe0;
			iVar6 = iVar6 + 0x70;
			lVar9 = lVar9 + -1;
		} while (lVar9 != 0);
		iVar8 = iVar8 + 1;
		iVar7 = iVar7 + 2;
		if (0x6f < iVar8) {
			return;
		}
	} while (true);
}

void LoadL1Dungeon(longlong lParm1, undefined8 uParm2, undefined8 uParm3)

{
	byte bVar1;
	byte bVar2;
	byte bVar3;
	undefined4 *puVar4;
	undefined4 *puVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	ulonglong uVar8;
	undefined uVar9;
	undefined8 uVar10;
	undefined *puVar12;
	ulonglong uVar11;
	undefined uVar13;
	undefined8 uVar14;
	undefined *puVar16;
	ulonglong uVar15;
	undefined uVar17;
	ulonglong uVar18;
	ulonglong uVar19;
	undefined uVar20;
	undefined4 uVar22;
	ulonglong uVar21;
	undefined uVar23;
	undefined8 in_r9;
	undefined4 uVar25;
	ulonglong uVar24;
	undefined uVar26;
	undefined8 in_r10;
	undefined4 uVar28;
	longlong lVar27;
	int iVar29;
	undefined uVar30;
	longlong lVar31;
	ulonglong uVar32;
	undefined4 in_stack_ffffffa8;
	int *local_18[6];

	puVar6 = PTR_DAT_100f1a9c;
	puVar12 = PTR_DAT_100f1a94;
	uVar28 = (undefined4)in_r10;
	uVar25 = (undefined4)in_r9;
	ppuVar7 = &toc;
	uVar22 = 0x10;
	uVar19 = ZEXT48(PTR_DAT_100f1a9c);
	*(undefined4 *)PTR_DAT_100f1aa0 = 0x10;
	puVar16 = PTR_DAT_100f1a98;
	uVar18 = ZEXT48(PTR_DAT_100f1a98);
	*(undefined4 *)puVar6 = 0x10;
	*(undefined4 *)puVar16 = 0x60;
	*(undefined4 *)puVar12 = 0x60;
	uVar14 = uParm3;
	DRLG_InitTrans((char)puVar12, (char)uParm2, (char)uParm3, (char)puVar16, (char)puVar6, 0x10, (char)in_r9,
	    (char)in_r10, in_stack_ffffffa8);
	uVar10 = 0;
	uVar8 = LoadFileInMem(lParm1, (undefined4 *)0x0, uVar14, uVar18, uVar19, uVar22, uVar25, uVar28,
	    in_stack_ffffffa8);
	local_18[0] = (int *)uVar8;
	uVar19 = FUN_100b8f7c(uVar8 & 0xffffffff, uVar10, uVar14, uVar18, uVar19, uVar22, uVar25, uVar28,
	    in_stack_ffffffa8);
	uVar21 = ZEXT48(ppuVar7[-0x1df3]);
	iVar29 = 0;
	uVar24 = ZEXT48(ppuVar7[-0x1d45]);
	uVar8 = uVar21;
	uVar18 = uVar24;
	do {
		lVar31 = 5;
		lVar27 = 0;
		uVar11 = uVar8;
		uVar15 = uVar18;
		do {
			puVar12 = (undefined *)uVar11;
			*puVar12 = 0x16;
			puVar16 = (undefined *)uVar15;
			*puVar16 = 0;
			puVar12[0x28] = 0x16;
			puVar16[0x28] = 0;
			puVar12[0x50] = 0x16;
			puVar16[0x50] = 0;
			puVar12[0x78] = 0x16;
			puVar16[0x78] = 0;
			puVar12[0xa0] = 0x16;
			puVar16[0xa0] = 0;
			puVar12[200] = 0x16;
			puVar16[200] = 0;
			puVar12[0xf0] = 0x16;
			puVar16[0xf0] = 0;
			puVar12[0x118] = 0x16;
			uVar11 = uVar11 + 0x140;
			puVar16[0x118] = 0;
			uVar15 = uVar15 + 0x140;
			lVar31 = lVar31 + -1;
		} while (lVar31 != 0);
		iVar29 = iVar29 + 1;
		uVar18 = uVar18 + 1;
		uVar8 = uVar8 + 1;
	} while (iVar29 < 0x28);
	bVar1 = *(byte *)uVar19;
	uVar8 = (ulonglong)bVar1;
	lVar31 = uVar19 + 4;
	bVar2 = ((byte *)uVar19)[2];
	uVar18 = (ulonglong)bVar2;
	while (true) {
		uVar25 = (undefined4)uVar24;
		uVar22 = (undefined4)uVar21;
		iVar29 = (int)lVar27;
		if ((int)(uint)bVar2 <= iVar29)
			break;
		uVar11 = uVar21;
		uVar15 = uVar24;
		uVar32 = uVar8;
		if (bVar1 != 0) {
			do {
				bVar3 = *(byte *)lVar31;
				uVar19 = (ulonglong)bVar3;
				if (bVar3 == 0) {
					*(byte *)uVar11 = 0xd;
				} else {
					*(byte *)uVar11 = bVar3;
					uVar19 = (ulonglong) * (byte *)uVar15 | 0x80;
					*(byte *)uVar15 = (byte)uVar19;
				}
				lVar31 = lVar31 + 2;
				uVar11 = uVar11 + 0x28;
				uVar15 = uVar15 + 0x28;
				uVar32 = uVar32 - 1;
			} while (uVar32 != 0);
		}
		uVar21 = uVar21 + 1;
		uVar24 = uVar24 + 1;
		lVar27 = lVar27 + 1;
	}
	DRLG_L1Floor((char)uVar19, (char)uVar11, (char)uVar15, bVar1, bVar2, (char)uVar21, (char)uVar24,
	    (char)lVar27, in_stack_ffffffa8);
	uVar17 = (undefined)uVar15;
	puVar4 = (undefined4 *)ppuVar7[-0x1dec];
	uVar13 = SUB41(puVar4, 0);
	puVar5 = (undefined4 *)ppuVar7[-0x1ded];
	*puVar4 = (int)uParm2;
	*puVar5 = (int)uParm3;
	uVar9 = DRLG_L1Pass3(ZEXT48(puVar5), ZEXT48(puVar4), uVar15, uVar8, uVar18, uVar22, uVar25, iVar29,
	    in_stack_ffffffa8);
	DRLG_Init_Globals(uVar9, uVar13, uVar17, (char)uVar8, (char)uVar18, (char)uVar22, (char)uVar25, (char)iVar29,
	    in_stack_ffffffa8);
	DRLG_InitL1Vals();
	SetMapMonsters(ZEXT48(local_18[0]), 0, 0, uVar8, uVar18, uVar22, uVar25, iVar29, in_stack_ffffffa8);
	uVar30 = (undefined)iVar29;
	uVar26 = (undefined)uVar25;
	uVar23 = (undefined)uVar22;
	uVar20 = (undefined)uVar18;
	uVar17 = (undefined)uVar8;
	uVar9 = 0;
	uVar13 = 0;
	SetMapObjects(ZEXT48(local_18[0]), 0, 0, uVar8, uVar18, uVar22, uVar25, iVar29, in_stack_ffffffa8);
	FUN_100b9100((int)local_18[0], uVar9, uVar13, uVar17, uVar20, uVar23, uVar26, uVar30, in_stack_ffffffa8);
	mem_free_dbg(local_18, uVar9, uVar13, uVar17, uVar20, uVar23, uVar26, uVar30, in_stack_ffffffa8);
	return;
}

void LoadPreL1Dungeon(longlong param_1, undefined4 param_2, undefined4 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9, undefined param_10, undefined4 param_11, undefined4 param_12)

{
	byte bVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	ulonglong uVar4;
	undefined8 uVar5;
	undefined *puVar7;
	ulonglong uVar6;
	undefined uVar8;
	ulonglong uVar9;
	undefined *puVar11;
	ulonglong uVar10;
	undefined uVar12;
	ulonglong uVar13;
	char cVar14;
	undefined8 uVar15;
	byte bVar16;
	ulonglong uVar17;
	undefined uVar18;
	longlong lVar19;
	undefined uVar20;
	int iVar21;
	byte bVar22;
	ulonglong uVar23;
	longlong lVar24;
	undefined4 in_stack_ffffff98;
	int *local_18[6];

	puVar2 = PTR_DAT_100f1a9c;
	puVar7 = PTR_DAT_100f1a94;
	ppuVar3 = &toc;
	uVar15 = 0x10;
	uVar9 = ZEXT48(PTR_DAT_100f1a94);
	*(undefined4 *)PTR_DAT_100f1aa0 = 0x10;
	puVar11 = PTR_DAT_100f1a98;
	uVar13 = ZEXT48(PTR_DAT_100f1a98);
	*(undefined4 *)puVar2 = 0x10;
	uVar5 = 0;
	*(undefined4 *)puVar11 = 0x60;
	*(undefined4 *)puVar7 = 0x60;
	uVar4 = LoadFileInMem(param_1, (undefined4 *)0x0, uVar9, uVar13, 0x10, param_6, param_7, param_8,
	    in_stack_ffffff98);
	local_18[0] = (int *)uVar4;
	uVar13 = FUN_100b8f7c(uVar4 & 0xffffffff, uVar5, uVar9, uVar13, uVar15, param_6, param_7, param_8,
	    in_stack_ffffff98);
	uVar23 = ZEXT48(ppuVar3[-0x1df3]);
	iVar21 = 0;
	uVar17 = ZEXT48(ppuVar3[-0x1d45]);
	uVar4 = uVar23;
	uVar9 = uVar17;
	do {
		lVar24 = 5;
		lVar19 = 0;
		uVar6 = uVar4;
		uVar10 = uVar9;
		do {
			puVar7 = (undefined *)uVar6;
			*puVar7 = 0x16;
			puVar11 = (undefined *)uVar10;
			*puVar11 = 0;
			puVar7[0x28] = 0x16;
			puVar11[0x28] = 0;
			puVar7[0x50] = 0x16;
			puVar11[0x50] = 0;
			puVar7[0x78] = 0x16;
			puVar11[0x78] = 0;
			puVar7[0xa0] = 0x16;
			puVar11[0xa0] = 0;
			puVar7[200] = 0x16;
			puVar11[200] = 0;
			puVar7[0xf0] = 0x16;
			puVar11[0xf0] = 0;
			puVar7[0x118] = 0x16;
			uVar6 = uVar6 + 0x140;
			puVar11[0x118] = 0;
			uVar10 = uVar10 + 0x140;
			lVar24 = lVar24 + -1;
		} while (lVar24 != 0);
		iVar21 = iVar21 + 1;
		uVar9 = uVar9 + 1;
		uVar4 = uVar4 + 1;
	} while (iVar21 < 0x28);
	bVar16 = *(byte *)uVar13;
	bVar22 = ((byte *)uVar13)[2];
	lVar24 = uVar13 + 4;
	uVar4 = uVar23;
	while (true) {
		uVar20 = (undefined)lVar19;
		uVar18 = (undefined)uVar17;
		uVar8 = (undefined)uVar6;
		if ((int)(uint)bVar22 <= (int)lVar19)
			break;
		uVar6 = uVar4;
		uVar10 = uVar17;
		uVar9 = (ulonglong)bVar16;
		if (bVar16 != 0) {
			do {
				bVar1 = *(byte *)lVar24;
				uVar13 = (ulonglong)bVar1;
				if (bVar1 == 0) {
					*(byte *)uVar6 = 0xd;
				} else {
					*(byte *)uVar6 = bVar1;
					uVar13 = (ulonglong) * (byte *)uVar10 | 0x80;
					*(byte *)uVar10 = (byte)uVar13;
				}
				lVar24 = lVar24 + 2;
				uVar6 = uVar6 + 0x28;
				uVar10 = uVar10 + 0x28;
				uVar9 = uVar9 - 1;
			} while (uVar9 != 0);
		}
		uVar4 = uVar4 + 1;
		uVar17 = uVar17 + 1;
		lVar19 = lVar19 + 1;
	}
	DRLG_L1Floor((char)uVar13, uVar8, (char)uVar10, (char)uVar4, bVar16, uVar18, uVar20, bVar22,
	    in_stack_ffffff98);
	uVar4 = ZEXT48(ppuVar3[-0x1d50]);
	lVar19 = 0x14;
	cVar14 = '\0';
	do {
		puVar11 = (undefined *)uVar23;
		puVar7 = (undefined *)uVar4;
		*puVar7 = *puVar11;
		puVar7[0x28] = puVar11[0x28];
		puVar7[0x50] = puVar11[0x50];
		puVar7[0x78] = puVar11[0x78];
		puVar7[0xa0] = puVar11[0xa0];
		puVar7[200] = puVar11[200];
		puVar7[0xf0] = puVar11[0xf0];
		puVar7[0x118] = puVar11[0x118];
		puVar7[0x140] = puVar11[0x140];
		puVar7[0x168] = puVar11[0x168];
		puVar7[400] = puVar11[400];
		puVar7[0x1b8] = puVar11[0x1b8];
		puVar7[0x1e0] = puVar11[0x1e0];
		puVar7[0x208] = puVar11[0x208];
		puVar7[0x230] = puVar11[0x230];
		puVar7[600] = puVar11[600];
		puVar7[0x280] = puVar11[0x280];
		puVar7[0x2a8] = puVar11[0x2a8];
		puVar7[0x2d0] = puVar11[0x2d0];
		puVar7[0x2f8] = puVar11[0x2f8];
		puVar7[800] = puVar11[800];
		puVar7[0x348] = puVar11[0x348];
		puVar7[0x370] = puVar11[0x370];
		puVar7[0x398] = puVar11[0x398];
		puVar7[0x3c0] = puVar11[0x3c0];
		puVar7[1000] = puVar11[1000];
		puVar7[0x410] = puVar11[0x410];
		puVar7[0x438] = puVar11[0x438];
		puVar7[0x460] = puVar11[0x460];
		puVar7[0x488] = puVar11[0x488];
		puVar7[0x4b0] = puVar11[0x4b0];
		puVar7[0x4d8] = puVar11[0x4d8];
		puVar7[0x500] = puVar11[0x500];
		puVar7[0x528] = puVar11[0x528];
		puVar7[0x550] = puVar11[0x550];
		puVar7[0x578] = puVar11[0x578];
		puVar7[0x5a0] = puVar11[0x5a0];
		puVar7[0x5c8] = puVar11[0x5c8];
		puVar7[0x5f0] = puVar11[0x5f0];
		puVar7[0x618] = puVar11[0x618];
		cVar14 = cVar14 + '\x01';
		puVar7[1] = puVar11[1];
		puVar7[0x29] = puVar11[0x29];
		puVar7[0x51] = puVar11[0x51];
		puVar7[0x79] = puVar11[0x79];
		puVar7[0xa1] = puVar11[0xa1];
		puVar7[0xc9] = puVar11[0xc9];
		puVar7[0xf1] = puVar11[0xf1];
		puVar7[0x119] = puVar11[0x119];
		puVar7[0x141] = puVar11[0x141];
		puVar7[0x169] = puVar11[0x169];
		puVar7[0x191] = puVar11[0x191];
		puVar7[0x1b9] = puVar11[0x1b9];
		puVar7[0x1e1] = puVar11[0x1e1];
		puVar7[0x209] = puVar11[0x209];
		puVar7[0x231] = puVar11[0x231];
		puVar7[0x259] = puVar11[0x259];
		puVar7[0x281] = puVar11[0x281];
		puVar7[0x2a9] = puVar11[0x2a9];
		puVar7[0x2d1] = puVar11[0x2d1];
		puVar7[0x2f9] = puVar11[0x2f9];
		puVar7[0x321] = puVar11[0x321];
		puVar7[0x349] = puVar11[0x349];
		puVar7[0x371] = puVar11[0x371];
		puVar7[0x399] = puVar11[0x399];
		puVar7[0x3c1] = puVar11[0x3c1];
		puVar7[0x3e9] = puVar11[0x3e9];
		puVar7[0x411] = puVar11[0x411];
		puVar7[0x439] = puVar11[0x439];
		puVar7[0x461] = puVar11[0x461];
		puVar7[0x489] = puVar11[0x489];
		puVar7[0x4b1] = puVar11[0x4b1];
		puVar7[0x4d9] = puVar11[0x4d9];
		puVar7[0x501] = puVar11[0x501];
		puVar7[0x529] = puVar11[0x529];
		puVar7[0x551] = puVar11[0x551];
		puVar7[0x579] = puVar11[0x579];
		puVar7[0x5a1] = puVar11[0x5a1];
		puVar7[0x5c9] = puVar11[0x5c9];
		puVar7[0x5f1] = puVar11[0x5f1];
		uVar23 = uVar23 + 2;
		puVar7[0x619] = puVar11[0x619];
		uVar4 = uVar4 + 2;
		uVar12 = (undefined)uVar4;
		lVar19 = lVar19 + -1;
	} while (lVar19 != 0);
	FUN_100b9100((int)local_18[0], uVar8, uVar12, cVar14, bVar16, uVar18, uVar20, bVar22, in_stack_ffffff98);
	mem_free_dbg(local_18, uVar8, uVar12, cVar14, bVar16, uVar18, uVar20, bVar22, in_stack_ffffff98);
	return;
}

void InitL5Dungeon(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	int iVar5;
	longlong lVar6;

	iVar5 = 0;
	puVar3 = PTR_DAT_100f1804;
	puVar4 = PTR_DAT_100f1abc;
	do {
		lVar6 = 5;
		puVar1 = puVar3;
		puVar2 = puVar4;
		do {
			*puVar1 = 0;
			*puVar2 = 0;
			puVar1[0x28] = 0;
			puVar2[0x28] = 0;
			puVar1[0x50] = 0;
			puVar2[0x50] = 0;
			puVar1[0x78] = 0;
			puVar2[0x78] = 0;
			puVar1[0xa0] = 0;
			puVar2[0xa0] = 0;
			puVar1[200] = 0;
			puVar2[200] = 0;
			puVar1[0xf0] = 0;
			puVar2[0xf0] = 0;
			puVar1[0x118] = 0;
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

void L5ClearFlags(void)

{
	byte *pbVar1;
	byte *pbVar2;
	int iVar3;
	longlong lVar4;

	iVar3 = 0;
	pbVar2 = PTR_DAT_100f1abc;
	do {
		lVar4 = 5;
		pbVar1 = pbVar2;
		do {
			*pbVar1 = *pbVar1 & 0xbf;
			pbVar1[0x28] = pbVar1[0x28] & 0xbf;
			pbVar1[0x50] = pbVar1[0x50] & 0xbf;
			pbVar1[0x78] = pbVar1[0x78] & 0xbf;
			pbVar1[0xa0] = pbVar1[0xa0] & 0xbf;
			pbVar1[200] = pbVar1[200] & 0xbf;
			pbVar1[0xf0] = pbVar1[0xf0] & 0xbf;
			pbVar1[0x118] = pbVar1[0x118] & 0xbf;
			pbVar1 = pbVar1 + 0x140;
			lVar4 = lVar4 + -1;
		} while (lVar4 != 0);
		iVar3 = iVar3 + 1;
		pbVar2 = pbVar2 + 1;
	} while (iVar3 < 0x28);
	return;
}

void L5drawRoom(int param_1, int param_2, longlong param_3, int param_4)

{
	int iVar1;
	ulonglong uVar2;
	longlong lVar3;
	int iVar4;
	undefined *puVar5;
	longlong lVar6;
	int iVar7;
	undefined *puVar8;

	iVar4 = (int)param_3;
	iVar7 = 0;
	puVar5 = PTR_DAT_100f1804;
	while (iVar7 < param_4) {
		lVar6 = 0;
		if (0 < iVar4) {
			if (8 < iVar4) {
				uVar2 = (ulonglong)(iVar4 - 1U >> 3);
				puVar8 = puVar5 + param_2;
				if (0 < iVar4 + -8) {
					do {
						iVar1 = (int)lVar6 + param_1;
						lVar6 = lVar6 + 8;
						puVar8[iVar1 * 0x28] = 1;
						puVar8[(iVar1 + 1) * 0x28] = 1;
						puVar8[(iVar1 + 2) * 0x28] = 1;
						puVar8[(iVar1 + 3) * 0x28] = 1;
						puVar8[(iVar1 + 4) * 0x28] = 1;
						puVar8[(iVar1 + 5) * 0x28] = 1;
						puVar8[(iVar1 + 6) * 0x28] = 1;
						puVar8[(iVar1 + 7) * 0x28] = 1;
						uVar2 = uVar2 - 1;
					} while (uVar2 != 0);
				}
			}
			lVar3 = param_3 - lVar6;
			if ((int)lVar6 < iVar4) {
				do {
					iVar1 = (int)lVar6;
					lVar6 = lVar6 + 1;
					puVar5[(iVar1 + param_1) * 0x28 + param_2] = 1;
					lVar3 = lVar3 + -1;
				} while (lVar3 != 0);
			}
		}
		puVar5 = puVar5 + 1;
		iVar7 = iVar7 + 1;
	}
	return;
}

undefined8 L5checkRoom(longlong param_1, int param_2, longlong param_3, int param_4)

{
	int iVar1;
	undefined *puVar2;
	longlong lVar3;
	int iVar4;
	longlong lVar5;

	iVar4 = 0;
	puVar2 = PTR_DAT_100f1804 + param_2;
	do {
		if (param_4 <= iVar4) {
			return 1;
		}
		lVar3 = 0;
		lVar5 = param_3;
		if (0 < (int)param_3) {
			do {
				if ((((param_1 + lVar3 < 0) || (iVar1 = (int)(param_1 + lVar3), 0x27 < iVar1)) || (param_2 + iVar4 < 0)) || (0x27 < param_2 + iVar4)) {
					return 0;
				}
				if (puVar2[iVar1 * 0x28] != '\0') {
					return 0;
				}
				lVar3 = lVar3 + 1;
				lVar5 = lVar5 + -1;
			} while (lVar5 != 0);
		}
		puVar2 = puVar2 + 1;
		iVar4 = iVar4 + 1;
	} while (true);
}

// WARNING: Removing unreachable block (ram,0x1002908c)

void L5roomGen(longlong param_1, longlong param_2, ulonglong param_3, ulonglong param_4, int param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	int iVar3;
	bool bVar4;
	longlong lVar5;
	longlong lVar6;
	undefined8 uVar7;
	int iVar8;
	ulonglong uVar9;
	undefined param_6_00;
	ulonglong uVar10;
	undefined param_7_00;
	undefined param_8_00;
	longlong param_1_00;
	longlong lVar11;
	undefined uVar12;
	longlong param_2_00;
	longlong lVar13;
	longlong lVar14;
	ulonglong param_4_00;
	ulonglong param_3_00;
	undefined4 param_9_00;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	lVar14 = (longlong)param_8;
	lVar13 = (longlong)param_7;
	lVar11 = (longlong)param_6;
	lVar6 = (longlong)param_5;
	uVar9 = param_3;
	uVar10 = param_4;
	lVar5 = random(0, 4, (char)param_3, (char)param_4, (char)param_5, param_6, param_7, param_8,
	    param_9_00, in_stack_ffffffaf, in_stack_ffffffbb);
	if (param_5 == 1) {
		if ((int)lVar5 == 0) {
			bVar4 = false;
		} else {
			bVar4 = true;
		}
	} else {
		if ((int)lVar5 == 0) {
			bVar4 = true;
		} else {
			bVar4 = false;
		}
	}
	if (bVar4) {
		iVar8 = 0;
		do {
			param_6_00 = (undefined)uVar9;
			param_7_00 = (undefined)uVar10;
			lVar5 = random(0, 5, param_6_00, param_7_00, (char)lVar6, (char)lVar11, (char)lVar13,
			    (char)lVar14, param_9_00, in_stack_ffffffaf, in_stack_ffffffbb);
			uVar1 = ((int)lVar5 + 2 >> 1) << 1;
			param_3_00 = (ulonglong)uVar1;
			lVar5 = random(0, 5, param_6_00, param_7_00, (char)lVar6, (char)lVar11, (char)lVar13,
			    (char)lVar14, param_9_00, in_stack_ffffffaf, in_stack_ffffffbb);
			uVar9 = param_3_00 + 2;
			uVar2 = ((int)(lVar5 + 2U) >> 1) * 2;
			param_4_00 = (ulonglong)uVar2;
			uVar10 = param_4_00 + 1;
			param_1_00 = (param_1 + (ulonglong)(uint)((int)param_3 >> 1) + (ulonglong)((int)param_3 < 0 && (param_3 & 1) != 0)) - (lVar5 + 2U & 0xffffffff00000000 | (ulonglong)(uint)((int)uVar1 >> 1));
			iVar3 = (int)(param_2 - param_4_00);
			lVar5 = L5checkRoom(param_1_00 + -1, iVar3 + -1, uVar9, (int)uVar10);
			param_8_00 = (undefined)lVar14;
			param_7_00 = (undefined)lVar13;
			param_6_00 = (undefined)lVar11;
			iVar8 = iVar8 + 1;
			if (lVar5 != 0)
				break;
		} while (iVar8 < 0x14);
		if ((int)lVar5 == 1) {
			L5drawRoom((int)param_1_00, iVar3, param_3_00, uVar2);
		}
		iVar8 = (int)(param_2 + param_4);
		uVar7 = L5checkRoom(param_1_00 + -1, iVar8, param_3_00 + 2, uVar2 + 1);
		if ((int)uVar7 == 1) {
			L5drawRoom((int)param_1_00, iVar8, param_3_00, uVar2);
		}
		if ((int)lVar5 == 1) {
			L5roomGen(param_1_00, param_2 - param_4_00, param_3_00, param_4_00, 0, param_6_00, param_7_00,
			    param_8_00, param_9_00);
		}
		if ((int)uVar7 == 1) {
			L5roomGen(param_1_00, param_2 + param_4, param_3_00, param_4_00, 0, param_6_00, param_7_00,
			    param_8_00, param_9_00);
		}
	} else {
		if (!bVar4) {
			iVar8 = 0;
			do {
				param_6_00 = (undefined)uVar9;
				param_7_00 = (undefined)uVar10;
				param_8_00 = (undefined)lVar6;
				uVar12 = (undefined)lVar11;
				lVar6 = random(0, 5, param_6_00, param_7_00, param_8_00, uVar12, (char)lVar13, (char)lVar14,
				    param_9_00, in_stack_ffffffaf, in_stack_ffffffbb);
				param_3_00 = (ulonglong)(uint)(((int)lVar6 + 2 >> 1) << 1);
				lVar6 = random(0, 5, param_6_00, param_7_00, param_8_00, uVar12, (char)lVar13, (char)lVar14,
				    param_9_00, in_stack_ffffffaf, in_stack_ffffffbb);
				uVar10 = param_3_00 + 1;
				uVar1 = ((int)(lVar6 + 2U) >> 1) * 2;
				param_4_00 = (ulonglong)uVar1;
				uVar9 = param_4_00 + 2;
				param_2_00 = (param_2 + (ulonglong)(uint)((int)param_4 >> 1) + (ulonglong)((int)param_4 < 0 && (param_4 & 1) != 0)) - (lVar6 + 2U & 0xffffffff00000000 | (ulonglong)(uint)((int)uVar1 >> 1));
				param_1_00 = param_1 - param_3_00;
				iVar3 = (int)param_2_00;
				lVar6 = param_1_00;
				lVar11 = param_2_00;
				lVar5 = L5checkRoom(param_1_00 + -1, iVar3 + -1, uVar9, (int)uVar10);
				param_8_00 = (undefined)lVar14;
				param_7_00 = (undefined)lVar13;
				param_6_00 = (undefined)lVar11;
				iVar8 = iVar8 + 1;
				if (lVar5 != 0)
					break;
			} while (iVar8 < 0x14);
			if ((int)lVar5 == 1) {
				L5drawRoom((int)param_1_00, iVar3, param_3_00, uVar1);
			}
			param_1 = param_1 + param_3;
			uVar7 = L5checkRoom(param_1, iVar3 + -1, param_3_00 + 1, uVar1 + 2);
			if ((int)uVar7 == 1) {
				L5drawRoom((int)param_1, iVar3, param_3_00, uVar1);
			}
			if ((int)lVar5 == 1) {
				L5roomGen(param_1_00, param_2_00, param_3_00, param_4_00, 1, param_6_00, param_7_00, param_8_00,
				    param_9_00);
			}
			if ((int)uVar7 == 1) {
				L5roomGen(param_1, param_2_00, param_3_00, param_4_00, 1, param_6_00, param_7_00, param_8_00,
				    param_9_00);
			}
		}
	}
	return;
}

void L5firstRoom(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	undefined **ppuVar2;
	longlong lVar3;
	uint uVar4;
	undefined *puVar5;
	uint uVar6;
	uint uVar7;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined in_stack_ffffffcb;

	puVar5 = PTR_DAT_100f1804;
	ppuVar2 = &toc;
	lVar3 = random(0, 2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8,
	    in_stack_ffffffbf, in_stack_ffffffcb);
	if ((int)lVar3 != 0) {
		uVar7 = 1;
		uVar6 = 0x27;
		lVar3 = random(0, 2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8,
		    in_stack_ffffffbf, in_stack_ffffffcb);
		ppuVar2[-0x13c8] = (undefined *)lVar3;
		lVar3 = random(0, 2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8,
		    in_stack_ffffffbf, in_stack_ffffffcb);
		ppuVar2[-0x13c9] = (undefined *)lVar3;
		lVar3 = random(0, 2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8,
		    in_stack_ffffffbf, in_stack_ffffffcb);
		ppuVar2[-0x13ca] = (undefined *)lVar3;
		if ((int)(ppuVar2[-0x13c8] + (int)ppuVar2[-0x13ca]) < 2) {
			ppuVar2[-0x13c9] = (undefined *)0x1;
		}
		if (ppuVar2[-0x13c8] == (undefined *)0x0) {
			uVar7 = 0x12;
		} else {
			L5drawRoom(1, 0xf, 10, 10);
		}
		if (ppuVar2[-0x13c9] != (undefined *)0x0) {
			L5drawRoom(0xf, 0xf, 10, 10);
		}
		if (ppuVar2[-0x13ca] == (undefined *)0x0) {
			uVar6 = 0x16;
		} else {
			L5drawRoom(0x1d, 0xf, 10, 10);
		}
		puVar5 = puVar5 + uVar7 * 0x28;
		uVar4 = uVar6 - uVar7;
		if (uVar7 < uVar6) {
			uVar1 = (ulonglong)(uVar4 >> 3);
			if (uVar4 >> 3 != 0) {
				do {
					puVar5[0x11] = 1;
					puVar5[0x12] = 1;
					puVar5[0x13] = 1;
					puVar5[0x14] = 1;
					puVar5[0x15] = 1;
					puVar5[0x16] = 1;
					puVar5[0x39] = 1;
					puVar5[0x3a] = 1;
					puVar5[0x3b] = 1;
					puVar5[0x3c] = 1;
					puVar5[0x3d] = 1;
					puVar5[0x3e] = 1;
					puVar5[0x61] = 1;
					puVar5[0x62] = 1;
					puVar5[99] = 1;
					puVar5[100] = 1;
					puVar5[0x65] = 1;
					puVar5[0x66] = 1;
					puVar5[0x89] = 1;
					puVar5[0x8a] = 1;
					puVar5[0x8b] = 1;
					puVar5[0x8c] = 1;
					puVar5[0x8d] = 1;
					puVar5[0x8e] = 1;
					puVar5[0xb1] = 1;
					puVar5[0xb2] = 1;
					puVar5[0xb3] = 1;
					puVar5[0xb4] = 1;
					puVar5[0xb5] = 1;
					puVar5[0xb6] = 1;
					puVar5[0xd9] = 1;
					puVar5[0xda] = 1;
					puVar5[0xdb] = 1;
					puVar5[0xdc] = 1;
					puVar5[0xdd] = 1;
					puVar5[0xde] = 1;
					puVar5[0x101] = 1;
					puVar5[0x102] = 1;
					puVar5[0x103] = 1;
					puVar5[0x104] = 1;
					puVar5[0x105] = 1;
					puVar5[0x106] = 1;
					puVar5[0x129] = 1;
					puVar5[0x12a] = 1;
					puVar5[299] = 1;
					puVar5[300] = 1;
					puVar5[0x12d] = 1;
					puVar5[0x12e] = 1;
					puVar5 = puVar5 + 0x140;
					uVar1 = uVar1 - 1;
				} while (uVar1 != 0);
				uVar4 = uVar4 & 7;
				if (uVar4 == 0)
					goto LAB_1002972c;
			}
			do {
				puVar5[0x11] = 1;
				puVar5[0x12] = 1;
				puVar5[0x13] = 1;
				puVar5[0x14] = 1;
				puVar5[0x15] = 1;
				puVar5[0x16] = 1;
				puVar5 = puVar5 + 0x28;
				uVar4 = uVar4 - 1;
			} while (uVar4 != 0);
		}
	LAB_1002972c:
		if (ppuVar2[-0x13c8] != (undefined *)0x0) {
			L5roomGen(1, 0xf, 10, 10, 1, param_6, param_7, param_8, in_stack_ffffffb8);
		}
		if (ppuVar2[-0x13c9] != (undefined *)0x0) {
			L5roomGen(0xf, 0xf, 10, 10, 1, param_6, param_7, param_8, in_stack_ffffffb8);
		}
		if (ppuVar2[-0x13ca] != (undefined *)0x0) {
			L5roomGen(0x1d, 0xf, 10, 10, 1, param_6, param_7, param_8, in_stack_ffffffb8);
		}
		ppuVar2[-0x13cd] = (undefined *)0x0;
		ppuVar2[-0x13cc] = (undefined *)0x0;
		ppuVar2[-0x13cb] = (undefined *)0x0;
		return;
	}
	uVar6 = 1;
	uVar7 = 0x27;
	lVar3 = random(0, 2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8,
	    in_stack_ffffffbf, in_stack_ffffffcb);
	ppuVar2[-0x13cb] = (undefined *)lVar3;
	lVar3 = random(0, 2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8,
	    in_stack_ffffffbf, in_stack_ffffffcb);
	ppuVar2[-0x13cc] = (undefined *)lVar3;
	lVar3 = random(0, 2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8,
	    in_stack_ffffffbf, in_stack_ffffffcb);
	ppuVar2[-0x13cd] = (undefined *)lVar3;
	if ((int)(ppuVar2[-0x13cb] + (int)ppuVar2[-0x13cd]) < 2) {
		ppuVar2[-0x13cc] = (undefined *)0x1;
	}
	if (ppuVar2[-0x13cb] == (undefined *)0x0) {
		uVar6 = 0x12;
	} else {
		L5drawRoom(0xf, 1, 10, 10);
	}
	if (ppuVar2[-0x13cc] != (undefined *)0x0) {
		L5drawRoom(0xf, 0xf, 10, 10);
	}
	if (ppuVar2[-0x13cd] == (undefined *)0x0) {
		uVar7 = 0x16;
	} else {
		L5drawRoom(0xf, 0x1d, 10, 10);
	}
	puVar5 = puVar5 + uVar6;
	uVar4 = uVar7 - uVar6;
	if (uVar6 < uVar7) {
		uVar1 = (ulonglong)(uVar4 >> 3);
		if (uVar4 >> 3 != 0) {
			do {
				puVar5[0x2a8] = 1;
				puVar5[0x2d0] = 1;
				puVar5[0x2f8] = 1;
				puVar5[800] = 1;
				puVar5[0x348] = 1;
				puVar5[0x370] = 1;
				puVar5[0x2a9] = 1;
				puVar5[0x2d1] = 1;
				puVar5[0x2f9] = 1;
				puVar5[0x321] = 1;
				puVar5[0x349] = 1;
				puVar5[0x371] = 1;
				puVar5[0x2aa] = 1;
				puVar5[0x2d2] = 1;
				puVar5[0x2fa] = 1;
				puVar5[0x322] = 1;
				puVar5[0x34a] = 1;
				puVar5[0x372] = 1;
				puVar5[0x2ab] = 1;
				puVar5[0x2d3] = 1;
				puVar5[0x2fb] = 1;
				puVar5[0x323] = 1;
				puVar5[0x34b] = 1;
				puVar5[0x373] = 1;
				puVar5[0x2ac] = 1;
				puVar5[0x2d4] = 1;
				puVar5[0x2fc] = 1;
				puVar5[0x324] = 1;
				puVar5[0x34c] = 1;
				puVar5[0x374] = 1;
				puVar5[0x2ad] = 1;
				puVar5[0x2d5] = 1;
				puVar5[0x2fd] = 1;
				puVar5[0x325] = 1;
				puVar5[0x34d] = 1;
				puVar5[0x375] = 1;
				puVar5[0x2ae] = 1;
				puVar5[0x2d6] = 1;
				puVar5[0x2fe] = 1;
				puVar5[0x326] = 1;
				puVar5[0x34e] = 1;
				puVar5[0x376] = 1;
				puVar5[0x2af] = 1;
				puVar5[0x2d7] = 1;
				puVar5[0x2ff] = 1;
				puVar5[0x327] = 1;
				puVar5[0x34f] = 1;
				puVar5[0x377] = 1;
				puVar5 = puVar5 + 8;
				uVar1 = uVar1 - 1;
			} while (uVar1 != 0);
			uVar4 = uVar4 & 7;
			if (uVar4 == 0)
				goto LAB_100294d0;
		}
		do {
			puVar5[0x2a8] = 1;
			puVar5[0x2d0] = 1;
			puVar5[0x2f8] = 1;
			puVar5[800] = 1;
			puVar5[0x348] = 1;
			puVar5[0x370] = 1;
			puVar5 = puVar5 + 1;
			uVar4 = uVar4 - 1;
		} while (uVar4 != 0);
	}
LAB_100294d0:
	if (ppuVar2[-0x13cb] != (undefined *)0x0) {
		L5roomGen(0xf, 1, 10, 10, 0, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	if (ppuVar2[-0x13cc] != (undefined *)0x0) {
		L5roomGen(0xf, 0xf, 10, 10, 0, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	if (ppuVar2[-0x13cd] != (undefined *)0x0) {
		L5roomGen(0xf, 0x1d, 10, 10, 0, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	ppuVar2[-0x13ca] = (undefined *)0x0;
	ppuVar2[-0x13c9] = (undefined *)0x0;
	ppuVar2[-0x13c8] = (undefined *)0x0;
	return;
}

longlong L5GetArea(void)

{
	longlong lVar1;
	char *pcVar2;
	char *pcVar3;
	int iVar4;
	longlong lVar5;

	lVar1 = 0;
	iVar4 = 0;
	pcVar3 = PTR_DAT_100f1804;
	do {
		lVar5 = 4;
		pcVar2 = pcVar3;
		do {
			if (*pcVar2 == '\x01') {
				lVar1 = lVar1 + 1;
			}
			if (pcVar2[0x28] == '\x01') {
				lVar1 = lVar1 + 1;
			}
			if (pcVar2[0x50] == '\x01') {
				lVar1 = lVar1 + 1;
			}
			if (pcVar2[0x78] == '\x01') {
				lVar1 = lVar1 + 1;
			}
			if (pcVar2[0xa0] == '\x01') {
				lVar1 = lVar1 + 1;
			}
			if (pcVar2[200] == '\x01') {
				lVar1 = lVar1 + 1;
			}
			if (pcVar2[0xf0] == '\x01') {
				lVar1 = lVar1 + 1;
			}
			if (pcVar2[0x118] == '\x01') {
				lVar1 = lVar1 + 1;
			}
			if (pcVar2[0x140] == '\x01') {
				lVar1 = lVar1 + 1;
			}
			if (pcVar2[0x168] == '\x01') {
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

void L5makeDungeon(void)

{
	undefined *puVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	int iVar5;
	undefined *puVar6;
	undefined *puVar7;
	int iVar8;
	longlong lVar9;

	puVar1 = PTR_DAT_100f1a8c;
	iVar8 = 0;
	iVar5 = 0;
	puVar4 = PTR_DAT_100f1804;
	do {
		lVar9 = 8;
		iVar2 = 0;
		puVar3 = puVar4;
		do {
			puVar6 = puVar1 + iVar2 + iVar5;
			*puVar6 = *puVar3;
			puVar6[1] = *puVar3;
			puVar6[0x50] = *puVar3;
			puVar6[0x51] = *puVar3;
			puVar6 = puVar1 + iVar2 + 0xa0 + iVar5;
			*puVar6 = puVar3[0x28];
			puVar6[1] = puVar3[0x28];
			puVar6[0x50] = puVar3[0x28];
			puVar6[0x51] = puVar3[0x28];
			puVar6 = puVar1 + iVar2 + 0x140 + iVar5;
			*puVar6 = puVar3[0x50];
			puVar6[1] = puVar3[0x50];
			puVar6[0x50] = puVar3[0x50];
			puVar6[0x51] = puVar3[0x50];
			puVar6 = puVar1 + iVar2 + 0x1e0 + iVar5;
			*puVar6 = puVar3[0x78];
			puVar6[1] = puVar3[0x78];
			puVar6[0x50] = puVar3[0x78];
			puVar6[0x51] = puVar3[0x78];
			puVar7 = puVar1 + iVar2 + 0x280 + iVar5;
			iVar2 = iVar2 + 800;
			*puVar7 = puVar3[0xa0];
			puVar7[1] = puVar3[0xa0];
			puVar7[0x50] = puVar3[0xa0];
			puVar6 = puVar3 + 0xa0;
			puVar3 = puVar3 + 200;
			puVar7[0x51] = *puVar6;
			lVar9 = lVar9 + -1;
		} while (lVar9 != 0);
		iVar8 = iVar8 + 1;
		iVar5 = iVar5 + 2;
		puVar4 = puVar4 + 1;
	} while (iVar8 < 0x28);
	return;
}

void L5makeDmt(void)

{
	byte *pbVar1;
	byte *pbVar2;
	byte *pbVar3;
	byte *pbVar4;
	undefined *puVar5;
	byte *pbVar6;
	undefined *puVar7;
	undefined *puVar8;
	int iVar9;
	longlong lVar10;

	puVar8 = PTR_DAT_100f1804;
	lVar10 = 0x14;
	puVar5 = PTR_DAT_100f1804;
	do {
		*puVar5 = 0x16;
		puVar5[0x28] = 0x16;
		puVar5[0x50] = 0x16;
		puVar5[0x78] = 0x16;
		puVar5[0xa0] = 0x16;
		puVar5[200] = 0x16;
		puVar5[0xf0] = 0x16;
		puVar5[0x118] = 0x16;
		puVar5[0x140] = 0x16;
		puVar5[0x168] = 0x16;
		puVar5[400] = 0x16;
		puVar5[0x1b8] = 0x16;
		puVar5[0x1e0] = 0x16;
		puVar5[0x208] = 0x16;
		puVar5[0x230] = 0x16;
		puVar5[600] = 0x16;
		puVar5[0x280] = 0x16;
		puVar5[0x2a8] = 0x16;
		puVar5[0x2d0] = 0x16;
		puVar5[0x2f8] = 0x16;
		puVar5[800] = 0x16;
		puVar5[0x348] = 0x16;
		puVar5[0x370] = 0x16;
		puVar5[0x398] = 0x16;
		puVar5[0x3c0] = 0x16;
		puVar5[1000] = 0x16;
		puVar5[0x410] = 0x16;
		puVar5[0x438] = 0x16;
		puVar5[0x460] = 0x16;
		puVar5[0x488] = 0x16;
		puVar5[0x4b0] = 0x16;
		puVar5[0x4d8] = 0x16;
		puVar5[0x500] = 0x16;
		puVar5[0x528] = 0x16;
		puVar5[0x550] = 0x16;
		puVar5[0x578] = 0x16;
		puVar5[0x5a0] = 0x16;
		puVar5[0x5c8] = 0x16;
		puVar5[0x5f0] = 0x16;
		puVar5[0x618] = 0x16;
		puVar5[1] = 0x16;
		puVar5[0x29] = 0x16;
		puVar5[0x51] = 0x16;
		puVar5[0x79] = 0x16;
		puVar5[0xa1] = 0x16;
		puVar5[0xc9] = 0x16;
		puVar5[0xf1] = 0x16;
		puVar5[0x119] = 0x16;
		puVar5[0x141] = 0x16;
		puVar5[0x169] = 0x16;
		puVar5[0x191] = 0x16;
		puVar5[0x1b9] = 0x16;
		puVar5[0x1e1] = 0x16;
		puVar5[0x209] = 0x16;
		puVar5[0x231] = 0x16;
		puVar5[0x259] = 0x16;
		puVar5[0x281] = 0x16;
		puVar5[0x2a9] = 0x16;
		puVar5[0x2d1] = 0x16;
		puVar5[0x2f9] = 0x16;
		puVar5[0x321] = 0x16;
		puVar5[0x349] = 0x16;
		puVar5[0x371] = 0x16;
		puVar5[0x399] = 0x16;
		puVar5[0x3c1] = 0x16;
		puVar5[0x3e9] = 0x16;
		puVar5[0x411] = 0x16;
		puVar5[0x439] = 0x16;
		puVar5[0x461] = 0x16;
		puVar5[0x489] = 0x16;
		puVar5[0x4b1] = 0x16;
		puVar5[0x4d9] = 0x16;
		puVar5[0x501] = 0x16;
		puVar5[0x529] = 0x16;
		puVar5[0x551] = 0x16;
		puVar5[0x579] = 0x16;
		puVar5[0x5a1] = 0x16;
		puVar5[0x5c9] = 0x16;
		puVar5[0x5f1] = 0x16;
		puVar5[0x619] = 0x16;
		puVar5 = puVar5 + 2;
		lVar10 = lVar10 + -1;
	} while (lVar10 != 0);
	iVar9 = 1;
	puVar5 = PTR_DAT_100f1a8c + 1;
	do {
		pbVar6 = puVar5 + 0x50;
		lVar10 = 0xd;
		puVar7 = puVar8;
		do {
			*puVar7 = (&DAT_100f7193)
			    [(uint)pbVar6[0x51] * 8 + (uint)pbVar6[1] * 4 + (uint)*pbVar6 + (uint)pbVar6[0x50] * 2];
			puVar7[0x28] = (&DAT_100f7193)
			    [(uint)pbVar6[0xf1] * 8 + (uint)pbVar6[0xa1] * 4 + (uint)pbVar6[0xa0] + (uint)pbVar6[0xf0] * 2];
			pbVar1 = pbVar6 + 0x191;
			pbVar2 = pbVar6 + 400;
			pbVar3 = pbVar6 + 0x141;
			pbVar4 = pbVar6 + 0x140;
			pbVar6 = pbVar6 + 0x1e0;
			puVar7[0x50] = (&DAT_100f7193)
			    [(uint)*pbVar1 * 8 + (uint)*pbVar3 * 4 + (uint)*pbVar4 + (uint)*pbVar2 * 2];
			puVar7 = puVar7 + 0x78;
			lVar10 = lVar10 + -1;
		} while (lVar10 != 0);
		iVar9 = iVar9 + 2;
		puVar5 = puVar5 + 2;
		puVar8 = puVar8 + 1;
	} while (iVar9 < 0x4e);
	return;
}

int L5HWallOk(int param_1, int param_2)

{
	byte bVar1;
	bool bVar2;
	char *pcVar3;
	int iVar4;
	int iVar5;

	iVar5 = 1;
	while (true) {
		iVar4 = (param_1 + iVar5) * 0x28;
		pcVar3 = PTR_DAT_100f1804 + iVar4 + param_2;
		if ((((*pcVar3 != '\r') || (pcVar3[-1] != '\r')) || (pcVar3[1] != '\r')) || (PTR_DAT_100f1abc[iVar4 + param_2] != '\0'))
			break;
		iVar5 = iVar5 + 1;
	}
	bVar1 = PTR_DAT_100f1804[iVar4 + param_2];
	bVar2 = false;
	if ((2 < bVar1) && (bVar1 < 8)) {
		bVar2 = true;
	}
	if ((0xf < bVar1) && (bVar1 < 0x19)) {
		bVar2 = true;
	}
	if (bVar1 == 0x16) {
		bVar2 = false;
	}
	if (iVar5 == 1) {
		bVar2 = false;
	}
	if (bVar2) {
		return iVar5;
	}
	return -1;
}

int L5VWallOk(int param_1, int param_2)

{
	byte bVar1;
	char *pcVar2;
	bool bVar3;
	int iVar4;
	char *pcVar5;

	pcVar5 = PTR_DAT_100f1abc + param_1 * 0x28 + param_2 + 1;
	iVar4 = 1;
	pcVar2 = PTR_DAT_100f1804 + param_1 * 0x28 + param_2;
	while (true) {
		if ((((pcVar2[1] != '\r') || (pcVar2[-0x27] != '\r')) || (pcVar2[0x29] != '\r')) || (*pcVar5 != '\0'))
			break;
		pcVar5 = pcVar5 + 1;
		iVar4 = iVar4 + 1;
		pcVar2 = pcVar2 + 1;
	}
	bVar1 = (PTR_DAT_100f1804 + param_1 * 0x28 + param_2)[iVar4];
	bVar3 = false;
	if ((2 < bVar1) && (bVar1 < 8)) {
		bVar3 = true;
	}
	if ((0xf < bVar1) && (bVar1 < 0x19)) {
		bVar3 = true;
	}
	if (bVar1 == 0x16) {
		bVar3 = false;
	}
	if (iVar4 == 1) {
		bVar3 = false;
	}
	if (bVar3) {
		return iVar4;
	}
	return -1;
}

void L5HorizWall(int param_1, int param_2, char param_3, longlong param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined *puVar1;
	int iVar2;
	int iVar3;
	undefined *puVar4;
	ulonglong uVar5;
	undefined **ppuVar6;
	longlong lVar7;
	int iVar8;
	char cVar9;
	undefined uVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	char cVar14;
	char unaff_r30;
	ulonglong uVar15;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	puVar4 = PTR_DAT_100f1804;
	uVar10 = (undefined)param_4;
	ppuVar6 = &toc;
	uVar15 = ZEXT48(PTR_DAT_100f1804);
	cVar9 = param_3;
	lVar7 = random(0, 4, param_3, uVar10, param_5, param_6, param_7, param_8, in_stack_ffffffa8,
	    in_stack_ffffffaf, in_stack_ffffffbb);
	iVar8 = (int)lVar7;
	if (iVar8 == 2) {
		unaff_r30 = '\f';
		if (param_3 == '\x02') {
			param_3 = '\f';
		}
		if (param_3 == '\x04') {
			param_3 = '\n';
		}
	} else {
		if (iVar8 < 2) {
			if (-1 < iVar8) {
				unaff_r30 = '\x02';
			}
		} else {
			if (iVar8 < 4) {
				unaff_r30 = '$';
				if (param_3 == '\x02') {
					param_3 = '$';
				}
				if (param_3 == '\x04') {
					param_3 = '\x1b';
				}
			}
		}
	}
	lVar7 = random(0, 6, cVar9, uVar10, param_5, param_6, param_7, param_8, in_stack_ffffffa8,
	    in_stack_ffffffaf, in_stack_ffffffbb);
	if ((int)lVar7 == 5) {
		cVar14 = '\f';
	} else {
		cVar14 = '\x1a';
	}
	if (unaff_r30 == '\f') {
		cVar14 = '\f';
	}
	iVar8 = (int)param_4;
	puVar4[param_1 * 0x28 + param_2] = param_3;
	lVar7 = 1;
	if (1 < iVar8) {
		if (8 < iVar8 + -1) {
			uVar5 = (ulonglong)(iVar8 - 2U >> 3);
			param_8 = (undefined)(uVar15 + (longlong)param_2);
			if (1 < iVar8 + -8) {
				do {
					lVar13 = (longlong)param_1 + lVar7;
					param_7 = (undefined)lVar13;
					lVar7 = lVar7 + 8;
					iVar3 = (int)lVar13;
					iVar2 = (int)(uVar15 + (longlong)param_2);
					*(char *)(iVar2 + iVar3 * 0x28) = unaff_r30;
					lVar12 = (lVar13 + 2) * 0x28;
					param_6 = (undefined)lVar12;
					*(char *)(iVar2 + (iVar3 + 1) * 0x28) = unaff_r30;
					lVar11 = (lVar13 + 3) * 0x28;
					param_5 = (undefined)lVar11;
					*(char *)(iVar2 + (int)lVar12) = unaff_r30;
					lVar12 = (lVar13 + 4) * 0x28;
					uVar10 = (undefined)lVar12;
					*(char *)(iVar2 + (int)lVar11) = unaff_r30;
					lVar11 = (lVar13 + 5) * 0x28;
					cVar9 = (char)lVar11;
					*(char *)(iVar2 + (int)lVar12) = unaff_r30;
					*(char *)(iVar2 + (int)lVar11) = unaff_r30;
					*(char *)(iVar2 + (iVar3 + 6) * 0x28) = unaff_r30;
					*(char *)(iVar2 + (iVar3 + 7) * 0x28) = unaff_r30;
					uVar5 = uVar5 - 1;
				} while (uVar5 != 0);
			}
		}
		lVar11 = param_4 - lVar7;
		if ((int)lVar7 < iVar8) {
			do {
				iVar8 = (int)lVar7;
				lVar7 = lVar7 + 1;
				puVar4[(param_1 + iVar8) * 0x28 + param_2] = unaff_r30;
				lVar11 = lVar11 + -1;
			} while (lVar11 != 0);
		}
	}
	lVar7 = random(0, param_4 + -1, cVar9, uVar10, param_5, param_6, param_7, param_8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
	iVar8 = (int)lVar7 + 1;
	if (cVar14 == '\f') {
		puVar4[(param_1 + iVar8) * 0x28 + param_2] = 0xc;
	} else {
		puVar1 = ppuVar6[-0x1d45];
		param_2 = (param_1 + iVar8) * 0x28 + param_2;
		puVar4[param_2] = 2;
		puVar1[param_2] = puVar1[param_2] | 1;
	}
	return;
}

void L5VertWall(longlong param_1, longlong param_2, char param_3, longlong param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	ulonglong uVar1;
	undefined **ppuVar2;
	longlong lVar3;
	int iVar5;
	longlong lVar4;
	char *pcVar6;
	longlong lVar7;
	char cVar8;
	undefined uVar9;
	char cVar10;
	char unaff_r27;
	char *pcVar11;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	uVar9 = (undefined)param_4;
	ppuVar2 = &toc;
	cVar8 = param_3;
	lVar3 = random(0, 4, param_3, uVar9, param_5, param_6, param_7, param_8, in_stack_ffffffa8,
	    in_stack_ffffffaf, in_stack_ffffffbb);
	iVar5 = (int)lVar3;
	if (iVar5 == 2) {
		unaff_r27 = '\v';
		if (param_3 == '\x01') {
			param_3 = '\v';
		}
		if (param_3 == '\x04') {
			param_3 = '\x0e';
		}
	} else {
		if (iVar5 < 2) {
			if (-1 < iVar5) {
				unaff_r27 = '\x01';
			}
		} else {
			if (iVar5 < 4) {
				unaff_r27 = '#';
				if (param_3 == '\x01') {
					param_3 = '#';
				}
				if (param_3 == '\x04') {
					param_3 = '%';
				}
			}
		}
	}
	lVar3 = random(0, 6, cVar8, uVar9, param_5, param_6, param_7, param_8, in_stack_ffffffa8,
	    in_stack_ffffffaf, in_stack_ffffffbb);
	if ((int)lVar3 == 5) {
		cVar10 = '\v';
	} else {
		cVar10 = '\x19';
	}
	if (unaff_r27 == '\v') {
		cVar10 = '\v';
	}
	iVar5 = (int)param_4;
	lVar3 = ZEXT48(ppuVar2[-0x1df3]) + param_1 * 0x28 + param_2;
	pcVar11 = (char *)lVar3;
	*pcVar11 = param_3;
	lVar7 = 1;
	if (1 < iVar5) {
		if (8 < iVar5 + -1) {
			uVar1 = (ulonglong)(iVar5 - 2U >> 3);
			lVar4 = lVar3 + 1;
			if (1 < iVar5 + -8) {
				do {
					pcVar6 = (char *)lVar4;
					*pcVar6 = unaff_r27;
					lVar7 = lVar7 + 8;
					pcVar6[1] = unaff_r27;
					pcVar6[2] = unaff_r27;
					pcVar6[3] = unaff_r27;
					pcVar6[4] = unaff_r27;
					pcVar6[5] = unaff_r27;
					pcVar6[6] = unaff_r27;
					pcVar6[7] = unaff_r27;
					lVar4 = lVar4 + 8;
					uVar1 = uVar1 - 1;
				} while (uVar1 != 0);
			}
		}
		lVar3 = lVar3 + lVar7;
		lVar4 = param_4 - lVar7;
		if ((int)lVar7 < iVar5) {
			do {
				*(char *)lVar3 = unaff_r27;
				lVar3 = lVar3 + 1;
				lVar4 = lVar4 + -1;
			} while (lVar4 != 0);
		}
	}
	lVar3 = random(0, param_4 + -1, cVar8, uVar9, param_5, param_6, param_7, param_8, in_stack_ffffffa8,
	    in_stack_ffffffaf, in_stack_ffffffbb);
	iVar5 = (int)lVar3 + 1;
	if (cVar10 == '\v') {
		pcVar11[iVar5] = '\v';
	} else {
		pcVar11[iVar5] = '\x01';
		iVar5 = (int)(param_1 * 0x28) + (int)param_2 + iVar5;
		ppuVar2[-0x1d45][iVar5] = ppuVar2[-0x1d45][iVar5] | 2;
	}
	return;
}

longlong L5AddWall(char param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	longlong lVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	char *pcVar13;
	char *pcVar14;
	char *pcVar15;
	char *pcVar16;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined in_stack_ffffffcb;

	lVar10 = (longlong)param_8;
	lVar9 = (longlong)param_7;
	lVar8 = (longlong)param_6;
	lVar7 = (longlong)param_5;
	lVar6 = (longlong)param_4;
	lVar5 = (longlong)param_3;
	lVar1 = (longlong)param_1;
	lVar11 = 0;
	pcVar14 = PTR_DAT_100f1abc;
	pcVar13 = PTR_DAT_100f1804;
	do {
		lVar12 = 0;
		pcVar16 = pcVar14;
		pcVar15 = pcVar13;
		do {
			if (*pcVar16 == '\0') {
				iVar3 = (int)lVar12;
				iVar4 = (int)lVar11;
				if ((*pcVar15 == '\x03') && (lVar1 = random(0, 100, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb), (int)lVar1 < 100)) {
					iVar2 = L5HWallOk(iVar3, iVar4);
					lVar1 = (longlong)iVar2;
					lVar6 = lVar1;
					if (iVar2 != -1) {
						lVar5 = 2;
						lVar6 = lVar1;
						lVar1 = L5HorizWall(iVar3, iVar4, '\x02', lVar1, (char)lVar7, (char)lVar8, (char)lVar9,
						    (char)lVar10, in_stack_ffffffb8);
					}
				}
				if ((*pcVar15 == '\x03') && (lVar1 = random(0, 100, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb), (int)lVar1 < 100)) {
					iVar2 = L5VWallOk(iVar3, iVar4);
					lVar1 = (longlong)iVar2;
					lVar6 = lVar1;
					if (iVar2 != -1) {
						lVar5 = 1;
						lVar6 = lVar1;
						lVar1 = L5VertWall(lVar12, lVar11, '\x01', lVar1, (char)lVar7, (char)lVar8, (char)lVar9,
						    (char)lVar10, in_stack_ffffffb8);
					}
				}
				if ((*pcVar15 == '\x06') && (lVar1 = random(0, 100, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb), (int)lVar1 < 100)) {
					iVar2 = L5HWallOk(iVar3, iVar4);
					lVar1 = (longlong)iVar2;
					lVar6 = lVar1;
					if (iVar2 != -1) {
						lVar5 = 4;
						lVar6 = lVar1;
						lVar1 = L5HorizWall(iVar3, iVar4, '\x04', lVar1, (char)lVar7, (char)lVar8, (char)lVar9,
						    (char)lVar10, in_stack_ffffffb8);
					}
				}
				if ((*pcVar15 == '\a') && (lVar1 = random(0, 100, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb), (int)lVar1 < 100)) {
					iVar2 = L5VWallOk(iVar3, iVar4);
					lVar1 = (longlong)iVar2;
					lVar6 = lVar1;
					if (iVar2 != -1) {
						lVar5 = 4;
						lVar6 = lVar1;
						lVar1 = L5VertWall(lVar12, lVar11, '\x04', lVar1, (char)lVar7, (char)lVar8, (char)lVar9,
						    (char)lVar10, in_stack_ffffffb8);
					}
				}
				if ((*pcVar15 == '\x02') && (lVar1 = random(0, 100, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb), (int)lVar1 < 100)) {
					iVar2 = L5HWallOk(iVar3, iVar4);
					lVar1 = (longlong)iVar2;
					lVar6 = lVar1;
					if (iVar2 != -1) {
						lVar5 = 2;
						lVar6 = lVar1;
						lVar1 = L5HorizWall(iVar3, iVar4, '\x02', lVar1, (char)lVar7, (char)lVar8, (char)lVar9,
						    (char)lVar10, in_stack_ffffffb8);
					}
				}
				if ((*pcVar15 == '\x01') && (lVar1 = random(0, 100, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb), (int)lVar1 < 100)) {
					iVar3 = L5VWallOk(iVar3, iVar4);
					lVar1 = (longlong)iVar3;
					lVar6 = lVar1;
					if (iVar3 != -1) {
						lVar5 = 1;
						lVar6 = lVar1;
						lVar1 = L5VertWall(lVar12, lVar11, '\x01', lVar1, (char)lVar7, (char)lVar8, (char)lVar9,
						    (char)lVar10, in_stack_ffffffb8);
					}
				}
			}
			lVar12 = lVar12 + 1;
			pcVar15 = pcVar15 + 0x28;
			pcVar16 = pcVar16 + 0x28;
		} while ((int)lVar12 < 0x28);
		lVar11 = lVar11 + 1;
		pcVar13 = pcVar13 + 1;
		pcVar14 = pcVar14 + 1;
	} while ((int)lVar11 < 0x28);
	return lVar1;
}

void DRLG_L5GChamber(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6)

{
	undefined *puVar1;
	undefined *puVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	undefined *puVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	puVar1 = PTR_DAT_100f1804;
	if (param_3 == 1) {
		puVar6 = PTR_DAT_100f1804 + param_2 + param_1 * 0x28;
		puVar6[0x50] = 0xc;
		puVar6[0x78] = 0xc;
		puVar6[0xa0] = 3;
		puVar6[0x118] = 9;
		puVar6[0x140] = 0xc;
		puVar6[0x168] = 2;
	}
	if (param_4 == 1) {
		puVar6 = puVar1 + param_2 + param_1 * 0x28;
		puVar6[0x5b] = 10;
		puVar6[0x83] = 0xc;
		puVar6[0xab] = 8;
		puVar6[0x123] = 5;
		puVar6[0x14b] = 0xc;
		if (puVar6[0x173] != '\x04') {
			puVar6[0x173] = 0x15;
		}
	}
	if (param_5 == 1) {
		puVar6 = puVar1 + param_2 + param_1 * 0x28;
		puVar6[2] = 0xb;
		puVar6[3] = 0xb;
		puVar6[4] = 3;
		puVar6[7] = 8;
		puVar6[8] = 0xb;
		puVar6[9] = 1;
	}
	if (param_6 == 1) {
		puVar6 = puVar1 + param_2 + (param_1 + 0xb) * 0x28;
		puVar6[2] = 0xe;
		puVar6[3] = 0xb;
		puVar6[4] = 9;
		puVar6[7] = 5;
		puVar6[8] = 0xb;
		if (puVar6[9] != '\x04') {
			puVar6[9] = 0x15;
		}
	}
	puVar6 = puVar1 + param_2 + 1;
	puVar2 = PTR_DAT_100f1abc + param_2 + 1;
	iVar3 = 1;
	do {
		iVar7 = (param_1 + 1) * 0x28;
		puVar6[iVar7] = 0xd;
		iVar5 = (param_1 + 2) * 0x28;
		puVar2[iVar7] = puVar2[iVar7] | 0x40;
		iVar7 = (param_1 + 3) * 0x28;
		puVar6[iVar5] = 0xd;
		iVar9 = (param_1 + 4) * 0x28;
		puVar2[iVar5] = puVar2[iVar5] | 0x40;
		iVar4 = (param_1 + 5) * 0x28;
		puVar6[iVar7] = 0xd;
		iVar8 = (param_1 + 6) * 0x28;
		puVar2[iVar7] = puVar2[iVar7] | 0x40;
		iVar5 = (param_1 + 7) * 0x28;
		puVar6[iVar9] = 0xd;
		iVar7 = (param_1 + 8) * 0x28;
		puVar2[iVar9] = puVar2[iVar9] | 0x40;
		puVar6[iVar4] = 0xd;
		puVar2[iVar4] = puVar2[iVar4] | 0x40;
		puVar6[iVar8] = 0xd;
		puVar2[iVar8] = puVar2[iVar8] | 0x40;
		puVar6[iVar5] = 0xd;
		puVar2[iVar5] = puVar2[iVar5] | 0x40;
		puVar6[iVar7] = 0xd;
		puVar2[iVar7] = puVar2[iVar7] | 0x40;
		iVar7 = 9;
		iVar5 = 2;
		do {
			iVar4 = param_1 + iVar7;
			iVar7 = iVar7 + 1;
			iVar4 = iVar4 * 0x28;
			puVar6[iVar4] = 0xd;
			puVar2[iVar4] = puVar2[iVar4] | 0x40;
			iVar5 = iVar5 + -1;
		} while (iVar5 != 0);
		iVar3 = iVar3 + 1;
		puVar2 = puVar2 + 1;
		puVar6 = puVar6 + 1;
	} while (iVar3 < 0xb);
	puVar1 = puVar1 + param_2 + param_1 * 0x28;
	puVar1[0xa4] = 0xf;
	puVar1[0x11c] = 0xf;
	puVar1[0xa7] = 0xf;
	puVar1[0x11f] = 0xf;
	return;
}

void DRLG_L5GHall(int param_1, int param_2, int param_3, int param_4)

{
	ulonglong uVar1;
	uint uVar2;
	undefined *puVar3;

	if (param_2 != param_4) {
		puVar3 = PTR_DAT_100f1804 + param_1 * 0x28 + param_2;
		uVar2 = param_4 - param_2;
		if (param_4 <= param_2) {
			return;
		}
		uVar1 = (ulonglong)(uVar2 >> 3);
		if (uVar2 >> 3 != 0) {
			do {
				*puVar3 = 0xb;
				puVar3[0x78] = 0xb;
				puVar3[1] = 0xb;
				puVar3[0x79] = 0xb;
				puVar3[2] = 0xb;
				puVar3[0x7a] = 0xb;
				puVar3[3] = 0xb;
				puVar3[0x7b] = 0xb;
				puVar3[4] = 0xb;
				puVar3[0x7c] = 0xb;
				puVar3[5] = 0xb;
				puVar3[0x7d] = 0xb;
				puVar3[6] = 0xb;
				puVar3[0x7e] = 0xb;
				puVar3[7] = 0xb;
				puVar3[0x7f] = 0xb;
				puVar3 = puVar3 + 8;
				uVar1 = uVar1 - 1;
			} while (uVar1 != 0);
			uVar2 = uVar2 & 7;
			if (uVar2 == 0) {
				return;
			}
		}
		do {
			*puVar3 = 0xb;
			puVar3[0x78] = 0xb;
			puVar3 = puVar3 + 1;
			uVar2 = uVar2 - 1;
		} while (uVar2 != 0);
		return;
	}
	puVar3 = PTR_DAT_100f1804 + param_2 + param_1 * 0x28;
	uVar2 = param_3 - param_1;
	if (param_3 <= param_1) {
		return;
	}
	uVar1 = (ulonglong)(uVar2 >> 3);
	if (uVar2 >> 3 != 0) {
		do {
			*puVar3 = 0xc;
			puVar3[3] = 0xc;
			puVar3[0x28] = 0xc;
			puVar3[0x2b] = 0xc;
			puVar3[0x50] = 0xc;
			puVar3[0x53] = 0xc;
			puVar3[0x78] = 0xc;
			puVar3[0x7b] = 0xc;
			puVar3[0xa0] = 0xc;
			puVar3[0xa3] = 0xc;
			puVar3[200] = 0xc;
			puVar3[0xcb] = 0xc;
			puVar3[0xf0] = 0xc;
			puVar3[0xf3] = 0xc;
			puVar3[0x118] = 0xc;
			puVar3[0x11b] = 0xc;
			puVar3 = puVar3 + 0x140;
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
		uVar2 = uVar2 & 7;
		if (uVar2 == 0) {
			return;
		}
	}
	do {
		*puVar3 = 0xc;
		puVar3[3] = 0xc;
		puVar3 = puVar3 + 0x28;
		uVar2 = uVar2 - 1;
	} while (uVar2 != 0);
	return;
}

void L5tileFix(void)

{
	char *pcVar1;
	char *pcVar2;
	char *pcVar3;
	int iVar4;
	longlong lVar5;

	pcVar3 = PTR_DAT_100f1804;
	iVar4 = 0;
	pcVar2 = PTR_DAT_100f1804;
	do {
		lVar5 = 0x28;
		pcVar1 = pcVar2;
		do {
			if ((*pcVar1 == '\x02') && (pcVar1[0x28] == '\x16')) {
				pcVar1[0x28] = '\x17';
			}
			if ((*pcVar1 == '\r') && (pcVar1[0x28] == '\x16')) {
				pcVar1[0x28] = '\x12';
			}
			if ((*pcVar1 == '\r') && (pcVar1[0x28] == '\x02')) {
				pcVar1[0x28] = '\a';
			}
			if ((*pcVar1 == '\x06') && (pcVar1[0x28] == '\x16')) {
				pcVar1[0x28] = '\x18';
			}
			if ((*pcVar1 == '\x01') && (pcVar1[1] == '\x16')) {
				pcVar1[1] = '\x18';
			}
			if ((*pcVar1 == '\r') && (pcVar1[1] == '\x01')) {
				pcVar1[1] = '\x06';
			}
			if ((*pcVar1 == '\r') && (pcVar1[1] == '\x16')) {
				pcVar1[1] = '\x13';
			}
			pcVar1 = pcVar1 + 0x28;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		pcVar2 = pcVar2 + 1;
	} while (iVar4 < 0x28);
	iVar4 = 0;
	pcVar2 = pcVar3;
	do {
		lVar5 = 0x28;
		pcVar1 = pcVar2;
		do {
			if ((*pcVar1 == '\r') && (pcVar1[0x28] == '\x13')) {
				pcVar1[0x28] = '\x15';
			}
			if ((*pcVar1 == '\r') && (pcVar1[0x28] == '\x16')) {
				pcVar1[0x28] = '\x14';
			}
			if ((*pcVar1 == '\a') && (pcVar1[0x28] == '\x16')) {
				pcVar1[0x28] = '\x17';
			}
			if ((*pcVar1 == '\r') && (pcVar1[0x28] == '\x18')) {
				pcVar1[0x28] = '\x15';
			}
			if ((*pcVar1 == '\x13') && (pcVar1[0x28] == '\x16')) {
				pcVar1[0x28] = '\x14';
			}
			if ((*pcVar1 == '\x02') && (pcVar1[0x28] == '\x13')) {
				pcVar1[0x28] = '\x15';
			}
			if ((*pcVar1 == '\x13') && (pcVar1[0x28] == '\x01')) {
				pcVar1[0x28] = '\x06';
			}
			if ((*pcVar1 == '\a') && (pcVar1[0x28] == '\x13')) {
				pcVar1[0x28] = '\x15';
			}
			if ((*pcVar1 == '\x02') && (pcVar1[0x28] == '\x01')) {
				pcVar1[0x28] = '\x06';
			}
			if ((*pcVar1 == '\x03') && (pcVar1[0x28] == '\x16')) {
				pcVar1[0x28] = '\x18';
			}
			if ((*pcVar1 == '\x15') && (pcVar1[0x28] == '\x01')) {
				pcVar1[0x28] = '\x06';
			}
			if ((*pcVar1 == '\a') && (pcVar1[0x28] == '\x01')) {
				pcVar1[0x28] = '\x06';
			}
			if ((*pcVar1 == '\a') && (pcVar1[0x28] == '\x18')) {
				pcVar1[0x28] = '\x15';
			}
			if ((*pcVar1 == '\x04') && (pcVar1[0x28] == '\x10')) {
				pcVar1[0x28] = '\x11';
			}
			if ((*pcVar1 == '\a') && (pcVar1[0x28] == '\r')) {
				pcVar1[0x28] = '\x11';
			}
			if ((*pcVar1 == '\x02') && (pcVar1[0x28] == '\x18')) {
				pcVar1[0x28] = '\x15';
			}
			if ((*pcVar1 == '\x02') && (pcVar1[0x28] == '\r')) {
				pcVar1[0x28] = '\x11';
			}
			if ((*pcVar1 == '\x17') && (pcVar1[-0x28] == '\x16')) {
				pcVar1[-0x28] = '\x13';
			}
			if ((*pcVar1 == '\x13') && (pcVar1[-0x28] == '\x17')) {
				pcVar1[-0x28] = '\x15';
			}
			if ((*pcVar1 == '\x06') && (pcVar1[-0x28] == '\x16')) {
				pcVar1[-0x28] = '\x18';
			}
			if ((*pcVar1 == '\x06') && (pcVar1[-0x28] == '\x17')) {
				pcVar1[-0x28] = '\x15';
			}
			if ((*pcVar1 == '\x01') && (pcVar1[1] == '\x02')) {
				pcVar1[1] = '\a';
			}
			if ((*pcVar1 == '\x06') && (pcVar1[1] == '\x12')) {
				pcVar1[1] = '\x15';
			}
			if ((*pcVar1 == '\x12') && (pcVar1[1] == '\x02')) {
				pcVar1[1] = '\a';
			}
			if ((*pcVar1 == '\x06') && (pcVar1[1] == '\x02')) {
				pcVar1[1] = '\a';
			}
			if ((*pcVar1 == '\x15') && (pcVar1[1] == '\x02')) {
				pcVar1[1] = '\a';
			}
			if ((*pcVar1 == '\x06') && (pcVar1[1] == '\x16')) {
				pcVar1[1] = '\x18';
			}
			if ((*pcVar1 == '\x06') && (pcVar1[1] == '\r')) {
				pcVar1[1] = '\x10';
			}
			if ((*pcVar1 == '\x01') && (pcVar1[1] == '\r')) {
				pcVar1[1] = '\x10';
			}
			if ((*pcVar1 == '\r') && (pcVar1[1] == '\x10')) {
				pcVar1[1] = '\x11';
			}
			if ((*pcVar1 == '\x06') && (pcVar1[-1] == '\x16')) {
				pcVar1[-1] = '\a';
			}
			if ((*pcVar1 == '\x06') && (pcVar1[-1] == '\x16')) {
				pcVar1[-1] = '\x18';
			}
			if ((*pcVar1 == '\a') && (pcVar1[-1] == '\x18')) {
				pcVar1[-1] = '\x15';
			}
			if ((*pcVar1 == '\x12') && (pcVar1[-1] == '\x18')) {
				pcVar1[-1] = '\x15';
			}
			pcVar1 = pcVar1 + 0x28;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		pcVar2 = pcVar2 + 1;
	} while (iVar4 < 0x28);
	iVar4 = 0;
	do {
		lVar5 = 0x14;
		pcVar2 = pcVar3;
		do {
			if ((*pcVar2 == '\x04') && (pcVar2[1] == '\x02')) {
				pcVar2[1] = '\a';
			}
			if ((*pcVar2 == '\x02') && (pcVar2[0x28] == '\x13')) {
				pcVar2[0x28] = '\x15';
			}
			if ((*pcVar2 == '\x12') && (pcVar2[1] == '\x16')) {
				pcVar2[1] = '\x14';
			}
			pcVar1 = pcVar2 + 0x28;
			if ((*pcVar1 == '\x04') && (pcVar2[0x29] == '\x02')) {
				pcVar2[0x29] = '\a';
			}
			if ((*pcVar1 == '\x02') && (pcVar2[0x50] == '\x13')) {
				pcVar2[0x50] = '\x15';
			}
			if ((*pcVar1 == '\x12') && (pcVar2[0x29] == '\x16')) {
				pcVar2[0x29] = '\x14';
			}
			pcVar2 = pcVar2 + 0x50;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		pcVar3 = pcVar3 + 1;
	} while (iVar4 < 0x28);
	return;
}

void DRLG_L5Subs(undefined param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	char cVar1;
	longlong lVar2;
	int iVar3;
	byte bVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	char *pcVar11;
	byte *pbVar12;
	char *pcVar13;
	byte *pbVar14;
	int iVar15;
	int iVar16;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	lVar10 = (longlong)param_8;
	lVar9 = (longlong)param_7;
	lVar8 = (longlong)param_6;
	lVar7 = (longlong)param_5;
	lVar6 = (longlong)param_4;
	lVar5 = (longlong)param_3;
	iVar15 = 0;
	pbVar12 = PTR_DAT_100f1804;
	pcVar11 = PTR_DAT_100f1abc;
	do {
		iVar16 = 0;
		pbVar14 = pbVar12;
		pcVar13 = pcVar11;
		do {
			lVar2 = random(0, 4, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9,
			    (char)lVar10, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
			if ((((int)lVar2 == 0) && (cVar1 = (&DAT_100f7012)[(uint)*pbVar14], cVar1 != '\0')) && (*pcVar13 == '\0')) {
				lVar2 = random(0, 0x10, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9,
				    (char)lVar10, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
				iVar3 = -1;
				while (-1 < (int)lVar2) {
					iVar3 = iVar3 + 1;
					if (iVar3 == 0xce) {
						iVar3 = 0;
					}
					if (cVar1 == (&DAT_100f7012)[iVar3]) {
						lVar2 = lVar2 + -1;
					}
				}
				if (iVar3 == 0x59) {
					if (((&DAT_100f7012)[(uint)pbVar14[-1]] == 'O') && (pcVar13[-1] == '\0')) {
						pbVar14[-1] = 0x5a;
					} else {
						iVar3 = 0x4f;
					}
				}
				bVar4 = (byte)iVar3;
				if (iVar3 == 0x5b) {
					if (((&DAT_100f7012)[(uint)pbVar14[0x28]] == 'P') && (pcVar13[0x28] == '\0')) {
						pbVar14[0x28] = 0x5c;
					} else {
						bVar4 = 0x50;
					}
				}
				*pbVar14 = bVar4;
			}
			iVar16 = iVar16 + 1;
			pcVar13 = pcVar13 + 0x28;
			pbVar14 = pbVar14 + 0x28;
		} while (iVar16 < 0x28);
		iVar15 = iVar15 + 1;
		pcVar11 = pcVar11 + 1;
		pbVar12 = pbVar12 + 1;
	} while (iVar15 < 0x28);
	return;
}

void DRLG_L5SetRoom(int param_1, longlong param_2, undefined8 param_3, ulonglong param_4, longlong param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

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
					*(undefined *)((int)lVar12 + (param_1 + (int)lVar14) * 0x28) = 0xd;
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

void L5FillChambers(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	longlong lVar2;
	int iVar3;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined in_stack_ffffffdb;

	ppuVar1 = &toc;
	if (_DAT_100f40b0 != 0) {
		param_3 = 0;
		param_4 = 0;
		param_5 = 0;
		param_6 = 1;
		ppuVar1 = &toc;
		DRLG_L5GChamber(0, 0xe, 0, 0, 0, 1);
	}
	if (ppuVar1[-0x13c9] != (undefined *)0x0) {
		if ((ppuVar1[-0x13c8] != (undefined *)0x0) && (ppuVar1[-0x13ca] == (undefined *)0x0)) {
			param_3 = 0;
			param_4 = 0;
			param_5 = 1;
			param_6 = 0;
			DRLG_L5GChamber(0xe, 0xe, 0, 0, 1, 0);
		}
		if ((ppuVar1[-0x13c8] == (undefined *)0x0) && (ppuVar1[-0x13ca] != (undefined *)0x0)) {
			param_3 = 0;
			param_4 = 0;
			param_5 = 0;
			param_6 = 1;
			DRLG_L5GChamber(0xe, 0xe, 0, 0, 0, 1);
		}
		if ((ppuVar1[-0x13c8] != (undefined *)0x0) && (ppuVar1[-0x13ca] != (undefined *)0x0)) {
			param_3 = 0;
			param_4 = 0;
			param_5 = 1;
			param_6 = 1;
			DRLG_L5GChamber(0xe, 0xe, 0, 0, 1, 1);
		}
		if ((ppuVar1[-0x13c8] == (undefined *)0x0) && (ppuVar1[-0x13ca] == (undefined *)0x0)) {
			param_3 = 0;
			param_4 = 0;
			param_5 = 0;
			param_6 = 0;
			DRLG_L5GChamber(0xe, 0xe, 0, 0, 0, 0);
		}
	}
	if (ppuVar1[-0x13ca] != (undefined *)0x0) {
		param_3 = 0;
		param_4 = 0;
		param_5 = 1;
		param_6 = 0;
		DRLG_L5GChamber(0x1c, 0xe, 0, 0, 1, 0);
	}
	if ((ppuVar1[-0x13c8] != (undefined *)0x0) && (ppuVar1[-0x13c9] != (undefined *)0x0)) {
		param_3 = 0xe;
		param_4 = 0x12;
		DRLG_L5GHall(0xc, 0x12, 0xe, 0x12);
	}
	if ((ppuVar1[-0x13c9] != (undefined *)0x0) && (ppuVar1[-0x13ca] != (undefined *)0x0)) {
		param_3 = 0x1c;
		param_4 = 0x12;
		DRLG_L5GHall(0x1a, 0x12, 0x1c, 0x12);
	}
	if (((ppuVar1[-0x13c8] != (undefined *)0x0) && (ppuVar1[-0x13c9] == (undefined *)0x0)) && (ppuVar1[-0x13ca] != (undefined *)0x0)) {
		param_3 = 0x1c;
		param_4 = 0x12;
		DRLG_L5GHall(0xc, 0x12, 0x1c, 0x12);
	}
	if (ppuVar1[-0x13cb] != (undefined *)0x0) {
		param_3 = 0;
		param_4 = 1;
		param_5 = 0;
		param_6 = 0;
		DRLG_L5GChamber(0xe, 0, 0, 1, 0, 0);
	}
	if (ppuVar1[-0x13cc] != (undefined *)0x0) {
		if ((ppuVar1[-0x13cb] != (undefined *)0x0) && (ppuVar1[-0x13cd] == (undefined *)0x0)) {
			param_3 = 1;
			param_4 = 0;
			param_5 = 0;
			param_6 = 0;
			DRLG_L5GChamber(0xe, 0xe, 1, 0, 0, 0);
		}
		if ((ppuVar1[-0x13cb] == (undefined *)0x0) && (ppuVar1[-0x13cd] != (undefined *)0x0)) {
			param_3 = 0;
			param_4 = 1;
			param_5 = 0;
			param_6 = 0;
			DRLG_L5GChamber(0xe, 0xe, 0, 1, 0, 0);
		}
		if ((ppuVar1[-0x13cb] != (undefined *)0x0) && (ppuVar1[-0x13cd] != (undefined *)0x0)) {
			param_3 = 1;
			param_4 = 1;
			param_5 = 0;
			param_6 = 0;
			DRLG_L5GChamber(0xe, 0xe, 1, 1, 0, 0);
		}
		if ((ppuVar1[-0x13cb] == (undefined *)0x0) && (ppuVar1[-0x13cd] == (undefined *)0x0)) {
			param_3 = 0;
			param_4 = 0;
			param_5 = 0;
			param_6 = 0;
			DRLG_L5GChamber(0xe, 0xe, 0, 0, 0, 0);
		}
	}
	if (ppuVar1[-0x13cd] != (undefined *)0x0) {
		param_3 = 1;
		param_4 = 0;
		param_5 = 0;
		param_6 = 0;
		DRLG_L5GChamber(0xe, 0x1c, 1, 0, 0, 0);
	}
	if ((ppuVar1[-0x13cb] != (undefined *)0x0) && (ppuVar1[-0x13cc] != (undefined *)0x0)) {
		param_3 = 0x12;
		param_4 = 0xe;
		DRLG_L5GHall(0x12, 0xc, 0x12, 0xe);
	}
	if ((ppuVar1[-0x13cc] != (undefined *)0x0) && (ppuVar1[-0x13cd] != (undefined *)0x0)) {
		param_3 = 0x12;
		param_4 = 0x1c;
		DRLG_L5GHall(0x12, 0x1a, 0x12, 0x1c);
	}
	if (((ppuVar1[-0x13cb] != (undefined *)0x0) && (ppuVar1[-0x13cc] == (undefined *)0x0)) && (ppuVar1[-0x13cd] != (undefined *)0x0)) {
		param_3 = 0x12;
		param_4 = 0x1c;
		DRLG_L5GHall(0x12, 0xc, 0x12, 0x1c);
	}
	if (*(int *)ppuVar1[-0x1d49] != 0) {
		if (((ppuVar1[-0x13cb] == (undefined *)0x0) && (ppuVar1[-0x13cc] == (undefined *)0x0)) && (ppuVar1[-0x13cd] == (undefined *)0x0)) {
			iVar3 = 1;
			if ((((ppuVar1[-0x13c8] == (undefined *)0x0) && (ppuVar1[-0x13c9] != (undefined *)0x0)) && (ppuVar1[-0x13ca] != (undefined *)0x0)) && (lVar2 = random(0, 2, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdb), (int)lVar2 != 0)) {
				iVar3 = 2;
			}
			if (((ppuVar1[-0x13c8] != (undefined *)0x0) && (ppuVar1[-0x13c9] != (undefined *)0x0)) && ((ppuVar1[-0x13ca] == (undefined *)0x0 && (lVar2 = random(0, 2, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdb), (int)lVar2 != 0)))) {
				iVar3 = 0;
			}
			if (((ppuVar1[-0x13c8] != (undefined *)0x0) && (ppuVar1[-0x13c9] == (undefined *)0x0)) && (ppuVar1[-0x13ca] != (undefined *)0x0)) {
				lVar2 = random(0, 2, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
				    (char)param_7, (char)param_8, in_stack_ffffffc8, in_stack_ffffffcf,
				    in_stack_ffffffdb);
				if ((int)lVar2 == 0) {
					iVar3 = 2;
				} else {
					iVar3 = 0;
				}
			}
			if (((ppuVar1[-0x13c8] != (undefined *)0x0) && (ppuVar1[-0x13c9] != (undefined *)0x0)) && (ppuVar1[-0x13ca] != (undefined *)0x0)) {
				lVar2 = random(0, 3, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
				    (char)param_7, (char)param_8, in_stack_ffffffc8, in_stack_ffffffcf,
				    in_stack_ffffffdb);
				iVar3 = (int)lVar2;
			}
			if (iVar3 == 1) {
				DRLG_L5SetRoom(0x10, 0x10, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
			} else {
				if (iVar3 < 1) {
					if (-1 < iVar3) {
						DRLG_L5SetRoom(2, 0x10, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
					}
				} else {
					if (iVar3 < 3) {
						DRLG_L5SetRoom(0x1e, 0x10, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
					}
				}
			}
		} else {
			iVar3 = 1;
			if (((ppuVar1[-0x13cb] == (undefined *)0x0) && (ppuVar1[-0x13cc] != (undefined *)0x0)) && ((ppuVar1[-0x13cd] != (undefined *)0x0 && (lVar2 = random(0, 2, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdb), (int)lVar2 != 0)))) {
				iVar3 = 2;
			}
			if ((((ppuVar1[-0x13cb] != (undefined *)0x0) && (ppuVar1[-0x13cc] != (undefined *)0x0)) && (ppuVar1[-0x13cd] == (undefined *)0x0)) && (lVar2 = random(0, 2, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdb), (int)lVar2 != 0)) {
				iVar3 = 0;
			}
			if (((ppuVar1[-0x13cb] != (undefined *)0x0) && (ppuVar1[-0x13cc] == (undefined *)0x0)) && (ppuVar1[-0x13cd] != (undefined *)0x0)) {
				lVar2 = random(0, 2, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
				    (char)param_7, (char)param_8, in_stack_ffffffc8, in_stack_ffffffcf,
				    in_stack_ffffffdb);
				if ((int)lVar2 == 0) {
					iVar3 = 2;
				} else {
					iVar3 = 0;
				}
			}
			if (((ppuVar1[-0x13cb] != (undefined *)0x0) && (ppuVar1[-0x13cc] != (undefined *)0x0)) && (ppuVar1[-0x13cd] != (undefined *)0x0)) {
				lVar2 = random(0, 3, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
				    (char)param_7, (char)param_8, in_stack_ffffffc8, in_stack_ffffffcf,
				    in_stack_ffffffdb);
				iVar3 = (int)lVar2;
			}
			if (iVar3 == 1) {
				DRLG_L5SetRoom(0x10, 0x10, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
			} else {
				if (iVar3 < 1) {
					if (-1 < iVar3) {
						DRLG_L5SetRoom(0x10, 2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
					}
				} else {
					if (iVar3 < 3) {
						DRLG_L5SetRoom(0x10, 0x1e, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
					}
				}
			}
		}
	}
	return;
}

void DRLG_L2FTVR(int param_1, int param_2, int param_3, int param_4, uint param_5, longlong param_6,
    undefined param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	int iVar2;
	int iVar3;
	undefined *puVar4;
	undefined *puVar5;
	int iVar6;
	undefined **ppuVar7;
	longlong lVar8;
	longlong lVar9;
	char *pcVar10;
	undefined uVar11;
	longlong lVar12;
	int *piVar13;
	undefined uVar14;
	ulonglong uVar15;
	ulonglong uVar16;
	uint uVar18;
	longlong lVar17;
	longlong lVar19;
	int *piVar20;
	longlong lVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	ulonglong uVar25;
	ulonglong uVar26;
	longlong lVar27;
	longlong lVar28;
	ulonglong uVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	ulonglong uVar34;
	longlong lVar35;
	undefined4 in_stack_ffffff78;

	puVar5 = PTR_DAT_100f1ab8;
	puVar4 = PTR_DAT_100f1a48;
	uVar18 = (uint)param_6;
	lVar21 = (longlong)param_8;
	uVar25 = SEXT48((int)param_5);
	uVar34 = SEXT48(param_4);
	uVar26 = SEXT48(param_3);
	uVar29 = SEXT48(param_2);
	ppuVar7 = &toc;
	lVar19 = 0;
	lVar35 = 0;
	uVar15 = uVar34;
	uVar16 = uVar25;
	lVar8 = DiabloAllocPtr(200000);
	do {
		iVar22 = (int)lVar8;
		if (0 < (int)lVar35) {
			lVar35 = lVar35 + -1;
			piVar20 = (int *)(iVar22 + (int)lVar35 * 0x14);
			param_1 = *piVar20;
			uVar29 = (ulonglong)(uint)piVar20[1];
			uVar26 = (ulonglong)(uint)piVar20[2];
			uVar34 = (ulonglong)(uint)piVar20[3];
			uVar25 = (ulonglong)(uint)piVar20[4];
		}
		lVar12 = uVar26 * 0x70;
		uVar14 = (undefined)lVar12;
		lVar9 = (ulonglong) * (uint *)puVar4 + lVar12 + uVar34;
		uVar11 = (undefined)lVar9;
		pcVar10 = (char *)lVar9;
		if ((*pcVar10 == '\0') && (uVar15 = ZEXT48(ppuVar7[-0x1df3]), iVar1 = (int)uVar29, (ulonglong)(uVar18 & 0xff) == (ulonglong)(byte)ppuVar7[-0x1df3][param_1 * 0x28 + iVar1])) {
			*pcVar10 = *puVar5;
			iVar3 = (int)uVar34;
			iVar23 = (int)lVar12 + iVar3;
			lVar28 = lVar35 + 7;
			*(undefined *)(*(int *)puVar4 + iVar23 + 0x70) = *puVar5;
			iVar24 = iVar1 + 1;
			iVar2 = (int)uVar26;
			iVar33 = iVar2 + 2;
			*(undefined *)(*(int *)puVar4 + iVar23 + 1) = *puVar5;
			iVar6 = param_1 + 1;
			piVar13 = (int *)(iVar22 + (int)lVar35 * 0x14);
			iVar32 = iVar3 + 2;
			*(undefined *)(*(int *)puVar4 + iVar23 + 0x71) = *puVar5;
			piVar20 = (int *)(iVar22 + ((int)lVar35 + 1) * 0x14);
			*piVar13 = iVar6;
			lVar9 = lVar35 + 3;
			lVar19 = lVar8 + (lVar35 + 2) * 0x14;
			piVar13[1] = iVar24;
			iVar31 = param_1 + -1;
			piVar13[2] = iVar33;
			iVar30 = iVar2 + -2;
			piVar13[3] = iVar32;
			lVar21 = uVar29 - 1;
			piVar13[4] = 8;
			lVar12 = lVar8 + (lVar35 + 4) * 0x14;
			uVar14 = (undefined)lVar12;
			lVar27 = lVar35 + 5;
			*piVar20 = iVar31;
			lVar17 = lVar35 + 6;
			iVar23 = iVar3 + -2;
			piVar20[1] = iVar24;
			lVar35 = lVar35 + 8;
			piVar20[2] = iVar30;
			uVar15 = lVar8 + lVar27 * 0x14;
			piVar20[3] = iVar32;
			param_6 = lVar8 + lVar9 * 0x14;
			piVar20[4] = 7;
			lVar9 = lVar8 + lVar28 * 0x14;
			uVar11 = (undefined)lVar9;
			uVar16 = lVar8 + lVar17 * 0x14;
			piVar20 = (int *)lVar19;
			*piVar20 = iVar6;
			iVar22 = (int)lVar21;
			piVar20[1] = iVar22;
			piVar20[2] = iVar33;
			piVar20[3] = iVar23;
			piVar20[4] = 6;
			piVar20 = (int *)param_6;
			*piVar20 = iVar31;
			piVar20[1] = iVar22;
			piVar20[2] = iVar30;
			piVar20[3] = iVar23;
			piVar20[4] = 5;
			piVar20 = (int *)lVar12;
			*piVar20 = param_1;
			piVar20[1] = iVar22;
			piVar20[2] = iVar2;
			piVar20[3] = iVar23;
			piVar20[4] = 4;
			piVar20 = (int *)uVar15;
			*piVar20 = param_1;
			piVar20[1] = iVar24;
			piVar20[2] = iVar2;
			piVar20[3] = iVar32;
			piVar20[4] = 3;
			piVar20 = (int *)uVar16;
			*piVar20 = iVar31;
			piVar20[1] = iVar1;
			piVar20[2] = iVar30;
			piVar20[3] = iVar3;
			piVar20[4] = 2;
			piVar20 = (int *)lVar9;
			*piVar20 = iVar6;
			piVar20[1] = iVar1;
			piVar20[2] = iVar33;
			piVar20[3] = iVar3;
			piVar20[4] = 1;
		} else {
			if ((uVar25 & 0xffffffff) < 9) {
				// WARNING: Could not recover jumptable at 0x1002b898. Too many branches
				// WARNING: Treating indirect jump as call
				(*(code *)ppuVar7[(int)uVar25 + -0x78b])();
				return;
			}
		}
	} while (0 < (int)lVar35);
	mem_free_dbg(lVar8, uVar11, uVar14, (char)uVar15, (char)uVar16, (char)param_6, (char)lVar19, (char)lVar21, in_stack_ffffff78);
	return;
}

void DRLG_L2FloodTVal(undefined8 param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	longlong lVar3;
	longlong lVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	byte *pbVar9;
	int iVar10;
	byte *pbVar11;
	undefined4 in_stack_ffffff98;

	puVar2 = PTR_DAT_100f1ab8;
	puVar1 = PTR_DAT_100f1a48;
	lVar4 = (longlong)param_8;
	lVar3 = (longlong)param_7;
	iVar5 = 0x10;
	iVar7 = 0;
	pbVar9 = PTR_DAT_100f1804;
	do {
		iVar6 = 0x10;
		iVar8 = 0;
		iVar10 = 0x700;
		pbVar11 = pbVar9;
		do {
			if (((ulonglong)((uint)param_1 & 0xff) == (ulonglong)*pbVar11) && (*(char *)(iVar5 + *(int *)puVar1 + iVar10) == '\0')) {
				DRLG_L2FTVR(iVar8, iVar7, iVar6, iVar5, 0, param_1, (char)lVar3, (char)lVar4, in_stack_ffffff98);
				*puVar2 = *puVar2 + '\x01';
			}
			iVar8 = iVar8 + 1;
			iVar6 = iVar6 + 2;
			pbVar11 = pbVar11 + 0x28;
			iVar10 = iVar10 + 0xe0;
		} while (iVar8 < 0x28);
		iVar7 = iVar7 + 1;
		pbVar9 = pbVar9 + 1;
		iVar5 = iVar5 + 2;
	} while (iVar7 < 0x28);
	return;
}

void DRLG_L5TransFix(void)

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
			if ((*pcVar2 == '\x17') && (pcVar2[-1] == '\x12')) {
				puVar7 = (undefined *)(iVar6 + *(int *)puVar1 + iVar3);
				puVar7[0x70] = *puVar7;
				puVar7 = (undefined *)(iVar6 + *(int *)puVar1 + iVar3);
				puVar7[0x71] = *puVar7;
			}
			if ((*pcVar2 == '\x18') && (pcVar2[0x28] == '\x13')) {
				puVar7 = (undefined *)(iVar6 + *(int *)puVar1 + iVar3);
				puVar7[1] = *puVar7;
				puVar7 = (undefined *)(iVar6 + *(int *)puVar1 + iVar3);
				puVar7[0x71] = *puVar7;
			}
			if (*pcVar2 == '\x12') {
				puVar7 = (undefined *)(iVar6 + *(int *)puVar1 + iVar3);
				puVar7[0x70] = *puVar7;
				puVar7 = (undefined *)(iVar6 + *(int *)puVar1 + iVar3);
				puVar7[0x71] = *puVar7;
			}
			if (*pcVar2 == '\x13') {
				puVar7 = (undefined *)(iVar6 + *(int *)puVar1 + iVar3);
				puVar7[1] = *puVar7;
				puVar7 = (undefined *)(iVar6 + *(int *)puVar1 + iVar3);
				puVar7[0x71] = *puVar7;
			}
			if (*pcVar2 == '\x14') {
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

void DRLG_L5DirtFix(void)

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
			if ((*pcVar2 == '\x15') && (pcVar2[0x28] != '\x13')) {
				*pcVar2 = -0x36;
			}
			if ((*pcVar2 == '\x13') && (pcVar2[0x28] != '\x13')) {
				*pcVar2 = -0x38;
			}
			if ((*pcVar2 == '\x18') && (pcVar2[0x28] != '\x13')) {
				*pcVar2 = -0x33;
			}
			if ((*pcVar2 == '\x12') && (pcVar2[1] != '\x12')) {
				*pcVar2 = -0x39;
			}
			if ((*pcVar2 == '\x15') && (pcVar2[1] != '\x12')) {
				*pcVar2 = -0x36;
			}
			if ((*pcVar2 == '\x17') && (pcVar2[1] != '\x12')) {
				*pcVar2 = -0x34;
			}
			pcVar1 = pcVar2 + 0x28;
			if ((*pcVar1 == '\x15') && (pcVar2[0x50] != '\x13')) {
				*pcVar1 = -0x36;
			}
			if ((*pcVar1 == '\x13') && (pcVar2[0x50] != '\x13')) {
				*pcVar1 = -0x38;
			}
			if ((*pcVar1 == '\x18') && (pcVar2[0x50] != '\x13')) {
				*pcVar1 = -0x33;
			}
			if ((*pcVar1 == '\x12') && (pcVar2[0x29] != '\x12')) {
				*pcVar1 = -0x39;
			}
			if ((*pcVar1 == '\x15') && (pcVar2[0x29] != '\x12')) {
				*pcVar1 = -0x36;
			}
			if ((*pcVar1 == '\x17') && (pcVar2[0x29] != '\x12')) {
				*pcVar1 = -0x34;
			}
			pcVar2 = pcVar2 + 0x50;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		pcVar3 = pcVar3 + 1;
	} while (iVar4 < 0x28);
	return;
}

void DRLG_L5CornerFix(void)

{
	undefined *puVar1;
	undefined *puVar2;
	byte *pbVar3;
	char *pcVar4;
	char *pcVar5;
	int iVar6;
	longlong lVar7;

	iVar6 = 1;
	puVar1 = PTR_DAT_100f1abc;
	puVar2 = PTR_DAT_100f1804;
	do {
		pbVar3 = puVar1 + 0x29;
		lVar7 = 0x13;
		pcVar4 = puVar2 + 0x29;
		do {
			if (((((*pbVar3 & 0x80) == 0) && (*pcVar4 == '\x11')) && (pcVar4[-0x28] == '\r')) && (pcVar4[-1] == '\x01')) {
				*pcVar4 = '\x10';
				pbVar3[-1] = pbVar3[-1] & 0x80;
			}
			if (*pcVar4 == -0x36) {
				if (pcVar4[0x28] == '\r') {
					if (pcVar4[1] == '\x01') {
						*pcVar4 = '\b';
					}
				}
			}
			pcVar5 = pcVar4 + 0x28;
			if ((((pbVar3[0x28] & 0x80) == 0) && (*pcVar5 == '\x11')) && ((*pcVar4 == '\r' && (pcVar4[0x27] == '\x01')))) {
				*pcVar5 = '\x10';
				pbVar3[0x27] = pbVar3[0x27] & 0x80;
			}
			if (*pcVar5 == -0x36) {
				if (pcVar4[0x50] == '\r') {
					if (pcVar4[0x29] == '\x01') {
						*pcVar5 = '\b';
					}
				}
			}
			pbVar3 = pbVar3 + 0x50;
			pcVar4 = pcVar4 + 0x50;
			lVar7 = lVar7 + -1;
		} while (lVar7 != 0);
		iVar6 = iVar6 + 1;
		puVar1 = puVar1 + 1;
		puVar2 = puVar2 + 1;
	} while (iVar6 < 0x27);
	return;
}

void DRLG_L5(int param_1, undefined8 param_2, longlong param_3, longlong param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	bool bVar1;
	byte bVar2;
	uint uVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined8 uVar9;
	undefined uVar10;
	ulonglong uVar11;
	undefined uVar12;
	undefined uVar15;
	ulonglong uVar13;
	char *pcVar14;
	undefined uVar16;
	char cVar17;
	undefined uVar18;
	undefined4 uVar19;
	undefined uVar20;
	undefined4 uVar21;
	undefined uVar22;
	undefined4 uVar23;
	undefined uVar24;
	byte *pbVar25;
	longlong lVar26;
	byte *pbVar27;
	int unaff_r23;
	char *pcVar29;
	ulonglong uVar28;
	char *pcVar30;
	longlong lVar31;
	int iVar32;
	int iVar33;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb4;

	puVar8 = PTR_DAT_100f1a84;
	puVar7 = PTR_DAT_100f1a80;
	puVar6 = PTR_DAT_100f1820;
	puVar5 = PTR_DAT_100f181c;
	uVar28 = SEXT48(param_1);
	uVar13 = ZEXT48(&toc);
	uVar11 = ZEXT48(PTR_DAT_100f17ec);
	bVar1 = false;
	bVar2 = *PTR_DAT_100f17ec;
	if (bVar2 == 2) {
		unaff_r23 = 0x2b5;
	} else {
		if (bVar2 < 2) {
			if (bVar2 != 0) {
				unaff_r23 = 0x215;
			}
		} else {
			if (bVar2 < 5) {
				unaff_r23 = 0x2f9;
			}
		}
	}
	while (!bVar1) {
		DRLG_InitTrans((char)uVar28, (char)uVar11, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffff88);
		do {
			uVar10 = InitL5Dungeon();
			L5firstRoom(uVar10, (char)uVar11, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
			    (char)param_7, (char)param_8, in_stack_ffffff88);
			lVar31 = L5GetArea();
			uVar23 = (undefined4)param_8;
			uVar21 = (undefined4)param_7;
			uVar19 = (undefined4)param_6;
		} while ((int)lVar31 < unaff_r23);
		L5makeDungeon();
		uVar9 = L5makeDmt();
		uVar24 = (undefined)uVar23;
		uVar22 = (undefined)uVar21;
		uVar20 = (undefined)uVar19;
		uVar18 = (undefined)param_5;
		uVar16 = (undefined)param_4;
		uVar15 = (undefined)param_3;
		uVar12 = (undefined)uVar11;
		L5FillChambers(uVar9, uVar11, param_3, param_4, param_5, uVar19, uVar21, uVar23, in_stack_ffffff88);
		uVar10 = L5tileFix();
		L5AddWall(uVar10, uVar12, uVar15, uVar16, uVar18, uVar20, uVar22, uVar24, in_stack_ffffff88);
		L5ClearFlags();
		DRLG_L2FloodTVal(0xd, uVar12, uVar15, uVar16, uVar18, uVar20, uVar22, uVar24, in_stack_ffffff88);
		bVar1 = true;
		uVar9 = QuestStatus(0xd);
		if ((int)uVar9 != 0) {
			if (param_1 == 0) {
				uVar9 = DRLG_PlaceMiniSet(ZEXT48(&DAT_100f7149), 1, 1, 0, 0, 1, -1, 0, in_stack_ffffff88,
				    in_stack_ffffff8f, in_stack_ffffffac, in_stack_ffffffb4);
				if ((int)uVar9 < 0) {
					bVar1 = false;
				}
			} else {
				uVar9 = DRLG_PlaceMiniSet(ZEXT48(&DAT_100f7149), 1, 1, 0, 0, 0, -1, 0, in_stack_ffffff88,
				    in_stack_ffffff8f, in_stack_ffffffac, in_stack_ffffffb4);
				bVar1 = -1 < (int)uVar9;
				*(int *)puVar5 = *(int *)puVar5 + -1;
			}
		}
		uVar9 = QuestStatus(7);
		if ((int)uVar9 == 0) {
			if (param_1 == 0) {
				uVar11 = 1;
				param_3 = 1;
				param_4 = 0;
				param_5 = 0;
				param_6 = 1;
				param_7 = 0xffffffffffffffff;
				param_8 = 0;
				uVar28 = DRLG_PlaceMiniSet(ZEXT48(&DAT_100f7103), 1, 1, 0, 0, 1, -1, 0, in_stack_ffffff88,
				    in_stack_ffffff8f, in_stack_ffffffac, in_stack_ffffffb4);
				if ((int)uVar28 < 0) {
					bVar1 = false;
				} else {
					uVar11 = 1;
					param_3 = 1;
					param_4 = 0;
					param_5 = 0;
					param_6 = 0;
					param_7 = 0xffffffffffffffff;
					param_8 = 1;
					uVar28 = DRLG_PlaceMiniSet(ZEXT48(&DAT_100f7125), 1, 1, 0, 0, 0, -1, 1, in_stack_ffffff88,
					    in_stack_ffffff8f, in_stack_ffffffac, in_stack_ffffffb4);
					if ((int)uVar28 < 0) {
						bVar1 = false;
					}
				}
			} else {
				uVar11 = 1;
				param_3 = 1;
				param_4 = 0;
				param_5 = 0;
				param_6 = 0;
				param_7 = 0xffffffffffffffff;
				param_8 = 0;
				uVar9 = DRLG_PlaceMiniSet(ZEXT48(&DAT_100f7103), 1, 1, 0, 0, 0, -1, 0, in_stack_ffffff88,
				    in_stack_ffffff8f, in_stack_ffffffac, in_stack_ffffffb4);
				if ((int)uVar9 < 0) {
					bVar1 = false;
				} else {
					uVar11 = 1;
					param_3 = 1;
					param_4 = 0;
					param_5 = 0;
					param_6 = 1;
					param_7 = 0xffffffffffffffff;
					param_8 = 1;
					uVar9 = DRLG_PlaceMiniSet(ZEXT48(&DAT_100f7125), 1, 1, 0, 0, 1, -1, 1, in_stack_ffffff88,
					    in_stack_ffffff8f, in_stack_ffffffac, in_stack_ffffffb4);
					if ((int)uVar9 < 0) {
						bVar1 = false;
					}
				}
				uVar28 = (ulonglong) * (uint *)puVar5;
				*(uint *)puVar5 = *(uint *)puVar5 - 1;
			}
		} else {
			if (param_1 == 0) {
				uVar11 = 1;
				param_3 = 1;
				param_4 = 0;
				param_5 = 0;
				param_6 = 1;
				param_7 = 0xffffffffffffffff;
				param_8 = 0;
				uVar28 = DRLG_PlaceMiniSet(ZEXT48(&DAT_100f70e1), 1, 1, 0, 0, 1, -1, 0, in_stack_ffffff88,
				    in_stack_ffffff8f, in_stack_ffffffac, in_stack_ffffffb4);
				if ((int)uVar28 < 0) {
					bVar1 = false;
				}
			} else {
				uVar11 = 1;
				param_3 = 1;
				param_4 = 0;
				param_5 = 0;
				param_6 = 0;
				param_7 = 0xffffffffffffffff;
				param_8 = 0;
				uVar9 = DRLG_PlaceMiniSet(ZEXT48(&DAT_100f70e1), 1, 1, 0, 0, 0, -1, 0, in_stack_ffffff88,
				    in_stack_ffffff8f, in_stack_ffffffac, in_stack_ffffffb4);
				if ((int)uVar9 < 0) {
					bVar1 = false;
				}
				if (param_1 == 1) {
					*(int *)puVar6 = *(int *)puVar8 * 2 + 0x14;
					uVar3 = *(int *)puVar7 * 2;
					uVar28 = (ulonglong)uVar3;
					*(uint *)puVar5 = uVar3 + 0x1c;
				} else {
					uVar28 = (ulonglong) * (uint *)puVar5;
					*(uint *)puVar5 = *(uint *)puVar5 - 1;
				}
			}
		}
	}
	pcVar30 = *(char **)((int)uVar13 + -0x77cc);
	iVar33 = 0;
	lVar31 = 0x10;
	pcVar29 = pcVar30;
	do {
		iVar32 = 0;
		lVar26 = 0x10;
		pcVar14 = pcVar29;
		do {
			if (*pcVar14 == '@') {
				iVar4 = (int)lVar31;
				DRLG_CopyTrans((int)lVar26, iVar4 + 1, (int)lVar26, iVar4);
				param_3 = lVar26 + 1;
				uVar11 = lVar31 + 1;
				param_4 = lVar31;
				DRLG_CopyTrans((int)param_3, (int)uVar11, (int)param_3, iVar4);
			}
			iVar32 = iVar32 + 1;
			lVar26 = lVar26 + 2;
			pcVar14 = pcVar14 + 0x28;
		} while (iVar32 < 0x28);
		iVar33 = iVar33 + 1;
		lVar31 = lVar31 + 2;
		pcVar29 = pcVar29 + 1;
	} while (iVar33 < 0x28);
	DRLG_L5TransFix();
	DRLG_L5DirtFix();
	uVar9 = DRLG_L5CornerFix();
	uVar28 = 0;
	pbVar27 = *(byte **)((int)uVar13 + -0x7514);
	do {
		iVar33 = 0;
		pbVar25 = pbVar27;
		do {
			if ((*pbVar25 & 0x7f) != 0) {
				uVar11 = uVar28;
				uVar9 = DRLG_PlaceDoor(iVar33, (int)uVar28);
			}
			iVar33 = iVar33 + 1;
			pbVar25 = pbVar25 + 0x28;
		} while (iVar33 < 0x28);
		uVar28 = uVar28 + 1;
		pbVar27 = pbVar27 + 1;
	} while ((int)uVar28 < 0x28);
	DRLG_L5Subs((char)uVar9, (char)uVar11, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
	    (char)param_7, (char)param_8, in_stack_ffffff88);
	DRLG_L1Shadows();
	iVar33 = (int)uVar13;
	uVar12 = 5;
	uVar10 = 10;
	uVar15 = 0;
	uVar16 = 0;
	uVar18 = 0;
	uVar20 = 0xff;
	uVar22 = 4;
	uVar9 = DRLG_PlaceMiniSet(uVar13 - 0x1e91, 5, 10, 0, 0, 0, -1, 4, in_stack_ffffff88, in_stack_ffffff8f,
	    in_stack_ffffffac, in_stack_ffffffb4);
	uVar10 = DRLG_L1Floor((char)uVar9, uVar12, uVar10, uVar15, uVar16, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	uVar13 = (ulonglong) * (uint *)(iVar33 + -0x7540);
	lVar31 = 0x14;
	cVar17 = '\0';
	do {
		pcVar14 = (char *)uVar13;
		*pcVar14 = *pcVar30;
		pcVar14[0x28] = pcVar30[0x28];
		pcVar14[0x50] = pcVar30[0x50];
		pcVar14[0x78] = pcVar30[0x78];
		pcVar14[0xa0] = pcVar30[0xa0];
		pcVar14[200] = pcVar30[200];
		pcVar14[0xf0] = pcVar30[0xf0];
		pcVar14[0x118] = pcVar30[0x118];
		pcVar14[0x140] = pcVar30[0x140];
		pcVar14[0x168] = pcVar30[0x168];
		pcVar14[400] = pcVar30[400];
		pcVar14[0x1b8] = pcVar30[0x1b8];
		pcVar14[0x1e0] = pcVar30[0x1e0];
		pcVar14[0x208] = pcVar30[0x208];
		pcVar14[0x230] = pcVar30[0x230];
		pcVar14[600] = pcVar30[600];
		pcVar14[0x280] = pcVar30[0x280];
		pcVar14[0x2a8] = pcVar30[0x2a8];
		pcVar14[0x2d0] = pcVar30[0x2d0];
		pcVar14[0x2f8] = pcVar30[0x2f8];
		pcVar14[800] = pcVar30[800];
		pcVar14[0x348] = pcVar30[0x348];
		pcVar14[0x370] = pcVar30[0x370];
		pcVar14[0x398] = pcVar30[0x398];
		pcVar14[0x3c0] = pcVar30[0x3c0];
		pcVar14[1000] = pcVar30[1000];
		pcVar14[0x410] = pcVar30[0x410];
		pcVar14[0x438] = pcVar30[0x438];
		pcVar14[0x460] = pcVar30[0x460];
		pcVar14[0x488] = pcVar30[0x488];
		pcVar14[0x4b0] = pcVar30[0x4b0];
		pcVar14[0x4d8] = pcVar30[0x4d8];
		pcVar14[0x500] = pcVar30[0x500];
		pcVar14[0x528] = pcVar30[0x528];
		pcVar14[0x550] = pcVar30[0x550];
		pcVar14[0x578] = pcVar30[0x578];
		pcVar14[0x5a0] = pcVar30[0x5a0];
		pcVar14[0x5c8] = pcVar30[0x5c8];
		pcVar14[0x5f0] = pcVar30[0x5f0];
		pcVar14[0x618] = pcVar30[0x618];
		cVar17 = cVar17 + '\x01';
		pcVar14[1] = pcVar30[1];
		pcVar14[0x29] = pcVar30[0x29];
		pcVar14[0x51] = pcVar30[0x51];
		pcVar14[0x79] = pcVar30[0x79];
		pcVar14[0xa1] = pcVar30[0xa1];
		pcVar14[0xc9] = pcVar30[0xc9];
		pcVar14[0xf1] = pcVar30[0xf1];
		pcVar14[0x119] = pcVar30[0x119];
		pcVar14[0x141] = pcVar30[0x141];
		pcVar14[0x169] = pcVar30[0x169];
		pcVar14[0x191] = pcVar30[0x191];
		pcVar14[0x1b9] = pcVar30[0x1b9];
		pcVar14[0x1e1] = pcVar30[0x1e1];
		pcVar14[0x209] = pcVar30[0x209];
		pcVar14[0x231] = pcVar30[0x231];
		pcVar14[0x259] = pcVar30[0x259];
		pcVar14[0x281] = pcVar30[0x281];
		pcVar14[0x2a9] = pcVar30[0x2a9];
		pcVar14[0x2d1] = pcVar30[0x2d1];
		pcVar14[0x2f9] = pcVar30[0x2f9];
		pcVar14[0x321] = pcVar30[0x321];
		pcVar14[0x349] = pcVar30[0x349];
		pcVar14[0x371] = pcVar30[0x371];
		pcVar14[0x399] = pcVar30[0x399];
		pcVar14[0x3c1] = pcVar30[0x3c1];
		pcVar14[0x3e9] = pcVar30[0x3e9];
		pcVar14[0x411] = pcVar30[0x411];
		pcVar14[0x439] = pcVar30[0x439];
		pcVar14[0x461] = pcVar30[0x461];
		pcVar14[0x489] = pcVar30[0x489];
		pcVar14[0x4b1] = pcVar30[0x4b1];
		pcVar14[0x4d9] = pcVar30[0x4d9];
		pcVar14[0x501] = pcVar30[0x501];
		pcVar14[0x529] = pcVar30[0x529];
		pcVar14[0x551] = pcVar30[0x551];
		pcVar14[0x579] = pcVar30[0x579];
		pcVar14[0x5a1] = pcVar30[0x5a1];
		pcVar14[0x5c9] = pcVar30[0x5c9];
		pcVar14[0x5f1] = pcVar30[0x5f1];
		pcVar29 = pcVar30 + 0x619;
		pcVar30 = pcVar30 + 2;
		pcVar14[0x619] = *pcVar29;
		uVar13 = uVar13 + 2;
		uVar15 = (undefined)uVar13;
		lVar31 = lVar31 + -1;
	} while (lVar31 != 0);
	DRLG_Init_Globals(uVar10, uVar12, uVar15, cVar17, uVar16, uVar18, uVar20, uVar22, in_stack_ffffff88);
	DRLG_CheckQuests((char)*(undefined4 *)puVar8, (char)*(undefined4 *)puVar7, uVar15, cVar17, uVar16, uVar18,
	    uVar20, uVar22, in_stack_ffffff88);
	return;
}

void CreateL5Dungeon(undefined4 param_1, int param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined4 *puVar2;
	undefined **ppuVar3;
	undefined8 uVar4;
	undefined8 extraout_r3;
	undefined uVar5;
	ulonglong uVar6;
	undefined uVar7;
	undefined8 uVar8;
	undefined uVar9;
	undefined7 uVar10;
	undefined uVar11;
	undefined7 uVar12;
	undefined uVar13;
	undefined4 uVar14;
	undefined uVar15;
	undefined4 uVar16;
	undefined uVar17;
	undefined4 uVar18;
	undefined uVar19;
	undefined4 in_stack_ffffffc8;

	uVar12 = (undefined7)((ulonglong)param_5 >> 8);
	uVar13 = (undefined)param_5;
	uVar10 = (undefined7)((ulonglong)param_4 >> 8);
	uVar11 = (undefined)param_4;
	ppuVar3 = &toc;
	SetRndSeed(param_1);
	uVar8 = 0x10;
	puVar1 = (undefined4 *)ppuVar3[-0x1d4d];
	*(undefined4 *)ppuVar3[-0x1d4c] = 0x10;
	puVar2 = (undefined4 *)ppuVar3[-0x1d4e];
	uVar6 = ZEXT48(puVar2);
	*puVar1 = 0x10;
	puVar1 = (undefined4 *)ppuVar3[-0x1d4f];
	*puVar2 = 0x60;
	*puVar1 = 0x60;
	DRLG_InitTrans((char)puVar1, (char)puVar2, 0x10, uVar11, uVar13, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffffc8);
	uVar4 = DRLG_InitSetPC();
	DRLG_LoadL1SP(uVar4, uVar6, uVar8, CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13), (int)param_6,
	    (int)param_7, (int)param_8, in_stack_ffffffc8);
	uVar18 = (undefined4)param_8;
	uVar16 = (undefined4)param_7;
	uVar14 = (undefined4)param_6;
	DRLG_L5(param_2, uVar6, uVar8, CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13), param_6, param_7,
	    param_8, in_stack_ffffffc8);
	uVar19 = (undefined)uVar18;
	uVar17 = (undefined)uVar16;
	uVar15 = (undefined)uVar14;
	uVar9 = (undefined)uVar8;
	uVar7 = (undefined)uVar6;
	uVar5 = DRLG_L1Pass3(extraout_r3, uVar6, uVar8, CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13),
	    uVar14, uVar16, uVar18, in_stack_ffffffc8);
	DRLG_FreeL1SP(uVar5, uVar7, uVar9, uVar11, uVar13, uVar15, uVar17, uVar19, in_stack_ffffffc8);
	DRLG_InitL1Vals();
	DRLG_SetPC();
	return;
}
