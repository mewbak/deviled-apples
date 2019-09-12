
void FillSolidBlockTbls(void)

{
	byte bVar1;
	ulonglong uVar2;
	char cVar4;
	longlong lVar3;
	undefined uVar6;
	byte *pbVar5;
	undefined in_r5;
	undefined *puVar7;
	undefined in_r6;
	undefined *puVar8;
	undefined in_r7;
	undefined *puVar9;
	undefined in_r8;
	undefined *puVar10;
	undefined in_r9;
	undefined *puVar11;
	undefined in_r10;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined in_stack_ffffffab;
	undefined in_stack_ffffffaf;
	int local_4c;
	int *local_28;
	uint local_24;
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	uVar2 = ZEXT48(register0x0000000c);
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	puVar8 = &DAT_10131334;
	puVar11 = &DAT_1012f330;
	puVar9 = &DAT_1012fb31;
	puVar10 = &DAT_10130332;
	puVar7 = &DAT_10130b33;
	ZeroMemory(0x34, 1, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffab, in_stack_ffffffaf, local_4c);
	ZeroMemory(0x33, 1, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffab, in_stack_ffffffaf, local_4c);
	ZeroMemory(0x32, 1, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffab, in_stack_ffffffaf, local_4c);
	ZeroMemory(0x31, 1, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffab, in_stack_ffffffaf, local_4c);
	uVar6 = 1;
	ZeroMemory(0x30, 1, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffab, in_stack_ffffffaf, local_4c);
	bVar1 = **(byte **)(local_4c + -0x7794);
	if (bVar1 == 2) {
		uVar6 = (undefined)(uVar2 - 0x24);
		local_28 = (int *)LoadFileInMem(*(char **)(local_4c + -0x6240), (DWORD *)(uVar2 - 0x24));
	} else {
		if (bVar1 < 2) {
			if (bVar1 == 0) {
				uVar6 = (undefined)(uVar2 - 0x24);
				local_28 = (int *)LoadFileInMem(*(char **)(local_4c + -0x6238), (DWORD *)(uVar2 - 0x24));
			} else {
				uVar6 = (undefined)(uVar2 - 0x24);
				local_28 = (int *)LoadFileInMem(*(char **)(local_4c + -0x623c), (DWORD *)(uVar2 - 0x24));
			}
		} else {
			if (bVar1 == 4) {
				uVar6 = (undefined)(uVar2 - 0x24);
				local_28 = (int *)LoadFileInMem(*(char **)(local_4c + -0x6248), (DWORD *)(uVar2 - 0x24));
			} else {
				if (bVar1 < 4) {
					uVar6 = (undefined)(uVar2 - 0x24);
					local_28 = (int *)LoadFileInMem(*(char **)(local_4c + -0x6244), (DWORD *)(uVar2 - 0x24));
				} else {
					app_fatal(*(char **)(local_4c + -0x624c));
				}
			}
		}
	}
	cVar4 = LockMemFile(ZEXT48(local_28), uVar6, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffab);
	lVar3 = (longlong)cVar4;
	uVar2 = (ulonglong)local_24;
	pbVar5 = *(byte **)(local_4c + -0x723c);
	if (local_24 != 0) {
		do {
			puVar11 = puVar11 + 1;
			puVar10 = puVar10 + 1;
			puVar9 = puVar9 + 1;
			puVar8 = puVar8 + 1;
			puVar7 = puVar7 + 1;
			pbVar5 = pbVar5 + 1;
			bVar1 = *(byte *)lVar3;
			lVar3 = lVar3 + 1;
			if ((bVar1 & 1) != 0) {
				*puVar7 = 1;
			}
			if ((bVar1 & 2) != 0) {
				*puVar8 = 1;
			}
			if ((bVar1 & 4) != 0) {
				*puVar9 = 1;
			}
			if ((bVar1 & 8) != 0) {
				*puVar10 = 1;
			}
			if ((bVar1 & 0x80) != 0) {
				*puVar11 = 1;
			}
			*pbVar5 = bVar1 >> 4 & 7;
			uVar2 = uVar2 - 1;
		} while (uVar2 != 0);
	}
	UnlockMemFile((char)local_28);
	MemFreeDbg(&local_28);
	return;
}

void SwapTile(int f1, int f2)

{
	undefined2 uVar1;
	undefined4 uVar2;
	int iVar3;
	int iVar4;

	iVar3 = f1 * 4;
	iVar4 = f2 * 4;
	uVar2 = *(undefined4 *)(&DAT_10136b3c + iVar3);
	*(undefined4 *)(&DAT_10136b3c + iVar3) = *(undefined4 *)(&DAT_10136b3c + iVar4);
	*(undefined4 *)(&DAT_10136b3c + iVar4) = uVar2;
	uVar2 = *(undefined4 *)(&DAT_10134b3c + iVar3);
	*(undefined4 *)(&DAT_10134b3c + iVar3) = *(undefined4 *)(&DAT_10134b3c + iVar4);
	*(undefined4 *)(&DAT_10134b3c + iVar4) = uVar2;
	uVar1 = *(undefined2 *)(&DAT_10133b3c + f1 * 2);
	*(undefined2 *)(&DAT_10133b3c + f1 * 2) = *(undefined2 *)(&DAT_10133b3c + f2 * 2);
	*(undefined2 *)(&DAT_10133b3c + f2 * 2) = uVar1;
	uVar2 = *(undefined4 *)(&DAT_10131b3c + iVar3);
	*(undefined4 *)(&DAT_10131b3c + iVar3) = *(undefined4 *)(&DAT_10131b3c + iVar4);
	*(undefined4 *)(&DAT_10131b3c + iVar4) = uVar2;
	return;
}

void SortTiles(int frames)

