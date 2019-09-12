
void InitAutomapOnce(void)

{
	undefined *puVar1;
	undefined *puVar2;

	puVar2 = PTR_DAT_100f1854;
	*(undefined4 *)PTR_DAT_100f1858 = 0;
	puVar1 = PTR_DAT_100f1850;
	*(undefined4 *)puVar2 = 0x32;
	puVar2 = PTR_DAT_100f184c;
	*(undefined4 *)puVar1 = 0x20;
	puVar1 = PTR_DAT_100f1848;
	*(undefined4 *)puVar2 = 0x10;
	puVar2 = PTR_DAT_100f1844;
	*(undefined4 *)puVar1 = 8;
	puVar1 = PTR_DAT_100f1840;
	*(undefined4 *)puVar2 = 4;
	*(undefined4 *)puVar1 = 2;
	return;
}

void InitAutomap(void)

{
	uint uVar1;
	byte *pbVar2;
	undefined *puVar3;
	uint uVar4;
	int iVar6;
	ulonglong uVar5;
	ulonglong uVar7;
	int iVar8;
	longlong lVar9;
	byte bVar11;
	int iVar10;
	undefined8 uVar12;
	undefined uVar15;
	short *psVar13;
	undefined uVar16;
	int iVar14;
	longlong lVar17;
	undefined uVar18;
	ulonglong uVar19;
	char *pcVar20;
	undefined uVar21;
	longlong lVar22;
	undefined4 uVar23;
	undefined uVar24;
	undefined4 in_r9;
	undefined uVar25;
	undefined4 in_r10;
	undefined uVar26;
	ulonglong uVar27;
	longlong lVar28;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	int local_4c;
	int *local_14;
	uint local_10;

	uVar4 = _DAT_100f2a50;
	puVar3 = PTR_DAT_100f1834;
	uVar7 = ZEXT48(register0x0000000c);
	uVar27 = (ulonglong)_DAT_100f2a50;
	uVar12 = 0x51eb851f;
	lVar28 = 0x1f;
	lVar17 = 0xc80;
	uVar19 = (ulonglong)_DAT_100f2a54;
	lVar22 = 0x640;
	do {
		uVar1 = (int)lVar17 / 100 + ((int)lVar17 >> 0x1f);
		iVar6 = uVar1 + (uVar1 >> 0x1f);
		iVar10 = 0x140 / iVar6;
		lVar9 = 0x140 - (longlong)iVar10 * (longlong)iVar6;
		pcVar20 = (char *)uVar19;
		*pcVar20 = (char)(iVar10 << 1) + '\x01';
		if (lVar9 != 0) {
			*pcVar20 = *pcVar20 + '\x01';
		}
		uVar1 = (int)lVar22 / 100 + ((int)lVar22 >> 0x1f);
		if ((int)(uVar1 + (uVar1 >> 0x1f)) <= (int)lVar9) {
			*pcVar20 = *pcVar20 + '\x01';
		}
		lVar17 = lVar17 + 0x140;
		lVar22 = lVar22 + 0xa0;
		uVar23 = (undefined4)lVar22;
		uVar19 = uVar19 + 1;
		lVar28 = lVar28 + -1;
	} while (lVar28 != 0);
	memset((char)uVar4, 0, 0x1f, (char)lVar17, (char)uVar19, (char)lVar22, (char)in_r9, (char)in_r10,
	    (char)in_stack_ffffffa8, in_stack_ffffffaf, local_4c);
	bVar11 = **(byte **)(local_4c + -0x7794);
	if (bVar11 == 3) {
		lVar28 = uVar7 - 0x10;
		iVar10 = local_4c;
		lVar22 = LoadFileInMem((ulonglong) * (uint *)(local_4c + -0x658c), (undefined4 *)lVar28, uVar12,
		    lVar17, uVar19, uVar23, in_r9, in_r10, in_stack_ffffffa8);
		local_14 = (int *)lVar22;
		local_10 = local_10 >> 1;
	} else {
		if (bVar11 < 3) {
			if (bVar11 == 1) {
				lVar28 = uVar7 - 0x10;
				iVar10 = local_4c;
				lVar22 = LoadFileInMem((ulonglong) * (uint *)(local_4c + -0x6584), (undefined4 *)lVar28, uVar12,
				    lVar17, uVar19, uVar23, in_r9, in_r10, in_stack_ffffffa8);
				local_14 = (int *)lVar22;
				local_10 = local_10 >> 1;
			} else {
				if (bVar11 == 0) {
					return;
				}
				lVar28 = uVar7 - 0x10;
				iVar10 = local_4c;
				lVar22 = LoadFileInMem((ulonglong) * (uint *)(local_4c + -0x6588), (undefined4 *)lVar28, uVar12,
				    lVar17, uVar19, uVar23, in_r9, in_r10, in_stack_ffffffa8);
				local_14 = (int *)lVar22;
				local_10 = local_10 >> 1;
			}
		} else {
			if (4 < bVar11) {
				return;
			}
			lVar28 = uVar7 - 0x10;
			iVar10 = local_4c;
			lVar22 = LoadFileInMem((ulonglong) * (uint *)(local_4c + -26000), (undefined4 *)lVar28, uVar12,
			    lVar17, uVar19, uVar23, in_r9, in_r10, in_stack_ffffffa8);
			local_14 = (int *)lVar22;
			local_10 = local_10 >> 1;
		}
	}
	uVar18 = (undefined)lVar17;
	uVar26 = (undefined)in_r10;
	uVar25 = (undefined)in_r9;
	uVar24 = (undefined)uVar23;
	uVar21 = (undefined)uVar19;
	uVar7 = FUN_100b8f7c(ZEXT48(local_14), lVar28, uVar12, lVar17, uVar19, uVar23, in_r9, in_r10,
	    in_stack_ffffffa8);
	uVar15 = (undefined)local_10;
	uVar19 = 1;
	bVar11 = 1;
	uVar16 = uVar15;
	if (local_10 != 0) {
		if (8 < local_10) {
			uVar5 = (ulonglong)(local_10 - 1 >> 3);
			lVar17 = uVar27 + 2;
			if (local_10 != 8) {
				do {
					pbVar2 = (byte *)uVar7;
					uVar19 = uVar19 + 8;
					psVar13 = (short *)lVar17;
					*psVar13 = (ushort)*pbVar2 + (ushort)pbVar2[1] * 0x100;
					psVar13[1] = (ushort)pbVar2[2] + (ushort)pbVar2[3] * 0x100;
					psVar13[2] = (ushort)pbVar2[4] + (ushort)pbVar2[5] * 0x100;
					psVar13[3] = (ushort)pbVar2[6] + (ushort)pbVar2[7] * 0x100;
					psVar13[4] = (ushort)pbVar2[8] + (ushort)pbVar2[9] * 0x100;
					psVar13[5] = (ushort)pbVar2[10] + (ushort)pbVar2[0xb] * 0x100;
					psVar13[6] = (ushort)pbVar2[0xc] + (ushort)pbVar2[0xd] * 0x100;
					uVar7 = uVar7 + 0x10;
					psVar13[7] = (ushort)pbVar2[0xe] + (ushort)pbVar2[0xf] * 0x100;
					lVar17 = lVar17 + 0x10;
					uVar5 = uVar5 - 1;
				} while (uVar5 != 0);
			}
		}
		bVar11 = (byte)uVar19;
		lVar22 = uVar27 + (ulonglong)(uint)((int)uVar19 << 1);
		uVar16 = (undefined)lVar22;
		lVar17 = ((ulonglong)local_10 + 1) - uVar19;
		uVar18 = uVar15;
		if ((uVar19 & 0xffffffff) <= (ulonglong)local_10) {
			do {
				pbVar2 = (byte *)uVar7;
				bVar11 = *pbVar2;
				uVar7 = uVar7 + 2;
				*(short *)lVar22 = (ushort)bVar11 + (ushort)pbVar2[1] * 0x100;
				lVar22 = lVar22 + 2;
				uVar16 = (undefined)lVar22;
				lVar17 = lVar17 + -1;
				uVar18 = uVar15;
			} while (lVar17 != 0);
		}
	}
	FUN_100b9100((int)local_14, bVar11, uVar16, uVar18, uVar21, uVar24, uVar25, uVar26, in_stack_ffffffa8);
	uVar15 = (undefined)in_stack_ffffffa8;
	mem_free_dbg(&local_14, bVar11, uVar16, uVar18, uVar21, uVar24, uVar25, uVar26, in_stack_ffffffa8);
	memset((char)*(undefined4 *)(local_4c + -0x7798), 0x40, uVar16, uVar18, uVar21, uVar24, uVar25,
	    uVar26, uVar15, in_stack_ffffffaf, iVar10);
	iVar10 = 0;
	do {
		lVar17 = 7;
		iVar6 = 0;
		do {
			*(byte *)(iVar10 + *(int *)puVar3 + iVar6) = *(byte *)(iVar10 + *(int *)puVar3 + iVar6) & 0x7f;
			iVar8 = *(int *)puVar3 + iVar6 + 0x70;
			*(byte *)(iVar10 + iVar8) = *(byte *)(iVar10 + iVar8) & 0x7f;
			iVar8 = *(int *)puVar3 + iVar6 + 0xe0;
			*(byte *)(iVar10 + iVar8) = *(byte *)(iVar10 + iVar8) & 0x7f;
			iVar8 = *(int *)puVar3 + iVar6 + 0x150;
			*(byte *)(iVar10 + iVar8) = *(byte *)(iVar10 + iVar8) & 0x7f;
			iVar8 = *(int *)puVar3 + iVar6 + 0x1c0;
			*(byte *)(iVar10 + iVar8) = *(byte *)(iVar10 + iVar8) & 0x7f;
			iVar8 = *(int *)puVar3 + iVar6 + 0x230;
			*(byte *)(iVar10 + iVar8) = *(byte *)(iVar10 + iVar8) & 0x7f;
			iVar8 = *(int *)puVar3 + iVar6 + 0x2a0;
			*(byte *)(iVar10 + iVar8) = *(byte *)(iVar10 + iVar8) & 0x7f;
			iVar8 = iVar6 + 0x380;
			iVar14 = *(int *)puVar3 + iVar6 + 0x310;
			*(byte *)(iVar10 + iVar14) = *(byte *)(iVar10 + iVar14) & 0x7f;
			*(byte *)(iVar10 + *(int *)puVar3 + iVar8) = *(byte *)(iVar10 + *(int *)puVar3 + iVar8) & 0x7f;
			iVar14 = *(int *)puVar3 + iVar8 + 0x70;
			*(byte *)(iVar10 + iVar14) = *(byte *)(iVar10 + iVar14) & 0x7f;
			iVar14 = *(int *)puVar3 + iVar8 + 0xe0;
			*(byte *)(iVar10 + iVar14) = *(byte *)(iVar10 + iVar14) & 0x7f;
			iVar14 = *(int *)puVar3 + iVar8 + 0x150;
			*(byte *)(iVar10 + iVar14) = *(byte *)(iVar10 + iVar14) & 0x7f;
			iVar14 = *(int *)puVar3 + iVar8 + 0x1c0;
			*(byte *)(iVar10 + iVar14) = *(byte *)(iVar10 + iVar14) & 0x7f;
			iVar14 = *(int *)puVar3 + iVar8 + 0x230;
			*(byte *)(iVar10 + iVar14) = *(byte *)(iVar10 + iVar14) & 0x7f;
			iVar14 = *(int *)puVar3 + iVar8 + 0x2a0;
			*(byte *)(iVar10 + iVar14) = *(byte *)(iVar10 + iVar14) & 0x7f;
			iVar6 = iVar6 + 0x700;
			iVar8 = *(int *)puVar3 + iVar8 + 0x310;
			*(byte *)(iVar10 + iVar8) = *(byte *)(iVar10 + iVar8) & 0x7f;
			lVar17 = lVar17 + -1;
		} while (lVar17 != 0);
		iVar10 = iVar10 + 1;
	} while (iVar10 < 0x70);
	return;
}

