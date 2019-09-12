
void FUN_100b9398(undefined4 param_1,
    undefined4 param_2,
    undefined4 param_3,
    undefined4 param_4,
    undefined4 param_5,
    undefined4 param_6,
    undefined4 param_7,
    undefined4 param_8,
    undefined4 param_9,
    undefined param_10,
    undefined4 param_11,
    undefined4 param_12,
    undefined4 param_13,
    undefined4 param_14,
    undefined4 param_15,
    undefined4 param_16,
    undefined4 param_17,
    undefined4 param_18)

{
	undefined uVar1;
	undefined in_stack_fffffecb;
	undefined in_stack_fffffecf;
	undefined4 local_12c;

	FPlowlevelAssertions(1, (undefined)param_2, (undefined)param_3, (undefined)param_4, (undefined)param_5,
	    (undefined)param_6, (undefined)param_7, (undefined)param_8, in_stack_fffffecb, in_stack_fffffecf, local_12c);
	uVar1 = 0x1c;
	FPvfatal((undefined)param_1, 0x1c, (undefined)param_3, (undefined)param_4, (undefined)param_5, (undefined)param_6,
	    (undefined)param_7, (undefined)param_8, in_stack_fffffecb, in_stack_fffffecf, local_12c);
	FPlowlevelAssertions(0, uVar1, (undefined)param_3, (undefined)param_4, (undefined)param_5, (undefined)param_6,
	    (undefined)param_7, (undefined)param_8, in_stack_fffffecb, in_stack_fffffecf, local_12c);
	return;
}

void RotateRadius(int *x, int *y, int *dx, int *dy, int *lx, int *ly, int *bx, int *by)

