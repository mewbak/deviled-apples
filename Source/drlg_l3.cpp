
void InitL3Dungeon(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	undefined *puVar5;
	longlong lVar6;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	int local_3c;

	puVar5 = PTR_DAT_100f1804;
	memset((char)PTR_DAT_100f1804, 0x40, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	puVar3 = *(undefined **)(local_3c + -0x7514);
	iVar4 = 0;
	do {
		lVar6 = 5;
		puVar1 = puVar5;
		puVar2 = puVar3;
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
		iVar4 = iVar4 + 1;
		puVar3 = puVar3 + 1;
		puVar5 = puVar5 + 1;
	} while (iVar4 < 0x28);
	return;
}

undefined8
DRLG_L3FillRoom(int param_1, int param_2, int param_3, int param_4, undefined param_5, undefined param_6,
    undefined param_7, undefined param_8, undefined4 param_9)

{
	uint uVar1;
	ulonglong uVar2;
	ulonglong uVar3;
	longlong lVar4;
	undefined8 uVar5;
	byte *pbVar6;
	longlong lVar7;
	undefined *puVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	longlong lVar15;
	longlong lVar16;
	longlong lVar17;
	ulonglong uVar18;
	longlong lVar19;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	lVar15 = (longlong)param_3;
	lVar17 = (longlong)param_2;
	lVar13 = (longlong)param_1;
	uVar18 = ZEXT48(PTR_DAT_100f1804);
	if ((((1 < param_1) && (param_3 < 0x22)) && (1 < param_2)) && (param_4 < 0x26)) {
		lVar19 = uVar18 + lVar17;
		lVar10 = 0;
		lVar7 = lVar19;
		lVar11 = lVar17;
		while ((int)lVar11 <= param_4) {
			lVar9 = lVar7 + lVar13 * 0x28;
			uVar3 = (lVar15 + 1) - lVar13;
			if (param_1 <= param_3) {
				uVar1 = (uint)uVar3 >> 3;
				uVar2 = (ulonglong)uVar1;
				if (uVar1 != 0) {
					do {
						pbVar6 = (byte *)lVar9;
						lVar9 = lVar9 + 0x140;
						lVar10 = lVar10 + (ulonglong)*pbVar6 + (ulonglong)pbVar6[0x28] + (ulonglong)pbVar6[0x50]
						    + (ulonglong)pbVar6[0x78] + (ulonglong)pbVar6[0xa0] + (ulonglong)pbVar6[200] + (ulonglong)pbVar6[0xf0] + (ulonglong)pbVar6[0x118];
						uVar2 = uVar2 - 1;
					} while (uVar2 != 0);
					uVar3 = uVar3 & 7;
					if (uVar3 == 0)
						goto LAB_10031604;
				}
				do {
					pbVar6 = (byte *)lVar9;
					lVar9 = lVar9 + 0x28;
					lVar10 = lVar10 + (ulonglong)*pbVar6;
					uVar3 = uVar3 - 1;
				} while (uVar3 != 0);
			}
		LAB_10031604:
			lVar7 = lVar7 + 1;
			lVar11 = lVar11 + 1;
		}
		if ((int)lVar10 == 0) {
			lVar12 = lVar13 + 1;
			lVar9 = lVar17 + uVar18;
			lVar10 = lVar12 * 0x28;
			uVar5 = 1;
			lVar11 = lVar17;
			while (true) {
				do {
					lVar11 = lVar11 + 1;
					lVar9 = lVar9 + 1;
					if (param_4 <= (int)lVar11) {
						lVar14 = lVar13 * 0x28;
						lVar16 = uVar18 + lVar14 + lVar17;
						lVar15 = uVar18 + lVar15 * 0x28 + lVar17;
						while ((int)lVar17 <= param_4) {
							lVar4 = random(0, 2, (char)uVar5, (char)lVar10, (char)lVar7, (char)lVar9, (char)lVar11, (char)lVar12, in_stack_ffffffa8, in_stack_ffffffaf,
							    in_stack_ffffffbb);
							if ((int)lVar4 != 0) {
								*(undefined *)lVar16 = 1;
							}
							lVar4 = random(0, 2, (char)uVar5, (char)lVar10, (char)lVar7, (char)lVar9, (char)lVar11, (char)lVar12, in_stack_ffffffa8, in_stack_ffffffaf,
							    in_stack_ffffffbb);
							if ((int)lVar4 != 0) {
								*(undefined *)lVar15 = 1;
							}
							lVar16 = lVar16 + 1;
							lVar15 = lVar15 + 1;
							lVar17 = lVar17 + 1;
						}
						lVar19 = lVar19 + lVar14;
						lVar17 = uVar18 + (longlong)param_4 + lVar14;
						while ((int)lVar13 <= param_3) {
							lVar15 = random(0, 2, (char)uVar5, (char)lVar10, (char)lVar7, (char)lVar9,
							    (char)lVar11, (char)lVar12, in_stack_ffffffa8, in_stack_ffffffaf,
							    in_stack_ffffffbb);
							if ((int)lVar15 != 0) {
								*(undefined *)lVar19 = 1;
							}
							lVar15 = random(0, 2, (char)uVar5, (char)lVar10, (char)lVar7, (char)lVar9,
							    (char)lVar11, (char)lVar12, in_stack_ffffffa8, in_stack_ffffffaf,
							    in_stack_ffffffbb);
							if ((int)lVar15 != 0) {
								*(undefined *)lVar17 = 1;
							}
							lVar19 = lVar19 + 0x28;
							lVar17 = lVar17 + 0x28;
							lVar13 = lVar13 + 1;
						}
						return 1;
					}
					lVar7 = lVar9 + lVar10;
					uVar3 = lVar15 - lVar12;
				} while (param_3 <= (int)lVar12);
				uVar1 = (uint)uVar3 >> 3;
				uVar2 = (ulonglong)uVar1;
				if (uVar1 != 0)
					break;
				do {
					*(undefined *)lVar7 = 1;
					lVar7 = lVar7 + 0x28;
					uVar3 = uVar3 - 1;
				joined_r0x10031680:
				} while (uVar3 != 0);
			}
			do {
				puVar8 = (undefined *)lVar7;
				*puVar8 = 1;
				puVar8[0x28] = 1;
				puVar8[0x50] = 1;
				puVar8[0x78] = 1;
				puVar8[0xa0] = 1;
				puVar8[200] = 1;
				puVar8[0xf0] = 1;
				puVar8[0x118] = 1;
				lVar7 = lVar7 + 0x140;
				uVar2 = uVar2 - 1;
			} while (uVar2 != 0);
			uVar3 = uVar3 & 7;
			goto joined_r0x10031680;
		}
	}
	return 0;
}

void DRLG_L3CreateBlock(longlong param_1, longlong param_2, int param_3, int param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	longlong lVar1;
	longlong lVar2;
	longlong lVar3;
	undefined8 uVar4;
	undefined uVar5;
	undefined uVar6;
	longlong param_2_00;
	longlong param_1_00;
	longlong param_2_01;
	longlong param_1_01;
	int param_3_00;
	int param_3_01;
	int iVar7;
	undefined4 param_9_00;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	uVar6 = (undefined)param_4;
	uVar5 = (undefined)param_3;
	lVar1 = random(0, 2, uVar5, uVar6, param_5, param_6, param_7, param_8, param_9_00, in_stack_ffffffaf,
	    in_stack_ffffffbb);
	lVar1 = lVar1 + 3;
	lVar2 = random(0, 2, uVar5, uVar6, param_5, param_6, param_7, param_8, param_9_00, in_stack_ffffffaf,
	    in_stack_ffffffbb);
	lVar2 = lVar2 + 3;
	param_3_01 = (int)lVar1;
	if (param_4 == 0) {
		param_2_00 = param_2 + -1;
		param_2_01 = param_2_00 - lVar2;
		if (param_3_01 < param_3) {
			lVar3 = random(0, lVar1, uVar5, uVar6, param_5, param_6, param_7, param_8, param_9_00,
			    in_stack_ffffffaf, in_stack_ffffffbb);
			param_1_01 = param_1 + lVar3;
		}
		if (param_3_01 == param_3) {
			param_1_01 = param_1;
		}
		if (param_3 < param_3_01) {
			lVar3 = random(0, lVar1, uVar5, uVar6, param_5, param_6, param_7, param_8, param_9_00,
			    in_stack_ffffffaf, in_stack_ffffffbb);
			param_1_01 = param_1 - lVar3;
		}
		param_1_00 = param_1_01 + lVar1;
	}
	param_3_00 = (int)lVar2;
	if (param_4 == 3) {
		param_1_00 = param_1 + -1;
		param_1_01 = param_1_00 - lVar1;
		if (param_3_00 < param_3) {
			lVar3 = random(0, lVar2, uVar5, uVar6, param_5, param_6, param_7, param_8, param_9_00,
			    in_stack_ffffffaf, in_stack_ffffffbb);
			param_2_01 = param_2 + lVar3;
		}
		if (param_3_00 == param_3) {
			param_2_01 = param_2;
		}
		if (param_3 < param_3_00) {
			lVar3 = random(0, lVar2, uVar5, uVar6, param_5, param_6, param_7, param_8, param_9_00,
			    in_stack_ffffffaf, in_stack_ffffffbb);
			param_2_01 = param_2 - lVar3;
		}
		param_2_00 = param_2_01 + lVar2;
	}
	if (param_4 == 2) {
		param_2_01 = param_2 + 1;
		param_2_00 = param_2 + lVar2 + 1;
		if (param_3_01 < param_3) {
			lVar3 = random(0, lVar1, uVar5, uVar6, param_5, param_6, param_7, param_8, param_9_00,
			    in_stack_ffffffaf, in_stack_ffffffbb);
			param_1_01 = param_1 + lVar3;
		}
		if (param_3_01 == param_3) {
			param_1_01 = param_1;
		}
		if (param_3 < param_3_01) {
			lVar3 = random(0, lVar1, uVar5, uVar6, param_5, param_6, param_7, param_8, param_9_00,
			    in_stack_ffffffaf, in_stack_ffffffbb);
			param_1_01 = param_1 - lVar3;
		}
		param_1_00 = param_1_01 + lVar1;
	}
	if (param_4 == 1) {
		param_1_01 = param_1 + 1;
		param_1_00 = param_1 + lVar1 + 1;
		if (param_3_00 < param_3) {
			lVar1 = random(0, lVar2, uVar5, uVar6, param_5, param_6, param_7, param_8, param_9_00,
			    in_stack_ffffffaf, in_stack_ffffffbb);
			param_2_01 = param_2 + lVar1;
		}
		if (param_3_00 == param_3) {
			param_2_01 = param_2;
		}
		if (param_3 < param_3_00) {
			lVar1 = random(0, lVar2, uVar5, uVar6, param_5, param_6, param_7, param_8, param_9_00,
			    in_stack_ffffffaf, in_stack_ffffffbb);
			param_2_01 = param_2 - lVar1;
		}
		param_2_00 = param_2_01 + lVar2;
	}
	uVar6 = (undefined)param_2_00;
	uVar5 = (undefined)param_1_00;
	uVar4 = DRLG_L3FillRoom((int)param_1_01, (int)param_2_01, (int)param_1_00, (int)param_2_00, param_5,
	    param_6, param_7, param_8, param_9_00);
	if ((int)uVar4 == 1) {
		lVar1 = random(0, 4, uVar5, uVar6, param_5, param_6, param_7, param_8, param_9_00,
		    in_stack_ffffffaf, in_stack_ffffffbb);
		if ((lVar1 != 0) && (param_4 != 2)) {
			DRLG_L3CreateBlock(param_1_01, param_2_01, param_3_00, 0, param_5, param_6, param_7, param_8, param_9_00);
		}
		iVar7 = (int)lVar1;
		if ((iVar7 != 0) && (param_4 != 3)) {
			DRLG_L3CreateBlock(param_1_00, param_2_01, param_3_01, 1, param_5, param_6, param_7, param_8, param_9_00);
		}
		if ((iVar7 != 0) && (param_4 != 0)) {
			DRLG_L3CreateBlock(param_1_01, param_2_00, param_3_00, 2, param_5, param_6, param_7, param_8, param_9_00);
		}
		if ((iVar7 != 0) && (param_4 != 1)) {
			DRLG_L3CreateBlock(param_1_01, param_2_01, param_3_01, 3, param_5, param_6, param_7, param_8, param_9_00);
		}
	}
	return;
}

void DRLG_L3FloorArea(longlong param_1, int param_2, longlong param_3, int param_4)

{
	uint uVar1;
	ulonglong uVar2;
	longlong lVar3;
	ulonglong uVar4;
	longlong lVar5;
	undefined *puVar6;
	longlong lVar7;

	lVar3 = (longlong)param_2;
	lVar7 = ZEXT48(PTR_DAT_100f1804) + lVar3;
	do {
		if (param_4 < (int)lVar3) {
			return;
		}
		lVar5 = lVar7 + param_1 * 0x28;
		uVar4 = (param_3 + 1) - param_1;
		if ((int)param_1 <= (int)param_3) {
			uVar1 = (uint)uVar4 >> 3;
			uVar2 = (ulonglong)uVar1;
			if (uVar1 != 0) {
				do {
					puVar6 = (undefined *)lVar5;
					*puVar6 = 1;
					puVar6[0x28] = 1;
					puVar6[0x50] = 1;
					puVar6[0x78] = 1;
					puVar6[0xa0] = 1;
					puVar6[200] = 1;
					puVar6[0xf0] = 1;
					puVar6[0x118] = 1;
					lVar5 = lVar5 + 0x140;
					uVar2 = uVar2 - 1;
				} while (uVar2 != 0);
				uVar4 = uVar4 & 7;
				if (uVar4 == 0)
					goto LAB_10031a58;
			}
			do {
				*(undefined *)lVar5 = 1;
				lVar5 = lVar5 + 0x28;
				uVar4 = uVar4 - 1;
			} while (uVar4 != 0);
		}
	LAB_10031a58:
		lVar7 = lVar7 + 1;
		lVar3 = lVar3 + 1;
	} while (true);
}

void DRLG_L3FillDiags(undefined param_1, undefined param_2, char param_3, char param_4, char param_5,
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
	int iVar10;
	byte *pbVar11;
	byte *pbVar12;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined in_stack_ffffffcb;

	lVar7 = (longlong)param_8;
	lVar6 = (longlong)param_7;
	lVar5 = (longlong)param_6;
	lVar4 = (longlong)param_5;
	lVar3 = (longlong)param_4;
	lVar2 = (longlong)param_3;
	iVar9 = 0;
	pbVar11 = PTR_DAT_100f1804;
	do {
		iVar10 = 0;
		pbVar12 = pbVar11;
		do {
			iVar8 = (uint)*pbVar12 * 8 + (uint)pbVar12[0x28] * 4 + (uint)pbVar12[1] * 2 + (uint)pbVar12[0x29];
			if (iVar8 == 6) {
				lVar1 = random(0, 2, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6,
				    (char)lVar7, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb);
				if ((int)lVar1 == 0) {
					*pbVar12 = 1;
				} else {
					pbVar12[0x29] = 1;
				}
			}
			if (iVar8 == 9) {
				lVar1 = random(0, 2, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6,
				    (char)lVar7, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb);
				if ((int)lVar1 == 0) {
					pbVar12[0x28] = 1;
				} else {
					pbVar12[1] = 1;
				}
			}
			iVar10 = iVar10 + 1;
			pbVar12 = pbVar12 + 0x28;
		} while (iVar10 < 0x27);
		iVar9 = iVar9 + 1;
		pbVar11 = pbVar11 + 1;
	} while (iVar9 < 0x27);
	return;
}

void DRLG_L3FillSingles(void)

{
	undefined *puVar1;
	byte *pbVar2;
	int iVar3;
	longlong lVar4;

	iVar3 = 1;
	puVar1 = PTR_DAT_100f1804;
	do {
		pbVar2 = puVar1 + 0x29;
		lVar4 = 0x13;
		do {
			if ((((*pbVar2 == 0) && ((uint)pbVar2[-0x29] + (uint)pbVar2[-1] + (uint)pbVar2[0x27] == 3)) && ((uint)pbVar2[-0x28] + (uint)pbVar2[0x28] == 2)) && ((uint)pbVar2[-0x27] + (uint)pbVar2[1] + (uint)pbVar2[0x29] == 3)) {
				*pbVar2 = 1;
			}
			if (((pbVar2[0x28] == 0) && ((uint)pbVar2[-1] + (uint)pbVar2[0x27] + (uint)pbVar2[0x4f] == 3))
			    && (((uint)*pbVar2 + (uint)pbVar2[0x50] == 2 && ((uint)pbVar2[1] + (uint)pbVar2[0x29] + (uint)pbVar2[0x51] == 3)))) {
				pbVar2[0x28] = 1;
			}
			pbVar2 = pbVar2 + 0x50;
			lVar4 = lVar4 + -1;
		} while (lVar4 != 0);
		iVar3 = iVar3 + 1;
		puVar1 = puVar1 + 1;
	} while (iVar3 < 0x27);
	return;
}

void DRLG_L3FillStraights(undefined param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	int iVar2;
	longlong lVar1;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	int iVar9;
	int iVar10;
	char *pcVar11;
	char *pcVar12;
	char *pcVar13;
	int unaff_r29;
	int unaff_r30;
	char *pcVar14;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	pcVar14 = PTR_DAT_100f1804;
	lVar8 = (longlong)param_8;
	lVar7 = (longlong)param_7;
	lVar6 = (longlong)param_6;
	lVar5 = (longlong)param_5;
	lVar4 = (longlong)param_4;
	lVar3 = (longlong)param_3;
	iVar10 = 0;
	pcVar11 = PTR_DAT_100f1804;
	do {
		iVar2 = 0;
		iVar9 = 0;
		pcVar12 = pcVar11;
		do {
			if ((*pcVar12 == '\0') && (pcVar12[1] == '\x01')) {
				if (iVar2 == 0) {
					unaff_r30 = iVar9;
				}
				iVar2 = iVar2 + 1;
			} else {
				if ((3 < iVar2) && (lVar1 = random(0, 2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb), (int)lVar1 != 0)) {
					pcVar13 = pcVar11 + unaff_r30 * 0x28;
					iVar2 = unaff_r30;
					while (iVar2 < iVar9) {
						lVar1 = random(0, 2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7,
						    (char)lVar8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
						*pcVar13 = (char)lVar1;
						pcVar13 = pcVar13 + 0x28;
						iVar2 = iVar2 + 1;
					}
				}
				iVar2 = 0;
			}
			iVar9 = iVar9 + 1;
			pcVar12 = pcVar12 + 0x28;
		} while (iVar9 < 0x25);
		iVar10 = iVar10 + 1;
		pcVar11 = pcVar11 + 1;
	} while (iVar10 < 0x27);
	iVar10 = 0;
	pcVar11 = pcVar14;
	do {
		iVar2 = 0;
		iVar9 = 0;
		pcVar12 = pcVar11;
		do {
			if ((*pcVar12 == '\x01') && (pcVar12[1] == '\0')) {
				if (iVar2 == 0) {
					unaff_r30 = iVar9;
				}
				iVar2 = iVar2 + 1;
			} else {
				if ((3 < iVar2) && (lVar1 = random(0, 2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb), (int)lVar1 != 0)) {
					pcVar13 = pcVar11 + unaff_r30 * 0x28;
					iVar2 = unaff_r30;
					while (iVar2 < iVar9) {
						lVar1 = random(0, 2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7,
						    (char)lVar8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
						pcVar13[1] = (char)lVar1;
						pcVar13 = pcVar13 + 0x28;
						iVar2 = iVar2 + 1;
					}
				}
				iVar2 = 0;
			}
			iVar9 = iVar9 + 1;
			pcVar12 = pcVar12 + 0x28;
		} while (iVar9 < 0x25);
		iVar10 = iVar10 + 1;
		pcVar11 = pcVar11 + 1;
	} while (iVar10 < 0x27);
	iVar10 = 0;
	pcVar11 = pcVar14;
	do {
		iVar2 = 0;
		iVar9 = 0;
		pcVar12 = pcVar11;
		do {
			if ((*pcVar12 == '\0') && (pcVar12[0x28] == '\x01')) {
				if (iVar2 == 0) {
					unaff_r29 = iVar9;
				}
				iVar2 = iVar2 + 1;
			} else {
				if ((3 < iVar2) && (lVar1 = random(0, 2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb), (int)lVar1 != 0)) {
					pcVar13 = pcVar11 + unaff_r29;
					iVar2 = unaff_r29;
					while (iVar2 < iVar9) {
						lVar1 = random(0, 2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7,
						    (char)lVar8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
						*pcVar13 = (char)lVar1;
						pcVar13 = pcVar13 + 1;
						iVar2 = iVar2 + 1;
					}
				}
				iVar2 = 0;
			}
			iVar9 = iVar9 + 1;
			pcVar12 = pcVar12 + 1;
		} while (iVar9 < 0x25);
		iVar10 = iVar10 + 1;
		pcVar11 = pcVar11 + 0x28;
	} while (iVar10 < 0x27);
	iVar10 = 0;
	do {
		iVar2 = 0;
		iVar9 = 0;
		pcVar11 = pcVar14;
		do {
			if ((*pcVar11 == '\x01') && (pcVar11[0x28] == '\0')) {
				if (iVar2 == 0) {
					unaff_r29 = iVar9;
				}
				iVar2 = iVar2 + 1;
			} else {
				if ((3 < iVar2) && (lVar1 = random(0, 2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb), (int)lVar1 != 0)) {
					pcVar12 = pcVar14 + unaff_r29;
					iVar2 = unaff_r29;
					while (iVar2 < iVar9) {
						lVar1 = random(0, 2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7,
						    (char)lVar8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
						pcVar12[0x28] = (char)lVar1;
						pcVar12 = pcVar12 + 1;
						iVar2 = iVar2 + 1;
					}
				}
				iVar2 = 0;
			}
			iVar9 = iVar9 + 1;
			pcVar11 = pcVar11 + 1;
		} while (iVar9 < 0x25);
		iVar10 = iVar10 + 1;
		pcVar14 = pcVar14 + 0x28;
	} while (iVar10 < 0x27);
	return;
}

void DRLG_L3Edges(void)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f1804;
	PTR_DAT_100f1804[0x618] = 0;
	puVar1[0x619] = 0;
	puVar1[0x61a] = 0;
	puVar1[0x61b] = 0;
	puVar1[0x61c] = 0;
	puVar1[0x61d] = 0;
	puVar1[0x61e] = 0;
	puVar1[0x61f] = 0;
	puVar1[0x620] = 0;
	puVar1[0x621] = 0;
	puVar1[0x622] = 0;
	puVar1[0x623] = 0;
	puVar1[0x624] = 0;
	puVar1[0x625] = 0;
	puVar1[0x626] = 0;
	puVar1[0x627] = 0;
	puVar1[0x628] = 0;
	puVar1[0x629] = 0;
	puVar1[0x62a] = 0;
	puVar1[0x62b] = 0;
	puVar1[0x62c] = 0;
	puVar1[0x62d] = 0;
	puVar1[0x62e] = 0;
	puVar1[0x62f] = 0;
	puVar1[0x630] = 0;
	puVar1[0x631] = 0;
	puVar1[0x632] = 0;
	puVar1[0x633] = 0;
	puVar1[0x634] = 0;
	puVar1[0x635] = 0;
	puVar1[0x636] = 0;
	puVar1[0x637] = 0;
	puVar1[0x638] = 0;
	puVar1[0x639] = 0;
	puVar1[0x63a] = 0;
	puVar1[0x63b] = 0;
	puVar1[0x63c] = 0;
	puVar1[0x63d] = 0;
	puVar1[0x63e] = 0;
	puVar1[0x63f] = 0;
	puVar1[0x27] = 0;
	puVar1[0x4f] = 0;
	puVar1[0x77] = 0;
	puVar1[0x9f] = 0;
	puVar1[199] = 0;
	puVar1[0xef] = 0;
	puVar1[0x117] = 0;
	puVar1[0x13f] = 0;
	puVar1[0x167] = 0;
	puVar1[399] = 0;
	puVar1[0x1b7] = 0;
	puVar1[0x1df] = 0;
	puVar1[0x207] = 0;
	puVar1[0x22f] = 0;
	puVar1[599] = 0;
	puVar1[0x27f] = 0;
	puVar1[0x2a7] = 0;
	puVar1[0x2cf] = 0;
	puVar1[0x2f7] = 0;
	puVar1[799] = 0;
	puVar1[0x347] = 0;
	puVar1[0x36f] = 0;
	puVar1[0x397] = 0;
	puVar1[0x3bf] = 0;
	puVar1[999] = 0;
	puVar1[0x40f] = 0;
	puVar1[0x437] = 0;
	puVar1[0x45f] = 0;
	puVar1[0x487] = 0;
	puVar1[0x4af] = 0;
	puVar1[0x4d7] = 0;
	puVar1[0x4ff] = 0;
	puVar1[0x527] = 0;
	puVar1[0x54f] = 0;
	puVar1[0x577] = 0;
	puVar1[0x59f] = 0;
	puVar1[0x5c7] = 0;
	puVar1[0x5ef] = 0;
	puVar1[0x617] = 0;
	puVar1[0x63f] = 0;
	return;
}

longlong DRLG_L3GetFloorArea(void)

{
	byte bVar1;
	byte *pbVar2;
	byte *pbVar3;
	byte *pbVar4;
	byte *pbVar5;
	byte *pbVar6;
	byte *pbVar7;
	byte *pbVar8;
	byte *pbVar9;
	byte *pbVar10;
	byte *pbVar11;
	byte *pbVar12;
	byte *pbVar13;
	byte *pbVar14;
	byte *pbVar15;
	byte *pbVar16;
	byte *pbVar17;
	byte *pbVar18;
	byte *pbVar19;
	byte *pbVar20;
	byte *pbVar21;
	byte *pbVar22;
	byte *pbVar23;
	byte *pbVar24;
	byte *pbVar25;
	byte *pbVar26;
	byte *pbVar27;
	byte *pbVar28;
	byte *pbVar29;
	byte *pbVar30;
	byte *pbVar31;
	byte *pbVar32;
	byte *pbVar33;
	byte *pbVar34;
	byte *pbVar35;
	byte *pbVar36;
	byte *pbVar37;
	byte *pbVar38;
	byte *pbVar39;
	byte *pbVar40;
	byte *pbVar41;
	byte *pbVar42;
	byte *pbVar43;
	byte *pbVar44;
	byte *pbVar45;
	byte *pbVar46;
	byte *pbVar47;
	byte *pbVar48;
	byte *pbVar49;
	byte *pbVar50;
	byte *pbVar51;
	byte *pbVar52;
	byte *pbVar53;
	byte *pbVar54;
	byte *pbVar55;
	byte *pbVar56;
	byte *pbVar57;
	byte *pbVar58;
	byte *pbVar59;
	byte *pbVar60;
	byte *pbVar61;
	byte *pbVar62;
	byte *pbVar63;
	byte *pbVar64;
	byte *pbVar65;
	byte *pbVar66;
	byte *pbVar67;
	byte *pbVar68;
	byte *pbVar69;
	byte *pbVar70;
	byte *pbVar71;
	byte *pbVar72;
	byte *pbVar73;
	byte *pbVar74;
	byte *pbVar75;
	byte *pbVar76;
	byte *pbVar77;
	byte *pbVar78;
	byte *pbVar79;
	longlong lVar80;
	byte *pbVar81;
	byte *pbVar82;
	longlong lVar83;

	lVar83 = 0x14;
	lVar80 = 0;
	pbVar81 = PTR_DAT_100f1804;
	do {
		bVar1 = *pbVar81;
		pbVar2 = pbVar81 + 0x28;
		pbVar3 = pbVar81 + 0x50;
		pbVar4 = pbVar81 + 0x78;
		pbVar5 = pbVar81 + 0xa0;
		pbVar6 = pbVar81 + 200;
		pbVar7 = pbVar81 + 0xf0;
		pbVar8 = pbVar81 + 0x118;
		pbVar9 = pbVar81 + 0x140;
		pbVar10 = pbVar81 + 0x168;
		pbVar11 = pbVar81 + 400;
		pbVar12 = pbVar81 + 0x1b8;
		pbVar13 = pbVar81 + 0x1e0;
		pbVar14 = pbVar81 + 0x208;
		pbVar15 = pbVar81 + 0x230;
		pbVar16 = pbVar81 + 600;
		pbVar17 = pbVar81 + 0x280;
		pbVar18 = pbVar81 + 0x2a8;
		pbVar19 = pbVar81 + 0x2d0;
		pbVar20 = pbVar81 + 0x2f8;
		pbVar21 = pbVar81 + 800;
		pbVar22 = pbVar81 + 0x348;
		pbVar23 = pbVar81 + 0x370;
		pbVar24 = pbVar81 + 0x398;
		pbVar25 = pbVar81 + 0x3c0;
		pbVar26 = pbVar81 + 1000;
		pbVar27 = pbVar81 + 0x410;
		pbVar28 = pbVar81 + 0x438;
		pbVar29 = pbVar81 + 0x460;
		pbVar30 = pbVar81 + 0x488;
		pbVar31 = pbVar81 + 0x4b0;
		pbVar32 = pbVar81 + 0x4d8;
		pbVar33 = pbVar81 + 0x500;
		pbVar34 = pbVar81 + 0x528;
		pbVar35 = pbVar81 + 0x550;
		pbVar36 = pbVar81 + 0x578;
		pbVar37 = pbVar81 + 0x5a0;
		pbVar38 = pbVar81 + 0x5c8;
		pbVar39 = pbVar81 + 0x5f0;
		pbVar40 = pbVar81 + 0x618;
		pbVar82 = pbVar81 + 1;
		pbVar41 = pbVar81 + 0x29;
		pbVar42 = pbVar81 + 0x51;
		pbVar43 = pbVar81 + 0x79;
		pbVar44 = pbVar81 + 0xa1;
		pbVar45 = pbVar81 + 0xc9;
		pbVar46 = pbVar81 + 0xf1;
		pbVar47 = pbVar81 + 0x119;
		pbVar48 = pbVar81 + 0x141;
		pbVar49 = pbVar81 + 0x169;
		pbVar50 = pbVar81 + 0x191;
		pbVar51 = pbVar81 + 0x1b9;
		pbVar52 = pbVar81 + 0x1e1;
		pbVar53 = pbVar81 + 0x209;
		pbVar54 = pbVar81 + 0x231;
		pbVar55 = pbVar81 + 0x259;
		pbVar56 = pbVar81 + 0x281;
		pbVar57 = pbVar81 + 0x2a9;
		pbVar58 = pbVar81 + 0x2d1;
		pbVar59 = pbVar81 + 0x2f9;
		pbVar60 = pbVar81 + 0x321;
		pbVar61 = pbVar81 + 0x349;
		pbVar62 = pbVar81 + 0x371;
		pbVar63 = pbVar81 + 0x399;
		pbVar64 = pbVar81 + 0x3c1;
		pbVar65 = pbVar81 + 0x3e9;
		pbVar66 = pbVar81 + 0x411;
		pbVar67 = pbVar81 + 0x439;
		pbVar68 = pbVar81 + 0x461;
		pbVar69 = pbVar81 + 0x489;
		pbVar70 = pbVar81 + 0x4b1;
		pbVar71 = pbVar81 + 0x4d9;
		pbVar72 = pbVar81 + 0x501;
		pbVar73 = pbVar81 + 0x529;
		pbVar74 = pbVar81 + 0x551;
		pbVar75 = pbVar81 + 0x579;
		pbVar76 = pbVar81 + 0x5a1;
		pbVar77 = pbVar81 + 0x5c9;
		pbVar78 = pbVar81 + 0x5f1;
		pbVar79 = pbVar81 + 0x619;
		pbVar81 = pbVar81 + 2;
		lVar80 = lVar80 + (ulonglong)bVar1 + (ulonglong)*pbVar2 + (ulonglong)*pbVar3 + (ulonglong)*pbVar4 + (ulonglong)*pbVar5 + (ulonglong)*pbVar6 + (ulonglong)*pbVar7 + (ulonglong)*pbVar8 + (ulonglong)*pbVar9 + (ulonglong)*pbVar10 + (ulonglong)*pbVar11 + (ulonglong)*pbVar12 + (ulonglong)*pbVar13 + (ulonglong)*pbVar14 + (ulonglong)*pbVar15 + (ulonglong)*pbVar16 + (ulonglong)*pbVar17 + (ulonglong)*pbVar18 + (ulonglong)*pbVar19 + (ulonglong)*pbVar20 + (ulonglong)*pbVar21 + (ulonglong)*pbVar22 + (ulonglong)*pbVar23 + (ulonglong)*pbVar24 + (ulonglong)*pbVar25 + (ulonglong)*pbVar26 + (ulonglong)*pbVar27 + (ulonglong)*pbVar28 + (ulonglong)*pbVar29 + (ulonglong)*pbVar30 + (ulonglong)*pbVar31 + (ulonglong)*pbVar32 + (ulonglong)*pbVar33 + (ulonglong)*pbVar34 + (ulonglong)*pbVar35 + (ulonglong)*pbVar36 + (ulonglong)*pbVar37 + (ulonglong)*pbVar38 + (ulonglong)*pbVar39 + (ulonglong)*pbVar40 + (ulonglong)*pbVar82 + (ulonglong)*pbVar41 + (ulonglong)*pbVar42 + (ulonglong)*pbVar43 + (ulonglong)*pbVar44 + (ulonglong)*pbVar45 + (ulonglong)*pbVar46 + (ulonglong)*pbVar47 + (ulonglong)*pbVar48 + (ulonglong)*pbVar49 + (ulonglong)*pbVar50 + (ulonglong)*pbVar51 + (ulonglong)*pbVar52 + (ulonglong)*pbVar53 + (ulonglong)*pbVar54 + (ulonglong)*pbVar55 + (ulonglong)*pbVar56 + (ulonglong)*pbVar57 + (ulonglong)*pbVar58 + (ulonglong)*pbVar59 + (ulonglong)*pbVar60 + (ulonglong)*pbVar61 + (ulonglong)*pbVar62 + (ulonglong)*pbVar63 + (ulonglong)*pbVar64 + (ulonglong)*pbVar65 + (ulonglong)*pbVar66 + (ulonglong)*pbVar67 + (ulonglong)*pbVar68 + (ulonglong)*pbVar69 + (ulonglong)*pbVar70 + (ulonglong)*pbVar71 + (ulonglong)*pbVar72 + (ulonglong)*pbVar73 + (ulonglong)*pbVar74 + (ulonglong)*pbVar75 + (ulonglong)*pbVar76 + (ulonglong)*pbVar77 + (ulonglong)*pbVar78 + (ulonglong)*pbVar79;
		lVar83 = lVar83 + -1;
	} while (lVar83 != 0);
	return lVar80;
}

void DRLG_L3MakeMegas(undefined param_1, undefined param_2, undefined param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	longlong lVar2;
	int iVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	int iVar9;
	int iVar10;
	byte *pbVar11;
	byte *pbVar12;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	puVar1 = PTR_DAT_100f1804;
	lVar8 = (longlong)param_8;
	lVar7 = (longlong)param_7;
	lVar6 = (longlong)param_6;
	lVar5 = (longlong)param_5;
	lVar4 = (longlong)param_4;
	iVar9 = 0;
	pbVar11 = PTR_DAT_100f1804;
	do {
		iVar10 = 0;
		pbVar12 = pbVar11;
		do {
			lVar2 = (ulonglong)*pbVar12 * 8 + (ulonglong)pbVar12[0x28] * 4 + (ulonglong)pbVar12[1] * 2 + (ulonglong)pbVar12[0x29];
			iVar3 = (int)lVar2;
			if (iVar3 == 6) {
				lVar2 = random(0, 2, (char)lVar2, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7,
				    (char)lVar8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
				if ((int)lVar2 == 0) {
					iVar3 = 0xc;
				} else {
					iVar3 = 5;
				}
			}
			if (iVar3 == 9) {
				lVar2 = random(0, 2, 9, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8,
				    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
				if ((int)lVar2 == 0) {
					iVar3 = 0xd;
				} else {
					iVar3 = 0xe;
				}
			}
			iVar10 = iVar10 + 1;
			*pbVar12 = (&DAT_100f89bc)[iVar3];
			pbVar12 = pbVar12 + 0x28;
		} while (iVar10 < 0x27);
		iVar9 = iVar9 + 1;
		pbVar11[0x618] = 8;
		pbVar11 = pbVar11 + 1;
	} while (iVar9 < 0x27);
	puVar1[0x27] = 8;
	puVar1[0x4f] = 8;
	puVar1[0x77] = 8;
	puVar1[0x9f] = 8;
	puVar1[199] = 8;
	puVar1[0xef] = 8;
	puVar1[0x117] = 8;
	puVar1[0x13f] = 8;
	puVar1[0x167] = 8;
	puVar1[399] = 8;
	puVar1[0x1b7] = 8;
	puVar1[0x1df] = 8;
	puVar1[0x207] = 8;
	puVar1[0x22f] = 8;
	puVar1[599] = 8;
	puVar1[0x27f] = 8;
	puVar1[0x2a7] = 8;
	puVar1[0x2cf] = 8;
	puVar1[0x2f7] = 8;
	puVar1[799] = 8;
	puVar1[0x347] = 8;
	puVar1[0x36f] = 8;
	puVar1[0x397] = 8;
	puVar1[0x3bf] = 8;
	puVar1[999] = 8;
	puVar1[0x40f] = 8;
	puVar1[0x437] = 8;
	puVar1[0x45f] = 8;
	puVar1[0x487] = 8;
	puVar1[0x4af] = 8;
	puVar1[0x4d7] = 8;
	puVar1[0x4ff] = 8;
	puVar1[0x527] = 8;
	puVar1[0x54f] = 8;
	puVar1[0x577] = 8;
	puVar1[0x59f] = 8;
	puVar1[0x5c7] = 8;
	puVar1[0x5ef] = 8;
	puVar1[0x617] = 8;
	puVar1[0x63f] = 8;
	return;
}

ulonglong DRLG_L3River(char param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	byte bVar1;
	bool bVar2;
	undefined *puVar3;
	ulonglong uVar4;
	longlong lVar5;
	ulonglong uVar6;
	int iVar8;
	uint *puVar9;
	ulonglong uVar7;
	int iVar10;
	int *piVar11;
	uint *puVar13;
	longlong lVar12;
	longlong lVar14;
	longlong lVar15;
	ulonglong uVar16;
	ulonglong uVar17;
	longlong lVar18;
	undefined8 unaff_r15;
	undefined8 unaff_r16;
	int iVar19;
	undefined8 unaff_r17;
	undefined8 unaff_r18;
	undefined8 unaff_r19;
	ulonglong uVar20;
	uint uVar21;
	undefined8 unaff_r20;
	longlong lVar22;
	uint uVar23;
	undefined8 unaff_r21;
	longlong lVar24;
	undefined8 unaff_r22;
	ulonglong uVar25;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	int iVar26;
	longlong unaff_r26;
	undefined8 unaff_r27;
	int iVar27;
	longlong unaff_r28;
	int iVar28;
	undefined8 unaff_r29;
	ulonglong unaff_r30;
	ulonglong unaff_r31;
	int iVar29;
	undefined4 in_stack_fffffac8;
	undefined in_stack_fffffacf;
	undefined in_stack_fffffadb;
	uint local_504[100];
	uint local_374[99];
	int aiStack488[105];
	undefined4 local_44;
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

	puVar3 = PTR_DAT_100f1804;
	lVar18 = (longlong)param_8;
	uVar17 = SEXT18(param_7);
	uVar16 = SEXT18(param_6);
	lVar15 = (longlong)param_5;
	lVar14 = (longlong)param_4;
	lVar12 = (longlong)param_3;
	uVar7 = SEXT18(param_1);
	uVar6 = ZEXT48(register0x0000000c);
	local_44 = (undefined4)((ulonglong)unaff_r15 >> 0x20);
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
	uStack8 = (undefined4)(unaff_r30 >> 0x20);
	uStack4 = (undefined4)(unaff_r31 >> 0x20);
	uVar25 = ZEXT48(PTR_DAT_100f1804);
	iVar27 = 0;
	iVar26 = 0;
	do {
		if ((199 < iVar26) || (3 < iVar27)) {
			return uVar7;
		}
		bVar2 = false;
		while ((!bVar2 && (iVar26 < 200))) {
			lVar5 = 0;
			iVar26 = iVar26 + 1;
			uVar4 = 0;
			iVar10 = 0;
			while (true) {
				bVar1 = puVar3[(uint)lVar5 * 0x28 + (uint)uVar4];
				if (((0x18 < bVar1) && (bVar1 < 0x1d)) || (99 < iVar10))
					break;
				lVar5 = random(0, 0x28, (char)lVar12, (char)lVar14, (char)lVar15, (char)uVar16, (char)uVar17, (char)lVar18, in_stack_fffffac8, in_stack_fffffacf, in_stack_fffffadb);
				uVar7 = random(0, 0x28, (char)lVar12, (char)lVar14, (char)lVar15, (char)uVar16, (char)uVar17, (char)lVar18, in_stack_fffffac8, in_stack_fffffacf, in_stack_fffffadb);
				iVar10 = iVar10 + 1;
				uVar4 = uVar7;
				while (true) {
					if (((0x18 < (byte)puVar3[(int)lVar5 * 0x28 + (int)uVar4]) && ((byte)puVar3[(int)lVar5 * 0x28 + (int)uVar4] < 0x1d)) || (0x27 < (int)uVar4))
						break;
					lVar5 = lVar5 + 1;
					if (0x27 < (int)lVar5) {
						lVar5 = 0;
						uVar4 = uVar4 + 1;
					}
				}
			}
			if (99 < iVar10) {
				return uVar7;
			}
			if (bVar1 == 0x1b) {
				aiStack488[1] = 0x29;
				unaff_r31 = 1;
				unaff_r29 = 0;
			} else {
				if (bVar1 < 0x1b) {
					if (bVar1 == 0x19) {
						aiStack488[1] = 0x28;
						unaff_r31 = 3;
						unaff_r29 = 2;
					} else {
						if (0x18 < bVar1) {
							aiStack488[1] = 0x26;
							unaff_r31 = 0;
							unaff_r29 = 1;
						}
					}
				} else {
					if (bVar1 < 0x1d) {
						aiStack488[1] = 0x27;
						unaff_r31 = 2;
						unaff_r29 = 3;
					}
				}
			}
			unaff_r28 = 1;
			lVar24 = uVar6 - 0x500;
			iVar19 = 4;
			iVar10 = 0;
			local_504[0] = (uint)lVar5;
			local_374[0] = (uint)uVar4;
			while (true) {
				uVar21 = (uint)uVar4;
				uVar23 = (uint)lVar5;
				iVar29 = (int)unaff_r28;
				iVar8 = (int)unaff_r30;
				iVar28 = (int)unaff_r31;
				if ((3 < iVar10) || (99 < iVar29))
					break;
				if (iVar10 == 0) {
					unaff_r31 = random(0, 4, (char)lVar12, (char)lVar14, (char)lVar15, (char)uVar16,
					    (char)uVar17, (char)lVar18, in_stack_fffffac8, in_stack_fffffacf,
					    in_stack_fffffadb);
					uVar7 = unaff_r31;
				} else {
					unaff_r31 = (ulonglong)(iVar28 + 1U & 3);
				}
				while (true) {
					iVar10 = iVar10 + 1;
					iVar29 = (int)unaff_r31;
					if ((iVar29 != (int)unaff_r29) && (iVar29 != iVar19))
						break;
					unaff_r31 = (ulonglong)(iVar29 + 1U & 3);
				}
				uVar20 = uVar4;
				if ((iVar29 == 0) && (uVar20 = uVar4, 0 < (int)uVar21)) {
					uVar20 = uVar4 - 1;
				}
				if ((iVar29 == 1) && ((int)uVar20 < 0x28)) {
					uVar20 = uVar20 + 1;
				}
				lVar22 = lVar5;
				if ((iVar29 == 2) && (lVar22 = lVar5, (int)uVar23 < 0x28)) {
					lVar22 = lVar5 + 1;
				}
				if ((iVar29 == 3) && (0 < (int)lVar22)) {
					lVar22 = lVar22 + -1;
				}
				if (puVar3[(int)lVar22 * 0x28 + (int)uVar20] == '\a') {
					iVar10 = 0;
					piVar11 = (int *)lVar24;
					if (iVar29 < 2) {
						lVar5 = random(0, 2, (char)lVar12, (char)lVar14, (char)lVar15, (char)uVar16,
						    (char)uVar17, (char)lVar18, in_stack_fffffac8, in_stack_fffffacf,
						    in_stack_fffffadb);
						uVar21 = (uint)lVar5 & 0xff;
						piVar11[200] = uVar21 + 0x11;
					} else {
						lVar5 = random(0, 2, (char)lVar12, (char)lVar14, (char)lVar15, (char)uVar16,
						    (char)uVar17, (char)lVar18, in_stack_fffffac8, in_stack_fffffacf,
						    in_stack_fffffadb);
						uVar21 = (uint)lVar5 & 0xff;
						piVar11[200] = uVar21 + 0xf;
					}
					uVar7 = (ulonglong)uVar21;
					*piVar11 = (int)lVar22;
					unaff_r28 = unaff_r28 + 1;
					piVar11[100] = (int)uVar20;
					lVar24 = lVar24 + 4;
					iVar28 = (int)unaff_r28;
					if (((iVar29 == 0) && (iVar8 == 2)) || ((iVar29 == 3 && (iVar8 == 1)))) {
						if (2 < iVar28) {
							piVar11[199] = 0x16;
						}
						if (iVar29 == 0) {
							iVar19 = 1;
						} else {
							iVar19 = 2;
						}
					}
					if (((iVar29 == 0) && (iVar8 == 3)) || ((iVar29 == 2 && (iVar8 == 1)))) {
						if (2 < iVar28) {
							piVar11[199] = 0x15;
						}
						if (iVar29 == 0) {
							iVar19 = 1;
						} else {
							iVar19 = 3;
						}
					}
					if (((iVar29 == 1) && (iVar8 == 2)) || ((iVar29 == 3 && (iVar8 == 0)))) {
						if (2 < iVar28) {
							piVar11[199] = 0x14;
						}
						if (iVar29 == 1) {
							iVar19 = 0;
						} else {
							iVar19 = 2;
						}
					}
					if (((iVar29 == 1) && (iVar8 == 3)) || ((uVar4 = uVar20, lVar5 = lVar22, unaff_r30 = unaff_r31, iVar29 == 2 && (uVar4 = uVar20, lVar5 = lVar22, unaff_r30 = unaff_r31, iVar8 == 0)))) {
						if (2 < iVar28) {
							piVar11[199] = 0x13;
						}
						if (iVar29 == 1) {
							iVar19 = 0;
							uVar4 = uVar20;
							lVar5 = lVar22;
							unaff_r30 = unaff_r31;
						} else {
							iVar19 = 3;
							uVar4 = uVar20;
							lVar5 = lVar22;
							unaff_r30 = unaff_r31;
						}
					}
				}
			}
			if (iVar28 == 0) {
				uVar7 = uVar25 + lVar5 * 0x28 + uVar4;
				if ((*(char *)((int)uVar7 + -1) == '\n') && (*(char *)((int)uVar7 + -2) == '\b')) {
					uVar7 = uVar4 - 1;
					local_504[iVar29] = uVar23;
					local_374[iVar29] = (uint)uVar7;
					aiStack488[iVar29 + 1] = 0x18;
					if (iVar8 == 2) {
						aiStack488[iVar29] = 0x16;
					}
					if (iVar8 == 3) {
						aiStack488[iVar29] = 0x15;
					}
					bVar2 = true;
				}
			}
			if (iVar28 == 1) {
				uVar7 = uVar25 + lVar5 * 0x28 + uVar4;
				if ((*(char *)((int)uVar7 + 1) == '\x02') && (*(char *)((int)uVar7 + 2) == '\b')) {
					uVar7 = uVar4 + 1;
					local_504[iVar29] = uVar23;
					local_374[iVar29] = (uint)uVar7;
					aiStack488[iVar29 + 1] = 0x2a;
					if (iVar8 == 2) {
						aiStack488[iVar29] = 0x14;
					}
					if (iVar8 == 3) {
						aiStack488[iVar29] = 0x13;
					}
					bVar2 = true;
				}
			}
			if (iVar28 == 2) {
				uVar7 = uVar25 + lVar5 * 0x28 + uVar4;
				if ((*(char *)((int)uVar7 + 0x28) == '\x04') && (*(char *)((int)uVar7 + 0x50) == '\b')) {
					uVar7 = lVar5 + 1;
					local_504[iVar29] = (uint)uVar7;
					local_374[iVar29] = uVar21;
					aiStack488[iVar29 + 1] = 0x2b;
					if (iVar8 == 0) {
						aiStack488[iVar29] = 0x13;
					}
					if (iVar8 == 1) {
						aiStack488[iVar29] = 0x15;
					}
					bVar2 = true;
				}
			}
			if (iVar28 == 3) {
				uVar7 = uVar25 + lVar5 * 0x28 + uVar4;
				if ((*(char *)((int)uVar7 + -0x28) == '\t') && (*(char *)((int)uVar7 + -0x50) == '\b')) {
					uVar7 = lVar5 - 1;
					local_504[iVar29] = (uint)uVar7;
					local_374[iVar29] = uVar21;
					aiStack488[iVar29 + 1] = 0x17;
					if (iVar8 == 0) {
						aiStack488[iVar29] = 0x14;
					}
					if (iVar8 == 1) {
						aiStack488[iVar29] = 0x16;
					}
					bVar2 = true;
				}
			}
		}
		uVar21 = (uint)unaff_r28;
		if ((bVar2) && ((int)uVar21 < 7)) {
			bVar2 = false;
		}
		if (bVar2) {
			iVar10 = 0;
			iVar19 = 0;
			while ((iVar10 == 0 && (iVar19 < 0x1e))) {
				iVar19 = iVar19 + 1;
				unaff_r26 = random(0, unaff_r28, (char)lVar12, (char)lVar14, (char)lVar15, (char)uVar16,
				    (char)uVar17, (char)lVar18, in_stack_fffffac8, in_stack_fffffacf,
				    in_stack_fffffadb);
				iVar8 = (int)unaff_r26;
				puVar13 = local_504 + iVar8;
				iVar29 = aiStack488[iVar8 + 1];
				if (((iVar29 == 0xf) || (iVar29 == 0x10)) && (((puVar3 + *puVar13 * 0x28 + local_374[iVar8])[-1] == '\a' && ((puVar3 + *puVar13 * 0x28 + local_374[iVar8])[1] == '\a')))) {
					iVar10 = 1;
				}
				if (((iVar29 - 0x11U < 2) && ((puVar3 + *puVar13 * 0x28 + local_374[iVar8])[-0x28] == '\a'))
				    && ((puVar3 + *puVar13 * 0x28 + local_374[iVar8])[0x28] == '\a')) {
					iVar10 = 2;
				}
				uVar23 = local_374[iVar8];
				uVar16 = (ulonglong)uVar23;
				uVar7 = uVar6 - 0x504;
				uVar17 = (ulonglong)*puVar13;
				lVar18 = 0;
				lVar12 = uVar16 + 1;
				lVar14 = uVar17 - 1;
				lVar15 = uVar17 + 1;
				while (((int)lVar18 < (int)uVar21 && (iVar10 != 0))) {
					puVar9 = (uint *)uVar7;
					if (((iVar10 == 1) && ((uVar23 - 1 == puVar9[100] || ((uint)lVar12 == puVar9[100])))) && (*puVar13 == *puVar9)) {
						iVar10 = 0;
					}
					if ((iVar10 == 2) && ((((uint)lVar14 == *puVar9 || ((uint)lVar15 == *puVar9)) && (uVar23 == puVar9[100])))) {
						iVar10 = 0;
					}
					uVar7 = uVar7 + 4;
					lVar18 = lVar18 + 1;
				}
			}
			if (iVar10 != 0) {
				if (iVar10 == 1) {
					uVar7 = 0x2c;
					local_504[(int)unaff_r26 + 200] = 0x2c;
				} else {
					uVar7 = 0x2d;
					local_504[(int)unaff_r26 + 200] = 0x2d;
				}
				iVar27 = iVar27 + 1;
				unaff_r26 = 0;
				if (-1 < (int)uVar21) {
					uVar7 = unaff_r28 - 8;
					if (8 < (int)(uVar21 + 1)) {
						iVar10 = (int)uVar7;
						uVar4 = (ulonglong)(uVar21 >> 3);
						uVar7 = uVar6 - 0x504;
						if (-1 < iVar10) {
							do {
								piVar11 = (int *)uVar7;
								unaff_r26 = unaff_r26 + 8;
								puVar3[*piVar11 * 0x28 + piVar11[100]] = (char)piVar11[200];
								puVar3[piVar11[1] * 0x28 + piVar11[0x65]] = (char)piVar11[0xc9];
								puVar3[piVar11[2] * 0x28 + piVar11[0x66]] = (char)piVar11[0xca];
								puVar3[piVar11[3] * 0x28 + piVar11[0x67]] = (char)piVar11[0xcb];
								puVar3[piVar11[4] * 0x28 + piVar11[0x68]] = (char)piVar11[0xcc];
								puVar3[piVar11[5] * 0x28 + piVar11[0x69]] = (char)piVar11[0xcd];
								puVar3[piVar11[6] * 0x28 + piVar11[0x6a]] = (char)piVar11[0xce];
								uVar7 = uVar7 + 0x20;
								puVar3[piVar11[7] * 0x28 + piVar11[0x6b]] = (char)piVar11[0xcf];
								uVar4 = uVar4 - 1;
							} while (uVar4 != 0);
						}
					}
					lVar12 = (uVar6 - 0x504) + (ulonglong)(uint)((int)unaff_r26 << 2);
					lVar5 = (unaff_r28 + 1) - unaff_r26;
					if ((int)unaff_r26 <= (int)uVar21) {
						do {
							puVar13 = (uint *)lVar12;
							unaff_r26 = unaff_r26 + 1;
							uVar7 = (ulonglong)*puVar13 * 0x28;
							lVar12 = lVar12 + 4;
							puVar3[(int)uVar7 + puVar13[100]] = (char)puVar13[200];
							lVar5 = lVar5 + -1;
						} while (lVar5 != 0);
					}
				}
			}
		}
	} while (true);
}

undefined8
DRLG_L3Spawn(longlong param_1, int param_2, int *param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	byte bVar1;
	undefined8 uVar2;
	int iVar3;
	byte *pbVar4;
	undefined4 param_9_00;

	if (0x28 < *param_3) {
		return 1;
	}
	iVar3 = (int)param_1;
	if ((((iVar3 < 0) || (param_2 < 0)) || (0x27 < iVar3)) || (0x27 < param_2)) {
		return 1;
	}
	bVar1 = PTR_DAT_100f1804[iVar3 * 0x28 + param_2];
	if ((bVar1 & 0x80) != 0) {
		return 0;
	}
	if (0xf < bVar1) {
		return 1;
	}
	PTR_DAT_100f1804[iVar3 * 0x28 + param_2] = bVar1 | 0x80;
	pbVar4 = &DAT_100f8c96 + (uint)bVar1;
	*param_3 = *param_3 + 1;
	if (((*pbVar4 & 8) != 0) && (uVar2 = DRLG_L3Spawn(param_1, param_2 + -1, param_3, param_4, param_5, param_6, param_7, param_8, param_9_00), (int)uVar2 == 1)) {
		return 1;
	}
	if (((*pbVar4 & 4) != 0) && (uVar2 = DRLG_L3Spawn(param_1, param_2 + 1, param_3, param_4, param_5, param_6, param_7, param_8, param_9_00), (int)uVar2 == 1)) {
		return 1;
	}
	if (((*pbVar4 & 2) != 0) && (uVar2 = DRLG_L3Spawn(param_1 + 1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9_00), (int)uVar2 == 1)) {
		return 1;
	}
	if (((*pbVar4 & 1) != 0) && (uVar2 = DRLG_L3Spawn(param_1 + -1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9_00), (int)uVar2 == 1)) {
		return 1;
	}
	if (((*pbVar4 & 0x80) != 0) && (uVar2 = DRLG_L3SpawnEdge(param_1, param_2 + -1, param_3, param_4, param_5, param_6, param_7, param_8, param_9_00), (int)uVar2 == 1)) {
		return 1;
	}
	if (((*pbVar4 & 0x40) != 0) && (uVar2 = DRLG_L3SpawnEdge(param_1, param_2 + 1, param_3, param_4, param_5, param_6, param_7, param_8, param_9_00), (int)uVar2 == 1)) {
		return 1;
	}
	if (((*pbVar4 & 0x20) != 0) && (uVar2 = DRLG_L3SpawnEdge(param_1 + 1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9_00), (int)uVar2 == 1)) {
		return 1;
	}
	if (((*pbVar4 & 0x10) != 0) && (uVar2 = DRLG_L3SpawnEdge(param_1 + -1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9_00), (int)uVar2 == 1)) {
		return 1;
	}
	return 0;
}

undefined8
DRLG_L3SpawnEdge(longlong param_1, int param_2, int *param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	byte bVar1;
	undefined8 uVar2;
	byte *pbVar3;
	int iVar4;
	undefined4 param_9_00;

	if (0x28 < *param_3) {
		return 1;
	}
	iVar4 = (int)param_1;
	if ((((iVar4 < 0) || (param_2 < 0)) || (0x27 < iVar4)) || (0x27 < param_2)) {
		return 1;
	}
	bVar1 = PTR_DAT_100f1804[iVar4 * 0x28 + param_2];
	if ((bVar1 & 0x80) != 0) {
		return 0;
	}
	if (0xf < bVar1) {
		return 1;
	}
	PTR_DAT_100f1804[iVar4 * 0x28 + param_2] = bVar1 | 0x80;
	*param_3 = *param_3 + 1;
	if (bVar1 == 8) {
		uVar2 = DRLG_L3SpawnEdge(param_1 + 1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    param_9_00);
		if ((int)uVar2 == 1) {
			return 1;
		}
		uVar2 = DRLG_L3SpawnEdge(param_1 + -1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    param_9_00);
		if ((int)uVar2 == 1) {
			return 1;
		}
		uVar2 = DRLG_L3SpawnEdge(param_1, param_2 + 1, param_3, param_4, param_5, param_6, param_7, param_8,
		    param_9_00);
		if ((int)uVar2 == 1) {
			return 1;
		}
		uVar2 = DRLG_L3SpawnEdge(param_1, param_2 + -1, param_3, param_4, param_5, param_6, param_7, param_8,
		    param_9_00);
		if ((int)uVar2 == 1) {
			return 1;
		}
	} else {
		pbVar3 = &DAT_100f8ca5 + (uint)bVar1;
		if (((*pbVar3 & 8) != 0) && (uVar2 = DRLG_L3Spawn(param_1, param_2 + -1, param_3, param_4, param_5, param_6, param_7, param_8, param_9_00), (int)uVar2 == 1)) {
			return 1;
		}
		if (((*pbVar3 & 4) != 0) && (uVar2 = DRLG_L3Spawn(param_1, param_2 + 1, param_3, param_4, param_5, param_6, param_7, param_8, param_9_00), (int)uVar2 == 1)) {
			return 1;
		}
		if (((*pbVar3 & 2) != 0) && (uVar2 = DRLG_L3Spawn(param_1 + 1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9_00), (int)uVar2 == 1)) {
			return 1;
		}
		if (((*pbVar3 & 1) != 0) && (uVar2 = DRLG_L3Spawn(param_1 + -1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9_00), (int)uVar2 == 1)) {
			return 1;
		}
	}
	return 0;
}

// WARNING: Removing unreachable block (ram,0x100332bc)
// WARNING: Removing unreachable block (ram,0x100332c4)
// WARNING: Removing unreachable block (ram,0x100332cc)
// WARNING: Removing unreachable block (ram,0x100332dc)
// WARNING: Removing unreachable block (ram,0x100332e4)
// WARNING: Removing unreachable block (ram,0x100332e8)

longlong DRLG_L3Pool(char param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	byte bVar1;
	int iVar2;
	longlong lVar3;
	ulonglong uVar4;
	undefined8 uVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	undefined uVar10;
	longlong lVar9;
	undefined uVar12;
	int iVar11;
	int iVar13;
	longlong lVar14;
	longlong lVar15;
	longlong lVar16;
	longlong lVar17;
	ulonglong uVar18;
	ulonglong uVar19;
	ulonglong uVar20;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	lVar15 = (longlong)param_8;
	lVar14 = (longlong)param_7;
	lVar7 = (longlong)param_6;
	lVar3 = (longlong)param_5;
	lVar9 = (longlong)param_4;
	lVar8 = (longlong)param_3;
	lVar6 = (longlong)param_1;
	uVar4 = ZEXT48(register0x0000000c);
	uVar20 = ZEXT48(PTR_DAT_100f1804);
	lVar16 = 0;
	uVar18 = uVar20;
	do {
		iVar2 = (int)lVar16;
		lVar17 = 0;
		uVar19 = uVar18;
		do {
			uVar12 = (undefined)lVar3;
			uVar10 = (undefined)lVar9;
			if (*(char *)uVar19 == '\b') {
				*(char *)uVar19 = -0x78;
				if ((int)(lVar17 + 1) < 0x28) {
					lVar8 = uVar4 - 0x28;
					uVar5 = DRLG_L3SpawnEdge(lVar17 + 1, iVar2, (int *)lVar8, uVar10, uVar12, (char)lVar7, (char)lVar14,
					    (char)lVar15, in_stack_ffffffa8);
					iVar11 = (int)uVar5;
				} else {
					iVar11 = 1;
				}
				if ((lVar17 + -1 < 1) || (iVar11 != 0)) {
					iVar11 = 1;
				} else {
					lVar8 = uVar4 - 0x28;
					uVar5 = DRLG_L3SpawnEdge(lVar17 + -1, iVar2, (int *)lVar8, uVar10, uVar12, (char)lVar7, (char)lVar14, (char)lVar15, in_stack_ffffffa8);
					iVar11 = (int)uVar5;
				}
				if ((iVar2 + 1 < 0x28) && (iVar11 == 0)) {
					lVar8 = uVar4 - 0x28;
					uVar5 = DRLG_L3SpawnEdge(lVar17, iVar2 + 1, (int *)lVar8, uVar10, uVar12, (char)lVar7, (char)lVar14,
					    (char)lVar15, in_stack_ffffffa8);
					iVar11 = (int)uVar5;
				} else {
					iVar11 = 1;
				}
				if ((0 < lVar16 + -1) && (iVar11 == 0)) {
					lVar8 = uVar4 - 0x28;
					DRLG_L3SpawnEdge(lVar17, iVar2 + -1, (int *)lVar8, uVar10, uVar12, (char)lVar7, (char)lVar14,
					    (char)lVar15, in_stack_ffffffa8);
				}
				lVar6 = random(0, 100, (char)lVar8, uVar10, uVar12, (char)lVar7, (char)lVar14, (char)lVar15,
				    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
				lVar3 = lVar16 + -1;
				lVar9 = uVar20 + lVar3;
				while (iVar11 = (int)lVar3, iVar11 < iVar2 + 1) {
					lVar7 = lVar17 + -1;
					lVar8 = lVar9 + lVar7 * 0x28;
					while (iVar13 = (int)lVar7, iVar13 < (int)lVar17 + 1) {
						bVar1 = *(byte *)lVar8;
						if (((((bVar1 & 0x80) != 0) && (-1 < iVar11)) && (iVar11 < 0x28)) && ((-1 < iVar13 && (iVar13 < 0x28)))) {
							*(byte *)lVar8 = bVar1 & 0x7f;
						}
						lVar8 = lVar8 + 0x28;
						lVar7 = lVar7 + 1;
					}
					lVar9 = lVar9 + 1;
					lVar3 = lVar3 + 1;
				}
			}
			lVar17 = lVar17 + 1;
			uVar19 = uVar19 + 0x28;
		} while ((int)lVar17 < 0x28);
		lVar16 = lVar16 + 1;
		uVar18 = uVar18 + 1;
	} while ((int)lVar16 < 0x28);
	return lVar6;
}

void DRLG_L3PoolFix(void)

{
	char *pcVar1;
	char *pcVar2;
	int iVar3;
	longlong lVar4;

	iVar3 = 0;
	pcVar2 = PTR_DAT_100f1804;
	do {
		lVar4 = 0x28;
		pcVar1 = pcVar2;
		do {
			if (((((((*pcVar1 == '\b') && (0x18 < (byte)pcVar1[-0x29])) && ((byte)pcVar1[-0x29] < 0x2a))
			          && ((0x18 < (byte)pcVar1[-0x28] && ((byte)pcVar1[-0x28] < 0x2a))))
			         && ((0x18 < (byte)pcVar1[-0x27] && (((byte)pcVar1[-0x27] < 0x2a && (0x18 < (byte)pcVar1[-1]))))))
			        && ((byte)pcVar1[-1] < 0x2a))
			    && ((((0x18 < (byte)pcVar1[1] && ((byte)pcVar1[1] < 0x2a)) && (0x18 < (byte)pcVar1[0x27])) && ((((byte)pcVar1[0x27] < 0x2a && (0x18 < (byte)pcVar1[0x28])) && (((byte)pcVar1[0x28] < 0x2a && ((0x18 < (byte)pcVar1[0x29] && ((byte)pcVar1[0x29] < 0x2a)))))))))) {
				*pcVar1 = '!';
			}
			pcVar1 = pcVar1 + 0x28;
			lVar4 = lVar4 + -1;
		} while (lVar4 != 0);
		iVar3 = iVar3 + 1;
		pcVar2 = pcVar2 + 1;
	} while (iVar3 < 0x28);
	return;
}

undefined8
DRLG_L3PlaceMiniSet(longlong param_1, longlong param_2, longlong param_3, int param_4, int param_5, int param_6,
    int param_7, char param_8, undefined4 param_9, undefined param_10, undefined4 param_11,
    undefined4 param_12)

{
	byte bVar1;
	byte bVar2;
	int *piVar3;
	ulonglong uVar4;
	longlong lVar5;
	longlong lVar6;
	int iVar7;
	longlong lVar8;
	undefined uVar9;
	undefined uVar10;
	longlong lVar11;
	ulonglong uVar12;
	undefined uVar14;
	longlong lVar13;
	longlong lVar15;
	longlong lVar16;
	int iVar17;
	int iVar18;
	ulonglong uVar19;
	ulonglong uVar20;
	longlong lVar21;
	longlong lVar22;
	int iVar23;
	longlong unaff_r28;
	longlong unaff_r31;
	ulonglong uVar24;
	undefined4 in_stack_ffffff78;
	undefined in_stack_ffffff7f;
	undefined in_stack_ffffff8b;

	iVar17 = (int)param_2;
	lVar15 = (longlong)param_8;
	lVar13 = (longlong)param_7;
	uVar12 = SEXT48(param_6);
	lVar11 = (longlong)param_5;
	lVar8 = (longlong)param_4;
	uVar4 = ZEXT48(&toc);
	uVar19 = ZEXT48(PTR_DAT_100f1abc);
	uVar20 = ZEXT48(PTR_DAT_100f1804);
	bVar1 = *(byte *)param_1;
	bVar2 = ((byte *)param_1)[1];
	if (param_3 - param_2 == 0) {
		iVar17 = 1;
	} else {
		lVar16 = random(0, param_3 - param_2, (char)param_3, (char)param_4, (char)param_5,
		    (char)param_6, (char)param_7, param_8, in_stack_ffffff78, in_stack_ffffff7f,
		    in_stack_ffffff8b);
		iVar17 = iVar17 + (int)lVar16;
	}
	lVar21 = 0x28 - (ulonglong)bVar1;
	lVar16 = (longlong)(int)(uint)bVar2 * (longlong)(int)(uint)bVar1 + 2;
	lVar22 = 0x28 - (ulonglong)bVar2;
	iVar18 = 0;
	while (true) {
		uVar10 = (undefined)lVar8;
		if (iVar17 <= iVar18) {
			iVar17 = (int)uVar4;
			if (param_6 == 1) {
				piVar3 = *(int **)(iVar17 + -0x77b4);
				**(int **)(iVar17 + -0x77b0) = (int)unaff_r31 * 2 + 0x11;
				*piVar3 = (int)unaff_r28 * 2 + 0x13;
			}
			if (param_7 == 0) {
				piVar3 = *(int **)(iVar17 + -0x7520);
				**(int **)(iVar17 + -0x751c) = (int)unaff_r31 * 2 + 0x11;
				*piVar3 = (int)unaff_r28 * 2 + 0x13;
			}
			return 0;
		}
		unaff_r31 = random(0, lVar21, (char)param_3, uVar10, (char)lVar11, (char)uVar12, (char)lVar13,
		    (char)lVar15, in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8b);
		unaff_r28 = random(0, lVar22, (char)param_3, uVar10, (char)lVar11, (char)uVar12, (char)lVar13,
		    (char)lVar15, in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8b);
		lVar8 = 0;
		iVar23 = 0;
		while (true) {
			uVar14 = (undefined)lVar13;
			uVar10 = (undefined)lVar11;
			if (((int)lVar8 != 0) || (199 < iVar23))
				break;
			iVar23 = iVar23 + 1;
			lVar8 = 1;
			uVar9 = 1;
			if (((param_4 != -1) && ((int)(param_4 - (uint)bVar1) <= (int)unaff_r31)) && ((int)unaff_r31 <= param_4 + 0xc)) {
				unaff_r31 = random(0, lVar21, (char)param_3, 1, uVar10, (char)uVar12, uVar14, (char)lVar15,
				    in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8b);
				unaff_r28 = random(0, lVar22, (char)param_3, uVar9, uVar10, (char)uVar12, uVar14,
				    (char)lVar15, in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8b);
				lVar8 = 0;
			}
			uVar9 = (undefined)lVar8;
			if (((param_5 != -1) && ((int)(param_5 - (uint)bVar2) <= (int)unaff_r28)) && ((int)unaff_r28 <= param_5 + 0xc)) {
				unaff_r31 = random(0, lVar21, (char)param_3, uVar9, uVar10, (char)uVar12, uVar14,
				    (char)lVar15, in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8b);
				unaff_r28 = random(0, lVar22, (char)param_3, uVar9, uVar10, (char)uVar12, uVar14,
				    (char)lVar15, in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8b);
				lVar8 = 0;
			}
			lVar6 = uVar20 + unaff_r28;
			lVar5 = uVar19 + unaff_r28;
			lVar11 = param_1 + 2;
			lVar13 = 0;
			while (((int)lVar13 < (int)(uint)bVar2 && ((int)lVar8 == 1))) {
				param_3 = 0;
				while ((iVar7 = (int)param_3, iVar7 < (int)(uint)bVar1 && ((int)lVar8 == 1))) {
					if ((*(byte *)lVar11 != 0) && (uVar12 = (ulonglong) * (byte *)((int)lVar6 + ((int)unaff_r31 + iVar7) * 0x28), (ulonglong) * (byte *)lVar11 != uVar12)) {
						lVar8 = 0;
					}
					if (*(char *)((int)lVar5 + ((int)unaff_r31 + iVar7) * 0x28) != '\0') {
						lVar8 = 0;
					}
					lVar11 = lVar11 + 1;
					param_3 = param_3 + 1;
				}
				lVar6 = lVar6 + 1;
				lVar5 = lVar5 + 1;
				lVar13 = lVar13 + 1;
			}
			if (((int)lVar8 == 0) && (unaff_r31 = unaff_r31 + 1, (int)unaff_r31 == (int)lVar21)) {
				unaff_r28 = unaff_r28 + 1;
				unaff_r31 = 0;
				if ((int)unaff_r28 == (int)lVar22) {
					unaff_r28 = 0;
				}
			}
		}
		if (199 < iVar23)
			break;
		lVar5 = uVar20 + unaff_r28;
		uVar12 = 0;
		lVar6 = lVar16;
		while ((int)uVar12 < (int)(uint)bVar2) {
			lVar8 = param_1 + lVar6;
			param_3 = 0;
			uVar24 = (ulonglong)bVar1;
			if (bVar1 != 0) {
				do {
					if (*(char *)lVar8 != '\0') {
						lVar11 = (unaff_r31 + param_3) * 0x28;
						*(char *)((int)lVar5 + (int)lVar11) = *(char *)lVar8;
					}
					lVar6 = lVar6 + 1;
					lVar8 = lVar8 + 1;
					param_3 = param_3 + 1;
					uVar24 = uVar24 - 1;
				} while (uVar24 != 0);
			}
			lVar5 = lVar5 + 1;
			uVar12 = uVar12 + 1;
		}
		iVar18 = iVar18 + 1;
	}
	return 1;
}

void DRLG_L3PlaceRndSet(byte *param_1, int param_2, undefined param_3, undefined param_4, char param_5,
    char param_6, undefined param_7, char param_8, undefined4 param_9)

{
	byte bVar1;
	byte bVar2;
	byte bVar3;
	bool bVar4;
	int iVar5;
	byte *pbVar6;
	ulonglong uVar7;
	int iVar8;
	ulonglong uVar9;
	longlong lVar10;
	int iVar11;
	longlong lVar12;
	longlong lVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	ulonglong uVar17;
	ulonglong uVar18;
	ulonglong uVar19;
	ulonglong uVar20;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;

	lVar13 = (longlong)param_8;
	lVar10 = (longlong)param_6;
	uVar9 = SEXT18(param_5);
	uVar18 = ZEXT48(PTR_DAT_100f1804);
	uVar17 = ZEXT48(PTR_DAT_100f1abc);
	iVar14 = 0;
	bVar1 = *param_1;
	bVar2 = param_1[1];
	iVar5 = (uint)bVar2 * (uint)bVar1;
	iVar16 = iVar5 + 2;
	while (iVar14 < (int)(0x28 - (uint)bVar2)) {
		iVar15 = 0;
		uVar19 = uVar18;
		while (iVar15 < (int)(0x28 - (uint)bVar1)) {
			pbVar6 = param_1 + 2;
			bVar4 = true;
			lVar12 = 0;
			uVar7 = uVar18;
			uVar20 = uVar17;
			while (((int)lVar12 < (int)(uint)bVar2 && (bVar4))) {
				lVar10 = 0;
				while ((iVar11 = (int)lVar10, iVar11 < (int)(uint)bVar1 && (bVar4))) {
					uVar9 = (ulonglong)*pbVar6;
					if ((*pbVar6 != 0) && (uVar9 != (ulonglong) * (byte *)((int)uVar7 + (iVar15 + iVar11) * 0x28))) {
						bVar4 = false;
					}
					if (*(char *)((int)uVar20 + (iVar15 + iVar11) * 0x28) != '\0') {
						bVar4 = false;
					}
					pbVar6 = pbVar6 + 1;
					lVar10 = lVar10 + 1;
				}
				uVar7 = uVar7 + 1;
				uVar20 = uVar20 + 1;
				lVar12 = lVar12 + 1;
			}
			if (((0x53 < param_1[iVar5 + 2]) && (param_1[iVar16] < 0x65)) && (bVar4)) {
				iVar11 = (int)uVar19;
				bVar3 = *(byte *)(iVar11 + -0x28);
				if ((0x53 < bVar3) && (bVar3 < 0x65)) {
					bVar4 = false;
				}
				if ((0x53 < *(byte *)(iVar11 + 0x28)) && (bVar3 < 0x65)) {
					bVar4 = false;
				}
				if ((0x53 < *(byte *)(iVar11 + 1)) && (bVar3 < 0x65)) {
					bVar4 = false;
				}
				if ((0x53 < *(byte *)(iVar11 + -1)) && (bVar3 < 0x65)) {
					bVar4 = false;
				}
			}
			if ((bVar4) && (lVar12 = random(0, 100, (char)uVar7, (char)uVar20, (char)uVar9, (char)lVar10, (char)lVar12, (char)lVar13, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab), (int)lVar12 < param_2)) {
				iVar8 = 0;
				uVar7 = uVar18;
				iVar11 = iVar16;
				while (iVar8 < (int)(uint)bVar2) {
					pbVar6 = param_1 + iVar11;
					uVar9 = 0;
					uVar20 = (ulonglong)bVar1;
					if (bVar1 != 0) {
						do {
							if (*pbVar6 != 0) {
								*(byte *)((int)uVar7 + (iVar15 + (int)uVar9) * 0x28) = *pbVar6;
							}
							iVar11 = iVar11 + 1;
							pbVar6 = pbVar6 + 1;
							uVar9 = uVar9 + 1;
							uVar20 = uVar20 - 1;
						} while (uVar20 != 0);
					}
					uVar7 = uVar7 + 1;
					iVar8 = iVar8 + 1;
				}
			}
			uVar19 = uVar19 + 0x28;
			iVar15 = iVar15 + 1;
		}
		uVar18 = uVar18 + 1;
		uVar17 = uVar17 + 1;
		iVar14 = iVar14 + 1;
	}
	return;
}

undefined8 WoodVertU(int param_1, int param_2)

{
	char cVar1;

	param_1 = param_1 * 0x28;
	if (((0x98 < (byte)PTR_DAT_100f1804[param_2 + param_1 + 0x28]) || ((byte)PTR_DAT_100f1804[param_2 + param_1 + 0x28] < 0x82)) && ((0x98 < (byte)PTR_DAT_100f1804[param_2 + param_1 + -0x28] || ((byte)PTR_DAT_100f1804[param_2 + param_1 + -0x28] < 0x82)))) {
		cVar1 = PTR_DAT_100f1804[param_1 + param_2];
		if (cVar1 == '\a') {
			return 1;
		}
		if (cVar1 == '\n') {
			return 1;
		}
		if (cVar1 == '~') {
			return 1;
		}
		if (cVar1 == -0x7f) {
			return 1;
		}
		if (cVar1 == -0x7a) {
			return 1;
		}
		if (cVar1 == -0x78) {
			return 1;
		}
	}
	return 0;
}

undefined8 WoodVertD(int param_1, int param_2)

{
	char cVar1;

	param_1 = param_1 * 0x28;
	if (((0x98 < (byte)PTR_DAT_100f1804[param_2 + param_1 + 0x28]) || ((byte)PTR_DAT_100f1804[param_2 + param_1 + 0x28] < 0x82)) && ((0x98 < (byte)PTR_DAT_100f1804[param_2 + param_1 + -0x28] || ((byte)PTR_DAT_100f1804[param_2 + param_1 + -0x28] < 0x82)))) {
		cVar1 = PTR_DAT_100f1804[param_1 + param_2];
		if (cVar1 == '\a') {
			return 1;
		}
		if (cVar1 == '\x02') {
			return 1;
		}
		if (cVar1 == -0x7a) {
			return 1;
		}
		if (cVar1 == -0x78) {
			return 1;
		}
	}
	return 0;
}

undefined8 WoodHorizL(int param_1, int param_2)

{
	char cVar1;

	param_1 = param_1 * 0x28;
	if (((0x98 < (byte)PTR_DAT_100f1804[param_2 + param_1 + 1]) || ((byte)PTR_DAT_100f1804[param_2 + param_1 + 1] < 0x82)) && ((0x98 < (byte)PTR_DAT_100f1804[param_2 + param_1 + -1] || ((byte)PTR_DAT_100f1804[param_2 + param_1 + -1] < 0x82)))) {
		cVar1 = PTR_DAT_100f1804[param_1 + param_2];
		if (cVar1 == '\a') {
			return 1;
		}
		if (cVar1 == '\t') {
			return 1;
		}
		if (cVar1 == 'y') {
			return 1;
		}
		if (cVar1 == '|') {
			return 1;
		}
		if (cVar1 == -0x79) {
			return 1;
		}
		if (cVar1 == -0x77) {
			return 1;
		}
	}
	return 0;
}

undefined8 WoodHorizR(int param_1, int param_2)

{
	char cVar1;

	param_1 = param_1 * 0x28;
	if (((0x98 < (byte)PTR_DAT_100f1804[param_2 + param_1 + 1]) || ((byte)PTR_DAT_100f1804[param_2 + param_1 + 1] < 0x82)) && ((0x98 < (byte)PTR_DAT_100f1804[param_2 + param_1 + -1] || ((byte)PTR_DAT_100f1804[param_2 + param_1 + -1] < 0x82)))) {
		cVar1 = PTR_DAT_100f1804[param_1 + param_2];
		if (cVar1 == '\a') {
			return 1;
		}
		if (cVar1 == '\x04') {
			return 1;
		}
		if (cVar1 == -0x79) {
			return 1;
		}
		if (cVar1 == -0x77) {
			return 1;
		}
	}
	return 0;
}

void AddFenceDoors(void)

{
	byte *pbVar1;
	byte *pbVar2;
	byte *pbVar3;
	int iVar4;
	longlong lVar5;

	iVar4 = 0;
	pbVar3 = PTR_DAT_100f1804;
	do {
		lVar5 = 0x14;
		pbVar2 = pbVar3;
		do {
			if ((((*pbVar2 == 7) && (pbVar2[-0x28] < 0x99)) && (0x81 < pbVar2[-0x28])) && ((pbVar2[0x28] < 0x99 && (0x81 < pbVar2[0x28])))) {
				*pbVar2 = 0x92;
			} else {
				if (((*pbVar2 == 7) && ((pbVar2[-1] < 0x99 && (0x81 < pbVar2[-1])))) && ((pbVar2[1] < 0x99 && (0x81 < pbVar2[1])))) {
					*pbVar2 = 0x93;
				}
			}
			pbVar1 = pbVar2 + 0x28;
			if ((((*pbVar1 == 7) && (*pbVar2 < 0x99)) && (0x81 < *pbVar2)) && ((pbVar2[0x50] < 0x99 && (0x81 < pbVar2[0x50])))) {
				*pbVar1 = 0x92;
			} else {
				if ((((*pbVar1 == 7) && ((pbVar2[0x27] < 0x99 && (0x81 < pbVar2[0x27])))) && (pbVar2[0x29] < 0x99)) && (0x81 < pbVar2[0x29])) {
					*pbVar1 = 0x93;
				}
			}
			pbVar2 = pbVar2 + 0x50;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		pbVar3 = pbVar3 + 1;
	} while (iVar4 < 0x28);
	return;
}

void FenceDoorFix(void)

{
	char cVar1;
	char cVar2;
	char cVar3;
	char *pcVar4;
	char *pcVar5;
	int iVar6;
	longlong lVar7;

	iVar6 = 0;
	pcVar5 = PTR_DAT_100f1804;
	do {
		lVar7 = 0x28;
		pcVar4 = pcVar5;
		do {
			cVar1 = *pcVar4;
			if ((cVar1 == -0x6e) && ((((0x98 < (byte)pcVar4[0x28] || ((byte)pcVar4[0x28] < 0x82)) || (0x98 < (byte)pcVar4[-0x28])) || ((byte)pcVar4[-0x28] < 0x82)))) {
				*pcVar4 = '\a';
			} else {
				if (((((cVar1 == -0x6e) && (cVar2 = pcVar4[0x28], cVar2 != -0x7e)) && (cVar3 = pcVar4[-0x28], cVar3 != -0x7e)) && (((cVar2 != -0x7c && (cVar3 != -0x7c)) && (((cVar2 != -0x7b && (((cVar3 != -0x7b && (cVar2 != -0x7a)) && (cVar3 != -0x7a)))) && ((cVar2 != -0x78 && (cVar3 != -0x78)))))))) && ((cVar2 != -0x76 && (((cVar3 != -0x76 && (cVar2 != -0x74)) && (cVar3 != -0x74)))))) {
					*pcVar4 = '\a';
				} else {
					if ((cVar1 == -0x6d) && ((((0x98 < (byte)pcVar4[1] || ((byte)pcVar4[1] < 0x82)) || (0x98 < (byte)pcVar4[-1])) || ((byte)pcVar4[-1] < 0x82)))) {
						*pcVar4 = '\a';
					} else {
						if ((((cVar1 == -0x6d) && (cVar1 = pcVar4[1], cVar1 != -0x7d)) && ((cVar2 = pcVar4[-1], cVar2 != -0x7d && ((cVar1 != -0x7c && (cVar2 != -0x7c)))))) && ((cVar1 != -0x7b && ((((((cVar2 != -0x7b && (cVar1 != -0x79)) && (cVar2 != -0x79)) && ((cVar1 != -0x77 && (cVar2 != -0x77)))) && ((cVar1 != -0x76 && ((cVar2 != -0x76 && (cVar1 != -0x75)))))) && (cVar2 != -0x75)))))) {
							*pcVar4 = '\a';
						}
					}
				}
			}
			pcVar4 = pcVar4 + 0x28;
			lVar7 = lVar7 + -1;
		} while (lVar7 != 0);
		iVar6 = iVar6 + 1;
		pcVar5 = pcVar5 + 1;
	} while (iVar6 < 0x28);
	return;
}

void DRLG_L3Wood(undefined param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	longlong lVar1;
	longlong lVar2;
	undefined8 uVar3;
	longlong lVar4;
	int iVar5;
	int iVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	longlong lVar15;
	longlong lVar16;
	int iVar17;
	ulonglong uVar18;
	longlong lVar19;
	ulonglong uVar20;
	char *pcVar22;
	ulonglong uVar21;
	ulonglong uVar23;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;

	lVar12 = (longlong)param_8;
	lVar11 = (longlong)param_7;
	lVar10 = (longlong)param_6;
	lVar9 = (longlong)param_5;
	lVar8 = (longlong)param_4;
	lVar7 = (longlong)param_3;
	uVar18 = ZEXT48(PTR_DAT_100f1804);
	lVar16 = 0;
	uVar20 = uVar18;
	do {
		lVar14 = 0;
		lVar13 = 0;
		uVar21 = uVar20;
		uVar23 = uVar18;
		do {
			pcVar22 = (char *)uVar21;
			if ((*pcVar22 == '\n') && (lVar1 = random(0, 2, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab), (int)lVar1 != 0)) {
				lVar2 = uVar20 + lVar13;
				lVar1 = lVar14;
				while (*(char *)lVar2 == '\n') {
					lVar2 = lVar2 + 0x28;
					lVar1 = lVar1 + 1;
				}
				if (0 < (lVar1 + -1) - lVar14) {
					lVar2 = lVar14 + 1;
					lVar19 = uVar20 + lVar2 * 0x28;
					*pcVar22 = '\x7f';
					while (iVar17 = (int)(lVar1 + -1), (int)lVar2 < iVar17) {
						lVar15 = random(0, 2, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, (char)lVar11,
						    (char)lVar12, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
						if ((int)lVar15 == 0) {
							*(undefined *)lVar19 = 0x81;
						} else {
							*(undefined *)lVar19 = 0x7e;
						}
						lVar19 = lVar19 + 0x28;
						lVar2 = lVar2 + 1;
					}
					*(undefined *)((int)uVar20 + iVar17 * 0x28) = 0x80;
				}
			}
			if ((*pcVar22 == '\t') && (lVar1 = random(0, 2, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab), (int)lVar1 != 0)) {
				lVar2 = uVar23 + lVar16;
				lVar1 = lVar16;
				while (*(char *)lVar2 == '\t') {
					lVar2 = lVar2 + 1;
					lVar1 = lVar1 + 1;
				}
				if (0 < (lVar1 + -1) - lVar16) {
					lVar19 = lVar16 + uVar23;
					*pcVar22 = '{';
					lVar2 = lVar16;
					while (true) {
						lVar19 = lVar19 + 1;
						lVar2 = lVar2 + 1;
						iVar17 = (int)(lVar1 + -1);
						if (iVar17 <= (int)lVar2)
							break;
						lVar15 = random(0, 2, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, (char)lVar11,
						    (char)lVar12, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
						if ((int)lVar15 == 0) {
							*(undefined *)lVar19 = 0x7c;
						} else {
							*(undefined *)lVar19 = 0x79;
						}
					}
					*(undefined *)((int)uVar23 + iVar17) = 0x7a;
				}
			}
			if ((((*pcVar22 == '\v') && (pcVar22[0x28] == '\n')) && (pcVar22[1] == '\t')) && (lVar1 = random(0, 2, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab), (int)lVar1 != 0)) {
				lVar2 = lVar14 + 1;
				lVar19 = uVar20 + lVar2 * 0x28;
				*pcVar22 = '}';
				lVar1 = lVar19;
				while (*(char *)lVar1 == '\n') {
					lVar1 = lVar1 + 0x28;
					lVar2 = lVar2 + 1;
				}
				iVar17 = (int)lVar2 + -1;
				lVar1 = lVar14;
				while (lVar1 = lVar1 + 1, (int)lVar1 < iVar17) {
					lVar2 = random(0, 2, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, (char)lVar11,
					    (char)lVar12, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
					if ((int)lVar2 == 0) {
						*(undefined *)lVar19 = 0x81;
					} else {
						*(undefined *)lVar19 = 0x7e;
					}
					lVar19 = lVar19 + 0x28;
				}
				lVar19 = lVar16 + uVar23 + 1;
				*(undefined *)((int)uVar20 + iVar17 * 0x28) = 0x80;
				lVar2 = lVar19;
				lVar1 = lVar16;
				while (lVar15 = lVar16, *(char *)lVar2 == '\t') {
					lVar2 = lVar2 + 1;
					lVar1 = lVar1 + 1;
				}
				while (true) {
					if ((int)lVar1 <= (int)(lVar15 + 1))
						break;
					lVar2 = random(0, 2, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, (char)lVar11,
					    (char)lVar12, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
					if ((int)lVar2 == 0) {
						*(undefined *)lVar19 = 0x7c;
					} else {
						*(undefined *)lVar19 = 0x79;
					}
					lVar19 = lVar19 + 1;
					lVar15 = lVar15 + 1;
				}
				*(undefined *)((int)uVar23 + (int)lVar1) = 0x7a;
			}
			lVar14 = lVar14 + 1;
			uVar23 = uVar23 + 0x28;
			lVar13 = lVar13 + 0x28;
			uVar21 = uVar21 + 0x28;
		} while ((int)lVar14 < 0x27);
		lVar16 = lVar16 + 1;
		uVar20 = uVar20 + 1;
	} while ((int)lVar16 < 0x27);
	lVar16 = 0;
	uVar20 = uVar18;
	do {
		lVar13 = 0;
		uVar21 = uVar18;
		uVar23 = uVar20;
		do {
			if ((*(char *)uVar23 == '\a') && (lVar14 = random(0, 1, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab), (int)lVar14 == 0)) {
				iVar17 = (int)lVar13;
				iVar5 = (int)lVar16;
				uVar3 = SkipThemeRoom(iVar17, iVar5);
				if ((int)uVar3 != 0) {
					lVar1 = random(0, 2, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, (char)lVar11,
					    (char)lVar12, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
					lVar14 = lVar16;
					if (lVar1 == 0) {
						while (true) {
							iVar6 = (int)lVar14;
							uVar3 = WoodVertU(iVar17, iVar6);
							lVar2 = lVar16;
							if ((int)uVar3 == 0)
								break;
							lVar14 = lVar14 + -1;
						}
						while (true) {
							uVar3 = WoodVertD(iVar17, (int)lVar2);
							if ((int)uVar3 == 0)
								break;
							lVar2 = lVar2 + 1;
						}
						lVar15 = lVar14 + 1;
						lVar19 = (lVar2 + -1) - lVar15;
						if ((1 < (int)lVar19) && (*(char *)((int)uVar21 + (int)lVar2 + -1) != '\a' && *(char *)((int)uVar21 + iVar6 + 1) != '\a')) {
							lVar19 = random(0, lVar19 + -1, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10,
							    (char)lVar11, (char)lVar12, in_stack_ffffff98, in_stack_ffffff9f,
							    in_stack_ffffffab);
							lVar14 = lVar14 + uVar21;
							while (true) {
								lVar14 = lVar14 + 1;
								if ((int)(lVar2 + -1) < (int)lVar15)
									break;
								if ((int)lVar15 != iVar6 + (int)lVar19 + 2) {
									pcVar22 = (char *)lVar14;
									if (*pcVar22 == '\a') {
										lVar4 = random(0, 2, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10,
										    (char)lVar11, (char)lVar12, in_stack_ffffff98,
										    in_stack_ffffff9f, in_stack_ffffffab);
										if ((int)lVar4 == 0) {
											*pcVar22 = -0x77;
										} else {
											*pcVar22 = -0x79;
										}
									}
									if (*pcVar22 == '\n') {
										*pcVar22 = -0x7d;
									}
									if (*pcVar22 == '~') {
										*pcVar22 = -0x7b;
									}
									if (*pcVar22 == -0x7f) {
										*pcVar22 = -0x7b;
									}
									if (*pcVar22 == '\x02') {
										*pcVar22 = -0x75;
									}
									if (*pcVar22 == -0x7a) {
										*pcVar22 = -0x76;
									}
									if (*pcVar22 == -0x78) {
										*pcVar22 = -0x76;
									}
								}
								lVar15 = lVar15 + 1;
							}
						}
					}
					lVar14 = lVar13;
					if ((int)lVar1 == 1) {
						while (true) {
							uVar3 = WoodHorizL((int)lVar14, iVar5);
							lVar1 = lVar13;
							if ((int)uVar3 == 0)
								break;
							lVar14 = lVar14 + -1;
						}
						while (true) {
							uVar3 = WoodHorizR((int)lVar1, iVar5);
							if ((int)uVar3 == 0)
								break;
							lVar1 = lVar1 + 1;
						}
						lVar19 = uVar20 + (lVar14 + 1) * 0x28;
						lVar15 = lVar14 + 1;
						lVar2 = (lVar1 + -1) - lVar15;
						if ((1 < (int)lVar2) && (*(char *)((int)uVar20 + ((int)lVar1 + -1) * 0x28) != '\a' && *(char *)lVar19 != '\a')) {
							lVar2 = random(0, lVar2 + -1, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10,
							    (char)lVar11, (char)lVar12, in_stack_ffffff98, in_stack_ffffff9f,
							    in_stack_ffffffab);
							while ((int)lVar15 <= (int)(lVar1 + -1)) {
								if ((int)lVar15 != (int)lVar14 + (int)lVar2 + 2) {
									pcVar22 = (char *)lVar19;
									if (*pcVar22 == '\a') {
										lVar4 = random(0, 2, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10,
										    (char)lVar11, (char)lVar12, in_stack_ffffff98,
										    in_stack_ffffff9f, in_stack_ffffffab);
										if ((int)lVar4 == 0) {
											*pcVar22 = -0x78;
										} else {
											*pcVar22 = -0x7a;
										}
									}
									if (*pcVar22 == '\t') {
										*pcVar22 = -0x7e;
									}
									if (*pcVar22 == 'y') {
										*pcVar22 = -0x7c;
									}
									if (*pcVar22 == '|') {
										*pcVar22 = -0x7c;
									}
									if (*pcVar22 == '\x04') {
										*pcVar22 = -0x74;
									}
									if (*pcVar22 == -0x79) {
										*pcVar22 = -0x76;
									}
									if (*pcVar22 == -0x77) {
										*pcVar22 = -0x76;
									}
								}
								lVar19 = lVar19 + 0x28;
								lVar15 = lVar15 + 1;
							}
						}
					}
				}
			}
			lVar13 = lVar13 + 1;
			uVar21 = uVar21 + 0x28;
			uVar23 = uVar23 + 0x28;
		} while ((int)lVar13 < 0x28);
		lVar16 = lVar16 + 1;
		uVar20 = uVar20 + 1;
	} while ((int)lVar16 < 0x28);
	AddFenceDoors();
	FenceDoorFix();
	return;
}

undefined8
DRLG_L3Anvil(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	uint *puVar2;
	uint *puVar3;
	bool bVar4;
	byte bVar5;
	byte bVar6;
	undefined **ppuVar7;
	longlong lVar8;
	longlong lVar9;
	undefined8 uVar10;
	char *pcVar11;
	longlong lVar12;
	char *pcVar13;
	longlong lVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	ulonglong uVar18;
	ulonglong uVar19;
	ulonglong uVar20;
	uint uVar21;
	ulonglong uVar22;
	uint uVar23;
	int iVar24;
	longlong lVar25;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	bVar6 = bRam100f8ba3;
	bVar5 = DAT_100f8ba2;
	ppuVar7 = &toc;
	uVar18 = ZEXT48(PTR_DAT_100f1abc);
	uVar19 = ZEXT48(PTR_DAT_100f1804);
	uVar22 = (ulonglong)DAT_100f8ba2;
	uVar20 = (ulonglong)bRam100f8ba3;
	lVar25 = 0x28 - uVar22;
	lVar8 = random(0, lVar25, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8,
	    in_stack_ffffffaf, in_stack_ffffffbb);
	lVar9 = random(0, 0x28 - uVar20, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
	bVar4 = false;
	iVar16 = 0;
	while (true) {
		uVar23 = (uint)bVar5;
		uVar21 = (uint)bVar6;
		iVar24 = (int)lVar8;
		if ((bVar4) || (199 < iVar16))
			break;
		pcVar11 = (char *)0x100f8ba4;
		lVar12 = uVar19 + lVar9;
		lVar14 = uVar18 + lVar9;
		iVar16 = iVar16 + 1;
		bVar4 = true;
		iVar17 = 0;
		while ((iVar17 < (int)uVar21 && (bVar4))) {
			iVar15 = 0;
			pcVar13 = pcVar11;
			while ((iVar15 < (int)uVar23 && (bVar4))) {
				if ((*pcVar13 != '\0') && (*pcVar13 != *(char *)((int)lVar12 + (iVar24 + iVar15) * 0x28))) {
					bVar4 = false;
				}
				if (*(char *)((int)lVar14 + (iVar24 + iVar15) * 0x28) != '\0') {
					bVar4 = false;
				}
				pcVar13 = pcVar13 + 1;
				pcVar11 = pcVar11 + 1;
				iVar15 = iVar15 + 1;
			}
			lVar12 = lVar12 + 1;
			lVar14 = lVar14 + 1;
			iVar17 = iVar17 + 1;
		}
		if ((!bVar4) && (lVar8 = lVar8 + 1, (int)lVar8 == (int)lVar25)) {
			lVar9 = lVar9 + 1;
			lVar8 = 0;
			if ((int)lVar9 == (int)(0x28 - uVar20)) {
				lVar9 = 0;
			}
		}
	}
	if (iVar16 < 200) {
		lVar8 = uVar19 + lVar9;
		lVar25 = uVar18 + lVar9;
		pcVar11 = (char *)(uVar21 * uVar23 + 0x100f8ba4);
		iVar16 = 0;
		while (iVar16 < (int)uVar21) {
			iVar17 = 0;
			uVar18 = uVar22;
			pcVar13 = pcVar11;
			if (bVar5 != 0) {
				do {
					if (*pcVar11 != '\0') {
						*(char *)((int)lVar8 + (iVar24 + iVar17) * 0x28) = *pcVar11;
					}
					pcVar11 = pcVar11 + 1;
					iVar15 = (iVar24 + iVar17) * 0x28;
					pcVar13 = pcVar13 + 1;
					iVar17 = iVar17 + 1;
					*(byte *)((int)lVar25 + iVar15) = *(byte *)((int)lVar25 + iVar15) | 0x80;
					uVar18 = uVar18 - 1;
				} while (uVar18 != 0);
			}
			pcVar11 = pcVar13;
			lVar8 = lVar8 + 1;
			lVar25 = lVar25 + 1;
			iVar16 = iVar16 + 1;
		}
		uVar10 = 0;
		puVar1 = (undefined4 *)ppuVar7[-0x1d54];
		*(int *)ppuVar7[-0x1d53] = iVar24;
		puVar2 = (uint *)ppuVar7[-0x1d55];
		*puVar1 = (int)lVar9;
		puVar3 = (uint *)ppuVar7[-0x1d56];
		*puVar2 = uVar23;
		*puVar3 = uVar21;
	} else {
		uVar10 = 1;
	}
	return uVar10;
}

void FixL3Warp(void)

{
	undefined *puVar1;
	char *pcVar2;
	undefined *puVar3;
	char *pcVar4;
	int iVar5;
	int iVar6;
	longlong lVar7;

	puVar1 = PTR_DAT_100f1804;
	iVar6 = 0;
	pcVar4 = PTR_DAT_100f1804;
	do {
		lVar7 = 0x28;
		iVar5 = 0;
		pcVar2 = pcVar4;
		do {
			if ((((*pcVar2 == '}') && (pcVar2[0x28] == '}')) && (pcVar2[1] == '}')) && (pcVar2[0x29] == '}')) {
				puVar3 = puVar1 + iVar6 + iVar5 * 0x28;
				puVar1[iVar5 * 0x28 + iVar6] = 0x9c;
				puVar3[0x28] = 0x9b;
				puVar3[1] = 0x99;
				puVar3[0x29] = 0x9a;
				return;
			}
			if ((*pcVar2 == '\x05') && (pcVar2[0x29] == '\a')) {
				*pcVar2 = '\a';
			}
			pcVar2 = pcVar2 + 0x28;
			iVar5 = iVar5 + 1;
			lVar7 = lVar7 + -1;
		} while (lVar7 != 0);
		iVar6 = iVar6 + 1;
		pcVar4 = pcVar4 + 1;
		if (0x27 < iVar6) {
			return;
		}
	} while (true);
}

void FixL3HallofHeroes(void)

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
		lVar5 = 4;
		pcVar1 = pcVar2;
		do {
			if ((*pcVar1 == '\x05') && (pcVar1[0x29] == '\a')) {
				*pcVar1 = '\a';
			}
			if ((pcVar1[0x28] == '\x05') && (pcVar1[0x51] == '\a')) {
				pcVar1[0x28] = '\a';
			}
			if ((pcVar1[0x50] == '\x05') && (pcVar1[0x79] == '\a')) {
				pcVar1[0x50] = '\a';
			}
			if ((pcVar1[0x78] == '\x05') && (pcVar1[0xa1] == '\a')) {
				pcVar1[0x78] = '\a';
			}
			if ((pcVar1[0xa0] == '\x05') && (pcVar1[0xc9] == '\a')) {
				pcVar1[0xa0] = '\a';
			}
			if ((pcVar1[200] == '\x05') && (pcVar1[0xf1] == '\a')) {
				pcVar1[200] = '\a';
			}
			if ((pcVar1[0xf0] == '\x05') && (pcVar1[0x119] == '\a')) {
				pcVar1[0xf0] = '\a';
			}
			if ((pcVar1[0x118] == '\x05') && (pcVar1[0x141] == '\a')) {
				pcVar1[0x118] = '\a';
			}
			if ((pcVar1[0x140] == '\x05') && (pcVar1[0x169] == '\a')) {
				pcVar1[0x140] = '\a';
			}
			if ((pcVar1[0x168] == '\x05') && (pcVar1[0x191] == '\a')) {
				pcVar1[0x168] = '\a';
			}
			pcVar1 = pcVar1 + 400;
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
			if (((*pcVar2 == '\x05') && (pcVar2[0x29] == '\f')) && (pcVar2[0x28] == '\a')) {
				*pcVar2 = '\a';
				pcVar2[1] = '\a';
				pcVar2[0x29] = '\a';
			}
			if (((*pcVar2 == '\x05') && (pcVar2[0x29] == '\f')) && (pcVar2[1] == '\a')) {
				*pcVar2 = '\a';
				pcVar2[0x28] = '\a';
				pcVar2[0x29] = '\a';
			}
			pcVar1 = pcVar2 + 0x28;
			if (((*pcVar1 == '\x05') && (pcVar2[0x51] == '\f')) && (pcVar2[0x50] == '\a')) {
				*pcVar1 = '\a';
				pcVar2[0x29] = '\a';
				pcVar2[0x51] = '\a';
			}
			if (((*pcVar1 == '\x05') && (pcVar2[0x51] == '\f')) && (pcVar2[0x29] == '\a')) {
				*pcVar1 = '\a';
				pcVar2[0x50] = '\a';
				pcVar2[0x51] = '\a';
			}
			pcVar2 = pcVar2 + 0x50;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		pcVar3 = pcVar3 + 1;
	} while (iVar4 < 0x28);
	return;
}

void DRLG_L3LockRec(int param_1, int param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	longlong lVar3;
	longlong lVar4;
	uint *puVar7;
	longlong lVar5;
	char *pcVar8;
	longlong lVar6;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	int *piVar12;
	longlong lVar13;
	ulonglong uVar14;
	ulonglong uVar15;
	longlong lVar16;
	ulonglong uVar17;
	undefined4 in_stack_ffffffa8;

	puVar2 = PTR_DAT_100f1cc0;
	lVar13 = (longlong)param_8;
	lVar11 = (longlong)param_7;
	lVar10 = (longlong)param_6;
	lVar6 = (longlong)param_5;
	lVar9 = (longlong)param_4;
	lVar3 = (longlong)param_3;
	uVar15 = SEXT48(param_2);
	uVar14 = SEXT48(param_1);
	uVar17 = ZEXT48(PTR_DAT_100f1cc4);
	lVar16 = 0;
	lVar4 = DiabloAllocPtr(24000);
	do {
		if (0 < (int)lVar16) {
			lVar16 = lVar16 + -1;
			puVar7 = (uint *)((int)lVar4 + (int)lVar16 * 0xc);
			uVar14 = (ulonglong)*puVar7;
			uVar15 = (ulonglong)puVar7[1];
		}
		lVar5 = uVar17 + uVar14 * 0x28 + uVar15;
		lVar5._7_1_ = (undefined)lVar5;
		pcVar8 = (char *)lVar5;
		if (*pcVar8 != '\0') {
			lVar9 = lVar16 + 1;
			*pcVar8 = '\0';
			lVar6 = lVar16 + 2;
			lVar3 = lVar16 + 3;
			piVar12 = (int *)((int)lVar4 + (int)lVar16 * 0xc);
			iVar1 = (int)uVar14;
			*(int *)puVar2 = *(int *)puVar2 + 1;
			lVar16 = lVar16 + 4;
			*piVar12 = iVar1 + 1;
			piVar12[1] = (int)uVar15;
			lVar11 = lVar4 + lVar9 * 0xc;
			piVar12[2] = 4;
			piVar12 = (int *)lVar11;
			*piVar12 = iVar1 + -1;
			lVar9 = uVar15 + 1;
			lVar10 = lVar4 + lVar6 * 0xc;
			lVar5._7_1_ = (undefined)(uVar15 - 1);
			piVar12[1] = (int)uVar15;
			lVar6 = 3;
			piVar12[2] = 3;
			piVar12 = (int *)lVar10;
			*piVar12 = iVar1;
			lVar13 = lVar4 + lVar3 * 0xc;
			piVar12[1] = (int)lVar9;
			lVar3 = 2;
			piVar12[2] = 2;
			piVar12 = (int *)lVar13;
			*piVar12 = iVar1;
			piVar12[1] = (int)(uVar15 - 1);
			piVar12[2] = 1;
		}
	} while (0 < (int)lVar16);
	mem_free_dbg(lVar4, (undefined)lVar5, (char)lVar3, (char)lVar9, (char)lVar6, (char)lVar10, (char)lVar11,
	    (char)lVar13, in_stack_ffffffa8);
	return;
}

ulonglong DRLG_L3Lockout(int param_1, int param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	char cVar1;
	undefined *puVar2;
	char *pcVar4;
	ulonglong uVar3;
	undefined *puVar6;
	ulonglong uVar5;
	ulonglong uVar7;
	ulonglong uVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	longlong lVar12;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_DAT_100f1cc0;
	iVar10 = 0;
	uVar7 = ZEXT48(PTR_DAT_100f1804);
	iVar11 = 0;
	uVar8 = ZEXT48(PTR_DAT_100f1cc4);
	do {
		lVar12 = 5;
		iVar9 = 0;
		uVar3 = uVar7;
		uVar5 = uVar8;
		do {
			pcVar4 = (char *)uVar3;
			puVar6 = (undefined *)uVar5;
			if (*pcVar4 == '\0') {
				*puVar6 = 0;
			} else {
				*puVar6 = 1;
				iVar11 = iVar11 + 1;
				param_2 = iVar10;
				param_1 = iVar9;
			}
			if (pcVar4[0x28] == '\0') {
				puVar6[0x28] = 0;
			} else {
				puVar6[0x28] = 1;
				iVar11 = iVar11 + 1;
				param_2 = iVar10;
				param_1 = iVar9 + 1;
			}
			if (pcVar4[0x50] == '\0') {
				puVar6[0x50] = 0;
			} else {
				puVar6[0x50] = 1;
				iVar11 = iVar11 + 1;
				param_2 = iVar10;
				param_1 = iVar9 + 2;
			}
			if (pcVar4[0x78] == '\0') {
				puVar6[0x78] = 0;
			} else {
				puVar6[0x78] = 1;
				iVar11 = iVar11 + 1;
				param_2 = iVar10;
				param_1 = iVar9 + 3;
			}
			if (pcVar4[0xa0] == '\0') {
				puVar6[0xa0] = 0;
			} else {
				puVar6[0xa0] = 1;
				iVar11 = iVar11 + 1;
				param_2 = iVar10;
				param_1 = iVar9 + 4;
			}
			if (pcVar4[200] == '\0') {
				puVar6[200] = 0;
			} else {
				puVar6[200] = 1;
				iVar11 = iVar11 + 1;
				param_2 = iVar10;
				param_1 = iVar9 + 5;
			}
			if (pcVar4[0xf0] == '\0') {
				puVar6[0xf0] = 0;
			} else {
				puVar6[0xf0] = 1;
				iVar11 = iVar11 + 1;
				param_2 = iVar10;
				param_1 = iVar9 + 6;
			}
			cVar1 = pcVar4[0x118];
			if (cVar1 == '\0') {
				puVar6[0x118] = 0;
			} else {
				puVar6[0x118] = 1;
				iVar11 = iVar11 + 1;
				param_2 = iVar10;
				param_1 = iVar9 + 7;
			}
			uVar3 = uVar3 + 0x140;
			uVar5 = uVar5 + 0x140;
			iVar9 = iVar9 + 8;
			lVar12 = lVar12 + -1;
		} while (lVar12 != 0);
		iVar10 = iVar10 + 1;
		uVar8 = uVar8 + 1;
		uVar7 = uVar7 + 1;
	} while (iVar10 < 0x28);
	*(undefined4 *)puVar2 = 0;
	DRLG_L3LockRec(param_1, param_2, 1, cVar1, (char)uVar3, (char)uVar5, (char)uVar7, (char)uVar8,
	    in_stack_ffffffc8);
	return (ulonglong)(iVar11 == *(int *)puVar2);
}

void DRLG_L3(int param_1, char param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	longlong lVar3;
	longlong lVar4;
	undefined8 uVar5;
	undefined uVar8;
	ulonglong uVar6;
	undefined uVar9;
	undefined *puVar7;
	undefined uVar10;
	ulonglong uVar11;
	undefined *puVar12;
	undefined uVar13;
	undefined uVar14;
	char cVar15;
	longlong lVar16;
	longlong lVar17;
	undefined uVar18;
	longlong lVar19;
	undefined uVar20;
	longlong lVar21;
	undefined uVar22;
	ulonglong uVar23;
	longlong lVar24;
	int iVar25;
	undefined *puVar26;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined in_stack_ffffff9b;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;

	puVar2 = PTR_DAT_100f1820;
	puVar12 = PTR_DAT_100f181c;
	puVar26 = PTR_DAT_100f1804;
	puVar7 = PTR_DAT_100f17ec;
	lVar21 = (longlong)param_8;
	lVar19 = (longlong)param_7;
	lVar17 = (longlong)param_6;
	lVar16 = (longlong)param_5;
	lVar3 = (longlong)param_4;
	lVar4 = (longlong)param_3;
	uVar23 = SEXT18(param_2);
	uVar6 = SEXT48(param_1);
	uVar11 = ZEXT48(&toc);
	DAT_100f40d8 = 0;
	do {
		do {
			do {
				uVar8 = (undefined)lVar4;
				uVar13 = (undefined)lVar3;
				InitL3Dungeon((char)uVar6, (char)uVar23, uVar8, uVar13, (char)lVar16, (char)lVar17, (char)lVar19,
				    (char)lVar21, in_stack_ffffff88);
				lVar3 = random(0, 0x14, uVar8, uVar13, (char)lVar16, (char)lVar17, (char)lVar19, (char)lVar21, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b);
				lVar24 = lVar3 + 10;
				lVar4 = random(0, 0x14, uVar8, uVar13, (char)lVar16, (char)lVar17, (char)lVar19, (char)lVar21, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b);
				uVar23 = lVar4 + 10;
				DRLG_L3FillRoom((int)lVar24, (int)uVar23, (int)(lVar3 + 0xc), (int)(lVar4 + 0xc), (char)lVar16,
				    (char)lVar17, (char)lVar19, (char)lVar21, in_stack_ffffff88);
				DRLG_L3CreateBlock(lVar24, uVar23, 2, 0, (char)lVar16, (char)lVar17, (char)lVar19, (char)lVar21,
				    in_stack_ffffff88);
				DRLG_L3CreateBlock(lVar3 + 0xc, uVar23, 2, 1, (char)lVar16, (char)lVar17, (char)lVar19, (char)lVar21,
				    in_stack_ffffff88);
				DRLG_L3CreateBlock(lVar24, lVar4 + 0xc, 2, 2, (char)lVar16, (char)lVar17, (char)lVar19, (char)lVar21,
				    in_stack_ffffff88);
				lVar4 = 2;
				lVar3 = 3;
				DRLG_L3CreateBlock(lVar24, uVar23, 2, 3, (char)lVar16, (char)lVar17, (char)lVar19, (char)lVar21,
				    in_stack_ffffff88);
				uVar5 = QuestStatus(10);
				uVar8 = (undefined)uVar5;
				uVar14 = (undefined)lVar3;
				uVar13 = (undefined)lVar4;
				if ((int)uVar5 != 0) {
					lVar24 = random(0, 10, uVar13, uVar14, (char)lVar16, (char)lVar17, (char)lVar19,
					    (char)lVar21, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b);
					lVar3 = random(0, 10, uVar13, uVar14, (char)lVar16, (char)lVar17, (char)lVar19,
					    (char)lVar21, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b);
					uVar23 = lVar3 + 10;
					lVar4 = lVar24 + 0x16;
					lVar3 = lVar3 + 0x16;
					uVar8 = DRLG_L3FloorArea(lVar24 + 10, (int)uVar23, lVar4, (int)lVar3);
				}
				DRLG_L3FillDiags(uVar8, (char)uVar23, (char)lVar4, (char)lVar3, (char)lVar16, (char)lVar17,
				    (char)lVar19, (char)lVar21, in_stack_ffffff88);
				uVar8 = DRLG_L3FillSingles();
				uVar8 = DRLG_L3FillStraights(uVar8, (char)uVar23, (char)lVar4, (char)lVar3, (char)lVar16, (char)lVar17,
				    (char)lVar19, (char)lVar21, in_stack_ffffff88);
				DRLG_L3FillDiags(uVar8, (char)uVar23, (char)lVar4, (char)lVar3, (char)lVar16, (char)lVar17,
				    (char)lVar19, (char)lVar21, in_stack_ffffff88);
				DRLG_L3Edges();
				lVar24 = DRLG_L3GetFloorArea();
				if ((int)lVar24 < 600) {
					uVar6 = 0;
				} else {
					uVar6 = DRLG_L3Lockout((int)lVar24, (int)uVar23, (char)lVar4, (char)lVar3, (char)lVar16,
					    (char)lVar17, (char)lVar19, (char)lVar21, in_stack_ffffff88);
				}
			} while ((int)uVar6 == 0);
			DRLG_L3MakeMegas((char)uVar6, (char)uVar23, (char)lVar4, (char)lVar3, (char)lVar16, (char)lVar17,
			    (char)lVar19, (char)lVar21, in_stack_ffffff88);
			uVar8 = (undefined)lVar21;
			if (param_1 == 0) {
				uVar23 = 1;
				lVar4 = 1;
				lVar3 = -1;
				lVar16 = -1;
				lVar17 = 1;
				lVar19 = 0;
				uVar6 = DRLG_L3PlaceMiniSet(ZEXT48(&DAT_100f89cc), 1, 1, -1, -1, 1, 0, uVar8, in_stack_ffffff88,
				    in_stack_ffffff8f, in_stack_ffffffac, in_stack_ffffffb0);
				if (uVar6 == 0) {
					uVar23 = 1;
					lVar4 = 1;
					lVar3 = -1;
					lVar16 = -1;
					lVar17 = 0;
					lVar19 = 1;
					uVar6 = DRLG_L3PlaceMiniSet(ZEXT48(&DAT_100f89e0), 1, 1, -1, -1, 0, 1, (char)lVar21, in_stack_ffffff88,
					    in_stack_ffffff8f, in_stack_ffffffac, in_stack_ffffffb0);
				}
				iVar25 = (int)uVar6;
				if ((iVar25 == 0) && (*puVar7 == '\t')) {
					uVar23 = 1;
					lVar4 = 1;
					lVar3 = -1;
					lVar16 = -1;
					lVar17 = 0;
					lVar19 = 6;
					uVar6 = DRLG_L3PlaceMiniSet(ZEXT48(&DAT_100f89f4), 1, 1, -1, -1, 0, 6, (char)lVar21, in_stack_ffffff88,
					    in_stack_ffffff8f, in_stack_ffffffac, in_stack_ffffffb0);
					iVar25 = (int)uVar6;
				}
			} else {
				if (param_1 == 1) {
					uVar23 = 1;
					lVar4 = 1;
					lVar3 = -1;
					lVar16 = -1;
					lVar17 = 0;
					lVar19 = 0;
					uVar6 = DRLG_L3PlaceMiniSet(ZEXT48(&DAT_100f89cc), 1, 1, -1, -1, 0, 0, uVar8, in_stack_ffffff88,
					    in_stack_ffffff8f, in_stack_ffffffac, in_stack_ffffffb0);
					iVar25 = (int)uVar6;
					if (uVar6 == 0) {
						lVar4 = 1;
						lVar3 = -1;
						lVar16 = -1;
						lVar17 = 1;
						lVar19 = 1;
						uVar5 = DRLG_L3PlaceMiniSet(ZEXT48(&DAT_100f89e0), 1, 1, -1, -1, 1, 1, (char)lVar21, in_stack_ffffff88,
						    in_stack_ffffff8f, in_stack_ffffffac, in_stack_ffffffb0);
						iVar25 = (int)uVar5;
						uVar1 = *(uint *)puVar2;
						uVar23 = (ulonglong)uVar1;
						*(uint *)puVar2 = uVar1 + 2;
						uVar1 = *(uint *)puVar12;
						uVar6 = (ulonglong)uVar1;
						*(uint *)puVar12 = uVar1 - 2;
					}
					if ((iVar25 == 0) && (*puVar7 == '\t')) {
						uVar23 = 1;
						lVar4 = 1;
						lVar3 = -1;
						lVar16 = -1;
						lVar17 = 0;
						lVar19 = 6;
						uVar6 = DRLG_L3PlaceMiniSet(ZEXT48(&DAT_100f89f4), 1, 1, -1, -1, 0, 6, (char)lVar21, in_stack_ffffff88,
						    in_stack_ffffff8f, in_stack_ffffffac, in_stack_ffffffb0);
						iVar25 = (int)uVar6;
					}
				} else {
					uVar23 = 1;
					lVar4 = 1;
					lVar3 = -1;
					lVar16 = -1;
					lVar17 = 0;
					lVar19 = 0;
					uVar6 = DRLG_L3PlaceMiniSet(ZEXT48(&DAT_100f89cc), 1, 1, -1, -1, 0, 0, uVar8, in_stack_ffffff88,
					    in_stack_ffffff8f, in_stack_ffffffac, in_stack_ffffffb0);
					if (uVar6 == 0) {
						uVar23 = 1;
						lVar4 = 1;
						lVar3 = -1;
						lVar16 = -1;
						lVar17 = 0;
						lVar19 = 1;
						uVar6 = DRLG_L3PlaceMiniSet(ZEXT48(&DAT_100f89e0), 1, 1, -1, -1, 0, 1, (char)lVar21, in_stack_ffffff88,
						    in_stack_ffffff8f, in_stack_ffffffac, in_stack_ffffffb0);
					}
					iVar25 = (int)uVar6;
					if ((iVar25 == 0) && (*puVar7 == '\t')) {
						uVar23 = 1;
						lVar4 = 1;
						lVar3 = -1;
						lVar16 = -1;
						lVar17 = 1;
						lVar19 = 6;
						uVar6 = DRLG_L3PlaceMiniSet(ZEXT48(&DAT_100f89f4), 1, 1, -1, -1, 1, 6, (char)lVar21, in_stack_ffffff88,
						    in_stack_ffffff8f, in_stack_ffffffac, in_stack_ffffffb0);
						iVar25 = (int)uVar6;
					}
				}
			}
			if ((iVar25 == 0) && (uVar6 = QuestStatus(10), (int)uVar6 != 0)) {
				uVar6 = DRLG_L3Anvil((char)uVar6, (char)uVar23, (char)lVar4, (char)lVar3, (char)lVar16,
				    (char)lVar17, (char)lVar19, (char)lVar21, in_stack_ffffff88);
				iVar25 = (int)uVar6;
			}
		} while (iVar25 == 1);
		uVar6 = DRLG_L3Pool((char)uVar6, (char)uVar23, (char)lVar4, (char)lVar3, (char)lVar16, (char)lVar17,
		    (char)lVar19, (char)lVar21, in_stack_ffffff88);
		uVar22 = (undefined)lVar21;
		uVar20 = (undefined)lVar19;
		uVar18 = (undefined)lVar17;
		uVar14 = (undefined)lVar16;
		uVar13 = (undefined)lVar3;
		uVar8 = (undefined)lVar4;
		iVar25 = (int)uVar11;
	} while (*(char *)(iVar25 + -0x4ef8) == '\0');
	DRLG_L3PoolFix();
	FixL3Warp();
	DRLG_L3PlaceRndSet(&DAT_100f8b60, 0x46, uVar8, uVar13, uVar14, uVar18, uVar20, uVar22, in_stack_ffffff88);
	DRLG_L3PlaceRndSet(&DAT_100f8b6e, 0x46, uVar8, uVar13, uVar14, uVar18, uVar20, uVar22, in_stack_ffffff88);
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x454), 0x1e, uVar8, uVar13, uVar14, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x446), 0x1e, uVar8, uVar13, uVar14, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	DRLG_L3PlaceRndSet(&DAT_100f8b60, 100, uVar8, uVar13, uVar14, uVar18, uVar20, uVar22, in_stack_ffffff88);
	DRLG_L3PlaceRndSet(&DAT_100f8b6e, 100, uVar8, uVar13, uVar14, uVar18, uVar20, uVar22, in_stack_ffffff88);
	uVar10 = 0x5a;
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x438), 0x5a, uVar8, uVar13, uVar14, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	uVar9 = FixL3HallofHeroes();
	DRLG_L3River(uVar9, uVar10, uVar8, uVar13, uVar14, uVar18, uVar20, uVar22, in_stack_ffffff88);
	uVar5 = QuestStatus(10);
	if ((int)uVar5 != 0) {
		puVar7 = puVar26 + **(int **)(iVar25 + -0x7550) + **(int **)(iVar25 + -0x754c) * 0x28;
		puVar7[0x11d] = 7;
		puVar7[0x145] = 7;
		puVar7[0x16d] = 7;
		if ((puVar7[0x195] == '\x11') || (puVar7[0x195] == '\x12')) {
			puVar7[0x195] = 0x2d;
		}
	}
	uVar13 = 10;
	uVar14 = 7;
	uVar9 = 0;
	uVar10 = 0;
	uVar8 = DRLG_PlaceThemeRooms(5, 10, 7, 0, 0, uVar18, uVar20, uVar22, in_stack_ffffff88);
	DRLG_L3Wood(uVar8, uVar13, uVar14, uVar9, uVar10, uVar18, uVar20, uVar22, in_stack_ffffff88);
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x5c8), 10, uVar14, uVar9, uVar10, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x5a6), 10, uVar14, uVar9, uVar10, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x584), 10, uVar14, uVar9, uVar10, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x562), 0x14, uVar14, uVar9, uVar10, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x538), 0x14, uVar14, uVar9, uVar10, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x50e), 0x14, uVar14, uVar9, uVar10, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x4fa), 0x14, uVar14, uVar9, uVar10, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x4e6), 0x14, uVar14, uVar9, uVar10, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x4d2), 0x1e, uVar14, uVar9, uVar10, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x4be), 0x14, uVar14, uVar9, uVar10, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x4b8), 0x14, uVar14, uVar9, uVar10, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x4b2), 0x1e, uVar14, uVar9, uVar10, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x4ac), 0x1e, uVar14, uVar9, uVar10, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x4a6), 0x1e, uVar14, uVar9, uVar10, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x4a0), 0x1e, uVar14, uVar9, uVar10, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x49a), 0x1e, uVar14, uVar9, uVar10, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x494), 0x1e, uVar14, uVar9, uVar10, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x48e), 0x1e, uVar14, uVar9, uVar10, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x488), 0x1e, uVar14, uVar9, uVar10, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x482), 0x1e, uVar14, uVar9, uVar10, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x47c), 0x1e, uVar14, uVar9, uVar10, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x476), 0x1e, uVar14, uVar9, uVar10, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x4f10), 0x19, uVar14, uVar9, uVar10, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x4f0c), 0x19, uVar14, uVar9, uVar10, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x4f08), 0x19, uVar14, uVar9, uVar10, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x4f04), 0x19, uVar14, uVar9, uVar10, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	uVar13 = 0x19;
	uVar8 = DRLG_L3PlaceRndSet((byte *)(iVar25 + -0x4f00), 0x19, uVar14, uVar9, uVar10, uVar18, uVar20, uVar22,
	    in_stack_ffffff88);
	uVar11 = (ulonglong) * (uint *)(iVar25 + -0x7540);
	lVar3 = 0x14;
	cVar15 = '\0';
	do {
		puVar12 = (undefined *)uVar11;
		*puVar12 = *puVar26;
		puVar12[0x28] = puVar26[0x28];
		puVar12[0x50] = puVar26[0x50];
		puVar12[0x78] = puVar26[0x78];
		puVar12[0xa0] = puVar26[0xa0];
		puVar12[200] = puVar26[200];
		puVar12[0xf0] = puVar26[0xf0];
		puVar12[0x118] = puVar26[0x118];
		puVar12[0x140] = puVar26[0x140];
		puVar12[0x168] = puVar26[0x168];
		puVar12[400] = puVar26[400];
		puVar12[0x1b8] = puVar26[0x1b8];
		puVar12[0x1e0] = puVar26[0x1e0];
		puVar12[0x208] = puVar26[0x208];
		puVar12[0x230] = puVar26[0x230];
		puVar12[600] = puVar26[600];
		puVar12[0x280] = puVar26[0x280];
		puVar12[0x2a8] = puVar26[0x2a8];
		puVar12[0x2d0] = puVar26[0x2d0];
		puVar12[0x2f8] = puVar26[0x2f8];
		puVar12[800] = puVar26[800];
		puVar12[0x348] = puVar26[0x348];
		puVar12[0x370] = puVar26[0x370];
		puVar12[0x398] = puVar26[0x398];
		puVar12[0x3c0] = puVar26[0x3c0];
		puVar12[1000] = puVar26[1000];
		puVar12[0x410] = puVar26[0x410];
		puVar12[0x438] = puVar26[0x438];
		puVar12[0x460] = puVar26[0x460];
		puVar12[0x488] = puVar26[0x488];
		puVar12[0x4b0] = puVar26[0x4b0];
		puVar12[0x4d8] = puVar26[0x4d8];
		puVar12[0x500] = puVar26[0x500];
		puVar12[0x528] = puVar26[0x528];
		puVar12[0x550] = puVar26[0x550];
		puVar12[0x578] = puVar26[0x578];
		puVar12[0x5a0] = puVar26[0x5a0];
		puVar12[0x5c8] = puVar26[0x5c8];
		puVar12[0x5f0] = puVar26[0x5f0];
		puVar12[0x618] = puVar26[0x618];
		cVar15 = cVar15 + '\x01';
		puVar12[1] = puVar26[1];
		puVar12[0x29] = puVar26[0x29];
		puVar12[0x51] = puVar26[0x51];
		puVar12[0x79] = puVar26[0x79];
		puVar12[0xa1] = puVar26[0xa1];
		puVar12[0xc9] = puVar26[0xc9];
		puVar12[0xf1] = puVar26[0xf1];
		puVar12[0x119] = puVar26[0x119];
		puVar12[0x141] = puVar26[0x141];
		puVar12[0x169] = puVar26[0x169];
		puVar12[0x191] = puVar26[0x191];
		puVar12[0x1b9] = puVar26[0x1b9];
		puVar12[0x1e1] = puVar26[0x1e1];
		puVar12[0x209] = puVar26[0x209];
		puVar12[0x231] = puVar26[0x231];
		puVar12[0x259] = puVar26[0x259];
		puVar12[0x281] = puVar26[0x281];
		puVar12[0x2a9] = puVar26[0x2a9];
		puVar12[0x2d1] = puVar26[0x2d1];
		puVar12[0x2f9] = puVar26[0x2f9];
		puVar12[0x321] = puVar26[0x321];
		puVar12[0x349] = puVar26[0x349];
		puVar12[0x371] = puVar26[0x371];
		puVar12[0x399] = puVar26[0x399];
		puVar12[0x3c1] = puVar26[0x3c1];
		puVar12[0x3e9] = puVar26[0x3e9];
		puVar12[0x411] = puVar26[0x411];
		puVar12[0x439] = puVar26[0x439];
		puVar12[0x461] = puVar26[0x461];
		puVar12[0x489] = puVar26[0x489];
		puVar12[0x4b1] = puVar26[0x4b1];
		puVar12[0x4d9] = puVar26[0x4d9];
		puVar12[0x501] = puVar26[0x501];
		puVar12[0x529] = puVar26[0x529];
		puVar12[0x551] = puVar26[0x551];
		puVar12[0x579] = puVar26[0x579];
		puVar12[0x5a1] = puVar26[0x5a1];
		puVar12[0x5c9] = puVar26[0x5c9];
		puVar12[0x5f1] = puVar26[0x5f1];
		puVar7 = puVar26 + 0x619;
		puVar26 = puVar26 + 2;
		puVar12[0x619] = *puVar7;
		uVar11 = uVar11 + 2;
		lVar3 = lVar3 + -1;
	} while (lVar3 != 0);
	DRLG_Init_Globals(uVar8, uVar13, (char)uVar11, cVar15, uVar10, uVar18, uVar20, uVar22, in_stack_ffffff88);
	return;
}

