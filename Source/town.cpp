
void town_clear_upper_buf(undefined *param_1)

{
	undefined *puVar1;
	longlong lVar2;
	int iVar3;
	int iVar4;
	longlong lVar5;

	puVar1 = PTR_DAT_100f17c8;
	lVar5 = 4;
	iVar3 = 0x1e;
	do {
		if (param_1 < *(undefined **)puVar1) {
			return;
		}
		param_1 = param_1 + iVar3;
		lVar2 = lVar5;
		do {
			lVar2 = lVar2 + -1;
			*param_1 = 0;
			param_1 = param_1 + 1;
		} while (lVar2 != 0);
		lVar5 = lVar5 + 4;
		iVar4 = iVar3 + -2;
		param_1 = param_1 + iVar3 + -0x340;
		iVar3 = iVar4;
	} while (iVar4 != 0);
	lVar5 = 0x3c;
	iVar3 = 2;
	do {
		if (param_1 < *(undefined **)puVar1) {
			return;
		}
		param_1 = param_1 + iVar3;
		lVar2 = lVar5;
		do {
			lVar2 = lVar2 + -1;
			*param_1 = 0;
			param_1 = param_1 + 1;
		} while (lVar2 != 0);
		iVar4 = iVar3 + 2;
		param_1 = param_1 + iVar3 + -0x340;
		lVar5 = lVar5 + -4;
		iVar3 = iVar4;
	} while (iVar4 != 0x20);
	return;
}

void town_clear_low_buf(undefined *param_1)

{
	undefined *puVar1;
	longlong lVar2;
	int iVar3;
	longlong lVar4;

	puVar1 = PTR_DAT_100f17c8;
	iVar3 = 0x1e;
	lVar4 = 4;
	do {
		if (param_1 < *(undefined **)puVar1) {
			param_1 = param_1 + iVar3;
			lVar2 = lVar4;
			do {
				lVar2 = lVar2 + -1;
				*param_1 = 0;
				param_1 = param_1 + 1;
			} while (lVar2 != 0);
			param_1 = param_1 + iVar3;
		} else {
			param_1 = param_1 + 0x40;
		}
		iVar3 = iVar3 + -2;
		lVar4 = lVar4 + 4;
		param_1 = param_1 + -0x340;
	} while (iVar3 != 0);
	iVar3 = 2;
	lVar4 = 0x3c;
	do {
		if (param_1 < *(undefined **)puVar1) {
			param_1 = param_1 + iVar3;
			lVar2 = lVar4;
			do {
				lVar2 = lVar2 + -1;
				*param_1 = 0;
				param_1 = param_1 + 1;
			} while (lVar2 != 0);
			param_1 = param_1 + iVar3;
		} else {
			param_1 = param_1 + 0x40;
		}
		iVar3 = iVar3 + 2;
		lVar4 = lVar4 + -4;
		param_1 = param_1 + -0x340;
	} while (iVar3 != 0x20);
	return;
}

void town_special_lower(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined param_9, undefined param_10, undefined4 param_11, undefined4 param_12)

{
	return;
}

void town_special_upper(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined param_9, undefined param_10, undefined4 param_11, undefined4 param_12)

{
	return;
}

void town_draw_clipped_e_flag(longlong param_1, longlong param_2, ulonglong param_3, ulonglong param_4,
    ulonglong param_5, char param_6, char param_7, char param_8, undefined4 param_9)

{
	ushort uVar1;
	uint *puVar2;
	undefined **ppuVar3;
	longlong lVar4;
	ulonglong uVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	ulonglong uVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	int iVar12;
	ushort *puVar13;
	undefined4 in_stack_ffffffa8;

	puVar2 = _DAT_100f2080;
	lVar11 = (longlong)param_8;
	lVar10 = (longlong)param_7;
	lVar9 = (longlong)param_6;
	ppuVar3 = &toc;
	uVar6 = param_3;
	uVar7 = param_4;
	uVar8 = param_5;
	lVar4 = IsometricCoord(param_2, (int)param_3);
	uVar5 = ZEXT48(ppuVar3[-0x1d61]);
	iVar12 = 0;
	puVar13 = (ushort *)(*(int *)ppuVar3[-0x1d61] + (int)lVar4 * 0x20);
	lVar4 = param_1;
	do {
		uVar1 = *puVar13;
		*puVar2 = (uint)uVar1;
		if (uVar1 != 0) {
			drawLowerScreen(lVar4, (char)uVar5, (char)uVar6, (char)uVar7, (char)uVar8, (char)lVar9, (char)lVar10,
			    (char)lVar11, in_stack_ffffffa8);
		}
		uVar1 = puVar13[1];
		*puVar2 = (uint)uVar1;
		if (uVar1 != 0) {
			drawLowerScreen(lVar4 + 0x20, (char)uVar5, (char)uVar6, (char)uVar7, (char)uVar8, (char)lVar9,
			    (char)lVar10, (char)lVar11, in_stack_ffffffa8);
		}
		iVar12 = iVar12 + 2;
		puVar13 = puVar13 + 2;
		lVar4 = lVar4 + -0x6000;
	} while (iVar12 < 0xc);
	town_draw_clipped_town(param_1, param_2, param_3, param_4, param_5, 0, (char)lVar10, (char)lVar11, in_stack_ffffffa8);
	return;
}

void town_draw_clipped_town(undefined8 param_1, ulonglong param_2, ulonglong param_3, ulonglong param_4,
    ulonglong param_5, int param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	short sVar1;
	uint uVar2;
	int iVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	undefined *puVar12;
	undefined *puVar13;
	undefined *puVar14;
	undefined *puVar15;
	undefined *puVar16;
	undefined **ppuVar17;
	char cVar18;
	char cVar19;
	char cVar20;
	char cVar21;
	char cVar22;
	char cVar23;
	undefined uVar24;
	undefined uVar25;
	ulonglong uVar26;
	undefined uVar27;
	longlong lVar28;
	longlong lVar29;
	undefined4 in_stack_ffffff88;
	undefined uVar30;
	undefined in_stack_ffffff8f;
	undefined4 in_stack_ffffff98;
	undefined4 in_stack_ffffff9c;

	puVar16 = PTR_DAT_100f1954;
	puVar15 = PTR_DAT_100f1950;
	puVar6 = PTR_DAT_100f1940;
	puVar14 = PTR_DAT_100f1880;
	puVar7 = PTR_DAT_100f1878;
	puVar13 = PTR_DAT_100f1874;
	puVar12 = PTR_DAT_100f1834;
	puVar8 = PTR_DAT_100f1828;
	cVar22 = (char)param_5;
	cVar20 = (char)param_4;
	uVar24 = (undefined)param_6;
	ppuVar17 = &toc;
	iVar9 = (int)param_2;
	iVar3 = iVar9 * 0x70;
	uVar25 = SUB41(PTR_DAT_100f1938, 0);
	uVar26 = ZEXT48(PTR_DAT_100f17cc);
	iVar4 = (int)param_3;
	cVar18 = *(char *)(*(int *)PTR_DAT_100f1944 + iVar3 + iVar4);
	lVar29 = (ulonglong) * (uint *)PTR_DAT_100f17cc + (ulonglong) * (uint *)(PTR_DAT_100f1938 + (int)param_5 * 4) + param_4;
	cVar21 = cVar20;
	cVar23 = cVar22;
	if (cVar18 != '\0') {
		iVar10 = (int)(char)(cVar18 + -1) * 0x170;
		puVar5 = PTR_DAT_100f1940 + iVar10;
		uVar2 = *(uint *)(puVar5 + 0x28);
		ppuVar17 = &toc;
		if ((char)(cVar18 + -1) == *PTR_DAT_100f1888) {
			uVar26 = 8;
			ppuVar17 = &toc;
			CelDrawHdrClrHL(0xb5, param_4 - (ulonglong)uVar2, param_5, (ulonglong) * (uint *)(puVar5 + 0x18),
			    (ulonglong) * (uint *)(puVar5 + 0x20), (ulonglong) * (uint *)(puVar5 + 0x24), 0, 8,
			    in_stack_ffffff88);
		}
		puVar6 = puVar6 + iVar10;
		cVar18 = (char)*(uint *)(puVar6 + 0x18);
		cVar21 = (char)*(uint *)(puVar6 + 0x20);
		cVar23 = (char)*(uint *)(puVar6 + 0x24);
		uVar24 = 0;
		uVar25 = 8;
		Cel2DrawHdrOnly((int)(param_4 - (ulonglong)uVar2), param_5, (ulonglong) * (uint *)(puVar6 + 0x18),
		    (ulonglong) * (uint *)(puVar6 + 0x20), (ulonglong) * (uint *)(puVar6 + 0x24), 0, 8,
		    (int)uVar26, in_stack_ffffff88);
	}
	if ((*(byte *)(*(int *)puVar12 + iVar3 + iVar4) & 0x10) != 0) {
		iVar10 = (int)*(short *)(*(int *)puVar16 + iVar9 * 0xe0 + iVar4 * 2 + -2) + 1;
		iVar11 = iVar10 * -0x10c;
		puVar6 = puVar7 + iVar11;
		uVar2 = *(uint *)(puVar6 + 0x44);
		if (-iVar10 == *(int *)puVar14) {
			uVar26 = 8;
			CelDrawHdrClrHL_part(0xa6, param_4 - (ulonglong)uVar2, param_5, (ulonglong) * (uint *)(puVar6 + 0x24),
			    (ulonglong) * (uint *)(puVar6 + 0x34), (ulonglong) * (uint *)(puVar6 + 0x40), 0, 8,
			    in_stack_ffffff88);
		}
		puVar6 = puVar7 + iVar11;
		cVar18 = (char)*(uint *)(puVar6 + 0x24);
		cVar21 = (char)*(uint *)(puVar6 + 0x34);
		cVar23 = (char)*(uint *)(puVar6 + 0x40);
		uVar24 = 0;
		uVar25 = 8;
		Cel2DrawHdrOnly_part((int)(param_4 - (ulonglong)uVar2), param_5, (ulonglong) * (uint *)(puVar6 + 0x24),
		    (ulonglong) * (uint *)(puVar6 + 0x34), (ulonglong) * (uint *)(puVar6 + 0x40), 0, 8,
		    (int)uVar26, in_stack_ffffff88);
	}
	sVar1 = *(short *)(*(int *)puVar16 + iVar9 * 0xe0 + iVar4 * 2);
	if (0 < sVar1) {
		iVar11 = (int)sVar1 + -1;
		iVar10 = iVar11 * 0x10c;
		puVar6 = puVar7 + iVar10;
		uVar2 = *(uint *)(puVar6 + 0x44);
		if (iVar11 == *(int *)puVar14) {
			uVar26 = 8;
			CelDrawHdrClrHL_part(0xa6, param_4 - (ulonglong)uVar2, param_5, (ulonglong) * (uint *)(puVar6 + 0x24),
			    (ulonglong) * (uint *)(puVar6 + 0x34), (ulonglong) * (uint *)(puVar6 + 0x40), 0, 8,
			    in_stack_ffffff88);
		}
		puVar7 = puVar7 + iVar10;
		cVar18 = (char)*(uint *)(puVar7 + 0x24);
		cVar21 = (char)*(uint *)(puVar7 + 0x34);
		cVar23 = (char)*(uint *)(puVar7 + 0x40);
		uVar24 = 0;
		uVar25 = 8;
		Cel2DrawHdrOnly_part((int)(param_4 - (ulonglong)uVar2), param_5, (ulonglong) * (uint *)(puVar7 + 0x24),
		    (ulonglong) * (uint *)(puVar7 + 0x34), (ulonglong) * (uint *)(puVar7 + 0x40), 0, 8,
		    (int)uVar26, in_stack_ffffff88);
	}
	if ((*(byte *)(*(int *)puVar12 + iVar3 + iVar4) & 0x20) != 0) {
		cVar18 = -(*(char *)(*(int *)puVar15 + iVar3 + iVar4 + -1) + '\x01');
		iVar10 = (int)cVar18 * 0x55ec;
		puVar6 = puVar8 + iVar10;
		uVar2 = *(uint *)(puVar6 + 100);
		lVar28 = (param_4 + (ulonglong) * (uint *)(puVar6 + 0x60)) - (ulonglong) * (uint *)(puVar6 + 0x94);
		if (cVar18 == *puVar13) {
			uVar26 = 8;
			Cl2DecodeClrHL(0xa5, lVar28, param_5 + (ulonglong)uVar2, (ulonglong) * (uint *)(puVar6 + 0x7c),
			    (ulonglong) * (uint *)(puVar6 + 0x8c), (ulonglong) * (uint *)(puVar6 + 0x90), 0, 8,
			    in_stack_ffffff88);
		}
		puVar6 = puVar8 + iVar10;
		cVar18 = (char)*(uint *)(puVar6 + 0x7c);
		cVar21 = (char)*(uint *)(puVar6 + 0x8c);
		cVar23 = (char)*(uint *)(puVar6 + 0x90);
		uVar24 = 0;
		uVar25 = 8;
		Cl2DecodeFrm4(lVar28, param_5 + (ulonglong)uVar2, (ulonglong) * (uint *)(puVar6 + 0x7c),
		    (ulonglong) * (uint *)(puVar6 + 0x8c), (ulonglong) * (uint *)(puVar6 + 0x90), 0, 8,
		    (int)uVar26, in_stack_ffffff88);
		if (param_6 != 0) {
			if (*(int *)(puVar6 + 0x98) != 0) {
				cVar18 = (char)(param_3 + 1);
				cVar21 = (char)(param_4 - 0x40);
				cVar23 = cVar22;
				town_draw_clipped_e_flag(lVar29 + -0x40, param_2 - 1, param_3 + 1, param_4 - 0x40, param_5, uVar24, uVar25,
				    (char)uVar26, in_stack_ffffff88);
			}
		}
	}
	if ((*(byte *)(*(int *)puVar12 + iVar3 + iVar4) & 4) != 0) {
		cVar23 = '\0';
		uVar24 = 8;
		uVar25 = 1;
		cVar18 = cVar20;
		cVar21 = cVar22;
		DrawDeadPlayer(param_2, param_3, param_4, param_5, 0, 8, 1, uVar26, in_stack_ffffff88);
	}
	cVar19 = *(char *)(*(int *)puVar15 + iVar3 + iVar4);
	if ('\0' < cVar19) {
		cVar19 = cVar19 + -1;
		iVar10 = (int)cVar19 * 0x55ec;
		puVar6 = puVar8 + iVar10;
		uVar2 = *(uint *)(puVar6 + 100);
		lVar28 = (param_4 + (ulonglong) * (uint *)(puVar6 + 0x60)) - (ulonglong) * (uint *)(puVar6 + 0x94);
		if (cVar19 == *puVar13) {
			uVar26 = 8;
			Cl2DecodeClrHL(0xa5, lVar28, param_5 + (ulonglong)uVar2, (ulonglong) * (uint *)(puVar6 + 0x7c),
			    (ulonglong) * (uint *)(puVar6 + 0x8c), (ulonglong) * (uint *)(puVar6 + 0x90), 0, 8,
			    in_stack_ffffff88);
		}
		puVar8 = puVar8 + iVar10;
		cVar18 = (char)*(uint *)(puVar8 + 0x7c);
		cVar21 = (char)*(uint *)(puVar8 + 0x8c);
		cVar23 = (char)*(uint *)(puVar8 + 0x90);
		uVar24 = 0;
		uVar25 = 8;
		Cl2DecodeFrm4(lVar28, param_5 + (ulonglong)uVar2, (ulonglong) * (uint *)(puVar8 + 0x7c),
		    (ulonglong) * (uint *)(puVar8 + 0x8c), (ulonglong) * (uint *)(puVar8 + 0x90), 0, 8,
		    (int)uVar26, in_stack_ffffff88);
		if (param_6 != 0) {
			if (*(int *)(puVar8 + 0x98) != 0) {
				cVar18 = (char)(param_3 + 1);
				cVar21 = (char)(param_4 - 0x40);
				cVar23 = cVar22;
				town_draw_clipped_e_flag(lVar29 + -0x40, param_2 - 1, param_3 + 1, param_4 - 0x40, param_5, uVar24, uVar25,
				    (char)uVar26, in_stack_ffffff88);
			}
		}
	}
	uVar30 = (undefined)in_stack_ffffff88;
	uVar27 = (undefined)uVar26;
	if ((*(byte *)(*(int *)puVar12 + iVar3 + iVar4) & 1) != 0) {
		cVar23 = '\0';
		uVar24 = 8;
		uVar25 = 0;
		cVar18 = cVar20;
		cVar21 = cVar22;
		DrawClippedMissile(iVar9, param_3, param_4, param_5, 0, 8, 0, uVar26, in_stack_ffffff88);
	}
	cVar20 = *(char *)(*(int *)ppuVar17[-0x1d66] + iVar3 + iVar4);
	if (cVar20 != '\0') {
		town_special_lower((char)lVar29, cVar20, cVar18, cVar21, cVar23, uVar24, uVar25, uVar27, uVar30,
		    in_stack_ffffff8f, in_stack_ffffff98, in_stack_ffffff9c);
	}
	return;
}

