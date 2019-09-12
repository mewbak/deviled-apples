
void InitMonsterTRN(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	uint *puVar1;
	byte bVar2;
	undefined *puVar3;
	ulonglong uVar4;
	char *pcVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	undefined7 uVar8;
	undefined uVar9;
	undefined7 uVar10;
	undefined uVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	int iVar15;
	int iVar16;
	byte *pbVar17;
	byte *pbVar18;
	int iVar19;
	byte *pbVar20;
	longlong lVar21;
	undefined4 in_stack_ffffffa8;

	puVar3 = PTR_DAT_100f19c0;
	uVar10 = (undefined7)((ulonglong)param_5 >> 8);
	uVar11 = (undefined)param_5;
	uVar8 = (undefined7)((ulonglong)param_4 >> 8);
	uVar9 = (undefined)param_4;
	lVar14 = (longlong)param_8;
	lVar13 = (longlong)param_7;
	lVar12 = (longlong)param_6;
	puVar1 = (uint *)(PTR_DAT_100f19c0 + param_1 * 0x208 + 0x204);
	uVar4 = FUN_100b8f7c((ulonglong)*puVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	lVar21 = 0x20;
	uVar7 = 0xff;
	do {
		pcVar5 = (char *)uVar4;
		if (*pcVar5 == -1) {
			*pcVar5 = '\0';
		}
		if (pcVar5[1] == -1) {
			pcVar5[1] = '\0';
		}
		if (pcVar5[2] == -1) {
			pcVar5[2] = '\0';
		}
		if (pcVar5[3] == -1) {
			pcVar5[3] = '\0';
		}
		if (pcVar5[4] == -1) {
			pcVar5[4] = '\0';
		}
		if (pcVar5[5] == -1) {
			pcVar5[5] = '\0';
		}
		if (pcVar5[6] == -1) {
			pcVar5[6] = '\0';
		}
		bVar2 = pcVar5[7];
		uVar6 = (ulonglong)bVar2;
		if (bVar2 == 0xff) {
			pcVar5[7] = 0;
		}
		uVar4 = uVar4 + 8;
		uVar7 = uVar7 - 7;
		lVar21 = lVar21 + -1;
	} while (lVar21 != 0);
	if ((int)param_2 == 0) {
		iVar19 = 5;
	} else {
		iVar19 = 6;
	}
	iVar15 = 0;
	pbVar17 = puVar3 + param_1 * 0x208;
	pbVar18 = pbVar17;
	while (iVar15 < iVar19) {
		if (((iVar15 != 1) || (*pbVar17 < 0x69)) || (0x6c < *pbVar17)) {
			iVar16 = 0;
			pbVar20 = pbVar18;
			do {
				uVar6 = (ulonglong) * (uint *)(pbVar17 + 0x204);
				uVar7 = (ulonglong) * (uint *)(pbVar18 + 0x48);
				Cl2ApplyTrans((uint *)(pbVar20 + 8), uVar6, uVar7, CONCAT71(uVar8, uVar9), CONCAT71(uVar10, uVar11), (int)lVar12, (int)lVar13, (int)lVar14, in_stack_ffffffa8);
				iVar16 = iVar16 + 1;
				pbVar20 = pbVar20 + 8;
			} while (iVar16 < 8);
		}
		pbVar18 = pbVar18 + 0x4c;
		iVar15 = iVar15 + 1;
	}
	FUN_100b9100(*puVar1, (char)uVar6, (char)uVar7, uVar9, uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
	    in_stack_ffffffa8);
	return;
}

void InitLevelMonsters(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	undefined **ppuVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int *piVar12;
	int iVar13;
	longlong lVar14;
	undefined4 in_stack_ffffffb8;

	puVar2 = PTR_DAT_100f1f54;
	ppuVar5 = &toc;
	iVar13 = 0;
	*(undefined4 *)PTR_DAT_100f19b8 = 0;
	puVar3 = PTR_DAT_100f1f50;
	*(undefined4 *)puVar2 = 0;
	puVar2 = PTR_DAT_100f19c0;
	*(undefined4 *)puVar3 = 0;
	puVar2[1] = 0;
	puVar2[0x209] = 0;
	puVar2[0x411] = 0;
	puVar2[0x619] = 0;
	puVar2[0x821] = 0;
	puVar2[0xa29] = 0;
	puVar2[0xc31] = 0;
	puVar2[0xe39] = 0;
	puVar2[0x1041] = 0;
	puVar2[0x1249] = 0;
	puVar2[0x1451] = 0;
	puVar2[0x1659] = 0;
	puVar2[0x1861] = 0;
	puVar2[0x1a69] = 0;
	puVar2[0x1c71] = 0;
	puVar2[0x1e79] = 0;
	ClrAllMonsters((char)puVar3, (char)puVar2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	puVar1 = (undefined4 *)ppuVar5[-0x1c21];
	*(undefined4 *)ppuVar5[-0x1d8b] = 0;
	lVar14 = 5;
	piVar12 = (int *)ppuVar5[-0x1d8a];
	*puVar1 = 200;
	do {
		*piVar12 = iVar13;
		piVar12[1] = iVar13 + 1;
		piVar12[2] = iVar13 + 2;
		piVar12[3] = iVar13 + 3;
		piVar12[4] = iVar13 + 4;
		piVar12[5] = iVar13 + 5;
		piVar12[6] = iVar13 + 6;
		piVar12[7] = iVar13 + 7;
		piVar12[8] = iVar13 + 8;
		piVar12[9] = iVar13 + 9;
		piVar12[10] = iVar13 + 10;
		piVar12[0xb] = iVar13 + 0xb;
		piVar12[0xc] = iVar13 + 0xc;
		piVar12[0xd] = iVar13 + 0xd;
		piVar12[0xe] = iVar13 + 0xe;
		piVar12[0xf] = iVar13 + 0xf;
		piVar12[0x10] = iVar13 + 0x10;
		piVar12[0x11] = iVar13 + 0x11;
		piVar12[0x12] = iVar13 + 0x12;
		piVar12[0x13] = iVar13 + 0x13;
		piVar12[0x14] = iVar13 + 0x14;
		piVar12[0x15] = iVar13 + 0x15;
		piVar12[0x16] = iVar13 + 0x16;
		piVar12[0x17] = iVar13 + 0x17;
		piVar12[0x18] = iVar13 + 0x18;
		piVar12[0x19] = iVar13 + 0x19;
		iVar11 = iVar13 + 0x21;
		piVar12[0x1a] = iVar13 + 0x1a;
		iVar10 = iVar13 + 0x22;
		piVar12[0x1b] = iVar13 + 0x1b;
		iVar9 = iVar13 + 0x23;
		piVar12[0x1c] = iVar13 + 0x1c;
		iVar8 = iVar13 + 0x24;
		piVar12[0x1d] = iVar13 + 0x1d;
		iVar7 = iVar13 + 0x25;
		piVar12[0x1e] = iVar13 + 0x1e;
		iVar6 = iVar13 + 0x26;
		piVar12[0x1f] = iVar13 + 0x1f;
		iVar4 = iVar13 + 0x27;
		piVar12[0x20] = iVar13 + 0x20;
		iVar13 = iVar13 + 0x28;
		piVar12[0x21] = iVar11;
		piVar12[0x22] = iVar10;
		piVar12[0x23] = iVar9;
		piVar12[0x24] = iVar8;
		piVar12[0x25] = iVar7;
		piVar12[0x26] = iVar6;
		piVar12[0x27] = iVar4;
		piVar12 = piVar12 + 0x28;
		lVar14 = lVar14 + -1;
	} while (lVar14 != 0);
	*(undefined4 *)ppuVar5[-0x1c22] = 0;
	return;
}

int AddMonsterType(undefined8 uParm1, byte param_2)

{
	byte bVar1;
	undefined *puVar2;
	undefined8 uVar3;
	uint uVar4;
	byte *pbVar7;
	ulonglong uVar5;
	longlong lVar6;
	undefined *puVar8;
	ulonglong uVar9;
	ulonglong uVar10;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int iVar11;
	undefined4 in_stack_ffffffb8;

	puVar8 = PTR_DAT_100f19c0;
	uVar10 = ZEXT48(PTR_DAT_100f19b8);
	iVar11 = 0;
	uVar4 = 0;
	pbVar7 = PTR_DAT_100f19c0;
	while ((iVar11 < *(int *)PTR_DAT_100f19b8 && (uVar4 == 0))) {
		bVar1 = *pbVar7;
		pbVar7 = pbVar7 + 0x208;
		iVar11 = iVar11 + 1;
		uVar3 = countLeadingZeros((uint)bVar1 - (int)uParm1);
		uVar4 = (uint)uVar3 >> 5 & 0xff;
	}
	iVar11 = iVar11 + -1;
	if (uVar4 == 0) {
		iVar11 = *(int *)PTR_DAT_100f19b8;
		uVar5 = (ulonglong)_DAT_100f1d1c;
		*(int *)PTR_DAT_100f19b8 = iVar11 + 1;
		puVar2 = PTR_DAT_100f1f54;
		uVar9 = ZEXT48(PTR_DAT_100f1f54);
		lVar6 = uVar5 + (ulonglong)(uint)((int)uParm1 << 7);
		puVar8[iVar11 * 0x208] = (char)uParm1;
		uVar4 = *(uint *)puVar2;
		*(uint *)puVar2 = uVar4 + *(int *)((int)lVar6 + 4);
		InitMonsterGFX(iVar11, lVar6, (ulonglong)uVar4, uVar9, uVar10, in_r8, in_r9, in_r10, in_stack_ffffffb8);
		InitMonsterSND(iVar11);
	}
	puVar8 = puVar8 + iVar11 * 0x208;
	puVar8[1] = puVar8[1] | param_2;
	return iVar11;
}

void GetLevelMTypes(undefined param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	byte bVar1;
	uint uVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	int iVar8;
	undefined8 uVar9;
	ulonglong uVar10;
	int iVar11;
	ulonglong uVar12;
	int iVar13;
	uint uVar14;
	longlong lVar15;
	longlong lVar16;
	ulonglong uVar17;
	int iVar18;
	longlong lVar19;
	undefined8 unaff_r20;
	uint *puVar20;
	undefined8 unaff_r21;
	longlong lVar21;
	int iVar22;
	undefined8 unaff_r22;
	uint uVar23;
	undefined8 unaff_r23;
	byte *pbVar24;
	undefined8 unaff_r24;
	byte *pbVar25;
	undefined8 unaff_r25;
	int iVar27;
	longlong lVar26;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	longlong lVar28;
	undefined4 in_stack_fffffab8;
	undefined in_stack_fffffabf;
	undefined in_stack_fffffacb;
	uint local_518[112];
	uint auStack856[202];
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

	puVar7 = PTR_DAT_100f1f54;
	puVar6 = PTR_DAT_100f1f44;
	pbVar24 = PTR_DAT_100f1f40;
	puVar5 = PTR_DAT_100f1f34;
	iVar22 = _DAT_100f1d1c;
	puVar4 = PTR_DAT_100f19b8;
	puVar3 = PTR_DAT_100f17ec;
	lVar16 = (longlong)param_8;
	lVar19 = (longlong)param_7;
	lVar28 = (longlong)param_6;
	lVar26 = (longlong)param_5;
	lVar15 = (longlong)param_4;
	uVar12 = SEXT18(param_3);
	uVar17 = ZEXT48(&toc);
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
	AddMonsterType(0x6d, 2);
	if (*puVar3 == '\x10') {
		AddMonsterType(0x6c, 1);
		AddMonsterType(0x60, 1);
		AddMonsterType(0x6e, 2);
	} else {
		if (**(char **)((int)uVar17 + -0x77d8) == '\0') {
			uVar9 = QuestStatus(6);
			if ((int)uVar9 != 0) {
				AddMonsterType(0x33, 2);
			}
			uVar9 = QuestStatus(2);
			if ((int)uVar9 != 0) {
				AddMonsterType(*puVar6, 4);
			}
			uVar9 = QuestStatus(3);
			if ((int)uVar9 != 0) {
				AddMonsterType(puVar6[0x40], 4);
			}
			uVar9 = QuestStatus(7);
			if ((int)uVar9 != 0) {
				AddMonsterType(puVar6[0x60], 4);
			}
			uVar9 = QuestStatus(4);
			if ((int)uVar9 != 0) {
				AddMonsterType(puVar6[0xe0], 4);
			}
			uVar9 = QuestStatus(0xb);
			if ((int)uVar9 != 0) {
				AddMonsterType(puVar6[0x100], 4);
			}
			iVar8 = (int)uVar17;
			if ((**(char **)(iVar8 + -0x77f0) != '\x01') && (*puVar3 == *(char *)(*(int *)(iVar8 + -0x7604) + 0x120))) {
				AddMonsterType(0x32, 4);
				iVar27 = iVar22 + 0x400;
				pbVar25 = pbVar24 + 8;
				lVar21 = 0;
				uVar23 = 8;
				do {
					uVar10 = IsSkel(uVar23);
					iVar8 = (int)uVar17;
					if ((int)uVar10 != 0) {
						iVar13 = (int)*(char *)(iVar27 + 0x55) * 0xf;
						iVar11 = (int)*(char *)(iVar27 + 0x54) * 0xf;
						lVar15 = (longlong)(int)((ulonglong)((longlong)iVar13 * -0x77777777) >> 0x20);
						uVar2 = iVar13 / 0x1e + (iVar13 >> 0x1f);
						uVar12 = (ulonglong)uVar2;
						uVar14 = iVar11 / 0x1e + (iVar11 >> 0x1f);
						if ((((int)(uVar14 + (uVar14 >> 0x1f) + 1) <= (int)(uint)(byte)*puVar3) && ((int)(uint)(byte)*puVar3 <= (int)(uVar2 + (uVar2 >> 0x1f) + 1))) && ((*pbVar25 & 3) != 0)) {
							iVar11 = (int)lVar21;
							lVar21 = lVar21 + 1;
							local_518[iVar11] = uVar23;
						}
					}
					uVar23 = uVar23 + 1;
					pbVar25 = pbVar25 + 1;
					iVar27 = iVar27 + 0x80;
				} while ((int)uVar23 < 0x1c);
				lVar15 = random(0x58, lVar21, (char)uVar12, (char)lVar15, (char)lVar26, (char)lVar28,
				    (char)lVar19, (char)lVar16, in_stack_fffffab8, in_stack_fffffabf,
				    in_stack_fffffacb);
				AddMonsterType((ulonglong)local_518[(int)lVar15], 1);
			}
			lVar28 = 0x25;
			bVar1 = *puVar3;
			lVar26 = 0;
			iVar11 = 0;
			lVar15 = ZEXT48(register0x0000000c) - 0x354;
			iVar27 = iVar22;
			do {
				iVar18 = (int)*(char *)(iVar27 + 0x55) * 0xf;
				iVar13 = (int)*(char *)(iVar27 + 0x54) * 0xf;
				uVar23 = iVar18 / 0x1e + (iVar18 >> 0x1f);
				uVar2 = iVar13 / 0x1e + (iVar13 >> 0x1f);
				if ((((int)(uVar2 + (uVar2 >> 0x1f) + 1) <= (int)(uint)bVar1) && ((int)(uint)bVar1 <= (int)(uVar23 + (uVar23 >> 0x1f) + 1))) && ((*pbVar24 & 3) != 0)) {
					*(int *)lVar15 = iVar11;
					lVar15 = lVar15 + 4;
					lVar26 = lVar26 + 1;
				}
				iVar18 = (int)*(char *)(iVar27 + 0xd5) * 0xf;
				iVar13 = (int)*(char *)(iVar27 + 0xd4) * 0xf;
				uVar23 = iVar18 / 0x1e + (iVar18 >> 0x1f);
				uVar2 = iVar13 / 0x1e + (iVar13 >> 0x1f);
				uVar14 = (uint)bVar1;
				if ((((int)(uVar2 + (uVar2 >> 0x1f) + 1) <= (int)uVar14) && ((int)uVar14 <= (int)(uVar23 + (uVar23 >> 0x1f) + 1))) && ((pbVar24[1] & 3) != 0)) {
					*(int *)lVar15 = iVar11 + 1;
					lVar15 = lVar15 + 4;
					lVar26 = lVar26 + 1;
				}
				iVar18 = (int)*(char *)(iVar27 + 0x155) * 0xf;
				iVar13 = (int)*(char *)(iVar27 + 0x154) * 0xf;
				lVar19 = (longlong)(int)((ulonglong)((longlong)iVar18 * -0x77777777) >> 0x20);
				uVar23 = iVar18 / 0x1e + (iVar18 >> 0x1f);
				uVar12 = (ulonglong)uVar23;
				uVar2 = iVar13 / 0x1e + (iVar13 >> 0x1f);
				uVar17 = (ulonglong)(uVar23 >> 0x1f);
				if ((((int)(uVar2 + (uVar2 >> 0x1f) + 1) <= (int)uVar14) && ((int)uVar14 <= (int)(uVar23 + (uVar23 >> 0x1f) + 1))) && ((pbVar24[2] & 3) != 0)) {
					*(int *)lVar15 = iVar11 + 2;
					lVar15 = lVar15 + 4;
					lVar26 = lVar26 + 1;
				}
				iVar27 = iVar27 + 0x180;
				pbVar24 = pbVar24 + 3;
				iVar11 = iVar11 + 3;
				lVar28 = lVar28 + -1;
			} while (lVar28 != 0);
			if (**(int **)(iVar8 + -0x7094) == 0) {
				iVar8 = (int)lVar26 << 2;
				while (((0 < (int)lVar26 && (*(int *)puVar4 < 0x10)) && (*(int *)puVar7 < 4000))) {
					iVar27 = (int)lVar26 << 2;
					lVar28 = 4000 - (ulonglong) * (uint *)puVar7;
					lVar16 = 0;
					lVar15 = ZEXT48(register0x0000000c) - 0x354;
					while ((int)lVar16 < (int)lVar26) {
						if ((int)lVar28 < *(int *)(iVar22 + *(int *)lVar15 * 0x80 + 4)) {
							iVar27 = iVar27 + -4;
							lVar26 = lVar26 + -1;
							iVar8 = iVar8 + -4;
							*(int *)lVar15 = *(int *)((int)auStack856 + 4U + iVar27);
						} else {
							lVar15 = lVar15 + 4;
							lVar16 = lVar16 + 1;
						}
					}
					if ((int)lVar26 != 0) {
						lVar15 = random(0x58, lVar26, (char)lVar15, (char)lVar28, (char)lVar16, (char)uVar17,
						    (char)uVar12, (char)lVar19, in_stack_fffffab8, in_stack_fffffabf,
						    in_stack_fffffacb);
						puVar20 = (uint *)((int)auStack856 + ((int)lVar15 + 1) * 4);
						AddMonsterType((ulonglong)*puVar20, 1);
						iVar8 = iVar8 + -4;
						lVar26 = lVar26 + -1;
						*puVar20 = *(uint *)((int)auStack856 + 4U + iVar8);
					}
				}
			} else {
				iVar22 = 0;
				puVar20 = *(uint **)(iVar8 + -0x7098);
				while (iVar22 < *(int *)puVar5) {
					AddMonsterType((ulonglong)*puVar20, 1);
					puVar20 = puVar20 + 1;
					iVar22 = iVar22 + 1;
				}
			}
		} else {
			if (**(char **)((int)uVar17 + -0x77e0) == '\x01') {
				AddMonsterType(0x32, 4);
			}
		}
	}
	return;
}

void InitMonsterGFX(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	byte bVar1;
	byte bVar2;
	uint uVar3;
	byte *pbVar4;
	uint *puVar5;
	undefined *puVar6;
	longlong lVar7;
	ulonglong uVar8;
	int iVar10;
	longlong lVar9;
	undefined8 uVar11;
	undefined uVar12;
	ulonglong uVar13;
	undefined4 uVar14;
	longlong lVar15;
	undefined4 uVar16;
	longlong lVar17;
	undefined4 uVar18;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	int iVar19;
	undefined *puVar20;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	uint *puVar21;
	undefined8 unaff_r25;
	uint *puVar22;
	undefined8 unaff_r26;
	uint *puVar23;
	undefined8 unaff_r27;
	uint *puVar24;
	undefined8 unaff_r28;
	byte *pbVar25;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_fffffe88;
	undefined in_stack_fffffe8f;
	undefined4 in_stack_fffffe9c;
	undefined4 in_stack_fffffea0;
	undefined4 in_stack_fffffea4;
	undefined4 in_stack_fffffea8;
	undefined4 in_stack_fffffeac;
	undefined4 in_stack_fffffeb0;
	undefined4 in_stack_fffffeb4;
	undefined auStack320[268];
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

	puVar6 = PTR_DAT_100f1f50;
	iVar10 = _DAT_100f1d1c;
	puVar20 = PTR_DAT_100f19c0;
	lVar17 = (longlong)param_8;
	lVar15 = (longlong)param_7;
	lVar9 = (longlong)param_6;
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
	puVar22 = (uint *)(PTR_DAT_100f19c0 + param_1 * 0x208);
	iVar19 = 0;
	bVar1 = *(byte *)puVar22;
	puVar21 = (uint *)(_DAT_100f1d1c + (uint)bVar1 * 0x80);
	puVar24 = puVar21;
	puVar23 = puVar22;
	pbVar25 = PTR_s_nwahds_100f1f30;
	do {
		bVar2 = *pbVar25;
		uVar13 = (ulonglong)bVar2;
		if (((bVar2 != 0x73) || (puVar21[3] != 0)) && (0 < (int)puVar24[8])) {
			uVar13 = SEXT18((char)bVar2);
			sprintf((int)auStack320, puVar21[2], (int)(char)bVar2, (int)param_4, (int)param_5, (int)lVar9,
			    (int)lVar15, (int)lVar17, in_stack_fffffe88, in_stack_fffffe8f, in_stack_fffffe9c,
			    in_stack_fffffea0, in_stack_fffffea4, in_stack_fffffea8, in_stack_fffffeac,
			    in_stack_fffffeb0, in_stack_fffffeb4);
			uVar11 = 0;
			lVar7 = LoadFileInMem(ZEXT48(register0x0000000c) - 0x140, (undefined4 *)0x0, uVar13, param_4,
			    param_5, (int)lVar9, (int)lVar15, (int)lVar17, in_stack_fffffe88);
			uVar12 = (undefined)uVar11;
			puVar23[1] = (uint)lVar7;
			uVar8 = FUN_100b8f7c((ulonglong)puVar23[1], uVar11, uVar13, param_4, param_5, (int)lVar9,
			    (int)lVar15, (int)lVar17, in_stack_fffffe88);
			if ((*(byte *)puVar22 == 0x6d) && ((*pbVar25 == 0x73 || (*pbVar25 == 100)))) {
				puVar23[2] = puVar23[1];
				puVar23[3] = 0;
				puVar23[4] = puVar23[1];
				puVar23[5] = 0;
				puVar23[6] = puVar23[1];
				puVar23[7] = 0;
				puVar23[8] = puVar23[1];
				puVar23[9] = 0;
				puVar23[10] = puVar23[1];
				puVar23[0xb] = 0;
				puVar23[0xc] = puVar23[1];
				puVar23[0xd] = 0;
				puVar23[0xe] = puVar23[1];
				puVar23[0xf] = 0;
				puVar23[0x10] = puVar23[1];
				puVar23[0x11] = 0;
			} else {
				uVar12 = 0;
				puVar23[2] = puVar23[1];
				pbVar4 = (byte *)uVar8;
				puVar23[3] = (uint)pbVar4[3] << 0x18 | (uint)pbVar4[2] << 0x10 | (uint)pbVar4[1] << 8 | (uint)*pbVar4;
				puVar23[4] = puVar23[1];
				puVar23[5] = (uint)pbVar4[7] << 0x18 | (uint)pbVar4[6] << 0x10 | (uint)pbVar4[5] << 8 | (uint)pbVar4[4];
				puVar23[6] = puVar23[1];
				puVar23[7] = (uint)pbVar4[0xb] << 0x18 | (uint)pbVar4[10] << 0x10 | (uint)pbVar4[9] << 8 | (uint)pbVar4[8];
				puVar23[8] = puVar23[1];
				puVar23[9] = (uint)pbVar4[0xf] << 0x18 | (uint)pbVar4[0xe] << 0x10 | (uint)pbVar4[0xd] << 8
				    | (uint)pbVar4[0xc];
				puVar23[10] = puVar23[1];
				puVar23[0xb] = (uint)pbVar4[0x13] << 0x18 | (uint)pbVar4[0x12] << 0x10 | (uint)pbVar4[0x11] << 8 | (uint)pbVar4[0x10];
				puVar23[0xc] = puVar23[1];
				puVar23[0xd] = (uint)pbVar4[0x17] << 0x18 | (uint)pbVar4[0x16] << 0x10 | (uint)pbVar4[0x15] << 8 | (uint)pbVar4[0x14];
				puVar23[0xe] = puVar23[1];
				uVar13 = 0x1c;
				puVar23[0xf] = (uint)pbVar4[0x1b] << 0x18 | (uint)pbVar4[0x1a] << 0x10 | (uint)pbVar4[0x19] << 8 | (uint)pbVar4[0x18];
				puVar23[0x10] = puVar23[1];
				puVar23[0x11] = (uint)pbVar4[0x1f] << 0x18 | (uint)pbVar4[0x1e] << 0x10 | (uint)pbVar4[0x1d] << 8 | (uint)pbVar4[0x1c];
			}
			FUN_100b9100(puVar23[1], uVar12, (char)uVar13, (char)param_4, (char)param_5, (char)lVar9,
			    (char)lVar15, (char)lVar17, in_stack_fffffe88);
		}
		uVar18 = (undefined4)lVar17;
		uVar16 = (undefined4)lVar15;
		uVar14 = (undefined4)lVar9;
		iVar19 = iVar19 + 1;
		pbVar25 = pbVar25 + 1;
		puVar23[0x12] = puVar24[8];
		puVar5 = puVar24 + 0xe;
		puVar24 = puVar24 + 1;
		puVar23 = puVar23 + 0x13;
		*puVar23 = *puVar5;
	} while (iVar19 < 6);
	uVar3 = *puVar21;
	uVar8 = (ulonglong)uVar3;
	puVar20 = puVar20 + param_1 * 0x208;
	iVar10 = iVar10 + (uint)bVar1 * 0x80;
	*(uint *)(puVar20 + 0x1ec) = uVar3;
	*(int *)(puVar20 + 0x1f0) = (int)(uVar3 - 0x40) >> 1;
	puVar20[500] = (char)*(undefined4 *)(iVar10 + 0x58);
	puVar20[0x1f5] = (char)*(undefined4 *)(iVar10 + 0x5c);
	*(undefined4 *)(puVar20 + 0x1f8) = *(undefined4 *)(iVar10 + 0xc);
	puVar20[0x1fc] = *(undefined *)(iVar10 + 0x6a);
	*(uint **)(puVar20 + 0x200) = puVar21;
	if (*(int *)(iVar10 + 0x18) != 0) {
		lVar9 = LoadFileInMem((ulonglong) * (uint *)(iVar10 + 0x1c), (undefined4 *)0x0, uVar13, param_4,
		    param_5, uVar14, uVar16, uVar18, in_stack_fffffe88);
		*(int *)(puVar20 + 0x204) = (int)lVar9;
		uVar8 = (ulonglong) * (uint *)(iVar10 + 0xc);
		InitMonsterTRN(param_1, uVar8, uVar13, param_4, param_5, uVar14, uVar16, uVar18, in_stack_fffffe88);
		mem_free_dbg((int **)(puVar22 + 0x81), (char)uVar8, (char)uVar13, (char)param_4, (char)param_5,
		    (char)uVar14, (char)uVar16, (char)uVar18, in_stack_fffffe88);
	}
	if (0x3b < bVar1) {
		if ((bVar1 < 0x40) && ((*(uint *)puVar6 & 1) == 0)) {
			*(uint *)puVar6 = *(uint *)puVar6 | 1;
			LoadMissileGFX(0x18, uVar8, uVar13, param_4, param_5, uVar14, uVar16, uVar18, in_stack_fffffe88);
		}
	}
	if (0x4b < bVar1) {
		if ((bVar1 < 0x50) && ((*(uint *)puVar6 & 2) == 0)) {
			*(uint *)puVar6 = *(uint *)puVar6 | 2;
			LoadMissileGFX(0x15, uVar8, uVar13, param_4, param_5, uVar14, uVar16, uVar18, in_stack_fffffe88);
		}
	}
	if ((bVar1 == 0x65) && ((*(uint *)puVar6 & 4) == 0)) {
		*(uint *)puVar6 = *(uint *)puVar6 | 4;
		LoadMissileGFX(0x16, uVar8, uVar13, param_4, param_5, uVar14, uVar16, uVar18, in_stack_fffffe88);
		LoadMissileGFX(0x17, uVar8, uVar13, param_4, param_5, uVar14, uVar16, uVar18, in_stack_fffffe88);
	}
	if ((bVar1 == 0x66) && ((*(uint *)puVar6 & 0x20) == 0)) {
		*(uint *)puVar6 = *(uint *)puVar6 | 0x20;
		LoadMissileGFX(0x28, uVar8, uVar13, param_4, param_5, uVar14, uVar16, uVar18, in_stack_fffffe88);
		LoadMissileGFX(0x29, uVar8, uVar13, param_4, param_5, uVar14, uVar16, uVar18, in_stack_fffffe88);
	}
	if ((bVar1 == 0x67) && ((*(uint *)puVar6 & 0x40) == 0)) {
		*(uint *)puVar6 = *(uint *)puVar6 | 0x40;
		LoadMissileGFX(0x2c, uVar8, uVar13, param_4, param_5, uVar14, uVar16, uVar18, in_stack_fffffe88);
		LoadMissileGFX(0x2d, uVar8, uVar13, param_4, param_5, uVar14, uVar16, uVar18, in_stack_fffffe88);
	}
	if ((bVar1 == 0x68) && ((*(uint *)puVar6 & 0x80) == 0)) {
		*(uint *)puVar6 = *(uint *)puVar6 | 0x80;
		LoadMissileGFX(0x2a, uVar8, uVar13, param_4, param_5, uVar14, uVar16, uVar18, in_stack_fffffe88);
		LoadMissileGFX(0x2b, uVar8, uVar13, param_4, param_5, uVar14, uVar16, uVar18, in_stack_fffffe88);
	}
	if (0x47 < bVar1) {
		if ((bVar1 < 0x4c) && ((*(uint *)puVar6 & 8) == 0)) {
			*(uint *)puVar6 = *(uint *)puVar6 | 8;
			LoadMissileGFX(0x19, uVar8, uVar13, param_4, param_5, uVar14, uVar16, uVar18, in_stack_fffffe88);
		}
	}
	if (0x2d < bVar1) {
		if ((bVar1 < 0x32) && ((*(uint *)puVar6 & 0x10) == 0)) {
			*(uint *)puVar6 = *(uint *)puVar6 | 0x10;
			LoadMissileGFX(0x1f, uVar8, uVar13, param_4, param_5, uVar14, uVar16, uVar18, in_stack_fffffe88);
			LoadMissileGFX(0x20, uVar8, uVar13, param_4, param_5, uVar14, uVar16, uVar18, in_stack_fffffe88);
			LoadMissileGFX(0x21, uVar8, uVar13, param_4, param_5, uVar14, uVar16, uVar18, in_stack_fffffe88);
		}
	}
	if (bVar1 == 0x6e) {
		LoadMissileGFX(0x27, uVar8, uVar13, param_4, param_5, uVar14, uVar16, uVar18, in_stack_fffffe88);
	}
	return;
}

void ClearMVars(int param_1)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f187c + param_1 * 0xe8;
	*(undefined4 *)(puVar1 + 0x74) = 0;
	*(undefined4 *)(puVar1 + 0x78) = 0;
	*(undefined4 *)(puVar1 + 0x7c) = 0;
	*(undefined4 *)(puVar1 + 0x80) = 0;
	*(undefined4 *)(puVar1 + 0x84) = 0;
	*(undefined4 *)(puVar1 + 0x88) = 0;
	*(undefined4 *)(puVar1 + 0x8c) = 0;
	*(undefined4 *)(puVar1 + 0x90) = 0;
	return;
}

void InitMonster(int param_1, int param_2, int param_3, undefined4 param_4, undefined4 param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	int *piVar1;
	int *piVar2;
	int iVar3;
	char *pcVar4;
	undefined *puVar5;
	undefined **ppuVar6;
	undefined4 uVar7;
	undefined uVar9;
	char *pcVar8;
	undefined uVar11;
	short *psVar10;
	undefined uVar13;
	char *pcVar12;
	undefined uVar15;
	char *pcVar14;
	longlong lVar16;
	undefined uVar18;
	char *pcVar17;
	char *pcVar19;
	char *pcVar20;
	char *pcVar21;
	char *pcVar22;
	undefined *puVar23;
	undefined *puVar24;
	longlong lVar25;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;

	puVar5 = PTR_DAT_100f187c;
	uVar15 = (undefined)param_5;
	uVar13 = (undefined)param_4;
	uVar11 = (undefined)param_3;
	ppuVar6 = &toc;
	param_1 = param_1 * 0xe8;
	puVar23 = PTR_DAT_100f187c + param_1;
	lVar25 = ZEXT48(PTR_DAT_100f19c0) + (longlong)param_3 * 0x208;
	lVar16 = lVar25 + (ulonglong)(uint)(param_2 * 8);
	*(int *)(puVar23 + 0x48) = param_2;
	*(undefined4 *)(puVar23 + 0x20) = param_4;
	*(undefined4 *)(puVar23 + 0x24) = param_5;
	*(undefined4 *)(puVar23 + 0x28) = param_4;
	*(undefined4 *)(puVar23 + 0x2c) = param_5;
	*(undefined4 *)(puVar23 + 0x30) = param_4;
	*(undefined4 *)(puVar23 + 0x34) = param_5;
	*(int *)(puVar5 + param_1) = param_3;
	*(undefined4 *)(puVar23 + 4) = 0;
	pcVar4 = (char *)lVar25;
	*(undefined4 *)(puVar23 + 0xdc) = *(undefined4 *)(*(int *)(pcVar4 + 0x200) + 0x50);
	*(char **)(puVar23 + 0xe0) = pcVar4;
	*(undefined4 *)(puVar23 + 0xe4) = *(undefined4 *)(pcVar4 + 0x200);
	iVar3 = (int)lVar16;
	uVar7 = *(undefined4 *)(iVar3 + 0xc);
	*(undefined4 *)(puVar23 + 0x54) = *(undefined4 *)(iVar3 + 8);
	*(undefined4 *)(puVar23 + 0x58) = uVar7;
	*(undefined4 *)(puVar23 + 0x5c) = *(undefined4 *)(pcVar4 + 0x4c);
	uVar18 = (undefined)lVar16;
	lVar16 = random(0x58, (ulonglong) * (uint *)(puVar23 + 0x5c) - 1, uVar11, uVar13, uVar15, uVar18,
	    param_7, param_8, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
	*(int *)(puVar23 + 0x60) = (int)lVar16;
	*(undefined4 *)(puVar23 + 100) = *(undefined4 *)(pcVar4 + 0x48);
	lVar16 = random(0x58, (ulonglong) * (uint *)(puVar23 + 100) - 1, uVar11, uVar13, uVar15, uVar18,
	    param_7, param_8, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
	*(int *)(puVar23 + 0x68) = (int)lVar16 + 1;
	if (*pcVar4 == 'n') {
		uVar9 = 1;
		lVar16 = random(0x58, 1, uVar11, uVar13, uVar15, uVar18, param_7, param_8, in_stack_ffffff98,
		    in_stack_ffffff9f, in_stack_ffffffab);
		*(int *)(puVar23 + 0x94) = ((int)lVar16 + 0x682) * 0x40;
	} else {
		lVar16 = ((ulonglong)(byte)pcVar4[0x1f5] - (ulonglong)(byte)pcVar4[500]) + 1;
		uVar9 = (undefined)lVar16;
		lVar16 = random(0x58, lVar16, uVar11, uVar13, uVar15, uVar18, param_7, param_8, in_stack_ffffff98,
		    in_stack_ffffff9f, in_stack_ffffffab);
		*(uint *)(puVar23 + 0x94) = ((uint)(byte)pcVar4[500] + (int)lVar16) * 0x40;
	}
	if (*ppuVar6[-0x1dfc] == '\x01') {
		puVar24 = puVar5 + param_1;
		*(int *)(puVar24 + 0x94) = *(int *)(puVar24 + 0x94) >> 1;
		if (*(int *)(puVar24 + 0x94) < 0x40) {
			*(int *)(puVar24 + 0x94) = 0x40;
		}
	}
	piVar1 = (int *)(puVar5 + param_1 + 0x94);
	piVar2 = (int *)(puVar5 + param_1 + 0x98);
	*piVar2 = *piVar1;
	puVar24 = puVar5 + param_1;
	puVar5[param_1 + 0x9c] = *(char *)(*(int *)(pcVar4 + 0x200) + 0x60);
	iVar3 = *(int *)(pcVar4 + 0x200);
	puVar24[0x9d] = *(undefined *)(iVar3 + 0x68);
	puVar24[8] = 1;
	*(undefined4 *)(puVar24 + 0xc) = 0;
	*(undefined4 *)(puVar24 + 0x10) = 0;
	*(undefined4 *)(puVar24 + 0x14) = 0;
	*(undefined4 *)(puVar24 + 0x18) = 0;
	puVar24[0x1c] = 0;
	*(undefined4 *)(puVar24 + 0x70) = 0;
	puVar24[0xc0] = 0;
	puVar24[0xa4] = 0;
	uVar7 = GetRndSeed((char)iVar3, uVar9, uVar11, uVar13, uVar15, uVar18, param_7, param_8,
	    in_stack_ffffff98);
	*(undefined4 *)(puVar24 + 0xb4) = uVar7;
	uVar7 = GetRndSeed((char)uVar7, uVar9, uVar11, uVar13, uVar15, uVar18, param_7, param_8,
	    in_stack_ffffff98);
	*(undefined4 *)(puVar24 + 0xb8) = uVar7;
	pcVar8 = puVar24 + 0xc4;
	psVar10 = (short *)(puVar24 + 0xc6);
	pcVar12 = puVar24 + 200;
	puVar24[0xc3] = 0;
	pcVar14 = puVar24 + 0xc9;
	pcVar17 = puVar24 + 0xca;
	pcVar19 = puVar24 + 0xcb;
	pcVar20 = puVar24 + 0xcc;
	pcVar21 = puVar24 + 0xcd;
	pcVar22 = puVar24 + 0xce;
	puVar24[0xc4] = *(undefined *)(*(int *)(pcVar4 + 0x200) + 0x56);
	*(undefined2 *)(puVar24 + 0xc6) = *(undefined2 *)(*(int *)(pcVar4 + 0x200) + 0x7c);
	puVar24[200] = *(undefined *)(*(int *)(pcVar4 + 0x200) + 0x69);
	puVar24[0xc9] = *(undefined *)(*(int *)(pcVar4 + 0x200) + 0x6b);
	puVar24[0xca] = *(undefined *)(*(int *)(pcVar4 + 0x200) + 0x6c);
	puVar24[0xcb] = *(undefined *)(*(int *)(pcVar4 + 0x200) + 0x6d);
	puVar24[0xcc] = *(undefined *)(*(int *)(pcVar4 + 0x200) + 0x6f);
	puVar24[0xcd] = *(undefined *)(*(int *)(pcVar4 + 0x200) + 0x70);
	puVar24[0xce] = *(undefined *)(*(int *)(pcVar4 + 0x200) + 0x71);
	*(undefined2 *)(puVar24 + 0xd0) = *(undefined2 *)(*(int *)(pcVar4 + 0x200) + 0x74);
	puVar24[0xd8] = 0;
	puVar24[0xd9] = 0;
	*(undefined4 *)(puVar24 + 0xa0) = *(undefined4 *)(*(int *)(pcVar4 + 0x200) + 100);
	*(undefined4 *)(puVar24 + 0xd4) = 0;
	if (puVar5[param_1 + 0x9c] == '\f') {
		uVar7 = *(undefined4 *)(pcVar4 + param_2 * 8 + 0x188);
		*(undefined4 *)(puVar23 + 0x54) = *(undefined4 *)(pcVar4 + param_2 * 8 + 0x184);
		*(undefined4 *)(puVar23 + 0x58) = uVar7;
		*(undefined4 *)(puVar23 + 0x68) = 1;
		*(uint *)(puVar24 + 0xa0) = *(uint *)(puVar24 + 0xa0) | 4;
		*(undefined4 *)(puVar23 + 4) = 7;
	}
	iVar3 = *(int *)ppuVar6[-0x1c61];
	if (iVar3 == 1) {
		*piVar1 = *piVar1 * 3 + 0x40;
		*piVar2 = *piVar1;
		*pcVar8 = *pcVar8 + '\x0f';
		*psVar10 = *psVar10 * 2 + 2000;
		*pcVar12 = *pcVar12 + 'U';
		*pcVar14 = *pcVar14 * '\x02' + '\x04';
		*pcVar17 = *pcVar17 * '\x02' + '\x04';
		*pcVar19 = *pcVar19 + 'U';
		*pcVar20 = *pcVar20 * '\x02' + '\x04';
		*pcVar21 = *pcVar21 * '\x02' + '\x04';
		*pcVar22 = *pcVar22 + '2';
	}
	if (iVar3 == 2) {
		*piVar1 = *piVar1 * 4 + 0xc0;
		*piVar2 = *piVar1;
		*pcVar8 = *pcVar8 + '\x1e';
		*psVar10 = *psVar10 * 4 + 4000;
		*pcVar12 = *pcVar12 + 'x';
		*pcVar14 = *pcVar14 * '\x04' + '\x06';
		*pcVar17 = *pcVar17 * '\x04' + '\x06';
		*pcVar19 = *pcVar19 + 'x';
		*pcVar20 = *pcVar20 * '\x04' + '\x06';
		*pcVar21 = *pcVar21 * '\x04' + '\x06';
		*pcVar22 = *pcVar22 + 'P';
		*(undefined2 *)(puVar24 + 0xd0) = *(undefined2 *)(*(int *)(pcVar4 + 0x200) + 0x76);
	}
	return;
}

void ClrAllMonsters(undefined param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	int iVar11;
	undefined *puVar12;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	puVar3 = PTR_s_Invalid_Monster_100f3304;
	puVar2 = PTR_DAT_100f1f2c;
	puVar1 = PTR_DAT_100f1828;
	lVar10 = (longlong)param_8;
	lVar9 = (longlong)param_7;
	lVar8 = (longlong)param_6;
	lVar7 = (longlong)param_5;
	lVar6 = (longlong)param_4;
	lVar5 = (longlong)param_3;
	iVar11 = 0;
	puVar12 = PTR_DAT_100f187c;
	do {
		ClearMVars(iVar11);
		*(undefined **)(puVar12 + 0xdc) = puVar3;
		puVar12[8] = 0;
		*(undefined4 *)(puVar12 + 4) = 0;
		*(undefined4 *)(puVar12 + 0x74) = 0;
		*(undefined4 *)(puVar12 + 0x78) = 0;
		*(undefined4 *)(puVar12 + 0x20) = 0;
		*(undefined4 *)(puVar12 + 0x24) = 0;
		*(undefined4 *)(puVar12 + 0x28) = 0;
		*(undefined4 *)(puVar12 + 0x2c) = 0;
		*(undefined4 *)(puVar12 + 0x30) = 0;
		*(undefined4 *)(puVar12 + 0x34) = 0;
		lVar4 = random(0x59, 8, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9,
		    (char)lVar10, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
		*(int *)(puVar12 + 0x48) = (int)lVar4;
		*(undefined4 *)(puVar12 + 0x40) = 0;
		*(undefined4 *)(puVar12 + 0x44) = 0;
		*(undefined4 *)(puVar12 + 0x54) = 0;
		*(undefined4 *)(puVar12 + 0x58) = 0;
		*(undefined4 *)(puVar12 + 0x5c) = 0;
		*(undefined4 *)(puVar12 + 0x60) = 0;
		*(undefined4 *)(puVar12 + 100) = 0;
		*(undefined4 *)(puVar12 + 0x68) = 0;
		*(undefined4 *)(puVar12 + 0xa0) = 0;
		*(undefined4 *)(puVar12 + 0x70) = 0;
		lVar4 = random(0x59, (ulonglong)(byte)*puVar2, (char)lVar5, (char)lVar6, (char)lVar7,
		    (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffa8, in_stack_ffffffaf,
		    in_stack_ffffffbb);
		*(int *)(puVar12 + 0x4c) = (int)lVar4;
		iVar11 = iVar11 + 1;
		puVar12[0x50] = (char)*(undefined4 *)(puVar1 + *(int *)(puVar12 + 0x4c) * 0x55ec + 0x40);
		puVar12[0x51] = (char)*(undefined4 *)(puVar1 + *(int *)(puVar12 + 0x4c) * 0x55ec + 0x44);
		puVar12 = puVar12 + 0xe8;
	} while (iVar11 < 200);
	return;
}

undefined8
MonstPlace(int param_1, int param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	byte bVar1;
	undefined8 uVar2;
	ulonglong uVar3;
	int iVar4;

	if ((((param_1 < 0) || (0x6f < param_1)) || (param_2 < 0)) || (0x6f < param_2)) {
		uVar2 = 0;
	} else {
		if (*(short *)(*(int *)PTR_DAT_100f1954 + param_1 * 0xe0 + param_2 * 2) == 0) {
			iVar4 = param_1 * 0x70 + param_2;
			if (*(char *)(*(int *)PTR_DAT_100f1950 + iVar4) == '\0') {
				bVar1 = *(byte *)(*(int *)PTR_DAT_100f1834 + iVar4);
				if ((bVar1 & 2) == 0) {
					if ((bVar1 & 8) == 0) {
						uVar3 = SolidLoc(param_1, param_2);
						if ((int)uVar3 == 0) {
							uVar2 = 1;
						} else {
							uVar2 = 0;
						}
					} else {
						uVar2 = 0;
					}
				} else {
					uVar2 = 0;
				}
			} else {
				uVar2 = 0;
			}
		} else {
			uVar2 = 0;
		}
	}
	return uVar2;
}

void PlaceMonster(undefined8 param_1, int param_2, int param_3, int param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	int iVar1;
	longlong lVar2;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined1 in_stack_ffffffcb;

	iVar1 = *(int *)PTR_DAT_100f1954;
	*(short *)(iVar1 + (int)((longlong)param_3 * 0xe0) + param_4 * 2) = (short)param_1 + 1;
	lVar2 = random(0x5a, 8, (char)((longlong)param_3 * 0xe0), (char)param_4, (char)iVar1, param_6,
	    param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb);
	InitMonster((int)param_1, (int)lVar2, param_2, param_3, param_4, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	return;
}

void PlaceUniqueMonst(undefined8 uParm1, undefined8 uParm2, undefined8 uParm3, undefined8 uParm4,
    undefined8 uParm5, undefined4 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	short sVar1;
	undefined4 uVar2;
	bool bVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	ulonglong uVar10;
	uint uVar11;
	int iVar15;
	byte *pbVar16;
	longlong lVar12;
	longlong lVar13;
	undefined8 uVar14;
	int *piVar17;
	short *psVar18;
	ulonglong uVar19;
	short *psVar20;
	ulonglong uVar21;
	undefined uVar22;
	ulonglong uVar23;
	undefined uVar24;
	undefined uVar25;
	undefined uVar26;
	undefined uVar27;
	undefined8 in_r13;
	undefined8 unaff_r14;
	undefined8 unaff_r15;
	undefined8 unaff_r16;
	undefined8 unaff_r17;
	undefined8 unaff_r18;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	int iVar28;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	char *pcVar29;
	undefined8 unaff_r23;
	int iVar30;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined *puVar31;
	undefined8 unaff_r26;
	longlong lVar32;
	undefined8 unaff_r27;
	longlong lVar33;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	int iVar34;
	undefined8 unaff_r30;
	longlong lVar35;
	int iVar36;
	undefined8 unaff_r31;
	longlong lVar37;
	int iVar38;
	int param_11;
	undefined4 in_stack_ffffff38;
	undefined in_stack_ffffff3f;
	undefined in_stack_ffffff4b;
	undefined4 in_stack_ffffff4c;
	undefined4 in_stack_ffffff50;
	undefined4 in_stack_ffffff54;
	undefined4 in_stack_ffffff58;
	undefined4 in_stack_ffffff5c;
	undefined4 in_stack_ffffff60;
	undefined4 in_stack_ffffff64;
	undefined auStack152[76];
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

	puVar9 = PTR_DAT_100f1f48;
	puVar8 = PTR_DAT_100f1e4c;
	puVar7 = PTR_DAT_100f1a84;
	puVar6 = PTR_DAT_100f1a80;
	puVar5 = PTR_DAT_100f19a4;
	puVar4 = PTR_DAT_100f17e0;
	uVar10 = ZEXT48(&toc);
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
	iVar15 = (int)uParm1;
	uVar21 = (ulonglong)(uint)(iVar15 * 0x20);
	pcVar29 = PTR_DAT_100f1f44 + iVar15 * 0x20;
	iVar30 = 0;
	param_11 = (int)uParm3;
	uVar23 = (ulonglong)(uint)(*(int *)PTR_DAT_100f1f48 << 8) + 0x1300;
	puVar31 = PTR_DAT_100f187c + *(int *)PTR_DAT_100f19a4 * 0xe8;
	if ((int)uVar23 < 0x1b00) {
		iVar28 = 0;
		uVar19 = (ulonglong) * (uint *)PTR_DAT_100f19b8;
		pbVar16 = PTR_DAT_100f19c0;
		if (0 < (int)*(uint *)PTR_DAT_100f19b8) {
			do {
				if ((uint)*pbVar16 == (int)*pcVar29)
					break;
				pbVar16 = pbVar16 + 0x208;
				iVar28 = iVar28 + 1;
				uVar19 = uVar19 - 1;
			} while (uVar19 != 0);
		}
	LAB_10069d5c:
		do {
			lVar12 = random(0x5b, 0x50, (char)uParm3, (char)uVar21, (char)uVar23, (char)uParm6,
			    (char)uParm7, (char)uParm8, in_stack_ffffff38, in_stack_ffffff3f,
			    in_stack_ffffff4b);
			lVar33 = lVar12 + 0x10;
			lVar13 = random(0x5b, 0x50, (char)uParm3, (char)uVar21, (char)uVar23, (char)uParm6,
			    (char)uParm7, (char)uParm8, in_stack_ffffff38, in_stack_ffffff3f,
			    in_stack_ffffff4b);
			lVar32 = lVar13 + 0x10;
			lVar35 = lVar12 + 0xd;
			iVar34 = 0;
			while (iVar36 = (int)lVar35, iVar36 < (int)lVar12 + 0x13) {
				lVar37 = lVar13 + 0xd;
				while (iVar38 = (int)lVar37, iVar38 < (int)lVar13 + 0x13) {
					if ((((-1 < iVar38) && (iVar38 < 0x70)) && (-1 < iVar36)) && ((iVar36 < 0x70 && (uVar14 = MonstPlace(iVar36, iVar38, (char)uParm3, (char)uVar21, (char)uVar23, (char)uParm6, (char)uParm7, (char)uParm8, in_stack_ffffff38), (int)uVar14 != 0)))) {
						iVar34 = iVar34 + 1;
					}
					lVar37 = lVar37 + 1;
				}
				lVar35 = lVar35 + 1;
			}
			if (iVar34 < 9) {
				iVar30 = iVar30 + 1;
				if (iVar30 < 1000)
					goto LAB_10069d5c;
			}
			uVar14 = MonstPlace((int)lVar33, (int)lVar32, (char)uParm3, (char)uVar21, (char)uVar23,
			    (char)uParm6, (char)uParm7, (char)uParm8, in_stack_ffffff38);
			iVar36 = (int)uParm2;
			iVar34 = (int)uVar10;
		} while ((int)uVar14 == 0);
		if (iVar15 == 3) {
			lVar33 = (ulonglong)(uint)(*(int *)puVar7 << 1) + 0x18;
			lVar32 = (ulonglong)(uint)(*(int *)puVar6 << 1) + 0x1c;
		}
		if (iVar15 == 8) {
			lVar33 = (ulonglong)(uint)(*(int *)puVar7 << 1) + 0x16;
			lVar32 = (ulonglong)(uint)(*(int *)puVar6 << 1) + 0x17;
		}
		if (iVar15 == 2) {
			bVar3 = true;
			iVar30 = 0;
			uVar10 = (ulonglong) * *(uint **)(iVar34 + -0x7270);
			piVar17 = *(int **)(iVar34 + -0x726c);
			if (0 < (int)**(uint **)(iVar34 + -0x7270)) {
				do {
					if ((iVar30 == **(int **)(iVar34 + -0x70a8)) && (bVar3)) {
						bVar3 = false;
						uVar23 = (ulonglong)(uint)(*piVar17 << 1);
						lVar33 = uVar23 + 0x14;
						lVar32 = (ulonglong)(uint)(piVar17[1] << 1) + 0x14;
					}
					piVar17 = piVar17 + 5;
					iVar30 = iVar30 + 1;
					uVar10 = uVar10 - 1;
				} while (uVar10 != 0);
			}
		}
		if (*puVar4 == '\x01') {
			if (iVar15 == 4) {
				lVar33 = 0x20;
				lVar32 = 0x2e;
			}
			if (iVar15 == 5) {
				lVar33 = 0x28;
				lVar32 = 0x2d;
			}
			if (iVar15 == 6) {
				lVar33 = 0x26;
				lVar32 = 0x31;
			}
			if (iVar15 == 1) {
				lVar33 = 0x23;
				lVar32 = 0x2f;
			}
		} else {
			if (iVar15 == 4) {
				lVar33 = (ulonglong)(uint)(*(int *)puVar7 << 1) + 0x13;
				lVar32 = (ulonglong)(uint)(*(int *)puVar6 << 1) + 0x16;
			}
			if (iVar15 == 5) {
				lVar33 = (ulonglong)(uint)(*(int *)puVar7 << 1) + 0x15;
				lVar32 = (ulonglong)(uint)(*(int *)puVar6 << 1) + 0x13;
			}
			if (iVar15 == 6) {
				lVar33 = (ulonglong)(uint)(*(int *)puVar7 << 1) + 0x15;
				lVar32 = (ulonglong)(uint)(*(int *)puVar6 << 1) + 0x19;
			}
		}
		iVar30 = (int)lVar33;
		if (iVar15 == 9) {
			uVar11 = 0;
			lVar32 = 0;
			psVar20 = **(short ***)(iVar34 + -0x757c);
			while ((iVar30 = (int)lVar33, (int)lVar32 < 0x70 && (uVar11 == 0))) {
				lVar33 = 0;
				psVar18 = psVar20;
				while (((int)lVar33 < 0x70 && (uVar11 == 0))) {
					sVar1 = *psVar18;
					psVar18 = psVar18 + 0x70;
					lVar33 = lVar33 + 1;
					uVar14 = countLeadingZeros(0x16f - (int)sVar1);
					uVar11 = (uint)uVar14 >> 5 & 0xff;
				}
				psVar20 = psVar20 + 1;
				lVar32 = lVar32 + 1;
			}
		}
		PlaceMonster((ulonglong) * (uint *)puVar5, iVar28, iVar30, (int)lVar32, (char)uVar23, (char)uParm6,
		    (char)uParm7, (char)uParm8, in_stack_ffffff38);
		puVar31[0xc0] = (char)uParm1 + '\x01';
		if (pcVar29[0xc] == '\0') {
			puVar31[0xc4] = puVar31[0xc4] + '\x05';
		} else {
			puVar31[0xc4] = pcVar29[0xc] << 1;
		}
		*(short *)(puVar31 + 0xc6) = *(short *)(puVar31 + 0xc6) << 1;
		*(undefined4 *)(puVar31 + 0xdc) = *(undefined4 *)(pcVar29 + 4);
		*(uint *)(puVar31 + 0x94) = (uint) * (ushort *)(pcVar29 + 0xe) << 6;
		if ((*puVar4 == '\x01') && (*(int *)(puVar31 + 0x94) = *(int *)(puVar31 + 0x94) >> 1, *(int *)(puVar31 + 0x94) < 0x40)) {
			*(undefined4 *)(puVar31 + 0x94) = 0x40;
		}
		*(undefined4 *)(puVar31 + 0x98) = *(undefined4 *)(puVar31 + 0x94);
		puVar31[0x9c] = pcVar29[0x10];
		puVar31[0x9d] = pcVar29[0x11];
		puVar31[0xc9] = pcVar29[0x12];
		puVar31[0xca] = pcVar29[0x13];
		puVar31[0xcc] = pcVar29[0x12];
		puVar31[0xcd] = pcVar29[0x13];
		*(undefined2 *)(puVar31 + 0xd0) = *(undefined2 *)(pcVar29 + 0x14);
		*(undefined4 *)(puVar31 + 0xd4) = *(undefined4 *)(pcVar29 + 0x1c);
		uVar10 = AddLight(*(undefined4 *)(puVar31 + 0x20), *(undefined4 *)(puVar31 + 0x24), 3);
		puVar31[0xdb] = (char)uVar10;
		if ((*puVar4 != '\x01') && (puVar31[0x9c] == '\x1d')) {
			*(undefined4 *)(puVar31 + 0xd4) = 0;
		}
		if (((*puVar4 == '\x01') || (puVar31[0x9c] != '\x1c')) || (*(byte *)(*(int *)(iVar34 + -0x7604) + 0x177) < 4)) {
			if (*(int *)(puVar31 + 0xd4) != 0) {
				puVar31[8] = 6;
			}
		} else {
			puVar31[8] = 1;
		}
		if (*(int *)puVar8 == 1) {
			*(int *)(puVar31 + 0x94) = *(int *)(puVar31 + 0x94) * 3 + 0x40;
			*(undefined4 *)(puVar31 + 0x98) = *(undefined4 *)(puVar31 + 0x94);
			puVar31[0xc4] = puVar31[0xc4] + '\x0f';
			*(short *)(puVar31 + 0xc6) = *(short *)(puVar31 + 0xc6) * 2 + 2000;
			puVar31[0xc9] = puVar31[0xc9] * '\x02' + '\x04';
			puVar31[0xca] = puVar31[0xca] * '\x02' + '\x04';
			puVar31[0xcc] = puVar31[0xcc] * '\x02' + '\x04';
			puVar31[0xcd] = puVar31[0xcd] * '\x02' + '\x04';
		}
		if (*(int *)puVar8 == 2) {
			*(int *)(puVar31 + 0x94) = *(int *)(puVar31 + 0x94) * 4 + 0xc0;
			*(undefined4 *)(puVar31 + 0x98) = *(undefined4 *)(puVar31 + 0x94);
			puVar31[0xc4] = puVar31[0xc4] + '\x1e';
			*(short *)(puVar31 + 0xc6) = *(short *)(puVar31 + 0xc6) * 4 + 4000;
			puVar31[0xc9] = puVar31[0xc9] * '\x04' + '\x06';
			puVar31[0xca] = puVar31[0xca] * '\x04' + '\x06';
			puVar31[0xcc] = puVar31[0xcc] * '\x04' + '\x06';
			puVar31[0xcd] = puVar31[0xcd] * '\x04' + '\x06';
		}
		sprintf((int)auStack152, *(undefined4 *)(iVar34 + -0x5cd0), *(undefined4 *)(pcVar29 + 8),
		    (int)lVar32, (int)uVar23, uParm6, uParm7, uParm8, in_stack_ffffff38, in_stack_ffffff3f,
		    in_stack_ffffff4c, in_stack_ffffff50, in_stack_ffffff54, in_stack_ffffff58,
		    in_stack_ffffff5c, in_stack_ffffff60, in_stack_ffffff64);
		uVar27 = (undefined)uParm8;
		uVar26 = (undefined)uParm7;
		uVar25 = (undefined)uParm6;
		uVar24 = (undefined)uVar23;
		uVar22 = (undefined)lVar32;
		LoadFileWithMem2(ZEXT48(register0x0000000c) - 0x98,
		    (ulonglong) * *(uint **)(iVar34 + -0x7770) + (ulonglong)(uint)(*(int *)puVar9 << 8) + 0x1300,
		    (ulonglong) * *(uint **)(iVar34 + -0x7770), lVar32, uVar23, uParm6, uParm7, uParm8,
		    in_stack_ffffff38);
		puVar31[0xc1] = (char)*(undefined4 *)puVar9;
		*(int *)puVar9 = *(int *)puVar9 + 1;
		if ((*(ushort *)(pcVar29 + 0x16) & 4) != 0) {
			puVar31[200] = pcVar29[0x18];
			puVar31[0xcb] = pcVar29[0x18];
		}
		if ((*(ushort *)(pcVar29 + 0x16) & 8) != 0) {
			puVar31[0xce] = pcVar29[0x18];
		}
		*(int *)puVar5 = *(int *)puVar5 + 1;
		if ((*(ushort *)(pcVar29 + 0x16) & 1) != 0) {
			uVar22 = (undefined)((ulonglong) * (uint *)puVar5 - 1);
			PlaceGroup(iVar36, param_11, (uint) * (ushort *)(pcVar29 + 0x16),
			    (int)((ulonglong) * (uint *)puVar5 - 1), uVar24, uVar25, uVar26, uVar27,
			    in_stack_ffffff38);
		}
		if (puVar31[0x9c] != '\f') {
			lVar12 = (ulonglong) * (uint *)(puVar31 + 0xe0) + (ulonglong)(uint)(*(int *)(puVar31 + 0x48) << 3);
			iVar15 = (int)lVar12;
			uVar2 = *(undefined4 *)(iVar15 + 0xc);
			*(undefined4 *)(puVar31 + 0x54) = *(undefined4 *)(iVar15 + 8);
			*(undefined4 *)(puVar31 + 0x58) = uVar2;
			lVar12 = random(0x58, (ulonglong) * (uint *)(puVar31 + 100) - 1, (char)lVar12, uVar22, uVar24,
			    uVar25, uVar26, uVar27, in_stack_ffffff38, in_stack_ffffff3f,
			    in_stack_ffffff4b);
			*(int *)(puVar31 + 0x68) = (int)lVar12 + 1;
			*(uint *)(puVar31 + 0xa0) = *(uint *)(puVar31 + 0xa0) & 0xfffffffb;
			*(undefined4 *)(puVar31 + 4) = 0;
		}
	}
	return;
}

ulonglong PlaceUniques(char param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined8 uVar4;
	ulonglong uVar5;
	byte *pbVar6;
	longlong lVar7;
	uint uVar8;
	ulonglong uVar9;
	longlong lVar10;
	int iVar11;
	char *pcVar12;

	puVar3 = PTR_DAT_100f19cc;
	puVar2 = PTR_DAT_100f19b8;
	puVar1 = PTR_DAT_100f17ec;
	uVar5 = SEXT18(param_1);
	lVar10 = 0;
	uVar9 = ZEXT48(PTR_DAT_100f19c0);
	pcVar12 = PTR_DAT_100f1f44;
	while (*pcVar12 != -1) {
		uVar5 = (ulonglong)(byte)*puVar1;
		if (uVar5 == (ulonglong)(byte)pcVar12[0xc]) {
			uVar8 = 0;
			lVar7 = 0;
			uVar5 = uVar9;
			while (((int)lVar7 < *(int *)puVar2 && (uVar8 == 0))) {
				pbVar6 = (byte *)uVar5;
				uVar5 = uVar5 + 0x208;
				lVar7 = lVar7 + 1;
				uVar4 = countLeadingZeros((int)*pcVar12 - (uint)*pbVar6);
				uVar8 = (uint)uVar4 >> 5 & 0xff;
			}
			iVar11 = (int)lVar10;
			if ((iVar11 == 0) && (puVar3[0x32] == '\0')) {
				uVar8 = 0;
			}
			if ((iVar11 == 2) && (puVar3[0x4a] == '\0')) {
				uVar8 = 0;
			}
			if ((iVar11 == 3) && (puVar3[0xaa] == '\0')) {
				uVar8 = 0;
			}
			if ((iVar11 == 7) && (puVar3[0x62] == '\0')) {
				uVar8 = 0;
			}
			if ((iVar11 == 8) && (puVar3[0x10a] == '\0')) {
				uVar8 = 0;
			}
			if (uVar8 != 0) {
				uVar5 = PlaceUniqueMonst(lVar10, lVar7 + -1, 8);
			}
		}
		pcVar12 = pcVar12 + 0x20;
		lVar10 = lVar10 + 1;
	}
	return uVar5;
}

void PlaceQuestMonsters(undefined8 param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	int iVar9;
	undefined8 uVar10;
	ulonglong uVar11;
	ulonglong uVar12;
	undefined uVar13;
	undefined uVar14;
	undefined7 uVar15;
	undefined uVar16;
	undefined7 uVar17;
	undefined uVar18;
	longlong lVar19;
	undefined4 uVar20;
	longlong lVar21;
	undefined4 uVar22;
	longlong lVar23;
	undefined4 uVar24;
	undefined8 unaff_r23;
	longlong lVar25;
	undefined8 unaff_r24;
	byte *pbVar26;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff98;
	int *local_38[5];
	undefined4 local_24;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	puVar8 = PTR_DAT_100f1f44;
	puVar7 = PTR_DAT_100f1a84;
	puVar6 = PTR_DAT_100f1a80;
	puVar5 = PTR_DAT_100f19cc;
	puVar4 = PTR_DAT_100f19b8;
	puVar3 = PTR_DAT_100f17ec;
	puVar2 = PTR_DAT_100f17e0;
	uVar17 = (undefined7)((ulonglong)param_5 >> 8);
	uVar18 = (undefined)param_5;
	uVar15 = (undefined7)((ulonglong)param_4 >> 8);
	uVar16 = (undefined)param_4;
	lVar23 = (longlong)param_8;
	lVar21 = (longlong)param_7;
	lVar19 = (longlong)param_6;
	uVar12 = ZEXT48(&toc);
	local_24 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	if (*PTR_DAT_100f17f8 == '\0') {
		uVar10 = QuestStatus(6);
		if ((int)uVar10 != 0) {
			param_3 = 0;
			PlaceUniqueMonst(9, 0);
		}
		uVar24 = (undefined4)lVar23;
		uVar22 = (undefined4)lVar21;
		uVar20 = (undefined4)lVar19;
		iVar9 = (int)uVar12;
		if ((*puVar3 == puVar5[0x120]) && (*puVar2 != '\x01')) {
			lVar25 = 0;
			pbVar26 = *(byte **)(iVar9 + -0x7610);
			while (true) {
				uVar24 = (undefined4)lVar23;
				uVar22 = (undefined4)lVar21;
				uVar20 = (undefined4)lVar19;
				iVar9 = (int)uVar12;
				if (*(int *)puVar4 <= (int)lVar25)
					break;
				uVar11 = IsSkel((uint)*pbVar26);
				uVar24 = (undefined4)lVar23;
				uVar22 = (undefined4)lVar21;
				uVar20 = (undefined4)lVar19;
				iVar9 = (int)uVar12;
				if ((int)uVar11 != 0)
					break;
				pbVar26 = pbVar26 + 0x208;
				lVar25 = lVar25 + 1;
			}
			param_3 = 0x1e;
			PlaceUniqueMonst(1, lVar25);
		}
		uVar10 = QuestStatus(7);
		if ((int)uVar10 != 0) {
			uVar12 = LoadFileInMem((ulonglong) * (uint *)(iVar9 + -0x5cd4), (undefined4 *)0x0, param_3,
			    CONCAT71(uVar15, uVar16), CONCAT71(uVar17, uVar18), uVar20, uVar22, uVar24,
			    in_stack_ffffff98);
			local_38[0] = (int *)uVar12;
			uVar13 = (undefined)(*(int *)puVar7 << 1);
			param_3 = (ulonglong)(uint)(*(int *)puVar6 << 1);
			SetMapMonsters(uVar12 & 0xffffffff, (ulonglong)(uint)(*(int *)puVar7 << 1), param_3,
			    CONCAT71(uVar15, uVar16), CONCAT71(uVar17, uVar18), uVar20, uVar22, uVar24,
			    in_stack_ffffff98);
			mem_free_dbg(local_38, uVar13, (char)param_3, uVar16, uVar18, (char)uVar20, (char)uVar22,
			    (char)uVar24, in_stack_ffffff98);
		}
		uVar10 = QuestStatus(9);
		if ((int)uVar10 != 0) {
			uVar12 = LoadFileInMem((ulonglong) * (uint *)(iVar9 + -0x5cd8), (undefined4 *)0x0, param_3,
			    CONCAT71(uVar15, uVar16), CONCAT71(uVar17, uVar18), uVar20, uVar22, uVar24,
			    in_stack_ffffff98);
			local_38[0] = (int *)uVar12;
			uVar13 = (undefined)(*(int *)puVar7 << 1);
			param_3 = (ulonglong)(uint)(*(int *)puVar6 << 1);
			SetMapMonsters(uVar12 & 0xffffffff, (ulonglong)(uint)(*(int *)puVar7 << 1), param_3,
			    CONCAT71(uVar15, uVar16), CONCAT71(uVar17, uVar18), uVar20, uVar22, uVar24,
			    in_stack_ffffff98);
			mem_free_dbg(local_38, uVar13, (char)param_3, uVar16, uVar18, (char)uVar20, (char)uVar22,
			    (char)uVar24, in_stack_ffffff98);
		}
		uVar10 = QuestStatus(8);
		if ((int)uVar10 != 0) {
			uVar12 = LoadFileInMem((ulonglong) * (uint *)(iVar9 + -0x5cdc), (undefined4 *)0x0, param_3,
			    CONCAT71(uVar15, uVar16), CONCAT71(uVar17, uVar18), uVar20, uVar22, uVar24,
			    in_stack_ffffff98);
			local_38[0] = (int *)uVar12;
			uVar13 = (undefined)(*(int *)puVar7 << 1);
			param_3 = (ulonglong)(uint)(*(int *)puVar6 << 1);
			SetMapMonsters(uVar12 & 0xffffffff, (ulonglong)(uint)(*(int *)puVar7 << 1), param_3,
			    CONCAT71(uVar15, uVar16), CONCAT71(uVar17, uVar18), uVar20, uVar22, uVar24,
			    in_stack_ffffff98);
			mem_free_dbg(local_38, uVar13, (char)param_3, uVar16, uVar18, (char)uVar20, (char)uVar22,
			    (char)uVar24, in_stack_ffffff98);
		}
		uVar10 = QuestStatus(10);
		if ((int)uVar10 != 0) {
			uVar12 = LoadFileInMem((ulonglong) * (uint *)(iVar9 + -0x5ce0), (undefined4 *)0x0, param_3,
			    CONCAT71(uVar15, uVar16), CONCAT71(uVar17, uVar18), uVar20, uVar22, uVar24,
			    in_stack_ffffff98);
			local_38[0] = (int *)uVar12;
			uVar1 = (*(int *)puVar7 + 1) * 2;
			uVar13 = (undefined)uVar1;
			param_3 = (ulonglong)(uint)((*(int *)puVar6 + 1) * 2);
			SetMapMonsters(uVar12 & 0xffffffff, (ulonglong)uVar1, param_3, CONCAT71(uVar15, uVar16),
			    CONCAT71(uVar17, uVar18), uVar20, uVar22, uVar24, in_stack_ffffff98);
			mem_free_dbg(local_38, uVar13, (char)param_3, uVar16, uVar18, (char)uVar20, (char)uVar22,
			    (char)uVar24, in_stack_ffffff98);
		}
		uVar10 = QuestStatus(0xb);
		if ((int)uVar10 != 0) {
			uVar12 = LoadFileInMem((ulonglong) * (uint *)(iVar9 + -0x5ce4), (undefined4 *)0x0, param_3,
			    CONCAT71(uVar15, uVar16), CONCAT71(uVar17, uVar18), uVar20, uVar22, uVar24,
			    in_stack_ffffff98);
			local_38[0] = (int *)uVar12;
			uVar13 = (undefined)(*(int *)puVar7 << 1);
			uVar14 = (undefined)(*(int *)puVar6 << 1);
			SetMapMonsters(uVar12 & 0xffffffff, (ulonglong)(uint)(*(int *)puVar7 << 1),
			    (ulonglong)(uint)(*(int *)puVar6 << 1), CONCAT71(uVar15, uVar16),
			    CONCAT71(uVar17, uVar18), uVar20, uVar22, uVar24, in_stack_ffffff98);
			mem_free_dbg(local_38, uVar13, uVar14, uVar16, uVar18, (char)uVar20, (char)uVar22, (char)uVar24,
			    in_stack_ffffff98);
			AddMonsterType(puVar8[0x100], 1);
		}
		uVar10 = QuestStatus(4);
		if ((int)uVar10 != 0) {
			AddMonsterType(puVar8[0xe0], 1);
		}
		uVar10 = QuestStatus(3);
		if (((int)uVar10 != 0) && (**(int **)(iVar9 + -0x70a8) == -1)) {
			puVar5[0x4a] = 0;
		}
		if ((*puVar3 == puVar5[0x168]) && (*puVar2 != '\x01')) {
			AddMonsterType(puVar8[0x80], 4);
			AddMonsterType(puVar8[0xa0], 4);
			PlaceUniqueMonst(4, 0, 0);
			PlaceUniqueMonst(5, 0, 0);
			uVar10 = 0;
			PlaceUniqueMonst(6, 0);
			uVar12 = LoadFileInMem((ulonglong) * (uint *)(iVar9 + -0x5ce8), (undefined4 *)0x0, uVar10,
			    CONCAT71(uVar15, uVar16), CONCAT71(uVar17, uVar18), uVar20, uVar22, uVar24,
			    in_stack_ffffff98);
			uVar24._3_1_ = (undefined)uVar24;
			uVar22._3_1_ = (undefined)uVar22;
			uVar20._3_1_ = (undefined)uVar20;
			local_38[0] = (int *)uVar12;
			uVar13 = (undefined)(*(int *)puVar7 << 1);
			uVar14 = (undefined)(*(int *)puVar6 << 1);
			SetMapMonsters(uVar12 & 0xffffffff, (ulonglong)(uint)(*(int *)puVar7 << 1),
			    (ulonglong)(uint)(*(int *)puVar6 << 1), CONCAT71(uVar15, uVar16),
			    CONCAT71(uVar17, uVar18), uVar20, uVar22, uVar24, in_stack_ffffff98);
			mem_free_dbg(local_38, uVar13, uVar14, uVar16, uVar18, (undefined)uVar20, (undefined)uVar22,
			    (undefined)uVar24, in_stack_ffffff98);
		}
	} else {
		if (*PTR_DAT_100f17f0 == '\x01') {
			PlaceUniqueMonst(1, 0, 0);
		}
	}
	return;
}

void PlaceGroup(int param_1, int param_2, uint param_3, int param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	undefined4 uVar1;
	undefined *puVar2;
	undefined *puVar3;
	uint uVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	int iVar8;
	ulonglong uVar9;
	longlong lVar10;
	undefined8 uVar11;
	int iVar12;
	undefined4 *puVar13;
	ulonglong uVar14;
	ulonglong uVar15;
	longlong lVar16;
	longlong lVar17;
	longlong lVar18;
	longlong lVar19;
	ulonglong uVar20;
	int iVar21;
	int iVar22;
	ulonglong uVar23;
	longlong lVar24;
	ulonglong uVar25;
	ulonglong uVar26;
	ulonglong uVar27;
	ulonglong uVar28;
	undefined4 in_stack_ffffff78;
	undefined in_stack_ffffff7f;
	undefined in_stack_ffffff8b;
	int local_58;

	iVar8 = _DAT_100f1de4;
	puVar7 = PTR_DAT_100f1a48;
	puVar6 = PTR_DAT_100f19a4;
	puVar5 = PTR_DAT_100f187c;
	lVar19 = (longlong)param_8;
	lVar18 = (longlong)param_7;
	lVar17 = (longlong)param_6;
	lVar16 = (longlong)param_5;
	uVar15 = SEXT48(param_4);
	uVar14 = SEXT48((int)param_3);
	uVar9 = ZEXT48(&toc);
	uVar23 = ZEXT48(PTR_DAT_100f187c);
	uVar20 = ZEXT48(PTR_DAT_100f1954);
	uVar4 = param_3 & 2;
	lVar24 = 0;
	puVar2 = PTR_DAT_100f187c + param_4 * 0xe8;
	local_58 = 0;
	do {
		while ((int)lVar24 != 0) {
			uVar14 = 0;
			lVar24 = lVar24 + -1;
			*(int *)puVar6 = *(int *)puVar6 + -1;
			*(undefined2 *)(*(int *)uVar20 + *(int *)(puVar5 + *(int *)puVar6 * 0xe8 + 0x20) * 0xe0 + *(int *)(puVar5 + *(int *)puVar6 * 0xe8 + 0x24) * 2) = 0;
		}
		if ((param_3 & 1) == 0) {
			do {
				lVar10 = random(0x5d, 0x50, (char)uVar14, (char)uVar15, (char)lVar16, (char)lVar17,
				    (char)lVar18, (char)lVar19, in_stack_ffffff78, in_stack_ffffff7f,
				    in_stack_ffffff8b);
				uVar25 = lVar10 + 0x10;
				lVar10 = random(0x5d, 0x50, (char)uVar14, (char)uVar15, (char)lVar16, (char)lVar17,
				    (char)lVar18, (char)lVar19, in_stack_ffffff78, in_stack_ffffff7f,
				    in_stack_ffffff8b);
				uVar27 = lVar10 + 0x10;
				uVar11 = MonstPlace((int)uVar25, (int)uVar27, (char)uVar14, (char)uVar15, (char)lVar16,
				    (char)lVar17, (char)lVar18, (char)lVar19, in_stack_ffffff78);
			} while ((int)uVar11 == 0);
		} else {
			lVar10 = random(0x5c, 8, (char)uVar14, (char)uVar15, (char)lVar16, (char)lVar17, (char)lVar18,
			    (char)lVar19, in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8b);
			iVar21 = (int)lVar10 * 4;
			uVar14 = (ulonglong) * (uint *)(iVar8 + iVar21);
			uVar15 = (ulonglong) * (uint *)(puVar2 + 0x24);
			uVar25 = (ulonglong) * (uint *)(puVar2 + 0x20) + uVar14;
			uVar27 = uVar15 + (ulonglong) * (uint *)(*(int *)((int)uVar9 + -0x71f0) + iVar21);
		}
		iVar21 = **(int **)((int)uVar9 + -0x7084);
		if (iVar21 < *(int *)puVar6 + param_2) {
			param_2 = iVar21 - *(int *)puVar6;
		}
		iVar21 = 0;
		iVar22 = 0;
		uVar26 = uVar25;
		uVar28 = uVar27;
		while ((iVar21 < param_2 && (iVar22 < 100))) {
			uVar11._4_4_ = (int)uVar26;
			iVar12 = (int)uVar28;
			uVar11 = MonstPlace(uVar11._4_4_, iVar12, (char)uVar14, (char)uVar15, (char)lVar16, (char)lVar17,
			    (char)lVar18, (char)lVar19, in_stack_ffffff78);
			if ((((int)uVar11 == 0) || (*(char *)(*(int *)puVar7 + uVar11._4_4_ * 0x70 + iVar12) != *(char *)((int)uVar25 * 0x70 + (int)uVar27 + *(int *)puVar7))) || ((uVar4 != 0 && ((lVar10 = abs(uVar26 - uVar25), 3 < (int)lVar10 || (lVar10 = abs(uVar28 - uVar27), 3 < (int)lVar10)))))) {
				iVar22 = iVar22 + 1;
			} else {
				uVar14 = uVar26;
				uVar15 = uVar28;
				PlaceMonster((ulonglong) * (uint *)puVar6, param_1, uVar11._4_4_, iVar12, (char)lVar16,
				    (char)lVar17, (char)lVar18, (char)lVar19, in_stack_ffffff78);
				if ((param_3 & 1) != 0) {
					uVar14 = uVar23 + (ulonglong) * (uint *)puVar6 * 0xe8;
					uVar11._4_4_ = (int)uVar14;
					*(int *)(uVar11._4_4_ + 0x94) = *(int *)(uVar11._4_4_ + 0x94) << 1;
					*(undefined4 *)(uVar11._4_4_ + 0x98) = *(undefined4 *)(uVar11._4_4_ + 0x94);
					*(undefined *)(uVar11._4_4_ + 0x9d) = puVar2[0x9d];
					if (uVar4 != 0) {
						*(undefined *)(uVar11._4_4_ + 0xd8) = (char)param_4;
						*(undefined *)(uVar11._4_4_ + 0xd9) = 1;
						*(undefined *)(uVar11._4_4_ + 0x9c) = puVar2[0x9c];
					}
					if (*(char *)(uVar11._4_4_ + 0x9c) != '\f') {
						puVar13 = (undefined4 *)(*(int *)(uVar11._4_4_ + 0xe0) + *(int *)(uVar11._4_4_ + 0x48) * 8 + 8);
						uVar1 = puVar13[1];
						*(undefined4 *)(uVar11._4_4_ + 0x54) = *puVar13;
						*(undefined4 *)(uVar11._4_4_ + 0x58) = uVar1;
						lVar10 = random(0x58, (ulonglong) * (uint *)(uVar11._4_4_ + 100) - 1, (char)uVar14,
						    (char)uVar15, (char)lVar16, (char)lVar17, (char)lVar18, (char)lVar19,
						    in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8b);
						puVar3 = puVar5 + *(int *)puVar6 * 0xe8;
						*(int *)(puVar3 + 0x68) = (int)lVar10 + 1;
						*(uint *)(puVar3 + 0xa0) = *(uint *)(puVar3 + 0xa0) & 0xfffffffb;
						*(undefined4 *)(puVar3 + 4) = 0;
					}
				}
				lVar24 = lVar24 + 1;
				iVar21 = iVar21 + 1;
				*(int *)puVar6 = *(int *)puVar6 + 1;
			}
			lVar10 = random(0x5e, 8, (char)uVar14, (char)uVar15, (char)lVar16, (char)lVar17, (char)lVar18,
			    (char)lVar19, in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8b);
			uVar26 = uVar26 + (ulonglong) * (uint *)(iVar8 + (int)lVar10 * 4);
			lVar10 = random(0x5e, 8, (char)uVar14, (char)uVar15, (char)lVar16, (char)lVar17, (char)lVar18,
			    (char)lVar19, in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8b);
			uVar28 = uVar28 + (ulonglong) * (uint *)(iVar8 + (int)lVar10 * 4);
		}
	} while (((int)lVar24 < param_2) && (local_58 = local_58 + 1, local_58 < 10));
	if (uVar4 != 0) {
		puVar5[param_4 * 0xe8 + 0xda] = (char)lVar24;
	}
	return;
}

void LoadDiabMonsts(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	ulonglong uVar2;
	undefined uVar3;
	ulonglong uVar4;
	undefined uVar5;
	undefined7 uVar6;
	undefined uVar7;
	undefined7 uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined4 in_stack_ffffffc8;
	int *local_8[2];

	uVar8 = (undefined7)((ulonglong)param_5 >> 8);
	uVar9 = (undefined)param_5;
	uVar6 = (undefined7)((ulonglong)param_4 >> 8);
	uVar7 = (undefined)param_4;
	ppuVar1 = &toc;
	uVar2 = LoadFileInMem((ulonglong)_DAT_100f32e4, (undefined4 *)0x0, param_3, param_4, param_5, param_6,
	    param_7, param_8, in_stack_ffffffc8);
	local_8[0] = (int *)uVar2;
	uVar3 = (undefined)(*(int *)ppuVar1[-0x1cbb] << 1);
	uVar4 = (ulonglong)(uint)(*(int *)ppuVar1[-0x1cbc] << 1);
	SetMapMonsters(uVar2 & 0xffffffff, (ulonglong)(uint)(*(int *)ppuVar1[-0x1cbb] << 1), uVar4,
	    CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9), param_6, param_7, param_8, in_stack_ffffffc8);
	mem_free_dbg(local_8, uVar3, (char)uVar4, uVar7, uVar9, (char)param_6, (char)param_7, (char)param_8,
	    in_stack_ffffffc8);
	uVar2 = LoadFileInMem(ZEXT48(ppuVar1[-0x173c]), (undefined4 *)0x0, uVar4, CONCAT71(uVar6, uVar7),
	    CONCAT71(uVar8, uVar9), param_6, param_7, param_8, in_stack_ffffffc8);
	local_8[0] = (int *)uVar2;
	uVar3 = (undefined)(*(int *)ppuVar1[-0x1cbd] << 1);
	uVar4 = (ulonglong)(uint)(*(int *)ppuVar1[-0x1cbe] << 1);
	SetMapMonsters(uVar2 & 0xffffffff, (ulonglong)(uint)(*(int *)ppuVar1[-0x1cbd] << 1), uVar4,
	    CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9), param_6, param_7, param_8, in_stack_ffffffc8);
	mem_free_dbg(local_8, uVar3, (char)uVar4, uVar7, uVar9, (char)param_6, (char)param_7, (char)param_8,
	    in_stack_ffffffc8);
	uVar2 = LoadFileInMem(ZEXT48(ppuVar1[-0x173d]), (undefined4 *)0x0, uVar4, CONCAT71(uVar6, uVar7),
	    CONCAT71(uVar8, uVar9), param_6, param_7, param_8, in_stack_ffffffc8);
	local_8[0] = (int *)uVar2;
	uVar3 = (undefined)(*(int *)ppuVar1[-0x1cbf] << 1);
	uVar4 = (ulonglong)(uint)(*(int *)ppuVar1[-0x1cc0] << 1);
	SetMapMonsters(uVar2 & 0xffffffff, (ulonglong)(uint)(*(int *)ppuVar1[-0x1cbf] << 1), uVar4,
	    CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9), param_6, param_7, param_8, in_stack_ffffffc8);
	mem_free_dbg(local_8, uVar3, (char)uVar4, uVar7, uVar9, (char)param_6, (char)param_7, (char)param_8,
	    in_stack_ffffffc8);
	uVar2 = LoadFileInMem(ZEXT48(ppuVar1[-0x173e]), (undefined4 *)0x0, uVar4, CONCAT71(uVar6, uVar7),
	    CONCAT71(uVar8, uVar9), param_6, param_7, param_8, in_stack_ffffffc8);
	uVar12 = (undefined)param_8;
	uVar11 = (undefined)param_7;
	uVar10 = (undefined)param_6;
	local_8[0] = (int *)uVar2;
	uVar3 = (undefined)(*(int *)ppuVar1[-0x1cc1] << 1);
	uVar5 = (undefined)(*(int *)ppuVar1[-0x1cc2] << 1);
	SetMapMonsters(uVar2 & 0xffffffff, (ulonglong)(uint)(*(int *)ppuVar1[-0x1cc1] << 1),
	    (ulonglong)(uint)(*(int *)ppuVar1[-0x1cc2] << 1), CONCAT71(uVar6, uVar7),
	    CONCAT71(uVar8, uVar9), param_6, param_7, param_8, in_stack_ffffffc8);
	mem_free_dbg(local_8, uVar3, uVar5, uVar7, uVar9, uVar10, uVar11, uVar12, in_stack_ffffffc8);
	return;
}

void InitMonsters(ulonglong param_1, longlong param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	int *piVar1;
	uint uVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	ulonglong uVar7;
	ulonglong uVar8;
	undefined uVar9;
	undefined uVar12;
	int iVar10;
	int iVar11;
	undefined uVar13;
	undefined uVar15;
	longlong lVar14;
	longlong lVar16;
	undefined8 unaff_r21;
	longlong lVar17;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	uint *puVar18;
	uint *puVar19;
	undefined8 unaff_r25;
	int iVar20;
	undefined8 unaff_r26;
	longlong lVar21;
	longlong lVar22;
	undefined8 unaff_r27;
	int iVar23;
	undefined8 unaff_r28;
	longlong lVar24;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_fffffdd8;
	undefined in_stack_fffffddf;
	undefined in_stack_fffffdeb;
	undefined4 in_stack_fffffdf0;
	int local_1f8[115];
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

	puVar6 = PTR_DAT_100f1f4c;
	puVar19 = (uint *)PTR_DAT_100f1edc;
	puVar5 = PTR_DAT_100f19a4;
	puVar4 = PTR_DAT_100f17f8;
	puVar3 = PTR_DAT_100f17ec;
	lVar16 = (longlong)param_8;
	lVar24 = (longlong)param_7;
	lVar22 = (longlong)param_6;
	uVar7 = ZEXT48(&toc);
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
	lVar21 = 0;
	if (*PTR_DAT_100f17f8 == '\0') {
		AddMonster(1, 0, 0, 0, 0, (char)param_6, (char)param_7, (char)param_8, in_stack_fffffdd8);
		AddMonster(1, 0, 0, 0, 0, (char)lVar22, (char)lVar24, (char)lVar16, in_stack_fffffdd8);
		AddMonster(1, 0, 0, 0, 0, (char)lVar22, (char)lVar24, (char)lVar16, in_stack_fffffdd8);
		param_2 = 0;
		param_3 = 0;
		param_4 = 0;
		param_5 = 0;
		param_1 = AddMonster(1, 0, 0, 0, 0, (char)lVar22, (char)lVar24, (char)lVar16, in_stack_fffffdd8);
	}
	if ((*puVar4 == '\0') && (*puVar3 == '\x10')) {
		LoadDiabMonsts(param_1, param_2, param_3, param_4, param_5, (int)lVar22, (int)lVar24, (int)lVar16,
		    in_stack_fffffdd8);
	}
	piVar1 = *(int **)((int)uVar7 + -0x70f8);
	uVar8 = ZEXT48(piVar1);
	iVar23 = *piVar1;
	if (*puVar3 == '\x0f') {
		iVar23 = 1;
	}
	iVar10 = 0;
	puVar18 = puVar19;
	while (true) {
		uVar15 = (undefined)param_4;
		uVar13 = (undefined)param_3;
		uVar12 = (undefined)param_2;
		if (iVar23 <= iVar10)
			break;
		lVar14 = -2;
		do {
			lVar17 = -2;
			do {
				param_3 = 0xf;
				param_4 = 0;
				param_2 = lVar17 + (ulonglong)puVar18[1];
				param_5 = 0;
				uVar8 = DoVision(lVar14 + (ulonglong)*puVar18, param_2, 0xf, 0, 0, (char)lVar22, (char)lVar24,
				    (char)lVar16, in_stack_fffffdd8, in_stack_fffffddf, in_stack_fffffdf0);
				lVar17 = lVar17 + 1;
			} while ((int)lVar17 < 2);
			lVar14 = lVar14 + 1;
		} while ((int)lVar14 < 2);
		puVar18 = puVar18 + 4;
		iVar10 = iVar10 + 1;
	}
	uVar9 = PlaceQuestMonsters(uVar8, param_2, param_3, param_4, param_5, (int)lVar22, (int)lVar24, (int)lVar16,
	    in_stack_fffffdd8);
	if (*puVar4 == '\0') {
		PlaceUniques(uVar9, uVar12, uVar13, uVar15, (char)param_5, (char)lVar22, (char)lVar24, (char)lVar16,
		    in_stack_fffffdd8);
		iVar10 = 0;
		iVar11 = 0x10;
		do {
			iVar20 = 0x10;
			do {
				uVar8 = SolidLoc(iVar11, iVar20);
				if ((int)uVar8 == 0) {
					iVar10 = iVar10 + 1;
				}
				iVar20 = iVar20 + 1;
			} while (iVar20 < 0x60);
			iVar11 = iVar11 + 1;
		} while (iVar11 < 0x60);
		iVar11 = (int)uVar7;
		uVar2 = iVar10 / 0x1e + (iVar10 >> 0x1f);
		iVar10 = uVar2 + (uVar2 >> 0x1f);
		if (**(char **)(iVar11 + -0x77f0) != '\x01') {
			iVar10 = iVar10 + (iVar10 >> 1);
		}
		iVar20 = *(int *)puVar5;
		if (0xbe < iVar10 + iVar20) {
			iVar10 = 0xbe - iVar20;
		}
		puVar18 = *(uint **)(iVar11 + -0x7618);
		*(int *)puVar6 = iVar20 + iVar10;
		uVar8 = (ulonglong) * (uint *)(iVar11 + -0x7610);
		lVar14 = 0;
		uVar7 = (ulonglong)*puVar18;
		if (0 < (int)*puVar18) {
			do {
				if ((*(byte *)((int)uVar8 + 1) & 1) != 0) {
					iVar10 = (int)lVar21;
					lVar21 = lVar21 + 1;
					local_1f8[iVar10] = (int)lVar14;
				}
				uVar8 = uVar8 + 0x208;
				lVar14 = lVar14 + 1;
				uVar7 = uVar7 - 1;
			} while (uVar7 != 0);
		}
		while (true) {
			uVar13 = (undefined)lVar14;
			uVar12 = (undefined)uVar8;
			if (*(int *)puVar6 <= *(int *)puVar5)
				break;
			lVar14 = random(0x5f, lVar21, uVar12, uVar13, (char)param_5, (char)lVar22, (char)lVar24,
			    (char)lVar16, in_stack_fffffdd8, in_stack_fffffddf, in_stack_fffffdeb);
			iVar10 = local_1f8[(int)lVar14];
			if ((*puVar3 == '\x01') || (lVar14 = random(0x5f, 2, uVar12, uVar13, (char)param_5, (char)lVar22, (char)lVar24, (char)lVar16, in_stack_fffffdd8, in_stack_fffffddf, in_stack_fffffdeb), (int)lVar14 == 0)) {
				iVar11 = 1;
			} else {
				if (*puVar3 == '\x02') {
					lVar14 = random(0x5f, 2, uVar12, uVar13, (char)param_5, (char)lVar22, (char)lVar24,
					    (char)lVar16, in_stack_fffffdd8, in_stack_fffffddf, in_stack_fffffdeb);
					iVar11 = (int)lVar14 + 2;
				} else {
					lVar14 = random(0x5f, 3, uVar12, uVar13, (char)param_5, (char)lVar22, (char)lVar24,
					    (char)lVar16, in_stack_fffffdd8, in_stack_fffffddf, in_stack_fffffdeb);
					iVar11 = (int)lVar14 + 3;
				}
			}
			uVar8 = 0;
			lVar14 = 0;
			PlaceGroup(iVar10, iVar11, 0, 0, (char)param_5, (char)lVar22, (char)lVar24, (char)lVar16,
			    in_stack_fffffdd8);
		}
	}
	iVar10 = 0;
	while (iVar10 < iVar23) {
		lVar22 = -2;
		do {
			lVar24 = -2;
			do {
				DoUnVision(lVar22 + (ulonglong)*puVar19, lVar24 + (ulonglong)puVar19[1], 0xf);
				lVar24 = lVar24 + 1;
			} while ((int)lVar24 < 2);
			lVar22 = lVar22 + 1;
		} while ((int)lVar22 < 2);
		puVar19 = puVar19 + 4;
		iVar10 = iVar10 + 1;
	}
	return;
}

void SetMapMonsters(longlong param_1, longlong param_2, longlong param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	uint uVar1;
	short sVar2;
	undefined *puVar3;
	int iVar4;
	int iVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined **ppuVar8;
	ulonglong uVar9;
	longlong lVar10;
	longlong lVar11;
	ulonglong uVar12;
	longlong lVar13;
	undefined8 uVar14;
	longlong lVar15;
	longlong lVar16;
	longlong lVar17;
	longlong lVar18;
	short *psVar19;
	longlong lVar20;
	longlong lVar21;
	undefined4 in_stack_ffffff98;

	puVar3 = PTR_DAT_100f1f44;
	puVar7 = PTR_DAT_100f1f24;
	puVar6 = PTR_DAT_100f19a4;
	lVar17 = (longlong)param_8;
	lVar16 = (longlong)param_7;
	lVar15 = (longlong)param_6;
	ppuVar8 = &toc;
	uVar9 = FUN_100b8f7c(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffff98);
	AddMonsterType(0x6d, 2);
	AddMonster(1, 0, 0, 0, 0, (char)lVar15, (char)lVar16, (char)lVar17, in_stack_ffffff98);
	AddMonster(1, 0, 0, 0, 0, (char)lVar15, (char)lVar16, (char)lVar17, in_stack_ffffff98);
	AddMonster(1, 0, 0, 0, 0, (char)lVar15, (char)lVar16, (char)lVar17, in_stack_ffffff98);
	lVar13 = 0;
	uVar14 = 0;
	AddMonster(1, 0, 0, 0, 0, (char)lVar15, (char)lVar16, (char)lVar17, in_stack_ffffff98);
	if ((*ppuVar8[-0x1df6] != '\0') && (*ppuVar8[-0x1df8] == '\x05')) {
		AddMonsterType(puVar3[0x80], 4);
		AddMonsterType(puVar3[0xa0], 4);
		AddMonsterType(puVar3[0xc0], 4);
		PlaceUniqueMonst(4, 0, 0);
		PlaceUniqueMonst(5, 0, 0);
		PlaceUniqueMonst(6, 0, 0);
	}
	puVar3 = (undefined *)uVar9;
	sVar2 = CONCAT11(puVar3[1], *puVar3);
	lVar11 = (longlong)sVar2;
	uVar1 = (int)sVar2 & 0xffff;
	uVar12 = (ulonglong)uVar1;
	iVar4 = ((int)sVar2 & 0x7fffU) * 2;
	iVar5 = ((int)CONCAT11(puVar3[3], puVar3[2]) & 0x7fffU) * 2;
	lVar18 = uVar9 + 4 + (ulonglong)(uVar1 * ((int)CONCAT11(puVar3[3], puVar3[2]) & 0xffffU) * 2) + (ulonglong)(uint)(iVar4 * iVar5 * 2);
	lVar20 = 0;
	while ((int)lVar20 < iVar5) {
		lVar10 = lVar20 + param_3 + 0x10;
		lVar21 = 0;
		while ((int)lVar21 < iVar4) {
			psVar19 = (short *)lVar18;
			if (*psVar19 != 0) {
				lVar11 = AddMonsterType(puVar7[(int)CONCAT11(*(undefined *)((int)psVar19 + 1),
				                                 *(undefined *)psVar19)
				                          + -1],
				    2);
				uVar1 = *(uint *)puVar6;
				uVar12 = lVar21 + param_2 + 0x10;
				*(uint *)puVar6 = uVar1 + 1;
				lVar13 = lVar10;
				PlaceMonster((ulonglong)uVar1, (int)lVar11, (int)uVar12, (int)lVar10, (char)uVar14, (char)lVar15,
				    (char)lVar16, (char)lVar17, in_stack_ffffff98);
			}
			lVar18 = lVar18 + 2;
			lVar21 = lVar21 + 1;
		}
		lVar20 = lVar20 + 1;
	}
	FUN_100b9100((int)param_1, (char)lVar11, (char)uVar12, (char)lVar13, (char)uVar14, (char)lVar15,
	    (char)lVar16, (char)lVar17, in_stack_ffffff98);
	return;
}

void DeleteMonster(int param_1)

{
	int iVar1;
	undefined4 uVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined4 *puVar5;

	puVar4 = PTR_DAT_100f19a8;
	puVar3 = PTR_DAT_100f19a4;
	iVar1 = *(int *)PTR_DAT_100f19a4;
	puVar5 = (undefined4 *)(PTR_DAT_100f19a8 + param_1 * 4);
	*(int *)PTR_DAT_100f19a4 = iVar1 + -1;
	uVar2 = *(undefined4 *)(puVar4 + (iVar1 + -1) * 4);
	*(undefined4 *)(puVar4 + *(int *)puVar3 * 4) = *puVar5;
	*puVar5 = uVar2;
	return;
}

ulonglong AddMonster(int param_1, int param_2, int param_3, int param_4, int param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	int iVar1;
	uint uVar2;
	undefined *puVar3;
	undefined *puVar4;
	ulonglong uVar5;
	undefined4 in_stack_ffffffc8;

	puVar4 = PTR_DAT_100f19a8;
	puVar3 = PTR_DAT_100f19a4;
	iVar1 = *(int *)PTR_DAT_100f19a4;
	if (iVar1 < 200) {
		*(int *)PTR_DAT_100f19a4 = iVar1 + 1;
		uVar2 = *(uint *)(puVar4 + iVar1 * 4);
		uVar5 = (ulonglong)uVar2;
		if (param_5 != 0) {
			*(short *)(*(int *)PTR_DAT_100f1954 + param_1 * 0xe0 + param_2 * 2) = (short)uVar2 + 1;
		}
		InitMonster(uVar2, param_3, param_4, param_1, param_2, (char)puVar3, (char)param_2, (char)param_1,
		    in_stack_ffffffc8);
	} else {
		uVar5 = 0xffffffffffffffff;
	}
	return uVar5;
}

void NewMonsterAnim(int param_1, int param_2, int param_3)

{
	undefined4 uVar1;
	int iVar2;
	undefined *puVar3;

	iVar2 = param_2 + param_3 * 8;
	uVar1 = *(undefined4 *)(iVar2 + 8);
	puVar3 = PTR_DAT_100f187c + param_1 * 0xe8;
	*(undefined4 *)(puVar3 + 0x54) = *(undefined4 *)(iVar2 + 4);
	*(undefined4 *)(puVar3 + 0x58) = uVar1;
	*(undefined4 *)(puVar3 + 100) = *(undefined4 *)(param_2 + 0x44);
	*(undefined4 *)(puVar3 + 0x68) = 1;
	*(undefined4 *)(puVar3 + 0x60) = 0;
	*(undefined4 *)(puVar3 + 0x5c) = *(undefined4 *)(param_2 + 0x48);
	*(int *)(puVar3 + 0x48) = param_3;
	*(uint *)(puVar3 + 0xa0) = *(uint *)(puVar3 + 0xa0) & 0xfffffff9;
	return;
}

undefined8 M_Ranged(int param_1)

{
	char cVar1;

	cVar1 = PTR_DAT_100f187c[param_1 * 0xe8 + 0x9c];
	if ((((cVar1 != '\x03') && (cVar1 != '\a')) && (cVar1 != '\x0e')) && (cVar1 != '\x1d')) {
		return 0;
	}
	return 1;
}

undefined8 M_Talker(int param_1)

{
	char cVar1;

	cVar1 = PTR_DAT_100f187c[param_1 * 0xe8 + 0x9c];
	if ((((cVar1 != '\x1c') && (cVar1 != '\x12')) && (1 < (byte)(cVar1 - 0x16U))) && (2 < (byte)(cVar1 - 0x1dU))) {
		return 0;
	}
	return 1;
}

void M_Enemy(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	int iVar2;
	uint uVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined8 uVar8;
	ulonglong uVar9;
	undefined **ppuVar10;
	longlong lVar11;
	longlong lVar12;
	uint *puVar13;
	undefined *puVar14;
	int *piVar15;
	undefined *puVar16;
	int iVar17;
	undefined *puVar18;
	ulonglong unaff_r27;
	ulonglong unaff_r28;
	uint uVar19;
	longlong lVar20;
	int iVar21;

	puVar7 = PTR_DAT_100f1a48;
	puVar6 = PTR_DAT_100f19a4;
	puVar5 = PTR_DAT_100f187c;
	puVar4 = PTR_DAT_100f17ec;
	puVar14 = PTR_DAT_100f17e0;
	uVar9 = ZEXT48(&toc);
	ppuVar10 = &toc;
	iVar21 = -1;
	lVar20 = -1;
	uVar19 = 0;
	puVar18 = PTR_DAT_100f187c + param_1 * 0xe8;
	if ((*(uint *)(puVar18 + 0xa0) & 0x20) == 0) {
		iVar17 = 0;
		puVar16 = PTR_DAT_100f1828;
		do {
			if ((((puVar16[0x1d] != '\0') && ((uint)(byte)*puVar4 == *(uint *)(puVar16 + 0x34))) && (puVar16[0x13b] == '\0')) && ((*(int *)(puVar16 + 0x194) != 0 || (*puVar14 == '\x01')))) {
				iVar1 = *(int *)puVar7;
				uVar8 = countLeadingZeros((int)*(char *)(iVar1 + *(int *)(puVar16 + 0x38) * 0x70 + *(uint *)(puVar16 + 0x3c)) - (int)*(char *)(iVar1 + *(int *)(puVar18 + 0x20) * 0x70 + *(uint *)(puVar18 + 0x24)));
				uVar3 = (uint)uVar8 >> 5 & 0xff;
				lVar11 = abs((ulonglong) * (uint *)(puVar18 + 0x24) - (ulonglong) * (uint *)(puVar16 + 0x3c));
				lVar12 = abs((ulonglong) * (uint *)(puVar18 + 0x20) - (ulonglong) * (uint *)(puVar16 + 0x38));
				if ((int)lVar11 < (int)lVar12) {
					lVar11 = abs((ulonglong) * (uint *)(puVar18 + 0x20) - (ulonglong) * (uint *)(puVar16 + 0x38));
				} else {
					lVar11 = abs((ulonglong) * (uint *)(puVar18 + 0x24) - (ulonglong) * (uint *)(puVar16 + 0x3c));
				}
				if ((((uVar3 != 0) && (uVar19 == 0)) || (((uVar3 != 0 || (uVar19 == 0)) && ((int)lVar11 < (int)lVar20)))) || (iVar21 == -1)) {
					*(uint *)(puVar18 + 0xa0) = *(uint *)(puVar18 + 0xa0) & 0xffffffef;
					unaff_r28 = (ulonglong)(*(uint *)(puVar16 + 0x40) & 0xff);
					unaff_r27 = (ulonglong)(*(uint *)(puVar16 + 0x44) & 0xff);
					lVar20 = lVar11;
					uVar19 = uVar3;
					iVar21 = iVar17;
				}
			}
			ppuVar10 = (undefined **)uVar9;
			iVar17 = iVar17 + 1;
			puVar16 = puVar16 + 0x55ec;
		} while (iVar17 < 4);
	}
	piVar15 = (int *)ppuVar10[-0x1d8a];
	iVar17 = 0;
	do {
		if (*(int *)puVar6 <= iVar17) {
			if (iVar21 == -1) {
				*(uint *)(puVar18 + 0xa0) = *(uint *)(puVar18 + 0xa0) | 0x400;
			} else {
				*(int *)(puVar18 + 0x4c) = iVar21;
				puVar18[0x50] = (char)unaff_r28;
				puVar18[0x51] = (char)unaff_r27;
				*(uint *)(puVar18 + 0xa0) = *(uint *)(puVar18 + 0xa0) & 0xfffffbff;
			}
			return;
		}
		iVar1 = *piVar15;
		if (iVar1 != param_1) {
			puVar14 = puVar5 + iVar1 * 0xe8;
			puVar13 = (uint *)(puVar14 + 0x20);
			if ((*(int *)(puVar14 + 0x20) != 1) || (*(int *)(puVar14 + 0x24) != 0)) {
				uVar8 = M_Talker(iVar1);
				if ((int)uVar8 != 0) {
					if (*(int *)(puVar14 + 0xd4) != 0)
						goto LAB_1006b59c;
				}
				if ((*(uint *)(puVar18 + 0xa0) & 0x20) == 0) {
					lVar11 = abs((ulonglong)*puVar13 - (ulonglong) * (uint *)(puVar18 + 0x20));
					if ((int)lVar11 < 2) {
						lVar11 = abs((ulonglong) * (uint *)(puVar14 + 0x24) - (ulonglong) * (uint *)(puVar18 + 0x24));
						if ((int)lVar11 < 2)
							goto LAB_1006b4a0;
					}
					uVar8 = M_Ranged(param_1);
					if ((int)uVar8 == 0)
						goto LAB_1006b59c;
				}
			LAB_1006b4a0:
				if (((*(uint *)(puVar18 + 0xa0) & 0x20) != 0) || ((*(uint *)(puVar14 + 0xa0) & 0x20) != 0)) {
					iVar2 = *(int *)puVar7;
					uVar8 = countLeadingZeros((int)*(char *)(iVar2 + *puVar13 * 0x70 + *(uint *)(puVar14 + 0x24)) - (int)*(char *)(iVar2 + *(int *)(puVar18 + 0x20) * 0x70 + *(uint *)(puVar18 + 0x24)));
					uVar3 = (uint)uVar8 >> 5 & 0xff;
					lVar11 = abs((ulonglong) * (uint *)(puVar18 + 0x24) - (ulonglong) * (uint *)(puVar14 + 0x24));
					lVar12 = abs((ulonglong) * (uint *)(puVar18 + 0x20) - (ulonglong)*puVar13);
					if ((int)lVar11 < (int)lVar12) {
						lVar11 = abs((ulonglong) * (uint *)(puVar18 + 0x20) - (ulonglong)*puVar13);
					} else {
						lVar11 = abs((ulonglong) * (uint *)(puVar18 + 0x24) - (ulonglong) * (uint *)(puVar14 + 0x24));
					}
					if ((((uVar3 != 0) && (uVar19 == 0)) || (((uVar3 != 0 || (uVar19 == 0)) && ((int)lVar11 < (int)lVar20)))) || (iVar21 == -1)) {
						*(uint *)(puVar18 + 0xa0) = *(uint *)(puVar18 + 0xa0) | 0x10;
						unaff_r28 = (ulonglong)(*(uint *)(puVar14 + 0x28) & 0xff);
						unaff_r27 = (ulonglong)(*(uint *)(puVar14 + 0x2c) & 0xff);
						lVar20 = lVar11;
						uVar19 = uVar3;
						iVar21 = iVar1;
					}
				}
			}
		}
	LAB_1006b59c:
		piVar15 = piVar15 + 1;
		iVar17 = iVar17 + 1;
	} while (true);
}

void M_GetDir(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f187c + param_1 * 0xe8;
	GetDirection((ulonglong) * (uint *)(puVar1 + 0x20), *(int *)(puVar1 + 0x24),
	    (ulonglong)(byte)puVar1[0x50], (uint)(byte)puVar1[0x51]);
	return;
}

void M_CheckEFlag(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	ulonglong uVar2;
	undefined **ppuVar3;
	longlong lVar4;
	longlong lVar5;
	undefined *puVar6;
	int iVar7;

	puVar1 = PTR_DAT_100f187c;
	ppuVar3 = &toc;
	param_1 = param_1 * 0xe8;
	puVar6 = PTR_DAT_100f187c + param_1;
	lVar5 = (ulonglong) * (uint *)(puVar6 + 0x20) - 1;
	iVar7 = *(int *)(puVar6 + 0x24) + 1;
	if (iRam100fb824 == 0) {
		uVar2 = (ulonglong) * (uint *)PTR_DAT_100f1a50 + lVar5 * 0xe00 + (ulonglong)(uint)(iVar7 * 0x20);
		uVar2._4_4_ = (uint)uVar2;
		if ((uVar2 & 0xffffffff) < (ulonglong) * (uint *)PTR_DAT_100f1a50) {
			*(undefined4 *)(puVar6 + 0x6c) = 0;
			return;
		}
	} else {
		ppuVar3 = &toc;
		lVar4 = IsometricCoord(lVar5, iVar7);
		uVar2._4_4_ = *(uint *)ppuVar3[-0x1d61] + (int)lVar4 * 0x20;
		if (uVar2._4_4_ < *(uint *)ppuVar3[-0x1d61]) {
			*(undefined4 *)(puVar6 + 0x6c) = 0;
			return;
		}
	}
	if (((ulonglong)(ushort)(*(ushort *)(uVar2._4_4_ + 4) | *(ushort *)(uVar2._4_4_ + 6) | *(ushort *)(uVar2._4_4_ + 8) | *(ushort *)(uVar2._4_4_ + 10) | *(ushort *)(uVar2._4_4_ + 0xc) | *(ushort *)(uVar2._4_4_ + 0xe) | *(ushort *)(uVar2._4_4_ + 0x10) | *(ushort *)(uVar2._4_4_ + 0x12)) | (longlong) * (char *)(*(int *)ppuVar3[-0x1d66] + (int)lVar5 * 0x70 + iVar7)) == 0) {
		*(undefined4 *)(puVar1 + param_1 + 0x6c) = 0;
	} else {
		*(undefined4 *)(puVar1 + param_1 + 0x6c) = 1;
	}
	return;
}

void M_StartStand(int param_1, int param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	char *pcVar1;
	int iVar2;
	int iVar3;
	undefined *puVar4;
	undefined uVar5;
	longlong lVar6;
	undefined uVar7;
	longlong lVar8;
	ulonglong uVar9;
	undefined4 in_stack_ffffffb8;

	puVar4 = PTR_DAT_100f187c;
	uVar9 = ZEXT48(PTR_DAT_100f187c);
	ClearMVars(param_1);
	lVar8 = (longlong)param_1 * 0xe8;
	pcVar1 = *(char **)(puVar4 + (int)lVar8 + 0xe0);
	if (*pcVar1 == 'm') {
		NewMonsterAnim(param_1, (int)(pcVar1 + 0x50), param_2);
	} else {
		NewMonsterAnim(param_1, (int)(pcVar1 + 4), param_2);
	}
	lVar6 = uVar9 + lVar8;
	lVar8 = uVar9 + lVar8;
	iVar2 = (int)lVar6;
	iVar3 = (int)lVar8;
	*(undefined4 *)(iVar3 + 0x74) = *(undefined4 *)(iVar2 + 4);
	*(undefined4 *)(iVar3 + 0x78) = 0;
	*(undefined4 *)(iVar2 + 4) = 0;
	*(undefined4 *)(iVar3 + 0x38) = 0;
	*(undefined4 *)(iVar3 + 0x3c) = 0;
	*(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(iVar3 + 0x20);
	*(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(iVar3 + 0x24);
	*(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(iVar3 + 0x20);
	*(undefined4 *)(iVar3 + 0x34) = *(undefined4 *)(iVar3 + 0x24);
	*(int *)(iVar3 + 0x48) = param_2;
	uVar5 = (undefined)lVar8;
	uVar7 = (undefined)lVar6;
	M_CheckEFlag(param_1, uVar5, uVar7, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	M_Enemy(param_1, uVar5, uVar7, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	return;
}

void M_StartDelay(int param_1, int param_2)

{
	undefined *puVar1;

	if (param_2 < 1) {
		return;
	}
	puVar1 = PTR_DAT_100f187c + param_1 * 0xe8;
	if (puVar1[0x9c] == '\x1c') {
		return;
	}
	*(int *)(puVar1 + 0x78) = param_2;
	*(undefined4 *)(puVar1 + 4) = 0xd;
	return;
}

void M_StartSpStand(int param_1, int param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined uVar2;
	longlong lVar1;
	undefined uVar3;
	undefined *puVar4;
	undefined4 in_stack_ffffffb8;

	uVar2 = (undefined)param_2;
	puVar4 = PTR_DAT_100f187c + param_1 * 0xe8;
	uVar3 = (undefined) * (uint *)(puVar4 + 0xe0);
	lVar1 = (ulonglong) * (uint *)(puVar4 + 0xe0) + 0x180;
	lVar1._7_1_ = (undefined)lVar1;
	NewMonsterAnim(param_1, (int)lVar1, param_2);
	*(undefined4 *)(puVar4 + 4) = 0xb;
	*(undefined4 *)(puVar4 + 0x38) = 0;
	*(undefined4 *)(puVar4 + 0x3c) = 0;
	*(undefined4 *)(puVar4 + 0x28) = *(undefined4 *)(puVar4 + 0x20);
	*(undefined4 *)(puVar4 + 0x2c) = *(undefined4 *)(puVar4 + 0x24);
	*(undefined4 *)(puVar4 + 0x30) = *(undefined4 *)(puVar4 + 0x20);
	*(undefined4 *)(puVar4 + 0x34) = *(undefined4 *)(puVar4 + 0x24);
	*(int *)(puVar4 + 0x48) = param_2;
	M_CheckEFlag(param_1, (undefined)lVar1, uVar2, uVar3, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	return;
}

void M_StartWalk(longlong param_1, undefined4 param_2, undefined4 param_3, int param_4, int param_5,
    int param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	int iVar12;
	int iVar13;
	undefined4 in_stack_ffffffb8;

	uVar8 = (undefined)param_6;
	uVar7 = (undefined)param_5;
	uVar6 = (undefined)param_4;
	iVar4 = (int)param_1;
	iVar12 = iVar4 * 0xe8;
	uVar11 = (undefined)(-1 - param_1);
	puVar1 = PTR_DAT_100f187c + iVar12;
	puVar2 = PTR_DAT_100f187c + iVar12;
	puVar3 = PTR_DAT_100f187c + iVar12;
	uVar10 = (undefined) * (int *)PTR_DAT_100f1954;
	iVar12 = param_4 + *(int *)(puVar1 + 0x20);
	iVar13 = param_5 + *(int *)(puVar2 + 0x24);
	*(undefined2 *)(*(int *)PTR_DAT_100f1954 + iVar12 * 0xe0 + iVar13 * 2) = (short)(-1 - param_1);
	*(undefined4 *)(puVar3 + 4) = 1;
	*(undefined4 *)(puVar3 + 0x30) = *(undefined4 *)(puVar1 + 0x20);
	*(undefined4 *)(puVar3 + 0x34) = *(undefined4 *)(puVar2 + 0x24);
	*(int *)(puVar3 + 0x28) = iVar12;
	*(int *)(puVar3 + 0x2c) = iVar13;
	*(undefined4 *)(puVar3 + 0x40) = param_2;
	*(undefined4 *)(puVar3 + 0x44) = param_3;
	*(int *)(puVar3 + 0x74) = param_4;
	*(int *)(puVar3 + 0x78) = param_5;
	*(int *)(puVar3 + 0x7c) = param_6;
	*(int *)(puVar3 + 0x48) = param_6;
	uVar5 = (undefined)((ulonglong) * (uint *)(puVar3 + 0xe0) + 0x50);
	uVar9 = uVar8;
	NewMonsterAnim(iVar4, (int)((ulonglong) * (uint *)(puVar3 + 0xe0) + 0x50), param_6);
	*(undefined4 *)(puVar3 + 0x88) = 0;
	*(undefined4 *)(puVar3 + 0x8c) = 0;
	*(undefined4 *)(puVar3 + 0x90) = 0;
	M_CheckEFlag(iVar4, uVar5, uVar8, uVar6, uVar7, uVar9, uVar10, uVar11, in_stack_ffffffb8);
	return;
}

void M_StartWalk2(undefined8 param_1, undefined4 param_2, undefined4 param_3, int param_4, int param_5,
    int param_6, int param_7, int param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	int iVar5;
	int iVar6;
	undefined *puVar7;
	longlong lVar8;
	undefined4 uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	longlong lVar14;
	int iVar15;
	undefined uVar16;
	undefined uVar17;
	undefined uVar18;
	undefined4 in_stack_ffffff98;

	puVar7 = PTR_DAT_100f1954;
	puVar4 = PTR_DAT_100f187c;
	uVar11 = (undefined)param_8;
	uVar13 = (undefined)param_5;
	uVar12 = (undefined)param_4;
	iVar6 = (int)param_1;
	iVar5 = iVar6 * 0xe8;
	puVar1 = PTR_DAT_100f187c + iVar5;
	puVar2 = PTR_DAT_100f187c + iVar5;
	lVar8 = (longlong)param_6 + (ulonglong) * (uint *)(puVar1 + 0x20);
	lVar14 = (longlong)param_7 + (ulonglong) * (uint *)(puVar2 + 0x24);
	uVar16 = (undefined)lVar14;
	puVar3 = PTR_DAT_100f187c + iVar5;
	*(short *)(*(int *)PTR_DAT_100f1954 + *(uint *)(puVar1 + 0x20) * 0xe0 + *(uint *)(puVar2 + 0x24) * 2) = -1 - (short)param_1;
	iVar15 = (int)lVar14;
	*(undefined4 *)(puVar3 + 0x74) = *(undefined4 *)(puVar1 + 0x20);
	lVar14 = lVar8 * 0xe0 + (ulonglong)(uint)(iVar15 << 1);
	uVar17 = (undefined)lVar14;
	*(undefined4 *)(puVar3 + 0x78) = *(undefined4 *)(puVar2 + 0x24);
	*(undefined4 *)(puVar3 + 0x30) = *(undefined4 *)(puVar1 + 0x20);
	*(undefined4 *)(puVar3 + 0x34) = *(undefined4 *)(puVar2 + 0x24);
	uVar9 = (undefined4)lVar8;
	*(undefined4 *)(puVar1 + 0x20) = uVar9;
	*(int *)(puVar2 + 0x24) = iVar15;
	*(undefined4 *)(puVar3 + 0x28) = uVar9;
	*(int *)(puVar3 + 0x2c) = iVar15;
	*(short *)(*(int *)puVar7 + (int)lVar14) = (short)param_1 + 1;
	uVar18 = uVar11;
	if (puVar3[0xc0] != '\0') {
		uVar18 = uVar11;
		ChangeLightXY((uint)(byte)puVar3[0xdb], *(undefined4 *)(puVar1 + 0x20), *(int *)(puVar2 + 0x24));
	}
	puVar4 = puVar4 + iVar5;
	*(int *)(puVar4 + 0x38) = param_4;
	*(int *)(puVar4 + 0x3c) = param_5;
	*(undefined4 *)(puVar4 + 4) = 2;
	*(undefined4 *)(puVar4 + 0x40) = param_2;
	*(undefined4 *)(puVar4 + 0x44) = param_3;
	*(int *)(puVar4 + 0x7c) = param_8;
	*(int *)(puVar4 + 0x48) = param_8;
	uVar10 = (undefined)((ulonglong) * (uint *)(puVar4 + 0xe0) + 0x50);
	NewMonsterAnim(iVar6, (int)((ulonglong) * (uint *)(puVar4 + 0xe0) + 0x50), param_8);
	*(int *)(puVar4 + 0x88) = param_4 << 4;
	*(int *)(puVar4 + 0x8c) = param_5 << 4;
	*(undefined4 *)(puVar4 + 0x90) = 0;
	M_CheckEFlag(iVar6, uVar10, uVar11, uVar12, uVar13, uVar16, uVar17, uVar18, in_stack_ffffff98);
	return;
}

void M_StartWalk3(undefined8 param_1, undefined4 param_2, undefined4 param_3, int param_4, int param_5,
    int param_6, int param_7, int param_8, undefined4 param_9, undefined param_10,
    uint param_11, int param_12)

{
	int *piVar1;
	uint *puVar2;
	uint *puVar3;
	undefined *puVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	undefined *puVar8;
	undefined **ppuVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	short sVar13;
	undefined uVar14;
	undefined uVar15;
	undefined uVar16;
	undefined uVar17;
	longlong lVar18;
	undefined4 uVar19;
	longlong lVar20;
	undefined4 uVar21;
	undefined4 in_stack_ffffff88;

	puVar8 = PTR_DAT_100f1954;
	puVar4 = PTR_DAT_100f187c;
	uVar16 = (undefined)param_8;
	uVar15 = (undefined)param_7;
	ppuVar9 = &toc;
	iVar7 = (int)param_1;
	iVar6 = iVar7 * 0xe8;
	puVar2 = (uint *)(PTR_DAT_100f187c + iVar6 + 0x20);
	puVar3 = (uint *)(PTR_DAT_100f187c + iVar6 + 0x24);
	param_6 = param_6 + *puVar2;
	uVar17 = (undefined)param_12;
	lVar18 = (ulonglong)param_11 + (ulonglong)*puVar3;
	param_7 = param_7 + *puVar3;
	lVar20 = (longlong)param_8 + (ulonglong)*puVar2;
	uVar21 = (undefined4)lVar20;
	uVar19 = (undefined4)lVar18;
	if ((PTR_DAT_100f187c + iVar6)[0xc0] != '\0') {
		ppuVar9 = &toc;
		ChangeLightXY((uint)(byte)(PTR_DAT_100f187c + iVar6)[0xdb], uVar21, uVar19);
	}
	sVar13 = -1 - (short)param_1;
	puVar4 = puVar4 + iVar6;
	piVar1 = (int *)ppuVar9[-0x1de7];
	lVar18 = lVar20 * 0x70 + lVar18;
	uVar11 = (undefined)lVar18;
	uVar14 = (undefined)sVar13;
	*(short *)(*(int *)puVar8 + *puVar2 * 0xe0 + *puVar3 * 2) = sVar13;
	*(short *)(*(int *)puVar8 + param_6 * 0xe0 + param_7 * 2) = sVar13;
	*(undefined4 *)(puVar4 + 0x80) = uVar21;
	*(undefined4 *)(puVar4 + 0x84) = uVar19;
	iVar6 = *piVar1;
	uVar12 = (undefined)iVar6;
	iVar5 = (int)lVar18;
	*(byte *)(iVar6 + iVar5) = *(byte *)(iVar6 + iVar5) | 0x10;
	*(uint *)(puVar4 + 0x30) = *puVar2;
	*(uint *)(puVar4 + 0x34) = *puVar3;
	*(int *)(puVar4 + 0x28) = param_6;
	*(int *)(puVar4 + 0x2c) = param_7;
	*(int *)(puVar4 + 0x38) = param_4;
	*(int *)(puVar4 + 0x3c) = param_5;
	*(undefined4 *)(puVar4 + 4) = 3;
	*(undefined4 *)(puVar4 + 0x40) = param_2;
	*(undefined4 *)(puVar4 + 0x44) = param_3;
	*(int *)(puVar4 + 0x74) = param_6;
	*(int *)(puVar4 + 0x78) = param_7;
	*(int *)(puVar4 + 0x7c) = param_12;
	*(int *)(puVar4 + 0x48) = param_12;
	uVar10 = (undefined)((ulonglong) * (uint *)(puVar4 + 0xe0) + 0x50);
	NewMonsterAnim(iVar7, (int)((ulonglong) * (uint *)(puVar4 + 0xe0) + 0x50), param_12);
	*(int *)(puVar4 + 0x88) = param_4 << 4;
	*(int *)(puVar4 + 0x8c) = param_5 << 4;
	*(undefined4 *)(puVar4 + 0x90) = 0;
	M_CheckEFlag(iVar7, uVar10, uVar17, uVar11, uVar12, uVar14, uVar15, uVar16, in_stack_ffffff88);
	return;
}

void M_StartAttack(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined uVar2;
	undefined *puVar3;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f187c;
	iVar1 = M_GetDir(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	iVar1._3_1_ = (undefined)iVar1;
	puVar3 = puVar3 + param_1 * 0xe8;
	uVar2 = (undefined)((ulonglong) * (uint *)(puVar3 + 0xe0) + 0x9c);
	NewMonsterAnim(param_1, (int)((ulonglong) * (uint *)(puVar3 + 0xe0) + 0x9c), iVar1);
	*(undefined4 *)(puVar3 + 4) = 4;
	*(undefined4 *)(puVar3 + 0x38) = 0;
	*(undefined4 *)(puVar3 + 0x3c) = 0;
	*(undefined4 *)(puVar3 + 0x28) = *(undefined4 *)(puVar3 + 0x20);
	*(undefined4 *)(puVar3 + 0x2c) = *(undefined4 *)(puVar3 + 0x24);
	*(undefined4 *)(puVar3 + 0x30) = *(undefined4 *)(puVar3 + 0x20);
	*(undefined4 *)(puVar3 + 0x34) = *(undefined4 *)(puVar3 + 0x24);
	*(int *)(puVar3 + 0x48) = iVar1;
	M_CheckEFlag(param_1, uVar2, (undefined)iVar1, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	return;
}

void M_StartRAttack(int param_1, undefined4 param_2, undefined4 param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined uVar2;
	undefined *puVar3;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f187c;
	iVar1 = M_GetDir(param_1, (char)param_2, (char)param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	iVar1._3_1_ = (undefined)iVar1;
	puVar3 = puVar3 + param_1 * 0xe8;
	uVar2 = (undefined)((ulonglong) * (uint *)(puVar3 + 0xe0) + 0x9c);
	NewMonsterAnim(param_1, (int)((ulonglong) * (uint *)(puVar3 + 0xe0) + 0x9c), iVar1);
	*(undefined4 *)(puVar3 + 4) = 10;
	*(undefined4 *)(puVar3 + 0x74) = param_2;
	*(undefined4 *)(puVar3 + 0x78) = param_3;
	*(undefined4 *)(puVar3 + 0x38) = 0;
	*(undefined4 *)(puVar3 + 0x3c) = 0;
	*(undefined4 *)(puVar3 + 0x28) = *(undefined4 *)(puVar3 + 0x20);
	*(undefined4 *)(puVar3 + 0x2c) = *(undefined4 *)(puVar3 + 0x24);
	*(undefined4 *)(puVar3 + 0x30) = *(undefined4 *)(puVar3 + 0x20);
	*(undefined4 *)(puVar3 + 0x34) = *(undefined4 *)(puVar3 + 0x24);
	*(int *)(puVar3 + 0x48) = iVar1;
	M_CheckEFlag(param_1, uVar2, (undefined)iVar1, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	return;
}

void M_StartRSpAttack(int param_1, undefined4 param_2, undefined4 param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined uVar2;
	undefined *puVar3;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f187c;
	iVar1 = M_GetDir(param_1, (char)param_2, (char)param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	iVar1._3_1_ = (undefined)iVar1;
	puVar3 = puVar3 + param_1 * 0xe8;
	uVar2 = (undefined)((ulonglong) * (uint *)(puVar3 + 0xe0) + 0x180);
	NewMonsterAnim(param_1, (int)((ulonglong) * (uint *)(puVar3 + 0xe0) + 0x180), iVar1);
	*(undefined4 *)(puVar3 + 4) = 0xc;
	*(undefined4 *)(puVar3 + 0x74) = param_2;
	*(undefined4 *)(puVar3 + 0x78) = 0;
	*(undefined4 *)(puVar3 + 0x7c) = param_3;
	*(undefined4 *)(puVar3 + 0x38) = 0;
	*(undefined4 *)(puVar3 + 0x3c) = 0;
	*(undefined4 *)(puVar3 + 0x28) = *(undefined4 *)(puVar3 + 0x20);
	*(undefined4 *)(puVar3 + 0x2c) = *(undefined4 *)(puVar3 + 0x24);
	*(undefined4 *)(puVar3 + 0x30) = *(undefined4 *)(puVar3 + 0x20);
	*(undefined4 *)(puVar3 + 0x34) = *(undefined4 *)(puVar3 + 0x24);
	*(int *)(puVar3 + 0x48) = iVar1;
	M_CheckEFlag(param_1, uVar2, (undefined)iVar1, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	return;
}

void M_StartSpAttack(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined uVar2;
	undefined *puVar3;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f187c;
	iVar1 = M_GetDir(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	iVar1._3_1_ = (undefined)iVar1;
	puVar3 = puVar3 + param_1 * 0xe8;
	uVar2 = (undefined)((ulonglong) * (uint *)(puVar3 + 0xe0) + 0x180);
	NewMonsterAnim(param_1, (int)((ulonglong) * (uint *)(puVar3 + 0xe0) + 0x180), iVar1);
	*(undefined4 *)(puVar3 + 4) = 7;
	*(undefined4 *)(puVar3 + 0x38) = 0;
	*(undefined4 *)(puVar3 + 0x3c) = 0;
	*(undefined4 *)(puVar3 + 0x28) = *(undefined4 *)(puVar3 + 0x20);
	*(undefined4 *)(puVar3 + 0x2c) = *(undefined4 *)(puVar3 + 0x24);
	*(undefined4 *)(puVar3 + 0x30) = *(undefined4 *)(puVar3 + 0x20);
	*(undefined4 *)(puVar3 + 0x34) = *(undefined4 *)(puVar3 + 0x24);
	*(int *)(puVar3 + 0x48) = iVar1;
	M_CheckEFlag(param_1, uVar2, (undefined)iVar1, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	return;
}

void M_StartEat(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined uVar1;
	undefined uVar2;
	undefined *puVar3;
	undefined4 in_stack_ffffffc8;

	puVar3 = PTR_DAT_100f187c + param_1 * 0xe8;
	uVar2 = (undefined) * (int *)(puVar3 + 0x48);
	uVar1 = (undefined)((ulonglong) * (uint *)(puVar3 + 0xe0) + 0x180);
	NewMonsterAnim(param_1, (int)((ulonglong) * (uint *)(puVar3 + 0xe0) + 0x180), *(int *)(puVar3 + 0x48));
	*(undefined4 *)(puVar3 + 4) = 7;
	*(undefined4 *)(puVar3 + 0x38) = 0;
	*(undefined4 *)(puVar3 + 0x3c) = 0;
	*(undefined4 *)(puVar3 + 0x28) = *(undefined4 *)(puVar3 + 0x20);
	*(undefined4 *)(puVar3 + 0x2c) = *(undefined4 *)(puVar3 + 0x24);
	*(undefined4 *)(puVar3 + 0x30) = *(undefined4 *)(puVar3 + 0x20);
	*(undefined4 *)(puVar3 + 0x34) = *(undefined4 *)(puVar3 + 0x24);
	M_CheckEFlag(param_1, uVar1, uVar2, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void M_ClearSquares(int param_1)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	short *psVar9;
	int iVar10;
	int iVar11;

	puVar3 = PTR_DAT_100f1954;
	puVar2 = PTR_DAT_100f1834;
	iVar6 = *(int *)(PTR_DAT_100f187c + param_1 * 0xe8 + 0x34);
	iVar1 = *(int *)(PTR_DAT_100f187c + param_1 * 0xe8 + 0x30);
	iVar11 = iVar6 + -1;
	iVar5 = iVar11 * 2;
	while (iVar11 <= iVar6 + 1) {
		if ((-1 < iVar11) && (iVar11 < 0x70)) {
			iVar10 = iVar1 + -1;
			iVar4 = (iVar1 + 2) - iVar10;
			iVar8 = iVar10 * 0xe0;
			if (iVar10 <= iVar1 + 1) {
				do {
					if ((-1 < iVar10) && (iVar10 < 0x70)) {
						psVar9 = (short *)(iVar5 + *(int *)puVar3 + iVar8);
						iVar7 = (int)*psVar9;
						if ((-1 - param_1 == iVar7) || (param_1 + 1 == iVar7)) {
							*psVar9 = 0;
						}
					}
					iVar8 = iVar8 + 0xe0;
					iVar10 = iVar10 + 1;
					iVar4 = iVar4 + -1;
				} while (iVar4 != 0);
			}
		}
		iVar5 = iVar5 + 2;
		iVar11 = iVar11 + 1;
	}
	if (iVar1 + 1 < 0x70) {
		iVar5 = *(int *)puVar2 + iVar1 * 0x70 + iVar6;
		*(byte *)(iVar5 + 0x70) = *(byte *)(iVar5 + 0x70) & 0xef;
	}
	if (iVar6 + 1 < 0x70) {
		iVar6 = *(int *)puVar2 + iVar1 * 0x70 + iVar6;
		*(byte *)(iVar6 + 1) = *(byte *)(iVar6 + 1) & 0xef;
	}
	return;
}

void M_GetKnockback(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	int *piVar2;
	int *piVar3;
	int *piVar4;
	undefined *puVar5;
	uint uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	undefined *puVar10;
	undefined **ppuVar11;
	ulonglong uVar12;
	undefined uVar13;
	undefined uVar14;
	undefined uVar15;
	undefined uVar16;
	undefined uVar17;
	undefined uVar18;
	undefined uVar19;
	undefined4 in_stack_ffffffa8;

	puVar10 = PTR_DAT_100f187c;
	uVar16 = (undefined)param_5;
	uVar19 = (undefined)param_8;
	uVar18 = (undefined)param_7;
	uVar17 = (undefined)param_6;
	ppuVar11 = &toc;
	iVar9 = (int)param_1;
	iVar8 = iVar9 * 0xe8;
	piVar2 = (int *)(PTR_DAT_100f187c + iVar8 + 0x48);
	uVar6 = *piVar2 + 4U & 7;
	uVar12 = DirOK(param_1, uVar6, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	if ((int)uVar12 != 0) {
		M_ClearSquares(iVar9);
		iVar7 = uVar6 * 4;
		uVar15 = (undefined)iVar7;
		puVar5 = puVar10 + iVar8;
		puVar1 = ppuVar11[-0x1c7c];
		piVar3 = (int *)(puVar10 + iVar8 + 0x30);
		*piVar3 = *(int *)(puVar10 + iVar8 + 0x30) + *(int *)(ppuVar11[-0x1c7b] + iVar7);
		piVar4 = (int *)(puVar10 + iVar8 + 0x34);
		*piVar4 = *(int *)(puVar10 + iVar8 + 0x34) + *(int *)(puVar1 + iVar7);
		iVar8 = *piVar2;
		uVar14 = (undefined)iVar8;
		uVar13 = (undefined)((ulonglong) * (uint *)(puVar5 + 0xe0) + 0xe8);
		NewMonsterAnim(iVar9, (int)((ulonglong) * (uint *)(puVar5 + 0xe0) + 0xe8), iVar8);
		*(undefined4 *)(puVar5 + 4) = 5;
		*(undefined4 *)(puVar5 + 0x38) = 0;
		*(undefined4 *)(puVar5 + 0x3c) = 0;
		*(int *)(puVar5 + 0x20) = *piVar3;
		*(int *)(puVar5 + 0x24) = *piVar4;
		*(undefined4 *)(puVar5 + 0x28) = *(undefined4 *)(puVar5 + 0x20);
		*(undefined4 *)(puVar5 + 0x2c) = *(undefined4 *)(puVar5 + 0x24);
		*piVar3 = *(int *)(puVar5 + 0x20);
		*piVar4 = *(int *)(puVar5 + 0x24);
		M_CheckEFlag(iVar9, uVar13, uVar14, uVar15, uVar16, uVar17, uVar18, uVar19, in_stack_ffffffa8);
		M_ClearSquares(iVar9);
		*(short *)(*(int *)ppuVar11[-0x1d9f] + *(int *)(puVar5 + 0x20) * 0xe0 + *(int *)(puVar5 + 0x24) * 2) = (short)param_1 + 1;
	}
	return;
}

void M_StartHit(ulonglong param_1, longlong param_2, ulonglong param_3, ulonglong param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	byte bVar1;
	byte **ppbVar2;
	undefined *puVar3;
	int iVar4;
	undefined *puVar5;
	undefined **ppuVar6;
	uint uVar7;
	undefined4 uVar8;
	ulonglong uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined7 uVar13;
	undefined uVar14;
	undefined uVar15;
	undefined uVar16;
	undefined uVar17;
	int iVar18;
	uint uVar19;
	ulonglong uVar20;
	undefined4 in_stack_ffffffa8;

	puVar5 = PTR_DAT_100f187c;
	uVar13 = (undefined7)((ulonglong)param_5 >> 8);
	uVar14 = (undefined)param_5;
	ppuVar6 = &toc;
	uVar20 = ZEXT48(PTR_DAT_100f1828);
	uVar7 = (uint)param_1;
	if (-1 < param_2) {
		(PTR_DAT_100f187c + uVar7 * 0xe8)[0xc3] = (PTR_DAT_100f187c + uVar7 * 0xe8)[0xc3] | (byte)(1 << param_2);
	}
	iVar18 = (int)param_2;
	uVar19 = (uint)param_3;
	if (iVar18 == *(int *)PTR_DAT_100f1824) {
		ppuVar6 = &toc;
		delta_monster_hp(uVar7, *(int *)(puVar5 + uVar7 * 0xe8 + 0x98), (uint)(byte)*PTR_DAT_100f17ec);
		param_3 = (ulonglong)(uVar7 & 0xffff);
		param_4 = (ulonglong)(uVar19 & 0xffff);
		NetSendCmdParam2(0, 0x25, param_3, param_4, CONCAT71(uVar13, uVar14), param_6, param_7, param_8,
		    in_stack_ffffffa8);
	}
	uVar9 = 1;
	PlayEffect(uVar7, 1, (char)param_3, (char)param_4, uVar14, (char)param_6, (char)param_7, (char)param_8,
	    in_stack_ffffffa8);
	iVar4 = uVar7 * 0xe8;
	ppbVar2 = (byte **)(puVar5 + iVar4 + 0xe0);
	if (((0x1c < **ppbVar2) && (**ppbVar2 < 0x21)) || (uVar19 = (int)uVar19 >> 6, uVar9 = uVar9 & 0xffffffff00000000 | (ulonglong)uVar19, (int)(char)puVar5[iVar4 + 0xc4] + 3 <= (int)uVar19)) {
		if (-1 < iVar18) {
			puVar3 = puVar5 + iVar4;
			*(int *)(puVar3 + 0x4c) = iVar18;
			uVar9 = uVar20 + param_2 * 0x55ec;
			puVar3[0x50] = (char)*(undefined4 *)((int)uVar9 + 0x40);
			puVar3[0x51] = (char)*(undefined4 *)((int)uVar9 + 0x44);
			*(uint *)(puVar3 + 0xa0) = *(uint *)(puVar3 + 0xa0) & 0xffffffef;
			uVar8 = M_GetDir(uVar7, (char)uVar9, (char)param_3, (char)param_4, uVar14, (char)param_6,
			    (char)param_7, (char)param_8, in_stack_ffffffa8);
			*(undefined4 *)(puVar3 + 0x48) = uVar8;
		}
		uVar17 = (undefined)param_8;
		uVar16 = (undefined)param_7;
		uVar15 = (undefined)param_6;
		uVar12 = (undefined)param_4;
		bVar1 = **ppbVar2;
		if (bVar1 == 0x27) {
			M_Teleport(param_1, uVar9, param_3, param_4, CONCAT71(uVar13, uVar14), param_6, param_7, param_8,
			    in_stack_ffffffa8);
		} else {
			if ((0xf < bVar1) && (bVar1 < 0x14)) {
				puVar5[iVar4 + 8] = 1;
			}
		}
		if (*(int *)(puVar5 + iVar4 + 4) != 0xf) {
			puVar3 = puVar5 + iVar4;
			uVar11 = (undefined) * (int *)(puVar3 + 0x48);
			uVar10 = (undefined)(ZEXT48(*ppbVar2) + 0xe8);
			NewMonsterAnim(uVar7, (int)(ZEXT48(*ppbVar2) + 0xe8), *(int *)(puVar3 + 0x48));
			*(int *)(puVar5 + iVar4 + 4) = 5;
			*(undefined4 *)(puVar3 + 0x38) = 0;
			*(undefined4 *)(puVar3 + 0x3c) = 0;
			*(undefined4 *)(puVar3 + 0x20) = *(undefined4 *)(puVar3 + 0x30);
			*(undefined4 *)(puVar3 + 0x24) = *(undefined4 *)(puVar3 + 0x34);
			*(undefined4 *)(puVar3 + 0x28) = *(undefined4 *)(puVar3 + 0x20);
			*(undefined4 *)(puVar3 + 0x2c) = *(undefined4 *)(puVar3 + 0x24);
			*(undefined4 *)(puVar3 + 0x30) = *(undefined4 *)(puVar3 + 0x20);
			*(undefined4 *)(puVar3 + 0x34) = *(undefined4 *)(puVar3 + 0x24);
			M_CheckEFlag(uVar7, uVar10, uVar11, uVar12, uVar14, uVar15, uVar16, uVar17, in_stack_ffffffa8);
			M_ClearSquares(uVar7);
			*(short *)(*(int *)ppuVar6[-0x1d9f] + *(int *)(puVar3 + 0x20) * 0xe0 + *(int *)(puVar3 + 0x24) * 2) = (short)param_1 + 1;
		}
	}
	return;
}

void M_DiabloDeath(int param_1, int param_2, undefined param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	ulonglong uVar6;
	int iVar7;
	longlong lVar8;
	longlong lVar9;
	uint uVar10;
	undefined uVar11;
	undefined uVar12;
	longlong lVar13;
	longlong lVar14;
	longlong lVar15;
	undefined uVar16;
	int iVar17;
	undefined *puVar18;
	undefined *puVar19;
	int *piVar20;
	double dVar21;
	undefined4 in_stack_ffffff58;
	undefined in_stack_ffffff5f;
	undefined4 in_stack_ffffff70;

	puVar5 = PTR_DAT_100f19a4;
	puVar4 = PTR_DAT_100f1954;
	puVar3 = PTR_DAT_100f187c;
	puVar2 = PTR_DAT_100f1820;
	puVar1 = PTR_DAT_100f181c;
	lVar15 = (longlong)param_8;
	lVar14 = (longlong)param_7;
	lVar13 = (longlong)param_6;
	lVar9 = (longlong)param_5;
	lVar8 = (longlong)param_4;
	uVar6 = ZEXT48(&toc);
	puVar19 = PTR_DAT_100f187c + param_1 * 0xe8;
	PlaySFX(0x359, param_2, param_3);
	*(undefined *)(*(int *)((int)uVar6 + -0x7604) + 0x7a) = 3;
	if (param_2 != 0) {
		NetSendCmdQuest(1, 5);
	}
	iVar7 = (int)uVar6;
	iVar17 = 0;
	piVar20 = *(int **)(iVar7 + -0x7628);
	*(undefined *)(iVar7 + -0x4d88) = **(undefined **)(iVar7 + -0x72b8);
	**(undefined4 **)(iVar7 + -0x75a8) = 0;
	while (true) {
		iVar7 = (int)uVar6;
		uVar16 = (undefined)lVar15;
		uVar12 = (undefined)lVar14;
		uVar11 = (undefined)lVar13;
		if (*(int *)puVar5 <= iVar17)
			break;
		iVar7 = *piVar20;
		if ((iVar7 != param_1) && (puVar19[0xa4] != '\0')) {
			puVar18 = puVar3 + iVar7 * 0xe8;
			uVar12 = (undefined) * (int *)(puVar18 + 0x48);
			uVar11 = (undefined)((ulonglong) * (uint *)(puVar18 + 0xe0) + 0x134);
			NewMonsterAnim(iVar7, (int)((ulonglong) * (uint *)(puVar18 + 0xe0) + 0x134),
			    *(int *)(puVar18 + 0x48));
			*(undefined4 *)(puVar18 + 4) = 6;
			*(undefined4 *)(puVar18 + 0x38) = 0;
			*(undefined4 *)(puVar18 + 0x3c) = 0;
			*(undefined4 *)(puVar18 + 0x74) = 0;
			*(undefined4 *)(puVar18 + 0x20) = *(undefined4 *)(puVar18 + 0x30);
			*(undefined4 *)(puVar18 + 0x24) = *(undefined4 *)(puVar18 + 0x34);
			*(undefined4 *)(puVar18 + 0x28) = *(undefined4 *)(puVar18 + 0x20);
			*(undefined4 *)(puVar18 + 0x2c) = *(undefined4 *)(puVar18 + 0x24);
			*(undefined4 *)(puVar18 + 0x30) = *(undefined4 *)(puVar18 + 0x20);
			*(undefined4 *)(puVar18 + 0x34) = *(undefined4 *)(puVar18 + 0x24);
			M_CheckEFlag(iVar7, uVar11, uVar12, (char)lVar8, (char)lVar9, (char)lVar13, (char)lVar14,
			    (char)lVar15, in_stack_ffffff58);
			M_ClearSquares(iVar7);
			*(short *)(*(int *)puVar4 + *(int *)(puVar18 + 0x20) * 0xe0 + *(int *)(puVar18 + 0x24) * 2) = (short)iVar7 + 1;
		}
		piVar20 = piVar20 + 1;
		iVar17 = iVar17 + 1;
	}
	AddLight(*(undefined4 *)(puVar19 + 0x20), *(undefined4 *)(puVar19 + 0x24), 8);
	DoVision((ulonglong) * (uint *)(puVar19 + 0x20), (ulonglong) * (uint *)(puVar19 + 0x24), 8, 0, 1,
	    uVar11, uVar12, uVar16, in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff70);
	lVar8 = abs((ulonglong) * (uint *)puVar1 - (ulonglong) * (uint *)(puVar19 + 0x24));
	lVar9 = abs((ulonglong) * (uint *)puVar2 - (ulonglong) * (uint *)(puVar19 + 0x20));
	if ((int)lVar8 < (int)lVar9) {
		lVar8 = abs((ulonglong) * (uint *)puVar2 - (ulonglong) * (uint *)(puVar19 + 0x20));
		uVar10 = (uint)lVar8;
	} else {
		lVar8 = abs((ulonglong) * (uint *)puVar1 - (ulonglong) * (uint *)(puVar19 + 0x24));
		uVar10 = (uint)lVar8;
	}
	if (0x14 < (int)uVar10) {
		uVar10 = 0x14;
	}
	*(int *)(puVar19 + 0x7c) = *(int *)puVar2 << 0x10;
	*(int *)(puVar19 + 0x80) = *(int *)puVar1 << 0x10;
	dVar21 = *(double *)(iVar7 + -0x4d80);
	*(int *)(puVar19 + 0x84) = (int)(((double)CONCAT44(0x43300000,
	                                      *(int *)(puVar19 + 0x7c) + *(int *)(puVar19 + 0x20) * -0x10000 ^ 0x80000000)
	                                     - dVar21)
	    / ((double)CONCAT44(0x43300000, uVar10 ^ 0x80000000) - dVar21));
	*(int *)(puVar19 + 0x88) = (int)(((double)CONCAT44(0x43300000,
	                                      *(int *)(puVar19 + 0x80) + *(int *)(puVar19 + 0x24) * -0x10000 ^ 0x80000000)
	                                     - dVar21)
	    / ((double)CONCAT44(0x43300000, uVar10 ^ 0x80000000) - dVar21));
	return;
}

void M2MStartHit(ulonglong param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	byte bVar1;
	uint uVar2;
	int iVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	uint uVar6;
	ulonglong uVar7;
	longlong lVar8;
	ulonglong uVar9;
	undefined uVar10;
	ulonglong uVar11;
	undefined uVar12;
	undefined7 uVar13;
	undefined uVar14;
	undefined uVar15;
	undefined uVar16;
	undefined uVar17;
	int iVar18;
	byte **ppbVar19;
	ulonglong uVar20;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar4 = PTR_DAT_100f187c;
	uVar13 = (undefined7)((ulonglong)param_5 >> 8);
	uVar14 = (undefined)param_5;
	ppuVar5 = &toc;
	uVar20 = ZEXT48(PTR_DAT_100f187c);
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar5 = &toc;
		app_fatal((int)PTR_s_Invalid_monster__d_getting_hit_b_100f32d4, param_1, param_3, param_4,
		    param_5, param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	iVar3 = (int)(param_1 * 0xe8);
	ppbVar19 = (byte **)(puVar4 + iVar3 + 0xe0);
	if (*(int *)(puVar4 + iVar3 + 0xe0) == 0) {
		app_fatal((int)ppuVar5[-0x1740], param_1, (ulonglong) * (uint *)(puVar4 + iVar3 + 0xdc), param_4,
		    CONCAT71(uVar13, uVar14), param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	iVar18 = (int)param_2;
	if (-1 < iVar18) {
		(puVar4 + iVar18 * 0xe8)[0xc3] = (puVar4 + iVar18 * 0xe8)[0xc3] | (byte)(1 << param_2);
	}
	uVar6 = (uint)param_1;
	delta_monster_hp(uVar6, *(int *)(puVar4 + iVar3 + 0x98), (uint)(byte)*ppuVar5[-0x1df9]);
	uVar9 = (ulonglong)(uVar6 & 0xffff);
	uVar11 = (ulonglong)((uint)param_3 & 0xffff);
	NetSendCmdParam2(0, 0x25, uVar9, uVar11, CONCAT71(uVar13, uVar14), param_6, param_7, param_8, in_stack_ffffffb8);
	uVar7 = 1;
	PlayEffect(uVar6, 1, (char)uVar9, (char)uVar11, uVar14, (char)param_6, (char)param_7, (char)param_8,
	    in_stack_ffffffb8);
	uVar17 = (undefined)param_8;
	uVar16 = (undefined)param_7;
	uVar15 = (undefined)param_6;
	uVar12 = (undefined)uVar11;
	uVar10 = (undefined)uVar9;
	if (((0x1c < **ppbVar19) && (**ppbVar19 < 0x21)) || (uVar2 = (int)(uint)param_3 >> 6, uVar7 = uVar7 & 0xffffffff00000000 | (ulonglong)uVar2, (int)(char)puVar4[iVar3 + 0xc4] + 3 <= (int)uVar2)) {
		if (-1 < iVar18) {
			uVar7 = uVar20 + 0x48;
			*(uint *)((int)uVar7 + iVar3) = *(int *)((int)uVar7 + iVar18 * 0xe8) + 4U & 7;
		}
		bVar1 = **ppbVar19;
		if (bVar1 == 0x27) {
			M_Teleport(param_1, uVar7, uVar9, uVar11, CONCAT71(uVar13, uVar14), param_6, param_7, param_8,
			    in_stack_ffffffb8);
		} else {
			if ((0xf < bVar1) && (bVar1 < 0x14)) {
				puVar4[iVar3 + 8] = 1;
			}
		}
		if (*(int *)(puVar4 + iVar3 + 4) != 0xf) {
			if (**ppbVar19 != 0x6d) {
				uVar10 = (undefined) * (int *)(puVar4 + iVar3 + 0x48);
				NewMonsterAnim(uVar6, (int)(*ppbVar19 + 0xe8), *(int *)(puVar4 + iVar3 + 0x48));
				*(int *)(puVar4 + iVar3 + 4) = 5;
			}
			lVar8 = uVar20 + param_1 * 0xe8;
			iVar3 = (int)lVar8;
			*(undefined4 *)(iVar3 + 0x38) = 0;
			*(undefined4 *)(iVar3 + 0x3c) = 0;
			*(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(iVar3 + 0x30);
			*(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(iVar3 + 0x34);
			*(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(iVar3 + 0x20);
			*(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(iVar3 + 0x24);
			*(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(iVar3 + 0x20);
			*(undefined4 *)(iVar3 + 0x34) = *(undefined4 *)(iVar3 + 0x24);
			M_CheckEFlag(uVar6, (char)lVar8, uVar10, uVar12, uVar14, uVar15, uVar16, uVar17, in_stack_ffffffb8);
			M_ClearSquares(uVar6);
			*(short *)(*(int *)ppuVar5[-0x1d9f] + *(int *)(iVar3 + 0x20) * 0xe0 + *(int *)(iVar3 + 0x24) * 2) = (short)param_1 + 1;
		}
	}
	return;
}

void MonstStartKill(ulonglong param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	int iVar3;
	undefined **ppuVar4;
	undefined8 uVar5;
	int iVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar2 = PTR_DAT_100f187c;
	ppuVar4 = &toc;
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar4 = &toc;
		app_fatal((int)PTR_s_MonstStartKill__Invalid_monster___100f32cc, param_1, param_3, param_4,
		    param_5, param_6, param_7, param_8, in_stack_ffffffa8, in_stack_ffffffaf,
		    in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
	}
	uVar13 = (undefined)param_8;
	uVar12 = (undefined)param_7;
	uVar11 = (undefined)param_6;
	uVar10 = (undefined)param_5;
	uVar8 = (undefined)param_4;
	iVar3 = (int)param_1;
	puVar1 = puVar2 + iVar3 * 0xe8;
	if (*(int *)(puVar1 + 0xe0) == 0) {
		app_fatal((int)ppuVar4[-0x1742], param_1, (ulonglong) * (uint *)(puVar1 + 0xdc), param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffb8,
		    in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
	}
	puVar2 = puVar2 + iVar3 * 0xe8;
	if (-1 < (int)param_2) {
		puVar2[0xc3] = puVar2[0xc3] | (byte)(1 << param_2);
	}
	if (((param_2 & 0xffffffff) < 4) && (4 < (param_1 & 0xffffffff))) {
		AddPlrMonstExper(puVar2[0xc4], (ulonglong) * (ushort *)(puVar2 + 0xc6), (ulonglong)(byte)puVar2[0xc3]);
	}
	puVar1 = ppuVar4[-0x1c53];
	uVar9 = SUB41(puVar1, 0);
	*(int *)(puVar1 + (uint) * *(byte **)(puVar2 + 0xe0) * 4) = *(int *)(puVar1 + (uint) * *(byte **)(puVar2 + 0xe0) * 4) + 1;
	*(undefined4 *)(puVar2 + 0x98) = 0;
	SetRndSeed(*(undefined4 *)(puVar2 + 0xb4));
	uVar5 = QuestStatus(2);
	if (((int)uVar5 == 0) || (*(int *)(puVar2 + 0xdc) != *(int *)(ppuVar4[-0x1c23] + 4))) {
		if (3 < iVar3) {
			uVar9 = (undefined) * (int *)(puVar2 + 0x24);
			uVar8 = (char)param_3;
			SpawnItem(iVar3, *(int *)(puVar2 + 0x20), *(int *)(puVar2 + 0x24), (int)param_3, uVar10, uVar11,
			    uVar12, uVar13, in_stack_ffffffa8);
		}
	} else {
		uVar9 = 1;
		uVar8 = 4;
		uVar10 = 0;
		uVar11 = 1;
		uVar12 = 0;
		CreateTypeItem(*(int *)(puVar2 + 0x20) + 1, *(int *)(puVar2 + 0x24) + 1, 1, 4, 0, 1, 0, uVar13,
		    in_stack_ffffffa8);
	}
	if (**(char **)(puVar2 + 0xe0) == 'n') {
		uVar7 = 1;
		M_DiabloDeath(iVar3, 1, uVar9, uVar8, uVar10, uVar11, uVar12, uVar13, in_stack_ffffffa8);
	} else {
		uVar7 = 2;
		PlayEffect(iVar3, 2, uVar9, uVar8, uVar10, uVar11, uVar12, uVar13, in_stack_ffffffa8);
	}
	if ((int)param_2 < 0) {
		iVar6 = *(int *)(puVar2 + 0x48);
	} else {
		iVar6 = M_GetDir(iVar3, uVar7, uVar9, uVar8, uVar10, uVar11, uVar12, uVar13, in_stack_ffffffa8);
	}
	uVar7 = (undefined)iVar6;
	*(int *)(puVar2 + 0x48) = iVar6;
	uVar9 = (undefined)((ulonglong) * (uint *)(puVar2 + 0xe0) + 0x134);
	NewMonsterAnim(iVar3, (int)((ulonglong) * (uint *)(puVar2 + 0xe0) + 0x134), iVar6);
	*(undefined4 *)(puVar2 + 4) = 6;
	*(undefined4 *)(puVar2 + 0x38) = 0;
	*(undefined4 *)(puVar2 + 0x3c) = 0;
	*(undefined4 *)(puVar2 + 0x74) = 0;
	*(undefined4 *)(puVar2 + 0x20) = *(undefined4 *)(puVar2 + 0x30);
	*(undefined4 *)(puVar2 + 0x24) = *(undefined4 *)(puVar2 + 0x34);
	*(undefined4 *)(puVar2 + 0x28) = *(undefined4 *)(puVar2 + 0x20);
	*(undefined4 *)(puVar2 + 0x2c) = *(undefined4 *)(puVar2 + 0x24);
	*(undefined4 *)(puVar2 + 0x30) = *(undefined4 *)(puVar2 + 0x20);
	*(undefined4 *)(puVar2 + 0x34) = *(undefined4 *)(puVar2 + 0x24);
	M_CheckEFlag(iVar3, uVar9, uVar7, uVar8, uVar10, uVar11, uVar12, uVar13, in_stack_ffffffa8);
	M_ClearSquares(iVar3);
	uVar8 = (undefined) * (int *)ppuVar4[-0x1d9f];
	*(undefined2 *)(*(int *)ppuVar4[-0x1d9f] + *(int *)(puVar2 + 0x20) * 0xe0 + *(int *)(puVar2 + 0x24) * 2) = (short)(param_1 + 1);
	uVar9 = (undefined)(param_1 + 1);
	CheckQuestKill(iVar3, (int)param_3, uVar8, uVar9, uVar10, uVar11, uVar12, uVar13, in_stack_ffffffa8);
	M_FallenFear((ulonglong) * (uint *)(puVar2 + 0x20), (ulonglong) * (uint *)(puVar2 + 0x24), uVar8, uVar9,
	    uVar10, uVar11, uVar12, uVar13, in_stack_ffffffa8);
	if ((0x2d < **(byte **)(puVar2 + 0xe0)) && (**(byte **)(puVar2 + 0xe0) < 0x32)) {
		AddMissile((ulonglong) * (uint *)(puVar2 + 0x20), (ulonglong) * (uint *)(puVar2 + 0x24), 0, 0, 0, 0x3b,
		    1, param_1, in_stack_ffffffa8, in_stack_ffffffaf, (uint)(byte)puVar2[0x9d] + 1, 0);
	}
	return;
}

void M2MStartKill(ulonglong param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int iVar1;
	uint uVar2;
	uint *puVar3;
	uint *puVar4;
	undefined *puVar5;
	int iVar6;
	undefined *puVar7;
	int iVar8;
	undefined **ppuVar9;
	undefined uVar11;
	uint uVar10;
	undefined uVar12;
	undefined uVar13;
	undefined uVar14;
	undefined uVar15;
	undefined uVar16;
	undefined uVar17;
	byte **ppbVar18;
	ulonglong uVar19;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar7 = PTR_DAT_100f187c;
	ppuVar9 = &toc;
	uVar19 = ZEXT48(PTR_DAT_100f187c);
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar9 = &toc;
		app_fatal((int)PTR_s_M2MStartKill__Invalid_monster__a_100f32c4, param_1, param_3, param_4,
		    param_5, param_6, param_7, param_8, in_stack_ffffffa8, in_stack_ffffffaf,
		    in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
	}
	if (199 < (param_2 & 0xffffffff)) {
		app_fatal((int)ppuVar9[-0x1744], param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffb8, in_stack_ffffffbc,
		    in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4);
	}
	iVar1 = (int)param_1 * 0xe8;
	uVar2 = (uint)param_2;
	if (*(int *)(puVar7 + 0xe0 + iVar1) == 0) {
		app_fatal((int)ppuVar9[-0x1745], param_2, (ulonglong) * (uint *)(puVar7 + uVar2 * 0xe8 + 0xdc),
		    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8, in_stack_ffffffaf,
		    in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
	}
	iVar8 = uVar2 * 0xe8;
	puVar3 = (uint *)(puVar7 + iVar8 + 0x20);
	puVar4 = (uint *)(puVar7 + iVar8 + 0x24);
	FUN_10079a80(uVar2, (char)*puVar3, (char)*puVar4, (uint)(byte)*ppuVar9[-0x1df9]);
	uVar17 = (undefined)param_8;
	uVar16 = (undefined)param_7;
	uVar15 = (undefined)param_6;
	uVar14 = (undefined)(uVar2 & 0xffff);
	NetSendCmdLocParam1(0, 0x24, (ulonglong)(*puVar3 & 0xff), (ulonglong)(*puVar4 & 0xff),
	    (ulonglong)(uVar2 & 0xffff), param_6, param_7, param_8, in_stack_ffffffa8);
	puVar5 = puVar7 + iVar8;
	puVar5[0xc3] = puVar5[0xc3] | (byte)(1 << param_1);
	if ((param_1 & 0xffffffff) < 4) {
		AddPlrMonstExper((puVar7 + iVar8)[0xc4], (ulonglong) * (ushort *)(puVar7 + iVar8 + 0xc6),
		    (ulonglong)(byte)puVar5[0xc3]);
	}
	ppbVar18 = (byte **)(puVar7 + 0xe0 + iVar8);
	puVar5 = ppuVar9[-0x1c53];
	uVar13 = SUB41(puVar5, 0);
	iVar6 = (uint) * *ppbVar18 * 4;
	uVar11 = (undefined)iVar6;
	*(int *)(puVar5 + iVar6) = *(int *)(puVar5 + iVar6) + 1;
	*(undefined4 *)(puVar7 + iVar8 + 0x98) = 0;
	SetRndSeed(*(undefined4 *)(puVar7 + iVar8 + 0xb4));
	if (3 < (param_2 & 0xffffffff)) {
		uVar11 = (undefined)*puVar4;
		uVar13 = 1;
		SpawnItem(uVar2, *puVar3, *puVar4, 1, uVar14, uVar15, uVar16, uVar17, in_stack_ffffffa8);
	}
	if (**ppbVar18 == 0x6e) {
		M_DiabloDeath(uVar2, 1, uVar11, uVar13, uVar14, uVar15, uVar16, uVar17, in_stack_ffffffa8);
	} else {
		PlayEffect((int)param_1, 2, uVar11, uVar13, uVar14, uVar15, uVar16, uVar17, in_stack_ffffffa8);
	}
	PlayEffect(uVar2, 2, uVar11, uVar13, uVar14, uVar15, uVar16, uVar17, in_stack_ffffffa8);
	uVar11 = (undefined)(uVar19 + 0x48);
	iVar6 = (int)(uVar19 + 0x48);
	uVar10 = *(int *)(iVar6 + iVar1) + 4U & 7;
	if (**ppbVar18 == 0x6d) {
		uVar10 = 0;
	}
	uVar12 = (undefined)uVar10;
	*(uint *)(iVar6 + iVar8) = uVar10;
	uVar13 = (undefined)(ZEXT48(*ppbVar18) + 0x134);
	NewMonsterAnim(uVar2, (int)(ZEXT48(*ppbVar18) + 0x134), uVar10);
	puVar7 = puVar7 + iVar8;
	*(undefined4 *)(puVar7 + 4) = 6;
	*(undefined4 *)(puVar7 + 0x38) = 0;
	*(undefined4 *)(puVar7 + 0x3c) = 0;
	*puVar3 = *(uint *)(puVar7 + 0x30);
	*puVar4 = *(uint *)(puVar7 + 0x34);
	*(uint *)(puVar7 + 0x28) = *puVar3;
	*(uint *)(puVar7 + 0x2c) = *puVar4;
	*(uint *)(puVar7 + 0x30) = *puVar3;
	*(uint *)(puVar7 + 0x34) = *puVar4;
	M_CheckEFlag(uVar2, uVar13, uVar12, uVar11, uVar14, uVar15, uVar16, uVar17, in_stack_ffffffa8);
	M_ClearSquares(uVar2);
	uVar11 = (undefined) * (int *)ppuVar9[-0x1d9f];
	*(undefined2 *)(*(int *)ppuVar9[-0x1d9f] + *puVar3 * 0xe0 + *puVar4 * 2) = (short)(param_2 + 1);
	uVar13 = (undefined)(param_2 + 1);
	CheckQuestKill(uVar2, 1, uVar11, uVar13, uVar14, uVar15, uVar16, uVar17, in_stack_ffffffa8);
	M_FallenFear((ulonglong)*puVar3, (ulonglong)*puVar4, uVar11, uVar13, uVar14, uVar15, uVar16, uVar17,
	    in_stack_ffffffa8);
	if ((0x2d < **ppbVar18) && (**ppbVar18 < 0x32)) {
		AddMissile((ulonglong)*puVar3, (ulonglong)*puVar4, 0, 0, 0, 0x3b, 1, param_2, in_stack_ffffffa8,
		    in_stack_ffffffaf, (uint)(byte)puVar7[0x9d] + 1, 0);
	}
	return;
}

void M_StartKill(ulonglong param_1, ulonglong param_2, undefined8 param_3, ulonglong param_4,
    ulonglong param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint *puVar1;
	uint *puVar2;
	uint uVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined **ppuVar6;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar5 = PTR_DAT_100f187c;
	puVar4 = PTR_DAT_100f17ec;
	ppuVar6 = &toc;
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar6 = &toc;
		app_fatal((int)PTR_s_M_StartKill__Invalid_monster__d_100f32b8, param_1, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	if (*(uint *)ppuVar6[-0x1deb] == (uint)param_2) {
		uVar3 = (uint)param_1;
		puVar1 = (uint *)(puVar5 + uVar3 * 0xe8 + 0x20);
		puVar2 = (uint *)(puVar5 + uVar3 * 0xe8 + 0x24);
		FUN_10079a80(uVar3, (char)*puVar1, (char)*puVar2, (uint)(byte)*puVar4);
		if (uVar3 == (uint)param_2) {
			param_5 = (ulonglong)(byte)*puVar4;
			param_4 = (ulonglong)(*puVar2 & 0xff);
			NetSendCmdLocParam1(0, 0x57, (ulonglong)(*puVar1 & 0xff), param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffb8);
		} else {
			param_5 = (ulonglong)(uVar3 & 0xffff);
			param_4 = (ulonglong)(*puVar2 & 0xff);
			NetSendCmdLocParam1(0, 0x24, (ulonglong)(*puVar1 & 0xff), param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffb8);
		}
	}
	MonstStartKill(param_1, param_2, 1, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	return;
}

void M_SyncStartKill(ulonglong param_1, int param_2, undefined8 param_3, ulonglong param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined **ppuVar2;
	ulonglong uVar3;
	int iVar4;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar1 = PTR_DAT_100f187c;
	ppuVar2 = &toc;
	uVar3 = param_4;
	if (199 < (param_1 & 0xffffffff)) {
		uVar3 = param_4;
		ppuVar2 = &toc;
		app_fatal((int)PTR_s_M_SyncStartKill__Invalid_monster_100f32b4, param_1, param_3, param_4,
		    param_5, param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	puVar1 = puVar1 + (int)param_1 * 0xe8;
	if ((*(int *)(puVar1 + 0x98) != 0) && (*(int *)(puVar1 + 4) != 6)) {
		iVar4 = (int)param_3;
		if (*(short *)(*(int *)ppuVar2[-0x1d9f] + param_2 * 0xe0 + iVar4 * 2) == 0) {
			M_ClearSquares((int)param_1);
			*(int *)(puVar1 + 0x20) = param_2;
			*(int *)(puVar1 + 0x24) = iVar4;
			*(int *)(puVar1 + 0x30) = param_2;
			*(int *)(puVar1 + 0x34) = iVar4;
		}
		if (*(int *)(puVar1 + 4) == 0xf) {
			MonstStartKill(param_1, param_4, 0, uVar3, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
			*(int *)(puVar1 + 4) = 0xf;
		} else {
			MonstStartKill(param_1, param_4, 0, uVar3, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
		}
	}
	return;
}

void M_StartFadein(ulonglong param_1, int param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	int iVar2;
	int iVar3;
	undefined **ppuVar4;
	undefined uVar6;
	longlong lVar5;
	undefined7 uVar7;
	undefined uVar8;
	undefined7 uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar1 = PTR_DAT_100f187c;
	uVar9 = (undefined7)((ulonglong)param_5 >> 8);
	uVar10 = (undefined)param_5;
	uVar7 = (undefined7)((ulonglong)param_4 >> 8);
	uVar8 = (undefined)param_4;
	uVar6 = (undefined)param_2;
	ppuVar4 = &toc;
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar4 = &toc;
		app_fatal((int)PTR_s_M_StartFadein__Invalid_monster___100f32b0, param_1, param_3, param_4,
		    param_5, param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	uVar13 = (undefined)param_8;
	uVar12 = (undefined)param_7;
	uVar11 = (undefined)param_6;
	iVar3 = (int)param_1;
	iVar2 = iVar3 * 0xe8;
	if (*(uint *)(puVar1 + iVar2 + 0xe0) == 0) {
		app_fatal((int)ppuVar4[-0x1749], param_1, (ulonglong) * (uint *)(puVar1 + iVar2 + 0xdc),
		    CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10), param_6, param_7, param_8,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4);
	}
	lVar5 = (ulonglong) * (uint *)(puVar1 + iVar2 + 0xe0) + 0x180;
	lVar5._7_1_ = (undefined)lVar5;
	NewMonsterAnim(iVar3, (int)lVar5, param_2);
	puVar1 = puVar1 + iVar2;
	*(undefined4 *)(puVar1 + 4) = 8;
	*(undefined4 *)(puVar1 + 0x38) = 0;
	*(undefined4 *)(puVar1 + 0x3c) = 0;
	*(undefined4 *)(puVar1 + 0x28) = *(undefined4 *)(puVar1 + 0x20);
	*(undefined4 *)(puVar1 + 0x2c) = *(undefined4 *)(puVar1 + 0x24);
	*(undefined4 *)(puVar1 + 0x30) = *(undefined4 *)(puVar1 + 0x20);
	*(undefined4 *)(puVar1 + 0x34) = *(undefined4 *)(puVar1 + 0x24);
	M_CheckEFlag(iVar3, (undefined)lVar5, uVar6, uVar8, uVar10, uVar11, uVar12, uVar13, in_stack_ffffffb8);
	*(int *)(puVar1 + 0x48) = param_2;
	*(uint *)(puVar1 + 0xa0) = *(uint *)(puVar1 + 0xa0) & 0xfffffffe;
	if ((int)param_3 != 0) {
		*(uint *)(puVar1 + 0xa0) = *(uint *)(puVar1 + 0xa0) | 2;
		*(undefined4 *)(puVar1 + 0x68) = *(undefined4 *)(puVar1 + 100);
	}
	return;
}

void M_StartFadeout(ulonglong param_1, int param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	int iVar2;
	int iVar3;
	undefined **ppuVar4;
	undefined uVar6;
	longlong lVar5;
	undefined7 uVar7;
	undefined uVar8;
	undefined7 uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar1 = PTR_DAT_100f187c;
	uVar9 = (undefined7)((ulonglong)param_5 >> 8);
	uVar10 = (undefined)param_5;
	uVar7 = (undefined7)((ulonglong)param_4 >> 8);
	uVar8 = (undefined)param_4;
	uVar6 = (undefined)param_2;
	ppuVar4 = &toc;
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar4 = &toc;
		app_fatal((int)PTR_s_M_StartFadeout__Invalid_monster___100f32a8, param_1, param_3, param_4,
		    param_5, param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	uVar13 = (undefined)param_8;
	uVar12 = (undefined)param_7;
	uVar11 = (undefined)param_6;
	iVar3 = (int)param_1;
	iVar2 = iVar3 * 0xe8;
	if (*(uint *)(puVar1 + iVar2 + 0xe0) == 0) {
		app_fatal((int)ppuVar4[-0x174b], param_1, (ulonglong) * (uint *)(puVar1 + iVar2 + 0xdc),
		    CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10), param_6, param_7, param_8,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4);
	}
	lVar5 = (ulonglong) * (uint *)(puVar1 + iVar2 + 0xe0) + 0x180;
	lVar5._7_1_ = (undefined)lVar5;
	NewMonsterAnim(iVar3, (int)lVar5, param_2);
	puVar1 = puVar1 + iVar2;
	*(undefined4 *)(puVar1 + 4) = 9;
	*(undefined4 *)(puVar1 + 0x38) = 0;
	*(undefined4 *)(puVar1 + 0x3c) = 0;
	*(undefined4 *)(puVar1 + 0x28) = *(undefined4 *)(puVar1 + 0x20);
	*(undefined4 *)(puVar1 + 0x2c) = *(undefined4 *)(puVar1 + 0x24);
	*(undefined4 *)(puVar1 + 0x30) = *(undefined4 *)(puVar1 + 0x20);
	*(undefined4 *)(puVar1 + 0x34) = *(undefined4 *)(puVar1 + 0x24);
	M_CheckEFlag(iVar3, (undefined)lVar5, uVar6, uVar8, uVar10, uVar11, uVar12, uVar13, in_stack_ffffffb8);
	*(int *)(puVar1 + 0x48) = param_2;
	if ((int)param_3 != 0) {
		*(uint *)(puVar1 + 0xa0) = *(uint *)(puVar1 + 0xa0) | 2;
		*(undefined4 *)(puVar1 + 0x68) = *(undefined4 *)(puVar1 + 100);
	}
	return;
}

void M_StartHeal(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 uVar1;
	undefined4 uVar2;
	uint uVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined **ppuVar6;
	longlong lVar7;
	int iVar8;
	undefined7 uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined uVar14;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar5 = PTR_DAT_100f187c;
	uVar9 = (undefined7)((ulonglong)param_5 >> 8);
	uVar10 = (undefined)param_5;
	ppuVar6 = &toc;
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar6 = &toc;
		app_fatal((int)PTR_s_M_StartHeal__Invalid_monster__d_100f32a0, param_1, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	uVar14 = (undefined)in_stack_ffffffc8;
	uVar13 = (undefined)param_8;
	uVar12 = (undefined)param_7;
	uVar11 = (undefined)param_6;
	iVar8 = (int)param_1 * 0xe8;
	puVar4 = puVar5 + iVar8;
	if (*(int *)(puVar4 + 0xe0) == 0) {
		app_fatal((int)ppuVar6[-0x174d], param_1, (ulonglong) * (uint *)(puVar4 + 0xdc), param_4,
		    CONCAT71(uVar9, uVar10), param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	puVar5 = puVar5 + iVar8;
	iVar8 = *(int *)(puVar5 + 0xe0) + *(int *)(puVar5 + 0x48) * 8;
	uVar1 = *(undefined4 *)(iVar8 + 0x184);
	uVar2 = *(undefined4 *)(iVar8 + 0x188);
	*(undefined4 *)(puVar5 + 0x54) = uVar1;
	*(undefined4 *)(puVar5 + 0x58) = uVar2;
	*(undefined4 *)(puVar5 + 0x68) = *(undefined4 *)(*(int *)(puVar5 + 0xe0) + 0x1c4);
	uVar3 = *(uint *)(puVar5 + 0xa0);
	*(int *)(puVar5 + 0xa0) = (int)((ulonglong)uVar3 | 2);
	*(undefined4 *)(puVar5 + 4) = 0x10;
	lVar7 = random(0x61, 5, (char)((ulonglong)uVar3 | 2), (char)uVar1, uVar10, uVar11, uVar12, uVar13,
	    in_stack_ffffffb8, in_stack_ffffffbf, uVar14);
	*(int *)(puVar5 + 0x74) = *(int *)(puVar5 + 0x94) / (((int)lVar7 + 4) * 0x10);
	return;
}

// WARNING: Removing unreachable block (ram,0x1006d274)

void M_ChangeLightOffset(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	int iVar4;
	undefined *puVar5;
	int iVar6;
	int iVar7;
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

	puVar5 = PTR_DAT_100f187c;
	if (199 < (param_1 & 0xffffffff)) {
		app_fatal((int)PTR_s_M_ChangeLightOffset__Invalid_mon_100f3298, param_1, param_3, param_4,
		    param_5, param_6, param_7, param_8, in_stack_ffffffc8, in_stack_ffffffcf,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4,
		    in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
	}
	iVar4 = (int)param_1 * 0xe8;
	puVar3 = puVar5 + iVar4;
	iVar1 = *(int *)(puVar3 + 0x38);
	iVar2 = *(int *)(puVar3 + 0x3c) * 2;
	iVar7 = iVar2 - iVar1;
	if (iVar7 < 0) {
		iVar7 = -iVar7;
		iVar6 = -1;
	} else {
		iVar6 = 1;
	}
	ChangeLightOff((uint)(byte)puVar5[iVar4 + 0xdb], iVar1 + iVar2 >> 3, (iVar7 >> 3) * iVar6);
	return;
}

undefined8
M_DoStand(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint uVar1;
	char *pcVar2;
	undefined4 uVar3;
	int iVar4;
	undefined *puVar5;
	undefined **ppuVar6;
	undefined uVar7;
	longlong lVar8;
	undefined7 uVar9;
	undefined uVar10;
	undefined7 uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined uVar14;
	undefined uVar15;
	ulonglong uVar16;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar5 = PTR_DAT_100f187c;
	uVar11 = (undefined7)((ulonglong)param_5 >> 8);
	uVar12 = (undefined)param_5;
	uVar9 = (undefined7)((ulonglong)param_4 >> 8);
	uVar10 = (undefined)param_4;
	ppuVar6 = &toc;
	uVar16 = ZEXT48(PTR_DAT_100f187c);
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar6 = &toc;
		app_fatal((int)PTR_s_M_DoStand__Invalid_monster__d_100f3294, param_1, param_3, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	uVar15 = (undefined)param_8;
	uVar14 = (undefined)param_7;
	uVar13 = (undefined)param_6;
	lVar8 = uVar16 + param_1 * 0xe8;
	lVar8._7_1_ = (undefined)lVar8;
	iVar4 = (int)lVar8;
	if (*(int *)(iVar4 + 0xe0) == 0) {
		uVar1 = *(uint *)(iVar4 + 0xdc);
		lVar8._7_1_ = (undefined)uVar1;
		app_fatal((int)ppuVar6[-0x1750], param_1, (ulonglong)uVar1, CONCAT71(uVar9, uVar10),
		    CONCAT71(uVar11, uVar12), param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	puVar5 = puVar5 + (int)(param_1 * 0xe8);
	pcVar2 = *(char **)(puVar5 + 0xe0);
	if (*pcVar2 == 'm') {
		lVar8 = ZEXT48(pcVar2) + (ulonglong)(uint)(*(int *)(puVar5 + 0x48) << 3);
		uVar7 = (undefined)lVar8;
		iVar4 = (int)lVar8;
		uVar3 = *(undefined4 *)(iVar4 + 0x58);
		*(undefined4 *)(puVar5 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
		*(undefined4 *)(puVar5 + 0x58) = uVar3;
	} else {
		lVar8 = ZEXT48(pcVar2) + (ulonglong)(uint)(*(int *)(puVar5 + 0x48) << 3);
		uVar7 = (undefined)lVar8;
		iVar4 = (int)lVar8;
		uVar3 = *(undefined4 *)(iVar4 + 0xc);
		*(undefined4 *)(puVar5 + 0x54) = *(undefined4 *)(iVar4 + 8);
		*(undefined4 *)(puVar5 + 0x58) = uVar3;
	}
	if (*(int *)(puVar5 + 0x68) == *(int *)(puVar5 + 100)) {
		M_Enemy((int)param_1, uVar7, (undefined)lVar8, uVar10, uVar12, uVar13, uVar14, uVar15,
		    in_stack_ffffffb8);
	}
	*(int *)(puVar5 + 0x78) = *(int *)(puVar5 + 0x78) + 1;
	return 0;
}

undefined8
M_DoWalk(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    longlong param_5, undefined4 param_6, int *param_7, undefined4 param_8, undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined **ppuVar8;
	ulonglong uVar9;
	longlong lVar10;
	undefined8 uVar11;
	longlong lVar12;
	ulonglong uVar13;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar7 = PTR_DAT_100f1954;
	puVar6 = PTR_DAT_100f187c;
	ppuVar8 = &toc;
	uVar13 = ZEXT48(PTR_DAT_100f187c);
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar8 = &toc;
		app_fatal((int)PTR_s_M_DoWalk__Invalid_monster__d_100f328c, param_1, param_3, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	lVar12 = param_1 * 0xe8;
	iVar5 = (int)lVar12;
	if (*(int *)(puVar6 + iVar5 + 0xe0) == 0) {
		app_fatal((int)ppuVar8[-0x1752], param_1, (ulonglong) * (uint *)(puVar6 + iVar5 + 0xdc), param_4,
		    param_5, param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	lVar10 = uVar13 + lVar12 + 0x90;
	uVar1 = *(uint *)lVar10;
	uVar9 = (ulonglong)uVar1;
	if (uVar1 == *(uint *)(*(int *)(puVar6 + iVar5 + 0xe0) + 0x94)) {
		puVar2 = puVar6 + iVar5;
		param_6 = 0;
		iVar3 = (int)(uVar13 + lVar12);
		param_5 = uVar13 + lVar12;
		lVar10 = param_1 + 1;
		*(undefined2 *)(*(int *)puVar7 + *(int *)(puVar2 + 0x20) * 0xe0 + *(int *)(iVar3 + 0x24) * 2) = 0;
		iVar4 = (int)param_5;
		*(int *)(puVar2 + 0x20) = *(int *)(puVar2 + 0x20) + *(int *)(iVar4 + 0x74);
		*(int *)(iVar3 + 0x24) = *(int *)(iVar3 + 0x24) + *(int *)(iVar4 + 0x78);
		param_7 = (int *)(puVar2 + 0x20);
		uVar9 = uVar13 + lVar12 + 0x24;
		*(undefined2 *)(*(int *)puVar7 + *param_7 * 0xe0 + *(uint *)uVar9 * 2) = (short)lVar10;
		if (*(char *)(iVar4 + 0xc0) != '\0') {
			uVar1 = *(uint *)uVar9;
			uVar9 = (ulonglong)uVar1;
			param_6 = 0;
			ChangeLightXY((uint) * (byte *)(iVar4 + 0xdb), *param_7, uVar1);
		}
		uVar13 = (ulonglong) * (uint *)(puVar6 + iVar5 + 0x48);
		M_StartStand((int)param_1, *(uint *)(puVar6 + iVar5 + 0x48), (char)uVar9, (char)lVar10,
		    (char)param_5, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffb8);
		uVar11 = 1;
	} else {
		uVar13 = uVar13 + lVar12;
		iVar3 = (int)uVar13;
		if (*(int *)(iVar3 + 0x60) == 0) {
			*(uint *)lVar10 = uVar1 + 1;
			*(int *)(iVar3 + 0x88) = *(int *)(iVar3 + 0x88) + *(int *)(iVar3 + 0x40);
			*(int *)(iVar3 + 0x8c) = *(int *)(iVar3 + 0x8c) + *(int *)(iVar3 + 0x44);
			*(int *)(iVar3 + 0x38) = *(int *)(iVar3 + 0x88) >> 4;
			*(int *)(iVar3 + 0x3c) = *(int *)(iVar3 + 0x8c) >> 4;
		}
		uVar11 = 0;
	}
	if (puVar6[iVar5 + 0xc0] != '\0') {
		M_ChangeLightOffset(param_1, uVar13, uVar9, lVar10, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	return uVar11;
}

undefined8
M_DoWalk2(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	int iVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	ulonglong uVar6;
	longlong lVar7;
	undefined7 uVar8;
	undefined uVar9;
	undefined8 uVar10;
	longlong lVar11;
	ulonglong uVar12;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar4 = PTR_DAT_100f187c;
	uVar8 = (undefined7)((ulonglong)param_5 >> 8);
	uVar9 = (undefined)param_5;
	ppuVar5 = &toc;
	uVar12 = ZEXT48(PTR_DAT_100f187c);
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar5 = &toc;
		app_fatal((int)PTR_s_M_DoWalk2__Invalid_monster__d_100f3284, param_1, param_3, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	lVar11 = param_1 * 0xe8;
	iVar3 = (int)lVar11;
	if (*(int *)(puVar4 + iVar3 + 0xe0) == 0) {
		app_fatal((int)ppuVar5[-0x1754], param_1, (ulonglong) * (uint *)(puVar4 + iVar3 + 0xdc), param_4,
		    CONCAT71(uVar8, uVar9), param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	lVar7 = uVar12 + lVar11 + 0x90;
	uVar1 = *(uint *)lVar7;
	uVar6 = (ulonglong)uVar1;
	if (uVar1 == *(uint *)(*(int *)(puVar4 + iVar3 + 0xe0) + 0x94)) {
		uVar6 = uVar12 + lVar11;
		iVar2 = (int)uVar6;
		lVar7 = 0;
		*(undefined2 *)(*(int *)ppuVar5[-0x1d9f] + *(int *)(iVar2 + 0x74) * 0xe0 + *(int *)(iVar2 + 0x78) * 2) = 0;
		if (*(char *)(iVar2 + 0xc0) != '\0') {
			uVar6 = (ulonglong) * (uint *)(iVar2 + 0x24);
			ChangeLightXY((uint) * (byte *)(iVar2 + 0xdb), *(undefined4 *)(iVar2 + 0x20),
			    *(uint *)(iVar2 + 0x24));
		}
		uVar12 = (ulonglong) * (uint *)(puVar4 + iVar3 + 0x48);
		M_StartStand((int)param_1, *(uint *)(puVar4 + iVar3 + 0x48), (char)uVar6, (char)lVar7, uVar9,
		    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffb8);
		uVar10 = 1;
	} else {
		uVar12 = uVar12 + lVar11;
		iVar2 = (int)uVar12;
		if (*(int *)(iVar2 + 0x60) == 0) {
			*(uint *)lVar7 = uVar1 + 1;
			*(int *)(iVar2 + 0x88) = *(int *)(iVar2 + 0x88) + *(int *)(iVar2 + 0x40);
			*(int *)(iVar2 + 0x8c) = *(int *)(iVar2 + 0x8c) + *(int *)(iVar2 + 0x44);
			*(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0x88) >> 4;
			*(int *)(iVar2 + 0x3c) = *(int *)(iVar2 + 0x8c) >> 4;
		}
		uVar10 = 0;
	}
	if (puVar4[iVar3 + 0xc0] != '\0') {
		M_ChangeLightOffset(param_1, uVar12, uVar6, lVar7, CONCAT71(uVar8, uVar9), param_6, param_7, param_8,
		    in_stack_ffffffb8);
	}
	return uVar10;
}

undefined8
M_DoWalk3(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    longlong param_5, undefined *param_6, int param_7, undefined4 param_8, undefined4 param_9)

{
	int *piVar1;
	uint uVar2;
	undefined *puVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	int iVar8;
	ulonglong uVar9;
	ulonglong uVar10;
	undefined8 uVar11;
	longlong lVar12;
	ulonglong uVar13;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar6 = PTR_DAT_100f1954;
	puVar5 = PTR_DAT_100f187c;
	ppuVar7 = &toc;
	uVar13 = ZEXT48(PTR_DAT_100f187c);
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar7 = &toc;
		app_fatal((int)PTR_s_M_DoWalk3__Invalid_monster__d_100f327c, param_1, param_3, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	lVar12 = param_1 * 0xe8;
	iVar4 = (int)lVar12;
	if (*(int *)(puVar5 + iVar4 + 0xe0) == 0) {
		app_fatal((int)ppuVar7[-0x1756], param_1, (ulonglong) * (uint *)(puVar5 + iVar4 + 0xdc), param_4,
		    param_5, param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	uVar10 = uVar13 + lVar12 + 0x90;
	uVar2 = *(uint *)uVar10;
	uVar9 = (ulonglong)uVar2;
	if (uVar2 == *(uint *)(*(int *)(puVar5 + iVar4 + 0xe0) + 0x94)) {
		puVar3 = puVar5 + iVar4;
		param_8 = 0;
		iVar8 = (int)(uVar13 + lVar12);
		param_6 = puVar5 + iVar4;
		param_7 = *(int *)puVar6;
		param_5 = param_1 + 1;
		piVar1 = (int *)ppuVar7[-0x1de7];
		*(undefined2 *)(param_7 + *(int *)(puVar3 + 0x20) * 0xe0 + *(int *)(iVar8 + 0x24) * 2) = 0;
		*(undefined4 *)(puVar3 + 0x20) = *(undefined4 *)(param_6 + 0x74);
		*(undefined4 *)(iVar8 + 0x24) = *(undefined4 *)(param_6 + 0x78);
		iVar8 = *(int *)(param_6 + 0x80) * 0x70 + *(int *)(param_6 + 0x84);
		*(byte *)(*piVar1 + iVar8) = *(byte *)(*piVar1 + iVar8) & 0xef;
		uVar9 = uVar13 + lVar12 + 0x24;
		uVar2 = *(uint *)puVar6;
		uVar10 = (ulonglong)uVar2;
		*(undefined2 *)(uVar2 + *(int *)(puVar3 + 0x20) * 0xe0 + *(uint *)uVar9 * 2) = (short)param_5;
		if (param_6[0xc0] != '\0') {
			uVar2 = *(uint *)uVar9;
			uVar9 = (ulonglong)uVar2;
			param_8 = 0;
			ChangeLightXY((uint)(byte)param_6[0xdb], *(int *)(puVar3 + 0x20), uVar2);
		}
		uVar13 = (ulonglong) * (uint *)(puVar5 + iVar4 + 0x48);
		M_StartStand((int)param_1, *(uint *)(puVar5 + iVar4 + 0x48), (char)uVar9, (char)uVar10,
		    (char)param_5, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffb8);
		uVar11 = 1;
	} else {
		uVar13 = uVar13 + lVar12;
		iVar8 = (int)uVar13;
		if (*(int *)(iVar8 + 0x60) == 0) {
			*(uint *)uVar10 = uVar2 + 1;
			*(int *)(iVar8 + 0x88) = *(int *)(iVar8 + 0x88) + *(int *)(iVar8 + 0x40);
			*(int *)(iVar8 + 0x8c) = *(int *)(iVar8 + 0x8c) + *(int *)(iVar8 + 0x44);
			*(int *)(iVar8 + 0x38) = *(int *)(iVar8 + 0x88) >> 4;
			*(int *)(iVar8 + 0x3c) = *(int *)(iVar8 + 0x8c) >> 4;
		}
		uVar11 = 0;
	}
	if (puVar5[iVar4 + 0xc0] != '\0') {
		M_ChangeLightOffset(param_1, uVar13, uVar9, uVar10, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	return uVar11;
}

void M_TryM2MHit(ulonglong param_1, ulonglong param_2, ulonglong param_3, longlong param_4,
    longlong param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int *piVar1;
	int *piVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	longlong lVar5;
	undefined8 uVar6;
	ulonglong uVar7;
	undefined uVar9;
	int iVar8;
	undefined7 uVar10;
	undefined uVar11;
	undefined7 uVar12;
	undefined uVar13;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffa8;
	undefined uVar14;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 auStack56[5];
	undefined4 local_24;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	puVar3 = PTR_DAT_100f187c;
	uVar12 = (undefined7)((ulonglong)param_5 >> 8);
	uVar13 = (undefined)param_5;
	uVar10 = (undefined7)((ulonglong)param_4 >> 8);
	uVar11 = (undefined)param_4;
	ppuVar4 = &toc;
	local_24 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar7 = param_3;
	if (199 < (param_2 & 0xffffffff)) {
		uVar7 = param_3;
		ppuVar4 = &toc;
		app_fatal((int)PTR_s_M_TryM2MHit__Invalid_monster__d_100f3274, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffa8,
		    in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4, in_stack_ffffffb8,
		    in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4);
	}
	uVar14 = (undefined)in_stack_ffffffa8;
	iVar8 = (int)param_2 * 0xe8;
	if (*(char **)(puVar3 + iVar8 + 0xe0) == (char *)0x0) {
		uVar7 = (ulonglong) * (uint *)(puVar3 + iVar8 + 0xdc);
		app_fatal((int)ppuVar4[-0x1758], param_2, uVar7, CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13), param_6, param_7, param_8, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffa8,
		    in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4, in_stack_ffffffb8,
		    in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4);
	}
	piVar1 = (int *)(puVar3 + iVar8 + 0x98);
	if ((*piVar1 >> 6 != 0) && ((**(char **)(puVar3 + iVar8 + 0xe0) != ' ' || (puVar3[iVar8 + 8] != '\x02')))) {
		lVar5 = random(4, 100, (char)uVar7, uVar11, uVar13, (char)param_6, (char)param_7, (char)param_8,
		    in_stack_ffffff98, in_stack_ffffff9f, uVar14);
		uVar9 = (undefined)uVar7;
		lVar5._4_4_ = (int)lVar5;
		piVar2 = (int *)(puVar3 + iVar8 + 4);
		if (*piVar2 == 0xf) {
			lVar5._4_4_ = 0;
		}
		uVar6 = CheckMonsterHit(param_2, auStack56, uVar7, CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13),
		    param_6, param_7, param_8, in_stack_ffffff98);
		if ((int)uVar6 == 0) {
			if (lVar5._4_4_ < (int)param_3) {
				lVar5 = random(5, (param_5 - param_4) + 1, uVar9, uVar11, uVar13, (char)param_6,
				    (char)param_7, (char)param_8, in_stack_ffffff98, in_stack_ffffff9f, uVar14);
				iVar8 = (int)param_4 + (int)lVar5;
				uVar7 = (ulonglong)(uint)(iVar8 * 0x40);
				*piVar1 = *piVar1 + iVar8 * -0x40;
				if (*piVar1 >> 6 == 0) {
					if (*piVar2 == 0xf) {
						M2MStartKill(param_1, param_2, uVar7, CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13),
						    param_6, param_7, param_8, in_stack_ffffff98);
						*piVar2 = 0xf;
					} else {
						M2MStartKill(param_1, param_2, uVar7, CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13),
						    param_6, param_7, param_8, in_stack_ffffff98);
					}
				} else {
					if (*piVar2 == 0xf) {
						M2MStartHit(param_2, param_1, uVar7, CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13),
						    param_6, param_7, param_8, in_stack_ffffff98);
						*piVar2 = 0xf;
					} else {
						M2MStartHit(param_2, param_1, uVar7, CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13),
						    param_6, param_7, param_8, in_stack_ffffff98);
					}
				}
			}
		}
	}
	return;
}

void M_TryH2HHit(ulonglong param_1, ulonglong param_2, ulonglong param_3, longlong param_4,
    longlong param_5, undefined4 param_6, undefined4 param_7, undefined8 param_8,
    undefined4 param_9)

{
	byte bVar1;
	char cVar2;
	byte bVar3;
	undefined *puVar4;
	undefined *puVar5;
	uint *puVar6;
	undefined *puVar7;
	uint *puVar8;
	undefined *puVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	undefined *puVar13;
	undefined *puVar14;
	int iVar15;
	int iVar16;
	undefined **ppuVar17;
	longlong lVar18;
	longlong lVar19;
	longlong lVar20;
	undefined8 uVar21;
	undefined uVar25;
	ulonglong uVar22;
	uint *puVar23;
	uint uVar24;
	undefined uVar28;
	ulonglong uVar26;
	ulonglong uVar27;
	undefined uVar30;
	ulonglong uVar29;
	undefined uVar33;
	ulonglong uVar31;
	undefined4 uVar32;
	undefined uVar35;
	undefined4 uVar34;
	undefined4 uVar36;
	uint *puVar37;
	uint *puVar38;
	int iVar39;
	uint uVar40;
	undefined4 in_stack_ffffff68;
	undefined in_stack_ffffff6f;
	undefined4 in_stack_ffffff78;
	undefined uVar41;
	undefined4 in_stack_ffffff7c;
	undefined4 in_stack_ffffff80;
	undefined4 in_stack_ffffff84;
	undefined4 in_stack_ffffff88;
	undefined4 in_stack_ffffff8c;
	undefined4 in_stack_ffffff90;
	undefined4 in_stack_ffffff94;

	puVar9 = PTR_DAT_100f196c;
	puVar14 = PTR_DAT_100f187c;
	puVar13 = PTR_DAT_100f1828;
	uVar25 = (undefined)param_3;
	ppuVar17 = &toc;
	lVar18 = param_4;
	lVar19 = param_5;
	if (199 < (param_1 & 0xffffffff)) {
		lVar18 = param_4;
		lVar19 = param_5;
		ppuVar17 = &toc;
		app_fatal((int)PTR_s_M_TryH2HHit__Invalid_monster__d_100f326c, param_1, param_3, param_4, param_5, param_6, param_7, (int)param_8, in_stack_ffffff68, in_stack_ffffff6f, in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84, in_stack_ffffff88,
		    in_stack_ffffff8c, in_stack_ffffff90, in_stack_ffffff94);
	}
	uVar41 = (undefined)in_stack_ffffff78;
	uVar30 = (undefined)param_5;
	uVar28 = (undefined)lVar18;
	iVar10 = (int)param_1 * 0xe8;
	puVar4 = puVar14 + iVar10;
	if (*(int *)(puVar4 + 0xe0) == 0) {
		uVar25 = (undefined) * (uint *)(puVar14 + iVar10 + 0xdc);
		app_fatal((int)ppuVar17[-0x175a], param_1, (ulonglong) * (uint *)(puVar14 + iVar10 + 0xdc), lVar18, param_5, param_6, param_7, (int)param_8, in_stack_ffffff68, in_stack_ffffff6f,
		    in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84,
		    in_stack_ffffff88, in_stack_ffffff8c, in_stack_ffffff90, in_stack_ffffff94);
	}
	iVar39 = (int)lVar19;
	uVar35 = (undefined)param_7;
	uVar33 = (undefined)param_6;
	puVar5 = puVar14 + iVar10;
	if ((*(uint *)(puVar5 + 0xa0) & 0x10) == 0) {
		iVar12 = (int)param_2;
		iVar11 = iVar12 * 0x55ec;
		puVar6 = (uint *)(puVar13 + iVar11 + 0x194);
		if ((int)*puVar6 >> 6 != 0) {
			puVar7 = puVar13 + iVar11;
			if ((puVar7[0x139] == '\0') && ((puVar7[0x11c] & 1) == 0)) {
				puVar37 = (uint *)(puVar7 + 0x38);
				lVar18 = abs((ulonglong) * (uint *)(puVar14 + iVar10 + 0x20) - (ulonglong) * (uint *)(puVar7 + 0x38));
				puVar38 = (uint *)(puVar7 + 0x3c);
				lVar19 = abs((ulonglong) * (uint *)(puVar14 + iVar10 + 0x24) - (ulonglong) * (uint *)(puVar7 + 0x3c));
				if (((int)lVar18 < 2) && ((int)lVar19 < 2)) {
					lVar18 = random(0x62, 100, uVar25, uVar28, uVar30, uVar33, uVar35, (char)param_8,
					    in_stack_ffffff68, in_stack_ffffff6f, uVar41);
					bVar3 = puVar14[iVar10 + 0xc4];
					uVar31 = (ulonglong)bVar3;
					lVar19 = param_3 + 0x1e;
					uVar24 = *(uint *)(puVar7 + 0x170);
					bVar1 = puVar7[0x1b4];
					uVar29 = (ulonglong)bVar1;
					uVar24 = (int)uVar24 / 5 + ((int)uVar24 >> 0x1f);
					iVar15 = ((int)lVar19 - (*(int *)(puVar7 + 0x554c) + *(int *)(puVar7 + 0x5558) + uVar24 + (uVar24 >> 0x1f))) + ((int)(char)bVar3 - (int)(char)bVar1) * 2;
					if (iVar15 < 0xf) {
						iVar15 = 0xf;
					}
					cVar2 = *ppuVar17[-0x1df9];
					if ((cVar2 == '\x0e') && (iVar15 < 0x14)) {
						iVar15 = 0x14;
					}
					if ((cVar2 == '\x0f') && (iVar15 < 0x19)) {
						iVar15 = 0x19;
					}
					if ((cVar2 == '\x10') && (iVar15 < 0x1e)) {
						iVar15 = 0x1e;
					}
					lVar20._4_4_ = *(int *)(puVar13 + iVar11);
					if (((lVar20._4_4_ == 0) || (lVar20._4_4_ == 4)) && (puVar13[iVar11 + 0x138] != '\0')) {
						lVar20 = random(0x62, 100, bVar3, (char)*(int *)(puVar7 + 0x554c), bVar1, bVar3,
						    (char)lVar19, (char)param_8, in_stack_ffffff68, in_stack_ffffff6f,
						    uVar41);
						lVar20._4_4_ = (int)lVar20;
					} else {
						lVar20._4_4_ = 100;
					}
					uVar22 = (ulonglong) * (uint *)(puVar13 + iVar11 + 0x188);
					bVar1 = puVar7[0x1b4];
					uVar26 = SEXT18((char)bVar1);
					lVar20 = (uVar22 + (ulonglong) * (uint *)(puVar7 + 0x170)) - (ulonglong)(uint)(((int)(char)puVar14[iVar10 + 0xc4] - (int)(char)bVar1) * 2);
					iVar16 = (int)lVar20;
					if (lVar20 < 0) {
						iVar16 = 0;
					}
					if (100 < iVar16) {
						iVar16 = 100;
					}
					if ((int)lVar18 < iVar15) {
						if (lVar20._4_4_ < iVar16) {
							uVar26 = (ulonglong) * (uint *)(puVar14 + iVar10 + 0x20);
							uVar24 = *(uint *)(puVar14 + iVar10 + 0x24);
							uVar27 = (ulonglong)uVar24;
							uVar22 = GetDirection((ulonglong)*puVar37, *puVar38, uVar26, uVar24);
							StartPlrBlock(param_2, uVar22, uVar26, uVar27, uVar29, uVar31, lVar19, param_8,
							    in_stack_ffffff68);
						} else {
							if ((**(char **)(puVar4 + 0xe0) == '\x03') && (iVar12 == *(int *)ppuVar17[-0x1deb])) {
								uVar22 = 0xffffffffffffffff;
								iVar15 = -1;
								puVar23 = (uint *)ppuVar17[-0x1d98];
								uVar27 = (ulonglong) * (uint *)ppuVar17[-0x1d9a];
								if (0 < (int)*(uint *)ppuVar17[-0x1d9a]) {
									do {
										uVar26 = (ulonglong)*puVar23;
										iVar15 = *puVar23 * 0xb4;
										if ((*(int *)(puVar9 + iVar15) == 0xd) && (iVar12 == *(int *)(puVar9 + iVar15 + 0x78))) {
											uVar22 = uVar26;
										}
										iVar15 = (int)uVar22;
										puVar23 = puVar23 + 1;
										uVar27 = uVar27 - 1;
									} while (uVar27 != 0);
								}
								puVar23 = (uint *)(puVar13 + iVar11 + 0x198);
								uVar24 = *puVar23;
								uVar22 = (ulonglong)uVar24;
								if (0x40 < (int)uVar24) {
									puVar8 = (uint *)(puVar13 + iVar11 + 400);
									uVar26 = (ulonglong)*puVar8;
									if (0x40 < (int)*puVar8) {
										*puVar23 = uVar24 - 0x40;
										if (((int)*puVar23 < (int)*puVar6) && (*puVar6 = *puVar23, -1 < iVar15)) {
											*(uint *)(puVar9 + iVar15 * 0xb4 + 0x94) = *puVar6;
										}
										*puVar8 = *puVar8 - 0x40;
										puVar23 = (uint *)(puVar13 + iVar11 + 0x18c);
										uVar22 = (ulonglong)*puVar23;
										if (((int)*puVar8 < (int)*puVar23) && (*puVar23 = *puVar8, -1 < iVar15)) {
											*(uint *)(puVar9 + iVar15 * 0xb4 + 0x98) = *puVar23;
										}
									}
								}
							}
							lVar18 = random(99, (ulonglong)(uint)(((iVar39 - (int)param_4) + 1) * 0x40),
							    (char)uVar22, (char)uVar26, (char)uVar29, (char)uVar31, (char)lVar19, (char)param_8, in_stack_ffffff68, in_stack_ffffff6f, uVar41);
							iVar39 = (int)param_4 * 0x40 + (int)lVar18 + *(int *)(puVar13 + iVar11 + 0x556c) * 0x40;
							if (iVar39 < 0x40) {
								iVar39 = 0x40;
							}
							if (iVar12 == *(int *)ppuVar17[-0x1deb]) {
								*puVar6 = *puVar6 - iVar39;
								*(int *)(puVar13 + iVar11 + 0x18c) = *(int *)(puVar13 + iVar11 + 0x18c) - iVar39;
							}
							if ((*(uint *)(puVar13 + iVar11 + 0x5568) & 0x4000000) != 0) {
								lVar18 = random(99, 3, (char)uVar22, (char)uVar26, (char)uVar29, (char)uVar31,
								    (char)lVar19, (char)param_8, in_stack_ffffff68, in_stack_ffffff6f, uVar41);
								puVar9 = puVar14 + iVar10;
								iVar15 = (int)lVar18 + 1;
								uVar22 = (ulonglong)(uint)(iVar15 * 0x40);
								*(int *)(puVar9 + 0x98) = *(int *)(puVar9 + 0x98) + iVar15 * -0x40;
								if (*(int *)(puVar9 + 0x98) >> 6 == 0) {
									M_StartKill(param_1, param_2, uVar22, uVar26, uVar29, (int)uVar31, (int)lVar19,
									    (int)param_8, in_stack_ffffff68);
								} else {
									M_StartHit(param_1, param_2, uVar22, uVar26, uVar29, (int)uVar31, (int)lVar19,
									    (int)param_8, in_stack_ffffff68);
								}
							}
							if ((((*(uint *)(puVar5 + 0xa0) & 0x1000) == 0) && (**(char **)(puVar4 + 0xe0) == '2')) && (*ppuVar17[-0x1dfc] != '\x01')) {
								*(int *)(puVar14 + iVar10 + 0x98) = *(int *)(puVar14 + iVar10 + 0x98) + iVar39;
							}
							puVar9 = puVar13 + iVar11;
							if ((int)*(uint *)(puVar9 + 0x198) < (int)*puVar6) {
								*puVar6 = *(uint *)(puVar9 + 0x198);
								*(undefined4 *)(puVar9 + 0x18c) = *(undefined4 *)(puVar9 + 400);
							}
							if ((int)*puVar6 >> 6 == 0) {
								SyncPlrKill(param_2, 0, uVar22, uVar26, uVar29, uVar31, lVar19, param_8, in_stack_ffffff68);
							} else {
								StartPlrHit(param_2, (char)iVar39, 0, uVar26, uVar29, uVar31, lVar19, param_8,
								    in_stack_ffffff68);
								uVar34 = (undefined4)lVar19;
								uVar32 = (undefined4)uVar31;
								uVar36 = (undefined4)param_8;
								if ((*(uint *)(puVar5 + 0xa0) & 0x80) != 0) {
									if (*(int *)(puVar13 + iVar11) != 7) {
										StartPlrHit(param_2, '\0', 1, uVar26, uVar29, uVar31, lVar19, param_8,
										    in_stack_ffffff68);
									}
									uVar31 = (ulonglong)*puVar37;
									uVar29 = (ulonglong)
									    * (uint *)(ppuVar17[-0x1c7b] + *(int *)(puVar14 + iVar10 + 0x48) * 4);
									lVar19 = uVar31 + uVar29;
									lVar18 = (ulonglong)*puVar38 + (ulonglong) * (uint *)(ppuVar17[-0x1c7c] + *(int *)(puVar14 + iVar10 + 0x48) * 4);
									uVar24 = (uint)lVar18;
									uVar21 = PosOkPlayer(iVar12, lVar19, uVar24,
									    (char)*(uint *)(ppuVar17[-0x1c7b] + *(int *)(puVar14 + iVar10 + 0x48) * 4),
									    (char)*puVar37, (char)uVar32, (char)uVar34, (char)uVar36,
									    in_stack_ffffff68);
									if ((int)uVar21 != 0) {
										uVar40 = (uint)lVar19;
										*puVar37 = uVar40;
										*puVar38 = uVar24;
										uVar22 = (ulonglong) * (uint *)(puVar13 + iVar11 + 0x70);
										FixPlayerLocation(param_2, *(uint *)(puVar13 + iVar11 + 0x70), lVar18, uVar29, uVar31,
										    uVar32, uVar34, uVar36, in_stack_ffffff68);
										FixPlrWalkTags(param_2, uVar22, lVar18, uVar29, uVar31, uVar32, uVar34, uVar36,
										    in_stack_ffffff68);
										*(undefined *)(*(int *)ppuVar17[-0x1da0] + uVar40 * 0x70 + uVar24) = (char)(param_2 + 1);
										SetPlayerOld(param_2, param_2 + 1, lVar18, uVar29, uVar31, uVar32, uVar34, uVar36,
										    in_stack_ffffff68);
									}
								}
							}
						}
					}
				}
			}
		}
	} else {
		M_TryM2MHit(param_1, param_2, param_3, param_4, lVar19, param_6, param_7, (int)param_8,
		    in_stack_ffffff68);
	}
	return;
}

ulonglong M_DoAttack(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined8 param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	int iVar3;
	int iVar4;
	undefined **ppuVar5;
	byte bVar6;
	byte bVar7;
	byte bVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar2 = PTR_DAT_100f187c;
	bVar6 = (byte)param_3;
	ppuVar5 = &toc;
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar5 = &toc;
		app_fatal((int)PTR_s_M_DoAttack__Invalid_monster__d_100f3264, param_1, param_3, param_4, param_5,
		    param_6, param_7, (int)param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	iVar4 = (int)param_1;
	iVar3 = iVar4 * 0xe8;
	if (*(int *)(puVar2 + iVar3 + 0xe0) == 0) {
		bVar6 = (byte) * (uint *)(puVar2 + iVar3 + 0xdc);
		app_fatal((int)ppuVar5[-0x175c], param_1, (ulonglong) * (uint *)(puVar2 + iVar3 + 0xdc), param_4,
		    param_5, param_6, param_7, (int)param_8, in_stack_ffffffb8, in_stack_ffffffbf,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	bVar8 = (byte)param_5;
	bVar7 = (byte)param_4;
	if (*(int *)(puVar2 + iVar3 + 0xe0) == 0) {
		bVar6 = (byte) * (uint *)(puVar2 + iVar3 + 0xdc);
		app_fatal((int)ppuVar5[-0x175d], param_1, (ulonglong) * (uint *)(puVar2 + iVar3 + 0xdc), param_4,
		    param_5, param_6, param_7, (int)param_8, in_stack_ffffffb8, in_stack_ffffffbf,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	puVar2 = puVar2 + iVar3;
	if (*(uint *)(puVar2 + 0x68) == (uint) * (byte *)(*(int *)(puVar2 + 0xe4) + 0x6a)) {
		bVar6 = puVar2[200];
		bVar7 = puVar2[0xc9];
		bVar8 = puVar2[0xca];
		M_TryH2HHit(param_1, (ulonglong) * (uint *)(puVar2 + 0x4c), (ulonglong)bVar6, (ulonglong)bVar7,
		    (ulonglong)bVar8, param_6, param_7, param_8, in_stack_ffffffb8);
		if (puVar2[0x9c] != '\x18') {
			PlayEffect(iVar4, 0, bVar6, bVar7, bVar8, (char)param_6, (char)param_7, (char)param_8,
			    in_stack_ffffffb8);
		}
	}
	if (((0x3b < **(byte **)(puVar2 + 0xe0)) && (**(byte **)(puVar2 + 0xe0) < 0x40)) && (*(int *)(puVar2 + 0x68) == 9)) {
		bVar6 = (byte)((ulonglong)(byte)puVar2[200] + 10);
		bVar7 = (byte)((ulonglong)(byte)puVar2[0xc9] - 2);
		bVar8 = (byte)((ulonglong)(byte)puVar2[0xca] - 2);
		M_TryH2HHit(param_1, (ulonglong) * (uint *)(puVar2 + 0x4c), (ulonglong)(byte)puVar2[200] + 10,
		    (ulonglong)(byte)puVar2[0xc9] - 2, (ulonglong)(byte)puVar2[0xca] - 2, param_6, param_7, param_8, in_stack_ffffffb8);
		PlayEffect(iVar4, 0, bVar6, bVar7, bVar8, (char)param_6, (char)param_7, (char)param_8,
		    in_stack_ffffffb8);
	}
	uVar10 = (undefined)param_7;
	uVar9 = (undefined)param_6;
	uVar11 = (undefined)param_8;
	if (((0x4b < **(byte **)(puVar2 + 0xe0)) && (**(byte **)(puVar2 + 0xe0) < 0x50)) && (*(int *)(puVar2 + 0x68) == 0xd)) {
		bVar6 = (byte)((ulonglong)(byte)puVar2[200] - 0x14);
		bVar7 = (byte)((ulonglong)(byte)puVar2[0xc9] + 4);
		bVar8 = (byte)((ulonglong)(byte)puVar2[0xca] + 4);
		M_TryH2HHit(param_1, (ulonglong) * (uint *)(puVar2 + 0x4c), (ulonglong)(byte)puVar2[200] - 0x14,
		    (ulonglong)(byte)puVar2[0xc9] + 4, (ulonglong)(byte)puVar2[0xca] + 4, param_6, param_7, param_8, in_stack_ffffffb8);
		PlayEffect(iVar4, 0, bVar6, bVar7, bVar8, uVar9, uVar10, uVar11, in_stack_ffffffb8);
	}
	if ((puVar2[0x9c] == '\x18') && (*(int *)(puVar2 + 0x68) == 1)) {
		PlayEffect(iVar4, 0, bVar6, bVar7, bVar8, uVar9, uVar10, uVar11, in_stack_ffffffb8);
	}
	iVar3 = *(int *)(puVar2 + 0x68);
	iVar1 = *(int *)(puVar2 + 100);
	if (iVar3 == iVar1) {
		M_StartStand(iVar4, *(int *)(puVar2 + 0x48), bVar6, bVar7, bVar8, uVar9, uVar10, uVar11,
		    in_stack_ffffffb8);
	}
	return (ulonglong)(iVar3 == iVar1);
}

ulonglong M_DoRAttack(ulonglong param_1, undefined8 param_2, undefined8 param_3, ulonglong param_4,
    ulonglong param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	bool bVar1;
	uint uVar2;
	undefined *puVar3;
	int iVar4;
	int iVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	ulonglong uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar13;
	ulonglong uVar12;
	undefined uVar15;
	longlong lVar14;
	ulonglong uVar16;
	undefined uVar17;
	int iVar18;
	int iVar19;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar6 = PTR_DAT_100f187c;
	uVar16 = SEXT48(param_8);
	lVar14 = (longlong)param_7;
	uVar12 = SEXT48(param_6);
	ppuVar7 = &toc;
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar7 = &toc;
		app_fatal((int)PTR_s_M_DoRAttack__Invalid_monster__d_100f3258, param_1, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffb8,
		    in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
	}
	iVar5 = (int)param_1;
	iVar4 = iVar5 * 0xe8;
	if (*(int *)(puVar6 + iVar4 + 0xe0) == 0) {
		app_fatal((int)ppuVar7[-0x175f], param_1, (ulonglong) * (uint *)(puVar6 + iVar4 + 0xdc), param_4,
		    param_5, (int)uVar12, (int)lVar14, (int)uVar16, in_stack_ffffffa8, in_stack_ffffffaf,
		    in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
	}
	if (*(int *)(puVar6 + iVar4 + 0xe0) == 0) {
		app_fatal((int)ppuVar7[-0x1760], param_1, (ulonglong) * (uint *)(puVar6 + iVar4 + 0xdc), param_4,
		    param_5, (int)uVar12, (int)lVar14, (int)uVar16, in_stack_ffffffa8, in_stack_ffffffaf,
		    in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
	}
	uVar17 = (undefined)uVar16;
	uVar15 = (undefined)lVar14;
	uVar13 = (undefined)uVar12;
	uVar11 = (undefined)param_5;
	uVar10 = (undefined)param_4;
	uVar2 = *(uint *)(puVar6 + iVar4 + 0x68);
	uVar8 = (ulonglong)uVar2;
	uVar9 = (undefined)uVar2;
	if (uVar2 == (uint) * (byte *)(*(int *)(puVar6 + iVar4 + 0xe4) + 0x6a)) {
		iVar19 = *(int *)(puVar6 + iVar4 + 0x74);
		if (iVar19 != -1) {
			if (iVar19 == 0x34) {
				iVar19 = 3;
			} else {
				iVar19 = 1;
			}
			puVar3 = puVar6 + iVar4;
			iVar18 = 0;
			while (true) {
				uVar17 = (undefined)uVar16;
				uVar15 = (undefined)lVar14;
				uVar13 = (undefined)uVar12;
				uVar11 = (undefined)param_5;
				uVar10 = (undefined)param_4;
				uVar9 = (undefined)uVar8;
				if (iVar19 <= iVar18)
					break;
				lVar14 = 1;
				uVar8 = (ulonglong)(byte)puVar3[0x50];
				param_4 = (ulonglong)(byte)puVar3[0x51];
				param_5 = (ulonglong) * (uint *)(puVar3 + 0x48);
				uVar12 = (ulonglong) * (uint *)(puVar3 + 0x74);
				uVar16 = param_1;
				AddMissile((ulonglong) * (uint *)(puVar3 + 0x20), (ulonglong) * (uint *)(puVar3 + 0x24), uVar8,
				    param_4, param_5, *(uint *)(puVar3 + 0x74), 1, param_1, in_stack_ffffffa8,
				    in_stack_ffffffaf, *(undefined4 *)(puVar3 + 0x78), 0);
				iVar18 = iVar18 + 1;
			}
		}
		PlayEffect(iVar5, 0, uVar9, uVar10, uVar11, uVar13, uVar15, uVar17, in_stack_ffffffa8);
	}
	bVar1 = *(uint *)(puVar6 + iVar4 + 0x68) == *(uint *)(puVar6 + iVar4 + 100);
	if (bVar1) {
		M_StartStand(iVar5, *(int *)(puVar6 + iVar4 + 0x48), uVar9, uVar10, uVar11, uVar13, uVar15, uVar17,
		    in_stack_ffffffa8);
	}
	return (ulonglong)bVar1;
}

ulonglong M_DoRSpAttack(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	uint *puVar4;
	int iVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	byte bVar8;
	byte bVar9;
	undefined uVar10;
	longlong lVar11;
	undefined uVar12;
	undefined uVar13;
	longlong lVar14;
	ulonglong uVar15;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar6 = PTR_DAT_100f187c;
	bVar8 = (byte)param_3;
	ppuVar7 = &toc;
	uVar15 = ZEXT48(PTR_DAT_100f187c);
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar7 = &toc;
		app_fatal((int)PTR_s_M_DoRSpAttack__Invalid_monster___100f324c, param_1, param_3, param_4,
		    param_5, param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	lVar14 = param_1 * 0xe8;
	iVar5 = (int)lVar14;
	if (*(int *)(puVar6 + iVar5 + 0xe0) == 0) {
		bVar8 = (byte) * (uint *)(puVar6 + iVar5 + 0xdc);
		app_fatal((int)ppuVar7[-0x1762], param_1, (ulonglong) * (uint *)(puVar6 + iVar5 + 0xdc), param_4,
		    param_5, param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	uVar13 = (undefined)param_8;
	uVar12 = (undefined)param_7;
	uVar10 = (undefined)param_5;
	bVar9 = (byte)param_4;
	if (*(int *)(puVar6 + iVar5 + 0xe0) == 0) {
		bVar8 = (byte) * (uint *)(puVar6 + iVar5 + 0xdc);
		app_fatal((int)ppuVar7[-0x1763], param_1, (ulonglong) * (uint *)(puVar6 + iVar5 + 0xdc), param_4,
		    param_5, param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	lVar11 = uVar15 + lVar14;
	lVar11._7_1_ = (undefined)lVar11;
	iVar3 = (int)lVar11;
	puVar4 = (uint *)(puVar6 + iVar5 + 0x68);
	if ((*puVar4 == (uint) * (byte *)(*(int *)(iVar3 + 0xe4) + 0x6e)) && (*(int *)(iVar3 + 0x60) == 0)) {
		uVar12 = 1;
		bVar8 = *(byte *)(iVar3 + 0x50);
		bVar9 = *(byte *)(iVar3 + 0x51);
		uVar10 = (undefined) * (uint *)(iVar3 + 0x48);
		lVar11._7_1_ = (undefined) * (int *)(iVar3 + 0x74);
		uVar13 = (char)param_1;
		AddMissile((ulonglong) * (uint *)(iVar3 + 0x20), (ulonglong) * (uint *)(iVar3 + 0x24),
		    (ulonglong)bVar8, (ulonglong)bVar9, (ulonglong) * (uint *)(iVar3 + 0x48),
		    *(int *)(iVar3 + 0x74), 1, param_1, in_stack_ffffffb8, in_stack_ffffffbf,
		    *(undefined4 *)(iVar3 + 0x7c), 0);
		PlayEffect((int)param_1, 3, bVar8, bVar9, uVar10, (undefined)lVar11, uVar12, uVar13, in_stack_ffffffb8);
	}
	lVar14 = uVar15 + lVar14;
	iVar3 = (int)lVar14;
	if ((*(char *)(iVar3 + 0x9c) == '\x1a') && (*puVar4 == 3)) {
		lVar14 = lVar14 + 0x78;
		bVar8 = (byte)lVar14;
		iVar2 = *(int *)(iVar3 + 0x78);
		*(int *)(iVar3 + 0x78) = iVar2 + 1;
		if (iVar2 == 0) {
			*(uint *)(iVar3 + 0xa0) = *(uint *)(iVar3 + 0xa0) | 4;
		} else {
			if (*(int *)lVar14 == 0xf) {
				*(uint *)(iVar3 + 0xa0) = *(uint *)(iVar3 + 0xa0) & 0xfffffffb;
			}
		}
	}
	bVar1 = *puVar4 == *(uint *)(puVar6 + iVar5 + 100);
	if (bVar1) {
		M_StartStand((int)param_1, *(int *)(puVar6 + iVar5 + 0x48), bVar8, bVar9, uVar10, (undefined)lVar11,
		    uVar12, uVar13, in_stack_ffffffb8);
	}
	return (ulonglong)bVar1;
}

ulonglong M_DoSAttack(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined8 param_8,
    undefined4 param_9)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	byte bVar6;
	byte bVar7;
	longlong lVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	ulonglong uVar12;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar4 = PTR_DAT_100f187c;
	bVar6 = (byte)param_3;
	ppuVar5 = &toc;
	uVar12 = ZEXT48(PTR_DAT_100f187c);
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar5 = &toc;
		app_fatal((int)PTR_s_M_DoSAttack__Invalid_monster__d_100f3240, param_1, param_3, param_4, param_5, param_6, param_7, (int)param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	iVar3 = (int)(param_1 * 0xe8);
	if (*(int *)(puVar4 + iVar3 + 0xe0) == 0) {
		bVar6 = (byte) * (uint *)(puVar4 + iVar3 + 0xdc);
		app_fatal((int)ppuVar5[-0x1765], param_1, (ulonglong) * (uint *)(puVar4 + iVar3 + 0xdc), param_4,
		    param_5, param_6, param_7, (int)param_8, in_stack_ffffffb8, in_stack_ffffffbf,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	bVar7 = (byte)param_4;
	if (*(int *)(puVar4 + iVar3 + 0xe0) == 0) {
		bVar6 = (byte) * (uint *)(puVar4 + iVar3 + 0xdc);
		app_fatal((int)ppuVar5[-0x1766], param_1, (ulonglong) * (uint *)(puVar4 + iVar3 + 0xdc), param_4,
		    param_5, param_6, param_7, (int)param_8, in_stack_ffffffb8, in_stack_ffffffbf,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	uVar10 = (undefined)param_7;
	uVar9 = (undefined)param_6;
	uVar11 = (undefined)param_8;
	lVar8 = uVar12 + param_1 * 0xe8;
	lVar8._7_1_ = (byte)lVar8;
	iVar2 = (int)lVar8;
	if (*(uint *)(puVar4 + iVar3 + 0x68) == (uint) * (byte *)(*(int *)(iVar2 + 0xe4) + 0x6e)) {
		bVar6 = *(byte *)(iVar2 + 0xcb);
		bVar7 = *(byte *)(iVar2 + 0xcc);
		lVar8._7_1_ = *(byte *)(iVar2 + 0xcd);
		M_TryH2HHit(param_1, (ulonglong) * (uint *)(iVar2 + 0x4c), (ulonglong)bVar6, (ulonglong)bVar7,
		    (ulonglong)(byte)lVar8, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	bVar1 = *(uint *)(puVar4 + iVar3 + 0x68) == *(uint *)(puVar4 + iVar3 + 100);
	if (bVar1) {
		M_StartStand((int)param_1, *(int *)(puVar4 + iVar3 + 0x48), bVar6, bVar7, (byte)lVar8, uVar9, uVar10,
		    uVar11, in_stack_ffffffb8);
	}
	return (ulonglong)bVar1;
}

undefined8
M_DoFadein(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint *puVar1;
	int iVar2;
	undefined *puVar3;
	undefined8 uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar3 = PTR_DAT_100f187c;
	uVar6 = (undefined)param_5;
	uVar5 = (undefined)param_4;
	uVar9 = (undefined)param_8;
	uVar8 = (undefined)param_7;
	uVar7 = (undefined)param_6;
	if (199 < (param_1 & 0xffffffff)) {
		app_fatal((int)PTR_s_M_DoFadein__Invalid_monster__d_100f3234, param_1, param_3, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	iVar2 = (int)(param_1 * 0xe8);
	puVar1 = (uint *)(puVar3 + iVar2 + 0xa0);
	if ((((*puVar1 & 2) == 0) || (*(int *)(puVar3 + iVar2 + 0x68) != 1)) && (((*puVar1 & 2) != 0 || (*(int *)(puVar3 + iVar2 + 0x68) != *(int *)(puVar3 + iVar2 + 100))))) {
		uVar4 = 0;
	} else {
		M_StartStand((int)param_1, *(int *)(puVar3 + iVar2 + 0x48), (char)(param_1 * 0xe8), uVar5, uVar6,
		    uVar7, uVar8, uVar9, in_stack_ffffffb8);
		uVar4 = 1;
		*puVar1 = *puVar1 & 0xfffffffd;
	}
	return uVar4;
}

undefined8
M_DoFadeout(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	longlong lVar1;
	uint *puVar2;
	int iVar3;
	undefined *puVar4;
	undefined8 uVar5;
	longlong lVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	ulonglong uVar11;
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

	puVar4 = PTR_DAT_100f187c;
	uVar7 = (undefined)param_5;
	uVar10 = (undefined)param_8;
	uVar9 = (undefined)param_7;
	uVar8 = (undefined)param_6;
	uVar11 = ZEXT48(PTR_DAT_100f187c);
	if (199 < (param_1 & 0xffffffff)) {
		app_fatal((int)PTR_s_M_DoFadeout__Invalid_monster__d_100f3230, param_1, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8,
		    in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
	}
	lVar6 = param_1 * 0xe8;
	lVar1 = uVar11 + lVar6 + 0xa0;
	puVar2 = (uint *)lVar1;
	iVar3 = (int)lVar6;
	if ((((*puVar2 & 2) == 0) || (*(int *)(puVar4 + iVar3 + 0x68) != 1)) && (((*puVar2 & 2) != 0 || (*(int *)(puVar4 + iVar3 + 0x68) != *(int *)(puVar4 + iVar3 + 100))))) {
		uVar5 = 0;
	} else {
		if ((**(byte **)(puVar4 + iVar3 + 0xe0) < 0x48) || (0x4b < **(byte **)(puVar4 + iVar3 + 0xe0))) {
			*puVar2 = *puVar2 & 0xfffffffd;
			*puVar2 = *puVar2 | 1;
		} else {
			*puVar2 = *puVar2 & 0xfffffffd;
		}
		M_StartStand((int)param_1, *(int *)(puVar4 + iVar3 + 0x48), (char)lVar6, (char)lVar1, uVar7, uVar8,
		    uVar9, uVar10, in_stack_ffffffc8);
		uVar5 = 1;
	}
	return uVar5;
}

undefined8
M_DoHeal(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
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

	puVar2 = PTR_DAT_100f187c;
	if (199 < (param_1 & 0xffffffff)) {
		app_fatal((int)PTR_s_M_DoHeal__Invalid_monster__d_100f322c, param_1, param_3, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8,
		    in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
	}
	puVar2 = puVar2 + (int)param_1 * 0xe8;
	uVar1 = *(uint *)(puVar2 + 0xa0);
	if ((uVar1 & 8) == 0) {
		if (*(int *)(puVar2 + 0x68) == 1) {
			*(uint *)(puVar2 + 0xa0) = uVar1 & 0xfffffffd;
			*(uint *)(puVar2 + 0xa0) = *(uint *)(puVar2 + 0xa0) | 4;
			if (*(int *)(puVar2 + 0x98) + *(int *)(puVar2 + 0x74) < *(int *)(puVar2 + 0x94)) {
				*(int *)(puVar2 + 0x98) = *(int *)(puVar2 + 0x98) + *(int *)(puVar2 + 0x74);
			} else {
				*(int *)(puVar2 + 0x98) = *(int *)(puVar2 + 0x94);
				*(uint *)(puVar2 + 0xa0) = *(uint *)(puVar2 + 0xa0) & 0xfffffffb;
				*(undefined4 *)(puVar2 + 4) = 7;
			}
		}
	} else {
		*(uint *)(puVar2 + 0xa0) = uVar1 & 0xfffffffb;
		*(undefined4 *)(puVar2 + 4) = 7;
	}
	return 0;
}

undefined8
M_DoTalk(ulonglong param_1, undefined8 param_2, ulonglong param_3, ulonglong param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	uint uVar2;
	int iVar3;
	undefined *puVar4;
	uint *puVar5;
	int iVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined *puVar12;
	undefined *puVar13;
	undefined *puVar14;
	undefined *puVar15;
	undefined **ppuVar16;
	ulonglong uVar17;
	undefined8 uVar18;
	ulonglong uVar19;
	undefined uVar22;
	longlong lVar20;
	ulonglong uVar21;
	undefined uVar23;
	undefined uVar24;
	undefined uVar25;
	undefined uVar26;
	int *piVar27;
	uint *puVar28;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined4 in_stack_ffffff98;
	undefined4 in_stack_ffffff9c;
	undefined4 in_stack_ffffffa0;
	undefined4 in_stack_ffffffa4;
	undefined4 in_stack_ffffffa8;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;

	puVar15 = PTR_DAT_100f1f44;
	puVar14 = PTR_DAT_100f1ab8;
	puVar13 = PTR_DAT_100f1a84;
	puVar12 = PTR_DAT_100f1a80;
	puVar11 = PTR_DAT_100f1a7c;
	puVar10 = PTR_DAT_100f1a78;
	puVar9 = PTR_DAT_100f19cc;
	puVar8 = PTR_DAT_100f191c;
	puVar7 = PTR_DAT_100f187c;
	ppuVar16 = &toc;
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar16 = &toc;
		app_fatal((int)PTR_s_M_DoTalk__Invalid_monster__d_100f3228, param_1, param_3, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff98,
		    in_stack_ffffff9c, in_stack_ffffffa0, in_stack_ffffffa4, in_stack_ffffffa8,
		    in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4);
	}
	iVar3 = (int)param_1;
	iVar6 = iVar3 * 0xe8;
	puVar4 = puVar7 + iVar6;
	M_StartStand(iVar3, *(int *)(puVar4 + 0x48), (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff88);
	puVar28 = (uint *)(puVar4 + 0xd4);
	uVar18 = 7;
	puVar1 = ppuVar16[-0x1c43];
	puVar7[iVar6 + 8] = 7;
	uVar17 = effect_is_playing(*(int *)(puVar1 + *(int *)(puVar4 + 0xd4) * 0x10 + 0xc), 7, (char)param_3,
	    (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8,
	    in_stack_ffffff88);
	if ((int)uVar17 == 0) {
		InitQTextMsg(*puVar28, uVar18, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff88);
		piVar27 = (int *)(puVar4 + 0xdc);
		if (*(int *)(puVar4 + 0xdc) == *(int *)(puVar15 + 4)) {
			uVar2 = *puVar28;
			if (uVar2 == 0x90) {
				puVar9[0x32] = 2;
			}
			*(undefined4 *)(puVar9 + 0x44) = 1;
			if ((uVar2 == 0x91) && (puVar5 = (uint *)(puVar7 + iVar6 + 0xa0), (*puVar5 & 0x40) == 0)) {
				param_4 = 1;
				SpawnItem(iVar3, *(int *)(puVar7 + iVar6 + 0x20) + 1, *(int *)(puVar7 + iVar6 + 0x24) + 1, 1, (char)param_5, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff88);
				*puVar5 = *puVar5 | 0x40;
			}
		}
		if (((*piVar27 == *(int *)(puVar15 + 0x44)) && (*puVar28 == 0x94)) && (puVar5 = (uint *)(puVar7 + iVar6 + 0xa0), (*puVar5 & 0x40) == 0)) {
			puVar9[0x4a] = 2;
			*(undefined4 *)(puVar9 + 0x5c) = 1;
			param_4 = 0;
			param_5 = 0x18;
			param_6 = 1;
			param_7 = 0;
			CreateTypeItem(*(int *)(puVar7 + iVar6 + 0x20) + 1, *(int *)(puVar7 + iVar6 + 0x24) + 1, 0, 0, 0x18,
			    1, 0, (char)param_8, in_stack_ffffff88);
			*puVar5 = *puVar5 | 0x40;
		}
		uVar26 = (undefined)param_8;
		uVar25 = (undefined)param_7;
		uVar24 = (undefined)param_6;
		uVar23 = (undefined)param_5;
		uVar22 = (undefined)param_4;
		if (*piVar27 == *(int *)(puVar15 + 100)) {
			if ((*puVar28 == 0x14) && (puVar5 = (uint *)(puVar7 + iVar6 + 0xa0), (*puVar5 & 0x40) == 0)) {
				uVar17 = (ulonglong) * (uint *)puVar12;
				uVar2 = *(uint *)puVar13;
				ObjChangeMap((ulonglong)uVar2, uVar17, uVar2 + (*(int *)puVar11 >> 1) + 2,
				    uVar17 + ((param_4 & 0xffffffff00000000 | (ulonglong)(uint)(*(int *)puVar10 >> 1)) - 2), param_5, param_6, param_7, param_8, in_stack_ffffff88);
				uVar23 = *puVar14;
				*puVar14 = 9;
				uVar2 = *(uint *)puVar12;
				iVar3 = *(int *)puVar13;
				lVar20 = (ulonglong)uVar2 + (ulonglong)(uint)(*(int *)puVar10 >> 1);
				uVar22 = (undefined)lVar20;
				DRLG_MRectTrans(iVar3, uVar2, iVar3 + (*(int *)puVar11 >> 1) + 4, (int)lVar20);
				*puVar14 = uVar23;
				puVar9[0xb7] = 2;
				if (puVar9[0xaa] == '\x01') {
					puVar9[0xaa] = 2;
				}
				*puVar5 = *puVar5 | 0x40;
			}
			uVar26 = (undefined)param_8;
			uVar25 = (undefined)param_7;
			uVar24 = (undefined)param_6;
			uVar23 = (undefined)param_5;
			if ((byte)puVar9[0xb7] < 2) {
				uVar17 = ZEXT48(ppuVar16[-0x176b]);
				uVar19 = (ulonglong)*puVar28;
				uVar21 = (ulonglong) * (uint *)(puVar7 + iVar6 + 0xa0);
				sprintf((int)puVar8, ppuVar16[-0x176b], *puVar28, *(uint *)(puVar7 + iVar6 + 0xa0),
				    (int)param_5, param_6, param_7, param_8, in_stack_ffffff88, in_stack_ffffff8f,
				    in_stack_ffffff9c, in_stack_ffffffa0, in_stack_ffffffa4, in_stack_ffffffa8,
				    in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4);
				uVar26 = (undefined)param_8;
				uVar25 = (undefined)param_7;
				uVar24 = (undefined)param_6;
				uVar23 = (undefined)param_5;
				uVar22 = (undefined)uVar21;
				app_fatal((int)puVar8, uVar17, uVar19, uVar21, param_5, param_6, param_7, param_8,
				    in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff98, in_stack_ffffff9c,
				    in_stack_ffffffa0, in_stack_ffffffa4, in_stack_ffffffa8, in_stack_ffffffac,
				    in_stack_ffffffb0, in_stack_ffffffb4);
			}
		}
		if (*piVar27 == *(int *)(puVar15 + 0xe4)) {
			uVar2 = *puVar28;
			if (uVar2 == 0x51) {
				puVar9[0x62] = 2;
				*(undefined4 *)(puVar9 + 0x74) = 1;
			}
			if ((uVar2 == 0x53) && (puVar5 = (uint *)(puVar7 + iVar6 + 0xa0), (*puVar5 & 0x40) == 0)) {
				SpawnUnique(6, *(int *)(puVar7 + iVar6 + 0x20) + 1, *(int *)(puVar7 + iVar6 + 0x24) + 1,
				    uVar22, uVar23, uVar24, uVar25, uVar26, in_stack_ffffff88);
				*puVar5 = *puVar5 | 0x40;
			}
		}
		iVar3 = *piVar27;
		if (iVar3 == *(int *)(puVar15 + 0x104)) {
			puVar9[0x117] = 2;
		}
		if ((iVar3 == *(int *)(puVar15 + 0x84)) && (*ppuVar16[-0x1dfc] != '\x01')) {
			puVar9[0x177] = 6;
			(puVar7 + iVar6)[8] = 1;
			(puVar7 + iVar6)[0xa4] = 0xff;
			*puVar28 = 0;
		}
	}
	return 0;
}

void M_Teleport(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	byte bVar1;
	byte bVar2;
	undefined *puVar3;
	bool bVar4;
	int iVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	longlong lVar8;
	ulonglong uVar9;
	undefined4 uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined uVar14;
	undefined uVar15;
	longlong lVar16;
	longlong lVar17;
	undefined uVar18;
	longlong lVar19;
	undefined uVar20;
	int iVar21;
	int iVar22;
	longlong lVar23;
	longlong lVar24;
	longlong lVar25;
	int iVar26;
	longlong lVar27;
	longlong unaff_r28;
	int iVar28;
	longlong unaff_r29;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined4 in_stack_ffffff98;
	undefined4 in_stack_ffffff9c;
	undefined4 in_stack_ffffffa0;
	undefined4 in_stack_ffffffa4;
	undefined4 in_stack_ffffffa8;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;

	puVar6 = PTR_DAT_100f1954;
	uVar18 = (undefined)in_stack_ffffff98;
	uVar12 = (undefined)param_3;
	lVar19 = (longlong)param_8;
	lVar17 = (longlong)param_7;
	lVar16 = (longlong)param_6;
	ppuVar7 = &toc;
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar7 = &toc;
		app_fatal((int)PTR_s_M_Teleport__Invalid_monster__d_100f3220, param_1, param_3, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff98,
		    in_stack_ffffff9c, in_stack_ffffffa0, in_stack_ffffffa4, in_stack_ffffffa8,
		    in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4);
	}
	iVar5 = (int)param_1;
	puVar3 = ppuVar7[-0x1dd5] + iVar5 * 0xe8;
	bVar4 = false;
	if (*(int *)(puVar3 + 4) != 0xf) {
		bVar1 = puVar3[0x50];
		bVar2 = puVar3[0x51];
		lVar8 = random(100, 2, uVar12, (char)param_4, (char)param_5, (char)lVar16, (char)lVar17,
		    (char)lVar19, in_stack_ffffff88, in_stack_ffffff8f, uVar18);
		lVar23 = (ulonglong)(uint)((int)lVar8 << 1) - 1;
		lVar8 = random(100, 2, uVar12, (char)param_4, (char)param_5, (char)lVar16, (char)lVar17,
		    (char)lVar19, in_stack_ffffff88, in_stack_ffffff8f, uVar18);
		lVar8 = (ulonglong)(uint)((int)lVar8 << 1) - 1;
		lVar24 = -lVar23;
		iVar22 = -1;
		while (true) {
			uVar20 = (undefined)lVar19;
			uVar18 = (undefined)lVar17;
			uVar12 = (undefined)lVar16;
			if ((1 < iVar22) || (bVar4))
				break;
			lVar27 = -lVar8;
			lVar25 = (ulonglong)bVar1 + lVar24;
			iVar21 = -1;
			while ((iVar21 < 1 && (!bVar4))) {
				if (((iVar22 != 0) || (iVar21 != 0)) && ((((unaff_r28 = (ulonglong)bVar2 + lVar27, unaff_r29 = lVar25, -1 < unaff_r28 && (iVar28 = (int)unaff_r28, unaff_r29 = lVar25, iVar28 < 0x70)) && (iVar26 = (int)lVar25, unaff_r29 = lVar25, -1 < iVar26)) && ((((unaff_r29 = lVar25, iVar26 < 0x70 && (unaff_r29 = lVar25, iVar26 != *(int *)(puVar3 + 0x20))) && (unaff_r29 = lVar25, iVar28 != *(int *)(puVar3 + 0x24))) && (uVar9 = PosOkMonst(iVar5, iVar26, iVar28, (char)param_4, (char)param_5, (char)lVar16, (char)lVar17, (char)lVar19, in_stack_ffffff88), unaff_r29 = lVar25, (int)uVar9 != 0)))))) {
					bVar4 = true;
					unaff_r29 = lVar25;
				}
				lVar27 = lVar27 + lVar8;
				iVar21 = iVar21 + 1;
			}
			lVar24 = lVar24 + lVar23;
			iVar22 = iVar22 + 1;
		}
		if (bVar4) {
			M_ClearSquares(iVar5);
			uVar15 = 0;
			iVar22 = *(int *)puVar6;
			uVar14 = (undefined)iVar22;
			*(undefined2 *)(iVar22 + *(int *)(puVar3 + 0x20) * 0xe0 + *(int *)(puVar3 + 0x24) * 2) = 0;
			iVar22 = *(int *)puVar6;
			uVar11 = (undefined)iVar22;
			*(undefined2 *)(iVar22 + (int)unaff_r29 * 0xe0 + (int)unaff_r28 * 2) = (short)(param_1 + 1);
			*(int *)(puVar3 + 0x30) = (int)unaff_r29;
			*(int *)(puVar3 + 0x34) = (int)unaff_r28;
			uVar13 = (undefined)(param_1 + 1);
			uVar10 = M_GetDir(iVar5, uVar11, uVar13, uVar14, 0, uVar12, uVar18, uVar20, in_stack_ffffff88);
			*(undefined4 *)(puVar3 + 0x48) = uVar10;
			M_CheckEFlag(iVar5, uVar11, uVar13, uVar14, uVar15, uVar12, uVar18, uVar20, in_stack_ffffff88);
		}
	}
	return;
}

ulonglong M_DoGotHit(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	int iVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	longlong lVar6;
	undefined7 uVar7;
	undefined uVar8;
	undefined7 uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	ulonglong uVar14;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar4 = PTR_DAT_100f187c;
	uVar9 = (undefined7)((ulonglong)param_5 >> 8);
	uVar10 = (undefined)param_5;
	uVar7 = (undefined7)((ulonglong)param_4 >> 8);
	uVar8 = (undefined)param_4;
	ppuVar5 = &toc;
	uVar14 = ZEXT48(PTR_DAT_100f187c);
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar5 = &toc;
		app_fatal((int)PTR_s_M_DoGotHit__Invalid_monster__d_100f321c, param_1, param_3, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	uVar13 = (undefined)param_8;
	uVar12 = (undefined)param_7;
	uVar11 = (undefined)param_6;
	lVar6 = uVar14 + param_1 * 0xe8;
	lVar6._7_1_ = (undefined)lVar6;
	iVar2 = (int)lVar6;
	if (*(int *)(iVar2 + 0xe0) == 0) {
		uVar1 = *(uint *)(iVar2 + 0xdc);
		lVar6._7_1_ = (undefined)uVar1;
		app_fatal((int)ppuVar5[-0x176e], param_1, (ulonglong)uVar1, CONCAT71(uVar7, uVar8),
		    CONCAT71(uVar9, uVar10), param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	puVar4 = puVar4 + (int)(param_1 * 0xe8);
	iVar2 = *(int *)(puVar4 + 0x68);
	iVar3 = *(int *)(puVar4 + 100);
	if (iVar2 == iVar3) {
		M_StartStand((int)param_1, *(int *)(puVar4 + 0x48), (undefined)lVar6, uVar8, uVar10, uVar11, uVar12,
		    uVar13, in_stack_ffffffb8);
	}
	return (ulonglong)(iVar2 == iVar3);
}

void M_UpdateLeader(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	ulonglong uVar2;
	undefined **ppuVar3;
	int *piVar4;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar1 = PTR_DAT_100f187c;
	ppuVar3 = &toc;
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar3 = &toc;
		app_fatal((int)PTR_s_M_UpdateLeader__Invalid_monster___100f3214, param_1, param_3, param_4,
		    param_5, param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	piVar4 = (int *)ppuVar3[-0x1d8a];
	uVar2 = (ulonglong) * (uint *)ppuVar3[-0x1d8b];
	if (0 < (int)*(uint *)ppuVar3[-0x1d8b]) {
		do {
			if ((puVar1[*piVar4 * 0xe8 + 0xd9] == '\x01') && ((uint)param_1 == (uint)(byte)(puVar1 + *piVar4 * 0xe8)[0xd8])) {
				(puVar1 + *piVar4 * 0xe8)[0xd9] = 0;
			}
			piVar4 = piVar4 + 1;
			uVar2 = uVar2 - 1;
		} while (uVar2 != 0);
	}
	if ((puVar1 + (uint)param_1 * 0xe8)[0xd9] == '\x01') {
		(puVar1 + (uint)(byte)(puVar1 + (uint)param_1 * 0xe8)[0xd8] * 0xe8)[0xda] = (puVar1 + (uint)(byte)(puVar1 + (uint)param_1 * 0xe8)[0xd8] * 0xe8)[0xda] + -1;
	}
	return;
}

void DoEnding(undefined8 param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	ulonglong uVar6;
	undefined uVar7;
	undefined8 uVar8;
	undefined uVar9;
	undefined7 uVar10;
	undefined uVar11;
	undefined7 uVar12;
	undefined uVar13;
	undefined7 uVar14;
	undefined uVar15;
	undefined uVar16;
	undefined uVar17;
	undefined uVar18;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined **local_3c;

	puVar4 = PTR_DAT_100f1f20;
	puVar3 = _DAT_100f1d54;
	puVar2 = PTR_DAT_100f17e0;
	uVar14 = (undefined7)((ulonglong)param_5 >> 8);
	uVar15 = (undefined)param_5;
	uVar12 = (undefined7)((ulonglong)param_4 >> 8);
	uVar13 = (undefined)param_4;
	uVar10 = (undefined7)(param_3 >> 8);
	uVar11 = (undefined)param_3;
	ppuVar5 = &toc;
	if (1 < (byte)*PTR_DAT_100f17e0) {
		ppuVar5 = local_3c;
		param_1._7_1_ = SNetLeaveGame(4, (undefined)param_2, uVar11, uVar13, uVar15, (char)param_6, (char)param_7,
		    (char)param_8, (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
		local_3c = ppuVar5;
	}
	music_stop((undefined)param_1, (undefined)param_2, uVar11, uVar13, uVar15, (char)param_6,
	    (char)param_7, (char)param_8, in_stack_ffffffb8);
	if (1 < (byte)*puVar2) {
		ppuVar5 = local_3c;
		Sleep(0xe8, (undefined)param_2, uVar11, uVar13, uVar15, (char)param_6, (char)param_7, (char)param_8,
		    (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
	}
	if (ppuVar5[-0x1dea][*(int *)ppuVar5[-0x1deb] * 0x55ec + 0x15c] == '\0') {
		play_movie(ZEXT48(ppuVar5[-6000]), 0, CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13),
		    CONCAT71(uVar14, uVar15), param_6, param_7, param_8, in_stack_ffffffb8);
	} else {
		if (ppuVar5[-0x1dea][*(int *)ppuVar5[-0x1deb] * 0x55ec + 0x15c] == '\x02') {
			play_movie(ZEXT48(ppuVar5[-0x1771]), 0, CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13),
			    CONCAT71(uVar14, uVar15), param_6, param_7, param_8, in_stack_ffffffb8);
		} else {
			play_movie(ZEXT48(ppuVar5[-0x1772]), 0, CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13),
			    CONCAT71(uVar14, uVar15), param_6, param_7, param_8, in_stack_ffffffb8);
		}
	}
	uVar8 = 0;
	play_movie(ZEXT48(ppuVar5[-0x1773]), 0, CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13),
	    CONCAT71(uVar14, uVar15), param_6, param_7, param_8, in_stack_ffffffb8);
	uVar1 = *puVar3;
	*puVar3 = 1;
	uVar6 = sound_get_or_set_music_volume(&DAT_00000001, (char)uVar8, uVar11, uVar13, uVar15, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffffb8);
	sound_get_or_set_music_volume((undefined *)0x0, (char)uVar8, uVar11, uVar13, uVar15, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffffb8);
	music_start(2, uVar8, CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15),
	    param_6, param_7, param_8, in_stack_ffffffb8);
	uVar18 = (undefined)param_8;
	uVar17 = (undefined)param_7;
	uVar16 = (undefined)param_6;
	*(undefined4 *)puVar4 = 1;
	uVar9 = 1;
	uVar7 = play_movie(ZEXT48(ppuVar5[-0x1774]), 1, CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13),
	    CONCAT71(uVar14, uVar15), param_6, param_7, param_8, in_stack_ffffffb8);
	*(undefined4 *)puVar4 = 0;
	music_stop(uVar7, uVar9, uVar11, uVar13, uVar15, uVar16, uVar17, uVar18, in_stack_ffffffb8);
	sound_get_or_set_music_volume((undefined *)uVar6, uVar9, uVar11, uVar13, uVar15, uVar16, uVar17, uVar18, in_stack_ffffffb8);
	*puVar3 = uVar1;
	return;
}

void PrepDoEnding(void)

{
	byte bVar1;
	uint uVar2;
	undefined *puVar3;
	undefined *puVar4;
	uint uVar5;

	puVar4 = PTR_DAT_100f1a34;
	*_DAT_100f1d18 = DAT_100f4248;
	puVar3 = PTR_DAT_100f1a2c;
	*puVar4 = 1;
	puVar4 = PTR_DAT_100f1a04;
	*(undefined4 *)puVar3 = 0;
	puVar3 = PTR_DAT_100f1824;
	*(undefined4 *)puVar4 = 0;
	puVar4 = PTR_DAT_100f1828;
	uVar5 = *(int *)PTR_DAT_100f1e4c + 1;
	uVar2 = *(uint *)(PTR_DAT_100f1828 + *(int *)puVar3 * 0x55ec + 0x55a8);
	if (uVar5 < uVar2) {
		uVar5 = uVar2;
	}
	*(uint *)(PTR_DAT_100f1828 + *(int *)puVar3 * 0x55ec + 0x55a8) = uVar5;
	bVar1 = *PTR_DAT_100f17e0;
	*(undefined4 *)puVar4 = 0xb;
	puVar4[0x139] = 1;
	if (1 < bVar1) {
		if (*(int *)(puVar4 + 0x194) >> 6 == 0) {
			*(undefined4 *)(puVar4 + 0x194) = 0x40;
		}
		if (*(int *)(puVar4 + 0x1a8) >> 6 == 0) {
			*(undefined4 *)(puVar4 + 0x1a8) = 0x40;
		}
	}
	*(undefined4 *)(puVar4 + 0x55ec) = 0xb;
	puVar4[0x5725] = 1;
	if (1 < bVar1) {
		if (*(int *)(puVar4 + 0x5780) >> 6 == 0) {
			*(undefined4 *)(puVar4 + 0x5780) = 0x40;
		}
		if (*(int *)(puVar4 + 0x5794) >> 6 == 0) {
			*(undefined4 *)(puVar4 + 0x5794) = 0x40;
		}
	}
	*(undefined4 *)(puVar4 + 0xabd8) = 0xb;
	puVar4[0xad11] = 1;
	if (1 < bVar1) {
		if (*(int *)(puVar4 + 0xad6c) >> 6 == 0) {
			*(undefined4 *)(puVar4 + 0xad6c) = 0x40;
		}
		if (*(int *)(puVar4 + 0xad80) >> 6 == 0) {
			*(undefined4 *)(puVar4 + 0xad80) = 0x40;
		}
	}
	*(undefined4 *)(puVar4 + 0x101c4) = 0xb;
	puVar4[0x102fd] = 1;
	if (1 < bVar1) {
		if (*(int *)(puVar4 + 0x10358) >> 6 == 0) {
			*(undefined4 *)(puVar4 + 0x10358) = 0x40;
		}
		if (*(int *)(puVar4 + 0x1036c) >> 6 == 0) {
			*(undefined4 *)(puVar4 + 0x1036c) = 0x40;
			return;
		}
		return;
	}
	return;
}

undefined8
M_DoDeath(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	char *pcVar1;
	uint uVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	int iVar8;
	int iVar10;
	longlong lVar9;
	longlong lVar11;
	ulonglong uVar12;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar4 = PTR_DAT_100f187c;
	puVar6 = PTR_DAT_100f1820;
	puVar5 = PTR_DAT_100f181c;
	ppuVar7 = &toc;
	uVar12 = ZEXT48(PTR_DAT_100f187c);
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar7 = &toc;
		app_fatal((int)PTR_s_M_DoDeath__Invalid_monster__d_100f31fc, param_1, param_3, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	iVar8 = (int)(param_1 * 0xe8);
	if (*(char **)(puVar4 + iVar8 + 0xe0) == (char *)0x0) {
		app_fatal((int)ppuVar7[-0x1776], param_1, (ulonglong) * (uint *)(puVar4 + iVar8 + 0xdc), param_4,
		    param_5, param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	puVar3 = puVar4 + iVar8;
	*(int *)(puVar3 + 0x74) = *(int *)(puVar3 + 0x74) + 1;
	pcVar1 = *(char **)(puVar4 + iVar8 + 0xe0);
	if (*pcVar1 == 'n') {
		if ((longlong)((ulonglong) * (uint *)(puVar4 + iVar8 + 0x20) - (ulonglong) * (uint *)puVar6) < 0) {
			iVar10 = -1;
		} else {
			if ((int)((ulonglong) * (uint *)(puVar4 + iVar8 + 0x20) - (ulonglong) * (uint *)puVar6) < 1) {
				iVar10 = 0;
			} else {
				iVar10 = 1;
			}
		}
		*(int *)puVar6 = *(int *)puVar6 + iVar10;
		if ((longlong)((ulonglong) * (uint *)(puVar4 + iVar8 + 0x24) - (ulonglong) * (uint *)puVar5) < 0) {
			iVar8 = -1;
		} else {
			if ((int)((ulonglong) * (uint *)(puVar4 + iVar8 + 0x24) - (ulonglong) * (uint *)puVar5) < 1) {
				iVar8 = 0;
			} else {
				iVar8 = 1;
			}
		}
		*(int *)puVar5 = *(int *)puVar5 + iVar8;
		if (*(int *)(puVar3 + 0x74) == 0x8c) {
			PrepDoEnding();
		}
	} else {
		puVar4 = puVar4 + iVar8;
		if (*(int *)(puVar4 + 0x68) == *(int *)(puVar4 + 100)) {
			if (puVar4[0xc0] == '\0') {
				AddDead(*(int *)(puVar4 + 0x20), *(int *)(puVar4 + 0x24), (uint)(byte)pcVar1[0x1fd],
				    *(int *)(puVar4 + 0x48));
			} else {
				AddDead(*(int *)(puVar4 + 0x20), *(int *)(puVar4 + 0x24), (uint)(byte)puVar4[0xc2],
				    *(int *)(puVar4 + 0x48));
			}
			lVar11 = uVar12 + param_1 * 0xe8;
			iVar8 = (int)lVar11;
			lVar9 = (ulonglong) * (uint *)(iVar8 + 0x20) * 0xe0;
			uVar2 = *(uint *)ppuVar7[-0x1d9f];
			*(undefined2 *)(uVar2 + (int)lVar9 + *(int *)(iVar8 + 0x24) * 2) = 0;
			*(undefined4 *)(iVar8 + 0x70) = 1;
			M_UpdateLeader(param_1, lVar9, lVar11, (ulonglong)uVar2, 0, param_6, param_7, param_8, in_stack_ffffffb8);
		}
	}
	return 0;
}

ulonglong M_DoSpStand(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	bool bVar1;
	uint uVar2;
	int iVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	longlong lVar6;
	undefined uVar7;
	undefined7 uVar8;
	undefined uVar9;
	undefined7 uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined uVar14;
	ulonglong uVar15;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar4 = PTR_DAT_100f187c;
	uVar10 = (undefined7)((ulonglong)param_5 >> 8);
	uVar11 = (undefined)param_5;
	uVar8 = (undefined7)((ulonglong)param_4 >> 8);
	uVar9 = (undefined)param_4;
	ppuVar5 = &toc;
	uVar15 = ZEXT48(PTR_DAT_100f187c);
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar5 = &toc;
		app_fatal((int)PTR_s_M_DoSpStand__Invalid_monster__d_100f31f4, param_1, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	uVar14 = (undefined)param_8;
	uVar13 = (undefined)param_7;
	uVar12 = (undefined)param_6;
	lVar6 = uVar15 + param_1 * 0xe8;
	uVar7 = (undefined)lVar6;
	iVar3 = (int)lVar6;
	if (*(int *)(iVar3 + 0xe0) == 0) {
		uVar2 = *(uint *)(iVar3 + 0xdc);
		uVar7 = (undefined)uVar2;
		app_fatal((int)ppuVar5[-0x1778], param_1, (ulonglong)uVar2, CONCAT71(uVar8, uVar9),
		    CONCAT71(uVar10, uVar11), param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	iVar3 = (int)(param_1 * 0xe8);
	if (*(uint *)(puVar4 + iVar3 + 0x68) == (uint) * (byte *)(*(int *)(puVar4 + iVar3 + 0xe4) + 0x6e)) {
		PlayEffect((int)param_1, 3, uVar7, uVar9, uVar11, uVar12, uVar13, uVar14, in_stack_ffffffb8);
	}
	bVar1 = *(uint *)(puVar4 + iVar3 + 0x68) == *(uint *)(puVar4 + iVar3 + 100);
	if (bVar1) {
		M_StartStand((int)param_1, *(int *)(puVar4 + iVar3 + 0x48), uVar7, uVar9, uVar11, uVar12, uVar13,
		    uVar14, in_stack_ffffffb8);
	}
	return (ulonglong)bVar1;
}

ulonglong M_DoDelay(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 uVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	int iVar5;
	undefined **ppuVar6;
	int iVar7;
	undefined uVar9;
	longlong lVar8;
	undefined7 uVar10;
	undefined uVar11;
	undefined7 uVar12;
	undefined uVar13;
	undefined uVar14;
	undefined uVar15;
	undefined uVar16;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar3 = PTR_DAT_100f187c;
	uVar9 = (undefined)param_3;
	uVar12 = (undefined7)((ulonglong)param_5 >> 8);
	uVar13 = (undefined)param_5;
	uVar10 = (undefined7)((ulonglong)param_4 >> 8);
	uVar11 = (undefined)param_4;
	ppuVar6 = &toc;
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar6 = &toc;
		param_2._7_1_ = (char)param_1;
		app_fatal((int)PTR_s_M_DoDelay__Invalid_monster__d_100f31ec, param_1, param_3, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	uVar16 = (undefined)param_8;
	uVar15 = (undefined)param_7;
	uVar14 = (undefined)param_6;
	iVar5 = (int)param_1;
	iVar4 = iVar5 * 0xe8;
	if (*(uint *)(puVar3 + iVar4 + 0xe0) == 0) {
		uVar9 = (undefined) * (uint *)(puVar3 + iVar4 + 0xdc);
		param_2._7_1_ = (char)param_1;
		app_fatal((int)ppuVar6[-0x177a], param_1, (ulonglong) * (uint *)(puVar3 + iVar4 + 0xdc),
		    CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13), param_6, param_7, param_8,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4);
	}
	iVar7 = M_GetDir(iVar5, (undefined)param_2, uVar9, uVar11, uVar13, uVar14, uVar15, uVar16,
	    in_stack_ffffffb8);
	puVar2 = puVar3 + iVar4;
	lVar8 = (ulonglong) * (uint *)(puVar3 + iVar4 + 0xe0) + (ulonglong)(uint)(iVar7 << 3);
	iVar7 = (int)lVar8;
	uVar1 = *(undefined4 *)(iVar7 + 0xc);
	*(undefined4 *)(puVar2 + 0x54) = *(undefined4 *)(iVar7 + 8);
	*(undefined4 *)(puVar2 + 0x58) = uVar1;
	if (puVar2[0x9c] == '\x1c') {
		if ((8 < *(int *)(puVar2 + 0x78)) || (*(int *)(puVar2 + 0x78) < 0)) {
			*(undefined4 *)(puVar2 + 0x78) = 8;
		}
	}
	puVar3 = puVar3 + iVar4;
	iVar4 = *(int *)(puVar3 + 0x78);
	*(int *)(puVar3 + 0x78) = iVar4 + -1;
	if (iVar4 == 0) {
		uVar1 = *(undefined4 *)(puVar3 + 0x68);
		M_StartStand(iVar5, *(int *)(puVar3 + 0x48), (char)lVar8, uVar11, uVar13, uVar14, uVar15, uVar16,
		    in_stack_ffffffb8);
		*(undefined4 *)(puVar3 + 0x68) = uVar1;
	}
	return (ulonglong)(iVar4 == 0);
}

undefined8
M_DoStone(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined **ppuVar2;
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

	puVar1 = PTR_DAT_100f187c;
	ppuVar2 = &toc;
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar2 = &toc;
		app_fatal((int)PTR_s_M_DoStone__Invalid_monster__d_100f31e4, param_1, param_3, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8,
		    in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
	}
	puVar1 = puVar1 + (int)param_1 * 0xe8;
	if (*(int *)(puVar1 + 0x98) == 0) {
		*(undefined2 *)(*(int *)ppuVar2[-0x1d9f] + *(int *)(puVar1 + 0x20) * 0xe0 + *(int *)(puVar1 + 0x24) * 2) = 0;
		*(undefined4 *)(puVar1 + 0x70) = 1;
	}
	return 0;
}

void M_WalkDir(ulonglong param_1, uint param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	ppuVar1 = &toc;
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar1 = &toc;
		app_fatal((int)PTR_s_M_WalkDir__Invalid_monster__d_100f31e0, param_1, param_3, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	if (param_2 < 8) {
		// WARNING: Could not recover jumptable at 0x1006f4d4. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(ppuVar1[-0x177e] + param_2 * 4))(*(code **)(ppuVar1[-0x177e] + param_2 * 4),
		    (ulonglong) * (uint *)(*(int *)(ppuVar1[-0x1dd5] + (int)param_1 * 0xe8 + 0xe0) + 0x94)
		        - 1);
		return;
	}
	return;
}

void GroupUnity(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	int iVar3;
	int iVar4;
	undefined **ppuVar5;
	ulonglong uVar6;
	longlong lVar7;
	int *piVar8;
	undefined *puVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	uint unaff_r28;
	char *pcVar13;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar2 = PTR_DAT_100f187c;
	uVar12 = (undefined)param_8;
	uVar11 = (undefined)param_7;
	uVar10 = (undefined)param_6;
	ppuVar5 = &toc;
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar5 = &toc;
		app_fatal(_DAT_100f31d4, param_1, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffb8, in_stack_ffffffbc,
		    in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4);
	}
	iVar3 = (uint)param_1 * 0xe8;
	pcVar13 = puVar2 + iVar3 + 0xd9;
	if ((puVar2 + iVar3)[0xd9] != '\0') {
		puVar1 = puVar2 + iVar3;
		unaff_r28 = (uint)(byte)puVar1[0xd8];
		iVar4 = (uint)(byte)puVar1[0xd8] * 0xe8;
		uVar6 = LineClearF(ZEXT48(ppuVar5[-0x1c2d]), (ulonglong) * (uint *)(puVar1 + 0x20),
		    (ulonglong) * (uint *)(puVar1 + 0x24),
		    (ulonglong) * (uint *)(puVar2 + iVar4 + 0x28),
		    (ulonglong) * (uint *)(puVar2 + iVar4 + 0x2c), uVar10, uVar11, uVar12,
		    in_stack_ffffffa8);
		if (((int)uVar6 == 0) && (*pcVar13 == '\x01')) {
			(puVar2 + iVar4)[0xda] = (puVar2 + iVar4)[0xda] + -1;
			*pcVar13 = '\x02';
		} else {
			if (((int)uVar6 != 0) && (((*pcVar13 == '\x02' && (lVar7 = abs((ulonglong) * (uint *)(puVar1 + 0x20) - (ulonglong) * (uint *)(puVar2 + iVar4 + 0x28)), (int)lVar7 < 4)) && (lVar7 = abs((ulonglong) * (uint *)(puVar1 + 0x24) - (ulonglong) * (uint *)(puVar2 + iVar4 + 0x2c)), (int)lVar7 < 4)))) {
				(puVar2 + iVar4)[0xda] = (puVar2 + iVar4)[0xda] + '\x01';
				*pcVar13 = '\x01';
			}
		}
	}
	if (*pcVar13 == '\x01') {
		iVar4 = unaff_r28 * 0xe8;
		puVar1 = puVar2 + 0xa4;
		if ((byte)puVar1[iVar4] < (byte)puVar1[iVar3]) {
			*(undefined4 *)(puVar2 + iVar4 + 0xac) = *(undefined4 *)(puVar2 + iVar3 + 0x20);
			*(undefined4 *)(puVar2 + iVar4 + 0xb0) = *(undefined4 *)(puVar2 + iVar3 + 0x24);
			puVar1[iVar4] = puVar1[iVar3] - 1;
		}
		puVar2 = puVar2 + iVar4;
		if (puVar2[0x9c] == '\f') {
			if ((*(uint *)(puVar2 + 0xa0) & 4) != 0) {
				*(uint *)(puVar2 + 0xa0) = *(uint *)(puVar2 + 0xa0) & 0xfffffffb;
				*(undefined4 *)(puVar2 + 4) = 7;
			}
		}
	} else {
		puVar1 = puVar2 + iVar3;
		if ((puVar1[0xc0] != 0) && ((*(ushort *)(ppuVar5[-0x1c23] + (uint)(byte)puVar1[0xc0] * 0x20 + -10) & 2) != 0)) {
			piVar8 = (int *)ppuVar5[-0x1d8a];
			uVar6 = (ulonglong) * (uint *)ppuVar5[-0x1d8b];
			if (0 < (int)*(uint *)ppuVar5[-0x1d8b]) {
				do {
					if ((puVar2[*piVar8 * 0xe8 + 0xd9] == '\x01') && (puVar9 = puVar2 + *piVar8 * 0xe8, (uint)param_1 == (uint)(byte)puVar9[0xd8])) {
						if ((byte)puVar9[0xa4] < (byte)puVar1[0xa4]) {
							*(undefined4 *)(puVar9 + 0xac) = *(undefined4 *)(puVar1 + 0x20);
							*(undefined4 *)(puVar9 + 0xb0) = *(undefined4 *)(puVar1 + 0x24);
							puVar9[0xa4] = puVar1[0xa4] + -1;
						}
						if (puVar9[0x9c] == '\f') {
							if ((*(uint *)(puVar9 + 0xa0) & 4) != 0) {
								*(uint *)(puVar9 + 0xa0) = *(uint *)(puVar9 + 0xa0) & 0xfffffffb;
								*(undefined4 *)(puVar9 + 4) = 7;
							}
						}
					}
					piVar8 = piVar8 + 1;
					uVar6 = uVar6 - 1;
				} while (uVar6 != 0);
			}
		}
	}
	return;
}

ulonglong M_CallWalk(ulonglong param_1, uint param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	bool bVar1;
	bool bVar2;
	int iVar3;
	undefined *puVar4;
	ulonglong uVar5;
	longlong lVar6;
	undefined7 uVar7;
	undefined uVar8;
	undefined7 uVar9;
	undefined uVar10;
	undefined7 uVar11;
	undefined uVar12;
	uint uVar13;
	uint uVar14;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	puVar4 = PTR_DAT_100f1f18;
	iVar3 = _DAT_100f1f14;
	uVar11 = (undefined7)((ulonglong)param_5 >> 8);
	uVar12 = (undefined)param_5;
	uVar9 = (undefined7)((ulonglong)param_4 >> 8);
	uVar10 = (undefined)param_4;
	uVar7 = (undefined7)((ulonglong)param_3 >> 8);
	uVar8 = (undefined)param_3;
	uVar5 = DirOK(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	lVar6 = random(0x65, 2, uVar8, uVar10, uVar12, (char)param_6, (char)param_7, (char)param_8,
	    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
	if ((int)lVar6 == 0) {
		bVar2 = true;
		bVar1 = true;
		uVar14 = param_2;
		if ((int)uVar5 == 0) {
			uVar14 = *(uint *)(iVar3 + param_2 * 4);
			uVar5 = DirOK(param_1, uVar14, CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10),
			    CONCAT71(uVar11, uVar12), param_6, param_7, param_8, in_stack_ffffffa8);
			if ((int)uVar5 == 0) {
				bVar1 = false;
			}
		}
		if (!bVar1) {
			uVar14 = *(uint *)(puVar4 + param_2 * 4);
			uVar5 = DirOK(param_1, uVar14, CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10),
			    CONCAT71(uVar11, uVar12), param_6, param_7, param_8, in_stack_ffffffa8);
			if ((int)uVar5 == 0) {
				bVar2 = false;
			}
		}
	} else {
		bVar2 = true;
		bVar1 = true;
		uVar14 = param_2;
		if ((int)uVar5 == 0) {
			uVar14 = *(uint *)(puVar4 + param_2 * 4);
			uVar5 = DirOK(param_1, uVar14, CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10),
			    CONCAT71(uVar11, uVar12), param_6, param_7, param_8, in_stack_ffffffa8);
			if ((int)uVar5 == 0) {
				bVar1 = false;
			}
		}
		if (!bVar1) {
			uVar14 = *(uint *)(iVar3 + param_2 * 4);
			uVar5 = DirOK(param_1, uVar14, CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10),
			    CONCAT71(uVar11, uVar12), param_6, param_7, param_8, in_stack_ffffffa8);
			if ((int)uVar5 == 0) {
				bVar2 = false;
			}
		}
	}
	lVar6 = random(0x66, 2, uVar8, uVar10, uVar12, (char)param_6, (char)param_7, (char)param_8,
	    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
	if ((int)lVar6 == 0) {
		uVar13 = 1;
		bVar1 = true;
		if (!bVar2) {
			uVar14 = *(uint *)(puVar4 + *(int *)(puVar4 + param_2 * 4) * 4);
			uVar5 = DirOK(param_1, uVar14, CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10),
			    CONCAT71(uVar11, uVar12), param_6, param_7, param_8, in_stack_ffffffa8);
			if ((int)uVar5 == 0) {
				bVar1 = false;
			}
		}
		if (!bVar1) {
			uVar14 = *(uint *)(iVar3 + *(int *)(iVar3 + param_2 * 4) * 4);
			uVar5 = DirOK(param_1, uVar14, CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10),
			    CONCAT71(uVar11, uVar12), param_6, param_7, param_8, in_stack_ffffffa8);
			if ((int)uVar5 == 0) {
				uVar13 = 0;
			}
		}
	} else {
		uVar13 = 1;
		bVar1 = true;
		if (!bVar2) {
			uVar14 = *(uint *)(iVar3 + *(int *)(iVar3 + param_2 * 4) * 4);
			uVar5 = DirOK(param_1, uVar14, CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10),
			    CONCAT71(uVar11, uVar12), param_6, param_7, param_8, in_stack_ffffffa8);
			if ((int)uVar5 == 0) {
				bVar1 = false;
			}
		}
		if (!bVar1) {
			uVar14 = *(uint *)(puVar4 + *(int *)(puVar4 + param_2 * 4) * 4);
			uVar5 = DirOK(param_1, uVar14, CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10),
			    CONCAT71(uVar11, uVar12), param_6, param_7, param_8, in_stack_ffffffa8);
			if ((int)uVar5 == 0) {
				uVar13 = 0;
			}
		}
	}
	if (uVar13 != 0) {
		M_WalkDir(param_1, uVar14, CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10), CONCAT71(uVar11, uVar12), param_6, param_7, param_8, in_stack_ffffffa8);
	}
	return (ulonglong)uVar13;
}

ulonglong M_PathWalk(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	int iVar4;
	ulonglong uVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	uint uVar8;
	char *pcVar9;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	char local_28[40];

	puVar2 = PTR_DAT_100f187c;
	ppuVar3 = &toc;
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar3 = &toc;
		app_fatal(_DAT_100f31d0, param_1, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffb8, in_stack_ffffffbc,
		    in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4);
	}
	iVar4 = (int)param_1 * 0xe8;
	if ((*(uint *)(puVar2 + iVar4 + 0xa0) & 0x200) == 0) {
		puVar1 = ppuVar3[-0x1c31];
	} else {
		puVar1 = ppuVar3[-0x1c30];
	}
	puVar2 = puVar2 + iVar4;
	pcVar9 = local_28;
	uVar5 = (ulonglong) * (uint *)(puVar2 + 0x20);
	uVar6 = (ulonglong) * (uint *)(puVar2 + 0x24);
	uVar7 = (ulonglong)(byte)puVar2[0x50];
	uVar8 = (uint)(byte)puVar2[0x51];
	iVar4 = FindPath(ZEXT48(puVar1), param_1, uVar5, uVar6, uVar7, (ulonglong)(byte)puVar2[0x51],
	    (int)pcVar9, (char)param_8, in_stack_ffffffa8);
	if (iVar4 != 0) {
		M_CallWalk(param_1, (int)(char)ppuVar3[-0x1781][(int)local_28[0]], uVar5, uVar6, uVar7, uVar8,
		    pcVar9, param_8, in_stack_ffffffa8);
	}
	return (ulonglong)(iVar4 != 0);
}

ulonglong M_CallWalk2(ulonglong param_1, uint param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	bool bVar1;
	int iVar2;
	undefined *puVar3;
	ulonglong uVar4;
	longlong lVar5;
	undefined7 uVar6;
	undefined uVar7;
	undefined7 uVar8;
	undefined uVar9;
	undefined7 uVar10;
	undefined uVar11;
	uint uVar12;
	uint uVar13;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	puVar3 = PTR_DAT_100f1f18;
	iVar2 = _DAT_100f1f14;
	uVar10 = (undefined7)((ulonglong)param_5 >> 8);
	uVar11 = (undefined)param_5;
	uVar8 = (undefined7)((ulonglong)param_4 >> 8);
	uVar9 = (undefined)param_4;
	uVar6 = (undefined7)((ulonglong)param_3 >> 8);
	uVar7 = (undefined)param_3;
	uVar4 = DirOK(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	lVar5 = random(0x65, 2, uVar7, uVar9, uVar11, (char)param_6, (char)param_7, (char)param_8,
	    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
	if ((int)lVar5 == 0) {
		uVar13 = 1;
		bVar1 = true;
		uVar12 = param_2;
		if ((int)uVar4 == 0) {
			uVar12 = *(uint *)(iVar2 + param_2 * 4);
			uVar4 = DirOK(param_1, uVar12, CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9),
			    CONCAT71(uVar10, uVar11), param_6, param_7, param_8, in_stack_ffffffa8);
			if ((int)uVar4 == 0) {
				bVar1 = false;
			}
		}
		if (!bVar1) {
			uVar12 = *(uint *)(puVar3 + param_2 * 4);
			uVar4 = DirOK(param_1, uVar12, CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9),
			    CONCAT71(uVar10, uVar11), param_6, param_7, param_8, in_stack_ffffffa8);
			if ((int)uVar4 == 0) {
				uVar13 = 0;
			}
		}
	} else {
		uVar13 = 1;
		bVar1 = true;
		uVar12 = param_2;
		if ((int)uVar4 == 0) {
			uVar12 = *(uint *)(puVar3 + param_2 * 4);
			uVar4 = DirOK(param_1, uVar12, CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9),
			    CONCAT71(uVar10, uVar11), param_6, param_7, param_8, in_stack_ffffffa8);
			if ((int)uVar4 == 0) {
				bVar1 = false;
			}
		}
		if (!bVar1) {
			uVar12 = *(uint *)(iVar2 + param_2 * 4);
			uVar4 = DirOK(param_1, uVar12, CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9),
			    CONCAT71(uVar10, uVar11), param_6, param_7, param_8, in_stack_ffffffa8);
			if ((int)uVar4 == 0) {
				uVar13 = 0;
			}
		}
	}
	if (uVar13 != 0) {
		M_WalkDir(param_1, uVar12, CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9), CONCAT71(uVar10, uVar11),
		    param_6, param_7, param_8, in_stack_ffffffa8);
	}
	return (ulonglong)uVar13;
}

ulonglong M_DumbWalk(ulonglong param_1, uint param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	undefined4 in_stack_ffffffb8;

	uVar1 = DirOK(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	if (uVar1 != 0) {
		M_WalkDir(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	return uVar1;
}

ulonglong M_RoundWalk(ulonglong param_1, int param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	uint uVar2;
	int iVar3;
	undefined **ppuVar4;
	ulonglong uVar5;
	uint *puVar7;
	undefined8 uVar6;
	uint uVar8;
	uint *puVar9;
	uint uVar10;
	undefined4 in_stack_ffffffa8;

	puVar1 = PTR_DAT_100f1f18;
	iVar3 = _DAT_100f1f14;
	ppuVar4 = &toc;
	puVar7 = (uint *)param_3;
	if (*puVar7 == 0) {
		uVar2 = *(uint *)(_DAT_100f1f14 + *(int *)(_DAT_100f1f14 + param_2 * 4) * 4);
	} else {
		uVar2 = *(uint *)(PTR_DAT_100f1f18 + *(int *)(PTR_DAT_100f1f18 + param_2 * 4) * 4);
	}
	uVar5 = DirOK(param_1, uVar2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	uVar8 = uVar2;
	if (uVar5 == 0) {
		if (*puVar7 == 0) {
			puVar9 = (uint *)(puVar1 + uVar2 * 4);
			uVar8 = *puVar9;
			uVar10 = 1;
			uVar5 = DirOK(param_1, uVar8, param_3, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffa8);
			if ((int)uVar5 == 0) {
				uVar8 = *(uint *)(puVar1 + *puVar9 * 4);
				uVar5 = DirOK(param_1, uVar8, param_3, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffffa8);
				if ((int)uVar5 == 0) {
					uVar10 = 0;
				}
			}
			uVar5 = (ulonglong)uVar10;
		} else {
			puVar9 = (uint *)(iVar3 + uVar2 * 4);
			uVar8 = *puVar9;
			uVar10 = 1;
			uVar5 = DirOK(param_1, uVar8, param_3, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffa8);
			if ((int)uVar5 == 0) {
				uVar8 = *(uint *)(iVar3 + *puVar9 * 4);
				uVar5 = DirOK(param_1, uVar8, param_3, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffffa8);
				if ((int)uVar5 == 0) {
					uVar10 = 0;
				}
			}
			uVar5 = (ulonglong)uVar10;
		}
	}
	if ((int)uVar5 == 0) {
		puVar1 = ppuVar4[-0x1c41];
		uVar6 = countLeadingZeros(*puVar7);
		uVar8 = (uint)uVar6 >> 5 & 0xff;
		*puVar7 = uVar8;
		uVar5 = M_CallWalk(param_1, *(uint *)(puVar1 + uVar2 * 4), (ulonglong)uVar8, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffa8);
	} else {
		M_WalkDir(param_1, uVar8, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	}
	return uVar5;
}

void MAI_SkelSd(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	byte bVar1;
	byte bVar2;
	uint uVar3;
	uint uVar4;
	undefined4 uVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	ulonglong uVar8;
	longlong lVar9;
	undefined uVar11;
	int iVar10;
	ulonglong uVar12;
	undefined uVar13;
	ulonglong uVar14;
	undefined uVar15;
	undefined7 uVar16;
	undefined uVar17;
	undefined uVar18;
	undefined uVar19;
	undefined uVar20;
	uint uVar21;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined uVar22;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	uVar22 = (undefined)in_stack_ffffffc8;
	uVar16 = (undefined7)((ulonglong)param_5 >> 8);
	uVar17 = (undefined)param_5;
	ppuVar7 = &toc;
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar7 = &toc;
		app_fatal((int)PTR_s_MAI_SkelSd__Invalid_monster__d_100f31c4, param_1, param_3, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	iVar10 = (int)param_1;
	puVar6 = ppuVar7[-0x1dd5] + iVar10 * 0xe8;
	if (*(int *)(puVar6 + 4) != 0) {
		return;
	}
	if (puVar6[0xa4] == '\0') {
		return;
	}
	uVar3 = *(uint *)(puVar6 + 0x20);
	bVar1 = puVar6[0x50];
	uVar4 = *(uint *)(puVar6 + 0x24);
	uVar11 = (undefined)uVar4;
	bVar2 = puVar6[0x51];
	uVar12 = (ulonglong) * (uint *)(puVar6 + 0xac);
	uVar14 = (ulonglong) * (uint *)(puVar6 + 0xb0);
	uVar8 = GetDirection((ulonglong)uVar3, uVar4, uVar12, *(uint *)(puVar6 + 0xb0));
	uVar21 = (uint)uVar8;
	*(uint *)(puVar6 + 0x48) = uVar21;
	lVar9 = abs((ulonglong)uVar3 - (ulonglong)bVar1);
	if ((int)lVar9 < 2) {
		lVar9 = abs((ulonglong)uVar4 - (ulonglong)bVar2);
		uVar20 = (undefined)param_8;
		uVar19 = (undefined)param_7;
		uVar18 = (undefined)param_6;
		uVar15 = (undefined)uVar14;
		uVar13 = (undefined)uVar12;
		if ((int)lVar9 < 2) {
			if (*(int *)(puVar6 + 0x74) != 0xd) {
				lVar9 = random(0x69, 100, uVar13, uVar15, uVar17, uVar18, uVar19, uVar20, in_stack_ffffffb8,
				    in_stack_ffffffbf, uVar22);
				uVar11 = (undefined)((uint)(byte)puVar6[0x9d] * 2);
				if ((int)((uint)(byte)puVar6[0x9d] * 2 + 0x14) <= (int)lVar9) {
					lVar9 = random(0x69, 10, uVar13, uVar15, uVar17, uVar18, uVar19, uVar20, in_stack_ffffffb8,
					    in_stack_ffffffbf, uVar22);
					M_StartDelay(iVar10, (int)lVar9 + 10 + (uint)(byte)puVar6[0x9d] * -2);
					goto LAB_100701b4;
				}
			}
			M_StartAttack(iVar10, uVar11, uVar13, uVar15, uVar17, uVar18, uVar19, uVar20, in_stack_ffffffb8);
			goto LAB_100701b4;
		}
	}
	if ((*(int *)(puVar6 + 0x74) == 0xd) || (lVar9 = random(0x6a, 100, (char)uVar12, (char)uVar14, uVar17, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffb8, in_stack_ffffffbf, uVar22), (int)((uint)(byte)puVar6[0x9d] * -4 + 0x23) <= (int)lVar9)) {
		M_CallWalk(param_1, uVar21, uVar12, uVar14, CONCAT71(uVar16, uVar17), param_6, param_7, param_8,
		    in_stack_ffffffb8);
	} else {
		lVar9 = random(0x6a, 10, (char)uVar12, (char)uVar14, uVar17, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffb8, in_stack_ffffffbf, uVar22);
		M_StartDelay(iVar10, (int)lVar9 + 0xf + (uint)(byte)puVar6[0x9d] * -2);
	}
LAB_100701b4:
	if (*(int *)(puVar6 + 4) == 0) {
		iVar10 = *(int *)(puVar6 + 0xe0) + uVar21 * 8;
		uVar5 = *(undefined4 *)(iVar10 + 0xc);
		*(undefined4 *)(puVar6 + 0x54) = *(undefined4 *)(iVar10 + 8);
		*(undefined4 *)(puVar6 + 0x58) = uVar5;
	}
	return;
}

undefined8
MAI_Path(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	char cVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	ulonglong uVar4;
	ulonglong uVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	ulonglong uVar8;
	uint uVar9;
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

	ppuVar3 = &toc;
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar3 = &toc;
		app_fatal((int)PTR_s_MAI_Path__Invalid_monster__d_100f31c0, param_1, param_3, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8,
		    in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
	}
	puVar2 = ppuVar3[-0x1dd5] + (int)param_1 * 0xe8;
	if ((**(char **)(puVar2 + 0xe0) != 'm') && ((((puVar2[0xa4] == '\0' || (*(int *)(puVar2 + 4) != 0)) || ((puVar2[8] != '\x01' && (1 < (byte)(puVar2[8] - 4))))) || ((*(int *)(puVar2 + 0x20) == 1 && (*(int *)(puVar2 + 0x24) == 0)))))) {
		return 0;
	}
	uVar6 = (ulonglong) * (uint *)(puVar2 + 0x20);
	uVar7 = (ulonglong) * (uint *)(puVar2 + 0x24);
	uVar8 = (ulonglong)(byte)puVar2[0x50];
	uVar9 = (uint)(byte)puVar2[0x51];
	uVar5 = param_1;
	uVar4 = LineClearF1(ZEXT48(ppuVar3[-0x1c32]), param_1, uVar6, uVar7, uVar8,
	    (ulonglong)(byte)puVar2[0x51], (char)param_7, (char)param_8, in_stack_ffffffc8);
	if (((int)uVar4 == 0) || ((4 < (byte)puVar2[0x1c] && ((byte)puVar2[0x1c] < 8)))) {
		if ((*(uint *)(puVar2 + 0xa0) & 0x200) != 0) {
			FUN_10087a2c((int)param_1, uVar5, uVar6, uVar7, uVar8, uVar9, param_7, param_8, in_stack_ffffffc8);
		}
		cVar1 = puVar2[0x1c];
		puVar2[0x1c] = cVar1 + 1U;
		if ((byte)(cVar1 + 1U) < 5) {
			return 0;
		}
		uVar5 = M_PathWalk(param_1, uVar5, uVar6, uVar7, uVar8, uVar9, param_7, param_8, in_stack_ffffffc8);
		if ((int)uVar5 != 0) {
			return 1;
		}
	}
	if (**(char **)(puVar2 + 0xe0) != 'm') {
		puVar2[0x1c] = 0;
	}
	return 0;
}

void MAI_Fallen(ulonglong param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	short sVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	undefined *puVar5;
	longlong lVar6;
	undefined **ppuVar7;
	longlong lVar8;
	uint uVar9;
	int iVar11;
	ulonglong uVar10;
	byte bVar12;
	undefined uVar14;
	ulonglong uVar13;
	undefined uVar16;
	longlong lVar15;
	undefined uVar17;
	undefined uVar19;
	longlong lVar18;
	undefined uVar22;
	longlong lVar20;
	int iVar21;
	undefined uVar23;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined uVar24;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar5 = PTR_DAT_100f187c;
	uVar24 = (undefined)in_stack_ffffffc8;
	ppuVar7 = &toc;
	if (199 < (param_1 & 0xffffffff)) {
		param_2 = param_1;
		ppuVar7 = &toc;
		app_fatal((int)PTR_s_MAI_Fallen__Invalid_monster__d_100f31a0, param_1, param_3, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	iVar11 = (int)param_1;
	puVar3 = puVar5 + iVar11 * 0xe8;
	if (puVar3[8] == '\x05') {
		if (*(int *)(puVar3 + 0xc) == 0) {
			puVar3[8] = 1;
		} else {
			*(int *)(puVar3 + 0xc) = *(int *)(puVar3 + 0xc) + -1;
		}
	}
	if ((*(int *)(puVar3 + 4) == 0) && (puVar3[0xa4] != '\0')) {
		if ((puVar3[8] == '\x02') && (iVar21 = *(int *)(puVar3 + 0xc), *(int *)(puVar3 + 0xc) = iVar21 + -1, iVar21 == 0)) {
			puVar2 = ppuVar7[-0x1c41];
			puVar3[8] = 1;
			param_2 = (ulonglong) * (uint *)(puVar2 + *(int *)(puVar3 + 0x48) * 4);
			M_StartStand(iVar11, *(uint *)(puVar2 + *(int *)(puVar3 + 0x48) * 4), (char)param_3,
			    (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8,
			    in_stack_ffffffb8);
		}
		uVar23 = (undefined)param_8;
		uVar22 = (undefined)param_7;
		uVar19 = (undefined)param_6;
		uVar17 = (undefined)param_5;
		uVar16 = (undefined)param_4;
		uVar14 = (undefined)param_3;
		if (*(int *)(puVar3 + 0x68) == *(int *)(puVar3 + 100)) {
			lVar8 = random(0x71, 4, uVar14, uVar16, uVar17, uVar19, uVar22, uVar23, in_stack_ffffffb8,
			    in_stack_ffffffbf, uVar24);
			if ((int)lVar8 == 0) {
				if ((*(uint *)(puVar5 + iVar11 * 0xe8 + 0xa0) & 8) == 0) {
					M_StartSpStand(iVar11, *(int *)(puVar3 + 0x48), uVar14, uVar16, uVar17, uVar19, uVar22, uVar23,
					    in_stack_ffffffb8);
					iVar11 = (uint)(byte)puVar3[0x9d] * 2 + 2;
					if (*(int *)(puVar3 + 0x94) - iVar11 < *(int *)(puVar3 + 0x98)) {
						*(int *)(puVar3 + 0x98) = *(int *)(puVar3 + 0x94);
					} else {
						*(int *)(puVar3 + 0x98) = *(int *)(puVar3 + 0x98) + iVar11;
					}
				}
				bVar12 = puVar3[0x9d];
				lVar15 = (ulonglong)bVar12 * 2 + 4;
				iVar11 = *(int *)ppuVar7[-0x1d9f];
				lVar20 = -lVar15;
				lVar8 = lVar20;
				while (true) {
					iVar21 = (int)lVar8;
					if ((int)lVar15 < iVar21)
						break;
					lVar6 = (ulonglong)bVar12 * 2 + 5 + lVar15;
					lVar18 = lVar20;
					if ((int)lVar20 <= (int)lVar15) {
						do {
							iVar4 = (int)lVar18;
							if ((((-1 < iVar21) && (iVar21 < 0x70)) && (-1 < iVar4)) && (((iVar4 < 0x70 && (sVar1 = *(short *)(iVar11 + (*(int *)(puVar3 + 0x20) + iVar4) * 0xe0 + (*(int *)(puVar3 + 0x24) + iVar21) * 2), 0 < sVar1)) && (puVar2 = puVar5 + ((int)sVar1 + -1) * 0xe8, puVar2[0x9c] == '\b')))) {
								puVar2[8] = 5;
								*(uint *)(puVar2 + 0xc) = ((uint)(byte)puVar3[0x9d] * 2 + 7) * 0xf;
							}
							lVar18 = lVar18 + 1;
							lVar6 = lVar6 + -1;
						} while (lVar6 != 0);
					}
					lVar8 = lVar8 + 1;
				}
			}
		} else {
			if (puVar3[8] == '\x02') {
				M_CallWalk(param_1, *(uint *)(puVar3 + 0x48), param_3, param_4, param_5, param_6, param_7,
				    param_8, in_stack_ffffffb8);
			} else {
				if (puVar3[8] == '\x05') {
					uVar13 = (ulonglong)(byte)puVar3[0x50];
					bVar12 = puVar3[0x51];
					uVar10 = (ulonglong)bVar12;
					uVar9 = *(uint *)(puVar3 + 0x24);
					lVar8 = abs((ulonglong) * (uint *)(puVar3 + 0x20) - uVar13);
					if (((int)lVar8 < 2) && (lVar8 = abs((ulonglong)uVar9 - uVar10), (int)lVar8 < 2)) {
						M_StartAttack(iVar11, bVar12, (char)uVar13, (char)param_4, (char)param_5, (char)param_6,
						    (char)param_7, (char)param_8, in_stack_ffffffb8);
					} else {
						uVar9 = M_GetDir(iVar11, bVar12, (char)uVar13, (char)param_4, (char)param_5,
						    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffb8);
						M_CallWalk(param_1, uVar9, uVar13, param_4, param_5, param_6, param_7, param_8,
						    in_stack_ffffffb8);
					}
				} else {
					MAI_SkelSd(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
					    in_stack_ffffffb8);
				}
			}
		}
	}
	return;
}

void MAI_Round(ulonglong param_1, int param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	byte bVar1;
	byte bVar2;
	uint uVar3;
	int iVar4;
	undefined4 uVar5;
	int iVar6;
	undefined *puVar7;
	undefined **ppuVar8;
	ulonglong uVar9;
	int iVar13;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	int iVar14;
	ulonglong uVar15;
	uint uVar16;
	undefined uVar17;
	ulonglong uVar18;
	undefined uVar19;
	ulonglong uVar20;
	undefined uVar21;
	undefined7 uVar22;
	undefined uVar23;
	undefined uVar24;
	undefined uVar25;
	undefined uVar26;
	longlong lVar27;
	longlong lVar28;
	longlong lVar29;
	int iVar30;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffa8;
	undefined uVar31;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	puVar7 = PTR_DAT_100f1a48;
	uVar31 = (undefined)in_stack_ffffffa8;
	uVar22 = (undefined7)((ulonglong)param_5 >> 8);
	uVar23 = (undefined)param_5;
	ppuVar8 = &toc;
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar8 = &toc;
		app_fatal((int)PTR_s_MAI_Round__Invalid_monster__d_100f3198, param_1, param_3, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffa8,
		    in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4, in_stack_ffffffb8,
		    in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4);
	}
	lVar29 = ZEXT48(ppuVar8[-0x1dd5]) + param_1 * 0xe8;
	iVar6 = (int)lVar29;
	if (*(int *)(iVar6 + 4) != 0) {
		return;
	}
	if (*(char *)(iVar6 + 0xa4) == '\0') {
		return;
	}
	bVar1 = *(byte *)(iVar6 + 0x50);
	uVar15 = (ulonglong) * (uint *)(iVar6 + 0x24);
	bVar2 = *(byte *)(iVar6 + 0x51);
	lVar28 = (ulonglong) * (uint *)(iVar6 + 0x20) - (ulonglong)bVar1;
	uVar18 = (ulonglong) * (uint *)(iVar6 + 0xac);
	uVar20 = (ulonglong) * (uint *)(iVar6 + 0xb0);
	lVar27 = uVar15 - (ulonglong)bVar2;
	uVar9 = GetDirection((ulonglong) * (uint *)(iVar6 + 0x20), *(uint *)(iVar6 + 0x24), uVar18,
	    *(uint *)(iVar6 + 0xb0));
	iVar13 = (int)param_1;
	if (*(char *)(iVar6 + 0xa4) != -1) {
		FUN_10087a2c(iVar13, uVar15, uVar18, uVar20, CONCAT71(uVar22, uVar23), param_6, param_7, param_8,
		    in_stack_ffffff98);
	}
	uVar17 = 100;
	lVar10 = random(0x72, 100, (char)uVar18, (char)uVar20, uVar23, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffff98, in_stack_ffffff9f, uVar31);
	lVar11 = abs(lVar28);
	uVar16 = (uint)uVar9;
	if ((((int)lVar11 < 2) && (lVar11 = abs(lVar27), (int)lVar11 < 2)) || (*(char *)(iVar6 + 0xa4) != -1)) {
	LAB_10071750:
		*(undefined *)(iVar6 + 8) = 1;
	} else {
		iVar30 = (uint)bVar1 * 0x70;
		uVar3 = *(uint *)puVar7;
		uVar18 = (ulonglong)uVar3;
		lVar11 = (ulonglong) * (uint *)(iVar6 + 0x20) * 0x70;
		uVar17 = (undefined)lVar11;
		if (*(char *)(uVar3 + (int)lVar11 + *(int *)(iVar6 + 0x24)) != *(char *)(uVar3 + iVar30 + (uint)bVar2))
			goto LAB_10071750;
		if (*(char *)(iVar6 + 8) == '\x04') {
		LAB_1007179c:
			if (*(char *)(iVar6 + 8) != '\x04') {
				*(undefined4 *)(iVar6 + 0xc) = 0;
				lVar11 = random(0x74, 2, (char)uVar18, (char)uVar20, uVar23, (char)param_6, (char)param_7,
				    (char)param_8, in_stack_ffffff98, in_stack_ffffff9f, uVar31);
				*(undefined4 *)(iVar6 + 0x10) = (int)lVar11;
			}
			*(undefined *)(iVar6 + 8) = 4;
			lVar11 = abs(lVar27);
			lVar12 = abs(lVar28);
			if ((int)lVar11 < (int)lVar12) {
				lVar11 = abs(lVar28);
				iVar14 = (int)lVar11;
			} else {
				lVar11 = abs(lVar27);
				iVar14 = (int)lVar11;
			}
			iVar4 = *(int *)(iVar6 + 0xc);
			*(int *)(iVar6 + 0xc) = iVar4 + 1;
			if ((iVar4 < iVar14 << 1) || (uVar17 = (char)uVar9, uVar15 = DirOK(param_1, uVar16, uVar18, uVar20, CONCAT71(uVar22, uVar23), param_6, param_7, param_8, in_stack_ffffff98), (int)uVar15 == 0)) {
				uVar3 = *(uint *)puVar7;
				uVar18 = (ulonglong)uVar3;
				lVar11 = (ulonglong) * (uint *)(iVar6 + 0x20) * 0x70;
				uVar17 = (undefined)lVar11;
				if (*(char *)(uVar3 + (int)lVar11 + *(int *)(iVar6 + 0x24)) == *(char *)(uVar3 + iVar30 + (uint)bVar2)) {
					uVar18 = lVar29 + 0x10;
					uVar17 = (char)uVar9;
					uVar9 = M_RoundWalk(param_1, uVar16, uVar18, uVar20, CONCAT71(uVar22, uVar23), param_6, param_7,
					    param_8, in_stack_ffffff98);
					if ((int)uVar9 == 0) {
						lVar29 = random(0x7d, 10, (char)uVar18, (char)uVar20, uVar23, (char)param_6,
						    (char)param_7, (char)param_8, in_stack_ffffff98, in_stack_ffffff9f,
						    uVar31);
						uVar17 = (undefined)(lVar29 + 10);
						M_StartDelay(iVar13, (int)(lVar29 + 10));
					}
					goto LAB_10071894;
				}
			}
			*(undefined *)(iVar6 + 8) = 1;
		} else {
			lVar11 = abs(lVar28);
			if ((3 < (int)lVar11) || (lVar11 = abs(lVar27), 3 < (int)lVar11)) {
				uVar17 = 4;
				lVar11 = random(0x73, 4, (char)uVar18, (char)uVar20, uVar23, (char)param_6, (char)param_7,
				    (char)param_8, in_stack_ffffff98, in_stack_ffffff9f, uVar31);
				if ((int)lVar11 == 0)
					goto LAB_1007179c;
			}
		}
	}
LAB_10071894:
	if (*(char *)(iVar6 + 8) != '\x01')
		goto LAB_10071980;
	lVar29 = abs(lVar28);
	iVar30 = (int)lVar10;
	if ((int)lVar29 < 2) {
		lVar29 = abs(lVar27);
		uVar26 = (undefined)param_8;
		uVar25 = (undefined)param_7;
		uVar24 = (undefined)param_6;
		uVar21 = (undefined)uVar20;
		uVar19 = (undefined)uVar18;
		if ((int)lVar29 < 2) {
			if (iVar30 < (int)((uint) * (byte *)(iVar6 + 0x9d) * 2 + 0x17)) {
				*(uint *)(iVar6 + 0x48) = uVar16;
				if ((param_2 != 0) && (*(int *)(iVar6 + 0x98) < *(int *)(iVar6 + 0x94) >> 1)) {
					uVar17 = 2;
					lVar29 = random(0x75, 2, uVar19, uVar21, uVar23, uVar24, uVar25, uVar26, in_stack_ffffff98,
					    in_stack_ffffff9f, uVar31);
					if ((int)lVar29 != 0) {
						M_StartSpAttack(iVar13, uVar17, uVar19, uVar21, uVar23, uVar24, uVar25, uVar26, in_stack_ffffff98);
						goto LAB_10071980;
					}
				}
				M_StartAttack(iVar13, uVar17, uVar19, uVar21, uVar23, uVar24, uVar25, uVar26, in_stack_ffffff98);
			}
			goto LAB_10071980;
		}
	}
	if (((0x14 < *(int *)(iVar6 + 0x78)) && (iVar30 < (int)((uint) * (byte *)(iVar6 + 0x9d) * 2 + 0x1c))) || (((*(int *)(iVar6 + 0x74) == 1 || (*(int *)(iVar6 + 0x74) - 2U < 2)) && ((*(int *)(iVar6 + 0x78) == 0 && (iVar30 < (int)((uint) * (byte *)(iVar6 + 0x9d) * 2 + 0x4e))))))) {
		M_CallWalk(param_1, uVar16, uVar18, uVar20, CONCAT71(uVar22, uVar23), param_6, param_7, param_8,
		    in_stack_ffffff98);
	}
LAB_10071980:
	if (*(int *)(iVar6 + 4) == 0) {
		iVar13 = *(int *)(iVar6 + 0xe0) + uVar16 * 8;
		uVar5 = *(undefined4 *)(iVar13 + 0xc);
		*(undefined4 *)(iVar6 + 0x54) = *(undefined4 *)(iVar13 + 8);
		*(undefined4 *)(iVar6 + 0x58) = uVar5;
	}
	return;
}

void MAI_Ranged(ulonglong param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined4 uVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	int iVar6;
	int iVar7;
	ulonglong uVar5;
	ulonglong uVar8;
	int iVar9;
	ulonglong uVar10;
	ulonglong uVar11;
	ulonglong uVar12;
	byte bVar13;
	undefined7 uVar14;
	undefined uVar15;
	undefined uVar16;
	undefined uVar17;
	undefined uVar18;
	longlong lVar19;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffa8;
	undefined uVar20;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	puVar3 = PTR_DAT_100f187c;
	uVar20 = (undefined)in_stack_ffffffa8;
	uVar14 = (undefined7)((ulonglong)param_5 >> 8);
	uVar15 = (undefined)param_5;
	ppuVar4 = &toc;
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar4 = &toc;
		app_fatal((int)PTR_s_MAI_Ranged__Invalid_monster__d_100f3194, param_1, param_3, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffa8,
		    in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4, in_stack_ffffffb8,
		    in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4);
	}
	iVar9 = (int)param_1;
	puVar3 = puVar3 + iVar9 * 0xe8;
	if (*(int *)(puVar3 + 4) == 0) {
		if ((puVar3[0xa4] == -1) || ((*(uint *)(puVar3 + 0xa0) & 0x10) != 0)) {
			uVar10 = (ulonglong)(byte)puVar3[0x50];
			bVar13 = puVar3[0x51];
			uVar12 = (ulonglong)bVar13;
			uVar8 = (ulonglong) * (uint *)(puVar3 + 0x20);
			uVar1 = *(uint *)(puVar3 + 0x24);
			lVar19 = uVar8 - uVar10;
			uVar5 = uVar10;
			uVar11 = uVar12;
			iVar6 = M_GetDir(iVar9, (char)*(uint *)(puVar3 + 0x20), puVar3[0x50], bVar13, uVar15,
			    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff98);
			if (puVar3[0xa4] != -1) {
				FUN_10087a2c(iVar9, uVar8, uVar5, uVar11, CONCAT71(uVar14, uVar15), param_6, param_7, param_8,
				    in_stack_ffffff98);
			}
			uVar18 = (undefined)param_8;
			uVar17 = (undefined)param_7;
			uVar16 = (undefined)param_6;
			*(int *)(puVar3 + 0x48) = iVar6;
			if (*(int *)(puVar3 + 0x74) == 10) {
				lVar19 = random(0x76, 0x14, (char)uVar5, (char)uVar11, uVar15, uVar16, uVar17, uVar18,
				    in_stack_ffffff98, in_stack_ffffff9f, uVar20);
				M_StartDelay(iVar9, (int)lVar19);
			} else {
				lVar19 = abs(lVar19);
				uVar18 = (undefined)param_8;
				uVar17 = (undefined)param_7;
				uVar16 = (undefined)param_6;
				if ((int)lVar19 < 4) {
					lVar19 = abs((ulonglong)uVar1 - uVar12);
					uVar18 = (undefined)param_8;
					uVar17 = (undefined)param_7;
					uVar16 = (undefined)param_6;
					if ((int)lVar19 < 4) {
						lVar19 = random(0x77, 100, (char)uVar5, (char)uVar11, uVar15, uVar16, uVar17, uVar18,
						    in_stack_ffffff98, in_stack_ffffff9f, uVar20);
						uVar18 = (undefined)param_8;
						uVar17 = (undefined)param_7;
						uVar16 = (undefined)param_6;
						if ((int)lVar19 < (int)((uint)(byte)puVar3[0x9d] * 10 + 0x46)) {
							M_CallWalk(param_1, *(uint *)(ppuVar4[-0x1c41] + iVar6 * 4), uVar5, uVar11,
							    CONCAT71(uVar14, uVar15), param_6, param_7, param_8, in_stack_ffffff98);
						}
					}
				}
			}
			if (*(int *)(puVar3 + 4) == 0) {
				iVar7 = LineClear((ulonglong) * (uint *)(puVar3 + 0x20), (ulonglong) * (uint *)(puVar3 + 0x24), uVar10, uVar12, uVar15, uVar16, uVar17, uVar18, in_stack_ffffff98);
				if (iVar7 == 0) {
					iVar9 = *(int *)(puVar3 + 0xe0) + iVar6 * 8;
					uVar2 = *(undefined4 *)(iVar9 + 0xc);
					*(undefined4 *)(puVar3 + 0x54) = *(undefined4 *)(iVar9 + 8);
					*(undefined4 *)(puVar3 + 0x58) = uVar2;
				} else {
					if ((int)param_3 == 0) {
						M_StartRAttack(iVar9, param_2, 4, bVar13, uVar15, uVar16, uVar17, uVar18, in_stack_ffffff98);
					} else {
						M_StartRSpAttack(iVar9, param_2, 4, bVar13, uVar15, uVar16, uVar17, uVar18, in_stack_ffffff98);
					}
				}
			}
		} else {
			if (puVar3[0xa4] != '\0') {
				uVar11 = (ulonglong) * (uint *)(puVar3 + 0xac);
				uVar8 = (ulonglong) * (uint *)(puVar3 + 0xb0);
				uVar5 = GetDirection((ulonglong) * (uint *)(puVar3 + 0x20), *(int *)(puVar3 + 0x24), uVar11,
				    *(uint *)(puVar3 + 0xb0));
				M_CallWalk(param_1, (uint)uVar5, uVar11, uVar8, CONCAT71(uVar14, uVar15), param_6, param_7,
				    param_8, in_stack_ffffff98);
			}
		}
	}
	return;
}

void MAI_Succ(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	MAI_Ranged(param_1, 0x18, 0, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void MAI_RoundRanged(ulonglong param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4,
    ulonglong param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	byte bVar1;
	byte bVar2;
	uint uVar3;
	int iVar4;
	int iVar5;
	ulonglong uVar6;
	undefined **ppuVar7;
	ulonglong uVar8;
	int iVar11;
	longlong lVar9;
	longlong lVar10;
	int iVar12;
	ulonglong uVar13;
	uint uVar14;
	undefined uVar15;
	ulonglong uVar16;
	byte bVar17;
	ulonglong uVar18;
	undefined uVar19;
	ulonglong uVar20;
	ulonglong uVar21;
	undefined uVar22;
	undefined uVar23;
	undefined uVar24;
	undefined uVar25;
	longlong lVar26;
	longlong lVar27;
	longlong lVar28;
	int iVar29;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffa8;
	undefined uVar30;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	uVar30 = (undefined)in_stack_ffffffa8;
	ppuVar7 = &toc;
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar7 = &toc;
		app_fatal((int)PTR_s_MAI_RoundRanged__Invalid_monster_100f3188, param_1, param_3, param_4,
		    param_5, param_6, param_7, param_8, in_stack_ffffff98, in_stack_ffffff9f,
		    in_stack_ffffffa8, in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4,
		    in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4);
	}
	lVar28 = ZEXT48(ppuVar7[-0x1dd5]) + param_1 * 0xe8;
	iVar5 = (int)lVar28;
	if (*(int *)(iVar5 + 4) != 0) {
		return;
	}
	if (*(char *)(iVar5 + 0xa4) == '\0') {
		return;
	}
	bVar1 = *(byte *)(iVar5 + 0x50);
	uVar6 = (ulonglong)bVar1;
	bVar2 = *(byte *)(iVar5 + 0x51);
	uVar20 = (ulonglong)bVar2;
	uVar13 = (ulonglong) * (uint *)(iVar5 + 0x24);
	lVar27 = (ulonglong) * (uint *)(iVar5 + 0x20) - uVar6;
	uVar16 = (ulonglong) * (uint *)(iVar5 + 0xac);
	uVar18 = (ulonglong) * (uint *)(iVar5 + 0xb0);
	lVar26 = uVar13 - uVar20;
	uVar21 = uVar20;
	uVar8 = GetDirection((ulonglong) * (uint *)(iVar5 + 0x20), *(uint *)(iVar5 + 0x24), uVar16,
	    *(uint *)(iVar5 + 0xb0));
	bVar17 = (byte)uVar16;
	iVar11 = (int)param_1;
	if (((int)param_3 != 0) && (*(char *)(iVar5 + 0xa4) != -1)) {
		FUN_10087a2c(iVar11, uVar13, uVar16, uVar18, uVar21, param_6, param_7, param_8, in_stack_ffffff98);
	}
	uVar15 = 0x10;
	lVar9 = random(0x79, 10000, bVar17, (char)uVar18, (char)uVar21, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffff98, in_stack_ffffff9f, uVar30);
	lVar10 = abs(lVar27);
	iVar29 = (int)lVar9;
	uVar14 = (uint)uVar8;
	if ((((int)lVar10 < 2) && (lVar9 = abs(lVar26), (int)lVar9 < 2)) || (*(char *)(iVar5 + 0xa4) != -1)) {
	LAB_1007222c:
		*(undefined *)(iVar5 + 8) = 1;
	} else {
		uVar13 = (ulonglong) * (uint *)(iVar5 + 0x20) * 0x70;
		uVar15 = (undefined)uVar13;
		uVar3 = *(uint *)ppuVar7[-0x1d62];
		uVar16 = (ulonglong)uVar3;
		bVar17 = (byte)uVar3;
		if (*(char *)(uVar3 + (int)uVar13 + *(int *)(iVar5 + 0x24)) != *(char *)(uVar3 + (uint)bVar1 * 0x70 + (uint)bVar2))
			goto LAB_1007222c;
		if (*(char *)(iVar5 + 8) == '\x04') {
		LAB_1007227c:
			if (*(char *)(iVar5 + 8) != '\x04') {
				*(undefined4 *)(iVar5 + 0xc) = 0;
				lVar9 = random(0x7b, 2, (char)uVar16, (char)uVar18, (char)uVar21, (char)param_6,
				    (char)param_7, (char)param_8, in_stack_ffffff98, in_stack_ffffff9f, uVar30);
				*(undefined4 *)(iVar5 + 0x10) = (int)lVar9;
			}
			*(undefined *)(iVar5 + 8) = 4;
			lVar9 = abs(lVar26);
			lVar10 = abs(lVar27);
			if ((int)lVar9 < (int)lVar10) {
				lVar9 = abs(lVar27);
				iVar12 = (int)lVar9;
			} else {
				lVar9 = abs(lVar26);
				iVar12 = (int)lVar9;
			}
			bVar17 = (byte)uVar16;
			iVar4 = *(int *)(iVar5 + 0xc);
			*(int *)(iVar5 + 0xc) = iVar4 + 1;
			if ((iVar4 < iVar12 << 1) || (uVar15 = (char)uVar8, uVar13 = DirOK(param_1, uVar14, uVar16, uVar18, uVar21, param_6, param_7, param_8, in_stack_ffffff98), (int)uVar13 == 0)) {
				if ((iVar29<(int)((uint) * (byte *)(iVar5 + 0x9d) * 500 + 500)>> (param_5 & 0x3f)) && (uVar18 = uVar20, iVar12 = LineClear((ulonglong) * (uint *)(iVar5 + 0x20), (ulonglong) * (uint *)(iVar5 + 0x24), uVar6, uVar20, (char)uVar21, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff98), iVar12 != 0)) {
					uVar15 = (char)param_2;
					bVar17 = (byte)param_4;
					M_StartRSpAttack(iVar11, param_2, (int)param_4, (char)uVar18, (char)uVar21, (char)param_6,
					    (char)param_7, (char)param_8, in_stack_ffffff98);
				} else {
					lVar28 = lVar28 + 0x10;
					bVar17 = (byte)lVar28;
					uVar15 = (char)uVar8;
					M_RoundWalk(param_1, uVar14, lVar28, uVar18, uVar21, param_6, param_7, param_8, in_stack_ffffff98);
				}
			} else {
				*(undefined *)(iVar5 + 8) = 1;
			}
		} else {
			lVar9 = abs(lVar27);
			if ((int)lVar9 < 3) {
				lVar9 = abs(lVar26);
				bVar17 = (byte)uVar16;
				uVar15 = (undefined)uVar13;
				if (2 < (int)lVar9)
					goto LAB_10072264;
			} else {
			LAB_10072264:
				uVar15 = (undefined)(4 << param_5);
				lVar9 = random(0x7a, uVar13 & 0xffffffff00000000 | (ulonglong)(uint)(4 << param_5),
				    (char)uVar16, (char)uVar18, (char)uVar21, (char)param_6, (char)param_7,
				    (char)param_8, in_stack_ffffff98, in_stack_ffffff9f, uVar30);
				bVar17 = (byte)uVar16;
				if ((int)lVar9 == 0)
					goto LAB_1007227c;
			}
		}
	}
	uVar25 = (undefined)param_8;
	uVar24 = (undefined)param_7;
	uVar23 = (undefined)param_6;
	uVar22 = (undefined)uVar21;
	uVar19 = (undefined)uVar18;
	if (*(char *)(iVar5 + 8) == '\x01') {
		lVar28 = abs(lVar27);
		if ((((2 < (int)lVar28) || (lVar28 = abs(lVar26), 2 < (int)lVar28)) && (iVar29<(int)((uint) * (byte *)(iVar5 + 0x9d) * 500 + 1000)>> (param_5 & 0x3f))) || (iVar29<(int)((uint) * (byte *)(iVar5 + 0x9d) * 500 + 500)>> (param_5 & 0x3f))) {
			uVar15 = (undefined) * (uint *)(iVar5 + 0x24);
			bVar17 = bVar1;
			iVar12 = LineClear((ulonglong) * (uint *)(iVar5 + 0x20), (ulonglong) * (uint *)(iVar5 + 0x24),
			    uVar6, uVar20, (char)uVar21, (char)param_6, (char)param_7, (char)param_8,
			    in_stack_ffffff98);
			uVar25 = (undefined)param_8;
			uVar24 = (undefined)param_7;
			uVar23 = (undefined)param_6;
			uVar22 = (undefined)uVar21;
			uVar19 = (undefined)uVar20;
			uVar18 = uVar20;
			if (iVar12 != 0) {
				bVar17 = (byte)param_4;
				M_StartRSpAttack(iVar11, param_2, (int)param_4, uVar19, uVar22, uVar23, uVar24, uVar25,
				    in_stack_ffffff98);
				goto LAB_10072494;
			}
		}
		lVar28 = abs(lVar27);
		if ((int)lVar28 < 2) {
			lVar28 = abs(lVar26);
			uVar25 = (undefined)param_8;
			uVar24 = (undefined)param_7;
			uVar23 = (undefined)param_6;
			uVar22 = (undefined)uVar21;
			uVar19 = (undefined)uVar18;
			if ((int)lVar28 < 2) {
				if (iVar29 < (int)((uint) * (byte *)(iVar5 + 0x9d) * 1000 + 6000)) {
					*(uint *)(iVar5 + 0x48) = uVar14;
					M_StartAttack(iVar11, uVar15, bVar17, uVar19, uVar22, uVar23, uVar24, uVar25, in_stack_ffffff98);
				}
				goto LAB_10072494;
			}
		}
		lVar28 = random(0x7c, 100, bVar17, (char)uVar18, (char)uVar21, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffff98, in_stack_ffffff9f, uVar30);
		uVar25 = (undefined)param_8;
		uVar24 = (undefined)param_7;
		uVar23 = (undefined)param_6;
		uVar22 = (undefined)uVar21;
		uVar19 = (undefined)uVar18;
		lVar26 = (ulonglong) * (byte *)(iVar5 + 0x9d) * 1000;
		bVar17 = (byte)lVar26;
		if (((int)lVar28 < (int)lVar26 + 5000) || ((((*(int *)(iVar5 + 0x74) == 1 || (*(int *)(iVar5 + 0x74) - 2U < 2)) && (*(int *)(iVar5 + 0x78) == 0)) && ((int)lVar28 < (int)lVar26 + 8000)))) {
			M_CallWalk(param_1, uVar14, lVar26, uVar18, uVar21, param_6, param_7, param_8, in_stack_ffffff98);
		}
	}
LAB_10072494:
	if (*(int *)(iVar5 + 4) == 0) {
		lVar28 = random(0x7d, 10, bVar17, uVar19, uVar22, uVar23, uVar24, uVar25, in_stack_ffffff98,
		    in_stack_ffffff9f, uVar30);
		M_StartDelay(iVar11, (int)lVar28 + 5);
	}
	return;
}

void MAI_RR2(ulonglong param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	byte bVar1;
	byte bVar2;
	uint uVar3;
	int iVar4;
	int iVar5;
	undefined **ppuVar6;
	longlong lVar7;
	ulonglong uVar8;
	int iVar11;
	longlong lVar9;
	longlong lVar10;
	int iVar12;
	int iVar13;
	ulonglong uVar14;
	ulonglong uVar15;
	uint uVar16;
	undefined uVar17;
	ulonglong uVar18;
	ulonglong uVar19;
	byte bVar20;
	undefined uVar21;
	ulonglong uVar22;
	undefined uVar23;
	undefined uVar24;
	undefined uVar25;
	undefined uVar26;
	longlong lVar27;
	longlong lVar28;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffa8;
	undefined uVar29;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	uVar29 = (undefined)in_stack_ffffffa8;
	ppuVar6 = &toc;
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar6 = &toc;
		app_fatal((int)PTR_s_MAI_RR2__Invalid_monster__d_100f3184, param_1, param_3, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffa8,
		    in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4, in_stack_ffffffb8,
		    in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4);
	}
	lVar28 = ZEXT48(ppuVar6[-0x1dd5]) + param_1 * 0xe8;
	iVar5 = (int)lVar28;
	uVar18 = (ulonglong) * (byte *)(iVar5 + 0x50);
	uVar14 = (ulonglong) * (byte *)(iVar5 + 0x51);
	lVar27 = (ulonglong) * (uint *)(iVar5 + 0x24) - uVar14;
	lVar7 = abs((ulonglong) * (uint *)(iVar5 + 0x20) - uVar18);
	if ((4 < (int)lVar7) || (lVar7 = abs(lVar27), 4 < (int)lVar7)) {
		MAI_SkelSd(param_1, uVar14, uVar18, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff98);
		return;
	}
	if (*(int *)(iVar5 + 4) != 0) {
		return;
	}
	if (*(char *)(iVar5 + 0xa4) == '\0') {
		return;
	}
	bVar1 = *(byte *)(iVar5 + 0x50);
	bVar2 = *(byte *)(iVar5 + 0x51);
	uVar22 = (ulonglong)bVar2;
	uVar15 = (ulonglong) * (uint *)(iVar5 + 0x24);
	lVar27 = (ulonglong) * (uint *)(iVar5 + 0x20) - (ulonglong)bVar1;
	uVar19 = (ulonglong) * (uint *)(iVar5 + 0xac);
	uVar14 = (ulonglong) * (uint *)(iVar5 + 0xb0);
	lVar7 = uVar15 - uVar22;
	uVar18 = uVar22;
	uVar8 = GetDirection((ulonglong) * (uint *)(iVar5 + 0x20), *(uint *)(iVar5 + 0x24), uVar19,
	    *(uint *)(iVar5 + 0xb0));
	bVar20 = (byte)uVar19;
	iVar11 = (int)param_1;
	if (*(char *)(iVar5 + 0xa4) != -1) {
		FUN_10087a2c(iVar11, uVar15, uVar19, uVar14, uVar18, param_6, param_7, param_8, in_stack_ffffff98);
	}
	lVar9 = random(0x79, 100, bVar20, (char)uVar14, (char)uVar18, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffff98, in_stack_ffffff9f, uVar29);
	lVar10 = abs(lVar27);
	iVar13 = (int)lVar9;
	uVar16 = (uint)uVar8;
	if ((((int)lVar10 < 2) && (lVar9 = abs(lVar7), (int)lVar9 < 2)) || (*(char *)(iVar5 + 0xa4) != -1)) {
	LAB_100726dc:
		*(undefined *)(iVar5 + 8) = 1;
	} else {
		uVar3 = *(uint *)ppuVar6[-0x1d62];
		uVar8 = (ulonglong)uVar3;
		bVar20 = (byte)uVar3;
		if (*(char *)(uVar3 + *(int *)(iVar5 + 0x20) * 0x70 + *(int *)(iVar5 + 0x24)) != *(char *)(uVar3 + (uint)bVar1 * 0x70 + (uint)bVar2))
			goto LAB_100726dc;
		if ((*(char *)(iVar5 + 8) == '\x04') || (lVar9 = abs(lVar27), 2 < (int)lVar9)) {
		LAB_10072714:
			if (*(char *)(iVar5 + 8) != '\x04') {
				*(undefined4 *)(iVar5 + 0xc) = 0;
				lVar9 = random(0x7b, 2, (char)uVar8, (char)uVar14, (char)uVar18, (char)param_6,
				    (char)param_7, (char)param_8, in_stack_ffffff98, in_stack_ffffff9f, uVar29);
				*(undefined4 *)(iVar5 + 0x10) = (int)lVar9;
			}
			*(undefined *)(iVar5 + 8) = 4;
			*(undefined4 *)(iVar5 + 0x14) = 4;
			lVar9 = abs(lVar7);
			lVar10 = abs(lVar27);
			if ((int)lVar9 < (int)lVar10) {
				lVar9 = abs(lVar27);
				iVar12 = (int)lVar9;
			} else {
				lVar9 = abs(lVar7);
				iVar12 = (int)lVar9;
			}
			bVar20 = (byte)uVar8;
			iVar4 = *(int *)(iVar5 + 0xc);
			*(int *)(iVar5 + 0xc) = iVar4 + 1;
			if ((iVar4 < iVar12 << 1) || (uVar8 = DirOK(param_1, uVar16, uVar8, uVar14, uVar18, param_6, param_7, param_8, in_stack_ffffff98), (int)uVar8 == 0)) {
				if (iVar13 < (int)((uint) * (byte *)(iVar5 + 0x9d) * 5 + 0x50)) {
					lVar28 = lVar28 + 0x10;
					bVar20 = (byte)lVar28;
					M_RoundWalk(param_1, uVar16, lVar28, uVar14, uVar18, param_6, param_7, param_8, in_stack_ffffff98);
				}
			} else {
				*(undefined *)(iVar5 + 8) = 1;
			}
		} else {
			lVar9 = abs(lVar7);
			bVar20 = (byte)uVar8;
			if (2 < (int)lVar9)
				goto LAB_10072714;
		}
	}
	uVar26 = (undefined)param_8;
	uVar25 = (undefined)param_7;
	uVar24 = (undefined)param_6;
	uVar23 = (undefined)uVar18;
	uVar21 = (undefined)uVar14;
	if (*(char *)(iVar5 + 8) != '\x01')
		goto LAB_1007293c;
	lVar28 = abs(lVar27);
	if (((((int)lVar28 < 3) && (lVar28 = abs(lVar7), (int)lVar28 < 3)) || ((int)((uint) * (byte *)(iVar5 + 0x9d) * 5 + 10) <= iVar13)) && (((int)((uint) * (byte *)(iVar5 + 0x9d) * 5 + 5) <= iVar13 && (*(int *)(iVar5 + 0x14) != 4)))) {
	LAB_10072860:
		lVar28 = abs(lVar27);
		if ((int)lVar28 < 2) {
			lVar7 = abs(lVar7);
			uVar26 = (undefined)param_8;
			uVar25 = (undefined)param_7;
			uVar24 = (undefined)param_6;
			uVar23 = (undefined)uVar18;
			uVar21 = (undefined)uVar14;
			if ((int)lVar7 < 2) {
				lVar7 = random(0x7c, 100, bVar20, uVar21, uVar23, uVar24, uVar25, uVar26, in_stack_ffffff98,
				    in_stack_ffffff9f, uVar29);
				if ((int)lVar7 < (int)((uint) * (byte *)(iVar5 + 0x9d) * 10 + 0x28)) {
					*(uint *)(iVar5 + 0x48) = uVar16;
					uVar17 = 2;
					lVar7 = random(0x7c, 2, bVar20, uVar21, uVar23, uVar24, uVar25, uVar26, in_stack_ffffff98,
					    in_stack_ffffff9f, uVar29);
					if ((int)lVar7 == 0) {
						bVar20 = (byte)param_3;
						M_StartRSpAttack(iVar11, param_2, (int)param_3, uVar21, uVar23, uVar24, uVar25, uVar26,
						    in_stack_ffffff98);
					} else {
						M_StartAttack(iVar11, uVar17, bVar20, uVar21, uVar23, uVar24, uVar25, uVar26, in_stack_ffffff98);
					}
				}
				goto LAB_10072934;
			}
		}
		lVar7 = random(0x7c, 100, bVar20, (char)uVar14, (char)uVar18, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffff98, in_stack_ffffff9f, uVar29);
		uVar26 = (undefined)param_8;
		uVar25 = (undefined)param_7;
		uVar24 = (undefined)param_6;
		uVar23 = (undefined)uVar18;
		uVar21 = (undefined)uVar14;
		lVar28 = (ulonglong) * (byte *)(iVar5 + 0x9d) * 10;
		bVar20 = (byte)lVar28;
		if (((int)lVar7 < (int)lVar28 + 0x32) || (((*(int *)(iVar5 + 0x74) == 1 || (*(int *)(iVar5 + 0x74) - 2U < 2)) && ((*(int *)(iVar5 + 0x78) == 0 && ((int)lVar7 < (int)lVar28 + 0x50)))))) {
			M_CallWalk(param_1, uVar16, lVar28, uVar14, uVar18, param_6, param_7, param_8, in_stack_ffffff98);
		}
	} else {
		bVar20 = bVar1;
		iVar13 = LineClear((ulonglong) * (uint *)(iVar5 + 0x20), (ulonglong) * (uint *)(iVar5 + 0x24),
		    (ulonglong)bVar1, uVar22, (char)uVar18, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffff98);
		uVar26 = (undefined)param_8;
		uVar25 = (undefined)param_7;
		uVar24 = (undefined)param_6;
		uVar23 = (undefined)uVar18;
		uVar21 = (undefined)uVar22;
		uVar14 = uVar22;
		if (iVar13 == 0)
			goto LAB_10072860;
		bVar20 = (byte)param_3;
		M_StartRSpAttack(iVar11, param_2, (int)param_3, uVar21, uVar23, uVar24, uVar25, uVar26, in_stack_ffffff98);
	}
LAB_10072934:
	*(undefined4 *)(iVar5 + 0x14) = 1;
LAB_1007293c:
	if (*(int *)(iVar5 + 4) == 0) {
		lVar7 = random(0x7d, 10, bVar20, uVar21, uVar23, uVar24, uVar25, uVar26, in_stack_ffffff98,
		    in_stack_ffffff9f, uVar29);
		M_StartDelay(iVar11, (int)lVar7 + 5);
	}
	return;
}

void MAI_Golum(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, int param_7, int param_8, undefined4 param_9)

{
	short sVar1;
	int iVar2;
	int *piVar3;
	uint uVar4;
	uint uVar5;
	undefined *puVar6;
	char *pcVar7;
	int iVar8;
	undefined *puVar9;
	undefined **ppuVar10;
	undefined8 uVar11;
	ulonglong uVar12;
	ulonglong uVar13;
	longlong lVar14;
	undefined uVar16;
	ulonglong uVar15;
	undefined uVar18;
	ulonglong uVar17;
	undefined uVar20;
	ulonglong uVar19;
	undefined uVar22;
	longlong lVar21;
	longlong lVar23;
	longlong lVar24;
	longlong lVar25;
	longlong lVar26;
	int iVar27;
	ulonglong uVar28;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar9 = PTR_DAT_100f187c;
	uVar20 = (undefined)param_5;
	uVar18 = (undefined)param_4;
	uVar16 = (undefined)param_3;
	lVar24 = (longlong)param_8;
	lVar23 = (longlong)param_7;
	uVar22 = (undefined)param_6;
	ppuVar10 = &toc;
	uVar28 = ZEXT48(PTR_DAT_100f187c);
	if (199 < (param_1 & 0xffffffff)) {
		param_2._7_1_ = (char)param_1;
		ppuVar10 = &toc;
		app_fatal((int)PTR_s_MAI_Golum__Invalid_monster__d_100f3180, param_1, param_3, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffb8,
		    in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
	}
	iVar27 = (int)param_1;
	puVar6 = puVar9 + iVar27 * 0xe8;
	if (((((*(int *)(puVar6 + 0x20) != 1) || (*(int *)(puVar6 + 0x24) != 0)) && (iVar2 = *(int *)(puVar6 + 4), iVar2 != 6)) && (iVar2 != 0xb)) && ((iVar2 < 1 || (3 < iVar2)))) {
		if ((*(uint *)(puVar9 + iVar27 * 0xe8 + 0xa0) & 0x10) == 0) {
			M_Enemy(iVar27, (undefined)param_2, uVar16, uVar18, uVar20, uVar22, (char)lVar23, (char)lVar24,
			    in_stack_ffffffa8);
		}
		uVar11 = countLeadingZeros(*(uint *)(puVar6 + 0xa0) & 0x400);
		uVar5 = (uint)uVar11 >> 5 & 0xff;
		if (*(int *)(puVar6 + 4) != 4) {
			lVar21 = (ulonglong) * (uint *)(puVar6 + 0x4c) * 0xe8;
			uVar13 = (ulonglong) * (uint *)(puVar6 + 0x24);
			iVar2 = (int)lVar21;
			uVar15 = (ulonglong) * (uint *)(puVar9 + 0x20 + iVar2);
			uVar19 = (ulonglong) * (uint *)(puVar9 + iVar2 + 0x28);
			uVar4 = *(uint *)(puVar9 + 0x24 + iVar2);
			uVar17 = (ulonglong)uVar4;
			lVar26 = (ulonglong) * (uint *)(puVar6 + 0x20) - uVar19;
			lVar25 = uVar13 - (ulonglong) * (uint *)(puVar9 + iVar2 + 0x2c);
			uVar12 = GetDirection((ulonglong) * (uint *)(puVar6 + 0x20), *(uint *)(puVar6 + 0x24), uVar15,
			    uVar4);
			*(int *)(puVar6 + 0x48) = (int)uVar12;
			lVar26 = abs(lVar26);
			if ((int)lVar26 < 2) {
				lVar26 = abs(lVar25);
				uVar20 = (undefined)uVar19;
				uVar18 = (undefined)uVar17;
				uVar16 = (undefined)uVar15;
				if (((int)lVar26 < 2) && (uVar5 != 0)) {
					puVar6[0x50] = (char)*(undefined4 *)(puVar9 + 0x20 + *(int *)(puVar6 + 0x4c) * 0xe8);
					puVar6[0x51] = (char)*(undefined4 *)(puVar9 + 0x24 + *(int *)(puVar6 + 0x4c) * 0xe8);
					lVar26 = uVar28 + (ulonglong) * (uint *)(puVar6 + 0x4c) * 0xe8 + 0xa4;
					uVar22 = (undefined)lVar26;
					pcVar7 = (char *)lVar26;
					if (*pcVar7 == '\0') {
						uVar18 = 0xff;
						piVar3 = (int *)ppuVar10[-0x1d9f];
						*pcVar7 = -1;
						lVar25 = 5;
						lVar26 = 0;
						*(undefined4 *)(puVar9 + *(int *)(puVar6 + 0x4c) * 0xe8 + 0xac) = *(undefined4 *)(puVar6 + 0x20);
						*(undefined4 *)(puVar9 + *(int *)(puVar6 + 0x4c) * 0xe8 + 0xb0) = *(undefined4 *)(puVar6 + 0x24);
						iVar2 = *piVar3;
						uVar16 = (undefined)iVar2;
						do {
							iVar8 = (int)lVar26;
							sVar1 = *(short *)(iVar2 + (*(int *)(puVar6 + 0x20) + -2) * 0xe0 + (*(int *)(puVar6 + 0x24) + iVar8 + -2) * 2);
							if (0 < sVar1) {
								puVar9[(int)sVar1 * 0xe8 + 0xa4] = 0xff;
							}
							sVar1 = *(short *)(iVar2 + (*(int *)(puVar6 + 0x20) + -1) * 0xe0 + (*(int *)(puVar6 + 0x24) + iVar8 + -2) * 2);
							if (0 < sVar1) {
								puVar9[(int)sVar1 * 0xe8 + 0xa4] = 0xff;
							}
							sVar1 = *(short *)(iVar2 + *(int *)(puVar6 + 0x20) * 0xe0 + (*(int *)(puVar6 + 0x24) + iVar8 + -2) * 2);
							if (0 < sVar1) {
								puVar9[(int)sVar1 * 0xe8 + 0xa4] = 0xff;
							}
							sVar1 = *(short *)(iVar2 + (*(int *)(puVar6 + 0x20) + 1) * 0xe0 + (*(int *)(puVar6 + 0x24) + iVar8 + -2) * 2);
							if (0 < sVar1) {
								puVar9[(int)sVar1 * 0xe8 + 0xa4] = 0xff;
							}
							lVar14 = ((ulonglong) * (uint *)(puVar6 + 0x20) + 2) * 0xe0;
							uVar22 = (undefined)lVar14;
							sVar1 = *(short *)(iVar2 + (int)lVar14 + (*(int *)(puVar6 + 0x24) + iVar8 + -2) * 2);
							if (0 < sVar1) {
								puVar9[(int)sVar1 * 0xe8 + 0xa4] = 0xff;
							}
							lVar26 = lVar26 + 1;
							uVar20 = (undefined)lVar26;
							lVar25 = lVar25 + -1;
						} while (lVar25 != 0);
					}
					M_StartAttack(iVar27, uVar22, uVar16, uVar18, uVar20, (char)lVar21, (char)lVar23, (char)lVar24,
					    in_stack_ffffffa8);
					return;
				}
			}
			if ((uVar5 == 0) || (uVar11 = MAI_Path(param_1, uVar13, uVar15, uVar17, uVar19, (int)lVar21, (int)lVar23, (int)lVar24, in_stack_ffffffa8), (int)uVar11 == 0)) {
				puVar6[0x1c] = puVar6[0x1c] + '\x01';
				if (8 < (byte)puVar6[0x1c]) {
					puVar6[0x1c] = 5;
				}
				uVar28 = M_CallWalk(param_1, *(uint *)(ppuVar10[-0x1dea] + iVar27 * 0x55ec + 0x70), uVar15,
				    uVar17, uVar19, (int)lVar21, (int)lVar23, (int)lVar24, in_stack_ffffffa8);
				if ((int)uVar28 == 0) {
					uVar5 = (int)uVar12 - 1U & 7;
					iVar27 = 0;
					while (true) {
						if ((7 < iVar27) || ((int)uVar28 != 0))
							break;
						uVar5 = uVar5 + 1 & 7;
						uVar28 = DirOK(param_1, uVar5, uVar15, uVar17, uVar19, (int)lVar21, (int)lVar23,
						    (int)lVar24, in_stack_ffffffa8);
						iVar27 = iVar27 + 1;
					}
					if ((int)uVar28 != 0) {
						M_WalkDir(param_1, uVar5, uVar15, uVar17, uVar19, (int)lVar21, (int)lVar23, (int)lVar24,
						    in_stack_ffffffa8);
					}
				}
			}
		}
	}
	return;
}

void MAI_Counselor(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	byte bVar1;
	byte bVar2;
	char cVar3;
	uint uVar4;
	int iVar5;
	int iVar6;
	undefined *puVar7;
	undefined **ppuVar8;
	ulonglong uVar9;
	int iVar12;
	longlong lVar10;
	longlong lVar11;
	int iVar13;
	ulonglong uVar14;
	ulonglong uVar15;
	byte bVar16;
	undefined uVar17;
	ulonglong uVar18;
	ulonglong uVar19;
	undefined uVar20;
	undefined uVar21;
	undefined uVar22;
	undefined uVar23;
	longlong lVar24;
	int iVar25;
	longlong lVar26;
	longlong lVar27;
	ulonglong uVar28;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffa8;
	undefined uVar29;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	puVar7 = PTR_DAT_100f187c;
	uVar29 = (undefined)in_stack_ffffffa8;
	ppuVar8 = &toc;
	uVar28 = ZEXT48(PTR_DAT_100f187c);
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar8 = &toc;
		app_fatal((int)PTR_s_MAI_Counselor__Invalid_monster___100f3174, param_1, param_3, param_4,
		    param_5, param_6, param_7, param_8, in_stack_ffffff98, in_stack_ffffff9f,
		    in_stack_ffffffa8, in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4,
		    in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4);
	}
	lVar27 = uVar28 + param_1 * 0xe8;
	iVar6 = (int)lVar27;
	if (*(int *)(iVar6 + 4) != 0) {
		return;
	}
	if (*(char *)(iVar6 + 0xa4) == '\0') {
		return;
	}
	bVar1 = *(byte *)(iVar6 + 0x50);
	bVar2 = *(byte *)(iVar6 + 0x51);
	uVar18 = (ulonglong)bVar2;
	uVar14 = (ulonglong) * (uint *)(iVar6 + 0x24);
	lVar26 = (ulonglong) * (uint *)(iVar6 + 0x20) - (ulonglong)bVar1;
	uVar15 = (ulonglong) * (uint *)(iVar6 + 0xac);
	uVar28 = (ulonglong) * (uint *)(iVar6 + 0xb0);
	lVar24 = uVar14 - uVar18;
	uVar19 = uVar18;
	uVar9 = GetDirection((ulonglong) * (uint *)(iVar6 + 0x20), *(uint *)(iVar6 + 0x24), uVar15,
	    *(uint *)(iVar6 + 0xb0));
	iVar12 = (int)param_1;
	if (*(char *)(iVar6 + 0xa4) != -1) {
		FUN_10087a2c(iVar12, uVar14, uVar15, uVar28, uVar19, param_6, param_7, param_8, in_stack_ffffff98);
	}
	lVar10 = random(0x79, 100, (char)uVar15, (char)uVar28, (char)uVar19, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffff98, in_stack_ffffff9f, uVar29);
	uVar23 = (undefined)param_8;
	uVar22 = (undefined)param_7;
	uVar21 = (undefined)param_6;
	uVar20 = (undefined)uVar19;
	uVar17 = (undefined)uVar28;
	bVar16 = (byte)uVar15;
	cVar3 = *(char *)(iVar6 + 8);
	iVar25 = (int)uVar9;
	if (cVar3 == '\x02') {
		iVar13 = *(int *)(iVar6 + 0xc);
		*(int *)(iVar6 + 0xc) = iVar13 + 1;
		if (iVar13 < 4) {
			M_CallWalk(param_1, *(uint *)(ppuVar8[-0x1c41] + iVar25 * 4), uVar15, uVar28, uVar19, param_6,
			    param_7, param_8, in_stack_ffffff98);
		} else {
			*(undefined *)(iVar6 + 8) = 1;
			bVar16 = 1;
			M_StartFadein(param_1, iVar25, 1, uVar28, uVar19, param_6, param_7, param_8, in_stack_ffffff98);
		}
	} else {
		if (cVar3 == '\x04') {
			lVar10 = abs(lVar24);
			lVar11 = abs(lVar26);
			if ((int)lVar10 < (int)lVar11) {
				lVar10 = abs(lVar26);
				iVar13 = (int)lVar10;
			} else {
				lVar10 = abs(lVar24);
				iVar13 = (int)lVar10;
			}
			lVar26 = abs(lVar26);
			if (((1 < (int)lVar26) || (lVar24 = abs(lVar24), 1 < (int)lVar24)) && (*(char *)(iVar6 + 0xa4) == -1)) {
				uVar4 = *(uint *)ppuVar8[-0x1d62];
				if (*(char *)(uVar4 + *(int *)(iVar6 + 0x20) * 0x70 + *(int *)(iVar6 + 0x24)) == *(char *)(uVar4 + (uint)bVar1 * 0x70 + (uint)bVar2)) {
					iVar5 = *(int *)(iVar6 + 0xc);
					*(int *)(iVar6 + 0xc) = iVar5 + 1;
					if (iVar13 << 1 <= iVar5) {
						uVar9 = DirOK(param_1, iVar25, (ulonglong)uVar4, uVar28, uVar19, param_6, param_7,
						    param_8, in_stack_ffffff98);
						uVar23 = (undefined)param_8;
						uVar22 = (undefined)param_7;
						uVar21 = (undefined)param_6;
						uVar20 = (undefined)uVar19;
						uVar17 = (undefined)uVar28;
						if ((int)uVar9 != 0) {
							*(undefined *)(iVar6 + 8) = 1;
							bVar16 = 1;
							M_StartFadein(param_1, iVar25, 1, uVar28, uVar19, param_6, param_7, param_8, in_stack_ffffff98);
							goto LAB_10073924;
						}
					}
					uVar23 = (undefined)param_8;
					uVar22 = (undefined)param_7;
					uVar21 = (undefined)param_6;
					uVar20 = (undefined)uVar19;
					uVar17 = (undefined)uVar28;
					lVar27 = lVar27 + 0x10;
					bVar16 = (byte)lVar27;
					M_RoundWalk(param_1, iVar25, lVar27, uVar28, uVar19, param_6, param_7, param_8, in_stack_ffffff98);
					goto LAB_10073924;
				}
			}
			uVar23 = (undefined)param_8;
			uVar22 = (undefined)param_7;
			uVar21 = (undefined)param_6;
			uVar20 = (undefined)uVar19;
			uVar17 = (undefined)uVar28;
			*(undefined *)(iVar6 + 8) = 1;
			bVar16 = 1;
			M_StartFadein(param_1, iVar25, 1, uVar28, uVar19, param_6, param_7, param_8, in_stack_ffffff98);
		} else {
			if (cVar3 == '\x01') {
				lVar27 = abs(lVar26);
				if ((int)lVar27 < 2) {
					lVar27 = abs(lVar24);
					uVar23 = (undefined)param_8;
					uVar22 = (undefined)param_7;
					uVar21 = (undefined)param_6;
					uVar20 = (undefined)uVar19;
					uVar17 = (undefined)uVar28;
					if ((int)lVar27 < 2) {
						*(int *)(iVar6 + 0x48) = iVar25;
						if (*(int *)(iVar6 + 0x98) < *(int *)(iVar6 + 0x94) >> 1) {
							*(undefined *)(iVar6 + 8) = 2;
							*(undefined4 *)(iVar6 + 0xc) = 0;
							bVar16 = 0;
							M_StartFadeout(param_1, iVar25, 0, uVar28, uVar19, param_6, param_7, param_8, in_stack_ffffff98);
						} else {
							if ((*(int *)(iVar6 + 0x74) == 0xd) || (lVar27 = random(0x69, 100, bVar16, uVar17, uVar20, uVar21, uVar22, uVar23, in_stack_ffffff98, in_stack_ffffff9f, uVar29), (int)lVar27 < (int)((uint) * (byte *)(iVar6 + 0x9d) * 2 + 0x14))) {
								M_StartRAttack(iVar12, 0xffffffff, 0, uVar17, uVar20, uVar21, uVar22, uVar23,
								    in_stack_ffffff98);
								iVar25 = (int)(param_1 * 0xe8);
								AddMissile((ulonglong) * (uint *)(puVar7 + iVar25 + 0x20),
								    (ulonglong) * (uint *)(puVar7 + iVar25 + 0x24), 0, 0,
								    (ulonglong) * (uint *)(puVar7 + iVar25 + 0x48), 0xb, 1, param_1,
								    in_stack_ffffff98, in_stack_ffffff9f, 4, 0);
								bVar16 = 0;
								uVar17 = 0;
								uVar21 = 0xc;
								uVar22 = 1;
								uVar4 = *(uint *)(puVar7 + iVar25 + 0x48);
								uVar20 = (undefined)uVar4;
								uVar23 = (char)param_1;
								AddMissile((ulonglong) * (uint *)(puVar7 + iVar25 + 0x20),
								    (ulonglong) * (uint *)(puVar7 + iVar25 + 0x24), 0, 0, (ulonglong)uVar4, 0xc, 1, param_1, in_stack_ffffff98, in_stack_ffffff9f, 4, 0);
							} else {
								lVar27 = random(0x69, 10, bVar16, uVar17, uVar20, uVar21, uVar22, uVar23,
								    in_stack_ffffff98, in_stack_ffffff9f, uVar29);
								M_StartDelay(iVar12, (int)lVar27 + 10 + (uint) * (byte *)(iVar6 + 0x9d) * -2);
							}
						}
						goto LAB_10073924;
					}
				}
				if ((int)lVar10 < (int)((uint) * (byte *)(iVar6 + 0x9d) * 5 + 0x32)) {
					bVar16 = bVar1;
					iVar13 = LineClear((ulonglong) * (uint *)(iVar6 + 0x20),
					    (ulonglong) * (uint *)(iVar6 + 0x24), (ulonglong)bVar1, uVar18,
					    (char)uVar19, (char)param_6, (char)param_7, (char)param_8,
					    in_stack_ffffff98);
					uVar23 = (undefined)param_8;
					uVar22 = (undefined)param_7;
					uVar21 = (undefined)param_6;
					uVar20 = (undefined)uVar19;
					uVar28 = uVar18;
					if (iVar13 != 0) {
						lVar27 = random(0x4d, ((ulonglong) * (byte *)(iVar6 + 0xca) - (ulonglong) * (byte *)(iVar6 + 0xc9)) + 1, bVar16, (char)uVar18,
						    uVar20, uVar21, uVar22, uVar23, in_stack_ffffff98, in_stack_ffffff9f,
						    uVar29);
						lVar24 = (ulonglong) * (byte *)(iVar6 + 0xc9) + lVar27;
						bVar16 = (byte)lVar24;
						uVar17 = (undefined)lVar27;
						M_StartRAttack(iVar12, (uint) * (byte *)((int)ppuVar8 + ((uint) * (byte *)(iVar6 + 0x9d) - 0x4d90)), (int)lVar24, uVar17, uVar20, uVar21, uVar22, uVar23, in_stack_ffffff98);
						goto LAB_10073924;
					}
				}
				lVar27 = random(0x7c, 100, bVar16, (char)uVar28, (char)uVar19, (char)param_6, (char)param_7,
				    (char)param_8, in_stack_ffffff98, in_stack_ffffff9f, uVar29);
				uVar23 = (undefined)param_8;
				uVar22 = (undefined)param_7;
				uVar21 = (undefined)param_6;
				uVar20 = (undefined)uVar19;
				uVar17 = (undefined)uVar28;
				if ((int)lVar27 < 0x1e) {
					*(undefined *)(iVar6 + 8) = 4;
					*(undefined4 *)(iVar6 + 0xc) = 0;
					bVar16 = 0;
					M_StartFadeout(param_1, iVar25, 0, uVar28, uVar19, param_6, param_7, param_8, in_stack_ffffff98);
				} else {
					lVar27 = random(0x69, 10, bVar16, uVar17, uVar20, uVar21, uVar22, uVar23, in_stack_ffffff98,
					    in_stack_ffffff9f, uVar29);
					M_StartDelay(iVar12, (int)lVar27 + 10 + (uint) * (byte *)(iVar6 + 0x9d) * -2);
				}
			}
		}
	}
LAB_10073924:
	if (*(int *)(iVar6 + 4) == 0) {
		lVar27 = random(0x7d, 10, bVar16, uVar17, uVar20, uVar21, uVar22, uVar23, in_stack_ffffff98,
		    in_stack_ffffff9f, uVar29);
		M_StartDelay(iVar12, (int)lVar27 + 5);
	}
	return;
}

void DeleteMonsterList(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;

	puVar3 = PTR_DAT_100f19a8;
	puVar2 = PTR_DAT_100f19a4;
	puVar1 = PTR_DAT_100f187c;
	if (*(int *)(PTR_DAT_100f187c + 0x70) != 0) {
		*(undefined4 *)(PTR_DAT_100f187c + 0x20) = 1;
		*(undefined4 *)(puVar1 + 0x24) = 0;
		*(undefined4 *)(puVar1 + 0x28) = 0;
		*(undefined4 *)(puVar1 + 0x2c) = 0;
		*(undefined4 *)(puVar1 + 0x30) = 0;
		*(undefined4 *)(puVar1 + 0x34) = 0;
		*(undefined4 *)(puVar1 + 0x70) = 0;
	}
	if (*(int *)(puVar1 + 0x158) != 0) {
		*(undefined4 *)(puVar1 + 0x108) = 1;
		*(undefined4 *)(puVar1 + 0x10c) = 0;
		*(undefined4 *)(puVar1 + 0x110) = 0;
		*(undefined4 *)(puVar1 + 0x114) = 0;
		*(undefined4 *)(puVar1 + 0x118) = 0;
		*(undefined4 *)(puVar1 + 0x11c) = 0;
		*(undefined4 *)(puVar1 + 0x158) = 0;
	}
	if (*(int *)(puVar1 + 0x240) != 0) {
		*(undefined4 *)(puVar1 + 0x1f0) = 1;
		*(undefined4 *)(puVar1 + 500) = 0;
		*(undefined4 *)(puVar1 + 0x1f8) = 0;
		*(undefined4 *)(puVar1 + 0x1fc) = 0;
		*(undefined4 *)(puVar1 + 0x200) = 0;
		*(undefined4 *)(puVar1 + 0x204) = 0;
		*(undefined4 *)(puVar1 + 0x240) = 0;
	}
	if (*(int *)(puVar1 + 0x328) != 0) {
		*(undefined4 *)(puVar1 + 0x2d8) = 1;
		*(undefined4 *)(puVar1 + 0x2dc) = 0;
		*(undefined4 *)(puVar1 + 0x2e0) = 0;
		*(undefined4 *)(puVar1 + 0x2e4) = 0;
		*(undefined4 *)(puVar1 + 0x2e8) = 0;
		*(undefined4 *)(puVar1 + 0x2ec) = 0;
		*(undefined4 *)(puVar1 + 0x328) = 0;
	}
	iVar4 = 4;
	while (iVar4 < *(int *)puVar2) {
		if (*(int *)(puVar1 + *(int *)(puVar3 + iVar4 * 4) * 0xe8 + 0x70) == 0) {
			iVar4 = iVar4 + 1;
		} else {
			DeleteMonster(iVar4);
			iVar4 = 0;
		}
	}
	return;
}

// WARNING: Removing unreachable block (ram,0x10074860)

void ProcessMonsters(undefined8 param_1, ulonglong param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	char cVar1;
	uint uVar2;
	int iVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined *puVar12;
	ulonglong uVar13;
	ulonglong uVar14;
	undefined uVar16;
	undefined4 uVar15;
	ulonglong uVar17;
	undefined7 uVar18;
	undefined uVar19;
	undefined7 uVar20;
	undefined uVar21;
	longlong lVar22;
	longlong lVar23;
	longlong lVar24;
	uint *puVar25;
	int iVar26;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	uint local_6c;
	undefined4 in_stack_ffffff98;
	undefined4 in_stack_ffffff9c;
	undefined4 in_stack_ffffffa0;
	undefined4 in_stack_ffffffa4;
	undefined4 in_stack_ffffffa8;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;

	puVar12 = PTR_s_Illegal_enemy_monster__d_for_mon_100f3150;
	puVar11 = PTR_s_Illegal_enemy_player__d_for_mons_100f314c;
	puVar10 = PTR_DAT_100f19a4;
	puVar9 = PTR_DAT_100f187c;
	puVar8 = PTR_DAT_100f1834;
	puVar7 = PTR_DAT_100f1828;
	puVar6 = PTR_DAT_100f17e0;
	uVar20 = (undefined7)((ulonglong)param_5 >> 8);
	uVar21 = (undefined)param_5;
	uVar18 = (undefined7)((ulonglong)param_4 >> 8);
	uVar19 = (undefined)param_4;
	lVar24 = (longlong)param_8;
	lVar23 = (longlong)param_7;
	lVar22 = (longlong)param_6;
	uVar13 = ZEXT48(&toc);
	uVar14 = DeleteMonsterList((undefined)param_1, (char)param_2, (char)param_3, uVar19, uVar21, (char)param_6,
	    (char)param_7, (char)param_8, in_stack_ffffff88);
	puVar25 = *(uint **)((int)uVar13 + -0x7628);
	iVar26 = 0;
	while (true) {
		if (*(int *)puVar10 <= iVar26) {
			DeleteMonsterList((char)uVar14, (char)param_2, (char)param_3, uVar19, uVar21, (char)lVar22, (char)lVar23,
			    (char)lVar24, in_stack_ffffff88);
			return;
		}
		uVar2 = *puVar25;
		uVar17 = (ulonglong)uVar2;
		uVar17._7_1_ = (undefined)uVar2;
		puVar5 = puVar9 + uVar2 * 0xe8;
		if (1 < (byte)*puVar6) {
			uVar16 = SetRndSeed(*(undefined4 *)(puVar5 + 0xb8));
			uVar15 = GetRndSeed(uVar16, (undefined)uVar17, (char)param_3, uVar19, uVar21, (char)lVar22,
			    (char)lVar23, (char)lVar24, in_stack_ffffff88);
			*(undefined4 *)(puVar5 + 0xb8) = uVar15;
		}
		if ((((*(uint *)(puVar9 + uVar2 * 0xe8 + 0xa0) & 8) == 0) && (iVar3 = *(int *)(puVar5 + 0x98), iVar3 < *(int *)(puVar5 + 0x94))) && (iVar3 >> 6 != 0)) {
			cVar1 = puVar5[0xc4];
			if ((int)cVar1 < 2) {
				*(int *)(puVar5 + 0x98) = iVar3 + (int)cVar1;
			} else {
				*(int *)(puVar5 + 0x98) = iVar3 + ((int)cVar1 >> 1);
			}
		}
		iVar3 = *(int *)(puVar5 + 0x20);
		iVar4 = *(int *)(puVar5 + 0x24);
		if ((((*(byte *)(*(int *)puVar8 + iVar3 * 0x70 + iVar4) & 2) != 0) && (puVar5[0xa4] == '\0')) && (**(char **)(puVar5 + 0xe0) == '3')) {
			PlaySFX(0x346);
		}
		if ((*(uint *)(puVar5 + 0xa0) & 0x10) == 0) {
			param_2 = (ulonglong) * (uint *)(puVar5 + 0x4c);
			if (3 < *(uint *)(puVar5 + 0x4c)) {
				param_3 = (ulonglong) * (uint *)(puVar5 + 0xdc);
				app_fatal((int)puVar11, param_2, param_3, CONCAT71(uVar18, uVar19), CONCAT71(uVar20, uVar21),
				    (int)lVar22, (int)lVar23, (int)lVar24, in_stack_ffffff88, in_stack_ffffff8f,
				    in_stack_ffffff98, in_stack_ffffff9c, in_stack_ffffffa0, in_stack_ffffffa4,
				    in_stack_ffffffa8, in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4);
			}
			puVar5[0x50] = (char)*(undefined4 *)(puVar7 + *(int *)(puVar5 + 0x4c) * 0x55ec + 0x40);
			puVar5[0x51] = (char)*(undefined4 *)(puVar7 + *(int *)(puVar5 + 0x4c) * 0x55ec + 0x44);
			if ((*(byte *)(*(int *)puVar8 + iVar3 * 0x70 + iVar4) & 2) == 0) {
				if ((puVar5[0xa4] != '\0') && (puVar5[0x9c] != 'n')) {
					puVar5[0xa4] = puVar5[0xa4] + -1;
				}
			} else {
				puVar5[0xa4] = 0xff;
				*(undefined4 *)(puVar5 + 0xac) = *(undefined4 *)(puVar7 + *(int *)(puVar5 + 0x4c) * 0x55ec + 0x40);
				*(undefined4 *)(puVar5 + 0xb0) = *(undefined4 *)(puVar7 + *(int *)(puVar5 + 0x4c) * 0x55ec + 0x44);
			}
		} else {
			param_2 = (ulonglong) * (uint *)(puVar5 + 0x4c);
			if (199 < *(uint *)(puVar5 + 0x4c)) {
				param_3 = (ulonglong) * (uint *)(puVar5 + 0xdc);
				app_fatal((int)puVar12, param_2, param_3, CONCAT71(uVar18, uVar19), CONCAT71(uVar20, uVar21),
				    (int)lVar22, (int)lVar23, (int)lVar24, in_stack_ffffff88, in_stack_ffffff8f,
				    in_stack_ffffff98, in_stack_ffffff9c, in_stack_ffffffa0, in_stack_ffffffa4,
				    in_stack_ffffffa8, in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4);
			}
			uVar15 = *(undefined4 *)(puVar9 + *(int *)(puVar5 + 0x4c) * 0xe8 + 0x28);
			*(undefined4 *)(puVar5 + 0xac) = uVar15;
			puVar5[0x50] = (char)uVar15;
			uVar15 = *(undefined4 *)(puVar9 + *(int *)(puVar5 + 0x4c) * 0xe8 + 0x2c);
			*(undefined4 *)(puVar5 + 0xb0) = uVar15;
			puVar5[0x51] = (char)uVar15;
		}
		if ((*(uint *)(puVar5 + 0xa0) & 0x100) == 0) {
			uVar14 = FUN_100dbf44(uVar17);
			uVar13 = (ulonglong)local_6c;
		} else {
			uVar14 = MAI_Path(uVar17, param_2, param_3, CONCAT71(uVar18, uVar19), CONCAT71(uVar20, uVar21),
			    (int)lVar22, (int)lVar23, (int)lVar24, in_stack_ffffff88);
			if ((int)uVar14 == 0) {
				uVar14 = FUN_100dbf44(uVar17);
				uVar13 = (ulonglong)local_6c;
			}
		}
		if (*(uint *)(puVar5 + 4) < 0x12)
			break;
		if (*(int *)(puVar5 + 4) != 0xf) {
			uVar14 = (ulonglong) * (uint *)(puVar5 + 0x60);
			*(uint *)(puVar5 + 0x60) = *(uint *)(puVar5 + 0x60) + 1;
			if (((*(uint *)(puVar5 + 0xa0) & 4) == 0) && (uVar14 = (ulonglong) * (uint *)(puVar5 + 0x60), *(int *)(puVar5 + 0x5c) <= (int)*(uint *)(puVar5 + 0x60))) {
				*(undefined4 *)(puVar5 + 0x60) = 0;
				if ((*(uint *)(puVar5 + 0xa0) & 2) == 0) {
					*(int *)(puVar5 + 0x68) = *(int *)(puVar5 + 0x68) + 1;
					uVar14 = (ulonglong) * (uint *)(puVar5 + 0x68);
					if (*(int *)(puVar5 + 100) < (int)*(uint *)(puVar5 + 0x68)) {
						*(undefined4 *)(puVar5 + 0x68) = 1;
					}
				} else {
					uVar14 = (ulonglong) * (uint *)(puVar5 + 0x68);
					*(uint *)(puVar5 + 0x68) = *(uint *)(puVar5 + 0x68) - 1;
					if (*(int *)(puVar5 + 0x68) == 0) {
						*(undefined4 *)(puVar5 + 0x68) = *(undefined4 *)(puVar5 + 100);
					}
				}
			}
		}
		puVar25 = puVar25 + 1;
		iVar26 = iVar26 + 1;
	}
	// WARNING: Could not recover jumptable at 0x10074740. Too many branches
	// WARNING: Treating indirect jump as call
	(**(code **)(*(int *)((int)uVar13 + -0x5e88) + *(uint *)(puVar5 + 4) * 4))();
	return;
}

void FreeMonsters(undefined param_1, char param_2, char param_3, char param_4, char param_5, char param_6, char param_7, char param_8, undefined4 param_9)

{
	byte bVar1;
	undefined *puVar2;
	int iVar3;
	undefined *puVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	int iVar12;
	int iVar13;
	byte *pbVar14;
	byte *pbVar15;
	char *pcVar16;
	undefined4 in_stack_ffffff98;

	puVar4 = PTR_s_nwahds_100f1f30;
	iVar3 = _DAT_100f1d1c;
	puVar2 = PTR_DAT_100f19b8;
	lVar11 = (longlong)param_8;
	lVar10 = (longlong)param_7;
	lVar9 = (longlong)param_6;
	lVar8 = (longlong)param_5;
	lVar7 = (longlong)param_4;
	lVar6 = (longlong)param_3;
	lVar5 = (longlong)param_2;
	iVar13 = 0;
	pbVar14 = PTR_DAT_100f19c0;
	while (iVar13 < *(int *)puVar2) {
		iVar12 = 0;
		bVar1 = *pbVar14;
		param_1 = 0;
		pcVar16 = puVar4;
		pbVar15 = pbVar14;
		do {
			if ((*pcVar16 != 's') || (*(int *)(iVar3 + (uint)bVar1 * 0x80 + 0xc) != 0)) {
				param_1 = mem_free_dbg((int **)(pbVar15 + 4), (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, (char)lVar11, in_stack_ffffff98);
			}
			iVar12 = iVar12 + 1;
			pbVar15 = pbVar15 + 0x4c;
			pcVar16 = pcVar16 + 1;
		} while (iVar12 < 6);
		pbVar14 = pbVar14 + 0x208;
		iVar13 = iVar13 + 1;
	}
	FreeMissiles2(param_1, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10,
	    (char)lVar11, in_stack_ffffff98);
	return;
}

ulonglong DirOK(ulonglong param_1, int param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	short sVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	longlong lVar5;
	undefined8 uVar6;
	undefined **ppuVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	int iVar11;
	undefined uVar13;
	int iVar12;
	undefined uVar15;
	int iVar14;
	undefined uVar18;
	longlong lVar16;
	int iVar17;
	uint uVar19;
	int iVar20;
	longlong lVar21;
	int iVar22;
	ulonglong uVar23;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar4 = PTR_DAT_100f187c;
	puVar3 = PTR_DAT_100f1834;
	uVar18 = (undefined)param_8;
	uVar15 = (undefined)param_7;
	uVar13 = (undefined)param_6;
	ppuVar7 = &toc;
	uVar23 = ZEXT48(PTR_DAT_100f187c);
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar7 = &toc;
		app_fatal((int)PTR_s_DirOK__Invalid_monster__d_100f3144, param_1, param_3, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffb8,
		    in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
	}
	lVar10 = uVar23 + param_1 * 0xe8;
	iVar2 = param_2 * 4;
	iVar20 = (int)lVar10;
	lVar8 = (ulonglong) * (uint *)(iVar20 + 0x24) + (ulonglong) * (uint *)(ppuVar7[-0x1c7c] + iVar2);
	lVar21 = (ulonglong) * (uint *)(iVar20 + 0x20) + (ulonglong) * (uint *)(ppuVar7[-0x1c7b] + iVar2);
	iVar20 = (int)lVar8;
	if (((iVar20 < 0x70) && (iVar22 = (int)lVar21, -1 < iVar22)) && (iVar22 < 0x70)) {
		uVar23 = PosOkMonst((uint)param_1, iVar22, iVar20, (char)lVar10, (char)iVar2, uVar13, uVar15, uVar18,
		    in_stack_ffffffa8);
		if ((int)uVar23 == 0) {
			uVar23 = 0;
		} else {
			if (param_2 == 6) {
				uVar23 = SolidLoc(iVar22, iVar20 + 1);
				if ((int)uVar23 != 0) {
					return 0;
				}
				if ((*(byte *)(*(int *)puVar3 + iVar22 * 0x70 + iVar20 + 1) & 0x10) != 0) {
					return 0;
				}
			} else {
				if (param_2 == 2) {
					uVar23 = SolidLoc(iVar22 + 1, iVar20);
					if ((int)uVar23 != 0) {
						return 0;
					}
					if ((*(byte *)(*(int *)puVar3 + iVar22 * 0x70 + iVar20 + 0x70) & 0x10) != 0) {
						return 0;
					}
				} else {
					if (param_2 == 4) {
						uVar23 = SolidLoc(iVar22 + 1, iVar20);
						if ((int)uVar23 != 0) {
							return 0;
						}
						uVar23 = SolidLoc(iVar22, iVar20 + 1);
						if ((int)uVar23 != 0) {
							return 0;
						}
					} else {
						if (param_2 == 0) {
							uVar23 = SolidLoc(iVar22 + -1, iVar20);
							if ((int)uVar23 != 0) {
								return 0;
							}
							uVar23 = SolidLoc(iVar22, iVar20 + -1);
							if ((int)uVar23 != 0) {
								return 0;
							}
						}
					}
				}
			}
			iVar2 = (int)(param_1 * 0xe8);
			puVar3 = puVar4 + iVar2;
			if (puVar3[0xd9] == '\x01') {
				uVar19 = 0;
				lVar10 = abs(lVar21 - (ulonglong) * (uint *)(puVar4 + (uint)(byte)puVar3[0xd8] * 0xe8 + 0x28));
				if (((int)lVar10 < 4) && (lVar8 = abs(lVar8 - (ulonglong) * (uint *)(puVar4 + (uint)(byte)puVar3[0xd8] * 0xe8 + 0x2c)), (int)lVar8 < 4)) {
					uVar19 = 1;
				}
				uVar23 = (ulonglong)uVar19;
			} else {
				if ((puVar3[0xc0] == 0) || ((*(ushort *)(ppuVar7[-0x1c23] + (uint)(byte)puVar3[0xc0] * 0x20 + -10) & 2) == 0)) {
					uVar23 = 1;
				} else {
					lVar21 = lVar21 + -3;
					lVar10 = (ulonglong) * (uint *)ppuVar7[-0x1d9f] + lVar21 * 0xe0;
					iVar12 = 0;
					while (iVar14 = (int)lVar21, iVar14 <= iVar22 + 3) {
						lVar16 = lVar8 + -3;
						lVar5 = (lVar8 + 4) - lVar16;
						lVar9 = lVar10 + (ulonglong)(uint)((int)lVar16 << 1);
						if ((int)lVar16 <= iVar20 + 3) {
							do {
								iVar17 = (int)lVar16;
								if (((-1 < iVar17) && (iVar17 < 0x70)) && ((-1 < iVar14 && (iVar14 < 0x70)))) {
									sVar1 = *(short *)lVar9;
									iVar11 = (int)sVar1;
									if (sVar1 < 0) {
										iVar11 = -(int)sVar1;
									}
									if (iVar11 != 0) {
										iVar11 = iVar11 + -1;
									}
									puVar3 = puVar4 + iVar11 * 0xe8;
									if ((((puVar3[0xd9] == '\x01') && ((uint)param_1 == (uint)(byte)puVar3[0xd8])) && (iVar14 == *(int *)(puVar3 + 0x28))) && (iVar17 == *(int *)(puVar3 + 0x2c))) {
										iVar12 = iVar12 + 1;
									}
								}
								lVar9 = lVar9 + 2;
								lVar16 = lVar16 + 1;
								lVar5 = lVar5 + -1;
							} while (lVar5 != 0);
						}
						lVar10 = lVar10 + 0xe0;
						lVar21 = lVar21 + 1;
					}
					uVar6 = countLeadingZeros((uint)(byte)puVar4[iVar2 + 0xda] - iVar12);
					uVar23 = (ulonglong)((uint)uVar6 >> 5 & 0xff);
				}
			}
		}
	} else {
		uVar23 = 0;
	}
	return uVar23;
}

ulonglong PosOkMissile(int param_1, int param_2)

{
	undefined8 uVar1;
	undefined4 uVar2;

	uVar2 = 1;
	if ((PTR_DAT_100f1d9c[(int)*(short *)(*(int *)PTR_DAT_100f1a54 + param_1 * 0xe0 + param_2 * 2)] == '\0') && ((*(byte *)(*(int *)PTR_DAT_100f1834 + param_1 * 0x70 + param_2) & 0x10) == 0)) {
		uVar2 = 0;
	}
	uVar1 = countLeadingZeros(uVar2);
	return (ulonglong)((uint)uVar1 >> 5 & 0xff);
}

ulonglong LineClearF(undefined8 param_1, longlong param_2, longlong param_3, longlong param_4,
    longlong param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	bool bVar2;
	bool bVar3;
	uint uVar4;
	longlong lVar5;
	longlong lVar6;
	ulonglong uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	longlong lVar11;
	int iVar12;
	longlong lVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	iVar10 = (int)param_3;
	iVar9 = (int)param_2;
	lVar13 = param_5 - param_3;
	iVar14 = (int)lVar13;
	lVar11 = param_4 - param_2;
	iVar12 = (int)lVar11;
	bVar3 = false;
	lVar5 = abs(lVar13);
	lVar6 = abs(lVar11);
	if ((int)lVar5 < (int)lVar6) {
		iVar16 = (int)param_4;
		iVar17 = (int)param_5;
		if (iVar12 < 0) {
			lVar11 = -lVar11;
			iVar14 = -iVar14;
			param_2 = param_4;
			param_3 = param_5;
			iVar16 = iVar9;
			iVar17 = iVar10;
		}
		iVar12 = (int)lVar11;
		if (iVar14 < 1) {
			uVar7 = (ulonglong)(uint)(iVar14 << 1);
			lVar11 = lVar11 + uVar7;
			lVar5 = -1;
		} else {
			uVar7 = (ulonglong)(uint)(iVar14 << 1);
			iVar12 = -iVar12;
			lVar11 = uVar7 - lVar11;
			lVar5 = 1;
		}
		while (true) {
			iVar15 = (int)param_3;
			iVar8 = (int)param_2;
			if ((bVar3) || ((iVar8 == iVar16 && (iVar15 == iVar17))))
				break;
			uVar1 = uVar7;
			if (((uint)lVar11 >> 0x1f) + (uint)(lVar11 == 0) == ((~(uint)lVar5 >> 0x1f) + 1 & 1)) {
				param_3 = param_3 + lVar5;
				uVar1 = (ulonglong)(uint)((iVar14 + iVar12) * 2);
			}
			lVar11 = lVar11 + uVar1;
			param_2 = param_2 + 1;
			bVar3 = false;
			bVar2 = true;
			if (((int)param_2 == iVar9) && ((int)param_3 == iVar10)) {
				bVar2 = false;
			}
			if ((bVar2) && (iVar8 = FUN_100dbf44(param_2, param_3), iVar8 == 0)) {
				bVar3 = true;
			}
		}
	} else {
		iVar16 = (int)param_4;
		iVar17 = (int)param_5;
		if (iVar14 < 0) {
			lVar13 = -lVar13;
			iVar12 = -iVar12;
			param_2 = param_4;
			param_3 = param_5;
			iVar16 = iVar9;
			iVar17 = iVar10;
		}
		iVar14 = (int)lVar13;
		if (iVar12 < 1) {
			uVar7 = (ulonglong)(uint)(iVar12 << 1);
			lVar13 = lVar13 + uVar7;
			lVar5 = -1;
		} else {
			uVar7 = (ulonglong)(uint)(iVar12 << 1);
			iVar14 = -iVar14;
			lVar13 = uVar7 - lVar13;
			lVar5 = 1;
		}
		while (true) {
			iVar15 = (int)param_3;
			iVar8 = (int)param_2;
			if ((bVar3) || ((iVar15 == iVar17 && (iVar8 == iVar16))))
				break;
			uVar1 = uVar7;
			if (((uint)lVar13 >> 0x1f) + (uint)(lVar13 == 0) == ((~(uint)lVar5 >> 0x1f) + 1 & 1)) {
				param_2 = param_2 + lVar5;
				uVar1 = (ulonglong)(uint)((iVar12 + iVar14) * 2);
			}
			lVar13 = lVar13 + uVar1;
			param_3 = param_3 + 1;
			bVar3 = false;
			bVar2 = true;
			if (((int)param_3 == iVar10) && ((int)param_2 == iVar9)) {
				bVar2 = false;
			}
			if ((bVar2) && (iVar8 = FUN_100dbf44(param_2, param_3), iVar8 == 0)) {
				bVar3 = true;
			}
		}
	}
	uVar4 = 0;
	if ((iVar8 == iVar16) && (iVar15 == iVar17)) {
		uVar4 = 1;
	}
	return (ulonglong)uVar4;
}

void LineClear(longlong param_1, longlong param_2, longlong param_3, longlong param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	LineClearF(ZEXT48(PTR_PTR_FUN_100f1efc), param_1, param_2, param_3, param_4, (char)param_2,
	    (char)param_1, param_8, in_stack_ffffffc8);
	return;
}

ulonglong LineClearF1(undefined8 param_1, undefined8 param_2, longlong param_3, longlong param_4,
    longlong param_5, longlong param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	bool bVar2;
	bool bVar3;
	uint uVar4;
	longlong lVar5;
	longlong lVar6;
	ulonglong uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	longlong lVar11;
	int iVar12;
	longlong lVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	iVar10 = (int)param_4;
	iVar9 = (int)param_3;
	lVar13 = param_6 - param_4;
	iVar14 = (int)lVar13;
	lVar11 = param_5 - param_3;
	iVar12 = (int)lVar11;
	bVar3 = false;
	lVar5 = abs(lVar13);
	lVar6 = abs(lVar11);
	if ((int)lVar5 < (int)lVar6) {
		iVar16 = (int)param_5;
		iVar17 = (int)param_6;
		if (iVar12 < 0) {
			lVar11 = -lVar11;
			iVar14 = -iVar14;
			param_3 = param_5;
			param_4 = param_6;
			iVar16 = iVar9;
			iVar17 = iVar10;
		}
		iVar12 = (int)lVar11;
		if (iVar14 < 1) {
			uVar7 = (ulonglong)(uint)(iVar14 << 1);
			lVar11 = lVar11 + uVar7;
			lVar5 = -1;
		} else {
			uVar7 = (ulonglong)(uint)(iVar14 << 1);
			iVar12 = -iVar12;
			lVar11 = uVar7 - lVar11;
			lVar5 = 1;
		}
		while (true) {
			iVar15 = (int)param_4;
			iVar8 = (int)param_3;
			if ((bVar3) || ((iVar8 == iVar16 && (iVar15 == iVar17))))
				break;
			uVar1 = uVar7;
			if (((uint)lVar11 >> 0x1f) + (uint)(lVar11 == 0) == ((~(uint)lVar5 >> 0x1f) + 1 & 1)) {
				param_4 = param_4 + lVar5;
				uVar1 = (ulonglong)(uint)((iVar14 + iVar12) * 2);
			}
			lVar11 = lVar11 + uVar1;
			param_3 = param_3 + 1;
			bVar3 = false;
			bVar2 = true;
			if (((int)param_3 == iVar9) && ((int)param_4 == iVar10)) {
				bVar2 = false;
			}
			if ((bVar2) && (iVar8 = FUN_100dbf44(param_2, param_3, param_4), iVar8 == 0)) {
				bVar3 = true;
			}
		}
	} else {
		iVar16 = (int)param_5;
		iVar17 = (int)param_6;
		if (iVar14 < 0) {
			lVar13 = -lVar13;
			iVar12 = -iVar12;
			param_3 = param_5;
			param_4 = param_6;
			iVar16 = iVar9;
			iVar17 = iVar10;
		}
		iVar14 = (int)lVar13;
		if (iVar12 < 1) {
			uVar7 = (ulonglong)(uint)(iVar12 << 1);
			lVar13 = lVar13 + uVar7;
			lVar5 = -1;
		} else {
			uVar7 = (ulonglong)(uint)(iVar12 << 1);
			iVar14 = -iVar14;
			lVar13 = uVar7 - lVar13;
			lVar5 = 1;
		}
		while (true) {
			iVar15 = (int)param_4;
			iVar8 = (int)param_3;
			if ((bVar3) || ((iVar15 == iVar17 && (iVar8 == iVar16))))
				break;
			uVar1 = uVar7;
			if (((uint)lVar13 >> 0x1f) + (uint)(lVar13 == 0) == ((~(uint)lVar5 >> 0x1f) + 1 & 1)) {
				param_3 = param_3 + lVar5;
				uVar1 = (ulonglong)(uint)((iVar12 + iVar14) * 2);
			}
			lVar13 = lVar13 + uVar1;
			param_4 = param_4 + 1;
			bVar3 = false;
			bVar2 = true;
			if (((int)param_4 == iVar10) && ((int)param_3 == iVar9)) {
				bVar2 = false;
			}
			if ((bVar2) && (iVar8 = FUN_100dbf44(param_2, param_3, param_4), iVar8 == 0)) {
				bVar3 = true;
			}
		}
	}
	uVar4 = 0;
	if ((iVar8 == iVar16) && (iVar15 == iVar17)) {
		uVar4 = 1;
	}
	return (ulonglong)uVar4;
}

void SyncMonsterAnim(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined4 uVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	int iVar6;
	int *piVar7;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar3 = PTR_DAT_100f19c0;
	puVar4 = PTR_DAT_100f187c;
	ppuVar5 = &toc;
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar5 = &toc;
		app_fatal(_DAT_100f3140, param_1, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4);
	}
	iVar6 = (int)param_1 * 0xe8;
	piVar7 = (int *)(puVar4 + iVar6);
	*(undefined **)(piVar7 + 0x38) = puVar3 + *piVar7 * 0x208;
	piVar7[0x39] = *(int *)(puVar3 + *piVar7 * 0x208 + 0x200);
	if (*(byte *)(piVar7 + 0x30) == 0) {
		piVar7[0x37] = *(int *)(piVar7[0x39] + 0x50);
	} else {
		piVar7[0x37] = *(int *)(ppuVar5[-0x1c23] + (uint) * (byte *)(piVar7 + 0x30) * 0x20 + -0x1c);
	}
	uVar1 = *(uint *)(puVar4 + iVar6 + 4);
	if (uVar1 < 0x12) {
		// WARNING: Could not recover jumptable at 0x100753fc. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(ppuVar5[-0x17a5] + uVar1 * 4))();
		return;
	}
	puVar3 = puVar4 + iVar6;
	iVar6 = piVar7[0x38] + *(int *)(puVar4 + iVar6 + 0x48) * 8;
	uVar2 = *(undefined4 *)(iVar6 + 0xc);
	*(undefined4 *)(puVar3 + 0x54) = *(undefined4 *)(iVar6 + 8);
	*(undefined4 *)(puVar3 + 0x58) = uVar2;
	*(undefined4 *)(puVar3 + 0x68) = 1;
	*(undefined4 *)(puVar3 + 100) = *(undefined4 *)(piVar7[0x38] + 0x48);
	return;
}

// WARNING: Removing unreachable block (ram,0x1007575c)
// WARNING: Removing unreachable block (ram,0x10075770)
// WARNING: Removing unreachable block (ram,0x10075784)
// WARNING: Removing unreachable block (ram,0x10075790)

void M_FallenFear(longlong param_1, longlong param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	int *piVar2;

	iVar1 = 0;
	piVar2 = (int *)PTR_DAT_100f19a8;
	while (true) {
		if (*(int *)PTR_DAT_100f19a4 <= iVar1) {
			return;
		}
		if (((ulonglong) * *(byte **)(PTR_DAT_100f187c + *piVar2 * 0xe8 + 0xe0) - 4 & 0xffffffff) < 0xc)
			break;
		piVar2 = piVar2 + 1;
		iVar1 = iVar1 + 1;
	}
	// WARNING: Could not recover jumptable at 0x10075720. Too many branches
	// WARNING: Treating indirect jump as call
	(**(code **)(_DAT_100f3138 + (int)((ulonglong) * *(byte **)(PTR_DAT_100f187c + *piVar2 * 0xe8 + 0xe0) - 4) * 4))();
	return;
}

void PrintMonstHistory(int param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4,
    undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	ushort uVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	undefined **ppuVar8;
	int iVar9;
	int iVar10;
	undefined uVar11;
	int iVar12;
	undefined uVar13;
	undefined uVar14;
	undefined uVar15;
	undefined uVar16;
	undefined uVar17;
	int *piVar18;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	iVar7 = _DAT_100f3124;
	iVar6 = _DAT_100f3120;
	iVar5 = _DAT_100f311c;
	puVar4 = PTR_DAT_100f1e4c;
	iVar9 = _DAT_100f1d1c;
	puVar3 = PTR_DAT_100f191c;
	uVar13 = (undefined)param_4;
	ppuVar8 = &toc;
	piVar18 = (int *)(_DAT_100f1e84 + param_1 * 4);
	uVar11 = (undefined)*piVar18;
	sprintf((int)PTR_DAT_100f191c, _DAT_100f3134, *piVar18, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbc, in_stack_ffffffc0,
	    in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0,
	    in_stack_ffffffd4);
	AddPanelString((int)puVar3, 1, uVar11, uVar13, (char)param_5, (char)param_6, (char)param_7, (char)param_8,
	    in_stack_ffffffa8);
	uVar17 = (undefined)param_8;
	uVar16 = (undefined)param_7;
	uVar15 = (undefined)param_6;
	uVar14 = (undefined)param_5;
	if (0x1d < *piVar18) {
		iVar12 = iVar9 + param_1 * 0x80;
		iVar10 = *(int *)(iVar12 + 0x58);
		iVar12 = *(int *)(iVar12 + 0x5c);
		if (*ppuVar8[-0x1dfc] == '\x01') {
			iVar10 = iVar10 >> 1;
			iVar12 = iVar12 >> 1;
		}
		if (iVar10 < 1) {
			iVar10 = 1;
		}
		if (iVar12 < 1) {
			iVar12 = 1;
		}
		iVar2 = *(int *)puVar4;
		if (iVar2 == 1) {
			iVar10 = iVar10 * 3 + 1;
			iVar12 = iVar12 * 3 + 1;
		}
		if (iVar2 == 2) {
			iVar10 = iVar10 * 4 + 3;
			iVar12 = iVar12 * 4 + 3;
		}
		uVar13 = (undefined)iVar12;
		uVar11 = (undefined)iVar10;
		sprintf((int)puVar3, ppuVar8[-0x17a8], iVar10, iVar12, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbc, in_stack_ffffffc0,
		    in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0,
		    in_stack_ffffffd4);
		AddPanelString((int)puVar3, 1, uVar11, uVar13, uVar14, uVar15, uVar16, uVar17, in_stack_ffffffa8);
	}
	if (0xe < *piVar18) {
		if (*(int *)puVar4 == 2) {
			uVar1 = *(ushort *)(iVar9 + param_1 * 0x80 + 0x76);
		} else {
			uVar1 = *(ushort *)(iVar9 + param_1 * 0x80 + 0x74);
		}
		if ((uVar1 & 0x3f) == 0) {
			strcpy((int)puVar3, (int)ppuVar8[-0x17a9]);
			AddPanelString((int)puVar3, 1, uVar11, uVar13, uVar14, uVar15, uVar16, uVar17, in_stack_ffffffa8);
		} else {
			if ((uVar1 & 7) != 0) {
				strcpy((int)puVar3, (int)ppuVar8[-0x17aa]);
				if ((uVar1 & 1) != 0) {
					strcat((int)puVar3, iVar7);
				}
				if ((uVar1 & 2) != 0) {
					strcat((int)puVar3, iVar6);
				}
				if ((uVar1 & 4) != 0) {
					strcat((int)puVar3, iVar5);
				}
				iVar9 = strlen((uint)puVar3);
				puVar3[iVar9 + -1] = 0;
				AddPanelString((int)puVar3, 1, uVar11, uVar13, uVar14, uVar15, uVar16, uVar17, in_stack_ffffffa8);
			}
			if ((uVar1 & 0x38) != 0) {
				strcpy((int)puVar3, (int)ppuVar8[-0x17ae]);
				if ((uVar1 & 8) != 0) {
					strcat((int)puVar3, iVar7);
				}
				if ((uVar1 & 0x10) != 0) {
					strcat((int)puVar3, iVar6);
				}
				if ((uVar1 & 0x20) != 0) {
					strcat((int)puVar3, iVar5);
				}
				iVar9 = strlen((uint)puVar3);
				puVar3[iVar9 + -1] = 0;
				AddPanelString((int)puVar3, 1, uVar11, uVar13, uVar14, uVar15, uVar16, uVar17, in_stack_ffffffa8);
			}
		}
	}
	*(undefined4 *)ppuVar8[-0x1db3] = 1;
	return;
}

void PrintUniqueHistory(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	ushort uVar1;
	undefined *puVar2;
	int iVar3;
	undefined **ppuVar4;
	undefined uVar5;
	undefined4 in_stack_ffffffb8;

	iVar3 = _DAT_100f3110;
	puVar2 = PTR_DAT_100f191c;
	ppuVar4 = &toc;
	uVar5 = SUB41(PTR_DAT_100f187c, 0);
	uVar1 = *(ushort *)(PTR_DAT_100f187c + *(int *)PTR_DAT_100f1880 * 0xe8 + 0xd0);
	if ((uVar1 & 0x3f) == 0) {
		strcpy((int)PTR_DAT_100f191c, _DAT_100f3114);
		AddPanelString((int)puVar2, 1, uVar5, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
		strcpy((int)puVar2, iVar3);
		AddPanelString((int)puVar2, 1, uVar5, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	} else {
		if ((uVar1 & 7) == 0) {
			ppuVar4 = &toc;
			strcpy((int)PTR_DAT_100f191c, _DAT_100f3114);
		} else {
			ppuVar4 = &toc;
			strcpy((int)PTR_DAT_100f191c, _DAT_100f310c);
		}
		AddPanelString((int)puVar2, 1, uVar5, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
		if ((uVar1 & 0x38) == 0) {
			strcpy((int)puVar2, iVar3);
		} else {
			strcpy((int)puVar2, (int)ppuVar4[-0x17b2]);
		}
		AddPanelString((int)puVar2, 1, uVar5, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	*(undefined4 *)ppuVar4[-0x1db3] = 1;
	return;
}

void MissToMonst(ulonglong param_1, int param_2, undefined8 param_3, ulonglong param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	char cVar1;
	short sVar2;
	uint uVar3;
	uint uVar4;
	uint uVar5;
	int iVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined *puVar12;
	ulonglong uVar13;
	undefined **ppuVar14;
	undefined8 uVar15;
	ulonglong uVar16;
	int iVar17;
	int iVar18;
	ulonglong uVar19;
	byte bVar20;
	ulonglong uVar21;
	byte bVar22;
	undefined4 uVar23;
	undefined uVar24;
	undefined4 uVar25;
	undefined uVar26;
	undefined4 uVar27;
	undefined uVar28;
	longlong lVar29;
	longlong lVar30;
	int iVar31;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffa8;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	iVar17 = _DAT_100f1de4;
	iVar18 = _DAT_100f1de0;
	puVar12 = PTR_DAT_100f1954;
	puVar11 = PTR_DAT_100f1950;
	puVar10 = PTR_DAT_100f187c;
	puVar9 = PTR_DAT_100f1828;
	ppuVar14 = &toc;
	uVar15 = param_3;
	if (0x7c < (param_1 & 0xffffffff)) {
		uVar15 = param_3;
		ppuVar14 = &toc;
		app_fatal((int)PTR_s_MissToMonst__Invalid_missile__d_100f3104, param_1, param_3, param_4, param_5, (int)param_6, (int)param_7, (int)param_8, in_stack_ffffff98, in_stack_ffffff9f,
		    in_stack_ffffffa8, in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4,
		    in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4);
	}
	puVar7 = ppuVar14[-0x1d99] + (int)param_1 * 0xb4;
	uVar3 = *(uint *)(puVar7 + 0x78);
	uVar13 = (ulonglong)uVar3;
	if (199 < uVar3) {
		app_fatal((int)ppuVar14[-0x17b4], uVar13, uVar15, param_4, param_5, (int)param_6, (int)param_7,
		    (int)param_8, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffa8,
		    in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4, in_stack_ffffffb8,
		    in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4);
	}
	uVar4 = *(uint *)(puVar7 + 4);
	uVar5 = *(uint *)(puVar7 + 8);
	*(undefined2 *)(*(int *)puVar12 + param_2 * 0xe0 + (int)param_3 * 2) = (short)(uVar13 + 1);
	puVar8 = puVar10 + uVar3 * 0xe8;
	*(undefined4 *)(puVar8 + 0x48) = *(undefined4 *)(puVar7 + 0x2c);
	*(int *)(puVar8 + 0x20) = param_2;
	*(int *)(puVar8 + 0x24) = (int)param_3;
	M_StartStand(uVar3, *(int *)(puVar8 + 0x48), (char)(uVar13 + 1), (char)param_4, (char)param_5,
	    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff98);
	uVar27 = (undefined4)param_8;
	uVar25 = (undefined4)param_7;
	uVar23 = (undefined4)param_6;
	if ((**(byte **)(puVar8 + 0xe0) < 0x48) || (0x4b < **(byte **)(puVar8 + 0xe0))) {
		if ((*(uint *)(puVar8 + 0xa0) & 0x10) == 0) {
			M_StartHit(uVar13, -1, 0, param_4, param_5, uVar23, uVar25, uVar27, in_stack_ffffff98);
		} else {
			M2MStartHit(uVar13, -1, 0, param_4, param_5, uVar23, uVar25, uVar27, in_stack_ffffff98);
		}
	} else {
		M_StartFadein(uVar13, *(int *)(puVar8 + 0x48), 0, param_4, param_5, uVar23, uVar25, uVar27,
		    in_stack_ffffff98);
	}
	uVar28 = (undefined)param_8;
	uVar26 = (undefined)param_7;
	uVar24 = (undefined)param_6;
	if ((*(uint *)(puVar8 + 0xa0) & 0x10) == 0) {
		cVar1 = *(char *)(*(int *)puVar11 + uVar4 * 0x70 + uVar5);
		uVar16 = (longlong)cVar1 - 1;
		if ((('\0' < cVar1) && (bVar20 = **(byte **)(puVar8 + 0xe0), bVar20 != 0x28)) && ((bVar20 < 0x48 || (0x4b < bVar20)))) {
			uVar19 = (ulonglong)(byte)puVar8[0xcc];
			uVar21 = (ulonglong)(byte)puVar8[0xcd];
			M_TryH2HHit(uVar13, uVar16, 500, uVar19, uVar21, (int)param_6, (int)param_7, param_8,
			    in_stack_ffffff98);
			uVar27 = (undefined4)param_8;
			uVar25 = (undefined4)param_7;
			uVar23 = (undefined4)param_6;
			iVar31 = (int)uVar16;
			if ((iVar31 == (int)*(char *)(*(int *)puVar11 + uVar4 * 0x70 + uVar5) + -1) && ((**(byte **)(puVar8 + 0xe0) < 0x59 || (0x5c < **(byte **)(puVar8 + 0xe0))))) {
				iVar6 = *(int *)(puVar9 + iVar31 * 0x55ec);
				if ((iVar6 != 7) && (iVar6 != 8)) {
					StartPlrHit(uVar16, '\0', 1, uVar19, uVar21, param_6, param_7, param_8, in_stack_ffffff98);
				}
				lVar29 = (ulonglong)uVar4 + (ulonglong) * (uint *)(iVar17 + *(int *)(puVar8 + 0x48) * 4);
				lVar30 = (ulonglong)uVar5 + (ulonglong) * (uint *)(iVar18 + *(int *)(puVar8 + 0x48) * 4);
				iVar18 = (int)lVar30;
				uVar15 = PosOkPlayer(iVar31, lVar29, iVar18, (char)uVar19, (char)uVar21, (char)uVar23,
				    (char)uVar25, (char)uVar27, in_stack_ffffff98);
				if ((int)uVar15 != 0) {
					puVar9 = puVar9 + iVar31 * 0x55ec;
					iVar17 = (int)lVar29;
					*(int *)(puVar9 + 0x38) = iVar17;
					*(int *)(puVar9 + 0x3c) = iVar18;
					uVar13 = (ulonglong) * (uint *)(puVar9 + 0x70);
					FixPlayerLocation(uVar16, *(uint *)(puVar9 + 0x70), lVar30, uVar19, uVar21, uVar23, uVar25, uVar27,
					    in_stack_ffffff98);
					FixPlrWalkTags(uVar16, uVar13, lVar30, uVar19, uVar21, uVar23, uVar25, uVar27, in_stack_ffffff98);
					*(char *)(*(int *)puVar11 + iVar17 * 0x70 + iVar18) = cVar1;
					SetPlayerOld(uVar16, (longlong)cVar1, lVar30, uVar19, uVar21, uVar23, uVar25, uVar27,
					    in_stack_ffffff98);
				}
			}
		}
	} else {
		sVar2 = *(short *)(*(int *)puVar12 + uVar4 * 0xe0 + uVar5 * 2);
		if (((0 < sVar2) && (bVar20 = **(byte **)(puVar8 + 0xe0), bVar20 != 0x28)) && ((bVar20 < 0x48 || (0x4b < bVar20)))) {
			bVar20 = puVar8[0xcc];
			bVar22 = puVar8[0xcd];
			M_TryM2MHit(uVar13, (longlong)sVar2 - 1, 500, (ulonglong)bVar20, (ulonglong)bVar22, (int)param_6,
			    (int)param_7, (int)param_8, in_stack_ffffff98);
			if ((**(byte **)(puVar8 + 0xe0) < 0x59) || (0x5c < **(byte **)(puVar8 + 0xe0))) {
				iVar31 = uVar4 * 0xe0 + uVar5 * 2;
				iVar17 = uVar4 + *(int *)(iVar17 + *(int *)(puVar8 + 0x48) * 4);
				iVar18 = uVar5 + *(int *)(iVar18 + *(int *)(puVar8 + 0x48) * 4);
				uVar13 = PosOkMonst((int)*(short *)(*(int *)puVar12 + iVar31) + -1, iVar17, iVar18, bVar20,
				    bVar22, uVar24, uVar26, uVar28, in_stack_ffffff98);
				if ((int)uVar13 != 0) {
					sVar2 = *(short *)(*(int *)puVar12 + iVar31);
					*(short *)(*(int *)puVar12 + iVar17 * 0xe0 + iVar18 * 2) = sVar2;
					puVar10 = puVar10 + ((int)sVar2 + -1) * 0xe8;
					*(undefined2 *)(*(int *)puVar12 + iVar31) = 0;
					*(int *)(puVar10 + 0x20) = iVar17;
					*(int *)(puVar10 + 0x28) = iVar17;
					*(int *)(puVar10 + 0x24) = iVar18;
					*(int *)(puVar10 + 0x2c) = iVar18;
				}
			}
		}
	}
	return;
}

ulonglong PosOkMonst(int param_1, int param_2, int param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	char cVar1;
	bool bVar2;
	bool bVar3;
	undefined *puVar4;
	undefined *puVar5;
	int iVar7;
	ulonglong uVar6;
	undefined **ppuVar8;
	ulonglong uVar9;
	int *piVar10;
	uint uVar11;

	puVar5 = PTR_DAT_100f196c;
	puVar4 = PTR_DAT_100f187c;
	ppuVar8 = &toc;
	uVar11 = 0;
	bVar2 = false;
	bVar3 = false;
	uVar9 = SolidLoc(param_2, param_3);
	if ((int)uVar9 == 0) {
		if (*(char *)(*(int *)ppuVar8[-0x1da0] + param_2 * 0x70 + param_3) == '\0') {
			bVar2 = true;
		}
	}
	if (bVar2) {
		if (*(short *)(*(int *)ppuVar8[-0x1d9f] + param_2 * 0xe0 + param_3 * 2) == 0) {
			uVar11 = 1;
		}
	}
	uVar9 = (ulonglong)uVar11;
	if (uVar11 != 0) {
		cVar1 = *(char *)(*(int *)ppuVar8[-0x1da1] + param_2 * 0x70 + param_3);
		if (cVar1 != '\0') {
			if (cVar1 < '\x01') {
				iVar7 = -((int)cVar1 + 1);
			} else {
				iVar7 = (int)cVar1 + -1;
			}
			if (*(int *)(ppuVar8[-0x1da2] + iVar7 * 0x78 + 0x38) != 0) {
				uVar9 = 0;
			}
		}
	}
	if (((int)uVar9 != 0) && (cVar1 = *(char *)(*(int *)ppuVar8[-0x1d65] + param_2 * 0x70 + param_3), cVar1 != '\0')) {
		if (-1 < param_1) {
			if ('\0' < cVar1) {
				if (*(int *)(puVar5 + (int)cVar1 * 0xb4) == 5) {
					bVar3 = true;
				} else {
					piVar10 = (int *)ppuVar8[-0x1d98];
					uVar6 = (ulonglong) * (uint *)ppuVar8[-0x1d9a];
					bVar2 = false;
					if (0 < (int)*(uint *)ppuVar8[-0x1d9a]) {
						do {
							bVar3 = bVar2;
							if (*(int *)(puVar5 + *piVar10 * 0xb4) == 5) {
								bVar3 = true;
							}
							piVar10 = piVar10 + 1;
							uVar6 = uVar6 - 1;
							bVar2 = bVar3;
						} while (uVar6 != 0);
					}
				}
			}
			if (((bVar3) && ((*(ushort *)(puVar4 + param_1 * 0xe8 + 0xd0) & 0x10) == 0)) || ((bVar3 && (**(char **)(puVar4 + param_1 * 0xe8 + 0xe0) == 'n')))) {
				uVar9 = 0;
			}
		}
	}
	return uVar9;
}

ulonglong IsSkel(int param_1)

{
	bool bVar1;
	bool bVar2;
	uint uVar3;

	uVar3 = 1;
	bVar2 = true;
	bVar1 = false;
	if ((7 < param_1) && (param_1 < 0xc)) {
		bVar1 = true;
	}
	if (!bVar1) {
		bVar1 = false;
		if ((0x13 < param_1) && (param_1 < 0x18)) {
			bVar1 = true;
		}
		if (!bVar1) {
			bVar2 = false;
		}
	}
	if (!bVar2) {
		bVar1 = false;
		if ((0x17 < param_1) && (param_1 < 0x1c)) {
			bVar1 = true;
		}
		if (!bVar1) {
			uVar3 = 0;
		}
	}
	return (ulonglong)uVar3;
}

ulonglong IsGoat(int param_1)

{
	bool bVar1;
	uint uVar2;

	uVar2 = 1;
	bVar1 = false;
	if ((0x21 < param_1) && (param_1 < 0x26)) {
		bVar1 = true;
	}
	if (!bVar1) {
		bVar1 = false;
		if ((0x29 < param_1) && (param_1 < 0x2e)) {
			bVar1 = true;
		}
		if (!bVar1) {
			uVar2 = 0;
		}
	}
	return (ulonglong)uVar2;
}

ulonglong M_SpawnSkel(int param_1, int param_2, int param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	longlong lVar2;
	ulonglong uVar3;
	undefined uVar4;
	undefined uVar5;
	longlong lVar6;
	undefined uVar7;
	longlong lVar8;
	undefined uVar9;
	longlong lVar10;
	undefined uVar11;
	longlong lVar12;
	undefined uVar13;
	int iVar15;
	longlong lVar14;
	longlong lVar16;
	byte *pbVar17;
	byte *pbVar18;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	pbVar17 = PTR_DAT_100f19c0;
	puVar1 = PTR_DAT_100f19b8;
	lVar12 = (longlong)param_8;
	lVar10 = (longlong)param_7;
	lVar8 = (longlong)param_6;
	lVar6 = (longlong)param_5;
	lVar14 = (longlong)param_4;
	lVar2 = (longlong)param_3;
	uVar4 = (undefined)param_3;
	iVar15 = 0;
	lVar16 = 0;
	pbVar18 = PTR_DAT_100f19c0;
	while (iVar15 < *(int *)puVar1) {
		uVar3 = IsSkel((uint)*pbVar18);
		if ((int)uVar3 != 0) {
			lVar16 = lVar16 + 1;
		}
		pbVar18 = pbVar18 + 0x208;
		iVar15 = iVar15 + 1;
	}
	if ((int)lVar16 == 0) {
		uVar3 = 0xffffffffffffffff;
	} else {
		lVar2 = random(0x88, lVar16, (char)lVar2, (char)lVar14, (char)lVar6, (char)lVar8, (char)lVar10,
		    (char)lVar12, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
		iVar15 = 0;
		lVar14 = 0;
		while (true) {
			uVar13 = (undefined)lVar12;
			uVar11 = (undefined)lVar10;
			uVar9 = (undefined)lVar8;
			if ((*(int *)puVar1 <= (int)lVar14) || ((int)lVar2 < iVar15))
				break;
			uVar3 = IsSkel((uint)*pbVar17);
			if ((int)uVar3 != 0) {
				iVar15 = iVar15 + 1;
			}
			pbVar17 = pbVar17 + 0x208;
			lVar14 = lVar14 + 1;
		}
		uVar5 = (undefined)(lVar14 + -1);
		uVar7 = 1;
		uVar3 = AddMonster(param_1, param_2, param_3, (int)(lVar14 + -1), 1, uVar9, uVar11, uVar13,
		    in_stack_ffffffa8);
		if ((int)uVar3 != -1) {
			M_StartSpStand((int)uVar3, param_3, uVar4, uVar5, uVar7, uVar9, uVar11, uVar13, in_stack_ffffffa8);
		}
	}
	return uVar3;
}

void ActivateSpawn(int param_1, int param_2, int param_3, int param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	longlong lVar4;
	longlong lVar5;
	ulonglong uVar6;
	undefined4 in_stack_ffffffc8;

	puVar3 = PTR_DAT_100f187c;
	uVar6 = ZEXT48(PTR_DAT_100f187c);
	lVar5 = (longlong)param_1 + 1;
	iVar1 = *(int *)PTR_DAT_100f1954;
	*(undefined2 *)(iVar1 + param_2 * 0xe0 + param_3 * 2) = (short)lVar5;
	lVar4 = uVar6 + (longlong)param_1 * 0xe8;
	iVar2 = (int)lVar4;
	*(int *)(iVar2 + 0x20) = param_2;
	*(int *)(iVar2 + 0x24) = param_3;
	*(int *)(iVar2 + 0x28) = param_2;
	*(int *)(iVar2 + 0x2c) = param_3;
	*(int *)(iVar2 + 0x30) = param_2;
	*(int *)(iVar2 + 0x34) = param_3;
	M_StartSpStand(param_1, param_4, (char)param_3, (char)param_4, (char)lVar4, (char)iVar1, (char)lVar5,
	    (char)puVar3, in_stack_ffffffc8);
	return;
}

undefined8
SpawnSkeleton(int param_1, longlong param_2, int param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	uint uVar1;
	undefined8 uVar2;
	ulonglong uVar3;
	longlong lVar4;
	int iVar5;
	longlong lVar6;
	longlong lVar7;
	undefined uVar8;
	longlong lVar9;
	undefined uVar10;
	longlong lVar11;
	undefined uVar12;
	longlong lVar13;
	undefined uVar14;
	undefined8 unaff_r22;
	uint uVar15;
	undefined8 unaff_r23;
	longlong lVar16;
	undefined8 unaff_r24;
	longlong lVar17;
	undefined8 unaff_r25;
	uint *puVar18;
	undefined8 unaff_r26;
	uint *puVar19;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff78;
	undefined in_stack_ffffff7f;
	undefined in_stack_ffffff8b;
	uint local_58[12];
	undefined4 local_28;
	undefined4 uStack36;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	lVar13 = (longlong)param_8;
	lVar11 = (longlong)param_7;
	lVar9 = (longlong)param_6;
	lVar7 = (longlong)param_5;
	lVar4 = (longlong)param_4;
	local_28 = (undefined4)((ulonglong)unaff_r22 >> 0x20);
	uStack36 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	if (param_1 == -1) {
		uVar2 = 0;
	} else {
		iVar5 = (int)param_2;
		lVar6 = (longlong)param_3;
		uVar3 = PosOkMonst(-1, iVar5, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff78);
		uVar14 = (undefined)lVar13;
		uVar12 = (undefined)lVar11;
		uVar10 = (undefined)lVar9;
		uVar8 = (undefined)lVar7;
		if ((int)uVar3 == 0) {
			lVar16 = (longlong)param_3 + -1;
			puVar18 = local_58;
			uVar15 = 0;
			while (true) {
				uVar12 = (undefined)lVar13;
				uVar10 = (undefined)lVar11;
				uVar8 = (undefined)lVar9;
				if (param_3 + 1 < (int)lVar16)
					break;
				lVar17 = param_2 + -1;
				puVar19 = puVar18;
				while ((int)lVar17 <= iVar5 + 1) {
					lVar6 = lVar16;
					uVar3 = PosOkMonst(-1, (int)lVar17, (int)lVar16, (char)lVar4, (char)lVar7, (char)lVar9,
					    (char)lVar11, (char)lVar13, in_stack_ffffff78);
					*puVar19 = (uint)uVar3;
					lVar17 = lVar17 + 1;
					uVar1 = *puVar19;
					puVar19 = puVar19 + 3;
					uVar15 = uVar15 | uVar1;
				}
				puVar18 = puVar18 + 1;
				lVar16 = lVar16 + 1;
			}
			if (uVar15 == 0) {
				return 0;
			}
			lVar4 = random(0x89, 0xf, (char)lVar6, (char)lVar4, (char)lVar7, uVar8, uVar10, uVar12,
			    in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8b);
			lVar7 = 0;
			lVar4 = lVar4 + 1;
			iVar5 = 0;
			while (uVar14 = (undefined)lVar4, 0 < (int)lVar4) {
				if (local_58[iVar5 + (int)lVar7 * 3] != 0) {
					lVar4 = lVar4 + -1;
				}
				if ((0 < (int)lVar4) && (lVar7 = lVar7 + 1, (int)lVar7 == 3)) {
					iVar5 = iVar5 + 1;
					lVar7 = 0;
					if (iVar5 == 3) {
						iVar5 = 0;
					}
				}
			}
			lVar7 = lVar7 + param_2 + -1;
			iVar5 = iVar5 + param_3 + -1;
			uVar3 = GetDirection(lVar7, iVar5, param_2, param_3);
			ActivateSpawn(param_1, (int)lVar7, iVar5, (int)uVar3, uVar14, uVar8, uVar10, uVar12, in_stack_ffffff78);
		} else {
			uVar3 = GetDirection(param_2, param_3, param_2, param_3);
			ActivateSpawn(param_1, iVar5, param_3, (int)uVar3, uVar8, uVar10, uVar12, uVar14, in_stack_ffffff78);
		}
		uVar2 = 1;
	}
	return uVar2;
}

ulonglong PreSpawnSkeleton(undefined param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	longlong lVar2;
	ulonglong uVar3;
	undefined uVar4;
	undefined uVar5;
	longlong lVar6;
	undefined uVar7;
	longlong lVar8;
	undefined uVar9;
	longlong lVar10;
	undefined uVar11;
	longlong lVar12;
	undefined uVar13;
	int iVar15;
	longlong lVar14;
	longlong lVar16;
	byte *pbVar17;
	byte *pbVar18;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined in_stack_ffffffcb;

	pbVar17 = PTR_DAT_100f19c0;
	puVar1 = PTR_DAT_100f19b8;
	lVar12 = (longlong)param_8;
	lVar10 = (longlong)param_7;
	lVar8 = (longlong)param_6;
	lVar6 = (longlong)param_5;
	lVar14 = (longlong)param_4;
	lVar2 = (longlong)param_3;
	iVar15 = 0;
	lVar16 = 0;
	pbVar18 = PTR_DAT_100f19c0;
	while (iVar15 < *(int *)puVar1) {
		uVar3 = IsSkel((uint)*pbVar18);
		if ((int)uVar3 != 0) {
			lVar16 = lVar16 + 1;
		}
		pbVar18 = pbVar18 + 0x208;
		iVar15 = iVar15 + 1;
	}
	if ((int)lVar16 == 0) {
		uVar3 = 0xffffffffffffffff;
	} else {
		lVar2 = random(0x88, lVar16, (char)lVar2, (char)lVar14, (char)lVar6, (char)lVar8, (char)lVar10,
		    (char)lVar12, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb);
		iVar15 = 0;
		lVar14 = 0;
		while (true) {
			uVar13 = (undefined)lVar12;
			uVar11 = (undefined)lVar10;
			uVar9 = (undefined)lVar8;
			if ((*(int *)puVar1 <= (int)lVar14) || ((int)lVar2 < iVar15))
				break;
			uVar3 = IsSkel((uint)*pbVar17);
			if ((int)uVar3 != 0) {
				iVar15 = iVar15 + 1;
			}
			pbVar17 = pbVar17 + 0x208;
			lVar14 = lVar14 + 1;
		}
		uVar5 = (undefined)(lVar14 + -1);
		uVar4 = 0;
		uVar7 = 0;
		uVar3 = AddMonster(0, 0, 0, (int)(lVar14 + -1), 0, uVar9, uVar11, uVar13, in_stack_ffffffb8);
		if ((int)uVar3 != -1) {
			M_StartStand((int)uVar3, 0, uVar4, uVar5, uVar7, uVar9, uVar11, uVar13, in_stack_ffffffb8);
		}
	}
	return uVar3;
}

void TalktoMonster(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined8 uVar4;
	undefined *puVar5;
	undefined *puVar6;
	longlong lVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	uint local_18;

	puVar6 = PTR_DAT_100f19cc;
	uVar9 = (undefined)param_5;
	uVar8 = (undefined)param_4;
	uVar12 = (undefined)param_8;
	uVar11 = (undefined)param_7;
	uVar10 = (undefined)param_6;
	ppuVar3 = &toc;
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar3 = &toc;
		app_fatal((int)PTR_s_TalktoMonster__Invalid_monster___100f30fc, param_1, param_3, param_4,
		    param_5, param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	puVar2 = ppuVar3[-0x1dd5] + (int)param_1 * 0xe8;
	uVar1 = *(uint *)(puVar2 + 0x4c);
	*(undefined4 *)(puVar2 + 4) = 0x11;
	if ((puVar2[0x9c] == '\x17') || (puVar2[0x9c] == '\x1e')) {
		uVar4 = QuestStatus(7);
		if (((int)uVar4 != 0) && (puVar6[0xb7] == '\x02')) {
			lVar7 = ZEXT48(register0x0000000c) - 0x18;
			lVar7._7_1_ = (undefined)lVar7;
			puVar5 = PlrHasItem(uVar1, 0xc, (int *)lVar7);
			if (puVar5 != (undefined *)0x0) {
				RemoveInvItem((ulonglong)uVar1, (ulonglong)local_18, (undefined)lVar7, uVar8, uVar9, uVar10, uVar11, uVar12, in_stack_ffffffb8);
				puVar6[0xaa] = 3;
				*(undefined4 *)(puVar2 + 0xd4) = 0x16;
				puVar2[8] = 6;
			}
		}
		uVar4 = QuestStatus(4);
		if (((int)uVar4 != 0) && (0x50 < *(int *)(puVar2 + 0xd4))) {
			lVar7 = ZEXT48(register0x0000000c) - 0x18;
			lVar7._7_1_ = (undefined)lVar7;
			puVar6 = PlrHasItem(uVar1, 0xf, (int *)lVar7);
			if (puVar6 != (undefined *)0x0) {
				RemoveInvItem((ulonglong)uVar1, (ulonglong)local_18, (undefined)lVar7, uVar8, uVar9, uVar10, uVar11, uVar12, in_stack_ffffffb8);
				*(undefined4 *)(puVar2 + 0xd4) = 0x53;
				puVar2[8] = 6;
			}
		}
	}
	return;
}

void SpawnGolum(ulonglong param_1, uint param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	int iVar2;
	undefined *puVar3;
	int iVar4;
	char cVar5;
	int iVar6;
	undefined *puVar7;
	undefined **ppuVar8;
	undefined uVar9;
	char cVar10;
	char cVar11;
	char cVar12;
	undefined uVar13;
	longlong lVar14;
	int iVar15;
	uint uVar16;
	ulonglong uVar17;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar7 = PTR_DAT_100f187c;
	ppuVar8 = &toc;
	uVar17 = ZEXT48(PTR_DAT_100f1828);
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar8 = &toc;
		app_fatal((int)PTR_s_SpawnGolum__Invalid_monster__d_100f30f8, param_1, param_3, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffb8,
		    in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
	}
	puVar1 = ppuVar8[-0x1d99];
	iVar6 = (int)param_1;
	iVar4 = iVar6 * 0xe8;
	uVar16 = (uint)param_3;
	*(short *)(*(int *)ppuVar8[-0x1d9f] + param_2 * 0xe0 + uVar16 * 2) = (short)param_1 + 1;
	puVar3 = puVar7 + iVar4;
	*(uint *)(puVar7 + iVar4 + 0x20) = param_2;
	*(uint *)(puVar7 + iVar4 + 0x24) = uVar16;
	lVar14 = uVar17 + param_1 * 0x55ec;
	*(uint *)(puVar3 + 0x28) = param_2;
	*(uint *)(puVar3 + 0x2c) = uVar16;
	*(uint *)(puVar3 + 0x30) = param_2;
	*(uint *)(puVar3 + 0x34) = uVar16;
	puVar3[0x1c] = 0;
	uVar9 = 0;
	iVar15 = *(int *)(puVar1 + (int)param_4 * 0xb4 + 0x30);
	iVar2 = *(int *)((int)lVar14 + 0x1ac);
	cVar5 = (char)(iVar15 << 1);
	uVar16 = iVar2 / 3 + (iVar2 >> 0x1f);
	cVar11 = cVar5 + '\b';
	*(uint *)(puVar3 + 0x94) = iVar15 * 0x280 + (uVar16 + (uVar16 >> 0x1f)) * 2;
	uVar13 = (undefined) * (undefined4 *)(puVar3 + 0x94);
	*(undefined4 *)(puVar3 + 0x98) = *(undefined4 *)(puVar3 + 0x94);
	puVar3[0xce] = 0x19;
	cVar12 = (char)((int)*(char *)((int)lVar14 + 0x1b4) << 1);
	cVar10 = (char)iVar15 + (char)(iVar15 << 2) + cVar12 + '(';
	puVar3[200] = cVar10;
	puVar3[0xc9] = cVar11;
	puVar3[0xca] = cVar5 + '\x10';
	*(uint *)(puVar3 + 0xa0) = *(uint *)(puVar3 + 0xa0) | 0x20;
	M_StartSpStand(iVar6, 0, cVar10, cVar11, cVar12, uVar13, (char)lVar14, (char)iVar15, in_stack_ffffffa8);
	M_Enemy(iVar6, uVar9, cVar10, cVar11, cVar12, uVar13, (char)lVar14, (char)iVar15, in_stack_ffffffa8);
	if (iVar6 == *(int *)ppuVar8[-0x1deb]) {
		FUN_1007a814((ulonglong)(*(uint *)(puVar7 + iVar4 + 0x20) & 0xff),
		    (ulonglong)(*(uint *)(puVar7 + iVar4 + 0x24) & 0xff),
		    (ulonglong)(*(uint *)(puVar3 + 0x48) & 0xff),
		    (ulonglong)(*(uint *)(puVar3 + 0x4c) & 0xff), (ulonglong) * (uint *)(puVar3 + 0x98),
		    (uint)(byte)*ppuVar8[-0x1df9], lVar14, iVar15, in_stack_ffffffa8);
	}
	return;
}

undefined8
CanTalkToMonst(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined8 uVar2;
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

	ppuVar1 = &toc;
	if (199 < (param_1 & 0xffffffff)) {
		ppuVar1 = &toc;
		app_fatal((int)PTR_s_CanTalkToMonst__Invalid_monster___100f30f4, param_1, param_3, param_4,
		    param_5, param_6, param_7, param_8, in_stack_ffffffc8, in_stack_ffffffcf,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4,
		    in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
	}
	if (ppuVar1[-0x1dd5][(int)param_1 * 0xe8 + 8] == '\x06') {
		uVar2 = 1;
	} else {
		if (ppuVar1[-0x1dd5][(int)param_1 * 0xe8 + 8] == '\a') {
			uVar2 = 1;
		} else {
			uVar2 = 0;
		}
	}
	return uVar2;
}

undefined8
CheckMonsterHit(ulonglong param_1, undefined4 *param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	byte bVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	undefined8 uVar5;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar3 = PTR_DAT_100f187c;
	if (199 < (param_1 & 0xffffffff)) {
		app_fatal(_DAT_100f30f0, param_1, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4);
	}
	iVar4 = (int)param_1 * 0xe8;
	puVar2 = puVar3 + iVar4;
	if (puVar2[0x9c] == '\f') {
		if ((*(uint *)(puVar2 + 0xa0) & 4) != 0) {
			*(uint *)(puVar2 + 0xa0) = *(uint *)(puVar2 + 0xa0) & 0xfffffffb;
			*(undefined4 *)(puVar2 + 4) = 7;
			*param_2 = 1;
			return 1;
		}
	}
	puVar3 = puVar3 + iVar4;
	bVar1 = **(byte **)(puVar3 + 0xe0);
	if (((bVar1 < 0x69) || (0x6c < bVar1)) || (puVar3[8] == '\x01')) {
		uVar5 = 0;
	} else {
		*param_2 = 0;
		uVar5 = 1;
	}
	return uVar5;
}

ulonglong encode_enemy(int param_1)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f187c + param_1 * 0xe8;
	if ((*(uint *)(puVar1 + 0xa0) & 0x10) != 0) {
		return (ulonglong) * (uint *)(puVar1 + 0x4c) + 4;
	}
	return (ulonglong) * (uint *)(puVar1 + 0x4c);
}

void decode_enemy(int param_1, uint param_2)

{
	undefined *puVar1;
	undefined *puVar2;

	if (param_2 < 4) {
		puVar2 = PTR_DAT_100f187c + param_1 * 0xe8;
		puVar1 = PTR_DAT_100f1828 + param_2 * 0x55ec;
		*(uint *)(puVar2 + 0xa0) = *(uint *)(puVar2 + 0xa0) & 0xffffffef;
		*(uint *)(puVar2 + 0x4c) = param_2;
		puVar2[0x50] = (char)*(undefined4 *)(puVar1 + 0x40);
		puVar2[0x51] = (char)*(undefined4 *)(puVar1 + 0x44);
		return;
	}
	puVar2 = PTR_DAT_100f187c + param_1 * 0xe8;
	puVar1 = PTR_DAT_100f187c + (param_2 - 4) * 0xe8;
	*(uint *)(puVar2 + 0xa0) = *(uint *)(puVar2 + 0xa0) | 0x10;
	*(uint *)(puVar2 + 0x4c) = param_2 - 4;
	puVar2[0x50] = (char)*(undefined4 *)(puVar1 + 0x28);
	puVar2[0x51] = (char)*(undefined4 *)(puVar1 + 0x2c);
	return;
}