{
	bool bVar1;
	int f1;
	int *piVar2;

	bVar1 = false;
	while ((0 < frames && (!bVar1))) {
		bVar1 = true;
		f1 = 0;
		piVar2 = (int *)&DAT_10136b3c;
		while (f1 < frames) {
			if (*piVar2 < piVar2[1]) {
				SwapTile(f1, f1 + 1);
				bVar1 = false;
			}
			piVar2 = piVar2 + 1;
			f1 = f1 + 1;
		}
		frames = frames + -1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void MakeSpeedCels(void)

{
	ushort uVar1;
	uint uVar2;
	bool bVar3;
	bool bVar4;
	uint uVar6;
	longlong lVar5;
	undefined8 uVar7;
	ulonglong uVar8;
	char *pcVar11;
	byte *pbVar12;
	ulonglong uVar9;
	longlong lVar10;
	int *piVar13;
	ushort *puVar14;
	undefined *puVar15;
	short *psVar16;
	int iVar18;
	longlong lVar17;
	char cVar19;
	int iVar20;
	uint uVar21;
	int iVar23;
	longlong lVar22;
	int iVar24;
	int iVar25;
	int iVar26;
	uint *puVar27;
	int *piVar28;
	uint *puVar29;
	int iVar30;
	ulonglong uVar31;
	int *piVar32;
	short *psVar33;
	uint uVar34;
	longlong lVar35;
	longlong lVar36;
	short *local_5c;
	int *local_58;

	uVar7 = 0x100f8fd0;
	iVar18 = 0;
	uVar9 = ZEXT48(&DAT_10131b38);
	puVar29 = (uint *)&DAT_10131b3c;
	psVar33 = (short *)&DAT_10133b3c;
	piVar28 = (int *)&DAT_10134b3c;
	piVar32 = (int *)&DAT_10136b3c;
	lVar35 = 0x100;
	piVar13 = piVar32;
	psVar16 = psVar33;
	do {
		*piVar28 = iVar18;
		iVar20 = iVar18 + 2;
		*piVar13 = 0;
		iVar23 = iVar18 + 3;
		iVar24 = iVar18 + 4;
		*psVar16 = 0;
		iVar25 = iVar18 + 5;
		iVar26 = iVar18 + 6;
		iVar30 = iVar18 + 7;
		piVar28[1] = iVar18 + 1;
		iVar18 = iVar18 + 8;
		piVar13[1] = 0;
		psVar16[1] = 0;
		piVar28[2] = iVar20;
		piVar13[2] = 0;
		psVar16[2] = 0;
		piVar28[3] = iVar23;
		piVar13[3] = 0;
		psVar16[3] = 0;
		piVar28[4] = iVar24;
		piVar13[4] = 0;
		psVar16[4] = 0;
		piVar28[5] = iVar25;
		piVar13[5] = 0;
		psVar16[5] = 0;
		piVar28[6] = iVar26;
		piVar13[6] = 0;
		psVar16[6] = 0;
		piVar28[7] = iVar30;
		piVar28 = piVar28 + 8;
		piVar13[7] = 0;
		piVar13 = piVar13 + 8;
		psVar16[7] = 0;
		iVar20 = _DAT_1012f1d0;
		psVar16 = psVar16 + 8;
		lVar35 = lVar35 + -1;
	} while (lVar35 != 0);
	if (leveltype == '\x04') {
		lVar35 = 0xc;
	} else {
		lVar35 = 10;
	}
	iVar23 = 0;
	iVar18 = 0;
	do {
		iVar25 = 0;
		iVar24 = iVar20;
		do {
			puVar14 = (ushort *)(iVar24 + iVar18);
			lVar36 = lVar35;
			if ((int)lVar35 != 0) {
				do {
					uVar1 = *puVar14;
					if (uVar1 != 0) {
						iVar26 = ((uint)uVar1 & 0xfff) * 4;
						*(int *)(&DAT_10136b3c + iVar26) = *(int *)(&DAT_10136b3c + iVar26) + 1;
						*(ushort *)(&DAT_10133b3c + ((uint)uVar1 & 0xfff) * 2) = uVar1 & 0x7000;
					}
					puVar14 = puVar14 + 1;
					lVar36 = lVar36 + -1;
				} while (lVar36 != 0);
			}
			iVar25 = iVar25 + 1;
			iVar24 = iVar24 + 0xe00;
		} while (iVar25 < 0x70);
		iVar23 = iVar23 + 1;
		iVar18 = iVar18 + 0x20;
	} while (iVar23 < 0x70);
	uVar8 = BESwap_1003cdc8(_DAT_1013b344);
	*(uint *)uVar9 = (uint)uVar8 & 0xffff;
	iVar18 = 1;
	puVar27 = puVar29;
	while (true) {
		iVar20 = (int)uVar7;
		puVar27 = puVar27 + 1;
		if (*(int *)uVar9 <= iVar18)
			break;
		lVar36 = BESwap_1003cddc((int)_DAT_1013b344, iVar18);
		iVar18 = iVar18 + 1;
		*puVar27 = (uint)lVar36 & 0xffff;
	}
	iVar18 = 0;
	_DAT_10131b3c = 0;
	puVar27 = puVar29;
	if (leveltype == '\x04') {
		while (iVar20 = (int)uVar7, iVar18 < *(int *)uVar9) {
			if (iVar18 == 0) {
				_DAT_10136b3c = 0;
			}
			bVar3 = true;
			if (*piVar32 != 0) {
				if (*psVar33 == 0x1000) {
					uVar8 = BESwap_1003cdd0((int)_DAT_1013b344, iVar18);
					lVar10 = 0x20;
					lVar36 = ZEXT48(_DAT_1013b344) + uVar8;
					bVar3 = true;
					do {
						lVar22 = 0x20;
						do {
							pcVar11 = (char *)lVar36;
							lVar36 = lVar36 + 1;
							lVar5 = (longlong)*pcVar11;
							lVar17 = lVar5;
							if (-1 < lVar5) {
								lVar17 = -lVar5;
								do {
									pbVar12 = (byte *)lVar36;
									lVar36 = lVar36 + 1;
									if ((*pbVar12 != 0) && (*pbVar12 < 0x20)) {
										bVar3 = false;
									}
									lVar5 = lVar5 + -1;
								} while (lVar5 != 0);
							}
							lVar22 = lVar22 + lVar17;
						} while ((int)lVar22 != 0);
						lVar10 = lVar10 + -1;
					} while (lVar10 != 0);
				} else {
					uVar34 = *puVar27;
					uVar31 = (ulonglong)uVar34;
					uVar8 = BESwap_1003cdd0((int)_DAT_1013b344, iVar18);
					lVar36 = ZEXT48(_DAT_1013b344) + uVar8;
					bVar4 = true;
					if (uVar34 != 0) {
						do {
							pcVar11 = (char *)lVar36;
							lVar36 = lVar36 + 1;
							bVar3 = bVar4;
							if (('\0' < *pcVar11) && (bVar3 = bVar4, *pcVar11 < ' ')) {
								bVar3 = false;
							}
							uVar31 = uVar31 - 1;
							bVar4 = bVar3;
						} while (uVar31 != 0);
					}
				}
				if (!bVar3) {
					*piVar32 = 0;
				}
			}
			piVar32 = piVar32 + 1;
			psVar33 = psVar33 + 1;
			iVar18 = iVar18 + 1;
			puVar27 = puVar27 + 1;
		}
	}
	SortTiles(0x7ff);
	iVar18 = 0;
	iVar23 = 0;
	puVar27 = puVar29;
	if (**(int **)(iVar20 + -0x776c) == 0) {
		while (iVar18 < 0x100000) {
			iVar23 = iVar23 + 1;
			iVar18 = iVar18 + *puVar27 * 0xe;
			puVar27 = puVar27 + 1;
		}
	} else {
		while (iVar18 < 0x100000) {
			iVar23 = iVar23 + 1;
			iVar18 = iVar18 + *puVar27 * 2;
			puVar27 = puVar27 + 1;
		}
	}
	uVar34 = iVar23 - 1;
	if (0x80 < (int)uVar34) {
		uVar34 = 0x80;
	}
	iVar18 = 0;
	if (**(int **)(iVar20 + -0x776c) == 0) {
		iVar23 = 0xf;
	} else {
		iVar23 = 3;
	}
	piVar28 = *(int **)(iVar20 + -0x724c);
	lVar36 = 0;
	local_58 = (int *)&DAT_10134b3c;
	local_5c = (short *)&DAT_10133b3c;
	do {
		if ((int)uVar34 <= (int)lVar36) {
			iVar23 = 0;
			iVar20 = 0;
			iVar18 = 0;
			do {
				iVar25 = 0;
				iVar26 = 0;
				iVar24 = 0;
				do {
					if ((*(short *)(iVar20 + _DAT_1012f1d4 + iVar26) != 0) && (puVar14 = (ushort *)(_DAT_1012f1d0 + iVar24 + iVar18), lVar36 = lVar35, (int)lVar35 != 0)) {
						do {
							if (*puVar14 != 0) {
								uVar21 = 0;
								while (uVar6 = uVar21 & 0xffff, (int)uVar6 < (int)uVar34) {
									uVar2 = uVar21 & 0xffff;
									if (((uint)*puVar14 & 0xfff) == *(uint *)(&DAT_10134b3c + (uVar21 & 0xffff) * 4)) {
										uVar21 = uVar34 & 0xffff;
										*puVar14 = *(short *)(&DAT_10133b3c + uVar2 * 2) + (short)uVar6 + 0x8000;
									}
									uVar21 = uVar21 + 1;
								}
							}
							puVar14 = puVar14 + 1;
							lVar36 = lVar36 + -1;
						} while (lVar36 != 0);
					}
					iVar25 = iVar25 + 1;
					iVar24 = iVar24 + 0xe00;
					iVar26 = iVar26 + 0xe0;
				} while (iVar25 < 0x70);
				iVar23 = iVar23 + 1;
				iVar18 = iVar18 + 0x20;
				iVar20 = iVar20 + 2;
			} while (iVar23 < 0x70);
			return;
		}
		iVar20 = *local_58;
		*piVar28 = iVar20;
		if (*local_5c == 0x1000) {
			iVar24 = 1;
			iVar25 = 0x100;
			piVar32 = piVar28;
			while (piVar32 = piVar32 + 1, iVar24 < iVar23) {
				*piVar32 = iVar18;
				uVar9 = BESwap_1003cdd0((int)_DAT_1013b344, iVar20);
				lVar22 = 0x20;
				lVar10 = ZEXT48(_DAT_1013b344) + uVar9;
				pcVar11 = (char *)(_DAT_1013b340 + iVar18);
				iVar26 = _DAT_101b2028 + iVar25;
				do {
					lVar17 = 0x20;
					do {
						cVar19 = *(char *)lVar10;
						lVar10 = lVar10 + 1;
						*pcVar11 = cVar19;
						pcVar11 = pcVar11 + 1;
						if (cVar19 < '\0') {
							lVar5 = (longlong)cVar19;
						} else {
							lVar5 = -(longlong)cVar19;
							do {
								pbVar12 = (byte *)lVar10;
								cVar19 = cVar19 + -1;
								lVar10 = lVar10 + 1;
								*pcVar11 = *(char *)(iVar26 + (uint)*pbVar12);
								pcVar11 = pcVar11 + 1;
							} while (cVar19 != '\0');
						}
						lVar17 = lVar17 + lVar5;
					} while ((int)lVar17 != 0);
					lVar22 = lVar22 + -1;
				} while (lVar22 != 0);
				iVar25 = iVar25 + 0x100;
				iVar24 = iVar24 + 1;
				iVar18 = iVar18 + *puVar29;
			}
		} else {
			uVar21 = *puVar29;
			iVar25 = 1;
			iVar24 = 0x100;
			piVar32 = piVar28;
			while (piVar32 = piVar32 + 1, iVar25 < iVar23) {
				*piVar32 = iVar18;
				uVar9 = BESwap_1003cdd0((int)_DAT_1013b344, iVar20);
				lVar10 = ZEXT48(_DAT_1013b344) + uVar9;
				puVar15 = (undefined *)(_DAT_1013b340 + iVar18);
				iVar26 = _DAT_101b2028 + iVar24;
				if (uVar21 != 0) {
					uVar9 = (ulonglong)(uVar21 >> 3);
					uVar6 = uVar21;
					if (uVar21 >> 3 != 0) {
						do {
							pbVar12 = (byte *)lVar10;
							*puVar15 = *(undefined *)(iVar26 + (uint)*pbVar12);
							puVar15[1] = *(undefined *)(iVar26 + (uint)pbVar12[1]);
							puVar15[2] = *(undefined *)(iVar26 + (uint)pbVar12[2]);
							puVar15[3] = *(undefined *)(iVar26 + (uint)pbVar12[3]);
							puVar15[4] = *(undefined *)(iVar26 + (uint)pbVar12[4]);
							puVar15[5] = *(undefined *)(iVar26 + (uint)pbVar12[5]);
							puVar15[6] = *(undefined *)(iVar26 + (uint)pbVar12[6]);
							lVar10 = lVar10 + 8;
							puVar15[7] = *(undefined *)(iVar26 + (uint)pbVar12[7]);
							puVar15 = puVar15 + 8;
							uVar9 = uVar9 - 1;
						} while (uVar9 != 0);
						uVar6 = uVar21 & 7;
						if ((uVar21 & 7) == 0)
							goto LAB_100417c8;
					}
					do {
						pbVar12 = (byte *)lVar10;
						lVar10 = lVar10 + 1;
						*puVar15 = *(undefined *)(iVar26 + (uint)*pbVar12);
						puVar15 = puVar15 + 1;
						uVar6 = uVar6 - 1;
					} while (uVar6 != 0);
				}
			LAB_100417c8:
				iVar18 = iVar18 + uVar21;
				iVar24 = iVar24 + 0x100;
				iVar25 = iVar25 + 1;
			}
		}
		piVar28 = piVar28 + 0x10;
		puVar29 = puVar29 + 1;
		lVar36 = lVar36 + 1;
		local_58 = local_58 + 1;
		local_5c = local_5c + 1;
	} while (true);
}

int IsometricCoord(int x, int y)

{
	uint uVar1;
	int iVar2;

	if (x < 0x70 - y) {
		uVar1 = x * 3 + (x + y) * (x + y) + y;
		return (int)(((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0));
	}
	iVar2 = (0x6f - x) + (0x6f - y);
	uVar1 = (0x6f - x) * 3 + iVar2 * iVar2 + (0x6f - y);
	return (int)(0x3100 - (((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0) + 1));
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SetSpeedCels(void)

{
	undefined4 uVar1;
	int iVar2;
	undefined4 *puVar3;
	undefined4 *puVar4;
	int iVar5;
	int y;
	int x;
	int iVar6;
	int iVar7;

	x = 0;
	iVar6 = 0;
	do {
		y = 0;
		iVar7 = 0;
		do {
			iVar5 = _DAT_1012f1d0 + iVar7;
			iVar2 = IsometricCoord(x, y);
			puVar3 = (undefined4 *)(iVar6 + iVar5);
			uVar1 = puVar3[1];
			puVar4 = (undefined4 *)(_DAT_1012f1cc + iVar2 * 0x20);
			y = y + 1;
			iVar7 = iVar7 + 0x20;
			*puVar4 = *puVar3;
			puVar4[1] = uVar1;
			uVar1 = puVar3[3];
			puVar4[2] = puVar3[2];
			puVar4[3] = uVar1;
			uVar1 = puVar3[5];
			puVar4[4] = puVar3[4];
			puVar4[5] = uVar1;
			uVar1 = puVar3[7];
			puVar4[6] = puVar3[6];
			puVar4[7] = uVar1;
		} while (y < 0x70);
		x = x + 1;
		iVar6 = iVar6 + 0xe00;
	} while (x < 0x70);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SetDungeonMicros(void)

{
	short sVar1;
	int iVar2;
	undefined *puVar3;
	uint uVar4;
	BYTE *p;
	int iVar5;
	char cVar6;
	undefined in_r4;
	undefined in_r5;
	int iVar8;
	undefined2 *puVar9;
	longlong lVar7;
	undefined in_r6;
	int iVar10;
	undefined in_r7;
	int iVar11;
	undefined in_r8;
	int iVar12;
	undefined in_r9;
	int iVar13;
	undefined in_r10;
	longlong lVar14;
	int iVar15;
	int iVar16;
	undefined2 *puVar17;
	ulonglong uVar18;
	ulonglong uVar19;
	uint uVar20;
	ulonglong uVar21;
	undefined in_stack_ffffff7b;
	undefined in_stack_ffffff7f;
	int local_7c;

	iVar5 = 0x100f8fd0;
	if (leveltype == '\x04') {
		_DAT_1012f2dc = 0xc;
		uVar21 = 0x10;
	} else {
		_DAT_1012f2dc = 10;
		uVar21 = 10;
	}
	if (_DAT_1012f1d0 == (BYTE *)0x0) {
		_DAT_1012f1d0 = DiabloAllocPtr(0x62000);
		iVar5 = local_7c;
		if (_DAT_1012f1d0 == (BYTE *)0x0) {
			ExitProcess(0);
			iVar5 = local_7c;
		}
		in_r4 = 0;
		ZeroMemory((char)_DAT_1012f1d0, 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff7b,
		    in_stack_ffffff7f, iVar5);
	}
	cVar6 = LockMemFile((ulonglong)_DAT_1013b34c, in_r4, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff7b);
	iVar12 = 0;
	uVar4 = (uint)uVar21;
	iVar2 = uVar4 - 2;
	iVar13 = 0;
	iVar16 = 0;
	do {
		iVar10 = 0;
		iVar11 = 0;
		iVar15 = 0;
		do {
			sVar1 = *(short *)(iVar12 + _DAT_1012f1d4 + iVar10);
			puVar17 = (undefined2 *)(_DAT_1012f1d0 + iVar11 + iVar13);
			if (sVar1 == 0) {
				lVar14 = 0;
				if (uVar4 != 0) {
					if ((8 < uVar4) && (uVar18 = (ulonglong)(uVar4 - 1 >> 3), puVar9 = puVar17, 0 < (int)(uVar4 - 8))) {
						do {
							*puVar9 = 0;
							lVar14 = lVar14 + 8;
							puVar9[1] = 0;
							puVar9[2] = 0;
							puVar9[3] = 0;
							puVar9[4] = 0;
							puVar9[5] = 0;
							puVar9[6] = 0;
							puVar9[7] = 0;
							puVar9 = puVar9 + 8;
							uVar18 = uVar18 - 1;
						} while (uVar18 != 0);
					}
					puVar17 = puVar17 + (int)lVar14;
					lVar7 = uVar21 - lVar14;
					if ((int)lVar14 < (int)uVar4) {
						do {
							*puVar17 = 0;
							puVar17 = puVar17 + 1;
							lVar7 = lVar7 + -1;
						} while (lVar7 != 0);
					}
				}
			} else {
				if (leveltype == '\x04') {
					iVar8 = ((int)sVar1 + -1) * 0x20;
				} else {
					iVar8 = ((int)sVar1 + -1) * 0x14;
				}
				iVar8 = (int)cVar6 + iVar8;
				uVar20 = 0;
				if (uVar4 != 0) {
					uVar19 = (ulonglong)(uVar4 >> 3);
					uVar18 = uVar21;
					if (uVar4 >> 3 != 0) {
						do {
							puVar3 = (undefined *)(iVar8 + (iVar2 - (uVar20 & 0xe)) * 2);
							*puVar17 = CONCAT11(puVar3[1], *puVar3);
							puVar3 = (undefined *)(iVar8 + ((uVar20 + 1 & 1) + (iVar2 - (uVar20 + 1 & 0xe))) * 2);
							puVar17[1] = CONCAT11(puVar3[1], *puVar3);
							puVar3 = (undefined *)(iVar8 + (iVar2 - (uVar20 + 2 & 0xe)) * 2);
							puVar17[2] = CONCAT11(puVar3[1], *puVar3);
							puVar3 = (undefined *)(iVar8 + ((uVar20 + 3 & 1) + (iVar2 - (uVar20 + 3 & 0xe))) * 2);
							puVar17[3] = CONCAT11(puVar3[1], *puVar3);
							puVar3 = (undefined *)(iVar8 + (iVar2 - (uVar20 + 4 & 0xe)) * 2);
							puVar17[4] = CONCAT11(puVar3[1], *puVar3);
							puVar3 = (undefined *)(iVar8 + ((uVar20 + 5 & 1) + (iVar2 - (uVar20 + 5 & 0xe))) * 2);
							puVar17[5] = CONCAT11(puVar3[1], *puVar3);
							puVar3 = (undefined *)(iVar8 + (iVar2 - (uVar20 + 6 & 0xe)) * 2);
							puVar17[6] = CONCAT11(puVar3[1], *puVar3);
							puVar3 = (undefined *)(iVar8 + ((uVar20 + 7 & 1) + (iVar2 - (uVar20 + 7 & 0xe))) * 2);
							uVar20 = uVar20 + 8;
							puVar17[7] = CONCAT11(puVar3[1], *puVar3);
							puVar17 = puVar17 + 8;
							uVar19 = uVar19 - 1;
						} while (uVar19 != 0);
						uVar18 = uVar21 & 7;
						if (uVar18 == 0)
							goto LAB_10041dfc;
					}
					do {
						puVar3 = (undefined *)(iVar8 + ((uVar20 & 1) + (iVar2 - (uVar20 & 0xe))) * 2);
						uVar20 = uVar20 + 1;
						*puVar17 = CONCAT11(puVar3[1], *puVar3);
						puVar17 = puVar17 + 1;
						uVar18 = uVar18 - 1;
					} while (uVar18 != 0);
				}
			}
		LAB_10041dfc:
			iVar15 = iVar15 + 1;
			iVar11 = iVar11 + 0xe00;
			iVar10 = iVar10 + 0xe0;
		} while (iVar15 < 0x70);
		iVar16 = iVar16 + 1;
		iVar13 = iVar13 + 0x20;
		iVar12 = iVar12 + 2;
		if (0x6f < iVar16) {
			UnlockMemFile((char)_DAT_1013b34c);
			MakeSpeedCels();
			SetSpeedCels();
			p = _DAT_1012f1d0;
			if (*(int *)(iVar5 + 0x2854) != 0) {
				_DAT_1012f1d0 = (BYTE *)0x0;
				mem_free_dbg(p);
				_DAT_1012f1d0 = (BYTE *)0x0;
			}
			if (**(int **)(iVar5 + -0x766c) == 0) {
				_DAT_1012f308 = 0x180;
				_DAT_1012f304 = 0xe0;
				_DAT_1012f300 = 6;
				_DAT_1012f2fc = 7;
			} else {
				_DAT_1012f308 = 0x280;
				_DAT_1012f304 = 0x160;
				_DAT_1012f300 = 10;
				_DAT_1012f2fc = 0xb;
			}
			return;
		}
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_InitTrans(void)

{
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	ZeroMemory((char)_DAT_1012f1c8, 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffcb, in_stack_ffffffcf,
	    local_2c);
	ZeroMemory((char)*(undefined4 *)(local_2c + -0x7268), 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	**(undefined **)(local_2c + -0x7518) = 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_MRectTrans(int x1, int y1, int x2, int y2)

{
	int iVar1;
	ulonglong uVar2;
	uint uVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar5 = y1 * 2 + 0x11;
	iVar6 = x1 * 2 + 0x11;
	do {
		if (y2 * 2 + 0x10 < iVar5) {
			DAT_1012f2d8 = DAT_1012f2d8 + '\x01';
			return;
		}
		iVar4 = iVar6 * 0x70;
		uVar3 = (x2 * 2 + 0x11) - iVar6;
		if (iVar6 <= x2 * 2 + 0x10) {
			uVar2 = (ulonglong)(uVar3 >> 3);
			if (uVar3 >> 3 != 0) {
				do {
					*(char *)(iVar5 + _DAT_1012f1c8 + iVar4) = DAT_1012f2d8;
					*(char *)(iVar5 + _DAT_1012f1c8 + iVar4 + 0x70) = DAT_1012f2d8;
					*(char *)(iVar5 + _DAT_1012f1c8 + iVar4 + 0xe0) = DAT_1012f2d8;
					*(char *)(iVar5 + _DAT_1012f1c8 + iVar4 + 0x150) = DAT_1012f2d8;
					*(char *)(iVar5 + _DAT_1012f1c8 + iVar4 + 0x1c0) = DAT_1012f2d8;
					*(char *)(iVar5 + _DAT_1012f1c8 + iVar4 + 0x230) = DAT_1012f2d8;
					iVar1 = iVar4 + 0x310;
					*(char *)(iVar5 + _DAT_1012f1c8 + iVar4 + 0x2a0) = DAT_1012f2d8;
					iVar4 = iVar4 + 0x380;
					*(char *)(iVar5 + _DAT_1012f1c8 + iVar1) = DAT_1012f2d8;
					uVar2 = uVar2 - 1;
				} while (uVar2 != 0);
				uVar3 = uVar3 & 7;
				if (uVar3 == 0)
					goto LAB_10042034;
			}
			do {
				iVar1 = _DAT_1012f1c8 + iVar4;
				iVar4 = iVar4 + 0x70;
				*(char *)(iVar5 + iVar1) = DAT_1012f2d8;
				uVar3 = uVar3 - 1;
			} while (uVar3 != 0);
		}
	LAB_10042034:
		iVar5 = iVar5 + 1;
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_RectTrans(int x1, int y1, int x2, int y2)

{
	int iVar1;
	ulonglong uVar2;
	uint uVar3;
	int iVar4;

	do {
		if (y2 < y1) {
			DAT_1012f2d8 = DAT_1012f2d8 + '\x01';
			return;
		}
		iVar4 = x1 * 0x70;
		uVar3 = (x2 + 1) - x1;
		if (x1 <= x2) {
			uVar2 = (ulonglong)(uVar3 >> 3);
			if (uVar3 >> 3 != 0) {
				do {
					*(char *)(y1 + _DAT_1012f1c8 + iVar4) = DAT_1012f2d8;
					*(char *)(y1 + _DAT_1012f1c8 + iVar4 + 0x70) = DAT_1012f2d8;
					*(char *)(y1 + _DAT_1012f1c8 + iVar4 + 0xe0) = DAT_1012f2d8;
					*(char *)(y1 + _DAT_1012f1c8 + iVar4 + 0x150) = DAT_1012f2d8;
					*(char *)(y1 + _DAT_1012f1c8 + iVar4 + 0x1c0) = DAT_1012f2d8;
					*(char *)(y1 + _DAT_1012f1c8 + iVar4 + 0x230) = DAT_1012f2d8;
					iVar1 = iVar4 + 0x310;
					*(char *)(y1 + _DAT_1012f1c8 + iVar4 + 0x2a0) = DAT_1012f2d8;
					iVar4 = iVar4 + 0x380;
					*(char *)(y1 + _DAT_1012f1c8 + iVar1) = DAT_1012f2d8;
					uVar2 = uVar2 - 1;
				} while (uVar2 != 0);
				uVar3 = uVar3 & 7;
				if (uVar3 == 0)
					goto LAB_10042144;
			}
			do {
				iVar1 = _DAT_1012f1c8 + iVar4;
				iVar4 = iVar4 + 0x70;
				*(char *)(y1 + iVar1) = DAT_1012f2d8;
				uVar3 = uVar3 - 1;
			} while (uVar3 != 0);
		}
	LAB_10042144:
		y1 = y1 + 1;
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_CopyTrans(int sx, int sy, int dx, int dy)

{
	*(undefined *)(_DAT_1012f1c8 + dx * 0x70 + dy) = *(undefined *)(_DAT_1012f1c8 + sx * 0x70 + sy);
	return;
}

void DRLG_ListTrans(int num, BYTE *List)

{
	byte bVar1;
	byte *pbVar2;
	byte *pbVar3;
	byte *pbVar4;
	int iVar5;

	iVar5 = 0;
	while (iVar5 < num) {
		bVar1 = *List;
		pbVar2 = List + 1;
		pbVar3 = List + 2;
		pbVar4 = List + 3;
		List = List + 4;
		DRLG_RectTrans((uint)bVar1, (uint)*pbVar2, (uint)*pbVar3, (uint)*pbVar4);
		iVar5 = iVar5 + 1;
	}
	return;
}

void DRLG_AreaTrans(int num, BYTE *List)

{
	byte bVar1;
	byte *pbVar2;
	byte *pbVar3;
	byte *pbVar4;
	int iVar5;

	iVar5 = 0;
	while (iVar5 < num) {
		bVar1 = *List;
		pbVar2 = List + 1;
		pbVar3 = List + 2;
		pbVar4 = List + 3;
		List = List + 4;
		DRLG_RectTrans((uint)bVar1, (uint)*pbVar2, (uint)*pbVar3, (uint)*pbVar4);
		iVar5 = iVar5 + 1;
		DAT_1012f2d8 = DAT_1012f2d8 + -1;
	}
	DAT_1012f2d8 = DAT_1012f2d8 + '\x01';
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_InitSetPC(void)

{
	_DAT_1013b360 = 0;
	_DAT_1013b364 = 0;
	_DAT_1013b368 = 0;
	_DAT_1013b36c = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_SetPC(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	ulonglong uVar8;
	int iVar9;
	int iVar10;

	iVar6 = 0;
	iVar1 = _DAT_1013b364 * 2;
	iVar2 = _DAT_1013b360 << 1;
	iVar3 = _DAT_1013b36c * 2 + 0x10;
	iVar7 = _DAT_1013b368 * 2 + 0x10;
	while (iVar6 < iVar2) {
		iVar5 = 0;
		if (0 < iVar1) {
			if (8 < iVar1) {
				uVar8 = (ulonglong)(iVar1 - 1U >> 3);
				iVar4 = iVar7 + iVar6;
				if (0 < iVar1 + -8) {
					do {
						iVar9 = iVar3 + iVar5;
						iVar10 = _DAT_1012f1bc + iVar9 * 0x70;
						*(byte *)(iVar4 + iVar10) = *(byte *)(iVar4 + iVar10) | 8;
						iVar5 = iVar5 + 8;
						iVar10 = _DAT_1012f1bc + (iVar9 + 1) * 0x70;
						*(byte *)(iVar4 + iVar10) = *(byte *)(iVar4 + iVar10) | 8;
						iVar10 = _DAT_1012f1bc + (iVar9 + 2) * 0x70;
						*(byte *)(iVar4 + iVar10) = *(byte *)(iVar4 + iVar10) | 8;
						iVar10 = _DAT_1012f1bc + (iVar9 + 3) * 0x70;
						*(byte *)(iVar4 + iVar10) = *(byte *)(iVar4 + iVar10) | 8;
						iVar10 = _DAT_1012f1bc + (iVar9 + 4) * 0x70;
						*(byte *)(iVar4 + iVar10) = *(byte *)(iVar4 + iVar10) | 8;
						iVar10 = _DAT_1012f1bc + (iVar9 + 5) * 0x70;
						*(byte *)(iVar4 + iVar10) = *(byte *)(iVar4 + iVar10) | 8;
						iVar10 = _DAT_1012f1bc + (iVar9 + 6) * 0x70;
						*(byte *)(iVar4 + iVar10) = *(byte *)(iVar4 + iVar10) | 8;
						iVar9 = _DAT_1012f1bc + (iVar9 + 7) * 0x70;
						*(byte *)(iVar4 + iVar9) = *(byte *)(iVar4 + iVar9) | 8;
						uVar8 = uVar8 - 1;
					} while (uVar8 != 0);
				}
			}
			iVar9 = iVar7 + iVar6;
			iVar4 = iVar1 - iVar5;
			if (iVar5 < iVar1) {
				do {
					iVar10 = iVar3 + iVar5;
					iVar5 = iVar5 + 1;
					iVar10 = _DAT_1012f1bc + iVar10 * 0x70;
					*(byte *)(iVar9 + iVar10) = *(byte *)(iVar9 + iVar10) | 8;
					iVar4 = iVar4 + -1;
				} while (iVar4 != 0);
			}
		}
		iVar6 = iVar6 + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Make_SetPC(int x, int y, int w, int h)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	ulonglong uVar6;
	int iVar7;
	int iVar8;

	w = w * 2;
	iVar1 = x * 2 + 0x10;
	iVar5 = y * 2 + 0x10;
	iVar4 = 0;
	while (iVar4 < h << 1) {
		iVar3 = 0;
		if (0 < w) {
			if (8 < w) {
				uVar6 = (ulonglong)(w - 1U >> 3);
				iVar2 = iVar5 + iVar4;
				if (0 < w + -8) {
					do {
						iVar7 = iVar1 + iVar3;
						iVar8 = _DAT_1012f1bc + iVar7 * 0x70;
						*(byte *)(iVar2 + iVar8) = *(byte *)(iVar2 + iVar8) | 8;
						iVar3 = iVar3 + 8;
						iVar8 = _DAT_1012f1bc + (iVar7 + 1) * 0x70;
						*(byte *)(iVar2 + iVar8) = *(byte *)(iVar2 + iVar8) | 8;
						iVar8 = _DAT_1012f1bc + (iVar7 + 2) * 0x70;
						*(byte *)(iVar2 + iVar8) = *(byte *)(iVar2 + iVar8) | 8;
						iVar8 = _DAT_1012f1bc + (iVar7 + 3) * 0x70;
						*(byte *)(iVar2 + iVar8) = *(byte *)(iVar2 + iVar8) | 8;
						iVar8 = _DAT_1012f1bc + (iVar7 + 4) * 0x70;
						*(byte *)(iVar2 + iVar8) = *(byte *)(iVar2 + iVar8) | 8;
						iVar8 = _DAT_1012f1bc + (iVar7 + 5) * 0x70;
						*(byte *)(iVar2 + iVar8) = *(byte *)(iVar2 + iVar8) | 8;
						iVar8 = _DAT_1012f1bc + (iVar7 + 6) * 0x70;
						*(byte *)(iVar2 + iVar8) = *(byte *)(iVar2 + iVar8) | 8;
						iVar7 = _DAT_1012f1bc + (iVar7 + 7) * 0x70;
						*(byte *)(iVar2 + iVar7) = *(byte *)(iVar2 + iVar7) | 8;
						uVar6 = uVar6 - 1;
					} while (uVar6 != 0);
				}
			}
			iVar7 = iVar5 + iVar4;
			iVar2 = w - iVar3;
			if (iVar3 < w) {
				do {
					iVar8 = iVar1 + iVar3;
					iVar3 = iVar3 + 1;
					iVar8 = _DAT_1012f1bc + iVar8 * 0x70;
					*(byte *)(iVar7 + iVar8) = *(byte *)(iVar7 + iVar8) | 8;
					iVar2 = iVar2 + -1;
				} while (iVar2 != 0);
			}
		}
		iVar4 = iVar4 + 1;
	}
	return;
}

BOOL DRLG_WillThemeRoomFit(int floor, int x, int y, int minSize, int maxSize, int *width, int *height)

{
	bool bVar1;
	bool bVar2;
	int iVar3;
	BOOL BVar4;
	int *piVar5;
	int *piVar6;
	int iVar7;
	byte *pbVar8;
	byte *pbVar9;
	int *piVar10;
	int *piVar11;
	undefined8 unaff_r19;
	int iVar12;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	int iVar13;
	undefined8 unaff_r30;
	int iVar14;
	undefined8 unaff_r31;
	longlong lVar15;
	int local_d8[20];
	int local_88[21];
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

	lVar15 = (longlong)minSize;
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
	iVar14 = 0;
	iVar13 = 0;
	bVar2 = true;
	bVar1 = true;
	if ((0x28 - maxSize < x) && (0x28 - maxSize < y)) {
		BVar4 = 0;
	} else {
		BVar4 = SkipThemeRoom(x, y);
		if (BVar4 == 0) {
			BVar4 = 0;
		} else {
			memset(local_88, 0, 0x50);
			memset(local_d8, 0, 0x50);
			piVar5 = local_88;
			piVar6 = local_d8;
			pbVar9 = dungeon + y;
			iVar7 = 0;
			piVar11 = piVar6;
			piVar10 = piVar5;
			while (iVar7 < maxSize) {
				if (bVar1) {
					pbVar8 = pbVar9 + x * 0x28;
					iVar3 = (x + maxSize) - x;
					iVar12 = x;
					if (x < x + maxSize) {
						do {
							if (floor == (uint)*pbVar8) {
								iVar14 = iVar14 + 1;
							} else {
								if (minSize <= iVar12)
									break;
								bVar1 = false;
							}
							pbVar8 = pbVar8 + 0x28;
							iVar12 = iVar12 + 1;
							iVar3 = iVar3 + -1;
						} while (iVar3 != 0);
					}
					if (bVar1) {
						*piVar10 = iVar14;
						iVar14 = 0;
					}
				}
				if (bVar2) {
					iVar3 = (y + maxSize) - y;
					pbVar8 = dungeon + (x + iVar7) * 0x28 + y;
					iVar12 = y;
					if (y < y + maxSize) {
						do {
							if (floor == (uint)*pbVar8) {
								iVar13 = iVar13 + 1;
							} else {
								if (minSize <= iVar12)
									break;
								bVar2 = false;
							}
							pbVar8 = pbVar8 + 1;
							iVar12 = iVar12 + 1;
							iVar3 = iVar3 + -1;
						} while (iVar3 != 0);
					}
					if (bVar2) {
						*piVar11 = iVar13;
						iVar13 = 0;
					}
				}
				pbVar9 = pbVar9 + 1;
				piVar10 = piVar10 + 1;
				piVar11 = piVar11 + 1;
				iVar7 = iVar7 + 1;
			}
			piVar11 = piVar6;
			piVar10 = piVar5;
			if (0 < minSize) {
				do {
					if ((*piVar10 < minSize) || (*piVar11 < minSize)) {
						return 0;
					}
					piVar10 = piVar10 + 1;
					piVar11 = piVar11 + 1;
					lVar15 = lVar15 + -1;
				} while (lVar15 != 0);
			}
			if (0 < maxSize) {
				do {
					iVar13 = *piVar5;
					if ((iVar13 < minSize) || (iVar14 = *piVar6, iVar14 < minSize))
						break;
					if (iVar13 < local_88[0]) {
						local_88[0] = iVar13;
					}
					if (iVar14 < local_d8[0]) {
						local_d8[0] = iVar14;
					}
					piVar5 = piVar5 + 1;
					piVar6 = piVar6 + 1;
					maxSize = maxSize + -1;
				} while (maxSize != 0);
			}
			*width = local_88[0] + -2;
			BVar4 = 1;
			*height = local_d8[0] + -2;
		}
	}
	return BVar4;
}

void DRLG_CreateThemeRoom(int themeIndex)

{
	int *piVar1;
	uint uVar2;
	char cVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	byte *pbVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	byte *pbVar13;
	int iVar14;
	int *piVar15;

	themeIndex = themeIndex * 0x14;
	piVar15 = (int *)(&DAT_1012edb4 + themeIndex);
	piVar1 = (int *)(themeIndex + 0x1012edb8);
	iVar6 = *piVar1;
	pbVar13 = dungeon + iVar6;
	while (true) {
		cVar3 = leveltype;
		iVar5 = *(int *)(themeIndex + 0x1012edb8);
		iVar14 = iVar5 + *(int *)(themeIndex + 0x1012edc4);
		if (iVar14 <= iVar6)
			break;
		iVar8 = *piVar15;
		iVar11 = *(int *)(themeIndex + 0x1012edc4) + iVar5 + -1;
		iVar10 = iVar8 + *(int *)(themeIndex + 0x1012edc0);
		iVar12 = iVar10 + -1;
		iVar4 = iVar10 - iVar8;
		pbVar7 = pbVar13 + iVar8 * 0x28;
		iVar9 = iVar8;
		if (iVar8 < iVar10) {
			do {
				if (cVar3 == '\x02') {
					if ((((iVar6 == iVar5) && (iVar8 <= iVar9)) && (iVar9 <= iVar10)) || (((iVar6 == iVar11 && (iVar8 <= iVar9)) && (iVar9 <= iVar10)))) {
						*pbVar7 = 2;
					} else {
						if ((((iVar9 == iVar8) && (iVar5 <= iVar6)) && (iVar6 <= iVar14)) || (((iVar9 == iVar12 && (iVar5 <= iVar6)) && (iVar6 <= iVar14)))) {
							*pbVar7 = 1;
						} else {
							*pbVar7 = 3;
						}
					}
				}
				if (cVar3 == '\x03') {
					if ((((iVar6 == iVar5) && (iVar8 <= iVar9)) && (iVar9 <= iVar10)) || (((iVar6 == iVar11 && (iVar8 <= iVar9)) && (iVar9 <= iVar10)))) {
						*pbVar7 = 0x86;
					} else {
						if ((((iVar9 == iVar8) && (iVar5 <= iVar6)) && (iVar6 <= iVar14)) || (((iVar9 == iVar12 && (iVar5 <= iVar6)) && (iVar6 <= iVar14)))) {
							*pbVar7 = 0x89;
						} else {
							*pbVar7 = 7;
						}
					}
				}
				if (cVar3 == '\x04') {
					if ((((iVar6 == iVar5) && (iVar8 <= iVar9)) && (iVar9 <= iVar10)) || (((iVar6 == iVar11 && (iVar8 <= iVar9)) && (iVar9 <= iVar10)))) {
						*pbVar7 = 2;
					} else {
						if ((((iVar9 == iVar8) && (iVar5 <= iVar6)) && (iVar6 <= iVar14)) || (((iVar9 == iVar12 && (iVar5 <= iVar6)) && (iVar6 <= iVar14)))) {
							*pbVar7 = 1;
						} else {
							*pbVar7 = 6;
						}
					}
				}
				pbVar7 = pbVar7 + 0x28;
				iVar9 = iVar9 + 1;
				iVar4 = iVar4 + -1;
			} while (iVar4 != 0);
		}
		pbVar13 = pbVar13 + 1;
		iVar6 = iVar6 + 1;
	}
	if (leveltype == '\x02') {
		iVar6 = *piVar15;
		iVar5 = *piVar1;
		iVar14 = iVar6 * 0x28 + iVar5;
		dungeon[iVar14] = 8;
		iVar5 = (*(int *)(themeIndex + 0x1012edc0) + iVar6 + -1) * 0x28 + iVar5;
		dungeon[iVar5] = 7;
		iVar6 = *(int *)(themeIndex + 0x1012edc4);
		*(undefined *)(iVar14 + iVar6 + 0x1013bfef) = 9;
		*(undefined *)(iVar5 + iVar6 + 0x1013bfef) = 6;
	}
	if (cVar3 == '\x03') {
		iVar6 = *piVar15;
		iVar5 = *piVar1;
		iVar14 = iVar6 * 0x28 + iVar5;
		dungeon[iVar14] = 0x96;
		iVar5 = (*(int *)(themeIndex + 0x1012edc0) + iVar6 + -1) * 0x28 + iVar5;
		dungeon[iVar5] = 0x97;
		iVar6 = *(int *)(themeIndex + 0x1012edc4);
		*(undefined *)(iVar14 + iVar6 + 0x1013bfef) = 0x98;
		*(undefined *)(iVar5 + iVar6 + 0x1013bfef) = 0x8a;
	}
	if (cVar3 == '\x04') {
		iVar6 = *piVar15;
		iVar5 = *piVar1;
		iVar14 = iVar6 * 0x28 + iVar5;
		dungeon[iVar14] = 9;
		iVar5 = (*(int *)(themeIndex + 0x1012edc0) + iVar6 + -1) * 0x28 + iVar5;
		dungeon[iVar5] = 0x10;
		iVar6 = *(int *)(themeIndex + 0x1012edc4);
		*(undefined *)(iVar14 + iVar6 + 0x1013bfef) = 0xf;
		*(undefined *)(iVar5 + iVar6 + 0x1013bfef) = 0xc;
	}
	if (cVar3 == '\x02') {
		iVar6 = random('\0', 2);
		if (iVar6 == 1) {
			uVar2 = *(uint *)(themeIndex + 0x1012edc0);
			*(undefined *)((*piVar15 + ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0)) * 0x28 + *piVar1 + *(int *)(themeIndex + 0x1012edc4) + 0x1013bfef) = 5;
		} else {
			if ((iVar6 < 1) && (-1 < iVar6)) {
				uVar2 = *(uint *)(themeIndex + 0x1012edc4);
				dungeon[(*(int *)(themeIndex + 0x1012edc0) + *piVar15 + -1) * 0x28 + *piVar1 + ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0)] = 4;
			}
		}
	}
	if (leveltype == '\x03') {
		iVar6 = random('\0', 2);
		if (iVar6 == 1) {
			uVar2 = *(uint *)(themeIndex + 0x1012edc0);
			*(undefined *)((*piVar15 + ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0)) * 0x28 + *piVar1 + *(int *)(themeIndex + 0x1012edc4) + 0x1013bfef) = 0x92;
		} else {
			if ((iVar6 < 1) && (-1 < iVar6)) {
				uVar2 = *(uint *)(themeIndex + 0x1012edc4);
				dungeon[(*(int *)(themeIndex + 0x1012edc0) + *piVar15 + -1) * 0x28 + *piVar1 + ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0)] = 0x93;
			}
		}
	}
	if (leveltype == '\x04') {
		iVar6 = random('\0', 2);
		if (iVar6 == 1) {
			uVar2 = *(uint *)(themeIndex + 0x1012edc0);
			pbVar13 = dungeon + *(int *)(themeIndex + 0x1012edc4) + *piVar1 + (*piVar15 + ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0)) * 0x28;
			pbVar13[-0x29] = 0x39;
			pbVar13[-1] = 6;
			pbVar13[0x27] = 0x38;
			pbVar13[-2] = 0x3b;
			pbVar13[-0x2a] = 0x3a;
		} else {
			if ((iVar6 < 1) && (-1 < iVar6)) {
				uVar2 = *(uint *)(themeIndex + 0x1012edc4);
				iVar8 = *(int *)(themeIndex + 0x1012edc0) + *piVar15;
				iVar9 = (iVar8 + -1) * 0x28;
				iVar6 = *piVar1;
				iVar14 = ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
				iVar5 = iVar9 + iVar6 + iVar14;
				*(undefined *)(iVar5 + 0x1013bfef) = 0x35;
				dungeon[iVar5] = 6;
				dungeon[iVar9 + iVar6 + iVar14 + 1] = 0x34;
				*(undefined *)((iVar8 + -2) * 0x28 + iVar6 + iVar14 + 0x1013bfef) = 0x36;
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_PlaceThemeRooms(int minSize, int maxSize, int floor, int freq, int rndSize)

{
	int iVar1;
	int v;
	BOOL BVar2;
	undefined8 unaff_r15;
	byte *pbVar3;
	undefined8 unaff_r16;
	undefined8 unaff_r17;
	undefined8 unaff_r18;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	int y;
	undefined8 unaff_r23;
	int x;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	byte *pbVar4;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int local_58;
	int local_54[4];
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

	iVar1 = 0x100f8fd0;
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
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	_DAT_1012f19c = 0;
	memset(&DAT_1012edb4, 0, 0x14);
	pbVar3 = *(byte **)(iVar1 + -0x77cc);
	iVar1 = minSize + -2;
	y = 0;
	do {
		x = 0;
		pbVar4 = pbVar3;
		do {
			if (((floor == (uint)*pbVar4) && (v = random('\0', freq), v == 0)) && (BVar2 = DRLG_WillThemeRoomFit(floor, x, y, minSize, maxSize, local_54, &local_58), BVar2 != 0)) {
				if (rndSize != 0) {
					v = random('\0', (local_54[0] - iVar1) + 1);
					local_54[0] = random('\0', v);
					local_54[0] = iVar1 + local_54[0];
					if ((local_54[0] < iVar1) || (maxSize + -2 < local_54[0])) {
						local_54[0] = iVar1;
					}
					v = random('\0', (local_58 - iVar1) + 1);
					v = random('\0', v);
					v = iVar1 + v;
					local_58 = iVar1;
					if ((iVar1 <= v) && (local_58 = iVar1, v <= maxSize + -2)) {
						local_58 = v;
					}
				}
				v = _DAT_1012f19c * 0x14;
				*(int *)(&DAT_1012edb4 + v) = x + 1;
				*(int *)(v + 0x1012edb8) = y + 1;
				*(int *)(v + 0x1012edc0) = local_54[0];
				*(int *)(v + 0x1012edc4) = local_58;
				if (leveltype == '\x03') {
					DRLG_RectTrans((x + 2) * 2 + 0x10, (y + 2) * 2 + 0x10, (x + local_54[0] + -1) * 2 + 0x11,
					    (y + local_58 + -1) * 2 + 0x11);
				} else {
					DRLG_MRectTrans(x + 1, y + 1, x + local_54[0], y + local_58);
				}
				v = _DAT_1012f19c;
				*(int *)(_DAT_1012f19c * 0x14 + 0x1012edbc) = (int)DAT_1012f2d8 + -1;
				DRLG_CreateThemeRoom(v);
				_DAT_1012f19c = _DAT_1012f19c + 1;
			}
			x = x + 1;
			pbVar4 = pbVar4 + 0x28;
		} while (x < 0x28);
		y = y + 1;
		pbVar3 = pbVar3 + 1;
	} while (y < 0x28);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_HoldThemeRooms(void)

{
	int iVar1;
	int *piVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (0 < _DAT_1012f19c) {
		piVar2 = (int *)&DAT_1012edb4;
		iVar3 = 0;
		while (iVar3 < _DAT_1012f19c) {
			iVar4 = piVar2[1];
			iVar1 = iVar4 * 2 + 0x10;
			while (iVar4 < piVar2[1] + piVar2[4] + -1) {
				iVar6 = *piVar2;
				iVar5 = (iVar6 * 2 + 0x10) * 0x70;
				while (iVar6 < *piVar2 + piVar2[3] + -1) {
					iVar7 = iVar5 + iVar1;
					iVar5 = iVar5 + 0xe0;
					iVar6 = iVar6 + 1;
					*(byte *)(_DAT_1012f1bc + iVar7) = *(byte *)(_DAT_1012f1bc + iVar7) | 8;
					*(byte *)(_DAT_1012f1bc + iVar7 + 0x70) = *(byte *)(_DAT_1012f1bc + iVar7 + 0x70) | 8;
					*(byte *)(_DAT_1012f1bc + iVar7 + 1) = *(byte *)(_DAT_1012f1bc + iVar7 + 1) | 8;
					*(byte *)(_DAT_1012f1bc + iVar7 + 0x71) = *(byte *)(_DAT_1012f1bc + iVar7 + 0x71) | 8;
				}
				iVar1 = iVar1 + 2;
				iVar4 = iVar4 + 1;
			}
			piVar2 = piVar2 + 5;
			iVar3 = iVar3 + 1;
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL SkipThemeRoom(int x, int y)

{
	ulonglong uVar1;
	int *piVar2;

	piVar2 = (int *)&DAT_1012edb4;
	uVar1 = (ulonglong)_DAT_1012f19c;
	if (0 < (int)_DAT_1012f19c) {
		do {
			if ((((*piVar2 + -2 <= x) && (x <= *piVar2 + piVar2[3] + 2)) && (piVar2[1] + -2 <= y)) && (y <= piVar2[1] + piVar2[4] + 2)) {
				return 0;
			}
			piVar2 = piVar2 + 5;
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
	}
	return 1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void InitLevels(void)

{
	if (_DAT_1012913c != 0) {
		return;
	}
	DAT_1012f316 = 0;
	currlevel = 0;
	leveltype = 0;
	return;
}