void town_draw_lower(ulonglong param_1, ulonglong param_2, ulonglong param_3, ulonglong param_4,
    int param_5, longlong param_6, char param_7, char param_8, undefined4 param_9)

{
	short sVar1;
	ushort uVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	uint *puVar7;
	longlong lVar8;
	ulonglong uVar9;
	longlong lVar10;
	ulonglong uVar11;
	ulonglong uVar12;
	ulonglong uVar13;
	longlong lVar14;
	longlong lVar15;
	longlong lVar16;
	longlong lVar17;
	ushort *puVar18;
	uint *puVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	undefined4 in_stack_ffffff88;

	puVar7 = _DAT_100f2080;
	puVar6 = PTR_DAT_100f1a54;
	puVar5 = PTR_DAT_100f1a4c;
	puVar4 = PTR_DAT_100f1938;
	puVar3 = PTR_DAT_100f17cc;
	lVar16 = (longlong)param_8;
	lVar15 = (longlong)param_7;
	uVar13 = SEXT48(param_5);
	iVar24 = (int)param_4;
	uVar9 = param_4;
	lVar14 = param_6;
	if (param_6 != 0) {
		iVar22 = (int)param_2;
		if ((((iVar22 < 0) || (0x6f < iVar22)) || (iVar20 = (int)param_1, iVar20 < 0)) || (0x6f < iVar20)) {
			uVar9 = param_4;
			lVar14 = param_6;
			town_clear_low_buf((undefined *)(*(int *)PTR_DAT_100f17cc + *(int *)(PTR_DAT_100f1938 + iVar24 * 4) + (int)param_3));
		} else {
			sVar1 = *(short *)(*(int *)PTR_DAT_100f1a54 + iVar20 * 0xe0 + iVar22 * 2);
			*_DAT_100f2080 = (int)sVar1;
			if (((longlong)sVar1 & 0xffffffffU) == 0) {
				uVar9 = param_4;
				lVar14 = param_6;
				town_clear_low_buf((undefined *)(*(int *)puVar3 + *(int *)(puVar4 + iVar24 * 4) + (int)param_3));
			} else {
				uVar12 = (ulonglong) * (uint *)puVar3;
				lVar10 = (ulonglong) * (uint *)(puVar4 + iVar24 * 4) + param_3;
				lVar17 = uVar12 + lVar10 + 0x20;
				uVar9 = param_2;
				lVar14 = param_6;
				lVar8 = IsometricCoord(param_1, iVar22);
				iVar22 = 1;
				puVar18 = (ushort *)(*(int *)puVar5 + (int)lVar8 * 0x20 + 2);
				do {
					uVar2 = *puVar18;
					*puVar7 = (uint)uVar2;
					if (uVar2 != 0) {
						drawLowerScreen(lVar17, (char)uVar9, (char)lVar10, (char)uVar12, (char)uVar13, (char)lVar14,
						    (char)lVar15, (char)lVar16, in_stack_ffffff88);
					}
					iVar22 = iVar22 + 2;
					puVar18 = puVar18 + 2;
					lVar17 = lVar17 + -0x6000;
				} while (iVar22 < 0x11);
				lVar14 = 0;
				uVar9 = param_3;
				uVar13 = param_4;
				town_draw_clipped_town((ulonglong) * (uint *)puVar3 + (ulonglong) * (uint *)(puVar4 + iVar24 * 4) + param_3, param_1, param_2, param_3,
				    param_4, 0, (char)lVar15, (char)lVar16, in_stack_ffffff88);
			}
		}
		param_1 = param_1 + 1;
		param_2 = param_2 - 1;
		param_3 = param_3 + 0x40;
	}
	lVar8 = param_1 * 0xe0;
	puVar19 = (uint *)(puVar4 + iVar24 * 4);
	iVar24 = (int)param_2 << 1;
	iVar22 = 0;
	while (true) {
		iVar23 = (int)param_2;
		iVar21 = (int)param_1;
		iVar20 = (int)param_3;
		if (param_5 - (int)param_6 <= iVar22)
			break;
		if (((iVar23 < 0) || (0x6f < iVar23)) || ((iVar21 < 0 || (0x6f < iVar21)))) {
			town_clear_low_buf((undefined *)(*(int *)puVar3 + *puVar19 + iVar20));
		} else {
			*puVar7 = (int)*(short *)(*(int *)puVar6 + (int)lVar8 + iVar24);
			if (*puVar7 == 0) {
				town_clear_low_buf((undefined *)(*(int *)puVar3 + *puVar19 + iVar20));
			} else {
				uVar11 = (ulonglong) * (uint *)puVar3;
				lVar17 = uVar11 + (ulonglong)*puVar19 + param_3;
				uVar12 = param_2;
				lVar10 = IsometricCoord(param_1, iVar23);
				iVar20 = 0;
				puVar18 = (ushort *)(*(int *)puVar5 + (int)lVar10 * 0x20);
				do {
					uVar2 = *puVar18;
					*puVar7 = (uint)uVar2;
					if (uVar2 != 0) {
						drawLowerScreen(lVar17, (char)uVar12, (char)uVar11, (char)uVar9, (char)uVar13, (char)lVar14,
						    (char)lVar15, (char)lVar16, in_stack_ffffff88);
					}
					uVar2 = puVar18[1];
					*puVar7 = (uint)uVar2;
					if (uVar2 != 0) {
						drawLowerScreen(lVar17 + 0x20, (char)uVar12, (char)uVar11, (char)uVar9, (char)uVar13,
						    (char)lVar14, (char)lVar15, (char)lVar16, in_stack_ffffff88);
					}
					iVar20 = iVar20 + 2;
					puVar18 = puVar18 + 2;
					lVar17 = lVar17 + -0x6000;
				} while (iVar20 < 0x10);
				lVar14 = 1;
				uVar9 = param_3;
				uVar13 = param_4;
				town_draw_clipped_town((ulonglong) * (uint *)puVar3 + (ulonglong)*puVar19 + param_3, param_1, param_2,
				    param_3, param_4, 1, (char)lVar15, (char)lVar16, in_stack_ffffff88);
			}
		}
		lVar8 = lVar8 + 0xe0;
		param_1 = param_1 + 1;
		iVar24 = iVar24 + -2;
		param_2 = param_2 - 1;
		param_3 = param_3 + 0x40;
		iVar22 = iVar22 + 1;
	}
	if ((int)param_6 != 0) {
		if (((iVar23 < 0) || (0x6f < iVar23)) || ((iVar21 < 0 || (0x6f < iVar21)))) {
			town_clear_low_buf((undefined *)(*(int *)puVar3 + *puVar19 + iVar20));
		} else {
			*puVar7 = (int)*(short *)(*(int *)puVar6 + iVar21 * 0xe0 + iVar23 * 2);
			if (*puVar7 == 0) {
				town_clear_low_buf((undefined *)(*(int *)puVar3 + *puVar19 + iVar20));
			} else {
				uVar11 = (ulonglong) * (uint *)puVar3;
				lVar10 = uVar11 + (ulonglong)*puVar19 + param_3;
				uVar12 = param_2;
				lVar8 = IsometricCoord(param_1, iVar23);
				iVar24 = 0;
				puVar18 = (ushort *)(*(int *)puVar5 + (int)lVar8 * 0x20);
				do {
					uVar2 = *puVar18;
					*puVar7 = (uint)uVar2;
					if (uVar2 != 0) {
						drawLowerScreen(lVar10, (char)uVar12, (char)uVar11, (char)uVar9, (char)uVar13, (char)lVar14,
						    (char)lVar15, (char)lVar16, in_stack_ffffff88);
					}
					iVar24 = iVar24 + 2;
					puVar18 = puVar18 + 2;
					lVar10 = lVar10 + -0x6000;
				} while (iVar24 < 0x10);
				town_draw_clipped_town((ulonglong) * (uint *)puVar3 + (ulonglong)*puVar19 + param_3, param_1, param_2,
				    param_3, param_4, 0, (char)lVar15, (char)lVar16, in_stack_ffffff88);
			}
		}
	}
	return;
}

void town_draw_clipped_e_flag_2(longlong param_1, longlong param_2, ulonglong param_3, longlong param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, char param_8,
    undefined4 param_9)

{
	ushort uVar1;
	uint *puVar2;
	undefined **ppuVar3;
	longlong lVar4;
	ulonglong uVar5;
	ulonglong uVar6;
	longlong lVar7;
	ulonglong uVar8;
	ulonglong uVar9;
	ulonglong uVar10;
	longlong lVar11;
	int iVar12;
	longlong lVar13;
	int iVar14;
	undefined4 in_stack_ffffff98;

	puVar2 = _DAT_100f2080;
	lVar11 = (longlong)param_8;
	ppuVar3 = &toc;
	lVar13 = param_1;
	if (param_4 != 0) {
		lVar13 = param_1 + param_4 * 0x6000;
	}
	uVar6 = param_3;
	lVar7 = param_4;
	uVar8 = param_5;
	uVar9 = param_6;
	uVar10 = param_7;
	lVar4 = IsometricCoord(param_2, (int)param_3);
	uVar5 = ZEXT48(ppuVar3[-0x1d61]);
	iVar12 = 0;
	iVar14 = *(int *)ppuVar3[-0x1d61] + (int)lVar4 * 0x20;
	do {
		if ((int)param_4 <= iVar12) {
			uVar1 = *(ushort *)(iVar14 + 4);
			*puVar2 = (uint)uVar1;
			if (uVar1 != 0) {
				drawLowerScreen(lVar13, (char)uVar5, (char)uVar6, (char)lVar7, (char)uVar8, (char)uVar9, (char)uVar10, (char)lVar11, in_stack_ffffff98);
			}
			uVar1 = *(ushort *)(iVar14 + 6);
			*puVar2 = (uint)uVar1;
			if (uVar1 != 0) {
				drawLowerScreen(lVar13 + 0x20, (char)uVar5, (char)uVar6, (char)lVar7, (char)uVar8, (char)uVar9,
				    (char)uVar10, (char)lVar11, in_stack_ffffff98);
			}
		}
		iVar12 = iVar12 + 1;
		iVar14 = iVar14 + 4;
		lVar13 = lVar13 + -0x6000;
	} while (iVar12 < 6);
	if ((int)param_5 < 8) {
		town_draw_clipped_town_2(param_1, param_2, param_3, param_4, param_5, param_6, param_7, 0, in_stack_ffffff98);
	}
	return;
}