void DRLG_L3Pass3(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	short sVar6;
	longlong lVar5;
	undefined **ppuVar7;
	ulonglong uVar8;
	ulonglong uVar9;
	short sVar11;
	longlong lVar10;
	short sVar12;
	longlong lVar13;
	short sVar17;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar18;
	int iVar19;
	longlong lVar20;
	longlong lVar21;
	undefined4 in_stack_ffffffb8;

	puVar4 = PTR_DAT_100f1a64;
	puVar3 = PTR_DAT_100f1a54;
	ppuVar7 = &toc;
	uVar8 = FUN_100b8f7c((ulonglong) * (uint *)PTR_DAT_100f1a64, param_2, param_3, param_4, param_5, param_6,
	    param_7, param_8, in_stack_ffffffb8);
	iVar2 = (int)uVar8;
	sVar11 = CONCAT11(*(undefined *)(iVar2 + 0x39), *(undefined *)(iVar2 + 0x38)) + 1;
	sVar12 = CONCAT11(*(undefined *)(iVar2 + 0x3b), *(undefined *)(iVar2 + 0x3a)) + 1;
	sVar17 = CONCAT11(*(undefined *)(iVar2 + 0x3d), *(undefined *)(iVar2 + 0x3c)) + 1;
	iVar19 = 0;
	sVar6 = CONCAT11(*(undefined *)(iVar2 + 0x3f), *(undefined *)(iVar2 + 0x3e)) + 1;
	iVar18 = 0;
	do {
		lVar20 = 0xe;
		iVar14 = 0;
		do {
			*(short *)(iVar18 + *(int *)puVar3 + iVar14) = sVar11;
			*(short *)(iVar18 + *(int *)puVar3 + iVar14 + 0xe0) = sVar12;
			*(short *)(iVar18 + *(int *)puVar3 + iVar14 + 2) = sVar17;
			iVar15 = iVar14 + 0x1c0;
			*(short *)(iVar18 + *(int *)puVar3 + iVar14 + 0xe2) = sVar6;
			*(short *)(iVar18 + *(int *)puVar3 + iVar15) = sVar11;
			*(short *)(iVar18 + *(int *)puVar3 + iVar15 + 0xe0) = sVar12;
			*(short *)(iVar18 + *(int *)puVar3 + iVar15 + 2) = sVar17;
			iVar16 = iVar14 + 0x380;
			*(short *)(iVar18 + *(int *)puVar3 + iVar15 + 0xe2) = sVar6;
			*(short *)(iVar18 + *(int *)puVar3 + iVar16) = sVar11;
			*(short *)(iVar18 + *(int *)puVar3 + iVar16 + 0xe0) = sVar12;
			*(short *)(iVar18 + *(int *)puVar3 + iVar16 + 2) = sVar17;
			iVar15 = iVar14 + 0x540;
			*(short *)(iVar18 + *(int *)puVar3 + iVar16 + 0xe2) = sVar6;
			*(short *)(iVar18 + *(int *)puVar3 + iVar15) = sVar11;
			*(short *)(iVar18 + *(int *)puVar3 + iVar15 + 0xe0) = sVar12;
			*(short *)(iVar18 + *(int *)puVar3 + iVar15 + 2) = sVar17;
			iVar14 = iVar14 + 0x700;
			*(short *)(iVar18 + *(int *)puVar3 + iVar15 + 0xe2) = sVar6;
			lVar20 = lVar20 + -1;
		} while (lVar20 != 0);
		iVar19 = iVar19 + 2;
		iVar18 = iVar18 + 4;
	} while (iVar19 < 0x70);
	uVar8 = ZEXT48(ppuVar7[-0x1df3]);
	lVar13 = 0;
	lVar20 = 0x20;
	do {
		lVar21 = 0x28;
		lVar10 = 0xe00;
		uVar9 = uVar8;
		do {
			lVar5 = (ulonglong) * (byte *)uVar9 - 1;
			if (lVar5 < 0) {
				sVar6 = 0;
				sVar11 = 0;
				sVar17 = 0;
				sVar12 = 0;
			} else {
				puVar1 = (undefined *)(iVar2 + (int)lVar5 * 8);
				sVar6 = CONCAT11(puVar1[1], *puVar1) + 1;
				sVar11 = CONCAT11(puVar1[3], puVar1[2]) + 1;
				sVar17 = CONCAT11(puVar1[5], puVar1[4]) + 1;
				sVar12 = CONCAT11(puVar1[7], puVar1[6]) + 1;
			}
			uVar9 = uVar9 + 0x28;
			iVar19 = (int)lVar10;
			iVar18 = (int)lVar20;
			*(short *)(iVar18 + *(int *)puVar3 + iVar19) = sVar6;
			*(short *)(iVar18 + *(int *)puVar3 + iVar19 + 0xe0) = sVar11;
			*(short *)(iVar18 + *(int *)puVar3 + iVar19 + 2) = sVar17;
			lVar5 = (ulonglong) * (uint *)puVar3 + lVar10;
			lVar10 = lVar10 + 0x1c0;
			*(short *)(iVar18 + (int)lVar5 + 0xe2) = sVar12;
			lVar21 = lVar21 + -1;
		} while (lVar21 != 0);
		lVar13 = lVar13 + 1;
		uVar8 = uVar8 + 1;
		lVar20 = lVar20 + 4;
	} while ((int)lVar13 < 0x28);
	FUN_100b9100(*(int *)puVar4, (char)uVar9, (char)lVar10, (char)uVar8, (char)lVar20, (char)lVar13,
	    (char)lVar5, (char)sVar12, in_stack_ffffffb8);
	return;
}

