
void FreeQuestText(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	mem_free_dbg((int **)&DAT_100f4208, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	mem_free_dbg((int **)(ppuVar1 + -0x1373), param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	return;
}

void InitQuestText(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined **ppuVar2;
	longlong lVar3;
	undefined4 in_stack_ffffffc8;

	ppuVar2 = &toc;
	lVar3 = LoadFileInMem(ZEXT48(PTR_s_Data_MedTextS_CEL_100f3088), (undefined4 *)0x0, param_3, param_4,
	    param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	ppuVar2[-0x1372] = (undefined *)lVar3;
	lVar3 = LoadFileInMem(ZEXT48(ppuVar2[-0x17d3]), (undefined4 *)0x0, param_3, param_4, param_5, param_6,
	    param_7, param_8, in_stack_ffffffc8);
	ppuVar2[-0x1373] = (undefined *)lVar3;
	puVar1 = ppuVar2[-0x1c42];
	*ppuVar2[-0x1dcc] = 0;
	*puVar1 = 0;
	return;
}

void InitQTextMsg(int param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined4 *puVar3;
	int iVar4;
	undefined **ppuVar5;
	longlong lVar6;
	undefined4 uVar7;
	ulonglong uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	int iVar14;
	undefined4 in_stack_ffffffb8;
	undefined uVar15;
	undefined in_stack_ffffffbf;
	int local_3c;

	iVar4 = _DAT_100f1ec4;
	puVar3 = _DAT_100f1ec0;
	uVar15 = (undefined)in_stack_ffffffb8;
	uVar10 = (undefined)param_5;
	uVar9 = (undefined)param_4;
	uVar13 = (undefined)param_8;
	uVar12 = (undefined)param_7;
	uVar11 = (undefined)param_6;
	ppuVar5 = &toc;
	param_1 = param_1 * 0x10;
	iVar14 = _DAT_100f1ec4 + param_1;
	if (*(int *)(iVar14 + 4) != 0) {
		uVar8 = ZEXT48(PTR_DAT_100f1808);
		*(undefined4 *)PTR_DAT_100f1808 = 0;
		sound_disable_music(1, uVar8, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
		puVar1 = ppuVar5[-0x1dcc];
		*ppuVar5[-0x1c42] = 1;
		puVar2 = ppuVar5[-0x1c45];
		*puVar1 = 1;
		puVar1 = *(undefined **)(iVar4 + param_1);
		ppuVar5[-0x1374] = puVar1;
		ppuVar5[-0x1375] = (undefined *)0x1f4;
		lVar6 = ZEXT48(puVar2) + (ulonglong)(uint)(*(int *)(iVar14 + 8) << 2);
		*puVar3 = *(undefined4 *)((int)lVar6 + -4);
		ppuVar5[-0x1376] = (undefined *)*puVar3;
		uVar7 = GetTickCount((char)lVar6, (char)puVar1, 1, uVar9, uVar10, uVar11, uVar12, uVar13, uVar15,
		    in_stack_ffffffbf, local_3c);
		*(undefined4 *)(local_3c + -0x4ddc) = uVar7;
	}
	PlaySFX((ulonglong) * (uint *)(iVar4 + param_1 + 0xc));
	return;
}

void music_stop2(undefined8 param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined4 in_stack_ffffffc8;

	puVar1 = PTR_DAT_100f1ec8;
	if (*PTR_DAT_100f1ec8 != '\0') {
		sound_disable_music(0, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		*puVar1 = 0;
	}
	return;
}

void DrawQTextBack(void)

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
	CelDecodeOnly(0x58, 0x1e7, (ulonglong)_DAT_100f4204, 1, 0x24f, in_r8, in_r9, in_r10, in_stack_ffffffc8);
	lVar5 = 0x94;
	puVar4 = (undefined *)(*(int *)ppuVar1[-0x1e01] + 0x5ac5b);
	do {
		lVar2 = 0x124;
		do {
			puVar3 = puVar4;
			lVar2 = lVar2 + -1;
			*puVar3 = 0;
			puVar4 = puVar3 + 2;
		} while (lVar2 != 0);
		puVar3[2] = 0;
		lVar2 = 0x124;
		puVar3 = puVar3 + -0x546;
		do {
			puVar4 = puVar3;
			lVar2 = lVar2 + -1;
			puVar4[1] = 0;
			puVar3 = puVar4 + 2;
		} while (lVar2 != 0);
		lVar5 = lVar5 + -1;
		puVar4 = puVar4 + -0x546;
	} while (lVar5 != 0);
	lVar5 = 0x124;
	do {
		lVar5 = lVar5 + -1;
		*puVar4 = 0;
		puVar4 = puVar4 + 2;
	} while (lVar5 != 0);
	*puVar4 = 0;
	return;
}

void PrintQTextChr(longlong param_1, undefined8 param_2, longlong param_3, ulonglong param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	char cVar1;
	uint uVar2;
	uint uVar3;
	ulonglong uVar4;
	undefined **ppuVar5;
	ulonglong uVar6;
	undefined *puVar7;
	undefined *puVar8;
	ulonglong uVar9;
	ulonglong uVar10;
	ulonglong uVar11;
	longlong lVar12;
	undefined uVar13;
	undefined uVar14;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	ulonglong uVar15;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffffa8;
	uint local_28[5];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	puVar7 = PTR_DAT_100f1938;
	uVar14 = (undefined)param_8;
	uVar13 = (undefined)param_7;
	ppuVar5 = &toc;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar6 = FUN_100b8f7c(param_3, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	uVar9 = (ulonglong) * (uint *)ppuVar5[-0x1e01];
	uVar2 = *(uint *)(puVar7 + 0x344);
	uVar3 = *(uint *)(puVar7 + 0x754);
	uVar15 = uVar9 + (ulonglong) * (uint *)(puVar7 + (int)param_2 * 4) + param_1;
	uVar6 = FUN_1003cdf8(uVar6, (int)param_4, (int *)local_28);
	uVar10 = uVar6 + (ulonglong)local_28[0];
	do {
		lVar12 = 0x16;
		do {
			cVar1 = *(char *)uVar6;
			uVar6 = uVar6 + 1;
			uVar11 = SEXT18(cVar1);
			if ((longlong)uVar11 < 0) {
				uVar15 = uVar15 - uVar11;
				lVar12 = lVar12 + uVar11;
			} else {
				lVar12 = lVar12 - uVar11;
				if (((uVar15 & 0xffffffff) < (uVar9 + (ulonglong)uVar2 & 0xffffffff)) || ((uVar9 + (ulonglong)uVar3 & 0xffffffff) < (uVar15 & 0xffffffff))) {
					uVar6 = uVar6 + uVar11;
					uVar15 = uVar15 + uVar11;
				} else {
					param_4 = uVar11;
					if (cVar1 != '\0') {
						uVar4 = (ulonglong)((uint)(int)cVar1 >> 3);
						param_4 = uVar11;
						if ((uint)(int)cVar1 >> 3 != 0) {
							do {
								puVar7 = (undefined *)uVar6;
								puVar8 = (undefined *)uVar15;
								*puVar8 = *puVar7;
								puVar8[1] = puVar7[1];
								puVar8[2] = puVar7[2];
								puVar8[3] = puVar7[3];
								puVar8[4] = puVar7[4];
								puVar8[5] = puVar7[5];
								puVar8[6] = puVar7[6];
								uVar6 = uVar6 + 8;
								puVar8[7] = puVar7[7];
								uVar15 = uVar15 + 8;
								uVar4 = uVar4 - 1;
							} while (uVar4 != 0);
							param_4 = uVar11 & 7;
							uVar11 = param_4;
							if (param_4 == 0)
								goto LAB_1005bf54;
						}
						do {
							puVar7 = (undefined *)uVar6;
							uVar6 = uVar6 + 1;
							*(undefined *)uVar15 = *puVar7;
							uVar15 = uVar15 + 1;
							uVar11 = uVar11 - 1;
						} while (uVar11 != 0);
					}
				}
			}
		LAB_1005bf54:
		} while ((int)lVar12 != 0);
		uVar15 = uVar15 - 0x316;
		if ((uVar10 & 0xffffffff) == (uVar6 & 0xffffffff)) {
			FUN_100b9100((int)param_3, (char)param_4, (char)uVar15, (char)uVar10, cVar1, (char)lVar12, uVar13,
			    uVar14, in_stack_ffffffa8);
			return;
		}
	} while (true);
}

void DrawQText(undefined8 param_1, ulonglong param_2, ulonglong param_3, ulonglong param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	byte bVar1;
	uint uVar2;
	undefined *puVar3;
	bool bVar4;
	int *piVar5;
	int iVar6;
	int iVar7;
	ulonglong uVar8;
	ulonglong uVar9;
	longlong lVar10;
	longlong lVar11;
	byte *pbVar12;
	undefined7 uVar13;
	undefined uVar14;
	undefined4 uVar15;
	longlong lVar16;
	undefined4 uVar17;
	longlong lVar18;
	undefined4 uVar19;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	ulonglong uVar20;
	undefined8 unaff_r24;
	longlong lVar21;
	undefined8 unaff_r25;
	ulonglong uVar22;
	undefined8 unaff_r26;
	ulonglong uVar23;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff18;
	undefined in_stack_ffffff1f;
	int local_dc;
	byte local_b8[136];
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

	iVar7 = _DAT_100f3080;
	iVar6 = _DAT_100f307c;
	piVar5 = _DAT_100f1ec0;
	uVar13 = (undefined7)((ulonglong)param_5 >> 8);
	uVar14 = (undefined)param_5;
	lVar18 = (longlong)param_8;
	lVar16 = (longlong)param_7;
	lVar11 = (longlong)param_6;
	uVar8 = ZEXT48(&toc);
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
	uVar9 = DrawQTextBack();
	uVar23 = (ulonglong) * (uint *)((int)uVar8 + -0x4dd0);
	uVar20 = (ulonglong) * (uint *)((int)uVar8 + -0x4dd4);
	uVar22 = 0;
	bVar4 = false;
	while (true) {
		uVar19 = (undefined4)lVar18;
		uVar17 = (undefined4)lVar16;
		uVar15 = (undefined4)lVar11;
		lVar21 = 0x70;
		if (bVar4)
			break;
		lVar10 = 0;
		param_4 = 0;
		param_3 = uVar23;
		while (true) {
			pbVar12 = (byte *)param_3;
			if (((*pbVar12 == 10) || (*pbVar12 == 0x7c)) || (0x21e < (int)lVar10))
				break;
			param_3 = param_3 + 1;
			bVar1 = (&DAT_100f64e8)[(uint)*pbVar12];
			if (bVar1 == 0) {
				param_4 = param_4 - 1;
			} else {
				local_b8[(int)param_4] = bVar1;
				lVar10 = (ulonglong) * (byte *)(iVar6 + (uint) * (byte *)(iVar7 + (uint)bVar1)) + lVar10 + 2;
			}
			param_4 = param_4 + 1;
		}
		param_2 = (ZEXT48(register0x0000000c) - 0xb8) + param_4;
		*(undefined *)param_2 = 0;
		if (*pbVar12 == 0x7c) {
			*(undefined *)param_2 = 0;
			bVar4 = true;
		} else {
			if (*pbVar12 != 10) {
				while ((*(char *)param_2 != ' ' && (0 < (int)param_4))) {
					*(char *)param_2 = '\0';
					param_2 = param_2 - 1;
					param_4 = param_4 - 1;
				}
			}
		}
		lVar10 = ZEXT48(register0x0000000c) - 0xb8;
		while (true) {
			bVar1 = *(byte *)lVar10;
			uVar9 = (ulonglong)bVar1;
			if (bVar1 == 0)
				break;
			uVar9 = uVar23 + 1;
			bVar1 = *(byte *)(iVar7 + (uint)(byte)(&DAT_100f64e8)[(uint)bVar1]);
			param_4 = (ulonglong)bVar1;
			if (*(char *)uVar9 == '\n') {
				uVar9 = uVar23 + 2;
			}
			if (bVar1 != 0) {
				param_3 = (ulonglong) * (uint *)((int)uVar8 + -0x4dc8);
				param_2 = uVar20;
				PrintQTextChr(lVar21, uVar20, param_3, param_4, CONCAT71(uVar13, uVar14), (int)lVar11, (int)lVar16,
				    (int)lVar18, in_stack_ffffff18);
			}
			lVar10 = lVar10 + 1;
			lVar21 = (ulonglong) * (byte *)(iVar6 + (uint)bVar1) + lVar21 + 2;
			uVar23 = uVar9;
		}
		if ((uVar22 & 0xffffffff) == 0) {
			uVar22 = uVar23;
		}
		uVar20 = uVar20 + 0x26;
		if (0x1f5 < (int)uVar20) {
			bVar4 = true;
		}
	}
	lVar11 = GetTickCount((char)uVar9, (char)param_2, (char)param_3, (char)param_4, uVar14, (char)lVar11,
	    (char)lVar16, (char)lVar18, (char)in_stack_ffffff18, in_stack_ffffff1f, local_dc);
	while (true) {
		if (*piVar5 < 1) {
			*(int *)(local_dc + -0x4dd4) = *(int *)(local_dc + -0x4dd4) + -1;
			param_3 = (ulonglong) * (uint *)(local_dc + -0x4dd4);
			*(int *)(local_dc + -0x4dd4) = *(uint *)(local_dc + -0x4dd4) + *piVar5;
		} else {
			*(int *)(local_dc + -0x4dd8) = *(int *)(local_dc + -0x4dd8) + -1;
			if (*(int *)(local_dc + -0x4dd8) != 0) {
				*(int *)(local_dc + -0x4dd4) = *(int *)(local_dc + -0x4dd4) + -1;
			}
		}
		if (*(int *)(local_dc + -0x4dd8) == 0) {
			*(int *)(local_dc + -0x4dd8) = *piVar5;
		}
		uVar2 = *(uint *)(local_dc + -0x4dd4);
		if ((int)uVar2 < 0xd2)
			break;
		*(int *)(local_dc + -0x4ddc) = *(int *)(local_dc + -0x4ddc) + 0x32;
		if (0x7ffffffe < (lVar11 - (ulonglong) * (uint *)(local_dc + -0x4ddc) & 0xffffffff)) {
			return;
		}
	}
	*(undefined4 *)(local_dc + -0x4dd0) = (int)uVar22;
	*(int *)(local_dc + -0x4dd4) = uVar2 + 0x26;
	if (**(char **)(local_dc + -0x4dd0) != '|') {
		return;
	}
	puVar3 = *(undefined **)(local_dc + -0x7730);
	*puVar3 = 0;
	music_stop2(ZEXT48(puVar3), (ulonglong)uVar2, param_3, param_4, CONCAT71(uVar13, uVar14), uVar15, uVar17, uVar19, in_stack_ffffff18);
	return;
}