void town_draw_clipped_town_2(longlong param_1, ulonglong param_2, ulonglong param_3, longlong param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	short sVar1;
	uint uVar2;
	int iVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	int iVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined **ppuVar12;
	char cVar13;
	undefined uVar14;
	undefined uVar15;
	undefined uVar16;
	undefined uVar17;
	undefined uVar18;
	undefined uVar19;
	undefined uVar20;
	undefined uVar21;
	ulonglong uVar22;
	undefined uVar23;
	undefined *puVar24;
	int iVar25;
	int iVar26;
	undefined *puVar27;
	undefined *puVar28;
	int iVar29;
	longlong lVar30;
	undefined4 in_stack_ffffff78;
	undefined uVar31;
	undefined in_stack_ffffff7f;
	undefined4 in_stack_ffffff88;
	undefined4 in_stack_ffffff8c;

	puVar6 = PTR_DAT_100f1954;
	puVar11 = PTR_DAT_100f1950;
	puVar10 = PTR_DAT_100f1880;
	puVar27 = PTR_DAT_100f1878;
	puVar9 = PTR_DAT_100f1874;
	puVar8 = PTR_DAT_100f1834;
	puVar28 = PTR_DAT_100f1828;
	uVar16 = (undefined)param_5;
	uVar20 = (undefined)param_7;
	uVar18 = (undefined)param_6;
	uVar23 = (undefined)param_4;
	uVar14 = (undefined)param_3;
	ppuVar12 = &toc;
	iVar7 = (int)param_2;
	iVar3 = iVar7 * 0x70;
	iVar4 = (int)param_3;
	cVar13 = *(char *)(*(int *)PTR_DAT_100f1944 + iVar3 + iVar4);
	iVar29 = (int)param_5;
	uVar22 = param_8;
	uVar15 = uVar23;
	uVar17 = uVar16;
	uVar19 = uVar18;
	uVar21 = uVar20;
	if (cVar13 != '\0') {
		cVar13 = cVar13 + -1;
		iVar26 = (int)cVar13 * 0x170;
		puVar5 = PTR_DAT_100f1940 + iVar26;
		uVar2 = *(uint *)(puVar5 + 0x28);
		uVar22 = param_8;
		ppuVar12 = &toc;
		puVar24 = PTR_DAT_100f1940;
		if (cVar13 == *PTR_DAT_100f1888) {
			uVar22 = 8;
			ppuVar12 = &toc;
			puVar24 = PTR_DAT_100f1940;
			CelDrawHdrClrHL(0xb5, param_6 - (ulonglong)uVar2, param_7, (ulonglong) * (uint *)(puVar5 + 0x18),
			    (ulonglong) * (uint *)(puVar5 + 0x20), (ulonglong) * (uint *)(puVar5 + 0x24), iVar29, 8,
			    in_stack_ffffff78);
		}
		puVar24 = puVar24 + iVar26;
		uVar14 = (undefined) * (uint *)(puVar24 + 0x18);
		uVar15 = (undefined) * (uint *)(puVar24 + 0x20);
		uVar17 = (undefined) * (uint *)(puVar24 + 0x24);
		uVar21 = 8;
		uVar19 = uVar16;
		Cel2DrawHdrOnly((int)(param_6 - (ulonglong)uVar2), param_7, (ulonglong) * (uint *)(puVar24 + 0x18),
		    (ulonglong) * (uint *)(puVar24 + 0x20), (ulonglong) * (uint *)(puVar24 + 0x24), iVar29, 8,
		    (int)uVar22, in_stack_ffffff78);
	}
	if ((*(byte *)(*(int *)puVar8 + iVar3 + iVar4) & 0x10) != 0) {
		iVar26 = (int)*(short *)(*(int *)puVar6 + iVar7 * 0xe0 + iVar4 * 2 + -2) + 1;
		iVar25 = iVar26 * -0x10c;
		puVar5 = puVar27 + iVar25;
		uVar2 = *(uint *)(puVar5 + 0x44);
		if (-iVar26 == *(int *)puVar10) {
			uVar22 = 8;
			CelDrawHdrClrHL_part(0xa6, param_6 - (ulonglong)uVar2, param_7, (ulonglong) * (uint *)(puVar5 + 0x24),
			    (ulonglong) * (uint *)(puVar5 + 0x34), (ulonglong) * (uint *)(puVar5 + 0x40), iVar29, 8,
			    in_stack_ffffff78);
		}
		puVar5 = puVar27 + iVar25;
		uVar14 = (undefined) * (uint *)(puVar5 + 0x24);
		uVar15 = (undefined) * (uint *)(puVar5 + 0x34);
		uVar17 = (undefined) * (uint *)(puVar5 + 0x40);
		uVar21 = 8;
		uVar19 = uVar16;
		Cel2DrawHdrOnly_part((int)(param_6 - (ulonglong)uVar2), param_7, (ulonglong) * (uint *)(puVar5 + 0x24),
		    (ulonglong) * (uint *)(puVar5 + 0x34), (ulonglong) * (uint *)(puVar5 + 0x40), iVar29, 8,
		    (int)uVar22, in_stack_ffffff78);
	}
	sVar1 = *(short *)(*(int *)puVar6 + iVar7 * 0xe0 + iVar4 * 2);
	if (0 < sVar1) {
		iVar25 = (int)sVar1 + -1;
		iVar26 = iVar25 * 0x10c;
		puVar6 = puVar27 + iVar26;
		uVar2 = *(uint *)(puVar6 + 0x44);
		if (iVar25 == *(int *)puVar10) {
			uVar22 = 8;
			CelDrawHdrClrHL_part(0xa6, param_6 - (ulonglong)uVar2, param_7, (ulonglong) * (uint *)(puVar6 + 0x24),
			    (ulonglong) * (uint *)(puVar6 + 0x34), (ulonglong) * (uint *)(puVar6 + 0x40), iVar29, 8,
			    in_stack_ffffff78);
		}
		puVar27 = puVar27 + iVar26;
		uVar14 = (undefined) * (uint *)(puVar27 + 0x24);
		uVar15 = (undefined) * (uint *)(puVar27 + 0x34);
		uVar17 = (undefined) * (uint *)(puVar27 + 0x40);
		uVar21 = 8;
		uVar19 = uVar16;
		Cel2DrawHdrOnly_part((int)(param_6 - (ulonglong)uVar2), param_7, (ulonglong) * (uint *)(puVar27 + 0x24),
		    (ulonglong) * (uint *)(puVar27 + 0x34), (ulonglong) * (uint *)(puVar27 + 0x40), iVar29, 8,
		    (int)uVar22, in_stack_ffffff78);
	}
	if ((*(byte *)(*(int *)puVar8 + iVar3 + iVar4) & 0x20) != 0) {
		cVar13 = -(*(char *)(*(int *)puVar11 + iVar3 + iVar4 + -1) + '\x01');
		iVar26 = (int)cVar13 * 0x55ec;
		puVar27 = puVar28 + iVar26;
		uVar2 = *(uint *)(puVar27 + 100);
		lVar30 = (param_6 + (ulonglong) * (uint *)(puVar27 + 0x60)) - (ulonglong) * (uint *)(puVar27 + 0x94);
		if (cVar13 == *puVar9) {
			uVar22 = 8;
			Cl2DecodeClrHL(0xa5, lVar30, param_7 + (ulonglong)uVar2, (ulonglong) * (uint *)(puVar27 + 0x7c),
			    (ulonglong) * (uint *)(puVar27 + 0x8c), (ulonglong) * (uint *)(puVar27 + 0x90), iVar29,
			    8, in_stack_ffffff78);
		}
		puVar27 = puVar28 + iVar26;
		uVar14 = (undefined) * (uint *)(puVar27 + 0x7c);
		uVar15 = (undefined) * (uint *)(puVar27 + 0x8c);
		uVar17 = (undefined) * (uint *)(puVar27 + 0x90);
		uVar21 = 8;
		uVar19 = uVar16;
		Cl2DecodeFrm4(lVar30, param_7 + (ulonglong)uVar2, (ulonglong) * (uint *)(puVar27 + 0x7c),
		    (ulonglong) * (uint *)(puVar27 + 0x8c), (ulonglong) * (uint *)(puVar27 + 0x90), iVar29, 8,
		    (int)uVar22, in_stack_ffffff78);
		if ((int)param_8 != 0) {
			if (*(int *)(puVar27 + 0x98) != 0) {
				uVar14 = (undefined)(param_3 + 1);
				uVar19 = (undefined)(param_6 - 0x40);
				uVar15 = uVar23;
				uVar17 = uVar16;
				uVar21 = uVar20;
				town_draw_clipped_e_flag_2(param_1 + -0x40, param_2 - 1, param_3 + 1, param_4, param_5, param_6 - 0x40, param_7,
				    (char)uVar22, in_stack_ffffff78);
			}
		}
	}
	if ((*(byte *)(*(int *)puVar8 + iVar3 + iVar4) & 4) != 0) {
		uVar19 = 8;
		uVar21 = 1;
		uVar14 = uVar18;
		uVar15 = uVar20;
		uVar17 = uVar16;
		DrawDeadPlayer(param_2, param_3, param_6, param_7, param_5, 8, 1, uVar22, in_stack_ffffff78);
	}
	cVar13 = *(char *)(*(int *)puVar11 + iVar3 + iVar4);
	if ('\0' < cVar13) {
		cVar13 = cVar13 + -1;
		iVar26 = (int)cVar13 * 0x55ec;
		puVar27 = puVar28 + iVar26;
		uVar2 = *(uint *)(puVar27 + 100);
		lVar30 = (param_6 + (ulonglong) * (uint *)(puVar27 + 0x60)) - (ulonglong) * (uint *)(puVar27 + 0x94);
		if (cVar13 == *puVar9) {
			uVar22 = 8;
			Cl2DecodeClrHL(0xa5, lVar30, param_7 + (ulonglong)uVar2, (ulonglong) * (uint *)(puVar27 + 0x7c),
			    (ulonglong) * (uint *)(puVar27 + 0x8c), (ulonglong) * (uint *)(puVar27 + 0x90), iVar29,
			    8, in_stack_ffffff78);
		}
		puVar28 = puVar28 + iVar26;
		uVar14 = (undefined) * (uint *)(puVar28 + 0x7c);
		uVar15 = (undefined) * (uint *)(puVar28 + 0x8c);
		uVar17 = (undefined) * (uint *)(puVar28 + 0x90);
		uVar21 = 8;
		uVar19 = uVar16;
		Cl2DecodeFrm4(lVar30, param_7 + (ulonglong)uVar2, (ulonglong) * (uint *)(puVar28 + 0x7c),
		    (ulonglong) * (uint *)(puVar28 + 0x8c), (ulonglong) * (uint *)(puVar28 + 0x90), iVar29, 8,
		    (int)uVar22, in_stack_ffffff78);
		if ((int)param_8 != 0) {
			if (*(int *)(puVar28 + 0x98) != 0) {
				uVar14 = (undefined)(param_3 + 1);
				uVar19 = (undefined)(param_6 - 0x40);
				uVar15 = uVar23;
				uVar17 = uVar16;
				uVar21 = uVar20;
				town_draw_clipped_e_flag_2(param_1 + -0x40, param_2 - 1, param_3 + 1, param_4, param_5, param_6 - 0x40, param_7,
				    (char)uVar22, in_stack_ffffff78);
			}
		}
	}
	uVar31 = (undefined)in_stack_ffffff78;
	uVar23 = (undefined)uVar22;
	if ((*(byte *)(*(int *)puVar8 + iVar3 + iVar4) & 1) != 0) {
		uVar19 = 8;
		uVar21 = 0;
		uVar14 = uVar18;
		uVar15 = uVar20;
		uVar17 = uVar16;
		DrawClippedMissile(iVar7, param_3, param_6, param_7, param_5, 8, 0, uVar22, in_stack_ffffff78);
	}
	cVar13 = *(char *)(*(int *)ppuVar12[-0x1d66] + iVar3 + iVar4);
	if (cVar13 != '\0') {
		town_special_lower((char)param_1 + (char)*(undefined4 *)(ppuVar12[-0x1da6] + iVar29 * 0x40), cVar13,
		    uVar14, uVar15, uVar17, uVar19, uVar21, uVar23, uVar31, in_stack_ffffff7f,
		    in_stack_ffffff88, in_stack_ffffff8c);
	}
	return;
}

void town_draw_lower_2(ulonglong param_1, ulonglong param_2, ulonglong param_3, ulonglong param_4,
    int param_5, longlong param_6, int param_7, char param_8, undefined4 param_9,
    undefined param_10, undefined4 param_11)

