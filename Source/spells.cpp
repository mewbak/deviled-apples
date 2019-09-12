
longlong GetManaAmount(int param_1, int param_2)

{
	ulonglong uVar1;
	int iVar2;
	uint uVar3;
	longlong lVar4;
	int iVar5;
	ulonglong uVar6;
	int iVar7;
	ulonglong uVar8;
	ulonglong uVar9;

	param_1 = param_1 * 0x55ec;
	lVar4 = 0;
	iVar5 = 0;
	uVar1 = (longlong)(char)(PTR_DAT_100f1828 + param_1)[param_2 + 0xc1] + (longlong)(char)(PTR_DAT_100f1828 + param_1)[0x5570] + -1;
	if ((longlong)uVar1 < 0) {
		uVar1 = 0;
	}
	iVar2 = param_2 * 0x38;
	uVar3 = (uint)uVar1;
	uVar9 = (ulonglong)(byte)(PTR_DAT_100f1934 + iVar2)[0x24];
	if (0 < (int)uVar3) {
		uVar6 = (ulonglong)(uVar3 >> 3);
		uVar8 = uVar1;
		if (uVar3 >> 3 != 0) {
			do {
				lVar4 = lVar4 + uVar9 * 8;
				iVar5 = (int)lVar4;
				uVar6 = uVar6 - 1;
			} while (uVar6 != 0);
			uVar8 = uVar1 & 7;
			if (uVar8 == 0)
				goto LAB_100a50e4;
		}
		do {
			lVar4 = lVar4 + uVar9;
			iVar5 = (int)lVar4;
			uVar8 = uVar8 - 1;
		} while (uVar8 != 0);
	}
LAB_100a50e4:
	if (param_2 == 1) {
		iVar5 = iVar5 >> 1;
	}
	if ((param_2 == 0x20) && (0 < (int)uVar3)) {
		iVar7 = (int)(uint)(byte)(PTR_DAT_100f1934 + iVar2)[1] >> 3;
		iVar5 = 0;
		if (0 < (int)uVar3) {
			uVar8 = (ulonglong)(uVar3 >> 3);
			uVar9 = uVar1;
			iVar5 = 0;
			if (uVar3 >> 3 != 0) {
				do {
					iVar5 = iVar5 + iVar7 * 8;
					uVar8 = uVar8 - 1;
				} while (uVar8 != 0);
				uVar9 = uVar1 & 7;
				if (uVar9 == 0)
					goto LAB_100a5158;
			}
			do {
				iVar5 = iVar5 + iVar7;
				uVar9 = uVar9 - 1;
			} while (uVar9 != 0);
		}
	}
LAB_100a5158:
	if (PTR_DAT_100f1934[iVar2 + 1] == 0xff) {
		iVar7 = (*(uint *)(PTR_DAT_100f1828 + param_1 + 0x1a4) & 0xff) - iVar5;
	} else {
		iVar7 = (uint)(byte)PTR_DAT_100f1934[iVar2 + 1] - iVar5;
	}
	if (param_2 == 2) {
		iVar7 = ((uint)(byte)PTR_DAT_100f1934[0x71] + (int)(char)PTR_DAT_100f1828[param_1 + 0x1b4] * 2)
		    - iVar5;
	}
	if (param_2 == 0x22) {
		iVar7 = ((uint)(byte)PTR_DAT_100f1934[0x71] + (int)(char)PTR_DAT_100f1828[param_1 + 0x1b4] * 2)
		    - iVar5;
	}
	iVar7 = iVar7 * 0x40;
	if ((param_2 == 0x20) && (0 < (longlong)uVar1)) {
		uVar9 = (ulonglong)(uVar3 >> 3);
		if (uVar3 >> 3 != 0) {
			do {
				uVar9 = uVar9 - 1;
			} while (uVar9 != 0);
			uVar1 = uVar1 & 7;
			if (uVar1 == 0)
				goto LAB_100a5238;
		}
		do {
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
	}
LAB_100a5238:
	if (PTR_DAT_100f1828[param_1 + 0x15c] == '\x01') {
		iVar7 = iVar7 - (iVar7 >> 2);
	}
	if (iVar7 >> 6 < (int)(uint)(byte)PTR_DAT_100f1934[iVar2 + 0x25]) {
		iVar7 = (uint)(byte)PTR_DAT_100f1934[iVar2 + 0x25] << 6;
	}
	iVar7 = iVar7 * (100 - (int)(char)PTR_DAT_100f1828[param_1 + 0x5571]);
	uVar3 = iVar7 / 100 + (iVar7 >> 0x1f);
	return ((longlong)(int)((ulonglong)((longlong)iVar7 * 0x51eb851f) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar3) + (ulonglong)(uVar3 >> 0x1f);
}

void UseMana(longlong param_1, int param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	char cVar1;
	undefined4 *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	int iVar6;
	longlong lVar5;
	undefined4 in_stack_ffffffc8;

	ppuVar4 = &toc;
	iVar6 = (int)param_1;
	if (iVar6 == *(int *)PTR_DAT_100f1824) {
		puVar3 = PTR_DAT_100f1828 + iVar6 * 0x55ec;
		cVar1 = puVar3[0xa8];
		if (cVar1 == '\x02') {
			RemoveScroll(param_1, (char)param_2, (char)PTR_DAT_100f1824, (char)PTR_DAT_100f1828, param_5,
			    param_6, param_7, param_8, in_stack_ffffffc8);
		} else {
			if (cVar1 < '\x02') {
				if ((cVar1 != '\0') && (-1 < cVar1)) {
					lVar5 = GetManaAmount(iVar6, param_2);
					puVar2 = (undefined4 *)ppuVar4[-0x1dbd];
					*(int *)(puVar3 + 0x1a8) = *(int *)(puVar3 + 0x1a8) - (int)lVar5;
					*(int *)(puVar3 + 0x1a0) = *(int *)(puVar3 + 0x1a0) - (int)lVar5;
					*puVar2 = 1;
				}
			} else {
				if ((cVar1 != '\x04') && (cVar1 < '\x04')) {
					UseStaffCharge(iVar6, (char)param_2, (char)PTR_DAT_100f1824, (char)PTR_DAT_100f1828, param_5,
					    param_6, param_7, param_8, in_stack_ffffffc8);
				}
			}
		}
	}
	return;
}

undefined8
CheckSpell(int param_1, int param_2, char param_3, int param_4, undefined param_5, undefined param_6,
    undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined **ppuVar1;
	undefined8 uVar2;
	longlong lVar3;

	ppuVar1 = &toc;
	if ((param_4 == 0) && (*(int *)PTR_DAT_100f188c != 1)) {
		return 0;
	}
	if (param_3 == '\0') {
		uVar2 = 1;
	} else {
		lVar3 = GetSpellLevel(param_1, param_2);
		if ((int)lVar3 < 1) {
			uVar2 = 0;
		} else {
			lVar3 = GetManaAmount(param_1, param_2);
			if (*(int *)(ppuVar1[-0x1dea] + param_1 * 0x55ec + 0x1a8) < (int)lVar3) {
				uVar2 = 0;
			} else {
				uVar2 = 1;
			}
		}
	}
	return uVar2;
}

void CastSpell(longlong param_1, int param_2, ulonglong param_3, undefined8 param_4,
    ulonglong param_5, undefined8 param_6, longlong param_7, int param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	ulonglong uVar2;
	undefined uVar3;
	undefined8 uVar4;
	undefined uVar5;
	ulonglong uVar6;
	undefined uVar7;
	byte bVar8;
	char cVar9;
	undefined uVar10;
	longlong lVar11;
	undefined uVar12;
	undefined *puVar13;
	int iVar14;
	ulonglong unaff_r31;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;

	puVar1 = PTR_DAT_100f1934;
	cVar9 = (char)param_7;
	lVar11 = (longlong)param_8;
	iVar14 = (int)param_7;
	if (iVar14 == 1) {
		unaff_r31 = (ulonglong) * (uint *)(PTR_DAT_100f187c + (int)param_1 * 0xe8 + 0x48);
	} else {
		if ((iVar14 < 1) && (-1 < iVar14)) {
			unaff_r31 = (ulonglong) * (uint *)(PTR_DAT_100f1828 + (int)param_1 * 0x55ec + 0x70);
			cVar9 = '\0';
			if (param_2 == 6) {
				unaff_r31 = (ulonglong) * (uint *)(PTR_DAT_100f1828 + (int)param_1 * 0x55ec + 0x1d8);
			}
		}
	}
	puVar13 = PTR_DAT_100f1934 + param_2 * 0x38;
	iVar14 = 0;
	uVar2 = param_3;
	uVar4 = param_4;
	uVar6 = param_5;
	while (true) {
		uVar12 = (undefined)lVar11;
		uVar10 = (undefined)param_7;
		uVar7 = (undefined)uVar6;
		uVar5 = (undefined)uVar4;
		uVar3 = (undefined)uVar2;
		bVar8 = puVar13[0x21];
		if ((bVar8 == 0) || (2 < iVar14))
			break;
		param_7 = (longlong)cVar9;
		uVar2 = param_5;
		uVar4 = param_6;
		uVar6 = unaff_r31;
		lVar11 = param_1;
		AddMissile(param_3, param_4, param_5, param_6, unaff_r31, (uint)bVar8, param_7, param_1,
		    in_stack_ffffff88, in_stack_ffffff8f, 0, param_8);
		puVar13 = puVar13 + 1;
		iVar14 = iVar14 + 1;
	}
	if (puVar1[param_2 * 0x38 + 0x21] == '\n') {
		UseMana(param_1, 7, uVar3, uVar5, uVar7, bVar8, uVar10, uVar12, in_stack_ffffff88);
	}
	if (puVar1[param_2 * 0x38 + 0x21] == '4') {
		UseMana(param_1, 0x1e, uVar3, uVar5, uVar7, bVar8, uVar10, uVar12, in_stack_ffffff88);
		iVar14 = (param_8 >> 1) + 3;
		while (0 < iVar14) {
			AddMissile(param_3, param_4, param_5, param_6, unaff_r31, 0x34, (longlong)cVar9, param_1,
			    in_stack_ffffff88, in_stack_ffffff8f, 0, param_8);
			iVar14 = iVar14 + -1;
		}
	}
	return;
}

void PlacePlayer(undefined8 param_1, undefined param_2, undefined param_3, undefined param_4,
    char param_5, char param_6, char param_7, char param_8, undefined4 param_9)

{
	int *piVar1;
	int *piVar2;
	undefined *puVar3;
	bool bVar4;
	int iVar5;
	undefined *puVar6;
	ulonglong uVar7;
	int iVar8;
	undefined8 uVar9;
	int iVar10;
	ulonglong uVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	longlong lVar15;
	longlong lVar16;
	longlong lVar17;
	uint uVar18;
	uint *puVar19;
	uint *puVar21;
	longlong lVar20;
	int iVar22;
	longlong lVar23;
	longlong lVar24;
	undefined4 in_stack_ffffff98;

	puVar6 = PTR_DAT_100f1828;
	lVar15 = (longlong)param_8;
	lVar14 = (longlong)param_7;
	lVar13 = (longlong)param_6;
	lVar12 = (longlong)param_5;
	uVar7 = ZEXT48(&toc);
	iVar5 = (int)param_1;
	puVar3 = PTR_DAT_100f1828 + iVar5 * 0x55ec;
	if ((uint)(byte)*PTR_DAT_100f17ec == *(uint *)(puVar3 + 0x34)) {
		uVar18 = 0;
		puVar21 = _DAT_100f2048;
		puVar19 = (uint *)PTR_DAT_100f204c;
		do {
			uVar11 = (ulonglong) * (uint *)(puVar3 + 0x38);
			lVar24 = uVar11 + (ulonglong)*puVar21;
			lVar24._4_4_ = (int)lVar24;
			lVar23 = (ulonglong) * (uint *)(puVar3 + 0x3c) + (ulonglong)*puVar19;
			iVar10 = (int)lVar23;
			uVar9 = PosOkPlayer(iVar5, lVar24, iVar10, (char)*(uint *)(puVar3 + 0x38), (char)lVar12,
			    (char)lVar13, (char)lVar14, (char)lVar15, in_stack_ffffff98);
			if ((int)uVar9 != 0)
				break;
			uVar18 = uVar18 + 1;
			puVar19 = puVar19 + 1;
			puVar21 = puVar21 + 1;
		} while (uVar18 < 8);
		uVar9 = PosOkPlayer(iVar5, lVar24, iVar10, (char)uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
		    (char)lVar15, in_stack_ffffff98);
		iVar8 = (int)uVar7;
		if ((int)uVar9 == 0) {
			bVar4 = false;
			lVar20 = 1;
			while (true) {
				iVar8 = (int)uVar7;
				lVar24._4_4_ = (int)lVar24;
				iVar10 = (int)lVar23;
				iVar22 = (int)lVar20;
				if ((0x31 < iVar22) || (bVar4))
					break;
				lVar17 = -lVar20;
				while (((int)lVar17 <= iVar22 && (!bVar4))) {
					lVar23 = lVar17 + (ulonglong) * (uint *)(puVar3 + 0x3c);
					lVar16 = -lVar20;
					while (((int)lVar16 <= iVar22 && (!bVar4))) {
						lVar24 = lVar16 + (ulonglong) * (uint *)(puVar3 + 0x38);
						uVar9 = PosOkPlayer(iVar5, lVar24, (int)lVar23, (char)uVar11, (char)lVar12, (char)lVar13,
						    (char)lVar14, (char)lVar15, in_stack_ffffff98);
						if ((int)uVar9 != 0) {
							bVar4 = true;
						}
						lVar16 = lVar16 + 1;
					}
					lVar17 = lVar17 + 1;
				}
				lVar20 = lVar20 + 1;
			}
		}
		piVar1 = *(int **)(iVar8 + -0x7680);
		*(int *)(puVar6 + iVar5 * 0x55ec + 0x38) = lVar24._4_4_;
		piVar2 = *(int **)(iVar8 + -0x77ac);
		*(int *)(puVar6 + iVar5 * 0x55ec + 0x3c) = iVar10;
		*(char *)(*piVar1 + lVar24._4_4_ * 0x70 + iVar10) = (char)param_1 + '\x01';
		if (iVar5 == *piVar2) {
			piVar1 = *(int **)(iVar8 + -0x77b4);
			**(int **)(iVar8 + -0x77b0) = lVar24._4_4_;
			*piVar1 = iVar10;
		}
	}
	return;
}

void DoResurrect(ulonglong param_1, ulonglong param_2, ulonglong param_3, ulonglong param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	undefined *puVar5;
	undefined **ppuVar6;
	ulonglong uVar7;
	undefined uVar9;
	int iVar8;
	ulonglong uVar10;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;

	puVar5 = PTR_DAT_100f1828;
	puVar2 = PTR_DAT_100f1824;
	ppuVar6 = &toc;
	iVar8 = (int)param_2;
	uVar7 = param_2;
	if ((char)param_2 != -1) {
		uVar7 = (ulonglong) * (uint *)(PTR_DAT_100f1828 + iVar8 * 0x55ec + 0x3c);
		param_3 = (ulonglong) * (uint *)(PTR_DAT_100f1828 + iVar8 * 0x55ec + 0x38);
		param_5 = 0;
		param_6 = 0x3e;
		param_7 = 0;
		param_4 = uVar7;
		param_8 = param_1;
		ppuVar6 = &toc;
		AddMissile(param_3, uVar7, param_3, uVar7, 0, 0x3e, 0, param_1, in_stack_ffffffa8, in_stack_ffffffaf, 0,
		    0);
	}
	if ((int)param_1 == *(int *)puVar2) {
		NewCursor(1, (char)uVar7, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffa8);
	}
	if ((char)param_2 != -1) {
		iVar4 = iVar8 * 0x55ec;
		if (*(int *)(puVar5 + iVar4 + 0x194) == 0) {
			if (iVar8 == *(int *)puVar2) {
				puVar1 = (undefined4 *)ppuVar6[-0x1d73];
				*puVar1 = 0;
				gamemenu_off((char)puVar1, (char)uVar7, (char)param_3, (char)param_4, (char)param_5,
				    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffa8);
				uVar7 = ZEXT48(ppuVar6[-0x1dbc]);
				puVar1 = (undefined4 *)ppuVar6[-0x1dbd];
				*(undefined4 *)ppuVar6[-0x1dbc] = 1;
				*puVar1 = 1;
			}
			uVar9 = (undefined)uVar7;
			ClrPlrPath(param_2, uVar7, param_3, param_4, param_5, (int)param_6, (int)param_7, (int)param_8,
			    in_stack_ffffffa8);
			puVar2 = puVar5 + iVar4;
			*(undefined4 *)(puVar2 + 0x20) = 0xffffffff;
			puVar2[0x139] = 0;
			PlacePlayer(param_2, uVar9, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
			    (char)param_7, (char)param_8, in_stack_ffffffa8);
			iVar8 = 0x280;
			if (*(int *)(puVar2 + 400) < 0x280) {
				iVar8 = *(int *)(puVar2 + 400);
			}
			SetPlayerHitPoints(param_2, iVar8, param_3, param_4, param_5, (int)param_6, (int)param_7, (int)param_8,
			    in_stack_ffffffa8);
			puVar3 = puVar5 + iVar4;
			*(int *)(puVar3 + 0x18c) = *(int *)(puVar5 + iVar4 + 0x194) - (*(int *)(puVar3 + 0x198) - *(int *)(puVar2 + 400));
			*(undefined4 *)(puVar3 + 0x1a8) = 0;
			uVar10 = (ulonglong) * (uint *)(puVar3 + 0x1a4);
			uVar7 = (ulonglong) * (uint *)(puVar3 + 0x1ac) - uVar10;
			*(int *)(puVar3 + 0x1a0) = *(int *)(puVar3 + 0x1a8) - (int)uVar7;
			CalcPlrInv(param_2, 1, uVar7, uVar10, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
			if ((uint)(byte)*ppuVar6[-0x1df9] == *(uint *)(puVar3 + 0x34)) {
				StartStand(param_2, (ulonglong) * (uint *)(puVar3 + 0x70), uVar7, uVar10, param_5, param_6,
				    param_7, param_8, in_stack_ffffffa8);
			} else {
				*(undefined4 *)(puVar5 + iVar4) = 0;
			}
		}
	}
	return;
}

void DoHealOther(int param_1, undefined8 param_2, undefined param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	int iVar2;
	undefined *puVar3;
	ulonglong uVar4;
	longlong lVar5;
	ulonglong uVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	int iVar12;
	int iVar13;
	int *piVar14;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	puVar3 = PTR_DAT_100f1828;
	lVar11 = (longlong)param_8;
	lVar10 = (longlong)param_7;
	lVar9 = (longlong)param_6;
	lVar8 = (longlong)param_5;
	lVar7 = (longlong)param_4;
	uVar4 = ZEXT48(&toc);
	uVar6 = ZEXT48(PTR_DAT_100f1824);
	if (param_1 == *(int *)PTR_DAT_100f1824) {
		NewCursor(1, (char)param_2, (char)PTR_DAT_100f1824, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
	}
	if ((char)param_2 != -1) {
		iVar2 = (int)param_2 * 0x55ec;
		piVar14 = (int *)(puVar3 + iVar2 + 0x194);
		if (*(int *)(puVar3 + iVar2 + 0x194) >> 6 != 0) {
			lVar5 = random(0x39, 10, (char)uVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10,
			    (char)lVar11, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
			iVar13 = ((int)lVar5 + 1) * 0x40;
			iVar12 = 0;
			while (iVar12 < (int)(char)puVar3[param_1 * 0x55ec + 0x1b4]) {
				lVar5 = random(0x39, 4, (char)uVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10,
				    (char)lVar11, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
				iVar12 = iVar12 + 1;
				iVar13 = iVar13 + ((int)lVar5 + 1) * 0x40;
			}
			iVar12 = 0;
			while (true) {
				lVar5 = GetSpellLevel(param_1, 0x22);
				if ((int)lVar5 <= iVar12)
					break;
				lVar5 = random(0x39, 6, (char)uVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10,
				    (char)lVar11, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
				iVar12 = iVar12 + 1;
				iVar13 = iVar13 + ((int)lVar5 + 1) * 0x40;
			}
			if (puVar3[param_1 * 0x55ec + 0x15c] == '\0') {
				iVar13 = iVar13 << 1;
			}
			if (puVar3[param_1 * 0x55ec + 0x15c] == '\x01') {
				iVar13 = iVar13 + (iVar13 >> 1);
			}
			*piVar14 = *piVar14 + iVar13;
			if (*(int *)(puVar3 + iVar2 + 0x198) < *piVar14) {
				*piVar14 = *(int *)(puVar3 + iVar2 + 0x198);
			}
			puVar1 = puVar3 + iVar2;
			*(int *)(puVar1 + 0x18c) = *(int *)(puVar1 + 0x18c) + iVar13;
			if (*(int *)(puVar3 + iVar2 + 400) < *(int *)(puVar1 + 0x18c)) {
				*(int *)(puVar1 + 0x18c) = *(int *)(puVar3 + iVar2 + 400);
			}
			**(undefined4 **)((int)uVar4 + -0x76f0) = 1;
		}
	}
	return;
}
