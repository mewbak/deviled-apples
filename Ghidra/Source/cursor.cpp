
void InitCursor(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	longlong lVar2;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	lVar2 = LoadFileInMem(ZEXT48(PTR_s_Data_Inv_Objcurs_CEL_100f2b78), (undefined4 *)0x0, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	*(int *)ppuVar1[-0x1d8d] = (int)lVar2;
	ClearCursor();
	return;
}

void FreeCursor(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	mem_free_dbg((int **)PTR_DAT_100f199c, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	ClearCursor();
	return;
}

void SetICursor(int param_1)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;

	puVar5 = PTR_DAT_100f1998;
	*(undefined4 *)PTR_DAT_100f1998 = *(undefined4 *)(s__AAAAAAACEEEEIIIIDNOOOOOX0UUUUYb_100f65a7 + param_1 * 4 + 0x41);
	puVar4 = PTR_DAT_100f1990;
	puVar3 = PTR_DAT_100f1988;
	*(undefined4 *)PTR_DAT_100f1990 = *(undefined4 *)(&DAT_100f68b8 + param_1 * 4);
	puVar2 = PTR_DAT_100f1984;
	uVar1 = *(int *)puVar5 / 0x1c + (*(int *)puVar5 >> 0x1f);
	*(uint *)puVar3 = uVar1 + (uVar1 >> 0x1f);
	uVar1 = *(int *)puVar4 / 0x1c + (*(int *)puVar4 >> 0x1f);
	*(uint *)puVar2 = uVar1 + (uVar1 >> 0x1f);
	return;
}

void SetICursor(int param_1)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;

	puVar5 = PTR_DAT_100f1998;
	*(undefined4 *)PTR_DAT_100f1998 = *(undefined4 *)(s__AAAAAAACEEEEIIIIDNOOOOOX0UUUUYb_100f65a7 + param_1 * 4 + 0x41);
	puVar4 = PTR_DAT_100f1990;
	puVar3 = PTR_DAT_100f1988;
	*(undefined4 *)PTR_DAT_100f1990 = *(undefined4 *)(&DAT_100f68b8 + param_1 * 4);
	puVar2 = PTR_DAT_100f1984;
	uVar1 = *(int *)puVar5 / 0x1c + (*(int *)puVar5 >> 0x1f);
	*(uint *)puVar3 = uVar1 + (uVar1 >> 0x1f);
	uVar1 = *(int *)puVar4 / 0x1c + (*(int *)puVar4 >> 0x1f);
	*(uint *)puVar2 = uVar1 + (uVar1 >> 0x1f);
	return;
}

void SetCursor_(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	*(int *)PTR_DAT_100f188c = param_1;
	*(undefined4 *)PTR_DAT_100f1980 = *(undefined4 *)(s__AAAAAAACEEEEIIIIDNOOOOOX0UUUUYb_100f65a7 + param_1 * 4 + 0x41);
	*(undefined4 *)PTR_DAT_100f197c = *(undefined4 *)(&DAT_100f68b8 + param_1 * 4);
	SetICursor(param_1);
	return;
}