{
	short sVar1;
	ushort uVar2;
	uint uVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	uint *puVar8;
	longlong lVar9;
	ulonglong uVar10;
	longlong lVar11;
	ulonglong uVar12;
	ulonglong uVar13;
	ulonglong uVar14;
	ulonglong uVar15;
	longlong lVar16;
	ulonglong uVar17;
	uint *puVar18;
	int iVar19;
	ulonglong uVar20;
	uint *puVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	longlong lVar26;
	longlong lVar27;
	undefined4 in_stack_ffffff78;

	puVar8 = _DAT_100f2080;
	puVar7 = PTR_DAT_100f1a54;
	puVar6 = PTR_DAT_100f1938;
	puVar5 = PTR_DAT_100f17cc;
	lVar16 = (longlong)param_8;
	uVar15 = SEXT48(param_7);
	uVar13 = SEXT48(param_5);
	uVar17 = ZEXT48(PTR_DAT_100f1a4c);
	iVar4 = (int)param_6;
	uVar3 = (iVar4 + 1) * 2;
	uVar20 = (ulonglong)uVar3;
	iVar19 = (int)param_4;
	uVar14 = param_6;
	if (param_7 != 0) {
		iVar22 = (int)param_2;
		if ((((iVar22 < 0) || (0x6f < iVar22)) || (iVar24 = (int)param_1, iVar24 < 0)) || (0x6f < iVar24)) {
			uVar14 = param_6;
			town_clear_low_buf((undefined *)(*(int *)PTR_DAT_100f17cc + *(int *)(PTR_DAT_100f1938 + iVar19 * 4) + (int)param_3));
		} else {
			sVar1 = *(short *)(*(int *)PTR_DAT_100f1a54 + iVar24 * 0xe0 + iVar22 * 2);
			*_DAT_100f2080 = (int)sVar1;
			if (((longlong)sVar1 & 0xffffffffU) == 0) {
				uVar14 = param_6;
				town_clear_low_buf((undefined *)(*(int *)puVar5 + *(int *)(puVar6 + iVar19 * 4) + (int)param_3));
			} else {
				uVar12 = (ulonglong) * (uint *)puVar5;
				lVar11 = (ulonglong) * (uint *)(puVar6 + iVar19 * 4) + param_3;
				lVar26 = uVar12 + lVar11 + -0x5fe0;
				uVar14 = param_6;
				lVar9 = IsometricCoord(param_1, iVar22);
				uVar10 = (ulonglong) * (uint *)uVar17;
				iVar22 = 0;
				lVar9 = uVar10 + (ulonglong)(uint)((int)lVar9 << 5);
				do {
					if ((iVar4 <= iVar22) && (uVar2 = *(ushort *)((int)lVar9 + 6), *puVar8 = (uint)uVar2, uVar2 != 0)) {
						drawLowerScreen(lVar26, (char)uVar10, (char)lVar11, (char)uVar12, (char)uVar13, (char)uVar14,
						    (char)uVar15, (char)lVar16, in_stack_ffffff78);
					}
					iVar22 = iVar22 + 1;
					lVar9 = lVar9 + 4;
					lVar26 = lVar26 + -0x6000;
				} while (iVar22 < 7);
				if ((int)uVar3 < 8) {
					lVar16 = 0;
					uVar13 = uVar20;
					uVar14 = param_3;
					uVar15 = param_4;
					town_draw_clipped_town_2((ulonglong) * (uint *)puVar5 + (ulonglong) * (uint *)(puVar6 + iVar19 * 4) + param_3, param_1, param_2, param_6,
					    uVar20, param_3, param_4, 0, in_stack_ffffff78);
				}
			}
		}
		param_1 = param_1 + 1;
		param_2 = param_2 - 1;
		param_3 = param_3 + 0x40;
	}
	puVar21 = (uint *)(puVar6 + iVar19 * 4);
	lVar9 = param_1 * 0xe0;
	iVar19 = (int)param_2 << 1;
	iVar22 = 0;
	while (true) {
		puVar18 = (uint *)uVar17;
		iVar23 = (int)param_2;
		iVar25 = (int)param_1;
		iVar24 = (int)param_3;
		if (param_5 - param_7 <= iVar22)
			break;
		if (((iVar23 < 0) || (0x6f < iVar23)) || ((iVar25 < 0 || (0x6f < iVar25)))) {
			town_clear_low_buf((undefined *)(*(int *)puVar5 + *puVar21 + iVar24));
		} else {
			*puVar8 = (int)*(short *)(*(int *)puVar7 + (int)lVar9 + iVar19);
			if (*puVar8 == 0) {
				town_clear_low_buf((undefined *)(*(int *)puVar5 + *puVar21 + iVar24));
			} else {
				uVar12 = (ulonglong) * (uint *)puVar5;
				lVar26 = (ulonglong)*puVar21 + param_3;
				lVar27 = uVar12 + lVar26 + -0x6000;
				lVar11 = IsometricCoord(param_1, iVar23);
				uVar10 = (ulonglong) * (uint *)uVar17;
				iVar24 = 0;
				lVar11 = uVar10 + (ulonglong)(uint)((int)lVar11 << 5);
				do {
					if (iVar4 <= iVar24) {
						uVar2 = *(ushort *)((int)lVar11 + 4);
						*puVar8 = (uint)uVar2;
						if (uVar2 != 0) {
							drawLowerScreen(lVar27, (char)uVar10, (char)lVar26, (char)uVar12, (char)uVar13, (char)uVar14,
							    (char)uVar15, (char)lVar16, in_stack_ffffff78);
						}
						uVar2 = *(ushort *)((int)lVar11 + 6);
						*puVar8 = (uint)uVar2;
						if (uVar2 != 0) {
							drawLowerScreen(lVar27 + 0x20, (char)uVar10, (char)lVar26, (char)uVar12, (char)uVar13,
							    (char)uVar14, (char)uVar15, (char)lVar16, in_stack_ffffff78);
						}
					}
					iVar24 = iVar24 + 1;
					lVar11 = lVar11 + 4;
					lVar27 = lVar27 + -0x6000;
				} while (iVar24 < 7);
				if ((int)uVar3 < 8) {
					lVar16 = 1;
					uVar13 = uVar20;
					uVar14 = param_3;
					uVar15 = param_4;
					town_draw_clipped_town_2((ulonglong) * (uint *)puVar5 + (ulonglong)*puVar21 + param_3 + uVar20 * -0x3000, param_1, param_2, param_6, uVar20, param_3, param_4, 1, in_stack_ffffff78);
				}
			}
		}
		lVar9 = lVar9 + 0xe0;
		param_1 = param_1 + 1;
		iVar19 = iVar19 + -2;
		param_2 = param_2 - 1;
		param_3 = param_3 + 0x40;
		iVar22 = iVar22 + 1;
	}
	if (param_7 != 0) {
		if ((((iVar23 < 0) || (0x6f < iVar23)) || (iVar25 < 0)) || (0x6f < iVar25)) {
			town_clear_low_buf((undefined *)(*(int *)puVar5 + *puVar21 + iVar24));
		} else {
			*puVar8 = (int)*(short *)(*(int *)puVar7 + iVar25 * 0xe0 + iVar23 * 2);
			if (*puVar8 == 0) {
				town_clear_low_buf((undefined *)(*(int *)puVar5 + *puVar21 + iVar24));
			} else {
				uVar10 = (ulonglong) * (uint *)puVar5;
				lVar11 = (ulonglong)*puVar21 + param_3;
				lVar26 = uVar10 + lVar11 + -0x6000;
				lVar9 = IsometricCoord(param_1, iVar23);
				uVar17 = (ulonglong)*puVar18;
				iVar19 = 0;
				lVar9 = uVar17 + (ulonglong)(uint)((int)lVar9 << 5);
				do {
					if ((iVar4 <= iVar19) && (uVar2 = *(ushort *)((int)lVar9 + 4), *puVar8 = (uint)uVar2, uVar2 != 0)) {
						drawLowerScreen(lVar26, (char)uVar17, (char)lVar11, (char)uVar10, (char)uVar13, (char)uVar14,
						    (char)uVar15, (char)lVar16, in_stack_ffffff78);
					}
					iVar19 = iVar19 + 1;
					lVar9 = lVar9 + 4;
					lVar26 = lVar26 + -0x6000;
				} while (iVar19 < 7);
				if ((int)uVar3 < 8) {
					town_draw_clipped_town_2((ulonglong) * (uint *)puVar5 + (ulonglong)*puVar21 + param_3, param_1, param_2,
					    param_6, uVar20, param_3, param_4, 0, in_stack_ffffff78);
				}
			}
		}
	}
	return;
}

void town_draw_e_flag(longlong param_1, longlong param_2, ulonglong param_3, undefined8 param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, char param_8,
    undefined4 param_9)

{
	ushort uVar1;
	uint *puVar2;
	undefined **ppuVar3;
	longlong lVar4;
	ulonglong uVar5;
	ulonglong uVar6;
	undefined8 uVar7;
	ulonglong uVar8;
	ulonglong uVar9;
	ulonglong uVar10;
	longlong lVar11;
	int iVar12;
	ushort *puVar13;
	undefined4 in_stack_ffffff98;

	puVar2 = _DAT_100f2080;
	lVar11 = (longlong)param_8;
	ppuVar3 = &toc;
	uVar6 = param_3;
	uVar7 = param_4;
	uVar8 = param_5;
	uVar9 = param_6;
	uVar10 = param_7;
	lVar4 = IsometricCoord(param_2, (int)param_3);
	uVar5 = ZEXT48(ppuVar3[-0x1d61]);
	iVar12 = 0;
	puVar13 = (ushort *)(*(int *)ppuVar3[-0x1d61] + (int)lVar4 * 0x20);
	lVar4 = param_1;
	do {
		if (iVar12 <= (int)param_4) {
			uVar1 = *puVar13;
			*puVar2 = (uint)uVar1;
			if (uVar1 != 0) {
				drawUpperScreen(lVar4, (char)uVar5, (char)uVar6, (char)uVar7, (char)uVar8, (char)uVar9, (char)uVar10,
				    (char)lVar11, in_stack_ffffff98);
			}
			uVar1 = puVar13[1];
			*puVar2 = (uint)uVar1;
			if (uVar1 != 0) {
				drawUpperScreen(lVar4 + 0x20, (char)uVar5, (char)uVar6, (char)uVar7, (char)uVar8, (char)uVar9,
				    (char)uVar10, (char)lVar11, in_stack_ffffff98);
			}
		}
		iVar12 = iVar12 + 1;
		puVar13 = puVar13 + 2;
		lVar4 = lVar4 + -0x6000;
	} while (iVar12 < 7);
	town_draw_town_all(param_1, param_2, param_3, param_4, param_5, param_6, param_7, 0, in_stack_ffffff98);
	return;
}