void StartAutomap(void)

{
	undefined *puVar1;
	undefined *puVar2;

	puVar1 = PTR_DAT_100f182c;
	*(undefined4 *)PTR_DAT_100f1830 = 0;
	puVar2 = PTR_DAT_100f1858;
	*(undefined4 *)puVar1 = 0;
	*(undefined4 *)puVar2 = 1;
	return;
}

void AutomapUp(void)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f182c;
	*(int *)PTR_DAT_100f1830 = *(int *)PTR_DAT_100f1830 + -1;
	*(int *)puVar1 = *(int *)puVar1 + -1;
	return;
}

void AutomapDown(void)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f182c;
	*(int *)PTR_DAT_100f1830 = *(int *)PTR_DAT_100f1830 + 1;
	*(int *)puVar1 = *(int *)puVar1 + 1;
	return;
}

void AutomapLeft(void)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f182c;
	*(int *)PTR_DAT_100f1830 = *(int *)PTR_DAT_100f1830 + -1;
	*(int *)puVar1 = *(int *)puVar1 + 1;
	return;
}

void AutomapRight(void)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f182c;
	*(int *)PTR_DAT_100f1830 = *(int *)PTR_DAT_100f1830 + 1;
	*(int *)puVar1 = *(int *)puVar1 + -1;
	return;
}

