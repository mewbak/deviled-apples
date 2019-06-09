
void FillSolidBlockTbls(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	uint uVar3;
	uint uVar4;
	ulonglong uVar5;
	ulonglong uVar6;
	longlong lVar7;
	undefined uVar8;
	longlong lVar9;
	undefined uVar10;
	longlong lVar11;
	undefined uVar12;
	longlong lVar13;
	undefined uVar14;
	longlong lVar15;
	undefined uVar16;
	longlong lVar17;
	undefined uVar18;
	byte bVar19;
	undefined8 unaff_r27;
	ulonglong uVar20;
	undefined8 unaff_r28;
	ulonglong uVar21;
	undefined8 unaff_r29;
	ulonglong uVar22;
	undefined8 unaff_r30;
	ulonglong uVar23;
	undefined8 unaff_r31;
	ulonglong uVar24;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	int local_4c;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	int *local_28;
	uint local_24;
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	uVar4 = _DAT_100f1da4;
	uVar3 = _DAT_100f1da0;
	puVar2 = PTR_DAT_100f1d9c;
	puVar1 = PTR_DAT_100f1d98;
	uVar5 = ZEXT48(register0x0000000c);
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar24 = (ulonglong)_DAT_100f1da8;
	uVar20 = ZEXT48(PTR_DAT_100f1d98);
	uVar21 = ZEXT48(PTR_DAT_100f1d9c);
	uVar22 = (ulonglong)_DAT_100f1da0;
	uVar23 = (ulonglong)_DAT_100f1da4;
	memset((char)_DAT_100f1da8, 1, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
	    (char)param_7, (char)param_8, (char)in_stack_ffffffa8, in_stack_ffffffaf, local_4c);
	memset((char)uVar4, 1, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7,
	    (char)param_8, (char)in_stack_ffffffa8, in_stack_ffffffaf, local_4c);
	memset((char)uVar3, 1, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7,
	    (char)param_8, (char)in_stack_ffffffa8, in_stack_ffffffaf, local_4c);
	memset((char)puVar2, 1, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7,
	    (char)param_8, (char)in_stack_ffffffa8, in_stack_ffffffaf, local_4c);
	lVar7 = 0x801;
	memset((char)puVar1, 1, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7,
	    (char)param_8, (char)in_stack_ffffffa8, in_stack_ffffffaf, local_4c);
	bVar19 = **(byte **)(local_4c + -0x7794);
	if (bVar19 == 2) {
		lVar7 = uVar5 - 0x24;
		lVar9 = LoadFileInMem((ulonglong) * (uint *)(local_4c + -0x6240), (undefined4 *)lVar7, param_3,
		    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
		local_28 = (int *)lVar9;
	} else {
		if (bVar19 < 2) {
			if (bVar19 == 0) {
				lVar7 = uVar5 - 0x24;
				lVar9 = LoadFileInMem((ulonglong) * (uint *)(local_4c + -0x6238), (undefined4 *)lVar7, param_3,
				    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
				local_28 = (int *)lVar9;
			} else {
				lVar7 = uVar5 - 0x24;
				lVar9 = LoadFileInMem((ulonglong) * (uint *)(local_4c + -0x623c), (undefined4 *)lVar7, param_3,
				    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
				local_28 = (int *)lVar9;
			}
		} else {
			if (bVar19 == 4) {
				lVar7 = uVar5 - 0x24;
				lVar9 = LoadFileInMem((ulonglong) * (uint *)(local_4c + -0x6248), (undefined4 *)lVar7, param_3,
				    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
				local_28 = (int *)lVar9;
			} else {
				if (bVar19 < 4) {
					lVar7 = uVar5 - 0x24;
					lVar9 = LoadFileInMem((ulonglong) * (uint *)(local_4c + -0x6244), (undefined4 *)lVar7, param_3,
					    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
					local_28 = (int *)lVar9;
				} else {
					app_fatal(*(int *)(local_4c + -0x624c), lVar7, param_3, param_4, param_5, param_6, param_7,
					    param_8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffb8,
					    in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8,
					    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
				}
			}
		}
	}
	bVar19 = (byte)param_8;
	uVar6 = FUN_100b8f7c(ZEXT48(local_28), lVar7, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	uVar5 = (ulonglong)local_24;
	lVar9 = uVar23 + 1;
	uVar10 = (undefined)lVar9;
	lVar11 = uVar24 + 1;
	uVar12 = (undefined)lVar11;
	lVar13 = uVar21 + 1;
	uVar14 = (undefined)lVar13;
	lVar15 = uVar22 + 1;
	uVar16 = (undefined)lVar15;
	lVar17 = uVar20 + 1;
	uVar18 = (undefined)lVar17;
	lVar7 = (ulonglong) * (uint *)(local_4c + -0x723c) + 1;
	uVar8 = (undefined)lVar7;
	if (local_24 != 0) {
		do {
			bVar19 = *(byte *)uVar6;
			uVar6 = uVar6 + 1;
			if ((bVar19 & 1) != 0) {
				*(undefined *)lVar9 = 1;
			}
			if ((bVar19 & 2) != 0) {
				*(undefined *)lVar11 = 1;
			}
			if ((bVar19 & 4) != 0) {
				*(undefined *)lVar13 = 1;
			}
			if ((bVar19 & 8) != 0) {
				*(undefined *)lVar15 = 1;
			}
			if ((bVar19 & 0x80) != 0) {
				*(undefined *)lVar17 = 1;
			}
			lVar15 = lVar15 + 1;
			uVar16 = (undefined)lVar15;
			*(byte *)lVar7 = bVar19 >> 4 & 7;
			lVar17 = lVar17 + 1;
			uVar18 = (undefined)lVar17;
			lVar7 = lVar7 + 1;
			uVar8 = (undefined)lVar7;
			lVar9 = lVar9 + 1;
			uVar10 = (undefined)lVar9;
			lVar11 = lVar11 + 1;
			uVar12 = (undefined)lVar11;
			lVar13 = lVar13 + 1;
			uVar14 = (undefined)lVar13;
			uVar5 = uVar5 - 1;
		} while (uVar5 != 0);
	}
	FUN_100b9100((int)local_28, uVar8, uVar10, uVar12, uVar14, uVar16, uVar18, bVar19, in_stack_ffffffa8);
	mem_free_dbg(&local_28, uVar8, uVar10, uVar12, uVar14, uVar16, uVar18, bVar19, in_stack_ffffffa8);
	return;
}

void SwapTile(int param_1, int param_2)

{
	undefined2 uVar1;
	undefined4 uVar2;
	int iVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined2 *puVar7;
	undefined2 *puVar8;
	undefined4 *puVar9;
	undefined4 *puVar10;
	undefined4 *puVar11;

	puVar6 = PTR_DAT_100f2d80;
	iVar3 = param_1 * 4;
	iVar4 = param_2 * 4;
	puVar9 = (undefined4 *)(PTR_DAT_100f1d90 + iVar4);
	uVar2 = *(undefined4 *)(PTR_DAT_100f1d90 + iVar3);
	*(undefined4 *)(PTR_DAT_100f1d90 + iVar3) = *puVar9;
	puVar5 = PTR_DAT_100f1d8c;
	puVar10 = (undefined4 *)(puVar6 + iVar3);
	puVar11 = (undefined4 *)(puVar6 + iVar4);
	*puVar9 = uVar2;
	puVar6 = PTR_DAT_100f2d7c;
	puVar8 = (undefined2 *)(puVar5 + param_2 * 2);
	puVar7 = (undefined2 *)(puVar5 + param_1 * 2);
	uVar2 = *puVar10;
	*puVar10 = *puVar11;
	puVar9 = (undefined4 *)(puVar6 + iVar3);
	puVar10 = (undefined4 *)(puVar6 + iVar4);
	*puVar11 = uVar2;
	uVar1 = *puVar7;
	*puVar7 = *puVar8;
	*puVar8 = uVar1;
	uVar2 = *puVar9;
	*puVar9 = *puVar10;
	*puVar10 = uVar2;
	return;
}

void SortTiles(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	bool bVar1;
	undefined *puVar2;
	int iVar3;
	int *piVar4;

	puVar2 = PTR_DAT_100f1d90;
	bVar1 = false;
	while ((0 < param_1 && (!bVar1))) {
		bVar1 = true;
		iVar3 = 0;
		piVar4 = (int *)puVar2;
		while (iVar3 < param_1) {
			if (*piVar4 < piVar4[1]) {
				SwapTile(iVar3, iVar3 + 1);
				bVar1 = false;
			}
			piVar4 = piVar4 + 1;
			iVar3 = iVar3 + 1;
		}
		param_1 = param_1 + -1;
	}
	return;
}

void MakeSpeedCels(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	byte bVar1;
	ushort uVar2;
	longlong lVar3;
	uint uVar4;
	bool bVar5;
	bool bVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined *puVar12;
	undefined *puVar13;
	undefined *puVar14;
	longlong lVar15;
	uint uVar16;
	ulonglong uVar17;
	ulonglong uVar18;
	char *pcVar20;
	ulonglong uVar19;
	byte *pbVar21;
	ushort *puVar22;
	undefined4 *puVar24;
	ulonglong uVar23;
	undefined uVar26;
	undefined *puVar25;
	undefined2 *puVar28;
	longlong lVar27;
	undefined uVar30;
	int iVar29;
	ulonglong uVar31;
	int iVar32;
	undefined uVar33;
	longlong lVar34;
	undefined uVar35;
	char cVar36;
	ulonglong uVar37;
	undefined uVar39;
	uint uVar38;
	longlong lVar40;
	undefined uVar41;
	longlong lVar42;
	undefined uVar43;
	ulonglong uVar44;
	uint *puVar45;
	int *piVar46;
	uint *puVar47;
	int iVar48;
	ulonglong uVar49;
	int iVar50;
	short *psVar51;
	int *piVar52;
	int iVar53;
	uint uVar54;
	longlong lVar55;
	longlong lVar56;
	undefined4 in_stack_ffffff68;
	short *local_5c;
	int *local_58;

	puVar14 = PTR_DAT_100f2d80;
	puVar47 = (uint *)PTR_DAT_100f2d7c;
	puVar13 = PTR_DAT_100f1d90;
	puVar12 = PTR_DAT_100f1d8c;
	puVar11 = PTR_DAT_100f1a58;
	puVar10 = PTR_DAT_100f1a54;
	puVar9 = PTR_DAT_100f1a50;
	puVar8 = PTR_DAT_100f19e8;
	puVar7 = PTR_DAT_100f1860;
	puVar25 = PTR_DAT_100f183c;
	uVar19 = ZEXT48(&toc);
	uVar31 = 0;
	uVar44 = ZEXT48(PTR_DAT_100f1d88);
	lVar55 = 0x100;
	piVar46 = (int *)PTR_DAT_100f2d80;
	puVar24 = (undefined4 *)PTR_DAT_100f1d90;
	puVar28 = (undefined2 *)PTR_DAT_100f1d8c;
	do {
		iVar32 = (int)uVar31;
		*piVar46 = iVar32;
		lVar34 = uVar31 + 1;
		*puVar24 = 0;
		*puVar28 = 0;
		piVar46[1] = (int)lVar34;
		uVar31 = uVar31 + 8;
		puVar24[1] = 0;
		puVar28[1] = 0;
		piVar46[2] = iVar32 + 2;
		puVar24[2] = 0;
		puVar28[2] = 0;
		piVar46[3] = iVar32 + 3;
		puVar24[3] = 0;
		puVar28[3] = 0;
		piVar46[4] = iVar32 + 4;
		puVar24[4] = 0;
		puVar28[4] = 0;
		piVar46[5] = iVar32 + 5;
		puVar24[5] = 0;
		puVar28[5] = 0;
		piVar46[6] = iVar32 + 6;
		puVar24[6] = 0;
		puVar28[6] = 0;
		piVar46[7] = iVar32 + 7;
		piVar46 = piVar46 + 8;
		puVar24[7] = 0;
		puVar24 = puVar24 + 8;
		puVar28[7] = 0;
		puVar28 = puVar28 + 8;
		lVar55 = lVar55 + -1;
	} while (lVar55 != 0);
	if (*puVar25 == '\x04') {
		lVar55 = 0xc;
	} else {
		lVar55 = 10;
	}
	uVar54 = *(uint *)puVar9;
	lVar42 = 0;
	lVar40 = 0;
	do {
		lVar27 = 0;
		uVar37 = (ulonglong)uVar54;
		do {
			uVar23 = uVar37 + lVar40;
			lVar56 = lVar55;
			if ((int)lVar55 != 0) {
				do {
					uVar2 = *(ushort *)uVar23;
					uVar31 = (ulonglong)uVar2;
					if (uVar2 != 0) {
						iVar32 = ((uint)uVar2 & 0xfff) * 4;
						lVar34 = 0;
						uVar38 = ((uint)uVar2 & 0xfff) * 2;
						uVar31 = (ulonglong)uVar38;
						*(int *)(puVar13 + iVar32) = *(int *)(puVar13 + iVar32) + 1;
						*(ushort *)(puVar12 + uVar38) = uVar2 & 0x7000;
					}
					uVar23 = uVar23 + 2;
					lVar56 = lVar56 + -1;
				} while (lVar56 != 0);
			}
			lVar27 = lVar27 + 1;
			uVar37 = uVar37 + 0xe00;
		} while ((int)lVar27 < 0x70);
		lVar42 = lVar42 + 1;
		lVar40 = lVar40 + 0x20;
	} while ((int)lVar42 < 0x70);
	uVar17 = FUN_1003cdc8(*(byte **)puVar8);
	*(uint *)uVar44 = (uint)uVar17 & 0xffff;
	uVar17 = 1;
	puVar45 = puVar47;
	while (true) {
		iVar32 = (int)uVar19;
		uVar43 = (undefined)lVar42;
		uVar41 = (undefined)lVar40;
		uVar39 = (undefined)uVar37;
		uVar35 = (undefined)lVar34;
		uVar33 = (undefined)uVar31;
		uVar30 = (undefined)lVar27;
		uVar26 = (undefined)uVar23;
		puVar45 = puVar45 + 1;
		if (*(int *)uVar44 <= (int)uVar17)
			break;
		uVar23 = uVar17;
		lVar56 = FUN_1003cddc(*(int *)puVar8, (int)uVar17);
		uVar17 = uVar17 + 1;
		*puVar45 = (uint)lVar56 & 0xffff;
	}
	uVar17 = 0;
	*puVar47 = 0;
	piVar46 = (int *)puVar13;
	psVar51 = (short *)puVar12;
	puVar45 = puVar47;
	if (*puVar25 == '\x04') {
		while (true) {
			iVar32 = (int)uVar19;
			uVar43 = (undefined)lVar42;
			uVar41 = (undefined)lVar40;
			uVar39 = (undefined)uVar37;
			uVar35 = (undefined)lVar34;
			uVar33 = (undefined)uVar31;
			uVar30 = (undefined)lVar27;
			uVar26 = (undefined)uVar23;
			iVar48 = (int)uVar17;
			if (*(int *)uVar44 <= iVar48)
				break;
			if (iVar48 == 0) {
				*(undefined4 *)puVar13 = 0;
			}
			bVar5 = true;
			if (*piVar46 != 0) {
				if (*psVar51 == 0x1000) {
					uVar18 = FUN_1003cdd0(*(int *)puVar8, iVar48);
					uVar23 = 0x20;
					lVar56 = (ulonglong) * (uint *)puVar8 + uVar18;
					bVar5 = true;
					do {
						lVar27 = 0x20;
						do {
							pcVar20 = (char *)lVar56;
							lVar56 = lVar56 + 1;
							lVar15 = (longlong)*pcVar20;
							lVar3 = lVar15;
							if (-1 < lVar15) {
								lVar3 = -lVar15;
								do {
									bVar1 = *(byte *)lVar56;
									uVar31 = (ulonglong)bVar1;
									lVar56 = lVar56 + 1;
									if ((bVar1 != 0) && (bVar1 < 0x20)) {
										bVar5 = false;
									}
									lVar15 = lVar15 + -1;
								} while (lVar15 != 0);
							}
							lVar27 = lVar27 + lVar3;
						} while ((int)lVar27 != 0);
						uVar23 = uVar23 - 1;
					} while (uVar23 != 0);
				} else {
					uVar54 = *puVar45;
					uVar49 = (ulonglong)uVar54;
					uVar23 = uVar17;
					uVar18 = FUN_1003cdd0(*(int *)puVar8, iVar48);
					lVar56 = (ulonglong) * (uint *)puVar8 + uVar18;
					bVar6 = true;
					if (uVar54 != 0) {
						do {
							bVar1 = *(byte *)lVar56;
							uVar23 = (ulonglong)bVar1;
							lVar56 = lVar56 + 1;
							bVar5 = bVar6;
							if (('\0' < (char)bVar1) && (bVar5 = bVar6, (char)bVar1 < ' ')) {
								bVar5 = false;
							}
							uVar49 = uVar49 - 1;
							bVar6 = bVar5;
						} while (uVar49 != 0);
					}
				}
				if (!bVar5) {
					*piVar46 = 0;
				}
			}
			uVar17 = uVar17 + 1;
			piVar46 = piVar46 + 1;
			psVar51 = psVar51 + 1;
			puVar45 = puVar45 + 1;
		}
	}
	SortTiles(0x7ff, uVar26, uVar30, uVar33, uVar35, uVar39, uVar41, uVar43, in_stack_ffffff68);
	iVar48 = 0;
	uVar54 = 0;
	piVar46 = (int *)puVar47;
	if (**(int **)(iVar32 + -0x776c) == 0) {
		while (iVar48 < 0x100000) {
			uVar54 = uVar54 + 1;
			iVar48 = iVar48 + *piVar46 * 0xe;
			piVar46 = piVar46 + 1;
		}
	} else {
		while (iVar48 < 0x100000) {
			uVar54 = uVar54 + 1;
			iVar48 = iVar48 + *piVar46 * 2;
			piVar46 = piVar46 + 1;
		}
	}
	uVar54 = uVar54 - 1;
	if (0x80 < (int)uVar54) {
		uVar54 = 0x80;
	}
	iVar48 = 0;
	if (**(int **)(iVar32 + -0x776c) == 0) {
		uVar54 = 0xf;
	} else {
		uVar54 = 3;
	}
	piVar46 = *(int **)(iVar32 + -0x724c);
	lVar34 = 0;
	local_58 = (int *)puVar14;
	local_5c = (short *)puVar12;
	do {
		if ((int)uVar54 <= (int)lVar34) {
			uVar54 = 0;
			iVar48 = 0;
			iVar32 = 0;
			do {
				iVar53 = 0;
				iVar29 = 0;
				iVar50 = 0;
				do {
					if ((*(short *)(iVar48 + *(int *)puVar10 + iVar29) != 0) && (puVar22 = (ushort *)(*(int *)puVar9 + iVar50 + iVar32), lVar34 = lVar55, (int)lVar55 != 0)) {
						do {
							if (*puVar22 != 0) {
								uVar38 = 0;
								while (uVar16 = uVar38 & 0xffff, (int)uVar16 < (int)uVar54) {
									uVar4 = uVar38 & 0xffff;
									if (((uint)*puVar22 & 0xfff) == *(uint *)(puVar14 + (uVar38 & 0xffff) * 4)) {
										uVar38 = uVar54 & 0xffff;
										*puVar22 = *(short *)(puVar12 + uVar4 * 2) + (short)uVar16 + 0x8000;
									}
									uVar38 = uVar38 + 1;
								}
							}
							puVar22 = puVar22 + 1;
							lVar34 = lVar34 + -1;
						} while (lVar34 != 0);
					}
					iVar53 = iVar53 + 1;
					iVar50 = iVar50 + 0xe00;
					iVar29 = iVar29 + 0xe0;
				} while (iVar53 < 0x70);
				uVar54 = uVar54 + 1;
				iVar32 = iVar32 + 0x20;
				iVar48 = iVar48 + 2;
			} while (uVar54 < 0x70);
			return;
		}
		iVar32 = *local_58;
		*piVar46 = iVar32;
		if (*local_5c == 0x1000) {
			iVar50 = 1;
			iVar53 = 0x100;
			piVar52 = piVar46;
			while (piVar52 = piVar52 + 1, iVar50 < uVar54) {
				*piVar52 = iVar48;
				uVar19 = FUN_1003cdd0(*(int *)puVar8, iVar32);
				lVar42 = 0x20;
				iVar29 = *(int *)puVar7;
				lVar40 = (ulonglong) * (uint *)puVar8 + uVar19;
				pcVar20 = (char *)(*(int *)puVar11 + iVar48);
				do {
					lVar27 = 0x20;
					do {
						cVar36 = *(char *)lVar40;
						lVar40 = lVar40 + 1;
						*pcVar20 = cVar36;
						pcVar20 = pcVar20 + 1;
						if (cVar36 < '\0') {
							lVar56 = (longlong)cVar36;
						} else {
							lVar56 = -(longlong)cVar36;
							do {
								pbVar21 = (byte *)lVar40;
								cVar36 = cVar36 + -1;
								lVar40 = lVar40 + 1;
								*pcVar20 = *(char *)(iVar29 + iVar53 + (uint)*pbVar21);
								pcVar20 = pcVar20 + 1;
							} while (cVar36 != '\0');
						}
						lVar27 = lVar27 + lVar56;
					} while ((int)lVar27 != 0);
					lVar42 = lVar42 + -1;
				} while (lVar42 != 0);
				iVar53 = iVar53 + 0x100;
				iVar50 = iVar50 + 1;
				iVar48 = iVar48 + *puVar47;
			}
		} else {
			uVar38 = *puVar47;
			iVar53 = 1;
			iVar50 = 0x100;
			piVar52 = piVar46;
			while (piVar52 = piVar52 + 1, iVar53 < uVar54) {
				*piVar52 = iVar48;
				uVar19 = FUN_1003cdd0(*(int *)puVar8, iVar32);
				lVar40 = (ulonglong) * (uint *)puVar8 + uVar19;
				puVar25 = (undefined *)(*(int *)puVar11 + iVar48);
				iVar29 = *(int *)puVar7 + iVar50;
				if (uVar38 != 0) {
					uVar19 = (ulonglong)(uVar38 >> 3);
					uVar16 = uVar38;
					if (uVar38 >> 3 != 0) {
						do {
							pbVar21 = (byte *)lVar40;
							*puVar25 = *(undefined *)(iVar29 + (uint)*pbVar21);
							puVar25[1] = *(undefined *)(iVar29 + (uint)pbVar21[1]);
							puVar25[2] = *(undefined *)(iVar29 + (uint)pbVar21[2]);
							puVar25[3] = *(undefined *)(iVar29 + (uint)pbVar21[3]);
							puVar25[4] = *(undefined *)(iVar29 + (uint)pbVar21[4]);
							puVar25[5] = *(undefined *)(iVar29 + (uint)pbVar21[5]);
							puVar25[6] = *(undefined *)(iVar29 + (uint)pbVar21[6]);
							lVar40 = lVar40 + 8;
							puVar25[7] = *(undefined *)(iVar29 + (uint)pbVar21[7]);
							puVar25 = puVar25 + 8;
							uVar19 = uVar19 - 1;
						} while (uVar19 != 0);
						uVar16 = uVar38 & 7;
						if ((uVar38 & 7) == 0)
							goto LAB_100417c8;
					}
					do {
						pbVar21 = (byte *)lVar40;
						lVar40 = lVar40 + 1;
						*puVar25 = *(undefined *)(iVar29 + (uint)*pbVar21);
						puVar25 = puVar25 + 1;
						uVar16 = uVar16 - 1;
					} while (uVar16 != 0);
				}
			LAB_100417c8:
				iVar48 = iVar48 + uVar38;
				iVar50 = iVar50 + 0x100;
				iVar53 = iVar53 + 1;
			}
		}
		piVar46 = piVar46 + 0x10;
		puVar47 = puVar47 + 1;
		lVar34 = lVar34 + 1;
		local_58 = local_58 + 1;
		local_5c = local_5c + 1;
	} while (true);
}

longlong IsometricCoord(longlong param_1, int param_2)

{
	int iVar1;
	uint uVar2;
	ulonglong uVar3;

	if ((int)param_1 < 0x70 - param_2) {
		iVar1 = (int)param_1 + param_2;
		uVar2 = (int)(param_1 * 3) + iVar1 * iVar1 + param_2;
		return (param_1 * 3 & 0xffffffff00000000U | (ulonglong)(uint)((int)uVar2 >> 1)) + (ulonglong)((int)uVar2 < 0 && (uVar2 & 1) != 0);
	}
	iVar1 = (int)(0x6f - param_1) + (0x6f - param_2);
	uVar3 = (0x6f - param_1) * 3;
	uVar2 = (int)uVar3 + iVar1 * iVar1 + (0x6f - param_2);
	return 0x3100 - ((uVar3 & 0xffffffff00000000 | (ulonglong)(uint)((int)uVar2 >> 1)) + (ulonglong)((int)uVar2 < 0 && (uVar2 & 1) != 0) + 1);
}

void SetSpeedCels(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined4 uVar2;
	undefined *puVar3;
	undefined *puVar4;
	longlong lVar5;
	undefined4 *puVar6;
	undefined4 *puVar7;
	int iVar8;
	longlong lVar9;
	int iVar10;
	int iVar11;

	puVar4 = PTR_DAT_100f1a50;
	puVar3 = PTR_DAT_100f1a4c;
	lVar9 = 0;
	iVar10 = 0;
	do {
		iVar8 = 0;
		iVar11 = 0;
		do {
			iVar1 = *(int *)puVar4;
			lVar5 = IsometricCoord(lVar9, iVar8);
			puVar6 = (undefined4 *)(iVar10 + iVar1 + iVar11);
			uVar2 = puVar6[1];
			puVar7 = (undefined4 *)(*(int *)puVar3 + (int)lVar5 * 0x20);
			iVar8 = iVar8 + 1;
			iVar11 = iVar11 + 0x20;
			*puVar7 = *puVar6;
			puVar7[1] = uVar2;
			uVar2 = puVar6[3];
			puVar7[2] = puVar6[2];
			puVar7[3] = uVar2;
			uVar2 = puVar6[5];
			puVar7[4] = puVar6[4];
			puVar7[5] = uVar2;
			uVar2 = puVar6[7];
			puVar7[6] = puVar6[6];
			puVar7[7] = uVar2;
		} while (iVar8 < 0x70);
		lVar9 = lVar9 + 1;
		iVar10 = iVar10 + 0xe00;
	} while ((int)lVar9 < 0x70);
	return;
}

void SetDungeonMicros(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	short sVar1;
	uint uVar2;
	int iVar3;
	undefined *puVar4;
	int iVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined4 *puVar10;
	undefined4 *puVar11;
	undefined4 *puVar12;
	undefined4 *puVar13;
	undefined **ppuVar14;
	undefined4 uVar16;
	ulonglong uVar15;
	undefined uVar17;
	undefined uVar18;
	ulonglong uVar19;
	undefined2 *puVar21;
	longlong lVar20;
	undefined uVar22;
	longlong lVar23;
	undefined uVar24;
	longlong lVar25;
	undefined uVar26;
	longlong lVar27;
	undefined uVar28;
	longlong lVar29;
	undefined uVar30;
	longlong lVar31;
	undefined uVar32;
	int iVar33;
	int iVar34;
	ulonglong uVar35;
	longlong lVar36;
	uint uVar37;
	ulonglong uVar38;
	undefined4 in_stack_ffffff78;
	undefined in_stack_ffffff7f;
	undefined **local_7c;

	puVar13 = _DAT_100f1d78;
	puVar12 = _DAT_100f1d74;
	puVar11 = _DAT_100f1d70;
	puVar10 = _DAT_100f1d6c;
	puVar9 = PTR_DAT_100f1a60;
	puVar8 = PTR_DAT_100f1a54;
	puVar7 = PTR_DAT_100f1a50;
	puVar6 = PTR_DAT_100f183c;
	uVar18 = (undefined)param_2;
	ppuVar14 = &toc;
	if (*PTR_DAT_100f183c == '\x04') {
		*_DAT_100f1d80 = 0xc;
		uVar38 = 0x10;
	} else {
		*_DAT_100f1d80 = 10;
		uVar38 = 10;
	}
	if (*(int *)puVar7 == 0) {
		uVar16 = DiabloAllocPtr(0x62000);
		*(undefined4 *)puVar7 = uVar16;
		ppuVar14 = local_7c;
		if (*(int *)puVar7 == 0) {
			ExitProcess(0, uVar18, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7,
			    (char)param_8, (char)in_stack_ffffff78, in_stack_ffffff7f, local_7c);
			ppuVar14 = local_7c;
		}
		param_2 = 0x62000;
		memset((char)*(undefined4 *)puVar7, 0, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8, (char)in_stack_ffffff78, in_stack_ffffff7f, ppuVar14);
	}
	uVar15 = FUN_100b8f7c((ulonglong) * (uint *)puVar9, param_2, param_3, param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffff78);
	lVar27 = 0;
	uVar2 = (uint)uVar38;
	iVar3 = uVar2 - 2;
	lVar29 = 0;
	uVar18 = (undefined)(uVar38 - 8);
	iVar34 = 0;
	do {
		lVar23 = 0;
		lVar25 = 0;
		iVar33 = 0;
		do {
			uVar22 = (undefined) * (uint *)puVar7;
			sVar1 = *(short *)((int)lVar27 + *(int *)puVar8 + (int)lVar23);
			lVar36 = (ulonglong) * (uint *)puVar7 + lVar25 + lVar29;
			if (sVar1 == 0) {
				lVar31 = 0;
				uVar32 = 0;
				if (uVar2 != 0) {
					if ((8 < uVar2) && (uVar19 = (ulonglong)(uVar2 - 1 >> 3), lVar20 = lVar36, 0 < (int)(uVar38 - 8))) {
						do {
							puVar21 = (undefined2 *)lVar20;
							*puVar21 = 0;
							lVar31 = lVar31 + 8;
							puVar21[1] = 0;
							puVar21[2] = 0;
							puVar21[3] = 0;
							puVar21[4] = 0;
							puVar21[5] = 0;
							puVar21[6] = 0;
							puVar21[7] = 0;
							lVar20 = lVar20 + 0x10;
							uVar19 = uVar19 - 1;
						} while (uVar19 != 0);
					}
					uVar32 = (undefined)lVar31;
					lVar36 = lVar36 + (ulonglong)(uint)((int)lVar31 << 1);
					lVar20 = uVar38 - lVar31;
					uVar22 = 0;
					if ((int)lVar31 < (int)uVar2) {
						do {
							*(undefined2 *)lVar36 = 0;
							lVar36 = lVar36 + 2;
							lVar20 = lVar20 + -1;
						} while (lVar20 != 0);
					}
				}
			} else {
				if (*puVar6 == '\x04') {
					uVar19 = (ulonglong)(uint)(((int)sVar1 + -1) * 0x20);
				} else {
					uVar19 = ((longlong)sVar1 + -1) * 0x14;
				}
				uVar32 = (undefined)(uVar15 + uVar19);
				uVar37 = 0;
				uVar22 = (char)lVar36;
				if (uVar2 != 0) {
					uVar35 = (ulonglong)(uVar2 >> 3);
					iVar5 = (int)(uVar15 + uVar19);
					uVar19 = uVar38;
					if (uVar2 >> 3 != 0) {
						do {
							puVar4 = (undefined *)(iVar5 + (iVar3 - (uVar37 & 0xe)) * 2);
							puVar21 = (undefined2 *)lVar36;
							*puVar21 = CONCAT11(puVar4[1], *puVar4);
							puVar4 = (undefined *)(iVar5 + ((uVar37 + 1 & 1) + (iVar3 - (uVar37 + 1 & 0xe))) * 2);
							puVar21[1] = CONCAT11(puVar4[1], *puVar4);
							puVar4 = (undefined *)(iVar5 + (iVar3 - (uVar37 + 2 & 0xe)) * 2);
							puVar21[2] = CONCAT11(puVar4[1], *puVar4);
							puVar4 = (undefined *)(iVar5 + ((uVar37 + 3 & 1) + (iVar3 - (uVar37 + 3 & 0xe))) * 2);
							puVar21[3] = CONCAT11(puVar4[1], *puVar4);
							puVar4 = (undefined *)(iVar5 + (iVar3 - (uVar37 + 4 & 0xe)) * 2);
							puVar21[4] = CONCAT11(puVar4[1], *puVar4);
							puVar4 = (undefined *)(iVar5 + ((uVar37 + 5 & 1) + (iVar3 - (uVar37 + 5 & 0xe))) * 2);
							puVar21[5] = CONCAT11(puVar4[1], *puVar4);
							puVar4 = (undefined *)(iVar5 + (iVar3 - (uVar37 + 6 & 0xe)) * 2);
							puVar21[6] = CONCAT11(puVar4[1], *puVar4);
							puVar4 = (undefined *)(iVar5 + ((uVar37 + 7 & 1) + (iVar3 - (uVar37 + 7 & 0xe))) * 2);
							uVar37 = uVar37 + 8;
							puVar21[7] = CONCAT11(puVar4[1], *puVar4);
							lVar36 = lVar36 + 0x10;
							uVar22 = (undefined)lVar36;
							uVar35 = uVar35 - 1;
						} while (uVar35 != 0);
						uVar19 = uVar38 & 7;
						if (uVar19 == 0)
							goto LAB_10041dfc;
					}
					do {
						puVar4 = (undefined *)(iVar5 + ((uVar37 & 1) + (iVar3 - (uVar37 & 0xe))) * 2);
						uVar37 = uVar37 + 1;
						*(undefined2 *)lVar36 = CONCAT11(puVar4[1], *puVar4);
						lVar36 = lVar36 + 2;
						uVar22 = (undefined)lVar36;
						uVar19 = uVar19 - 1;
					} while (uVar19 != 0);
				}
			}
		LAB_10041dfc:
			iVar33 = iVar33 + 1;
			lVar25 = lVar25 + 0xe00;
			uVar26 = 0;
			lVar23 = lVar23 + 0xe0;
			uVar24 = (undefined)lVar23;
		} while (iVar33 < 0x70);
		iVar34 = iVar34 + 1;
		lVar29 = lVar29 + 0x20;
		uVar30 = (undefined)lVar29;
		lVar27 = lVar27 + 2;
		uVar28 = (undefined)lVar27;
		if (0x6f < iVar34) {
			uVar17 = FUN_100b9100(*(int *)puVar9, uVar18, uVar22, uVar24, 0, uVar28, uVar30, uVar32,
			    in_stack_ffffff78);
			uVar17 = MakeSpeedCels(uVar17, uVar18, uVar22, uVar24, uVar26, uVar28, uVar30, uVar32,
			    in_stack_ffffff78);
			SetSpeedCels(uVar17, uVar18, uVar22, uVar24, uVar26, uVar28, uVar30, uVar32, in_stack_ffffff78);
			if (ppuVar14[0xa15] != (undefined *)0x0) {
				uVar2 = *(uint *)puVar7;
				*(undefined4 *)puVar7 = 0;
				mem_free_dbg((ulonglong)uVar2, uVar18, uVar22, uVar24, uVar26, uVar28, uVar30, uVar32,
				    in_stack_ffffff78);
				*(undefined4 *)puVar7 = 0;
			}
			if (*(int *)ppuVar14[-0x1d9b] == 0) {
				*puVar13 = 0x180;
				*puVar12 = 0xe0;
				*puVar11 = 6;
				*puVar10 = 7;
			} else {
				*puVar13 = 0x280;
				*puVar12 = 0x160;
				*puVar11 = 10;
				*puVar10 = 0xb;
			}
			return;
		}
	} while (true);
}

void DRLG_InitTrans(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	memset((char)*(undefined4 *)PTR_DAT_100f1a48, 0, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	memset((char)*(undefined4 *)(local_2c + -0x7268), 0, param_3, param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	**(undefined **)(local_2c + -0x7518) = 1;
	return;
}

void DRLG_MRectTrans(int param_1, int param_2, int param_3, int param_4)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	ulonglong uVar4;
	uint uVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	puVar3 = PTR_DAT_100f1ab8;
	puVar2 = PTR_DAT_100f1a48;
	iVar7 = param_2 * 2 + 0x11;
	iVar8 = param_1 * 2 + 0x11;
	do {
		if (param_4 * 2 + 0x10 < iVar7) {
			*puVar3 = *puVar3 + '\x01';
			return;
		}
		iVar6 = iVar8 * 0x70;
		uVar5 = (param_3 * 2 + 0x11) - iVar8;
		if (iVar8 <= param_3 * 2 + 0x10) {
			uVar4 = (ulonglong)(uVar5 >> 3);
			if (uVar5 >> 3 != 0) {
				do {
					*(undefined *)(iVar7 + *(int *)puVar2 + iVar6) = *puVar3;
					*(undefined *)(iVar7 + *(int *)puVar2 + iVar6 + 0x70) = *puVar3;
					*(undefined *)(iVar7 + *(int *)puVar2 + iVar6 + 0xe0) = *puVar3;
					*(undefined *)(iVar7 + *(int *)puVar2 + iVar6 + 0x150) = *puVar3;
					*(undefined *)(iVar7 + *(int *)puVar2 + iVar6 + 0x1c0) = *puVar3;
					*(undefined *)(iVar7 + *(int *)puVar2 + iVar6 + 0x230) = *puVar3;
					iVar1 = iVar6 + 0x310;
					*(undefined *)(iVar7 + *(int *)puVar2 + iVar6 + 0x2a0) = *puVar3;
					iVar6 = iVar6 + 0x380;
					*(undefined *)(iVar7 + *(int *)puVar2 + iVar1) = *puVar3;
					uVar4 = uVar4 - 1;
				} while (uVar4 != 0);
				uVar5 = uVar5 & 7;
				if (uVar5 == 0)
					goto LAB_10042034;
			}
			do {
				iVar1 = *(int *)puVar2 + iVar6;
				iVar6 = iVar6 + 0x70;
				*(undefined *)(iVar7 + iVar1) = *puVar3;
				uVar5 = uVar5 - 1;
			} while (uVar5 != 0);
		}
	LAB_10042034:
		iVar7 = iVar7 + 1;
	} while (true);
}

void DRLG_RectTrans(int param_1, int param_2, int param_3, int param_4)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	ulonglong uVar4;
	uint uVar5;
	int iVar6;

	puVar3 = PTR_DAT_100f1ab8;
	puVar2 = PTR_DAT_100f1a48;
	do {
		if (param_4 < param_2) {
			*puVar3 = *puVar3 + '\x01';
			return;
		}
		iVar6 = param_1 * 0x70;
		uVar5 = (param_3 + 1) - param_1;
		if (param_1 <= param_3) {
			uVar4 = (ulonglong)(uVar5 >> 3);
			if (uVar5 >> 3 != 0) {
				do {
					*(undefined *)(param_2 + *(int *)puVar2 + iVar6) = *puVar3;
					*(undefined *)(param_2 + *(int *)puVar2 + iVar6 + 0x70) = *puVar3;
					*(undefined *)(param_2 + *(int *)puVar2 + iVar6 + 0xe0) = *puVar3;
					*(undefined *)(param_2 + *(int *)puVar2 + iVar6 + 0x150) = *puVar3;
					*(undefined *)(param_2 + *(int *)puVar2 + iVar6 + 0x1c0) = *puVar3;
					*(undefined *)(param_2 + *(int *)puVar2 + iVar6 + 0x230) = *puVar3;
					iVar1 = iVar6 + 0x310;
					*(undefined *)(param_2 + *(int *)puVar2 + iVar6 + 0x2a0) = *puVar3;
					iVar6 = iVar6 + 0x380;
					*(undefined *)(param_2 + *(int *)puVar2 + iVar1) = *puVar3;
					uVar4 = uVar4 - 1;
				} while (uVar4 != 0);
				uVar5 = uVar5 & 7;
				if (uVar5 == 0)
					goto LAB_10042144;
			}
			do {
				iVar1 = *(int *)puVar2 + iVar6;
				iVar6 = iVar6 + 0x70;
				*(undefined *)(param_2 + iVar1) = *puVar3;
				uVar5 = uVar5 - 1;
			} while (uVar5 != 0);
		}
	LAB_10042144:
		param_2 = param_2 + 1;
	} while (true);
}

void DRLG_CopyTrans(int param_1, int param_2, int param_3, int param_4)

{
	*(undefined *)(*(int *)PTR_DAT_100f1a48 + param_3 * 0x70 + param_4) = *(undefined *)(*(int *)PTR_DAT_100f1a48 + param_1 * 0x70 + param_2);
	return;
}

void DRLG_ListTrans(int param_1, byte *param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	byte bVar1;
	byte *pbVar2;
	byte *pbVar3;
	byte *pbVar4;
	int iVar5;

	iVar5 = 0;
	while (iVar5 < param_1) {
		bVar1 = *param_2;
		pbVar2 = param_2 + 1;
		pbVar3 = param_2 + 2;
		pbVar4 = param_2 + 3;
		param_2 = param_2 + 4;
		DRLG_RectTrans((uint)bVar1, (uint)*pbVar2, (uint)*pbVar3, (uint)*pbVar4);
		iVar5 = iVar5 + 1;
	}
	return;
}

void DRLG_AreaTrans(int param_1, byte *param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	byte bVar1;
	byte *pbVar2;
	byte *pbVar3;
	byte *pbVar4;
	undefined *puVar5;
	int iVar6;

	puVar5 = PTR_DAT_100f1ab8;
	iVar6 = 0;
	while (iVar6 < param_1) {
		bVar1 = *param_2;
		pbVar2 = param_2 + 1;
		pbVar3 = param_2 + 2;
		pbVar4 = param_2 + 3;
		param_2 = param_2 + 4;
		DRLG_RectTrans((uint)bVar1, (uint)*pbVar2, (uint)*pbVar3, (uint)*pbVar4);
		iVar6 = iVar6 + 1;
		*puVar5 = *puVar5 + -1;
	}
	*puVar5 = *puVar5 + '\x01';
	return;
}

void DRLG_InitSetPC(void)

{
	undefined *puVar1;
	undefined *puVar2;

	puVar1 = PTR_DAT_100f1a80;
	*(undefined4 *)PTR_DAT_100f1a84 = 0;
	puVar2 = PTR_DAT_100f1a7c;
	*(undefined4 *)puVar1 = 0;
	puVar1 = PTR_DAT_100f1a78;
	*(undefined4 *)puVar2 = 0;
	*(undefined4 *)puVar1 = 0;
	return;
}

void DRLG_SetPC(void)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	ulonglong uVar9;
	int iVar10;
	int iVar11;

	puVar3 = PTR_DAT_100f1834;
	iVar7 = 0;
	iVar1 = *(int *)PTR_DAT_100f1a78;
	iVar2 = *(int *)PTR_DAT_100f1a7c * 2;
	iVar4 = *(int *)PTR_DAT_100f1a84 * 2 + 0x10;
	iVar8 = *(int *)PTR_DAT_100f1a80 * 2 + 0x10;
	while (iVar7 < iVar1 << 1) {
		iVar6 = 0;
		if (0 < iVar2) {
			if (8 < iVar2) {
				uVar9 = (ulonglong)(iVar2 - 1U >> 3);
				iVar5 = iVar8 + iVar7;
				if (0 < iVar2 + -8) {
					do {
						iVar10 = iVar4 + iVar6;
						iVar11 = *(int *)puVar3 + iVar10 * 0x70;
						*(byte *)(iVar5 + iVar11) = *(byte *)(iVar5 + iVar11) | 8;
						iVar6 = iVar6 + 8;
						iVar11 = *(int *)puVar3 + (iVar10 + 1) * 0x70;
						*(byte *)(iVar5 + iVar11) = *(byte *)(iVar5 + iVar11) | 8;
						iVar11 = *(int *)puVar3 + (iVar10 + 2) * 0x70;
						*(byte *)(iVar5 + iVar11) = *(byte *)(iVar5 + iVar11) | 8;
						iVar11 = *(int *)puVar3 + (iVar10 + 3) * 0x70;
						*(byte *)(iVar5 + iVar11) = *(byte *)(iVar5 + iVar11) | 8;
						iVar11 = *(int *)puVar3 + (iVar10 + 4) * 0x70;
						*(byte *)(iVar5 + iVar11) = *(byte *)(iVar5 + iVar11) | 8;
						iVar11 = *(int *)puVar3 + (iVar10 + 5) * 0x70;
						*(byte *)(iVar5 + iVar11) = *(byte *)(iVar5 + iVar11) | 8;
						iVar11 = *(int *)puVar3 + (iVar10 + 6) * 0x70;
						*(byte *)(iVar5 + iVar11) = *(byte *)(iVar5 + iVar11) | 8;
						iVar10 = *(int *)puVar3 + (iVar10 + 7) * 0x70;
						*(byte *)(iVar5 + iVar10) = *(byte *)(iVar5 + iVar10) | 8;
						uVar9 = uVar9 - 1;
					} while (uVar9 != 0);
				}
			}
			iVar10 = iVar8 + iVar7;
			iVar5 = iVar2 - iVar6;
			if (iVar6 < iVar2) {
				do {
					iVar11 = iVar4 + iVar6;
					iVar6 = iVar6 + 1;
					iVar11 = *(int *)puVar3 + iVar11 * 0x70;
					*(byte *)(iVar10 + iVar11) = *(byte *)(iVar10 + iVar11) | 8;
					iVar5 = iVar5 + -1;
				} while (iVar5 != 0);
			}
		}
		iVar7 = iVar7 + 1;
	}
	return;
}

void Make_SetPC(int param_1, int param_2, int param_3, int param_4)

{
	undefined *puVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	ulonglong uVar7;
	int iVar8;
	int iVar9;

	puVar1 = PTR_DAT_100f1834;
	param_3 = param_3 * 2;
	iVar2 = param_1 * 2 + 0x10;
	iVar6 = param_2 * 2 + 0x10;
	iVar5 = 0;
	while (iVar5 < param_4 << 1) {
		iVar4 = 0;
		if (0 < param_3) {
			if (8 < param_3) {
				uVar7 = (ulonglong)(param_3 - 1U >> 3);
				iVar3 = iVar6 + iVar5;
				if (0 < param_3 + -8) {
					do {
						iVar8 = iVar2 + iVar4;
						iVar9 = *(int *)puVar1 + iVar8 * 0x70;
						*(byte *)(iVar3 + iVar9) = *(byte *)(iVar3 + iVar9) | 8;
						iVar4 = iVar4 + 8;
						iVar9 = *(int *)puVar1 + (iVar8 + 1) * 0x70;
						*(byte *)(iVar3 + iVar9) = *(byte *)(iVar3 + iVar9) | 8;
						iVar9 = *(int *)puVar1 + (iVar8 + 2) * 0x70;
						*(byte *)(iVar3 + iVar9) = *(byte *)(iVar3 + iVar9) | 8;
						iVar9 = *(int *)puVar1 + (iVar8 + 3) * 0x70;
						*(byte *)(iVar3 + iVar9) = *(byte *)(iVar3 + iVar9) | 8;
						iVar9 = *(int *)puVar1 + (iVar8 + 4) * 0x70;
						*(byte *)(iVar3 + iVar9) = *(byte *)(iVar3 + iVar9) | 8;
						iVar9 = *(int *)puVar1 + (iVar8 + 5) * 0x70;
						*(byte *)(iVar3 + iVar9) = *(byte *)(iVar3 + iVar9) | 8;
						iVar9 = *(int *)puVar1 + (iVar8 + 6) * 0x70;
						*(byte *)(iVar3 + iVar9) = *(byte *)(iVar3 + iVar9) | 8;
						iVar8 = *(int *)puVar1 + (iVar8 + 7) * 0x70;
						*(byte *)(iVar3 + iVar8) = *(byte *)(iVar3 + iVar8) | 8;
						uVar7 = uVar7 - 1;
					} while (uVar7 != 0);
				}
			}
			iVar8 = iVar6 + iVar5;
			iVar3 = param_3 - iVar4;
			if (iVar4 < param_3) {
				do {
					iVar9 = iVar2 + iVar4;
					iVar4 = iVar4 + 1;
					iVar9 = *(int *)puVar1 + iVar9 * 0x70;
					*(byte *)(iVar8 + iVar9) = *(byte *)(iVar8 + iVar9) | 8;
					iVar3 = iVar3 + -1;
				} while (iVar3 != 0);
			}
		}
		iVar5 = iVar5 + 1;
	}
	return;
}

undefined8
DRLG_WillThemeRoomFit(uint param_1, int param_2, int param_3, longlong param_4, int param_5, int *param_6,
    int *param_7, undefined param_8, undefined4 param_9)

{
	bool bVar1;
	bool bVar2;
	undefined *puVar3;
	int iVar4;
	ulonglong uVar5;
	undefined8 uVar6;
	longlong lVar7;
	longlong lVar8;
	int iVar10;
	longlong lVar9;
	undefined uVar12;
	longlong lVar11;
	undefined uVar14;
	byte *pbVar13;
	undefined uVar16;
	undefined *puVar15;
	undefined uVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	undefined4 in_stack_fffffef8;
	int local_d8;
	int local_88;

	puVar3 = PTR_DAT_100f1804;
	uVar12 = (undefined)param_4;
	uVar17 = SUB41(param_7, 0);
	uVar16 = SUB41(param_6, 0);
	uVar14 = (undefined)param_5;
	uVar5 = ZEXT48(register0x0000000c);
	iVar21 = 0;
	iVar20 = 0;
	bVar2 = true;
	bVar1 = true;
	if ((0x28 - param_5 < param_2) && (0x28 - param_5 < param_3)) {
		uVar6 = 0;
	} else {
		uVar6 = SkipThemeRoom(param_2, param_3);
		if ((int)uVar6 == 0) {
			uVar6 = 0;
		} else {
			memset(uVar5 - 0x88, 0, 0x50, uVar12, uVar14, uVar16, uVar17, param_8, in_stack_fffffef8);
			memset(uVar5 - 0xd8, 0, 0x50, uVar12, uVar14, uVar16, uVar17, param_8, in_stack_fffffef8);
			lVar7 = uVar5 - 0x88;
			lVar8 = uVar5 - 0xd8;
			puVar15 = puVar3 + param_3;
			iVar10 = 0;
			lVar9 = lVar7;
			lVar11 = lVar8;
			while (iVar19 = (int)param_4, iVar10 < param_5) {
				if (bVar1) {
					pbVar13 = puVar15 + param_2 * 0x28;
					iVar4 = (param_2 + param_5) - param_2;
					iVar18 = param_2;
					if (param_2 < param_2 + param_5) {
						do {
							if (param_1 == (uint)*pbVar13) {
								iVar21 = iVar21 + 1;
							} else {
								if (iVar19 <= iVar18)
									break;
								bVar1 = false;
							}
							pbVar13 = pbVar13 + 0x28;
							iVar18 = iVar18 + 1;
							iVar4 = iVar4 + -1;
						} while (iVar4 != 0);
					}
					if (bVar1) {
						*(int *)lVar9 = iVar21;
						iVar21 = 0;
					}
				}
				if (bVar2) {
					iVar4 = (param_3 + param_5) - param_3;
					pbVar13 = puVar3 + (param_2 + iVar10) * 0x28 + param_3;
					iVar18 = param_3;
					if (param_3 < param_3 + param_5) {
						do {
							if (param_1 == (uint)*pbVar13) {
								iVar20 = iVar20 + 1;
							} else {
								if (iVar19 <= iVar18)
									break;
								bVar2 = false;
							}
							pbVar13 = pbVar13 + 1;
							iVar18 = iVar18 + 1;
							iVar4 = iVar4 + -1;
						} while (iVar4 != 0);
					}
					if (bVar2) {
						*(int *)lVar11 = iVar20;
						iVar20 = 0;
					}
				}
				puVar15 = puVar15 + 1;
				lVar9 = lVar9 + 4;
				lVar11 = lVar11 + 4;
				iVar10 = iVar10 + 1;
			}
			lVar9 = lVar7;
			lVar11 = lVar8;
			if (0 < iVar19) {
				do {
					if ((*(int *)lVar9 < iVar19) || (*(int *)lVar11 < iVar19)) {
						return 0;
					}
					lVar9 = lVar9 + 4;
					lVar11 = lVar11 + 4;
					param_4 = param_4 + -1;
				} while (param_4 != 0);
			}
			if (0 < param_5) {
				do {
					iVar20 = *(int *)lVar7;
					if ((iVar20 < iVar19) || (iVar21 = *(int *)lVar8, iVar21 < iVar19))
						break;
					if (iVar20 < local_88) {
						local_88 = iVar20;
					}
					if (iVar21 < local_d8) {
						local_d8 = iVar21;
					}
					lVar7 = lVar7 + 4;
					lVar8 = lVar8 + 4;
					param_5 = param_5 + -1;
				} while (param_5 != 0);
			}
			*param_6 = local_88 + -2;
			uVar6 = 1;
			*param_7 = local_d8 + -2;
		}
	}
	return uVar6;
}

void DRLG_CreateThemeRoom(int param_1, undefined param_2, char param_3, char param_4, char param_5, char param_6,
    undefined param_7, undefined param_8, undefined4 param_9)

{
	char cVar1;
	uint uVar2;
	uint uVar3;
	uint *puVar4;
	uint *puVar5;
	int iVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	longlong lVar10;
	ulonglong uVar11;
	uint uVar12;
	longlong lVar13;
	undefined *puVar14;
	int iVar15;
	int iVar16;
	undefined uVar17;
	longlong lVar18;
	uint uVar19;
	undefined uVar20;
	longlong lVar21;
	uint uVar23;
	longlong lVar22;
	undefined uVar24;
	longlong lVar25;
	undefined uVar26;
	undefined uVar27;
	ulonglong uVar28;
	int iVar29;
	uint uVar30;
	longlong lVar31;
	ulonglong uVar32;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	puVar9 = PTR_DAT_100f1d64;
	puVar8 = PTR_DAT_100f183c;
	puVar7 = PTR_DAT_100f1804;
	lVar21 = (longlong)param_6;
	lVar18 = (longlong)param_5;
	lVar22 = (longlong)param_4;
	lVar31 = (longlong)param_1 * 0x14;
	uVar32 = ZEXT48(PTR_DAT_100f1d64);
	iVar6 = (int)lVar31;
	puVar5 = (uint *)(PTR_DAT_100f1d64 + iVar6);
	puVar4 = (uint *)(PTR_DAT_100f1d64 + iVar6 + 4);
	uVar11 = (ulonglong)*puVar4;
	lVar25 = ZEXT48(PTR_DAT_100f1804) + uVar11;
	while (true) {
		uVar20 = (undefined)lVar18;
		uVar26 = (undefined)lVar25;
		uVar24 = (undefined)lVar21;
		uVar17 = (undefined)lVar22;
		uVar3 = puVar5[1];
		uVar27 = (undefined)uVar3;
		iVar29 = uVar3 + puVar5[4];
		uVar12 = (uint)uVar11;
		if (iVar29 <= (int)uVar12)
			break;
		uVar2 = *puVar5;
		uVar28 = (ulonglong)uVar2;
		lVar18 = (ulonglong)puVar5[4] + (ulonglong)uVar3 + -1;
		lVar22 = uVar28 + (ulonglong)puVar5[3];
		param_3 = *puVar8;
		iVar16 = (int)lVar22;
		lVar21 = lVar22 + -1;
		lVar10 = lVar22 - uVar28;
		lVar13 = lVar25 + uVar28 * 0x28;
		if ((int)uVar2 < iVar16) {
			do {
				uVar19 = (uint)lVar18;
				uVar30 = (uint)uVar28;
				uVar23 = (uint)lVar21;
				puVar14 = (undefined *)lVar13;
				if (param_3 == '\x02') {
					if ((((uVar12 == uVar3) && ((int)uVar2 <= (int)uVar30)) && ((int)uVar30 <= iVar16)) || (((uVar12 == uVar19 && ((int)uVar2 <= (int)uVar30)) && ((int)uVar30 <= iVar16)))) {
						*puVar14 = 2;
					} else {
						if ((((uVar30 == uVar2) && ((int)uVar3 <= (int)uVar12)) && ((int)uVar12 <= iVar29)) || (((uVar30 == uVar23 && ((int)uVar3 <= (int)uVar12)) && ((int)uVar12 <= iVar29)))) {
							*puVar14 = 1;
						} else {
							*puVar14 = 3;
						}
					}
				}
				if (param_3 == '\x03') {
					if ((((uVar12 == uVar3) && ((int)uVar2 <= (int)uVar30)) && ((int)uVar30 <= iVar16)) || (((uVar12 == uVar19 && ((int)uVar2 <= (int)uVar30)) && ((int)uVar30 <= iVar16)))) {
						*puVar14 = 0x86;
					} else {
						if ((((uVar30 == uVar2) && ((int)uVar3 <= (int)uVar12)) && ((int)uVar12 <= iVar29)) || (((uVar30 == uVar23 && ((int)uVar3 <= (int)uVar12)) && ((int)uVar12 <= iVar29)))) {
							*puVar14 = 0x89;
						} else {
							*puVar14 = 7;
						}
					}
				}
				if (param_3 == '\x04') {
					if ((((uVar12 == uVar3) && ((int)uVar2 <= (int)uVar30)) && ((int)uVar30 <= iVar16)) || (((uVar12 == uVar19 && ((int)uVar2 <= (int)uVar30)) && ((int)uVar30 <= iVar16)))) {
						*puVar14 = 2;
					} else {
						if ((((uVar30 == uVar2) && ((int)uVar3 <= (int)uVar12)) && ((int)uVar12 <= iVar29)) || (((uVar30 == uVar23 && ((int)uVar3 <= (int)uVar12)) && ((int)uVar12 <= iVar29)))) {
							*puVar14 = 1;
						} else {
							*puVar14 = 6;
						}
					}
				}
				lVar13 = lVar13 + 0x28;
				uVar28 = uVar28 + 1;
				lVar10 = lVar10 + -1;
			} while (lVar10 != 0);
		}
		lVar25 = lVar25 + 1;
		uVar11 = uVar11 + 1;
	}
	cVar1 = *puVar8;
	if (cVar1 == '\x02') {
		uVar3 = *puVar5;
		uVar27 = (undefined)uVar3;
		uVar12 = *puVar4;
		uVar26 = (undefined)uVar12;
		lVar22 = (ulonglong)uVar3 * 0x28 + (ulonglong)uVar12;
		uVar24 = (undefined)lVar22;
		puVar7[(int)lVar22] = 8;
		uVar17 = 9;
		iVar29 = (*(int *)(puVar9 + iVar6 + 0xc) + uVar3 + -1) * 0x28 + uVar12;
		puVar7[iVar29] = 7;
		uVar3 = *(uint *)(puVar9 + iVar6 + 0x10);
		uVar20 = (undefined)uVar3;
		param_3 = (char)(lVar22 + (ulonglong)uVar3);
		(puVar7 + -1)[(int)(lVar22 + (ulonglong)uVar3)] = 9;
		(puVar7 + -1)[iVar29 + uVar3] = 6;
	}
	if (cVar1 == '\x03') {
		uVar3 = *puVar5;
		uVar27 = (undefined)uVar3;
		uVar12 = *puVar4;
		uVar26 = (undefined)uVar12;
		lVar22 = (ulonglong)uVar3 * 0x28 + (ulonglong)uVar12;
		uVar24 = (undefined)lVar22;
		puVar7[(int)lVar22] = 0x96;
		uVar17 = 0x98;
		iVar29 = (*(int *)(puVar9 + iVar6 + 0xc) + uVar3 + -1) * 0x28 + uVar12;
		puVar7[iVar29] = 0x97;
		uVar3 = *(uint *)(puVar9 + iVar6 + 0x10);
		uVar20 = (undefined)uVar3;
		param_3 = (char)(lVar22 + (ulonglong)uVar3);
		(puVar7 + -1)[(int)(lVar22 + (ulonglong)uVar3)] = 0x98;
		(puVar7 + -1)[iVar29 + uVar3] = 0x8a;
	}
	if (cVar1 == '\x04') {
		uVar3 = *puVar5;
		uVar27 = (undefined)uVar3;
		uVar12 = *puVar4;
		uVar26 = (undefined)uVar12;
		lVar22 = (ulonglong)uVar3 * 0x28 + (ulonglong)uVar12;
		uVar24 = (undefined)lVar22;
		puVar7[(int)lVar22] = 9;
		uVar17 = 0xf;
		iVar29 = (*(int *)(puVar9 + iVar6 + 0xc) + uVar3 + -1) * 0x28 + uVar12;
		puVar7[iVar29] = 0x10;
		uVar3 = *(uint *)(puVar9 + iVar6 + 0x10);
		uVar20 = (undefined)uVar3;
		param_3 = (char)(lVar22 + (ulonglong)uVar3);
		(puVar7 + -1)[(int)(lVar22 + (ulonglong)uVar3)] = 0xf;
		(puVar7 + -1)[iVar29 + uVar3] = 0xc;
	}
	if (cVar1 == '\x02') {
		lVar22 = random(0, 2, param_3, uVar17, uVar20, uVar24, uVar26, uVar27, in_stack_ffffffa8,
		    in_stack_ffffffaf, in_stack_ffffffbb);
		iVar29 = (int)lVar22;
		if (iVar29 == 1) {
			lVar22 = uVar32 + lVar31;
			param_3 = (char)lVar22;
			uVar17 = (undefined)*puVar5;
			iVar29 = (int)lVar22;
			uVar3 = *(uint *)(iVar29 + 0xc);
			uVar20 = 5;
			puVar7[*(int *)(iVar29 + 0x10) + *puVar4 + (*puVar5 + ((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0)) * 0x28 + -1] = 5;
		} else {
			if ((iVar29 < 1) && (-1 < iVar29)) {
				param_3 = (char)*puVar5;
				uVar17 = 4;
				uVar3 = *(uint *)(puVar9 + iVar6 + 0x10);
				puVar7[(*(int *)(puVar9 + iVar6 + 0xc) + *puVar5 + -1) * 0x28 + *puVar4 + ((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0)] = 4;
			}
		}
	}
	if (*puVar8 == '\x03') {
		lVar22 = random(0, 2, param_3, uVar17, uVar20, uVar24, uVar26, uVar27, in_stack_ffffffa8,
		    in_stack_ffffffaf, in_stack_ffffffbb);
		iVar29 = (int)lVar22;
		if (iVar29 == 1) {
			lVar31 = uVar32 + lVar31;
			param_3 = (char)lVar31;
			uVar17 = (undefined)*puVar5;
			iVar29 = (int)lVar31;
			uVar3 = *(uint *)(iVar29 + 0xc);
			uVar20 = 0x92;
			puVar7[*(int *)(iVar29 + 0x10) + *puVar4 + (*puVar5 + ((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0)) * 0x28 + -1] = 0x92;
		} else {
			if ((iVar29 < 1) && (-1 < iVar29)) {
				param_3 = (char)*puVar5;
				uVar17 = 0x93;
				uVar3 = *(uint *)(puVar9 + iVar6 + 0x10);
				puVar7[(*(int *)(puVar9 + iVar6 + 0xc) + *puVar5 + -1) * 0x28 + *puVar4 + ((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0)] = 0x93;
			}
		}
	}
	if (*puVar8 == '\x04') {
		lVar31 = random(0, 2, param_3, uVar17, uVar20, uVar24, uVar26, uVar27, in_stack_ffffffa8,
		    in_stack_ffffffaf, in_stack_ffffffbb);
		iVar29 = (int)lVar31;
		if (iVar29 == 1) {
			uVar3 = *(uint *)(puVar9 + iVar6 + 0xc);
			puVar7 = puVar7 + *(int *)(puVar9 + iVar6 + 0x10) + *puVar4 + (*puVar5 + ((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0)) * 0x28;
			puVar7[-0x29] = 0x39;
			puVar7[-1] = 6;
			puVar7[0x27] = 0x38;
			puVar7[-2] = 0x3b;
			puVar7[-0x2a] = 0x3a;
		} else {
			if ((iVar29 < 1) && (-1 < iVar29)) {
				uVar3 = *(uint *)(puVar9 + iVar6 + 0x10);
				iVar16 = *(int *)(puVar9 + iVar6 + 0xc) + *puVar5;
				iVar15 = (iVar16 + -1) * 0x28;
				uVar12 = *puVar4;
				iVar29 = ((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0);
				iVar6 = iVar15 + uVar12 + iVar29;
				(puVar7 + -1)[iVar6] = 0x35;
				puVar7[iVar6] = 6;
				puVar7[iVar29 + uVar12 + iVar15 + 1] = 0x34;
				(puVar7 + -1)[(iVar16 + -2) * 0x28 + uVar12 + iVar29] = 0x36;
			}
		}
	}
	return;
}

void DRLG_PlaceThemeRooms(longlong param_1, int param_2, uint param_3, longlong param_4, int param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	char cVar1;
	int iVar2;
	int iVar3;
	uint uVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	uint uVar9;
	undefined **ppuVar10;
	longlong lVar11;
	undefined8 uVar12;
	int *piVar13;
	longlong lVar14;
	undefined uVar15;
	undefined uVar17;
	longlong lVar16;
	longlong lVar18;
	longlong lVar19;
	longlong lVar20;
	longlong lVar21;
	byte *pbVar22;
	longlong lVar23;
	longlong lVar24;
	int iVar25;
	byte *pbVar26;
	ulonglong uVar27;
	undefined4 in_stack_ffffff78;
	undefined in_stack_ffffff7f;
	undefined in_stack_ffffff8b;
	uint local_58;
	uint local_54;

	puVar8 = PTR_DAT_100f1d64;
	puVar7 = PTR_DAT_100f1d60;
	puVar6 = PTR_DAT_100f1ab8;
	puVar5 = PTR_DAT_100f183c;
	lVar21 = (longlong)param_8;
	lVar20 = (longlong)param_7;
	lVar19 = (longlong)param_6;
	lVar18 = (longlong)param_5;
	ppuVar10 = &toc;
	uVar27 = ZEXT48(PTR_DAT_100f1d64);
	lVar14 = 0x14;
	*(undefined4 *)PTR_DAT_100f1d60 = 0;
	lVar16 = param_4;
	memset(uVar27, 0, 0x14, (char)param_4, (char)param_5, param_6, param_7, param_8, in_stack_ffffff78);
	pbVar22 = ppuVar10[-0x1df3];
	lVar23 = param_1 + -2;
	lVar24 = 0;
	do {
		iVar3 = (int)lVar24;
		iVar25 = 0;
		pbVar26 = pbVar22;
		do {
			if ((param_3 == (uint)*pbVar26) && (lVar11 = random(0, param_4, (char)lVar14, (char)lVar16, (char)lVar18, (char)lVar19, (char)lVar20, (char)lVar21, in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8b), (int)lVar11 == 0)) {
				lVar19 = ZEXT48(register0x0000000c) - 0x54;
				lVar20 = ZEXT48(register0x0000000c) - 0x58;
				lVar14 = lVar24;
				lVar16 = param_1;
				lVar18 = (longlong)param_2;
				uVar12 = DRLG_WillThemeRoomFit(param_3, iVar25, iVar3, param_1, param_2, (int *)lVar19, (int *)lVar20,
				    (char)lVar21, in_stack_ffffff78);
				uVar17 = (undefined)lVar16;
				uVar15 = (undefined)lVar14;
				if ((int)uVar12 != 0) {
					if (param_5 != 0) {
						lVar14 = random(0, ((ulonglong)local_54 - lVar23) + 1, uVar15, uVar17, (char)lVar18,
						    (char)lVar19, (char)lVar20, (char)lVar21, in_stack_ffffff78,
						    in_stack_ffffff7f, in_stack_ffffff8b);
						lVar14 = random(0, lVar14, uVar15, uVar17, (char)lVar18, (char)lVar19, (char)lVar20,
						    (char)lVar21, in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8b);
						uVar4 = (uint)lVar23;
						local_54 = uVar4 + (int)lVar14;
						if (((int)local_54 < (int)uVar4) || (param_2 + -2 < (int)local_54)) {
							local_54 = uVar4;
						}
						lVar14 = random(0, ((ulonglong)local_58 - lVar23) + 1, uVar15, uVar17, (char)lVar18,
						    (char)lVar19, (char)lVar20, (char)lVar21, in_stack_ffffff78,
						    in_stack_ffffff7f, in_stack_ffffff8b);
						lVar14 = random(0, lVar14, uVar15, uVar17, (char)lVar18, (char)lVar19, (char)lVar20,
						    (char)lVar21, in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8b);
						uVar9 = uVar4 + (int)lVar14;
						local_58 = uVar4;
						if (((int)uVar4 <= (int)uVar9) && (local_58 = uVar4, (int)uVar9 <= param_2 + -2)) {
							local_58 = uVar9;
						}
					}
					piVar13 = (int *)(puVar8 + *(int *)puVar7 * 0x14);
					*piVar13 = iVar25 + 1;
					piVar13[1] = iVar3 + 1;
					piVar13[3] = local_54;
					piVar13[4] = local_58;
					if (*puVar5 == '\x03') {
						lVar16 = (ulonglong)((iVar3 + (local_58 - 1)) * 2) + 0x11;
						DRLG_RectTrans((iVar25 + 2) * 2 + 0x10, (iVar3 + 2) * 2 + 0x10,
						    (iVar25 + (local_54 - 1)) * 2 + 0x11, (int)lVar16);
					} else {
						lVar16 = lVar24 + (ulonglong)local_58;
						DRLG_MRectTrans(iVar25 + 1, iVar3 + 1, iVar25 + local_54, (int)lVar16);
					}
					iVar2 = *(int *)puVar7;
					cVar1 = *puVar6;
					lVar14 = (longlong)cVar1;
					*(int *)(puVar8 + iVar2 * 0x14 + 8) = (int)(lVar14 + -1);
					DRLG_CreateThemeRoom(iVar2, (char)(lVar14 + -1), cVar1, (char)lVar16, (char)lVar18, (char)lVar19,
					    (char)lVar20, (char)lVar21, in_stack_ffffff78);
					*(int *)puVar7 = *(int *)puVar7 + 1;
				}
			}
			iVar25 = iVar25 + 1;
			pbVar26 = pbVar26 + 0x28;
		} while (iVar25 < 0x28);
		lVar24 = lVar24 + 1;
		pbVar22 = pbVar22 + 1;
	} while ((int)lVar24 < 0x28);
	return;
}

void DRLG_HoldThemeRooms(void)

{
	undefined *puVar1;
	undefined *puVar2;
	int iVar3;
	int *piVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	puVar2 = PTR_DAT_100f1d60;
	puVar1 = PTR_DAT_100f1834;
	if (0 < *(int *)PTR_DAT_100f1d60) {
		iVar5 = 0;
		piVar4 = (int *)PTR_DAT_100f1d64;
		while (iVar5 < *(int *)puVar2) {
			iVar6 = piVar4[1];
			iVar3 = iVar6 * 2 + 0x10;
			while (iVar6 < piVar4[1] + piVar4[4] + -1) {
				iVar8 = *piVar4;
				iVar7 = (iVar8 * 2 + 0x10) * 0x70;
				while (iVar8 < *piVar4 + piVar4[3] + -1) {
					iVar9 = iVar7 + iVar3;
					iVar7 = iVar7 + 0xe0;
					iVar8 = iVar8 + 1;
					*(byte *)(*(int *)puVar1 + iVar9) = *(byte *)(*(int *)puVar1 + iVar9) | 8;
					*(byte *)(*(int *)puVar1 + iVar9 + 0x70) = *(byte *)(*(int *)puVar1 + iVar9 + 0x70) | 8;
					*(byte *)(*(int *)puVar1 + iVar9 + 1) = *(byte *)(*(int *)puVar1 + iVar9 + 1) | 8;
					*(byte *)(*(int *)puVar1 + iVar9 + 0x71) = *(byte *)(*(int *)puVar1 + iVar9 + 0x71) | 8;
				}
				iVar3 = iVar3 + 2;
				iVar6 = iVar6 + 1;
			}
			piVar4 = piVar4 + 5;
			iVar5 = iVar5 + 1;
		}
	}
	return;
}

undefined8 SkipThemeRoom(int param_1, int param_2)

{
	ulonglong uVar1;
	int *piVar2;

	uVar1 = (ulonglong) * (uint *)PTR_DAT_100f1d60;
	piVar2 = (int *)PTR_DAT_100f1d64;
	if (0 < (int)*(uint *)PTR_DAT_100f1d60) {
		do {
			if ((((*piVar2 + -2 <= param_1) && (param_1 <= *piVar2 + piVar2[3] + 2)) && (piVar2[1] + -2 <= param_2)) && (param_2 <= piVar2[1] + piVar2[4] + 2)) {
				return 0;
			}
			piVar2 = piVar2 + 5;
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
	}
	return 1;
}

void InitLevels(void)

{
	undefined *puVar1;
	undefined *puVar2;

	puVar2 = PTR_DAT_100f183c;
	if (*(int *)PTR_DAT_100f1d5c != 0) {
		return;
	}
	*PTR_DAT_100f17ec = 0;
	puVar1 = PTR_DAT_100f17f8;
	*puVar2 = 0;
	*puVar1 = 0;
	return;
}