void town_draw_town_all(longlong param_1, ulonglong param_2, ulonglong param_3, undefined8 param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	short sVar1;
	uint uVar2;
	int iVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	int iVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined **ppuVar12;
	char cVar13;
	undefined uVar14;
	undefined uVar15;
	undefined uVar16;
	undefined uVar17;
	undefined uVar18;
	undefined uVar19;
	undefined uVar20;
	undefined uVar21;
	int iVar23;
	ulonglong uVar22;
	undefined uVar24;
	undefined *puVar25;
	int iVar26;
	int iVar27;
	undefined *puVar28;
	undefined *puVar29;
	longlong lVar30;
	undefined4 in_stack_ffffff78;
	undefined uVar31;
	undefined in_stack_ffffff7f;
	undefined4 in_stack_ffffff88;
	undefined4 in_stack_ffffff8c;

	puVar6 = PTR_DAT_100f1954;
	puVar11 = PTR_DAT_100f1950;
	puVar10 = PTR_DAT_100f1880;
	puVar28 = PTR_DAT_100f1878;
	puVar9 = PTR_DAT_100f1874;
	puVar8 = PTR_DAT_100f1834;
	puVar29 = PTR_DAT_100f1828;
	uVar16 = (undefined)param_5;
	uVar20 = (undefined)param_7;
	uVar18 = (undefined)param_6;
	uVar24 = (undefined)param_4;
	uVar14 = (undefined)param_3;
	ppuVar12 = &toc;
	iVar7 = (int)param_2;
	iVar3 = iVar7 * 0x70;
	iVar4 = (int)param_3;
	cVar13 = *(char *)(*(int *)PTR_DAT_100f1944 + iVar3 + iVar4);
	iVar23 = (int)param_5;
	uVar22 = param_8;
	uVar15 = uVar24;
	uVar17 = uVar16;
	uVar19 = uVar18;
	uVar21 = uVar20;
	if (cVar13 != '\0') {
		cVar13 = cVar13 + -1;
		iVar27 = (int)cVar13 * 0x170;
		puVar5 = PTR_DAT_100f1940 + iVar27;
		uVar2 = *(uint *)(puVar5 + 0x28);
		uVar22 = param_8;
		ppuVar12 = &toc;
		puVar25 = PTR_DAT_100f1940;
		if (cVar13 == *PTR_DAT_100f1888) {
			uVar22 = param_5;
			ppuVar12 = &toc;
			puVar25 = PTR_DAT_100f1940;
			CelDecodeClr(0xb5, param_6 - (ulonglong)uVar2, param_7, (ulonglong) * (uint *)(puVar5 + 0x18),
			    (ulonglong) * (uint *)(puVar5 + 0x20), (ulonglong) * (uint *)(puVar5 + 0x24), 0, iVar23,
			    in_stack_ffffff78);
		}
		puVar25 = puVar25 + iVar27;
		uVar14 = (undefined) * (uint *)(puVar25 + 0x18);
		uVar15 = (undefined) * (uint *)(puVar25 + 0x20);
		uVar17 = (undefined) * (uint *)(puVar25 + 0x24);
		uVar19 = 0;
		uVar21 = uVar16;
		CelDrawHdrOnly((int)(param_6 - (ulonglong)uVar2), param_7, (ulonglong) * (uint *)(puVar25 + 0x18),
		    (ulonglong) * (uint *)(puVar25 + 0x20), (ulonglong) * (uint *)(puVar25 + 0x24), 0, iVar23,
		    (int)uVar22, in_stack_ffffff78);
	}
	if ((*(byte *)(*(int *)puVar8 + iVar3 + iVar4) & 0x10) != 0) {
		iVar27 = (int)*(short *)(*(int *)puVar6 + iVar7 * 0xe0 + iVar4 * 2 + -2) + 1;
		iVar26 = iVar27 * -0x10c;
		puVar5 = puVar28 + iVar26;
		uVar2 = *(uint *)(puVar5 + 0x44);
		if (-iVar27 == *(int *)puVar10) {
			uVar22 = param_5;
			CelDecodeClr_part(0xa6, param_6 - (ulonglong)uVar2, param_7, (ulonglong) * (uint *)(puVar5 + 0x24),
			    (ulonglong) * (uint *)(puVar5 + 0x34), (ulonglong) * (uint *)(puVar5 + 0x40), 0, iVar23,
			    in_stack_ffffff78);
		}
		puVar5 = puVar28 + iVar26;
		uVar14 = (undefined) * (uint *)(puVar5 + 0x24);
		uVar15 = (undefined) * (uint *)(puVar5 + 0x34);
		uVar17 = (undefined) * (uint *)(puVar5 + 0x40);
		uVar19 = 0;
		uVar21 = uVar16;
		CelDrawHdrOnly_part((int)(param_6 - (ulonglong)uVar2), param_7, (ulonglong) * (uint *)(puVar5 + 0x24),
		    (ulonglong) * (uint *)(puVar5 + 0x34), (ulonglong) * (uint *)(puVar5 + 0x40), 0, iVar23,
		    (int)uVar22, in_stack_ffffff78);
	}
	sVar1 = *(short *)(*(int *)puVar6 + iVar7 * 0xe0 + iVar4 * 2);
	if (0 < sVar1) {
		iVar26 = (int)sVar1 + -1;
		iVar27 = iVar26 * 0x10c;
		puVar6 = puVar28 + iVar27;
		uVar2 = *(uint *)(puVar6 + 0x44);
		if (iVar26 == *(int *)puVar10) {
			uVar22 = param_5;
			CelDecodeClr_part(0xa6, param_6 - (ulonglong)uVar2, param_7, (ulonglong) * (uint *)(puVar6 + 0x24),
			    (ulonglong) * (uint *)(puVar6 + 0x34), (ulonglong) * (uint *)(puVar6 + 0x40), 0, iVar23,
			    in_stack_ffffff78);
		}
		puVar28 = puVar28 + iVar27;
		uVar14 = (undefined) * (uint *)(puVar28 + 0x24);
		uVar15 = (undefined) * (uint *)(puVar28 + 0x34);
		uVar17 = (undefined) * (uint *)(puVar28 + 0x40);
		uVar19 = 0;
		uVar21 = uVar16;
		CelDrawHdrOnly_part((int)(param_6 - (ulonglong)uVar2), param_7, (ulonglong) * (uint *)(puVar28 + 0x24),
		    (ulonglong) * (uint *)(puVar28 + 0x34), (ulonglong) * (uint *)(puVar28 + 0x40), 0, iVar23,
		    (int)uVar22, in_stack_ffffff78);
	}
	if ((*(byte *)(*(int *)puVar8 + iVar3 + iVar4) & 0x20) != 0) {
		cVar13 = -(*(char *)(*(int *)puVar11 + iVar3 + iVar4 + -1) + '\x01');
		iVar27 = (int)cVar13 * 0x55ec;
		puVar28 = puVar29 + iVar27;
		uVar2 = *(uint *)(puVar28 + 100);
		lVar30 = (param_6 + (ulonglong) * (uint *)(puVar28 + 0x60)) - (ulonglong) * (uint *)(puVar28 + 0x94);
		if (cVar13 == *puVar9) {
			uVar22 = param_5;
			Cl2DecodeFrm2(0xa5, lVar30, param_7 + (ulonglong)uVar2, (ulonglong) * (uint *)(puVar28 + 0x7c),
			    (ulonglong) * (uint *)(puVar28 + 0x8c), (ulonglong) * (uint *)(puVar28 + 0x90), 0,
			    iVar23, in_stack_ffffff78);
		}
		puVar28 = puVar29 + iVar27;
		uVar14 = (undefined) * (uint *)(puVar28 + 0x7c);
		uVar15 = (undefined) * (uint *)(puVar28 + 0x8c);
		uVar17 = (undefined) * (uint *)(puVar28 + 0x90);
		uVar19 = 0;
		uVar21 = uVar16;
		Cl2DecodeFrm1(lVar30, param_7 + (ulonglong)uVar2, (ulonglong) * (uint *)(puVar28 + 0x7c),
		    (ulonglong) * (uint *)(puVar28 + 0x8c), (ulonglong) * (uint *)(puVar28 + 0x90), 0, iVar23,
		    (int)uVar22, in_stack_ffffff78);
		if ((int)param_8 != 0) {
			if (*(int *)(puVar28 + 0x98) != 0) {
				uVar14 = (undefined)(param_3 + 1);
				uVar19 = (undefined)(param_6 - 0x40);
				uVar15 = uVar24;
				uVar17 = uVar16;
				uVar21 = uVar20;
				town_draw_e_flag(param_1 + -0x40, param_2 - 1, param_3 + 1, param_4, param_5, param_6 - 0x40, param_7,
				    (char)uVar22, in_stack_ffffff78);
			}
		}
	}
	if ((*(byte *)(*(int *)puVar8 + iVar3 + iVar4) & 4) != 0) {
		uVar17 = 0;
		uVar21 = 0;
		uVar14 = uVar18;
		uVar15 = uVar20;
		uVar19 = uVar16;
		DrawDeadPlayer(param_2, param_3, param_6, param_7, 0, param_5, 0, uVar22, in_stack_ffffff78);
	}
	cVar13 = *(char *)(*(int *)puVar11 + iVar3 + iVar4);
	if ('\0' < cVar13) {
		cVar13 = cVar13 + -1;
		iVar27 = (int)cVar13 * 0x55ec;
		puVar28 = puVar29 + iVar27;
		uVar2 = *(uint *)(puVar28 + 100);
		lVar30 = (param_6 + (ulonglong) * (uint *)(puVar28 + 0x60)) - (ulonglong) * (uint *)(puVar28 + 0x94);
		if (cVar13 == *puVar9) {
			uVar22 = param_5;
			Cl2DecodeFrm2(0xa5, lVar30, param_7 + (ulonglong)uVar2, (ulonglong) * (uint *)(puVar28 + 0x7c),
			    (ulonglong) * (uint *)(puVar28 + 0x8c), (ulonglong) * (uint *)(puVar28 + 0x90), 0,
			    iVar23, in_stack_ffffff78);
		}
		puVar29 = puVar29 + iVar27;
		uVar14 = (undefined) * (uint *)(puVar29 + 0x7c);
		uVar15 = (undefined) * (uint *)(puVar29 + 0x8c);
		uVar17 = (undefined) * (uint *)(puVar29 + 0x90);
		uVar19 = 0;
		uVar21 = uVar16;
		Cl2DecodeFrm1(lVar30, param_7 + (ulonglong)uVar2, (ulonglong) * (uint *)(puVar29 + 0x7c),
		    (ulonglong) * (uint *)(puVar29 + 0x8c), (ulonglong) * (uint *)(puVar29 + 0x90), 0, iVar23,
		    (int)uVar22, in_stack_ffffff78);
		if ((int)param_8 != 0) {
			if (*(int *)(puVar29 + 0x98) != 0) {
				uVar14 = (undefined)(param_3 + 1);
				uVar19 = (undefined)(param_6 - 0x40);
				uVar15 = uVar24;
				uVar17 = uVar16;
				uVar21 = uVar20;
				town_draw_e_flag(param_1 + -0x40, param_2 - 1, param_3 + 1, param_4, param_5, param_6 - 0x40, param_7,
				    (char)uVar22, in_stack_ffffff78);
			}
		}
	}
	uVar31 = (undefined)in_stack_ffffff78;
	uVar24 = (undefined)uVar22;
	if ((*(byte *)(*(int *)puVar8 + iVar3 + iVar4) & 1) != 0) {
		uVar17 = 0;
		uVar21 = 0;
		uVar14 = uVar18;
		uVar15 = uVar20;
		uVar19 = uVar16;
		DrawMissile(iVar7, param_3, param_6, param_7, 0, param_5, 0, uVar22, in_stack_ffffff78);
	}
	cVar13 = *(char *)(*(int *)ppuVar12[-0x1d66] + iVar3 + iVar4);
	if (cVar13 != '\0') {
		town_special_upper((char)param_1, cVar13, uVar14, uVar15, uVar17, uVar19, uVar21, uVar24, uVar31,
		    in_stack_ffffff7f, in_stack_ffffff88, in_stack_ffffff8c);
	}
	return;
}

void town_draw_upper(ulonglong param_1, ulonglong param_2, ulonglong param_3, ulonglong param_4,
    int param_5, ulonglong param_6, int param_7, char param_8, undefined4 param_9)

{
	short sVar1;
	ushort uVar2;
	uint uVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	uint *puVar9;
	ulonglong uVar10;
	longlong lVar11;
	ulonglong uVar12;
	longlong lVar13;
	ulonglong uVar14;
	ulonglong uVar15;
	ulonglong uVar16;
	ulonglong uVar17;
	ulonglong uVar18;
	longlong lVar19;
	longlong lVar20;
	ushort *puVar21;
	uint *puVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	undefined4 in_stack_ffffff78;

	puVar9 = _DAT_100f2080;
	puVar8 = PTR_DAT_100f1a54;
	puVar7 = PTR_DAT_100f1a4c;
	puVar6 = PTR_DAT_100f1938;
	puVar5 = PTR_DAT_100f17cc;
	lVar19 = (longlong)param_8;
	uVar18 = SEXT48(param_7);
	uVar16 = SEXT48(param_5);
	iVar4 = (int)param_6;
	uVar3 = (iVar4 + 1) * 2;
	uVar10 = (ulonglong)uVar3;
	if (8 < (int)uVar3) {
		uVar10 = 8;
	}
	iVar27 = (int)param_4;
	uVar12 = param_4;
	uVar17 = param_6;
	if (param_7 != 0) {
		iVar25 = (int)param_2;
		if ((((iVar25 < 0) || (0x6f < iVar25)) || (iVar23 = (int)param_1, iVar23 < 0)) || (0x6f < iVar23)) {
			uVar12 = param_4;
			uVar17 = param_6;
			town_clear_upper_buf((undefined *)(*(int *)PTR_DAT_100f17cc + *(int *)(PTR_DAT_100f1938 + iVar27 * 4) + (int)param_3));
		} else {
			sVar1 = *(short *)(*(int *)PTR_DAT_100f1a54 + iVar23 * 0xe0 + iVar25 * 2);
			*_DAT_100f2080 = (int)sVar1;
			if (((longlong)sVar1 & 0xffffffffU) == 0) {
				uVar12 = param_4;
				uVar17 = param_6;
				town_clear_upper_buf((undefined *)(*(int *)puVar5 + *(int *)(puVar6 + iVar27 * 4) + (int)param_3));
			} else {
				uVar15 = (ulonglong) * (uint *)puVar5;
				lVar13 = (ulonglong) * (uint *)(puVar6 + iVar27 * 4) + param_3;
				lVar20 = uVar15 + lVar13 + 0x20;
				uVar12 = param_2;
				uVar17 = param_6;
				lVar11 = IsometricCoord(param_1, iVar25);
				iVar23 = 0;
				iVar25 = *(int *)puVar7 + (int)lVar11 * 0x20;
				do {
					if ((iVar23 <= iVar4) && (uVar2 = *(ushort *)(iVar25 + 2), *puVar9 = (uint)uVar2, uVar2 != 0)) {
						drawUpperScreen(lVar20, (char)uVar12, (char)lVar13, (char)uVar15, (char)uVar16, (char)uVar17,
						    (char)uVar18, (char)lVar19, in_stack_ffffff78);
					}
					iVar23 = iVar23 + 1;
					iVar25 = iVar25 + 4;
					lVar20 = lVar20 + -0x6000;
				} while (iVar23 < 7);
				lVar19 = 0;
				uVar12 = param_6;
				uVar16 = uVar10;
				uVar17 = param_3;
				uVar18 = param_4;
				town_draw_town_all((ulonglong) * (uint *)puVar5 + (ulonglong) * (uint *)(puVar6 + iVar27 * 4) + param_3, param_1, param_2, param_6,
				    uVar10, param_3, param_4, 0, in_stack_ffffff78);
			}
		}
		param_1 = param_1 + 1;
		param_2 = param_2 - 1;
		param_3 = param_3 + 0x40;
	}
	lVar11 = param_1 * 0xe0;
	puVar22 = (uint *)(puVar6 + iVar27 * 4);
	iVar27 = (int)param_2 << 1;
	iVar25 = 0;
	while (true) {
		iVar26 = (int)param_2;
		iVar24 = (int)param_1;
		iVar23 = (int)param_3;
		if (param_5 - param_7 <= iVar25)
			break;
		if (((iVar26 < 0) || (0x6f < iVar26)) || ((iVar24 < 0 || (0x6f < iVar24)))) {
			town_clear_upper_buf((undefined *)(*(int *)puVar5 + *puVar22 + iVar23));
		} else {
			*puVar9 = (int)*(short *)(*(int *)puVar8 + (int)lVar11 + iVar27);
			if (*puVar9 == 0) {
				town_clear_upper_buf((undefined *)(*(int *)puVar5 + *puVar22 + iVar23));
			} else {
				uVar14 = (ulonglong) * (uint *)puVar5;
				lVar20 = uVar14 + (ulonglong)*puVar22 + param_3;
				uVar15 = param_2;
				lVar13 = IsometricCoord(param_1, iVar26);
				iVar23 = 0;
				lVar13 = (ulonglong) * (uint *)puVar7 + (ulonglong)(uint)((int)lVar13 << 5);
				do {
					if (iVar23 <= iVar4) {
						uVar2 = *(ushort *)lVar13;
						*puVar9 = (uint)uVar2;
						if (uVar2 != 0) {
							drawUpperScreen(lVar20, (char)uVar15, (char)uVar14, (char)uVar12, (char)uVar16, (char)uVar17,
							    (char)uVar18, (char)lVar19, in_stack_ffffff78);
						}
						uVar2 = *(ushort *)((int)lVar13 + 2);
						*puVar9 = (uint)uVar2;
						if (uVar2 != 0) {
							drawUpperScreen(lVar20 + 0x20, (char)uVar15, (char)uVar14, (char)uVar12, (char)uVar16,
							    (char)uVar17, (char)uVar18, (char)lVar19, in_stack_ffffff78);
						}
					}
					iVar23 = iVar23 + 1;
					lVar13 = lVar13 + 4;
					lVar20 = lVar20 + -0x6000;
				} while (iVar23 < 7);
				lVar19 = 1;
				uVar12 = param_6;
				uVar16 = uVar10;
				uVar17 = param_3;
				uVar18 = param_4;
				town_draw_town_all((ulonglong) * (uint *)puVar5 + (ulonglong)*puVar22 + param_3, param_1, param_2,
				    param_6, uVar10, param_3, param_4, 1, in_stack_ffffff78);
			}
		}
		lVar11 = lVar11 + 0xe0;
		param_1 = param_1 + 1;
		iVar27 = iVar27 + -2;
		param_2 = param_2 - 1;
		param_3 = param_3 + 0x40;
		iVar25 = iVar25 + 1;
	}
	if (param_7 != 0) {
		if ((((iVar26 < 0) || (0x6f < iVar26)) || (iVar24 < 0)) || (0x6f < iVar24)) {
			town_clear_upper_buf((undefined *)(*(int *)puVar5 + *puVar22 + iVar23));
		} else {
			*puVar9 = (int)*(short *)(*(int *)puVar8 + iVar24 * 0xe0 + iVar26 * 2);
			if (*puVar9 == 0) {
				town_clear_upper_buf((undefined *)(*(int *)puVar5 + *puVar22 + iVar23));
			} else {
				uVar14 = (ulonglong) * (uint *)puVar5;
				lVar13 = uVar14 + (ulonglong)*puVar22 + param_3;
				uVar15 = param_2;
				lVar11 = IsometricCoord(param_1, iVar26);
				iVar27 = 0;
				puVar21 = (ushort *)(*(int *)puVar7 + (int)lVar11 * 0x20);
				do {
					if ((iVar27 <= iVar4) && (uVar2 = *puVar21, *puVar9 = (uint)uVar2, uVar2 != 0)) {
						drawUpperScreen(lVar13, (char)uVar15, (char)uVar14, (char)uVar12, (char)uVar16, (char)uVar17,
						    (char)uVar18, (char)lVar19, in_stack_ffffff78);
					}
					iVar27 = iVar27 + 1;
					puVar21 = puVar21 + 2;
					lVar13 = lVar13 + -0x6000;
				} while (iVar27 < 7);
				town_draw_town_all((ulonglong) * (uint *)puVar5 + (ulonglong)*puVar22 + param_3, param_1, param_2,
				    param_6, uVar10, param_3, param_4, 0, in_stack_ffffff78);
			}
		}
	}
	return;
}