void AutomapZoomIn(void)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;

	puVar7 = PTR_DAT_100f1854;
	puVar6 = PTR_DAT_100f1850;
	puVar5 = PTR_DAT_100f184c;
	puVar4 = PTR_DAT_100f1848;
	puVar3 = PTR_DAT_100f1844;
	puVar2 = PTR_DAT_100f1840;
	if (199 < *(int *)PTR_DAT_100f1854) {
		return;
	}
	*(int *)PTR_DAT_100f1854 = *(int *)PTR_DAT_100f1854 + 5;
	uVar1 = (*(int *)puVar7 << 6) / 100 + ((*(int *)puVar7 << 6) >> 0x1f);
	*(uint *)puVar6 = uVar1 + (uVar1 >> 0x1f);
	*(int *)puVar5 = *(int *)puVar6 >> 1;
	*(int *)puVar4 = *(int *)puVar5 >> 1;
	*(int *)puVar3 = *(int *)puVar4 >> 1;
	*(int *)puVar2 = *(int *)puVar3 >> 1;
	return;
}

void AutomapZoomOut(void)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;

	puVar7 = PTR_DAT_100f1854;
	puVar6 = PTR_DAT_100f1850;
	puVar5 = PTR_DAT_100f184c;
	puVar4 = PTR_DAT_100f1848;
	puVar3 = PTR_DAT_100f1844;
	puVar2 = PTR_DAT_100f1840;
	if (*(int *)PTR_DAT_100f1854 < 0x33) {
		return;
	}
	*(int *)PTR_DAT_100f1854 = *(int *)PTR_DAT_100f1854 + -5;
	uVar1 = (*(int *)puVar7 << 6) / 100 + ((*(int *)puVar7 << 6) >> 0x1f);
	*(uint *)puVar6 = uVar1 + (uVar1 >> 0x1f);
	*(int *)puVar5 = *(int *)puVar6 >> 1;
	*(int *)puVar4 = *(int *)puVar5 >> 1;
	*(int *)puVar3 = *(int *)puVar4 >> 1;
	*(int *)puVar2 = *(int *)puVar3 >> 1;
	return;
}

void DrawAutomapType(ulonglong param_1, ulonglong param_2, uint param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	int iVar7;
	ulonglong uVar6;
	int iVar8;
	undefined4 in_stack_ffffff88;

	puVar4 = PTR_DAT_100f184c;
	puVar3 = PTR_DAT_100f1848;
	puVar2 = PTR_DAT_100f1844;
	puVar1 = PTR_DAT_100f1840;
	ppuVar5 = &toc;
	if ((param_3 >> 8 & 0x40) != 0) {
		iVar7 = (int)param_1;
		iVar8 = (int)param_2;
		ppuVar5 = &toc;
		ENG_set_pixel(iVar7, iVar8, 200);
		ENG_set_pixel(iVar7 - *(int *)puVar2, iVar8 - *(int *)puVar1, 200);
		ENG_set_pixel(iVar7 - *(int *)puVar2, iVar8 + *(int *)puVar1, 200);
		ENG_set_pixel(iVar7 + *(int *)puVar2, iVar8 - *(int *)puVar1, 200);
		ENG_set_pixel(iVar7 + *(int *)puVar2, iVar8 + *(int *)puVar1, 200);
		ENG_set_pixel(iVar7 - *(int *)puVar3, iVar8, 200);
		ENG_set_pixel(iVar7 + *(int *)puVar3, iVar8, 200);
		ENG_set_pixel(iVar7, iVar8 - *(int *)puVar2, 200);
		ENG_set_pixel(iVar7, iVar8 + *(int *)puVar2, 200);
		ENG_set_pixel(*(int *)puVar2 + (iVar7 - *(int *)puVar4), iVar8 + *(int *)puVar1, 200);
		ENG_set_pixel((iVar7 + *(int *)puVar4) - *(int *)puVar2, iVar8 + *(int *)puVar1, 200);
		ENG_set_pixel(iVar7 - *(int *)puVar3, iVar8 + *(int *)puVar2, 200);
		ENG_set_pixel(iVar7 + *(int *)puVar3, iVar8 + *(int *)puVar2, 200);
		ENG_set_pixel(iVar7 - *(int *)puVar2, (iVar8 + *(int *)puVar3) - *(int *)puVar1, 200);
		ENG_set_pixel(iVar7 + *(int *)puVar2, (iVar8 + *(int *)puVar3) - *(int *)puVar1, 200);
		ENG_set_pixel(iVar7, iVar8 + *(int *)puVar3, 200);
	}
	if ((param_3 >> 8 & 0x80) != 0) {
		uVar6 = (ulonglong) * (uint *)puVar2;
		DrawLine(param_1 - uVar6, (param_2 - uVar6) - (ulonglong) * (uint *)puVar1,
		    param_1 + (ulonglong) * (uint *)puVar3 + uVar6, param_2 + (ulonglong) * (uint *)puVar1,
		    0x90, param_6, param_7, param_8, in_stack_ffffff88);
		DrawLine(param_1 - (ulonglong) * (uint *)puVar3, param_2 - (ulonglong) * (uint *)puVar2,
		    param_1 + (ulonglong) * (uint *)puVar3, param_2 + (ulonglong) * (uint *)puVar2, 0x90,
		    param_6, param_7, param_8, in_stack_ffffff88);
		uVar6 = (ulonglong) * (uint *)puVar2;
		DrawLine((param_1 - (ulonglong) * (uint *)puVar3) - uVar6, param_2 - (ulonglong) * (uint *)puVar1, param_1 + uVar6, param_2 + uVar6 + (ulonglong) * (uint *)puVar1, 0x90, param_6, param_7,
		    param_8, in_stack_ffffff88);
		DrawLine(param_1 - (ulonglong) * (uint *)puVar4, param_2, param_1,
		    param_2 + (ulonglong) * (uint *)puVar3, 0x90, param_6, param_7, param_8, in_stack_ffffff88);
	}
	if (0xc < (param_3 & 0xf)) {
		return;
	}
	// WARNING: Could not recover jumptable at 0x10019da8. Too many branches
	// WARNING: Treating indirect jump as call
	(*(code *)ppuVar5[(param_3 & 0xf) - 0xb9d])();
	return;
}

