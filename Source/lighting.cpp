
void RotateRadius(int *param_1, int *param_2, int *param_3, int *param_4, int *param_5, int *param_6,
    undefined4 *param_7, undefined4 *param_8)

{
	int iVar1;

	*param_7 = 0;
	*param_8 = 0;
	iVar1 = *param_3;
	*param_3 = 7 - *param_4;
	*param_4 = iVar1;
	iVar1 = *param_5;
	*param_5 = 7 - *param_6;
	*param_6 = iVar1;
	*param_1 = *param_3 - *param_5;
	*param_2 = *param_4 - *param_6;
	if (*param_1 < 0) {
		*param_1 = *param_1 + 8;
		*param_7 = 1;
	}
	if (-1 < *param_2) {
		return;
	}
	*param_2 = *param_2 + 8;
	*param_8 = 1;
	return;
}

void DoLighting(longlong param_1, longlong param_2, int param_3, int param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	byte *pbVar5;
	int iVar6;
	int iVar7;
	byte *pbVar8;
	int iVar9;
	undefined *puVar10;
	byte *pbVar11;
	longlong lVar12;
	longlong lVar13;
	int iVar14;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	int iVar15;
	undefined8 unaff_r26;
	int iVar16;
	undefined8 unaff_r27;
	longlong lVar17;
	undefined8 unaff_r28;
	longlong lVar18;
	undefined8 unaff_r29;
	undefined *puVar19;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int local_54;
	int local_50;
	int local_4c;
	int local_48;
	int local_44;
	int local_40;
	int local_3c;
	int local_38[5];
	undefined4 local_24;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	puVar4 = PTR_DAT_100f2138;
	puVar3 = PTR_DAT_100f1a44;
	local_24 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	local_38[0] = 0;
	local_3c = 0;
	local_48 = 0;
	local_4c = 0;
	local_50 = 0;
	local_54 = 0;
	if (-1 < param_4) {
		local_38[0] = *(int *)(PTR_DAT_100f1e90 + param_4 * 0x34 + 0x28);
		local_3c = *(int *)(PTR_DAT_100f1e90 + param_4 * 0x34 + 0x2c);
		if (local_38[0] < 0) {
			local_38[0] = local_38[0] + 8;
			param_1 = param_1 + -1;
		}
		if (local_3c < 0) {
			local_3c = local_3c + 8;
			param_2 = param_2 + -1;
		}
	}
	local_40 = local_38[0];
	local_44 = local_3c;
	if (param_1 + -0xf < 0) {
		lVar18 = param_1 + 1;
	} else {
		lVar18 = 0xf;
	}
	iVar1 = (int)param_1;
	if (iVar1 + 0xf < 0x71) {
		lVar17 = 0xf;
	} else {
		lVar17 = 0x70 - param_1;
	}
	iVar2 = (int)param_2;
	if (param_2 + -0xf < 0) {
		iVar16 = iVar2 + 1;
	} else {
		iVar16 = 0xf;
	}
	if (iVar2 + 0xf < 0x71) {
		iVar15 = 0xf;
	} else {
		iVar15 = 0x70 - iVar2;
	}
	if ((((-1 < iVar1) && (iVar1 < 0x70)) && (-1 < iVar2)) && (iVar2 < 0x70)) {
		*(undefined *)(*(int *)PTR_DAT_100f1a44 + iVar1 * 0x70 + iVar2) = 0;
	}
	pbVar8 = puVar4 + (local_38[0] + local_3c * 8) * 0x100;
	puVar19 = PTR_DAT_100f2134 + param_3 * 0x80;
	iVar14 = 0;
	while (iVar14 < iVar16) {
		iVar9 = iVar2 + iVar14;
		lVar12 = 1;
		lVar13 = lVar17 + -1;
		pbVar5 = pbVar8;
		if (1 < (int)lVar17) {
			do {
				pbVar5 = pbVar5 + 1;
				if (*pbVar5 < 0x80) {
					if (((-1 < param_1 + lVar12) && (iVar7 = (int)(param_1 + lVar12), iVar7 < 0x70)) && ((-1 < iVar9 && ((iVar9 < 0x70 && (pbVar11 = (byte *)(*(int *)puVar3 + iVar7 * 0x70 + iVar9), (int)(uint)(byte)puVar19[(uint)*pbVar5] < (int)(char)*pbVar11)))))) {
						*pbVar11 = puVar19[(uint)*pbVar5];
					}
				}
				lVar12 = lVar12 + 1;
				lVar13 = lVar13 + -1;
			} while (lVar13 != 0);
		}
		pbVar8 = pbVar8 + 0x10;
		iVar14 = iVar14 + 1;
	}
	RotateRadius(local_38, &local_3c, &local_40, &local_44, &local_48, &local_4c, &local_50, &local_54);
	iVar14 = 0;
	while (iVar14 < iVar15) {
		iVar9 = iVar1 + iVar14;
		iVar7 = 1;
		lVar13 = lVar17 + -1;
		puVar10 = puVar4 + (local_38[0] + local_3c * 8) * 0x100;
		if (1 < (int)lVar17) {
			do {
				puVar10 = puVar10 + 1;
				if ((byte)puVar10[local_50 + (iVar14 + local_54) * 0x10] < 0x80) {
					iVar6 = iVar2 - iVar7;
					if ((((-1 < iVar9) && (iVar9 < 0x70)) && (-1 < iVar6)) && ((iVar6 < 0x70 && (pbVar8 = (byte *)(*(int *)puVar3 + iVar9 * 0x70 + iVar6), (int)(uint)(byte)puVar19[(uint)(byte)puVar10[local_50 + (iVar14 + local_54) * 0x10]] < (int)(char)*pbVar8)))) {
						*pbVar8 = puVar19[(uint)(byte)puVar10[local_50 + (iVar14 + local_54) * 0x10]];
					}
				}
				iVar7 = iVar7 + 1;
				lVar13 = lVar13 + -1;
			} while (lVar13 != 0);
		}
		iVar14 = iVar14 + 1;
	}
	RotateRadius(local_38, &local_3c, &local_40, &local_44, &local_48, &local_4c, &local_50, &local_54);
	iVar14 = 0;
	while (iVar14 < iVar15) {
		iVar9 = iVar2 - iVar14;
		lVar13 = 1;
		lVar17 = lVar18 + -1;
		puVar10 = puVar4 + (local_38[0] + local_3c * 8) * 0x100;
		if (1 < (int)lVar18) {
			do {
				puVar10 = puVar10 + 1;
				if ((byte)puVar10[local_50 + (iVar14 + local_54) * 0x10] < 0x80) {
					if (((-1 < param_1 - lVar13) && (iVar7 = (int)(param_1 - lVar13), iVar7 < 0x70)) && ((-1 < iVar9 && ((iVar9 < 0x70 && (pbVar8 = (byte *)(*(int *)puVar3 + iVar7 * 0x70 + iVar9), (int)(uint)(byte)puVar19[(uint)(byte)puVar10[local_50 + (iVar14 + local_54) * 0x10]] < (int)(char)*pbVar8)))))) {
						*pbVar8 = puVar19[(uint)(byte)puVar10[local_50 + (iVar14 + local_54) * 0x10]];
					}
				}
				lVar13 = lVar13 + 1;
				lVar17 = lVar17 + -1;
			} while (lVar17 != 0);
		}
		iVar14 = iVar14 + 1;
	}
	RotateRadius(local_38, &local_3c, &local_40, &local_44, &local_48, &local_4c, &local_50, &local_54);
	iVar15 = 0;
	while (iVar15 < iVar16) {
		iVar14 = iVar1 - iVar15;
		iVar9 = 1;
		lVar17 = lVar18 + -1;
		puVar10 = puVar4 + (local_38[0] + local_3c * 8) * 0x100;
		if (1 < (int)lVar18) {
			do {
				puVar10 = puVar10 + 1;
				if ((byte)puVar10[local_50 + (iVar15 + local_54) * 0x10] < 0x80) {
					iVar7 = iVar2 + iVar9;
					if ((((-1 < iVar14) && (iVar14 < 0x70)) && (-1 < iVar7)) && ((iVar7 < 0x70 && (pbVar8 = (byte *)(*(int *)puVar3 + iVar14 * 0x70 + iVar7), (int)(uint)(byte)puVar19[(uint)(byte)puVar10[local_50 + (iVar15 + local_54) * 0x10]] < (int)(char)*pbVar8)))) {
						*pbVar8 = puVar19[(uint)(byte)puVar10[local_50 + (iVar15 + local_54) * 0x10]];
					}
				}
				iVar9 = iVar9 + 1;
				lVar17 = lVar17 + -1;
			} while (lVar17 != 0);
		}
		iVar15 = iVar15 + 1;
	}
	return;
}

void DoUnLight(longlong param_1, longlong param_2, longlong param_3)