void T_DrawGame(longlong param_1, longlong param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, char param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined4 *puVar5;
	undefined4 *puVar6;
	undefined8 uVar7;
	longlong lVar8;
	longlong lVar9;
	ulonglong uVar10;
	ulonglong uVar11;
	int iVar12;
	ulonglong uVar13;
	ulonglong uVar14;
	int iVar15;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffd0;

	puVar5 = _DAT_100f1d74;
	puVar4 = PTR_DAT_100f1938;
	puVar3 = PTR_DAT_100f180c;
	puVar2 = PTR_DAT_100f17cc;
	puVar1 = PTR_DAT_100f17c8;
	lVar8 = (longlong)param_8;
	uVar10 = param_1 - 10;
	uVar11 = param_2 - 1;
	iVar12 = 10;
	*_DAT_100f1d78 = 0x280;
	puVar6 = _DAT_100f1d70;
	*puVar5 = 0x160;
	puVar5 = _DAT_100f1d6c;
	*puVar6 = 10;
	*puVar5 = 0xb;
	uVar14 = (ulonglong) * (uint *)PTR_DAT_100f1818 + 0x40;
	uVar13 = (ulonglong) * (uint *)(PTR_DAT_100f1818 + 4) + 0xaf;
	if ((*(int *)puVar3 != 0) || (*(int *)PTR_DAT_100f1808 != 0)) {
		iVar12 = 6;
		uVar10 = param_1 - 8;
		uVar11 = param_2 - 3;
		uVar14 = (ulonglong) * (uint *)PTR_DAT_100f1818 + 0x160;
	}
	if ((*(int *)PTR_DAT_100f1814 != 0) || (*(int *)PTR_DAT_100f1810 != 0)) {
		iVar12 = 6;
		uVar10 = uVar10 + 2;
		uVar11 = uVar11 - 2;
		uVar14 = uVar14 - 0x20;
	}
	if (*(uint *)(PTR_DAT_100f1818 + 0x10) < 9) {
		// WARNING: Could not recover jumptable at 0x100b23cc. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(PTR_PTR_LAB_100f3968 + *(uint *)(PTR_DAT_100f1818 + 0x10) * 4))();
		return;
	}
	lVar9 = 0;
	*(int *)puVar1 = *(int *)puVar2 + *(int *)(puVar4 + 0x280);
	do {
		town_draw_upper(uVar10, uVar11, uVar14, uVar13, iVar12, lVar9, 0, (char)lVar8, in_stack_ffffffa8);
		uVar11 = uVar11 + 1;
		uVar7 = 1;
		town_draw_upper(uVar10, uVar11, uVar14 - 0x20, uVar13 + 0x10, iVar12, lVar9, 1, (char)lVar8,
		    in_stack_ffffffa8);
		lVar9 = lVar9 + 1;
		uVar13 = uVar13 + 0x20;
		uVar10 = uVar10 + 1;
	} while ((int)lVar9 < 7);
	iVar15 = 0;
	*(int *)puVar1 = *(int *)puVar2 + *(int *)(puVar4 + 0x800);
	while (iVar15 < 5) {
		town_draw_lower(uVar10, uVar11, uVar14, uVar13, iVar12, 0, (char)uVar7, (char)lVar8, in_stack_ffffffa8);
		uVar11 = uVar11 + 1;
		town_draw_lower(uVar10, uVar11, uVar14 - 0x20, uVar13 + 0x10, iVar12, 1, (char)uVar7, (char)lVar8,
		    in_stack_ffffffa8);
		uVar10 = uVar10 + 1;
		uVar13 = uVar13 + 0x20;
		iVar15 = iVar15 + 1;
	}
	lVar9 = 0;
	do {
		town_draw_lower_2(uVar10, uVar11, uVar14, uVar13, iVar12, lVar9, 0, (char)lVar8, in_stack_ffffffa8,
		    in_stack_ffffffaf, in_stack_ffffffd0);
		uVar11 = uVar11 + 1;
		town_draw_lower_2(uVar10, uVar11, uVar14 - 0x20, uVar13 + 0x10, iVar12, lVar9, 1, (char)lVar8,
		    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffd0);
		lVar9 = lVar9 + 1;
		uVar13 = uVar13 + 0x20;
		uVar10 = uVar10 + 1;
	} while ((int)lVar9 < 7);
	return;
}

void T_DrawZoom(longlong param_1, longlong param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, char param_8,
    undefined4 param_9)

{
	undefined uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined4 *puVar5;
	undefined4 *puVar6;
	undefined4 *puVar7;
	undefined2 uVar8;
	ulonglong uVar9;
	ulonglong uVar10;
	undefined2 *puVar11;
	int iVar12;
	undefined *puVar13;
	int iVar14;
	undefined2 *puVar15;
	longlong lVar16;
	undefined8 uVar17;
	int iVar18;
	longlong lVar19;
	int iVar20;
	ulonglong uVar21;
	ulonglong uVar22;
	ulonglong uVar23;
	ulonglong uVar24;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffd0;

	puVar7 = _DAT_100f1d74;
	puVar5 = _DAT_100f1d6c;
	puVar4 = PTR_DAT_100f1938;
	puVar2 = PTR_DAT_100f17cc;
	puVar13 = PTR_DAT_100f17c8;
	lVar16 = (longlong)param_8;
	uVar9 = ZEXT48(&toc);
	uVar21 = param_1 - 6;
	uVar22 = param_2 - 1;
	*_DAT_100f1d78 = 0x180;
	puVar6 = _DAT_100f1d70;
	*puVar7 = 0xc0;
	*puVar6 = 6;
	puVar3 = PTR_DAT_100f1818;
	*puVar5 = 6;
	uVar10 = (ulonglong) * (uint *)puVar3;
	uVar24 = uVar10 + 0x40;
	uVar23 = (ulonglong) * (uint *)(puVar3 + 4) + 0x8f;
	if (8 < *(uint *)(puVar3 + 0x10)) {
		lVar19 = 0;
		*(int *)puVar13 = *(int *)puVar2 + *(int *)(puVar4 + 0x23c);
		do {
			town_draw_upper(uVar21, uVar22, uVar24, uVar23, 6, lVar19, 0, (char)lVar16, in_stack_ffffffa8);
			uVar22 = uVar22 + 1;
			uVar17 = 1;
			town_draw_upper(uVar21, uVar22, uVar10 + 0x20, uVar23 + 0x10, 6, lVar19, 1, (char)lVar16,
			    in_stack_ffffffa8);
			lVar19 = lVar19 + 1;
			uVar23 = uVar23 + 0x20;
			uVar21 = uVar21 + 1;
		} while ((int)lVar19 < 7);
		iVar20 = 0;
		*(int *)puVar13 = *(int *)puVar2 + *(int *)(puVar4 + 0x500);
		while (iVar20 < 0) {
			town_draw_lower(uVar21, uVar22, uVar24, uVar23, 6, 0, (char)uVar17, (char)lVar16, in_stack_ffffffa8);
			uVar22 = uVar22 + 1;
			town_draw_lower(uVar21, uVar22, uVar10 + 0x20, uVar23 + 0x10, 6, 1, (char)uVar17, (char)lVar16,
			    in_stack_ffffffa8);
			uVar21 = uVar21 + 1;
			uVar23 = uVar23 + 0x20;
			iVar20 = iVar20 + 1;
		}
		lVar19 = 0;
		do {
			town_draw_lower_2(uVar21, uVar22, uVar24, uVar23, 6, lVar19, 0, (char)lVar16, in_stack_ffffffa8,
			    in_stack_ffffffaf, in_stack_ffffffd0);
			uVar22 = uVar22 + 1;
			town_draw_lower_2(uVar21, uVar22, uVar10 + 0x20, uVar23 + 0x10, 6, lVar19, 1, (char)lVar16,
			    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffd0);
			lVar19 = lVar19 + 1;
			uVar23 = uVar23 + 0x20;
			uVar21 = uVar21 + 1;
		} while ((int)lVar19 < 7);
		iVar20 = (int)uVar9;
		if ((**(int **)(iVar20 + -0x77c4) == 0) && (**(int **)(iVar20 + -0x77c8) == 0)) {
			if ((**(int **)(iVar20 + -0x77bc) == 0) && (**(int **)(iVar20 + -0x77c0) == 0)) {
				iVar12 = 0x3bd60;
				iVar20 = 0x5fa40;
				iVar14 = 0x140;
			} else {
				iVar12 = 0x3bdb0;
				iVar20 = 0x5fa40;
				iVar14 = 0xa0;
			}
		} else {
			iVar12 = 0x3bdb0;
			iVar20 = 0x5fb80;
			iVar14 = 0xa0;
		}
		iVar18 = iVar14 + 0x300;
		puVar11 = (undefined2 *)(*(int *)puVar2 + iVar20);
		puVar13 = (undefined *)(*(int *)puVar2 + iVar12);
		puVar15 = puVar11 + 0x180;
		lVar16 = 0xb0;
		iVar20 = iVar14;
		do {
			do {
				uVar1 = *puVar13;
				iVar20 = iVar20 + -1;
				puVar13 = puVar13 + 1;
				uVar8 = CONCAT11(uVar1, uVar1);
				*puVar11 = uVar8;
				puVar11 = puVar11 + 1;
				*puVar15 = uVar8;
				puVar15 = puVar15 + 1;
			} while (iVar20 != 0);
			lVar16 = lVar16 + -1;
			puVar13 = puVar13 + -iVar18;
			puVar15 = puVar15 + iVar18 * 0x7fffffff;
			puVar11 = puVar11 + iVar18 * 0x7fffffff;
			iVar20 = iVar14;
		} while (lVar16 != 0);
		return;
	}
	// WARNING: Could not recover jumptable at 0x100b2624. Too many branches
	// WARNING: Treating indirect jump as call
	(**(code **)(_DAT_100f3964 + *(uint *)(puVar3 + 0x10) * 4))();
	return;
}

void T_DrawView(longlong param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined4 *puVar4;
	undefined **ppuVar5;
	ulonglong uVar6;
	undefined uVar7;
	ulonglong uVar8;
	undefined uVar9;
	ulonglong uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined7 uVar13;
	undefined uVar14;
	undefined uVar15;
	undefined uVar16;
	undefined uVar17;
	undefined4 in_stack_ffffffc8;

	puVar4 = _DAT_100f1d3c;
	puVar2 = PTR_DAT_100f1918;
	puVar1 = PTR_DAT_100f18a0;
	uVar13 = (undefined7)((ulonglong)param_5 >> 8);
	uVar14 = (undefined)param_5;
	ppuVar5 = &toc;
	uVar10 = ZEXT48(_DAT_100f1d3c);
	*_DAT_100f1d40 = 0;
	puVar3 = PTR_DAT_100f1964;
	uVar8 = ZEXT48(PTR_DAT_100f1964);
	*puVar4 = 0;
	uVar11 = SUB41(puVar4, 0);
	uVar9 = SUB41(puVar3, 0);
	if (*(int *)puVar3 == 0) {
		T_DrawZoom(param_1, param_2, uVar9, uVar11, uVar14, (char)param_6, (char)param_7, (char)param_8,
		    in_stack_ffffffc8);
	} else {
		T_DrawGame(param_1, param_2, uVar9, uVar11, uVar14, (char)param_6, (char)param_7, (char)param_8,
		    in_stack_ffffffc8);
	}
	if (*(int *)ppuVar5[-0x1dde] != 0) {
		DrawAutomap((char)ppuVar5[-0x1dde], (char)param_2, (char)uVar8, (char)uVar10, uVar14, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffffc8);
	}
	if ((*ppuVar5[-0x1dd9] != '\0') && (*puVar1 == '\0')) {
		DrawSText((char)ppuVar5[-0x1dd9], (char)param_2, (char)uVar8, (char)uVar10, uVar14, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffffc8);
	}
	if (*(int *)ppuVar5[-0x1def] == 0) {
		if (*(int *)ppuVar5[-0x1df0] != 0) {
			DrawSpellBook();
		}
	} else {
		DrawInv();
	}
	DrawDurIcon();
	if (*(int *)ppuVar5[-0x1df1] == 0) {
		if (*(int *)ppuVar5[-0x1df2] == 0) {
			param_2 = ZEXT48(ppuVar5[-0x1dea]);
			if ((*(int *)(ppuVar5[-0x1dea] + *(int *)ppuVar5[-0x1deb] * 0x55ec + 0x180) != 0) && (*(int *)puVar2 == 0)) {
				DrawLevelUpIcon();
			}
		} else {
			DrawQuestLog();
		}
	} else {
		DrawChr();
	}
	uVar6 = ZEXT48(ppuVar5[-0x1d9d]);
	if (*(int *)ppuVar5[-0x1d9d] != 0) {
		uVar6 = DrawUniqueInfo();
	}
	uVar17 = (undefined)param_8;
	uVar16 = (undefined)param_7;
	uVar15 = (undefined)param_6;
	uVar12 = (undefined)uVar10;
	uVar11 = (undefined)uVar8;
	uVar9 = (undefined)param_2;
	if (*puVar1 != '\0') {
		DrawQText(uVar6, param_2, uVar8, uVar10, CONCAT71(uVar13, uVar14), param_6, param_7, param_8,
		    in_stack_ffffffc8);
	}
	if (*(int *)puVar2 != 0) {
		DrawSpellList();
	}
	if (*(int *)ppuVar5[-0x1dc1] != 0) {
		DrawGoldSplit((ulonglong) * (uint *)ppuVar5[-0x1dc2]);
	}
	if (*(int *)ppuVar5[-0x1d75] != 0) {
		DrawHelp();
	}
	if (*ppuVar5[-0x1d76] != '\0') {
		DrawDiabloMsg();
	}
	if ((*(int *)ppuVar5[-0x1d74] != 0) && (*(int *)ppuVar5[-0x1d73] == 0)) {
		gmenu_draw_pause();
	}
	DrawPlrMsg();
	gmenu_draw();
	doom_draw();
	uVar7 = DrawInfoBox();
	uVar7 = DrawLifeFlask(uVar7, uVar9, uVar11, uVar12, uVar14, uVar15, uVar16, uVar17, in_stack_ffffffc8);
	DrawManaFlask(uVar7, uVar9, uVar11, uVar12, uVar14, uVar15, uVar16, uVar17, in_stack_ffffffc8);
	return;
}