void NewCursor(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	SetCursor_(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void InitLevelCursor(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined4 *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined **ppuVar6;
	undefined4 in_stack_ffffffc8;

	ppuVar6 = &toc;
	SetCursor_(1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	puVar1 = (undefined4 *)ppuVar6[-0x1ded];
	*(undefined4 *)ppuVar6[-0x1d96] = *(undefined4 *)ppuVar6[-0x1dec];
	puVar2 = (undefined4 *)ppuVar6[-0x1dd4];
	*(undefined4 *)ppuVar6[-0x1d97] = *puVar1;
	puVar3 = ppuVar6[-0x1dd3];
	ppuVar6[-0x13e1] = (undefined *)0xffffffff;
	puVar4 = ppuVar6[-0x1dd2];
	*puVar2 = 0xffffffff;
	puVar5 = ppuVar6[-0x1dd7];
	*puVar3 = 0xff;
	*puVar4 = 0xff;
	*puVar5 = 0xff;
	ClearCursor();
	return;
}

void CheckTown(void)

{
	uint uVar1;
	uint uVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;
	uint uVar12;
	longlong lVar13;
	ulonglong in_r6;
	longlong in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int iVar14;
	undefined *puVar15;
	int *piVar16;
	ulonglong uVar17;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	puVar11 = PTR_s_Town_Portal_100f2b74;
	puVar10 = PTR_s_from__s_100f2b70;
	puVar9 = PTR_DAT_100f1978;
	puVar8 = PTR_DAT_100f1974;
	puVar7 = PTR_DAT_100f196c;
	puVar6 = PTR_DAT_100f1968;
	puVar5 = PTR_DAT_100f192c;
	puVar4 = PTR_DAT_100f191c;
	puVar3 = PTR_DAT_100f1890;
	iVar14 = 0;
	uVar17 = ZEXT48(PTR_DAT_100f1828);
	piVar16 = (int *)PTR_DAT_100f1970;
	do {
		if (*(int *)puVar6 <= iVar14) {
			return;
		}
		if (*(int *)(puVar7 + *piVar16 * 0xb4) == 10) {
			puVar15 = puVar7 + *piVar16 * 0xb4;
			uVar1 = *(uint *)puVar9;
			uVar2 = *(uint *)(puVar15 + 4);
			uVar12 = uVar2 - 1;
			if ((((uVar1 != uVar12) || (in_r6 = (ulonglong) * (uint *)puVar8, *(uint *)puVar8 != *(uint *)(puVar15 + 8))) && ((uVar1 != uVar2 || (in_r6 = (ulonglong) * (uint *)puVar8, *(uint *)puVar8 != *(int *)(puVar15 + 8) - 1U)))) && ((uVar1 != uVar12 || (in_r6 = (ulonglong) * (uint *)puVar8, *(uint *)puVar8 != *(int *)(puVar15 + 8) - 1U)))) {
				in_r7 = (ulonglong)uVar2 - 2;
				if (((uVar1 != (uint)in_r7) || (in_r6 = (ulonglong) * (uint *)puVar8, *(uint *)puVar8 != *(int *)(puVar15 + 8) - 1U)) && ((((uVar1 != (uint)in_r7 || (in_r6 = (ulonglong) * (uint *)puVar8, *(uint *)puVar8 != *(int *)(puVar15 + 8) - 2U)) && ((uVar1 != uVar12 || (*(int *)puVar8 != *(int *)(puVar15 + 8) + -2)))) && ((uVar1 != uVar2 || (*(int *)puVar8 != *(int *)(puVar15 + 8)))))))
					goto LAB_10021d2c;
			}
			*(undefined4 *)puVar3 = 1;
			ClearPanel();
			strcpy((int)puVar5, (int)puVar11);
			lVar13 = uVar17 + (ulonglong) * (uint *)(puVar15 + 0x78) * 0x55ec + 0x13c;
			lVar13._7_1_ = (undefined)lVar13;
			sprintf((int)puVar4, puVar10, (int)lVar13, (int)in_r6, (int)in_r7, in_r8, in_r9, in_r10,
			    in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac, in_stack_ffffffb0,
			    in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
			    in_stack_ffffffc4);
			AddPanelString((int)puVar4, 1, (undefined)lVar13, (char)in_r6, (char)in_r7, (char)in_r8, (char)in_r9,
			    (char)in_r10, in_stack_ffffff98);
			*(undefined4 *)puVar9 = *(undefined4 *)(puVar15 + 4);
			*(undefined4 *)puVar8 = *(undefined4 *)(puVar15 + 8);
		}
	LAB_10021d2c:
		piVar16 = piVar16 + 1;
		iVar14 = iVar14 + 1;
	} while (true);
}

ulonglong CheckRportal(char param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined *puVar12;
	undefined *puVar13;
	undefined *puVar14;
	ulonglong uVar15;
	uint uVar16;
	ulonglong uVar17;
	ulonglong uVar18;
	longlong lVar19;
	longlong lVar20;
	longlong lVar21;
	longlong lVar22;
	int iVar23;
	uint *puVar24;
	undefined4 in_stack_ffffff88;

	puVar14 = PTR_s_Portal_to_100f2b6c;
	puVar13 = PTR_s_The_Unholy_Altar_100f2b68;
	puVar12 = PTR_s_level_15_100f2b64;
	puVar11 = PTR_DAT_100f1978;
	puVar10 = PTR_DAT_100f1974;
	puVar9 = PTR_DAT_100f196c;
	puVar8 = PTR_DAT_100f1968;
	puVar7 = PTR_DAT_100f192c;
	puVar6 = PTR_DAT_100f191c;
	puVar5 = PTR_DAT_100f1890;
	puVar4 = PTR_DAT_100f17f8;
	lVar22 = (longlong)param_8;
	lVar21 = (longlong)param_7;
	lVar20 = (longlong)param_6;
	lVar19 = (longlong)param_5;
	uVar18 = SEXT18(param_4);
	uVar17 = SEXT18(param_3);
	uVar15 = SEXT18(param_1);
	iVar23 = 0;
	puVar24 = (uint *)PTR_DAT_100f1970;
	do {
		if (*(int *)puVar8 <= iVar23) {
			return uVar15;
		}
		uVar15 = (ulonglong)*puVar24 * 0xb4;
		if (*(int *)(puVar9 + (int)uVar15) == 0x41) {
			puVar3 = puVar9 + (int)uVar15;
			uVar1 = *(uint *)puVar11;
			uVar2 = *(uint *)(puVar3 + 4);
			uVar15 = (ulonglong)uVar2;
			uVar16 = uVar2 - 1;
			if (uVar1 == uVar16) {
				uVar18 = (ulonglong) * (uint *)puVar10;
				uVar17 = (ulonglong) * (uint *)(puVar3 + 8);
				if (*(uint *)puVar10 != *(uint *)(puVar3 + 8))
					goto LAB_10021ddc;
			} else {
			LAB_10021ddc:
				if (uVar1 == uVar2) {
					uVar18 = (ulonglong) * (uint *)puVar10;
					uVar17 = (ulonglong) * (uint *)(puVar3 + 8) - 1;
					if (*(uint *)puVar10 == (uint)uVar17)
						goto LAB_10021e84;
				}
				if (uVar1 == uVar16) {
					uVar18 = (ulonglong) * (uint *)puVar10;
					uVar17 = (ulonglong) * (uint *)(puVar3 + 8) - 1;
					if (*(uint *)puVar10 == (uint)uVar17)
						goto LAB_10021e84;
				}
				lVar19 = uVar15 - 2;
				if (uVar1 == (uint)lVar19) {
					uVar18 = (ulonglong) * (uint *)puVar10;
					uVar17 = (ulonglong) * (uint *)(puVar3 + 8) - 1;
					if (*(uint *)puVar10 == (uint)uVar17)
						goto LAB_10021e84;
				}
				if (uVar1 == (uint)lVar19) {
					uVar18 = (ulonglong) * (uint *)puVar10;
					uVar17 = (ulonglong) * (uint *)(puVar3 + 8) - 2;
					if (*(uint *)puVar10 == (uint)uVar17)
						goto LAB_10021e84;
				}
				if (((uVar1 != uVar16) || (uVar17 = (ulonglong) * (uint *)puVar10, *(uint *)puVar10 != *(int *)(puVar3 + 8) - 2U))
				    && ((uVar1 != uVar2 || (uVar15 = (ulonglong) * (uint *)puVar10, *(uint *)puVar10 != *(uint *)(puVar3 + 8)))))
					goto LAB_10021ee0;
			}
		LAB_10021e84:
			*(undefined4 *)puVar5 = 1;
			ClearPanel();
			strcpy((int)puVar7, (int)puVar14);
			if (*puVar4 == '\0') {
				strcpy((int)puVar6, (int)puVar13);
			} else {
				strcpy((int)puVar6, (int)puVar12);
			}
			uVar15 = AddPanelString((int)puVar6, 1, (char)uVar17, (char)uVar18, (char)lVar19, (char)lVar20,
			    (char)lVar21, (char)lVar22, in_stack_ffffff88);
			*(undefined4 *)puVar11 = *(undefined4 *)(puVar3 + 4);
			*(undefined4 *)puVar10 = *(undefined4 *)(puVar3 + 8);
		}
	LAB_10021ee0:
		puVar24 = puVar24 + 1;
		iVar23 = iVar23 + 1;
	} while (true);
}

void CheckCursMove(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	short sVar1;
	char *pcVar2;
	undefined4 *puVar3;
	undefined4 *puVar4;
	undefined4 *puVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	undefined *puVar11;
	undefined *puVar12;
	undefined *puVar13;
	undefined *puVar14;
	undefined *puVar15;
	undefined *puVar16;
	undefined *puVar17;
	undefined *puVar18;
	undefined *puVar19;
	undefined *puVar20;
	undefined *puVar21;
	undefined *puVar22;
	undefined *puVar23;
	undefined *puVar24;
	undefined *puVar25;
	int iVar26;
	int iVar27;
	char cVar28;
	char cVar29;
	char cVar30;
	undefined **ppuVar31;
	ulonglong uVar32;
	undefined *puVar33;
	undefined uVar34;
	char cVar35;
	undefined uVar36;
	ulonglong uVar37;
	longlong lVar38;
	uint uVar39;
	undefined uVar40;
	longlong lVar41;
	undefined uVar42;
	longlong lVar43;
	longlong lVar44;
	undefined uVar45;
	longlong lVar46;
	undefined uVar47;
	int *piVar48;
	ulonglong uVar49;
	int iVar50;
	uint uVar51;
	int iVar52;
	int iVar54;
	uint uVar55;
	longlong lVar53;
	int iVar56;
	ulonglong uVar57;
	bool bVar58;
	longlong lVar59;
	undefined4 in_stack_ffffff78;

	puVar24 = PTR_DAT_100f1978;
	puVar23 = PTR_DAT_100f1974;
	puVar22 = PTR_DAT_100f1954;
	puVar21 = PTR_DAT_100f1950;
	puVar20 = PTR_DAT_100f1948;
	puVar19 = PTR_DAT_100f1940;
	puVar18 = PTR_DAT_100f1928;
	puVar17 = PTR_DAT_100f1888;
	puVar16 = PTR_DAT_100f1884;
	puVar15 = PTR_DAT_100f1880;
	puVar14 = PTR_DAT_100f187c;
	puVar13 = PTR_DAT_100f1874;
	puVar12 = PTR_DAT_100f1834;
	puVar11 = PTR_DAT_100f1828;
	puVar25 = PTR_DAT_100f1818;
	ppuVar31 = &toc;
	uVar49 = ZEXT48(PTR_DAT_100f1940);
	uVar57 = ZEXT48(PTR_DAT_100f1828);
	iVar50 = *(int *)PTR_DAT_100f1928;
	iVar54 = *(int *)PTR_DAT_100f1924;
	if ((*(int *)PTR_DAT_100f180c == 0) && (*(int *)PTR_DAT_100f1808 == 0)) {
		if ((*(int *)PTR_DAT_100f1814 != 0) || (*(int *)PTR_DAT_100f1810 != 0)) {
			if (iVar50 < 0x141) {
				iVar50 = iVar50 + 0xa0;
			} else {
				iVar50 = 0;
			}
		}
	} else {
		if (iVar50 < 0xa0) {
			iVar50 = 0;
		} else {
			iVar50 = iVar50 + -0xa0;
		}
	}
	piVar48 = (int *)PTR_DAT_100f194c;
	if ((0x15f < iVar54) && (piVar48 = (int *)PTR_DAT_100f194c, ppuVar31 = &toc, uVar32 = track_isscrolling(), (int)uVar32 != 0)) {
		iVar54 = 0x15f;
	}
	if (*(int *)ppuVar31[-0x1d9b] == 0) {
		iVar50 = iVar50 >> 1;
		iVar54 = iVar54 >> 1;
	}
	uVar51 = iVar50 - *(int *)puVar25;
	puVar33 = puVar11 + *(uint *)ppuVar31[-0x1deb] * 0x55ec;
	uVar55 = iVar54 - *(int *)(puVar25 + 4);
	uVar37 = (ulonglong) * (uint *)(puVar33 + 0x1e8) + (ulonglong) * (uint *)(puVar33 + 0x6c);
	uVar32 = uVar37 & 0xffffffff00000000;
	uVar57 = (uVar57 + (ulonglong) * (uint *)ppuVar31[-0x1deb] * 0x55ec & 0xffffffff00000000 | (ulonglong)(uint)((int)*(uint *)(puVar33 + 0x1e8) >> 8)) - (uVar32 | (ulonglong)(uint)((int)uVar37 >> 8));
	if (*(int *)(puVar25 + 0x10) != 0) {
		uVar51 = uVar51 - ((*(int *)(puVar33 + 0x1e4) >> 8) - (*(int *)(puVar33 + 0x1e4) + *(int *)(puVar33 + 0x68) >> 8));
		uVar55 = uVar55 - (int)uVar57;
	}
	if ((int)uVar51 < 0) {
		uVar51 = 0;
	}
	if (0x27f < (int)uVar51) {
		uVar51 = 0x280;
	}
	if ((int)uVar55 < 0) {
		uVar55 = 0;
	}
	if (0x1df < (int)uVar55) {
		uVar55 = 0x1e0;
	}
	uVar32 = uVar32 | (ulonglong)(uint)((int)uVar55 >> 5);
	uVar39 = uVar51 & 0x3f;
	uVar34 = (undefined)uVar39;
	if (*(int *)ppuVar31[-0x1d9b] == 0) {
		lVar41 = 5;
	} else {
		lVar41 = 10;
	}
	uVar57 = uVar57 & 0xffffffff00000000 | (ulonglong)(uint)((int)uVar39 >> 1);
	bVar58 = (ulonglong)(uVar55 & 0x1f) < uVar57;
	lVar43 = (ulonglong)(uint)((int)uVar51 >> 6) + uVar32 + (ulonglong) * (uint *)ppuVar31[-0x1dec];
	uVar45 = (undefined)lVar43;
	lVar53 = (ulonglong) * (uint *)ppuVar31[-0x1ded] + (uVar32 - (ulonglong)(uint)((int)uVar51 >> 6));
	lVar43 = lVar43 - lVar41;
	if (bVar58) {
		lVar53 = lVar53 + -1;
	}
	uVar57 = 0x20 - uVar57;
	iVar50 = ((uint)uVar57 >> 0x1f) + (uint)(uVar57 <= (ulonglong)(uVar55 & 0x1f));
	if (iVar50 != 0) {
		lVar43 = lVar43 + 1;
	}
	if ((int)lVar43 < 0) {
		lVar43 = 0;
	}
	if (0x6f < (int)lVar43) {
		lVar43 = 0x6f;
	}
	if ((int)lVar53 < 0) {
		lVar53 = 0;
	}
	if (0x6f < (int)lVar53) {
		lVar53 = 0x6f;
	}
	bVar10 = true;
	bVar8 = false;
	if ((bVar58) && (iVar50 != 0)) {
		bVar8 = true;
	}
	if (!bVar8) {
		bVar9 = false;
		bVar8 = true;
		if ((!bVar58) && (iVar50 == 0)) {
			bVar8 = false;
		}
		if ((bVar8) && (uVar39 < 0x20)) {
			bVar9 = true;
		}
		if (!bVar9) {
			bVar10 = false;
		}
	}
	ppuVar31[-0x13e1] = *(undefined **)puVar15;
	pcVar2 = ppuVar31[-0x1dcb];
	*(undefined4 *)puVar15 = 0xffffffff;
	*puVar16 = 0xff;
	*puVar17 = 0xff;
	if (*pcVar2 != -1) {
		*(undefined4 *)ppuVar31[-0x1d9c] = 1;
	}
	puVar3 = (undefined4 *)ppuVar31[-0x1d9d];
	cVar29 = (char)puVar3;
	*ppuVar31[-0x1dcb] = 0xff;
	puVar4 = (undefined4 *)ppuVar31[-0x1db5];
	*puVar13 = 0xff;
	puVar5 = (undefined4 *)ppuVar31[-0x1dd0];
	*puVar3 = 0;
	*puVar4 = 0;
	*puVar5 = 0;
	iVar50 = *(int *)ppuVar31[-0x1deb];
	if (puVar11[iVar50 * 0x55ec + 0x139] == '\0') {
		iVar54 = *(int *)ppuVar31[-0x1dd1];
		uVar47 = (undefined)iVar54;
		iVar56 = (int)lVar53;
		iVar52 = (int)lVar43;
		if ((iVar54 < 0xc) && (*(int *)ppuVar31[-0x1dae] == 0)) {
			if (*(int *)ppuVar31[-0x1dab] < 0x161) {
				if (*(int *)ppuVar31[-0x1d9e] == 0) {
					if ((*(int *)ppuVar31[-0x1def] == 0) || (*(int *)puVar18 < 0x141)) {
						if (((*(int *)ppuVar31[-0x1df0] == 0) || (*(int *)puVar18 < 0x141)) && (((*(int *)ppuVar31[-0x1df1] == 0 && (*(int *)ppuVar31[-0x1df2] == 0)) || (0x13f < *(int *)puVar18)))) {
							if (*ppuVar31[-0x1de5] == '\0') {
								if ((!bVar10) && (sVar1 = *(short *)(*(int *)puVar22 + iVar52 * 0xe0 + iVar56 * 2 + 0xe0), 0 < sVar1)) {
									*(int *)puVar15 = (int)sVar1 + -1;
									*(int *)puVar24 = iVar52 + 1;
									*(int *)puVar23 = iVar56;
								}
								if ((bVar10) && (sVar1 = *(short *)(*(int *)puVar22 + iVar52 * 0xe0 + iVar56 * 2 + 2), 0 < sVar1)) {
									*(int *)puVar15 = (int)sVar1 + -1;
									*(int *)puVar24 = iVar52;
									*(int *)puVar23 = iVar56 + 1;
								}
								iVar26 = *(int *)puVar22;
								cVar29 = (char)iVar26;
								sVar1 = *(short *)(iVar26 + iVar52 * 0xe0 + iVar56 * 2);
								uVar57 = SEXT28(sVar1);
								if (0 < (longlong)uVar57) {
									*(int *)puVar15 = (int)sVar1 + -1;
									*(int *)puVar24 = iVar52;
									*(int *)puVar23 = iVar56;
								}
								sVar1 = *(short *)(iVar26 + iVar52 * 0xe0 + iVar56 * 2 + 0xe2);
								if (0 < sVar1) {
									*(int *)puVar15 = (int)sVar1 + -1;
									*(int *)puVar24 = iVar52 + 1;
									*(int *)puVar23 = iVar56 + 1;
								}
								if (*(int *)(ppuVar31[-0x1dd6] + *(int *)puVar15 * 0x10c + 0x54) == 0) {
									*(undefined4 *)puVar15 = 0xffffffff;
								}
							} else {
								if (ppuVar31[-0x13e1] != (undefined *)0xffffffff) {
									if (((!bVar10) && (sVar1 = *(short *)(*(int *)puVar22 + iVar52 * 0xe0 + iVar56 * 2 + 0x1c2), sVar1 != 0)) && (lVar41 = (ulonglong) * (uint *)puVar12 + lVar43 * 0x70 + lVar53, cVar29 = (char)lVar41, (*(byte *)((int)lVar41 + 0xe1) & 0x40) != 0)) {
										if (sVar1 < 1) {
											puVar25 = (undefined *)-((int)sVar1 + 1);
										} else {
											puVar25 = (undefined *)((int)sVar1 + -1);
										}
										if (puVar25 == ppuVar31[-0x13e1]) {
											iVar26 = *(int *)(puVar14 + (int)puVar25 * 0xe8 + 0x98) >> 6;
											cVar29 = (char)iVar26;
											if ((iVar26 != 0) && ((*(byte *)(*(int *)(puVar14 + (int)puVar25 * 0xe8 + 0xe4) + 0x7a) & 4) != 0)) {
												cVar29 = (char)(lVar53 + 2);
												*(int *)puVar24 = iVar52 + 1;
												*(int *)puVar23 = (int)(lVar53 + 2);
												*(undefined **)puVar15 = puVar25;
											}
										}
									}
									if (((bVar10) && (sVar1 = *(short *)(*(int *)puVar22 + iVar52 * 0xe0 + iVar56 * 2 + 0xe4), sVar1 != 0)) && (lVar41 = (ulonglong) * (uint *)puVar12 + lVar43 * 0x70 + lVar53, cVar29 = (char)lVar41, (*(byte *)((int)lVar41 + 0x72) & 0x40) != 0)) {
										if (sVar1 < 1) {
											puVar25 = (undefined *)-((int)sVar1 + 1);
										} else {
											puVar25 = (undefined *)((int)sVar1 + -1);
										}
										if (puVar25 == ppuVar31[-0x13e1]) {
											iVar26 = *(int *)(puVar14 + (int)puVar25 * 0xe8 + 0x98) >> 6;
											cVar29 = (char)iVar26;
											if ((iVar26 != 0) && ((*(byte *)(*(int *)(puVar14 + (int)puVar25 * 0xe8 + 0xe4) + 0x7a) & 4) != 0)) {
												cVar29 = (char)(lVar53 + 2);
												*(int *)puVar24 = iVar52 + 1;
												*(int *)puVar23 = (int)(lVar53 + 2);
												*(undefined **)puVar15 = puVar25;
											}
										}
									}
									iVar27 = iVar52 * 0xe0;
									iVar26 = *(int *)puVar22;
									iVar6 = iVar56 * 2;
									sVar1 = *(short *)(iVar26 + iVar27 + iVar6 + 0x1c4);
									if ((sVar1 != 0) && (lVar41 = (ulonglong) * (uint *)puVar12 + lVar43 * 0x70 + lVar53, cVar29 = (char)lVar41, (*(byte *)((int)lVar41 + 0xe2) & 0x40) != 0)) {
										if (sVar1 < 1) {
											puVar25 = (undefined *)-((int)sVar1 + 1);
										} else {
											puVar25 = (undefined *)((int)sVar1 + -1);
										}
										if (puVar25 == ppuVar31[-0x13e1]) {
											iVar7 = *(int *)(puVar14 + (int)puVar25 * 0xe8 + 0x98) >> 6;
											cVar29 = (char)iVar7;
											if ((iVar7 != 0) && ((*(byte *)(*(int *)(puVar14 + (int)puVar25 * 0xe8 + 0xe4) + 0x7a) & 4) != 0)) {
												cVar29 = (char)(lVar53 + 2);
												*(int *)puVar24 = iVar52 + 2;
												*(int *)puVar23 = (int)(lVar53 + 2);
												*(undefined **)puVar15 = puVar25;
											}
										}
									}
									if (((!bVar10) && (sVar1 = *(short *)(iVar26 + iVar27 + iVar6 + 0xe0), sVar1 != 0)) && (lVar41 = (ulonglong) * (uint *)puVar12 + lVar43 * 0x70 + lVar53, cVar29 = (char)lVar41, (*(byte *)((int)lVar41 + 0x70) & 0x40) != 0)) {
										if (sVar1 < 1) {
											puVar25 = (undefined *)-((int)sVar1 + 1);
										} else {
											puVar25 = (undefined *)((int)sVar1 + -1);
										}
										if (puVar25 == ppuVar31[-0x13e1]) {
											iVar7 = *(int *)(puVar14 + (int)puVar25 * 0xe8 + 0x98) >> 6;
											cVar29 = (char)iVar7;
											if ((iVar7 != 0) && ((*(byte *)(*(int *)(puVar14 + (int)puVar25 * 0xe8 + 0xe4) + 0x7a) & 2) != 0)) {
												*(int *)puVar24 = iVar52 + 1;
												*(int *)puVar23 = iVar56;
												*(undefined **)puVar15 = puVar25;
											}
										}
									}
									if (((bVar10) && (sVar1 = *(short *)(iVar26 + iVar27 + iVar6 + 2), sVar1 != 0)) && (lVar41 = (ulonglong) * (uint *)puVar12 + lVar43 * 0x70 + lVar53, cVar29 = (char)lVar41, (*(byte *)((int)lVar41 + 1) & 0x40) != 0)) {
										if (sVar1 < 1) {
											puVar25 = (undefined *)-((int)sVar1 + 1);
										} else {
											puVar25 = (undefined *)((int)sVar1 + -1);
										}
										if (puVar25 == ppuVar31[-0x13e1]) {
											iVar7 = *(int *)(puVar14 + (int)puVar25 * 0xe8 + 0x98) >> 6;
											cVar29 = (char)iVar7;
											if ((iVar7 != 0) && ((*(byte *)(*(int *)(puVar14 + (int)puVar25 * 0xe8 + 0xe4) + 0x7a) & 2) != 0)) {
												*(int *)puVar24 = iVar52;
												*(int *)puVar23 = iVar56 + 1;
												*(undefined **)puVar15 = puVar25;
											}
										}
									}
									sVar1 = *(short *)(iVar26 + iVar27 + iVar6);
									if ((sVar1 != 0) && (cVar29 = (char)*(int *)puVar12, (*(byte *)(*(int *)puVar12 + iVar52 * 0x70 + iVar56) & 0x40) != 0)) {
										if (sVar1 < 1) {
											puVar25 = (undefined *)-((int)sVar1 + 1);
										} else {
											puVar25 = (undefined *)((int)sVar1 + -1);
										}
										if (puVar25 == ppuVar31[-0x13e1]) {
											iVar7 = *(int *)(puVar14 + (int)puVar25 * 0xe8 + 0x98) >> 6;
											cVar29 = (char)iVar7;
											if ((iVar7 != 0) && ((*(byte *)(*(int *)(puVar14 + (int)puVar25 * 0xe8 + 0xe4) + 0x7a) & 1) != 0)) {
												*(int *)puVar24 = iVar52;
												*(int *)puVar23 = iVar56;
												*(undefined **)puVar15 = puVar25;
											}
										}
									}
									sVar1 = *(short *)(iVar26 + iVar27 + iVar6 + 0xe2);
									if ((sVar1 != 0) && (lVar41 = (ulonglong) * (uint *)puVar12 + lVar43 * 0x70 + lVar53, cVar29 = (char)lVar41, (*(byte *)((int)lVar41 + 0x71) & 0x40) != 0)) {
										if (sVar1 < 1) {
											puVar25 = (undefined *)-((int)sVar1 + 1);
										} else {
											puVar25 = (undefined *)((int)sVar1 + -1);
										}
										if (puVar25 == ppuVar31[-0x13e1]) {
											iVar26 = *(int *)(puVar14 + (int)puVar25 * 0xe8 + 0x98) >> 6;
											cVar29 = (char)iVar26;
											if ((iVar26 != 0) && ((*(byte *)(*(int *)(puVar14 + (int)puVar25 * 0xe8 + 0xe4) + 0x7a) & 2) != 0)) {
												cVar29 = (char)(lVar53 + 1);
												*(int *)puVar24 = iVar52 + 1;
												*(int *)puVar23 = (int)(lVar53 + 1);
												*(undefined **)puVar15 = puVar25;
											}
										}
									}
									if ((*(int *)puVar15 != -1) && ((*(uint *)(puVar14 + *(int *)puVar15 * 0xe8 + 0xa0) & 1) != 0)) {
										*(undefined4 *)puVar15 = 0xffffffff;
										*(int *)puVar24 = iVar52;
										*(int *)puVar23 = iVar56;
									}
									if ((*(int *)puVar15 != -1) && ((*(uint *)(puVar14 + *(int *)puVar15 * 0xe8 + 0xa0) & 0x20) != 0)) {
										*(undefined4 *)puVar15 = 0xffffffff;
									}
									if (*(int *)puVar15 != -1) {
										return;
									}
								}
								if (((!bVar10) && (sVar1 = *(short *)(*(int *)puVar22 + iVar52 * 0xe0 + iVar56 * 2 + 0x1c2), sVar1 != 0)) && (lVar41 = (ulonglong) * (uint *)puVar12 + lVar43 * 0x70 + lVar53, cVar29 = (char)lVar41, (*(byte *)((int)lVar41 + 0xe1) & 0x40) != 0)) {
									if (sVar1 < 1) {
										iVar26 = -((int)sVar1 + 1);
									} else {
										iVar26 = (int)sVar1 + -1;
									}
									iVar6 = *(int *)(puVar14 + iVar26 * 0xe8 + 0x98) >> 6;
									cVar29 = (char)iVar6;
									if ((iVar6 != 0) && ((*(byte *)(*(int *)(puVar14 + iVar26 * 0xe8 + 0xe4) + 0x7a) & 4) != 0)) {
										cVar29 = (char)(lVar53 + 1);
										*(int *)puVar24 = iVar52 + 2;
										*(int *)puVar23 = (int)(lVar53 + 1);
										*(int *)puVar15 = iVar26;
									}
								}
								if (((bVar10) && (sVar1 = *(short *)(*(int *)puVar22 + iVar52 * 0xe0 + iVar56 * 2 + 0xe4), sVar1 != 0)) && (lVar41 = (ulonglong) * (uint *)puVar12 + lVar43 * 0x70 + lVar53, cVar29 = (char)lVar41, (*(byte *)((int)lVar41 + 0x72) & 0x40) != 0)) {
									if (sVar1 < 1) {
										iVar26 = -((int)sVar1 + 1);
									} else {
										iVar26 = (int)sVar1 + -1;
									}
									iVar6 = *(int *)(puVar14 + iVar26 * 0xe8 + 0x98) >> 6;
									cVar29 = (char)iVar6;
									if ((iVar6 != 0) && ((*(byte *)(*(int *)(puVar14 + iVar26 * 0xe8 + 0xe4) + 0x7a) & 4) != 0)) {
										cVar29 = (char)(lVar53 + 2);
										*(int *)puVar24 = iVar52 + 1;
										*(int *)puVar23 = (int)(lVar53 + 2);
										*(int *)puVar15 = iVar26;
									}
								}
								iVar6 = iVar52 * 0xe0;
								iVar26 = *(int *)puVar22;
								uVar45 = (undefined)iVar26;
								uVar51 = iVar56 * 2;
								uVar57 = (ulonglong)uVar51;
								sVar1 = *(short *)(iVar26 + iVar6 + uVar51 + 0x1c4);
								if ((sVar1 != 0) && (lVar41 = (ulonglong) * (uint *)puVar12 + lVar43 * 0x70 + lVar53, cVar29 = (char)lVar41, (*(byte *)((int)lVar41 + 0xe2) & 0x40) != 0)) {
									if (sVar1 < 1) {
										iVar27 = -((int)sVar1 + 1);
									} else {
										iVar27 = (int)sVar1 + -1;
									}
									iVar7 = *(int *)(puVar14 + iVar27 * 0xe8 + 0x98) >> 6;
									cVar29 = (char)iVar7;
									if ((iVar7 != 0) && ((*(byte *)(*(int *)(puVar14 + iVar27 * 0xe8 + 0xe4) + 0x7a) & 4) != 0)) {
										cVar29 = (char)(lVar53 + 2);
										*(int *)puVar24 = iVar52 + 2;
										*(int *)puVar23 = (int)(lVar53 + 2);
										*(int *)puVar15 = iVar27;
									}
								}
								if (((!bVar10) && (sVar1 = *(short *)(iVar26 + iVar6 + uVar51 + 0xe0), sVar1 != 0))
								    && (lVar41 = (ulonglong) * (uint *)puVar12 + lVar43 * 0x70 + lVar53,
								        cVar29 = (char)lVar41, (*(byte *)((int)lVar41 + 0x70) & 0x40) != 0)) {
									if (sVar1 < 1) {
										iVar27 = -((int)sVar1 + 1);
									} else {
										iVar27 = (int)sVar1 + -1;
									}
									iVar7 = *(int *)(puVar14 + iVar27 * 0xe8 + 0x98) >> 6;
									cVar29 = (char)iVar7;
									if ((iVar7 != 0) && ((*(byte *)(*(int *)(puVar14 + iVar27 * 0xe8 + 0xe4) + 0x7a) & 2) != 0)) {
										*(int *)puVar24 = iVar52 + 1;
										*(int *)puVar23 = iVar56;
										*(int *)puVar15 = iVar27;
									}
								}
								if (((bVar10) && (sVar1 = *(short *)(iVar26 + iVar6 + uVar51 + 2), sVar1 != 0)) && (lVar41 = (ulonglong) * (uint *)puVar12 + lVar43 * 0x70 + lVar53, cVar29 = (char)lVar41, (*(byte *)((int)lVar41 + 1) & 0x40) != 0)) {
									if (sVar1 < 1) {
										iVar27 = -((int)sVar1 + 1);
									} else {
										iVar27 = (int)sVar1 + -1;
									}
									iVar7 = *(int *)(puVar14 + iVar27 * 0xe8 + 0x98) >> 6;
									cVar29 = (char)iVar7;
									if ((iVar7 != 0) && ((*(byte *)(*(int *)(puVar14 + iVar27 * 0xe8 + 0xe4) + 0x7a) & 2) != 0)) {
										*(int *)puVar24 = iVar52;
										*(int *)puVar23 = iVar56 + 1;
										*(int *)puVar15 = iVar27;
									}
								}
								sVar1 = *(short *)(iVar26 + iVar6 + uVar51);
								if ((sVar1 != 0) && (cVar29 = (char)*(int *)puVar12, (*(byte *)(*(int *)puVar12 + iVar52 * 0x70 + iVar56) & 0x40) != 0)) {
									if (sVar1 < 1) {
										iVar27 = -((int)sVar1 + 1);
									} else {
										iVar27 = (int)sVar1 + -1;
									}
									iVar7 = *(int *)(puVar14 + iVar27 * 0xe8 + 0x98) >> 6;
									cVar29 = (char)iVar7;
									if ((iVar7 != 0) && ((*(byte *)(*(int *)(puVar14 + iVar27 * 0xe8 + 0xe4) + 0x7a) & 1) != 0)) {
										*(int *)puVar24 = iVar52;
										*(int *)puVar23 = iVar56;
										*(int *)puVar15 = iVar27;
									}
								}
								sVar1 = *(short *)(iVar26 + iVar6 + uVar51 + 0xe2);
								if ((sVar1 != 0) && (lVar41 = (ulonglong) * (uint *)puVar12 + lVar43 * 0x70 + lVar53, cVar29 = (char)lVar41, (*(byte *)((int)lVar41 + 0x71) & 0x40) != 0)) {
									if (sVar1 < 1) {
										iVar26 = -((int)sVar1 + 1);
									} else {
										iVar26 = (int)sVar1 + -1;
									}
									iVar6 = *(int *)(puVar14 + iVar26 * 0xe8 + 0x98) >> 6;
									cVar29 = (char)iVar6;
									if ((iVar6 != 0) && ((*(byte *)(*(int *)(puVar14 + iVar26 * 0xe8 + 0xe4) + 0x7a) & 2) != 0)) {
										cVar29 = (char)(lVar53 + 1);
										*(int *)puVar24 = iVar52 + 1;
										*(int *)puVar23 = (int)(lVar53 + 1);
										*(int *)puVar15 = iVar26;
									}
								}
								if ((*(int *)puVar15 != -1) && ((*(uint *)(puVar14 + *(int *)puVar15 * 0xe8 + 0xa0) & 1) != 0)) {
									*(undefined4 *)puVar15 = 0xffffffff;
									*(int *)puVar24 = iVar52;
									*(int *)puVar23 = iVar56;
								}
								if ((*(int *)puVar15 != -1) && ((*(uint *)(puVar14 + *(int *)puVar15 * 0xe8 + 0xa0) & 0x20) != 0)) {
									*(undefined4 *)puVar15 = 0xffffffff;
								}
							}
							uVar42 = (undefined)uVar57;
							iVar26 = *(int *)puVar15;
							if (iVar26 == -1) {
								if ((!bVar10) && (cVar28 = *(char *)(*(int *)puVar21 + iVar52 * 0x70 + iVar56 + 0x70), cVar28 != '\0')) {
									if (cVar28 < '\x01') {
										cVar28 = -(cVar28 + '\x01');
									} else {
										cVar28 = cVar28 + -1;
									}
									if (((int)cVar28 != iVar50) && (*(int *)(puVar11 + (int)cVar28 * 0x55ec + 0x194) != 0)) {
										*(int *)puVar24 = iVar52 + 1;
										*(int *)puVar23 = iVar56;
										*puVar13 = cVar28;
									}
								}
								if ((bVar10) && (cVar28 = *(char *)(*(int *)puVar21 + iVar52 * 0x70 + iVar56 + 1), cVar28 != '\0')) {
									if (cVar28 < '\x01') {
										cVar28 = -(cVar28 + '\x01');
									} else {
										cVar28 = cVar28 + -1;
									}
									if (((int)cVar28 != iVar50) && (*(int *)(puVar11 + (int)cVar28 * 0x55ec + 0x194) != 0)) {
										*(int *)puVar24 = iVar52;
										*(int *)puVar23 = iVar56 + 1;
										*puVar13 = cVar28;
									}
								}
								iVar27 = iVar52 * 0x70;
								iVar6 = *(int *)puVar21;
								cVar28 = *(char *)(iVar6 + iVar27 + iVar56);
								if (cVar28 != '\0') {
									if (cVar28 < '\x01') {
										cVar28 = -(cVar28 + '\x01');
									} else {
										cVar28 = cVar28 + -1;
									}
									if ((int)cVar28 != iVar50) {
										*(int *)puVar24 = iVar52;
										*(int *)puVar23 = iVar56;
										*puVar13 = cVar28;
									}
								}
								uVar51 = *(uint *)puVar12;
								if ((*(byte *)(uVar51 + iVar27 + iVar56) & 4) != 0) {
									if (((iVar52 == *(int *)(puVar11 + 0x38)) && (iVar56 == *(int *)(puVar11 + 0x3c)))
									    && (iVar50 != 0)) {
										*(int *)puVar24 = iVar52;
										*(int *)puVar23 = iVar56;
										*puVar13 = 0;
									}
									if (((iVar52 == *(int *)(puVar11 + 0x5624)) && (iVar56 == *(int *)(puVar11 + 0x5628))) && (iVar50 != 1)) {
										*(int *)puVar24 = iVar52;
										*(int *)puVar23 = iVar56;
										*puVar13 = 1;
									}
									if (((iVar52 == *(int *)(puVar11 + 0xac10)) && (iVar56 == *(int *)(puVar11 + 0xac14))) && (iVar50 != 2)) {
										*(int *)puVar24 = iVar52;
										*(int *)puVar23 = iVar56;
										*puVar13 = 2;
									}
									cVar29 = (char)*(int *)(puVar11 + 0x101fc);
									if (((iVar52 == *(int *)(puVar11 + 0x101fc)) && (cVar29 = (char)*(int *)(puVar11 + 0x10200), iVar56 == *(int *)(puVar11 + 0x10200))) && (iVar50 != 3)) {
										*(int *)puVar24 = iVar52;
										*(int *)puVar23 = iVar56;
										*puVar13 = 3;
									}
								}
								if (iVar54 == 8) {
									lVar41 = -1;
									do {
										lVar38 = lVar43 + lVar41;
										cVar29 = (char)lVar38;
										lVar59 = 3;
										lVar44 = (ulonglong)uVar51 + lVar38 * 0x70 + lVar53 + -1;
										lVar46 = -1;
										do {
											if ((*(byte *)lVar44 & 4) != 0) {
												uVar55 = iVar56 + (int)lVar46;
												uVar39 = (uint)lVar38;
												if (((*(uint *)(puVar11 + 0x38) == uVar39) && (*(uint *)(puVar11 + 0x3c) == uVar55)) && (iVar50 != 0)) {
													*(uint *)puVar24 = uVar39;
													*(uint *)puVar23 = uVar55;
													*puVar13 = 0;
												}
												if (((*(uint *)(puVar11 + 0x5624) == uVar39) && (*(uint *)(puVar11 + 0x5628) == uVar55)) && (iVar50 != 1)) {
													*(uint *)puVar24 = uVar39;
													*(uint *)puVar23 = uVar55;
													*puVar13 = 1;
												}
												if (((*(uint *)(puVar11 + 0xac10) == uVar39) && (*(uint *)(puVar11 + 0xac14) == uVar55)) && (iVar50 != 2)) {
													*(uint *)puVar24 = uVar39;
													*(uint *)puVar23 = uVar55;
													*puVar13 = 2;
												}
												uVar57 = (ulonglong) * (uint *)(puVar11 + 0x101fc);
												if (((*(uint *)(puVar11 + 0x101fc) == uVar39) && (uVar57 = (ulonglong) * (uint *)(puVar11 + 0x10200), *(uint *)(puVar11 + 0x10200) == uVar55)) && (iVar50 != 3)) {
													*(uint *)puVar24 = uVar39;
													*(uint *)puVar23 = uVar55;
													*puVar13 = 3;
												}
											}
											uVar42 = (undefined)uVar57;
											lVar44 = lVar44 + 1;
											uVar45 = (undefined)lVar44;
											lVar46 = lVar46 + 1;
											uVar47 = (undefined)lVar46;
											lVar59 = lVar59 + -1;
										} while (lVar59 != 0);
										lVar41 = lVar41 + 1;
										uVar34 = (undefined)lVar41;
									} while ((int)lVar41 < 2);
								}
								cVar28 = *(char *)(iVar6 + iVar27 + iVar56 + 0x71);
								if (cVar28 != '\0') {
									if (cVar28 < '\x01') {
										cVar28 = -(cVar28 + '\x01');
									} else {
										cVar28 = cVar28 + -1;
									}
									if (((int)cVar28 != iVar50) && (*(int *)(puVar11 + (int)cVar28 * 0x55ec + 0x194) != 0)) {
										*(int *)puVar24 = iVar52 + 1;
										*(int *)puVar23 = iVar56 + 1;
										*puVar13 = cVar28;
									}
								}
							}
							if ((iVar26 == -1) && (*puVar13 == -1)) {
								if ((!bVar10) && (cVar29 = *(char *)(*piVar48 + iVar52 * 0x70 + iVar56 + 0x70), cVar29 != '\0')) {
									if (cVar29 < '\x01') {
										cVar29 = -(cVar29 + '\x01');
									} else {
										cVar29 = cVar29 + -1;
									}
									if ('\x01' < (char)puVar20[(int)cVar29 * 0x78 + 0x40]) {
										*(int *)puVar24 = iVar52 + 1;
										*(int *)puVar23 = iVar56;
										*puVar16 = cVar29;
									}
								}
								if ((bVar10) && (cVar29 = *(char *)(*piVar48 + iVar52 * 0x70 + iVar56 + 1), cVar29 != '\0')) {
									if (cVar29 < '\x01') {
										cVar29 = -(cVar29 + '\x01');
									} else {
										cVar29 = cVar29 + -1;
									}
									if ('\x01' < (char)puVar20[(int)cVar29 * 0x78 + 0x40]) {
										*(int *)puVar24 = iVar52;
										*(int *)puVar23 = iVar56 + 1;
										*puVar16 = cVar29;
									}
								}
								iVar50 = *piVar48;
								cVar29 = *(char *)(iVar50 + iVar52 * 0x70 + iVar56);
								if (cVar29 != '\0') {
									if (cVar29 < '\x01') {
										cVar29 = -(cVar29 + '\x01');
									} else {
										cVar29 = cVar29 + -1;
									}
									if ((puVar20[(int)cVar29 * 0x78 + 0x40] == '\x01') || (puVar20[(int)cVar29 * 0x78 + 0x40] == '\x03')) {
										*(int *)puVar24 = iVar52;
										*(int *)puVar23 = iVar56;
										*puVar16 = cVar29;
									}
								}
								cVar28 = *(char *)(iVar50 + iVar52 * 0x70 + iVar56 + 0x71);
								if (cVar28 != '\0') {
									if (cVar28 < '\x01') {
										cVar28 = -(cVar28 + '\x01');
									} else {
										cVar28 = cVar28 + -1;
									}
									if ('\x01' < (char)puVar20[(int)cVar28 * 0x78 + 0x40]) {
										*(int *)puVar24 = iVar52 + 1;
										*(int *)puVar23 = iVar56 + 1;
										*puVar16 = cVar28;
									}
								}
							}
							if (((*puVar13 == -1) && (*puVar16 == -1)) && (iVar26 == -1)) {
								if (((!bVar10) && (cVar28 = *(char *)(*(int *)ppuVar31[-0x1da3] + iVar52 * 0x70 + iVar56 + 0x70), '\0' < cVar28)) && (cVar28 = cVar28 + -1, '\x01' < (char)puVar19[(int)cVar28 * 0x170 + 0x30])) {
									*(int *)puVar24 = iVar52 + 1;
									*(int *)puVar23 = iVar56;
									*puVar17 = cVar28;
								}
								if (((bVar10) && (cVar28 = *(char *)(*(int *)ppuVar31[-0x1da3] + iVar52 * 0x70 + iVar56 + 1), '\0' < cVar28)) && (cVar28 = cVar28 + -1, '\x01' < (char)puVar19[(int)cVar28 * 0x170 + 0x30])) {
									*(int *)puVar24 = iVar52;
									*(int *)puVar23 = iVar56 + 1;
									*puVar17 = cVar28;
								}
								uVar40 = (undefined)(lVar43 * 0x70);
								iVar50 = *(int *)ppuVar31[-0x1da3];
								iVar54 = (int)(lVar43 * 0x70);
								cVar28 = *(char *)(iVar50 + iVar54 + iVar56);
								if ('\0' < cVar28) {
									cVar29 = (char)(uVar49 + 0x30);
									cVar28 = cVar28 + -1;
									cVar35 = *(char *)((int)(uVar49 + 0x30) + (int)cVar28 * 0x170);
									if ((cVar35 == '\x01') || (cVar35 == '\x03')) {
										*(int *)puVar24 = iVar52;
										*(int *)puVar23 = iVar56;
										*puVar17 = cVar28;
									}
								}
								cVar35 = *(char *)(iVar50 + iVar54 + iVar56 + 0x71);
								if ('\0' < cVar35) {
									cVar30 = cVar35 + -1;
									cVar35 = puVar19[(int)cVar30 * 0x170 + 0x30];
									if ('\x01' < cVar35) {
										cVar28 = (char)(lVar43 + 1);
										cVar35 = (char)(lVar53 + 1);
										*(int *)puVar24 = (int)(lVar43 + 1);
										*(int *)puVar23 = (int)(lVar53 + 1);
										*puVar17 = cVar30;
									}
								}
								if (*puVar17 == -1) {
									*(int *)puVar24 = iVar52;
									*(int *)puVar23 = iVar56;
									CheckTrigForce(cVar35, cVar28, cVar29, uVar40, uVar42, uVar45, uVar47, uVar34,
									    in_stack_ffffff78);
									uVar36 = CheckTown();
									CheckRportal(uVar36, cVar28, cVar29, uVar40, uVar42, uVar45, uVar47, uVar34,
									    in_stack_ffffff78);
								}
							}
							if (*(int *)ppuVar31[-0x1dd1] == 2) {
								*puVar16 = 0xff;
								*(undefined4 *)puVar15 = 0xffffffff;
								*puVar17 = 0xff;
								*(int *)puVar24 = iVar52;
								*(int *)puVar23 = iVar56;
							}
							if ((*(int *)puVar15 != -1) && ((*(uint *)(puVar14 + *(int *)puVar15 * 0xe8 + 0xa0) & 0x20) != 0)) {
								*(undefined4 *)puVar15 = 0xffffffff;
							}
						}
					} else {
						uVar34 = CheckInvHLight();
						*ppuVar31[-0x1dcb] = uVar34;
					}
				}
			} else {
				CheckPanelInfo();
			}
		} else {
			*(int *)puVar24 = iVar52;
			*(int *)puVar23 = iVar56;
		}
	}
	return;
}