{
	undefined *puVar1;
	undefined *puVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	int iVar7;
	longlong lVar8;
	longlong lVar9;
	int iVar10;

	puVar2 = PTR_DAT_100f1a44;
	puVar1 = PTR_DAT_100f1a40;
	lVar4 = param_2 - (param_3 + 1);
	lVar8 = param_1 - (param_3 + 1);
	iVar10 = (int)param_3 + (int)param_2 + 1;
	lVar9 = param_3 + param_1 + 1;
	if (lVar4 < 0) {
		lVar4 = 0;
	}
	if (0x70 < iVar10) {
		iVar10 = 0x70;
	}
	if ((int)lVar8 < 0) {
		lVar8 = 0;
	}
	if (0x70 < (int)lVar9) {
		lVar9 = 0x70;
	}
	while (iVar7 = (int)lVar4, iVar7 < iVar10) {
		lVar3 = lVar9 - lVar8;
		lVar5 = lVar8 * 0x70;
		lVar6 = lVar8;
		if ((int)lVar8 < (int)lVar9) {
			do {
				if ((((-1 < (int)lVar6) && ((int)lVar6 < 0x70)) && (-1 < iVar7)) && (iVar7 < 0x70)) {
					*(undefined *)(iVar7 + *(int *)puVar2 + (int)lVar5) = *(undefined *)(iVar7 + *(int *)puVar1 + (int)lVar5);
				}
				lVar5 = lVar5 + 0x70;
				lVar6 = lVar6 + 1;
				lVar3 = lVar3 + -1;
			} while (lVar3 != 0);
		}
		lVar4 = lVar4 + 1;
	}
	return;
}

void DoUnVision(longlong param_1, longlong param_2, longlong param_3)

{
	uint uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	undefined *puVar5;
	longlong lVar6;
	ulonglong uVar7;
	ulonglong uVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	int iVar12;
	longlong lVar13;

	puVar5 = PTR_DAT_100f1834;
	lVar9 = param_2 - (param_3 + 1);
	lVar6 = param_1 - (param_3 + 1);
	iVar12 = (int)param_3 + (int)param_1 + 1;
	lVar13 = param_3 + param_2 + 1;
	if (lVar9 < 0) {
		lVar9 = 0;
	}
	if (0x70 < (int)lVar13) {
		lVar13 = 0x70;
	}
	if ((int)lVar6 < 0) {
		lVar6 = 0;
	}
	if (0x70 < iVar12) {
		iVar12 = 0x70;
	}
	lVar10 = lVar6 * 0x70;
	do {
		if (iVar12 <= (int)lVar6) {
			return;
		}
		uVar8 = lVar13 - lVar9;
		if ((int)lVar9 < (int)lVar13) {
			uVar1 = (uint)uVar8 >> 3;
			uVar7 = (ulonglong)uVar1;
			iVar2 = (int)lVar10;
			lVar11 = lVar9;
			if (uVar1 != 0) {
				do {
					iVar4 = (int)lVar11;
					*(byte *)(iVar2 + *(int *)puVar5 + iVar4) = *(byte *)(iVar2 + *(int *)puVar5 + iVar4) & 0xbd;
					iVar3 = *(int *)puVar5 + iVar4 + 1;
					*(byte *)(iVar2 + iVar3) = *(byte *)(iVar2 + iVar3) & 0xbd;
					iVar3 = *(int *)puVar5 + iVar4 + 2;
					*(byte *)(iVar2 + iVar3) = *(byte *)(iVar2 + iVar3) & 0xbd;
					iVar3 = *(int *)puVar5 + iVar4 + 3;
					*(byte *)(iVar2 + iVar3) = *(byte *)(iVar2 + iVar3) & 0xbd;
					iVar3 = *(int *)puVar5 + iVar4 + 4;
					*(byte *)(iVar2 + iVar3) = *(byte *)(iVar2 + iVar3) & 0xbd;
					iVar3 = *(int *)puVar5 + iVar4 + 5;
					*(byte *)(iVar2 + iVar3) = *(byte *)(iVar2 + iVar3) & 0xbd;
					iVar3 = *(int *)puVar5 + iVar4 + 6;
					*(byte *)(iVar2 + iVar3) = *(byte *)(iVar2 + iVar3) & 0xbd;
					iVar3 = *(int *)puVar5 + iVar4 + 7;
					lVar11 = lVar11 + 8;
					*(byte *)(iVar2 + iVar3) = *(byte *)(iVar2 + iVar3) & 0xbd;
					uVar7 = uVar7 - 1;
				} while (uVar7 != 0);
				uVar8 = uVar8 & 7;
				if (uVar8 == 0)
					goto LAB_100b9bcc;
			}
			do {
				iVar3 = *(int *)puVar5 + (int)lVar11;
				*(byte *)(iVar2 + iVar3) = *(byte *)(iVar2 + iVar3) & 0xbd;
				uVar8 = uVar8 - 1;
				lVar11 = lVar11 + 1;
			} while (uVar8 != 0);
		}
	LAB_100b9bcc:
		lVar10 = lVar10 + 0x70;
		lVar6 = lVar6 + 1;
	} while (true);
}

void DoVision(longlong param_1, longlong param_2, int param_3, int param_4, int param_5, char param_6, char param_7, char param_8, undefined4 param_9, undefined param_10,
    undefined4 param_11)

{
	byte bVar1;
	char cVar2;
	int iVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	ulonglong uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	longlong lVar14;
	longlong lVar15;
	longlong lVar16;
	ulonglong uVar17;
	int iVar18;
	char cVar19;
	int iVar20;
	int iVar21;
	byte *pbVar23;
	ulonglong uVar22;
	longlong unaff_r30;
	int iVar24;
	longlong unaff_r31;
	int iVar25;
	undefined4 in_stack_ffffff78;
	byte *local_58;

	iVar8 = _DAT_100f1da8;
	iVar7 = _DAT_100f1d68;
	puVar6 = PTR_DAT_100f1a54;
	puVar5 = PTR_DAT_100f1a48;
	puVar4 = PTR_DAT_100f1834;
	lVar16 = (longlong)param_8;
	lVar15 = (longlong)param_7;
	lVar14 = (longlong)param_6;
	uVar10 = ZEXT48(&toc);
	if ((((-1 < param_1) && (iVar21 = (int)param_1, iVar21 < 0x71)) && (iVar20 = (int)param_2, -1 < iVar20)) && (iVar20 < 0x71)) {
		if (param_4 != 0) {
			iVar18 = iVar21 * 0x70;
			if (-1 < *(char *)(*(int *)PTR_DAT_100f1834 + iVar18 + iVar20)) {
				SetAutomapView(param_1, iVar21, (char)param_3, (char)param_4, (char)param_5, param_6, param_7,
				    param_8, in_stack_ffffff78);
			}
			*(byte *)(*(int *)puVar4 + iVar18 + iVar20) = *(byte *)(*(int *)puVar4 + iVar18 + iVar20) | 0x80;
		}
		if (param_5 != 0) {
			iVar18 = iVar21 * 0x70 + iVar20;
			*(byte *)(*(int *)puVar4 + iVar18) = *(byte *)(*(int *)puVar4 + iVar18) | 0x40;
		}
		iVar20 = iVar21 * 0x70 + iVar20;
		*(byte *)(*(int *)puVar4 + iVar20) = *(byte *)(*(int *)puVar4 + iVar20) | 2;
	}
	iVar21 = 0;
	do {
		local_58 = *(byte **)((int)uVar10 + -0x6ea0);
		iVar20 = 0;
		uVar17 = (ulonglong) * (uint *)((int)uVar10 + -0x7100);
		do {
			cVar19 = '\0';
			bVar1 = *local_58;
			iVar18 = 0;
			uVar22 = uVar17;
			while ((iVar18 < (int)((param_3 - (uint)bVar1) * 2) && (cVar19 == '\0'))) {
				iVar9 = 0;
				iVar13 = 0;
				iVar11 = 0;
				iVar12 = 0;
				pbVar23 = (byte *)uVar22;
				if (iVar21 == 2) {
					unaff_r30 = param_1 + (ulonglong)*pbVar23;
					unaff_r31 = param_2 - (ulonglong)pbVar23[1];
					if ((*pbVar23 != 0) && (pbVar23[1] != 0)) {
						iVar9 = -1;
						iVar12 = 1;
					}
				} else {
					if (iVar21 < 2) {
						if (iVar21 == 0) {
							unaff_r30 = param_1 + (ulonglong)*pbVar23;
							unaff_r31 = param_2 + (ulonglong)pbVar23[1];
							if ((*pbVar23 != 0) && (pbVar23[1] != 0)) {
								iVar9 = -1;
								iVar12 = -1;
							}
						} else {
							if (-1 < iVar21) {
								unaff_r30 = param_1 - (ulonglong)*pbVar23;
								unaff_r31 = param_2 - (ulonglong)pbVar23[1];
								if ((*pbVar23 != 0) && (pbVar23[1] != 0)) {
									iVar11 = 1;
									iVar13 = 1;
								}
							}
						}
					} else {
						if (iVar21 < 4) {
							unaff_r30 = param_1 - (ulonglong)*pbVar23;
							unaff_r31 = param_2 + (ulonglong)pbVar23[1];
							if ((*pbVar23 != 0) && (pbVar23[1] != 0)) {
								iVar11 = -1;
								iVar13 = 1;
							}
						}
					}
				}
				iVar24 = (int)unaff_r30;
				if ((((-1 < iVar24) && (iVar24 < 0x71)) && (iVar25 = (int)unaff_r31, -1 < iVar25)) && (iVar25 < 0x71)) {
					iVar3 = *(int *)puVar6;
					cVar2 = *(char *)(iVar8 + (int)*(short *)(iVar3 + (iVar24 + iVar9) * 0xe0 + (iVar25 + iVar11) * 2));
					cVar19 = *(char *)(iVar8 + (int)*(short *)(iVar3 + iVar24 * 0xe0 + iVar25 * 2));
					if ((cVar2 == '\0') || (*(char *)(iVar8 + (int)*(short *)(iVar3 + (iVar24 + iVar13) * 0xe0 + (iVar25 + iVar12) * 2)) == '\0')) {
						if (param_4 != 0) {
							if (-1 < *(char *)(*(int *)puVar4 + iVar24 * 0x70 + iVar25)) {
								SetAutomapView(unaff_r30, iVar25, cVar2, (char)iVar12, (char)iVar13, (char)lVar14,
								    (char)lVar15, (char)lVar16, in_stack_ffffff78);
							}
							iVar9 = iVar24 * 0x70 + iVar25;
							*(byte *)(*(int *)puVar4 + iVar9) = *(byte *)(*(int *)puVar4 + iVar9) | 0x80;
						}
						if (param_5 != 0) {
							iVar9 = iVar24 * 0x70 + iVar25;
							*(byte *)(*(int *)puVar4 + iVar9) = *(byte *)(*(int *)puVar4 + iVar9) | 0x40;
						}
						iVar25 = iVar24 * 0x70 + iVar25;
						*(byte *)(*(int *)puVar4 + iVar25) = *(byte *)(*(int *)puVar4 + iVar25) | 2;
						if ((cVar19 == '\0') && (*(char *)(*(int *)puVar5 + iVar25) != '\0')) {
							*(undefined *)(iVar7 + (int)*(char *)(*(int *)puVar5 + iVar25)) = 1;
						}
					}
				}
				uVar22 = uVar22 + 2;
				iVar18 = iVar18 + 2;
			}
			iVar20 = iVar20 + 1;
			uVar17 = uVar17 + 0x1e;
			local_58 = local_58 + 1;
		} while (iVar20 < 0x17);
		iVar21 = iVar21 + 1;
	} while (iVar21 < 4);
	return;
}

