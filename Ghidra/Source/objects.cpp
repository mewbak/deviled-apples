
void InitObjectGFX(undefined8 uParm1, undefined8 uParm2, undefined param_3, longlong lParm4,
    undefined8 uParm5, undefined4 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	char cVar1;
	undefined *puVar2;
	int iVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	int iVar8;
	undefined4 uVar9;
	ulonglong uVar10;
	ulonglong uVar11;
	undefined8 uVar12;
	longlong lVar13;
	char *pcVar15;
	ulonglong uVar14;
	undefined4 uVar16;
	undefined4 uVar17;
	undefined8 unaff_r24;
	char *pcVar19;
	longlong lVar18;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	uint *puVar20;
	undefined8 unaff_r29;
	longlong lVar21;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined local_58[56];
	undefined4 local_20;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	uVar9 = _DAT_100f34d0;
	iVar8 = _DAT_100f34cc;
	puVar7 = PTR_DAT_100f2004;
	puVar6 = PTR_DAT_100f2000;
	puVar5 = PTR_DAT_100f1ff8;
	puVar4 = PTR_DAT_100f17ec;
	uVar17 = (undefined4)uParm5;
	uVar16 = (undefined4)((ulonglong)uParm5 >> 0x20);
	uVar10 = ZEXT48(register0x0000000c);
	local_20 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	puVar2 = (undefined *)(uVar10 - 0xb0);
	*(BADSPACEBASE **)puVar2 = register0x0000000c;
	memset((char)(uVar10 - 0xb0) + 'X', 0x38, param_3, (char)lParm4, (char)uParm5, (char)uParm6,
	    (char)uParm7, (char)uParm8, puVar2[0xb], puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
	uVar11 = (ulonglong) * (uint *)(puVar2 + 0x14);
	pcVar19 = *(char **)(*(uint *)(puVar2 + 0x14) - 0x6fc8);
	while (*pcVar19 != -1) {
		if (((*pcVar19 == '\x01') && ((int)pcVar19[2] <= (int)(uint)(byte)*puVar4)) && ((int)(uint)(byte)*puVar4 <= (int)pcVar19[3])) {
			local_58[(int)pcVar19[1]] = 1;
		}
		cVar1 = pcVar19[5];
		if (cVar1 != -1) {
			uVar14 = (ulonglong) * (uint *)puVar6;
			lParm4 = (uVar10 - 0x58) + (longlong)pcVar19[1];
			pcVar15 = puVar7;
			if (0 < (int)*(uint *)puVar6) {
				do {
					if (*pcVar15 == cVar1) {
						*(undefined *)lParm4 = 1;
					}
					pcVar15 = pcVar15 + 8;
					uVar14 = uVar14 - 1;
				} while (uVar14 != 0);
			}
		}
		if ((pcVar19[6] != -1) && (uVar12 = QuestStatus((int)pcVar19[6], *puVar2), (int)uVar12 != 0)) {
			local_58[(int)pcVar19[1]] = 1;
		}
		pcVar19 = pcVar19 + 0x2c;
	}
	lVar21 = 0;
	puVar20 = *(uint **)((int)uVar11 + -0x6fd4);
	lVar18 = uVar10 - 0x58;
	do {
		if (*(char *)lVar18 != '\0') {
			puVar5[*(int *)((int)uVar11 + -0x4cc8)] = (char)lVar21;
			uVar14 = (ulonglong)*puVar20;
			sprintf((int)(puVar2 + 0x38), uVar9, *puVar20, (int)lParm4, uVar17, uParm6, uParm7, uParm8,
			    *(undefined4 *)(puVar2 + 8), puVar2[0xf], *(undefined4 *)(puVar2 + 0x1c),
			    *(undefined4 *)(puVar2 + 0x20), *(undefined4 *)(puVar2 + 0x24),
			    *(undefined4 *)(puVar2 + 0x28), *(undefined4 *)(puVar2 + 0x2c),
			    *(undefined4 *)(puVar2 + 0x30), *(undefined4 *)(puVar2 + 0x34));
			lVar13 = LoadFileInMem(uVar10 - 0x78, (undefined4 *)0x0, uVar14, lParm4, CONCAT44(uVar16, uVar17),
			    uParm6, uParm7, uParm8, *(undefined4 *)(puVar2 + 8));
			iVar3 = (int)uVar11;
			*(undefined4 *)(iVar8 + *(int *)(iVar3 + -0x4cc8) * 4) = (int)lVar13;
			*(int *)(iVar3 + -0x4cc8) = *(int *)(iVar3 + -0x4cc8) + 1;
		}
		lVar21 = lVar21 + 1;
		puVar20 = puVar20 + 1;
		lVar18 = lVar18 + 1;
	} while ((int)lVar21 < 0x38);
	return;
}

void FreeObjectGFX(undefined param_1, char param_2, char param_3, char param_4, char param_5, char param_6, char param_7, char param_8, undefined4 param_9)

{
	ulonglong uVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	int iVar9;
	int **ppiVar10;
	undefined4 in_stack_ffffffc8;

	lVar8 = (longlong)param_8;
	lVar7 = (longlong)param_7;
	lVar6 = (longlong)param_6;
	lVar5 = (longlong)param_5;
	lVar4 = (longlong)param_4;
	lVar3 = (longlong)param_3;
	lVar2 = (longlong)param_2;
	uVar1 = ZEXT48(&toc);
	iVar9 = 0;
	ppiVar10 = _DAT_100f34cc;
	while (iVar9 < *(int *)((int)uVar1 + -0x4cc8)) {
		mem_free_dbg(ppiVar10, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7,
		    (char)lVar8, in_stack_ffffffc8);
		ppiVar10 = ppiVar10 + 1;
		iVar9 = iVar9 + 1;
	}
	*(undefined4 *)((int)uVar1 + -0x4cc8) = 0;
	return;
}

undefined8 RndLocOk(int param_1, int param_2)

{
	short sVar1;
	int iVar2;

	iVar2 = param_1 * 0xe0 + param_2 * 2;
	if (*(short *)(*(int *)PTR_DAT_100f1954 + iVar2) != 0) {
		return 0;
	}
	param_2 = param_1 * 0x70 + param_2;
	if (*(char *)(*(int *)PTR_DAT_100f1950 + param_2) != '\0') {
		return 0;
	}
	if (*(char *)(*(int *)PTR_DAT_100f194c + param_2) != '\0') {
		return 0;
	}
	if ((*(byte *)(*(int *)PTR_DAT_100f1834 + param_2) & 8) != 0) {
		return 0;
	}
	sVar1 = *(short *)(*(int *)PTR_DAT_100f1a54 + iVar2);
	if (*(char *)(_DAT_100f1da4 + (int)sVar1) != '\0') {
		return 0;
	}
	if (((*PTR_DAT_100f183c == '\x01') && (0x7e < sVar1)) && (sVar1 < 0x90)) {
		return 0;
	}
	return 1;
}

void InitRndLocObj(longlong param_1, longlong param_2, uint param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	int iVar2;
	longlong lVar3;
	longlong lVar4;
	int iVar7;
	longlong lVar5;
	undefined8 uVar6;
	int iVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	int iVar15;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined in_stack_ffffffcb;

	lVar14 = (longlong)param_8;
	lVar13 = (longlong)param_7;
	lVar12 = (longlong)param_6;
	lVar11 = (longlong)param_5;
	lVar10 = (longlong)param_4;
	lVar4 = (longlong)(int)param_3;
	lVar3 = random(0x8b, param_2 - param_1, (char)param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb);
	iVar15 = 0;
	while (lVar9 = lVar4, iVar15 < (int)param_1 + (int)lVar3) {
		do {
			do {
				do {
					lVar4 = random(0x8b, 0x50, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12,
					    (char)lVar13, (char)lVar14, in_stack_ffffffb8, in_stack_ffffffbf,
					    in_stack_ffffffcb);
					iVar2 = (int)lVar4;
					iVar7 = iVar2 + 0x10;
					lVar5 = random(0x8b, 0x50, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12,
					    (char)lVar13, (char)lVar14, in_stack_ffffffb8, in_stack_ffffffbf,
					    in_stack_ffffffcb);
					lVar4 = lVar5 + 0x10;
					iVar1 = (int)lVar5;
					uVar6 = RndLocOk(iVar2 + 0xf, iVar1 + 0xf);
				} while ((int)uVar6 == 0);
				uVar6 = RndLocOk(iVar7, iVar1 + 0xf);
			} while (((int)uVar6 == 0) || (uVar6 = RndLocOk(iVar2 + 0x11, iVar1 + 0xf), (int)uVar6 == 0));
			iVar8 = (int)lVar4;
			uVar6 = RndLocOk(iVar2 + 0xf, iVar8);
		} while ((((int)uVar6 == 0) || (((uVar6 = RndLocOk(iVar7, iVar8), (int)uVar6 == 0 || (uVar6 = RndLocOk(iVar2 + 0x11, iVar8), (int)uVar6 == 0)) || (uVar6 = RndLocOk(iVar2 + 0xf, iVar1 + 0x11), (int)uVar6 == 0)))) || ((uVar6 = RndLocOk(iVar7, iVar1 + 0x11), (int)uVar6 == 0 || (uVar6 = RndLocOk(iVar2 + 0x11, iVar1 + 0x11), (int)uVar6 == 0))));
		AddObject(param_3, iVar7, iVar8, (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13,
		    (char)lVar14, in_stack_ffffffb8);
		iVar15 = iVar15 + 1;
	}
	return;
}

void InitRndLocBigObj(longlong param_1, longlong param_2, uint param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	int iVar2;
	longlong lVar3;
	longlong lVar4;
	int iVar7;
	longlong lVar5;
	undefined8 uVar6;
	int iVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	int iVar15;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined in_stack_ffffffcb;

	lVar14 = (longlong)param_8;
	lVar13 = (longlong)param_7;
	lVar12 = (longlong)param_6;
	lVar11 = (longlong)param_5;
	lVar10 = (longlong)param_4;
	lVar4 = (longlong)(int)param_3;
	lVar3 = random(0x8c, param_2 - param_1, (char)param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb);
	iVar15 = 0;
	while (lVar9 = lVar4, iVar15 < (int)param_1 + (int)lVar3) {
		do {
			do {
				do {
					lVar4 = random(0x8c, 0x50, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12,
					    (char)lVar13, (char)lVar14, in_stack_ffffffb8, in_stack_ffffffbf,
					    in_stack_ffffffcb);
					iVar2 = (int)lVar4;
					iVar7 = iVar2 + 0x10;
					lVar5 = random(0x8c, 0x50, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12,
					    (char)lVar13, (char)lVar14, in_stack_ffffffb8, in_stack_ffffffbf,
					    in_stack_ffffffcb);
					lVar4 = lVar5 + 0x10;
					iVar1 = (int)lVar5;
					uVar6 = RndLocOk(iVar2 + 0xf, iVar1 + 0xe);
				} while ((int)uVar6 == 0);
				uVar6 = RndLocOk(iVar7, iVar1 + 0xe);
			} while (((((int)uVar6 == 0) || (uVar6 = RndLocOk(iVar2 + 0x11, iVar1 + 0xe), (int)uVar6 == 0)) || (uVar6 = RndLocOk(iVar2 + 0xf, iVar1 + 0xf), (int)uVar6 == 0)) || ((uVar6 = RndLocOk(iVar7, iVar1 + 0xf), (int)uVar6 == 0 || (uVar6 = RndLocOk(iVar2 + 0x11, iVar1 + 0xf), (int)uVar6 == 0))));
			iVar8 = (int)lVar4;
			uVar6 = RndLocOk(iVar2 + 0xf, iVar8);
		} while (((((int)uVar6 == 0) || ((uVar6 = RndLocOk(iVar7, iVar8), (int)uVar6 == 0 || (uVar6 = RndLocOk(iVar2 + 0x11, iVar8), (int)uVar6 == 0)))) || (uVar6 = RndLocOk(iVar2 + 0xf, iVar1 + 0x11), (int)uVar6 == 0)) || ((uVar6 = RndLocOk(iVar7, iVar1 + 0x11), (int)uVar6 == 0 || (uVar6 = RndLocOk(iVar2 + 0x11, iVar1 + 0x11), (int)uVar6 == 0))));
		AddObject(param_3, iVar7, iVar8, (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13,
		    (char)lVar14, in_stack_ffffffb8);
		iVar15 = iVar15 + 1;
	}
	return;
}

void InitRndLocObj5x5(longlong param_1, longlong param_2, uint param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	bool bVar1;
	longlong lVar2;
	longlong lVar3;
	undefined8 uVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	longlong unaff_r29;
	longlong unaff_r30;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	lVar10 = (longlong)param_8;
	lVar9 = (longlong)param_7;
	lVar8 = (longlong)param_6;
	lVar7 = (longlong)param_5;
	lVar6 = (longlong)param_4;
	lVar5 = (longlong)(int)param_3;
	lVar2 = random(0x8b, param_2 - param_1, (char)param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
	iVar11 = 0;
	do {
		if ((int)param_1 + (int)lVar2 <= iVar11) {
			return;
		}
		iVar12 = 0;
		bVar1 = false;
		while (true) {
			if (bVar1)
				break;
			bVar1 = true;
			lVar3 = random(0x8b, 0x50, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9,
			    (char)lVar10, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
			unaff_r30 = lVar3 + 0x10;
			lVar3 = random(0x8b, 0x50, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9,
			    (char)lVar10, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
			unaff_r29 = lVar3 + 0x10;
			iVar13 = -2;
			do {
				iVar14 = -2;
				do {
					uVar4 = RndLocOk((int)unaff_r30 + iVar14, (int)unaff_r29 + iVar13);
					if ((int)uVar4 == 0) {
						bVar1 = false;
					}
					iVar14 = iVar14 + 1;
				} while (iVar14 < 3);
				iVar13 = iVar13 + 1;
			} while (iVar13 < 3);
			if ((!bVar1) && (iVar12 = iVar12 + 1, 20000 < iVar12)) {
				return;
			}
		}
		lVar5 = unaff_r29;
		AddObject(param_3, (int)unaff_r30, (int)unaff_r29, (char)lVar6, (char)lVar7, (char)lVar8,
		    (char)lVar9, (char)lVar10, in_stack_ffffffa8);
		iVar11 = iVar11 + 1;
	} while (true);
}

void ClrAllObjects(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined4 *puVar4;
	undefined4 *puVar5;
	int *piVar6;
	longlong lVar7;
	int iVar8;
	longlong lVar9;

	puVar2 = PTR_DAT_100f1e7c;
	puVar1 = PTR_DAT_100f1e40;
	lVar9 = 0x7f;
	lVar7 = 0;
	puVar3 = PTR_DAT_100f1948;
	do {
		*(undefined4 *)(puVar3 + 4) = 0;
		*(undefined4 *)(puVar3 + 8) = 0;
		*(undefined4 *)(puVar3 + 0x14) = 0;
		*(undefined4 *)(puVar3 + 0x18) = 0;
		*(undefined4 *)(puVar3 + 0x1c) = 0;
		*(undefined4 *)(puVar3 + 0x20) = 0;
		*(undefined4 *)(puVar3 + 0x24) = 0;
		*(undefined4 *)(puVar3 + 0x30) = 0;
		*(undefined4 *)(puVar3 + 0x58) = 0;
		*(undefined4 *)(puVar3 + 0x5c) = 0;
		*(undefined4 *)(puVar3 + 0x60) = 0;
		*(undefined4 *)(puVar3 + 100) = 0;
		puVar3 = puVar3 + 0x78;
		lVar9 = lVar9 + -1;
	} while (lVar9 != 0);
	lVar9 = 0xf;
	*(undefined4 *)PTR_DAT_100f1e3c = 0;
	piVar6 = (int *)puVar2;
	puVar4 = (undefined4 *)puVar1;
	do {
		iVar8 = (int)lVar7;
		*piVar6 = iVar8;
		*puVar4 = 0;
		piVar6[1] = iVar8 + 1;
		puVar4[1] = 0;
		lVar7 = lVar7 + 8;
		piVar6[2] = iVar8 + 2;
		puVar4[2] = 0;
		piVar6[3] = iVar8 + 3;
		puVar4[3] = 0;
		piVar6[4] = iVar8 + 4;
		puVar4[4] = 0;
		piVar6[5] = iVar8 + 5;
		puVar4[5] = 0;
		piVar6[6] = iVar8 + 6;
		puVar4[6] = 0;
		piVar6[7] = iVar8 + 7;
		piVar6 = piVar6 + 8;
		puVar4[7] = 0;
		puVar4 = puVar4 + 8;
		lVar9 = lVar9 + -1;
	} while (lVar9 != 0);
	iVar8 = (int)lVar7 * 4;
	puVar4 = (undefined4 *)(puVar2 + iVar8);
	puVar5 = (undefined4 *)(puVar1 + iVar8);
	lVar9 = 0x7f - lVar7;
	if ((int)lVar7 < 0x7f) {
		do {
			*puVar4 = (int)lVar7;
			puVar4 = puVar4 + 1;
			lVar7 = lVar7 + 1;
			*puVar5 = 0;
			puVar5 = puVar5 + 1;
			lVar9 = lVar9 + -1;
		} while (lVar9 != 0);
	}
	puVar2 = PTR_DAT_100f1ff0;
	*(undefined4 *)PTR_DAT_100f1ff4 = 1;
	puVar1 = PTR_DAT_100f1fec;
	*(undefined4 *)puVar2 = 0;
	*(undefined4 *)puVar1 = 1;
	return;
}

undefined AddTortures(undefined param_1, undefined param_2, undefined param_3, char param_4,
    char param_5, char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	undefined4 in_stack_ffffffb8;

	puVar1 = PTR_DAT_100f1a54;
	lVar6 = (longlong)param_8;
	lVar5 = (longlong)param_7;
	lVar4 = (longlong)param_6;
	lVar3 = (longlong)param_5;
	lVar2 = (longlong)param_4;
	iVar8 = 0;
	iVar9 = 0;
	do {
		iVar7 = 0;
		iVar10 = 0;
		do {
			if (*(short *)(iVar9 + *(int *)puVar1 + iVar10) == 0x16f) {
				AddObject(0x24, iVar7, iVar8 + 1, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5,
				    (char)lVar6, in_stack_ffffffb8);
				AddObject(0x26, iVar7 + 2, iVar8 + -1, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5,
				    (char)lVar6, in_stack_ffffffb8);
				AddObject(0x25, iVar7, iVar8 + 3, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5,
				    (char)lVar6, in_stack_ffffffb8);
				AddObject(0x27, iVar7 + 4, iVar8 + -1, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5,
				    (char)lVar6, in_stack_ffffffb8);
				AddObject(0x28, iVar7, iVar8 + 5, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5,
				    (char)lVar6, in_stack_ffffffb8);
				AddObject(0x1d, iVar7 + 1, iVar8 + 3, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5,
				    (char)lVar6, in_stack_ffffffb8);
				AddObject(0x1e, iVar7 + 4, iVar8 + 5, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5,
				    (char)lVar6, in_stack_ffffffb8);
				AddObject(0x1f, iVar7 + 2, iVar8, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5,
				    (char)lVar6, in_stack_ffffffb8);
				AddObject(0x20, iVar7 + 3, iVar8 + 2, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5,
				    (char)lVar6, in_stack_ffffffb8);
				AddObject(0x21, iVar7 + 2, iVar8 + 4, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5,
				    (char)lVar6, in_stack_ffffffb8);
				AddObject(0x22, iVar7 + 2, iVar8 + 1, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5,
				    (char)lVar6, in_stack_ffffffb8);
				param_1 = AddObject(0x23, iVar7 + 4, iVar8 + 2, (char)lVar2, (char)lVar3, (char)lVar4,
				    (char)lVar5, (char)lVar6, in_stack_ffffffb8);
			}
			iVar7 = iVar7 + 1;
			iVar10 = iVar10 + 0xe0;
		} while (iVar7 < 0x70);
		iVar8 = iVar8 + 1;
		iVar9 = iVar9 + 2;
	} while (iVar8 < 0x70);
	return param_1;
}

void AddCandles(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	int iVar2;
	undefined4 in_stack_ffffffc8;

	iVar1 = *(int *)(PTR_DAT_100f19cc + 0x140);
	iVar2 = *(int *)(PTR_DAT_100f19cc + 0x13c);
	AddObject(0x57, iVar2 + -2, iVar1 + 1, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	AddObject(0x57, iVar2 + 3, iVar1 + 1, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	AddObject(0x57, iVar2 + -1, iVar1 + 2, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	AddObject(0x57, iVar2 + 2, iVar1 + 2, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void AddBookLever(undefined4 param_1, undefined4 param_2, int param_3, int param_4, int param_5,
    int param_6, int param_7, int param_8, undefined4 param_9, undefined param_10,
    undefined4 param_11, undefined4 param_12, undefined4 param_13, undefined4 param_14,
    undefined4 param_15)

{
	bool bVar1;
	undefined *puVar2;
	undefined *puVar3;
	ulonglong uVar4;
	int iVar5;
	longlong lVar6;
	undefined8 uVar7;
	int iVar8;
	int iVar9;
	longlong lVar10;
	int iVar11;
	longlong lVar12;
	undefined uVar13;
	longlong lVar14;
	undefined uVar15;
	longlong lVar16;
	undefined uVar17;
	longlong lVar18;
	undefined uVar19;
	longlong lVar20;
	undefined uVar21;
	longlong unaff_r22;
	longlong unaff_r23;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;

	puVar3 = PTR_DAT_100f1fec;
	puVar2 = PTR_DAT_100f1948;
	lVar20 = (longlong)param_8;
	lVar18 = (longlong)param_7;
	lVar16 = (longlong)param_6;
	lVar14 = (longlong)param_5;
	lVar12 = (longlong)param_4;
	lVar10 = (longlong)param_3;
	uVar4 = ZEXT48(&toc);
	iVar8 = 0;
	bVar1 = false;
	do {
		iVar5 = (int)uVar4;
		uVar21 = (undefined)lVar20;
		uVar19 = (undefined)lVar18;
		uVar17 = (undefined)lVar16;
		uVar15 = (undefined)lVar14;
		uVar13 = (undefined)lVar12;
		iVar9 = (int)unaff_r23;
		iVar11 = (int)unaff_r22;
		if (bVar1) {
			uVar7 = QuestStatus(8);
			if ((int)uVar7 != 0) {
				AddObject(0x47, iVar9, iVar11, uVar13, uVar15, uVar17, uVar19, uVar21, in_stack_ffffff98);
			}
			uVar7 = QuestStatus(0xb);
			if ((int)uVar7 != 0) {
				AddObject(0x58, iVar9, iVar11, uVar13, uVar15, uVar17, uVar19, uVar21, in_stack_ffffff98);
			}
			uVar7 = QuestStatus(9);
			if ((int)uVar7 != 0) {
				iVar9 = **(int **)(iVar5 + -0x754c) * 2 + 0x19;
				iVar11 = **(int **)(iVar5 + -0x7550) * 2 + 0x28;
				AddObject(0x48, iVar9, iVar11, uVar13, uVar15, uVar17, uVar19, uVar21, in_stack_ffffff98);
			}
			iVar8 = (int)*(char *)(**(int **)(iVar5 + -0x7684) + iVar9 * 0x70 + iVar11) + -1;
			SetObjMapRange(iVar8, param_5, param_6, param_7, param_8, *(undefined4 *)puVar3);
			SetBookMsg(iVar8, param_15);
			*(int *)puVar3 = *(int *)puVar3 + 1;
			*(int *)(puVar2 + iVar8 * 0x78 + 0x6c) = *(int *)(puVar2 + iVar8 * 0x78 + 0x24) + 1;
			return;
		}
		bVar1 = true;
		lVar6 = random(0x8b, 0x50, (char)lVar10, uVar13, uVar15, uVar17, uVar19, uVar21, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
		unaff_r23 = lVar6 + 0x10;
		lVar6 = random(0x8b, 0x50, (char)lVar10, (char)lVar12, (char)lVar14, (char)lVar16, (char)lVar18,
		    (char)lVar20, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
		unaff_r22 = lVar6 + 0x10;
		iVar5 = -2;
		do {
			iVar9 = -2;
			do {
				uVar7 = RndLocOk((int)unaff_r23 + iVar9, (int)unaff_r22 + iVar5);
				if ((int)uVar7 == 0) {
					bVar1 = false;
				}
				iVar9 = iVar9 + 1;
			} while (iVar9 < 3);
			iVar5 = iVar5 + 1;
		} while (iVar5 < 3);
	} while ((bVar1) || (iVar8 = iVar8 + 1, iVar8 < 0x4e21));
	return;
}

void InitRndBarrels(undefined param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	int iVar2;
	int iVar3;
	longlong lVar4;
	longlong lVar5;
	undefined8 uVar6;
	uint uVar7;
	ulonglong uVar8;
	ulonglong uVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	ulonglong uVar18;
	ulonglong uVar19;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	iVar3 = _DAT_100f34c8;
	iVar2 = _DAT_100f34c4;
	lVar14 = (longlong)param_8;
	lVar13 = (longlong)param_7;
	lVar12 = (longlong)param_6;
	lVar11 = (longlong)param_5;
	lVar10 = (longlong)param_4;
	uVar9 = SEXT18(param_3);
	lVar4 = random(0x8f, 5, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8,
	    in_stack_ffffffaf, in_stack_ffffffbb);
	iVar15 = 0;
	while (iVar15 < (int)lVar4 + 3) {
		do {
			lVar5 = random(0x8f, 0x50, (char)uVar9, (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13, (char)lVar14, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
			uVar19 = lVar5 + 0x10;
			lVar5 = random(0x8f, 0x50, (char)uVar9, (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13, (char)lVar14, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
			uVar18 = lVar5 + 0x10;
			uVar6 = RndLocOk((int)uVar19, (int)uVar18);
		} while ((int)uVar6 == 0);
		lVar5 = random(0x8f, 4, (char)uVar9, (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13,
		    (char)lVar14, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
		if ((int)lVar5 == 0) {
			uVar7 = 0x3a;
		} else {
			uVar7 = 0x39;
		}
		uVar8 = uVar19;
		uVar9 = uVar18;
		AddObject(uVar7, (int)uVar19, (int)uVar18, (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13,
		    (char)lVar14, in_stack_ffffffa8);
		iVar17 = 1;
		uVar6 = 1;
		while (true) {
			uVar8 = uVar8 & 0xffffffff00000000 | (ulonglong)(uint)(iVar17 >> 1);
			lVar5 = random(0x8f, uVar8, (char)uVar9, (char)lVar10, (char)lVar11, (char)lVar12,
			    (char)lVar13, (char)lVar14, in_stack_ffffffa8, in_stack_ffffffaf,
			    in_stack_ffffffbb);
			if (((int)lVar5 != 0) || ((int)uVar6 == 0))
				break;
			iVar16 = 0;
			uVar6 = 0;
			while (true) {
				if (((int)uVar6 != 0) || (2 < iVar16))
					break;
				lVar5 = random(0x8f, 8, (char)uVar9, (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13,
				    (char)lVar14, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
				iVar1 = (int)lVar5 * 4;
				uVar19 = uVar19 + (ulonglong) * (uint *)(iVar3 + iVar1);
				uVar18 = uVar18 + (ulonglong) * (uint *)(iVar2 + iVar1);
				uVar8 = uVar18;
				uVar6 = RndLocOk((int)uVar19, (int)uVar18);
				iVar16 = iVar16 + 1;
			}
			if ((int)uVar6 != 0) {
				lVar5 = random(0x8f, 5, (char)uVar9, (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13,
				    (char)lVar14, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
				if ((int)lVar5 == 0) {
					uVar7 = 0x3a;
				} else {
					uVar7 = 0x39;
				}
				uVar8 = uVar19;
				uVar9 = uVar18;
				AddObject(uVar7, (int)uVar19, (int)uVar18, (char)lVar10, (char)lVar11, (char)lVar12,
				    (char)lVar13, (char)lVar14, in_stack_ffffffa8);
				iVar17 = iVar17 + 1;
			}
		}
		iVar15 = iVar15 + 1;
	}
	return;
}

void AddL1Objs(int param_1, int param_2, int param_3, int param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	short sVar1;
	undefined *puVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	undefined4 in_stack_ffffffa8;

	puVar2 = PTR_DAT_100f1a54;
	lVar7 = (longlong)param_8;
	lVar6 = (longlong)param_7;
	lVar5 = (longlong)param_6;
	lVar4 = (longlong)param_5;
	lVar3 = (longlong)param_4;
	iVar9 = param_2 << 1;
	while (param_2 < param_4) {
		iVar10 = param_1 * 0xe0;
		iVar8 = param_1;
		while (iVar8 < param_3) {
			sVar1 = *(short *)(iVar9 + *(int *)puVar2 + iVar10);
			if (sVar1 == 0x10e) {
				AddObject(0, iVar8, param_2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7,
				    in_stack_ffffffa8);
			}
			if (((sVar1 == 0x2c) || (sVar1 == 0x33)) || (sVar1 == 0xd6)) {
				AddObject(1, iVar8, param_2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7,
				    in_stack_ffffffa8);
			}
			if ((sVar1 == 0x2e) || (sVar1 == 0x38)) {
				AddObject(2, iVar8, param_2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7,
				    in_stack_ffffffa8);
			}
			iVar10 = iVar10 + 0xe0;
			iVar8 = iVar8 + 1;
		}
		iVar9 = iVar9 + 2;
		param_2 = param_2 + 1;
	}
	return;
}

void AddL2Objs(int param_1, int param_2, int param_3, int param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	short sVar1;
	undefined *puVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	undefined4 in_stack_ffffffa8;

	puVar2 = PTR_DAT_100f1a54;
	lVar7 = (longlong)param_8;
	lVar6 = (longlong)param_7;
	lVar5 = (longlong)param_6;
	lVar4 = (longlong)param_5;
	lVar3 = (longlong)param_4;
	iVar9 = param_2 << 1;
	while (param_2 < param_4) {
		iVar10 = param_1 * 0xe0;
		iVar8 = param_1;
		while (iVar8 < param_3) {
			sVar1 = *(short *)(iVar9 + *(int *)puVar2 + iVar10);
			if ((sVar1 == 0xd) || (sVar1 == 0x21d)) {
				AddObject(0x2a, iVar8, param_2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7,
				    in_stack_ffffffa8);
			}
			if ((sVar1 == 0x11) || (sVar1 == 0x21e)) {
				AddObject(0x2b, iVar8, param_2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7,
				    in_stack_ffffffa8);
			}
			iVar10 = iVar10 + 0xe0;
			iVar8 = iVar8 + 1;
		}
		iVar9 = iVar9 + 2;
		param_2 = param_2 + 1;
	}
	return;
}

void AddL3Objs(int param_1, int param_2, int param_3, int param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	short sVar1;
	undefined *puVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	undefined4 in_stack_ffffffa8;

	puVar2 = PTR_DAT_100f1a54;
	lVar7 = (longlong)param_8;
	lVar6 = (longlong)param_7;
	lVar5 = (longlong)param_6;
	lVar4 = (longlong)param_5;
	lVar3 = (longlong)param_4;
	iVar9 = param_2 << 1;
	while (param_2 < param_4) {
		iVar10 = param_1 * 0xe0;
		iVar8 = param_1;
		while (iVar8 < param_3) {
			sVar1 = *(short *)(iVar9 + *(int *)puVar2 + iVar10);
			if (sVar1 == 0x213) {
				AddObject(0x4a, iVar8, param_2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7,
				    in_stack_ffffffa8);
			}
			if (sVar1 == 0x216) {
				AddObject(0x4b, iVar8, param_2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7,
				    in_stack_ffffffa8);
			}
			iVar10 = iVar10 + 0xe0;
			iVar8 = iVar8 + 1;
		}
		iVar9 = iVar9 + 2;
		param_2 = param_2 + 1;
	}
	return;
}

undefined8 WallTrapLocOk(int param_1, int param_2)

{
	if ((*(byte *)(*(int *)PTR_DAT_100f1834 + param_1 * 0x70 + param_2) & 8) != 0) {
		return 0;
	}
	return 1;
}

void AddL2Torches(undefined param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	short sVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined8 uVar4;
	longlong lVar5;
	int iVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	longlong lVar16;
	int iVar17;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	puVar3 = PTR_DAT_100f1a54;
	puVar2 = PTR_DAT_100f194c;
	lVar12 = (longlong)param_8;
	lVar11 = (longlong)param_7;
	lVar10 = (longlong)param_6;
	lVar9 = (longlong)param_5;
	lVar8 = (longlong)param_4;
	lVar7 = (longlong)param_3;
	lVar16 = 0;
	iVar13 = 0;
	do {
		iVar15 = 0;
		iVar14 = 0;
		iVar17 = 0;
		do {
			iVar6 = (int)lVar16;
			uVar4 = WallTrapLocOk(iVar17, iVar6);
			if ((int)uVar4 != 0) {
				sVar1 = *(short *)(iVar13 + *(int *)puVar3 + iVar15);
				if ((sVar1 == 1) && (lVar5 = random(0x91, 3, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb), (int)lVar5 == 0)) {
					lVar7 = lVar16;
					AddObject(0x2e, iVar17, iVar6, (char)lVar8, (char)lVar9, (char)lVar10, (char)lVar11,
					    (char)lVar12, in_stack_ffffffa8);
				}
				if ((sVar1 == 5) && (lVar5 = random(0x91, 3, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb), (int)lVar5 == 0)) {
					lVar7 = lVar16;
					AddObject(0x2f, iVar17, iVar6, (char)lVar8, (char)lVar9, (char)lVar10, (char)lVar11,
					    (char)lVar12, in_stack_ffffffa8);
				}
				if (sVar1 == 0x25) {
					lVar5 = random(0x91, 10, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
					if (((int)lVar5 == 0) && (*(char *)(iVar6 + *(int *)puVar2 + iVar14 + -0x70) == '\0')) {
						lVar7 = lVar16;
						AddObject(0x2c, iVar17 + -1, iVar6, (char)lVar8, (char)lVar9, (char)lVar10, (char)lVar11,
						    (char)lVar12, in_stack_ffffffa8);
					}
				}
				if (sVar1 == 0x29) {
					lVar5 = random(0x91, 10, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
					if (((int)lVar5 == 0) && (*(char *)(iVar6 + *(int *)puVar2 + iVar14 + -1) == '\0')) {
						lVar7 = lVar16 + -1;
						AddObject(0x2d, iVar17, (int)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, (char)lVar11,
						    (char)lVar12, in_stack_ffffffa8);
					}
				}
			}
			iVar17 = iVar17 + 1;
			iVar14 = iVar14 + 0x70;
			iVar15 = iVar15 + 0xe0;
		} while (iVar17 < 0x70);
		lVar16 = lVar16 + 1;
		iVar13 = iVar13 + 2;
	} while ((int)lVar16 < 0x70);
	return;
}

undefined8 TorchLocOK(int param_1, int param_2)

{
	if ((*(byte *)(*(int *)PTR_DAT_100f1834 + param_1 * 0x70 + param_2) & 8) != 0) {
		return 0;
	}
	if (PTR_DAT_100f1d98[(int)*(short *)(*(int *)PTR_DAT_100f1a54 + param_1 * 0xe0 + param_2 * 2)] == '\0') {
		return 0;
	}
	return 1;
}

void AddObjTraps(undefined param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	byte bVar1;
	char cVar2;
	int iVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	int iVar7;
	undefined *puVar8;
	char cVar9;
	longlong lVar10;
	undefined8 uVar11;
	short *psVar12;
	int iVar13;
	longlong lVar14;
	longlong lVar15;
	longlong lVar16;
	longlong lVar17;
	longlong lVar18;
	longlong lVar19;
	int unaff_r19;
	longlong lVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined in_stack_ffffff9b;

	puVar8 = PTR_DAT_100f2008;
	iVar7 = _DAT_100f1da4;
	puVar6 = PTR_DAT_100f1a54;
	puVar5 = PTR_DAT_100f194c;
	puVar4 = PTR_DAT_100f1948;
	lVar19 = (longlong)param_8;
	lVar18 = (longlong)param_7;
	lVar17 = (longlong)param_6;
	lVar16 = (longlong)param_5;
	lVar15 = (longlong)param_4;
	lVar14 = (longlong)param_3;
	bVar1 = *PTR_DAT_100f17ec;
	if (bVar1 == 1) {
		unaff_r19 = 10;
	}
	if (1 < bVar1) {
		unaff_r19 = 0xf;
	}
	if (4 < bVar1) {
		unaff_r19 = 0x14;
	}
	if (6 < bVar1) {
		unaff_r19 = 0x19;
	}
	lVar20 = 0;
	iVar22 = 0;
	do {
		iVar24 = 0;
		iVar23 = 0;
		iVar21 = 0;
		do {
			iVar3 = (int)lVar20;
			if ((('\0' < *(char *)(iVar3 + *(int *)puVar5 + iVar24)) && (lVar10 = random(0x90, 100, (char)lVar14, (char)lVar15, (char)lVar16, (char)lVar17, (char)lVar18, (char)lVar19, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b), (int)lVar10 < unaff_r19)) && (cVar9 = *(char *)(iVar3 + *(int *)puVar5 + iVar24) + -1, *(int *)(puVar8 + *(int *)(puVar4 + (int)cVar9 * 0x78) * 0x2c + 0x28) != 0)) {
				lVar10 = random(0x90, 2, (char)lVar14, (char)lVar15, (char)lVar16, (char)lVar17,
				    (char)lVar18, (char)lVar19, in_stack_ffffff88, in_stack_ffffff8f,
				    in_stack_ffffff9b);
				if ((int)lVar10 == 0) {
					iVar13 = iVar21 + -1;
					psVar12 = (short *)(*(int *)puVar6 + iVar22 + iVar13 * 0xe0);
					while (*(char *)(iVar7 + (int)*psVar12) == '\0') {
						psVar12 = psVar12 + -0x70;
						iVar13 = iVar13 + -1;
					}
					uVar11 = TorchLocOK(iVar13, iVar3);
					if (((int)uVar11 != 0) && (1 < iVar21 - iVar13)) {
						lVar14 = lVar20;
						AddObject(0x35, iVar13, iVar3, (char)lVar15, (char)lVar16, (char)lVar17, (char)lVar18,
						    (char)lVar19, in_stack_ffffff88);
						cVar2 = *(char *)(iVar3 + *(int *)puVar5 + iVar13 * 0x70);
						*(int *)(puVar4 + (int)(char)(cVar2 + -1) * 0x78 + 0x58) = iVar21;
						*(int *)(puVar4 + (int)(char)(cVar2 + -1) * 0x78 + 0x5c) = iVar3;
						*(undefined4 *)(puVar4 + (int)cVar9 * 0x78 + 0x48) = 1;
					}
				} else {
					lVar10 = lVar20 + -1;
					psVar12 = (short *)(*(int *)puVar6 + iVar23 + (int)lVar10 * 2);
					while (*(char *)(iVar7 + (int)*psVar12) == '\0') {
						psVar12 = psVar12 + -1;
						lVar10 = lVar10 + -1;
					}
					iVar13 = (int)lVar10;
					uVar11 = TorchLocOK(iVar21, iVar13);
					if (((int)uVar11 != 0) && (1 < iVar3 - iVar13)) {
						AddObject(0x36, iVar21, iVar13, (char)lVar15, (char)lVar16, (char)lVar17, (char)lVar18,
						    (char)lVar19, in_stack_ffffff88);
						cVar2 = *(char *)(*(int *)puVar5 + iVar24 + iVar13);
						*(int *)(puVar4 + (int)(char)(cVar2 + -1) * 0x78 + 0x58) = iVar21;
						*(int *)(puVar4 + (int)(char)(cVar2 + -1) * 0x78 + 0x5c) = iVar3;
						*(undefined4 *)(puVar4 + (int)cVar9 * 0x78 + 0x48) = 1;
						lVar14 = lVar10;
					}
				}
			}
			iVar21 = iVar21 + 1;
			iVar23 = iVar23 + 0xe0;
			iVar24 = iVar24 + 0x70;
		} while (iVar21 < 0x70);
		lVar20 = lVar20 + 1;
		iVar22 = iVar22 + 2;
	} while ((int)lVar20 < 0x70);
	return;
}

void AddChestTraps(undefined param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	char cVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	int *piVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	puVar5 = PTR_DAT_100f194c;
	puVar4 = PTR_DAT_100f1948;
	puVar3 = PTR_DAT_100f183c;
	lVar12 = (longlong)param_8;
	lVar11 = (longlong)param_7;
	lVar10 = (longlong)param_6;
	lVar9 = (longlong)param_5;
	lVar8 = (longlong)param_4;
	lVar7 = (longlong)param_3;
	iVar15 = 0;
	do {
		iVar16 = 0;
		iVar14 = 0;
		do {
			cVar1 = *(char *)(iVar15 + *(int *)puVar5 + iVar14);
			if (((('\0' < cVar1) && (iVar2 = (int)(char)(cVar1 + -1) * 0x78, 4 < *(int *)(puVar4 + iVar2))) && (piVar13 = (int *)(puVar4 + iVar2), *piVar13 < 8)) && ((piVar13[0x12] == 0 && (lVar6 = random(0, 100, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb), (int)lVar6 < 10)))) {
				*piVar13 = *piVar13 + 0x3f;
				piVar13[0x12] = 1;
				if (*puVar3 == '\x02') {
					lVar6 = random(0, 2, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, (char)lVar11,
					    (char)lVar12, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
					piVar13[0x19] = (int)lVar6;
				} else {
					lVar6 = random(0, 3, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, (char)lVar11,
					    (char)lVar12, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
					piVar13[0x19] = (int)lVar6;
				}
			}
			iVar16 = iVar16 + 1;
			iVar14 = iVar14 + 0x70;
		} while (iVar16 < 0x70);
		iVar15 = iVar15 + 1;
	} while (iVar15 < 0x70);
	return;
}

void LoadMapObjects(longlong param_1, longlong param_2, longlong param_3, longlong param_4,
    longlong param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	ulonglong uVar5;
	longlong lVar6;
	int iVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	longlong lVar15;
	longlong lVar16;
	longlong lVar17;
	uint uVar18;
	uint uVar19;
	longlong lVar20;
	longlong lVar21;
	undefined4 in_stack_ffffff88;

	puVar4 = PTR_DAT_100f1fe8;
	puVar3 = PTR_DAT_100f1fe4;
	*(undefined4 *)PTR_DAT_100f1fe8 = 1;
	lVar14 = param_2;
	lVar8 = param_3;
	lVar9 = param_4;
	lVar10 = param_5;
	lVar11 = (longlong)param_6;
	lVar12 = (longlong)param_7;
	lVar13 = (longlong)param_8;
	uVar5 = FUN_100b8f7c(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffff88);
	lVar16 = param_5 + (longlong)param_7;
	lVar15 = param_4 + (longlong)param_6;
	uVar19 = (uint) * (byte *)uVar5;
	uVar18 = (uint)((byte *)uVar5)[2];
	iVar1 = uVar19 * 2;
	iVar2 = uVar18 * 2;
	lVar17 = uVar5 + (ulonglong)(uVar19 * uVar18 * 2) + 4 + (ulonglong)(uint)(iVar1 * iVar2 * 4);
	lVar20 = 0;
	while ((int)lVar20 < iVar2) {
		lVar6 = lVar20 + param_3 + 0x10;
		lVar21 = 0;
		while ((int)lVar21 < iVar1) {
			if (*(byte *)lVar17 != 0) {
				lVar14 = lVar21 + param_2 + 0x10;
				AddObject(*(uint *)(puVar3 + (uint) * (byte *)lVar17 * 4), (int)lVar14, (int)lVar6,
				    (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13,
				    in_stack_ffffff88);
				iVar7 = FUN_100a2e14(lVar14, lVar6);
				lVar14 = param_4;
				lVar8 = param_5;
				lVar9 = lVar15;
				lVar10 = lVar16;
				lVar11 = (longlong)param_8;
				SetObjMapRange(iVar7, (int)param_4, (int)param_5, (int)lVar15, (int)lVar16, param_8);
			}
			lVar17 = lVar17 + 2;
			lVar21 = lVar21 + 1;
		}
		lVar20 = lVar20 + 1;
	}
	FUN_100b9100((int)param_1, (char)lVar14, (char)lVar8, (char)lVar9, (char)lVar10, (char)lVar11,
	    (char)lVar12, (char)lVar13, in_stack_ffffff88);
	*(undefined4 *)puVar4 = 0;
	return;
}

void LoadMapObjs(longlong param_1, longlong param_2, longlong param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	ulonglong uVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	undefined uVar9;
	undefined uVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	uint uVar15;
	uint uVar16;
	longlong lVar17;
	longlong lVar18;
	undefined4 in_stack_ffffff98;

	puVar4 = PTR_DAT_100f1fe8;
	puVar3 = PTR_DAT_100f1fe4;
	uVar10 = (undefined)param_5;
	uVar9 = (undefined)param_4;
	lVar13 = (longlong)param_8;
	lVar12 = (longlong)param_7;
	lVar11 = (longlong)param_6;
	*(undefined4 *)PTR_DAT_100f1fe8 = 1;
	lVar7 = param_2;
	lVar8 = param_3;
	uVar5 = FUN_100b8f7c(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffff98);
	lVar17 = 0;
	uVar16 = (uint) * (byte *)uVar5;
	uVar15 = (uint)((byte *)uVar5)[2];
	iVar1 = uVar16 * 2;
	iVar2 = uVar15 * 2;
	lVar14 = uVar5 + (ulonglong)(uVar16 * uVar15 * 2) + 4 + (ulonglong)(uint)(iVar1 * iVar2 * 4);
	while ((int)lVar17 < iVar2) {
		lVar6 = lVar17 + param_3 + 0x10;
		lVar18 = 0;
		while ((int)lVar18 < iVar1) {
			if (*(byte *)lVar14 != 0) {
				lVar7 = lVar18 + param_2 + 0x10;
				lVar8 = lVar6;
				AddObject(*(uint *)(puVar3 + (uint) * (byte *)lVar14 * 4), (int)lVar7, (int)lVar6, uVar9,
				    uVar10, (char)lVar11, (char)lVar12, (char)lVar13, in_stack_ffffff98);
			}
			lVar14 = lVar14 + 2;
			lVar18 = lVar18 + 1;
		}
		lVar17 = lVar17 + 1;
	}
	FUN_100b9100((int)param_1, (char)lVar7, (char)lVar8, uVar9, uVar10, (char)lVar11, (char)lVar12,
	    (char)lVar13, in_stack_ffffff98);
	*(undefined4 *)puVar4 = 0;
	return;
}

void AddDiabObjs(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	ulonglong uVar8;
	undefined uVar9;
	ulonglong uVar10;
	undefined uVar11;
	ulonglong uVar12;
	undefined uVar13;
	ulonglong uVar14;
	undefined uVar15;
	undefined4 uVar16;
	undefined uVar17;
	undefined4 uVar18;
	undefined uVar19;
	undefined4 uVar20;
	undefined uVar21;
	undefined4 in_stack_ffffffb8;
	int *local_18[6];

	puVar6 = PTR_DAT_100f1cdc;
	puVar5 = PTR_DAT_100f1cd8;
	puVar4 = PTR_DAT_100f1cd4;
	puVar3 = PTR_DAT_100f1cd0;
	ppuVar7 = &toc;
	uVar8 = LoadFileInMem((ulonglong)_DAT_100f34c0, (undefined4 *)0x0, param_3, param_4, param_5, param_6,
	    param_7, param_8, in_stack_ffffffb8);
	local_18[0] = (int *)uVar8;
	uVar16 = 0xb;
	uVar18 = 0xc;
	uVar20 = 1;
	uVar9 = (undefined)(*(int *)ppuVar7[-0x1cbb] << 1);
	uVar12 = (ulonglong) * (uint *)puVar6;
	uVar10 = (ulonglong)(uint)(*(int *)ppuVar7[-0x1cbc] << 1);
	uVar14 = (ulonglong) * (uint *)puVar5;
	LoadMapObjects(uVar8 & 0xffffffff, (ulonglong)(uint)(*(int *)ppuVar7[-0x1cbb] << 1), uVar10, uVar12,
	    uVar14, 0xb, 0xc, 1, in_stack_ffffffb8);
	mem_free_dbg(local_18, uVar9, (char)uVar10, (char)uVar12, (char)uVar14, (char)uVar16, (char)uVar18,
	    (char)uVar20, in_stack_ffffffb8);
	uVar8 = LoadFileInMem(ZEXT48(ppuVar7[-0x16c5]), (undefined4 *)0x0, uVar10, uVar12, uVar14, uVar16, uVar18, uVar20, in_stack_ffffffb8);
	local_18[0] = (int *)uVar8;
	uVar16 = 0xb;
	uVar18 = 0xb;
	uVar20 = 2;
	uVar1 = *(int *)puVar6 << 1;
	uVar9 = (undefined)uVar1;
	uVar12 = (ulonglong) * (uint *)puVar4;
	uVar10 = (ulonglong)(uint)(*(int *)puVar5 << 1);
	uVar14 = (ulonglong) * (uint *)puVar3;
	LoadMapObjects(uVar8 & 0xffffffff, (ulonglong)uVar1, uVar10, uVar12, uVar14, 0xb, 0xb, 2, in_stack_ffffffb8);
	mem_free_dbg(local_18, uVar9, (char)uVar10, (char)uVar12, (char)uVar14, (char)uVar16, (char)uVar18,
	    (char)uVar20, in_stack_ffffffb8);
	uVar8 = LoadFileInMem(ZEXT48(ppuVar7[-0x16c6]), (undefined4 *)0x0, uVar10, uVar12, uVar14, uVar16, uVar18, uVar20, in_stack_ffffffb8);
	local_18[0] = (int *)uVar8;
	uVar17 = 9;
	uVar19 = 9;
	uVar21 = 3;
	uVar1 = *(int *)puVar4 << 1;
	uVar9 = (undefined)uVar1;
	uVar13 = (undefined) * (uint *)ppuVar7[-0x1cc1];
	uVar2 = *(int *)puVar3 << 1;
	uVar11 = (undefined)uVar2;
	uVar15 = (undefined) * (uint *)ppuVar7[-0x1cc2];
	LoadMapObjects(uVar8 & 0xffffffff, (ulonglong)uVar1, (ulonglong)uVar2,
	    (ulonglong) * (uint *)ppuVar7[-0x1cc1], (ulonglong) * (uint *)ppuVar7[-0x1cc2], 9, 9, 3,
	    in_stack_ffffffb8);
	mem_free_dbg(local_18, uVar9, uVar11, uVar13, uVar15, uVar17, uVar19, uVar21, in_stack_ffffffb8);
	return;
}

void AddStoryBooks(undefined param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	bool bVar1;
	longlong lVar2;
	undefined8 uVar3;
	int iVar4;
	longlong lVar5;
	int iVar6;
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
	int iVar17;
	longlong unaff_r29;
	longlong unaff_r30;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	lVar15 = (longlong)param_8;
	lVar13 = (longlong)param_7;
	lVar11 = (longlong)param_6;
	lVar9 = (longlong)param_5;
	lVar7 = (longlong)param_4;
	lVar5 = (longlong)param_3;
	iVar4 = 0;
	bVar1 = false;
	do {
		uVar8 = (undefined)lVar7;
		uVar10 = (undefined)lVar9;
		uVar12 = (undefined)lVar11;
		uVar14 = (undefined)lVar13;
		uVar16 = (undefined)lVar15;
		if (bVar1) {
			iVar4 = (int)unaff_r30;
			iVar6 = (int)unaff_r29;
			AddObject(0x56, iVar4, iVar6, uVar8, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffa8);
			AddObject(0x57, iVar4 + -2, iVar6 + 1, uVar8, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffa8);
			AddObject(0x57, iVar4 + -2, iVar6, uVar8, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffa8);
			AddObject(0x57, iVar4 + -1, iVar6 + -1, uVar8, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffa8);
			AddObject(0x57, iVar4 + 1, iVar6 + -1, uVar8, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffa8);
			AddObject(0x57, iVar4 + 2, iVar6, uVar8, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffa8);
			AddObject(0x57, iVar4 + 2, iVar6 + 1, uVar8, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffa8);
			return;
		}
		bVar1 = true;
		lVar2 = random(0x8b, 0x50, (char)lVar5, uVar8, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffa8,
		    in_stack_ffffffaf, in_stack_ffffffbb);
		unaff_r30 = lVar2 + 0x10;
		lVar2 = random(0x8b, 0x50, (char)lVar5, (char)lVar7, (char)lVar9, (char)lVar11, (char)lVar13,
		    (char)lVar15, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
		unaff_r29 = lVar2 + 0x10;
		iVar6 = -2;
		do {
			iVar17 = -3;
			do {
				uVar3 = RndLocOk((int)unaff_r30 + iVar17, (int)unaff_r29 + iVar6);
				if ((int)uVar3 == 0) {
					bVar1 = false;
				}
				iVar17 = iVar17 + 1;
			} while (iVar17 < 4);
			iVar6 = iVar6 + 1;
		} while (iVar6 < 3);
	} while ((bVar1) || (iVar4 = iVar4 + 1, iVar4 < 0x4e21));
	return;
}

void AddHookedBodies(longlong param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	longlong lVar1;
	undefined8 uVar2;
	int iVar3;
	longlong lVar4;
	int iVar5;
	longlong lVar6;
	undefined uVar7;
	longlong lVar8;
	undefined uVar9;
	longlong lVar10;
	undefined uVar11;
	longlong lVar12;
	undefined uVar13;
	longlong lVar14;
	undefined uVar15;
	int iVar16;
	int iVar17;
	longlong lVar18;
	char *pcVar19;
	int iVar20;
	char *pcVar21;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	lVar14 = (longlong)param_8;
	lVar12 = (longlong)param_7;
	lVar10 = (longlong)param_6;
	lVar8 = (longlong)param_5;
	lVar6 = (longlong)param_4;
	lVar4 = (longlong)param_3;
	iVar16 = 0;
	lVar18 = 0x10;
	pcVar19 = PTR_DAT_100f1804;
	do {
		iVar17 = 0;
		iVar20 = 0x10;
		pcVar21 = pcVar19;
		do {
			if ((((*pcVar21 == '\x01') || (*pcVar21 == '\x02')) && (lVar1 = random(0, param_1, (char)lVar4, (char)lVar6, (char)lVar8, (char)lVar10, (char)lVar12, (char)lVar14, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb), (int)lVar1 == 0)) && (uVar2 = SkipThemeRoom(iVar17, iVar16), (int)uVar2 != 0)) {
				iVar5 = (int)lVar18;
				if ((*pcVar21 == '\x01') && (pcVar21[0x28] == '\x06')) {
					lVar1 = random(0, 3, (char)lVar4, (char)lVar6, (char)lVar8, (char)lVar10, (char)lVar12,
					    (char)lVar14, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
					iVar3 = (int)lVar1;
					uVar7 = (undefined)lVar6;
					uVar9 = (undefined)lVar8;
					uVar11 = (undefined)lVar10;
					uVar13 = (undefined)lVar12;
					uVar15 = (undefined)lVar14;
					if (iVar3 == 1) {
						lVar4 = lVar18;
						AddObject(0x25, iVar20 + 1, iVar5, uVar7, uVar9, uVar11, uVar13, uVar15, in_stack_ffffffa8);
					} else {
						if (iVar3 < 1) {
							if (-1 < iVar3) {
								lVar4 = lVar18;
								AddObject(0x24, iVar20 + 1, iVar5, uVar7, uVar9, uVar11, uVar13, uVar15,
								    in_stack_ffffffa8);
							}
						} else {
							if (iVar3 < 3) {
								lVar4 = lVar18;
								AddObject(0x28, iVar20 + 1, iVar5, uVar7, uVar9, uVar11, uVar13, uVar15,
								    in_stack_ffffffa8);
							}
						}
					}
				} else {
					if ((*pcVar21 == '\x02') && (pcVar21[1] == '\x06')) {
						lVar1 = random(0, 2, (char)lVar4, (char)lVar6, (char)lVar8, (char)lVar10, (char)lVar12,
						    (char)lVar14, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
						iVar3 = (int)lVar1;
						if (iVar3 == 1) {
							lVar4 = lVar18;
							AddObject(0x27, iVar20, iVar5, (char)lVar6, (char)lVar8, (char)lVar10, (char)lVar12,
							    (char)lVar14, in_stack_ffffffa8);
						} else {
							if ((iVar3 < 1) && (-1 < iVar3)) {
								lVar4 = lVar18;
								AddObject(0x26, iVar20, iVar5, (char)lVar6, (char)lVar8, (char)lVar10, (char)lVar12,
								    (char)lVar14, in_stack_ffffffa8);
							}
						}
					}
				}
			}
			iVar17 = iVar17 + 1;
			iVar20 = iVar20 + 2;
			pcVar21 = pcVar21 + 0x28;
		} while (iVar17 < 0x28);
		iVar16 = iVar16 + 1;
		lVar18 = lVar18 + 2;
		pcVar19 = pcVar19 + 1;
	} while (iVar16 < 0x28);
	return;
}

void AddL4Goodies(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	AddHookedBodies(6, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	InitRndLocObj(2, 6, 0x1d, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	InitRndLocObj(2, 6, 0x1e, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	InitRndLocObj(2, 6, 0x1f, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	InitRndLocObj(2, 6, 0x20, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	InitRndLocObj(2, 6, 0x21, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	InitRndLocObj(2, 6, 0x22, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	InitRndLocObj(2, 6, 0x23, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	InitRndLocObj(2, 6, 0x43, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	InitRndLocObj(1, 3, 0x50, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void AddLazStand(undefined param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	bool bVar1;
	longlong lVar2;
	undefined8 uVar3;
	int iVar4;
	longlong lVar5;
	int iVar6;
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
	int iVar17;
	longlong unaff_r29;
	longlong unaff_r30;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	lVar15 = (longlong)param_8;
	lVar13 = (longlong)param_7;
	lVar11 = (longlong)param_6;
	lVar9 = (longlong)param_5;
	lVar7 = (longlong)param_4;
	lVar5 = (longlong)param_3;
	iVar4 = 0;
	bVar1 = false;
	do {
		uVar8 = (undefined)lVar7;
		uVar10 = (undefined)lVar9;
		uVar12 = (undefined)lVar11;
		uVar14 = (undefined)lVar13;
		uVar16 = (undefined)lVar15;
		if (bVar1) {
			iVar4 = (int)unaff_r30;
			iVar6 = (int)unaff_r29;
			AddObject(0x5f, iVar4, iVar6, uVar8, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffa8);
			AddObject(0x1e, iVar4, iVar6 + 2, uVar8, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffa8);
			AddObject(0x57, iVar4 + 1, iVar6 + 2, uVar8, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffa8);
			AddObject(0x1f, iVar4 + 2, iVar6 + 2, uVar8, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffa8);
			AddObject(0x21, iVar4, iVar6 + -2, uVar8, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffa8);
			AddObject(0x57, iVar4 + 1, iVar6 + -2, uVar8, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffa8);
			AddObject(0x22, iVar4 + 2, iVar6 + -2, uVar8, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffa8);
			AddObject(0x57, iVar4 + -1, iVar6 + -1, uVar8, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffa8);
			AddObject(0x23, iVar4 + -1, iVar6, uVar8, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffa8);
			AddObject(0x57, iVar4 + -1, iVar6 + 1, uVar8, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffa8);
			return;
		}
		bVar1 = true;
		lVar2 = random(0x8b, 0x50, (char)lVar5, uVar8, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffa8,
		    in_stack_ffffffaf, in_stack_ffffffbb);
		unaff_r30 = lVar2 + 0x10;
		lVar2 = random(0x8b, 0x50, (char)lVar5, (char)lVar7, (char)lVar9, (char)lVar11, (char)lVar13,
		    (char)lVar15, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
		unaff_r29 = lVar2 + 0x10;
		iVar6 = -3;
		do {
			iVar17 = -2;
			do {
				uVar3 = RndLocOk((int)unaff_r30 + iVar17, (int)unaff_r29 + iVar6);
				if ((int)uVar3 == 0) {
					bVar1 = false;
				}
				iVar17 = iVar17 + 1;
			} while (iVar17 < 4);
			iVar6 = iVar6 + 1;
		} while (iVar6 < 4);
	} while ((bVar1) || (iVar4 = iVar4 + 1, iVar4 < 0x2711));
	InitRndLocObj(1, 1, 0x5f, (char)lVar7, (char)lVar9, (char)lVar11, (char)lVar13, (char)lVar15,
	    in_stack_ffffffa8);
	return;
}

void InitObjects(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
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
	undefined **ppuVar13;
	undefined8 uVar14;
	undefined uVar16;
	char cVar17;
	ulonglong uVar15;
	undefined uVar18;
	undefined uVar19;
	undefined uVar21;
	undefined8 uVar20;
	ulonglong uVar22;
	undefined uVar23;
	longlong lVar24;
	int iVar25;
	undefined uVar26;
	int iVar27;
	undefined uVar28;
	longlong lVar29;
	int iVar30;
	undefined uVar31;
	undefined8 unaff_r20;
	undefined4 uVar32;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined4 in_stack_ffffff98;
	undefined4 in_stack_ffffff9c;
	undefined4 in_stack_ffffffa0;
	undefined4 in_stack_ffffffa4;
	int *local_3c[3];
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

	puVar12 = PTR_DAT_100f1fe8;
	puVar11 = PTR_DAT_100f1a84;
	puVar10 = PTR_DAT_100f1a80;
	puVar9 = PTR_DAT_100f1a7c;
	puVar8 = PTR_DAT_100f1a78;
	puVar7 = PTR_DAT_100f19cc;
	puVar6 = PTR_DAT_100f183c;
	puVar5 = PTR_DAT_100f1828;
	puVar4 = PTR_DAT_100f1824;
	puVar3 = PTR_DAT_100f17ec;
	puVar2 = PTR_DAT_100f17e0;
	uVar32 = (undefined4)unaff_r20;
	ppuVar13 = &toc;
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
	uVar14 = ClrAllObjects();
	uVar31 = (undefined)param_8;
	uVar28 = (undefined)param_7;
	uVar26 = (undefined)param_6;
	uVar23 = (undefined)param_5;
	uVar21 = (undefined)param_4;
	uVar19 = (undefined)param_3;
	uVar18 = (undefined)param_2;
	if (*puVar3 == '\x10') {
		AddDiabObjs(uVar14, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff88);
	} else {
		*(undefined4 *)puVar12 = 1;
		uVar16 = GetRndSeed((char)uVar14, uVar18, uVar19, uVar21, uVar23, uVar26, uVar28, uVar31,
		    in_stack_ffffff88);
		if ((*puVar3 == '\t') && (*puVar2 == '\x01')) {
			AddSlainHero(uVar16, uVar18, uVar19, uVar21, uVar23, uVar26, uVar28, uVar31, in_stack_ffffff88);
		}
		cVar17 = *puVar3;
		if ((cVar17 == puVar7[0x18]) && (puVar7[0x1a] == '\x01')) {
			cVar17 = AddMushPatch(cVar17, uVar18, uVar19, uVar21, uVar23, uVar26, uVar28, uVar31,
			    in_stack_ffffff88);
		}
		if (*puVar3 == '\x04') {
			cVar17 = AddStoryBooks(cVar17, uVar18, uVar19, uVar21, uVar23, uVar26, uVar28, uVar31,
			    in_stack_ffffff88);
		}
		if (*puVar3 == '\b') {
			cVar17 = AddStoryBooks(cVar17, uVar18, uVar19, uVar21, uVar23, uVar26, uVar28, uVar31,
			    in_stack_ffffff88);
		}
		if (*puVar3 == '\f') {
			AddStoryBooks(cVar17, uVar18, uVar19, uVar21, uVar23, uVar26, uVar28, uVar31, in_stack_ffffff88);
		}
		if (*puVar6 == '\x01') {
			uVar14 = QuestStatus(6);
			if ((int)uVar14 != 0) {
				AddTortures((char)uVar14, uVar18, uVar19, uVar21, uVar23, uVar26, uVar28, uVar31, in_stack_ffffff88);
			}
			uVar14 = QuestStatus(0xd);
			if ((int)uVar14 != 0) {
				AddCandles((char)uVar14, uVar18, uVar19, uVar21, uVar23, uVar26, uVar28, uVar31, in_stack_ffffff88);
			}
			uVar14 = QuestStatus(7);
			if ((int)uVar14 != 0) {
				AddObject(0x61, *(int *)puVar11 * 2 + 0x1a, *(int *)puVar10 * 2 + 0x13, uVar21, uVar23, uVar26, uVar28, uVar31, in_stack_ffffff88);
			}
			InitRndLocBigObj(10, 0xf, 0x30, uVar21, uVar23, uVar26, uVar28, uVar31, in_stack_ffffff88);
			uVar18 = 0;
			uVar19 = 0x70;
			uVar21 = 0x70;
			uVar16 = AddL1Objs(0, 0, 0x70, 0x70, uVar23, uVar26, uVar28, uVar31, in_stack_ffffff88);
			InitRndBarrels(uVar16, uVar18, uVar19, uVar21, uVar23, uVar26, uVar28, uVar31, in_stack_ffffff88);
		}
		if (*puVar6 == '\x02') {
			uVar14 = QuestStatus(0);
			if ((int)uVar14 != 0) {
				InitRndLocObj5x5(1, 1, 0x17, uVar21, uVar23, uVar26, uVar28, uVar31, in_stack_ffffff88);
			}
			uVar14 = QuestStatus(0xe);
			if ((int)uVar14 != 0) {
				InitRndLocObj5x5(1, 1, 0x29, uVar21, uVar23, uVar26, uVar28, uVar31, in_stack_ffffff88);
			}
			uVar18 = 0;
			uVar19 = 0x70;
			uVar21 = 0x70;
			uVar16 = AddL2Objs(0, 0, 0x70, 0x70, uVar23, uVar26, uVar28, uVar31, in_stack_ffffff88);
			AddL2Torches(uVar16, uVar18, uVar19, uVar21, uVar23, uVar26, uVar28, uVar31, in_stack_ffffff88);
			uVar14 = QuestStatus(8);
			if ((int)uVar14 != 0) {
				cVar17 = puVar5[*(int *)puVar4 * 0x55ec + 0x15c];
				if (cVar17 == '\0') {
					uVar32 = 0xed;
				} else {
					if (cVar17 == '\x01') {
						uVar32 = 0xf5;
					} else {
						if (cVar17 == '\x02') {
							uVar32 = 0xf1;
						}
					}
				}
				puVar7[0xce] = (char)uVar32;
				iVar25 = *(int *)puVar10;
				uVar14 = 0x70;
				uVar1 = *(uint *)puVar11;
				uVar22 = (ulonglong)uVar1;
				uVar20 = 0x70;
				iVar27 = uVar1 + *(int *)puVar9 + 1;
				iVar30 = iVar25 + *(int *)puVar8 + 1;
				AddBookLever(0, 0, 0x70, 0x70, uVar1, iVar25, iVar27, iVar30, in_stack_ffffff88, in_stack_ffffff8f,
				    in_stack_ffffff98, in_stack_ffffff9c, in_stack_ffffffa0, in_stack_ffffffa4, uVar32);
				uVar15 = LoadFileInMem(ZEXT48(ppuVar13[-0x16c7]), (undefined4 *)0x0, uVar14, uVar20, uVar22,
				    iVar25, iVar27, iVar30, in_stack_ffffff88);
				uVar31 = (undefined)iVar30;
				uVar28 = (undefined)iVar27;
				uVar26 = (undefined)iVar25;
				uVar23 = (undefined)uVar22;
				uVar21 = (undefined)uVar20;
				local_3c[0] = (int *)uVar15;
				uVar18 = (undefined)(*(int *)puVar11 << 1);
				uVar19 = (undefined)(*(int *)puVar10 << 1);
				LoadMapObjs(uVar15 & 0xffffffff, (ulonglong)(uint)(*(int *)puVar11 << 1),
				    (ulonglong)(uint)(*(int *)puVar10 << 1), uVar20, uVar22, iVar25, iVar27, iVar30,
				    in_stack_ffffff88);
				mem_free_dbg(local_3c, uVar18, uVar19, uVar21, uVar23, uVar26, uVar28, uVar31, in_stack_ffffff88);
			}
			uVar14 = QuestStatus(9);
			uVar16 = (undefined)uVar14;
			if ((int)uVar14 != 0) {
				cVar17 = puVar5[*(int *)puVar4 * 0x55ec + 0x15c];
				if (cVar17 == '\0') {
					uVar32 = 0xec;
				} else {
					if (cVar17 == '\x01') {
						uVar32 = 0xf4;
					} else {
						if (cVar17 == '\x02') {
							uVar32 = 0xf0;
						}
					}
				}
				puVar7[0xe6] = (char)uVar32;
				uVar1 = *(uint *)puVar11;
				uVar23 = (undefined)uVar1;
				uVar21 = 0x70;
				lVar24 = (ulonglong) * (uint *)puVar10 + 3;
				uVar26 = (undefined)lVar24;
				uVar28 = (undefined)((ulonglong)uVar1 + 2);
				lVar29 = (ulonglong) * (uint *)puVar10 + 7;
				uVar31 = (undefined)lVar29;
				AddBookLever(0, 0, 0x70, 0x70, uVar1, (int)lVar24, (int)((ulonglong)uVar1 + 2), (int)lVar29,
				    in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff98, in_stack_ffffff9c,
				    in_stack_ffffffa0, in_stack_ffffffa4, uVar32);
				lVar24 = (ulonglong)(uint)(*(int *)puVar11 << 1) + 0x19;
				uVar18 = (undefined)lVar24;
				lVar29 = (ulonglong)(uint)(*(int *)puVar10 << 1) + 0x20;
				uVar19 = (undefined)lVar29;
				uVar16 = AddObject(0x49, (int)lVar24, (int)lVar29, uVar21, uVar23, uVar26, uVar28, uVar31,
				    in_stack_ffffff88);
			}
			InitRndBarrels(uVar16, uVar18, uVar19, uVar21, uVar23, uVar26, uVar28, uVar31, in_stack_ffffff88);
		}
		if (*puVar6 == '\x03') {
			uVar18 = 0;
			uVar19 = 0x70;
			uVar21 = 0x70;
			uVar16 = AddL3Objs(0, 0, 0x70, 0x70, uVar23, uVar26, uVar28, uVar31, in_stack_ffffff88);
			InitRndBarrels(uVar16, uVar18, uVar19, uVar21, uVar23, uVar26, uVar28, uVar31, in_stack_ffffff88);
		}
		if (*puVar6 == '\x04') {
			uVar14 = QuestStatus(0xb);
			if ((int)uVar14 != 0) {
				cVar17 = puVar5[*(int *)puVar4 * 0x55ec + 0x15c];
				if (cVar17 == '\0') {
					uVar32 = 0xee;
				} else {
					if (cVar17 == '\x01') {
						uVar32 = 0xf6;
					} else {
						if (cVar17 == '\x02') {
							uVar32 = 0xf2;
						}
					}
				}
				puVar7[0x116] = (char)uVar32;
				iVar25 = *(int *)puVar10;
				uVar14 = 0x70;
				uVar1 = *(uint *)puVar11;
				uVar22 = (ulonglong)uVar1;
				uVar20 = 0x70;
				iVar27 = uVar1 + *(int *)puVar9;
				iVar30 = iVar25 + *(int *)puVar8;
				AddBookLever(0, 0, 0x70, 0x70, uVar1, iVar25, iVar27, iVar30, in_stack_ffffff88, in_stack_ffffff8f,
				    in_stack_ffffff98, in_stack_ffffff9c, in_stack_ffffffa0, in_stack_ffffffa4, uVar32);
				uVar15 = LoadFileInMem(ZEXT48(ppuVar13[-0x16c8]), (undefined4 *)0x0, uVar14, uVar20, uVar22,
				    iVar25, iVar27, iVar30, in_stack_ffffff88);
				uVar31 = (undefined)iVar30;
				uVar28 = (undefined)iVar27;
				uVar26 = (undefined)iVar25;
				uVar23 = (undefined)uVar22;
				uVar21 = (undefined)uVar20;
				local_3c[0] = (int *)uVar15;
				uVar18 = (undefined)(*(int *)puVar11 << 1);
				uVar19 = (undefined)(*(int *)puVar10 << 1);
				LoadMapObjs(uVar15 & 0xffffffff, (ulonglong)(uint)(*(int *)puVar11 << 1),
				    (ulonglong)(uint)(*(int *)puVar10 << 1), uVar20, uVar22, iVar25, iVar27, iVar30,
				    in_stack_ffffff88);
				mem_free_dbg(local_3c, uVar18, uVar19, uVar21, uVar23, uVar26, uVar28, uVar31, in_stack_ffffff88);
			}
			uVar14 = QuestStatus(0xf);
			uVar16 = (undefined)uVar14;
			if (((int)uVar14 != 0) && (*puVar2 == '\x01')) {
				uVar16 = AddLazStand(uVar16, uVar18, uVar19, uVar21, uVar23, uVar26, uVar28, uVar31,
				    in_stack_ffffff88);
			}
			uVar16 = InitRndBarrels(uVar16, uVar18, uVar19, uVar21, uVar23, uVar26, uVar28, uVar31,
			    in_stack_ffffff88);
			AddL4Goodies(uVar16, uVar18, uVar19, uVar21, uVar23, uVar26, uVar28, uVar31, in_stack_ffffff88);
		}
		InitRndLocObj(5, 10, 5, uVar21, uVar23, uVar26, uVar28, uVar31, in_stack_ffffff88);
		InitRndLocObj(3, 6, 6, uVar21, uVar23, uVar26, uVar28, uVar31, in_stack_ffffff88);
		uVar19 = 5;
		uVar16 = 7;
		uVar18 = InitRndLocObj(1, 5, 7, uVar21, uVar23, uVar26, uVar28, uVar31, in_stack_ffffff88);
		if (*puVar6 != '\x04') {
			uVar18 = AddObjTraps(uVar18, uVar19, uVar16, uVar21, uVar23, uVar26, uVar28, uVar31,
			    in_stack_ffffff88);
		}
		if (1 < (byte)*puVar6) {
			AddChestTraps(uVar18, uVar19, uVar16, uVar21, uVar23, uVar26, uVar28, uVar31, in_stack_ffffff88);
		}
		*(undefined4 *)puVar12 = 0;
	}
	return;
}

void SetMapObjects(longlong param_1, longlong param_2, longlong param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	byte bVar1;
	byte *pbVar2;
	uint uVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	int iVar9;
	undefined4 uVar10;
	ulonglong uVar11;
	ulonglong uVar12;
	int iVar15;
	longlong lVar13;
	ulonglong uVar14;
	longlong lVar16;
	longlong lVar17;
	ulonglong uVar18;
	char *pcVar20;
	longlong lVar19;
	undefined8 uVar21;
	longlong lVar22;
	longlong lVar23;
	longlong lVar24;
	undefined8 unaff_r18;
	longlong lVar25;
	undefined8 unaff_r19;
	longlong lVar26;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	uint *puVar27;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	uint uVar28;
	undefined8 unaff_r31;
	undefined4 in_stack_fffffe88;
	undefined in_stack_fffffe8f;
	undefined4 in_stack_fffffe9c;
	undefined4 in_stack_fffffea0;
	undefined4 in_stack_fffffea4;
	undefined4 in_stack_fffffea8;
	undefined4 in_stack_fffffeac;
	undefined4 in_stack_fffffeb0;
	undefined4 in_stack_fffffeb4;
	undefined auStack320[32];
	undefined4 local_120;
	undefined4 local_11c;
	undefined4 local_118;
	undefined4 local_114;
	undefined4 local_110;
	undefined4 local_10c;
	undefined4 local_108;
	undefined4 local_104;
	undefined4 local_100;
	undefined4 local_fc;
	undefined4 local_f8;
	undefined4 local_f4;
	undefined4 local_f0;
	undefined4 local_ec;
	undefined4 local_e8;
	undefined4 local_e4;
	undefined4 local_e0;
	undefined4 local_dc;
	undefined4 local_d8;
	undefined4 local_d4;
	undefined4 local_d0;
	undefined4 local_cc;
	undefined4 local_c8;
	undefined4 local_c4;
	undefined4 local_c0;
	undefined4 local_bc;
	undefined4 local_b8;
	undefined4 local_b4;
	undefined4 local_b0;
	undefined4 local_ac;
	undefined4 local_a8;
	undefined4 local_a4;
	undefined4 local_a0;
	undefined4 local_9c;
	undefined4 local_98;
	undefined4 local_94;
	undefined4 local_90;
	undefined4 local_8c;
	undefined4 local_88;
	undefined4 local_84;
	undefined4 local_80;
	undefined4 local_7c;
	undefined4 local_78;
	undefined4 local_74;
	undefined4 local_70;
	undefined4 local_6c;
	undefined4 local_68;
	undefined4 local_64;
	undefined4 local_60;
	undefined4 local_5c;
	undefined4 local_58;
	undefined4 local_54;
	undefined4 local_50;
	undefined4 local_4c;
	undefined4 local_48;
	undefined4 local_44;
	undefined4 local_38;
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

	uVar10 = _DAT_100f34d0;
	iVar9 = _DAT_100f34cc;
	puVar8 = PTR_DAT_100f2008;
	puVar7 = PTR_DAT_100f1ff8;
	puVar6 = PTR_DAT_100f1fe8;
	puVar5 = PTR_DAT_100f1fe4;
	lVar24 = (longlong)param_8;
	lVar23 = (longlong)param_7;
	lVar22 = (longlong)param_6;
	uVar11 = ZEXT48(register0x0000000c);
	uVar14 = ZEXT48(&toc);
	local_38 = (undefined4)((ulonglong)unaff_r18 >> 0x20);
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
	uVar12 = FUN_100b8f7c(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_fffffe88);
	ClrAllObjects();
	pbVar2 = *(byte **)((int)uVar14 + -0x7794);
	*(undefined4 *)puVar6 = 1;
	lVar26 = uVar11 - 0x120;
	local_120 = 0;
	local_11c = 0;
	local_118 = 0;
	local_114 = 0;
	local_110 = 0;
	local_10c = 0;
	local_108 = 0;
	local_104 = 0;
	local_100 = 0;
	local_fc = 0;
	local_f8 = 0;
	local_f4 = 0;
	local_f0 = 0;
	local_ec = 0;
	local_e8 = 0;
	local_e4 = 0;
	local_e0 = 0;
	local_dc = 0;
	local_d8 = 0;
	local_d4 = 0;
	local_d0 = 0;
	local_cc = 0;
	local_c8 = 0;
	local_c4 = 0;
	local_c0 = 0;
	local_bc = 0;
	local_b8 = 0;
	local_b4 = 0;
	local_b0 = 0;
	local_ac = 0;
	local_a8 = 0;
	local_a4 = 0;
	local_a0 = 0;
	local_9c = 0;
	local_98 = 0;
	local_94 = 0;
	local_90 = 0;
	local_8c = 0;
	local_88 = 0;
	local_84 = 0;
	local_80 = 0;
	local_7c = 0;
	local_78 = 0;
	local_74 = 0;
	local_70 = 0;
	local_6c = 0;
	local_68 = 0;
	local_64 = 0;
	local_60 = 0;
	local_5c = 0;
	local_58 = 0;
	local_54 = 0;
	local_50 = 0;
	local_4c = 0;
	local_48 = 0;
	local_44 = 0;
	bVar1 = *pbVar2;
	pcVar20 = puVar8;
	while (*pcVar20 != -1) {
		if ((*pcVar20 == '\x01') && ((uint)bVar1 == (int)pcVar20[4])) {
			*(undefined4 *)((int)lVar26 + (int)pcVar20[1] * 4) = 1;
		}
		pcVar20 = pcVar20 + 0x2c;
	}
	bVar1 = *(byte *)uVar12;
	uVar18 = uVar11 - 0x120;
	iVar15 = 0;
	uVar28 = (uint)((byte *)uVar12)[2];
	uVar3 = (uint)bVar1 * 2;
	iVar4 = uVar28 * 2;
	lVar19 = (ulonglong)((uint)bVar1 * uVar28 * 2) + 2 + (ulonglong)(uVar3 * iVar4 * 4);
	lVar16 = uVar12 + 2 + lVar19;
	uVar21 = 1;
	lVar17 = lVar16;
	while (iVar15 < iVar4) {
		uVar12 = (ulonglong)uVar3;
		if (bVar1 != 0) {
			do {
				if (*(byte *)lVar17 != 0) {
					lVar19 = (ulonglong) * (uint *)(puVar5 + (uint) * (byte *)lVar17 * 4) * 0x2c;
					*(undefined4 *)((int)uVar18 + (int)(char)puVar8[(int)lVar19 + 1] * 4) = 1;
				}
				lVar17 = lVar17 + 2;
				uVar12 = uVar12 - 1;
			} while (uVar12 != 0);
		}
		iVar15 = iVar15 + 1;
	}
	lVar25 = 0;
	puVar27 = *(uint **)((int)uVar14 + -0x6fd4);
	do {
		if (*(int *)lVar26 != 0) {
			puVar7[*(int *)((int)uVar14 + -0x4cc8)] = (char)lVar25;
			uVar18 = (ulonglong)*puVar27;
			sprintf((int)auStack320, uVar10, *puVar27, (int)lVar19, (int)uVar21, (int)lVar22, (int)lVar23,
			    (int)lVar24, in_stack_fffffe88, in_stack_fffffe8f, in_stack_fffffe9c,
			    in_stack_fffffea0, in_stack_fffffea4, in_stack_fffffea8, in_stack_fffffeac,
			    in_stack_fffffeb0, in_stack_fffffeb4);
			lVar17 = 0;
			lVar13 = LoadFileInMem(uVar11 - 0x140, (undefined4 *)0x0, uVar18, lVar19, uVar21, (int)lVar22,
			    (int)lVar23, (int)lVar24, in_stack_fffffe88);
			iVar15 = (int)uVar14;
			*(undefined4 *)(iVar9 + *(int *)(iVar15 + -0x4cc8) * 4) = (int)lVar13;
			*(int *)(iVar15 + -0x4cc8) = *(int *)(iVar15 + -0x4cc8) + 1;
		}
		lVar25 = lVar25 + 1;
		puVar27 = puVar27 + 1;
		lVar26 = lVar26 + 4;
	} while ((int)lVar25 < 0x38);
	lVar26 = 0;
	while ((int)lVar26 < iVar4) {
		uVar14 = lVar26 + param_3 + 0x10;
		lVar25 = 0;
		while ((int)lVar25 < (int)uVar3) {
			if (*(byte *)lVar16 != 0) {
				lVar17 = lVar25 + param_2 + 0x10;
				uVar18 = uVar14;
				AddObject(*(uint *)(puVar5 + (uint) * (byte *)lVar16 * 4), (int)lVar17, (int)uVar14,
				    (char)lVar19, (char)uVar21, (char)lVar22, (char)lVar23, (char)lVar24,
				    in_stack_fffffe88);
			}
			lVar16 = lVar16 + 2;
			lVar25 = lVar25 + 1;
		}
		lVar26 = lVar26 + 1;
	}
	FUN_100b9100((int)param_1, (char)lVar17, (char)uVar18, (char)lVar19, (char)uVar21, (char)lVar22,
	    (char)lVar23, (char)lVar24, in_stack_fffffe88);
	*(undefined4 *)puVar6 = 0;
	return;
}

void DeleteObject_(int param_1, int param_2)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;

	puVar4 = PTR_DAT_100f1e7c;
	puVar3 = PTR_DAT_100f1e40;
	puVar2 = PTR_DAT_100f1e3c;
	*(undefined *)(*(int *)PTR_DAT_100f194c + *(int *)(PTR_DAT_100f1948 + param_1 * 0x78 + 4) * 0x70 + *(int *)(PTR_DAT_100f1948 + param_1 * 0x78 + 8)) = 0;
	*(int *)(puVar4 + (0x7f - *(int *)puVar2) * 4) = param_1;
	*(int *)puVar2 = *(int *)puVar2 + -1;
	iVar1 = *(int *)puVar2;
	if (iVar1 < 1) {
		return;
	}
	if (param_2 == iVar1) {
		return;
	}
	*(undefined4 *)(puVar3 + param_2 * 4) = *(undefined4 *)(puVar3 + iVar1 * 4);
	return;
}

void SetupObject(int param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	uint uVar1;
	undefined *puVar3;
	longlong lVar2;
	int iVar4;
	undefined *puVar5;
	undefined uVar7;
	undefined *puVar6;
	undefined uVar8;
	ulonglong uVar9;
	undefined uVar10;
	undefined *puVar11;
	int iVar12;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined in_stack_ffffffcb;

	puVar6 = PTR_DAT_100f2008;
	puVar5 = PTR_DAT_100f1948;
	uVar8 = (undefined)param_4;
	uVar7 = (undefined)param_3;
	param_1 = param_1 * 0x78;
	uVar9 = ZEXT48(PTR_DAT_100f1ff8);
	puVar3 = PTR_DAT_100f1948 + param_1;
	iVar12 = param_4 * 0x2c;
	*(int *)(PTR_DAT_100f1948 + param_1) = param_4;
	*(undefined4 *)(puVar3 + 4) = param_2;
	iVar4 = 0;
	*(undefined4 *)(puVar3 + 8) = param_3;
	while (uVar10 = (undefined)uVar9, *(char *)uVar9 != puVar6[iVar12 + 1]) {
		uVar9 = uVar9 + 1;
		iVar4 = iVar4 + 1;
	}
	puVar3 = puVar5 + param_1;
	puVar11 = puVar6 + iVar12;
	*(undefined4 *)(puVar3 + 0x14) = *(undefined4 *)(_DAT_100f34cc + iVar4 * 4);
	*(undefined4 *)(puVar3 + 0x10) = *(undefined4 *)(puVar11 + 8);
	if (*(int *)(puVar3 + 0x10) == 0) {
		*(undefined4 *)(puVar3 + 0x18) = 1000;
		*(undefined4 *)(puVar3 + 0x1c) = 0;
		*(undefined4 *)(puVar3 + 0x20) = *(undefined4 *)(puVar11 + 0x10);
		*(undefined4 *)(puVar3 + 0x24) = *(undefined4 *)(puVar11 + 0xc);
	} else {
		uVar1 = *(uint *)(puVar11 + 0xc);
		*(uint *)(puVar3 + 0x18) = uVar1;
		lVar2 = random(0x92, (ulonglong)uVar1, uVar7, uVar8, uVar10, param_6, param_7, param_8,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb);
		*(int *)(puVar3 + 0x1c) = (int)lVar2;
		uVar1 = *(uint *)(puVar11 + 0x10);
		*(uint *)(puVar3 + 0x20) = uVar1;
		lVar2 = random(0x92, (ulonglong)uVar1 - 1, uVar7, uVar8, uVar10, param_6, param_7, param_8,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb);
		*(int *)(puVar3 + 0x24) = (int)lVar2 + 1;
	}
	puVar6 = puVar6 + iVar12;
	puVar5 = puVar5 + param_1;
	*(undefined4 *)(puVar5 + 0x28) = *(undefined4 *)(puVar6 + 0x14);
	*(undefined4 *)(puVar5 + 0x38) = *(undefined4 *)(puVar6 + 0x18);
	*(undefined4 *)(puVar5 + 0x3c) = *(undefined4 *)(puVar6 + 0x1c);
	*(undefined4 *)(puVar5 + 0xc) = *(undefined4 *)(puVar6 + 0x20);
	*(undefined4 *)(puVar5 + 0x30) = 0;
	puVar5[0x34] = puVar6[0x24];
	puVar5[0x40] = puVar6[0x25];
	*(undefined4 *)(puVar5 + 0x44) = 0;
	*(undefined4 *)(puVar5 + 0x48) = 0;
	*(undefined4 *)(puVar5 + 0x4c) = 0;
	return;
}

void SetObjMapRange(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
    undefined4 param_5, undefined4 param_6)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f1948 + param_1 * 0x78;
	*(undefined4 *)(puVar1 + 0x58) = param_2;
	*(undefined4 *)(puVar1 + 0x5c) = param_3;
	*(undefined4 *)(puVar1 + 0x60) = param_4;
	*(undefined4 *)(puVar1 + 100) = param_5;
	*(undefined4 *)(puVar1 + 0x74) = param_6;
	return;
}

void SetBookMsg(int param_1, undefined4 param_2)

{
	*(undefined4 *)(PTR_DAT_100f1948 + param_1 * 0x78 + 0x70) = param_2;
	return;
}

void AddL1Door(int param_1, int param_2, int param_3, int param_4)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;

	puVar3 = PTR_DAT_100f1a54;
	puVar2 = PTR_DAT_100f1948;
	puVar4 = PTR_DAT_100f1948 + param_1 * 0x78;
	*(undefined4 *)(puVar4 + 0x4c) = 1;
	if (param_4 == 1) {
		iVar1 = *(int *)puVar3;
		*(int *)(puVar4 + 0x58) = (int)*(short *)(iVar1 + param_2 * 0xe0 + param_3 * 2);
		*(int *)(puVar4 + 0x5c) = (int)*(short *)(iVar1 + param_2 * 0xe0 + param_3 * 2 + -2);
	} else {
		iVar1 = *(int *)puVar3;
		*(int *)(puVar4 + 0x58) = (int)*(short *)(iVar1 + param_2 * 0xe0 + param_3 * 2);
		*(int *)(puVar4 + 0x5c) = (int)*(short *)(iVar1 + param_2 * 0xe0 + param_3 * 2 + -0xe0);
	}
	*(undefined4 *)(puVar2 + param_1 * 0x78 + 100) = 0;
	return;
}

void AddSCambBook(int param_1)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;

	puVar5 = PTR_DAT_100f1a80;
	iVar1 = *(int *)PTR_DAT_100f1a84;
	puVar6 = PTR_DAT_100f1948 + param_1 * 0x78;
	*(int *)(puVar6 + 0x58) = iVar1;
	puVar4 = PTR_DAT_100f1a7c;
	puVar3 = PTR_DAT_100f1a78;
	iVar2 = *(int *)puVar5;
	*(int *)(puVar6 + 0x5c) = iVar2;
	*(int *)(puVar6 + 0x60) = iVar1 + *(int *)puVar4 + 1;
	*(int *)(puVar6 + 100) = iVar2 + *(int *)puVar3 + 1;
	*(int *)(puVar6 + 0x6c) = *(int *)(puVar6 + 0x24) + 1;
	return;
}

void AddChest(int param_1, int param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	longlong lVar5;
	undefined4 uVar6;
	undefined uVar7;
	ulonglong uVar8;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined in_stack_ffffffcb;

	puVar4 = PTR_DAT_100f1948;
	puVar3 = PTR_DAT_100f17f8;
	uVar8 = ZEXT48(PTR_DAT_100f1948);
	uVar7 = 2;
	lVar5 = random(0x93, 2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8,
	    in_stack_ffffffbf, in_stack_ffffffcb);
	lVar5._7_1_ = (undefined)lVar5;
	if ((int)lVar5 == 0) {
		lVar5 = uVar8 + (longlong)param_1 * 0x78;
		uVar7 = (undefined)lVar5;
		iVar2 = (int)lVar5;
		iVar1 = *(int *)(iVar2 + 0x24);
		lVar5._7_1_ = (undefined)iVar1;
		*(int *)(iVar2 + 0x24) = iVar1 + 3;
	}
	uVar6 = GetRndSeed((undefined)lVar5, uVar7, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	param_1 = param_1 * 0x78;
	*(undefined4 *)(puVar4 + param_1 + 0x54) = uVar6;
	if (param_2 == 0x44) {
	LAB_1008431c:
		if (*puVar3 == '\0') {
			lVar5 = random(0x93, 2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8,
			    in_stack_ffffffbf, in_stack_ffffffcb);
			*(int *)(puVar4 + param_1 + 0x58) = (int)lVar5;
		} else {
			*(undefined4 *)(puVar4 + param_1 + 0x58) = 1;
		}
	} else {
		if (param_2 < 0x44) {
			if (param_2 != 6) {
				if (5 < param_2) {
					if (7 < param_2)
						goto LAB_100843b4;
					goto LAB_10084384;
				}
				if (param_2 < 5)
					goto LAB_100843b4;
				goto LAB_1008431c;
			}
		} else {
			if (param_2 == 0x46) {
			LAB_10084384:
				if (*puVar3 == '\0') {
					lVar5 = random(0x93, 4, param_3, param_4, param_5, param_6, param_7, param_8,
					    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb);
					*(int *)(puVar4 + param_1 + 0x58) = (int)lVar5;
				} else {
					*(undefined4 *)(puVar4 + param_1 + 0x58) = 3;
				}
				goto LAB_100843b4;
			}
			if (0x45 < param_2)
				goto LAB_100843b4;
		}
		if (*puVar3 == '\0') {
			lVar5 = random(0x93, 3, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8,
			    in_stack_ffffffbf, in_stack_ffffffcb);
			*(int *)(puVar4 + param_1 + 0x58) = (int)lVar5;
		} else {
			*(undefined4 *)(puVar4 + param_1 + 0x58) = 2;
		}
	}
LAB_100843b4:
	lVar5 = random(0x93, 8, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8,
	    in_stack_ffffffbf, in_stack_ffffffcb);
	*(int *)(puVar4 + param_1 + 0x5c) = (int)lVar5;
	return;
}

void AddL2Door(int param_1, longlong param_2, int param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined4 in_stack_ffffffc8;

	puVar1 = PTR_DAT_100f1948;
	*(undefined4 *)(PTR_DAT_100f1948 + param_1 * 0x78 + 0x4c) = 1;
	if ((int)param_4 == 0x2a) {
		ObjSetMicro(param_2, param_3, 0x21a, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	} else {
		ObjSetMicro(param_2, param_3, 0x21c, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	}
	*(undefined4 *)(puVar1 + param_1 * 0x78 + 100) = 0;
	return;
}

void AddL3Door(int param_1, longlong param_2, int param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined4 in_stack_ffffffc8;

	puVar1 = PTR_DAT_100f1948;
	*(undefined4 *)(PTR_DAT_100f1948 + param_1 * 0x78 + 0x4c) = 1;
	if ((int)param_4 == 0x4a) {
		ObjSetMicro(param_2, param_3, 0x213, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	} else {
		ObjSetMicro(param_2, param_3, 0x216, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	}
	*(undefined4 *)(puVar1 + param_1 * 0x78 + 100) = 0;
	return;
}

void AddSarc(undefined8 param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	longlong lVar2;
	undefined4 uVar4;
	ulonglong uVar3;
	undefined uVar5;
	undefined uVar6;
	char cVar7;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined1 in_stack_ffffffcb;

	cVar7 = -1 - (char)param_1;
	puVar1 = PTR_DAT_100f1948 + (int)param_1 * 0x78;
	uVar6 = (undefined) * (int *)PTR_DAT_100f194c;
	*(char *)(*(int *)PTR_DAT_100f194c + *(int *)(puVar1 + 4) * 0x70 + *(int *)(puVar1 + 8) + -1) = cVar7;
	uVar5 = 10;
	lVar2 = random(0x99, 10, uVar6, cVar7, param_5, param_6, param_7, param_8, in_stack_ffffffb8,
	    in_stack_ffffffbf, in_stack_ffffffcb);
	*(int *)(puVar1 + 0x58) = (int)lVar2;
	uVar4 = GetRndSeed((char)lVar2, uVar5, uVar6, cVar7, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	*(undefined4 *)(puVar1 + 0x54) = uVar4;
	if (7 < *(int *)(puVar1 + 0x58)) {
		uVar3 = PreSpawnSkeleton((char)uVar4, uVar5, uVar6, cVar7, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
		*(int *)(puVar1 + 0x5c) = (int)uVar3;
	}
	return;
}

void AddFlameTrap(int param_1)

{
	undefined *puVar1;
	undefined *puVar2;

	puVar1 = PTR_DAT_100f1ff0;
	puVar2 = PTR_DAT_100f1948 + param_1 * 0x78;
	*(undefined4 *)(puVar2 + 0x58) = *(undefined4 *)PTR_DAT_100f1ff4;
	*(undefined4 *)(puVar2 + 0x5c) = 0;
	*(undefined4 *)(puVar2 + 0x60) = *(undefined4 *)puVar1;
	*(undefined4 *)(puVar2 + 100) = 0;
	return;
}

void AddFlameLvr(int param_1)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f1948 + param_1 * 0x78;
	*(undefined4 *)(puVar1 + 0x58) = *(undefined4 *)PTR_DAT_100f1ff4;
	*(undefined4 *)(puVar1 + 0x5c) = 0x31;
	return;
}

void AddTrap(int param_1, undefined4 param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9, undefined param_10, undefined4 param_11)

{
	undefined *puVar1;
	longlong lVar2;
	int iVar3;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined1 in_stack_ffffffdb;

	puVar1 = PTR_DAT_100f1948;
	lVar2 = random(0x94, (longlong)((int)(uint)(byte)*PTR_DAT_100f17ec / 3) + (ulonglong)((uint)((int)(uint)(byte)*PTR_DAT_100f17ec / 3) >> 0x1f) + 1,
	    (char)PTR_DAT_100f17ec, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdb);
	iVar3 = (int)lVar2;
	if (iVar3 == 0) {
		*(undefined4 *)(puVar1 + param_1 * 0x78 + 0x60) = 0;
	}
	if (iVar3 == 1) {
		*(undefined4 *)(puVar1 + param_1 * 0x78 + 0x60) = 1;
	}
	if (iVar3 == 2) {
		*(undefined4 *)(puVar1 + param_1 * 0x78 + 0x60) = 7;
	}
	*(undefined4 *)(puVar1 + param_1 * 0x78 + 100) = 0;
	return;
}

void AddObjLight(int param_1, int param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined4 in_stack_ffffffc8;

	if (*(int *)PTR_DAT_100f1fe8 == 0) {
		*(undefined4 *)(PTR_DAT_100f1948 + param_1 * 0x78 + 0x58) = 0;
	} else {
		puVar1 = PTR_DAT_100f1948 + param_1 * 0x78;
		DoLighting((ulonglong) * (uint *)(puVar1 + 4), (ulonglong) * (uint *)(puVar1 + 8), param_2, -1,
		    param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		*(undefined4 *)(puVar1 + 0x58) = 0xffffffff;
	}
	return;
}

void AddBarrel(int param_1, undefined4 param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9, undefined param_10, undefined4 param_11)

{
	undefined *puVar1;
	undefined4 uVar4;
	longlong lVar2;
	ulonglong uVar3;
	undefined uVar5;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined in_stack_ffffffdb;

	puVar1 = PTR_DAT_100f1948 + (int)((longlong)param_1 * 0x78);
	*(undefined4 *)(puVar1 + 0x58) = 0;
	uVar4 = GetRndSeed((char)((longlong)param_1 * 0x78), (undefined)param_2, param_3, param_4, param_5,
	    param_6, param_7, param_8, in_stack_ffffffc8);
	*(undefined4 *)(puVar1 + 0x54) = uVar4;
	lVar2 = random(0x95, 10, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8,
	    in_stack_ffffffcf, in_stack_ffffffdb);
	*(int *)(puVar1 + 0x5c) = (int)lVar2;
	uVar5 = 3;
	lVar2 = random(0x95, 3, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8,
	    in_stack_ffffffcf, in_stack_ffffffdb);
	*(int *)(puVar1 + 0x60) = (int)lVar2;
	if (7 < *(int *)(puVar1 + 0x5c)) {
		uVar3 = PreSpawnSkeleton((char)lVar2, uVar5, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
		*(int *)(puVar1 + 100) = (int)uVar3;
	}
	return;
}

void AddShrine(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, char param_8,
    undefined4 param_9)

{
	byte bVar1;
	char cVar2;
	undefined *puVar3;
	undefined *puVar4;
	ulonglong uVar5;
	char *pcVar6;
	ulonglong uVar7;
	ulonglong uVar8;
	longlong lVar9;
	undefined4 *puVar10;
	longlong lVar11;
	longlong lVar12;
	undefined *puVar13;
	longlong lVar14;
	undefined4 in_stack_ffffff58;
	undefined in_stack_ffffff5f;
	undefined in_stack_ffffff6b;
	int local_78[30];

	puVar13 = PTR_DAT_100f1948;
	puVar4 = PTR_DAT_100f17ec;
	puVar3 = PTR_DAT_100f17e0;
	lVar12 = (longlong)param_8;
	lVar11 = 0;
	uVar7 = ZEXT48(PTR_DAT_100f34ac);
	uVar8 = ZEXT48(PTR_DAT_100f34a8);
	*(undefined4 *)(PTR_DAT_100f1948 + param_1 * 0x78 + 0x44) = 1;
	lVar14 = 0xd;
	uVar5 = ZEXT48(PTR_DAT_100f34a4);
	bVar1 = *puVar4;
	cVar2 = *puVar3;
	lVar9 = ZEXT48(register0x0000000c) - 0x78;
	do {
		puVar10 = (undefined4 *)lVar9;
		if (((int)(uint)bVar1 < (int)*(char *)uVar7) || ((int)*(char *)uVar8 < (int)(uint)bVar1)) {
			*puVar10 = 0;
		} else {
			*puVar10 = 1;
		}
		pcVar6 = (char *)uVar5;
		if ((cVar2 != '\x01') && (*pcVar6 == '\x01')) {
			*puVar10 = 0;
		}
		if ((cVar2 == '\x01') && (*pcVar6 == '\x02')) {
			*puVar10 = 0;
		}
		puVar10 = puVar10 + 1;
		if (((int)(uint)bVar1 < (int)((char *)uVar7)[1]) || ((int)((char *)uVar8)[1] < (int)(uint)bVar1)) {
			*puVar10 = 0;
		} else {
			*puVar10 = 1;
		}
		if ((cVar2 != '\x01') && (pcVar6[1] == '\x01')) {
			*puVar10 = 0;
		}
		if ((cVar2 == '\x01') && (pcVar6[1] == '\x02')) {
			*puVar10 = 0;
		}
		uVar7 = uVar7 + 2;
		uVar8 = uVar8 + 2;
		lVar9 = lVar9 + 8;
		uVar5 = uVar5 + 2;
		lVar11 = lVar11 + 1;
		lVar14 = lVar14 + -1;
	} while (lVar14 != 0);
	do {
		lVar14 = random(0x96, 0x1a, (char)uVar5, (char)uVar7, (char)uVar8, (char)lVar9, (char)lVar11,
		    (char)lVar12, in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6b);
	} while (local_78[(int)lVar14] == 0);
	puVar13 = puVar13 + param_1 * 0x78;
	*(int *)(puVar13 + 0x58) = (int)lVar14;
	lVar9 = random(0x96, 2, (char)uVar5, (char)uVar7, (char)uVar8, (char)lVar9, (char)lVar11,
	    (char)lVar12, in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6b);
	if ((int)lVar9 != 0) {
		*(undefined4 *)(puVar13 + 0x24) = 0xc;
		*(undefined4 *)(puVar13 + 0x20) = 0x16;
	}
	return;
}

void AddBookcase(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined4 uVar2;
	undefined4 in_stack_ffffffc8;

	puVar1 = PTR_DAT_100f1948;
	uVar2 = GetRndSeed((char)param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	*(undefined4 *)(puVar1 + param_1 * 0x78 + 0x54) = uVar2;
	*(undefined4 *)(puVar1 + param_1 * 0x78 + 0x44) = 1;
	return;
}

void AddBookstand(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 uVar2;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	uVar2 = GetRndSeed((char)param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	*(undefined4 *)(ppuVar1[-0x1da2] + param_1 * 0x78 + 0x54) = uVar2;
	return;
}

void AddBloodFtn(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 uVar2;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	uVar2 = GetRndSeed((char)param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	*(undefined4 *)(ppuVar1[-0x1da2] + param_1 * 0x78 + 0x54) = uVar2;
	return;
}

void AddPurifyingFountain(undefined8 param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	char cVar6;
	longlong lVar4;
	undefined4 uVar5;
	longlong lVar7;
	undefined4 in_stack_ffffffc8;

	puVar3 = PTR_DAT_100f194c;
	puVar2 = PTR_DAT_100f1948 + (int)param_1 * 0x78;
	cVar6 = -1 - (char)param_1;
	lVar7 = (ulonglong) * (uint *)(puVar2 + 4) * 0x70;
	uVar1 = *(uint *)(puVar2 + 8);
	*(char *)(*(int *)PTR_DAT_100f194c + (int)lVar7 + uVar1 + -1) = cVar6;
	*(char *)(*(int *)puVar3 + (int)lVar7 + uVar1 + -0x70) = cVar6;
	lVar4 = (ulonglong) * (uint *)puVar3 + lVar7 + (ulonglong)uVar1;
	*(char *)((int)lVar4 + -0x71) = cVar6;
	uVar5 = GetRndSeed((char)lVar4, cVar6, (char)puVar3, (char)lVar7, (char)uVar1, param_6, param_7,
	    param_8, in_stack_ffffffc8);
	*(undefined4 *)(puVar2 + 0x54) = uVar5;
	return;
}

void AddArmorStand(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined uVar6;
	longlong lVar4;
	undefined4 uVar5;
	undefined4 in_stack_ffffffc8;

	puVar3 = PTR_DAT_100f1fe0;
	puVar2 = PTR_DAT_100f1948;
	uVar6 = (undefined)param_1;
	if (*(int *)PTR_DAT_100f1fe0 == 0) {
		lVar4 = ZEXT48(PTR_DAT_100f1948) + (longlong)param_1 * 0x78;
		uVar6 = (undefined)lVar4;
		iVar1 = (int)lVar4;
		*(undefined4 *)(iVar1 + 0x10) = 2;
		*(undefined *)(iVar1 + 0x40) = 0;
	}
	uVar5 = GetRndSeed(uVar6, (char)puVar3, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	*(undefined4 *)(puVar2 + param_1 * 0x78 + 0x54) = uVar5;
	return;
}

void AddGoatShrine(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 uVar2;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	uVar2 = GetRndSeed((char)param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	*(undefined4 *)(ppuVar1[-0x1da2] + param_1 * 0x78 + 0x54) = uVar2;
	return;
}

void AddCauldron(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 uVar2;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	uVar2 = GetRndSeed((char)param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	*(undefined4 *)(ppuVar1[-0x1da2] + param_1 * 0x78 + 0x54) = uVar2;
	return;
}

void AddMurkyFountain(undefined8 param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	char cVar6;
	longlong lVar4;
	undefined4 uVar5;
	longlong lVar7;
	undefined4 in_stack_ffffffc8;

	puVar3 = PTR_DAT_100f194c;
	puVar2 = PTR_DAT_100f1948 + (int)param_1 * 0x78;
	cVar6 = -1 - (char)param_1;
	lVar7 = (ulonglong) * (uint *)(puVar2 + 4) * 0x70;
	uVar1 = *(uint *)(puVar2 + 8);
	*(char *)(*(int *)PTR_DAT_100f194c + (int)lVar7 + uVar1 + -1) = cVar6;
	*(char *)(*(int *)puVar3 + (int)lVar7 + uVar1 + -0x70) = cVar6;
	lVar4 = (ulonglong) * (uint *)puVar3 + lVar7 + (ulonglong)uVar1;
	*(char *)((int)lVar4 + -0x71) = cVar6;
	uVar5 = GetRndSeed((char)lVar4, cVar6, (char)puVar3, (char)lVar7, (char)uVar1, param_6, param_7,
	    param_8, in_stack_ffffffc8);
	*(undefined4 *)(puVar2 + 0x54) = uVar5;
	return;
}

void AddVilebook(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 uVar2;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	uVar2 = GetRndSeed((char)param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	*(undefined4 *)(ppuVar1[-0x1da2] + param_1 * 0x78 + 0x54) = uVar2;
	return;
}

void AddVilebook(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 uVar2;
	longlong lVar1;
	undefined *puVar3;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined in_stack_ffffffdb;

	puVar3 = PTR_DAT_100f1948;
	uVar2 = GetRndSeed((char)param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	puVar3 = puVar3 + param_1 * 0x78;
	*(undefined4 *)(puVar3 + 0x54) = uVar2;
	lVar1 = random(0x97, 8, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8,
	    in_stack_ffffffcf, in_stack_ffffffdb);
	*(int *)(puVar3 + 0x24) = (int)lVar1 + 1;
	*(undefined4 *)(puVar3 + 0x44) = 1;
	return;
}

void AddVilebook(int param_1)

{
	if (*PTR_DAT_100f17f8 == '\0') {
		return;
	}
	if (*PTR_DAT_100f17f0 != '\x05') {
		return;
	}
	*(undefined4 *)(PTR_DAT_100f1948 + param_1 * 0x78 + 0x24) = 4;
	return;
}

void AddMagicCircle(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 uVar1;
	undefined *puVar2;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_DAT_100f1948;
	uVar1 = GetRndSeed((char)param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	puVar2 = puVar2 + param_1 * 0x78;
	*(undefined4 *)(puVar2 + 0x54) = uVar1;
	*(undefined4 *)(puVar2 + 0x44) = 1;
	*(undefined4 *)(puVar2 + 0x6c) = 0;
	*(undefined4 *)(puVar2 + 0x68) = 1;
	return;
}

void AddBrnCross(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 uVar2;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	uVar2 = GetRndSeed((char)param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	*(undefined4 *)(ppuVar1[-0x1da2] + param_1 * 0x78 + 0x54) = uVar2;
	return;
}

void AddStoryBook(int param_1)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;

	puVar5 = PTR_DAT_100f1a80;
	iVar1 = *(int *)PTR_DAT_100f1a84;
	puVar6 = PTR_DAT_100f1948 + param_1 * 0x78;
	*(int *)(puVar6 + 0x58) = iVar1;
	puVar4 = PTR_DAT_100f1a7c;
	puVar3 = PTR_DAT_100f1a78;
	iVar2 = *(int *)puVar5;
	*(int *)(puVar6 + 0x5c) = iVar2;
	*(int *)(puVar6 + 0x60) = iVar1 + *(int *)puVar4;
	*(int *)(puVar6 + 100) = iVar2 + *(int *)puVar3;
	return;
}

void AddStoryBook(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int *piVar1;
	byte bVar2;
	byte *pbVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	longlong lVar6;
	undefined *puVar7;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined in_stack_ffffffcb;

	puVar4 = PTR_DAT_100f1fdc;
	puVar7 = PTR_DAT_100f1948;
	ppuVar5 = &toc;
	SetRndSeed(*(undefined4 *)(PTR_DAT_100f19e4 + 0x40));
	lVar6 = random(0, 3, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8,
	    in_stack_ffffffbf, in_stack_ffffffcb);
	param_1 = param_1 * 0x78;
	pbVar3 = ppuVar5[-0x1df9];
	piVar1 = (int *)(puVar7 + param_1 + 0x58);
	*piVar1 = (int)lVar6;
	bVar2 = *pbVar3;
	if (bVar2 == 4) {
		*(undefined4 *)(puVar7 + param_1 + 0x5c) = *(undefined4 *)(puVar4 + *piVar1 * 0xc);
	}
	if (bVar2 == 8) {
		*(undefined4 *)(puVar7 + param_1 + 0x5c) = *(undefined4 *)(puVar4 + *piVar1 * 0xc + 4);
	}
	if (bVar2 == 0xc) {
		*(undefined4 *)(puVar7 + param_1 + 0x5c) = *(undefined4 *)(puVar4 + *piVar1 * 0xc + 8);
	}
	puVar7 = puVar7 + param_1;
	*(int *)(puVar7 + 0x60) = ((int)(uint)bVar2 >> 2) + *piVar1 * 3 + -1;
	*(int *)(puVar7 + 0x24) = *piVar1 * -2 + 5;
	*(int *)(puVar7 + 100) = *(int *)(puVar7 + 0x24) + 1;
	return;
}

void AddWeaponRack(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined uVar6;
	longlong lVar4;
	undefined4 uVar5;
	undefined4 in_stack_ffffffc8;

	puVar3 = PTR_DAT_100f1fd8;
	puVar2 = PTR_DAT_100f1948;
	uVar6 = (undefined)param_1;
	if (*(int *)PTR_DAT_100f1fd8 == 0) {
		lVar4 = ZEXT48(PTR_DAT_100f1948) + (longlong)param_1 * 0x78;
		uVar6 = (undefined)lVar4;
		iVar1 = (int)lVar4;
		*(undefined4 *)(iVar1 + 0x10) = 2;
		*(undefined *)(iVar1 + 0x40) = 0;
	}
	uVar5 = GetRndSeed(uVar6, (char)puVar3, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	*(undefined4 *)(puVar2 + param_1 * 0x78 + 0x54) = uVar5;
	return;
}

void AddTorturedBody(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 uVar2;
	longlong lVar1;
	undefined *puVar3;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined in_stack_ffffffdb;

	puVar3 = PTR_DAT_100f1948;
	uVar2 = GetRndSeed((char)param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	puVar3 = puVar3 + param_1 * 0x78;
	*(undefined4 *)(puVar3 + 0x54) = uVar2;
	lVar1 = random(0, 4, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8,
	    in_stack_ffffffcf, in_stack_ffffffdb);
	*(int *)(puVar3 + 0x24) = (int)lVar1 + 1;
	*(undefined4 *)(puVar3 + 0x44) = 1;
	return;
}

void GetRndObjLoc(longlong param_1, int *param_2, int *param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	uint uVar1;
	longlong lVar2;
	undefined8 uVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined in_stack_ffffffcb;

	lVar9 = (longlong)param_8;
	lVar8 = (longlong)param_7;
	lVar7 = (longlong)param_6;
	lVar6 = (longlong)param_5;
	lVar5 = (longlong)param_4;
	lVar4 = (longlong)(int)param_3;
	if (param_1 != 0) {
		iVar10 = 0;
		do {
			iVar10 = iVar10 + 1;
			if ((1000 < iVar10) && (1 < (int)param_1)) {
				param_1 = param_1 + -1;
			}
			lVar2 = random(0, 0x70, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8,
			    (char)lVar9, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb);
			*param_2 = (int)lVar2;
			lVar2 = random(0, 0x70, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8,
			    (char)lVar9, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb);
			*param_3 = (int)lVar2;
			uVar1 = 0;
			iVar12 = 0;
			while ((iVar12 < (int)param_1 && (uVar1 == 0))) {
				iVar11 = 0;
				while ((iVar11 < (int)param_1 && (uVar1 == 0))) {
					uVar3 = RndLocOk(*param_2 + iVar12, *param_3 + iVar11);
					uVar3 = countLeadingZeros((int)uVar3);
					iVar11 = iVar11 + 1;
					uVar1 = (uint)uVar3 >> 5 & 0xff;
				}
				iVar12 = iVar12 + 1;
			}
		} while (uVar1 != 0);
	}
	return;
}

void AddMushPatch(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 uVar1;
	undefined *puVar2;
	char cVar3;
	undefined4 in_stack_ffffffb8;
	int local_18;
	int local_14[5];

	puVar2 = PTR_DAT_100f194c;
	if (*(int *)PTR_DAT_100f1e3c < 0x7f) {
		uVar1 = *(undefined4 *)PTR_DAT_100f1e7c;
		GetRndObjLoc(5, local_14, &local_18, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
		cVar3 = -1 - (char)uVar1;
		*(char *)(*(int *)puVar2 + local_14[0] * 0x70 + local_18 + 0x71) = cVar3;
		*(char *)(*(int *)puVar2 + local_14[0] * 0x70 + local_18 + 0xe1) = cVar3;
		*(char *)(*(int *)puVar2 + local_14[0] * 0x70 + local_18 + 0x72) = cVar3;
		AddObject(0x5e, local_14[0] + 2, local_18 + 2, cVar3, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
	}
	return;
}

void AddSlainHero(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;
	int local_8;
	int local_4;

	GetRndObjLoc(5, &local_4, &local_8, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	AddObject(0x60, local_4 + 2, local_8 + 2, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	return;
}

void AddObject(uint param_1, int param_2, int param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined **ppuVar8;
	undefined4 in_stack_ffffffb8;

	puVar7 = PTR_DAT_100f1e7c;
	puVar6 = PTR_DAT_100f1e40;
	puVar5 = PTR_DAT_100f1e3c;
	puVar4 = PTR_DAT_100f194c;
	puVar3 = PTR_DAT_100f1948;
	ppuVar8 = &toc;
	iVar1 = *(int *)PTR_DAT_100f1e3c;
	if (iVar1 < 0x7f) {
		iVar2 = *(int *)PTR_DAT_100f1e7c;
		*(undefined4 *)PTR_DAT_100f1e7c = *(undefined4 *)(PTR_DAT_100f1e7c + (0x7e - iVar1) * 4);
		*(int *)(puVar6 + iVar1 * 4) = iVar2;
		*(char *)(*(int *)puVar4 + param_2 * 0x70 + param_3) = (char)iVar2 + '\x01';
		SetupObject(iVar2, param_2, param_3, param_1, (char)puVar7, param_6, param_7, param_8,
		    in_stack_ffffffb8);
		if (param_1 < 0x5d) {
			// WARNING: Could not recover jumptable at 0x100851d4. Too many branches
			// WARNING: Treating indirect jump as call
			(**(code **)(ppuVar8[-0x16cc] + param_1 * 4))();
			return;
		}
		*(int *)(puVar3 + iVar2 * 0x78 + 0x2c) = *(int *)(puVar3 + iVar2 * 0x78 + 0x28) + -0x40 >> 1;
		*(int *)puVar5 = *(int *)puVar5 + 1;
	}
	return;
}

void Obj_Light(int param_1, int param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	int *piVar1;
	uint uVar2;
	uint uVar3;
	bool bVar4;
	undefined *puVar5;
	undefined *puVar6;
	longlong lVar7;
	longlong lVar8;
	ulonglong uVar9;
	int iVar10;
	undefined *puVar11;

	puVar6 = PTR_DAT_100f1948;
	puVar5 = PTR_DAT_100f17ec;
	param_1 = param_1 * 0x78;
	piVar1 = (int *)(PTR_DAT_100f1948 + param_1 + 0x58);
	if (*piVar1 != -1) {
		uVar2 = *(uint *)(PTR_DAT_100f1948 + param_1 + 4);
		uVar3 = *(uint *)(PTR_DAT_100f1948 + param_1 + 8);
		bVar4 = false;
		if (*(int *)PTR_DAT_100f1aa4 == 0) {
			iVar10 = 0;
			puVar11 = PTR_DAT_100f1828;
			while ((iVar10 < 4 && (!bVar4))) {
				if ((puVar11[0x1d] != '\0') && ((uint)(byte)*puVar5 == *(uint *)(puVar11 + 0x34))) {
					lVar7 = abs((ulonglong) * (uint *)(puVar11 + 0x38) - (ulonglong)uVar2);
					lVar8 = abs((ulonglong) * (uint *)(puVar11 + 0x3c) - (ulonglong)uVar3);
					if (((int)lVar7 < param_2 + 10) && ((int)lVar8 < param_2 + 10)) {
						bVar4 = true;
					}
				}
				puVar11 = puVar11 + 0x55ec;
				iVar10 = iVar10 + 1;
			}
		}
		if (bVar4) {
			if (*piVar1 == 0) {
				uVar9 = AddLight(uVar2, uVar3, param_2);
				*(int *)(puVar6 + param_1 + 0x50) = (int)uVar9;
			}
			*piVar1 = 1;
		} else {
			if (*piVar1 == 1) {
				AddUnLight(*(int *)(puVar6 + param_1 + 0x50));
			}
			*piVar1 = 0;
		}
	}
	return;
}

void Obj_Circle(int iParm1)

{
	uint uVar1;
	int iVar2;
	int iVar3;
	undefined *puVar4;
	int iVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined **ppuVar8;
	int *piVar9;
	ulonglong uVar10;
	undefined8 uVar11;
	undefined *puVar13;
	undefined8 uVar12;
	ulonglong uVar14;
	undefined8 uVar15;
	undefined4 in_r9;
	undefined8 uVar16;
	undefined4 in_r10;
	ulonglong uVar17;
	undefined *puVar18;
	undefined *puVar19;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 local_4c;

	puVar7 = PTR_DAT_100f19cc;
	puVar13 = PTR_DAT_100f1948;
	puVar4 = PTR_DAT_100f1828;
	puVar6 = PTR_DAT_100f1824;
	ppuVar8 = &toc;
	iParm1 = iParm1 * 0x78;
	puVar18 = PTR_DAT_100f1828 + 0x38;
	piVar9 = (int *)(PTR_DAT_100f1948 + iParm1);
	puVar19 = PTR_DAT_100f1828 + 0x3c;
	uVar1 = *(uint *)PTR_DAT_100f1824;
	iVar2 = piVar9[1];
	iVar3 = piVar9[2];
	iVar5 = (int)((ulonglong)uVar1 * 0x55ec);
	if ((*(int *)(puVar18 + iVar5) == iVar2) && (*(int *)(puVar19 + iVar5) == iVar3)) {
		if (*piVar9 == 0x54) {
			piVar9[9] = 2;
		}
		if (*piVar9 == 0x55) {
			*(undefined4 *)(puVar13 + iParm1 + 0x24) = 4;
		}
		if ((iVar2 == 0x2d) && (iVar3 == 0x2f)) {
			*(undefined4 *)(puVar13 + iParm1 + 0x6c) = 2;
		} else {
			if ((iVar2 == 0x1a) && (iVar3 == 0x2e)) {
				*(undefined4 *)(puVar13 + iParm1 + 0x6c) = 1;
			} else {
				*(undefined4 *)(puVar13 + iParm1 + 0x6c) = 0;
			}
		}
		if (((iVar2 == 0x23) && (iVar3 == 0x24)) && (puVar13 = puVar13 + iParm1, *(int *)(puVar13 + 0x68) == 3)) {
			*(undefined4 *)(puVar13 + 0x6c) = 4;
			ObjChangeMapResync((ulonglong) * (uint *)(puVar13 + 0x58), (ulonglong) * (uint *)(puVar13 + 0x5c),
			    *(int *)(puVar13 + 0x60), (ulonglong) * (uint *)(puVar13 + 100),
			    (ulonglong)uVar1 * 0x55ec, 0x24, in_r9, in_r10, in_stack_ffffffa8);
			if (puVar7[0x16a] == '\x02') {
				puVar7[0x177] = 4;
			}
			uVar17 = (ulonglong) * (uint *)puVar6;
			uVar11 = 0x23;
			iVar2 = *(uint *)puVar6 * 0x55ec;
			uVar12 = 0x2e;
			uVar10 = (ulonglong) * (uint *)(puVar19 + iVar2);
			uVar15 = 3;
			uVar14 = (ulonglong) * (uint *)(puVar4 + iVar2 + 0x70);
			uVar16 = 0;
			AddMissile((ulonglong) * (uint *)(puVar18 + iVar2), uVar10, 0x23, 0x2e, uVar14, 3, 0, uVar17,
			    in_stack_ffffffa8, in_stack_ffffffaf, 0, 0);
			track_repeat_walk(0);
			puVar4 = ppuVar8[-0x1d58];
			*puVar4 = 0;
			ReleaseCapture((char)puVar4, (char)uVar10, (char)uVar11, (char)uVar12, (char)uVar14, (char)uVar15,
			    (char)uVar16, (char)uVar17, (char)in_stack_ffffffa8, in_stack_ffffffaf, local_4c);
			ClrPlrPath((ulonglong) * (uint *)puVar6, uVar10, uVar11, uVar12, uVar14, (int)uVar15, (int)uVar16,
			    (int)uVar17, in_stack_ffffffa8);
			StartStand((ulonglong) * (uint *)puVar6, 0, uVar11, uVar12, uVar14, uVar15, uVar16, uVar17,
			    in_stack_ffffffa8);
		}
	} else {
		piVar9 = (int *)(PTR_DAT_100f1948 + iParm1);
		if (*piVar9 == 0x54) {
			piVar9[9] = 1;
		}
		if (*piVar9 == 0x55) {
			*(undefined4 *)(puVar13 + iParm1 + 0x24) = 3;
		}
		*(undefined4 *)(puVar13 + iParm1 + 0x6c) = 0;
	}
	return;
}

void Obj_StopAnim(int param_1)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f1948 + param_1 * 0x78;
	if (*(int *)(puVar1 + 0x24) != *(int *)(puVar1 + 0x20)) {
		return;
	}
	*(undefined4 *)(puVar1 + 0x1c) = 0;
	*(undefined4 *)(puVar1 + 0x18) = 1000;
	return;
}

void Obj_Door(int param_1)

{
	int *piVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	short sVar5;
	undefined *puVar6;
	undefined8 uVar7;
	undefined8 uVar8;
	undefined8 uVar9;
	int iVar11;
	undefined8 uVar10;
	undefined *puVar12;

	puVar6 = PTR_DAT_100f1948;
	param_1 = param_1 * 0x78;
	piVar1 = (int *)(PTR_DAT_100f1948 + param_1 + 100);
	if (*piVar1 == 0) {
		puVar6 = PTR_DAT_100f1948 + param_1;
		puVar6[0x40] = 3;
		*(undefined4 *)(puVar6 + 0x3c) = 0;
	} else {
		puVar12 = PTR_DAT_100f1948 + param_1;
		iVar11 = *(int *)(puVar12 + 4) * 0x70 + *(int *)(puVar12 + 8);
		cVar2 = *(char *)(*(int *)PTR_DAT_100f1944 + iVar11);
		cVar3 = *(char *)(*(int *)PTR_DAT_100f19a0 + iVar11);
		cVar4 = *(char *)(*(int *)PTR_DAT_100f1950 + iVar11);
		sVar5 = *(short *)(*(int *)PTR_DAT_100f1954 + *(int *)(puVar12 + 4) * 0xe0 + *(int *)(puVar12 + 8) * 2);
		puVar12[0x40] = 2;
		uVar10 = countLeadingZeros(-(int)sVar5);
		uVar9 = countLeadingZeros(-(int)cVar2);
		uVar8 = countLeadingZeros(-(int)cVar3);
		uVar7 = countLeadingZeros(-(int)cVar4);
		if (((uint)uVar9 >> 5 & 0xff & (uint)uVar10 >> 5 & 0xff & (uint)uVar8 >> 5 & 0xff & (uint)uVar7 >> 5 & 0xff) == 0) {
			*piVar1 = 2;
		} else {
			*piVar1 = 1;
		}
		*(undefined4 *)(puVar6 + param_1 + 0x3c) = 1;
	}
	return;
}

void Obj_Sarc(int param_1)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f1948 + param_1 * 0x78;
	if (*(int *)(puVar1 + 0x24) != *(int *)(puVar1 + 0x20)) {
		return;
	}
	*(undefined4 *)(puVar1 + 0x10) = 0;
	return;
}

void ActivateTrapLine(int param_1, int param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	ulonglong uVar3;
	int iVar4;
	undefined *puVar5;
	int *piVar6;

	puVar2 = PTR_DAT_100f1e3c;
	puVar1 = PTR_DAT_100f1948;
	iVar4 = 0;
	piVar6 = (int *)PTR_DAT_100f1e40;
	while (iVar4 < *(int *)puVar2) {
		if ((param_1 == *(int *)(puVar1 + *piVar6 * 0x78)) && (puVar5 = puVar1 + *piVar6 * 0x78, param_2 == *(int *)(puVar5 + 0x58))) {
			*(undefined4 *)(puVar5 + 100) = 1;
			*(undefined4 *)(puVar5 + 0x10) = 1;
			*(undefined4 *)(puVar5 + 0x18) = 1;
			uVar3 = AddLight(*(undefined4 *)(puVar5 + 4), *(undefined4 *)(puVar5 + 8), 1);
			*(int *)(puVar5 + 0x50) = (int)uVar3;
		}
		piVar6 = piVar6 + 1;
		iVar4 = iVar4 + 1;
	}
	return;
}

void Obj_FlameTrap(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	short sVar1;
	int iVar2;
	uint uVar3;
	undefined *puVar4;
	undefined *puVar5;
	int *piVar6;
	char cVar7;
	longlong lVar8;
	short *psVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	char *pcVar13;
	undefined4 in_stack_ffffffc8;

	puVar4 = PTR_DAT_100f1948;
	param_1 = param_1 * 0x78;
	puVar5 = PTR_DAT_100f1948 + param_1;
	if (*(int *)(puVar5 + 0x5c) != 0) {
		if (*(int *)(puVar5 + 100) == 0) {
			return;
		}
		*(int *)(puVar5 + 0x24) = *(int *)(puVar5 + 0x24) + -1;
		iVar2 = *(int *)(puVar5 + 0x24);
		if (iVar2 == 1) {
			*(undefined4 *)(puVar5 + 100) = 0;
			AddUnLight(*(int *)(puVar5 + 0x50));
			return;
		}
		if (4 < iVar2) {
			return;
		}
		ChangeLightRadius(*(int *)(puVar5 + 0x50), iVar2);
		return;
	}
	if (*(int *)(puVar5 + 100) == 0) {
		if (*(int *)(puVar5 + 0x60) == 2) {
			uVar12 = (undefined) * (uint *)PTR_DAT_100f1954;
			pcVar13 = (char *)(*(int *)PTR_DAT_100f1950 + *(int *)(puVar5 + 8) + (int)((ulonglong) * (uint *)(puVar5 + 4) - 2) * 0x70);
			uVar3 = *(int *)(puVar5 + 8) << 1;
			uVar11 = (undefined)uVar3;
			lVar8 = (ulonglong) * (uint *)PTR_DAT_100f1954 + (ulonglong)uVar3 + ((ulonglong) * (uint *)(puVar5 + 4) - 2) * 0xe0;
			psVar9 = (short *)lVar8;
			if ((*pcVar13 != '\0') || (*psVar9 != 0)) {
				*(undefined4 *)(puVar5 + 100) = 1;
			}
			if ((pcVar13[0x70] != '\0') || (psVar9[0x70] != 0)) {
				*(undefined4 *)(puVar5 + 100) = 1;
			}
			if ((pcVar13[0xe0] != '\0') || (psVar9[0xe0] != 0)) {
				*(undefined4 *)(puVar5 + 100) = 1;
			}
			if ((pcVar13[0x150] != '\0') || (psVar9[0x150] != 0)) {
				*(undefined4 *)(puVar5 + 100) = 1;
			}
			cVar7 = pcVar13[0x1c0];
			lVar8 = lVar8 + 0x380;
			uVar10 = (undefined)lVar8;
			if ((cVar7 != '\0') || (sVar1 = *(short *)lVar8, cVar7 = (char)sVar1, sVar1 != 0)) {
				*(undefined4 *)(puVar5 + 100) = 1;
			}
		} else {
			uVar12 = (undefined) * (uint *)PTR_DAT_100f1954;
			pcVar13 = (char *)(*(int *)PTR_DAT_100f1950 + *(uint *)(puVar5 + 4) * 0x70 + *(int *)(puVar5 + 8) + -2);
			lVar8 = (ulonglong) * (uint *)(puVar5 + 4) * 0xe0;
			uVar11 = (undefined)lVar8;
			lVar8 = (ulonglong) * (uint *)PTR_DAT_100f1954 + lVar8 + (ulonglong)(uint)((*(int *)(puVar5 + 8) + -2) * 2);
			psVar9 = (short *)lVar8;
			if ((*pcVar13 != '\0') || (*psVar9 != 0)) {
				*(undefined4 *)(puVar5 + 100) = 1;
			}
			if ((pcVar13[1] != '\0') || (psVar9[1] != 0)) {
				*(undefined4 *)(puVar5 + 100) = 1;
			}
			if ((pcVar13[2] != '\0') || (psVar9[2] != 0)) {
				*(undefined4 *)(puVar5 + 100) = 1;
			}
			if ((pcVar13[3] != '\0') || (psVar9[3] != 0)) {
				*(undefined4 *)(puVar5 + 100) = 1;
			}
			cVar7 = pcVar13[4];
			lVar8 = lVar8 + 8;
			uVar10 = (undefined)lVar8;
			if ((cVar7 != '\0') || (sVar1 = *(short *)lVar8, cVar7 = (char)sVar1, sVar1 != 0)) {
				*(undefined4 *)(puVar5 + 100) = 1;
			}
		}
		if (*(int *)(puVar5 + 100) != 0) {
			ActivateTrapLine(*(int *)(puVar4 + param_1), *(int *)(puVar4 + param_1 + 0x58), (char)puVar4, 1, cVar7, uVar10, uVar11, uVar12, in_stack_ffffffc8);
		}
		return;
	}
	piVar6 = (int *)(puVar5 + 0x24);
	if (*piVar6 == *(int *)(puVar5 + 0x20)) {
		*piVar6 = 0xb;
	}
	if (5 < *piVar6) {
		return;
	}
	ChangeLightRadius(*(int *)(puVar4 + param_1 + 0x50), *piVar6);
	return;
}

void Obj_Trap(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	uint uVar3;
	uint uVar4;
	int iVar5;
	bool bVar6;
	undefined *puVar7;
	undefined *puVar8;
	longlong lVar9;
	undefined *puVar10;
	undefined *puVar12;
	longlong lVar11;
	undefined *puVar14;
	longlong lVar13;
	ulonglong uVar15;
	ulonglong uVar16;
	int iVar17;
	ulonglong uVar18;
	undefined4 uVar19;
	undefined4 uVar20;
	ulonglong uVar21;
	ulonglong uVar22;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;

	puVar8 = PTR_DAT_100f1950;
	puVar7 = PTR_DAT_100f1948;
	param_1 = param_1 * 0x78;
	puVar14 = PTR_DAT_100f1948 + 100;
	bVar6 = false;
	if (*(int *)(puVar14 + param_1) != 0) {
		return;
	}
	iVar5 = (int)*(char *)(*(int *)PTR_DAT_100f194c + *(int *)(PTR_DAT_100f1948 + param_1 + 0x58) * 0x70 + *(int *)(PTR_DAT_100f1948 + param_1 + 0x5c)) + -1;
	iVar17 = *(int *)(PTR_DAT_100f1948 + iVar5 * 0x78);
	if (iVar17 < 0x2a) {
		if (iVar17 < 8) {
			if (iVar17 == 3)
				goto LAB_10085c90;
			if (iVar17 < 3) {
				if (iVar17 < 1)
					goto LAB_10085c90;
				goto LAB_10085c7c;
			}
		} else {
			if (iVar17 != 0x1c)
				goto LAB_10085c90;
		}
	} else {
		if (iVar17 != 0x30) {
			if (iVar17 < 0x30) {
				if (0x2b < iVar17)
					goto LAB_10085c90;
			} else {
				if ((0x4b < iVar17) || (iVar17 < 0x4a))
					goto LAB_10085c90;
			}
		LAB_10085c7c:
			if (*(int *)(puVar14 + iVar5 * 0x78) != 0) {
				bVar6 = true;
			}
			goto LAB_10085c90;
		}
	}
	if (PTR_DAT_100f1948[iVar5 * 0x78 + 0x40] == '\0') {
		bVar6 = true;
	}
LAB_10085c90:
	if (bVar6) {
		iVar5 = iVar5 * 0x78;
		puVar12 = PTR_DAT_100f1948 + 8;
		puVar10 = PTR_DAT_100f1948 + 4;
		*(int *)(puVar14 + param_1) = 1;
		uVar1 = *(uint *)(puVar12 + iVar5);
		uVar21 = (ulonglong)uVar1;
		uVar2 = *(uint *)(puVar10 + iVar5);
		uVar15 = (ulonglong)uVar2;
		uVar18 = uVar21 - 1;
		uVar3 = *(uint *)(puVar10 + param_1);
		uVar4 = *(uint *)(puVar12 + param_1);
		lVar13 = uVar21 + (ulonglong) * (uint *)puVar8 + -1;
		uVar22 = uVar15;
		while ((int)uVar18 <= (int)(uVar1 + 1)) {
			uVar16 = uVar15 - 1;
			lVar9 = (uVar15 + 2) - uVar16;
			lVar11 = lVar13 + uVar16 * 0x70;
			if ((int)uVar16 <= (int)(uVar2 + 1)) {
				do {
					if (*(char *)lVar11 != '\0') {
						uVar21 = uVar18;
						uVar22 = uVar16;
					}
					lVar11 = lVar11 + 0x70;
					uVar16 = uVar16 + 1;
					lVar9 = lVar9 + -1;
				} while (lVar9 != 0);
			}
			lVar13 = lVar13 + 1;
			uVar18 = uVar18 + 1;
		}
		if (*(int *)PTR_DAT_100f1f60 == 0) {
			uVar15 = GetDirection((ulonglong)uVar3, uVar4, uVar22, (int)uVar21);
			iVar17 = *(int *)(puVar7 + param_1 + 0x60);
			uVar19 = 1;
			uVar20 = 0xffffffff;
			AddMissile((ulonglong)uVar3, (ulonglong)uVar4, uVar22, uVar21, uVar15, iVar17, 1,
			    0xffffffffffffffff, in_stack_ffffff98, in_stack_ffffff9f, 0, 0);
			PlaySfxLoc(0x48, (ulonglong) * (uint *)(puVar10 + iVar5), (ulonglong) * (uint *)(puVar12 + iVar5),
			    uVar21, uVar15, iVar17, uVar19, uVar20, in_stack_ffffff98);
		}
		*(undefined4 *)(puVar7 + iVar5 + 0x48) = 0;
	}
	return;
}

void Obj_BCrossDamage(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	longlong lVar1;
	char cVar2;
	uint uVar3;
	uint uVar4;
	int iVar5;
	uint *puVar6;
	uint *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	longlong lVar11;
	undefined **ppuVar12;
	ulonglong uVar13;
	ulonglong uVar14;
	int iVar16;
	ulonglong uVar15;
	ulonglong uVar17;
	undefined4 in_stack_ffffffb8;
	uint auStack28[4];
	undefined4 local_c;

	puVar10 = PTR_DAT_100f1948;
	puVar9 = PTR_DAT_100f183c;
	puVar8 = PTR_DAT_100f1828;
	ppuVar12 = &toc;
	uVar13 = ZEXT48(PTR_DAT_100f1828);
	auStack28[1] = *(undefined4 *)PTR_DAT_100f349c;
	auStack28[2] = *(undefined4 *)(PTR_DAT_100f349c + 4);
	uVar17 = ZEXT48(PTR_DAT_100f1948);
	auStack28[3] = *(undefined4 *)(PTR_DAT_100f349c + 8);
	local_c = *(undefined4 *)(PTR_DAT_100f349c + 0xc);
	uVar14 = (ulonglong) * (uint *)PTR_DAT_100f1824;
	lVar11 = uVar14 * 0x55ec;
	iVar5 = (int)lVar11;
	if (*(int *)(PTR_DAT_100f1828 + iVar5) != 8) {
		if ('\0' < (char)PTR_DAT_100f1828[iVar5 + 0x1c6]) {
			uVar3 = auStack28[(uint)(byte)*PTR_DAT_100f183c];
			iVar16 = (int)(char)PTR_DAT_100f1828[iVar5 + 0x1c6] * uVar3;
			uVar4 = iVar16 / 100 + (iVar16 >> 0x1f);
			auStack28[(uint)(byte)*PTR_DAT_100f183c] = uVar3 - (uVar4 + (uVar4 >> 0x1f));
		}
		puVar6 = (uint *)(puVar8 + iVar5 + 0x38);
		if (*puVar6 == *(uint *)(puVar10 + param_1 * 0x78 + 4)) {
			lVar1 = uVar13 + lVar11 + 0x3c;
			puVar7 = (uint *)lVar1;
			if (*puVar7 == *(int *)(puVar10 + param_1 * 0x78 + 8) - 1U) {
				uVar3 = auStack28[(uint)(byte)*puVar9];
				uVar15 = (ulonglong)uVar3;
				puVar8 = puVar8 + iVar5;
				iVar5 = (int)(uVar13 + lVar11);
				*(int *)(iVar5 + 0x194) = *(int *)(iVar5 + 0x194) - uVar3;
				*(uint *)(puVar8 + 0x18c) = *(int *)(puVar8 + 0x18c) - uVar3;
				if (*(int *)(iVar5 + 0x194) >> 6 == 0) {
					ppuVar12 = &toc;
					SyncPlrKill(uVar14, 0, uVar13, uVar14, uVar15, uVar13 + lVar11, lVar1, uVar17, in_stack_ffffffb8);
				} else {
					cVar2 = puVar8[0x15c];
					if (cVar2 == '\0') {
						ppuVar12 = &toc;
						PlaySfxLoc(0x313, (ulonglong)*puVar6, (ulonglong)*puVar7, uVar14, uVar15, iVar5, puVar7,
						    puVar10, in_stack_ffffffb8);
					} else {
						if (cVar2 == '\x01') {
							ppuVar12 = &toc;
							PlaySfxLoc(0x2a6, (ulonglong)*puVar6, (ulonglong)*puVar7, uVar14, uVar15, iVar5, puVar7,
							    puVar10, in_stack_ffffffb8);
						} else {
							if (cVar2 == '\x02') {
								ppuVar12 = &toc;
								PlaySfxLoc(0x23f, (ulonglong)*puVar6, (ulonglong)*puVar7, uVar14, uVar15, iVar5, puVar7,
								    puVar10, in_stack_ffffffb8);
							}
						}
					}
				}
				*(undefined4 *)ppuVar12[-0x1dbc] = 1;
			}
		}
	}
	return;
}

ulonglong ProcessObjects(char param_1, char param_2, char param_3, char param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined8 uVar6;
	ulonglong uVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	int iVar11;
	uint *puVar12;
	ulonglong uVar13;

	puVar5 = PTR_DAT_100f1e40;
	puVar4 = PTR_DAT_100f1e3c;
	puVar3 = PTR_DAT_100f1948;
	lVar10 = (longlong)param_4;
	lVar9 = (longlong)param_3;
	lVar8 = (longlong)param_2;
	uVar7 = SEXT18(param_1);
	iVar11 = 0;
	uVar13 = ZEXT48(PTR_DAT_100f1948);
	puVar12 = (uint *)PTR_DAT_100f1e40;
	while (true) {
		if (*(int *)puVar4 <= iVar11) {
			iVar11 = 0;
			while (iVar11 < *(int *)puVar4) {
				uVar1 = *(uint *)(puVar5 + iVar11 * 4);
				uVar7 = (ulonglong)uVar1;
				if (*(int *)(puVar3 + uVar1 * 0x78 + 0x30) == 0) {
					iVar11 = iVar11 + 1;
				} else {
					uVar7 = DeleteObject_(uVar1, iVar11);
					iVar11 = 0;
				}
			}
			return uVar7;
		}
		uVar7 = (ulonglong)*puVar12;
		uVar1 = *(uint *)(puVar3 + *puVar12 * 0x78);
		if (uVar1 < 0x5c)
			break;
		lVar8 = uVar13 + uVar7 * 0x78;
		iVar2 = (int)lVar8;
		if (*(int *)(iVar2 + 0x10) != 0) {
			lVar9 = lVar8 + 0x1c;
			*(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + 1;
			uVar7 = (ulonglong) * (uint *)(iVar2 + 0x1c);
			if (*(int *)(iVar2 + 0x18) <= (int)*(uint *)(iVar2 + 0x1c)) {
				lVar10 = lVar8 + 0x24;
				*(undefined4 *)lVar9 = 0;
				*(int *)(iVar2 + 0x24) = *(int *)(iVar2 + 0x24) + 1;
				uVar7 = (ulonglong) * (uint *)(iVar2 + 0x24);
				if (*(int *)(iVar2 + 0x20) < (int)*(uint *)(iVar2 + 0x24)) {
					*(undefined4 *)lVar10 = 1;
				}
			}
		}
		puVar12 = puVar12 + 1;
		iVar11 = iVar11 + 1;
	}
	// WARNING: Could not recover jumptable at 0x10085fa0. Too many branches
	// WARNING: Treating indirect jump as call
	uVar6 = (**(code **)(PTR_PTR_LAB_100f3498 + uVar1 * 4))(*(code **)(PTR_PTR_LAB_100f3498 + uVar1 * 4), lVar8, lVar9, lVar10, param_5, param_6, param_7, param_8);
	return uVar6;
}

void ObjSetMicro(longlong param_1, int param_2, longlong param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	int iVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	longlong lVar5;
	undefined uVar6;
	undefined uVar7;
	longlong lVar8;
	undefined uVar11;
	longlong lVar9;
	uint uVar10;
	ulonglong uVar12;
	undefined uVar13;
	undefined uVar14;
	undefined uVar15;
	undefined uVar16;
	undefined2 *puVar17;
	longlong lVar18;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f1a60;
	ppuVar4 = &toc;
	lVar8 = param_1 * 0xe0;
	uVar12 = (ulonglong) * (uint *)PTR_DAT_100f1a54;
	*(undefined2 *)(*(uint *)PTR_DAT_100f1a54 + (int)lVar8 + param_2 * 2) = (short)param_3;
	lVar5 = IsometricCoord(param_1, param_2);
	uVar13 = (undefined)uVar12;
	uVar16 = (undefined)param_8;
	uVar15 = (undefined)param_7;
	uVar14 = (undefined)param_6;
	uVar10 = (int)lVar5 << 5;
	uVar7 = (undefined)uVar10;
	lVar5 = (ulonglong) * (uint *)ppuVar4[-0x1d61] + (ulonglong)uVar10;
	uVar12 = FUN_100b8f7c((ulonglong) * (uint *)puVar3, ZEXT48(ppuVar4[-0x1d61]), (ulonglong)uVar10, lVar8,
	    uVar12, param_6, param_7, param_8, in_stack_ffffffb8);
	if (*ppuVar4[-0x1de5] == '\x04') {
		lVar18 = 2;
		lVar8 = uVar12 + (ulonglong)(uint)(((int)param_3 + -1) * 0x20);
		uVar6 = (undefined)lVar8;
		lVar9 = 0;
		do {
			uVar10 = (uint)lVar9;
			iVar2 = (int)lVar8;
			puVar1 = (undefined *)(iVar2 + (0xe - (uVar10 & 0xe)) * 2);
			puVar17 = (undefined2 *)lVar5;
			*puVar17 = CONCAT11(puVar1[1], *puVar1);
			puVar1 = (undefined *)(iVar2 + ((0xe - (uVar10 + 1 & 0xe)) + (uVar10 + 1 & 1)) * 2);
			puVar17[1] = CONCAT11(puVar1[1], *puVar1);
			puVar1 = (undefined *)(iVar2 + (0xe - (uVar10 + 2 & 0xe)) * 2);
			puVar17[2] = CONCAT11(puVar1[1], *puVar1);
			puVar1 = (undefined *)(iVar2 + ((0xe - (uVar10 + 3 & 0xe)) + (uVar10 + 3 & 1)) * 2);
			puVar17[3] = CONCAT11(puVar1[1], *puVar1);
			puVar1 = (undefined *)(iVar2 + (0xe - (uVar10 + 4 & 0xe)) * 2);
			puVar17[4] = CONCAT11(puVar1[1], *puVar1);
			puVar1 = (undefined *)(iVar2 + ((0xe - (uVar10 + 5 & 0xe)) + (uVar10 + 5 & 1)) * 2);
			puVar17[5] = CONCAT11(puVar1[1], *puVar1);
			puVar1 = (undefined *)(iVar2 + (0xe - (uVar10 + 6 & 0xe)) * 2);
			puVar17[6] = CONCAT11(puVar1[1], *puVar1);
			puVar1 = (undefined *)(iVar2 + ((0xe - (uVar10 + 7 & 0xe)) + (uVar10 + 7 & 1)) * 2);
			lVar9 = lVar9 + 8;
			uVar11 = (undefined)lVar9;
			puVar17[7] = CONCAT11(puVar1[1], *puVar1);
			lVar5 = lVar5 + 0x10;
			uVar7 = (undefined)lVar5;
			lVar18 = lVar18 + -1;
		} while (lVar18 != 0);
	} else {
		lVar8 = uVar12 + (param_3 + -1) * 0x14;
		uVar11 = (undefined)lVar8;
		puVar1 = (undefined *)lVar8;
		puVar17 = (undefined2 *)lVar5;
		*puVar17 = CONCAT11(puVar1[0x11], puVar1[0x10]);
		puVar17[1] = CONCAT11(puVar1[0x13], puVar1[0x12]);
		puVar17[2] = CONCAT11(puVar1[0xd], puVar1[0xc]);
		puVar17[3] = CONCAT11(puVar1[0xf], puVar1[0xe]);
		puVar17[4] = CONCAT11(puVar1[9], puVar1[8]);
		puVar17[5] = CONCAT11(puVar1[0xb], puVar1[10]);
		puVar17[6] = CONCAT11(puVar1[5], puVar1[4]);
		puVar17[7] = CONCAT11(puVar1[7], puVar1[6]);
		uVar13 = 9;
		puVar17[8] = CONCAT11(puVar1[1], *puVar1);
		uVar6 = puVar1[2];
		puVar17[9] = CONCAT11(puVar1[3], uVar6);
	}
	FUN_100b9100(*(int *)puVar3, uVar6, uVar7, uVar11, uVar13, uVar14, uVar15, uVar16, in_stack_ffffffb8);
	return;
}

void objects_set_door_piece(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined uVar1;
	undefined uVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined **ppuVar6;
	ulonglong uVar7;
	longlong lVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined uVar14;
	undefined uVar15;
	int iVar16;
	undefined4 in_stack_ffffffa8;

	puVar5 = PTR_DAT_100f1a60;
	puVar4 = PTR_DAT_100f1a4c;
	uVar9 = (undefined)param_2;
	uVar12 = (undefined)param_5;
	uVar11 = (undefined)param_4;
	uVar15 = (undefined)param_8;
	uVar14 = (undefined)param_7;
	uVar13 = (undefined)param_6;
	ppuVar6 = &toc;
	uVar7 = FUN_100b8f7c((ulonglong) * (uint *)PTR_DAT_100f1a60, param_2, param_3, param_4, param_5, param_6,
	    param_7, param_8, in_stack_ffffffa8);
	uVar10 = (undefined) * (int *)ppuVar6[-0x1d5f];
	iVar16 = (int)param_2;
	puVar3 = (undefined *)((int)uVar7 + ((int)*(short *)(*(int *)ppuVar6[-0x1d5f] + (int)param_1 * 0xe0 + iVar16 * 2) + -1) * 0x14 + 0x10);
	uVar1 = puVar3[1];
	uVar2 = *puVar3;
	lVar8 = IsometricCoord(param_1, iVar16);
	*(undefined2 *)(*(int *)puVar4 + (int)lVar8 * 0x20) = CONCAT11(uVar1, uVar2);
	uVar1 = puVar3[3];
	uVar2 = puVar3[2];
	lVar8 = IsometricCoord(param_1, iVar16);
	*(undefined2 *)(*(int *)puVar4 + (int)lVar8 * 0x20 + 2) = CONCAT11(uVar1, uVar2);
	FUN_100b9100(*(int *)puVar5, uVar9, uVar10, uVar11, uVar12, uVar13, uVar14, uVar15, in_stack_ffffffa8);
	return;
}

void ObjSetMini(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	ulonglong uVar4;
	undefined uVar5;
	undefined7 uVar6;
	undefined uVar7;
	undefined7 uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	longlong lVar13;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f1a64;
	uVar8 = (undefined7)((ulonglong)param_5 >> 8);
	uVar9 = (undefined)param_5;
	uVar6 = (undefined7)((ulonglong)param_4 >> 8);
	uVar7 = (undefined)param_4;
	uVar4 = FUN_100b8f7c((ulonglong) * (uint *)PTR_DAT_100f1a64, param_2, param_3, param_4, param_5, param_6,
	    param_7, param_8, in_stack_ffffffb8);
	puVar2 = (undefined *)((int)uVar4 + ((int)param_3 + -1) * 8);
	uVar5 = puVar2[3];
	uVar11 = puVar2[2];
	uVar10 = puVar2[5];
	uVar12 = puVar2[4];
	uVar1 = (int)param_2 * 2;
	uVar4 = (ulonglong)(uint)(param_1 << 1);
	lVar13 = (longlong)CONCAT11(puVar2[7], puVar2[6]) + 1;
	lVar13._7_1_ = (undefined)lVar13;
	ObjSetMicro(uVar4 + 0x10, uVar1 + 0x10, (longlong)CONCAT11(puVar2[1], *puVar2) + 1,
	    CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9), param_6, param_7, param_8, in_stack_ffffffb8);
	ObjSetMicro(uVar4 + 0x11, uVar1 + 0x10, (longlong)CONCAT11(uVar5, uVar11) + 1, CONCAT71(uVar6, uVar7),
	    CONCAT71(uVar8, uVar9), param_6, param_7, param_8, in_stack_ffffffb8);
	ObjSetMicro(uVar4 + 0x10, uVar1 + 0x11, (longlong)CONCAT11(uVar10, uVar12) + 1, CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9), param_6, param_7, param_8, in_stack_ffffffb8);
	uVar12 = (undefined)param_8;
	uVar11 = (undefined)param_7;
	uVar10 = (undefined)param_6;
	uVar5 = (undefined)((ulonglong)uVar1 + 0x11);
	ObjSetMicro(uVar4 + 0x11, (int)((ulonglong)uVar1 + 0x11), lVar13, CONCAT71(uVar6, uVar7),
	    CONCAT71(uVar8, uVar9), param_6, param_7, param_8, in_stack_ffffffb8);
	FUN_100b9100(*(int *)puVar3, uVar5, (undefined)lVar13, uVar7, uVar9, uVar10, uVar11, uVar12,
	    in_stack_ffffffb8);
	return;
}

void ObjL1Special(longlong param_1, int param_2, longlong param_3, int param_4)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	int iVar8;

	puVar4 = PTR_DAT_100f1a54;
	puVar3 = PTR_DAT_100f1a38;
	iVar8 = param_2 << 1;
	while (param_2 <= param_4) {
		lVar5 = (param_3 + 1) - param_1;
		lVar6 = param_1 * 0x70;
		lVar7 = param_1 * 0xe0;
		if ((int)param_1 <= (int)param_3) {
			do {
				iVar1 = (int)lVar6;
				*(undefined *)(param_2 + *(int *)puVar3 + iVar1) = 0;
				iVar2 = (int)lVar7;
				if (*(short *)(iVar8 + *(int *)puVar4 + iVar2) == 0xc) {
					*(undefined *)(param_2 + *(int *)puVar3 + iVar1) = 1;
				}
				if (*(short *)(iVar8 + *(int *)puVar4 + iVar2) == 0xb) {
					*(undefined *)(param_2 + *(int *)puVar3 + iVar1) = 2;
				}
				if (*(short *)(iVar8 + *(int *)puVar4 + iVar2) == 0x47) {
					*(undefined *)(param_2 + *(int *)puVar3 + iVar1) = 1;
				}
				if (*(short *)(iVar8 + *(int *)puVar4 + iVar2) == 0x103) {
					*(undefined *)(param_2 + *(int *)puVar3 + iVar1) = 5;
				}
				if (*(short *)(iVar8 + *(int *)puVar4 + iVar2) == 0xf9) {
					*(undefined *)(param_2 + *(int *)puVar3 + iVar1) = 2;
				}
				if (*(short *)(iVar8 + *(int *)puVar4 + iVar2) == 0x145) {
					*(undefined *)(param_2 + *(int *)puVar3 + iVar1) = 2;
				}
				if (*(short *)(iVar8 + *(int *)puVar4 + iVar2) == 0x141) {
					*(undefined *)(param_2 + *(int *)puVar3 + iVar1) = 1;
				}
				if (*(short *)(iVar8 + *(int *)puVar4 + iVar2) == 0xff) {
					*(undefined *)(param_2 + *(int *)puVar3 + iVar1) = 4;
				}
				if (*(short *)(iVar8 + *(int *)puVar4 + iVar2) == 0xd3) {
					*(undefined *)(param_2 + *(int *)puVar3 + iVar1) = 1;
				}
				if (*(short *)(iVar8 + *(int *)puVar4 + iVar2) == 0x158) {
					*(undefined *)(param_2 + *(int *)puVar3 + iVar1) = 2;
				}
				if (*(short *)(iVar8 + *(int *)puVar4 + iVar2) == 0x155) {
					*(undefined *)(param_2 + *(int *)puVar3 + iVar1) = 1;
				}
				if (*(short *)(iVar8 + *(int *)puVar4 + iVar2) == 0x14b) {
					*(undefined *)(param_2 + *(int *)puVar3 + iVar1) = 2;
				}
				if (*(short *)(iVar8 + *(int *)puVar4 + iVar2) == 0x1a2) {
					*(undefined *)(param_2 + *(int *)puVar3 + iVar1) = 1;
				}
				if (*(short *)(iVar8 + *(int *)puVar4 + iVar2) == 0x1a5) {
					*(undefined *)(param_2 + *(int *)puVar3 + iVar1) = 2;
				}
				lVar6 = lVar6 + 0x70;
				lVar7 = lVar7 + 0xe0;
				lVar5 = lVar5 + -1;
			} while (lVar5 != 0);
		}
		iVar8 = iVar8 + 2;
		param_2 = param_2 + 1;
	}
	return;
}

void ObjL2Special(longlong param_1, int param_2, longlong param_3, int param_4)

{
	short sVar1;
	int iVar2;
	int iVar3;
	undefined *puVar4;
	undefined *puVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	puVar5 = PTR_DAT_100f1a54;
	puVar4 = PTR_DAT_100f1a38;
	iVar10 = param_2 << 1;
	iVar11 = param_2;
	iVar9 = iVar10;
	while (iVar11 <= param_4) {
		lVar6 = (param_3 + 1) - param_1;
		lVar7 = param_1 * 0x70;
		lVar8 = param_1 * 0xe0;
		if ((int)param_1 <= (int)param_3) {
			do {
				iVar2 = (int)lVar7;
				*(undefined *)(iVar11 + *(int *)puVar4 + iVar2) = 0;
				iVar3 = (int)lVar8;
				if (*(short *)(iVar9 + *(int *)puVar5 + iVar3) == 0x21d) {
					*(undefined *)(iVar11 + *(int *)puVar4 + iVar2) = 5;
				}
				if (*(short *)(iVar9 + *(int *)puVar5 + iVar3) == 0xb2) {
					*(undefined *)(iVar11 + *(int *)puVar4 + iVar2) = 5;
				}
				if (*(short *)(iVar9 + *(int *)puVar5 + iVar3) == 0x227) {
					*(undefined *)(iVar11 + *(int *)puVar4 + iVar2) = 5;
				}
				if (*(short *)(iVar9 + *(int *)puVar5 + iVar3) == 0x21e) {
					*(undefined *)(iVar11 + *(int *)puVar4 + iVar2) = 6;
				}
				if (*(short *)(iVar9 + *(int *)puVar5 + iVar3) == 0x229) {
					*(undefined *)(iVar11 + *(int *)puVar4 + iVar2) = 6;
				}
				if (*(short *)(iVar9 + *(int *)puVar5 + iVar3) == 0xd) {
					*(undefined *)(iVar11 + *(int *)puVar4 + iVar2) = 5;
				}
				if (*(short *)(iVar9 + *(int *)puVar5 + iVar3) == 0x11) {
					*(undefined *)(iVar11 + *(int *)puVar4 + iVar2) = 6;
				}
				lVar7 = lVar7 + 0x70;
				lVar8 = lVar8 + 0xe0;
				lVar6 = lVar6 + -1;
			} while (lVar6 != 0);
		}
		iVar9 = iVar9 + 2;
		iVar11 = iVar11 + 1;
	}
	while (param_2 <= param_4) {
		lVar6 = (param_3 + 1) - param_1;
		lVar7 = param_1 * 0xe0;
		lVar8 = param_1 * 0x70;
		if ((int)param_1 <= (int)param_3) {
			do {
				iVar11 = (int)lVar8;
				if (*(short *)(iVar10 + *(int *)puVar5 + (int)lVar7) == 0x84) {
					*(undefined *)(param_2 + *(int *)puVar4 + iVar11 + 1) = 2;
					*(undefined *)(param_2 + *(int *)puVar4 + iVar11 + 2) = 1;
				}
				sVar1 = *(short *)(iVar10 + *(int *)puVar5 + (int)lVar7);
				if ((sVar1 == 0x87) || (sVar1 == 0x8b)) {
					*(undefined *)(param_2 + *(int *)puVar4 + iVar11 + 0x70) = 3;
					*(undefined *)(param_2 + *(int *)puVar4 + iVar11 + 0xe0) = 4;
				}
				lVar7 = lVar7 + 0xe0;
				lVar8 = lVar8 + 0x70;
				lVar6 = lVar6 + -1;
			} while (lVar6 != 0);
		}
		iVar10 = iVar10 + 2;
		param_2 = param_2 + 1;
	}
	return;
}

void DoorSet(int param_1, longlong param_2, int param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	short sVar1;
	undefined *puVar2;
	ulonglong uVar3;
	undefined4 in_stack_ffffffb8;

	puVar2 = PTR_DAT_100f1948;
	uVar3 = (ulonglong) * (uint *)PTR_DAT_100f1a54;
	sVar1 = *(short *)(*(uint *)PTR_DAT_100f1a54 + (int)param_2 * 0xe0 + param_3 * 2);
	if (sVar1 == 0x2b) {
		ObjSetMicro(param_2, param_3, 0x188, uVar3, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	if (sVar1 == 0x2d) {
		ObjSetMicro(param_2, param_3, 0x18a, uVar3, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	if ((sVar1 == 0x32) && (*(int *)(puVar2 + param_1 * 0x78) == 1)) {
		ObjSetMicro(param_2, param_3, 0x19b, uVar3, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	if ((sVar1 == 0x32) && (*(int *)(puVar2 + param_1 * 0x78) == 2)) {
		ObjSetMicro(param_2, param_3, 0x19c, uVar3, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	if (sVar1 == 0x36) {
		ObjSetMicro(param_2, param_3, 0x18d, uVar3, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	if (sVar1 == 0x37) {
		ObjSetMicro(param_2, param_3, 0x18e, uVar3, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	if (sVar1 == 0x3d) {
		ObjSetMicro(param_2, param_3, 399, uVar3, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	if (sVar1 == 0x43) {
		ObjSetMicro(param_2, param_3, 400, uVar3, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	if (sVar1 == 0x44) {
		ObjSetMicro(param_2, param_3, 0x191, uVar3, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	if (sVar1 == 0x45) {
		ObjSetMicro(param_2, param_3, 0x193, uVar3, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	if (sVar1 == 0x46) {
		ObjSetMicro(param_2, param_3, 0x194, uVar3, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	if (sVar1 == 0x48) {
		ObjSetMicro(param_2, param_3, 0x196, uVar3, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	if (sVar1 == 0xd4) {
		ObjSetMicro(param_2, param_3, 0x197, uVar3, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	if (sVar1 == 0x162) {
		ObjSetMicro(param_2, param_3, 0x199, uVar3, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	if (sVar1 == 0x163) {
		ObjSetMicro(param_2, param_3, 0x19a, uVar3, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	if (sVar1 == 0x19b) {
		ObjSetMicro(param_2, param_3, 0x18c, uVar3, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	if (sVar1 == 0x19c) {
		ObjSetMicro(param_2, param_3, 0x18c, uVar3, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	return;
}

ulonglong RedoPlayerVision(char param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	ulonglong uVar2;
	int iVar3;
	undefined *puVar4;

	puVar1 = PTR_DAT_100f17ec;
	uVar2 = SEXT18(param_1);
	iVar3 = 0;
	puVar4 = PTR_DAT_100f1828;
	do {
		if ((puVar4[0x1d] != '\0') && (uVar2 = (ulonglong)(byte)*puVar1, (uint)(byte)*puVar1 == *(uint *)(puVar4 + 0x34))) {
			uVar2 = ChangeVisionXY(*(int *)(puVar4 + 0xa0), *(undefined4 *)(puVar4 + 0x38),
			    *(undefined4 *)(puVar4 + 0x3c));
		}
		iVar3 = iVar3 + 1;
		puVar4 = puVar4 + 0x55ec;
	} while (iVar3 < 4);
	return uVar2;
}

void OperateL1RDoor(int param_1, uint param_2, int param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	uint uVar3;
	int *piVar4;
	undefined *puVar5;
	uint *puVar6;
	undefined *puVar7;
	int iVar8;
	int iVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined8 uVar12;
	undefined **ppuVar13;
	undefined uVar16;
	undefined8 uVar14;
	longlong lVar15;
	ulonglong uVar17;
	undefined uVar20;
	undefined8 uVar18;
	longlong lVar19;
	undefined uVar21;
	undefined uVar23;
	ulonglong uVar22;
	undefined7 uVar24;
	undefined uVar25;
	undefined uVar26;
	undefined uVar27;
	undefined uVar28;
	ulonglong uVar29;
	undefined4 in_stack_ffffff98;

	puVar11 = PTR_DAT_100f1f60;
	puVar7 = PTR_DAT_100f1948;
	puVar10 = PTR_DAT_100f1824;
	uVar24 = (undefined7)((ulonglong)param_5 >> 8);
	uVar25 = (undefined)param_5;
	ppuVar13 = &toc;
	uVar29 = ZEXT48(PTR_DAT_100f1948);
	iVar9 = (int)((longlong)(int)param_2 * 0x78);
	piVar4 = (int *)(PTR_DAT_100f1948 + iVar9 + 100);
	if (*piVar4 == 2) {
		if (*(int *)PTR_DAT_100f1f60 == 0) {
			PlaySfxLoc(0x13, (ulonglong) * (uint *)(PTR_DAT_100f1948 + iVar9 + 4),
			    (ulonglong) * (uint *)(PTR_DAT_100f1948 + iVar9 + 8), param_4, param_5, param_6,
			    param_7, param_8, in_stack_ffffff98);
		}
	} else {
		puVar5 = PTR_DAT_100f1948 + iVar9;
		uVar1 = *(uint *)(puVar5 + 8);
		uVar21 = (undefined)uVar1;
		puVar6 = (uint *)(PTR_DAT_100f1948 + iVar9 + 4);
		uVar3 = *puVar6;
		uVar17 = (ulonglong)uVar3;
		if (*piVar4 == 0) {
			if ((param_1 == *(int *)PTR_DAT_100f1824) && (param_3 != 0)) {
				ppuVar13 = &toc;
				NetSendCmdParam1(1, 0x2b, (ulonglong)(param_2 & 0xffff), param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffff98);
			}
			if (*(int *)puVar11 == 0) {
				PlaySfxLoc(0x14, (ulonglong)*puVar6, (ulonglong) * (uint *)(puVar5 + 8), param_4,
				    CONCAT71(uVar24, uVar25), param_6, param_7, param_8, in_stack_ffffff98);
			}
			ObjSetMicro(uVar17, uVar1, 0x18b, param_4, CONCAT71(uVar24, uVar25), param_6, param_7, param_8,
			    in_stack_ffffff98);
			*(undefined *)(*(int *)ppuVar13[-0x1d66] + uVar3 * 0x70 + uVar1) = 8;
			objects_set_door_piece(uVar17, (ulonglong)uVar1 - 1, 8, param_4, CONCAT71(uVar24, uVar25), param_6, param_7,
			    param_8, in_stack_ffffff98);
			uVar28 = (undefined)param_8;
			uVar27 = (undefined)param_7;
			uVar26 = (undefined)param_6;
			uVar23 = (undefined)param_4;
			puVar7 = puVar7 + iVar9;
			uVar20 = (undefined)(uVar17 - 1);
			*(int *)(puVar7 + 0x24) = *(int *)(puVar7 + 0x24) + 2;
			*(undefined4 *)(puVar7 + 0x44) = 1;
			uVar16 = DoorSet(param_2, uVar17 - 1, uVar1, param_4, CONCAT71(uVar24, uVar25), param_6, param_7, param_8, in_stack_ffffff98);
			*piVar4 = 1;
			puVar7[0x40] = 2;
			RedoPlayerVision(uVar16, uVar20, uVar21, uVar23, uVar25, uVar26, uVar27, uVar28, in_stack_ffffff98);
		} else {
			if (*(int *)PTR_DAT_100f1f60 == 0) {
				ppuVar13 = &toc;
				PlaySfxLoc(0x13, uVar17, (ulonglong)uVar1, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffff98);
			}
			iVar8 = uVar3 * 0x70 + uVar1;
			uVar22 = (ulonglong) * (uint *)ppuVar13[-0x1d9f];
			uVar14 = countLeadingZeros(-(int)*(char *)(*(int *)ppuVar13[-0x1da3] + iVar8));
			uVar18 = countLeadingZeros(-(int)*(short *)(*(uint *)ppuVar13[-0x1d9f] + uVar3 * 0xe0 + uVar1 * 2));
			uVar12 = countLeadingZeros(-(int)*(char *)(*(int *)ppuVar13[-0x1d8c] + iVar8));
			if (((uint)uVar14 >> 5 & 0xff & (uint)uVar18 >> 5 & 0xff & (uint)uVar12 >> 5 & 0xff) == 0) {
				*piVar4 = 2;
			} else {
				if ((param_1 == *(int *)puVar10) && (param_3 != 0)) {
					NetSendCmdParam1(1, 0x2c, (ulonglong)(param_2 & 0xffff), uVar22, CONCAT71(uVar24, uVar25), param_6,
					    param_7, param_8, in_stack_ffffff98);
				}
				puVar7 = puVar7 + iVar9;
				*piVar4 = 0;
				puVar7[0x40] = 3;
				ObjSetMicro(uVar17, uVar1, (ulonglong) * (uint *)(puVar7 + 0x58), uVar22, CONCAT71(uVar24, uVar25), param_6, param_7, param_8, in_stack_ffffff98);
				uVar26 = (undefined)param_8;
				uVar23 = (undefined)param_7;
				uVar20 = (undefined)param_6;
				uVar16 = (undefined)uVar22;
				uVar2 = *(uint *)(puVar7 + 0x5c);
				uVar21 = (undefined)uVar2;
				if (uVar2 == 0x32) {
					if (*(short *)(*(int *)ppuVar13[-0x1d5f] + uVar3 * 0xe0 + uVar1 * 2 + -0xe0) == 0x18c) {
						uVar21 = 0x9b;
						ObjSetMicro(uVar17 - 1, uVar1, 0x19b, uVar22, CONCAT71(uVar24, uVar25), param_6, param_7,
						    param_8, in_stack_ffffff98);
					} else {
						ObjSetMicro(uVar17 - 1, uVar1, (ulonglong)uVar2, uVar22, CONCAT71(uVar24, uVar25), param_6,
						    param_7, param_8, in_stack_ffffff98);
					}
				} else {
					ObjSetMicro(uVar17 - 1, uVar1, (ulonglong)uVar2, uVar22, CONCAT71(uVar24, uVar25), param_6,
					    param_7, param_8, in_stack_ffffff98);
				}
				lVar19 = uVar29 + (longlong)(int)param_2 * 0x78;
				iVar9 = (int)lVar19;
				lVar15 = (ulonglong) * (uint *)(iVar9 + 0x24) - 2;
				*(undefined4 *)(iVar9 + 0x24) = (int)lVar15;
				*(undefined4 *)(iVar9 + 0x44) = 0;
				RedoPlayerVision((char)lVar15, (char)lVar19, uVar21, uVar16, uVar25, uVar20, uVar23, uVar26,
				    in_stack_ffffff98);
			}
		}
	}
	return;
}

void OperateL1LDoor(int param_1, uint param_2, int param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	uint uVar3;
	int *piVar4;
	undefined *puVar5;
	uint *puVar6;
	undefined *puVar7;
	int iVar8;
	int iVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined8 uVar12;
	undefined **ppuVar13;
	undefined **ppuVar14;
	undefined uVar17;
	undefined8 uVar15;
	longlong lVar16;
	ulonglong uVar18;
	undefined8 uVar19;
	longlong lVar20;
	ulonglong uVar21;
	undefined uVar22;
	undefined uVar23;
	undefined7 uVar24;
	undefined uVar25;
	undefined uVar26;
	undefined uVar27;
	undefined uVar28;
	ulonglong uVar29;
	undefined4 in_stack_ffffff98;

	puVar11 = PTR_DAT_100f1f60;
	puVar7 = PTR_DAT_100f1948;
	puVar10 = PTR_DAT_100f1824;
	uVar24 = (undefined7)((ulonglong)param_5 >> 8);
	uVar25 = (undefined)param_5;
	ppuVar13 = &toc;
	ppuVar14 = &toc;
	uVar29 = ZEXT48(PTR_DAT_100f1948);
	iVar9 = (int)((longlong)(int)param_2 * 0x78);
	piVar4 = (int *)(PTR_DAT_100f1948 + iVar9 + 100);
	if (*piVar4 == 2) {
		if (*(int *)PTR_DAT_100f1f60 == 0) {
			PlaySfxLoc(0x13, (ulonglong) * (uint *)(PTR_DAT_100f1948 + iVar9 + 4),
			    (ulonglong) * (uint *)(PTR_DAT_100f1948 + iVar9 + 8), param_4, param_5, param_6,
			    param_7, param_8, in_stack_ffffff98);
		}
	} else {
		puVar5 = PTR_DAT_100f1948 + iVar9;
		uVar1 = *(uint *)(puVar5 + 8);
		uVar21 = (ulonglong)uVar1;
		puVar6 = (uint *)(PTR_DAT_100f1948 + iVar9 + 4);
		uVar3 = *puVar6;
		uVar18 = (ulonglong)uVar3;
		uVar18._7_1_ = (undefined)uVar3;
		if (*piVar4 == 0) {
			if ((param_1 == *(int *)PTR_DAT_100f1824) && (param_3 != 0)) {
				ppuVar13 = &toc;
				NetSendCmdParam1(1, 0x2b, (ulonglong)(param_2 & 0xffff), param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffff98);
			}
			if (*(int *)puVar11 == 0) {
				PlaySfxLoc(0x14, (ulonglong)*puVar6, (ulonglong) * (uint *)(puVar5 + 8), param_4,
				    CONCAT71(uVar24, uVar25), param_6, param_7, param_8, in_stack_ffffff98);
			}
			if (*(int *)(puVar7 + iVar9 + 0x58) == 0xd6) {
				ObjSetMicro(uVar18, uVar1, 0x198, param_4, CONCAT71(uVar24, uVar25), param_6, param_7, param_8,
				    in_stack_ffffff98);
			} else {
				ObjSetMicro(uVar18, uVar1, 0x189, param_4, CONCAT71(uVar24, uVar25), param_6, param_7, param_8,
				    in_stack_ffffff98);
			}
			*(undefined *)(*(int *)ppuVar13[-0x1d66] + uVar3 * 0x70 + uVar1) = 7;
			objects_set_door_piece(uVar18 - 1, uVar21, 7, param_4, CONCAT71(uVar24, uVar25), param_6, param_7, param_8,
			    in_stack_ffffff98);
			uVar28 = (undefined)param_8;
			uVar27 = (undefined)param_7;
			uVar26 = (undefined)param_6;
			uVar23 = (undefined)param_4;
			puVar7 = puVar7 + iVar9;
			uVar22 = (undefined)(uVar21 - 1);
			*(int *)(puVar7 + 0x24) = *(int *)(puVar7 + 0x24) + 2;
			*(undefined4 *)(puVar7 + 0x44) = 1;
			uVar17 = DoorSet(param_2, uVar18, (int)(uVar21 - 1), param_4, CONCAT71(uVar24, uVar25), param_6, param_7, param_8, in_stack_ffffff98);
			*piVar4 = 1;
			puVar7[0x40] = 2;
			RedoPlayerVision(uVar17, (undefined)uVar18, uVar22, uVar23, uVar25, uVar26, uVar27, uVar28,
			    in_stack_ffffff98);
		} else {
			if (*(int *)PTR_DAT_100f1f60 == 0) {
				ppuVar14 = ppuVar13;
				PlaySfxLoc(0x13, uVar18, uVar21, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff98);
			}
			iVar8 = uVar3 * 0x70 + uVar1;
			uVar21 = (ulonglong) * (uint *)ppuVar14[-0x1d9f];
			uVar15 = countLeadingZeros(-(int)*(char *)(*(int *)ppuVar14[-0x1da3] + iVar8));
			uVar19 = countLeadingZeros(-(int)*(short *)(*(uint *)ppuVar14[-0x1d9f] + uVar3 * 0xe0 + uVar1 * 2));
			uVar12 = countLeadingZeros(-(int)*(char *)(*(int *)ppuVar14[-0x1d8c] + iVar8));
			if (((uint)uVar15 >> 5 & 0xff & (uint)uVar19 >> 5 & 0xff & (uint)uVar12 >> 5 & 0xff) == 0) {
				*piVar4 = 2;
			} else {
				if ((param_1 == *(int *)puVar10) && (param_3 != 0)) {
					NetSendCmdParam1(1, 0x2c, (ulonglong)(param_2 & 0xffff), uVar21, CONCAT71(uVar24, uVar25), param_6,
					    param_7, param_8, in_stack_ffffff98);
				}
				puVar7 = puVar7 + iVar9;
				*piVar4 = 0;
				puVar7[0x40] = 3;
				ObjSetMicro(uVar18, uVar1, (ulonglong) * (uint *)(puVar7 + 0x58), uVar21, CONCAT71(uVar24, uVar25), param_6, param_7, param_8, in_stack_ffffff98);
				uVar26 = (undefined)param_8;
				uVar23 = (undefined)param_7;
				uVar22 = (undefined)param_6;
				uVar17 = (undefined)uVar21;
				uVar2 = *(uint *)(puVar7 + 0x5c);
				uVar18._7_1_ = (undefined)uVar2;
				if (uVar2 == 0x32) {
					if (*(short *)(*(int *)ppuVar14[-0x1d5f] + uVar3 * 0xe0 + uVar1 * 2 + -2) == 0x18c) {
						uVar18._7_1_ = 0x9c;
						ObjSetMicro(uVar18, uVar1 - 1, 0x19c, uVar21, CONCAT71(uVar24, uVar25), param_6, param_7,
						    param_8, in_stack_ffffff98);
					} else {
						ObjSetMicro(uVar18, uVar1 - 1, (ulonglong)uVar2, uVar21, CONCAT71(uVar24, uVar25), param_6,
						    param_7, param_8, in_stack_ffffff98);
					}
				} else {
					ObjSetMicro(uVar18, uVar1 - 1, (ulonglong)uVar2, uVar21, CONCAT71(uVar24, uVar25), param_6,
					    param_7, param_8, in_stack_ffffff98);
				}
				lVar20 = uVar29 + (longlong)(int)param_2 * 0x78;
				iVar9 = (int)lVar20;
				lVar16 = (ulonglong) * (uint *)(iVar9 + 0x24) - 2;
				*(undefined4 *)(iVar9 + 0x24) = (int)lVar16;
				*(undefined4 *)(iVar9 + 0x44) = 0;
				RedoPlayerVision((char)lVar16, (char)lVar20, (undefined)uVar18, uVar17, uVar25, uVar22, uVar23, uVar26,
				    in_stack_ffffff98);
			}
		}
	}
	return;
}

void OperateL2RDoor(int param_1, uint param_2, int param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	int iVar3;
	uint uVar4;
	int *piVar5;
	undefined *puVar6;
	uint *puVar7;
	int iVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined8 uVar12;
	undefined **ppuVar13;
	undefined8 uVar14;
	ulonglong uVar15;
	longlong lVar16;
	undefined8 uVar17;
	longlong lVar18;
	undefined uVar19;
	undefined uVar21;
	ulonglong uVar20;
	undefined uVar22;
	undefined uVar23;
	undefined uVar24;
	undefined uVar25;
	undefined uVar26;
	ulonglong uVar27;
	undefined4 in_stack_ffffff98;

	puVar11 = PTR_DAT_100f1f60;
	puVar9 = PTR_DAT_100f1948;
	puVar10 = PTR_DAT_100f1824;
	ppuVar13 = &toc;
	uVar27 = ZEXT48(PTR_DAT_100f1948);
	iVar3 = (int)((longlong)(int)param_2 * 0x78);
	piVar5 = (int *)(PTR_DAT_100f1948 + iVar3 + 100);
	if (*piVar5 == 2) {
		if (*(int *)PTR_DAT_100f1f60 == 0) {
			PlaySfxLoc(0x13, (ulonglong) * (uint *)(PTR_DAT_100f1948 + iVar3 + 4),
			    (ulonglong) * (uint *)(PTR_DAT_100f1948 + iVar3 + 8), param_4, param_5, param_6,
			    param_7, param_8, in_stack_ffffff98);
		}
	} else {
		puVar6 = PTR_DAT_100f1948 + iVar3;
		uVar1 = *(uint *)(puVar6 + 8);
		uVar19 = (undefined)uVar1;
		puVar7 = (uint *)(PTR_DAT_100f1948 + iVar3 + 4);
		uVar4 = *puVar7;
		uVar15 = (ulonglong)uVar4;
		if (*piVar5 == 0) {
			if ((param_1 == *(int *)PTR_DAT_100f1824) && (param_3 != 0)) {
				NetSendCmdParam1(1, 0x2b, (ulonglong)(param_2 & 0xffff), param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffff98);
			}
			if (*(int *)puVar11 == 0) {
				PlaySfxLoc(0x14, (ulonglong)*puVar7, (ulonglong) * (uint *)(puVar6 + 8), param_4, param_5,
				    param_6, param_7, param_8, in_stack_ffffff98);
			}
			uVar25 = (undefined)param_8;
			uVar23 = (undefined)param_7;
			uVar22 = (undefined)param_6;
			uVar21 = (undefined)param_5;
			uVar19 = (undefined)param_4;
			ObjSetMicro(uVar15, uVar1, 0x11, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff98);
			lVar18 = uVar27 + (longlong)(int)param_2 * 0x78;
			iVar3 = (int)lVar18;
			lVar16 = (ulonglong) * (uint *)(iVar3 + 0x24) + 2;
			*(undefined4 *)(iVar3 + 0x24) = (int)lVar16;
			*(undefined4 *)(iVar3 + 0x44) = 1;
			*piVar5 = 1;
			*(undefined *)(iVar3 + 0x40) = 2;
			RedoPlayerVision(1, (char)lVar16, (char)lVar18, uVar19, uVar21, uVar22, uVar23, uVar25, in_stack_ffffff98);
		} else {
			if (*(int *)PTR_DAT_100f1f60 == 0) {
				ppuVar13 = &toc;
				PlaySfxLoc(0x13, uVar15, (ulonglong)uVar1, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffff98);
			}
			uVar20 = ZEXT48(ppuVar13[-0x1d9f]);
			iVar8 = uVar4 * 0x70 + uVar1;
			uVar2 = *(uint *)ppuVar13[-0x1d9f];
			uVar27 = (ulonglong)uVar2;
			uVar14 = countLeadingZeros(-(int)*(char *)(*(int *)ppuVar13[-0x1da3] + iVar8));
			uVar17 = countLeadingZeros(-(int)*(short *)(uVar2 + uVar4 * 0xe0 + uVar1 * 2));
			uVar12 = countLeadingZeros(-(int)*(char *)(*(int *)ppuVar13[-0x1d8c] + iVar8));
			if (((uint)uVar14 >> 5 & 0xff & (uint)uVar17 >> 5 & 0xff & (uint)uVar12 >> 5 & 0xff) == 0) {
				*piVar5 = 2;
			} else {
				if ((param_1 == *(int *)puVar10) && (param_3 != 0)) {
					NetSendCmdParam1(1, 0x2c, (ulonglong)(param_2 & 0xffff), uVar27, uVar20, param_6, param_7, param_8,
					    in_stack_ffffff98);
				}
				uVar26 = (undefined)param_8;
				uVar24 = (undefined)param_7;
				uVar25 = (undefined)param_6;
				uVar23 = (undefined)uVar20;
				uVar22 = (undefined)uVar27;
				puVar9 = puVar9 + iVar3;
				*piVar5 = 0;
				puVar9[0x40] = 3;
				uVar21 = 0x1c;
				ObjSetMicro(uVar15, uVar1, 0x21c, uVar27, uVar20, param_6, param_7, param_8, in_stack_ffffff98);
				iVar3 = *(int *)(puVar9 + 0x24);
				*(int *)(puVar9 + 0x24) = iVar3 + -2;
				*(undefined4 *)(puVar9 + 0x44) = 0;
				RedoPlayerVision((char)iVar3, uVar19, uVar21, uVar22, uVar23, uVar25, uVar24, uVar26, in_stack_ffffff98);
			}
		}
	}
	return;
}

void OperateL2LDoor(int param_1, uint param_2, int param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	int iVar3;
	uint uVar4;
	int *piVar5;
	undefined *puVar6;
	uint *puVar7;
	int iVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined8 uVar12;
	undefined **ppuVar13;
	undefined8 uVar14;
	ulonglong uVar15;
	longlong lVar16;
	undefined8 uVar17;
	longlong lVar18;
	undefined uVar19;
	undefined uVar21;
	ulonglong uVar20;
	undefined uVar22;
	undefined uVar23;
	undefined uVar24;
	undefined uVar25;
	undefined uVar26;
	ulonglong uVar27;
	undefined4 in_stack_ffffff98;

	puVar11 = PTR_DAT_100f1f60;
	puVar9 = PTR_DAT_100f1948;
	puVar10 = PTR_DAT_100f1824;
	ppuVar13 = &toc;
	uVar27 = ZEXT48(PTR_DAT_100f1948);
	iVar3 = (int)((longlong)(int)param_2 * 0x78);
	piVar5 = (int *)(PTR_DAT_100f1948 + iVar3 + 100);
	if (*piVar5 == 2) {
		if (*(int *)PTR_DAT_100f1f60 == 0) {
			PlaySfxLoc(0x13, (ulonglong) * (uint *)(PTR_DAT_100f1948 + iVar3 + 4),
			    (ulonglong) * (uint *)(PTR_DAT_100f1948 + iVar3 + 8), param_4, param_5, param_6,
			    param_7, param_8, in_stack_ffffff98);
		}
	} else {
		puVar6 = PTR_DAT_100f1948 + iVar3;
		uVar1 = *(uint *)(puVar6 + 8);
		uVar19 = (undefined)uVar1;
		puVar7 = (uint *)(PTR_DAT_100f1948 + iVar3 + 4);
		uVar4 = *puVar7;
		uVar15 = (ulonglong)uVar4;
		if (*piVar5 == 0) {
			if ((param_1 == *(int *)PTR_DAT_100f1824) && (param_3 != 0)) {
				NetSendCmdParam1(1, 0x2b, (ulonglong)(param_2 & 0xffff), param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffff98);
			}
			if (*(int *)puVar11 == 0) {
				PlaySfxLoc(0x14, (ulonglong)*puVar7, (ulonglong) * (uint *)(puVar6 + 8), param_4, param_5,
				    param_6, param_7, param_8, in_stack_ffffff98);
			}
			uVar25 = (undefined)param_8;
			uVar23 = (undefined)param_7;
			uVar22 = (undefined)param_6;
			uVar21 = (undefined)param_5;
			uVar19 = (undefined)param_4;
			ObjSetMicro(uVar15, uVar1, 0xd, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff98);
			lVar18 = uVar27 + (longlong)(int)param_2 * 0x78;
			iVar3 = (int)lVar18;
			lVar16 = (ulonglong) * (uint *)(iVar3 + 0x24) + 2;
			*(undefined4 *)(iVar3 + 0x24) = (int)lVar16;
			*(undefined4 *)(iVar3 + 0x44) = 1;
			*piVar5 = 1;
			*(undefined *)(iVar3 + 0x40) = 2;
			RedoPlayerVision(1, (char)lVar16, (char)lVar18, uVar19, uVar21, uVar22, uVar23, uVar25, in_stack_ffffff98);
		} else {
			if (*(int *)PTR_DAT_100f1f60 == 0) {
				ppuVar13 = &toc;
				PlaySfxLoc(0x13, uVar15, (ulonglong)uVar1, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffff98);
			}
			uVar20 = ZEXT48(ppuVar13[-0x1d9f]);
			iVar8 = uVar4 * 0x70 + uVar1;
			uVar2 = *(uint *)ppuVar13[-0x1d9f];
			uVar27 = (ulonglong)uVar2;
			uVar14 = countLeadingZeros(-(int)*(char *)(*(int *)ppuVar13[-0x1da3] + iVar8));
			uVar17 = countLeadingZeros(-(int)*(short *)(uVar2 + uVar4 * 0xe0 + uVar1 * 2));
			uVar12 = countLeadingZeros(-(int)*(char *)(*(int *)ppuVar13[-0x1d8c] + iVar8));
			if (((uint)uVar14 >> 5 & 0xff & (uint)uVar17 >> 5 & 0xff & (uint)uVar12 >> 5 & 0xff) == 0) {
				*piVar5 = 2;
			} else {
				if ((param_1 == *(int *)puVar10) && (param_3 != 0)) {
					NetSendCmdParam1(1, 0x2c, (ulonglong)(param_2 & 0xffff), uVar27, uVar20, param_6, param_7, param_8,
					    in_stack_ffffff98);
				}
				uVar26 = (undefined)param_8;
				uVar24 = (undefined)param_7;
				uVar25 = (undefined)param_6;
				uVar23 = (undefined)uVar20;
				uVar22 = (undefined)uVar27;
				puVar9 = puVar9 + iVar3;
				*piVar5 = 0;
				puVar9[0x40] = 3;
				uVar21 = 0x1a;
				ObjSetMicro(uVar15, uVar1, 0x21a, uVar27, uVar20, param_6, param_7, param_8, in_stack_ffffff98);
				iVar3 = *(int *)(puVar9 + 0x24);
				*(int *)(puVar9 + 0x24) = iVar3 + -2;
				*(undefined4 *)(puVar9 + 0x44) = 0;
				RedoPlayerVision((char)iVar3, uVar19, uVar21, uVar22, uVar23, uVar25, uVar24, uVar26, in_stack_ffffff98);
			}
		}
	}
	return;
}

void OperateL3RDoor(int param_1, uint param_2, int param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	int iVar3;
	uint uVar4;
	int *piVar5;
	undefined *puVar6;
	uint *puVar7;
	int iVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined8 uVar12;
	undefined **ppuVar13;
	undefined8 uVar14;
	ulonglong uVar15;
	longlong lVar16;
	undefined8 uVar17;
	longlong lVar18;
	undefined uVar19;
	undefined uVar21;
	ulonglong uVar20;
	undefined uVar22;
	undefined uVar23;
	undefined uVar24;
	undefined uVar25;
	undefined uVar26;
	ulonglong uVar27;
	undefined4 in_stack_ffffff98;

	puVar11 = PTR_DAT_100f1f60;
	puVar9 = PTR_DAT_100f1948;
	puVar10 = PTR_DAT_100f1824;
	ppuVar13 = &toc;
	uVar27 = ZEXT48(PTR_DAT_100f1948);
	iVar3 = (int)((longlong)(int)param_2 * 0x78);
	piVar5 = (int *)(PTR_DAT_100f1948 + iVar3 + 100);
	if (*piVar5 == 2) {
		if (*(int *)PTR_DAT_100f1f60 == 0) {
			PlaySfxLoc(0x13, (ulonglong) * (uint *)(PTR_DAT_100f1948 + iVar3 + 4),
			    (ulonglong) * (uint *)(PTR_DAT_100f1948 + iVar3 + 8), param_4, param_5, param_6,
			    param_7, param_8, in_stack_ffffff98);
		}
	} else {
		puVar6 = PTR_DAT_100f1948 + iVar3;
		uVar1 = *(uint *)(puVar6 + 8);
		uVar19 = (undefined)uVar1;
		puVar7 = (uint *)(PTR_DAT_100f1948 + iVar3 + 4);
		uVar4 = *puVar7;
		uVar15 = (ulonglong)uVar4;
		if (*piVar5 == 0) {
			if ((param_1 == *(int *)PTR_DAT_100f1824) && (param_3 != 0)) {
				NetSendCmdParam1(1, 0x2b, (ulonglong)(param_2 & 0xffff), param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffff98);
			}
			if (*(int *)puVar11 == 0) {
				PlaySfxLoc(0x14, (ulonglong)*puVar7, (ulonglong) * (uint *)(puVar6 + 8), param_4, param_5,
				    param_6, param_7, param_8, in_stack_ffffff98);
			}
			uVar25 = (undefined)param_8;
			uVar23 = (undefined)param_7;
			uVar22 = (undefined)param_6;
			uVar21 = (undefined)param_5;
			uVar19 = (undefined)param_4;
			ObjSetMicro(uVar15, uVar1, 0x21d, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff98);
			lVar18 = uVar27 + (longlong)(int)param_2 * 0x78;
			iVar3 = (int)lVar18;
			lVar16 = (ulonglong) * (uint *)(iVar3 + 0x24) + 2;
			*(undefined4 *)(iVar3 + 0x24) = (int)lVar16;
			*(undefined4 *)(iVar3 + 0x44) = 1;
			*piVar5 = 1;
			*(undefined *)(iVar3 + 0x40) = 2;
			RedoPlayerVision(1, (char)lVar16, (char)lVar18, uVar19, uVar21, uVar22, uVar23, uVar25, in_stack_ffffff98);
		} else {
			if (*(int *)PTR_DAT_100f1f60 == 0) {
				ppuVar13 = &toc;
				PlaySfxLoc(0x13, uVar15, (ulonglong)uVar1, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffff98);
			}
			uVar20 = ZEXT48(ppuVar13[-0x1d9f]);
			iVar8 = uVar4 * 0x70 + uVar1;
			uVar2 = *(uint *)ppuVar13[-0x1d9f];
			uVar27 = (ulonglong)uVar2;
			uVar14 = countLeadingZeros(-(int)*(char *)(*(int *)ppuVar13[-0x1da3] + iVar8));
			uVar17 = countLeadingZeros(-(int)*(short *)(uVar2 + uVar4 * 0xe0 + uVar1 * 2));
			uVar12 = countLeadingZeros(-(int)*(char *)(*(int *)ppuVar13[-0x1d8c] + iVar8));
			if (((uint)uVar14 >> 5 & 0xff & (uint)uVar17 >> 5 & 0xff & (uint)uVar12 >> 5 & 0xff) == 0) {
				*piVar5 = 2;
			} else {
				if ((param_1 == *(int *)puVar10) && (param_3 != 0)) {
					NetSendCmdParam1(1, 0x2c, (ulonglong)(param_2 & 0xffff), uVar27, uVar20, param_6, param_7, param_8,
					    in_stack_ffffff98);
				}
				uVar26 = (undefined)param_8;
				uVar24 = (undefined)param_7;
				uVar25 = (undefined)param_6;
				uVar23 = (undefined)uVar20;
				uVar22 = (undefined)uVar27;
				puVar9 = puVar9 + iVar3;
				*piVar5 = 0;
				puVar9[0x40] = 3;
				uVar21 = 0x16;
				ObjSetMicro(uVar15, uVar1, 0x216, uVar27, uVar20, param_6, param_7, param_8, in_stack_ffffff98);
				iVar3 = *(int *)(puVar9 + 0x24);
				*(int *)(puVar9 + 0x24) = iVar3 + -2;
				*(undefined4 *)(puVar9 + 0x44) = 0;
				RedoPlayerVision((char)iVar3, uVar19, uVar21, uVar22, uVar23, uVar25, uVar24, uVar26, in_stack_ffffff98);
			}
		}
	}
	return;
}

void OperateL3LDoor(int param_1, uint param_2, int param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	int iVar3;
	uint uVar4;
	int *piVar5;
	undefined *puVar6;
	uint *puVar7;
	int iVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined8 uVar12;
	undefined **ppuVar13;
	undefined8 uVar14;
	ulonglong uVar15;
	longlong lVar16;
	undefined8 uVar17;
	longlong lVar18;
	undefined uVar19;
	undefined uVar21;
	ulonglong uVar20;
	undefined uVar22;
	undefined uVar23;
	undefined uVar24;
	undefined uVar25;
	undefined uVar26;
	ulonglong uVar27;
	undefined4 in_stack_ffffff98;

	puVar11 = PTR_DAT_100f1f60;
	puVar9 = PTR_DAT_100f1948;
	puVar10 = PTR_DAT_100f1824;
	ppuVar13 = &toc;
	uVar27 = ZEXT48(PTR_DAT_100f1948);
	iVar3 = (int)((longlong)(int)param_2 * 0x78);
	piVar5 = (int *)(PTR_DAT_100f1948 + iVar3 + 100);
	if (*piVar5 == 2) {
		if (*(int *)PTR_DAT_100f1f60 == 0) {
			PlaySfxLoc(0x13, (ulonglong) * (uint *)(PTR_DAT_100f1948 + iVar3 + 4),
			    (ulonglong) * (uint *)(PTR_DAT_100f1948 + iVar3 + 8), param_4, param_5, param_6,
			    param_7, param_8, in_stack_ffffff98);
		}
	} else {
		puVar6 = PTR_DAT_100f1948 + iVar3;
		uVar1 = *(uint *)(puVar6 + 8);
		uVar19 = (undefined)uVar1;
		puVar7 = (uint *)(PTR_DAT_100f1948 + iVar3 + 4);
		uVar4 = *puVar7;
		uVar15 = (ulonglong)uVar4;
		if (*piVar5 == 0) {
			if ((param_1 == *(int *)PTR_DAT_100f1824) && (param_3 != 0)) {
				NetSendCmdParam1(1, 0x2b, (ulonglong)(param_2 & 0xffff), param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffff98);
			}
			if (*(int *)puVar11 == 0) {
				PlaySfxLoc(0x14, (ulonglong)*puVar7, (ulonglong) * (uint *)(puVar6 + 8), param_4, param_5,
				    param_6, param_7, param_8, in_stack_ffffff98);
			}
			uVar25 = (undefined)param_8;
			uVar23 = (undefined)param_7;
			uVar22 = (undefined)param_6;
			uVar21 = (undefined)param_5;
			uVar19 = (undefined)param_4;
			ObjSetMicro(uVar15, uVar1, 0x21a, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff98);
			lVar18 = uVar27 + (longlong)(int)param_2 * 0x78;
			iVar3 = (int)lVar18;
			lVar16 = (ulonglong) * (uint *)(iVar3 + 0x24) + 2;
			*(undefined4 *)(iVar3 + 0x24) = (int)lVar16;
			*(undefined4 *)(iVar3 + 0x44) = 1;
			*piVar5 = 1;
			*(undefined *)(iVar3 + 0x40) = 2;
			RedoPlayerVision(1, (char)lVar16, (char)lVar18, uVar19, uVar21, uVar22, uVar23, uVar25, in_stack_ffffff98);
		} else {
			if (*(int *)PTR_DAT_100f1f60 == 0) {
				ppuVar13 = &toc;
				PlaySfxLoc(0x13, uVar15, (ulonglong)uVar1, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffff98);
			}
			uVar20 = ZEXT48(ppuVar13[-0x1d9f]);
			iVar8 = uVar4 * 0x70 + uVar1;
			uVar2 = *(uint *)ppuVar13[-0x1d9f];
			uVar27 = (ulonglong)uVar2;
			uVar14 = countLeadingZeros(-(int)*(char *)(*(int *)ppuVar13[-0x1da3] + iVar8));
			uVar17 = countLeadingZeros(-(int)*(short *)(uVar2 + uVar4 * 0xe0 + uVar1 * 2));
			uVar12 = countLeadingZeros(-(int)*(char *)(*(int *)ppuVar13[-0x1d8c] + iVar8));
			if (((uint)uVar14 >> 5 & 0xff & (uint)uVar17 >> 5 & 0xff & (uint)uVar12 >> 5 & 0xff) == 0) {
				*piVar5 = 2;
			} else {
				if ((param_1 == *(int *)puVar10) && (param_3 != 0)) {
					NetSendCmdParam1(1, 0x2c, (ulonglong)(param_2 & 0xffff), uVar27, uVar20, param_6, param_7, param_8,
					    in_stack_ffffff98);
				}
				uVar26 = (undefined)param_8;
				uVar24 = (undefined)param_7;
				uVar25 = (undefined)param_6;
				uVar23 = (undefined)uVar20;
				uVar22 = (undefined)uVar27;
				puVar9 = puVar9 + iVar3;
				*piVar5 = 0;
				puVar9[0x40] = 3;
				uVar21 = 0x13;
				ObjSetMicro(uVar15, uVar1, 0x213, uVar27, uVar20, param_6, param_7, param_8, in_stack_ffffff98);
				iVar3 = *(int *)(puVar9 + 0x24);
				*(int *)(puVar9 + 0x24) = iVar3 + -2;
				*(undefined4 *)(puVar9 + 0x44) = 0;
				RedoPlayerVision((char)iVar3, uVar19, uVar21, uVar22, uVar23, uVar25, uVar24, uVar26, in_stack_ffffff98);
			}
		}
	}
	return;
}

void MonstCheckDoors(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	int iVar11;
	int *piVar12;
	ulonglong uVar13;
	ulonglong uVar14;
	uint *puVar15;
	undefined4 in_stack_ffffff98;

	puVar5 = PTR_DAT_100f1e3c;
	puVar4 = PTR_DAT_100f1948;
	puVar3 = PTR_DAT_100f1824;
	lVar10 = (longlong)param_8;
	lVar9 = (longlong)param_7;
	lVar8 = (longlong)param_6;
	uVar1 = *(uint *)(PTR_DAT_100f187c + param_1 * 0xe8 + 0x20);
	uVar14 = (ulonglong)uVar1;
	uVar2 = *(uint *)(PTR_DAT_100f187c + param_1 * 0xe8 + 0x24);
	uVar13 = (ulonglong)uVar2;
	iVar11 = *(int *)PTR_DAT_100f194c + uVar1 * 0x70 + uVar2;
	if ((((((*(char *)(iVar11 + -0x71) == '\0') && (*(char *)(iVar11 + -1) == '\0')) && (*(char *)(iVar11 + 0x6f) == '\0')) && ((*(char *)(iVar11 + -0x70) == '\0' && (*(char *)(iVar11 + 0x70) == '\0')))) && (*(char *)(iVar11 + -0x6f) == '\0')) && ((*(char *)(iVar11 + 1) == '\0' && (*(char *)(iVar11 + 0x71) == '\0')))) {
		return;
	}
	iVar11 = 0;
	puVar15 = (uint *)PTR_DAT_100f1e40;
	while (iVar11 < *(int *)puVar5) {
		uVar1 = *puVar15;
		if (((*(int *)(puVar4 + uVar1 * 0x78) == 1) || (*(int *)(puVar4 + uVar1 * 0x78) == 2)) && (piVar12 = (int *)(puVar4 + uVar1 * 0x78), piVar12[0x19] == 0)) {
			lVar6 = abs((ulonglong)(uint)piVar12[1] - uVar14);
			lVar7 = abs((ulonglong)(uint)piVar12[2] - uVar13);
			if ((((int)lVar6 == 1) && ((int)lVar7 < 2)) && (*piVar12 == 1)) {
				OperateL1LDoor(*(int *)puVar3, uVar1, 1, param_4, param_5, (int)lVar8, (int)lVar9, (int)lVar10,
				    in_stack_ffffff98);
			}
			if ((((int)lVar6 < 2) && ((int)lVar7 == 1)) && (*piVar12 == 2)) {
				OperateL1RDoor(*(int *)puVar3, uVar1, 1, param_4, param_5, (int)lVar8, (int)lVar9, (int)lVar10,
				    in_stack_ffffff98);
			}
		}
		piVar12 = (int *)(puVar4 + uVar1 * 0x78);
		if (((*piVar12 == 0x2a) || (*piVar12 == 0x2b)) && (piVar12[0x19] == 0)) {
			lVar6 = abs((ulonglong)(uint)piVar12[1] - uVar14);
			lVar7 = abs((ulonglong)(uint)piVar12[2] - uVar13);
			if ((((int)lVar6 == 1) && ((int)lVar7 < 2)) && (*piVar12 == 0x2a)) {
				OperateL2LDoor(*(int *)puVar3, uVar1, 1, param_4, param_5, (int)lVar8, (int)lVar9, (int)lVar10,
				    in_stack_ffffff98);
			}
			if ((((int)lVar6 < 2) && ((int)lVar7 == 1)) && (*piVar12 == 0x2b)) {
				OperateL2RDoor(*(int *)puVar3, uVar1, 1, param_4, param_5, (int)lVar8, (int)lVar9, (int)lVar10,
				    in_stack_ffffff98);
			}
		}
		if (((*piVar12 == 0x4a) || (*piVar12 == 0x4b)) && (piVar12[0x19] == 0)) {
			lVar6 = abs((ulonglong)(uint)piVar12[1] - uVar14);
			lVar7 = abs((ulonglong)(uint)piVar12[2] - uVar13);
			if ((((int)lVar6 == 1) && ((int)lVar7 < 2)) && (*piVar12 == 0x4b)) {
				OperateL3RDoor(*(int *)puVar3, uVar1, 1, param_4, param_5, (int)lVar8, (int)lVar9, (int)lVar10,
				    in_stack_ffffff98);
			}
			if ((((int)lVar6 < 2) && ((int)lVar7 == 1)) && (*piVar12 == 0x4a)) {
				OperateL3LDoor(*(int *)puVar3, uVar1, 1, param_4, param_5, (int)lVar8, (int)lVar9, (int)lVar10,
				    in_stack_ffffff98);
			}
		}
		puVar15 = puVar15 + 1;
		iVar11 = iVar11 + 1;
	}
	return;
}

void ObjChangeMap(longlong param_1, longlong param_2, int param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined8 uVar2;
	undefined7 uVar3;
	undefined uVar4;
	undefined uVar5;
	longlong lVar6;
	undefined uVar7;
	longlong lVar8;
	undefined uVar9;
	longlong lVar10;
	longlong lVar11;
	int iVar12;
	longlong lVar13;
	longlong lVar14;
	longlong lVar15;
	int iVar16;
	longlong lVar17;
	byte *pbVar19;
	longlong lVar18;
	int iVar20;
	undefined4 in_stack_ffffff98;

	puVar1 = PTR_DAT_100f183c;
	uVar3 = (undefined7)((ulonglong)param_5 >> 8);
	uVar4 = (undefined)param_5;
	lVar8 = (longlong)param_8;
	lVar6 = (longlong)param_7;
	lVar18 = (longlong)param_6;
	lVar13 = ZEXT48(PTR_DAT_100f1a90) + param_2;
	lVar11 = ZEXT48(PTR_DAT_100f1804) + param_2;
	uVar2 = param_4;
	lVar14 = param_2;
	while (true) {
		uVar9 = (undefined)lVar8;
		uVar7 = (undefined)lVar6;
		uVar5 = (undefined)lVar18;
		iVar20 = (int)param_4;
		if (iVar20 < (int)lVar14)
			break;
		lVar17 = lVar13 + param_1 * 0x28;
		lVar15 = lVar11 + param_1 * 0x28;
		lVar10 = param_1;
		while ((int)lVar10 <= param_3) {
			pbVar19 = (byte *)lVar17;
			ObjSetMini((int)lVar10, lVar14, (ulonglong)*pbVar19, uVar2, CONCAT71(uVar3, uVar4), (int)lVar18,
			    (int)lVar6, (int)lVar8, in_stack_ffffff98);
			lVar17 = lVar17 + 0x28;
			lVar10 = lVar10 + 1;
			*(byte *)lVar15 = *pbVar19;
			lVar15 = lVar15 + 0x28;
		}
		lVar13 = lVar13 + 1;
		lVar11 = lVar11 + 1;
		lVar14 = lVar14 + 1;
	}
	if (*puVar1 == '\x01') {
		lVar18 = (ulonglong)(uint)((int)param_1 << 1) + 0x10;
		iVar16 = (int)param_2 * 2 + 0x10;
		lVar14 = (ulonglong)(uint)(param_3 << 1) + 0x11;
		iVar12 = iVar20 * 2 + 0x11;
		ObjL1Special(lVar18, iVar16, lVar14, iVar12);
		AddL1Objs((int)lVar18, iVar16, (int)lVar14, iVar12, uVar4, uVar5, uVar7, uVar9, in_stack_ffffff98);
	}
	if (*puVar1 == '\x02') {
		lVar18 = (ulonglong)(uint)((int)param_1 << 1) + 0x10;
		iVar12 = (int)param_2 * 2 + 0x10;
		lVar14 = (ulonglong)(uint)(param_3 << 1) + 0x11;
		iVar20 = iVar20 * 2 + 0x11;
		ObjL2Special(lVar18, iVar12, lVar14, iVar20);
		AddL2Objs((int)lVar18, iVar12, (int)lVar14, iVar20, uVar4, uVar5, uVar7, uVar9, in_stack_ffffff98);
	}
	return;
}

void ObjChangeMapResync(longlong param_1, longlong param_2, int param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined8 uVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	byte *pbVar12;
	int iVar13;
	undefined4 in_stack_ffffff98;

	puVar1 = PTR_DAT_100f183c;
	lVar5 = (longlong)param_8;
	lVar4 = (longlong)param_7;
	lVar3 = (longlong)param_6;
	lVar9 = ZEXT48(PTR_DAT_100f1a90) + param_2;
	lVar8 = ZEXT48(PTR_DAT_100f1804) + param_2;
	uVar2 = param_4;
	lVar6 = param_2;
	while (iVar13 = (int)param_4, (int)lVar6 <= iVar13) {
		lVar11 = lVar9 + param_1 * 0x28;
		lVar10 = lVar8 + param_1 * 0x28;
		lVar7 = param_1;
		while ((int)lVar7 <= param_3) {
			pbVar12 = (byte *)lVar11;
			ObjSetMini((int)lVar7, lVar6, (ulonglong)*pbVar12, uVar2, param_5, (int)lVar3, (int)lVar4,
			    (int)lVar5, in_stack_ffffff98);
			lVar11 = lVar11 + 0x28;
			lVar7 = lVar7 + 1;
			*(byte *)lVar10 = *pbVar12;
			lVar10 = lVar10 + 0x28;
		}
		lVar9 = lVar9 + 1;
		lVar8 = lVar8 + 1;
		lVar6 = lVar6 + 1;
	}
	if (*puVar1 == '\x01') {
		ObjL1Special((ulonglong)(uint)((int)param_1 << 1) + 0x10, (int)param_2 * 2 + 0x10,
		    (ulonglong)(uint)(param_3 << 1) + 0x11, iVar13 * 2 + 0x11);
	}
	if (*puVar1 == '\x02') {
		ObjL2Special((ulonglong)(uint)((int)param_1 << 1) + 0x10, (int)param_2 * 2 + 0x10,
		    (ulonglong)(uint)(param_3 << 1) + 0x11, iVar13 * 2 + 0x11);
	}
	return;
}

void OperateL1Door(int param_1, uint param_2, int param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined *puVar1;
	longlong lVar2;
	longlong lVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined4 in_stack_ffffffa8;

	puVar1 = PTR_DAT_100f1948;
	iVar4 = param_2 * 0x78;
	puVar6 = PTR_DAT_100f1948 + iVar4;
	puVar5 = PTR_DAT_100f1828 + param_1 * 0x55ec;
	lVar2 = abs((ulonglong) * (uint *)(puVar6 + 4) - (ulonglong) * (uint *)(puVar5 + 0x38));
	lVar3 = abs((ulonglong) * (uint *)(puVar6 + 8) - (ulonglong) * (uint *)(puVar5 + 0x3c));
	if ((((int)lVar2 == 1) && ((int)lVar3 < 2)) && (*(int *)(puVar1 + iVar4) == 1)) {
		OperateL1LDoor(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	}
	if ((((int)lVar2 < 2) && ((int)lVar3 == 1)) && (*(int *)(puVar1 + iVar4) == 2)) {
		OperateL1RDoor(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	}
	return;
}

void OperateLever(int param_1, uint param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	char *pcVar1;
	undefined **ppuVar2;
	ulonglong uVar3;
	int *piVar4;
	ulonglong uVar5;
	undefined *puVar6;
	int iVar7;
	undefined4 in_stack_ffffffa8;

	puVar6 = PTR_DAT_100f1948;
	ppuVar2 = &toc;
	iVar7 = param_2 * 0x78;
	pcVar1 = PTR_DAT_100f1948 + iVar7 + 0x40;
	if (*pcVar1 != '\0') {
		if (*(int *)PTR_DAT_100f1f60 == 0) {
			ppuVar2 = &toc;
			PlaySfxLoc(0x3e, (ulonglong) * (uint *)(PTR_DAT_100f1948 + iVar7 + 4),
			    (ulonglong) * (uint *)(PTR_DAT_100f1948 + iVar7 + 8), param_4, param_5, param_6,
			    param_7, param_8, in_stack_ffffffa8);
		}
		*pcVar1 = '\0';
		uVar5 = 1;
		pcVar1 = ppuVar2[-0x1df9];
		*(int *)(puVar6 + iVar7 + 0x24) = *(int *)(puVar6 + iVar7 + 0x24) + 1;
		if (*pcVar1 == '\x10') {
			piVar4 = (int *)ppuVar2[-0x1c64];
			uVar3 = (ulonglong) * (uint *)ppuVar2[-0x1c65];
			if (0 < (int)*(uint *)ppuVar2[-0x1c65]) {
				do {
					if (*(int *)(puVar6 + *piVar4 * 0x78) == 0x1c) {
						if ((*(int *)(puVar6 + iVar7 + 0x74) == *(int *)(puVar6 + *piVar4 * 0x78 + 0x74)) && ((puVar6 + *piVar4 * 0x78)[0x40] != '\0')) {
							uVar5 = 0;
						}
					}
					piVar4 = piVar4 + 1;
					uVar3 = uVar3 - 1;
				} while (uVar3 != 0);
			}
		}
		if ((int)uVar5 != 0) {
			puVar6 = puVar6 + iVar7;
			uVar5 = (ulonglong) * (uint *)(puVar6 + 100);
			ObjChangeMap((ulonglong) * (uint *)(puVar6 + 0x58), (ulonglong) * (uint *)(puVar6 + 0x5c),
			    *(int *)(puVar6 + 0x60), uVar5, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
		}
		if (param_1 == *(int *)ppuVar2[-0x1deb]) {
			NetSendCmdParam1(0, 0x2d, (ulonglong)(param_2 & 0xffff), uVar5, param_5, param_6, param_7, param_8,
			    in_stack_ffffffa8);
		}
	}
	return;
}

void OperateBook(undefined8 param_1, int param_2, undefined8 param_3, undefined8 param_4,
    ulonglong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	char *pcVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	bool bVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	ulonglong uVar11;
	undefined **ppuVar12;
	int iVar13;
	longlong lVar14;
	undefined *puVar15;
	undefined4 uVar16;
	undefined4 uVar17;
	uint uVar18;
	uint *puVar19;
	int iVar20;
	undefined8 unaff_r18;
	undefined8 unaff_r19;
	int *piVar21;
	ulonglong uVar22;
	undefined4 in_stack_ffffff78;
	undefined in_stack_ffffff7f;

	puVar19 = (uint *)PTR_DAT_100f1e40;
	puVar10 = PTR_DAT_100f1e3c;
	puVar4 = PTR_DAT_100f194c;
	puVar15 = PTR_DAT_100f1948;
	puVar5 = PTR_DAT_100f1828;
	puVar9 = PTR_DAT_100f1824;
	puVar8 = PTR_DAT_100f17f8;
	puVar7 = PTR_DAT_100f17f0;
	uVar18 = (uint)param_8;
	uVar17 = (undefined4)param_7;
	uVar16 = (undefined4)param_6;
	uVar11 = ZEXT48(&toc);
	ppuVar12 = &toc;
	param_2 = param_2 * 0x78;
	uVar22 = ZEXT48(PTR_DAT_100f1828);
	pcVar1 = PTR_DAT_100f1948 + param_2 + 0x40;
	if (*pcVar1 != '\0') {
		if ((*PTR_DAT_100f17f8 != '\0') && (*PTR_DAT_100f17f0 == '\x05')) {
			puVar3 = PTR_DAT_100f1828 + (int)param_1 * 0x55ec;
			bVar6 = false;
			param_5 = 0;
			iVar20 = 0;
			piVar21 = (int *)PTR_DAT_100f1e40;
			while (true) {
				uVar18 = (uint)param_8;
				uVar17 = (undefined4)param_7;
				uVar16 = (undefined4)param_6;
				ppuVar12 = (undefined **)uVar11;
				if (*(int *)puVar10 <= iVar20)
					break;
				iVar2 = *piVar21;
				iVar13 = iVar2 * 0x78;
				if ((*(int *)(puVar15 + iVar13) == 0x55) && (*(int *)(puVar15 + iVar13 + 0x6c) == 1)) {
					*(int *)(puVar15 + iVar13 + 0x6c) = 4;
					unaff_r19 = 0x1b;
					unaff_r18 = 0x1d;
					param_5 = 1;
				}
				if ((*(int *)(puVar15 + iVar13) == 0x55) && (*(int *)(puVar15 + iVar2 * 0x78 + 0x6c) == 2)) {
					*(int *)(puVar15 + iVar2 * 0x78 + 0x6c) = 4;
					unaff_r19 = 0x2b;
					unaff_r18 = 0x1d;
					param_5 = 1;
				}
				if ((int)param_5 != 0) {
					iVar2 = (int)*(char *)(*(int *)puVar4 + 0xf74) * 0x78 + -0x10;
					param_6 = 3;
					param_7 = 0;
					*(int *)(puVar15 + iVar2) = *(int *)(puVar15 + iVar2) + 1;
					param_8 = param_1;
					AddMissile((ulonglong) * (uint *)(puVar3 + 0x38), (ulonglong) * (uint *)(puVar3 + 0x3c),
					    unaff_r19, unaff_r18, (ulonglong) * (uint *)(puVar3 + 0x70), 3, 0, param_1,
					    in_stack_ffffff78, in_stack_ffffff7f, 0, 0);
					bVar6 = true;
					param_5 = 0;
				}
				piVar21 = piVar21 + 1;
				iVar20 = iVar20 + 1;
			}
			if (!bVar6) {
				return;
			}
		}
		*pcVar1 = '\0';
		*(int *)(puVar15 + param_2 + 0x24) = *(int *)(puVar15 + param_2 + 0x24) + 1;
		if ((*puVar8 != '\0') && (*puVar7 == '\x02')) {
			lVar14 = (ulonglong) * (uint *)puVar9 * 0x55ec;
			iVar2 = (int)lVar14;
			puVar4 = puVar5 + iVar2;
			*(uint *)(puVar4 + 0x108) = *(uint *)(puVar4 + 0x108) | 0x1000;
			iVar20 = (int)(uVar22 + 0xce);
			if (*(char *)(iVar20 + (int)param_1 * 0x55ec) < '\x0f') {
				*(char *)(iVar20 + iVar2) = *(char *)(iVar20 + iVar2) + '\x01';
			}
			piVar21 = (int *)ppuVar12[-0x1c1c];
			ppuVar12[-0x1d81][0x152] = 3;
			if (*piVar21 == 0) {
				PlaySfxLoc(0xc, (ulonglong) * (uint *)(puVar15 + param_2 + 4),
				    (ulonglong) * (uint *)(puVar15 + param_2 + 8), lVar14, uVar22 + 0xce, uVar16, uVar17,
				    uVar18, in_stack_ffffff78);
			}
			InitDiabloMsg('+');
			uVar18 = *(uint *)puVar9;
			puVar5 = puVar5 + uVar18 * 0x55ec;
			uVar16 = 2;
			uVar17 = 0;
			param_5 = (ulonglong) * (uint *)(puVar5 + 0x70);
			AddMissile((ulonglong) * (uint *)(puVar5 + 0x38), (ulonglong) * (uint *)(puVar5 + 0x3c),
			    (ulonglong) * (uint *)(puVar15 + param_2 + 4) - 2,
			    (ulonglong) * (uint *)(puVar15 + param_2 + 8) - 4, param_5, 2, 0, (ulonglong)uVar18,
			    in_stack_ffffff78, in_stack_ffffff7f, 0, 0);
		}
		if ((*puVar8 != '\0') && (*puVar7 == '\x05')) {
			puVar15 = puVar15 + param_2;
			ObjChangeMapResync((ulonglong) * (uint *)(puVar15 + 0x58), (ulonglong) * (uint *)(puVar15 + 0x5c),
			    *(int *)(puVar15 + 0x60), (ulonglong) * (uint *)(puVar15 + 100), param_5, uVar16,
			    uVar17, uVar18, in_stack_ffffff78);
			iVar20 = 0;
			while (iVar20 < *(int *)puVar10) {
				SyncObjectAnim((ulonglong)*puVar19);
				puVar19 = puVar19 + 1;
				iVar20 = iVar20 + 1;
			}
		}
	}
	return;
}

void OperateBookLever(int param_1, uint param_2, undefined8 param_3, undefined8 param_4, longlong param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined uVar1;
	uint uVar2;
	uint uVar3;
	uint uVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined **ppuVar9;
	undefined *puVar10;
	ulonglong uVar11;
	ulonglong uVar12;
	undefined *puVar13;
	int iVar14;
	ulonglong uVar15;
	uint *puVar16;
	undefined4 in_stack_ffffff98;

	puVar8 = PTR_DAT_100f1ab8;
	puVar7 = PTR_DAT_100f1a84;
	puVar6 = PTR_DAT_100f1a80;
	puVar13 = PTR_DAT_100f19cc;
	puVar5 = PTR_DAT_100f1948;
	ppuVar9 = &toc;
	iVar14 = param_2 * 0x78;
	puVar16 = (uint *)(PTR_DAT_100f1948 + iVar14);
	uVar15 = ZEXT48(PTR_DAT_100f19cc);
	uVar3 = *(int *)PTR_DAT_100f1a80 * 2;
	uVar11 = (ulonglong)uVar3;
	uVar4 = *(int *)PTR_DAT_100f1a84 * 2;
	uVar12 = (ulonglong)uVar4;
	if ((*(char *)(puVar16 + 0x10) != '\0') && (*PTR_DAT_100f18a0 == '\0')) {
		uVar2 = *puVar16;
		if ((uVar2 == 0x47) && (puVar10 = PTR_DAT_100f19cc + 0xcf, PTR_DAT_100f19cc[0xcf] == '\0')) {
			PTR_DAT_100f19cc[0xc2] = 2;
			*(undefined4 *)(puVar13 + 0xd4) = 1;
			*puVar10 = 1;
		}
		if ((uVar2 == 0x48) && (param_5 = uVar15 + 0xe7, puVar13[0xe7] == '\0')) {
			puVar13[0xda] = 2;
			*(undefined4 *)(puVar13 + 0xec) = 1;
			*(undefined *)param_5 = 1;
			ppuVar9 = &toc;
			SpawnQuestItem(0x15, uVar4 + 0x13, uVar3 + 0x1a, 0, 1, (char)param_6, (char)param_7, (char)param_8,
			    in_stack_ffffff98);
			SpawnQuestItem(0x15, *(int *)puVar7 * 2 + 0x1f, *(int *)puVar6 * 2 + 0x1a, 0, 1, (char)param_6,
			    (char)param_7, (char)param_8, in_stack_ffffff98);
			uVar12 = 0;
			uVar11 = (ulonglong)(uint)(*(int *)puVar6 << 1) + 0x21;
			param_5 = 1;
			SpawnQuestItem(0x15, *(int *)puVar7 * 2 + 0x19, (int)uVar11, 0, 1, (char)param_6, (char)param_7,
			    (char)param_8, in_stack_ffffff98);
		}
		uVar2 = *puVar16;
		uVar15 = (ulonglong)uVar2;
		if ((uVar2 == 0x58) && (puVar13[0x117] == '\0')) {
			puVar13[0x10a] = 2;
			*(undefined4 *)(puVar13 + 0x11c) = 1;
			puVar13[0x117] = 1;
		}
		if (*(int *)(puVar5 + iVar14 + 0x24) != *(int *)(puVar5 + iVar14 + 0x6c)) {
			if (uVar2 != 0x48) {
				puVar13 = puVar5 + iVar14;
				uVar15 = (ulonglong) * (uint *)(puVar13 + 0x5c);
				uVar11 = (ulonglong) * (uint *)(puVar13 + 0x60);
				uVar12 = (ulonglong) * (uint *)(puVar13 + 100);
				ObjChangeMap((ulonglong) * (uint *)(puVar13 + 0x58), uVar15, *(uint *)(puVar13 + 0x60), uVar12,
				    param_5, param_6, param_7, param_8, in_stack_ffffff98);
			}
			if (*puVar16 == 0x47) {
				CreateItem(3, uVar4 + 0x15, uVar3 + 0x15, (char)uVar12, (char)param_5, (char)param_6,
				    (char)param_7, (char)param_8, in_stack_ffffff98);
				uVar1 = *puVar8;
				puVar13 = puVar5 + iVar14;
				*puVar8 = 9;
				uVar15 = (ulonglong) * (uint *)(puVar13 + 0x5c);
				uVar11 = (ulonglong) * (uint *)(puVar13 + 0x60);
				uVar12 = (ulonglong) * (uint *)(puVar13 + 100);
				DRLG_MRectTrans(*(int *)(puVar13 + 0x58), *(uint *)(puVar13 + 0x5c), *(uint *)(puVar13 + 0x60),
				    *(uint *)(puVar13 + 100));
				*puVar8 = uVar1;
			}
		}
		*(int *)(puVar5 + iVar14 + 0x24) = *(int *)(puVar5 + iVar14 + 0x6c);
		InitQTextMsg(*(int *)(puVar5 + iVar14 + 0x70), uVar15, uVar11, uVar12, param_5, param_6, param_7,
		    param_8, in_stack_ffffff98);
		if (param_1 == *(int *)ppuVar9[-0x1deb]) {
			NetSendCmdParam1(0, 0x2d, (ulonglong)(param_2 & 0xffff), uVar12, param_5, param_6, param_7, param_8,
			    in_stack_ffffff98);
		}
	}
	return;
}

void OperateSChambBk(undefined4 param_1, longlong param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9,
    undefined param_10, undefined4 param_11)

{
	char cVar1;
	undefined *puVar2;
	int iVar3;
	undefined *puVar4;
	ulonglong uVar5;
	undefined **ppuVar6;
	ulonglong uVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	int iVar11;
	uint *puVar12;
	int unaff_r30;
	undefined4 in_stack_ffffffa8;

	puVar2 = PTR_DAT_100f1e3c;
	puVar4 = PTR_DAT_100f19cc;
	lVar10 = (longlong)param_8;
	lVar9 = (longlong)param_7;
	lVar8 = (longlong)param_6;
	uVar5 = ZEXT48(&toc);
	ppuVar6 = &toc;
	uVar7 = ZEXT48(PTR_DAT_100f1948) + param_2 * 0x78;
	iVar3 = (int)uVar7;
	if ((*(char *)(iVar3 + 0x40) != '\0') && (*PTR_DAT_100f18a0 == '\0')) {
		if (*(int *)(iVar3 + 0x24) != *(int *)(iVar3 + 0x6c)) {
			param_3 = (ulonglong) * (uint *)(iVar3 + 0x60);
			uVar7 = (ulonglong) * (uint *)(iVar3 + 100);
			ObjChangeMapResync((ulonglong) * (uint *)(iVar3 + 0x58), (ulonglong) * (uint *)(iVar3 + 0x5c),
			    *(uint *)(iVar3 + 0x60), uVar7, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
			iVar11 = 0;
			puVar12 = *(uint **)((int)uVar5 + -0x7190);
			while (true) {
				param_8 = (int)lVar10;
				param_7 = (int)lVar9;
				param_6 = (int)lVar8;
				ppuVar6 = (undefined **)uVar5;
				if (*(int *)puVar2 <= iVar11)
					break;
				SyncObjectAnim((ulonglong)*puVar12);
				puVar12 = puVar12 + 1;
				iVar11 = iVar11 + 1;
			}
		}
		*(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(iVar3 + 0x6c);
		if (puVar4[0x152] == '\x01') {
			puVar4[0x152] = 2;
			*(undefined4 *)(puVar4 + 0x164) = 1;
		}
		puVar2 = ppuVar6[-0x1dea];
		cVar1 = puVar2[*(int *)ppuVar6[-0x1deb] * 0x55ec + 0x15c];
		if (cVar1 == '\0') {
			unaff_r30 = 0xeb;
		} else {
			if (cVar1 == '\x01') {
				unaff_r30 = 0xf3;
			} else {
				if (cVar1 == '\x02') {
					unaff_r30 = 0xef;
				}
			}
		}
		puVar4[0x15e] = (char)unaff_r30;
		InitQTextMsg(unaff_r30, ZEXT48(puVar2), param_3, uVar7, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
	}
	return;
}

void OperateChest(uint param_1, uint param_2, int param_3, undefined8 param_4, ulonglong param_5,
    undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined4 param_9)

{
	char *pcVar1;
	uint *puVar2;
	uint *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	ulonglong uVar7;
	int iVar8;
	int iVar9;
	undefined4 uVar10;
	undefined4 uVar11;
	int iVar12;
	int unaff_r26;
	int iVar13;
	undefined *puVar14;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffa8;

	puVar6 = PTR_DAT_100f1f60;
	puVar5 = PTR_DAT_100f1948;
	puVar4 = PTR_DAT_100f1828;
	uVar7 = ZEXT48(&toc);
	iVar13 = param_2 * 0x78;
	pcVar1 = PTR_DAT_100f1948 + iVar13 + 0x40;
	if (*pcVar1 != '\0') {
		if (*(int *)PTR_DAT_100f1f60 == 0) {
			PlaySfxLoc(0x12, (ulonglong) * (uint *)(PTR_DAT_100f1948 + iVar13 + 4),
			    (ulonglong) * (uint *)(PTR_DAT_100f1948 + iVar13 + 8), param_4, param_5, (int)param_6,
			    (int)param_7, (int)param_8, in_stack_ffffff98);
		}
		iVar12 = 0;
		puVar14 = puVar5 + iVar13;
		*pcVar1 = '\0';
		*(int *)(puVar14 + 0x24) = *(int *)(puVar14 + 0x24) + 2;
		if (*(int *)puVar6 == 0) {
			SetRndSeed(*(undefined4 *)(puVar14 + 0x54));
			if (**(char **)((int)uVar7 + -0x77d8) == '\0') {
				while (true) {
					iVar8 = (int)uVar7;
					uVar11 = (undefined4)param_8;
					uVar10 = (undefined4)param_7;
					iVar9 = (int)param_6;
					if (*(int *)(puVar14 + 0x58) <= iVar12)
						break;
					if (*(int *)(puVar14 + 0x5c) == 0) {
						CreateRndUseful(param_1, *(int *)(puVar14 + 4), *(int *)(puVar14 + 8), param_3, (char)param_5,
						    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff98,
						    in_stack_ffffff9f, in_stack_ffffffa8);
					} else {
						param_5 = 0;
						CreateRndItem(*(int *)(puVar14 + 4), *(int *)(puVar14 + 8), 0, param_3, 0, (char)param_6,
						    (char)param_7, (char)param_8, in_stack_ffffff98);
					}
					iVar12 = iVar12 + 1;
				}
			} else {
				iVar12 = 0;
				while (true) {
					iVar8 = (int)uVar7;
					uVar11 = (undefined4)param_8;
					uVar10 = (undefined4)param_7;
					iVar9 = (int)param_6;
					if (*(int *)(puVar14 + 0x58) <= iVar12)
						break;
					param_5 = 0;
					CreateRndItem(*(int *)(puVar14 + 4), *(int *)(puVar14 + 8), 1, param_3, 0, (char)param_6,
					    (char)param_7, (char)param_8, in_stack_ffffff98);
					iVar12 = iVar12 + 1;
				}
			}
			if (((*(int *)(puVar5 + iVar13 + 0x48) != 0) && (0x43 < *(int *)(puVar5 + iVar13))) && (*(int *)(puVar5 + iVar13) < 0x47)) {
				puVar2 = (uint *)(puVar4 + param_1 * 0x55ec + 0x38);
				puVar3 = (uint *)(puVar4 + param_1 * 0x55ec + 0x3c);
				param_5 = GetDirection((ulonglong) * (uint *)(puVar5 + iVar13 + 4),
				    *(uint *)(puVar5 + iVar13 + 8), (ulonglong)*puVar2, *puVar3);
				iVar12 = *(int *)(puVar5 + iVar13 + 100);
				if (iVar12 == 1) {
					iVar9 = 0x1b;
				} else {
					if (iVar12 < 1) {
						iVar9 = unaff_r26;
						if (-1 < iVar12) {
							iVar9 = 0;
						}
					} else {
						iVar9 = unaff_r26;
						if (iVar12 < 3) {
							iVar9 = 0x2a;
						}
					}
				}
				uVar10 = 1;
				uVar11 = 0xffffffff;
				AddMissile((ulonglong) * (uint *)(puVar5 + iVar13 + 4),
				    (ulonglong) * (uint *)(puVar5 + iVar13 + 8), (ulonglong)*puVar2, (ulonglong)*puVar3, param_5, iVar9, 1, 0xffffffffffffffff, in_stack_ffffff98, in_stack_ffffff9f, 0, 0);
				*(int *)(puVar5 + iVar13 + 0x48) = 0;
			}
			if (param_1 == **(uint **)(iVar8 + -0x77ac)) {
				NetSendCmdParam2(0, 0x2e, (ulonglong)(param_1 & 0xffff), (ulonglong)(param_2 & 0xffff), param_5,
				    iVar9, uVar10, uVar11, in_stack_ffffff98);
			}
		}
	}
	return;
}

void OperateMushPatch(int param_1, int param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	char *pcVar1;
	char cVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined8 unaff_r27;
	undefined *puVar9;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffffa8;
	int local_28;
	int local_24[4];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	puVar3 = PTR_DAT_100f1f60;
	puVar4 = PTR_DAT_100f1948;
	uVar5 = (undefined)param_5;
	uVar8 = (undefined)param_8;
	uVar7 = (undefined)param_7;
	uVar6 = (undefined)param_6;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	if ((PTR_DAT_100f19cc[0x1a] != '\x02') || (puVar9 = PTR_DAT_100f19cc + 0x27, (byte)PTR_DAT_100f19cc[0x27] < 2)) {
		if ((*(int *)PTR_DAT_100f1f60 == 0) && (param_1 == *(int *)PTR_DAT_100f1824)) {
			cVar2 = PTR_DAT_100f1828[*(int *)PTR_DAT_100f1824 * 0x55ec + 0x15c];
			if (cVar2 == '\0') {
				PlaySFX(0x2d6);
			} else {
				if (cVar2 == '\x01') {
					PlaySFX(0x26f);
				} else {
					if (cVar2 == '\x02') {
						PlaySFX(0x208);
					}
				}
			}
		}
		return;
	}
	param_2 = param_2 * 0x78;
	pcVar1 = PTR_DAT_100f1948 + param_2 + 0x40;
	if (*pcVar1 == '\0') {
		return;
	}
	if (*(int *)PTR_DAT_100f1f60 == 0) {
		PlaySfxLoc(0x12, (ulonglong) * (uint *)(PTR_DAT_100f1948 + param_2 + 4),
		    (ulonglong) * (uint *)(PTR_DAT_100f1948 + param_2 + 8), param_4, param_5, param_6,
		    param_7, param_8, in_stack_ffffffa8);
	}
	puVar4 = puVar4 + param_2;
	*pcVar1 = '\0';
	*(int *)(puVar4 + 0x24) = *(int *)(puVar4 + 0x24) + 1;
	if (*(int *)puVar3 != 0) {
		return;
	}
	GetSuperItemLoc(*(int *)(puVar4 + 4), *(int *)(puVar4 + 8), local_24, &local_28, uVar5, uVar6, uVar7, uVar8,
	    in_stack_ffffffa8);
	SpawnQuestItem(0x11, local_24[0], local_28, 0, 0, uVar6, uVar7, uVar8, in_stack_ffffffa8);
	*puVar9 = 3;
	return;
}

void OperateInnSignChest(int param_1, int param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	char *pcVar1;
	char cVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined4 in_stack_ffffffb8;
	int local_18;
	int local_14[5];

	puVar3 = PTR_DAT_100f1f60;
	puVar4 = PTR_DAT_100f1948;
	uVar5 = (undefined)param_5;
	uVar8 = (undefined)param_8;
	uVar7 = (undefined)param_7;
	uVar6 = (undefined)param_6;
	if (PTR_DAT_100f19cc[0xb7] == '\x02') {
		param_2 = param_2 * 0x78;
		pcVar1 = PTR_DAT_100f1948 + param_2 + 0x40;
		if (*pcVar1 != '\0') {
			if (*(int *)PTR_DAT_100f1f60 == 0) {
				PlaySfxLoc(0x12, (ulonglong) * (uint *)(PTR_DAT_100f1948 + param_2 + 4),
				    (ulonglong) * (uint *)(PTR_DAT_100f1948 + param_2 + 8), param_4, param_5, param_6,
				    param_7, param_8, in_stack_ffffffb8);
			}
			puVar4 = puVar4 + param_2;
			*pcVar1 = '\0';
			*(int *)(puVar4 + 0x24) = *(int *)(puVar4 + 0x24) + 2;
			if (*(int *)puVar3 == 0) {
				GetSuperItemLoc(*(int *)(puVar4 + 4), *(int *)(puVar4 + 8), local_14, &local_18, uVar5, uVar6, uVar7,
				    uVar8, in_stack_ffffffb8);
				SpawnQuestItem(0xc, local_14[0], local_18, 0, 0, uVar6, uVar7, uVar8, in_stack_ffffffb8);
			}
		}
	} else {
		if (*(int *)PTR_DAT_100f1f60 == 0) {
			if (param_1 == *(int *)PTR_DAT_100f1824) {
				cVar2 = PTR_DAT_100f1828[*(int *)PTR_DAT_100f1824 * 0x55ec + 0x15c];
				if (cVar2 == '\0') {
					PlaySFX(0x2e7);
				} else {
					if (cVar2 == '\x01') {
						PlaySFX(0x27a);
					} else {
						if (cVar2 == '\x02') {
							PlaySFX(0x213);
						}
					}
				}
			}
		}
	}
	return;
}

void OperateSlainHero(int param_1, longlong param_2, undefined4 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9, undefined param_10, undefined4 param_11)

{
	char cVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	longlong lVar7;
	undefined uVar8;
	undefined uVar9;
	undefined4 in_stack_ffffffb8;

	puVar6 = PTR_DAT_100f1f60;
	puVar5 = PTR_DAT_100f1948;
	puVar4 = PTR_DAT_100f1828;
	puVar3 = PTR_DAT_100f1824;
	lVar7 = param_2 * 0x78;
	iVar2 = (int)lVar7;
	if (PTR_DAT_100f1948[iVar2 + 0x40] != '\0') {
		PTR_DAT_100f1948[iVar2 + 0x40] = '\0';
		if (*(int *)puVar6 == 0) {
			cVar1 = puVar4[param_1 * 0x55ec + 0x15c];
			uVar8 = (undefined)param_7;
			uVar9 = (undefined)param_8;
			if (cVar1 == '\0') {
				lVar7 = 0x99;
				param_5 = 0;
				param_6 = 1;
				CreateMagicArmor(*(int *)(puVar5 + iVar2 + 4), *(int *)(puVar5 + iVar2 + 8), '\t', 0x99, 0, 1, uVar8,
				    uVar9, in_stack_ffffffb8);
				PlaySfxLoc(0x2d2, (ulonglong) * (uint *)(puVar4 + *(int *)puVar3 * 0x55ec + 0x38),
				    (ulonglong) * (uint *)(puVar4 + *(int *)puVar3 * 0x55ec + 0x3c), lVar7, param_5,
				    param_6, param_7, param_8, in_stack_ffffffb8);
			} else {
				if (cVar1 == '\x01') {
					lVar7 = 0x77;
					param_5 = 0;
					param_6 = 1;
					CreateMagicWeapon(*(int *)(puVar5 + iVar2 + 4), *(int *)(puVar5 + iVar2 + 8), '\x03', 0x77, 0, 1,
					    uVar8, uVar9, in_stack_ffffffb8);
					PlaySfxLoc(0x26b, (ulonglong) * (uint *)(puVar4 + *(int *)puVar3 * 0x55ec + 0x38),
					    (ulonglong) * (uint *)(puVar4 + *(int *)puVar3 * 0x55ec + 0x3c), lVar7, param_5,
					    param_6, param_7, param_8, in_stack_ffffffb8);
				} else {
					if (cVar1 == '\x02') {
						lVar7 = 0;
						param_5 = 1;
						CreateSpellBook(*(int *)(puVar5 + iVar2 + 4), *(int *)(puVar5 + iVar2 + 8), 3, 0, 1,
						    (char)param_6, uVar8, uVar9, in_stack_ffffffb8);
						PlaySfxLoc(0x204, (ulonglong) * (uint *)(puVar4 + *(int *)puVar3 * 0x55ec + 0x38),
						    (ulonglong) * (uint *)(puVar4 + *(int *)puVar3 * 0x55ec + 0x3c), lVar7, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
					}
				}
			}
			if (param_1 == *(int *)puVar3) {
				NetSendCmdParam1(0, 0x2d, (ulonglong)((uint)param_2 & 0xffff), lVar7, param_5, param_6, param_7,
				    param_8, in_stack_ffffffb8);
			}
		}
	}
	return;
}

void OperateTrapLvr(int param_1)

{
	int *piVar1;
	uint uVar2;
	undefined *puVar3;
	ulonglong uVar4;
	undefined *puVar5;
	undefined *puVar6;
	int *piVar7;

	piVar7 = (int *)PTR_DAT_100f1e40;
	puVar5 = PTR_DAT_100f1e3c;
	puVar3 = PTR_DAT_100f1948;
	param_1 = param_1 * 0x78;
	piVar1 = (int *)(PTR_DAT_100f1948 + param_1 + 0x24);
	if (*piVar1 != 1) {
		puVar6 = PTR_DAT_100f1948 + param_1;
		*piVar1 = *piVar1 + -1;
		uVar2 = *(uint *)puVar5;
		uVar4 = (ulonglong)uVar2;
		if ((int)uVar2 < 1) {
			return;
		}
		do {
			if (((*(int *)(puVar3 + *piVar7 * 0x78) == *(int *)(puVar6 + 0x5c)) && (puVar5 = puVar3 + *piVar7 * 0x78, *(int *)(puVar5 + 0x58) == *(int *)(puVar6 + 0x58))) && (*(undefined4 *)(puVar5 + 0x5c) = 0, *(int *)(puVar5 + 100) != 0)) {
				*(undefined4 *)(puVar5 + 0x10) = 1;
			}
			piVar7 = piVar7 + 1;
			uVar4 = uVar4 - 1;
		} while (uVar4 != 0);
		return;
	}
	puVar6 = PTR_DAT_100f1948 + param_1;
	*piVar1 = 2;
	uVar2 = *(uint *)puVar5;
	uVar4 = (ulonglong)uVar2;
	if ((int)uVar2 < 1) {
		return;
	}
	do {
		if ((*(int *)(puVar3 + *piVar7 * 0x78) == *(int *)(puVar6 + 0x5c)) && (puVar5 = puVar3 + *piVar7 * 0x78, *(int *)(puVar5 + 0x58) == *(int *)(puVar6 + 0x58))) {
			*(undefined4 *)(puVar5 + 0x5c) = 1;
			*(undefined4 *)(puVar5 + 0x10) = 0;
		}
		piVar7 = piVar7 + 1;
		uVar4 = uVar4 - 1;
	} while (uVar4 != 0);
	return;
}

void OperateSarc(int param_1, uint param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	char *pcVar1;
	undefined **ppuVar2;
	undefined *puVar3;
	int iVar4;
	undefined *puVar5;
	undefined4 in_stack_ffffffa8;

	puVar5 = PTR_DAT_100f1f60;
	puVar3 = PTR_DAT_100f1948;
	ppuVar2 = &toc;
	iVar4 = param_2 * 0x78;
	pcVar1 = PTR_DAT_100f1948 + iVar4 + 0x40;
	if (*pcVar1 != '\0') {
		if (*(int *)PTR_DAT_100f1f60 == 0) {
			ppuVar2 = &toc;
			PlaySfxLoc(0x42, (ulonglong) * (uint *)(PTR_DAT_100f1948 + iVar4 + 4),
			    (ulonglong) * (uint *)(PTR_DAT_100f1948 + iVar4 + 8), param_4, param_5, param_6,
			    param_7, param_8, in_stack_ffffffa8);
		}
		*pcVar1 = '\0';
		if (*(int *)puVar5 == 0) {
			puVar5 = puVar3 + iVar4;
			*(undefined4 *)(puVar5 + 0x10) = 1;
			*(undefined4 *)(puVar5 + 0x18) = 3;
			SetRndSeed(*(undefined4 *)(puVar5 + 0x54));
			if (*(int *)(puVar5 + 0x58) < 3) {
				param_5 = 0;
				CreateRndItem(*(int *)(puVar5 + 4), *(int *)(puVar5 + 8), 0, (int)param_3, 0, (char)param_6,
				    (char)param_7, (char)param_8, in_stack_ffffffa8);
				param_4 = param_3;
			}
			if (7 < *(int *)(puVar5 + 0x58)) {
				puVar3 = puVar3 + iVar4;
				SpawnSkeleton(*(int *)(puVar3 + 0x5c), (ulonglong) * (uint *)(puVar3 + 4), *(int *)(puVar3 + 8),
				    (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8,
				    in_stack_ffffffa8);
			}
			if (param_1 == *(int *)ppuVar2[-0x1deb]) {
				NetSendCmdParam1(0, 0x2d, (ulonglong)(param_2 & 0xffff), param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffffa8);
			}
		} else {
			*(undefined4 *)(puVar3 + iVar4 + 0x24) = *(undefined4 *)(puVar3 + iVar4 + 0x20);
		}
	}
	return;
}

void OperateL2Door(int param_1, uint param_2, int param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined *puVar1;
	longlong lVar2;
	longlong lVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined4 in_stack_ffffffa8;

	puVar1 = PTR_DAT_100f1948;
	iVar4 = param_2 * 0x78;
	puVar6 = PTR_DAT_100f1948 + iVar4;
	puVar5 = PTR_DAT_100f1828 + param_1 * 0x55ec;
	lVar2 = abs((ulonglong) * (uint *)(puVar6 + 4) - (ulonglong) * (uint *)(puVar5 + 0x38));
	lVar3 = abs((ulonglong) * (uint *)(puVar6 + 8) - (ulonglong) * (uint *)(puVar5 + 0x3c));
	if ((((int)lVar2 == 1) && ((int)lVar3 < 2)) && (*(int *)(puVar1 + iVar4) == 0x2a)) {
		OperateL2LDoor(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	}
	if ((((int)lVar2 < 2) && ((int)lVar3 == 1)) && (*(int *)(puVar1 + iVar4) == 0x2b)) {
		OperateL2RDoor(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	}
	return;
}

void OperateL3Door(int param_1, uint param_2, int param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined *puVar1;
	longlong lVar2;
	longlong lVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined4 in_stack_ffffffa8;

	puVar1 = PTR_DAT_100f1948;
	iVar4 = param_2 * 0x78;
	puVar6 = PTR_DAT_100f1948 + iVar4;
	puVar5 = PTR_DAT_100f1828 + param_1 * 0x55ec;
	lVar2 = abs((ulonglong) * (uint *)(puVar6 + 4) - (ulonglong) * (uint *)(puVar5 + 0x38));
	lVar3 = abs((ulonglong) * (uint *)(puVar6 + 8) - (ulonglong) * (uint *)(puVar5 + 0x3c));
	if ((((int)lVar2 == 1) && ((int)lVar3 < 2)) && (*(int *)(puVar1 + iVar4) == 0x4b)) {
		OperateL3RDoor(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	}
	if ((((int)lVar2 < 2) && ((int)lVar3 == 1)) && (*(int *)(puVar1 + iVar4) == 0x4a)) {
		OperateL3LDoor(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	}
	return;
}

void OperatePedistal(longlong param_1, int param_2, undefined8 param_3, longlong param_4, ulonglong param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	int *piVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	undefined *puVar6;
	undefined uVar8;
	ulonglong uVar7;
	undefined uVar9;
	ulonglong uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined uVar14;
	undefined uVar15;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined *puVar16;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffffa8;
	int *local_28;
	uint local_24;
	undefined4 local_1c;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	puVar4 = PTR_DAT_100f1f60;
	puVar3 = PTR_DAT_100f1a84;
	puVar2 = PTR_DAT_100f1a80;
	puVar16 = PTR_DAT_100f1948;
	ppuVar5 = &toc;
	local_1c = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	param_2 = param_2 * 0x78;
	piVar1 = (int *)(PTR_DAT_100f1948 + param_2 + 0x6c);
	if (*piVar1 != 3) {
		uVar8 = (undefined)(ZEXT48(register0x0000000c) - 0x24);
		puVar6 = PlrHasItem((int)param_1, 0x15, (int *)(ZEXT48(register0x0000000c) - 0x24));
		if (puVar6 != (undefined *)0x0) {
			RemoveInvItem(param_1, (ulonglong)local_24, uVar8, (char)param_4, (char)param_5, (char)param_6,
			    (char)param_7, (char)param_8, in_stack_ffffffa8);
			*(int *)(puVar16 + param_2 + 0x24) = *(int *)(puVar16 + param_2 + 0x24) + 1;
			*piVar1 = *piVar1 + 1;
		}
		if (*piVar1 == 1) {
			if (*(int *)puVar4 == 0) {
				PlaySfxLoc(0x7d, (ulonglong) * (uint *)(puVar16 + param_2 + 4),
				    (ulonglong) * (uint *)(puVar16 + param_2 + 8), param_4, param_5, param_6, param_7,
				    param_8, in_stack_ffffffa8);
			}
			param_4 = (ulonglong) * (uint *)puVar2 + 7;
			ObjChangeMap((ulonglong) * (uint *)puVar3, (ulonglong) * (uint *)puVar2 + 3, *(uint *)puVar3 + 2,
			    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
		}
		if (*piVar1 == 2) {
			if (*(int *)puVar4 == 0) {
				PlaySfxLoc(0x7d, (ulonglong) * (uint *)(puVar16 + param_2 + 4),
				    (ulonglong) * (uint *)(puVar16 + param_2 + 8), param_4, param_5, param_6, param_7,
				    param_8, in_stack_ffffffa8);
			}
			param_5 = (ulonglong) * (uint *)puVar3;
			param_4 = (ulonglong) * (uint *)puVar2 + 7;
			ObjChangeMap(param_5 + 6, (ulonglong) * (uint *)puVar2 + 3,
			    *(uint *)puVar3 + *(int *)ppuVar5[-0x1d55], param_4, param_5, param_6, param_7,
			    param_8, in_stack_ffffffa8);
		}
		if (*piVar1 == 3) {
			if (*(int *)puVar4 == 0) {
				PlaySfxLoc(0x5b, (ulonglong) * (uint *)(puVar16 + param_2 + 4),
				    (ulonglong) * (uint *)(puVar16 + param_2 + 8), param_4, param_5, param_6, param_7,
				    param_8, in_stack_ffffffa8);
			}
			puVar16 = puVar16 + param_2;
			uVar7 = (ulonglong) * (uint *)(puVar16 + 0x60);
			uVar10 = (ulonglong) * (uint *)(puVar16 + 100);
			ObjChangeMap((ulonglong) * (uint *)(puVar16 + 0x58), (ulonglong) * (uint *)(puVar16 + 0x5c),
			    *(uint *)(puVar16 + 0x60), uVar10, param_5, param_6, param_7, param_8,
			    in_stack_ffffffa8);
			uVar7 = LoadFileInMem(ZEXT48(ppuVar5[-0x16cf]), (undefined4 *)0x0, uVar7, uVar10, param_5, param_6,
			    param_7, param_8, in_stack_ffffffa8);
			uVar15 = (undefined)param_8;
			uVar14 = (undefined)param_7;
			uVar13 = (undefined)param_6;
			uVar12 = (undefined)param_5;
			uVar11 = (undefined)uVar10;
			local_28 = (int *)uVar7;
			uVar8 = (undefined)(*(int *)puVar3 << 1);
			uVar9 = (undefined)(*(int *)puVar2 << 1);
			LoadMapObjs(uVar7 & 0xffffffff, (ulonglong)(uint)(*(int *)puVar3 << 1),
			    (ulonglong)(uint)(*(int *)puVar2 << 1), uVar10, param_5, param_6, param_7, param_8,
			    in_stack_ffffffa8);
			mem_free_dbg(&local_28, uVar8, uVar9, uVar11, uVar12, uVar13, uVar14, uVar15, in_stack_ffffffa8);
			CreateItem(7, *(int *)puVar3 * 2 + 0x19, *(int *)puVar2 * 2 + 0x13, uVar11, uVar12, uVar13, uVar14, uVar15, in_stack_ffffffa8);
			puVar16[0x40] = 0;
		}
	}
	return;
}

void TryDisarm(int param_1, int param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	byte bVar1;
	int iVar2;
	undefined *puVar3;
	ulonglong uVar4;
	undefined **ppuVar5;
	longlong lVar6;
	undefined uVar8;
	int *piVar7;
	int *piVar9;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	puVar3 = PTR_DAT_100f1948;
	ppuVar5 = &toc;
	uVar8 = SUB41(PTR_DAT_100f1824, 0);
	if (param_1 == *(int *)PTR_DAT_100f1824) {
		ppuVar5 = &toc;
		NewCursor(1, (char)param_2, uVar8, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	}
	if ((*(int *)(puVar3 + param_2 * 0x78 + 0x48) != 0) && (bVar1 = *ppuVar5[-0x1df9], iVar2 = *(int *)(ppuVar5[-0x1dea] + param_1 * 0x55ec + 0x170), lVar6 = random(0x9a, 100, uVar8, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb), (int)lVar6 <= (int)(iVar2 * 2 + (uint)bVar1 * -5))) {
		uVar4 = (ulonglong) * (uint *)ppuVar5[-0x1c65];
		piVar7 = (int *)ppuVar5[-0x1c64];
		iVar2 = *(int *)ppuVar5[-0x1da1];
		if (0 < (int)*(uint *)ppuVar5[-0x1c65]) {
			do {
				piVar9 = (int *)(puVar3 + *piVar7 * 0x78);
				if ((*piVar9 == 0x36 || *(int *)(puVar3 + *piVar7 * 0x78) == 0x35) && ((int)*(char *)(iVar2 + piVar9[0x16] * 0x70 + piVar9[0x17]) + -1 == param_2)) {
					piVar9[0x19] = 1;
					*(int *)(puVar3 + param_2 * 0x78 + 0x12) = 0;
				}
				piVar7 = piVar7 + 1;
				uVar4 = uVar4 - 1;
			} while (uVar4 != 0);
		}
		iVar2 = *(int *)(puVar3 + param_2 * 0x78);
		if ((0x43 < iVar2) && (iVar2 < 0x47)) {
			*(undefined4 *)(puVar3 + param_2 * 0x78 + 0x48) = 0;
		}
	}
	return;
}

longlong ItemMiscIdIdx(int param_1)

{
	int *piVar1;
	longlong lVar2;

	piVar1 = (int *)&DAT_100fc828;
	lVar2 = 0;
	while ((*piVar1 == 0 || (param_1 != piVar1[0xe]))) {
		piVar1 = piVar1 + 0x13;
		lVar2 = lVar2 + 1;
	}
	return lVar2;
}

void OperateShrine(ulonglong param_1, uint param_2, ulonglong param_3, undefined8 param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	ulonglong uVar5;
	ulonglong uVar6;
	undefined4 uVar7;
	undefined4 uVar8;
	undefined4 uVar9;
	int iVar10;
	undefined *puVar11;
	undefined4 in_stack_ffffff48;

	puVar3 = PTR_DAT_100f1f60;
	puVar2 = PTR_DAT_100f1948;
	puVar11 = PTR_DAT_100f18c8;
	puVar1 = PTR_DAT_100f1824;
	ppuVar4 = &toc;
	uVar6 = ZEXT48(PTR_DAT_100f18cc);
	if (*(int *)PTR_DAT_100f18cc != 0) {
		*(undefined4 *)PTR_DAT_100f18cc = 0;
		*(undefined4 *)puVar11 = 0;
	}
	iVar10 = param_2 * 0x78;
	if (puVar2[iVar10 + 0x40] != '\0') {
		puVar11 = puVar2 + iVar10;
		uVar5 = param_3;
		SetRndSeed(*(undefined4 *)(puVar11 + 0x54));
		puVar2[iVar10 + 0x40] = '\0';
		if (*(int *)puVar3 == 0) {
			uVar5 = (ulonglong) * (uint *)(puVar11 + 8);
			PlaySfxLoc(param_3, (ulonglong) * (uint *)(puVar11 + 4), uVar5, uVar6, param_5, (int)param_6,
			    (int)param_7, (int)param_8, in_stack_ffffff48);
			*(undefined4 *)(puVar11 + 0x10) = 1;
			*(undefined4 *)(puVar11 + 0x18) = 1;
		} else {
			*(undefined4 *)(puVar11 + 0x24) = *(undefined4 *)(puVar11 + 0x20);
			*(undefined4 *)(puVar11 + 0x10) = 0;
		}
		uVar9 = (undefined4)param_8;
		uVar8 = (undefined4)param_7;
		uVar7 = (undefined4)param_6;
		if (*(uint *)(puVar2 + iVar10 + 0x58) < 0x1a) {
			// WARNING: Could not recover jumptable at 0x1008951c. Too many branches
			// WARNING: Treating indirect jump as call
			(**(code **)(ppuVar4[-0x16d0] + *(uint *)(puVar2 + iVar10 + 0x58) * 4))();
			return;
		}
		CalcPlrInv(param_1, 1, uVar5, uVar6, param_5, param_6, param_7, param_8, in_stack_ffffff48);
		*(undefined4 *)ppuVar4[-0x1daf] = 0xff;
		if ((uint)param_1 == *(uint *)puVar1) {
			NetSendCmdParam2(0, 0x2e, (ulonglong)((uint)param_1 & 0xffff), (ulonglong)(param_2 & 0xffff), param_5,
			    uVar7, uVar8, uVar9, in_stack_ffffff48);
		}
	}
	return;
}

void OperateSkelBook(int param_1, uint param_2, int param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	char *pcVar1;
	uint uVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	longlong lVar5;
	undefined uVar6;
	undefined uVar8;
	undefined8 uVar7;
	undefined uVar10;
	undefined8 uVar9;
	undefined uVar11;
	undefined uVar13;
	undefined4 uVar12;
	int iVar14;
	undefined *puVar15;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	puVar3 = PTR_DAT_100f1f60;
	puVar15 = PTR_DAT_100f1948;
	uVar10 = (undefined)param_5;
	uVar8 = (undefined)param_4;
	uVar13 = (undefined)param_7;
	uVar11 = (undefined)param_6;
	uVar6 = (undefined)param_3;
	ppuVar4 = &toc;
	iVar14 = param_2 * 0x78;
	pcVar1 = PTR_DAT_100f1948 + iVar14 + 0x40;
	if (*pcVar1 != '\0') {
		if (*(int *)PTR_DAT_100f1f60 == 0) {
			uVar2 = *(uint *)(PTR_DAT_100f1948 + iVar14 + 8);
			uVar6 = (undefined)uVar2;
			ppuVar4 = &toc;
			PlaySfxLoc(0x39, (ulonglong) * (uint *)(PTR_DAT_100f1948 + iVar14 + 4), (ulonglong)uVar2, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
		}
		puVar15 = puVar15 + iVar14;
		*pcVar1 = '\0';
		*(int *)(puVar15 + 0x24) = *(int *)(puVar15 + 0x24) + 2;
		if (*(int *)puVar3 == 0) {
			SetRndSeed(*(undefined4 *)(puVar15 + 0x54));
			lVar5 = random(0xa1, 5, uVar6, uVar8, uVar10, uVar11, uVar13, (char)param_8, in_stack_ffffffa8,
			    in_stack_ffffffaf, in_stack_ffffffbb);
			if ((int)lVar5 == 0) {
				uVar7 = 0;
				uVar9 = 0x18;
				uVar12 = 0;
				CreateTypeItem(*(int *)(puVar15 + 4), *(int *)(puVar15 + 8), 0, 0, 0x18, param_3, 0, (char)param_8,
				    in_stack_ffffffa8);
			} else {
				uVar7 = 0;
				uVar9 = 0x15;
				uVar12 = 0;
				CreateTypeItem(*(int *)(puVar15 + 4), *(int *)(puVar15 + 8), 0, 0, 0x15, param_3, 0, (char)param_8,
				    in_stack_ffffffa8);
			}
			if (param_1 == *(int *)ppuVar4[-0x1deb]) {
				NetSendCmdParam1(0, 0x2d, (ulonglong)(param_2 & 0xffff), uVar7, uVar9, param_3, uVar12, param_8,
				    in_stack_ffffffa8);
			}
		}
	}
	return;
}

void OperateBookCase(int param_1, uint param_2, int param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	char *pcVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	undefined8 uVar5;
	undefined uVar6;
	undefined8 uVar7;
	undefined8 uVar8;
	undefined4 uVar9;
	int iVar10;
	undefined *puVar11;
	undefined4 in_stack_ffffffa8;

	puVar3 = PTR_DAT_100f1f60;
	puVar11 = PTR_DAT_100f1948;
	puVar2 = PTR_DAT_100f187c;
	ppuVar4 = &toc;
	iVar10 = param_2 * 0x78;
	pcVar1 = PTR_DAT_100f1948 + iVar10 + 0x40;
	if (*pcVar1 != '\0') {
		if (*(int *)PTR_DAT_100f1f60 == 0) {
			ppuVar4 = &toc;
			PlaySfxLoc(0x39, (ulonglong) * (uint *)(PTR_DAT_100f1948 + iVar10 + 4),
			    (ulonglong) * (uint *)(PTR_DAT_100f1948 + iVar10 + 8), param_4, param_5, param_6,
			    param_7, param_8, in_stack_ffffffa8);
		}
		puVar11 = puVar11 + iVar10;
		*pcVar1 = '\0';
		*(int *)(puVar11 + 0x24) = *(int *)(puVar11 + 0x24) + -2;
		if (*(int *)puVar3 == 0) {
			SetRndSeed(*(undefined4 *)(puVar11 + 0x54));
			uVar6 = 0;
			uVar7 = 0;
			uVar8 = 0x18;
			uVar9 = 0;
			CreateTypeItem(*(int *)(puVar11 + 4), *(int *)(puVar11 + 8), 0, 0, 0x18, param_3, 0, (char)param_8,
			    in_stack_ffffffa8);
			uVar5 = QuestStatus(3);
			if (((((int)uVar5 != 0) && (*(int *)(puVar2 + 0x47c) == *(int *)(ppuVar4[-0x1c23] + 0x44))) && (puVar2[0x444] == -1)) && (*(int *)(puVar2 + 0x438) != 0)) {
				*(undefined4 *)(puVar2 + 0x474) = 0x95;
				M_StartStand(0, *(int *)(puVar2 + 1000), uVar6, (char)uVar7, (char)uVar8, (char)param_3,
				    (char)uVar9, (char)param_8, in_stack_ffffffa8);
				puVar2[0x3a8] = 5;
				*(undefined4 *)(puVar2 + 0x3a4) = 0x11;
			}
			if (param_1 == *(int *)ppuVar4[-0x1deb]) {
				NetSendCmdParam1(0, 0x2d, (ulonglong)(param_2 & 0xffff), uVar7, uVar8, param_3, uVar9, param_8,
				    in_stack_ffffffa8);
			}
		}
	}
	return;
}

void OperateDecap(int param_1, uint param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined **ppuVar2;
	undefined8 uVar3;
	undefined *puVar4;
	undefined4 in_stack_ffffffb8;

	puVar1 = PTR_DAT_100f1f60;
	puVar4 = PTR_DAT_100f1948;
	ppuVar2 = &toc;
	if ((PTR_DAT_100f1948[param_2 * 0x78 + 0x40] != '\0') && (PTR_DAT_100f1948[param_2 * 0x78 + 0x40] = '\0', *(int *)puVar1 == 0)) {
		puVar4 = puVar4 + param_2 * 0x78;
		SetRndSeed(*(undefined4 *)(puVar4 + 0x54));
		uVar3 = 0;
		CreateRndItem(*(int *)(puVar4 + 4), *(int *)(puVar4 + 8), 0, (int)param_3, 0, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffffb8);
		if (param_1 == *(int *)ppuVar2[-0x1deb]) {
			NetSendCmdParam1(0, 0x2d, (ulonglong)(param_2 & 0xffff), param_3, uVar3, param_6, param_7, param_8,
			    in_stack_ffffffb8);
		}
	}
	return;
}

void OperateArmorStand(int param_1, uint param_2, int param_3, undefined8 param_4, undefined8 param_5,
    int param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	byte bVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	longlong lVar4;
	undefined *puVar5;
	undefined uVar6;
	int iVar7;
	undefined *puVar8;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined in_stack_ffffffcb;

	puVar5 = PTR_DAT_100f1948;
	uVar6 = (undefined)param_3;
	ppuVar3 = &toc;
	iVar7 = param_2 * 0x78;
	if (PTR_DAT_100f1948[iVar7 + 0x40] != '\0') {
		puVar8 = PTR_DAT_100f1948 + iVar7;
		PTR_DAT_100f1948[iVar7 + 0x40] = '\0';
		puVar2 = PTR_DAT_100f1f60;
		*(int *)(puVar8 + 0x24) = *(int *)(puVar8 + 0x24) + 1;
		if (*(int *)puVar2 == 0) {
			SetRndSeed(*(undefined4 *)(puVar8 + 0x54));
			lVar4 = random(0, 2, uVar6, (char)param_4, (char)param_5, (char)param_6, (char)param_7,
			    (char)param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb);
			bVar1 = *ppuVar3[-0x1df9];
			uVar6 = (undefined)param_8;
			if (bVar1 < 6) {
				param_4 = 6;
				param_5 = 0;
				param_7 = 0;
				param_6 = param_3;
				CreateTypeItem(*(int *)(puVar8 + 4), *(int *)(puVar8 + 8), 1, 6, 0, param_3, 0, uVar6,
				    in_stack_ffffffb8);
			} else {
				if ((bVar1 < 6) || (9 < bVar1)) {
					if ((bVar1 < 10) || (0xc < bVar1)) {
						if ((0xc < bVar1) && (bVar1 < 0x11)) {
							puVar5 = puVar5 + iVar7;
							param_4 = 9;
							param_5 = 0;
							param_7 = 0;
							param_6 = param_3;
							CreateTypeItem(*(int *)(puVar5 + 4), *(int *)(puVar5 + 8), 1, 9, 0, param_3, 0, uVar6,
							    in_stack_ffffffb8);
						}
					} else {
						puVar5 = puVar5 + iVar7;
						param_4 = 9;
						param_5 = 0;
						param_7 = 0;
						param_6 = param_3;
						CreateTypeItem(*(int *)(puVar5 + 4), *(int *)(puVar5 + 8), 0, 9, 0, param_3, 0, uVar6,
						    in_stack_ffffffb8);
					}
				} else {
					param_4 = 8;
					param_5 = 0;
					param_7 = 0;
					param_6 = param_3;
					CreateTypeItem(*(int *)(puVar8 + 4), *(int *)(puVar8 + 8), (int)lVar4, 8, 0, param_3, 0, uVar6,
					    in_stack_ffffffb8);
				}
			}
			if (param_1 == *(int *)ppuVar3[-0x1deb]) {
				NetSendCmdParam1(0, 0x2d, (ulonglong)(param_2 & 0xffff), param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffffb8);
			}
		}
	}
	return;
}

void FindValidShrine(undefined4 param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9, undefined param_10,
    undefined4 param_11)

{
	int iVar1;
	bool bVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined in_stack_ffffffcb;

	puVar7 = PTR_DAT_100f34ac;
	puVar6 = PTR_DAT_100f34a8;
	puVar5 = PTR_DAT_100f34a4;
	puVar4 = PTR_DAT_100f17ec;
	puVar3 = PTR_DAT_100f17e0;
	lVar14 = (longlong)param_8;
	lVar13 = (longlong)param_7;
	lVar12 = (longlong)param_6;
	lVar11 = (longlong)param_5;
	lVar10 = (longlong)param_4;
	lVar9 = (longlong)param_3;
	bVar2 = false;
	do {
		lVar8 = random(0, 0x1a, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13,
		    (char)lVar14, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb);
		iVar1 = (int)lVar8;
		if ((((int)(char)puVar7[iVar1] <= (int)(uint)(byte)*puVar4) && ((int)(uint)(byte)*puVar4 <= (int)(char)puVar6[iVar1])) && (iVar1 != 8)) {
			bVar2 = true;
		}
		if (bVar2) {
			if ((*puVar3 == '\x01') || (puVar5[iVar1] != '\x01')) {
				if ((*puVar3 == '\x01') && (puVar5[iVar1] == '\x02')) {
					bVar2 = false;
				} else {
					bVar2 = true;
				}
			} else {
				bVar2 = false;
			}
		}
	} while (!bVar2);
	return;
}

void OperateGoatShrine(ulonglong param_1, uint param_2, ulonglong param_3, undefined8 param_4,
    ulonglong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined4 uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined7 uVar7;
	undefined uVar8;
	undefined7 uVar9;
	undefined uVar10;
	undefined7 uVar11;
	undefined uVar12;
	undefined7 uVar13;
	undefined uVar14;
	undefined7 uVar15;
	undefined uVar16;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;

	uVar6 = (undefined)param_3;
	uVar15 = (undefined7)((ulonglong)param_8 >> 8);
	uVar16 = (undefined)param_8;
	uVar13 = (undefined7)((ulonglong)param_7 >> 8);
	uVar14 = (undefined)param_7;
	uVar11 = (undefined7)((ulonglong)param_6 >> 8);
	uVar12 = (undefined)param_6;
	uVar9 = (undefined7)(param_5 >> 8);
	uVar10 = (undefined)param_5;
	uVar7 = (undefined7)((ulonglong)param_4 >> 8);
	uVar8 = (undefined)param_4;
	ppuVar3 = &toc;
	uVar5 = (undefined)((longlong)(int)param_2 * 0x78);
	puVar2 = PTR_DAT_100f1948 + (int)((longlong)(int)param_2 * 0x78);
	SetRndSeed(*(undefined4 *)(puVar2 + 0x54));
	uVar4 = FindValidShrine(param_2, uVar5, uVar6, uVar8, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffb8,
	    in_stack_ffffffbf, in_stack_ffffffc8);
	*(undefined4 *)(puVar2 + 0x58) = uVar4;
	OperateShrine(param_1, param_2, param_3, CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10),
	    CONCAT71(uVar11, uVar12), CONCAT71(uVar13, uVar14), CONCAT71(uVar15, uVar16),
	    in_stack_ffffffb8);
	puVar1 = (undefined4 *)ppuVar3[-0x1daf];
	*(undefined4 *)(puVar2 + 0x18) = 2;
	*puVar1 = 0xff;
	return;
}

void OperateCauldron(ulonglong param_1, uint param_2, ulonglong param_3, undefined8 param_4,
    ulonglong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined4 uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined7 uVar7;
	undefined uVar8;
	undefined7 uVar9;
	undefined uVar10;
	undefined7 uVar11;
	undefined uVar12;
	undefined7 uVar13;
	undefined uVar14;
	undefined7 uVar15;
	undefined uVar16;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;

	uVar6 = (undefined)param_3;
	uVar15 = (undefined7)((ulonglong)param_8 >> 8);
	uVar16 = (undefined)param_8;
	uVar13 = (undefined7)((ulonglong)param_7 >> 8);
	uVar14 = (undefined)param_7;
	uVar11 = (undefined7)((ulonglong)param_6 >> 8);
	uVar12 = (undefined)param_6;
	uVar9 = (undefined7)(param_5 >> 8);
	uVar10 = (undefined)param_5;
	uVar7 = (undefined7)((ulonglong)param_4 >> 8);
	uVar8 = (undefined)param_4;
	ppuVar3 = &toc;
	uVar5 = (undefined)((longlong)(int)param_2 * 0x78);
	puVar2 = PTR_DAT_100f1948 + (int)((longlong)(int)param_2 * 0x78);
	SetRndSeed(*(undefined4 *)(puVar2 + 0x54));
	uVar4 = FindValidShrine(param_2, uVar5, uVar6, uVar8, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffb8,
	    in_stack_ffffffbf, in_stack_ffffffc8);
	*(undefined4 *)(puVar2 + 0x58) = uVar4;
	OperateShrine(param_1, param_2, param_3, CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10),
	    CONCAT71(uVar11, uVar12), CONCAT71(uVar13, uVar14), CONCAT71(uVar15, uVar16),
	    in_stack_ffffffb8);
	puVar1 = (undefined4 *)ppuVar3[-0x1daf];
	*(undefined4 *)(puVar2 + 0x24) = 3;
	*(undefined4 *)(puVar2 + 0x10) = 0;
	*puVar1 = 0xff;
	return;
}

undefined8
OperateFountains(ulonglong param_1, uint param_2, ulonglong param_3, ulonglong param_4, ulonglong param_5,
    undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined4 param_9)

{
	int *piVar1;
	undefined *puVar2;
	undefined *puVar3;
	bool bVar4;
	undefined *puVar5;
	undefined *puVar6;
	int iVar8;
	longlong lVar7;
	ulonglong uVar9;
	undefined8 uVar10;
	int iVar11;
	ulonglong uVar12;
	undefined4 uVar13;
	undefined4 uVar14;
	undefined4 uVar15;
	int iVar16;
	int iVar17;
	undefined8 uVar18;
	longlong lVar19;
	undefined *puVar20;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;

	puVar6 = PTR_DAT_100f1f60;
	puVar5 = PTR_DAT_100f1948;
	puVar3 = PTR_DAT_100f1828;
	puVar2 = PTR_DAT_100f1824;
	iVar8 = (int)param_1;
	uVar9 = ZEXT48(&toc);
	puVar20 = PTR_DAT_100f1948 + param_2 * 0x78;
	uVar18 = 0;
	SetRndSeed(*(undefined4 *)(puVar20 + 0x54));
	iVar17 = (int)uVar9;
	iVar16 = *(int *)(puVar5 + param_2 * 0x78);
	uVar13 = (undefined4)param_6;
	uVar14 = (undefined4)param_7;
	uVar15 = (undefined4)param_8;
	if (iVar16 == 0x4c) {
		if (*(int *)puVar6 != 0) {
			return 0;
		}
		if (iVar8 != *(int *)puVar2) {
			return 0;
		}
		iVar8 = iVar8 * 0x55ec;
		piVar1 = (int *)(puVar3 + iVar8 + 0x1a8);
		if (*piVar1 < *(int *)(puVar3 + iVar8 + 0x1ac)) {
			PlaySfxLoc(0x6d, (ulonglong) * (uint *)(puVar20 + 4), (ulonglong) * (uint *)(puVar20 + 8), param_4,
			    param_5, uVar13, uVar14, uVar15, in_stack_ffffff98);
			puVar2 = puVar3 + iVar8;
			*piVar1 = *piVar1 + 0x40;
			*(int *)(puVar2 + 0x1a0) = *(int *)(puVar2 + 0x1a0) + 0x40;
			iVar16 = *(int *)(puVar3 + iVar8 + 0x1ac);
			if (iVar16 < *piVar1) {
				*piVar1 = iVar16;
				*(int *)(puVar2 + 0x1a0) = *(int *)(puVar3 + iVar8 + 0x1a4);
			}
			uVar18 = 1;
		} else {
			PlaySfxLoc(0x6d, (ulonglong) * (uint *)(puVar20 + 4), (ulonglong) * (uint *)(puVar20 + 8), param_4,
			    param_5, uVar13, uVar14, uVar15, in_stack_ffffff98);
		}
	} else {
		if (iVar16 < 0x4c) {
			if (iVar16 == 0x42) {
				if (*(int *)puVar6 != 0) {
					return 0;
				}
				if (iVar8 != *(int *)puVar2) {
					return 0;
				}
				iVar8 = iVar8 * 0x55ec;
				piVar1 = (int *)(puVar3 + iVar8 + 0x194);
				if (*piVar1 < *(int *)(puVar3 + iVar8 + 0x198)) {
					PlaySfxLoc(0x6d, (ulonglong) * (uint *)(puVar20 + 4), (ulonglong) * (uint *)(puVar20 + 8),
					    param_4, param_5, uVar13, uVar14, uVar15, in_stack_ffffff98);
					puVar2 = puVar3 + iVar8;
					*piVar1 = *piVar1 + 0x40;
					*(int *)(puVar2 + 0x18c) = *(int *)(puVar2 + 0x18c) + 0x40;
					iVar16 = *(int *)(puVar3 + iVar8 + 0x198);
					if (iVar16 < *piVar1) {
						*piVar1 = iVar16;
						*(int *)(puVar2 + 0x18c) = *(int *)(puVar3 + iVar8 + 400);
					}
					uVar18 = 1;
				} else {
					PlaySfxLoc(0x6d, (ulonglong) * (uint *)(puVar20 + 4), (ulonglong) * (uint *)(puVar20 + 8),
					    param_4, param_5, uVar13, uVar14, uVar15, in_stack_ffffff98);
				}
			}
		} else {
			if (iVar16 == 0x52) {
				if (puVar20[0x40] != '\0') {
					uVar18 = 0xffffffffffffffff;
					lVar19 = -1;
					bVar4 = false;
					iVar16 = 0;
					if (*(int *)puVar6 == 0) {
						param_3 = (ulonglong) * (uint *)(puVar20 + 8);
						PlaySfxLoc(0x6d, (ulonglong) * (uint *)(puVar20 + 4), param_3, param_4, param_5, uVar13,
						    uVar14, uVar15, in_stack_ffffff98);
					}
					puVar20[0x40] = 0;
					if (*(int *)puVar6 != 0) {
						return 0;
					}
					if (iVar8 != *(int *)puVar2) {
						return 0;
					}
					do {
						uVar10 = 4;
						lVar7 = random(0, 4, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
						    (char)param_7, (char)param_8, in_stack_ffffff98, in_stack_ffffff9f,
						    in_stack_ffffffab);
						iVar17 = (int)lVar7;
						if ((int)lVar19 != iVar17) {
							iVar11 = (int)uVar18;
							if (iVar17 == 2) {
								ModifyPlrDex(param_1, iVar11, param_3, param_4, param_5, param_6, param_7, param_8,
								    in_stack_ffffff98);
								uVar10 = uVar18;
							} else {
								if (iVar17 < 2) {
									if (iVar17 == 0) {
										ModifyPlrStr(param_1, iVar11, param_3, param_4, param_5, param_6, param_7, param_8,
										    in_stack_ffffff98);
										uVar10 = uVar18;
									} else {
										if (-1 < iVar17) {
											ModifyPlrMag(param_1, iVar11, param_3, param_4, param_5, param_6, param_7, param_8,
											    in_stack_ffffff98);
											uVar10 = uVar18;
										}
									}
								} else {
									if (iVar17 < 4) {
										ModifyPlrVit(param_1, iVar11, param_3, param_4, param_5, param_6, param_7, param_8,
										    in_stack_ffffff98);
										uVar10 = uVar18;
									}
								}
							}
							iVar16 = iVar16 + 1;
							uVar18 = 1;
							lVar19 = lVar7;
						}
						iVar17 = (int)uVar9;
						uVar15 = (undefined4)param_8;
						uVar14 = (undefined4)param_7;
						uVar13 = (undefined4)param_6;
						if (1 < iVar16) {
							bVar4 = true;
						}
					} while (!bVar4);
					CheckStats(param_1, uVar10, param_3, param_4, param_5, uVar13, uVar14, uVar15, in_stack_ffffff98);
					uVar18 = 1;
					if (iVar8 == *(int *)puVar2) {
						NetSendCmdParam1(0, 0x2d, (ulonglong)(param_2 & 0xffff), param_4, param_5, uVar13, uVar14, uVar15,
						    in_stack_ffffff98);
					}
				}
			} else {
				if (((iVar16 < 0x52) && (0x50 < iVar16)) && (puVar20[0x40] != '\0')) {
					if (*(int *)puVar6 == 0) {
						PlaySfxLoc(0x6d, (ulonglong) * (uint *)(puVar20 + 4), (ulonglong) * (uint *)(puVar20 + 8),
						    param_4, param_5, uVar13, uVar14, uVar15, in_stack_ffffff98);
					}
					puVar20[0x40] = 0;
					if (*(int *)puVar6 != 0) {
						return 0;
					}
					puVar3 = puVar3 + iVar8 * 0x55ec;
					uVar9 = (ulonglong) * (uint *)(puVar3 + 0x3c);
					uVar13 = 0x27;
					uVar14 = 0xffffffff;
					uVar12 = (ulonglong) * (uint *)(puVar3 + 0x70);
					iVar16 = iVar8;
					AddMissile((ulonglong) * (uint *)(puVar3 + 0x38), uVar9, (ulonglong) * (uint *)(puVar3 + 0x38), uVar9, uVar12, 0x27, 0xffffffffffffffff, param_1, in_stack_ffffff98,
					    in_stack_ffffff9f, 0, (uint) * *(byte **)(iVar17 + -0x7794) << 1);
					uVar18 = 1;
					if (iVar8 == *(int *)puVar2) {
						NetSendCmdParam1(0, 0x2d, (ulonglong)(param_2 & 0xffff), uVar9, uVar12, uVar13, uVar14, iVar16,
						    in_stack_ffffff98);
					}
				}
			}
		}
	}
	**(undefined4 **)(iVar17 + -0x76bc) = 0xff;
	return uVar18;
}

void OperateWeaponRack(int iParm1, uint uParm2, undefined8 uParm3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined4 uParm8)

{
	char *pcVar1;
	int *piVar2;
	int iVar3;
	undefined **ppuVar4;
	longlong lVar5;
	undefined uVar7;
	undefined *puVar6;
	undefined8 uVar8;
	int iVar9;
	undefined4 uVar10;
	int iVar11;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	puVar6 = PTR_DAT_100f1948;
	iVar9 = (int)uParm3;
	uVar7 = (undefined)uParm3;
	ppuVar4 = &toc;
	iVar11 = uParm2 * 0x78;
	pcVar1 = PTR_DAT_100f1948 + iVar11 + 0x40;
	if (*pcVar1 != '\0') {
		SetRndSeed(*(undefined4 *)(PTR_DAT_100f1948 + iVar11 + 0x54));
		lVar5 = random(0, 4, uVar7, param_4, param_5, param_6, param_7, (char)uParm8, in_stack_ffffffa8,
		    in_stack_ffffffaf, in_stack_ffffffbb);
		iVar3 = (int)lVar5 + 1;
		if (iVar3 == 3) {
			unaff_r31 = 3;
		} else {
			if (iVar3 < 3) {
				if (iVar3 == 1) {
					unaff_r31 = 1;
				} else {
					if (0 < iVar3) {
						unaff_r31 = 2;
					}
				}
			} else {
				if (iVar3 < 5) {
					unaff_r31 = 4;
				}
			}
		}
		puVar6 = puVar6 + iVar11;
		*pcVar1 = '\0';
		piVar2 = (int *)ppuVar4[-0x1c1c];
		*(int *)(puVar6 + 0x24) = *(int *)(puVar6 + 0x24) + 1;
		if (*piVar2 == 0) {
			if ((byte)*ppuVar4[-0x1de5] < 2) {
				uVar8 = 0;
				uVar10 = 0;
				CreateTypeItem(*(int *)(puVar6 + 4), *(int *)(puVar6 + 8), 0, unaff_r31, 0, iVar9, 0, (char)uParm8,
				    in_stack_ffffffa8);
			} else {
				uVar8 = 0;
				uVar10 = 0;
				CreateTypeItem(*(int *)(puVar6 + 4), *(int *)(puVar6 + 8), 1, unaff_r31, 0, iVar9, 0, (char)uParm8,
				    in_stack_ffffffa8);
			}
			if (iParm1 == *(int *)ppuVar4[-0x1deb]) {
				NetSendCmdParam1(0, 0x2d, (ulonglong)(uParm2 & 0xffff), unaff_r31, uVar8, iVar9, uVar10, uParm8,
				    in_stack_ffffffa8);
			}
		}
	}
	return;
}

void OperateStoryBook(int param_1, uint param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	ulonglong uVar1;
	ulonglong uVar2;
	undefined *puVar3;
	undefined4 in_stack_ffffffc8;

	puVar3 = PTR_DAT_100f1948 + param_2 * 0x78;
	if ((((puVar3[0x40] != '\0') && (*(int *)PTR_DAT_100f1f60 == 0)) && (*PTR_DAT_100f18a0 == '\0'))
	    && (param_1 == *(int *)PTR_DAT_100f1824)) {
		*(undefined4 *)(puVar3 + 0x24) = *(undefined4 *)(puVar3 + 100);
		uVar1 = (ulonglong) * (uint *)(puVar3 + 4);
		uVar2 = (ulonglong) * (uint *)(puVar3 + 8);
		PlaySfxLoc(0x39, uVar1, uVar2, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		InitQTextMsg(*(int *)(puVar3 + 0x5c), uVar1, uVar2, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
		NetSendCmdParam1(0, 0x2d, (ulonglong)(param_2 & 0xffff), param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
	}
	return;
}

void OperateLazStand(int param_1, int param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	longlong lVar1;
	char *pcVar2;
	undefined *puVar3;
	undefined4 in_stack_ffffffc8;
	int local_8;
	int local_4;

	lVar1 = ZEXT48(PTR_DAT_100f1948) + (longlong)param_2 * 0x78 + 0x40;
	pcVar2 = (char *)lVar1;
	if ((((*pcVar2 != '\0') && (*(int *)PTR_DAT_100f1f60 == 0)) && (*PTR_DAT_100f18a0 == '\0')) && (param_1 == *(int *)PTR_DAT_100f1824)) {
		puVar3 = PTR_DAT_100f1948 + (int)((longlong)param_2 * 0x78);
		*(int *)(puVar3 + 0x24) = *(int *)(puVar3 + 0x24) + 1;
		*pcVar2 = '\0';
		GetSuperItemLoc(*(int *)(puVar3 + 4), *(int *)(puVar3 + 8), &local_4, &local_8, (char)lVar1, param_6,
		    param_7, param_8, in_stack_ffffffc8);
		SpawnQuestItem(0x21, local_4, local_8, 0, 0, param_6, param_7, param_8, in_stack_ffffffc8);
	}
	return;
}

void OperateObject(undefined8 param_1, int param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;

	uVar1 = *(uint *)(PTR_DAT_100f1948 + param_2 * 0x78);
	if (uVar1 < 0x62) {
		// WARNING: Could not recover jumptable at 0x1008bb78. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(PTR_PTR_LAB_100f348c + uVar1 * 4))(*(code **)(PTR_PTR_LAB_100f348c + uVar1 * 4), (ulonglong)uVar1, param_3,
		    (ulonglong) * (uint *)PTR_DAT_100f1824,
		    (ulonglong)(param_1._4_4_ == *(uint *)PTR_DAT_100f1824), param_6, param_7, param_8);
		return;
	}
	return;
}

void SyncOpL1Door(int param_1, int param_2, uint param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined8 uVar1;
	int *piVar2;
	undefined4 in_stack_ffffffc8;

	if (param_1 != *(int *)PTR_DAT_100f1824) {
		uVar1 = 0;
		if ((param_2 == 0x2b) && (*(int *)(PTR_DAT_100f1948 + param_3 * 0x78 + 100) == 0)) {
			uVar1 = 1;
		}
		if ((param_2 == 0x2c) && (*(int *)(PTR_DAT_100f1948 + param_3 * 0x78 + 100) == 1)) {
			uVar1 = 1;
		}
		if ((int)uVar1 != 0) {
			piVar2 = (int *)(PTR_DAT_100f1948 + param_3 * 0x78);
			if (*piVar2 == 1) {
				OperateL1LDoor(-1, param_3, 0, uVar1, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
			}
			if (*piVar2 == 2) {
				OperateL1RDoor(-1, param_3, 0, uVar1, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
			}
		}
	}
	return;
}

void SyncOpL2Door(int param_1, int param_2, uint param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined8 uVar1;
	int *piVar2;
	undefined4 in_stack_ffffffc8;

	if (param_1 != *(int *)PTR_DAT_100f1824) {
		uVar1 = 0;
		if ((param_2 == 0x2b) && (*(int *)(PTR_DAT_100f1948 + param_3 * 0x78 + 100) == 0)) {
			uVar1 = 1;
		}
		if ((param_2 == 0x2c) && (*(int *)(PTR_DAT_100f1948 + param_3 * 0x78 + 100) == 1)) {
			uVar1 = 1;
		}
		if ((int)uVar1 != 0) {
			piVar2 = (int *)(PTR_DAT_100f1948 + param_3 * 0x78);
			if (*piVar2 == 0x2a) {
				OperateL2LDoor(-1, param_3, 0, uVar1, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
			}
			if (*piVar2 == 0x2b) {
				OperateL2RDoor(-1, param_3, 0, uVar1, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
			}
		}
	}
	return;
}

void SyncOpL3Door(int param_1, int param_2, uint param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined8 uVar1;
	int *piVar2;
	undefined4 in_stack_ffffffc8;

	if (param_1 != *(int *)PTR_DAT_100f1824) {
		uVar1 = 0;
		if ((param_2 == 0x2b) && (*(int *)(PTR_DAT_100f1948 + param_3 * 0x78 + 100) == 0)) {
			uVar1 = 1;
		}
		if ((param_2 == 0x2c) && (*(int *)(PTR_DAT_100f1948 + param_3 * 0x78 + 100) == 1)) {
			uVar1 = 1;
		}
		if ((int)uVar1 != 0) {
			piVar2 = (int *)(PTR_DAT_100f1948 + param_3 * 0x78);
			if (*piVar2 == 0x4a) {
				OperateL3LDoor(-1, param_3, 0, uVar1, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
			}
			if (*piVar2 == 0x4b) {
				OperateL3RDoor(-1, param_3, 0, uVar1, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
			}
		}
	}
	return;
}

void SyncOpObject(undefined8 param_1, undefined8 param_2, int param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	if (*(uint *)(PTR_DAT_100f1948 + param_3 * 0x78) < 0x62) {
		// WARNING: Could not recover jumptable at 0x1008c0d0. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(PTR_PTR_LAB_100f3488 + *(uint *)(PTR_DAT_100f1948 + param_3 * 0x78) * 4))();
		return;
	}
	return;
}

void BreakCrux(longlong lParm1)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	ulonglong uVar5;
	longlong lVar6;
	undefined8 uVar7;
	int *piVar8;
	int iVar9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;

	piVar8 = (int *)PTR_DAT_100f1e40;
	puVar4 = PTR_DAT_100f1e3c;
	puVar3 = PTR_DAT_100f1948;
	uVar7 = 1;
	lVar6 = ZEXT48(PTR_DAT_100f1948) + lParm1 * 0x78;
	iVar2 = (int)(lParm1 * 0x78);
	iVar1 = (int)lVar6;
	*(undefined4 *)(iVar1 + 0x10) = 1;
	iVar9 = 1;
	*(undefined4 *)(iVar1 + 0x24) = 1;
	*(undefined4 *)(iVar1 + 0x18) = 1;
	*(undefined4 *)(iVar1 + 0x38) = 1;
	*(undefined4 *)(iVar1 + 0x3c) = 1;
	*(undefined *)(iVar1 + 0x34) = 0xff;
	*(undefined *)(iVar1 + 0x40) = 0;
	uVar5 = (ulonglong) * (uint *)puVar4;
	iVar1 = 1;
	if (0 < (int)*(uint *)puVar4) {
		do {
			iVar9 = iVar1;
			if ((((*(int *)(puVar3 + *piVar8 * 0x78) == 0x14) || (*(int *)(puVar3 + *piVar8 * 0x78) - 0x15U < 2)) && (*(int *)(puVar3 + iVar2 + 0x74) == *(int *)(puVar3 + *piVar8 * 0x78 + 0x74))) && ((puVar3 + *piVar8 * 0x78)[0x34] != -1)) {
				iVar9 = 0;
			}
			piVar8 = piVar8 + 1;
			uVar5 = uVar5 - 1;
			iVar1 = iVar9;
		} while (uVar5 != 0);
	}
	if (iVar9 != 0) {
		if (*(int *)PTR_DAT_100f1f60 == 0) {
			PlaySfxLoc(0x3e, (ulonglong) * (uint *)(puVar3 + iVar2 + 4),
			    (ulonglong) * (uint *)(puVar3 + iVar2 + 8), lVar6, 1, piVar8, iVar9, in_r10,
			    in_stack_ffffffc8);
		}
		puVar3 = puVar3 + iVar2;
		ObjChangeMap((ulonglong) * (uint *)(puVar3 + 0x58), (ulonglong) * (uint *)(puVar3 + 0x5c),
		    *(int *)(puVar3 + 0x60), (ulonglong) * (uint *)(puVar3 + 100), uVar7, piVar8, iVar9,
		    in_r10, in_stack_ffffffc8);
	}
	return;
}

void BreakBarrel(undefined8 param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
    longlong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	char cVar1;
	short sVar2;
	int *piVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	longlong lVar11;
	undefined uVar12;
	longlong lVar13;
	longlong param_6_00;
	char *pcVar14;
	undefined4 uVar15;
	undefined4 uVar16;
	int *piVar17;
	int iVar18;
	uint *puVar19;
	int iVar20;
	longlong param_2_00;
	int iVar21;
	int iVar22;
	int iVar23;
	ulonglong uVar24;
	uint uVar25;
	undefined4 param_9_00;
	undefined in_stack_ffffff8f;
	undefined4 in_stack_ffffff98;

	puVar10 = PTR_DAT_100f1f60;
	puVar9 = PTR_DAT_100f1954;
	puVar8 = PTR_DAT_100f1950;
	puVar7 = PTR_DAT_100f194c;
	puVar6 = PTR_DAT_100f1948;
	puVar5 = PTR_DAT_100f1824;
	uVar16 = (undefined4)param_8;
	uVar15 = (undefined4)param_7;
	param_2_00 = param_2 * 0x78;
	uVar24 = ZEXT48(PTR_DAT_100f1948);
	param_6_00 = uVar24 + param_2_00 + 0x40;
	pcVar14 = (char *)param_6_00;
	if (*pcVar14 != '\0') {
		uVar25 = (uint)param_1;
		iVar21 = (int)param_2_00;
		if ((int)param_4 == 0) {
			piVar3 = (int *)(PTR_DAT_100f1948 + iVar21 + 0x58);
			*piVar3 = *(int *)(PTR_DAT_100f1948 + iVar21 + 0x58) - (int)param_3;
			if ((uVar25 != *(uint *)puVar5) && (*piVar3 < 1)) {
				*piVar3 = 1;
			}
		} else {
			*(undefined4 *)(PTR_DAT_100f1948 + iVar21 + 0x58) = 0;
		}
		if (*(int *)(puVar6 + iVar21 + 0x58) < 1) {
			param_2_00 = uVar24 + param_2_00;
			*(int *)(puVar6 + iVar21 + 0x58) = 0;
			lVar11 = param_2_00 + 0x24;
			uVar12 = (undefined)lVar11;
			lVar13 = param_2_00 + 0x18;
			piVar3 = (int *)param_2_00;
			piVar3[4] = 1;
			piVar3[9] = 1;
			piVar3[6] = 1;
			piVar3[0xe] = 0;
			piVar3[0xf] = 1;
			*(undefined *)(piVar3 + 0xd) = 0xff;
			*pcVar14 = '\0';
			piVar3[0x11] = 1;
			if (*(int *)puVar10 == 0) {
				if (*piVar3 == 0x3a) {
					PlaySfxLoc(0xe, (ulonglong)(uint)piVar3[1], (ulonglong)(uint)piVar3[2], lVar11, lVar13,
					    pcVar14, uVar15, uVar16, param_9_00);
					iVar18 = piVar3[2] + -1;
					iVar21 = iVar18 * 2;
					while (true) {
						uVar16 = (undefined4)param_8;
						uVar15 = (undefined4)param_7;
						pcVar14 = (char *)param_6_00;
						if (piVar3[2] + 1 < iVar18)
							break;
						iVar20 = piVar3[1] + -1;
						iVar23 = iVar20 * 0xe0;
						iVar22 = iVar20 * 0x70;
						while (iVar20 <= piVar3[1] + 1) {
							sVar2 = *(short *)(iVar21 + *(int *)puVar9 + iVar23);
							if (0 < sVar2) {
								lVar13 = 1;
								param_6_00 = 0;
								MonsterTrapHit((longlong)sVar2 - 1, 1, 4, 0, 1, 0, param_7, (int)param_8, param_9_00);
							}
							cVar1 = *(char *)(iVar18 + *(int *)puVar8 + iVar22);
							if ('\0' < cVar1) {
								lVar13 = 0x10;
								param_6_00 = 1;
								param_7 = 0;
								param_8 = 0;
								PlayerMHit((longlong)cVar1 - 1, -1, 0, 8, 0x10, 1, 0, 0, param_9_00);
							}
							cVar1 = *(char *)(iVar18 + *(int *)puVar7 + iVar22);
							if ('\0' < cVar1) {
								param_2_00 = (longlong)cVar1 + -1;
								iVar4 = (int)param_2_00 * 0x78;
								if ((*(int *)(puVar6 + iVar4) == 0x3a) && (puVar6[iVar4 + 0x34] != -1)) {
									lVar13 = param_5;
									BreakBarrel(param_1, param_2_00, param_3, 1, param_5, param_6_00, param_7, param_8,
									    param_9_00);
								}
							}
							iVar23 = iVar23 + 0xe0;
							iVar22 = iVar22 + 0x70;
							iVar20 = iVar20 + 1;
						}
						iVar21 = iVar21 + 2;
						iVar18 = iVar18 + 1;
					}
				} else {
					puVar19 = (uint *)(piVar3 + 1);
					piVar17 = piVar3 + 2;
					PlaySfxLoc(0xf, (ulonglong)(uint)piVar3[1], (ulonglong)(uint)piVar3[2], lVar11, lVar13,
					    pcVar14, uVar15, uVar16, param_9_00);
					SetRndSeed(piVar3[0x15]);
					if (piVar3[0x17] < 2) {
						if (piVar3[0x18] == 0) {
							uVar12 = (char)param_5;
							CreateRndUseful(uVar25, *puVar19, *piVar17, (int)param_5, (char)lVar13, (char)pcVar14,
							    (char)uVar15, (char)uVar16, param_9_00, in_stack_ffffff8f, in_stack_ffffff98);
						} else {
							lVar13 = 0;
							uVar12 = (char)param_5;
							CreateRndItem(*puVar19, *piVar17, 0, (int)param_5, 0, (char)pcVar14, (char)uVar15,
							    (char)uVar16, param_9_00);
						}
					}
					if (7 < piVar3[0x17]) {
						SpawnSkeleton(*(int *)(puVar6 + iVar21 + 100), (ulonglong)*puVar19, *piVar17, uVar12,
						    (char)lVar13, (char)pcVar14, (char)uVar15, (char)uVar16, param_9_00);
					}
				}
				if (uVar25 == *(uint *)puVar5) {
					NetSendCmdParam2(0, 0x2f, (ulonglong)(uVar25 & 0xffff), (ulonglong)((uint)param_2 & 0xffff),
					    lVar13, pcVar14, uVar15, uVar16, param_9_00);
				}
			} else {
				*(int *)lVar11 = piVar3[8];
				piVar3[7] = 0;
				*(undefined4 *)lVar13 = 1000;
			}
		} else {
			if (*(int *)puVar10 == 0) {
				PlaySfxLoc(0x30, (ulonglong) * (uint *)(puVar6 + iVar21 + 4),
				    (ulonglong) * (uint *)(puVar6 + iVar21 + 8), param_4, param_5, pcVar14, uVar15, uVar16, param_9_00);
			}
		}
	}
	return;
}

void BreakObject(undefined8 uParm1, longlong lParm2, undefined param_3, undefined param_4,
    undefined param_5, undefined8 uParm6, undefined8 uParm7, undefined8 uParm8)

{
	uint uVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	longlong lVar4;
	int iVar5;
	undefined7 uVar6;
	undefined uVar7;
	undefined7 uVar8;
	undefined uVar9;
	undefined7 uVar10;
	undefined uVar11;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined1 in_stack_ffffffcb;

	uVar11 = (undefined)uParm8;
	uVar10 = (undefined7)((ulonglong)uParm8 >> 8);
	uVar9 = (undefined)uParm7;
	uVar8 = (undefined7)((ulonglong)uParm7 >> 8);
	uVar7 = (undefined)uParm6;
	uVar6 = (undefined7)((ulonglong)uParm6 >> 8);
	ppuVar3 = &toc;
	if ((int)uParm1 == -1) {
		lVar4 = 10;
	} else {
		puVar2 = PTR_DAT_100f1828 + (int)uParm1 * 0x55ec;
		uVar1 = *(uint *)(puVar2 + 0x5544);
		ppuVar3 = &toc;
		lVar4 = random(0xa3, ((ulonglong) * (uint *)(puVar2 + 0x5548) - (ulonglong)uVar1) + 1, param_3, param_4, param_5, uVar7, uVar9, uVar11, in_stack_ffffffb8, in_stack_ffffffbf,
		    in_stack_ffffffcb);
		lVar4 = (ulonglong)uVar1 + lVar4;
		iVar5 = (int)lVar4 * *(int *)(puVar2 + 0x5550);
		uVar1 = iVar5 / 100 + (iVar5 >> 0x1f);
		lVar4 = (ulonglong) * (uint *)(puVar2 + 0x555c) + (ulonglong) * (uint *)(puVar2 + 0x184) + lVar4 + ((longlong)(int)((ulonglong)((longlong)iVar5 * 0x51eb851f) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar1) + (ulonglong)(uVar1 >> 0x1f);
	}
	iVar5 = *(int *)(ppuVar3[-0x1da2] + (int)lParm2 * 0x78);
	if (iVar5 < 0x39) {
		if ((iVar5 < 0x17) && (0x13 < iVar5)) {
			BreakCrux(lParm2);
		}
	} else {
		if (iVar5 < 0x3b) {
			BreakBarrel(uParm1, lParm2, lVar4, 0, 1, CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9),
			    CONCAT71(uVar10, uVar11), in_stack_ffffffb8);
		}
	}
	return;
}

void SyncBreakObj(undefined8 uParm1, longlong lParm2)

{
	undefined8 in_r8;
	undefined8 in_r9;
	undefined8 in_r10;
	undefined4 in_stack_ffffffc8;

	if ((*(int *)(PTR_DAT_100f1948 + (int)lParm2 * 0x78) < 0x3b) && (0x38 < *(int *)(PTR_DAT_100f1948 + (int)lParm2 * 0x78))) {
		BreakBarrel(uParm1, lParm2, 0, 1, 0, in_r8, in_r9, in_r10, in_stack_ffffffc8);
	}
	return;
}

void SyncL1Doors(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	uint uVar5;
	ulonglong uVar6;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f1a38;
	puVar2 = PTR_DAT_100f1948;
	puVar4 = PTR_DAT_100f1948 + param_1 * 0x78;
	if (*(int *)(puVar4 + 100) == 0) {
		*(undefined4 *)(puVar4 + 0x3c) = 0;
	} else {
		*(undefined4 *)(puVar4 + 0x3c) = 1;
		uVar1 = *(uint *)(puVar4 + 4);
		uVar6 = (ulonglong)uVar1;
		uVar5 = *(uint *)(puVar4 + 8);
		puVar4[0x40] = 2;
		if (*(int *)(puVar2 + param_1 * 0x78) == 1) {
			if (*(int *)(puVar4 + 0x58) == 0xd6) {
				ObjSetMicro(uVar6, uVar5, 0x198, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
			} else {
				ObjSetMicro(uVar6, uVar5, 0x189, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
			}
			*(undefined *)(*(int *)puVar3 + uVar1 * 0x70 + uVar5) = 7;
			objects_set_door_piece(uVar6 - 1, (ulonglong)uVar5, 7, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffb8);
			uVar5 = uVar5 - 1;
		} else {
			ObjSetMicro(uVar6, uVar5, 0x18b, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
			*(undefined *)(*(int *)puVar3 + uVar1 * 0x70 + uVar5) = 8;
			objects_set_door_piece(uVar6, (ulonglong)uVar5 - 1, 8, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffb8);
			uVar6 = uVar6 - 1;
		}
		DoorSet(param_1, uVar6, uVar5, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	return;
}

void SyncCrux(int iParm1)

{
	int iVar1;
	int *piVar2;
	ulonglong uVar3;
	undefined *puVar4;
	ulonglong in_r7;
	int iVar5;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;

	iParm1 = iParm1 * 0x78;
	iVar5 = 1;
	uVar3 = (ulonglong) * (uint *)PTR_DAT_100f1e3c;
	piVar2 = (int *)PTR_DAT_100f1e40;
	iVar1 = 1;
	if (0 < (int)*(uint *)PTR_DAT_100f1e3c) {
		do {
			iVar5 = iVar1;
			in_r7 = (ulonglong) * (uint *)(PTR_DAT_100f1948 + *piVar2 * 0x78);
			if ((((*(uint *)(PTR_DAT_100f1948 + *piVar2 * 0x78) == 0x14) || ((in_r7 - 0x15 & 0xffffffff) < 2)) && (*(int *)(PTR_DAT_100f1948 + iParm1 + 0x74) == *(int *)(PTR_DAT_100f1948 + *piVar2 * 0x78 + 0x74))) && ((PTR_DAT_100f1948 + *piVar2 * 0x78)[0x34] != -1)) {
				iVar5 = 0;
			}
			piVar2 = piVar2 + 1;
			uVar3 = uVar3 - 1;
			iVar1 = iVar5;
		} while (uVar3 != 0);
	}
	if (iVar5 != 0) {
		puVar4 = PTR_DAT_100f1948 + iParm1;
		ObjChangeMap((ulonglong) * (uint *)(puVar4 + 0x58), (ulonglong) * (uint *)(puVar4 + 0x5c),
		    *(int *)(puVar4 + 0x60), (ulonglong) * (uint *)(puVar4 + 100), in_r7, iParm1, iVar5,
		    in_r10, in_stack_ffffffc8);
	}
	return;
}

void SyncLever(int iParm1)

{
	undefined *puVar1;
	undefined8 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;

	puVar1 = PTR_DAT_100f1948 + iParm1 * 0x78;
	if (puVar1[0x40] == '\0') {
		ObjChangeMap((ulonglong) * (uint *)(puVar1 + 0x58), (ulonglong) * (uint *)(puVar1 + 0x5c),
		    *(int *)(puVar1 + 0x60), (ulonglong) * (uint *)(puVar1 + 100), in_r7, in_r8, in_r9, in_r10, in_stack_ffffffc8);
	}
	return;
}

void SyncQSTLever(int iParm1)

{
	undefined uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined8 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffa8;

	puVar3 = PTR_DAT_100f1ab8;
	puVar2 = PTR_DAT_100f1948;
	puVar4 = PTR_DAT_100f1948 + iParm1 * 0x78;
	if (*(int *)(puVar4 + 0x24) == *(int *)(puVar4 + 0x6c)) {
		ObjChangeMapResync((ulonglong) * (uint *)(puVar4 + 0x58), (ulonglong) * (uint *)(puVar4 + 0x5c),
		    *(int *)(puVar4 + 0x60), (ulonglong) * (uint *)(puVar4 + 100), in_r7, in_r8, in_r9, in_r10, in_stack_ffffffa8);
		if (*(int *)(puVar2 + iParm1 * 0x78) == 0x47) {
			uVar1 = *puVar3;
			*puVar3 = 9;
			DRLG_MRectTrans(*(int *)(puVar4 + 0x58), *(int *)(puVar4 + 0x5c), *(int *)(puVar4 + 0x60),
			    *(uint *)(puVar4 + 100));
			*puVar3 = uVar1;
		}
	}
	return;
}

void SyncPedistal(int iParm1)

{
	int *piVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	undefined uVar5;
	ulonglong uVar6;
	undefined uVar7;
	undefined *puVar9;
	ulonglong uVar8;
	undefined uVar10;
	ulonglong in_r7;
	undefined uVar11;
	undefined4 in_r8;
	undefined uVar12;
	undefined4 in_r9;
	undefined uVar13;
	undefined4 in_r10;
	undefined uVar14;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffffa8;
	int *local_28[5];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	puVar3 = PTR_DAT_100f1a84;
	puVar2 = PTR_DAT_100f1a80;
	puVar9 = PTR_DAT_100f1948;
	ppuVar4 = &toc;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	piVar1 = (int *)(PTR_DAT_100f1948 + iParm1 * 0x78 + 0x6c);
	if (*piVar1 == 1) {
		ppuVar4 = &toc;
		ObjChangeMapResync((ulonglong) * (uint *)PTR_DAT_100f1a84, (ulonglong) * (uint *)PTR_DAT_100f1a80 + 3,
		    *(uint *)PTR_DAT_100f1a84 + 2, (ulonglong) * (uint *)PTR_DAT_100f1a80 + 7, in_r7, in_r8,
		    in_r9, in_r10, in_stack_ffffffa8);
	}
	if (*piVar1 == 2) {
		ObjChangeMapResync((ulonglong) * (uint *)puVar3, (ulonglong) * (uint *)puVar2 + 3, *(uint *)puVar3 + 2,
		    (ulonglong) * (uint *)puVar2 + 7, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffa8);
		in_r7 = (ulonglong) * (uint *)puVar3;
		ObjChangeMapResync(in_r7 + 6, (ulonglong) * (uint *)puVar2 + 3, *(uint *)puVar3 + *(int *)ppuVar4[-0x1d55], (ulonglong) * (uint *)puVar2 + 7, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffa8);
	}
	if (*piVar1 == 3) {
		puVar9 = puVar9 + iParm1 * 0x78;
		uVar6 = (ulonglong) * (uint *)(puVar9 + 0x60);
		uVar8 = (ulonglong) * (uint *)(puVar9 + 100);
		ObjChangeMapResync((ulonglong) * (uint *)(puVar9 + 0x58), (ulonglong) * (uint *)(puVar9 + 0x5c),
		    *(uint *)(puVar9 + 0x60), uVar8, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffa8);
		uVar6 = LoadFileInMem(ZEXT48(ppuVar4[-0x16cf]), (undefined4 *)0x0, uVar6, uVar8, in_r7, in_r8, in_r9,
		    in_r10, in_stack_ffffffa8);
		uVar14 = (undefined)in_r10;
		uVar13 = (undefined)in_r9;
		uVar12 = (undefined)in_r8;
		uVar11 = (undefined)in_r7;
		uVar10 = (undefined)uVar8;
		local_28[0] = (int *)uVar6;
		uVar5 = (undefined)(*(int *)puVar3 << 1);
		uVar7 = (undefined)(*(int *)puVar2 << 1);
		LoadMapObjs(uVar6 & 0xffffffff, (ulonglong)(uint)(*(int *)puVar3 << 1),
		    (ulonglong)(uint)(*(int *)puVar2 << 1), uVar8, in_r7, in_r8, in_r9, in_r10,
		    in_stack_ffffffa8);
		mem_free_dbg(local_28, uVar5, uVar7, uVar10, uVar11, uVar12, uVar13, uVar14, in_stack_ffffffa8);
	}
	return;
}

void SyncL2Doors(longlong lParm1)

{
	int iVar1;
	int iVar2;
	int *piVar3;
	undefined *puVar4;
	undefined *puVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;

	puVar5 = PTR_DAT_100f1948;
	lParm1 = lParm1 * 0x78;
	uVar7 = ZEXT48(PTR_DAT_100f1948);
	iVar2 = (int)lParm1;
	piVar3 = (int *)(PTR_DAT_100f1948 + iVar2 + 100);
	if (*piVar3 == 0) {
		*(undefined4 *)(PTR_DAT_100f1948 + iVar2 + 0x3c) = 0;
	} else {
		*(undefined4 *)(PTR_DAT_100f1948 + iVar2 + 0x3c) = 1;
	}
	puVar4 = puVar5 + iVar2;
	uVar6 = (ulonglong) * (uint *)(puVar4 + 4);
	iVar1 = *(int *)(puVar4 + 8);
	puVar4[0x40] = 2;
	iVar2 = *(int *)(puVar5 + iVar2);
	if ((iVar2 == 0x2a) && (*piVar3 == 0)) {
		ObjSetMicro(uVar6, iVar1, 0x21a, uVar7, lParm1, piVar3, in_r9, in_r10, in_stack_ffffffc8);
	} else {
		if ((iVar2 == 0x2a) && ((*piVar3 == 1 || (*piVar3 == 2)))) {
			ObjSetMicro(uVar6, iVar1, 0xd, uVar7, lParm1, piVar3, in_r9, in_r10, in_stack_ffffffc8);
		} else {
			if ((iVar2 == 0x2b) && (*piVar3 == 0)) {
				ObjSetMicro(uVar6, iVar1, 0x21c, uVar7, lParm1, piVar3, in_r9, in_r10, in_stack_ffffffc8);
			} else {
				if ((iVar2 == 0x2b) && ((*piVar3 == 1 || (*piVar3 == 2)))) {
					ObjSetMicro(uVar6, iVar1, 0x11, uVar7, lParm1, piVar3, in_r9, in_r10, in_stack_ffffffc8);
				}
			}
		}
	}
	return;
}

void SyncL3Doors(longlong lParm1)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	int iVar4;
	undefined *puVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;

	puVar5 = PTR_DAT_100f1948;
	lParm1 = lParm1 * 0x78;
	uVar7 = ZEXT48(PTR_DAT_100f1948);
	iVar4 = (int)lParm1;
	puVar3 = PTR_DAT_100f1948 + iVar4;
	*(undefined4 *)(puVar3 + 0x3c) = 1;
	uVar6 = (ulonglong) * (uint *)(puVar3 + 4);
	iVar1 = *(int *)(puVar3 + 8);
	puVar3[0x40] = 2;
	iVar2 = *(int *)(puVar5 + iVar4);
	if ((iVar2 == 0x4a) && (*(int *)(puVar3 + 100) == 0)) {
		ObjSetMicro(uVar6, iVar1, 0x213, uVar7, lParm1, 0x4a, in_r9, in_r10, in_stack_ffffffc8);
	} else {
		if ((iVar2 == 0x4a) && ((*(int *)(puVar5 + iVar4 + 100) == 1 || (*(int *)(puVar5 + iVar4 + 100) == 2)))) {
			ObjSetMicro(uVar6, iVar1, 0x21a, uVar7, lParm1, 0x4a, in_r9, in_r10, in_stack_ffffffc8);
		} else {
			if ((iVar2 == 0x4b) && (*(int *)(puVar5 + iVar4 + 100) == 0)) {
				ObjSetMicro(uVar6, iVar1, 0x216, uVar7, lParm1, 0x4b, in_r9, in_r10, in_stack_ffffffc8);
			} else {
				if ((iVar2 == 0x4b) && ((*(int *)(puVar5 + iVar4 + 100) == 1 || (*(int *)(puVar5 + iVar4 + 100) == 2)))) {
					ObjSetMicro(uVar6, iVar1, 0x21d, uVar7, lParm1, 0x4b, in_r9, in_r10, in_stack_ffffffc8);
				}
			}
		}
	}
	return;
}

void SyncObjectAnim(longlong lParm1)

{
	int iVar1;
	longlong lVar2;
	char *pcVar4;
	ulonglong uVar3;
	ulonglong uVar5;
	longlong lVar6;
	int *piVar7;
	int iVar8;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;

	lVar6 = lParm1 * 0x78;
	uVar5 = ZEXT48(PTR_DAT_100f1948);
	iVar8 = 0;
	piVar7 = (int *)(PTR_DAT_100f1948 + (int)lVar6);
	pcVar4 = PTR_DAT_100f1ff8;
	while (*pcVar4 != PTR_DAT_100f2008[*piVar7 * 0x2c + 1]) {
		pcVar4 = pcVar4 + 1;
		iVar8 = iVar8 + 1;
	}
	uVar3 = (ulonglong)_DAT_100f34cc;
	lVar2 = uVar5 + lVar6;
	*(undefined4 *)((int)lVar2 + 0x14) = *(undefined4 *)(_DAT_100f34cc + iVar8 * 4);
	iVar1 = *piVar7;
	if (iVar1 != 0x29) {
		if (iVar1 < 0x29) {
			if (iVar1 < 0x17) {
				if (iVar1 != 4) {
					if (3 < iVar1) {
						if (iVar1 < 0x14) {
							return;
						}
						SyncCrux();
						return;
					}
					if (2 < iVar1) {
						return;
					}
					if (iVar1 < 1) {
						return;
					}
					SyncL1Doors((int)lParm1, lVar2, uVar3, uVar5, lVar6, piVar7, iVar8, in_r10, in_stack_ffffffc8);
					return;
				}
			} else {
				if (iVar1 != 0x1c) {
					if (0x1b < iVar1) {
						return;
					}
					if (iVar1 != 0x19) {
						return;
					}
				}
			}
			SyncLever();
			return;
		}
		if (iVar1 == 0x49) {
			SyncPedistal();
			return;
		}
		if (iVar1 < 0x49) {
			if (iVar1 != 0x47) {
				if (0x46 < iVar1) {
					return;
				}
				if (0x2b < iVar1) {
					return;
				}
				SyncL2Doors();
				return;
			}
		} else {
			if (iVar1 != 0x58) {
				if (0x57 < iVar1) {
					return;
				}
				if (0x4b < iVar1) {
					return;
				}
				SyncL3Doors();
				return;
			}
		}
	}
	SyncQSTLever();
	return;
}

void GetObjectStr(int param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4,
    undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	code *UNRECOVERED_JUMPTABLE;
	undefined *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar2 = PTR_DAT_100f192c;
	puVar1 = PTR_DAT_100f191c;
	ppuVar3 = &toc;
	if (*(uint *)(PTR_DAT_100f1948 + param_1 * 0x78) < 0x62) {
		UNRECOVERED_JUMPTABLE = *(code **)(_DAT_100f33f4 + *(uint *)(PTR_DAT_100f1948 + param_1 * 0x78) * 4);
		// WARNING: Could not recover jumptable at 0x1008ce9c. Too many branches
		// WARNING: Treating indirect jump as call
		(*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE, ZEXT48(PTR_s_Weapon_Rack_100f341c));
		return;
	}
	if ((PTR_DAT_100f1828[*(int *)PTR_DAT_100f1824 * 0x55ec + 0x15c] == '\x01') && (*(int *)(PTR_DAT_100f1948 + param_1 * 0x78 + 0x48) != 0)) {
		sprintf((int)PTR_DAT_100f191c, PTR_s_Trapped__s_100f33f8, PTR_DAT_100f192c, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4);
		strcpy((int)puVar2, (int)puVar1);
		*ppuVar3[-0x1dca] = 2;
	}
	return;
}