void DrawAutomapPlr(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	uint uVar3;
	uint uVar4;
	int iVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	ulonglong uVar10;
	int iVar11;
	undefined uVar12;
	int iVar14;
	ulonglong uVar13;
	undefined uVar15;
	ulonglong uVar16;
	undefined uVar17;
	int iVar18;
	int iVar20;
	ulonglong uVar19;
	ulonglong uVar21;
	int iVar22;
	undefined4 in_stack_ffffffa8;

	puVar9 = PTR_DAT_100f1848;
	puVar8 = PTR_DAT_100f1844;
	puVar7 = PTR_DAT_100f1840;
	uVar12 = (undefined)((ulonglong) * (uint *)PTR_DAT_100f1824 * 0x55ec);
	iVar5 = (int)((ulonglong) * (uint *)PTR_DAT_100f1824 * 0x55ec);
	if (*(int *)(PTR_DAT_100f1828 + iVar5) == 3) {
		puVar6 = PTR_DAT_100f1828 + iVar5;
		iVar11 = *(int *)(puVar6 + 0x40);
		iVar22 = *(int *)(puVar6 + 0x44);
		if (*(int *)(puVar6 + 0x70) == 2) {
			iVar11 = iVar11 + 1;
		} else {
			iVar22 = iVar22 + 1;
		}
	} else {
		iVar11 = *(int *)(PTR_DAT_100f1828 + iVar5 + 0x38);
		iVar22 = *(int *)(PTR_DAT_100f1828 + iVar5 + 0x3c);
	}
	iVar18 = *(int *)PTR_DAT_100f1854;
	iVar14 = iVar18 * *(int *)(PTR_DAT_100f1828 + iVar5 + 0x60);
	iVar20 = iVar18 * *(int *)(PTR_DAT_100f1828 + iVar5 + 100);
	uVar1 = *(uint *)PTR_DAT_100f1848;
	uVar13 = (ulonglong)uVar1;
	uVar15 = (undefined)uVar1;
	uVar2 = *(uint *)PTR_DAT_100f1844;
	uVar16 = (ulonglong)uVar2;
	uVar17 = (undefined)uVar2;
	uVar3 = iVar14 / 100 + (iVar14 >> 0x1f);
	uVar21 = (ulonglong)uVar3 + (ulonglong)(uVar3 >> 0x1f);
	iVar14 = *(int *)(PTR_DAT_100f1818 + 4) * iVar18;
	uVar3 = iVar20 / 100 + (iVar20 >> 0x1f);
	uVar19 = ((longlong)(int)((ulonglong)((longlong)iVar20 * 0x51eb851f) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar3) + (ulonglong)(uVar3 >> 0x1f);
	uVar3 = (*(int *)PTR_DAT_100f1818 * iVar18) / 100 + (*(int *)PTR_DAT_100f1818 * iVar18 >> 0x1f);
	iVar18 = (iVar11 - *(int *)PTR_DAT_100f1820) + *(int *)PTR_DAT_100f1830 * -2;
	iVar11 = (iVar22 - *(int *)PTR_DAT_100f181c) + *(int *)PTR_DAT_100f182c * -2;
	uVar10 = (longlong)iVar11 * (longlong)(int)uVar1;
	uVar4 = iVar14 / 100 + (iVar14 >> 0x1f);
	uVar21 = (((longlong)iVar18 * (longlong)(int)uVar1 + 0x180) - uVar10) + (uVar21 & 0xffffffff00000000 | (ulonglong)(uint)((int)uVar21 >> 1)) + (uVar10 & 0xffffffff00000000 | (ulonglong)(uint)((int)(uVar3 + (uVar3 >> 0x1f)) >> 1));
	uVar10 = ((longlong)(int)((ulonglong)((longlong)iVar14 * 0x51eb851f) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar4) + (ulonglong)(uVar4 >> 0x1f);
	if ((*(int *)PTR_DAT_100f1814 != 0) || (*(int *)PTR_DAT_100f1810 != 0)) {
		uVar21 = uVar21 - 0xa0;
	}
	if ((*(int *)PTR_DAT_100f180c != 0) || (*(int *)PTR_DAT_100f1808 != 0)) {
		uVar21 = uVar21 + 0xa0;
	}
	uVar10 = ((longlong)iVar18 * (longlong)(int)uVar2 + (longlong)iVar11 * (longlong)(int)uVar2 + 0x150 + (uVar19 & 0xffffffff00000000 | (ulonglong)(uint)((int)uVar19 >> 1)) + (uVar10 & 0xffffffff00000000 | (ulonglong)(uint)((int)uVar10 >> 1))) - uVar16;
	switch (*(undefined4 *)(PTR_DAT_100f1828 + iVar5 + 0x70)) {
	case 0:
		DrawLine(uVar21, uVar10, uVar21, uVar10 + uVar13, 0x99, uVar12, uVar15, uVar17, in_stack_ffffffa8);
		DrawLine(uVar21, uVar10 + (ulonglong) * (uint *)puVar9, uVar21 + (ulonglong) * (uint *)puVar7,
		    uVar10 + (ulonglong) * (uint *)puVar8, 0x99, uVar12, uVar15, uVar17, in_stack_ffffffa8);
		DrawLine(uVar21, uVar10 + (ulonglong) * (uint *)puVar9, uVar21 - (ulonglong) * (uint *)puVar7,
		    uVar10 + (ulonglong) * (uint *)puVar8, 0x99, uVar12, uVar15, uVar17, in_stack_ffffffa8);
		break;
	case 1:
		DrawLine(uVar21, uVar10, uVar21 - uVar13, uVar10 + uVar16, 0x99, uVar12, uVar15, uVar17,
		    in_stack_ffffffa8);
		DrawLine(uVar21 - (ulonglong) * (uint *)puVar9, uVar10 + (ulonglong) * (uint *)puVar8,
		    (uVar21 - (ulonglong) * (uint *)puVar8) - (ulonglong) * (uint *)puVar7, uVar10, 0x99,
		    uVar12, uVar15, uVar17, in_stack_ffffffa8);
		uVar10 = uVar10 + (ulonglong) * (uint *)puVar8;
		DrawLine(uVar21 - (ulonglong) * (uint *)puVar9, uVar10, uVar21 - (ulonglong) * (uint *)puVar8,
		    uVar10, 0x99, uVar12, uVar15, uVar17, in_stack_ffffffa8);
		break;
	case 2:
		DrawLine(uVar21, uVar10, uVar21 - uVar13, uVar10, 0x99, uVar12, uVar15, uVar17, in_stack_ffffffa8);
		DrawLine(uVar21 - (ulonglong) * (uint *)puVar9, uVar10, uVar21 - (ulonglong) * (uint *)puVar8,
		    uVar10 - (ulonglong) * (uint *)puVar7, 0x99, uVar12, uVar15, uVar17, in_stack_ffffffa8);
		DrawLine(uVar21 - (ulonglong) * (uint *)puVar9, uVar10, uVar21 - (ulonglong) * (uint *)puVar8,
		    uVar10 + (ulonglong) * (uint *)puVar7, 0x99, uVar12, uVar15, uVar17, in_stack_ffffffa8);
		break;
	case 3:
		DrawLine(uVar21, uVar10, uVar21 - uVar13, uVar10 - uVar16, 0x99, uVar12, uVar15, uVar17,
		    in_stack_ffffffa8);
		uVar13 = uVar10 - (ulonglong) * (uint *)puVar8;
		DrawLine(uVar21 - (ulonglong) * (uint *)puVar9, uVar13, uVar21 - (ulonglong) * (uint *)puVar8,
		    uVar13, 0x99, uVar12, uVar15, uVar17, in_stack_ffffffa8);
		DrawLine(uVar21 - (ulonglong) * (uint *)puVar9, uVar10 - (ulonglong) * (uint *)puVar8,
		    (uVar21 - (ulonglong) * (uint *)puVar8) - (ulonglong) * (uint *)puVar7, uVar10, 0x99,
		    uVar12, uVar15, uVar17, in_stack_ffffffa8);
		break;
	case 4:
		DrawLine(uVar21, uVar10, uVar21, uVar10 - uVar13, 0x99, uVar12, uVar15, uVar17, in_stack_ffffffa8);
		DrawLine(uVar21, uVar10 - (ulonglong) * (uint *)puVar9, uVar21 - (ulonglong) * (uint *)puVar7,
		    uVar10 - (ulonglong) * (uint *)puVar8, 0x99, uVar12, uVar15, uVar17, in_stack_ffffffa8);
		DrawLine(uVar21, uVar10 - (ulonglong) * (uint *)puVar9, uVar21 + (ulonglong) * (uint *)puVar7,
		    uVar10 - (ulonglong) * (uint *)puVar8, 0x99, uVar12, uVar15, uVar17, in_stack_ffffffa8);
		break;
	case 5:
		DrawLine(uVar21, uVar10, uVar21 + uVar13, uVar10 - uVar16, 0x99, uVar12, uVar15, uVar17,
		    in_stack_ffffffa8);
		uVar13 = uVar10 - (ulonglong) * (uint *)puVar8;
		DrawLine(uVar21 + (ulonglong) * (uint *)puVar9, uVar13, uVar21 + (ulonglong) * (uint *)puVar8,
		    uVar13, 0x99, uVar12, uVar15, uVar17, in_stack_ffffffa8);
		DrawLine(uVar21 + (ulonglong) * (uint *)puVar9, uVar10 - (ulonglong) * (uint *)puVar8,
		    uVar21 + (ulonglong) * (uint *)puVar8 + (ulonglong) * (uint *)puVar7, uVar10, 0x99, uVar12, uVar15, uVar17, in_stack_ffffffa8);
		break;
	case 6:
		DrawLine(uVar21, uVar10, uVar21 + uVar13, uVar10, 0x99, uVar12, uVar15, uVar17, in_stack_ffffffa8);
		DrawLine(uVar21 + (ulonglong) * (uint *)puVar9, uVar10, uVar21 + (ulonglong) * (uint *)puVar8,
		    uVar10 - (ulonglong) * (uint *)puVar7, 0x99, uVar12, uVar15, uVar17, in_stack_ffffffa8);
		DrawLine(uVar21 + (ulonglong) * (uint *)puVar9, uVar10, uVar21 + (ulonglong) * (uint *)puVar8,
		    uVar10 + (ulonglong) * (uint *)puVar7, 0x99, uVar12, uVar15, uVar17, in_stack_ffffffa8);
		break;
	case 7:
		DrawLine(uVar21, uVar10, uVar21 + uVar13, uVar10 + uVar16, 0x99, uVar12, uVar15, uVar17,
		    in_stack_ffffffa8);
		DrawLine(uVar21 + (ulonglong) * (uint *)puVar9, uVar10 + (ulonglong) * (uint *)puVar8,
		    uVar21 + (ulonglong) * (uint *)puVar8 + (ulonglong) * (uint *)puVar7, uVar10, 0x99, uVar12, uVar15, uVar17, in_stack_ffffffa8);
		uVar10 = uVar10 + (ulonglong) * (uint *)puVar8;
		DrawLine(uVar21 + (ulonglong) * (uint *)puVar9, uVar10, uVar21 + (ulonglong) * (uint *)puVar8,
		    uVar10, 0x99, uVar12, uVar15, uVar17, in_stack_ffffffa8);
	}
	return;
}

ulonglong GetAutomapType(longlong param_1, int param_2, int param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	ushort uVar1;
	ulonglong uVar2;
	ulonglong uVar3;
	undefined param_4_00;
	int iVar4;
	undefined4 param_9_00;

	iVar4 = (int)param_1;
	param_4_00 = SUB41(PTR_DAT_100f1838, 0);
	if ((((param_3 == 0) || (iVar4 != -1)) || (param_2 < 0)) || ((0x27 < param_2 || (PTR_DAT_100f1838[param_2] == '\0')))) {
		if ((((param_3 == 0) || ((param_2 != -1 || (iVar4 < 0)))) || (0x27 < iVar4)) || (PTR_DAT_100f1838[iVar4 * 0x28] == '\0')) {
			if ((iVar4 < 0) || (0x27 < iVar4)) {
				uVar2 = 0;
			} else {
				if ((param_2 < 0) || (0x27 < param_2)) {
					uVar2 = 0;
				} else {
					if ((PTR_DAT_100f1838[iVar4 * 0x28 + param_2] == '\0') && (param_3 != 0)) {
						uVar2 = 0;
					} else {
						uVar1 = *(ushort *)(_DAT_100f2a50 + (uint)(byte)PTR_DAT_100f1804[iVar4 * 0x28 + param_2] * 2);
						uVar2 = (ulonglong)uVar1;
						if ((uVar1 == 7) && ((uVar3 = GetAutomapType(param_1 + -1, param_2, 0, param_4_00, param_5, param_6, param_7, param_8, param_9_00), ((uint)uVar3 >> 8 & 8) != 0 && (uVar3 = GetAutomapType(param_1, param_2 + -1, 0, param_4_00, param_5, param_6, param_7, param_8, param_9_00), ((uint)uVar3 >> 8 & 4) != 0)))) {
							uVar2 = 1;
						}
					}
				}
			}
		} else {
			uVar2 = GetAutomapType(param_1, 0, 0, param_4_00, param_5, param_6, param_7, param_8, param_9_00);
			if ((uVar2 & 0x4000) == 0) {
				uVar2 = 0x4000;
			} else {
				uVar2 = 0;
			}
		}
	} else {
		uVar2 = GetAutomapType(0, param_2, 0, param_4_00, param_5, param_6, param_7, param_8, param_9_00);
		if ((uVar2 & 0x4000) == 0) {
			uVar2 = 0x4000;
		} else {
			uVar2 = 0;
		}
	}
	return uVar2;
}

void DrawAutomapGame(void)

{
	undefined *puVar1;
	undefined **ppuVar2;
	int iVar3;
	undefined4 in_r6;
	undefined8 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_fffffec8;
	undefined in_stack_fffffecf;
	undefined4 in_stack_fffffedc;
	undefined4 in_stack_fffffee0;
	undefined4 in_stack_fffffee4;
	undefined4 in_stack_fffffee8;
	undefined4 in_stack_fffffeec;
	undefined4 in_stack_fffffef0;
	undefined4 in_stack_fffffef4;
	byte abStack264[264];

	puVar1 = PTR_DAT_100f17fc;
	ppuVar2 = &toc;
	iVar3 = 0x14;
	if (1 < (byte)*PTR_DAT_100f17e0) {
		ppuVar2 = &toc;
		iVar3 = strcpy((int)abStack264, (int)PTR_s_game__100f2a34);
		strcat(iVar3, (int)ppuVar2[-0x1df4]);
		in_r6 = 3;
		PrintGameStr(8, 0x14, abStack264, 3, in_r7, in_r8, in_r9, in_r10, in_stack_fffffec8);
		iVar3 = 0x23;
		if (*puVar1 != '\0') {
			iVar3 = strcpy((int)abStack264, (int)ppuVar2[-0x1968]);
			strcat(iVar3, (int)puVar1);
			in_r6 = 3;
			PrintGameStr(8, 0x23, abStack264, 3, in_r7, in_r8, in_r9, in_r10, in_stack_fffffec8);
			iVar3 = 0x32;
		}
	}
	if (*ppuVar2[-0x1df6] == '\0') {
		if (*ppuVar2[-0x1df9] != 0) {
			sprintf((int)abStack264, ppuVar2[-0x1969], (uint)(byte)*ppuVar2[-0x1df9], in_r6, (int)in_r7,
			    in_r8, in_r9, in_r10, in_stack_fffffec8, in_stack_fffffecf, in_stack_fffffedc,
			    in_stack_fffffee0, in_stack_fffffee4, in_stack_fffffee8, in_stack_fffffeec,
			    in_stack_fffffef0, in_stack_fffffef4);
			PrintGameStr(8, iVar3, abStack264, 3, in_r7, in_r8, in_r9, in_r10, in_stack_fffffec8);
		}
	} else {
		PrintGameStr(8, iVar3, *(byte **)(ppuVar2[-0x1df7] + (uint)(byte)*ppuVar2[-0x1df8] * 4), 3,
		    ZEXT48(ppuVar2[-0x1df7]), in_r8, in_r9, in_r10, in_stack_fffffec8);
	}
	return;
}

void DrawAutomap(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	uint uVar3;
	uint uVar4;
	uint uVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined *puVar12;
	undefined *puVar13;
	undefined *puVar14;
	undefined *puVar15;
	ulonglong uVar16;
	ulonglong uVar17;
	int iVar18;
	ulonglong uVar19;
	ulonglong uVar20;
	longlong lVar21;
	int iVar22;
	undefined8 uVar23;
	ulonglong uVar24;
	ulonglong uVar25;
	longlong lVar26;
	ulonglong uVar27;
	int iVar28;
	longlong lVar29;
	longlong lVar30;
	longlong lVar31;
	longlong lVar32;
	ulonglong uVar33;
	undefined4 in_stack_ffffff98;

	puVar15 = PTR_DAT_100f1850;
	puVar14 = PTR_DAT_100f184c;
	puVar13 = PTR_DAT_100f1848;
	puVar12 = PTR_DAT_100f1844;
	puVar11 = PTR_DAT_100f1830;
	puVar10 = PTR_DAT_100f182c;
	puVar9 = PTR_DAT_100f1820;
	puVar8 = PTR_DAT_100f1818;
	puVar7 = PTR_DAT_100f17e8;
	puVar6 = PTR_DAT_100f17e4;
	if (*PTR_DAT_100f183c == '\0') {
		DrawAutomapGame();
		return;
	}
	*(int *)PTR_DAT_100f17c8 = *(int *)PTR_DAT_100f17cc + 0x60000;
	uVar1 = *(uint *)puVar9;
	uVar24 = (ulonglong)uVar1;
	*(int *)puVar7 = (int)(uVar1 - 0x10) >> 1;
	uVar25 = ((ulonglong) * (uint *)puVar7 + (ulonglong) * (uint *)puVar11) - 0x27;
	if (0x27 < (int)((ulonglong) * (uint *)puVar7 + (ulonglong) * (uint *)puVar11)) {
		uVar3 = (uint)uVar25 >> 3;
		uVar16 = (ulonglong)uVar3;
		if (uVar3 != 0) {
			do {
				*(int *)puVar11 = *(int *)puVar11 + -1;
				*(int *)puVar11 = *(int *)puVar11 + -1;
				*(int *)puVar11 = *(int *)puVar11 + -1;
				*(int *)puVar11 = *(int *)puVar11 + -1;
				*(int *)puVar11 = *(int *)puVar11 + -1;
				*(int *)puVar11 = *(int *)puVar11 + -1;
				*(int *)puVar11 = *(int *)puVar11 + -1;
				*(int *)puVar11 = *(int *)puVar11 + -1;
				uVar16 = uVar16 - 1;
			} while (uVar16 != 0);
			uVar25 = uVar25 & 7;
			if (uVar25 == 0)
				goto LAB_1001ad1c;
		}
		do {
			*(int *)puVar11 = *(int *)puVar11 + -1;
			uVar25 = uVar25 - 1;
		} while (uVar25 != 0);
	}
LAB_1001ad1c:
	puVar9 = PTR_DAT_100f181c;
	*(int *)puVar7 = *(int *)puVar7 + *(int *)puVar11;
	uVar3 = *(uint *)puVar9;
	uVar25 = (ulonglong)uVar3;
	*(int *)puVar6 = (int)(uVar3 - 0x10) >> 1;
	uVar16 = ((ulonglong) * (uint *)puVar6 + (ulonglong) * (uint *)puVar10) - 0x27;
	if (0x27 < (int)((ulonglong) * (uint *)puVar6 + (ulonglong) * (uint *)puVar10)) {
		uVar4 = (uint)uVar16 >> 3;
		uVar17 = (ulonglong)uVar4;
		if (uVar4 != 0) {
			do {
				*(int *)puVar10 = *(int *)puVar10 + -1;
				*(int *)puVar10 = *(int *)puVar10 + -1;
				*(int *)puVar10 = *(int *)puVar10 + -1;
				*(int *)puVar10 = *(int *)puVar10 + -1;
				*(int *)puVar10 = *(int *)puVar10 + -1;
				*(int *)puVar10 = *(int *)puVar10 + -1;
				*(int *)puVar10 = *(int *)puVar10 + -1;
				*(int *)puVar10 = *(int *)puVar10 + -1;
				uVar17 = uVar17 - 1;
			} while (uVar17 != 0);
			uVar16 = uVar16 & 7;
			if (uVar16 == 0)
				goto LAB_1001ae80;
		}
		do {
			*(int *)puVar10 = *(int *)puVar10 + -1;
			uVar16 = uVar16 - 1;
		} while (uVar16 != 0);
	}
LAB_1001ae80:
	iVar28 = _DAT_100f2a54;
	puVar9 = PTR_DAT_100f1854;
	*(int *)puVar6 = *(int *)puVar6 + *(int *)puVar10;
	iVar18 = *(int *)puVar9;
	uVar4 = *(uint *)puVar8;
	uVar2 = *(uint *)(puVar8 + 4);
	uVar16 = (ulonglong)uVar2;
	uVar5 = (iVar18 + -0x32) / 5 + (iVar18 + -0x32 >> 0x1f);
	uVar17 = SEXT18(*(char *)(iVar28 + uVar5 + (uVar5 >> 0x1f)));
	if ((ulonglong)uVar4 + uVar16 != 0) {
		uVar17 = uVar17 + 1;
	}
	iVar28 = (int)uVar17;
	lVar30 = (ulonglong) * (uint *)puVar7 - uVar17;
	lVar29 = (ulonglong) * (uint *)puVar6 - 1;
	if ((uVar17 & 1) == 0) {
		lVar26 = 0x180 - (longlong) * (int *)puVar15 * (longlong)(iVar28 >> 1);
		lVar32 = (ulonglong) * (uint *)puVar14 + lVar26;
		lVar31 = (0x150 - (longlong)(int)*(uint *)puVar14 * (longlong)(iVar28 >> 1)) - (ulonglong) * (uint *)puVar13;
	} else {
		lVar26 = (longlong) * (int *)puVar15 * (longlong)(iVar28 + -1 >> 1);
		lVar32 = 0x180 - lVar26;
		lVar31 = 0x150 - (longlong) * (int *)puVar14 * (longlong)(iVar28 + 1 >> 1);
	}
	if ((uVar1 & 1) != 0) {
		lVar32 = lVar32 - (ulonglong) * (uint *)puVar13;
		lVar31 = lVar31 - (ulonglong) * (uint *)puVar12;
	}
	if ((uVar3 & 1) != 0) {
		lVar32 = lVar32 + (ulonglong) * (uint *)puVar13;
		lVar31 = lVar31 - (ulonglong) * (uint *)puVar12;
	}
	lVar21 = (longlong)(int)uVar4 * (longlong)iVar18;
	uVar23 = 0x51eb851f;
	iVar18 = uVar2 * iVar18;
	iVar22 = (int)lVar21;
	uVar1 = iVar22 / 100 + (iVar22 >> 0x1f);
	uVar17 = (ulonglong)(uVar1 >> 0x1f);
	uVar19 = ((longlong)(int)((ulonglong)((longlong)iVar22 * 0x51eb851f) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar1) + uVar17;
	uVar33 = lVar32 + (uVar19 & 0xffffffff00000000 | (ulonglong)(uint)((int)uVar19 >> 1));
	uVar1 = iVar18 / 100 + (iVar18 >> 0x1f);
	uVar19 = ((longlong)(int)((ulonglong)((longlong)iVar18 * 0x51eb851f) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar1) + (ulonglong)(uVar1 >> 0x1f);
	uVar19 = lVar31 + (uVar19 & 0xffffffff00000000 | (ulonglong)(uint)((int)uVar19 >> 1));
	if ((*(int *)PTR_DAT_100f1814 != 0) || (*(int *)PTR_DAT_100f1810 != 0)) {
		uVar33 = uVar33 - 0xa0;
	}
	uVar20 = ZEXT48(PTR_DAT_100f180c);
	if ((*(int *)PTR_DAT_100f180c != 0) || (uVar20 = ZEXT48(PTR_DAT_100f1808), *(int *)PTR_DAT_100f1808 != 0)) {
		uVar33 = uVar33 + 0xa0;
	}
	iVar18 = 0;
	while (iVar18 <= iVar28 + 1) {
		lVar31 = 0;
		uVar20 = uVar33;
		while ((int)lVar31 < iVar28) {
			uVar17 = lVar29 - lVar31;
			uVar16 = GetAutomapType(lVar30 + lVar31, (int)uVar17, 1, (char)lVar21, (char)uVar23, (char)uVar24,
			    (char)uVar25, (char)lVar26, in_stack_ffffff98);
			if ((uVar16 & 0xffff) != 0) {
				uVar17 = uVar19;
				DrawAutomapType(uVar20, uVar19, (uint)uVar16, (char)lVar21, (char)uVar23, (char)uVar24, (char)uVar25,
				    (char)lVar26, in_stack_ffffff98);
			}
			lVar31 = lVar31 + 1;
			uVar20 = uVar20 + (ulonglong) * (uint *)puVar15;
		}
		uVar20 = (ulonglong) * (uint *)puVar14;
		lVar31 = 0;
		uVar1 = *(uint *)puVar13;
		lVar29 = lVar29 + 1;
		uVar27 = uVar33 - uVar20;
		while ((int)lVar31 <= iVar28) {
			uVar17 = lVar29 - lVar31;
			uVar20 = GetAutomapType(lVar30 + lVar31, (int)uVar17, 1, (char)lVar21, (char)uVar23, (char)uVar24,
			    (char)uVar25, (char)lVar26, in_stack_ffffff98);
			uVar16 = uVar20;
			if ((uVar20 & 0xffff) != 0) {
				uVar17 = uVar19 + (ulonglong)uVar1;
				uVar16 = uVar20;
				uVar20 = DrawAutomapType(uVar27, uVar19 + (ulonglong)uVar1, (uint)uVar20, (char)lVar21,
				    (char)uVar23, (char)uVar24, (char)uVar25, (char)lVar26, in_stack_ffffff98);
			}
			lVar31 = lVar31 + 1;
			uVar27 = uVar27 + (ulonglong) * (uint *)puVar15;
		}
		lVar30 = lVar30 + 1;
		iVar18 = iVar18 + 1;
		uVar19 = uVar19 + (ulonglong) * (uint *)puVar14;
	}
	DrawAutomapPlr((char)uVar20, (char)uVar17, (char)uVar16, (char)lVar21, (char)uVar23, (char)uVar24,
	    (char)uVar25, (char)lVar26, in_stack_ffffff98);
	DrawAutomapGame();
	return;
}

void SetAutomapView(longlong param_1, int param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	int iVar1;
	uint uVar2;
	int iVar3;
	undefined *puVar4;
	ulonglong uVar5;
	ulonglong uVar6;
	undefined4 in_stack_ffffffb8;

	puVar4 = PTR_DAT_100f1838;
	uVar2 = (int)(param_1 - 0x10U) >> 1;
	uVar5 = param_1 - 0x10U & 0xffffffff00000000 | (ulonglong)uVar2;
	iVar1 = param_2 + -0x10 >> 1;
	if ((((-1 < (longlong)uVar5) && ((int)uVar2 < 0x28)) && (-1 < iVar1)) && (iVar1 < 0x28)) {
		iVar3 = uVar2 * 0x28;
		PTR_DAT_100f1838[iVar3 + iVar1] = 1;
		uVar6 = GetAutomapType(uVar5, iVar1, 0, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
		uVar2 = (uint)uVar6 & 0xf;
		if (uVar2 == 4) {
			if ((uVar6 & 0x4000) == 0) {
				uVar6 = GetAutomapType(uVar5 - 1, iVar1, 0, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffffb8);
				if ((uVar6 & 0x4000) != 0) {
					puVar4[iVar1 + iVar3 + -0x28] = 1;
				}
				uVar6 = GetAutomapType(uVar5, iVar1 + -1, 0, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffffb8);
				if ((uVar6 & 0x4000) != 0) {
					puVar4[iVar1 + iVar3 + -1] = 1;
				}
				uVar5 = GetAutomapType(uVar5 - 1, iVar1 + -1, 0, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffffb8);
				if ((uVar5 & 0x4000) != 0) {
					puVar4[iVar1 + iVar3 + -0x29] = 1;
				}
			} else {
				uVar6 = GetAutomapType(uVar5, iVar1 + 1, 0, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffffb8);
				if (((uint)uVar6 & 0xffff) == 0x4007) {
					puVar4[iVar1 + iVar3 + 1] = 1;
				}
				uVar5 = GetAutomapType(uVar5 + 1, iVar1, 0, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffffb8);
				if (((uint)uVar5 & 0xffff) == 0x4007) {
					puVar4[iVar1 + iVar3 + 0x28] = 1;
				}
			}
		} else {
			if (uVar2 < 4) {
				if (uVar2 == 2) {
					if ((uVar6 & 0x4000) == 0) {
						uVar5 = GetAutomapType(uVar5 - 1, iVar1, 0, param_4, param_5, param_6, param_7, param_8,
						    in_stack_ffffffb8);
						if ((uVar5 & 0x4000) != 0) {
							puVar4[iVar1 + iVar3 + -0x28] = 1;
						}
					} else {
						uVar5 = GetAutomapType(uVar5, iVar1 + 1, 0, param_4, param_5, param_6, param_7, param_8,
						    in_stack_ffffffb8);
						if (((uint)uVar5 & 0xffff) == 0x4007) {
							puVar4[iVar1 + iVar3 + 1] = 1;
						}
					}
				} else {
					if (1 < uVar2) {
						if ((uVar6 & 0x4000) == 0) {
							uVar5 = GetAutomapType(uVar5, iVar1 + -1, 0, param_4, param_5, param_6, param_7, param_8,
							    in_stack_ffffffb8);
							if ((uVar5 & 0x4000) != 0) {
								puVar4[iVar1 + iVar3 + -1] = 1;
							}
						} else {
							uVar5 = GetAutomapType(uVar5 + 1, iVar1, 0, param_4, param_5, param_6, param_7, param_8,
							    in_stack_ffffffb8);
							if (((uint)uVar5 & 0xffff) == 0x4007) {
								puVar4[iVar1 + iVar3 + 0x28] = 1;
							}
						}
					}
				}
			} else {
				if (uVar2 == 6) {
					if ((uVar6 & 0x4000) == 0) {
						uVar5 = GetAutomapType(uVar5, iVar1 + -1, 0, param_4, param_5, param_6, param_7, param_8,
						    in_stack_ffffffb8);
						if ((uVar5 & 0x4000) != 0) {
							puVar4[iVar1 + iVar3 + -1] = 1;
						}
					} else {
						uVar6 = GetAutomapType(uVar5 - 1, iVar1, 0, param_4, param_5, param_6, param_7, param_8,
						    in_stack_ffffffb8);
						if ((uVar6 & 0x4000) != 0) {
							puVar4[iVar1 + iVar3 + -0x28] = 1;
						}
						uVar5 = GetAutomapType(uVar5 + 1, iVar1, 0, param_4, param_5, param_6, param_7, param_8,
						    in_stack_ffffffb8);
						if (((uint)uVar5 & 0xffff) == 0x4007) {
							puVar4[iVar1 + iVar3 + 0x28] = 1;
						}
					}
				} else {
					if (uVar2 < 6) {
						if ((uVar6 & 0x4000) == 0) {
							uVar5 = GetAutomapType(uVar5 - 1, iVar1, 0, param_4, param_5, param_6, param_7, param_8,
							    in_stack_ffffffb8);
							if ((uVar5 & 0x4000) != 0) {
								puVar4[iVar1 + iVar3 + -0x28] = 1;
							}
						} else {
							uVar6 = GetAutomapType(uVar5, iVar1 + -1, 0, param_4, param_5, param_6, param_7, param_8,
							    in_stack_ffffffb8);
							if ((uVar6 & 0x4000) != 0) {
								puVar4[iVar1 + iVar3 + -1] = 1;
							}
							uVar5 = GetAutomapType(uVar5, iVar1 + 1, 0, param_4, param_5, param_6, param_7, param_8,
							    in_stack_ffffffb8);
							if (((uint)uVar5 & 0xffff) == 0x4007) {
								puVar4[iVar1 + iVar3 + 1] = 1;
							}
						}
					}
				}
			}
		}
	}
	return;
}

void AutomapZoomReset(void)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;

	puVar8 = PTR_DAT_100f1850;
	puVar7 = PTR_DAT_100f184c;
	puVar6 = PTR_DAT_100f1848;
	puVar5 = PTR_DAT_100f1844;
	puVar4 = PTR_DAT_100f1840;
	puVar3 = PTR_DAT_100f1830;
	puVar2 = PTR_DAT_100f182c;
	uVar1 = (*(int *)PTR_DAT_100f1854 << 6) / 100 + ((*(int *)PTR_DAT_100f1854 << 6) >> 0x1f);
	*(uint *)PTR_DAT_100f1850 = uVar1 + (uVar1 >> 0x1f);
	*(int *)puVar7 = *(int *)puVar8 >> 1;
	*(int *)puVar6 = *(int *)puVar7 >> 1;
	*(int *)puVar5 = *(int *)puVar6 >> 1;
	*(int *)puVar4 = *(int *)puVar5 >> 1;
	*(undefined4 *)puVar3 = 0;
	*(undefined4 *)puVar2 = 0;
	return;
}