{
	int iVar1;

	*bx = 0;
	*by = 0;
	iVar1 = *dx;
	*dx = 7 - *dy;
	*dy = iVar1;
	iVar1 = *lx;
	*lx = 7 - *ly;
	*ly = iVar1;
	*x = *dx - *lx;
	*y = *dy - *ly;
	if (*x < 0) {
		*x = *x + 8;
		*bx = 1;
	}
	if (-1 < *y) {
		return;
	}
	*y = *y + 8;
	*by = 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DoLighting(int nXPos, int nYPos, int nRadius, int Lnum)

{
	int iVar1;
	int iVar2;
	byte *pbVar3;
	int iVar4;
	int iVar5;
	byte *pbVar6;
	int iVar7;
	undefined *puVar8;
	byte *pbVar9;
	longlong lVar10;
	int iVar11;
	undefined8 unaff_r23;
	longlong lVar12;
	undefined8 unaff_r24;
	longlong lVar13;
	undefined8 unaff_r25;
	int iVar14;
	undefined8 unaff_r26;
	int iVar15;
	undefined8 unaff_r27;
	longlong lVar16;
	undefined8 unaff_r28;
	longlong lVar17;
	undefined8 unaff_r29;
	undefined *puVar18;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int local_54;
	int local_50;
	int local_4c;
	int local_48;
	undefined *local_44;
	undefined *local_40;
	undefined *local_3c;
	undefined *local_38[5];
	undefined4 local_24;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	lVar13 = (longlong)nYPos;
	lVar12 = (longlong)nXPos;
	local_24 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	local_38[0] = (undefined *)0x0;
	local_3c = (undefined *)0x0;
	local_48 = 0;
	local_4c = 0;
	local_50 = 0;
	local_54 = 0;
	if (-1 < Lnum) {
		local_38[0] = (PTR_DAT_100f1e90 + Lnum * 0xd)[10];
		local_3c = (PTR_DAT_100f1e90 + Lnum * 0xd)[0xb];
		if ((int)local_38[0] < 0) {
			local_38[0] = local_38[0] + 8;
			lVar12 = lVar12 + -1;
		}
		if ((int)local_3c < 0) {
			local_3c = local_3c + 8;
			lVar13 = lVar13 + -1;
		}
	}
	local_40 = local_38[0];
	local_44 = local_3c;
	if (lVar12 + -0xf < 0) {
		lVar17 = lVar12 + 1;
	} else {
		lVar17 = 0xf;
	}
	iVar1 = (int)lVar12;
	if (iVar1 + 0xf < 0x71) {
		lVar16 = 0xf;
	} else {
		lVar16 = 0x70 - lVar12;
	}
	iVar2 = (int)lVar13;
	if (lVar13 + -0xf < 0) {
		iVar15 = iVar2 + 1;
	} else {
		iVar15 = 0xf;
	}
	if (iVar2 + 0xf < 0x71) {
		iVar14 = 0xf;
	} else {
		iVar14 = 0x70 - iVar2;
	}
	if ((((-1 < iVar1) && (iVar1 < 0x70)) && (-1 < iVar2)) && (iVar2 < 0x70)) {
		*(undefined *)(_DAT_1012f1c4 + iVar1 * 0x70 + iVar2) = 0;
	}
	pbVar6 = &DAT_101acaec + (int)(local_38[0] + (int)local_3c * 8) * 0x100;
	puVar18 = &DAT_101b0aec + nRadius * 0x80;
	iVar11 = 0;
	while (iVar11 < iVar15) {
		iVar7 = iVar2 + iVar11;
		lVar10 = 1;
		lVar13 = lVar16 + -1;
		pbVar3 = pbVar6;
		if (1 < (int)lVar16) {
			do {
				pbVar3 = pbVar3 + 1;
				if (*pbVar3 < 0x80) {
					if (((-1 < lVar12 + lVar10) && (iVar5 = (int)(lVar12 + lVar10), iVar5 < 0x70)) && ((-1 < iVar7 && ((iVar7 < 0x70 && (pbVar9 = (byte *)(_DAT_1012f1c4 + iVar5 * 0x70 + iVar7), (int)(uint)(byte)puVar18[(uint)*pbVar3] < (int)(char)*pbVar9)))))) {
						*pbVar9 = puVar18[(uint)*pbVar3];
					}
				}
				lVar10 = lVar10 + 1;
				lVar13 = lVar13 + -1;
			} while (lVar13 != 0);
		}
		pbVar6 = pbVar6 + 0x10;
		iVar11 = iVar11 + 1;
	}
	RotateRadius(
	    (int *)local_38, (int *)&local_3c, (int *)&local_40, (int *)&local_44, &local_48, &local_4c, &local_50, &local_54);
	iVar11 = 0;
	while (iVar11 < iVar14) {
		iVar7 = iVar1 + iVar11;
		iVar5 = 1;
		lVar13 = lVar16 + -1;
		puVar8 = &DAT_101acaec + (int)(local_38[0] + (int)local_3c * 8) * 0x100;
		if (1 < (int)lVar16) {
			do {
				puVar8 = puVar8 + 1;
				if ((byte)puVar8[local_50 + (iVar11 + local_54) * 0x10] < 0x80) {
					iVar4 = iVar2 - iVar5;
					if ((((-1 < iVar7) && (iVar7 < 0x70)) && (-1 < iVar4)) && ((iVar4 < 0x70 && (pbVar6 = (byte *)(_DAT_1012f1c4 + iVar7 * 0x70 + iVar4), (int)(uint)(byte)puVar18[(uint)(byte)puVar8[local_50 + (iVar11 + local_54) * 0x10]] < (int)(char)*pbVar6)))) {
						*pbVar6 = puVar18[(uint)(byte)puVar8[local_50 + (iVar11 + local_54) * 0x10]];
					}
				}
				iVar5 = iVar5 + 1;
				lVar13 = lVar13 + -1;
			} while (lVar13 != 0);
		}
		iVar11 = iVar11 + 1;
	}
	RotateRadius(
	    (int *)local_38, (int *)&local_3c, (int *)&local_40, (int *)&local_44, &local_48, &local_4c, &local_50, &local_54);
	iVar11 = 0;
	while (iVar11 < iVar14) {
		iVar7 = iVar2 - iVar11;
		lVar16 = 1;
		lVar13 = lVar17 + -1;
		puVar8 = &DAT_101acaec + (int)(local_38[0] + (int)local_3c * 8) * 0x100;
		if (1 < (int)lVar17) {
			do {
				puVar8 = puVar8 + 1;
				if ((byte)puVar8[local_50 + (iVar11 + local_54) * 0x10] < 0x80) {
					if (((-1 < lVar12 - lVar16) && (iVar5 = (int)(lVar12 - lVar16), iVar5 < 0x70)) && ((-1 < iVar7 && ((iVar7 < 0x70 && (pbVar6 = (byte *)(_DAT_1012f1c4 + iVar5 * 0x70 + iVar7), (int)(uint)(byte)puVar18[(uint)(byte)puVar8[local_50 + (iVar11 + local_54) * 0x10]] < (int)(char)*pbVar6)))))) {
						*pbVar6 = puVar18[(uint)(byte)puVar8[local_50 + (iVar11 + local_54) * 0x10]];
					}
				}
				lVar16 = lVar16 + 1;
				lVar13 = lVar13 + -1;
			} while (lVar13 != 0);
		}
		iVar11 = iVar11 + 1;
	}
	RotateRadius(
	    (int *)local_38, (int *)&local_3c, (int *)&local_40, (int *)&local_44, &local_48, &local_4c, &local_50, &local_54);
	iVar14 = 0;
	while (iVar14 < iVar15) {
		iVar11 = iVar1 - iVar14;
		iVar7 = 1;
		lVar12 = lVar17 + -1;
		puVar8 = &DAT_101acaec + (int)(local_38[0] + (int)local_3c * 8) * 0x100;
		if (1 < (int)lVar17) {
			do {
				puVar8 = puVar8 + 1;
				if ((byte)puVar8[local_50 + (iVar14 + local_54) * 0x10] < 0x80) {
					iVar5 = iVar2 + iVar7;
					if ((((-1 < iVar11) && (iVar11 < 0x70)) && (-1 < iVar5)) && ((iVar5 < 0x70 && (pbVar6 = (byte *)(_DAT_1012f1c4 + iVar11 * 0x70 + iVar5), (int)(uint)(byte)puVar18[(uint)(byte)puVar8[local_50 + (iVar14 + local_54) * 0x10]] < (int)(char)*pbVar6)))) {
						*pbVar6 = puVar18[(uint)(byte)puVar8[local_50 + (iVar14 + local_54) * 0x10]];
					}
				}
				iVar7 = iVar7 + 1;
				lVar12 = lVar12 + -1;
			} while (lVar12 != 0);
		}
		iVar14 = iVar14 + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DoUnLight(int nXPos, int nYPos, int nRadius)

{
	longlong lVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	int iVar6;
	longlong lVar7;
	int iVar8;

	lVar1 = (longlong)nRadius + 1;
	lVar3 = (longlong)nYPos - lVar1;
	lVar1 = (longlong)nXPos - lVar1;
	iVar8 = nRadius + nYPos + 1;
	lVar7 = (longlong)nRadius + (longlong)nXPos + 1;
	if (lVar3 < 0) {
		lVar3 = 0;
	}
	if (0x70 < iVar8) {
		iVar8 = 0x70;
	}
	if ((int)lVar1 < 0) {
		lVar1 = 0;
	}
	if (0x70 < (int)lVar7) {
		lVar7 = 0x70;
	}
	while (iVar6 = (int)lVar3, iVar6 < iVar8) {
		lVar2 = lVar7 - lVar1;
		lVar4 = lVar1 * 0x70;
		lVar5 = lVar1;
		if ((int)lVar1 < (int)lVar7) {
			do {
				if ((((-1 < (int)lVar5) && ((int)lVar5 < 0x70)) && (-1 < iVar6)) && (iVar6 < 0x70)) {
					*(undefined *)(iVar6 + _DAT_1012f1c4 + (int)lVar4) = *(undefined *)(iVar6 + _DAT_1012f1c0 + (int)lVar4);
				}
				lVar4 = lVar4 + 0x70;
				lVar5 = lVar5 + 1;
				lVar2 = lVar2 + -1;
			} while (lVar2 != 0);
		}
		lVar3 = lVar3 + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DoUnVision(int nXPos, int nYPos, int nRadius)

{
	uint uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	longlong lVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	int iVar11;
	longlong lVar12;

	lVar5 = (longlong)nRadius + 1;
	lVar8 = (longlong)nYPos - lVar5;
	lVar5 = (longlong)nXPos - lVar5;
	iVar11 = nRadius + nXPos + 1;
	lVar12 = (longlong)nRadius + (longlong)nYPos + 1;
	if (lVar8 < 0) {
		lVar8 = 0;
	}
	if (0x70 < (int)lVar12) {
		lVar12 = 0x70;
	}
	if ((int)lVar5 < 0) {
		lVar5 = 0;
	}
	if (0x70 < iVar11) {
		iVar11 = 0x70;
	}
	lVar9 = lVar5 * 0x70;
	do {
		if (iVar11 <= (int)lVar5) {
			return;
		}
		uVar7 = lVar12 - lVar8;
		if ((int)lVar8 < (int)lVar12) {
			uVar1 = (uint)uVar7 >> 3;
			uVar6 = (ulonglong)uVar1;
			iVar2 = (int)lVar9;
			lVar10 = lVar8;
			if (uVar1 != 0) {
				do {
					iVar4 = (int)lVar10;
					*(byte *)(iVar2 + _DAT_1012f1bc + iVar4) = *(byte *)(iVar2 + _DAT_1012f1bc + iVar4) & 0xbd;
					iVar3 = _DAT_1012f1bc + iVar4 + 1;
					*(byte *)(iVar2 + iVar3) = *(byte *)(iVar2 + iVar3) & 0xbd;
					iVar3 = _DAT_1012f1bc + iVar4 + 2;
					*(byte *)(iVar2 + iVar3) = *(byte *)(iVar2 + iVar3) & 0xbd;
					iVar3 = _DAT_1012f1bc + iVar4 + 3;
					*(byte *)(iVar2 + iVar3) = *(byte *)(iVar2 + iVar3) & 0xbd;
					iVar3 = _DAT_1012f1bc + iVar4 + 4;
					*(byte *)(iVar2 + iVar3) = *(byte *)(iVar2 + iVar3) & 0xbd;
					iVar3 = _DAT_1012f1bc + iVar4 + 5;
					*(byte *)(iVar2 + iVar3) = *(byte *)(iVar2 + iVar3) & 0xbd;
					iVar3 = _DAT_1012f1bc + iVar4 + 6;
					*(byte *)(iVar2 + iVar3) = *(byte *)(iVar2 + iVar3) & 0xbd;
					iVar3 = _DAT_1012f1bc + iVar4 + 7;
					lVar10 = lVar10 + 8;
					*(byte *)(iVar2 + iVar3) = *(byte *)(iVar2 + iVar3) & 0xbd;
					uVar6 = uVar6 - 1;
				} while (uVar6 != 0);
				uVar7 = uVar7 & 7;
				if (uVar7 == 0)
					goto LAB_100b9bcc;
			}
			do {
				iVar3 = _DAT_1012f1bc + (int)lVar10;
				*(byte *)(iVar2 + iVar3) = *(byte *)(iVar2 + iVar3) & 0xbd;
				uVar7 = uVar7 - 1;
				lVar10 = lVar10 + 1;
			} while (uVar7 != 0);
		}
	LAB_100b9bcc:
		lVar9 = lVar9 + 0x70;
		lVar5 = lVar5 + 1;
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DoVision(int nXPos, int nYPos, int nRadius, BOOL doautomap, BOOL visible)

{
	int iVar1;
	int iVar2;
	undefined8 uVar3;
	longlong lVar4;
	int iVar5;
	longlong lVar6;
	int iVar7;
	int iVar8;
	ulonglong uVar9;
	int iVar10;
	int iVar11;
	char cVar12;
	int iVar13;
	byte *pbVar15;
	ulonglong uVar14;
	longlong unaff_r30;
	int x;
	longlong unaff_r31;
	int y;
	int iStack00000020;
	byte *local_58;

	lVar6 = (longlong)nYPos;
	lVar4 = (longlong)nXPos;
	uVar3 = 0x100f8fd0;
	iStack00000020 = nRadius;
	if ((((-1 < lVar4) && (iStack00000020 = nRadius, nXPos < 0x71)) && (iStack00000020 = nRadius, -1 < nYPos)) && (iStack00000020 = nRadius, nYPos < 0x71)) {
		iStack00000020 = nRadius;
		if (doautomap != 0) {
			iVar13 = nXPos * 0x70;
			iStack00000020 = nRadius;
			if (-1 < *(char *)(_DAT_1012f1bc + iVar13 + nYPos)) {
				iStack00000020 = nRadius;
				SetAutomapView(nXPos, nXPos);
			}
			*(byte *)(_DAT_1012f1bc + iVar13 + nYPos) = *(byte *)(_DAT_1012f1bc + iVar13 + nYPos) | 0x80;
		}
		if (visible != 0) {
			iVar13 = nXPos * 0x70 + nYPos;
			*(byte *)(_DAT_1012f1bc + iVar13) = *(byte *)(_DAT_1012f1bc + iVar13) | 0x40;
		}
		nYPos = nXPos * 0x70 + nYPos;
		*(byte *)(_DAT_1012f1bc + nYPos) = *(byte *)(_DAT_1012f1bc + nYPos) | 2;
	}
	iVar13 = 0;
	do {
		local_58 = *(byte **)((int)uVar3 + -0x6ea0);
		iVar10 = 0;
		uVar9 = (ulonglong) * (uint *)((int)uVar3 + -0x7100);
		do {
			cVar12 = '\0';
			iVar11 = 0;
			iVar1 = iStack00000020 - (uint)*local_58;
			uVar14 = uVar9;
			while ((iVar11 < iVar1 * 2 && (cVar12 == '\0'))) {
				iVar2 = 0;
				iVar8 = 0;
				iVar5 = 0;
				iVar7 = 0;
				pbVar15 = (byte *)uVar14;
				if (iVar13 == 2) {
					unaff_r30 = lVar4 + (ulonglong)*pbVar15;
					unaff_r31 = lVar6 - (ulonglong)pbVar15[1];
					if ((*pbVar15 != 0) && (pbVar15[1] != 0)) {
						iVar2 = -1;
						iVar7 = 1;
					}
				} else {
					if (iVar13 < 2) {
						if (iVar13 == 0) {
							unaff_r30 = lVar4 + (ulonglong)*pbVar15;
							unaff_r31 = lVar6 + (ulonglong)pbVar15[1];
							if ((*pbVar15 != 0) && (pbVar15[1] != 0)) {
								iVar2 = -1;
								iVar7 = -1;
							}
						} else {
							if (-1 < iVar13) {
								unaff_r30 = lVar4 - (ulonglong)*pbVar15;
								unaff_r31 = lVar6 - (ulonglong)pbVar15[1];
								if ((*pbVar15 != 0) && (pbVar15[1] != 0)) {
									iVar5 = 1;
									iVar8 = 1;
								}
							}
						}
					} else {
						if (iVar13 < 4) {
							unaff_r30 = lVar4 - (ulonglong)*pbVar15;
							unaff_r31 = lVar6 + (ulonglong)pbVar15[1];
							if ((*pbVar15 != 0) && (pbVar15[1] != 0)) {
								iVar5 = -1;
								iVar8 = 1;
							}
						}
					}
				}
				x = (int)unaff_r30;
				if ((((-1 < x) && (x < 0x71)) && (y = (int)unaff_r31, -1 < y)) && ((y < 0x71 && ((cVar12 = (&DAT_10131334)[(int)*(short *)(_DAT_1012f1d4 + x * 0xe0 + y * 2)], (&DAT_10131334)[(int)*(short *)(_DAT_1012f1d4 + (x + iVar2) * 0xe0 + (y + iVar5) * 2)] == '\0' || ((&DAT_10131334)[(int)*(short *)(_DAT_1012f1d4 + (x + iVar8) * 0xe0 + (y + iVar7) * 2)] == '\0')))))) {
					if (doautomap != 0) {
						if (-1 < *(char *)(_DAT_1012f1bc + x * 0x70 + y)) {
							SetAutomapView(x, y);
						}
						iVar2 = x * 0x70 + y;
						*(byte *)(_DAT_1012f1bc + iVar2) = *(byte *)(_DAT_1012f1bc + iVar2) | 0x80;
					}
					if (visible != 0) {
						iVar2 = x * 0x70 + y;
						*(byte *)(_DAT_1012f1bc + iVar2) = *(byte *)(_DAT_1012f1bc + iVar2) | 0x40;
					}
					y = x * 0x70 + y;
					*(byte *)(_DAT_1012f1bc + y) = *(byte *)(_DAT_1012f1bc + y) | 2;
					if ((cVar12 == '\0') && (*(char *)(_DAT_1012f1c8 + y) != '\0')) {
						(&DAT_1012f1d8)[(int)*(char *)(_DAT_1012f1c8 + y)] = 1;
					}
				}
				uVar14 = uVar14 + 2;
				iVar11 = iVar11 + 2;
			}
			iVar10 = iVar10 + 1;
			uVar9 = uVar9 + 0x1e;
			local_58 = local_58 + 1;
		} while (iVar10 < 0x17);
		iVar13 = iVar13 + 1;
	} while (iVar13 < 4);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FreeLightTable(void)

{
	void *p;

	p = _DAT_101b2028;
	_DAT_101b2028 = (void *)0x0;
	mem_free_dbg(p);
	return;
}

void InitLightTable(void)

{
	int iVar1;
	BYTE *pBVar2;

	iVar1 = 0x100f8fd0;
	pBVar2 = DiabloAllocPtr(0x1b00);
	**(BYTE ***)(iVar1 + -0x7770) = pBVar2;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void MakeLightTable(void)

{
	int iVar1;
	longlong lVar2;
	int iVar3;
	byte bVar4;
	undefined8 uVar5;
	int iVar6;
	char cVar8;
	byte *pbVar7;
	longlong lVar9;
	int iVar10;
	undefined uVar11;
	byte bVar12;
	ulonglong in_r5;
	undefined uVar13;
	byte bVar14;
	ulonglong in_r6;
	undefined uVar15;
	byte bVar16;
	longlong lVar17;
	undefined uVar18;
	longlong in_r9;
	int iVar19;
	undefined uVar20;
	longlong in_r10;
	uint uVar21;
	undefined uVar22;
	uint uVar23;
	longlong lVar24;
	uint uVar25;
	int iVar26;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	ulonglong uVar27;
	longlong lVar28;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	int iVar29;
	undefined8 unaff_r23;
	byte *pbVar30;
	byte *pbVar31;
	undefined8 unaff_r24;
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
	double dVar37;
	double dVar38;
	double dVar39;
	double dVar40;
	double dVar41;
	undefined in_stack_ffffff1b;
	byte local_96;
	byte local_95;
	byte local_94;
	byte local_93;
	byte local_92;
	byte local_91;
	byte local_90;
	byte local_8f;
	byte local_8e[6];
	byte local_88[8];
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

	uVar5 = 0x100f8fd0;
	lVar9 = 0;
	bVar16 = 0x28;
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
	if (_DAT_10129140 == 0) {
		lVar2 = 0xf;
	} else {
		lVar2 = 3;
	}
	iVar6 = 0;
	pbVar30 = _DAT_101b2028;
	while (true) {
		uVar22 = (undefined)in_r10;
		uVar20 = (undefined)in_r9;
		uVar15 = (undefined)in_r6;
		uVar13 = (undefined)in_r5;
		iVar3 = (int)lVar2;
		if (iVar3 <= iVar6)
			break;
		*pbVar30 = 0;
		iVar3 = 0;
		uVar21 = 0xf;
		pbVar30 = pbVar30 + 1;
		lVar17 = lVar9;
		do {
			lVar36 = 4;
			uVar27 = (ulonglong)((uint)lVar17 & 0xff);
			uVar23 = uVar21 & 0xff;
			lVar24 = 0;
			do {
				if (((int)lVar24 != 0) || (iVar3 != 0)) {
					*pbVar30 = (byte)uVar27;
					pbVar30 = pbVar30 + 1;
				}
				if (((uint)uVar27 & 0xff) < uVar23) {
					lVar28 = uVar27 + 1;
				} else {
					uVar23 = 0;
					lVar28 = 0;
				}
				if ((lVar24 != -1) || (iVar3 != 0)) {
					*pbVar30 = (byte)lVar28;
					pbVar30 = pbVar30 + 1;
				}
				if (((uint)lVar28 & 0xff) < uVar23) {
					lVar28 = lVar28 + 1;
				} else {
					uVar23 = 0;
					lVar28 = 0;
				}
				if ((lVar24 != -2) || (iVar3 != 0)) {
					*pbVar30 = (byte)lVar28;
					pbVar30 = pbVar30 + 1;
				}
				if (((uint)lVar28 & 0xff) < uVar23) {
					lVar28 = lVar28 + 1;
				} else {
					uVar23 = 0;
					lVar28 = 0;
				}
				if ((lVar24 != -3) || (iVar3 != 0)) {
					*pbVar30 = (byte)lVar28;
					pbVar30 = pbVar30 + 1;
				}
				if (((uint)lVar28 & 0xff) < uVar23) {
					uVar27 = lVar28 + 1;
				} else {
					uVar23 = 0;
					uVar27 = 0;
				}
				lVar24 = lVar24 + 4;
				lVar36 = lVar36 + -1;
			} while (lVar36 != 0);
			iVar3 = iVar3 + 1;
			uVar21 = uVar21 + 0x10;
			lVar17 = lVar17 + 0x10;
		} while (iVar3 < 8);
		lVar24 = 4;
		lVar17 = (ulonglong)(uint)((int)lVar9 >> 1) + 0x80;
		uVar21 = 0x87;
		do {
			uVar23 = (uint)lVar17 & 0xff;
			uVar25 = uVar21 & 0xff;
			*pbVar30 = (byte)lVar17;
			if (uVar23 < uVar25) {
				uVar23 = uVar23 + 1;
			} else {
				uVar25 = 0;
				uVar23 = 0;
			}
			pbVar30[1] = (byte)uVar23;
			if ((uVar23 & 0xff) < uVar25) {
				uVar23 = uVar23 + 1;
			} else {
				uVar25 = 0;
				uVar23 = 0;
			}
			pbVar30[2] = (byte)uVar23;
			if ((uVar23 & 0xff) < uVar25) {
				uVar23 = uVar23 + 1;
			} else {
				uVar25 = 0;
				uVar23 = 0;
			}
			pbVar30[3] = (byte)uVar23;
			if ((uVar23 & 0xff) < uVar25) {
				uVar23 = uVar23 + 1;
			} else {
				uVar25 = 0;
				uVar23 = 0;
			}
			pbVar30[4] = (byte)uVar23;
			if ((uVar23 & 0xff) < uVar25) {
				uVar23 = uVar23 + 1;
			} else {
				uVar25 = 0;
				uVar23 = 0;
			}
			pbVar30[5] = (byte)uVar23;
			if ((uVar23 & 0xff) < uVar25) {
				uVar23 = uVar23 + 1;
			} else {
				uVar25 = 0;
				uVar23 = 0;
			}
			pbVar30[6] = (byte)uVar23;
			if ((uVar23 & 0xff) < uVar25) {
				bVar4 = (byte)uVar23 + 1;
			} else {
				bVar4 = 0;
			}
			pbVar30[7] = bVar4;
			pbVar30 = pbVar30 + 8;
			lVar17 = lVar17 + 8;
			uVar21 = uVar21 + 8;
			lVar24 = lVar24 + -1;
		} while (lVar24 != 0);
		in_r9 = lVar9 + 0xa0;
		iVar3 = 10;
		in_r10 = 0xaf;
		do {
			lVar17 = 4;
			uVar27 = (ulonglong)((uint)in_r9 & 0xff);
			uVar21 = (uint)in_r10 & 0xff;
			do {
				*pbVar30 = (byte)uVar27;
				if (((uint)uVar27 & 0xff) < uVar21) {
					lVar24 = uVar27 + 1;
				} else {
					uVar21 = 0;
					lVar24 = 0;
				}
				if (((uint)lVar24 & 0xff) == 0xff) {
					uVar21 = 0;
					lVar24 = 0;
				}
				pbVar30[1] = (byte)lVar24;
				if (((uint)lVar24 & 0xff) < uVar21) {
					lVar24 = lVar24 + 1;
				} else {
					uVar21 = 0;
					lVar24 = 0;
				}
				if (((uint)lVar24 & 0xff) == 0xff) {
					uVar21 = 0;
					lVar24 = 0;
				}
				pbVar30[2] = (byte)lVar24;
				if (((uint)lVar24 & 0xff) < uVar21) {
					lVar24 = lVar24 + 1;
				} else {
					uVar21 = 0;
					lVar24 = 0;
				}
				if (((uint)lVar24 & 0xff) == 0xff) {
					uVar21 = 0;
					lVar24 = 0;
				}
				in_r6 = (ulonglong)((uint)lVar24 & 0xff);
				pbVar30[3] = (byte)lVar24;
				pbVar30 = pbVar30 + 4;
				if (in_r6 < (ulonglong)uVar21) {
					uVar27 = lVar24 + 1;
				} else {
					uVar21 = 0;
					uVar27 = 0;
				}
				if (((uint)uVar27 & 0xff) == 0xff) {
					uVar21 = 0;
					uVar27 = 0;
				}
				lVar17 = lVar17 + -1;
			} while (lVar17 != 0);
			iVar3 = iVar3 + 1;
			in_r10 = in_r10 + 0x10;
			in_r9 = in_r9 + 0x10;
		} while (iVar3 < 0x10);
		in_r5 = (ulonglong)_DAT_10129140;
		if (_DAT_10129140 == 0) {
			lVar9 = lVar9 + 1;
		} else {
			lVar9 = lVar9 + 5;
		}
		iVar6 = iVar6 + 1;
	}
	lVar9 = 8;
	do {
		lVar17 = 0;
		uVar18 = 0;
		*pbVar30 = 0;
		pbVar30[1] = 0;
		pbVar30[2] = 0;
		pbVar30[3] = 0;
		pbVar30[4] = 0;
		pbVar30[5] = 0;
		pbVar30[6] = 0;
		pbVar30[7] = 0;
		pbVar30[8] = 0;
		pbVar30[9] = 0;
		pbVar30[10] = 0;
		pbVar30[0xb] = 0;
		pbVar30[0xc] = 0;
		pbVar30[0xd] = 0;
		pbVar30[0xe] = 0;
		pbVar30[0xf] = 0;
		pbVar30[0x10] = 0;
		pbVar30[0x11] = 0;
		pbVar30[0x12] = 0;
		pbVar30[0x13] = 0;
		pbVar30[0x14] = 0;
		pbVar30[0x15] = 0;
		pbVar30[0x16] = 0;
		pbVar30[0x17] = 0;
		pbVar30[0x18] = 0;
		pbVar30[0x19] = 0;
		pbVar30[0x1a] = 0;
		pbVar30[0x1b] = 0;
		pbVar30[0x1c] = 0;
		pbVar30[0x1d] = 0;
		pbVar30[0x1e] = 0;
		pbVar30[0x1f] = 0;
		pbVar30 = pbVar30 + 0x20;
		lVar9 = lVar9 + -1;
	} while (lVar9 != 0);
	if (leveltype == '\x04') {
		uVar15 = 0xf;
		pbVar30 = _DAT_101b2028;
		bVar16 = 0x28;
		while (true) {
			uVar22 = (undefined)in_r10;
			uVar20 = (undefined)in_r9;
			uVar18 = (undefined)lVar17;
			uVar13 = (undefined)in_r5;
			if (iVar3 <= (int)lVar17)
				break;
			in_r9 = lVar2 - lVar17;
			pbVar7 = &local_96;
			iVar19 = (int)in_r9;
			iVar6 = iVar3 / iVar19;
			in_r10 = (longlong)iVar6;
			bVar16 = 1;
			iVar10 = 1;
			iVar26 = 0;
			lVar9 = in_r9;
			while (iVar10 < 0x10) {
				lVar9 = lVar9 + (lVar2 - (longlong)iVar6 * (longlong)iVar19);
				*pbVar7 = bVar16;
				if ((iVar19 < (int)lVar9) && (iVar10 < 0xf)) {
					pbVar7 = pbVar7 + 1;
					*pbVar7 = bVar16;
					lVar9 = lVar9 - in_r9;
					iVar10 = iVar10 + 1;
				}
				iVar26 = iVar26 + 1;
				if (iVar26 == iVar6) {
					iVar26 = 0;
					bVar16 = bVar16 + 1;
				}
				iVar10 = iVar10 + 1;
				pbVar7 = pbVar7 + 1;
			}
			*pbVar30 = 0;
			in_r5 = 9;
			pbVar30[1] = local_96;
			pbVar30[2] = local_95;
			pbVar30[3] = local_94;
			pbVar30[4] = local_93;
			pbVar30[5] = local_92;
			pbVar30[6] = local_91;
			pbVar30[7] = local_90;
			pbVar30[8] = local_8f;
			pbVar30 = pbVar30 + 9;
			pbVar7 = local_8e;
			lVar9 = 7;
			do {
				bVar4 = *pbVar7;
				pbVar7 = pbVar7 + 1;
				*pbVar30 = bVar4;
				pbVar30 = pbVar30 + 1;
				lVar9 = lVar9 + -1;
			} while (lVar9 != 0);
			pbVar7 = local_88;
			lVar9 = 3;
			do {
				pbVar31 = pbVar30;
				*pbVar31 = *pbVar7;
				pbVar31[1] = pbVar7[-1];
				pbVar31[2] = pbVar7[-2];
				pbVar31[3] = pbVar7[-3];
				pbVar30 = pbVar7 + -4;
				pbVar7 = pbVar7 + -5;
				pbVar31[4] = *pbVar30;
				lVar9 = lVar9 + -1;
				pbVar30 = pbVar31 + 5;
			} while (lVar9 != 0);
			lVar17 = lVar17 + 1;
			pbVar31[5] = 1;
			pbVar30 = pbVar31 + 0xe6;
		}
		*pbVar30 = 0;
		pbVar30[1] = 1;
		lVar9 = 7;
		pbVar30[2] = 1;
		pbVar30[3] = 1;
		pbVar30[4] = 1;
		pbVar30[5] = 1;
		pbVar30[6] = 1;
		pbVar30[7] = 1;
		pbVar30[8] = 1;
		pbVar30[9] = 1;
		pbVar30[10] = 1;
		pbVar30[0xb] = 1;
		pbVar30[0xc] = 1;
		pbVar30[0xd] = 1;
		pbVar30[0xe] = 1;
		pbVar30[0xf] = 1;
		pbVar30[0x10] = 1;
		pbVar30[0x11] = 1;
		pbVar30[0x12] = 1;
		pbVar30[0x13] = 1;
		pbVar30[0x14] = 1;
		pbVar30[0x15] = 1;
		pbVar30[0x16] = 1;
		pbVar30[0x17] = 1;
		pbVar30[0x18] = 1;
		pbVar7 = pbVar30 + 0x19;
		do {
			pbVar30 = pbVar7;
			*pbVar30 = 1;
			lVar9 = lVar9 + -1;
			pbVar7 = pbVar30 + 1;
		} while (lVar9 != 0);
		pbVar30 = pbVar30 + 0xe1;
	}
	uVar11 = 0;
	local_80[0] = (int *)LoadFileInMem("PlrGFX\\Infra.TRN", (DWORD *)0x0);
	cVar8 = LockMemFile(ZEXT48(local_80[0]), uVar11, uVar13, uVar15, bVar16, uVar18, uVar20, uVar22, in_stack_ffffff1b);
	lVar9 = (longlong)cVar8;
	lVar2 = 0x10;
	do {
		pbVar7 = (byte *)lVar9;
		*pbVar30 = *pbVar7;
		pbVar30[1] = pbVar7[1];
		pbVar30[2] = pbVar7[2];
		pbVar30[3] = pbVar7[3];
		pbVar30[4] = pbVar7[4];
		pbVar30[5] = pbVar7[5];
		pbVar30[6] = pbVar7[6];
		pbVar30[7] = pbVar7[7];
		pbVar30[8] = pbVar7[8];
		pbVar30[9] = pbVar7[9];
		pbVar30[10] = pbVar7[10];
		pbVar30[0xb] = pbVar7[0xb];
		pbVar30[0xc] = pbVar7[0xc];
		pbVar30[0xd] = pbVar7[0xd];
		pbVar30[0xe] = pbVar7[0xe];
		lVar9 = lVar9 + 0x10;
		pbVar30[0xf] = pbVar7[0xf];
		pbVar30 = pbVar30 + 0x10;
		lVar2 = lVar2 + -1;
	} while (lVar2 != 0);
	UnlockMemFile((char)local_80[0]);
	MemFreeDbg(local_80);
	uVar11 = 0;
	local_80[0] = (int *)LoadFileInMem(*(char **)((int)uVar5 + -0x5580), (DWORD *)0x0);
	cVar8 = LockMemFile(ZEXT48(local_80[0]), uVar11, uVar13, uVar15, bVar16, uVar18, uVar20, uVar22, in_stack_ffffff1b);
	lVar9 = (longlong)cVar8;
	lVar2 = 0x10;
	do {
		pbVar7 = (byte *)lVar9;
		*pbVar30 = *pbVar7;
		pbVar30[1] = pbVar7[1];
		pbVar30[2] = pbVar7[2];
		pbVar30[3] = pbVar7[3];
		pbVar30[4] = pbVar7[4];
		pbVar30[5] = pbVar7[5];
		pbVar30[6] = pbVar7[6];
		pbVar30[7] = pbVar7[7];
		pbVar30[8] = pbVar7[8];
		pbVar30[9] = pbVar7[9];
		pbVar30[10] = pbVar7[10];
		pbVar30[0xb] = pbVar7[0xb];
		pbVar30[0xc] = pbVar7[0xc];
		pbVar30[0xd] = pbVar7[0xd];
		pbVar30[0xe] = pbVar7[0xe];
		lVar9 = lVar9 + 0x10;
		pbVar30[0xf] = pbVar7[0xf];
		pbVar30 = pbVar30 + 0x10;
		lVar2 = lVar2 + -1;
	} while (lVar2 != 0);
	UnlockMemFile((char)local_80[0]);
	MemFreeDbg(local_80);
	lVar9 = 4;
	iVar6 = 0;
	do {
		bVar16 = 0xe2;
		while (bVar16 < 0xef) {
			if ((iVar6 == 0) && (bVar16 == 0xe2)) {
				*pbVar30 = 0;
			} else {
				*pbVar30 = bVar16;
			}
			pbVar30 = pbVar30 + 1;
			bVar16 = bVar16 + 1;
		}
		*pbVar30 = 0;
		bVar16 = 0xe2;
		pbVar30[1] = 0;
		pbVar30[2] = 0;
		pbVar7 = pbVar30 + 3;
		while (bVar16 < 0xef) {
			if ((iVar6 == -1) && (bVar16 == 0xe2)) {
				*pbVar7 = 0;
			} else {
				*pbVar7 = bVar16;
			}
			pbVar7 = pbVar7 + 1;
			bVar16 = bVar16 + 1;
		}
		iVar6 = iVar6 + 2;
		*pbVar7 = 0;
		pbVar7[1] = 0;
		pbVar7[2] = 0;
		pbVar30 = pbVar7 + 3;
		lVar9 = lVar9 + -1;
	} while (lVar9 != 0);
	*pbVar30 = 0xe0;
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
	lVar9 = 3;
	pbVar7[0x1c] = 0xe2;
	pbVar7[0x1d] = 0xe4;
	pbVar7[0x1e] = 0xe6;
	pbVar7[0x1f] = 0xe8;
	pbVar7[0x20] = 0xea;
	pbVar7[0x21] = 0xec;
	pbVar7[0x22] = 0xee;
	pbVar7 = pbVar7 + 0x23;
	do {
		bVar16 = 0xe0;
		while (bVar16 < 0xe7) {
			*pbVar7 = bVar16;
			bVar14 = bVar16 + 5;
			pbVar7[1] = bVar16 + 1;
			pbVar7[2] = bVar16 + 2;
			pbVar7[3] = bVar16 + 3;
			bVar12 = bVar16 + 6;
			pbVar7[4] = bVar16 + 4;
			bVar4 = bVar16 + 7;
			bVar16 = bVar16 + 8;
			pbVar7[5] = bVar14;
			pbVar7[6] = bVar12;
			pbVar7[7] = bVar4;
			pbVar7 = pbVar7 + 8;
		}
		while (bVar16 < 0xef) {
			*pbVar7 = bVar16;
			pbVar7 = pbVar7 + 1;
			bVar16 = bVar16 + 1;
		}
		*pbVar7 = 0;
		bVar16 = 0xe0;
		pbVar7 = pbVar7 + 1;
		while (bVar16 < 0xe7) {
			*pbVar7 = bVar16;
			bVar14 = bVar16 + 5;
			pbVar7[1] = bVar16 + 1;
			pbVar7[2] = bVar16 + 2;
			pbVar7[3] = bVar16 + 3;
			bVar12 = bVar16 + 6;
			pbVar7[4] = bVar16 + 4;
			bVar4 = bVar16 + 7;
			bVar16 = bVar16 + 8;
			pbVar7[5] = bVar14;
			pbVar7[6] = bVar12;
			pbVar7[7] = bVar4;
			pbVar7 = pbVar7 + 8;
		}
		while (bVar16 < 0xef) {
			*pbVar7 = bVar16;
			pbVar7 = pbVar7 + 1;
			bVar16 = bVar16 + 1;
		}
		*pbVar7 = 0;
		pbVar7 = pbVar7 + 1;
		lVar9 = lVar9 + -1;
	} while (lVar9 != 0);
	iVar6 = (int)uVar5;
	puVar33 = *(undefined **)(iVar6 + -0x6e9c);
	iVar3 = 0;
	dVar39 = *(double *)(iVar6 + -0x4a10);
	dVar38 = *(double *)(iVar6 + -0x4a18);
	dVar37 = *(double *)(iVar6 + -0x4a30);
	dVar40 = *(double *)(iVar6 + -0x4a08);
	do {
		lVar9 = 0x20;
		local_68 = (double)CONCAT44(0x43300000, iVar3 + 1U ^ 0x80000000);
		iVar10 = (iVar3 + 1U) * 8;
		uVar21 = 0;
		dVar41 = dVar40 * (local_68 - dVar37);
		puVar34 = puVar33;
		do {
			if (iVar10 < (int)uVar21) {
				*puVar34 = 0xf;
			} else {
				local_68 = (double)CONCAT44(0x43300000, uVar21 ^ 0x80000000);
				*puVar34 = (char)(int)(dVar39 + (dVar38 * (local_68 - dVar37)) / dVar41);
			}
			if (iVar10 < (int)(uVar21 + 1)) {
				puVar34[1] = 0xf;
			} else {
				local_68 = (double)CONCAT44(0x43300000, uVar21 + 1 ^ 0x80000000);
				puVar34[1] = (char)(int)(dVar39 + (dVar38 * (local_68 - dVar37)) / dVar41);
			}
			if (iVar10 < (int)(uVar21 + 2)) {
				puVar34[2] = 0xf;
			} else {
				local_68 = (double)CONCAT44(0x43300000, uVar21 + 2 ^ 0x80000000);
				puVar34[2] = (char)(int)(dVar39 + (dVar38 * (local_68 - dVar37)) / dVar41);
			}
			if (iVar10 < (int)(uVar21 + 3)) {
				puVar34[3] = 0xf;
			} else {
				local_68 = (double)CONCAT44(0x43300000, uVar21 + 3 ^ 0x80000000);
				puVar34[3] = (char)(int)(dVar39 + (dVar38 * (local_68 - dVar37)) / dVar41);
			}
			puVar34 = puVar34 + 4;
			uVar21 = uVar21 + 4;
			lVar9 = lVar9 + -1;
		} while (lVar9 != 0);
		iVar3 = iVar3 + 1;
		puVar33 = puVar33 + 0x80;
	} while (iVar3 < 0x10);
	iVar3 = 0;
	dVar37 = *(double *)(iVar6 + -0x4a30);
	dVar38 = *(double *)(iVar6 + -19000);
	iVar10 = 0;
	dVar39 = *(double *)(iVar6 + -0x4a20);
	do {
		iVar19 = 0;
		iVar6 = iVar10 << 8;
		do {
			puVar33 = &DAT_101acaec + iVar6;
			iVar26 = 0;
			iVar32 = 0;
			do {
				iVar29 = 0;
				iVar35 = 0;
				puVar34 = puVar33;
				do {
					local_70 = (double)CONCAT44(0x43300000,
					    (iVar35 - iVar19) * (iVar35 - iVar19) + (iVar32 - iVar3) * (iVar32 - iVar3) ^ 0x80000000);
					dVar40 = sqrt(local_70 - dVar37);
					local_68 = (double)(longlong)(int)dVar40;
					local_78 = (double)CONCAT44(0x43300000, (int)dVar40 & 0xff);
					if (dVar39 <= local_78 - dVar38) {
						dVar40 = *(double *)((int)uVar5 + -0x4a10);
					} else {
						dVar40 = *(double *)((int)uVar5 + -0x4a28);
					}
					iVar29 = iVar29 + 1;
					iVar35 = iVar35 + 8;
					iVar1 = (int)((local_78 - dVar38) + dVar40);
					local_78 = (double)(longlong)iVar1;
					*puVar34 = (char)iVar1;
					puVar34 = puVar34 + 1;
				} while (iVar29 < 0x10);
				iVar26 = iVar26 + 1;
				iVar32 = iVar32 + 8;
				puVar33 = puVar33 + 0x10;
			} while (iVar26 < 0x10);
			iVar19 = iVar19 + 1;
			iVar6 = iVar6 + 0x100;
		} while (iVar19 < 8);
		iVar3 = iVar3 + 1;
		iVar10 = iVar10 + 8;
	} while (iVar3 < 8);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void InitLightMax(void)

{
	if (_DAT_10129140 != 0) {
		DAT_101b2024 = 3;
		return;
	}
	DAT_101b2024 = 0xf;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void InitLighting(void)

{
	_DAT_101b1978 = 0;
	_DAT_101b197c = 0;
	DAT_101b1980 = 0;
	uRam101b1981 = 1;
	uRam101b1982 = 2;
	uRam101b1983 = 3;
	uRam101b1984 = 4;
	uRam101b1985 = 5;
	uRam101b1986 = 6;
	uRam101b1987 = 7;
	uRam101b1988 = 8;
	uRam101b1989 = 9;
	uRam101b198a = 10;
	uRam101b198b = 0xb;
	uRam101b198c = 0xc;
	uRam101b198d = 0xd;
	uRam101b198e = 0xe;
	uRam101b198f = 0xf;
	uRam101b1990 = 0x10;
	uRam101b1991 = 0x11;
	uRam101b1992 = 0x12;
	uRam101b1993 = 0x13;
	uRam101b1994 = 0x14;
	uRam101b1995 = 0x15;
	uRam101b1996 = 0x16;
	uRam101b1997 = 0x17;
	uRam101b1998 = 0x18;
	uRam101b1999 = 0x19;
	uRam101b199a = 0x1a;
	uRam101b199b = 0x1b;
	uRam101b199c = 0x1c;
	uRam101b199d = 0x1d;
	uRam101b199e = 0x1e;
	uRam101b199f = 0x1f;
	_DAT_101b2020 = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int AddLight(int x, int y, int r)

{
	byte bVar1;
	undefined **ppuVar2;
	uint uVar3;

	ppuVar2 = PTR_DAT_100f1e90;
	if (_DAT_101b2020 != 0) {
		return -1;
	}
	uVar3 = 0xffffffff;
	if (_DAT_101b197c < 0x20) {
		bVar1 = (&DAT_101b1980)[_DAT_101b197c];
		uVar3 = (uint)bVar1;
		_DAT_101b197c = _DAT_101b197c + 1;
		*(int *)(PTR_DAT_100f1e90 + (uint)bVar1 * 0xd) = x;
		ppuVar2 = ppuVar2 + (uint)bVar1 * 0xd;
		*(int *)(ppuVar2 + 1) = y;
		*(int *)(ppuVar2 + 2) = r;
		ppuVar2[10] = (undefined *)0x0;
		ppuVar2[0xb] = (undefined *)0x0;
		ppuVar2[4] = (undefined *)0x0;
		ppuVar2[5] = (undefined *)0x0;
		_DAT_101b1978 = 1;
	}
	return (int)uVar3;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddUnLight(int i)

{
	if (_DAT_101b2020 != 0) {
		return;
	}
	if (i == -1) {
		return;
	}
	PTR_DAT_100f1e90[i * 0xd + 4] = &DAT_00000001;
	_DAT_101b1978 = 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ChangeLightRadius(int i, int r)

{
	undefined **ppuVar1;
	undefined **ppuVar2;

	ppuVar1 = PTR_DAT_100f1e90;
	if (_DAT_101b2020 != 0) {
		return;
	}
	if (i == -1) {
		return;
	}
	ppuVar2 = PTR_DAT_100f1e90 + i * 0xd;
	ppuVar2[5] = &DAT_00000001;
	ppuVar2[7] = ppuVar1[i * 0xd];
	ppuVar2[8] = ppuVar2[1];
	ppuVar2[9] = ppuVar2[2];
	*(int *)(ppuVar2 + 2) = r;
	_DAT_101b1978 = 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ChangeLightXY(int i, int x, int y)

{
	undefined **ppuVar1;

	if (_DAT_101b2020 != 0) {
		return;
	}
	if (i == -1) {
		return;
	}
	ppuVar1 = PTR_DAT_100f1e90 + i * 0xd;
	ppuVar1[5] = &DAT_00000001;
	ppuVar1[7] = *ppuVar1;
	ppuVar1[8] = ppuVar1[1];
	ppuVar1[9] = ppuVar1[2];
	*(int *)ppuVar1 = x;
	*(int *)(ppuVar1 + 1) = y;
	_DAT_101b1978 = 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ChangeLightOff(int i, int x, int y)

{
	undefined **ppuVar1;
	undefined **ppuVar2;

	ppuVar1 = PTR_DAT_100f1e90;
	if (_DAT_101b2020 != 0) {
		return;
	}
	if (i == -1) {
		return;
	}
	ppuVar2 = PTR_DAT_100f1e90 + i * 0xd;
	ppuVar2[5] = &DAT_00000001;
	ppuVar2[7] = ppuVar1[i * 0xd];
	ppuVar2[8] = ppuVar2[1];
	ppuVar2[9] = ppuVar2[2];
	*(int *)(ppuVar2 + 10) = x;
	*(int *)(ppuVar2 + 0xb) = y;
	_DAT_101b1978 = 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ChangeLight(int i, int x, int y, int r)

{
	undefined **ppuVar1;

	if (_DAT_101b2020 != 0) {
		return;
	}
	if (i == -1) {
		return;
	}
	ppuVar1 = PTR_DAT_100f1e90 + i * 0xd;
	ppuVar1[5] = &DAT_00000001;
	ppuVar1[7] = *ppuVar1;
	ppuVar1[8] = ppuVar1[1];
	ppuVar1[9] = ppuVar1[2];
	*(int *)ppuVar1 = x;
	*(int *)(ppuVar1 + 1) = y;
	*(int *)(ppuVar1 + 2) = r;
	_DAT_101b1978 = 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ProcessLightList(void)

{
	byte bVar1;
	undefined **ppuVar2;
	byte *pbVar3;
	undefined **ppuVar4;
	int iVar5;
	byte *pbVar6;

	ppuVar2 = PTR_DAT_100f1e90;
	pbVar3 = &DAT_101b1980;
	if (_DAT_101b2020 == 0) {
		if (_DAT_101b1978 != 0) {
			iVar5 = 0;
			pbVar6 = pbVar3;
			while (iVar5 < _DAT_101b197c) {
				bVar1 = *pbVar6;
				if (ppuVar2[(uint)bVar1 * 0xd + 4] != (undefined *)0x0) {
					ppuVar4 = ppuVar2 + (uint)bVar1 * 0xd;
					DoUnLight((int)*ppuVar4, (int)ppuVar4[1], (int)ppuVar4[2]);
				}
				ppuVar4 = ppuVar2 + (uint)bVar1 * 0xd;
				if (ppuVar4[5] != (undefined *)0x0) {
					DoUnLight((int)ppuVar4[7], (int)ppuVar4[8], (int)ppuVar4[9]);
					ppuVar4[5] = (undefined *)0x0;
				}
				pbVar6 = pbVar6 + 1;
				iVar5 = iVar5 + 1;
			}
			iVar5 = 0;
			pbVar6 = pbVar3;
			while (true) {
				if (_DAT_101b197c <= iVar5)
					break;
				bVar1 = *pbVar6;
				if (ppuVar2[(uint)bVar1 * 0xd + 4] == (undefined *)0x0) {
					ppuVar4 = ppuVar2 + (uint)bVar1 * 0xd;
					DoLighting((int)*ppuVar4, (int)ppuVar4[1], (int)ppuVar4[2], (uint)bVar1);
				}
				pbVar6 = pbVar6 + 1;
				iVar5 = iVar5 + 1;
			}
			pbVar6 = &DAT_101b1980 + _DAT_101b197c;
			iVar5 = 0;
			while (iVar5 < _DAT_101b197c) {
				if (ppuVar2[(uint)*pbVar3 * 0xd + 4] == (undefined *)0x0) {
					pbVar3 = pbVar3 + 1;
					iVar5 = iVar5 + 1;
				} else {
					bVar1 = *(byte *)(_DAT_101b197c + 0x101b197f);
					pbVar6 = pbVar6 + -1;
					_DAT_101b197c = _DAT_101b197c + -1;
					*pbVar6 = *pbVar3;
					*pbVar3 = bVar1;
				}
			}
		}
		_DAT_101b1978 = 0;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SavePreLighting(void)

{
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	CopyMemory((char)_DAT_1012f1c0, (char)_DAT_1012f1c4, 0, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffcb,
	    in_stack_ffffffcf, local_2c);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void InitVision(void)

{
	ulonglong uVar1;
	longlong lVar2;
	longlong lVar3;
	undefined *puVar4;
	longlong lVar5;

	_DAT_101b12f4 = 0;
	lVar5 = 0;
	_DAT_101b12f0 = 0;
	_DAT_101b12ec = 1;
	puVar4 = &DAT_1012f1d8;
	if (DAT_1012f2d8 < '\x01') {
		_DAT_101b12ec = 1;
		_DAT_101b12f0 = 0;
		_DAT_101b12f4 = 0;
		return;
	}
	if (('\b' < DAT_1012f2d8) && (uVar1 = (ulonglong)((int)DAT_1012f2d8 - 1U >> 3), 0 < (int)DAT_1012f2d8 + -8)) {
		do {
			*puVar4 = 0;
			lVar5 = lVar5 + 8;
			puVar4[1] = 0;
			puVar4[2] = 0;
			puVar4[3] = 0;
			puVar4[4] = 0;
			puVar4[5] = 0;
			puVar4[6] = 0;
			puVar4[7] = 0;
			puVar4 = puVar4 + 8;
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
	}
	lVar3 = ZEXT48(&DAT_1012f1d8) + lVar5;
	lVar2 = (longlong)DAT_1012f2d8 - lVar5;
	if ((int)lVar5 < (int)DAT_1012f2d8) {
		do {
			*(undefined *)lVar3 = 0;
			lVar3 = lVar3 + 1;
			lVar2 = lVar2 + -1;
		} while (lVar2 != 0);
		return;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int AddVision(int x, int y, int r, BOOL mine)

{
	int iVar1;
	int iVar2;
	int iVar3;

	if (0x1f < _DAT_101b12f4) {
		return x;
	}
	iVar3 = _DAT_101b12f4 * 0x34;
	*(int *)(&DAT_101b12f8 + iVar3) = x;
	*(int *)(iVar3 + 0x101b12fc) = y;
	*(int *)(iVar3 + 0x101b1300) = r;
	iVar1 = _DAT_101b12ec;
	iVar2 = _DAT_101b12ec + 1;
	*(int *)(iVar3 + 0x101b1304) = _DAT_101b12ec;
	_DAT_101b12ec = iVar2;
	*(undefined4 *)(iVar3 + 0x101b1308) = 0;
	*(undefined4 *)(iVar3 + 0x101b130c) = 0;
	*(uint *)(iVar3 + 0x101b1328) = (uint)(mine != 0);
	_DAT_101b12f0 = 1;
	_DAT_101b12f4 = _DAT_101b12f4 + 1;
	return iVar1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ChangeVisionRadius(int id, int r)

{
	ulonglong uVar1;
	undefined4 *puVar2;

	uVar1 = (ulonglong)_DAT_101b12f4;
	puVar2 = (undefined4 *)&DAT_101b12f8;
	if ((int)_DAT_101b12f4 < 1) {
		return;
	}
	do {
		if (id == puVar2[3]) {
			puVar2[5] = 1;
			puVar2[7] = *puVar2;
			puVar2[8] = puVar2[1];
			puVar2[9] = puVar2[2];
			puVar2[2] = r;
			_DAT_101b12f0 = 1;
		}
		puVar2 = puVar2 + 0xd;
		uVar1 = uVar1 - 1;
	} while (uVar1 != 0);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ChangeVisionXY(int id, int x, int y)

{
	ulonglong uVar1;
	int *piVar2;

	uVar1 = (ulonglong)_DAT_101b12f4;
	piVar2 = (int *)&DAT_101b12f8;
	if ((int)_DAT_101b12f4 < 1) {
		return;
	}
	do {
		if (id == piVar2[3]) {
			piVar2[5] = 1;
			piVar2[7] = *piVar2;
			piVar2[8] = piVar2[1];
			piVar2[9] = piVar2[2];
			*piVar2 = x;
			piVar2[1] = y;
			_DAT_101b12f0 = 1;
		}
		piVar2 = piVar2 + 0xd;
		uVar1 = uVar1 - 1;
	} while (uVar1 != 0);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ProcessVisionList(void)

{
	int iVar1;
	bool bVar2;
	ulonglong uVar3;
	longlong lVar4;
	longlong lVar5;
	int *piVar6;
	undefined *puVar7;
	longlong lVar8;
	int iVar9;
	int *piVar10;

	puVar7 = &DAT_1012f1d8;
	if (_DAT_101b12f0 != 0) {
		iVar9 = 0;
		piVar10 = (int *)&DAT_101b12f8;
		while (iVar9 < _DAT_101b12f4) {
			if (piVar10[4] != 0) {
				DoUnVision(*piVar10, piVar10[1], piVar10[2]);
			}
			if (piVar10[5] != 0) {
				DoUnVision(piVar10[7], piVar10[8], piVar10[9]);
				piVar10[5] = 0;
			}
			piVar10 = piVar10 + 0xd;
			iVar9 = iVar9 + 1;
		}
		lVar8 = 0;
		if ('\0' < DAT_1012f2d8) {
			if (('\b' < DAT_1012f2d8) && (uVar3 = (ulonglong)((int)DAT_1012f2d8 - 1U >> 3), 0 < (int)DAT_1012f2d8 + -8)) {
				do {
					*puVar7 = 0;
					lVar8 = lVar8 + 8;
					puVar7[1] = 0;
					puVar7[2] = 0;
					puVar7[3] = 0;
					puVar7[4] = 0;
					puVar7[5] = 0;
					puVar7[6] = 0;
					puVar7[7] = 0;
					puVar7 = puVar7 + 8;
					uVar3 = uVar3 - 1;
				} while (uVar3 != 0);
			}
			lVar5 = ZEXT48(&DAT_1012f1d8) + lVar8;
			lVar4 = (longlong)DAT_1012f2d8 - lVar8;
			if ((int)lVar8 < (int)DAT_1012f2d8) {
				do {
					*(undefined *)lVar5 = 0;
					lVar5 = lVar5 + 1;
					lVar4 = lVar4 + -1;
				} while (lVar4 != 0);
			}
		}
		iVar9 = 0;
		piVar10 = (int *)&DAT_101b12f8;
		while (iVar9 < _DAT_101b12f4) {
			if (piVar10[4] == 0) {
				DoVision(*piVar10, piVar10[1], piVar10[2], piVar10[0xc] & 1U, piVar10[0xc] & 1U);
			}
			piVar10 = piVar10 + 0xd;
			iVar9 = iVar9 + 1;
		}
		piVar10 = (int *)(&DAT_101b12f8 + _DAT_101b12f4 * 0x34);
		do {
			bVar2 = false;
			iVar9 = 0;
			piVar6 = (int *)&DAT_101b12f8;
			while (iVar9 < _DAT_101b12f4) {
				if (piVar6[4] != 0) {
					_DAT_101b12f4 = _DAT_101b12f4 + -1;
					if ((0 < _DAT_101b12f4) && (iVar9 != _DAT_101b12f4)) {
						iVar1 = piVar10[-0xc];
						*piVar6 = piVar10[-0xd];
						piVar6[1] = iVar1;
						iVar1 = piVar10[-10];
						piVar6[2] = piVar10[-0xb];
						piVar6[3] = iVar1;
						iVar1 = piVar10[-8];
						piVar6[4] = piVar10[-9];
						piVar6[5] = iVar1;
						iVar1 = piVar10[-6];
						piVar6[6] = piVar10[-7];
						piVar6[7] = iVar1;
						iVar1 = piVar10[-4];
						piVar6[8] = piVar10[-5];
						piVar6[9] = iVar1;
						iVar1 = piVar10[-2];
						piVar6[10] = piVar10[-3];
						piVar6[0xb] = iVar1;
						piVar6[0xc] = piVar10[-1];
					}
					bVar2 = true;
					piVar10 = piVar10 + -0xd;
				}
				piVar6 = piVar6 + 0xd;
				iVar9 = iVar9 + 1;
			}
		} while (bVar2);
	}
	_DAT_101b12f0 = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void lighting_color_cycling(void)

{
	undefined uVar1;
	undefined *puVar2;
	longlong lVar3;
	int iVar4;
	int iVar5;
	undefined *puVar6;

	if (_DAT_10129140 == 0) {
		iVar5 = 0x10;
	} else {
		iVar5 = 4;
	}
	if (leveltype != '\x04') {
		return;
	}
	iVar4 = 0;
	puVar6 = _DAT_101b2028;
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