void CreateL3Dungeon(undefined4 param_1, int param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	short sVar1;
	undefined4 *puVar2;
	undefined4 *puVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	undefined8 uVar6;
	ulonglong uVar7;
	undefined8 uVar8;
	undefined7 uVar9;
	undefined uVar10;
	longlong lVar11;
	undefined uVar12;
	longlong lVar13;
	undefined uVar14;
	longlong lVar15;
	undefined uVar16;
	longlong lVar17;
	longlong lVar18;
	int iVar19;
	int iVar20;
	undefined4 in_stack_ffffffb8;

	puVar4 = PTR_DAT_100f1a54;
	uVar9 = (undefined7)((ulonglong)param_5 >> 8);
	uVar10 = (undefined)param_5;
	lVar15 = (longlong)param_8;
	lVar13 = (longlong)param_7;
	lVar11 = (longlong)param_6;
	ppuVar5 = &toc;
	SetRndSeed(param_1);
	uVar8 = 0x10;
	puVar2 = (undefined4 *)ppuVar5[-0x1d4d];
	*(undefined4 *)ppuVar5[-0x1d4c] = 0x10;
	puVar3 = (undefined4 *)ppuVar5[-0x1d4e];
	uVar7 = ZEXT48(puVar3);
	*puVar2 = 0x10;
	puVar2 = (undefined4 *)ppuVar5[-0x1d4f];
	*puVar3 = 0x60;
	*puVar2 = 0x60;
	DRLG_InitTrans((char)puVar2, (char)puVar3, 0x10, (char)param_4, uVar10, (char)lVar11, (char)lVar13,
	    (char)lVar15, in_stack_ffffffb8);
	DRLG_InitSetPC();
	uVar6 = DRLG_L3(param_2, (char)uVar7, (char)uVar8, (char)param_4, uVar10, (char)lVar11,
	    (char)lVar13, (char)lVar15, in_stack_ffffffb8);
	DRLG_L3Pass3(uVar6, uVar7, uVar8, param_4, CONCAT71(uVar9, uVar10), (int)lVar11, (int)lVar13, (int)lVar15,
	    in_stack_ffffffb8);
	lVar17 = 0;
	iVar19 = 0;
	do {
		lVar18 = 0;
		iVar20 = 0;
		do {
			sVar1 = *(short *)(iVar19 + *(int *)puVar4 + iVar20);
			uVar12 = (undefined)lVar11;
			uVar14 = (undefined)lVar13;
			uVar16 = (undefined)lVar15;
			if ((sVar1 < 0x38) || (0x93 < sVar1)) {
				if ((sVar1 < 0x9a) || (0xa1 < sVar1)) {
					if (sVar1 == 0x96) {
						DoLighting(lVar18, lVar17, 7, -1, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffb8);
					} else {
						if (sVar1 == 0x98) {
							DoLighting(lVar18, lVar17, 7, -1, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffb8);
						}
					}
				} else {
					DoLighting(lVar18, lVar17, 7, -1, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffb8);
				}
			} else {
				DoLighting(lVar18, lVar17, 7, -1, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffb8);
			}
			lVar18 = lVar18 + 1;
			iVar20 = iVar20 + 0xe0;
		} while ((int)lVar18 < 0x70);
		lVar17 = lVar17 + 1;
		iVar19 = iVar19 + 2;
	} while ((int)lVar17 < 0x70);
	DRLG_SetPC();
	return;
}