void SetTownMicros(undefined8 param_1, undefined8 param_2, longlong param_3, longlong param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	short sVar1;
	undefined *puVar2;
	int iVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined4 *puVar7;
	undefined4 *puVar8;
	undefined4 *puVar9;
	undefined4 *puVar10;
	ulonglong uVar11;
	int iVar12;
	ulonglong uVar13;
	longlong lVar14;
	undefined2 *puVar15;
	undefined uVar16;
	uint uVar17;
	undefined uVar18;
	longlong lVar19;
	longlong lVar20;
	longlong lVar21;
	int iVar22;
	longlong lVar23;
	int iVar24;
	int iVar25;
	longlong lVar26;
	undefined4 in_stack_ffffff78;

	puVar10 = _DAT_100f1d78;
	puVar9 = _DAT_100f1d74;
	puVar8 = _DAT_100f1d70;
	puVar7 = _DAT_100f1d6c;
	puVar6 = PTR_DAT_100f1a60;
	puVar5 = PTR_DAT_100f1a54;
	puVar4 = PTR_DAT_100f1a4c;
	uVar18 = (undefined)param_5;
	lVar21 = (longlong)param_8;
	lVar20 = (longlong)param_7;
	lVar19 = (longlong)param_6;
	uVar11 = ZEXT48(&toc);
	uVar13 = FUN_100b8f7c((ulonglong) * (uint *)PTR_DAT_100f1a60, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff78);
	iVar22 = 0;
	iVar24 = 0;
	do {
		lVar23 = 0;
		iVar25 = 0;
		do {
			sVar1 = *(short *)(iVar24 + *(int *)puVar5 + iVar25);
			lVar14 = IsometricCoord(lVar23, iVar22);
			iVar12 = (int)uVar11;
			lVar14 = (ulonglong) * (uint *)puVar4 + (ulonglong)(uint)((int)lVar14 << 5);
			uVar16 = (undefined)lVar14;
			if (sVar1 == 0) {
				puVar15 = (undefined2 *)lVar14;
				*puVar15 = 0;
				puVar15[1] = 0;
				puVar15[2] = 0;
				puVar15[3] = 0;
				puVar15[4] = 0;
				puVar15[5] = 0;
				puVar15[6] = 0;
				puVar15[7] = 0;
				puVar15[8] = 0;
				puVar15[9] = 0;
				puVar15[10] = 0;
				puVar15[0xb] = 0;
				puVar15[0xc] = 0;
				puVar15[0xd] = 0;
				puVar15[0xe] = 0;
				puVar15[0xf] = 0;
			} else {
				lVar26 = 2;
				param_4 = uVar13 + (ulonglong)(uint)(((int)sVar1 + -1) * 0x20);
				param_3 = 0;
				do {
					uVar17 = (uint)param_3;
					iVar3 = (int)param_4;
					puVar2 = (undefined *)(iVar3 + (0xe - (uVar17 & 0xe)) * 2);
					puVar15 = (undefined2 *)lVar14;
					*puVar15 = CONCAT11(puVar2[1], *puVar2);
					puVar2 = (undefined *)(iVar3 + ((0xe - (uVar17 + 1 & 0xe)) + (uVar17 + 1 & 1)) * 2);
					puVar15[1] = CONCAT11(puVar2[1], *puVar2);
					puVar2 = (undefined *)(iVar3 + (0xe - (uVar17 + 2 & 0xe)) * 2);
					puVar15[2] = CONCAT11(puVar2[1], *puVar2);
					puVar2 = (undefined *)(iVar3 + ((0xe - (uVar17 + 3 & 0xe)) + (uVar17 + 3 & 1)) * 2);
					puVar15[3] = CONCAT11(puVar2[1], *puVar2);
					puVar2 = (undefined *)(iVar3 + (0xe - (uVar17 + 4 & 0xe)) * 2);
					puVar15[4] = CONCAT11(puVar2[1], *puVar2);
					puVar2 = (undefined *)(iVar3 + ((0xe - (uVar17 + 5 & 0xe)) + (uVar17 + 5 & 1)) * 2);
					puVar15[5] = CONCAT11(puVar2[1], *puVar2);
					puVar2 = (undefined *)(iVar3 + (0xe - (uVar17 + 6 & 0xe)) * 2);
					puVar15[6] = CONCAT11(puVar2[1], *puVar2);
					puVar2 = (undefined *)(iVar3 + ((0xe - (uVar17 + 7 & 0xe)) + (uVar17 + 7 & 1)) * 2);
					param_3 = param_3 + 8;
					puVar15[7] = CONCAT11(puVar2[1], *puVar2);
					lVar14 = lVar14 + 0x10;
					uVar16 = (undefined)lVar14;
					lVar26 = lVar26 + -1;
				} while (lVar26 != 0);
			}
			lVar23 = lVar23 + 1;
			iVar25 = iVar25 + 0xe0;
		} while ((int)lVar23 < 0x70);
		iVar22 = iVar22 + 1;
		iVar24 = iVar24 + 2;
	} while (iVar22 < 0x70);
	FUN_100b9100(*(int *)puVar6, uVar16, (char)param_3, (char)param_4, uVar18, (char)lVar19, (char)lVar20,
	    (char)lVar21, in_stack_ffffff78);
	if (**(int **)(iVar12 + -0x766c) == 0) {
		*puVar10 = 0x180;
		*puVar9 = 0xe0;
		*puVar8 = 6;
		*puVar7 = 7;
	} else {
		*puVar10 = 0x280;
		*puVar9 = 0x160;
		*puVar8 = 10;
		*puVar7 = 0xb;
	}
	return;
}