void FreeLightTable(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_DAT_100f1860;
	uVar1 = *(uint *)PTR_DAT_100f1860;
	*(undefined4 *)PTR_DAT_100f1860 = 0;
	mem_free_dbg((ulonglong)uVar1, (char)puVar2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	return;
}

void InitLightTable(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 uVar2;

	ppuVar1 = &toc;
	uVar2 = DiabloAllocPtr(0x1b00, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
	*(undefined4 *)ppuVar1[-0x1ddc] = uVar2;
	return;
}

void MakeLightTable(undefined8 param_1, undefined8 param_2, ulonglong param_3, ulonglong param_4,
    undefined8 param_5, undefined8 param_6, uint param_7, uint param_8, undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	byte bVar3;
	ulonglong uVar4;
	int iVar6;
	ulonglong uVar5;
	byte *pbVar7;
	undefined8 uVar8;
	undefined uVar10;
	int iVar9;
	byte bVar11;
	undefined uVar12;
	byte bVar13;
	undefined uVar14;
	ulonglong uVar15;
	undefined uVar16;
	undefined uVar18;
	uint uVar17;
	undefined uVar19;
	uint uVar20;
	undefined uVar21;
	int iVar22;
	uint uVar23;
	byte bVar24;
	undefined8 unaff_r19;
	uint uVar25;
	undefined8 unaff_r20;
	longlong lVar26;
	undefined8 unaff_r21;
	int iVar27;
	undefined8 unaff_r22;
	int iVar28;
	undefined8 unaff_r23;
	byte *pbVar29;
	undefined *puVar30;
	undefined8 unaff_r24;
	int iVar31;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	int iVar32;
	undefined8 unaff_r27;
	undefined *puVar33;
	undefined8 unaff_r28;
	undefined *puVar34;
	undefined8 unaff_r29;
	int iVar35;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	longlong lVar36;
	longlong lVar37;
	double dVar38;
	double dVar39;
	double dVar40;
	double dVar41;
	double dVar42;
	undefined4 in_stack_ffffff18;
	undefined local_96;
	undefined local_95;
	undefined local_94;
	undefined local_93;
	undefined local_92;
	undefined local_91;
	undefined local_90;
	undefined local_8f;
	undefined local_8e[6];
	undefined local_88[8];
	int *local_80[2];
	double local_78;
	double local_70;
	double local_68;
	undefined4 local_54;
	undefined4 uStack80;
	undefined4 uStack76;
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

	puVar2 = PTR_DAT_100f2138;
	puVar34 = PTR_DAT_100f1864;
	puVar33 = PTR_DAT_100f1860;
	uVar4 = ZEXT48(&toc);
	uVar17 = 0;
	uVar15 = ZEXT48(PTR_DAT_100f1860);
	local_54 = (undefined4)((ulonglong)unaff_r19 >> 0x20);
	uStack80 = (undefined4)((ulonglong)unaff_r20 >> 0x20);
	uStack76 = (undefined4)((ulonglong)unaff_r21 >> 0x20);
	uStack72 = (undefined4)((ulonglong)unaff_r22 >> 0x20);
	uStack68 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack64 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack60 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack56 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack52 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack48 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack44 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack40 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack36 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	pbVar29 = *(byte **)PTR_DAT_100f1860;
	if (*(int *)PTR_DAT_100f1864 == 0) {
		iVar9 = 0xf;
	} else {
		iVar9 = 3;
	}
	iVar6 = 0;
	while (iVar6 < iVar9) {
		*pbVar29 = 0;
		iVar22 = 0;
		uVar23 = 0xf;
		pbVar29 = pbVar29 + 1;
		uVar20 = uVar17;
		do {
			lVar36 = 4;
			uVar5 = (ulonglong)(uVar20 & 0xff);
			uVar25 = uVar23 & 0xff;
			lVar37 = 0;
			do {
				if (((int)lVar37 != 0) || (iVar22 != 0)) {
					*pbVar29 = (byte)uVar5;
					pbVar29 = pbVar29 + 1;
				}
				if (((uint)uVar5 & 0xff) < uVar25) {
					lVar26 = uVar5 + 1;
				} else {
					uVar25 = 0;
					lVar26 = 0;
				}
				if ((lVar37 != -1) || (iVar22 != 0)) {
					*pbVar29 = (byte)lVar26;
					pbVar29 = pbVar29 + 1;
				}
				if (((uint)lVar26 & 0xff) < uVar25) {
					lVar26 = lVar26 + 1;
				} else {
					uVar25 = 0;
					lVar26 = 0;
				}
				if ((lVar37 != -2) || (iVar22 != 0)) {
					*pbVar29 = (byte)lVar26;
					pbVar29 = pbVar29 + 1;
				}
				if (((uint)lVar26 & 0xff) < uVar25) {
					lVar26 = lVar26 + 1;
				} else {
					uVar25 = 0;
					lVar26 = 0;
				}
				if ((lVar37 != -3) || (iVar22 != 0)) {
					*pbVar29 = (byte)lVar26;
					pbVar29 = pbVar29 + 1;
				}
				if (((uint)lVar26 & 0xff) < uVar25) {
					uVar5 = lVar26 + 1;
				} else {
					uVar25 = 0;
					uVar5 = 0;
				}
				lVar37 = lVar37 + 4;
				lVar36 = lVar36 + -1;
			} while (lVar36 != 0);
			iVar22 = iVar22 + 1;
			uVar23 = uVar23 + 0x10;
			uVar20 = uVar20 + 0x10;
		} while (iVar22 < 8);
		lVar36 = 4;
		lVar37 = (ulonglong)(uint)((int)uVar17 >> 1) + 0x80;
		uVar20 = 0x87;
		do {
			uVar23 = (uint)lVar37 & 0xff;
			uVar25 = uVar20 & 0xff;
			*pbVar29 = (byte)lVar37;
			if (uVar23 < uVar25) {
				uVar23 = uVar23 + 1;
			} else {
				uVar25 = 0;
				uVar23 = 0;
			}
			pbVar29[1] = (byte)uVar23;
			if ((uVar23 & 0xff) < uVar25) {
				uVar23 = uVar23 + 1;
			} else {
				uVar25 = 0;
				uVar23 = 0;
			}
			pbVar29[2] = (byte)uVar23;
			if ((uVar23 & 0xff) < uVar25) {
				uVar23 = uVar23 + 1;
			} else {
				uVar25 = 0;
				uVar23 = 0;
			}
			pbVar29[3] = (byte)uVar23;
			if ((uVar23 & 0xff) < uVar25) {
				uVar23 = uVar23 + 1;
			} else {
				uVar25 = 0;
				uVar23 = 0;
			}
			pbVar29[4] = (byte)uVar23;
			if ((uVar23 & 0xff) < uVar25) {
				uVar23 = uVar23 + 1;
			} else {
				uVar25 = 0;
				uVar23 = 0;
			}
			pbVar29[5] = (byte)uVar23;
			if ((uVar23 & 0xff) < uVar25) {
				uVar23 = uVar23 + 1;
			} else {
				uVar25 = 0;
				uVar23 = 0;
			}
			pbVar29[6] = (byte)uVar23;
			if ((uVar23 & 0xff) < uVar25) {
				bVar24 = (byte)uVar23 + 1;
			} else {
				bVar24 = 0;
			}
			pbVar29[7] = bVar24;
			pbVar29 = pbVar29 + 8;
			lVar37 = lVar37 + 8;
			uVar20 = uVar20 + 8;
			lVar36 = lVar36 + -1;
		} while (lVar36 != 0);
		param_7 = uVar17 + 0xa0;
		iVar22 = 10;
		param_8 = 0xaf;
		do {
			lVar37 = 4;
			uVar5 = (ulonglong)(param_7 & 0xff);
			uVar20 = param_8 & 0xff;
			do {
				*pbVar29 = (byte)uVar5;
				if (((uint)uVar5 & 0xff) < uVar20) {
					lVar36 = uVar5 + 1;
				} else {
					uVar20 = 0;
					lVar36 = 0;
				}
				if (((uint)lVar36 & 0xff) == 0xff) {
					uVar20 = 0;
					lVar36 = 0;
				}
				pbVar29[1] = (byte)lVar36;
				if (((uint)lVar36 & 0xff) < uVar20) {
					lVar36 = lVar36 + 1;
				} else {
					uVar20 = 0;
					lVar36 = 0;
				}
				if (((uint)lVar36 & 0xff) == 0xff) {
					uVar20 = 0;
					lVar36 = 0;
				}
				pbVar29[2] = (byte)lVar36;
				if (((uint)lVar36 & 0xff) < uVar20) {
					lVar36 = lVar36 + 1;
				} else {
					uVar20 = 0;
					lVar36 = 0;
				}
				if (((uint)lVar36 & 0xff) == 0xff) {
					uVar20 = 0;
					lVar36 = 0;
				}
				param_4 = (ulonglong)((uint)lVar36 & 0xff);
				pbVar29[3] = (byte)lVar36;
				pbVar29 = pbVar29 + 4;
				if (param_4 < (ulonglong)uVar20) {
					uVar5 = lVar36 + 1;
				} else {
					uVar20 = 0;
					uVar5 = 0;
				}
				if (((uint)uVar5 & 0xff) == 0xff) {
					uVar20 = 0;
					uVar5 = 0;
				}
				lVar37 = lVar37 + -1;
			} while (lVar37 != 0);
			iVar22 = iVar22 + 1;
			param_8 = param_8 + 0x10;
			param_7 = param_7 + 0x10;
		} while (iVar22 < 0x10);
		param_3 = (ulonglong) * (uint *)puVar34;
		if (*(uint *)puVar34 == 0) {
			uVar17 = uVar17 + 1;
		} else {
			uVar17 = uVar17 + 5;
		}
		iVar6 = iVar6 + 1;
	}
	lVar37 = 8;
	do {
		iVar6 = 0;
		*pbVar29 = 0;
		pbVar29[1] = 0;
		pbVar29[2] = 0;
		pbVar29[3] = 0;
		pbVar29[4] = 0;
		pbVar29[5] = 0;
		pbVar29[6] = 0;
		pbVar29[7] = 0;
		pbVar29[8] = 0;
		pbVar29[9] = 0;
		pbVar29[10] = 0;
		pbVar29[0xb] = 0;
		pbVar29[0xc] = 0;
		pbVar29[0xd] = 0;
		pbVar29[0xe] = 0;
		pbVar29[0xf] = 0;
		pbVar29[0x10] = 0;
		pbVar29[0x11] = 0;
		pbVar29[0x12] = 0;
		pbVar29[0x13] = 0;
		pbVar29[0x14] = 0;
		pbVar29[0x15] = 0;
		pbVar29[0x16] = 0;
		pbVar29[0x17] = 0;
		pbVar29[0x18] = 0;
		pbVar29[0x19] = 0;
		pbVar29[0x1a] = 0;
		pbVar29[0x1b] = 0;
		pbVar29[0x1c] = 0;
		pbVar29[0x1d] = 0;
		pbVar29[0x1e] = 0;
		pbVar29[0x1f] = 0;
		pbVar29 = pbVar29 + 0x20;
		lVar37 = lVar37 + -1;
	} while (lVar37 != 0);
	if (*PTR_DAT_100f183c == '\x04') {
		puVar33 = *(undefined **)puVar33;
		param_4 = 0xf;
		iVar6 = 0;
		while (iVar6 < iVar9) {
			param_7 = iVar9 - iVar6;
			puVar34 = &local_96;
			param_8 = iVar9 / (int)param_7;
			uVar15 = 1;
			iVar22 = 1;
			uVar20 = 0;
			uVar17 = param_7;
			while (iVar22 < 0x10) {
				uVar17 = uVar17 + (iVar9 - param_8 * param_7);
				*puVar34 = (char)uVar15;
				if (((int)param_7 < (int)uVar17) && (iVar22 < 0xf)) {
					puVar34 = puVar34 + 1;
					*puVar34 = (char)uVar15;
					uVar17 = uVar17 - param_7;
					iVar22 = iVar22 + 1;
				}
				uVar20 = uVar20 + 1;
				if (uVar20 == param_8) {
					uVar20 = 0;
					uVar15 = uVar15 + 1;
				}
				iVar22 = iVar22 + 1;
				puVar34 = puVar34 + 1;
			}
			*puVar33 = 0;
			param_3 = 9;
			puVar33[1] = local_96;
			puVar33[2] = local_95;
			puVar33[3] = local_94;
			puVar33[4] = local_93;
			puVar33[5] = local_92;
			puVar33[6] = local_91;
			puVar33[7] = local_90;
			puVar33[8] = local_8f;
			puVar33 = puVar33 + 9;
			puVar34 = local_8e;
			lVar37 = 7;
			do {
				uVar10 = *puVar34;
				puVar34 = puVar34 + 1;
				*puVar33 = uVar10;
				puVar33 = puVar33 + 1;
				lVar37 = lVar37 + -1;
			} while (lVar37 != 0);
			puVar34 = local_88;
			lVar37 = 3;
			do {
				puVar30 = puVar33;
				*puVar30 = *puVar34;
				puVar30[1] = puVar34[-1];
				puVar30[2] = puVar34[-2];
				puVar30[3] = puVar34[-3];
				puVar33 = puVar34 + -4;
				puVar34 = puVar34 + -5;
				puVar30[4] = *puVar33;
				lVar37 = lVar37 + -1;
				puVar33 = puVar30 + 5;
			} while (lVar37 != 0);
			iVar6 = iVar6 + 1;
			puVar30[5] = 1;
			puVar33 = puVar30 + 0xe6;
		}
		*puVar33 = 0;
		puVar33[1] = 1;
		lVar37 = 7;
		puVar33[2] = 1;
		puVar33[3] = 1;
		puVar33[4] = 1;
		puVar33[5] = 1;
		puVar33[6] = 1;
		puVar33[7] = 1;
		puVar33[8] = 1;
		puVar33[9] = 1;
		puVar33[10] = 1;
		puVar33[0xb] = 1;
		puVar33[0xc] = 1;
		puVar33[0xd] = 1;
		puVar33[0xe] = 1;
		puVar33[0xf] = 1;
		puVar33[0x10] = 1;
		puVar33[0x11] = 1;
		puVar33[0x12] = 1;
		puVar33[0x13] = 1;
		puVar33[0x14] = 1;
		puVar33[0x15] = 1;
		puVar33[0x16] = 1;
		puVar33[0x17] = 1;
		puVar33[0x18] = 1;
		puVar33 = puVar33 + 0x19;
		do {
			puVar34 = puVar33;
			*puVar34 = 1;
			lVar37 = lVar37 + -1;
			puVar33 = puVar34 + 1;
		} while (lVar37 != 0);
		pbVar29 = puVar34 + 0xe1;
	}
	uVar8 = 0;
	uVar5 = LoadFileInMem((ulonglong)_DAT_100f3a54, (undefined4 *)0x0, param_3, param_4, uVar15, iVar6,
	    param_7, param_8, in_stack_ffffff18);
	uVar10 = (undefined)uVar8;
	local_80[0] = (int *)uVar5;
	uVar5 = FUN_100b8f7c(uVar5 & 0xffffffff, uVar8, param_3, param_4, uVar15, iVar6, param_7, param_8,
	    in_stack_ffffff18);
	lVar37 = 0x10;
	do {
		pbVar7 = (byte *)uVar5;
		*pbVar29 = *pbVar7;
		pbVar29[1] = pbVar7[1];
		pbVar29[2] = pbVar7[2];
		pbVar29[3] = pbVar7[3];
		pbVar29[4] = pbVar7[4];
		pbVar29[5] = pbVar7[5];
		pbVar29[6] = pbVar7[6];
		pbVar29[7] = pbVar7[7];
		pbVar29[8] = pbVar7[8];
		pbVar29[9] = pbVar7[9];
		pbVar29[10] = pbVar7[10];
		pbVar29[0xb] = pbVar7[0xb];
		pbVar29[0xc] = pbVar7[0xc];
		pbVar29[0xd] = pbVar7[0xd];
		pbVar29[0xe] = pbVar7[0xe];
		uVar5 = uVar5 + 0x10;
		pbVar29[0xf] = pbVar7[0xf];
		pbVar29 = pbVar29 + 0x10;
		lVar37 = lVar37 + -1;
	} while (lVar37 != 0);
	FUN_100b9100((int)local_80[0], uVar10, (char)param_3, (char)param_4, (char)uVar15, (char)iVar6,
	    (char)param_7, (char)param_8, in_stack_ffffff18);
	mem_free_dbg(local_80, uVar10, (char)param_3, (char)param_4, (char)uVar15, (char)iVar6, (char)param_7,
	    (char)param_8, in_stack_ffffff18);
	uVar8 = 0;
	uVar5 = LoadFileInMem((ulonglong) * (uint *)((int)uVar4 + -0x5580), (undefined4 *)0x0, param_3, param_4,
	    uVar15, iVar6, param_7, param_8, in_stack_ffffff18);
	uVar21 = (undefined)param_8;
	uVar19 = (undefined)param_7;
	uVar18 = (undefined)iVar6;
	uVar16 = (undefined)uVar15;
	uVar14 = (undefined)param_4;
	uVar12 = (undefined)param_3;
	uVar10 = (undefined)uVar8;
	local_80[0] = (int *)uVar5;
	uVar15 = FUN_100b8f7c(uVar5 & 0xffffffff, uVar8, param_3, param_4, uVar15, iVar6, param_7, param_8,
	    in_stack_ffffff18);
	lVar37 = 0x10;
	do {
		pbVar7 = (byte *)uVar15;
		*pbVar29 = *pbVar7;
		pbVar29[1] = pbVar7[1];
		pbVar29[2] = pbVar7[2];
		pbVar29[3] = pbVar7[3];
		pbVar29[4] = pbVar7[4];
		pbVar29[5] = pbVar7[5];
		pbVar29[6] = pbVar7[6];
		pbVar29[7] = pbVar7[7];
		pbVar29[8] = pbVar7[8];
		pbVar29[9] = pbVar7[9];
		pbVar29[10] = pbVar7[10];
		pbVar29[0xb] = pbVar7[0xb];
		pbVar29[0xc] = pbVar7[0xc];
		pbVar29[0xd] = pbVar7[0xd];
		pbVar29[0xe] = pbVar7[0xe];
		uVar15 = uVar15 + 0x10;
		pbVar29[0xf] = pbVar7[0xf];
		pbVar29 = pbVar29 + 0x10;
		lVar37 = lVar37 + -1;
	} while (lVar37 != 0);
	FUN_100b9100((int)local_80[0], uVar10, uVar12, uVar14, uVar16, uVar18, uVar19, uVar21, in_stack_ffffff18);
	mem_free_dbg(local_80, uVar10, uVar12, uVar14, uVar16, uVar18, uVar19, uVar21, in_stack_ffffff18);
	lVar37 = 4;
	iVar9 = 0;
	do {
		bVar24 = 0xe2;
		while (bVar24 < 0xef) {
			if ((iVar9 == 0) && (bVar24 == 0xe2)) {
				*pbVar29 = 0;
			} else {
				*pbVar29 = bVar24;
			}
			pbVar29 = pbVar29 + 1;
			bVar24 = bVar24 + 1;
		}
		*pbVar29 = 0;
		bVar24 = 0xe2;
		pbVar29[1] = 0;
		pbVar29[2] = 0;
		pbVar7 = pbVar29 + 3;
		while (bVar24 < 0xef) {
			if ((iVar9 == -1) && (bVar24 == 0xe2)) {
				*pbVar7 = 0;
			} else {
				*pbVar7 = bVar24;
			}
			pbVar7 = pbVar7 + 1;
			bVar24 = bVar24 + 1;
		}
		iVar9 = iVar9 + 2;
		*pbVar7 = 0;
		pbVar7[1] = 0;
		pbVar7[2] = 0;
		pbVar29 = pbVar7 + 3;
		lVar37 = lVar37 + -1;
	} while (lVar37 != 0);
	*pbVar29 = 0xe0;
	pbVar7[4] = 0xe2;
	pbVar7[5] = 0xe4;
	pbVar7[6] = 0xe6;
	pbVar7[7] = 0xe8;
	pbVar7[8] = 0xea;
	pbVar7[9] = 0xec;
	pbVar7[10] = 0xee;
	pbVar7[0xb] = 0xe0;
	pbVar7[0xc] = 0xe2;
	pbVar7[0xd] = 0xe4;
	pbVar7[0xe] = 0xe6;
	pbVar7[0xf] = 0xe8;
	pbVar7[0x10] = 0xea;
	pbVar7[0x11] = 0xec;
	pbVar7[0x12] = 0xee;
	pbVar7[0x13] = 0xe0;
	pbVar7[0x14] = 0xe2;
	pbVar7[0x15] = 0xe4;
	pbVar7[0x16] = 0xe6;
	pbVar7[0x17] = 0xe8;
	pbVar7[0x18] = 0xea;
	pbVar7[0x19] = 0xec;
	pbVar7[0x1a] = 0xee;
	pbVar7[0x1b] = 0xe0;
	lVar37 = 3;
	pbVar7[0x1c] = 0xe2;
	pbVar7[0x1d] = 0xe4;
	pbVar7[0x1e] = 0xe6;
	pbVar7[0x1f] = 0xe8;
	pbVar7[0x20] = 0xea;
	pbVar7[0x21] = 0xec;
	pbVar7[0x22] = 0xee;
	pbVar7 = pbVar7 + 0x23;
	do {
		bVar24 = 0xe0;
		while (bVar24 < 0xe7) {
			*pbVar7 = bVar24;
			bVar13 = bVar24 + 5;
			pbVar7[1] = bVar24 + 1;
			pbVar7[2] = bVar24 + 2;
			pbVar7[3] = bVar24 + 3;
			bVar11 = bVar24 + 6;
			pbVar7[4] = bVar24 + 4;
			bVar3 = bVar24 + 7;
			bVar24 = bVar24 + 8;
			pbVar7[5] = bVar13;
			pbVar7[6] = bVar11;
			pbVar7[7] = bVar3;
			pbVar7 = pbVar7 + 8;
		}
		while (bVar24 < 0xef) {
			*pbVar7 = bVar24;
			pbVar7 = pbVar7 + 1;
			bVar24 = bVar24 + 1;
		}
		*pbVar7 = 0;
		bVar24 = 0xe0;
		pbVar7 = pbVar7 + 1;
		while (bVar24 < 0xe7) {
			*pbVar7 = bVar24;
			bVar13 = bVar24 + 5;
			pbVar7[1] = bVar24 + 1;
			pbVar7[2] = bVar24 + 2;
			pbVar7[3] = bVar24 + 3;
			bVar11 = bVar24 + 6;
			pbVar7[4] = bVar24 + 4;
			bVar3 = bVar24 + 7;
			bVar24 = bVar24 + 8;
			pbVar7[5] = bVar13;
			pbVar7[6] = bVar11;
			pbVar7[7] = bVar3;
			pbVar7 = pbVar7 + 8;
		}
		while (bVar24 < 0xef) {
			*pbVar7 = bVar24;
			pbVar7 = pbVar7 + 1;
			bVar24 = bVar24 + 1;
		}
		*pbVar7 = 0;
		pbVar7 = pbVar7 + 1;
		lVar37 = lVar37 + -1;
	} while (lVar37 != 0);
	iVar9 = (int)uVar4;
	puVar33 = *(undefined **)(iVar9 + -0x6e9c);
	iVar6 = 0;
	dVar40 = *(double *)(iVar9 + -0x4a10);
	dVar39 = *(double *)(iVar9 + -0x4a18);
	dVar38 = *(double *)(iVar9 + -0x4a30);
	dVar41 = *(double *)(iVar9 + -0x4a08);
	do {
		lVar37 = 0x20;
		local_68 = (double)CONCAT44(0x43300000, iVar6 + 1U ^ 0x80000000);
		iVar22 = (iVar6 + 1U) * 8;
		uVar17 = 0;
		dVar42 = dVar41 * (local_68 - dVar38);
		puVar34 = puVar33;
		do {
			if (iVar22 < (int)uVar17) {
				*puVar34 = 0xf;
			} else {
				local_68 = (double)CONCAT44(0x43300000, uVar17 ^ 0x80000000);
				*puVar34 = (char)(int)(dVar40 + (dVar39 * (local_68 - dVar38)) / dVar42);
			}
			if (iVar22 < (int)(uVar17 + 1)) {
				puVar34[1] = 0xf;
			} else {
				local_68 = (double)CONCAT44(0x43300000, uVar17 + 1 ^ 0x80000000);
				puVar34[1] = (char)(int)(dVar40 + (dVar39 * (local_68 - dVar38)) / dVar42);
			}
			if (iVar22 < (int)(uVar17 + 2)) {
				puVar34[2] = 0xf;
			} else {
				local_68 = (double)CONCAT44(0x43300000, uVar17 + 2 ^ 0x80000000);
				puVar34[2] = (char)(int)(dVar40 + (dVar39 * (local_68 - dVar38)) / dVar42);
			}
			if (iVar22 < (int)(uVar17 + 3)) {
				puVar34[3] = 0xf;
			} else {
				local_68 = (double)CONCAT44(0x43300000, uVar17 + 3 ^ 0x80000000);
				puVar34[3] = (char)(int)(dVar40 + (dVar39 * (local_68 - dVar38)) / dVar42);
			}
			puVar34 = puVar34 + 4;
			uVar17 = uVar17 + 4;
			lVar37 = lVar37 + -1;
		} while (lVar37 != 0);
		iVar6 = iVar6 + 1;
		puVar33 = puVar33 + 0x80;
	} while (iVar6 < 0x10);
	iVar6 = 0;
	dVar38 = *(double *)(iVar9 + -0x4a30);
	dVar39 = *(double *)(iVar9 + -19000);
	iVar22 = 0;
	dVar40 = *(double *)(iVar9 + -0x4a20);
	do {
		iVar31 = 0;
		iVar9 = iVar22 << 8;
		do {
			puVar33 = puVar2 + iVar9;
			iVar27 = 0;
			iVar32 = 0;
			do {
				iVar28 = 0;
				iVar35 = 0;
				puVar34 = puVar33;
				do {
					local_70 = (double)CONCAT44(0x43300000,
					    (iVar35 - iVar31) * (iVar35 - iVar31) + (iVar32 - iVar6) * (iVar32 - iVar6) ^ 0x80000000);
					dVar41 = sqrt(local_70 - dVar38);
					local_68 = (double)(longlong)(int)dVar41;
					local_78 = (double)CONCAT44(0x43300000, (int)dVar41 & 0xff);
					if (dVar40 <= local_78 - dVar39) {
						dVar41 = *(double *)((int)uVar4 + -0x4a10);
					} else {
						dVar41 = *(double *)((int)uVar4 + -0x4a28);
					}
					iVar28 = iVar28 + 1;
					iVar35 = iVar35 + 8;
					iVar1 = (int)((local_78 - dVar39) + dVar41);
					local_78 = (double)(longlong)iVar1;
					*puVar34 = (char)iVar1;
					puVar34 = puVar34 + 1;
				} while (iVar28 < 0x10);
				iVar27 = iVar27 + 1;
				iVar32 = iVar32 + 8;
				puVar33 = puVar33 + 0x10;
			} while (iVar27 < 0x10);
			iVar31 = iVar31 + 1;
			iVar9 = iVar9 + 0x100;
		} while (iVar31 < 8);
		iVar6 = iVar6 + 1;
		iVar22 = iVar22 + 8;
	} while (iVar6 < 8);
	return;
}

void InitLightMax(void)

{
	if (*(int *)PTR_DAT_100f1864 != 0) {
		*PTR_DAT_100f1f04 = 3;
		return;
	}
	*PTR_DAT_100f1f04 = 0xf;
	return;
}

void InitLighting(void)

{
	undefined *puVar1;
	undefined4 *puVar2;
	undefined *puVar3;

	puVar2 = _DAT_100f1e68;
	*(undefined4 *)PTR_DAT_100f1e78 = 0;
	puVar1 = PTR_DAT_100f1aa4;
	*puVar2 = 0;
	puVar3 = PTR_DAT_100f1e74;
	*(undefined4 *)puVar1 = 0;
	*puVar3 = 0;
	puVar3[1] = 1;
	puVar3[2] = 2;
	puVar3[3] = 3;
	puVar3[4] = 4;
	puVar3[5] = 5;
	puVar3[6] = 6;
	puVar3[7] = 7;
	puVar3[8] = 8;
	puVar3[9] = 9;
	puVar3[10] = 10;
	puVar3[0xb] = 0xb;
	puVar3[0xc] = 0xc;
	puVar3[0xd] = 0xd;
	puVar3[0xe] = 0xe;
	puVar3[0xf] = 0xf;
	puVar3[0x10] = 0x10;
	puVar3[0x11] = 0x11;
	puVar3[0x12] = 0x12;
	puVar3[0x13] = 0x13;
	puVar3[0x14] = 0x14;
	puVar3[0x15] = 0x15;
	puVar3[0x16] = 0x16;
	puVar3[0x17] = 0x17;
	puVar3[0x18] = 0x18;
	puVar3[0x19] = 0x19;
	puVar3[0x1a] = 0x1a;
	puVar3[0x1b] = 0x1b;
	puVar3[0x1c] = 0x1c;
	puVar3[0x1d] = 0x1d;
	puVar3[0x1e] = 0x1e;
	puVar3[0x1f] = 0x1f;
	return;
}

ulonglong AddLight(undefined4 param_1, undefined4 param_2, undefined4 param_3)

{
	int iVar1;
	undefined *puVar2;
	undefined4 *puVar3;
	undefined *puVar4;
	ulonglong uVar5;

	puVar2 = PTR_DAT_100f1e90;
	puVar4 = PTR_DAT_100f1e74;
	if (*(int *)PTR_DAT_100f1aa4 != 0) {
		return 0xffffffffffffffff;
	}
	iVar1 = *(int *)PTR_DAT_100f1e78;
	uVar5 = 0xffffffffffffffff;
	if (iVar1 < 0x20) {
		*(int *)PTR_DAT_100f1e78 = iVar1 + 1;
		puVar3 = _DAT_100f1e68;
		uVar5 = (ulonglong)(byte)puVar4[iVar1];
		iVar1 = (uint)(byte)puVar4[iVar1] * 0x34;
		*(undefined4 *)(puVar2 + iVar1) = param_1;
		puVar2 = puVar2 + iVar1;
		*(undefined4 *)(puVar2 + 4) = param_2;
		*(undefined4 *)(puVar2 + 8) = param_3;
		*(undefined4 *)(puVar2 + 0x28) = 0;
		*(undefined4 *)(puVar2 + 0x2c) = 0;
		*(undefined4 *)(puVar2 + 0x10) = 0;
		*(undefined4 *)(puVar2 + 0x14) = 0;
		*puVar3 = 1;
	}
	return uVar5;
}

void AddUnLight(int param_1)

{
	undefined4 *puVar1;

	puVar1 = _DAT_100f1e68;
	if (*(int *)PTR_DAT_100f1aa4 != 0) {
		return;
	}
	if (param_1 == -1) {
		return;
	}
	*(undefined4 *)(PTR_DAT_100f1e90 + param_1 * 0x34 + 0x10) = 1;
	*puVar1 = 1;
	return;
}

void ChangeLightRadius(int param_1, undefined4 param_2)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined *puVar3;

	puVar2 = PTR_DAT_100f1e90;
	puVar1 = _DAT_100f1e68;
	if (*(int *)PTR_DAT_100f1aa4 != 0) {
		return;
	}
	if (param_1 == -1) {
		return;
	}
	puVar3 = PTR_DAT_100f1e90 + param_1 * 0x34;
	*(undefined4 *)(puVar3 + 0x14) = 1;
	*(undefined4 *)(puVar3 + 0x1c) = *(undefined4 *)(puVar2 + param_1 * 0x34);
	*(undefined4 *)(puVar3 + 0x20) = *(undefined4 *)(puVar3 + 4);
	*(undefined4 *)(puVar3 + 0x24) = *(undefined4 *)(puVar3 + 8);
	*(undefined4 *)(puVar3 + 8) = param_2;
	*puVar1 = 1;
	return;
}

void ChangeLightXY(int param_1, undefined4 param_2, undefined4 param_3)

{
	undefined4 *puVar1;
	undefined4 *puVar2;

	puVar1 = _DAT_100f1e68;
	if (*(int *)PTR_DAT_100f1aa4 != 0) {
		return;
	}
	if (param_1 == -1) {
		return;
	}
	puVar2 = (undefined4 *)(PTR_DAT_100f1e90 + param_1 * 0x34);
	puVar2[5] = 1;
	puVar2[7] = *puVar2;
	puVar2[8] = puVar2[1];
	puVar2[9] = puVar2[2];
	*puVar2 = param_2;
	puVar2[1] = param_3;
	*puVar1 = 1;
	return;
}

void ChangeLightOff(int param_1, undefined4 param_2, undefined4 param_3)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined *puVar3;

	puVar2 = PTR_DAT_100f1e90;
	puVar1 = _DAT_100f1e68;
	if (*(int *)PTR_DAT_100f1aa4 != 0) {
		return;
	}
	if (param_1 == -1) {
		return;
	}
	puVar3 = PTR_DAT_100f1e90 + param_1 * 0x34;
	*(undefined4 *)(puVar3 + 0x14) = 1;
	*(undefined4 *)(puVar3 + 0x1c) = *(undefined4 *)(puVar2 + param_1 * 0x34);
	*(undefined4 *)(puVar3 + 0x20) = *(undefined4 *)(puVar3 + 4);
	*(undefined4 *)(puVar3 + 0x24) = *(undefined4 *)(puVar3 + 8);
	*(undefined4 *)(puVar3 + 0x28) = param_2;
	*(undefined4 *)(puVar3 + 0x2c) = param_3;
	*puVar1 = 1;
	return;
}