void LoadL3Dungeon(longlong param_1, undefined4 param_2, undefined4 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9, undefined param_10, undefined4 param_11, undefined4 param_12)

{
	byte bVar1;
	byte bVar2;
	short sVar3;
	undefined4 *puVar4;
	undefined4 *puVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	ulonglong uVar8;
	ulonglong uVar9;
	undefined uVar10;
	undefined8 uVar11;
	char *pcVar12;
	undefined uVar13;
	undefined8 uVar14;
	longlong lVar15;
	undefined uVar16;
	ulonglong uVar17;
	int iVar19;
	longlong lVar18;
	ulonglong uVar20;
	undefined uVar21;
	ulonglong uVar22;
	undefined uVar23;
	longlong lVar24;
	undefined uVar25;
	undefined uVar26;
	undefined8 unaff_r27;
	longlong lVar27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	int iVar28;
	undefined8 unaff_r31;
	ulonglong uVar29;
	longlong lVar30;
	undefined4 in_stack_ffffffa8;
	int *local_28[5];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	puVar6 = PTR_DAT_100f1a54;
	ppuVar7 = &toc;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	InitL3Dungeon((char)param_1, (undefined)param_2, (undefined)param_3, (char)param_4, (char)param_5,
	    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffa8);
	uVar14 = 0x10;
	puVar4 = (undefined4 *)ppuVar7[-0x1d4d];
	*(undefined4 *)ppuVar7[-0x1d4c] = 0x10;
	puVar5 = (undefined4 *)ppuVar7[-0x1d4e];
	*puVar4 = 0x10;
	puVar4 = (undefined4 *)ppuVar7[-0x1d4f];
	*puVar5 = 0x60;
	*puVar4 = 0x60;
	DRLG_InitTrans((char)puVar4, (char)puVar5, 0x10, (char)param_4, (char)param_5, (char)param_6,
	    (char)param_7, (char)param_8, in_stack_ffffffa8);
	uVar11 = 0;
	uVar8 = LoadFileInMem(param_1, (undefined4 *)0x0, uVar14, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	local_28[0] = (int *)uVar8;
	uVar8 = FUN_100b8f7c(uVar8 & 0xffffffff, uVar11, uVar14, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	uVar17 = ZEXT48(ppuVar7[-0x1df3]);
	lVar24 = uVar8 + 4;
	bVar1 = *(byte *)uVar8;
	uVar20 = (ulonglong)bVar1;
	iVar19 = 0;
	bVar2 = ((byte *)uVar8)[2];
	uVar22 = (ulonglong)bVar2;
	uVar8 = uVar17;
	while (true) {
		if ((int)(uint)bVar2 <= iVar19)
			break;
		uVar9 = uVar8;
		uVar29 = uVar20;
		if (bVar1 != 0) {
			do {
				if (*(char *)lVar24 == '\0') {
					*(char *)uVar9 = '\a';
				} else {
					*(char *)uVar9 = *(char *)lVar24;
				}
				lVar24 = lVar24 + 2;
				uVar9 = uVar9 + 0x28;
				uVar29 = uVar29 - 1;
			} while (uVar29 != 0);
		}
		uVar8 = uVar8 + 1;
		iVar19 = iVar19 + 1;
	}
	lVar15 = 0;
	do {
		lVar30 = 4;
		lVar18 = 0;
		uVar8 = uVar17;
		do {
			pcVar12 = (char *)uVar8;
			if (*pcVar12 == '\0') {
				*pcVar12 = '\b';
			}
			if (pcVar12[0x28] == '\0') {
				pcVar12[0x28] = '\b';
			}
			if (pcVar12[0x50] == '\0') {
				pcVar12[0x50] = '\b';
			}
			if (pcVar12[0x78] == '\0') {
				pcVar12[0x78] = '\b';
			}
			if (pcVar12[0xa0] == '\0') {
				pcVar12[0xa0] = '\b';
			}
			if (pcVar12[200] == '\0') {
				pcVar12[200] = '\b';
			}
			if (pcVar12[0xf0] == '\0') {
				pcVar12[0xf0] = '\b';
			}
			if (pcVar12[0x118] == '\0') {
				pcVar12[0x118] = '\b';
			}
			if (pcVar12[0x140] == '\0') {
				pcVar12[0x140] = '\b';
			}
			if (pcVar12[0x168] == '\0') {
				pcVar12[0x168] = '\b';
			}
			uVar8 = uVar8 + 400;
			uVar13 = (undefined)uVar8;
			lVar18 = lVar18 + 9;
			lVar30 = lVar30 + -1;
		} while (lVar30 != 0);
		lVar15 = lVar15 + 1;
		uVar16 = (undefined)lVar15;
		uVar17 = uVar17 + 1;
	} while ((int)lVar15 < 0x28);
	ppuVar7[-0x13bd] = (undefined *)0x70;
	uVar10 = DRLG_L3Pass3(8, uVar8, lVar15, uVar17, lVar18, (uint)bVar1, (uint)bVar2, (int)lVar24,
	    in_stack_ffffffa8);
	DRLG_Init_Globals(uVar10, uVar13, uVar16, (char)uVar17, (char)lVar18, (char)uVar20, (char)uVar22, (char)lVar24, in_stack_ffffffa8);
	puVar4 = (undefined4 *)ppuVar7[-0x1ded];
	*(undefined4 *)ppuVar7[-0x1dec] = 0x1f;
	*puVar4 = 0x53;
	FUN_1006aeb8(ZEXT48(local_28[0]), 0, 0, uVar17, lVar18, (int)uVar20, (int)uVar22, (int)lVar24,
	    in_stack_ffffffa8);
	lVar15 = 0;
	uVar11 = 0;
	FUN_10083ca0(ZEXT48(local_28[0]), 0, 0, uVar17, lVar18, (int)uVar20, (int)uVar22, (int)lVar24,
	    in_stack_ffffffa8);
	lVar30 = 0;
	iVar19 = 0;
	do {
		lVar27 = 0;
		iVar28 = 0;
		do {
			sVar3 = *(short *)(iVar19 + *(int *)puVar6 + iVar28);
			uVar13 = (undefined)lVar18;
			uVar16 = (undefined)uVar20;
			uVar10 = (undefined)uVar22;
			uVar25 = (undefined)lVar24;
			if ((sVar3 < 0x38) || (0x93 < sVar3)) {
				if ((sVar3 < 0x9a) || (0xa1 < sVar3)) {
					if (sVar3 == 0x96) {
						uVar11 = 7;
						uVar17 = 0xffffffffffffffff;
						lVar15 = lVar30;
						DoLighting(lVar27, lVar30, 7, -1, uVar13, uVar16, uVar10, uVar25, in_stack_ffffffa8);
					} else {
						if (sVar3 == 0x98) {
							uVar11 = 7;
							uVar17 = 0xffffffffffffffff;
							lVar15 = lVar30;
							DoLighting(lVar27, lVar30, 7, -1, uVar13, uVar16, uVar10, uVar25, in_stack_ffffffa8);
						}
					}
				} else {
					uVar11 = 7;
					uVar17 = 0xffffffffffffffff;
					lVar15 = lVar30;
					DoLighting(lVar27, lVar30, 7, -1, uVar13, uVar16, uVar10, uVar25, in_stack_ffffffa8);
				}
			} else {
				uVar11 = 7;
				uVar17 = 0xffffffffffffffff;
				lVar15 = lVar30;
				DoLighting(lVar27, lVar30, 7, -1, uVar13, uVar16, uVar10, uVar25, in_stack_ffffffa8);
			}
			uVar26 = (undefined)lVar24;
			uVar23 = (undefined)uVar22;
			uVar21 = (undefined)uVar20;
			uVar25 = (undefined)lVar18;
			uVar10 = (undefined)uVar17;
			uVar16 = (undefined)uVar11;
			uVar13 = (undefined)lVar15;
			lVar27 = lVar27 + 1;
			iVar28 = iVar28 + 0xe0;
		} while ((int)lVar27 < 0x70);
		lVar30 = lVar30 + 1;
		iVar19 = iVar19 + 2;
	} while ((int)lVar30 < 0x70);
	FUN_100b9100((int)local_28[0], uVar13, uVar16, uVar10, uVar25, uVar21, uVar23, uVar26, in_stack_ffffffa8);
	mem_free_dbg(local_28, uVar13, uVar16, uVar10, uVar25, uVar21, uVar23, uVar26, in_stack_ffffffa8);
	return;
}

void LoadPreL3Dungeon(longlong param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9, undefined param_10, undefined4 param_11, undefined4 param_12)

{
	byte bVar1;
	undefined **ppuVar2;
	undefined uVar5;
	ulonglong uVar3;
	char *pcVar4;
	undefined8 uVar6;
	char *pcVar7;
	undefined uVar8;
	char *pcVar9;
	undefined uVar10;
	int iVar11;
	undefined uVar12;
	char cVar13;
	byte bVar14;
	longlong lVar15;
	undefined uVar16;
	longlong lVar17;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;
	int *local_18[6];

	pcVar9 = PTR_DAT_100f1804;
	ppuVar2 = &toc;
	uVar8 = SUB41(PTR_DAT_100f1804, 0);
	uVar5 = InitL3Dungeon((char)param_1, (undefined)param_2, (char)param_3, (char)param_4, (char)param_5,
	    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffb8);
	DRLG_InitTrans(uVar5, (undefined)param_2, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
	    (char)param_7, (char)param_8, in_stack_ffffffb8);
	uVar6 = 0;
	uVar3 = LoadFileInMem(param_1, (undefined4 *)0x0, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	uVar5 = (undefined)param_8;
	local_18[0] = (int *)uVar3;
	uVar3 = FUN_100b8f7c(uVar3 & 0xffffffff, uVar6, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	bVar1 = *(byte *)uVar3;
	bVar14 = ((byte *)uVar3)[2];
	lVar15 = uVar3 + 4;
	iVar11 = 0;
	pcVar7 = pcVar9;
	while (uVar16 = (undefined)lVar15, iVar11 < (int)(uint)bVar14) {
		uVar3 = (ulonglong)bVar1;
		pcVar4 = pcVar7;
		if (bVar1 != 0) {
			do {
				if (*(char *)lVar15 == '\0') {
					*pcVar4 = '\a';
				} else {
					*pcVar4 = *(char *)lVar15;
				}
				lVar15 = lVar15 + 2;
				pcVar4 = pcVar4 + 0x28;
				uVar3 = uVar3 - 1;
			} while (uVar3 != 0);
		}
		pcVar7 = pcVar7 + 1;
		iVar11 = iVar11 + 1;
	}
	lVar15 = 0;
	do {
		lVar17 = 4;
		cVar13 = '\0';
		pcVar7 = pcVar9;
		do {
			if (*pcVar7 == '\0') {
				*pcVar7 = '\b';
			}
			if (pcVar7[0x28] == '\0') {
				pcVar7[0x28] = '\b';
			}
			if (pcVar7[0x50] == '\0') {
				pcVar7[0x50] = '\b';
			}
			if (pcVar7[0x78] == '\0') {
				pcVar7[0x78] = '\b';
			}
			if (pcVar7[0xa0] == '\0') {
				pcVar7[0xa0] = '\b';
			}
			if (pcVar7[200] == '\0') {
				pcVar7[200] = '\b';
			}
			if (pcVar7[0xf0] == '\0') {
				pcVar7[0xf0] = '\b';
			}
			if (pcVar7[0x118] == '\0') {
				pcVar7[0x118] = '\b';
			}
			if (pcVar7[0x140] == '\0') {
				pcVar7[0x140] = '\b';
			}
			if (pcVar7[0x168] == '\0') {
				pcVar7[0x168] = '\b';
			}
			pcVar7 = pcVar7 + 400;
			cVar13 = cVar13 + '\t';
			lVar17 = lVar17 + -1;
		} while (lVar17 != 0);
		lVar15 = lVar15 + 1;
		uVar12 = (undefined)lVar15;
		pcVar9 = pcVar9 + 1;
	} while ((int)lVar15 < 0x28);
	uVar10 = 0x40;
	memcpy((char)ppuVar2[-0x1d50], uVar8, 0x40, uVar12, cVar13, bVar14, uVar16, uVar5,
	    (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
	FUN_100b9100((int)local_18[0], uVar8, uVar10, uVar12, cVar13, bVar14, uVar16, uVar5, in_stack_ffffffb8);
	mem_free_dbg(local_18, uVar8, uVar10, uVar12, cVar13, bVar14, uVar16, uVar5, in_stack_ffffffb8);
	return;
}