void T_FillSector(longlong param_1, longlong param_2, longlong param_3, undefined8 param_4,
    longlong param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	short sVar1;
	undefined *puVar2;
	int iVar3;
	int iVar4;
	undefined *puVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	longlong lVar8;
	undefined uVar9;
	ulonglong uVar10;
	undefined uVar11;
	undefined8 uVar12;
	longlong lVar13;
	undefined uVar14;
	longlong lVar15;
	undefined uVar16;
	longlong lVar17;
	undefined uVar18;
	longlong lVar19;
	undefined uVar20;
	longlong lVar21;
	undefined uVar22;
	longlong lVar23;
	undefined4 in_stack_ffffffa8;

	puVar5 = PTR_DAT_100f1a54;
	lVar21 = (longlong)param_8;
	lVar19 = (longlong)param_7;
	lVar17 = (longlong)param_6;
	lVar8 = param_2;
	lVar13 = param_3;
	uVar12 = param_4;
	lVar15 = param_5;
	uVar6 = FUN_100b8f7c(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	uVar7 = FUN_100b8f7c(param_2, lVar8, lVar13, uVar12, lVar15, (int)lVar17, (int)lVar19, (int)lVar21,
	    in_stack_ffffffa8);
	uVar10 = (ulonglong)(uint)((int)param_4 << 1);
	lVar15 = 4;
	lVar13 = 0;
	while (true) {
		uVar22 = (undefined)lVar21;
		uVar20 = (undefined)lVar19;
		uVar18 = (undefined)lVar17;
		uVar16 = (undefined)lVar15;
		uVar14 = (undefined)lVar13;
		uVar11 = (undefined)uVar10;
		uVar9 = (undefined)lVar8;
		if (param_6 <= (int)lVar13)
			break;
		lVar8 = param_3 * 0xe0;
		lVar23 = param_5;
		if (0 < (int)param_5) {
			do {
				puVar2 = (undefined *)((int)uVar7 + (int)lVar15);
				sVar1 = CONCAT11(puVar2[1], *puVar2);
				iVar4 = (int)lVar8;
				iVar3 = (int)uVar10;
				if (sVar1 == 0) {
					lVar19 = 0;
					*(undefined2 *)(iVar3 + *(int *)puVar5 + iVar4) = 0;
					*(undefined2 *)(iVar3 + *(int *)puVar5 + iVar4 + 0xe0) = 0;
					*(undefined2 *)(iVar3 + *(int *)puVar5 + iVar4 + 2) = 0;
					lVar17 = (ulonglong) * (uint *)puVar5 + lVar8;
					*(undefined2 *)(iVar3 + (int)lVar17 + 0xe2) = 0;
				} else {
					puVar2 = (undefined *)((int)uVar6 + ((int)sVar1 + -1) * 8);
					*(short *)(iVar3 + *(int *)puVar5 + iVar4) = CONCAT11(puVar2[1], *puVar2) + 1;
					*(short *)(iVar3 + *(int *)puVar5 + iVar4 + 0xe0) = CONCAT11(puVar2[3], puVar2[2]) + 1;
					lVar21 = (longlong)CONCAT11(puVar2[5], puVar2[4]) + 1;
					*(undefined2 *)(iVar3 + *(int *)puVar5 + iVar4 + 2) = (short)lVar21;
					lVar17 = (ulonglong) * (uint *)puVar5 + lVar8;
					lVar19 = (longlong)CONCAT11(puVar2[7], puVar2[6]) + 1;
					*(undefined2 *)(iVar3 + (int)lVar17 + 0xe2) = (short)lVar19;
				}
				lVar8 = lVar8 + 0x1c0;
				lVar15 = lVar15 + 2;
				lVar23 = lVar23 + -1;
			} while (lVar23 != 0);
		}
		uVar10 = uVar10 + 4;
		lVar13 = lVar13 + 1;
	}
	FUN_100b9100((int)param_1, uVar9, uVar11, uVar14, uVar16, uVar18, uVar20, uVar22, in_stack_ffffffa8);
	FUN_100b9100((int)param_2, uVar9, uVar11, uVar14, uVar16, uVar18, uVar20, uVar22, in_stack_ffffffa8);
	return;
}

void T_FillTile(longlong param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	int iVar3;
	undefined *puVar4;
	ulonglong uVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined4 in_stack_ffffffb8;

	puVar4 = PTR_DAT_100f1a54;
	uVar11 = (undefined)param_8;
	uVar10 = (undefined)param_7;
	uVar9 = (undefined)param_6;
	uVar5 = FUN_100b8f7c(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	lVar8 = uVar5 + (ulonglong)(uint)(((int)param_4 + -1) * 8);
	puVar2 = (undefined *)lVar8;
	uVar1 = (int)param_3 * 2;
	iVar3 = (int)(param_2 * 0xe0);
	*(short *)(*(int *)puVar4 + iVar3 + uVar1) = CONCAT11(puVar2[1], *puVar2) + 1;
	*(short *)(*(int *)puVar4 + iVar3 + uVar1 + 0xe0) = CONCAT11(puVar2[3], puVar2[2]) + 1;
	*(short *)(*(int *)puVar4 + iVar3 + uVar1 + 2) = CONCAT11(puVar2[5], puVar2[4]) + 1;
	lVar7 = (longlong)CONCAT11(puVar2[7], puVar2[6]) + 1;
	lVar6 = (ulonglong) * (uint *)puVar4 + param_2 * 0xe0 + (ulonglong)uVar1;
	*(undefined2 *)((int)lVar6 + 0xe2) = (short)lVar7;
	FUN_100b9100((int)param_1, (char)lVar6, (char)lVar7, (char)uVar1, (char)lVar8, uVar9, uVar10, uVar11,
	    in_stack_ffffffb8);
	return;
}

void T_Pass3(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	char cVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	undefined *puVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined8 uVar10;
	undefined uVar11;
	undefined8 uVar12;
	undefined uVar13;
	undefined8 uVar14;
	undefined *puVar15;
	undefined4 uVar16;
	undefined uVar17;
	longlong lVar18;
	undefined4 uVar19;
	undefined uVar20;
	longlong lVar21;
	undefined4 uVar22;
	undefined uVar23;
	int iVar24;
	int iVar26;
	longlong lVar25;
	longlong lVar27;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined in_stack_ffffffcb;
	int *local_18;
	int *local_14[5];

	puVar15 = PTR_DAT_100f1a54;
	puVar5 = PTR_DAT_100f1824;
	uVar6 = ZEXT48(&toc);
	iVar24 = 0;
	lVar21 = 0;
	do {
		lVar18 = 0;
		lVar27 = 0xe;
		uVar14 = 0;
		uVar12 = 0;
		uVar10 = 0;
		do {
			iVar4 = (int)lVar18;
			iVar26 = (int)lVar21;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar4) = 0;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar4 + 0xe0) = 0;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar4 + 2) = 0;
			iVar2 = iVar4 + 0x1c0;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar4 + 0xe2) = 0;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar2) = 0;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar2 + 0xe0) = 0;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar2 + 2) = 0;
			iVar3 = iVar4 + 0x380;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar2 + 0xe2) = 0;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar3) = 0;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar3 + 0xe0) = 0;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar3 + 2) = 0;
			iVar4 = iVar4 + 0x540;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar3 + 0xe2) = 0;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar4) = 0;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar4 + 0xe0) = 0;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar4 + 2) = 0;
			lVar18 = lVar18 + 0x700;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar4 + 0xe2) = 0;
			lVar27 = lVar27 + -1;
		} while (lVar27 != 0);
		iVar24 = iVar24 + 2;
		lVar21 = lVar21 + 4;
	} while (iVar24 < 0x70);
	lVar27 = LoadFileInMem((ulonglong)_DAT_100f3960, (undefined4 *)0x0, 0, 0, 0, puVar15, (int)lVar18,
	    (int)lVar21, in_stack_ffffffb8);
	local_14[0] = (int *)lVar27;
	uVar7 = LoadFileInMem((ulonglong) * (uint *)((int)uVar6 + -0x5674), (undefined4 *)0x0, uVar10, uVar12,
	    uVar14, puVar15, (int)lVar18, (int)lVar21, in_stack_ffffffb8);
	local_18 = (int *)uVar7;
	uVar10 = 0x2e;
	uVar12 = 0x2e;
	uVar8 = (undefined)uVar7;
	uVar14 = 0x19;
	uVar16 = 0x19;
	T_FillSector(ZEXT48(local_14[0]), uVar7 & 0xffffffff, 0x2e, 0x2e, 0x19, 0x19, (int)lVar18, (int)lVar21,
	    in_stack_ffffffb8);
	mem_free_dbg(&local_18, uVar8, (char)uVar10, (char)uVar12, (char)uVar14, (char)uVar16, (char)lVar18,
	    (char)lVar21, in_stack_ffffffb8);
	uVar7 = LoadFileInMem((ulonglong) * (uint *)((int)uVar6 + -0x5678), (undefined4 *)0x0, uVar10, uVar12,
	    uVar14, uVar16, (int)lVar18, (int)lVar21, in_stack_ffffffb8);
	local_18 = (int *)uVar7;
	uVar10 = 0x2e;
	uVar12 = 0;
	uVar8 = (undefined)uVar7;
	uVar14 = 0x19;
	uVar16 = 0x17;
	T_FillSector(ZEXT48(local_14[0]), uVar7 & 0xffffffff, 0x2e, 0, 0x19, 0x17, (int)lVar18, (int)lVar21,
	    in_stack_ffffffb8);
	mem_free_dbg(&local_18, uVar8, (char)uVar10, (char)uVar12, (char)uVar14, (char)uVar16, (char)lVar18,
	    (char)lVar21, in_stack_ffffffb8);
	uVar7 = LoadFileInMem((ulonglong) * (uint *)((int)uVar6 + -0x567c), (undefined4 *)0x0, uVar10, uVar12,
	    uVar14, uVar16, (int)lVar18, (int)lVar21, in_stack_ffffffb8);
	local_18 = (int *)uVar7;
	uVar10 = 0;
	uVar12 = 0x2e;
	uVar8 = (undefined)uVar7;
	uVar14 = 0x17;
	uVar16 = 0x19;
	T_FillSector(ZEXT48(local_14[0]), uVar7 & 0xffffffff, 0, 0x2e, 0x17, 0x19, (int)lVar18, (int)lVar21,
	    in_stack_ffffffb8);
	mem_free_dbg(&local_18, uVar8, (char)uVar10, (char)uVar12, (char)uVar14, (char)uVar16, (char)lVar18,
	    (char)lVar21, in_stack_ffffffb8);
	uVar7 = LoadFileInMem((ulonglong) * (uint *)((int)uVar6 + -0x5680), (undefined4 *)0x0, uVar10, uVar12,
	    uVar14, uVar16, (int)lVar18, (int)lVar21, in_stack_ffffffb8);
	local_18 = (int *)uVar7;
	uVar10 = 0;
	lVar27 = 0;
	uVar8 = (undefined)uVar7;
	uVar12 = 0x17;
	uVar14 = 0x17;
	T_FillSector(ZEXT48(local_14[0]), uVar7 & 0xffffffff, 0, 0, 0x17, 0x17, (int)lVar18, (int)lVar21,
	    in_stack_ffffffb8);
	mem_free_dbg(&local_18, uVar8, (char)uVar10, (char)lVar27, (char)uVar12, (char)uVar14, (char)lVar18,
	    (char)lVar21, in_stack_ffffffb8);
	uVar22 = (undefined4)lVar21;
	uVar19 = (undefined4)lVar18;
	uVar16 = (undefined4)uVar14;
	iVar24 = (int)uVar6;
	if (**(char **)(iVar24 + -0x77f0) == '\x01') {
		iVar26 = *(int *)(iVar24 + -0x77a8) + 0x5590;
		if ((*(byte *)(iVar26 + *(int *)puVar5 * 0x55ec) & 1) == 0) {
			uVar10 = 0x14;
			lVar27 = 0x140;
			T_FillTile(ZEXT48(local_14[0]), 0x30, 0x14, 0x140, uVar12, uVar16, uVar19, uVar22, in_stack_ffffffb8);
		}
		if ((*(byte *)(iVar26 + *(int *)puVar5 * 0x55ec) & 2) == 0) {
			T_FillTile(ZEXT48(local_14[0]), 0x10, 0x44, 0x14c, uVar12, (int)uVar14, (int)lVar18, (int)lVar21,
			    in_stack_ffffffb8);
			uVar10 = 0x46;
			lVar27 = 0x14b;
			T_FillTile(ZEXT48(local_14[0]), 0x10, 0x46, 0x14b, uVar12, (int)uVar14, (int)lVar18, (int)lVar21,
			    in_stack_ffffffb8);
		}
		uVar22 = (undefined4)lVar21;
		uVar19 = (undefined4)lVar18;
		uVar16 = (undefined4)uVar14;
		iVar24 = (int)uVar6;
		if ((*(byte *)(iVar26 + *(int *)puVar5 * 0x55ec) & 4) == 0) {
			lVar25 = 0x24;
			do {
				lVar27 = random(0, 4, (char)uVar10, (char)lVar27, (char)uVar12, (char)uVar14, (char)lVar18,
				    (char)lVar21, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb);
				lVar27 = lVar27 + 1;
				uVar10 = 0x4e;
				T_FillTile(ZEXT48(local_14[0]), lVar25, 0x4e, lVar27, uVar12, (int)uVar14, (int)lVar18,
				    (int)lVar21, in_stack_ffffffb8);
				uVar22 = (undefined4)lVar21;
				uVar19 = (undefined4)lVar18;
				uVar16 = (undefined4)uVar14;
				iVar24 = (int)uVar6;
				lVar25 = lVar25 + 1;
			} while ((int)lVar25 < 0x2e);
		}
	}
	uVar23 = (undefined)uVar22;
	uVar20 = (undefined)uVar19;
	uVar17 = (undefined)uVar16;
	uVar8 = (undefined)uVar12;
	cVar1 = *(char *)(*(int *)(iVar24 + -0x7604) + 0x13a);
	if ((cVar1 == '\x03') || (cVar1 == '\0')) {
		uVar9 = 0x3c;
		uVar11 = 0x46;
		uVar13 = 0x47;
		T_FillTile(ZEXT48(local_14[0]), 0x3c, 0x46, 0x47, uVar12, uVar16, uVar19, uVar22, in_stack_ffffffb8);
	} else {
		uVar9 = 0x3c;
		uVar11 = 0x46;
		uVar13 = 0x56;
		T_FillTile(ZEXT48(local_14[0]), 0x3c, 0x46, 0x156, uVar12, uVar16, uVar19, uVar22, in_stack_ffffffb8);
	}
	mem_free_dbg(local_14, uVar9, uVar11, uVar13, uVar8, uVar17, uVar20, uVar23, in_stack_ffffffb8);
	return;
}

void CreateTown(undefined8 uParm1)

{
	short sVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	undefined uVar10;
	int iVar9;
	longlong lVar8;
	longlong lVar11;
	undefined uVar13;
	longlong lVar12;
	undefined uVar15;
	longlong lVar14;
	undefined8 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	longlong lVar16;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	int local_2c;

	puVar4 = PTR_DAT_100f1a9c;
	puVar6 = PTR_DAT_100f1a54;
	puVar5 = PTR_DAT_100f1a38;
	uVar10 = (undefined)uParm1;
	ppuVar7 = &toc;
	uVar15 = 10;
	iVar9 = (int)uParm1;
	*(undefined4 *)PTR_DAT_100f1aa0 = 10;
	puVar3 = PTR_DAT_100f1a98;
	*(undefined4 *)puVar4 = 10;
	puVar4 = PTR_DAT_100f1a94;
	*(undefined4 *)puVar3 = 0x54;
	puVar3 = PTR_DAT_100f181c;
	uVar13 = SUB41(PTR_DAT_100f181c, 0);
	*(undefined4 *)puVar4 = 0x54;
	puVar4 = PTR_DAT_100f1820;
	if (iVar9 == 0) {
		*(undefined4 *)PTR_DAT_100f1820 = 0x4b;
		*(undefined4 *)puVar3 = 0x44;
	} else {
		if (iVar9 == 1) {
			*(undefined4 *)PTR_DAT_100f1820 = 0x19;
			*(undefined4 *)puVar3 = 0x1f;
		} else {
			if (iVar9 == 7) {
				iVar9 = *(int *)PTR_DAT_100f2110;
				uVar10 = (undefined)iVar9;
				if (iVar9 == 5) {
					*(undefined4 *)PTR_DAT_100f1820 = 0x31;
					*(undefined4 *)puVar3 = 0x16;
				}
				if (iVar9 == 9) {
					*(undefined4 *)puVar4 = 0x12;
					*(undefined4 *)puVar3 = 0x45;
				}
				if (iVar9 == 0xd) {
					*(undefined4 *)puVar4 = 0x29;
					*(undefined4 *)puVar3 = 0x51;
				}
			}
		}
	}
	T_Pass3(uVar10, (char)puVar4, uVar13, 10, (char)in_r7, (char)in_r8, (char)in_r9, (char)in_r10,
	    in_stack_ffffffc8);
	memset((char)*(undefined4 *)ppuVar7[-0x1d63], 0, uVar13, uVar15, (char)in_r7, (char)in_r8,
	    (char)in_r9, (char)in_r10, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
	memset((char)**(undefined4 **)(local_2c + -0x779c), 0, uVar13, uVar15, (char)in_r7, (char)in_r8,
	    (char)in_r9, (char)in_r10, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
	memset((char)**(undefined4 **)(local_2c + -0x7680), 0, uVar13, uVar15, (char)in_r7, (char)in_r8,
	    (char)in_r9, (char)in_r10, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
	memset((char)**(undefined4 **)(local_2c + -0x767c), 0, uVar13, uVar15, (char)in_r7, (char)in_r8,
	    (char)in_r9, (char)in_r10, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
	memset((char)**(undefined4 **)(local_2c + -0x7684), 0, uVar13, uVar15, (char)in_r7, (char)in_r8,
	    (char)in_r9, (char)in_r10, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
	memset((char)**(undefined4 **)(local_2c + -0x768c), 0, uVar13, uVar15, (char)in_r7, (char)in_r8,
	    (char)in_r9, (char)in_r10, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
	memset((char)*(undefined4 *)puVar5, 0, uVar13, uVar15, (char)in_r7, (char)in_r8, (char)in_r9,
	    (char)in_r10, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
	lVar14 = 0;
	lVar12 = 0;
	do {
		lVar8 = 0;
		lVar16 = 0x70;
		lVar11 = 0;
		do {
			sVar1 = *(short *)((int)lVar12 + *(int *)puVar6 + (int)lVar8);
			iVar9 = (int)lVar14;
			iVar2 = (int)lVar11;
			if (sVar1 == 0x168) {
				in_r7 = 1;
				*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 1;
			} else {
				if (sVar1 == 0x166) {
					in_r7 = 2;
					*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 2;
				} else {
					if (sVar1 == 0x81) {
						in_r7 = 6;
						*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 6;
					} else {
						if (sVar1 == 0x82) {
							in_r7 = 7;
							*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 7;
						} else {
							if (sVar1 == 0x80) {
								in_r7 = 8;
								*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 8;
							} else {
								if (sVar1 == 0x75) {
									in_r7 = 9;
									*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 9;
								} else {
									if (sVar1 == 0x9d) {
										in_r7 = 10;
										*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 10;
									} else {
										if (sVar1 == 0x9e) {
											in_r7 = 0xb;
											*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 0xb;
										} else {
											if (sVar1 == 0x9c) {
												in_r7 = 0xc;
												*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 0xc;
											} else {
												if (sVar1 == 0xa2) {
													in_r7 = 0xd;
													*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 0xd;
												} else {
													if (sVar1 == 0xa0) {
														in_r7 = 0xe;
														*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 0xe;
													} else {
														if (sVar1 == 0xd6) {
															in_r7 = 0xf;
															*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 0xf;
														} else {
															if (sVar1 == 0xd4) {
																in_r7 = 0x10;
																*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 0x10;
															} else {
																if (sVar1 == 0xd9) {
																	in_r7 = 0x11;
																	*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 0x11;
																} else {
																	if (sVar1 == 0xd8) {
																		in_r7 = 0x12;
																		*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 0x12;
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			lVar8 = lVar8 + 0xe0;
			lVar11 = lVar11 + 0x70;
			lVar16 = lVar16 + -1;
		} while (lVar16 != 0);
		lVar14 = lVar14 + 1;
		lVar12 = lVar12 + 2;
	} while ((int)lVar14 < 0x70);
	SetTownMicros(lVar8, lVar11, lVar12, lVar14, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffc8);
	return;
}