void ChangeLight(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)

{
	undefined4 *puVar1;
	undefined4 *puVar2;

	puVar1 = _DAT_100f1e68;
	if (*(int *)PTR_DAT_100f1aa4 != 0) {
		return;
	}
	if (param_1 == -1) {
		return;
	}
	puVar2 = (undefined4 *)(PTR_DAT_100f1e90 + param_1 * 0x34);
	puVar2[5] = 1;
	puVar2[7] = *puVar2;
	puVar2[8] = puVar2[1];
	puVar2[9] = puVar2[2];
	*puVar2 = param_2;
	puVar2[1] = param_3;
	puVar2[2] = param_4;
	*puVar1 = 1;
	return;
}

void ProcessLightList(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    char param_5, char param_6, char param_7, char param_8, undefined4 param_9)

{
	byte bVar1;
	int iVar2;
	undefined *puVar3;
	int *piVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	byte *pbVar8;
	uint *puVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	int iVar14;
	byte *pbVar15;
	undefined4 in_stack_ffffffa8;

	puVar7 = PTR_DAT_100f1e90;
	puVar6 = PTR_DAT_100f1e78;
	puVar5 = PTR_DAT_100f1e74;
	piVar4 = _DAT_100f1e68;
	lVar13 = (longlong)param_8;
	lVar12 = (longlong)param_7;
	lVar11 = (longlong)param_6;
	lVar10 = (longlong)param_5;
	if (*(int *)PTR_DAT_100f1aa4 == 0) {
		if (*_DAT_100f1e68 != 0) {
			iVar14 = 0;
			pbVar15 = PTR_DAT_100f1e74;
			while (iVar14 < *(int *)puVar6) {
				bVar1 = *pbVar15;
				iVar2 = (uint)bVar1 * 0x34;
				if (*(int *)(puVar7 + iVar2 + 0x10) != 0) {
					puVar9 = (uint *)(puVar7 + iVar2);
					DoUnLight((ulonglong)*puVar9, (ulonglong)puVar9[1], (ulonglong)puVar9[2]);
				}
				puVar3 = puVar7 + (uint)bVar1 * 0x34;
				if (*(int *)(puVar3 + 0x14) != 0) {
					DoUnLight((ulonglong) * (uint *)(puVar3 + 0x1c), (ulonglong) * (uint *)(puVar3 + 0x20),
					    (ulonglong) * (uint *)(puVar3 + 0x24));
					*(undefined4 *)(puVar3 + 0x14) = 0;
				}
				pbVar15 = pbVar15 + 1;
				iVar14 = iVar14 + 1;
			}
			iVar14 = 0;
			pbVar15 = puVar5;
			while (true) {
				if (*(int *)puVar6 <= iVar14)
					break;
				iVar2 = (uint)*pbVar15 * 0x34;
				if (*(int *)(puVar7 + iVar2 + 0x10) == 0) {
					puVar9 = (uint *)(puVar7 + iVar2);
					DoLighting((ulonglong)*puVar9, (ulonglong)puVar9[1], puVar9[2], (uint)*pbVar15, (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13, in_stack_ffffffa8);
				}
				pbVar15 = pbVar15 + 1;
				iVar14 = iVar14 + 1;
			}
			pbVar15 = puVar5 + *(int *)puVar6;
			iVar14 = 0;
			pbVar8 = puVar5;
			while (iVar14 < *(int *)puVar6) {
				if (*(int *)(puVar7 + (uint)*pbVar8 * 0x34 + 0x10) == 0) {
					pbVar8 = pbVar8 + 1;
					iVar14 = iVar14 + 1;
				} else {
					iVar2 = *(int *)puVar6;
					*(int *)puVar6 = iVar2 + -1;
					bVar1 = puVar5[iVar2 + -1];
					pbVar15 = pbVar15 + -1;
					*pbVar15 = *pbVar8;
					*pbVar8 = bVar1;
				}
			}
		}
		*piVar4 = 0;
	}
	return;
}

void SavePreLighting(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	memcpy((char)*(undefined4 *)PTR_DAT_100f1a40, (char)*(undefined4 *)PTR_DAT_100f1a44, 0, param_4,
	    param_5, param_6, param_7, param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	return;
}

void InitVision(void)

{
	char cVar1;
	undefined *puVar2;
	ulonglong uVar3;
	longlong lVar4;
	ulonglong uVar5;
	longlong lVar6;
	undefined *puVar8;
	ulonglong uVar7;
	longlong lVar9;

	puVar2 = PTR_DAT_100f212c;
	*(undefined4 *)PTR_DAT_100f1e6c = 0;
	puVar8 = PTR_DAT_100f1e70;
	lVar9 = 0;
	*(undefined4 *)puVar2 = 0;
	puVar2 = PTR_DAT_100f1ab8;
	*(undefined4 *)puVar8 = 1;
	uVar5 = (ulonglong)_DAT_100f1d68;
	cVar1 = *puVar2;
	if (cVar1 < '\x01') {
		return;
	}
	if (('\b' < cVar1) && (uVar3 = (ulonglong)((int)cVar1 - 1U >> 3), uVar7 = uVar5, 0 < (int)cVar1 + -8)) {
		do {
			puVar8 = (undefined *)uVar7;
			*puVar8 = 0;
			lVar9 = lVar9 + 8;
			puVar8[1] = 0;
			puVar8[2] = 0;
			puVar8[3] = 0;
			puVar8[4] = 0;
			puVar8[5] = 0;
			puVar8[6] = 0;
			puVar8[7] = 0;
			uVar7 = uVar7 + 8;
			uVar3 = uVar3 - 1;
		} while (uVar3 != 0);
	}
	cVar1 = *puVar2;
	lVar6 = uVar5 + lVar9;
	lVar4 = (longlong)cVar1 - lVar9;
	if ((int)lVar9 < (int)cVar1) {
		do {
			*(undefined *)lVar6 = 0;
			lVar6 = lVar6 + 1;
			lVar4 = lVar4 + -1;
		} while (lVar4 != 0);
		return;
	}
	return;
}

void AddVision(undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = _DAT_100f1e8c;
	puVar3 = PTR_DAT_100f1e70;
	puVar2 = PTR_DAT_100f1e6c;
	if (0x1f < *(int *)PTR_DAT_100f1e6c) {
		return;
	}
	iVar6 = *(int *)PTR_DAT_100f1e6c * 0x34;
	*(undefined4 *)(_DAT_100f1e8c + iVar6) = param_1;
	iVar5 = iVar4 + iVar6;
	*(undefined4 *)(iVar5 + 4) = param_2;
	*(undefined4 *)(iVar5 + 8) = param_3;
	iVar1 = *(int *)puVar3;
	*(int *)puVar3 = iVar1 + 1;
	*(int *)(iVar5 + 0xc) = iVar1;
	*(undefined4 *)(iVar5 + 0x10) = 0;
	*(undefined4 *)(iVar5 + 0x14) = 0;
	puVar3 = PTR_DAT_100f212c;
	*(uint *)(iVar4 + iVar6 + 0x30) = (uint)(param_4 != 0);
	*(int *)puVar2 = *(int *)puVar2 + 1;
	*(undefined4 *)puVar3 = 1;
	return;
}

void ChangeVisionRadius(int param_1, undefined4 param_2)

{
	undefined *puVar1;
	ulonglong uVar2;
	undefined4 *puVar3;

	puVar1 = PTR_DAT_100f212c;
	uVar2 = (ulonglong) * (uint *)PTR_DAT_100f1e6c;
	puVar3 = _DAT_100f1e8c;
	if ((int)*(uint *)PTR_DAT_100f1e6c < 1) {
		return;
	}
	do {
		if (param_1 == puVar3[3]) {
			puVar3[5] = 1;
			puVar3[7] = *puVar3;
			puVar3[8] = puVar3[1];
			puVar3[9] = puVar3[2];
			puVar3[2] = param_2;
			*(undefined4 *)puVar1 = 1;
		}
		puVar3 = puVar3 + 0xd;
		uVar2 = uVar2 - 1;
	} while (uVar2 != 0);
	return;
}

void ChangeVisionXY(int param_1, undefined4 param_2, undefined4 param_3)

{
	undefined *puVar1;
	ulonglong uVar2;
	undefined4 *puVar3;

	puVar1 = PTR_DAT_100f212c;
	uVar2 = (ulonglong) * (uint *)PTR_DAT_100f1e6c;
	puVar3 = _DAT_100f1e8c;
	if ((int)*(uint *)PTR_DAT_100f1e6c < 1) {
		return;
	}
	do {
		if (param_1 == puVar3[3]) {
			puVar3[5] = 1;
			puVar3[7] = *puVar3;
			puVar3[8] = puVar3[1];
			puVar3[9] = puVar3[2];
			*puVar3 = param_2;
			puVar3[1] = param_3;
			*(undefined4 *)puVar1 = 1;
		}
		puVar3 = puVar3 + 0xd;
		uVar2 = uVar2 - 1;
	} while (uVar2 != 0);
	return;
}

longlong ProcessVisionList(char param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, char param_6, char param_7, char param_8, undefined4 param_9)

{
	char cVar1;
	uint uVar2;
	undefined *puVar3;
	undefined *puVar4;
	uint *puVar5;
	undefined *puVar6;
	ulonglong uVar7;
	longlong lVar8;
	longlong lVar9;
	uint *puVar10;
	longlong lVar11;
	longlong lVar12;
	undefined *puVar14;
	ulonglong uVar13;
	longlong lVar15;
	int iVar16;
	uint *puVar17;
	ulonglong uVar18;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffc0;

	puVar6 = PTR_DAT_100f212c;
	puVar5 = _DAT_100f1e8c;
	puVar4 = PTR_DAT_100f1e6c;
	puVar3 = PTR_DAT_100f1ab8;
	uVar13 = SEXT18(param_8);
	lVar12 = (longlong)param_7;
	lVar11 = (longlong)param_6;
	lVar15 = (longlong)param_1;
	uVar18 = (ulonglong)_DAT_100f1d68;
	if (*(int *)PTR_DAT_100f212c != 0) {
		iVar16 = 0;
		puVar17 = _DAT_100f1e8c;
		while (iVar16 < *(int *)puVar4) {
			if (puVar17[4] != 0) {
				DoUnVision((ulonglong)*puVar17, (ulonglong)puVar17[1], (ulonglong)puVar17[2]);
			}
			if (puVar17[5] != 0) {
				DoUnVision((ulonglong)puVar17[7], (ulonglong)puVar17[8], (ulonglong)puVar17[9]);
				puVar17[5] = 0;
			}
			puVar17 = puVar17 + 0xd;
			iVar16 = iVar16 + 1;
		}
		cVar1 = *puVar3;
		lVar15 = 0;
		if ('\0' < cVar1) {
			if ('\b' < cVar1) {
				uVar7 = (ulonglong)((int)cVar1 - 1U >> 3);
				lVar12 = 0;
				lVar11 = 0;
				uVar13 = uVar18;
				if (0 < (int)cVar1 + -8) {
					do {
						puVar14 = (undefined *)uVar13;
						*puVar14 = 0;
						lVar15 = lVar15 + 8;
						puVar14[1] = 0;
						puVar14[2] = 0;
						puVar14[3] = 0;
						puVar14[4] = 0;
						puVar14[5] = 0;
						puVar14[6] = 0;
						puVar14[7] = 0;
						uVar13 = uVar13 + 8;
						uVar7 = uVar7 - 1;
					} while (uVar7 != 0);
				}
			}
			cVar1 = *puVar3;
			lVar9 = uVar18 + lVar15;
			lVar8 = (longlong)cVar1 - lVar15;
			if ((int)lVar15 < (int)cVar1) {
				do {
					*(undefined *)lVar9 = 0;
					lVar9 = lVar9 + 1;
					lVar8 = lVar8 + -1;
				} while (lVar8 != 0);
			}
		}
		iVar16 = 0;
		puVar17 = puVar5;
		while (iVar16 < *(int *)puVar4) {
			if (puVar17[4] == 0) {
				DoVision((ulonglong)*puVar17, (ulonglong)puVar17[1], puVar17[2], puVar17[0xc] & 1,
				    puVar17[0xc] & 1, (char)lVar11, (char)lVar12, (char)uVar13, in_stack_ffffffa8,
				    in_stack_ffffffaf, in_stack_ffffffc0);
			}
			puVar17 = puVar17 + 0xd;
			iVar16 = iVar16 + 1;
		}
		puVar17 = puVar5 + *(int *)puVar4 * 0xd;
		do {
			lVar15 = 0;
			iVar16 = 0;
			puVar10 = puVar5;
			while (iVar16 < *(int *)puVar4) {
				if (puVar10[4] != 0) {
					*(int *)puVar4 = *(int *)puVar4 + -1;
					if ((0 < *(int *)puVar4) && (iVar16 != *(int *)puVar4)) {
						uVar2 = puVar17[-0xc];
						*puVar10 = puVar17[-0xd];
						puVar10[1] = uVar2;
						uVar2 = puVar17[-10];
						puVar10[2] = puVar17[-0xb];
						puVar10[3] = uVar2;
						uVar2 = puVar17[-8];
						puVar10[4] = puVar17[-9];
						puVar10[5] = uVar2;
						uVar2 = puVar17[-6];
						puVar10[6] = puVar17[-7];
						puVar10[7] = uVar2;
						uVar2 = puVar17[-4];
						puVar10[8] = puVar17[-5];
						puVar10[9] = uVar2;
						uVar2 = puVar17[-2];
						puVar10[10] = puVar17[-3];
						puVar10[0xb] = uVar2;
						puVar10[0xc] = puVar17[-1];
					}
					lVar15 = 1;
					puVar17 = puVar17 + -0xd;
				}
				puVar10 = puVar10 + 0xd;
				iVar16 = iVar16 + 1;
			}
		} while ((int)lVar15 != 0);
	}
	*(undefined4 *)puVar6 = 0;
	return lVar15;
}

void lighting_color_cycling(void)

{
	undefined uVar1;
	undefined *puVar2;
	longlong lVar3;
	int iVar4;
	int iVar5;
	undefined *puVar6;

	if (*(int *)PTR_DAT_100f1864 == 0) {
		iVar5 = 0x10;
	} else {
		iVar5 = 4;
	}
	if (*PTR_DAT_100f183c != '\x04') {
		return;
	}
	iVar4 = 0;
	puVar6 = *(undefined **)PTR_DAT_100f1860;
	while (iVar4 < iVar5) {
		uVar1 = puVar6[1];
		puVar6[1] = puVar6[2];
		puVar6[2] = puVar6[3];
		puVar6[3] = puVar6[4];
		puVar6[4] = puVar6[5];
		puVar6[5] = puVar6[6];
		puVar6[6] = puVar6[7];
		puVar6[7] = puVar6[8];
		puVar6[8] = puVar6[9];
		puVar6[9] = puVar6[10];
		puVar6[10] = puVar6[0xb];
		puVar6[0xb] = puVar6[0xc];
		puVar6[0xc] = puVar6[0xd];
		puVar6[0xd] = puVar6[0xe];
		puVar6[0xe] = puVar6[0xf];
		puVar6[0xf] = puVar6[0x10];
		puVar6[0x10] = puVar6[0x11];
		puVar6[0x11] = puVar6[0x12];
		puVar6[0x12] = puVar6[0x13];
		puVar6[0x13] = puVar6[0x14];
		puVar6[0x14] = puVar6[0x15];
		puVar6[0x15] = puVar6[0x16];
		puVar6[0x16] = puVar6[0x17];
		puVar6[0x17] = puVar6[0x18];
		puVar6[0x18] = puVar6[0x19];
		lVar3 = 6;
		puVar2 = puVar6 + 0x19;
		do {
			puVar6 = puVar2;
			*puVar6 = puVar6[1];
			lVar3 = lVar3 + -1;
			puVar2 = puVar6 + 1;
		} while (lVar3 != 0);
		puVar6[1] = uVar1;
		puVar6 = puVar6 + 0xe2;
		iVar4 = iVar4 + 1;
	}
	return;
}
