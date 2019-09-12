
void InitStores(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined4 *puVar3;
	int iVar4;
	undefined **ppuVar5;
	longlong lVar6;
	undefined4 in_stack_ffffffb8;

	iVar4 = _DAT_100f1e28;
	ppuVar5 = &toc;
	lVar6 = LoadFileInMem((ulonglong)_DAT_100f3920, (undefined4 *)0x0, param_3, param_4, param_5, param_6,
	    param_7, param_8, in_stack_ffffffb8);
	puVar1 = (undefined4 *)ppuVar5[-0x1c67];
	*puVar1 = (int)lVar6;
	lVar6 = LoadFileInMem(ZEXT48(ppuVar5[-0x15ad]), (undefined4 *)0x0, ZEXT48(puVar1), param_4, param_5,
	    param_6, param_7, param_8, in_stack_ffffffb8);
	puVar1 = (undefined4 *)ppuVar5[-0x1ddd];
	*puVar1 = (int)lVar6;
	lVar6 = LoadFileInMem(ZEXT48(ppuVar5[-0x15ae]), (undefined4 *)0x0, ZEXT48(puVar1), param_4, param_5,
	    param_6, param_7, param_8, in_stack_ffffffb8);
	*(int *)ppuVar5[-0x1ca2] = (int)lVar6;
	ClearSText(0, 0x18);
	puVar1 = (undefined4 *)ppuVar5[-0x1bbc];
	*ppuVar5[-0x1dd9] = 0;
	puVar2 = ppuVar5[-0x1bbd];
	*puVar1 = 1;
	puVar1 = (undefined4 *)ppuVar5[-0x1bbe];
	*puVar2 = 0;
	puVar3 = (undefined4 *)ppuVar5[-0x1c6b];
	*puVar1 = 0;
	puVar1 = (undefined4 *)ppuVar5[-0x1c6d];
	*puVar3 = 0;
	puVar2 = ppuVar5[-0x1c6f];
	*puVar1 = 1;
	puVar1 = (undefined4 *)ppuVar5[-0x1c6e];
	*(undefined4 *)(iVar4 + 8) = 0xffffffff;
	*(undefined4 *)(iVar4 + 0x178) = 0xffffffff;
	*(undefined4 *)(iVar4 + 0x2e8) = 0xffffffff;
	*(undefined4 *)(iVar4 + 0x458) = 0xffffffff;
	*(undefined4 *)(iVar4 + 0x5c8) = 0xffffffff;
	*(undefined4 *)(iVar4 + 0x738) = 0xffffffff;
	*(undefined4 *)(puVar2 + 8) = 0xffffffff;
	*puVar1 = 0;
	return;
}

void SetupTownStores(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	int iVar4;
	longlong lVar3;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	ulonglong unaff_r29;
	ulonglong uVar8;
	ulonglong uVar9;
	longlong lVar10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	int local_3c;

	puVar2 = PTR_DAT_100f1828;
	puVar1 = PTR_DAT_100f1824;
	uVar9 = ZEXT48(PTR_DAT_100f1828);
	iVar4 = GetTickCount(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
	uVar6 = SUB41(*(byte **)(local_3c + -0x77e4), 0);
	uVar7 = (undefined) * (int *)(local_3c + -0x75ec);
	SetRndSeed(*(int *)(*(int *)(local_3c + -0x75ec) + (uint) * *(byte **)(local_3c + -0x77e4) * 4) * iVar4);
	if (**(char **)(local_3c + -0x77f0) == '\x01') {
		lVar10 = 0x11;
		uVar8 = 0;
		lVar3 = uVar9 + (ulonglong) * (uint *)puVar1 * 0x55ec;
		uVar9 = 0;
		do {
			if (*(char *)((int)lVar3 + 0x1f0) != '\0') {
				uVar8 = uVar9;
			}
			lVar3 = lVar3 + 1;
			uVar5 = (undefined)lVar3;
			uVar9 = uVar9 + 1;
			uVar6 = (undefined)uVar9;
			lVar10 = lVar10 + -1;
		} while (lVar10 != 0);
	} else {
		lVar3 = uVar9 + (ulonglong) * (uint *)puVar1 * 0x55ec;
		uVar5 = (undefined)lVar3;
		uVar8 = unaff_r29 & 0xffffffff00000000 | (ulonglong)(uint)((int)*(char *)((int)lVar3 + 0x1b4) >> 1);
	}
	uVar8 = uVar8 + 2;
	if ((int)uVar8 < 6) {
		uVar8 = 6;
	}
	if (0x10 < (int)uVar8) {
		uVar8 = 0x10;
	}
	SpawnStoreGold(uVar5, uVar6, uVar7, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	SpawnSmith(uVar8, uVar6, uVar7, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	SpawnWitch(uVar8, uVar6, uVar7, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	SpawnHealer(uVar8, uVar6, uVar7, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	SpawnBoy((longlong)(char)(puVar2 + 0x1b4)[*(int *)puVar1 * 0x55ec], uVar6, uVar7, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	SpawnPremium((int)(char)(puVar2 + 0x1b4)[*(int *)puVar1 * 0x55ec], uVar6, uVar7, param_4, param_5,
	    param_6, param_7, param_8, in_stack_ffffffb8);
	return;
}

void FreeStoreMem(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	mem_free_dbg((int **)PTR_DAT_100f1e34, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	mem_free_dbg((int **)ppuVar1[-0x1ddd], param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	mem_free_dbg((int **)ppuVar1[-0x1ca2], param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	return;
}

void DrawSTextBack(void)

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
	CelDecodeOnly(0x198, 0x1e7, (ulonglong) * (uint *)PTR_DAT_100f1e34, 1, 0x10f, in_r8, in_r9, in_r10,
	    in_stack_ffffffc8);
	lVar5 = 0x94;
	puVar4 = (undefined *)(*(int *)ppuVar1[-0x1e01] + 0x5ad9b);
	do {
		lVar2 = 0x84;
		do {
			puVar3 = puVar4;
			lVar2 = lVar2 + -1;
			*puVar3 = 0;
			puVar4 = puVar3 + 2;
		} while (lVar2 != 0);
		puVar3[2] = 0;
		lVar2 = 0x84;
		puVar3 = puVar3 + -0x406;
		do {
			puVar4 = puVar3;
			lVar2 = lVar2 + -1;
			puVar4[1] = 0;
			puVar3 = puVar4 + 2;
		} while (lVar2 != 0);
		lVar5 = lVar5 + -1;
		puVar4 = puVar4 + -0x406;
	} while (lVar5 != 0);
	lVar5 = 0x84;
	do {
		lVar5 = lVar5 + -1;
		*puVar4 = 0;
		puVar4 = puVar4 + 2;
	} while (lVar5 != 0);
	return;
}

void PrintSString(longlong lParm1, int iParm2, int iParm3, ulonglong uParm4, longlong lParm5, int iParm6)

{
	uint *puVar1;
	byte bVar2;
	char *pcVar3;
	ulonglong uVar4;
	longlong lVar5;
	ulonglong uVar6;
	int iVar7;
	int iVar9;
	longlong lVar8;
	byte *pbVar10;
	int iVar11;
	longlong lVar12;
	ulonglong uVar13;
	int iVar14;
	longlong lVar15;
	undefined4 uVar16;
	ulonglong uVar17;
	undefined4 uVar18;
	undefined8 in_r13;
	ulonglong uVar19;
	int *piVar20;
	undefined8 unaff_r14;
	undefined8 unaff_r15;
	longlong lVar21;
	undefined8 unaff_r16;
	undefined8 unaff_r17;
	undefined8 unaff_r18;
	undefined8 unaff_r19;
	longlong lVar22;
	int iVar23;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	int iVar24;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	ulonglong uVar25;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	int iVar26;
	undefined8 unaff_r28;
	longlong lVar27;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff58;
	undefined in_stack_ffffff5f;
	undefined4 in_stack_ffffff6c;
	undefined4 in_stack_ffffff70;
	undefined4 in_stack_ffffff74;
	undefined4 in_stack_ffffff78;
	undefined4 in_stack_ffffff7c;
	undefined4 in_stack_ffffff80;
	undefined4 in_stack_ffffff84;
	byte abStack117[41];
	undefined4 local_4c;
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
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	pcVar3 = _DAT_100f20dc;
	uVar6 = ZEXT48(&toc);
	local_4c = (undefined4)((ulonglong)in_r13 >> 0x20);
	uStack72 = (undefined4)((ulonglong)unaff_r14 >> 0x20);
	uStack68 = (undefined4)((ulonglong)unaff_r15 >> 0x20);
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
	uVar17 = (ulonglong)_DAT_100f20d4;
	uVar19 = (ulonglong)_DAT_100f20d0;
	lVar15 = (longlong)*_DAT_100f20dc;
	lVar21 = (ulonglong) * (uint *)(PTR_DAT_100f1db4 + iParm2 * 4) + (ulonglong) * (uint *)(_DAT_100f20d4 + iParm2 * 0x9c + 4);
	if (lVar15 == 0) {
		lVar22 = 0x1a0;
	} else {
		lVar22 = 0x60;
	}
	iVar23 = (int)lVar22;
	puVar1 = (uint *)(PTR_DAT_100f1938 + (int)lVar21 * 4 + 0x330);
	lVar27 = lParm1 + (ulonglong)*puVar1 + lVar22;
	uVar13 = uParm4;
	lVar22 = lParm5;
	iVar14 = iParm6;
	iVar9 = strlen((uint)uParm4);
	if (*pcVar3 == '\0') {
		iVar24 = 0x101;
	} else {
		iVar24 = 0x241;
	}
	uVar25 = 0;
	if (iParm3 != 0) {
		lVar12 = 0;
		iVar11 = 0;
		lVar22 = 0;
		if (0 < iVar9) {
			if ((8 < iVar9) && (uVar4 = (ulonglong)(iVar9 - 1U >> 3), 0 < iVar9 + -8)) {
				do {
					pbVar10 = (byte *)((uint)uParm4 + (int)lVar22);
					lVar22 = lVar22 + 8;
					uVar13 = (ulonglong)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar10[5]]];
					lVar12 = (ulonglong)(byte)(&DAT_100f6230)
					             [(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar10[7]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					        [(uint)(byte)(&DAT_100f61b0)
					                [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar10[6]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					        [(uint)(byte)(&DAT_100f61b0)
					                [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar10[5]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					        [(uint)(byte)(&DAT_100f61b0)
					                [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar10[4]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					        [(uint)(byte)(&DAT_100f61b0)
					                [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar10[3]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					        [(uint)(byte)(&DAT_100f61b0)
					                [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar10[2]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					        [(uint)(byte)(&DAT_100f61b0)
					                [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar10[1]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					        [(uint)(byte)(&DAT_100f61b0)
					                [(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar10]]]
					    + lVar12 + 8;
					uVar4 = uVar4 - 1;
				} while (uVar4 != 0);
			}
			iVar11 = (int)lVar12;
			lVar5 = (longlong)iVar9 - lVar22;
			lVar8 = uParm4 + lVar22;
			if ((int)lVar22 < iVar9) {
				do {
					pbVar10 = (byte *)lVar8;
					lVar8 = lVar8 + 1;
					lVar12 = (ulonglong)(byte)(&DAT_100f6230)
					             [(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar10]]]
					    + lVar12 + 1;
					iVar11 = (int)lVar12;
					lVar5 = lVar5 + -1;
				} while (lVar5 != 0);
			}
		}
		if (iVar11 < iVar24) {
			uVar25 = (ulonglong)(uint)(iVar24 - iVar11 >> 1);
		}
		lVar27 = lVar27 + uVar25;
	}
	iVar11 = (int)lParm1;
	if (*(int *)uVar19 == iParm2) {
		iVar26 = iVar23;
		if (iParm3 != 0) {
			iVar26 = (int)uVar25 + iVar23;
		}
		lVar22 = 0xc;
		uVar13 = (ulonglong) * *(uint **)((int)uVar6 + -0x6ef0);
		CelDecodeOnly(iVar11 + iVar26 + -0x14, lVar21 + 0xcd, (ulonglong) * *(uint **)((int)uVar6 + -0x7774),
		    uVar13, 0xc, iVar14, (int)lVar15, (int)uVar17, in_stack_ffffff58);
	}
	iVar26 = 0;
	while (true) {
		piVar20 = (int *)uVar19;
		iVar7 = (int)uVar6;
		uVar16 = (undefined4)lVar15;
		uVar18 = (undefined4)uVar17;
		if (iVar9 <= iVar26)
			break;
		bVar2 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint) * (byte *)uParm4]];
		uVar25 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar2] + uVar25 + 1;
		if ((bVar2 != 0) && ((int)uVar25 <= iVar24)) {
			CPrintString(lVar27, (ulonglong)bVar2, lParm5, uVar13, lVar22, iVar14, uVar16, uVar18,
			    in_stack_ffffff58);
		}
		iVar26 = iVar26 + 1;
		uParm4 = uParm4 + 1;
		lVar27 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar2] + lVar27 + 1;
	}
	if ((iParm3 == 0) && (-1 < iParm6)) {
		sprintf((int)(abStack117 + 1), *(undefined4 *)(iVar7 + -0x56bc), iParm6, (int)uVar13,
		    (int)lVar22, iVar14, uVar16, uVar18, in_stack_ffffff58, in_stack_ffffff5f,
		    in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78,
		    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
		lParm1 = ((ulonglong)*puVar1 + 0x290) - lParm1;
		iVar9 = strlen((uint)(abStack117 + 1));
		pbVar10 = abStack117 + iVar9;
		while (true) {
			piVar20 = (int *)uVar19;
			uVar18 = (undefined4)uVar17;
			uVar16 = (undefined4)lVar15;
			iVar7 = (int)uVar6;
			iVar9 = iVar9 + -1;
			if (iVar9 < 0)
				break;
			bVar2 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar10]];
			lParm1 = lParm1 - ((ulonglong)(byte)(&DAT_100f6230)[(uint)bVar2] + 1);
			if (bVar2 != 0) {
				CPrintString(lParm1, (ulonglong)bVar2, lParm5, uVar13, lVar22, iVar14, uVar16, uVar18,
				    in_stack_ffffff58);
			}
			pbVar10 = pbVar10 + -1;
		}
	}
	if (*piVar20 == iParm2) {
		if (iParm3 == 0) {
			iVar11 = 0x294 - iVar11;
		} else {
			iVar11 = iVar11 + (int)uVar25 + iVar23 + 4;
		}
		CelDecodeOnly(iVar11, lVar21 + 0xcd, (ulonglong) * *(uint **)(iVar7 + -0x7774),
		    (ulonglong) * *(uint **)(iVar7 + -0x6ef0), 0xc, iVar14, uVar16, uVar18, in_stack_ffffff58);
	}
	return;
}

void DrawSLine(int param_1)

{
	undefined uVar1;
	int iVar2;
	longlong lVar3;
	undefined *puVar4;
	int iVar5;
	undefined *puVar6;
	int iVar8;
	longlong lVar7;
	int iVar9;
	longlong lVar10;

	if (*_DAT_100f20dc == '\x01') {
		iVar5 = 0x22b5a;
		iVar8 = *(int *)(PTR_DAT_100f1938 + *(int *)(PTR_DAT_100f1db4 + param_1 * 4) * 4 + 0x318) + 0x5a;
		iVar2 = 0x92;
		iVar9 = 0xb6;
	} else {
		iVar5 = 0x22c9a;
		iVar8 = *(int *)(PTR_DAT_100f1938 + *(int *)(PTR_DAT_100f1db4 + param_1 * 4) * 4 + 0x318) + 0x19a;
		iVar2 = 0x42;
		iVar9 = 0x1f6;
	}
	lVar3 = (ulonglong)(uint)(iVar2 << 2) + 2;
	lVar10 = 3;
	puVar6 = (undefined *)(*(int *)PTR_DAT_100f17cc + iVar5);
	puVar4 = (undefined *)(*(int *)PTR_DAT_100f17cc + iVar8);
	lVar7 = lVar3;
	do {
		do {
			uVar1 = *puVar6;
			lVar7 = lVar7 + -1;
			puVar6 = puVar6 + 1;
			*puVar4 = uVar1;
			puVar4 = puVar4 + 1;
		} while (lVar7 != 0);
		lVar10 = lVar10 + -1;
		puVar6 = puVar6 + iVar9;
		puVar4 = puVar4 + iVar9;
		lVar7 = lVar3;
	} while (lVar10 != 0);
	return;
}

void DrawSArrows(int iParm1, int iParm2)

{
	uint uVar1;
	uint *puVar2;
	undefined *puVar3;
	ulonglong uVar4;
	ulonglong uVar5;
	int iVar6;
	undefined8 in_r8;
	int iVar7;
	undefined4 in_r9;
	undefined4 in_r10;
	longlong lVar8;
	longlong lVar9;
	uint *puVar10;
	uint *puVar11;
	undefined4 in_stack_ffffffa8;

	puVar3 = PTR_DAT_100f1db4;
	puVar2 = _DAT_100f1d48;
	uVar4 = ZEXT48(&toc);
	puVar11 = (uint *)(PTR_DAT_100f1db4 + iParm1 * 4);
	puVar10 = (uint *)(PTR_DAT_100f1db4 + iParm2 * 4);
	uVar5 = (ulonglong)*puVar11;
	lVar9 = uVar5 + 0xcc;
	lVar8 = (ulonglong)*puVar10 + 0xcc;
	if (*_DAT_100f20cc == -1) {
		CelDecodeOnly(0x299, lVar9, (ulonglong)*_DAT_100f1d48, 10, 0xc, (int)in_r8, in_r9, in_r10,
		    in_stack_ffffffa8);
	} else {
		CelDecodeOnly(0x299, lVar9, (ulonglong)*_DAT_100f1d48, 0xc, 0xc, (int)in_r8, in_r9, in_r10,
		    in_stack_ffffffa8);
	}
	if (**(char **)((int)uVar4 + -0x6f08) == -1) {
		CelDecodeOnly(0x299, lVar8, (ulonglong)*puVar2, 9, 0xc, (int)in_r8, in_r9, in_r10, in_stack_ffffffa8);
	} else {
		CelDecodeOnly(0x299, lVar8, (ulonglong)*puVar2, 0xb, 0xc, (int)in_r8, in_r9, in_r10, in_stack_ffffffa8);
	}
	lVar9 = uVar5 + 0xd8;
	while ((int)lVar9 < (int)lVar8) {
		CelDecodeOnly(0x299, lVar9, (ulonglong)*puVar2, 0xe, 0xc, (int)in_r8, in_r9, in_r10, in_stack_ffffffa8);
		lVar9 = lVar9 + 0xc;
	}
	iVar6 = (int)uVar4;
	iVar7 = **(int **)(iVar6 + -0x6f00);
	if (iVar7 == 0x16) {
		iVar7 = **(int **)(iVar6 + -0x6f0c);
	}
	if (**(int **)(iVar6 + -0x6f10) < 2) {
		lVar8 = 0;
	} else {
		iVar6 = (((**(int **)(iVar6 + -0x6f14) + (iVar7 - **(int **)(iVar6 + -0x6f18) >> 2)) * 1000) / (**(int **)(iVar6 + -0x6f10) + -1)) * ((*puVar10 - *puVar11) + -0x18);
		uVar1 = iVar6 / 1000 + (iVar6 >> 0x1f);
		lVar8 = ((longlong)(int)((ulonglong)((longlong)iVar6 * 0x10624dd3) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar1) + (ulonglong)(uVar1 >> 0x1f);
	}
	CelDecodeOnly(0x299, (ulonglong) * (uint *)(puVar3 + iParm1 * 4 + 4) + lVar8 + 0xcc, (ulonglong)*puVar2, 0xd, 0xc, iVar7, in_r9, in_r10, in_stack_ffffffa8);
	return;
}

void DrawSTextHelp(void)

{
	undefined4 *puVar1;

	puVar1 = _DAT_100f20d0;
	*_DAT_100f20dc = 1;
	*puVar1 = 0xffffffff;
	return;
}

void ClearSText(int param_1, int param_2)

{
	ulonglong uVar1;
	uint uVar2;
	undefined4 *puVar3;

	puVar3 = (undefined4 *)(_DAT_100f20d4 + param_1 * 0x9c);
	uVar2 = param_2 - param_1;
	if (param_2 <= param_1) {
		return;
	}
	uVar1 = (ulonglong)(uVar2 >> 3);
	if (uVar2 >> 3 != 0) {
		do {
			*puVar3 = 0;
			puVar3[1] = 0;
			*(undefined *)(puVar3 + 2) = 0;
			puVar3[0x22] = 0;
			*(undefined *)(puVar3 + 0x23) = 0;
			puVar3[0x24] = 0;
			puVar3[0x25] = 0;
			puVar3[0x26] = 0xffffffff;
			puVar3[0x27] = 0;
			puVar3[0x28] = 0;
			*(undefined *)(puVar3 + 0x29) = 0;
			puVar3[0x49] = 0;
			*(undefined *)(puVar3 + 0x4a) = 0;
			puVar3[0x4b] = 0;
			puVar3[0x4c] = 0;
			puVar3[0x4d] = 0xffffffff;
			puVar3[0x4e] = 0;
			puVar3[0x4f] = 0;
			*(undefined *)(puVar3 + 0x50) = 0;
			puVar3[0x70] = 0;
			*(undefined *)(puVar3 + 0x71) = 0;
			puVar3[0x72] = 0;
			puVar3[0x73] = 0;
			puVar3[0x74] = 0xffffffff;
			puVar3[0x75] = 0;
			puVar3[0x76] = 0;
			*(undefined *)(puVar3 + 0x77) = 0;
			puVar3[0x97] = 0;
			*(undefined *)(puVar3 + 0x98) = 0;
			puVar3[0x99] = 0;
			puVar3[0x9a] = 0;
			puVar3[0x9b] = 0xffffffff;
			puVar3[0x9c] = 0;
			puVar3[0x9d] = 0;
			*(undefined *)(puVar3 + 0x9e) = 0;
			puVar3[0xbe] = 0;
			*(undefined *)(puVar3 + 0xbf) = 0;
			puVar3[0xc0] = 0;
			puVar3[0xc1] = 0;
			puVar3[0xc2] = 0xffffffff;
			puVar3[0xc3] = 0;
			puVar3[0xc4] = 0;
			*(undefined *)(puVar3 + 0xc5) = 0;
			puVar3[0xe5] = 0;
			*(undefined *)(puVar3 + 0xe6) = 0;
			puVar3[0xe7] = 0;
			puVar3[0xe8] = 0;
			puVar3[0xe9] = 0xffffffff;
			puVar3[0xea] = 0;
			puVar3[0xeb] = 0;
			*(undefined *)(puVar3 + 0xec) = 0;
			puVar3[0x10c] = 0;
			*(undefined *)(puVar3 + 0x10d) = 0;
			puVar3[0x10e] = 0;
			puVar3[0x10f] = 0;
			puVar3[0x110] = 0xffffffff;
			puVar3[0x111] = 0;
			puVar3[0x112] = 0;
			*(undefined *)(puVar3 + 0x113) = 0;
			puVar3[0x133] = 0;
			*(undefined *)(puVar3 + 0x134) = 0;
			puVar3[0x135] = 0;
			puVar3[0x136] = 0;
			puVar3[0x137] = 0xffffffff;
			puVar3 = puVar3 + 0x138;
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
		uVar2 = uVar2 & 7;
		if (uVar2 == 0) {
			return;
		}
	}
	do {
		*puVar3 = 0;
		puVar3[1] = 0;
		*(undefined *)(puVar3 + 2) = 0;
		puVar3[0x22] = 0;
		*(undefined *)(puVar3 + 0x23) = 0;
		puVar3[0x24] = 0;
		puVar3[0x25] = 0;
		puVar3[0x26] = 0xffffffff;
		puVar3 = puVar3 + 0x27;
		uVar2 = uVar2 - 1;
	} while (uVar2 != 0);
	return;
}

void AddSLine(int param_1)

{
	int iVar1;

	iVar1 = _DAT_100f20d4 + param_1 * 0x9c;
	*(undefined4 *)(_DAT_100f20d4 + param_1 * 0x9c) = 0;
	*(undefined4 *)(iVar1 + 4) = 0;
	*(undefined *)(iVar1 + 8) = 0;
	*(undefined4 *)(iVar1 + 0x90) = 1;
	return;
}

void AddSTextVal(int param_1, undefined4 param_2)

{
	*(undefined4 *)(_DAT_100f20d4 + param_1 * 0x9c + 0x98) = param_2;
	return;
}

void OffsetSTextY(int param_1, undefined4 param_2)

{
	*(undefined4 *)(_DAT_100f20d4 + param_1 * 0x9c + 4) = param_2;
	return;
}

void AddSText(undefined4 param_1, int param_2, undefined4 param_3, int param_4, undefined param_5,
    undefined4 param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined4 *puVar1;

	puVar1 = (undefined4 *)(_DAT_100f20d4 + param_2 * 0x9c);
	*puVar1 = param_1;
	puVar1[1] = 0;
	strcpy((int)(puVar1 + 2), param_4);
	puVar1[0x22] = param_3;
	*(undefined *)(puVar1 + 0x23) = param_5;
	puVar1[0x24] = 0;
	puVar1[0x25] = param_6;
	return;
}

void PrintStoreItem(int param_1, int param_2, undefined8 param_3, char *param_4, undefined4 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff38;
	undefined in_stack_ffffff3f;
	undefined4 in_stack_ffffff4c;
	undefined4 in_stack_ffffff50;
	undefined4 in_stack_ffffff54;
	undefined4 in_stack_ffffff58;
	undefined4 in_stack_ffffff5c;
	undefined4 in_stack_ffffff60;
	undefined4 in_stack_ffffff64;
	char local_98[132];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	puVar3 = PTR_DAT_100f3910;
	puVar2 = PTR_DAT_100f191c;
	uVar5 = (undefined)param_3;
	ppuVar4 = &toc;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	local_98[0] = '\0';
	if (*(int *)(param_1 + 0x38) != 0) {
		uVar6 = uVar5;
		ppuVar4 = &toc;
		if ((*(char *)(param_1 + 0x3c) != '\x02') && (uVar6 = uVar5, ppuVar4 = &toc, *(char *)(param_1 + 0x14c) != -1)) {
			uVar6 = uVar5;
			ppuVar4 = &toc;
			PrintItemPower(*(char *)(param_1 + 0x14c), (char)param_1, uVar5, (char)param_4, (char)param_5,
			    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff38);
			strcat((int)local_98, (int)puVar2);
		}
		if (*(char *)(param_1 + 0x14d) != -1) {
			PrintItemPower(*(char *)(param_1 + 0x14d), (char)param_1, uVar6, (char)param_4, (char)param_5,
			    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff38);
			if (local_98[0] != '\0') {
				strcat((int)local_98, (int)puVar3);
			}
			strcat((int)local_98, (int)puVar2);
		}
	}
	if (*(int *)(param_1 + 0xdc) == 0x17) {
		param_4 = *(char **)(param_1 + 0xe8);
		if (param_4 != (char *)0x0) {
			sprintf((int)puVar2, ppuVar4[-0x15b1], *(undefined4 *)(param_1 + 0xe4), param_4, param_5,
			    param_6, param_7, param_8, in_stack_ffffff38, in_stack_ffffff3f, in_stack_ffffff4c,
			    in_stack_ffffff50, in_stack_ffffff54, in_stack_ffffff58, in_stack_ffffff5c,
			    in_stack_ffffff60, in_stack_ffffff64);
			if (local_98[0] != '\0') {
				strcat((int)local_98, (int)puVar3);
			}
			strcat((int)local_98, (int)puVar2);
		}
	}
	if (local_98[0] != '\0') {
		param_4 = local_98;
		param_6 = 0;
		param_5 = (int)param_3;
		AddSText(0x28, param_2, 0, (int)param_4, uVar5, 0, (char)param_7, (char)param_8, in_stack_ffffff38);
		param_2 = param_2 + 1;
	}
	local_98[0] = '\0';
	if (*(char *)(param_1 + 0xbe) == '\x01') {
		param_4 = *(char **)(param_1 + 0xd0);
		sprintf((int)local_98, ppuVar4[-0x15b2], *(undefined4 *)(param_1 + 0xcc), param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffff38, in_stack_ffffff3f, in_stack_ffffff4c,
		    in_stack_ffffff50, in_stack_ffffff54, in_stack_ffffff58, in_stack_ffffff5c,
		    in_stack_ffffff60, in_stack_ffffff64);
	}
	if (*(char *)(param_1 + 0xbe) == '\x02') {
		sprintf((int)local_98, ppuVar4[-0x15b3], *(undefined4 *)(param_1 + 0xd4), param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffff38, in_stack_ffffff3f, in_stack_ffffff4c,
		    in_stack_ffffff50, in_stack_ffffff54, in_stack_ffffff58, in_stack_ffffff5c,
		    in_stack_ffffff60, in_stack_ffffff64);
	}
	iVar1 = *(int *)(param_1 + 0xf0);
	if ((iVar1 == 0xff) || (iVar1 == 0)) {
		strcat((int)local_98, (int)ppuVar4[-0x15b4]);
	} else {
		sprintf((int)puVar2, ppuVar4[-0x15b5], *(undefined4 *)(param_1 + 0xec), iVar1, param_5, param_6,
		    param_7, param_8, in_stack_ffffff38, in_stack_ffffff3f, in_stack_ffffff4c,
		    in_stack_ffffff50, in_stack_ffffff54, in_stack_ffffff58, in_stack_ffffff5c,
		    in_stack_ffffff60, in_stack_ffffff64);
		strcat((int)local_98, (int)puVar2);
	}
	uVar7 = (undefined)param_8;
	uVar6 = (undefined)param_7;
	if (*(int *)(param_1 + 8) == 0) {
		local_98[0] = '\0';
	}
	if ((longlong) * (char *)(param_1 + 0x160) + (ulonglong) * (byte *)(param_1 + 0x161) + (longlong) * (char *)(param_1 + 0x162) == 0) {
		strcat((int)local_98, (int)ppuVar4[-0x15b6]);
	} else {
		strcpy((int)puVar2, (int)ppuVar4[-0x15b7]);
		if (*(char *)(param_1 + 0x160) != '\0') {
			sprintf((int)puVar2, ppuVar4[-0x15b8], puVar2, (int)*(char *)(param_1 + 0x160), param_5,
			    param_6, param_7, param_8, in_stack_ffffff38, in_stack_ffffff3f, in_stack_ffffff4c,
			    in_stack_ffffff50, in_stack_ffffff54, in_stack_ffffff58, in_stack_ffffff5c,
			    in_stack_ffffff60, in_stack_ffffff64);
		}
		if (*(byte *)(param_1 + 0x161) != 0) {
			sprintf((int)puVar2, ppuVar4[-0x15b9], puVar2, (uint) * (byte *)(param_1 + 0x161), param_5,
			    param_6, param_7, param_8, in_stack_ffffff38, in_stack_ffffff3f, in_stack_ffffff4c,
			    in_stack_ffffff50, in_stack_ffffff54, in_stack_ffffff58, in_stack_ffffff5c,
			    in_stack_ffffff60, in_stack_ffffff64);
		}
		uVar7 = (undefined)param_8;
		uVar6 = (undefined)param_7;
		if (*(char *)(param_1 + 0x162) != '\0') {
			sprintf((int)puVar2, ppuVar4[-0x15ba], puVar2, (int)*(char *)(param_1 + 0x162), param_5,
			    param_6, param_7, param_8, in_stack_ffffff38, in_stack_ffffff3f, in_stack_ffffff4c,
			    in_stack_ffffff50, in_stack_ffffff54, in_stack_ffffff58, in_stack_ffffff5c,
			    in_stack_ffffff60, in_stack_ffffff64);
		}
		strcat((int)local_98, (int)puVar2);
	}
	AddSText(0x28, param_2, 0, (int)local_98, uVar5, 0, uVar6, uVar7, in_stack_ffffff38);
	if ((*(char *)(param_1 + 0x3c) == '\x02') && (*(int *)(param_1 + 0x38) != 0)) {
		AddSText(0x28, param_2 + 1, 0, (int)ppuVar4[-0x15bb], uVar5, 0, uVar6, uVar7, in_stack_ffffff38);
	}
	return;
}

void StoreAutoPlace(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, char param_6, char param_7, char param_8, undefined4 param_9)

{
	uint uVar1;
	undefined4 uVar2;
	undefined *puVar3;
	ulonglong uVar4;
	ulonglong uVar5;
	ulonglong uVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	int iVar13;
	ulonglong uVar14;
	int iVar15;
	longlong lVar16;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f1824;
	lVar12 = (longlong)param_8;
	lVar11 = (longlong)param_7;
	lVar10 = (longlong)param_6;
	uVar5 = ZEXT48(&toc);
	uVar14 = ZEXT48(PTR_DAT_100f1828);
	SetICursor(*(int *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x5494) + 0xc);
	iVar13 = (int)uVar5;
	uVar6 = 0;
	uVar1 = **(uint **)(iVar13 + -0x7648);
	uVar4 = (ulonglong)uVar1;
	iVar15 = **(int **)(iVar13 + -0x764c);
	if ((uVar1 == 1) && (iVar15 == 1)) {
		lVar10 = uVar14 + (ulonglong) * (uint *)puVar3 * 0x55ec;
		if ((*(int *)((int)lVar10 + 0x5538) != 0) && (*(int *)(iVar13 + *(int *)((int)lVar10 + 0x553c) * 0x4c + 0x3898) != 0)) {
			lVar11 = 0;
			lVar7 = lVar10;
			while (((int)lVar11 < 8 && ((int)uVar6 == 0))) {
				if (*(int *)((int)lVar7 + 0x485c) == -1) {
					lVar16 = 0x2e;
					lVar9 = lVar7 + 0x484c;
					lVar8 = lVar10 + 0x53cc;
					do {
						lVar8 = lVar8 + 8;
						uVar2 = ((undefined4 *)lVar8)[1];
						lVar9 = lVar9 + 8;
						*(undefined4 *)lVar9 = *(undefined4 *)lVar8;
						((undefined4 *)lVar9)[1] = uVar2;
						lVar16 = lVar16 + -1;
					} while (lVar16 != 0);
					uVar6 = 1;
				}
				lVar7 = lVar7 + 0x170;
				lVar11 = lVar11 + 1;
			}
		}
		iVar13 = 0x1e;
		while ((iVar13 < 0x28 && ((int)uVar6 == 0))) {
			uVar6 = AutoPlace(*(int *)puVar3, iVar13, uVar4, 1, 1, (char)lVar10, (char)lVar11, (char)lVar12,
			    in_stack_ffffffb8);
			iVar13 = iVar13 + 1;
		}
		iVar13 = 0x14;
		while ((iVar13 < 0x1e && ((int)uVar6 == 0))) {
			uVar6 = AutoPlace(*(int *)puVar3, iVar13, uVar4, 1, 1, (char)lVar10, (char)lVar11, (char)lVar12,
			    in_stack_ffffffb8);
			iVar13 = iVar13 + 1;
		}
		iVar13 = 10;
		while ((iVar13 < 0x14 && ((int)uVar6 == 0))) {
			uVar6 = AutoPlace(*(int *)puVar3, iVar13, uVar4, 1, 1, (char)lVar10, (char)lVar11, (char)lVar12,
			    in_stack_ffffffb8);
			iVar13 = iVar13 + 1;
		}
		iVar13 = 0;
		while ((iVar13 < 10 && ((int)uVar6 == 0))) {
			uVar6 = AutoPlace(*(int *)puVar3, iVar13, uVar4, 1, 1, (char)lVar10, (char)lVar11, (char)lVar12,
			    in_stack_ffffffb8);
			iVar13 = iVar13 + 1;
		}
	}
	if ((uVar1 == 1) && (iVar15 == 2)) {
		iVar13 = 0x1d;
		while ((0x13 < iVar13 && ((int)uVar6 == 0))) {
			uVar6 = AutoPlace(*(int *)puVar3, iVar13, uVar4, 2, 1, (char)lVar10, (char)lVar11, (char)lVar12,
			    in_stack_ffffffb8);
			iVar13 = iVar13 + -1;
		}
		iVar13 = 9;
		while ((-1 < iVar13 && ((int)uVar6 == 0))) {
			uVar6 = AutoPlace(*(int *)puVar3, iVar13, uVar4, 2, 1, (char)lVar10, (char)lVar11, (char)lVar12,
			    in_stack_ffffffb8);
			iVar13 = iVar13 + -1;
		}
		iVar13 = 0x13;
		while ((9 < iVar13 && ((int)uVar6 == 0))) {
			uVar6 = AutoPlace(*(int *)puVar3, iVar13, uVar4, 2, 1, (char)lVar10, (char)lVar11, (char)lVar12,
			    in_stack_ffffffb8);
			iVar13 = iVar13 + -1;
		}
	}
	if ((uVar1 == 1) && (iVar15 == 3)) {
		iVar13 = 0;
		while ((iVar13 < 0x14 && ((int)uVar6 == 0))) {
			uVar6 = AutoPlace(*(int *)puVar3, iVar13, uVar4, 3, 1, (char)lVar10, (char)lVar11, (char)lVar12,
			    in_stack_ffffffb8);
			iVar13 = iVar13 + 1;
		}
	}
	if ((uVar1 == 2) && (iVar15 == 2)) {
		iVar13 = 0;
		lVar7 = uVar5 + 0x35c4;
		while ((iVar13 < 10 && ((int)uVar6 == 0))) {
			uVar6 = AutoPlace(*(int *)puVar3, *(int *)lVar7, uVar4, 2, 1, (char)lVar10, (char)lVar11,
			    (char)lVar12, in_stack_ffffffb8);
			iVar13 = iVar13 + 1;
			lVar7 = lVar7 + 4;
		}
		iVar13 = 0x15;
		while ((iVar13 < 0x1d && ((int)uVar6 == 0))) {
			uVar6 = AutoPlace(*(int *)puVar3, iVar13, uVar4, 2, 1, (char)lVar10, (char)lVar11, (char)lVar12,
			    in_stack_ffffffb8);
			iVar13 = iVar13 + 2;
		}
		iVar13 = 1;
		while ((iVar13 < 9 && ((int)uVar6 == 0))) {
			uVar6 = AutoPlace(*(int *)puVar3, iVar13, uVar4, 2, 1, (char)lVar10, (char)lVar11, (char)lVar12,
			    in_stack_ffffffb8);
			iVar13 = iVar13 + 2;
		}
		iVar13 = 10;
		while ((iVar13 < 0x13 && ((int)uVar6 == 0))) {
			uVar6 = AutoPlace(*(int *)puVar3, iVar13, uVar4, 2, 1, (char)lVar10, (char)lVar11, (char)lVar12,
			    in_stack_ffffffb8);
			iVar13 = iVar13 + 1;
		}
	}
	if ((uVar1 == 2) && (iVar15 == 3)) {
		iVar15 = 0;
		while ((iVar15 < 9 && ((int)uVar6 == 0))) {
			uVar6 = AutoPlace(*(int *)puVar3, iVar15, uVar4, 3, 1, (char)lVar10, (char)lVar11, (char)lVar12,
			    in_stack_ffffffb8);
			iVar15 = iVar15 + 1;
		}
		iVar15 = 10;
		while ((iVar15 < 0x13 && ((int)uVar6 == 0))) {
			uVar6 = AutoPlace(*(int *)puVar3, iVar15, uVar4, 3, 1, (char)lVar10, (char)lVar11, (char)lVar12,
			    in_stack_ffffffb8);
			iVar15 = iVar15 + 1;
		}
	}
	return;
}

void S_StartSmith(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_s_Welcome_to_the_100f38e0;
	puVar1 = _DAT_100f20d8;
	ppuVar3 = &toc;
	*_DAT_100f20dc = 0;
	*puVar1 = 0;
	AddSText(0, 1, 1, (int)puVar2, 3, 0, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 3, 1, (int)ppuVar3[-0x15bd], 3, 0, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 7, 1, (int)ppuVar3[-0x15be], 3, 0, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 10, 1, (int)ppuVar3[-0x15bf], 1, 1, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 0xc, 1, (int)ppuVar3[-0x15c0], 0, 1, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 0xe, 1, (int)ppuVar3[-0x15c1], 0, 1, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 0x10, 1, (int)ppuVar3[-0x15c2], 0, 1, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 0x12, 1, (int)ppuVar3[-0x15c3], 0, 1, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 0x14, 1, (int)ppuVar3[-0x15c4], 0, 1, param_7, param_8, in_stack_ffffffc8);
	AddSLine(5);
	*(undefined4 *)ppuVar3[-0x1bc4] = 0x14;
	return;
}

void S_ScrollSBuy(int iParm1)

{
	int *piVar1;
	int *piVar2;
	ulonglong uVar3;
	char *pcVar4;
	undefined4 uVar5;
	undefined4 uVar6;
	undefined4 in_r9;
	undefined4 in_r10;
	ulonglong uVar7;
	int iVar8;
	int iVar9;
	undefined4 in_stack_ffffffa8;

	piVar2 = _DAT_100f20d0;
	piVar1 = _DAT_100f20b4;
	uVar3 = ZEXT48(&toc);
	ClearSText(5, 0x15);
	iVar9 = *(int *)((int)uVar3 + -0x71a4) + iParm1 * 0x170;
	**(undefined4 **)((int)uVar3 + -0x6f18) = 5;
	iVar8 = 5;
	do {
		if (*(int *)(iVar9 + 8) != -1) {
			uVar7 = (ulonglong)(*(char *)(iVar9 + 0x3c) != '\0');
			if (*(int *)(iVar9 + 0x164) == 0) {
				uVar7 = 2;
			}
			uVar5 = (undefined4)uVar7;
			if (*(char *)(iVar9 + 0x3c) == '\0') {
				pcVar4 = (char *)(iVar9 + 0x3d);
				uVar6 = 1;
				AddSText(0x14, iVar8, 0, (int)pcVar4, (char)uVar7, 1, (char)in_r9, (char)in_r10,
				    in_stack_ffffffa8);
			} else {
				pcVar4 = (char *)(iVar9 + 0x7d);
				uVar6 = 1;
				AddSText(0x14, iVar8, 0, (int)pcVar4, (char)uVar7, 1, (char)in_r9, (char)in_r10,
				    in_stack_ffffffa8);
			}
			AddSTextVal(iVar8, *(undefined4 *)(iVar9 + 200));
			PrintStoreItem(iVar9, iVar8 + 1, uVar7, pcVar4, uVar5, uVar6, in_r9, in_r10, in_stack_ffffffa8);
			*piVar1 = iVar8;
			iVar9 = iVar9 + 0x170;
		}
		iVar8 = iVar8 + 4;
	} while (iVar8 < 0x14);
	iVar8 = *piVar2;
	if ((*(int *)(*(int *)((int)uVar3 + -0x6efc) + iVar8 * 0x9c + 0x94) == 0) && (iVar8 != 0x16)) {
		*piVar2 = *piVar1;
	}
	return;
}

void S_StartSBuy(void)

{
	undefined *puVar1;
	undefined *puVar2;
	int *piVar3;
	uint *puVar4;
	int *piVar5;
	undefined4 *puVar6;
	undefined **ppuVar7;
	undefined *puVar8;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined uVar9;
	undefined4 in_r10;
	undefined uVar10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar6 = _DAT_100f20d8;
	piVar5 = _DAT_100f20c0;
	puVar4 = _DAT_100f20bc;
	piVar3 = _DAT_100f20b0;
	puVar2 = PTR_DAT_100f191c;
	puVar1 = PTR_DAT_100f1828;
	uVar10 = (undefined)in_r10;
	uVar9 = (undefined)in_r9;
	ppuVar7 = &toc;
	*_DAT_100f20dc = 1;
	*puVar6 = 1;
	puVar8 = PTR_DAT_100f1824;
	*puVar4 = 0;
	sprintf((int)puVar2, PTR_s_I_have_these_items_for_sale___Yo_100f38bc,
	    *(undefined4 *)(puVar1 + *(int *)puVar8 * 0x55ec + 0x1c8), in_r6, in_r7, in_r8, in_r9,
	    in_r10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0,
	    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0,
	    in_stack_ffffffe4);
	AddSText(0, 1, 1, (int)puVar2, 3, 0, uVar9, uVar10, in_stack_ffffffb8);
	AddSLine(3);
	AddSLine(0x15);
	S_ScrollSBuy((ulonglong)*puVar4);
	AddSText(0, 0x16, 1, (int)ppuVar7[-0x15c6], 0, 0, uVar9, uVar10, in_stack_ffffffb8);
	OffsetSTextY(0x16, 6);
	*piVar5 = 0;
	puVar8 = ppuVar7[-0x1c69];
	while (*(int *)(puVar8 + 8) != -1) {
		puVar8 = puVar8 + 0x170;
		*piVar5 = *piVar5 + 1;
	}
	*piVar3 = *piVar5 + -4;
	if (*piVar3 < 0) {
		*piVar3 = 0;
	}
	return;
}

void S_ScrollSPBuy(int iParm1)

{
	int *piVar1;
	int *piVar2;
	ulonglong uVar3;
	char *pcVar4;
	undefined4 uVar5;
	undefined4 uVar6;
	undefined4 in_r9;
	undefined4 in_r10;
	int iVar7;
	ulonglong uVar8;
	int iVar9;
	int iVar10;
	undefined4 in_stack_ffffffa8;

	piVar2 = _DAT_100f20d0;
	piVar1 = _DAT_100f20b4;
	iVar10 = _DAT_100f1e28;
	uVar3 = ZEXT48(&toc);
	ClearSText(5, 0x15);
	**(undefined4 **)((int)uVar3 + -0x6f18) = 5;
	iVar7 = 0;
	iVar9 = iVar10;
	while (iParm1 != 0) {
		if (*(int *)(iVar9 + 8) != -1) {
			iParm1 = iParm1 + -1;
		}
		iVar9 = iVar9 + 0x170;
		iVar7 = iVar7 + 1;
	}
	iVar10 = iVar10 + iVar7 * 0x170;
	iVar9 = 5;
	while ((iVar9 < 0x14 && (iVar7 < 6))) {
		if (*(int *)(iVar10 + 8) == -1) {
			if (iVar7 < 6) {
				iVar9 = iVar9 + -4;
			}
		} else {
			uVar8 = (ulonglong)(*(char *)(iVar10 + 0x3c) != '\0');
			if (*(int *)(iVar10 + 0x164) == 0) {
				uVar8 = 2;
			}
			uVar5 = (undefined4)uVar8;
			pcVar4 = (char *)(iVar10 + 0x7d);
			uVar6 = 1;
			AddSText(0x14, iVar9, 0, (int)pcVar4, (char)uVar8, 1, (char)in_r9, (char)in_r10, in_stack_ffffffa8);
			AddSTextVal(iVar9, *(undefined4 *)(iVar10 + 200));
			PrintStoreItem(iVar10, iVar9 + 1, uVar8, pcVar4, uVar5, uVar6, in_r9, in_r10, in_stack_ffffffa8);
			*piVar1 = iVar9;
		}
		iVar10 = iVar10 + 0x170;
		iVar7 = iVar7 + 1;
		iVar9 = iVar9 + 4;
	}
	iVar10 = *piVar2;
	if ((*(int *)(*(int *)((int)uVar3 + -0x6efc) + iVar10 * 0x9c + 0x94) == 0) && (iVar10 != 0x16)) {
		*piVar2 = *piVar1;
	}
	return;
}

undefined8
S_StartSPBuy(undefined8 uParm1, undefined8 uParm2, undefined param_3, undefined param_4,
    undefined8 uParm5, undefined8 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	int *piVar5;
	uint *puVar6;
	int *piVar7;
	undefined4 *puVar8;
	undefined **ppuVar9;
	undefined **ppuVar10;
	undefined8 uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	piVar7 = _DAT_100f20c0;
	puVar6 = _DAT_100f20bc;
	piVar5 = _DAT_100f20b0;
	iVar4 = _DAT_100f1e28;
	puVar3 = PTR_DAT_100f191c;
	uVar13 = (undefined)uParm8;
	uVar12 = (undefined)uParm7;
	ppuVar10 = &toc;
	ppuVar9 = &toc;
	*_DAT_100f20c0 = 0;
	if (*(int *)(iVar4 + 8) != -1) {
		*piVar7 = *piVar7 + 1;
	}
	if (*(int *)(iVar4 + 0x178) != -1) {
		*piVar7 = *piVar7 + 1;
	}
	if (*(int *)(iVar4 + 0x2e8) != -1) {
		*piVar7 = *piVar7 + 1;
	}
	if (*(int *)(iVar4 + 0x458) != -1) {
		*piVar7 = *piVar7 + 1;
	}
	if (*(int *)(iVar4 + 0x5c8) != -1) {
		*piVar7 = *piVar7 + 1;
	}
	if (*(int *)(iVar4 + 0x738) != -1) {
		*piVar7 = *piVar7 + 1;
	}
	puVar8 = _DAT_100f20d8;
	if (*piVar7 == 0) {
		StartStore('\x01', (char)iVar4 + -0x40, param_3, param_4, (char)uParm5, (char)uParm6, uVar12, uVar13,
		    in_stack_ffffffb8);
		uVar11 = 0;
		*(undefined4 *)ppuVar9[-0x1bc0] = 0xe;
	} else {
		*_DAT_100f20dc = 1;
		puVar1 = PTR_DAT_100f1824;
		*puVar8 = 1;
		puVar2 = PTR_DAT_100f1828;
		*puVar6 = 0;
		sprintf((int)puVar3, PTR_s_I_have_these_premium_items_for_s_100f38b4,
		    *(undefined4 *)(puVar2 + *(int *)puVar1 * 0x55ec + 0x1c8), puVar2, (int)uParm5,
		    (int)uParm6, uParm7, uParm8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4);
		AddSText(0, 1, 1, (int)puVar3, 3, 0, uVar12, uVar13, in_stack_ffffffb8);
		AddSLine(3);
		AddSLine(0x15);
		AddSText(0, 0x16, 1, (int)ppuVar10[-0x15c6], 0, 0, uVar12, uVar13, in_stack_ffffffb8);
		OffsetSTextY(0x16, 6);
		*piVar5 = *piVar7 + -4;
		if (*piVar5 < 0) {
			*piVar5 = 0;
		}
		S_ScrollSPBuy((ulonglong)*puVar6);
		uVar11 = 1;
	}
	return uVar11;
}

undefined8 SmithSellOk(int param_1)

{
	int iVar1;

	iVar1 = *(int *)(PTR_DAT_100f1828 + param_1 * 0x170 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0xeb0);
	if (iVar1 == -1) {
		return 0;
	}
	if (iVar1 == 0) {
		return 0;
	}
	if (iVar1 == 0xb) {
		return 0;
	}
	if (iVar1 == 0xe) {
		return 0;
	}
	if (iVar1 == 10) {
		return 0;
	}
	if (*(int *)(PTR_DAT_100f1828 + param_1 * 0x170 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x1010) == 0x21) {
		return 0;
	}
	return 1;
}

void S_ScrollSSell(int iParm1)

{
	int *piVar1;
	int *piVar2;
	int *piVar3;
	undefined **ppuVar4;
	undefined4 uVar5;
	char *pcVar6;
	undefined4 uVar7;
	undefined4 uVar8;
	undefined4 in_r9;
	undefined4 in_r10;
	ulonglong uVar9;
	int iVar10;
	undefined *puVar11;
	undefined4 in_stack_ffffffa8;

	piVar3 = _DAT_100f20c0;
	piVar2 = _DAT_100f20b4;
	piVar1 = _DAT_100f20b0;
	ppuVar4 = &toc;
	ClearSText(5, 0x15);
	puVar11 = ppuVar4[-0x1bc9] + iParm1 * 0x170;
	*(undefined4 *)ppuVar4[-0x1bc6] = 5;
	iVar10 = 5;
	while ((iVar10 < 0x14 && (iParm1 < *piVar3))) {
		if (*(int *)(puVar11 + 8) != -1) {
			uVar9 = (ulonglong)(puVar11[0x3c] != '\0');
			if (*(int *)(puVar11 + 0x164) == 0) {
				uVar9 = 2;
			}
			uVar7 = (undefined4)uVar9;
			if ((puVar11[0x3c] == '\0') || (*(int *)(puVar11 + 0x38) == 0)) {
				pcVar6 = puVar11 + 0x3d;
				uVar8 = 1;
				AddSText(0x14, iVar10, 0, (int)pcVar6, (char)uVar9, 1, (char)in_r9, (char)in_r10,
				    in_stack_ffffffa8);
				uVar5 = *(undefined4 *)(puVar11 + 0xc4);
			} else {
				pcVar6 = puVar11 + 0x7d;
				uVar8 = 1;
				AddSText(0x14, iVar10, 0, (int)pcVar6, (char)uVar9, 1, (char)in_r9, (char)in_r10,
				    in_stack_ffffffa8);
				uVar5 = *(undefined4 *)(puVar11 + 200);
			}
			AddSTextVal(iVar10, uVar5);
			PrintStoreItem((int)puVar11, iVar10 + 1, uVar9, pcVar6, uVar7, uVar8, in_r9, in_r10, in_stack_ffffffa8);
			*piVar2 = iVar10;
		}
		puVar11 = puVar11 + 0x170;
		iParm1 = iParm1 + 1;
		iVar10 = iVar10 + 4;
	}
	*piVar1 = *piVar3 + -4;
	if (*piVar1 < 0) {
		*piVar1 = 0;
	}
	return;
}

void S_StartSSell(void)

{
	uint uVar1;
	undefined4 *puVar2;
	undefined4 uVar3;
	bool bVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	uint *puVar9;
	uint *puVar10;
	undefined *puVar11;
	ulonglong uVar12;
	undefined8 uVar13;
	int iVar14;
	undefined4 *puVar15;
	longlong in_r6;
	undefined *puVar16;
	longlong in_r7;
	undefined8 in_r8;
	undefined4 in_r9;
	undefined uVar17;
	undefined4 in_r10;
	undefined uVar18;
	longlong lVar19;
	int iVar20;
	ulonglong uVar21;
	longlong lVar22;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	puVar11 = PTR_DAT_100f38b8;
	puVar2 = _DAT_100f20d8;
	puVar10 = _DAT_100f20c0;
	puVar9 = _DAT_100f20bc;
	puVar8 = PTR_DAT_100f20ac;
	puVar7 = PTR_DAT_100f20a8;
	puVar6 = PTR_DAT_100f191c;
	puVar16 = PTR_DAT_100f1828;
	puVar5 = PTR_DAT_100f1824;
	uVar12 = ZEXT48(&toc);
	lVar19 = 0;
	uVar21 = ZEXT48(PTR_DAT_100f20ac);
	iVar20 = 0;
	bVar4 = false;
	*_DAT_100f20dc = 1;
	*puVar10 = 0;
	*(undefined4 *)(puVar8 + 8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x178) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x2e8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x458) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x5c8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x738) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x8a8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0xa18) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0xb88) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0xcf8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0xe68) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0xfd8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x1148) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x12b8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x1428) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x1598) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x1708) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x1878) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x19e8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 7000) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x1cc8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x1e38) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x1fa8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x2118) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x2288) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x23f8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x2568) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x26d8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x2848) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x29b8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x2b28) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x2c98) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x2e08) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x2f78) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x30e8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x3258) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x33c8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x3538) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x36a8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x3818) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x3988) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x3af8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x3c68) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x3dd8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x3f48) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x40b8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x4228) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x4398) = 0xffffffff;
	while (true) {
		uVar18 = (undefined)in_r10;
		uVar17 = (undefined)in_r9;
		iVar14 = *(int *)puVar5 * 0x55ec;
		if (*(int *)(puVar16 + iVar14 + 0x4828) <= (int)lVar19)
			break;
		uVar13 = SmithSellOk((int)lVar19);
		if ((int)uVar13 != 0) {
			uVar1 = *puVar10;
			lVar22 = 0x2e;
			in_r7 = uVar21 + (ulonglong)uVar1 * 0x170;
			in_r6 = in_r7 + -8;
			bVar4 = true;
			puVar15 = (undefined4 *)(puVar16 + *(int *)puVar5 * 0x55ec + iVar20 + 0xea0);
			do {
				uVar3 = puVar15[3];
				in_r6 = in_r6 + 8;
				*(undefined4 *)in_r6 = puVar15[2];
				((undefined4 *)in_r6)[1] = uVar3;
				lVar22 = lVar22 + -1;
				puVar15 = puVar15 + 2;
			} while (lVar22 != 0);
			iVar14 = (int)in_r7;
			if ((*(char *)(iVar14 + 0x3c) != '\0') && (*(int *)(iVar14 + 0x38) != 0)) {
				*(undefined4 *)(iVar14 + 0xc4) = *(undefined4 *)(iVar14 + 200);
			}
			*(int *)(iVar14 + 0xc4) = *(int *)(iVar14 + 0xc4) >> 2;
			if (*(int *)(iVar14 + 0xc4) == 0) {
				*(undefined4 *)(iVar14 + 0xc4) = 1;
			}
			*(undefined4 *)(iVar14 + 200) = *(undefined4 *)(iVar14 + 0xc4);
			puVar7[uVar1] = (char)lVar19;
			*puVar10 = *puVar10 + 1;
		}
		iVar20 = iVar20 + 0x170;
		lVar19 = lVar19 + 1;
	}
	iVar20 = (int)uVar12;
	if (bVar4) {
		puVar16 = puVar16 + iVar14;
		*puVar2 = 1;
		puVar2 = *(undefined4 **)(iVar20 + -0x6f20);
		*puVar9 = 0;
		uVar3 = *(undefined4 *)(iVar20 + -0x5724);
		*puVar2 = *(undefined4 *)(puVar16 + 0x4828);
		sprintf((int)puVar6, uVar3, *(undefined4 *)(puVar16 + 0x1c8), puVar16, (int)in_r7, (int)in_r8,
		    in_r9, in_r10, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac,
		    in_stack_ffffffb0, in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc,
		    in_stack_ffffffc0, in_stack_ffffffc4);
		AddSText(0, 1, 1, (int)puVar6, 3, 0, uVar17, uVar18, in_stack_ffffff98);
		AddSLine(3);
		AddSLine(0x15);
		S_ScrollSSell((ulonglong)*puVar9);
		AddSText(0, 0x16, 1, (int)puVar11, 0, 1, uVar17, uVar18, in_stack_ffffff98);
		OffsetSTextY(0x16, 6);
	} else {
		*puVar2 = 0;
		sprintf((int)puVar6, *(undefined4 *)(iVar20 + -0x5720),
		    *(undefined4 *)(puVar16 + iVar14 + 0x1c8), (int)in_r6, (int)in_r7, (int)in_r8, in_r9,
		    in_r10, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac, in_stack_ffffffb0,
		    in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
		    in_stack_ffffffc4);
		AddSText(0, 1, 1, (int)puVar6, 3, 0, uVar17, uVar18, in_stack_ffffff98);
		AddSLine(3);
		AddSLine(0x15);
		AddSText(0, 0x16, 1, (int)puVar11, 0, 1, uVar17, uVar18, in_stack_ffffff98);
		OffsetSTextY(0x16, 6);
	}
	return;
}

undefined8 SmithRepairOk(int param_1)

{
	int iVar1;
	undefined *puVar2;

	puVar2 = PTR_DAT_100f1828 + param_1 * 0x170 + *(int *)PTR_DAT_100f1824 * 0x55ec;
	iVar1 = *(int *)(puVar2 + 0xeb0);
	if (iVar1 == -1) {
		return 0;
	}
	if (iVar1 == 0) {
		return 0;
	}
	if (iVar1 == 0xb) {
		return 0;
	}
	if (iVar1 == 0xe) {
		return 0;
	}
	if (*(int *)(puVar2 + 0xf94) == *(int *)(puVar2 + 0xf98)) {
		return 0;
	}
	return 1;
}

void AddStoreHoldRepair(int param_1, undefined param_2)

{
	undefined4 uVar1;
	uint uVar2;
	undefined *puVar3;
	int *piVar4;
	int iVar5;
	undefined *puVar6;
	undefined4 *puVar7;
	undefined4 *puVar8;
	longlong lVar9;

	piVar4 = _DAT_100f20c0;
	lVar9 = 0x2e;
	puVar6 = PTR_DAT_100f20ac + *_DAT_100f20c0 * 0x170;
	puVar7 = (undefined4 *)(param_1 + -8);
	puVar8 = (undefined4 *)(puVar6 + -8);
	do {
		uVar1 = puVar7[3];
		puVar8[2] = puVar7[2];
		puVar8[3] = uVar1;
		lVar9 = lVar9 + -1;
		puVar7 = puVar7 + 2;
		puVar8 = puVar8 + 2;
	} while (lVar9 != 0);
	if (puVar6[0x3c] != '\0') {
		if (*(int *)(puVar6 + 0x38) != 0) {
			uVar2 = (*(int *)(puVar6 + 200) * 0x1e) / 100 + (*(int *)(puVar6 + 200) * 0x1e >> 0x1f);
			*(uint *)(puVar6 + 0xc4) = uVar2 + (uVar2 >> 0x1f);
		}
	}
	iVar5 = (((*(int *)(puVar6 + 0xf0) - *(int *)(puVar6 + 0xec)) * 100) / *(int *)(puVar6 + 0xf0)) * *(int *)(puVar6 + 0xc4);
	uVar2 = iVar5 / 100 + (iVar5 >> 0x1f);
	lVar9 = ((longlong)(int)((ulonglong)((longlong)iVar5 * 0x51eb851f) >> 0x20) & 0xffffffff00000000U
	            | (ulonglong)uVar2)
	    + (ulonglong)(uVar2 >> 0x1f);
	iVar5 = (int)lVar9;
	if (lVar9 == 0) {
		if ((puVar6[0x3c] != '\0') && (*(int *)(puVar6 + 0x38) != 0)) {
			return;
		}
		iVar5 = 1;
	}
	if (1 < iVar5) {
		iVar5 = iVar5 >> 1;
	}
	*(int *)(puVar6 + 200) = iVar5;
	puVar3 = PTR_DAT_100f20a8;
	*(int *)(puVar6 + 0xc4) = iVar5;
	iVar5 = *piVar4;
	*piVar4 = iVar5 + 1;
	puVar3[iVar5] = param_2;
	return;
}

void S_StartSRepair(void)

{
	undefined4 *puVar1;
	undefined4 uVar2;
	bool bVar3;
	undefined *puVar4;
	undefined *puVar5;
	uint *puVar6;
	undefined4 *puVar7;
	undefined *puVar8;
	ulonglong uVar9;
	undefined8 uVar10;
	int iVar11;
	undefined *puVar12;
	undefined8 in_r6;
	undefined *puVar13;
	undefined8 in_r7;
	undefined8 in_r8;
	undefined4 in_r9;
	undefined uVar14;
	undefined4 in_r10;
	undefined uVar15;
	longlong lVar16;
	int iVar17;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	puVar8 = PTR_DAT_100f38b8;
	puVar7 = _DAT_100f20d8;
	puVar1 = _DAT_100f20c0;
	puVar6 = _DAT_100f20bc;
	puVar5 = PTR_DAT_100f191c;
	puVar13 = PTR_DAT_100f1828;
	puVar4 = PTR_DAT_100f1824;
	uVar9 = ZEXT48(&toc);
	bVar3 = false;
	*_DAT_100f20dc = 1;
	puVar12 = PTR_DAT_100f20ac;
	*puVar1 = 0;
	*(undefined4 *)(puVar12 + 8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x178) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x2e8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x458) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x5c8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x738) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x8a8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0xa18) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0xb88) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0xcf8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0xe68) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0xfd8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x1148) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x12b8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x1428) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x1598) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x1708) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x1878) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x19e8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 7000) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x1cc8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x1e38) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x1fa8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x2118) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x2288) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x23f8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x2568) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x26d8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x2848) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x29b8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x2b28) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x2c98) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x2e08) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x2f78) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x30e8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x3258) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x33c8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x3538) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x36a8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x3818) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x3988) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x3af8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x3c68) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x3dd8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x3f48) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x40b8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x4228) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x4398) = 0xffffffff;
	puVar12 = puVar13 + *(int *)puVar4 * 0x55ec;
	if ((*(int *)(puVar12 + 0x4a0) != -1) && (*(int *)(puVar12 + 0x584) != *(int *)(puVar12 + 0x588))) {
		bVar3 = true;
		AddStoreHoldRepair((int)(puVar13 + *(int *)puVar4 * 0x55ec + 0x498), 0xff);
	}
	puVar12 = puVar13 + *(int *)puVar4 * 0x55ec;
	if ((*(int *)(puVar12 + 0xd40) != -1) && (*(int *)(puVar12 + 0xe24) != *(int *)(puVar12 + 0xe28))) {
		bVar3 = true;
		AddStoreHoldRepair((int)(puVar13 + *(int *)puVar4 * 0x55ec + 0xd38), 0xfe);
	}
	puVar12 = puVar13 + *(int *)puVar4 * 0x55ec;
	if ((*(int *)(puVar12 + 0xa60) != -1) && (*(int *)(puVar12 + 0xb44) != *(int *)(puVar12 + 0xb48))) {
		bVar3 = true;
		AddStoreHoldRepair((int)(puVar13 + *(int *)puVar4 * 0x55ec + 0xa58), 0xfd);
	}
	puVar12 = puVar13 + *(int *)puVar4 * 0x55ec;
	if ((*(int *)(puVar12 + 0xbd0) != -1) && (*(int *)(puVar12 + 0xcb4) != *(int *)(puVar12 + 0xcb8))) {
		bVar3 = true;
		AddStoreHoldRepair((int)(puVar13 + *(int *)puVar4 * 0x55ec + 0xbc8), 0xfc);
	}
	lVar16 = 0;
	iVar17 = 0;
	while (true) {
		uVar15 = (undefined)in_r10;
		uVar14 = (undefined)in_r9;
		iVar11 = *(int *)puVar4 * 0x55ec;
		if (*(int *)(puVar13 + iVar11 + 0x4828) <= (int)lVar16)
			break;
		uVar10 = SmithRepairOk((int)lVar16);
		if ((int)uVar10 != 0) {
			bVar3 = true;
			AddStoreHoldRepair((int)(puVar13 + *(int *)puVar4 * 0x55ec + iVar17 + 0xea8), (char)lVar16);
		}
		iVar17 = iVar17 + 0x170;
		lVar16 = lVar16 + 1;
	}
	iVar17 = (int)uVar9;
	if (bVar3) {
		puVar13 = puVar13 + iVar11;
		*puVar7 = 1;
		puVar1 = *(undefined4 **)(iVar17 + -0x6f20);
		*puVar6 = 0;
		uVar2 = *(undefined4 *)(iVar17 + -0x572c);
		*puVar1 = *(undefined4 *)(puVar13 + 0x4828);
		sprintf((int)puVar5, uVar2, *(undefined4 *)(puVar13 + 0x1c8), puVar13, (int)in_r7, (int)in_r8,
		    in_r9, in_r10, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac,
		    in_stack_ffffffb0, in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc,
		    in_stack_ffffffc0, in_stack_ffffffc4);
		AddSText(0, 1, 1, (int)puVar5, 3, 0, uVar14, uVar15, in_stack_ffffff98);
		AddSLine(3);
		AddSLine(0x15);
		S_ScrollSSell((ulonglong)*puVar6);
		AddSText(0, 0x16, 1, (int)puVar8, 0, 1, uVar14, uVar15, in_stack_ffffff98);
		OffsetSTextY(0x16, 6);
	} else {
		*puVar7 = 0;
		sprintf((int)puVar5, *(undefined4 *)(iVar17 + -0x5728),
		    *(undefined4 *)(puVar13 + iVar11 + 0x1c8), (int)in_r6, (int)in_r7, (int)in_r8, in_r9,
		    in_r10, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac, in_stack_ffffffb0,
		    in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
		    in_stack_ffffffc4);
		AddSText(0, 1, 1, (int)puVar5, 3, 0, uVar14, uVar15, in_stack_ffffff98);
		AddSLine(3);
		AddSLine(0x15);
		AddSText(0, 0x16, 1, (int)puVar8, 0, 1, uVar14, uVar15, in_stack_ffffff98);
		OffsetSTextY(0x16, 6);
	}
	return;
}

void S_StartWitch(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_s_Witch_s_shack_100f38a0;
	puVar1 = _DAT_100f20d8;
	ppuVar3 = &toc;
	*_DAT_100f20dc = 0;
	*puVar1 = 0;
	AddSText(0, 2, 1, (int)puVar2, 3, 0, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 9, 1, (int)ppuVar3[-0x15be], 3, 0, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 0xc, 1, (int)ppuVar3[-0x15cd], 1, 1, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 0xe, 1, (int)ppuVar3[-0x15ce], 0, 1, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 0x10, 1, (int)ppuVar3[-0x15c2], 0, 1, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 0x12, 1, (int)ppuVar3[-0x15cf], 0, 1, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 0x14, 1, (int)ppuVar3[-0x15d0], 0, 1, param_7, param_8, in_stack_ffffffc8);
	AddSLine(5);
	*(undefined4 *)ppuVar3[-0x1bc4] = 0x14;
	return;
}

void S_ScrollWBuy(int iParm1)

{
	int *piVar1;
	int *piVar2;
	ulonglong uVar3;
	char *pcVar4;
	undefined4 uVar5;
	undefined4 uVar6;
	undefined4 in_r9;
	undefined4 in_r10;
	ulonglong uVar7;
	int iVar8;
	int iVar9;
	undefined4 in_stack_ffffffa8;

	piVar2 = _DAT_100f20d0;
	piVar1 = _DAT_100f20b4;
	uVar3 = ZEXT48(&toc);
	ClearSText(5, 0x15);
	iVar9 = *(int *)((int)uVar3 + -0x7178) + iParm1 * 0x170;
	**(undefined4 **)((int)uVar3 + -0x6f18) = 5;
	iVar8 = 5;
	do {
		if (*(int *)(iVar9 + 8) != -1) {
			uVar7 = (ulonglong)(*(char *)(iVar9 + 0x3c) != '\0');
			if (*(int *)(iVar9 + 0x164) == 0) {
				uVar7 = 2;
			}
			uVar5 = (undefined4)uVar7;
			if (*(char *)(iVar9 + 0x3c) == '\0') {
				pcVar4 = (char *)(iVar9 + 0x3d);
				uVar6 = 1;
				AddSText(0x14, iVar8, 0, (int)pcVar4, (char)uVar7, 1, (char)in_r9, (char)in_r10,
				    in_stack_ffffffa8);
			} else {
				pcVar4 = (char *)(iVar9 + 0x7d);
				uVar6 = 1;
				AddSText(0x14, iVar8, 0, (int)pcVar4, (char)uVar7, 1, (char)in_r9, (char)in_r10,
				    in_stack_ffffffa8);
			}
			AddSTextVal(iVar8, *(undefined4 *)(iVar9 + 200));
			PrintStoreItem(iVar9, iVar8 + 1, uVar7, pcVar4, uVar5, uVar6, in_r9, in_r10, in_stack_ffffffa8);
			*piVar1 = iVar8;
			iVar9 = iVar9 + 0x170;
		}
		iVar8 = iVar8 + 4;
	} while (iVar8 < 0x14);
	iVar8 = *piVar2;
	if ((*(int *)(*(int *)((int)uVar3 + -0x6efc) + iVar8 * 0x9c + 0x94) == 0) && (iVar8 != 0x16)) {
		*piVar2 = *piVar1;
	}
	return;
}

void S_StartWBuy(void)

{
	undefined *puVar1;
	undefined *puVar2;
	int *piVar3;
	uint *puVar4;
	int *piVar5;
	undefined4 *puVar6;
	undefined **ppuVar7;
	undefined *puVar8;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined uVar9;
	undefined4 in_r10;
	undefined uVar10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar6 = _DAT_100f20d8;
	piVar5 = _DAT_100f20c0;
	puVar4 = _DAT_100f20bc;
	piVar3 = _DAT_100f20b0;
	puVar2 = PTR_DAT_100f191c;
	uVar10 = (undefined)in_r10;
	uVar9 = (undefined)in_r9;
	ppuVar7 = &toc;
	*_DAT_100f20dc = 1;
	*puVar6 = 1;
	puVar8 = PTR_DAT_100f1824;
	*puVar4 = 0;
	puVar1 = PTR_DAT_100f1828;
	*piVar3 = 0x14;
	sprintf((int)puVar2, PTR_s_I_have_these_items_for_sale___Yo_100f38bc,
	    *(undefined4 *)(puVar1 + *(int *)puVar8 * 0x55ec + 0x1c8), in_r6, in_r7, in_r8, in_r9,
	    in_r10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0,
	    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0,
	    in_stack_ffffffe4);
	AddSText(0, 1, 1, (int)puVar2, 3, 0, uVar9, uVar10, in_stack_ffffffb8);
	AddSLine(3);
	AddSLine(0x15);
	S_ScrollWBuy((ulonglong)*puVar4);
	AddSText(0, 0x16, 1, (int)ppuVar7[-0x15c6], 0, 0, uVar9, uVar10, in_stack_ffffffb8);
	OffsetSTextY(0x16, 6);
	*piVar5 = 0;
	puVar8 = ppuVar7[-0x1c5e];
	while (*(int *)(puVar8 + 8) != -1) {
		puVar8 = puVar8 + 0x170;
		*piVar5 = *piVar5 + 1;
	}
	*piVar3 = *piVar5 + -4;
	if (*piVar3 < 0) {
		*piVar3 = 0;
	}
	return;
}

ulonglong WitchSellOk(int param_1)

{
	int iVar1;
	int iVar2;
	ulonglong uVar3;

	if (param_1 < 0) {
		iVar2 = *(int *)PTR_DAT_100f1824 * 0x55ec + (param_1 + 1) * -0x170 + 0x4854;
	} else {
		iVar2 = *(int *)PTR_DAT_100f1824 * 0x55ec + param_1 * 0x170 + 0xea8;
	}
	iVar1 = *(int *)(PTR_DAT_100f1828 + iVar2 + 8);
	uVar3 = (ulonglong)(iVar1 == 0);
	if (iVar1 == 10) {
		uVar3 = 1;
	}
	iVar2 = *(int *)(PTR_DAT_100f1828 + iVar2 + 0x168);
	if ((5 < iVar2) && (iVar2 < 0x17)) {
		uVar3 = 0;
	}
	if (iVar2 == 0x21) {
		uVar3 = 0;
	}
	return uVar3;
}

void S_StartWSell(void)

{
	uint uVar1;
	undefined4 uVar2;
	undefined4 *puVar3;
	int iVar4;
	undefined *puVar5;
	bool bVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	uint *puVar11;
	uint *puVar12;
	undefined4 *puVar13;
	undefined *puVar14;
	ulonglong uVar15;
	ulonglong uVar16;
	longlong lVar17;
	longlong in_r6;
	longlong in_r7;
	undefined8 in_r8;
	undefined4 in_r9;
	undefined uVar18;
	undefined4 in_r10;
	undefined uVar19;
	longlong lVar20;
	longlong lVar21;
	ulonglong uVar22;
	ulonglong uVar23;
	longlong lVar24;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined4 in_stack_ffffff9c;
	undefined4 in_stack_ffffffa0;
	undefined4 in_stack_ffffffa4;
	undefined4 in_stack_ffffffa8;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;

	puVar14 = PTR_DAT_100f38b8;
	puVar13 = _DAT_100f20d8;
	puVar12 = _DAT_100f20c0;
	puVar11 = _DAT_100f20bc;
	puVar10 = PTR_DAT_100f20ac;
	puVar9 = PTR_DAT_100f20a8;
	puVar8 = PTR_DAT_100f191c;
	puVar5 = PTR_DAT_100f1828;
	puVar7 = PTR_DAT_100f1824;
	uVar15 = ZEXT48(&toc);
	lVar20 = 0;
	uVar22 = ZEXT48(PTR_DAT_100f20ac);
	lVar21 = 0;
	bVar6 = false;
	uVar23 = ZEXT48(PTR_DAT_100f1828);
	*_DAT_100f20dc = 1;
	*puVar12 = 0;
	*(undefined4 *)(puVar10 + 8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x178) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x2e8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x458) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x5c8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x738) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x8a8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0xa18) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0xb88) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0xcf8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0xe68) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0xfd8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x1148) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x12b8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x1428) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x1598) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x1708) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x1878) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x19e8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 7000) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x1cc8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x1e38) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x1fa8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x2118) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x2288) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x23f8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x2568) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x26d8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x2848) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x29b8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x2b28) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x2c98) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x2e08) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x2f78) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x30e8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x3258) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x33c8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x3538) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x36a8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x3818) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x3988) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x3af8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x3c68) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x3dd8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x3f48) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x40b8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x4228) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x4398) = 0xffffffff;
	while ((int)lVar20 < *(int *)(puVar5 + *(int *)puVar7 * 0x55ec + 0x4828)) {
		uVar16 = WitchSellOk((int)lVar20);
		if ((int)uVar16 != 0) {
			uVar1 = *puVar12;
			lVar24 = 0x2e;
			in_r7 = uVar22 + (ulonglong)uVar1 * 0x170;
			in_r6 = in_r7 + -8;
			lVar17 = uVar23 + (ulonglong) * (uint *)puVar7 * 0x55ec + lVar21 + 0xea0;
			bVar6 = true;
			do {
				lVar17 = lVar17 + 8;
				uVar2 = ((undefined4 *)lVar17)[1];
				in_r6 = in_r6 + 8;
				*(undefined4 *)in_r6 = *(undefined4 *)lVar17;
				((undefined4 *)in_r6)[1] = uVar2;
				lVar24 = lVar24 + -1;
			} while (lVar24 != 0);
			iVar4 = (int)in_r7;
			if ((*(char *)(iVar4 + 0x3c) != '\0') && (*(int *)(iVar4 + 0x38) != 0)) {
				*(undefined4 *)(iVar4 + 0xc4) = *(undefined4 *)(iVar4 + 200);
			}
			*(int *)(iVar4 + 0xc4) = *(int *)(iVar4 + 0xc4) >> 2;
			if (*(int *)(iVar4 + 0xc4) == 0) {
				*(undefined4 *)(iVar4 + 0xc4) = 1;
			}
			*(undefined4 *)(iVar4 + 200) = *(undefined4 *)(iVar4 + 0xc4);
			puVar9[uVar1] = (char)lVar20;
			*puVar12 = *puVar12 + 1;
		}
		lVar21 = lVar21 + 0x170;
		lVar20 = lVar20 + 1;
	}
	lVar20 = 0;
	lVar21 = 0;
	do {
		if (*(int *)(puVar5 + *(int *)puVar7 * 0x55ec + (int)lVar21 + 0x485c) != -1) {
			uVar16 = WitchSellOk((int)-(lVar20 + 1));
			if ((int)uVar16 != 0) {
				uVar1 = *puVar12;
				lVar24 = 0x2e;
				lVar17 = uVar22 + (ulonglong)uVar1 * 0x170;
				in_r7 = lVar17 + -8;
				in_r6 = uVar23 + (ulonglong) * (uint *)puVar7 * 0x55ec + lVar21 + 0x484c;
				bVar6 = true;
				do {
					in_r6 = in_r6 + 8;
					uVar2 = ((undefined4 *)in_r6)[1];
					in_r7 = in_r7 + 8;
					*(undefined4 *)in_r7 = *(undefined4 *)in_r6;
					((undefined4 *)in_r7)[1] = uVar2;
					lVar24 = lVar24 + -1;
				} while (lVar24 != 0);
				iVar4 = (int)lVar17;
				if ((*(char *)(iVar4 + 0x3c) != '\0') && (*(int *)(iVar4 + 0x38) != 0)) {
					*(undefined4 *)(iVar4 + 0xc4) = *(undefined4 *)(iVar4 + 200);
				}
				*(int *)(iVar4 + 0xc4) = *(int *)(iVar4 + 0xc4) >> 2;
				if (*(int *)(iVar4 + 0xc4) == 0) {
					*(undefined4 *)(iVar4 + 0xc4) = 1;
				}
				*(undefined4 *)(iVar4 + 200) = *(undefined4 *)(iVar4 + 0xc4);
				puVar9[uVar1] = (char)-(lVar20 + 1);
				*puVar12 = *puVar12 + 1;
			}
		}
		uVar19 = (undefined)in_r10;
		uVar18 = (undefined)in_r9;
		lVar20 = lVar20 + 1;
		lVar21 = lVar21 + 0x170;
	} while ((int)lVar20 < 8);
	iVar4 = (int)uVar15;
	if (bVar6) {
		puVar3 = *(undefined4 **)(iVar4 + -0x6f20);
		*puVar13 = 1;
		uVar2 = *(undefined4 *)(iVar4 + -0x5724);
		*puVar11 = 0;
		puVar5 = puVar5 + *(int *)puVar7 * 0x55ec;
		*puVar3 = *(undefined4 *)(puVar5 + 0x4828);
		sprintf((int)puVar8, uVar2, *(undefined4 *)(puVar5 + 0x1c8), puVar5, (int)in_r7, (int)in_r8,
		    in_r9, in_r10, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9c,
		    in_stack_ffffffa0, in_stack_ffffffa4, in_stack_ffffffa8, in_stack_ffffffac,
		    in_stack_ffffffb0, in_stack_ffffffb4);
		AddSText(0, 1, 1, (int)puVar8, 3, 0, uVar18, uVar19, in_stack_ffffff88);
		AddSLine(3);
		AddSLine(0x15);
		S_ScrollSSell((ulonglong)*puVar11);
		AddSText(0, 0x16, 1, (int)puVar14, 0, 1, uVar18, uVar19, in_stack_ffffff88);
		OffsetSTextY(0x16, 6);
	} else {
		uVar2 = *(undefined4 *)(iVar4 + -0x5720);
		*puVar13 = 0;
		sprintf((int)puVar8, uVar2, *(undefined4 *)(puVar5 + *(int *)puVar7 * 0x55ec + 0x1c8),
		    (int)in_r6, (int)in_r7, (int)in_r8, in_r9, in_r10, in_stack_ffffff88, in_stack_ffffff8f,
		    in_stack_ffffff9c, in_stack_ffffffa0, in_stack_ffffffa4, in_stack_ffffffa8,
		    in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4);
		AddSText(0, 1, 1, (int)puVar8, 3, 0, uVar18, uVar19, in_stack_ffffff88);
		AddSLine(3);
		AddSLine(0x15);
		AddSText(0, 0x16, 1, (int)puVar14, 0, 1, uVar18, uVar19, in_stack_ffffff88);
		OffsetSTextY(0x16, 6);
	}
	return;
}

undefined8 WitchRechargeOk(int param_1)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f1828 + param_1 * 0x170 + *(int *)PTR_DAT_100f1824 * 0x55ec;
	if (*(int *)(puVar1 + 0xeb0) != 10) {
		return 0;
	}
	if (*(int *)(puVar1 + 0xf8c) == *(int *)(puVar1 + 0xf90)) {
		return 0;
	}
	return 1;
}

void AddStoreHoldRecharge(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined param_9, undefined param_10, undefined4 param_11, undefined4 param_12,
    undefined4 param_13, undefined4 param_14, undefined4 param_15, undefined4 param_16,
    undefined4 param_17, undefined4 param_18, int param_19, undefined4 param_20)

{
	int iVar1;
	undefined4 uVar2;
	uint uVar3;
	undefined *puVar4;
	int *piVar5;
	undefined4 *puVar6;
	int iVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined4 *puVar10;
	longlong lVar11;

	piVar5 = _DAT_100f20c0;
	puVar8 = PTR_DAT_100f20ac;
	lVar11 = 0x2e;
	iVar1 = *_DAT_100f20c0;
	iVar7 = iVar1 * 0x170;
	puVar10 = (undefined4 *)&stack0x00000010;
	puVar6 = (undefined4 *)(PTR_DAT_100f20ac + iVar7 + -8);
	do {
		uVar2 = puVar10[3];
		puVar6[2] = puVar10[2];
		puVar6[3] = uVar2;
		puVar4 = PTR_DAT_100f20a8;
		lVar11 = lVar11 + -1;
		puVar10 = puVar10 + 2;
		puVar6 = puVar6 + 2;
	} while (lVar11 != 0);
	puVar9 = puVar8 + iVar7;
	puVar8 = puVar8 + iVar7;
	*(int *)(puVar9 + 0xc4) = *(int *)(puVar9 + 0xc4) + *(int *)(PTR_DAT_100f1934 + param_19 * 0x38 + 0x34);
	iVar7 = (((*(int *)(puVar8 + 0xe8) - *(int *)(puVar8 + 0xe4)) * 100) / *(int *)(puVar8 + 0xe8)) * *(int *)(puVar9 + 0xc4);
	uVar3 = iVar7 / 100 + (iVar7 >> 0x1f);
	*(int *)(puVar9 + 0xc4) = (int)(uVar3 + (uVar3 >> 0x1f)) >> 1;
	*(undefined4 *)(puVar8 + 200) = *(undefined4 *)(puVar9 + 0xc4);
	puVar4[iVar1] = (undefined)param_20;
	*piVar5 = *piVar5 + 1;
	return;
}

void S_StartWRecharge(void)

{
	undefined4 uVar1;
	bool bVar2;
	undefined *puVar3;
	undefined *puVar4;
	uint *puVar5;
	undefined4 *puVar6;
	undefined *puVar7;
	ulonglong uVar8;
	undefined8 uVar9;
	int iVar10;
	undefined *puVar11;
	undefined4 *puVar12;
	undefined4 *puVar13;
	ulonglong in_r6;
	undefined *puVar14;
	ulonglong in_r7;
	ulonglong in_r8;
	ulonglong in_r9;
	undefined uVar15;
	ulonglong in_r10;
	undefined uVar16;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	int iVar17;
	undefined8 unaff_r25;
	int iVar18;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	longlong lVar19;
	undefined4 in_stack_fffffe48;
	undefined in_stack_fffffe4f;
	undefined4 local_1a8;
	undefined4 local_1a4;
	undefined4 local_1a0;
	uint local_19c;
	uint local_198;
	uint local_194;
	uint local_190;
	uint local_18c;
	undefined4 in_stack_ffffff38;
	undefined4 local_24;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	puVar7 = PTR_DAT_100f38b8;
	puVar6 = _DAT_100f20d8;
	puVar13 = _DAT_100f20c0;
	puVar5 = _DAT_100f20bc;
	puVar4 = PTR_DAT_100f191c;
	puVar14 = PTR_DAT_100f1828;
	puVar3 = PTR_DAT_100f1824;
	uVar8 = ZEXT48(&toc);
	local_24 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	bVar2 = false;
	*_DAT_100f20dc = 1;
	puVar11 = PTR_DAT_100f20ac;
	*puVar13 = 0;
	*(undefined4 *)(puVar11 + 8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x178) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x2e8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x458) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x5c8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x738) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x8a8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0xa18) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0xb88) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0xcf8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0xe68) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0xfd8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x1148) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x12b8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x1428) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x1598) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x1708) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x1878) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x19e8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 7000) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x1cc8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x1e38) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x1fa8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x2118) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x2288) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x23f8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x2568) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x26d8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x2848) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x29b8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x2b28) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x2c98) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x2e08) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x2f78) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x30e8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x3258) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x33c8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x3538) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x36a8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x3818) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x3988) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x3af8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x3c68) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x3dd8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x3f48) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x40b8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x4228) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x4398) = 0xffffffff;
	puVar11 = puVar14 + *(int *)puVar3 * 0x55ec;
	if ((*(int *)(puVar11 + 0xa60) == 10) && (*(int *)(puVar11 + 0xb3c) != *(int *)(puVar11 + 0xb40))) {
		lVar19 = 0x2e;
		bVar2 = true;
		puVar13 = (undefined4 *)&stack0xfffffe50;
		puVar12 = (undefined4 *)(puVar11 + 0xa50);
		do {
			uVar1 = puVar12[3];
			puVar13[2] = puVar12[2];
			puVar13[3] = uVar1;
			lVar19 = lVar19 + -1;
			puVar13 = puVar13 + 2;
			puVar12 = puVar12 + 2;
		} while (lVar19 != 0);
		in_r6 = (ulonglong)local_19c;
		in_r7 = (ulonglong)local_198;
		in_r8 = (ulonglong)local_194;
		in_r9 = (ulonglong)local_190;
		in_r10 = (ulonglong)local_18c;
		AddStoreHoldRecharge((char)local_1a8, (char)local_1a4, (char)local_1a0, (char)local_19c, (char)local_198,
		    (char)local_194, (char)local_190, (char)local_18c, (char)in_stack_fffffe48,
		    in_stack_fffffe4f, local_1a8, local_1a4, local_1a0, local_19c, local_198, local_194,
		    local_190, local_18c, in_stack_ffffff38, 0xffffffff);
	}
	iVar17 = 0;
	iVar18 = 0;
	while (true) {
		uVar16 = (undefined)in_r10;
		uVar15 = (undefined)in_r9;
		iVar10 = *(int *)puVar3 * 0x55ec;
		if (*(int *)(puVar14 + iVar10 + 0x4828) <= iVar17)
			break;
		uVar9 = WitchRechargeOk(iVar17);
		if ((int)uVar9 != 0) {
			lVar19 = 0x2e;
			bVar2 = true;
			puVar13 = (undefined4 *)&stack0xfffffe50;
			puVar12 = (undefined4 *)(puVar14 + *(int *)puVar3 * 0x55ec + iVar18 + 0xea0);
			do {
				uVar1 = puVar12[3];
				puVar13[2] = puVar12[2];
				puVar13[3] = uVar1;
				lVar19 = lVar19 + -1;
				puVar13 = puVar13 + 2;
				puVar12 = puVar12 + 2;
			} while (lVar19 != 0);
			in_r6 = (ulonglong)local_19c;
			in_r7 = (ulonglong)local_198;
			in_r8 = (ulonglong)local_194;
			in_r9 = (ulonglong)local_190;
			in_r10 = (ulonglong)local_18c;
			AddStoreHoldRecharge((char)local_1a8, (char)local_1a4, (char)local_1a0, (char)local_19c, (char)local_198,
			    (char)local_194, (char)local_190, (char)local_18c, (char)in_stack_fffffe48,
			    in_stack_fffffe4f, local_1a8, local_1a4, local_1a0, local_19c, local_198, local_194,
			    local_190, local_18c, in_stack_ffffff38, iVar17);
		}
		iVar18 = iVar18 + 0x170;
		iVar17 = iVar17 + 1;
	}
	iVar17 = (int)uVar8;
	if (bVar2) {
		puVar14 = puVar14 + iVar10;
		*puVar6 = 1;
		puVar13 = *(undefined4 **)(iVar17 + -0x6f20);
		*puVar5 = 0;
		uVar1 = *(undefined4 *)(iVar17 + -0x5748);
		*puVar13 = *(undefined4 *)(puVar14 + 0x4828);
		sprintf((int)puVar4, uVar1, *(undefined4 *)(puVar14 + 0x1c8), puVar14, (int)in_r7, (int)in_r8,
		    (int)in_r9, (int)in_r10, in_stack_fffffe48, in_stack_fffffe4f, local_1a4, local_1a0,
		    local_19c, local_198, local_194, local_190, local_18c);
		AddSText(0, 1, 1, (int)puVar4, 3, 0, uVar15, uVar16, in_stack_fffffe48);
		AddSLine(3);
		AddSLine(0x15);
		S_ScrollSSell((ulonglong)*puVar5);
		AddSText(0, 0x16, 1, (int)puVar7, 0, 1, uVar15, uVar16, in_stack_fffffe48);
		OffsetSTextY(0x16, 6);
	} else {
		*puVar6 = 0;
		sprintf((int)puVar4, *(undefined4 *)(iVar17 + -0x5744),
		    *(undefined4 *)(puVar14 + iVar10 + 0x1c8), (int)in_r6, (int)in_r7, (int)in_r8,
		    (int)in_r9, (int)in_r10, in_stack_fffffe48, in_stack_fffffe4f, local_1a4, local_1a0,
		    local_19c, local_198, local_194, local_190, local_18c);
		AddSText(0, 1, 1, (int)puVar4, 3, 0, uVar15, uVar16, in_stack_fffffe48);
		AddSLine(3);
		AddSLine(0x15);
		AddSText(0, 0x16, 1, (int)puVar7, 0, 1, uVar15, uVar16, in_stack_fffffe48);
		OffsetSTextY(0x16, 6);
	}
	return;
}

void S_StartNoMoney(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined **ppuVar2;
	undefined4 in_stack_ffffffc8;

	ppuVar2 = &toc;
	StartStore((char)*(undefined4 *)PTR_DAT_100f20a4, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	puVar1 = (undefined4 *)ppuVar2[-0x1bbe];
	*ppuVar2[-0x1bbd] = 1;
	*puVar1 = 0;
	ClearSText(5, 0x17);
	AddSText(0, 0xe, 1, (int)ppuVar2[-0x15d3], 0, 1, param_7, param_8, in_stack_ffffffc8);
	return;
}

void S_StartNoRoom(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	StartStore((char)*(undefined4 *)PTR_DAT_100f20a4, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	*(undefined4 *)ppuVar1[-0x1bbe] = 0;
	ClearSText(5, 0x17);
	AddSText(0, 0xe, 1, (int)ppuVar1[-0x15d4], 0, 1, param_7, param_8, in_stack_ffffffc8);
	return;
}

void S_StartConfirm(undefined8 uParm1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined4 uParm7, undefined4 uParm8)

{
	char cVar1;
	int iVar2;
	uint uVar3;
	bool bVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined **ppuVar9;
	int iVar10;
	char *pcVar11;
	undefined4 uVar12;
	undefined4 uVar13;
	undefined uVar14;
	undefined uVar15;
	ulonglong uVar16;
	undefined4 in_stack_ffffffb8;

	puVar8 = PTR_DAT_100f20a4;
	puVar7 = PTR_DAT_100f191c;
	puVar6 = PTR_DAT_100f1828;
	puVar5 = PTR_DAT_100f1824;
	ppuVar9 = &toc;
	StartStore((char)*(undefined4 *)PTR_DAT_100f20a4, param_2, param_3, param_4, param_5, param_6,
	    (char)uParm7, (char)uParm8, in_stack_ffffffb8);
	*(undefined4 *)ppuVar9[-0x1bbe] = 0;
	ClearSText(5, 0x17);
	iVar10 = *(int *)puVar5 * 0x55ec;
	cVar1 = puVar6[iVar10 + 0x5410];
	uVar16 = (ulonglong)(cVar1 != '\0');
	if (*(int *)(puVar6 + iVar10 + 0x5538) == 0) {
		uVar16 = 2;
	}
	uVar12 = (undefined4)uVar16;
	iVar2 = *(int *)puVar8;
	bVar4 = iVar2 != 0x11 && cVar1 != '\0';
	if (((cVar1 != '\0') && (*(int *)(puVar6 + iVar10 + 0x540c) == 0)) && (bVar4 = iVar2 != 4 && (iVar2 != 7 && (iVar2 != 3 && bVar4)), iVar2 == 8)) {
		bVar4 = false;
	}
	if (bVar4) {
		pcVar11 = puVar6 + iVar10 + 0x5451;
		uVar13 = 0;
		AddSText(0x14, 8, 0, (int)pcVar11, (char)uVar16, 0, (char)uParm7, (char)uParm8, in_stack_ffffffb8);
	} else {
		pcVar11 = puVar6 + iVar10 + 0x5411;
		uVar13 = 0;
		AddSText(0x14, 8, 0, (int)pcVar11, (char)uVar16, 0, (char)uParm7, (char)uParm8, in_stack_ffffffb8);
	}
	AddSTextVal(8, *(undefined4 *)(puVar6 + *(int *)puVar5 * 0x55ec + 0x549c));
	uVar15 = (undefined)uParm8;
	uVar14 = (undefined)uParm7;
	PrintStoreItem((int)(puVar6 + *(int *)puVar5 * 0x55ec + 0x53d4), 9, uVar16, pcVar11, uVar12, uVar13,
	    uParm7, uParm8, in_stack_ffffffb8);
	uVar3 = *(uint *)puVar8;
	if (uVar3 < 0x13) {
		// WARNING: Could not recover jumptable at 0x100a8ad8. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(ppuVar9[-0x15dd] + uVar3 * 4))();
		return;
	}
	AddSText(0, 0xf, 1, (int)puVar7, 0, 0, uVar14, uVar15, in_stack_ffffffb8);
	AddSText(0, 0x12, 1, (int)ppuVar9[-0x15db], 0, 1, uVar14, uVar15, in_stack_ffffffb8);
	AddSText(0, 0x14, 1, (int)ppuVar9[-0x15dc], 0, 1, uVar14, uVar15, in_stack_ffffffb8);
	return;
}

void S_StartBoy(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	undefined4 in_stack_ffffffc8;

	puVar3 = PTR_s_Talk_to_Wirt_100f3854;
	puVar2 = PTR_s_Say_goodbye_100f3840;
	puVar1 = _DAT_100f20d8;
	ppuVar5 = &toc;
	*_DAT_100f20dc = 0;
	puVar4 = PTR_s_Wirt_the_Peg_legged_boy_100f3858;
	*puVar1 = 0;
	AddSText(0, 2, 1, (int)puVar4, 3, 0, param_7, param_8, in_stack_ffffffc8);
	AddSLine(5);
	if (*(int *)(ppuVar5[-0x1c6f] + 8) == -1) {
		AddSText(0, 0xc, 1, (int)puVar3, 1, 1, param_7, param_8, in_stack_ffffffc8);
		AddSText(0, 0x12, 1, (int)puVar2, 0, 1, param_7, param_8, in_stack_ffffffc8);
	} else {
		AddSText(0, 8, 1, (int)puVar3, 1, 1, param_7, param_8, in_stack_ffffffc8);
		AddSText(0, 0xc, 1, (int)ppuVar5[-0x15e0], 3, 0, param_7, param_8, in_stack_ffffffc8);
		AddSText(0, 0xe, 1, (int)ppuVar5[-0x15e1], 3, 0, param_7, param_8, in_stack_ffffffc8);
		AddSText(0, 0x10, 1, (int)ppuVar5[-0x15e2], 3, 0, param_7, param_8, in_stack_ffffffc8);
		AddSText(0, 0x12, 1, (int)ppuVar5[-0x15e3], 0, 1, param_7, param_8, in_stack_ffffffc8);
		AddSText(0, 0x14, 1, (int)puVar2, 0, 1, param_7, param_8, in_stack_ffffffc8);
	}
	return;
}

void S_StartBBoy(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined4 *puVar4;
	undefined **ppuVar5;
	undefined4 in_r6;
	char *pcVar6;
	undefined4 in_r7;
	int iVar7;
	undefined4 in_r8;
	undefined4 uVar8;
	undefined4 in_r9;
	undefined uVar9;
	undefined4 in_r10;
	undefined uVar10;
	bool bVar11;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	puVar4 = _DAT_100f20d8;
	puVar3 = PTR_DAT_100f1e14;
	puVar2 = PTR_DAT_100f191c;
	ppuVar5 = &toc;
	*_DAT_100f20dc = 1;
	puVar1 = PTR_DAT_100f1824;
	*puVar4 = 0;
	sprintf((int)puVar2, PTR_s_I_have_this_item_for_sale___Your_100f383c,
	    *(undefined4 *)(PTR_DAT_100f1828 + *(int *)puVar1 * 0x55ec + 0x1c8), in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0,
	    in_stack_fffffff4);
	AddSText(0, 1, 1, (int)puVar2, 3, 0, (char)in_r9, (char)in_r10, in_stack_ffffffc8);
	AddSLine(3);
	AddSLine(0x15);
	bVar11 = puVar3[0x3c] != '\0';
	if (*(int *)(puVar3 + 0x164) == 0) {
		bVar11 = true;
	}
	if (puVar3[0x3c] == '\0') {
		pcVar6 = puVar3 + 0x3d;
		iVar7 = (int)bVar11;
		uVar8 = 1;
		AddSText(0x14, 10, 0, (int)pcVar6, bVar11, 1, (char)in_r9, (char)in_r10, in_stack_ffffffc8);
	} else {
		pcVar6 = puVar3 + 0x7d;
		iVar7 = (int)bVar11;
		uVar8 = 1;
		AddSText(0x14, 10, 0, (int)pcVar6, bVar11, 1, (char)in_r9, (char)in_r10, in_stack_ffffffc8);
	}
	AddSTextVal(10, *(int *)(puVar3 + 200) + (*(int *)(puVar3 + 200) >> 1));
	uVar10 = (undefined)in_r10;
	uVar9 = (undefined)in_r9;
	PrintStoreItem((int)puVar3, 0xb, (longlong)bVar11, pcVar6, iVar7, uVar8, in_r9, in_r10, in_stack_ffffffc8);
	AddSText(0, 0x16, 1, (int)ppuVar5[-0x15e6], 0, 1, uVar9, uVar10, in_stack_ffffffc8);
	OffsetSTextY(0x16, 6);
	return;
}

void S_StartHealer(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_s_Welcome_to_the_100f38e0;
	puVar1 = _DAT_100f20d8;
	ppuVar3 = &toc;
	*_DAT_100f20dc = 0;
	*puVar1 = 0;
	AddSText(0, 1, 1, (int)puVar2, 3, 0, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 3, 1, (int)ppuVar3[-0x15e7], 3, 0, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 9, 1, (int)ppuVar3[-0x15be], 3, 0, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 0xc, 1, (int)ppuVar3[-0x15e8], 1, 1, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 0xe, 1, (int)ppuVar3[-0x15e9], 0, 1, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 0x10, 1, (int)ppuVar3[-0x15ce], 0, 1, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 0x12, 1, (int)ppuVar3[-0x15ea], 0, 1, param_7, param_8, in_stack_ffffffc8);
	AddSLine(5);
	*(undefined4 *)ppuVar3[-0x1bc4] = 0x14;
	return;
}

void S_StartHealer(int iParm1)

{
	int *piVar1;
	int *piVar2;
	ulonglong uVar3;
	char *pcVar4;
	undefined4 uVar5;
	undefined4 uVar6;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined8 uVar7;
	int iVar8;
	int iVar9;
	undefined4 in_stack_ffffffa8;

	piVar2 = _DAT_100f20d0;
	piVar1 = _DAT_100f20b4;
	uVar3 = ZEXT48(&toc);
	ClearSText(5, 0x15);
	iVar9 = *(int *)((int)uVar3 + -0x71c0) + iParm1 * 0x170;
	**(undefined4 **)((int)uVar3 + -0x6f18) = 5;
	iVar8 = 5;
	do {
		if (*(int *)(iVar9 + 8) != -1) {
			uVar7 = 0;
			if (*(int *)(iVar9 + 0x164) == 0) {
				uVar7 = 2;
			}
			uVar5 = (undefined4)uVar7;
			pcVar4 = (char *)(iVar9 + 0x3d);
			uVar6 = 1;
			AddSText(0x14, iVar8, 0, (int)pcVar4, (char)uVar7, 1, (char)in_r9, (char)in_r10, in_stack_ffffffa8);
			AddSTextVal(iVar8, *(undefined4 *)(iVar9 + 200));
			PrintStoreItem(iVar9, iVar8 + 1, uVar7, pcVar4, uVar5, uVar6, in_r9, in_r10, in_stack_ffffffa8);
			*piVar1 = iVar8;
			iVar9 = iVar9 + 0x170;
		}
		iVar8 = iVar8 + 4;
	} while (iVar8 < 0x14);
	iVar8 = *piVar2;
	if ((*(int *)(*(int *)((int)uVar3 + -0x6efc) + iVar8 * 0x9c + 0x94) == 0) && (iVar8 != 0x16)) {
		*piVar2 = *piVar1;
	}
	return;
}

void S_StartHBuy(void)

{
	undefined *puVar1;
	undefined *puVar2;
	int *piVar3;
	uint *puVar4;
	int *piVar5;
	undefined4 *puVar6;
	undefined **ppuVar7;
	undefined *puVar8;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined uVar9;
	undefined4 in_r10;
	undefined uVar10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar6 = _DAT_100f20d8;
	piVar5 = _DAT_100f20c0;
	puVar4 = _DAT_100f20bc;
	piVar3 = _DAT_100f20b0;
	puVar2 = PTR_DAT_100f191c;
	puVar1 = PTR_DAT_100f1828;
	uVar10 = (undefined)in_r10;
	uVar9 = (undefined)in_r9;
	ppuVar7 = &toc;
	*_DAT_100f20dc = 1;
	*puVar6 = 1;
	puVar8 = PTR_DAT_100f1824;
	*puVar4 = 0;
	sprintf((int)puVar2, PTR_s_I_have_these_items_for_sale___Yo_100f38bc,
	    *(undefined4 *)(puVar1 + *(int *)puVar8 * 0x55ec + 0x1c8), in_r6, in_r7, in_r8, in_r9,
	    in_r10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0,
	    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0,
	    in_stack_ffffffe4);
	AddSText(0, 1, 1, (int)puVar2, 3, 0, uVar9, uVar10, in_stack_ffffffb8);
	AddSLine(3);
	AddSLine(0x15);
	S_StartHealer((ulonglong)*puVar4);
	AddSText(0, 0x16, 1, (int)ppuVar7[-0x15c6], 0, 0, uVar9, uVar10, in_stack_ffffffb8);
	OffsetSTextY(0x16, 6);
	*piVar5 = 0;
	puVar8 = ppuVar7[-0x1c70];
	while (*(int *)(puVar8 + 8) != -1) {
		puVar8 = puVar8 + 0x170;
		*piVar5 = *piVar5 + 1;
	}
	*piVar3 = *piVar5 + -4;
	if (*piVar3 < 0) {
		*piVar3 = 0;
	}
	return;
}

void S_StartStory(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_s_The_Town_Elder_100f3824;
	puVar1 = _DAT_100f20d8;
	ppuVar3 = &toc;
	*_DAT_100f20dc = 0;
	*puVar1 = 0;
	AddSText(0, 2, 1, (int)puVar2, 3, 0, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 9, 1, (int)ppuVar3[-0x15be], 3, 0, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 0xc, 1, (int)ppuVar3[-0x15ec], 1, 1, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 0xe, 1, (int)ppuVar3[-0x15ed], 0, 1, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 0x12, 1, (int)ppuVar3[-0x15e4], 0, 1, param_7, param_8, in_stack_ffffffc8);
	AddSLine(5);
	return;
}

undefined8 IdItemOk(int param_1)

{
	if (*(int *)(param_1 + 8) == -1) {
		return 0;
	}
	if (*(char *)(param_1 + 0x3c) == '\0') {
		return 0;
	}
	if (*(int *)(param_1 + 0x38) != 0) {
		return 0;
	}
	return 1;
}

void AddStoreHoldId(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined param_9, undefined param_10, undefined4 param_11, undefined4 param_12,
    undefined4 param_13, undefined4 param_14, undefined4 param_15, undefined4 param_16,
    undefined4 param_17, undefined4 param_18, undefined4 param_19)

{
	int iVar1;
	undefined4 uVar2;
	undefined *puVar3;
	undefined *puVar4;
	int *piVar5;
	undefined4 *puVar6;
	undefined4 *puVar7;
	int iVar8;
	longlong lVar9;

	piVar5 = _DAT_100f20c0;
	puVar4 = PTR_DAT_100f20ac;
	lVar9 = 0x2e;
	iVar1 = *_DAT_100f20c0;
	iVar8 = iVar1 * 0x170;
	puVar6 = (undefined4 *)&stack0x00000010;
	puVar7 = (undefined4 *)(PTR_DAT_100f20ac + iVar8 + -8);
	do {
		uVar2 = puVar6[3];
		puVar7[2] = puVar6[2];
		puVar7[3] = uVar2;
		puVar3 = PTR_DAT_100f20a8;
		lVar9 = lVar9 + -1;
		puVar6 = puVar6 + 2;
		puVar7 = puVar7 + 2;
	} while (lVar9 != 0);
	*(undefined4 *)(puVar4 + iVar8 + 0xc4) = 100;
	*(undefined4 *)(puVar4 + iVar8 + 200) = 100;
	puVar3[iVar1] = (undefined)param_19;
	*piVar5 = *piVar5 + 1;
	return;
}

void S_StartSIdentify(void)

{
	undefined4 uVar1;
	bool bVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	uint *puVar6;
	undefined4 *puVar7;
	undefined *puVar8;
	ulonglong uVar9;
	undefined8 uVar10;
	undefined4 *puVar11;
	undefined4 *puVar12;
	undefined *puVar13;
	ulonglong in_r7;
	ulonglong in_r8;
	ulonglong in_r9;
	undefined uVar14;
	ulonglong in_r10;
	undefined uVar15;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	int iVar16;
	undefined8 unaff_r25;
	int iVar17;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	longlong lVar18;
	undefined4 in_stack_fffffe48;
	undefined in_stack_fffffe4f;
	undefined4 local_1a8;
	undefined4 local_1a4;
	undefined4 local_1a0;
	undefined4 local_19c;
	uint local_198;
	uint local_194;
	uint local_190;
	uint local_18c;
	undefined4 local_24;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	puVar8 = PTR_DAT_100f38b8;
	puVar7 = _DAT_100f20d8;
	puVar12 = _DAT_100f20c0;
	puVar6 = _DAT_100f20bc;
	puVar5 = PTR_DAT_100f191c;
	puVar4 = PTR_DAT_100f1828;
	puVar3 = PTR_DAT_100f1824;
	uVar9 = ZEXT48(&toc);
	local_24 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	bVar2 = false;
	*_DAT_100f20dc = 1;
	puVar13 = PTR_DAT_100f20ac;
	*puVar12 = 0;
	*(undefined4 *)(puVar13 + 8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x178) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x2e8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x458) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x5c8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x738) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x8a8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0xa18) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0xb88) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0xcf8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0xe68) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0xfd8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x1148) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x12b8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x1428) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x1598) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x1708) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x1878) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x19e8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 7000) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x1cc8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x1e38) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x1fa8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x2118) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x2288) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x23f8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x2568) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x26d8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x2848) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x29b8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x2b28) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x2c98) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x2e08) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x2f78) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x30e8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x3258) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x33c8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x3538) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x36a8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x3818) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x3988) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x3af8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x3c68) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x3dd8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x3f48) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x40b8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x4228) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x4398) = 0xffffffff;
	uVar10 = IdItemOk((int)(puVar4 + *(int *)puVar3 * 0x55ec + 0x498));
	if ((int)uVar10 != 0) {
		lVar18 = 0x2e;
		bVar2 = true;
		puVar12 = (undefined4 *)&stack0xfffffe50;
		puVar11 = (undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0x490);
		do {
			uVar1 = puVar11[3];
			puVar12[2] = puVar11[2];
			puVar12[3] = uVar1;
			lVar18 = lVar18 + -1;
			puVar12 = puVar12 + 2;
			puVar11 = puVar11 + 2;
		} while (lVar18 != 0);
		in_r7 = (ulonglong)local_198;
		in_r8 = (ulonglong)local_194;
		in_r9 = (ulonglong)local_190;
		in_r10 = (ulonglong)local_18c;
		AddStoreHoldId((char)local_1a8, (char)local_1a4, (char)local_1a0, (char)local_19c, (char)local_198,
		    (char)local_194, (char)local_190, (char)local_18c, (char)in_stack_fffffe48,
		    in_stack_fffffe4f, local_1a8, local_1a4, local_1a0, local_19c, local_198, local_194,
		    local_190, local_18c, 0xffffffff);
	}
	uVar10 = IdItemOk((int)(puVar4 + *(int *)puVar3 * 0x55ec + 0xd38));
	if ((int)uVar10 != 0) {
		lVar18 = 0x2e;
		bVar2 = true;
		puVar12 = (undefined4 *)&stack0xfffffe50;
		puVar11 = (undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0xd30);
		do {
			uVar1 = puVar11[3];
			puVar12[2] = puVar11[2];
			puVar12[3] = uVar1;
			lVar18 = lVar18 + -1;
			puVar12 = puVar12 + 2;
			puVar11 = puVar11 + 2;
		} while (lVar18 != 0);
		in_r7 = (ulonglong)local_198;
		in_r8 = (ulonglong)local_194;
		in_r9 = (ulonglong)local_190;
		in_r10 = (ulonglong)local_18c;
		AddStoreHoldId((char)local_1a8, (char)local_1a4, (char)local_1a0, (char)local_19c, (char)local_198,
		    (char)local_194, (char)local_190, (char)local_18c, (char)in_stack_fffffe48,
		    in_stack_fffffe4f, local_1a8, local_1a4, local_1a0, local_19c, local_198, local_194,
		    local_190, local_18c, 0xfffffffe);
	}
	uVar10 = IdItemOk((int)(puVar4 + *(int *)puVar3 * 0x55ec + 0xa58));
	if ((int)uVar10 != 0) {
		lVar18 = 0x2e;
		bVar2 = true;
		puVar12 = (undefined4 *)&stack0xfffffe50;
		puVar11 = (undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0xa50);
		do {
			uVar1 = puVar11[3];
			puVar12[2] = puVar11[2];
			puVar12[3] = uVar1;
			lVar18 = lVar18 + -1;
			puVar12 = puVar12 + 2;
			puVar11 = puVar11 + 2;
		} while (lVar18 != 0);
		in_r7 = (ulonglong)local_198;
		in_r8 = (ulonglong)local_194;
		in_r9 = (ulonglong)local_190;
		in_r10 = (ulonglong)local_18c;
		AddStoreHoldId((char)local_1a8, (char)local_1a4, (char)local_1a0, (char)local_19c, (char)local_198,
		    (char)local_194, (char)local_190, (char)local_18c, (char)in_stack_fffffe48,
		    in_stack_fffffe4f, local_1a8, local_1a4, local_1a0, local_19c, local_198, local_194,
		    local_190, local_18c, 0xfffffffd);
	}
	uVar10 = IdItemOk((int)(puVar4 + *(int *)puVar3 * 0x55ec + 0xbc8));
	if ((int)uVar10 != 0) {
		lVar18 = 0x2e;
		bVar2 = true;
		puVar12 = (undefined4 *)&stack0xfffffe50;
		puVar11 = (undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0xbc0);
		do {
			uVar1 = puVar11[3];
			puVar12[2] = puVar11[2];
			puVar12[3] = uVar1;
			lVar18 = lVar18 + -1;
			puVar12 = puVar12 + 2;
			puVar11 = puVar11 + 2;
		} while (lVar18 != 0);
		in_r7 = (ulonglong)local_198;
		in_r8 = (ulonglong)local_194;
		in_r9 = (ulonglong)local_190;
		in_r10 = (ulonglong)local_18c;
		AddStoreHoldId((char)local_1a8, (char)local_1a4, (char)local_1a0, (char)local_19c, (char)local_198,
		    (char)local_194, (char)local_190, (char)local_18c, (char)in_stack_fffffe48,
		    in_stack_fffffe4f, local_1a8, local_1a4, local_1a0, local_19c, local_198, local_194,
		    local_190, local_18c, 0xfffffffc);
	}
	uVar10 = IdItemOk((int)(puVar4 + *(int *)puVar3 * 0x55ec + 0x608));
	if ((int)uVar10 != 0) {
		lVar18 = 0x2e;
		bVar2 = true;
		puVar12 = (undefined4 *)&stack0xfffffe50;
		puVar11 = (undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0x600);
		do {
			uVar1 = puVar11[3];
			puVar12[2] = puVar11[2];
			puVar12[3] = uVar1;
			lVar18 = lVar18 + -1;
			puVar12 = puVar12 + 2;
			puVar11 = puVar11 + 2;
		} while (lVar18 != 0);
		in_r7 = (ulonglong)local_198;
		in_r8 = (ulonglong)local_194;
		in_r9 = (ulonglong)local_190;
		in_r10 = (ulonglong)local_18c;
		AddStoreHoldId((char)local_1a8, (char)local_1a4, (char)local_1a0, (char)local_19c, (char)local_198,
		    (char)local_194, (char)local_190, (char)local_18c, (char)in_stack_fffffe48,
		    in_stack_fffffe4f, local_1a8, local_1a4, local_1a0, local_19c, local_198, local_194,
		    local_190, local_18c, 0xfffffffb);
	}
	uVar10 = IdItemOk((int)(puVar4 + *(int *)puVar3 * 0x55ec + 0x778));
	if ((int)uVar10 != 0) {
		lVar18 = 0x2e;
		bVar2 = true;
		puVar12 = (undefined4 *)&stack0xfffffe50;
		puVar11 = (undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0x770);
		do {
			uVar1 = puVar11[3];
			puVar12[2] = puVar11[2];
			puVar12[3] = uVar1;
			lVar18 = lVar18 + -1;
			puVar12 = puVar12 + 2;
			puVar11 = puVar11 + 2;
		} while (lVar18 != 0);
		in_r7 = (ulonglong)local_198;
		in_r8 = (ulonglong)local_194;
		in_r9 = (ulonglong)local_190;
		in_r10 = (ulonglong)local_18c;
		AddStoreHoldId((char)local_1a8, (char)local_1a4, (char)local_1a0, (char)local_19c, (char)local_198,
		    (char)local_194, (char)local_190, (char)local_18c, (char)in_stack_fffffe48,
		    in_stack_fffffe4f, local_1a8, local_1a4, local_1a0, local_19c, local_198, local_194,
		    local_190, local_18c, 0xfffffffa);
	}
	uVar10 = IdItemOk((int)(puVar4 + *(int *)puVar3 * 0x55ec + 0x8e8));
	if ((int)uVar10 != 0) {
		lVar18 = 0x2e;
		bVar2 = true;
		puVar12 = (undefined4 *)&stack0xfffffe50;
		puVar11 = (undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0x8e0);
		do {
			uVar1 = puVar11[3];
			puVar12[2] = puVar11[2];
			puVar12[3] = uVar1;
			lVar18 = lVar18 + -1;
			puVar12 = puVar12 + 2;
			puVar11 = puVar11 + 2;
		} while (lVar18 != 0);
		in_r7 = (ulonglong)local_198;
		in_r8 = (ulonglong)local_194;
		in_r9 = (ulonglong)local_190;
		in_r10 = (ulonglong)local_18c;
		AddStoreHoldId((char)local_1a8, (char)local_1a4, (char)local_1a0, (char)local_19c, (char)local_198,
		    (char)local_194, (char)local_190, (char)local_18c, (char)in_stack_fffffe48,
		    in_stack_fffffe4f, local_1a8, local_1a4, local_1a0, local_19c, local_198, local_194,
		    local_190, local_18c, 0xfffffff9);
	}
	iVar16 = 0;
	iVar17 = 0;
	while (true) {
		uVar15 = (undefined)in_r10;
		uVar14 = (undefined)in_r9;
		puVar13 = puVar4 + *(int *)puVar3 * 0x55ec;
		if (*(int *)(puVar13 + 0x4828) <= iVar16)
			break;
		uVar10 = IdItemOk((int)(puVar13 + iVar17 + 0xea8));
		if ((int)uVar10 != 0) {
			lVar18 = 0x2e;
			bVar2 = true;
			puVar12 = (undefined4 *)&stack0xfffffe50;
			puVar11 = (undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + iVar17 + 0xea0);
			do {
				uVar1 = puVar11[3];
				puVar12[2] = puVar11[2];
				puVar12[3] = uVar1;
				lVar18 = lVar18 + -1;
				puVar12 = puVar12 + 2;
				puVar11 = puVar11 + 2;
			} while (lVar18 != 0);
			in_r7 = (ulonglong)local_198;
			in_r8 = (ulonglong)local_194;
			in_r9 = (ulonglong)local_190;
			in_r10 = (ulonglong)local_18c;
			AddStoreHoldId((char)local_1a8, (char)local_1a4, (char)local_1a0, (char)local_19c, (char)local_198,
			    (char)local_194, (char)local_190, (char)local_18c, (char)in_stack_fffffe48,
			    in_stack_fffffe4f, local_1a8, local_1a4, local_1a0, local_19c, local_198, local_194,
			    local_190, local_18c, iVar16);
		}
		iVar17 = iVar17 + 0x170;
		iVar16 = iVar16 + 1;
	}
	iVar16 = (int)uVar9;
	if (bVar2) {
		puVar12 = *(undefined4 **)(iVar16 + -0x6f20);
		*puVar7 = 1;
		uVar1 = *(undefined4 *)(iVar16 + -0x57bc);
		*puVar6 = 0;
		*puVar12 = *(undefined4 *)(puVar13 + 0x4828);
		sprintf((int)puVar5, uVar1, *(undefined4 *)(puVar13 + 0x1c8), puVar13, (int)in_r7, (int)in_r8,
		    (int)in_r9, (int)in_r10, in_stack_fffffe48, in_stack_fffffe4f, local_1a4, local_1a0,
		    local_19c, local_198, local_194, local_190, local_18c);
		AddSText(0, 1, 1, (int)puVar5, 3, 0, uVar14, uVar15, in_stack_fffffe48);
		AddSLine(3);
		AddSLine(0x15);
		S_ScrollSSell((ulonglong)*puVar6);
		AddSText(0, 0x16, 1, (int)puVar8, 0, 1, uVar14, uVar15, in_stack_fffffe48);
		OffsetSTextY(0x16, 6);
	} else {
		uVar1 = *(undefined4 *)(iVar16 + -0x57b8);
		*puVar7 = 0;
		sprintf((int)puVar5, uVar1, *(undefined4 *)(puVar13 + 0x1c8), puVar13, (int)in_r7, (int)in_r8,
		    (int)in_r9, (int)in_r10, in_stack_fffffe48, in_stack_fffffe4f, local_1a4, local_1a0,
		    local_19c, local_198, local_194, local_190, local_18c);
		AddSText(0, 1, 1, (int)puVar5, 3, 0, uVar14, uVar15, in_stack_fffffe48);
		AddSLine(3);
		AddSLine(0x15);
		AddSText(0, 0x16, 1, (int)puVar8, 0, 1, uVar14, uVar15, in_stack_fffffe48);
		OffsetSTextY(0x16, 6);
	}
	return;
}

void S_StartIdShow(undefined8 uParm1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined4 uParm7, undefined4 uParm8)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	char *pcVar4;
	undefined4 uVar5;
	undefined uVar6;
	undefined uVar7;
	ulonglong uVar8;
	undefined4 uVar9;
	undefined4 in_stack_ffffffb8;

	puVar2 = PTR_DAT_100f1828;
	puVar1 = PTR_DAT_100f1824;
	ppuVar3 = &toc;
	StartStore((char)*(undefined4 *)PTR_DAT_100f20a4, param_2, param_3, param_4, param_5, param_6,
	    (char)uParm7, (char)uParm8, in_stack_ffffffb8);
	*(undefined4 *)ppuVar3[-0x1bbe] = 0;
	ClearSText(5, 0x17);
	uVar8 = (ulonglong)(puVar2[*(int *)puVar1 * 0x55ec + 0x5410] != '\0');
	if (*(int *)(puVar2 + *(int *)puVar1 * 0x55ec + 0x5538) == 0) {
		uVar8 = 2;
	}
	uVar9 = (undefined4)uVar8;
	AddSText(0, 7, 1, (int)ppuVar3[-0x15f0], 0, 0, (char)uParm7, (char)uParm8, in_stack_ffffffb8);
	pcVar4 = puVar2 + *(int *)puVar1 * 0x55ec + 0x5451;
	uVar5 = 0;
	AddSText(0x14, 0xb, 0, (int)pcVar4, (char)uVar8, 0, (char)uParm7, (char)uParm8, in_stack_ffffffb8);
	uVar7 = (undefined)uParm8;
	uVar6 = (undefined)uParm7;
	PrintStoreItem((int)(puVar2 + *(int *)puVar1 * 0x55ec + 0x53d4), 0xc, uVar8, pcVar4, uVar9, uVar5, uParm7,
	    uParm8, in_stack_ffffffb8);
	AddSText(0, 0x12, 1, (int)ppuVar3[-0x15f1], 0, 1, uVar6, uVar7, in_stack_ffffffb8);
	return;
}

void S_StartTalk(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined4 *puVar5;
	ulonglong uVar6;
	int iVar7;
	int iVar8;
	int *piVar9;
	int iVar10;
	undefined4 in_r6;
	int iVar11;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined uVar12;
	undefined4 in_r10;
	undefined uVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	longlong lVar18;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar5 = _DAT_100f20d8;
	puVar4 = PTR_PTR_s_Griswold_100f20a0;
	puVar3 = PTR_DAT_100f209c;
	puVar2 = PTR_DAT_100f206c;
	puVar1 = PTR_DAT_100f191c;
	uVar6 = ZEXT48(&toc);
	*_DAT_100f20dc = 0;
	*puVar5 = 0;
	sprintf((int)puVar1, PTR_s_Talk_to__s_100f3808, *(undefined4 *)(puVar4 + *(int *)puVar3 * 4),
	    in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbc,
	    in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc,
	    in_stack_ffffffd0, in_stack_ffffffd4);
	AddSText(0, 2, 1, (int)puVar1, 3, 0, (char)in_r9, (char)in_r10, in_stack_ffffffa8);
	AddSLine(5);
	iVar17 = *(int *)((int)uVar6 + -0x7604);
	lVar18 = 4;
	piVar9 = (int *)(puVar2 + *(int *)puVar3 * 0x40);
	iVar11 = 0;
	iVar8 = iVar17;
	do {
		if (((*(char *)(iVar8 + 2) == '\x02') && (*piVar9 != -1)) && (*(int *)(iVar8 + 0x14) != 0)) {
			iVar11 = iVar11 + 1;
		}
		if (((*(char *)(iVar8 + 0x1a) == '\x02') && (piVar9[1] != -1)) && (*(int *)(iVar8 + 0x2c) != 0)) {
			iVar11 = iVar11 + 1;
		}
		if (((*(char *)(iVar8 + 0x32) == '\x02') && (piVar9[2] != -1)) && (*(int *)(iVar8 + 0x44) != 0)) {
			iVar11 = iVar11 + 1;
		}
		if (((*(char *)(iVar8 + 0x4a) == '\x02') && (piVar9[3] != -1)) && (*(int *)(iVar8 + 0x5c) != 0)) {
			iVar11 = iVar11 + 1;
		}
		iVar8 = iVar8 + 0x60;
		piVar9 = piVar9 + 4;
		lVar18 = lVar18 + -1;
	} while (lVar18 != 0);
	if (iVar11 < 7) {
		iVar11 = 0xf - iVar11;
		iVar8 = 2;
	} else {
		iVar11 = 0xe - (iVar11 >> 1);
		iVar8 = 1;
	}
	iVar14 = 0;
	iVar15 = *(int *)((int)uVar6 + -0x706c);
	iVar10 = iVar11 + -2;
	iVar16 = 0;
	do {
		if (((*(char *)(iVar17 + 2) == '\x02') && (*(int *)(puVar2 + *(int *)puVar3 * 0x40 + iVar16) != -1)) && (*(int *)(iVar17 + 0x14) != 0)) {
			AddSText(0, iVar11, 1, *(int *)(iVar15 + 0x10), 0, 1, (char)in_r9, (char)in_r10, in_stack_ffffffa8);
			iVar11 = iVar11 + iVar8;
		}
		uVar13 = (undefined)in_r10;
		uVar12 = (undefined)in_r9;
		iVar7 = (int)uVar6;
		iVar14 = iVar14 + 1;
		iVar16 = iVar16 + 4;
		iVar15 = iVar15 + 0x14;
		iVar17 = iVar17 + 0x18;
	} while (iVar14 < 0x10);
	AddSText(0, iVar10, 1, *(int *)(iVar7 + -0x57cc), 1, 1, uVar12, uVar13, in_stack_ffffffa8);
	AddSText(0, 0x16, 1, *(int *)(iVar7 + -0x5718), 0, 1, uVar12, uVar13, in_stack_ffffffa8);
	return;
}

void S_StartTalk(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_s_Welcome_to_the_100f38e0;
	puVar1 = _DAT_100f20d8;
	ppuVar3 = &toc;
	*_DAT_100f20dc = 0;
	*puVar1 = 0;
	AddSText(0, 1, 1, (int)puVar2, 3, 0, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 3, 1, (int)ppuVar3[-0x15f4], 3, 0, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 9, 1, (int)ppuVar3[-0x15be], 3, 0, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 0xc, 1, (int)ppuVar3[-0x15f5], 1, 1, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 0x12, 1, (int)ppuVar3[-0x15f6], 0, 1, param_7, param_8, in_stack_ffffffc8);
	AddSLine(5);
	*(undefined4 *)ppuVar3[-0x1bc4] = 0x14;
	return;
}

void S_StartBarMaid(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_s_Gillian_100f37f4;
	puVar1 = _DAT_100f20d8;
	ppuVar3 = &toc;
	*_DAT_100f20dc = 0;
	*puVar1 = 0;
	AddSText(0, 2, 1, (int)puVar2, 3, 0, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 9, 1, (int)ppuVar3[-0x15be], 3, 0, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 0xc, 1, (int)ppuVar3[-0x15f8], 1, 1, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 0x12, 1, (int)ppuVar3[-0x15e4], 0, 1, param_7, param_8, in_stack_ffffffc8);
	AddSLine(5);
	*(undefined4 *)ppuVar3[-0x1bc4] = 0x14;
	return;
}

void S_StartDrunk(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_s_Farnham_the_Drunk_100f37ec;
	puVar1 = _DAT_100f20d8;
	ppuVar3 = &toc;
	*_DAT_100f20dc = 0;
	*puVar1 = 0;
	AddSText(0, 2, 1, (int)puVar2, 3, 0, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 9, 1, (int)ppuVar3[-0x15be], 3, 0, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 0xc, 1, (int)ppuVar3[-0x15fa], 1, 1, param_7, param_8, in_stack_ffffffc8);
	AddSText(0, 0x12, 1, (int)ppuVar3[-0x15fb], 0, 1, param_7, param_8, in_stack_ffffffc8);
	AddSLine(5);
	*(undefined4 *)ppuVar3[-0x1bc4] = 0x14;
	return;
}

void StartStore(char param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	int *piVar3;
	int *piVar4;
	undefined **ppuVar5;
	undefined *puVar6;
	longlong lVar7;
	int iVar8;
	undefined param_3_00;
	undefined param_4_00;
	undefined4 param_9_00;

	piVar4 = _DAT_100f20d0;
	piVar3 = _DAT_100f20c0;
	puVar2 = PTR_DAT_100f1814;
	puVar6 = PTR_DAT_100f1808;
	ppuVar5 = &toc;
	param_4_00 = SUB41(PTR_DAT_100f1808, 0);
	*(undefined4 *)PTR_DAT_100f1810 = 0;
	puVar1 = PTR_DAT_100f180c;
	*(undefined4 *)puVar2 = 0;
	*(undefined4 *)puVar1 = 0;
	puVar1 = PTR_DAT_100f18cc;
	param_3_00 = SUB41(PTR_DAT_100f18cc, 0);
	*(undefined4 *)puVar6 = 0;
	*(undefined4 *)puVar1 = 0;
	ClearSText(0, 0x18);
	ReleaseStoreBtn();
	if (((longlong)param_1 & 0xffffffffU) < 0x18) {
		// WARNING: Could not recover jumptable at 0x100a9f38. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(ppuVar5[-0x15fc] + (int)param_1 * 4))();
		return;
	}
	puVar6 = ppuVar5[-0x1bbf];
	lVar7 = 0;
	while ((iVar8 = (int)lVar7, iVar8 < 0x18 && (*(int *)(puVar6 + 0x94) == 0))) {
		puVar6 = puVar6 + 0x9c;
		lVar7 = lVar7 + 1;
	}
	if (iVar8 == 0x18) {
		*piVar4 = -1;
	} else {
		*piVar4 = iVar8;
	}
	*ppuVar5[-0x1dd9] = param_1;
	if ((param_1 == '\x02') && (*piVar3 == 0)) {
		StartStore('\x01', (char)lVar7, param_3_00, param_4_00, param_5, param_6, param_7, param_8, param_9_00);
	}
	return;
}

void DrawSText(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int *piVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	longlong lVar4;
	uint *puVar5;

	puVar2 = PTR_DAT_100f20e0;
	piVar1 = _DAT_100f20d8;
	ppuVar3 = &toc;
	if (*_DAT_100f20dc == '\0') {
		DrawSTextBack();
	} else {
		DrawQTextBack(_DAT_100f20dc, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
	}
	if ((*piVar1 != 0) && (((longlong)(char)*ppuVar3[-0x1dd9] & 0xffffffffU) < 0x13)) {
		// WARNING: Could not recover jumptable at 0x100aa114. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(ppuVar3[-0x15fd] + (int)(char)*ppuVar3[-0x1dd9] * 4))();
		return;
	}
	lVar4 = 0;
	puVar5 = (uint *)ppuVar3[-0x1bbf];
	do {
		if (puVar5[0x24] != 0) {
			DrawSLine((int)lVar4);
		}
		if (*(char *)(puVar5 + 2) != '\0') {
			PrintSString((ulonglong)*puVar5, lVar4, (ulonglong)puVar5[0x22], puVar5 + 2,
			    (ulonglong) * (byte *)(puVar5 + 0x23), (ulonglong)puVar5[0x26]);
		}
		lVar4 = lVar4 + 1;
		puVar5 = puVar5 + 0x27;
	} while ((int)lVar4 < 0x18);
	if (*piVar1 != 0) {
		DrawSArrows(4, 0x14);
	}
	*(uint *)puVar2 = (*(uint *)puVar2 & 7) + 1;
	return;
}

void STextESC(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	ulonglong uVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	ulonglong uVar8;
	undefined7 uVar9;
	undefined8 in_r7;
	undefined uVar10;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;

	puVar4 = PTR_DAT_100f20a4;
	puVar3 = PTR_DAT_100f18a0;
	puVar2 = PTR_DAT_100f186c;
	puVar1 = PTR_DAT_100f183c;
	uVar10 = (undefined)in_r7;
	uVar9 = (undefined7)((ulonglong)in_r7 >> 8);
	uVar8 = ZEXT48(PTR_DAT_100f18a0);
	uVar7 = ZEXT48(PTR_DAT_100f20a4);
	uVar6 = ZEXT48(PTR_DAT_100f186c);
	if (*PTR_DAT_100f18a0 == '\0') {
		if (((longlong)(char)*PTR_DAT_100f186c & 0xffffffffU) < 0x18) {
			// WARNING: Could not recover jumptable at 0x100aa264. Too many branches
			// WARNING: Treating indirect jump as call
			(**(code **)(_DAT_100f37d8 + (int)(char)*PTR_DAT_100f186c * 4))();
			return;
		}
	} else {
		uVar5 = ZEXT48(PTR_DAT_100f183c);
		*PTR_DAT_100f18a0 = 0;
		if (*puVar1 == '\0') {
			uVar5 = sfx_stop((char)puVar1, (char)puVar2, (char)puVar4, (char)puVar3, uVar10, (char)in_r8,
			    (char)in_r9, (char)in_r10, in_stack_ffffffc8);
		}
		music_stop2(uVar5, uVar6, uVar7, uVar8, CONCAT71(uVar9, uVar10), in_r8, in_r9, in_r10, in_stack_ffffffc8);
	}
	return;
}

void STextUp(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	int *piVar2;
	int *piVar3;
	int iVar4;
	undefined **ppuVar5;

	iVar4 = _DAT_100f20d4;
	piVar3 = _DAT_100f20d0;
	piVar2 = _DAT_100f20bc;
	ppuVar5 = &toc;
	PlaySFX(0x45, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
	iVar1 = *piVar3;
	if (iVar1 != -1) {
		if (*(int *)ppuVar5[-0x1bbe] == 0) {
			if (iVar1 == 0) {
				*piVar3 = 0x17;
			} else {
				*piVar3 = iVar1 + -1;
			}
			while (*(int *)(iVar4 + *piVar3 * 0x9c + 0x94) == 0) {
				if (*piVar3 == 0) {
					*piVar3 = 0x17;
				} else {
					*piVar3 = *piVar3 + -1;
				}
			}
		} else {
			if (iVar1 == *(int *)ppuVar5[-0x1bc6]) {
				iVar1 = *piVar2;
				if (iVar1 != 0) {
					*piVar2 = iVar1 + -1;
				}
			} else {
				*piVar3 = iVar1 + -1;
				while (*(int *)(iVar4 + *piVar3 * 0x9c + 0x94) == 0) {
					if (*piVar3 == 0) {
						*piVar3 = 0x17;
					} else {
						*piVar3 = *piVar3 + -1;
					}
				}
			}
		}
	}
	return;
}

void STextDown(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	int *piVar2;
	int *piVar3;
	int iVar4;
	undefined **ppuVar5;

	iVar4 = _DAT_100f20d4;
	piVar3 = _DAT_100f20d0;
	piVar2 = _DAT_100f20bc;
	ppuVar5 = &toc;
	PlaySFX(0x45, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
	iVar1 = *piVar3;
	if (iVar1 != -1) {
		if (*(int *)ppuVar5[-0x1bbe] == 0) {
			if (iVar1 == 0x17) {
				*piVar3 = 0;
			} else {
				*piVar3 = iVar1 + 1;
			}
			while (*(int *)(iVar4 + *piVar3 * 0x9c + 0x94) == 0) {
				if (*piVar3 == 0x17) {
					*piVar3 = 0;
				} else {
					*piVar3 = *piVar3 + 1;
				}
			}
		} else {
			if (iVar1 == *(int *)ppuVar5[-0x1bc7]) {
				iVar1 = *piVar2;
				if (iVar1 < *(int *)ppuVar5[-0x1bc8]) {
					*piVar2 = iVar1 + 1;
				}
			} else {
				*piVar3 = iVar1 + 1;
				while (*(int *)(iVar4 + *piVar3 * 0x9c + 0x94) == 0) {
					if (*piVar3 == 0x17) {
						*piVar3 = 0;
					} else {
						*piVar3 = *piVar3 + 1;
					}
				}
			}
		}
	}
	return;
}

void STextPrior(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	int *piVar2;
	int *piVar3;
	undefined **ppuVar4;

	piVar3 = _DAT_100f20d0;
	piVar2 = _DAT_100f20bc;
	ppuVar4 = &toc;
	PlaySFX(0x45, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
	iVar1 = *piVar3;
	if ((iVar1 != -1) && (*(int *)ppuVar4[-0x1bbe] != 0)) {
		if (iVar1 == *(int *)ppuVar4[-0x1bc6]) {
			if (*piVar2 != 0) {
				*piVar2 = *piVar2 + -4;
			}
			if (*piVar2 < 0) {
				*piVar2 = 0;
			}
		} else {
			*piVar3 = *(int *)ppuVar4[-0x1bc6];
		}
	}
	return;
}

void STextNext(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	int *piVar2;
	int *piVar3;
	undefined **ppuVar4;

	piVar3 = _DAT_100f20d0;
	piVar2 = _DAT_100f20bc;
	ppuVar4 = &toc;
	PlaySFX(0x45, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
	iVar1 = *piVar3;
	if ((iVar1 != -1) && (*(int *)ppuVar4[-0x1bbe] != 0)) {
		if (iVar1 == *(int *)ppuVar4[-0x1bc7]) {
			iVar1 = *(int *)ppuVar4[-0x1bc8];
			if (*piVar2 < iVar1) {
				*piVar2 = *piVar2 + 4;
			}
			if (iVar1 < *piVar2) {
				*piVar2 = iVar1;
			}
		} else {
			*piVar3 = *(int *)ppuVar4[-0x1bc7];
		}
	}
	return;
}

void S_SmithEnter(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	if (*_DAT_100f20d0 - 10U < 0xb) {
		// WARNING: Could not recover jumptable at 0x100aa74c. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(PTR_PTR_LAB_100f37d4 + (*_DAT_100f20d0 - 10U) * 4))(*(code **)(PTR_PTR_LAB_100f37d4 + (*_DAT_100f20d0 - 10U) * 4), param_2, param_3, param_4, param_5, param_6, param_7, param_8);
		return;
	}
	return;
}

void SetGoldCurs(int param_1, int param_2)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f1828 + param_2 * 0x170 + param_1 * 0x55ec;
	if (0x9c3 < *(int *)(puVar1 + 0xf6c)) {
		*(undefined4 *)(puVar1 + 0xf68) = 6;
		return;
	}
	if (*(int *)(puVar1 + 0xf6c) < 0x3e9) {
		*(undefined4 *)(puVar1 + 0xf68) = 4;
		return;
	}
	*(undefined4 *)(puVar1 + 0xf68) = 5;
	return;
}

void SetSpdbarGoldCurs(int param_1, int param_2)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f1828 + param_2 * 0x170 + param_1 * 0x55ec;
	if (0x9c3 < *(int *)(puVar1 + 0x4918)) {
		*(undefined4 *)(puVar1 + 0x4914) = 6;
		return;
	}
	if (*(int *)(puVar1 + 0x4918) < 0x3e9) {
		*(undefined4 *)(puVar1 + 0x4914) = 4;
		return;
	}
	*(undefined4 *)(puVar1 + 0x4914) = 5;
	return;
}

void TakePlrsMoney(int param_1, undefined param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	ulonglong uVar6;
	int iVar7;
	ulonglong uVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	longlong lVar15;
	int iVar16;
	undefined4 in_stack_ffffffb8;

	puVar5 = PTR_DAT_100f1828;
	puVar4 = PTR_DAT_100f1824;
	lVar14 = (longlong)param_8;
	lVar13 = (longlong)param_7;
	lVar12 = (longlong)param_6;
	lVar11 = (longlong)param_5;
	lVar10 = (longlong)param_4;
	lVar9 = (longlong)param_3;
	uVar6 = ZEXT48(&toc);
	uVar8 = CalculateGold(*(int *)PTR_DAT_100f1824);
	iVar16 = 0;
	*(int *)(puVar5 + *(int *)puVar4 * 0x55ec + 0x1c8) = (int)uVar8 - param_1;
	while (true) {
		iVar7 = (int)uVar6;
		if ((7 < iVar16) || (param_1 < 1))
			break;
		iVar7 = *(int *)puVar4;
		puVar3 = puVar5 + iVar7 * 0x55ec + iVar16 * 0x170;
		if (*(int *)(puVar3 + 0x485c) == 0xb) {
			iVar2 = *(int *)(puVar3 + 0x4918);
			if (iVar2 != 5000) {
				if (param_1 < iVar2) {
					*(int *)(puVar3 + 0x4918) = iVar2 - param_1;
					SetSpdbarGoldCurs(iVar7, iVar16);
					param_1 = 0;
				} else {
					param_1 = param_1 - iVar2;
					RemoveSpdBarItem(iVar7, iVar16, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13,
					    (char)lVar14, in_stack_ffffffb8);
					iVar16 = -1;
				}
			}
		}
		iVar16 = iVar16 + 1;
	}
	if (0 < param_1) {
		iVar16 = 0;
		while (true) {
			iVar7 = (int)uVar6;
			if ((7 < iVar16) || (param_1 < 1))
				break;
			iVar7 = *(int *)puVar4;
			puVar3 = puVar5 + iVar7 * 0x55ec + iVar16 * 0x170;
			if (*(int *)(puVar3 + 0x485c) == 0xb) {
				iVar2 = *(int *)(puVar3 + 0x4918);
				if (param_1 < iVar2) {
					*(int *)(puVar3 + 0x4918) = iVar2 - param_1;
					SetSpdbarGoldCurs(iVar7, iVar16);
					param_1 = 0;
				} else {
					param_1 = param_1 - iVar2;
					RemoveSpdBarItem(iVar7, iVar16, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13,
					    (char)lVar14, in_stack_ffffffb8);
					iVar16 = -1;
				}
			}
			iVar16 = iVar16 + 1;
		}
	}
	**(undefined4 **)(iVar7 + -0x76bc) = 0xff;
	if (0 < param_1) {
		lVar15 = 0;
		while (true) {
			uVar1 = *(uint *)puVar4;
			puVar3 = puVar5 + uVar1 * 0x55ec;
			iVar16 = (int)lVar15;
			if ((*(int *)(puVar3 + 0x4828) <= iVar16) || (param_1 < 1))
				break;
			puVar3 = puVar3 + iVar16 * 0x170;
			if (*(int *)(puVar3 + 0xeb0) == 0xb) {
				iVar7 = *(int *)(puVar3 + 0xf6c);
				if (iVar7 != 5000) {
					if (param_1 < iVar7) {
						*(int *)(puVar3 + 0xf6c) = iVar7 - param_1;
						SetGoldCurs(uVar1, iVar16);
						param_1 = 0;
					} else {
						param_1 = param_1 - iVar7;
						RemoveInvItem((ulonglong)uVar1, lVar15, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12,
						    (char)lVar13, (char)lVar14, in_stack_ffffffb8);
						lVar15 = -1;
					}
				}
			}
			lVar15 = lVar15 + 1;
		}
		if (0 < param_1) {
			lVar15 = 0;
			while (true) {
				uVar1 = *(uint *)puVar4;
				puVar3 = puVar5 + uVar1 * 0x55ec;
				iVar16 = (int)lVar15;
				if ((*(int *)(puVar3 + 0x4828) <= iVar16) || (param_1 < 1))
					break;
				puVar3 = puVar3 + iVar16 * 0x170;
				if (*(int *)(puVar3 + 0xeb0) == 0xb) {
					iVar7 = *(int *)(puVar3 + 0xf6c);
					if (param_1 < iVar7) {
						*(int *)(puVar3 + 0xf6c) = iVar7 - param_1;
						SetGoldCurs(uVar1, iVar16);
						param_1 = 0;
					} else {
						param_1 = param_1 - iVar7;
						RemoveInvItem((ulonglong)uVar1, lVar15, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12,
						    (char)lVar13, (char)lVar14, in_stack_ffffffb8);
						lVar15 = -1;
					}
				}
				lVar15 = lVar15 + 1;
			}
		}
	}
	return;
}

void SmithBuyItem(undefined8 uParm1, undefined param_2, undefined param_3, ulonglong uParm4,
    ulonglong uParm5, undefined param_6, undefined8 uParm7, undefined8 uParm8)

{
	undefined4 uVar1;
	int iVar2;
	undefined *puVar3;
	uint uVar4;
	ulonglong uVar5;
	undefined **ppuVar6;
	longlong lVar7;
	undefined7 uVar8;
	undefined uVar9;
	undefined7 uVar10;
	undefined uVar11;
	ulonglong uVar12;
	ulonglong uVar13;
	undefined4 in_stack_ffffffb8;

	uVar4 = _DAT_100f1e2c;
	puVar3 = PTR_DAT_100f1824;
	uVar11 = (undefined)uParm8;
	uVar10 = (undefined7)((ulonglong)uParm8 >> 8);
	uVar9 = (undefined)uParm7;
	uVar8 = (undefined7)((ulonglong)uParm7 >> 8);
	ppuVar6 = &toc;
	uVar13 = (ulonglong)_DAT_100f1e2c;
	uVar12 = ZEXT48(PTR_DAT_100f1828);
	TakePlrsMoney(*(int *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x549c), param_2,
	    param_3, (char)uParm4, (char)uParm5, param_6, uVar9, uVar11, in_stack_ffffffb8);
	lVar7 = uVar12 + (ulonglong) * (uint *)puVar3 * 0x55ec;
	iVar2 = (int)lVar7;
	if (*(char *)(iVar2 + 0x5410) == '\0') {
		*(undefined4 *)(iVar2 + 0x540c) = 0;
	}
	PrintStoreItem((char)lVar7, param_2, param_3, (char)uParm4, (char)uParm5, param_6, uVar9, uVar11,
	    in_stack_ffffffb8);
	uVar12 = ZEXT48(ppuVar6[-0x1bce]);
	uVar5 = (ulonglong) * (uint *)ppuVar6[-0x1bce] + ((ulonglong) * (uint *)ppuVar6[-0x1bc3] - (ulonglong) * (uint *)ppuVar6[-0x1bc6] & 0xffffffff00000000 | (ulonglong)(uint)((int)((ulonglong) * (uint *)ppuVar6[-0x1bc3] - (ulonglong) * (uint *)ppuVar6[-0x1bc6]) >> 2));
	if ((int)uVar5 == 0x13) {
		*(undefined4 *)(uVar4 + 7000) = 0xffffffff;
	} else {
		uParm5 = uVar13 + uVar5 * 0x170;
		while (*(int *)((int)uParm5 + 0x178) != -1) {
			lVar7 = 0x2e;
			uParm4 = uParm5 - 8;
			uVar12 = uParm5 + 0x168;
			do {
				uVar12 = uVar12 + 8;
				uVar1 = ((undefined4 *)uVar12)[1];
				uParm4 = uParm4 + 8;
				*(undefined4 *)uParm4 = *(undefined4 *)uVar12;
				((undefined4 *)uParm4)[1] = uVar1;
				lVar7 = lVar7 + -1;
			} while (lVar7 != 0);
			uParm5 = uParm5 + 0x170;
			uVar5 = uVar5 + 1;
		}
		*(undefined4 *)(uVar4 + (int)uVar5 * 0x170 + 8) = 0xffffffff;
	}
	CalcPlrInv((ulonglong) * (uint *)puVar3, 1, uVar12, uParm4, uParm5, uVar5, CONCAT71(uVar8, uVar9),
	    CONCAT71(uVar10, uVar11), in_stack_ffffffb8);
	return;
}

void S_SBuyEnter(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	uint uVar2;
	int iVar3;
	undefined4 uVar4;
	uint uVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	int *piVar10;
	uint *puVar11;
	int *piVar12;
	longlong lVar13;
	ulonglong uVar14;
	undefined uVar15;
	longlong lVar16;
	undefined uVar17;
	ulonglong uVar18;
	undefined uVar19;
	ulonglong uVar20;
	undefined uVar21;
	ulonglong uVar22;
	undefined uVar23;
	longlong lVar24;
	undefined uVar25;
	longlong lVar26;
	undefined uVar27;
	longlong lVar28;
	undefined4 in_stack_ffffffb8;

	piVar12 = _DAT_100f20d0;
	piVar10 = _DAT_100f20c4;
	puVar9 = PTR_DAT_100f1980;
	puVar8 = PTR_DAT_100f197c;
	puVar7 = PTR_DAT_100f1828;
	puVar6 = PTR_DAT_100f1824;
	lVar26 = (longlong)param_8;
	lVar24 = (longlong)param_7;
	uVar20 = (ulonglong)_DAT_100f1e2c;
	uVar18 = ZEXT48(PTR_DAT_100f1828);
	iVar1 = *_DAT_100f20d0;
	uVar15 = SUB41(PTR_DAT_100f1828, 0);
	uVar17 = (undefined)_DAT_100f1e2c;
	if (iVar1 == 0x16) {
		StartStore('\x01', param_2, 0x16, uVar15, uVar17, param_6, param_7, param_8, in_stack_ffffffb8);
		*piVar12 = 0xc;
	} else {
		*(undefined4 *)PTR_DAT_100f20a4 = 2;
		puVar11 = _DAT_100f20bc;
		*piVar10 = iVar1;
		piVar10 = _DAT_100f20b8;
		uVar2 = *puVar11;
		*(uint *)PTR_DAT_100f2098 = uVar2;
		uVar22 = (ulonglong) * (uint *)puVar6 * 0x55ec;
		lVar16 = uVar18 + uVar22;
		iVar3 = *(int *)((int)lVar16 + 0x1c8);
		lVar13 = uVar20 + ((ulonglong)uVar2 + (ulonglong)(uint)(iVar1 - *piVar10 >> 2)) * 0x170;
		if (iVar3 < *(int *)((int)lVar13 + 200)) {
			StartStore('\t', (char)iVar3, (char)lVar16, uVar15, uVar17, (char)uVar22, param_7, param_8,
			    in_stack_ffffffb8);
		} else {
			lVar16 = lVar16 + 0x53cc;
			lVar28 = 0x2e;
			lVar13 = lVar13 + -8;
			do {
				lVar13 = lVar13 + 8;
				uVar4 = ((undefined4 *)lVar13)[1];
				lVar16 = lVar16 + 8;
				*(undefined4 *)lVar16 = *(undefined4 *)lVar13;
				((undefined4 *)lVar16)[1] = uVar4;
				lVar28 = lVar28 + -1;
			} while (lVar28 != 0);
			SetCursor_(*(int *)(puVar7 + (int)uVar22 + 0x5494) + 0xc, (char)lVar13, (char)lVar16, uVar15,
			    uVar17, (char)uVar22, param_7, param_8, in_stack_ffffffb8);
			uVar14 = 0;
			lVar28 = 0;
			while (true) {
				uVar23 = (undefined)uVar22;
				uVar21 = (undefined)uVar20;
				uVar19 = (undefined)uVar18;
				uVar17 = (undefined)lVar16;
				uVar15 = (undefined)lVar13;
				uVar25 = (undefined)lVar24;
				uVar27 = (undefined)lVar26;
				if ((0x27 < (int)lVar28) || ((int)uVar14 != 0))
					break;
				iVar1 = *(int *)puVar9;
				uVar20 = 0;
				uVar2 = iVar1 / 0x1c + (iVar1 >> 0x1f);
				uVar22 = (longlong)(int)((ulonglong)((longlong)iVar1 * -0x6db6db6d) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar2;
				uVar5 = *(int *)puVar8 / 0x1c + (*(int *)puVar8 >> 0x1f);
				lVar16 = uVar22 + (ulonglong)(uVar2 >> 0x1f);
				uVar18 = (ulonglong)uVar5 + (ulonglong)(uVar5 >> 0x1f);
				lVar13 = lVar28;
				uVar14 = AutoPlace(*(int *)puVar6, (int)lVar28, lVar16, (int)uVar18, 0, (char)uVar2, uVar25,
				    uVar27, in_stack_ffffffb8);
				lVar28 = lVar28 + 1;
			}
			if ((int)uVar14 == 0) {
				StartStore('\n', uVar15, uVar17, uVar19, uVar21, uVar23, uVar25, uVar27, in_stack_ffffffb8);
			} else {
				StartStore('\v', uVar15, uVar17, uVar19, uVar21, uVar23, uVar25, uVar27, in_stack_ffffffb8);
			}
			SetCursor_(1, uVar15, uVar17, uVar19, uVar21, uVar23, uVar25, uVar27, in_stack_ffffffb8);
		}
	}
	return;
}

void S_SBuyEnter(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int *piVar1;
	int *piVar2;
	undefined *puVar3;
	undefined *puVar4;
	uint uVar5;
	undefined **ppuVar6;
	longlong lVar7;
	int iVar8;
	longlong lVar9;
	ulonglong uVar10;
	ulonglong uVar11;
	undefined4 in_stack_ffffffb8;

	uVar5 = _DAT_100f1e28;
	puVar4 = PTR_DAT_100f1828;
	puVar3 = PTR_DAT_100f1824;
	ppuVar6 = &toc;
	uVar11 = (ulonglong)_DAT_100f1e28;
	uVar10 = ZEXT48(PTR_DAT_100f1828);
	TakePlrsMoney(*(int *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x549c), param_2,
	    param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	lVar7 = uVar10 + (ulonglong) * (uint *)puVar3 * 0x55ec;
	iVar8 = (int)lVar7;
	if (*(char *)(iVar8 + 0x5410) == '\0') {
		*(undefined4 *)(iVar8 + 0x540c) = 0;
	}
	StoreAutoPlace((char)lVar7, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	lVar7 = 0;
	piVar1 = (int *)ppuVar6[-0x1bce];
	lVar9 = 0;
	iVar8 = *piVar1 + (*(int *)ppuVar6[-0x1bc3] - *(int *)ppuVar6[-0x1bc6] >> 2);
	while (-1 < iVar8) {
		if (*(int *)((int)uVar11 + 8) != -1) {
			iVar8 = iVar8 + -1;
			lVar7 = lVar9;
		}
		uVar11 = uVar11 + 0x170;
		lVar9 = lVar9 + 1;
	}
	piVar2 = (int *)ppuVar6[-0x1c6b];
	*(undefined4 *)(uVar5 + (int)lVar7 * 0x170 + 8) = 0xffffffff;
	*piVar2 = *piVar2 + -1;
	SpawnPremium((int)(char)puVar4[*(int *)puVar3 * 0x55ec + 0x1b4], (char)piVar2, (char)piVar1,
	    (char)uVar11, (char)lVar7, (char)lVar9, param_7, param_8, in_stack_ffffffb8);
	return;
}

void S_SPBuyEnter(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	int iVar3;
	undefined4 uVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	int *piVar9;
	uint *puVar10;
	uint *puVar11;
	longlong lVar12;
	undefined uVar13;
	ulonglong uVar14;
	ulonglong uVar15;
	undefined uVar16;
	ulonglong uVar17;
	longlong lVar18;
	undefined uVar19;
	ulonglong uVar20;
	undefined uVar21;
	undefined uVar22;
	ulonglong uVar23;
	undefined uVar24;
	longlong lVar25;
	undefined uVar26;
	longlong lVar27;
	longlong lVar28;
	undefined4 in_stack_ffffffb8;

	puVar10 = _DAT_100f20d0;
	puVar11 = _DAT_100f20c4;
	puVar8 = PTR_DAT_100f1980;
	puVar7 = PTR_DAT_100f197c;
	puVar6 = PTR_DAT_100f1828;
	puVar5 = PTR_DAT_100f1824;
	uVar15 = ZEXT48(PTR_DAT_100f1828);
	uVar14 = (ulonglong)_DAT_100f1e28;
	uVar1 = *_DAT_100f20d0;
	uVar20 = (ulonglong)uVar1;
	uVar21 = (undefined)uVar1;
	uVar13 = SUB41(PTR_DAT_100f1828, 0);
	if (uVar1 == 0x16) {
		StartStore('\x01', param_2, (char)_DAT_100f1e28, uVar13, param_5, uVar21, param_7, param_8,
		    in_stack_ffffffb8);
		*puVar10 = 0xe;
	} else {
		*(undefined4 *)PTR_DAT_100f20a4 = 0x12;
		puVar10 = _DAT_100f20bc;
		lVar25 = 0;
		*puVar11 = uVar1;
		piVar9 = _DAT_100f20b8;
		lVar27 = 0;
		uVar2 = *puVar10;
		uVar23 = (ulonglong)uVar2;
		*(uint *)PTR_DAT_100f2098 = uVar2;
		lVar12 = uVar23 + (ulonglong)(uint)((int)(uVar1 - *piVar9) >> 2);
		uVar17 = uVar14;
		while (-1 < (int)lVar12) {
			if (*(int *)((int)uVar17 + 8) != -1) {
				lVar12 = lVar12 + -1;
				lVar25 = lVar27;
			}
			uVar17 = uVar17 + 0x170;
			lVar27 = lVar27 + 1;
		}
		lVar18 = (ulonglong) * (uint *)puVar5 * 0x55ec;
		lVar12 = uVar14 + lVar25 * 0x170;
		lVar27 = uVar15 + lVar18;
		iVar3 = *(int *)((int)lVar27 + 0x1c8);
		if (iVar3 < *(int *)((int)lVar12 + 200)) {
			StartStore('\t', (char)iVar3, (char)lVar27, uVar13, (char)lVar18, uVar21, (char)uVar2, (char)lVar25, in_stack_ffffffb8);
		} else {
			lVar27 = lVar27 + 0x53cc;
			lVar28 = 0x2e;
			lVar12 = lVar12 + -8;
			do {
				lVar12 = lVar12 + 8;
				uVar4 = ((undefined4 *)lVar12)[1];
				lVar27 = lVar27 + 8;
				*(undefined4 *)lVar27 = *(undefined4 *)lVar12;
				((undefined4 *)lVar27)[1] = uVar4;
				lVar28 = lVar28 + -1;
			} while (lVar28 != 0);
			SetCursor_(*(int *)(puVar6 + (int)lVar18 + 0x5494) + 0xc, (char)lVar12, (char)lVar27, uVar13,
			    (char)lVar18, uVar21, (char)uVar2, (char)lVar25, in_stack_ffffffb8);
			uVar14 = 0;
			lVar28 = 0;
			while (true) {
				uVar22 = (undefined)uVar20;
				uVar19 = (undefined)lVar18;
				uVar16 = (undefined)uVar15;
				uVar21 = (undefined)lVar27;
				uVar13 = (undefined)lVar12;
				uVar24 = (undefined)uVar23;
				uVar26 = (undefined)lVar25;
				if ((0x27 < (int)lVar28) || ((int)uVar14 != 0))
					break;
				iVar3 = *(int *)puVar8;
				lVar18 = 0;
				uVar1 = iVar3 / 0x1c + (iVar3 >> 0x1f);
				uVar20 = (longlong)(int)((ulonglong)((longlong)iVar3 * -0x6db6db6d) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar1;
				uVar2 = *(int *)puVar7 / 0x1c + (*(int *)puVar7 >> 0x1f);
				lVar27 = uVar20 + (ulonglong)(uVar1 >> 0x1f);
				uVar15 = (ulonglong)uVar2 + (ulonglong)(uVar2 >> 0x1f);
				lVar12 = lVar28;
				uVar14 = AutoPlace(*(int *)puVar5, (int)lVar28, lVar27, (int)uVar15, 0, (char)uVar1, uVar24,
				    uVar26, in_stack_ffffffb8);
				lVar28 = lVar28 + 1;
			}
			if ((int)uVar14 == 0) {
				StartStore('\n', uVar13, uVar21, uVar16, uVar19, uVar22, uVar24, uVar26, in_stack_ffffffb8);
			} else {
				StartStore('\v', uVar13, uVar21, uVar16, uVar19, uVar22, uVar24, uVar26, in_stack_ffffffb8);
			}
			SetCursor_(1, uVar13, uVar21, uVar16, uVar19, uVar22, uVar24, uVar26, in_stack_ffffffb8);
		}
	}
	return;
}

undefined8
StoreGoldFit(int param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	ulonglong uVar3;
	undefined **ppuVar4;
	undefined8 uVar5;
	undefined *puVar6;
	int iVar7;
	undefined *puVar8;
	longlong lVar9;
	ulonglong uVar10;
	int iVar11;
	int iVar12;
	undefined4 in_stack_ffffffb8;

	ppuVar4 = &toc;
	iVar12 = (int)((longlong)param_1 * 0x170);
	uVar1 = *(uint *)(PTR_DAT_100f20ac + iVar12 + 200);
	uVar10 = (ulonglong)uVar1;
	uVar2 = (int)uVar1 / 5000 + ((int)uVar1 >> 0x1f);
	iVar7 = uVar2 + (uVar2 >> 0x1f);
	if (uVar10 != (((longlong)(int)((ulonglong)((longlong)(int)uVar1 * 0x68db8bad) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar2) + (ulonglong)(uVar2 >> 0x1f)) * 5000) {
		iVar7 = iVar7 + 1;
	}
	SetCursor_(*(int *)(PTR_DAT_100f20ac + iVar12 + 0xc0) + 0xc, (char)uVar2, (char)PTR_DAT_100f20ac,
	    (char)((longlong)param_1 * 0x170), param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	uVar1 = *(int *)ppuVar4[-0x1d94] / 0x1c + (*(int *)ppuVar4[-0x1d94] >> 0x1f);
	uVar2 = *(int *)ppuVar4[-0x1d95] / 0x1c + (*(int *)ppuVar4[-0x1d95] >> 0x1f);
	lVar9 = (ulonglong)uVar1 + (ulonglong)(uVar1 >> 0x1f);
	iVar12 = (int)lVar9 * (uVar2 + (uVar2 >> 0x1f));
	SetCursor_(1, (byte)(uVar2 >> 0x1f), (char)lVar9, (byte)(uVar1 >> 0x1f), param_5, param_6, param_7,
	    param_8, in_stack_ffffffb8);
	if (iVar12 < iVar7) {
		lVar9 = 4;
		puVar8 = ppuVar4[-0x1dea] + *(int *)ppuVar4[-0x1deb] * 0x55ec;
		puVar6 = puVar8;
		do {
			if (puVar6[0x482c] == '\0') {
				iVar12 = iVar12 + 1;
			}
			if (puVar6[0x482d] == '\0') {
				iVar12 = iVar12 + 1;
			}
			if (puVar6[0x482e] == '\0') {
				iVar12 = iVar12 + 1;
			}
			if (puVar6[0x482f] == '\0') {
				iVar12 = iVar12 + 1;
			}
			if (puVar6[0x4830] == '\0') {
				iVar12 = iVar12 + 1;
			}
			if (puVar6[0x4831] == '\0') {
				iVar12 = iVar12 + 1;
			}
			if (puVar6[0x4832] == '\0') {
				iVar12 = iVar12 + 1;
			}
			if (puVar6[0x4833] == '\0') {
				iVar12 = iVar12 + 1;
			}
			if (puVar6[0x4834] == '\0') {
				iVar12 = iVar12 + 1;
			}
			if (puVar6[0x4835] == '\0') {
				iVar12 = iVar12 + 1;
			}
			puVar6 = puVar6 + 10;
			lVar9 = lVar9 + -1;
		} while (lVar9 != 0);
		uVar3 = (ulonglong) * (uint *)(puVar8 + 0x4828);
		if (0 < (int)*(uint *)(puVar8 + 0x4828)) {
			do {
				if (*(int *)(puVar8 + 0xeb0) == 0xb) {
					uVar1 = *(uint *)(puVar8 + 0xf6c);
					if (uVar1 != 5000) {
						if ((int)((int)uVar10 + uVar1) < 0x1389) {
							uVar10 = 0;
						} else {
							uVar10 = uVar10 - (5000 - (ulonglong)uVar1);
						}
					}
				}
				puVar8 = puVar8 + 0x170;
				uVar3 = uVar3 - 1;
			} while (uVar3 != 0);
		}
		iVar11 = (int)uVar10;
		uVar1 = iVar11 / 5000 + (iVar11 >> 0x1f);
		iVar7 = uVar1 + (uVar1 >> 0x1f);
		if (uVar10 != (((longlong)(int)((ulonglong)((longlong)iVar11 * 0x68db8bad) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar1) + (ulonglong)(uVar1 >> 0x1f)) * 5000) {
			iVar7 = iVar7 + 1;
		}
		if (iVar12 < iVar7) {
			uVar5 = 0;
		} else {
			uVar5 = 1;
		}
	} else {
		uVar5 = 1;
	}
	return uVar5;
}

void PlaceStoreGold(undefined4 param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, char param_6, char param_7, char param_8, undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	undefined4 uVar3;
	uint uVar4;
	int iVar5;
	bool bVar6;
	undefined *puVar7;
	undefined *puVar8;
	longlong lVar9;
	undefined4 *puVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	ulonglong uVar18;
	longlong lVar19;
	undefined4 in_stack_ffffffa8;

	puVar8 = PTR_DAT_100f1e5c;
	puVar7 = PTR_DAT_100f1824;
	lVar14 = (longlong)param_8;
	lVar13 = (longlong)param_7;
	lVar12 = (longlong)param_6;
	uVar18 = ZEXT48(PTR_DAT_100f1828);
	bVar6 = false;
	iVar15 = 0;
	while (true) {
		if (0x27 < iVar15) {
			return;
		}
		if (bVar6)
			break;
		uVar1 = *(uint *)puVar7;
		uVar4 = iVar15 / 10 + (iVar15 >> 0x1f);
		iVar16 = (uVar4 + (uVar4 >> 0x1f)) * 10;
		lVar9 = uVar18 + (ulonglong)uVar1 * 0x55ec;
		iVar17 = iVar15 + (uVar4 + (uVar4 >> 0x1f)) * -10;
		iVar5 = (int)lVar9;
		if (*(char *)(iVar5 + iVar17 + iVar16 + 0x482c) == '\0') {
			uVar2 = *(uint *)(iVar5 + 0x4828);
			GetGoldSeed(uVar1, (int *)puVar8, (char)lVar9, (byte)(uVar4 >> 0x1f), bVar6, (char)lVar12,
			    (char)lVar13, (char)lVar14, in_stack_ffffffa8);
			uVar1 = *(uint *)puVar7;
			lVar19 = 0x2e;
			lVar11 = uVar18 + (ulonglong)uVar1 * 0x55ec;
			lVar12 = lVar11 + (ulonglong)uVar2 * 0x170;
			lVar9 = lVar12 + 0xea0;
			puVar10 = (undefined4 *)(puVar8 + -8);
			do {
				uVar3 = puVar10[3];
				lVar9 = lVar9 + 8;
				*(undefined4 *)lVar9 = puVar10[2];
				((undefined4 *)lVar9)[1] = uVar3;
				lVar19 = lVar19 + -1;
				puVar10 = puVar10 + 2;
			} while (lVar19 != 0);
			iVar5 = (int)lVar11;
			*(int *)(iVar5 + 0x4828) = *(int *)(iVar5 + 0x4828) + 1;
			*(undefined *)(iVar5 + iVar17 + iVar16 + 0x482c) = (char)*(undefined4 *)(iVar5 + 0x4828);
			*(undefined4 *)((int)lVar12 + 0xf6c) = param_1;
			SetGoldCurs(uVar1, uVar2);
			bVar6 = true;
		}
		iVar15 = iVar15 + 1;
	}
	return;
}

void StoreSellItem(undefined param_1, undefined param_2, undefined param_3, char param_4,
    undefined param_5, char param_6, undefined param_7, char param_8, undefined4 param_9)

{
	char cVar1;
	uint uVar2;
	uint uVar3;
	undefined4 uVar4;
	int iVar5;
	undefined *puVar6;
	undefined *puVar7;
	uint *puVar8;
	longlong lVar9;
	longlong lVar10;
	ulonglong uVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	longlong lVar15;
	ulonglong uVar16;
	ulonglong uVar17;
	ulonglong uVar18;
	int iVar19;
	int iVar20;
	ulonglong uVar21;
	undefined4 in_stack_ffffffb8;

	puVar8 = _DAT_100f20c0;
	puVar7 = PTR_DAT_100f1828;
	puVar6 = PTR_DAT_100f1824;
	lVar15 = (longlong)param_8;
	lVar14 = (longlong)param_6;
	lVar12 = (longlong)param_4;
	uVar11 = ZEXT48(PTR_DAT_100f2098);
	uVar16 = ZEXT48(PTR_DAT_100f20a8);
	uVar17 = ZEXT48(PTR_DAT_100f20ac);
	uVar21 = ZEXT48(PTR_DAT_100f1828);
	lVar9 = (ulonglong) * (uint *)PTR_DAT_100f2098 + (ulonglong)(uint)(*_DAT_100f20c4 - *_DAT_100f20b8 >> 2);
	cVar1 = PTR_DAT_100f20a8[(uint)lVar9];
	if (cVar1 < '\0') {
		RemoveSpdBarItem(*(int *)PTR_DAT_100f1824, -((int)cVar1 + 1), (char)PTR_DAT_100f2098, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffb8);
	} else {
		RemoveInvItem((ulonglong) * (uint *)PTR_DAT_100f1824, (longlong)cVar1, (char)PTR_DAT_100f2098, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	lVar13 = uVar17 + lVar9 * 0x170;
	uVar2 = *(uint *)((int)lVar13 + 200);
	uVar18 = (ulonglong)uVar2;
	*puVar8 = *puVar8 - 1;
	uVar3 = *puVar8;
	uVar17 = (ulonglong)uVar3;
	if ((uint)lVar9 != uVar3) {
		lVar14 = uVar16 + lVar9;
		while ((int)lVar9 < (int)uVar3) {
			lVar10 = 0x2e;
			lVar12 = lVar13 + -8;
			uVar11 = lVar13 + 0x168;
			do {
				uVar11 = uVar11 + 8;
				uVar4 = ((undefined4 *)uVar11)[1];
				lVar12 = lVar12 + 8;
				*(undefined4 *)lVar12 = *(undefined4 *)uVar11;
				((undefined4 *)lVar12)[1] = uVar4;
				lVar10 = lVar10 + -1;
			} while (lVar10 != 0);
			lVar13 = lVar13 + 0x170;
			lVar9 = lVar9 + 1;
			*(undefined *)lVar14 = ((undefined *)lVar14)[1];
			lVar14 = lVar14 + 1;
		}
	}
	iVar20 = 0;
	lVar9 = 0;
	*(uint *)(puVar7 + *(int *)puVar6 * 0x55ec + 0x1c8) = *(int *)(puVar7 + *(int *)puVar6 * 0x55ec + 0x1c8) + uVar2;
	while (true) {
		uVar2 = *(uint *)puVar6;
		lVar10 = uVar21 + (ulonglong)uVar2 * 0x55ec;
		iVar19 = (int)uVar18;
		if ((*(int *)((int)lVar10 + 0x4828) <= iVar20) || (iVar19 < 1))
			break;
		iVar5 = (int)(lVar10 + lVar9);
		if (*(int *)(iVar5 + 0xeb0) == 0xb) {
			lVar12 = lVar10 + lVar9 + 0xf6c;
			uVar3 = *(uint *)(iVar5 + 0xf6c);
			if (uVar3 != 5000) {
				if ((int)(iVar19 + uVar3) < 0x1389) {
					*(int *)lVar12 = iVar19 + uVar3;
					SetGoldCurs(uVar2, iVar20);
					uVar18 = 0;
				} else {
					uVar11 = 5000 - (ulonglong)uVar3;
					*(int *)lVar12 = 5000;
					uVar18 = uVar18 - uVar11;
					SetGoldCurs(uVar2, iVar20);
				}
			}
		}
		lVar9 = lVar9 + 0x170;
		iVar20 = iVar20 + 1;
	}
	if (0 < iVar19) {
		while (true) {
			if ((int)uVar18 < 0x1389)
				break;
			PlaceStoreGold(5000, (char)lVar10, (char)uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
			    (char)uVar17, (char)lVar15, in_stack_ffffffb8);
			uVar18 = uVar18 - 5000;
		}
		PlaceStoreGold((int)uVar18, (char)lVar10, (char)uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
		    (char)uVar17, (char)lVar15, in_stack_ffffffb8);
	}
	return;
}

void S_SSellEnter(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	uint uVar2;
	undefined4 uVar3;
	undefined4 uVar4;
	int *piVar5;
	uint *puVar6;
	int *piVar7;
	longlong lVar8;
	undefined8 uVar9;
	undefined uVar10;
	longlong lVar11;
	undefined uVar12;
	longlong lVar13;
	undefined uVar14;
	longlong lVar15;
	undefined4 in_stack_ffffffc8;

	piVar7 = _DAT_100f20d0;
	piVar5 = _DAT_100f20c4;
	iVar1 = *_DAT_100f20d0;
	if (iVar1 == 0x16) {
		StartStore('\x01', param_2, param_3, 0x16, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		*piVar7 = 0x10;
	} else {
		*(undefined4 *)PTR_DAT_100f20a4 = 3;
		puVar6 = _DAT_100f20bc;
		lVar15 = 0x2e;
		*piVar5 = iVar1;
		piVar5 = _DAT_100f20b8;
		uVar2 = *puVar6;
		*(uint *)PTR_DAT_100f2098 = uVar2;
		lVar8 = (ulonglong)uVar2 + (ulonglong)(uint)(iVar1 - *piVar5 >> 2);
		lVar11 = ZEXT48(PTR_DAT_100f20ac) + lVar8 * 0x170 + -8;
		lVar13 = ZEXT48(PTR_DAT_100f1828) + (ulonglong) * (uint *)PTR_DAT_100f1824 * 0x55ec + 0x53cc;
		do {
			lVar11 = lVar11 + 8;
			uVar12 = (undefined)lVar11;
			uVar4 = *(undefined4 *)lVar11;
			uVar10 = (undefined)uVar4;
			uVar3 = ((undefined4 *)lVar11)[1];
			lVar13 = lVar13 + 8;
			uVar14 = (undefined)lVar13;
			*(undefined4 *)lVar13 = uVar4;
			((undefined4 *)lVar13)[1] = uVar3;
			lVar15 = lVar15 + -1;
		} while (lVar15 != 0);
		uVar9 = StoreGoldFit((int)lVar8, uVar10, uVar12, uVar14, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
		if ((int)uVar9 == 0) {
			StartStore('\n', uVar10, uVar12, uVar14, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		} else {
			StartStore('\v', uVar10, uVar12, uVar14, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		}
	}
	return;
}

void SmithRepairItem(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	char cVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined **ppuVar6;
	int iVar7;
	undefined4 in_stack_ffffffb8;

	puVar5 = PTR_DAT_100f20ac;
	puVar4 = PTR_DAT_100f1828;
	puVar3 = PTR_DAT_100f1824;
	ppuVar6 = &toc;
	TakePlrsMoney(*(int *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x549c), param_2,
	    param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	puVar2 = ppuVar6[-0x1bca];
	iVar7 = *(int *)ppuVar6[-0x1bce] + (*(int *)ppuVar6[-0x1bc3] - *(int *)ppuVar6[-0x1bc6] >> 2);
	*(undefined4 *)(puVar5 + iVar7 * 0x170 + 0xec) = *(undefined4 *)(puVar5 + iVar7 * 0x170 + 0xf0);
	cVar1 = puVar2[iVar7];
	if (cVar1 < '\0') {
		if (cVar1 == -1) {
			*(undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0x584) = *(undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0x588);
		}
		if (cVar1 == -2) {
			*(undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0xe24) = *(undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0xe28);
		}
		if (cVar1 == -3) {
			*(undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0xb44) = *(undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0xb48);
		}
		if (cVar1 == -4) {
			*(undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0xcb4) = *(undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0xcb8);
		}
	} else {
		*(undefined4 *)(puVar4 + (int)cVar1 * 0x170 + *(int *)puVar3 * 0x55ec + 0xf94) = *(undefined4 *)(puVar4 + (int)cVar1 * 0x170 + *(int *)puVar3 * 0x55ec + 0xf98);
	}
	return;
}

void SmithRepairItem(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	uint uVar2;
	undefined4 uVar3;
	undefined *puVar4;
	undefined *puVar5;
	int *piVar6;
	uint *puVar7;
	int *piVar8;
	longlong lVar9;
	undefined uVar10;
	longlong lVar11;
	ulonglong uVar12;
	undefined uVar13;
	ulonglong uVar14;
	undefined uVar15;
	longlong lVar16;
	longlong lVar17;
	longlong lVar18;
	undefined4 in_stack_ffffffb8;

	piVar8 = _DAT_100f20d0;
	piVar6 = _DAT_100f20c4;
	puVar5 = PTR_DAT_100f20ac;
	puVar4 = PTR_DAT_100f1828;
	uVar14 = ZEXT48(PTR_DAT_100f20ac);
	uVar12 = ZEXT48(PTR_DAT_100f1828);
	iVar1 = *_DAT_100f20d0;
	uVar13 = SUB41(PTR_DAT_100f1828, 0);
	uVar15 = SUB41(PTR_DAT_100f20ac, 0);
	if (iVar1 == 0x16) {
		StartStore('\x01', param_2, param_3, uVar13, uVar15, 0x16, param_7, param_8, in_stack_ffffffb8);
		*piVar8 = 0x12;
	} else {
		*(undefined4 *)PTR_DAT_100f20a4 = 4;
		puVar7 = _DAT_100f20bc;
		lVar18 = 0x2e;
		*piVar6 = iVar1;
		piVar6 = _DAT_100f20b8;
		uVar2 = *puVar7;
		*(uint *)PTR_DAT_100f2098 = uVar2;
		lVar16 = ((ulonglong)uVar2 + (ulonglong)(uint)(iVar1 - *piVar6 >> 2)) * 0x170;
		lVar17 = (ulonglong) * (uint *)PTR_DAT_100f1824 * 0x55ec;
		lVar9 = uVar14 + lVar16 + -8;
		lVar11 = uVar12 + lVar17 + 0x53cc;
		do {
			lVar9 = lVar9 + 8;
			uVar3 = ((undefined4 *)lVar9)[1];
			lVar11 = lVar11 + 8;
			*(undefined4 *)lVar11 = *(undefined4 *)lVar9;
			((undefined4 *)lVar11)[1] = uVar3;
			lVar18 = lVar18 + -1;
		} while (lVar18 != 0);
		uVar10 = (undefined) * (int *)(puVar4 + (int)lVar17 + 0x1c8);
		if (*(int *)(puVar4 + (int)lVar17 + 0x1c8) < *(int *)(puVar5 + (int)lVar16 + 200)) {
			StartStore('\t', uVar10, (char)lVar11, uVar13, uVar15, (char)lVar16, (char)lVar17, param_8,
			    in_stack_ffffffb8);
		} else {
			StartStore('\v', uVar10, (char)lVar11, uVar13, uVar15, (char)lVar16, (char)lVar17, param_8,
			    in_stack_ffffffb8);
		}
	}
	return;
}

void S_WitchEnter(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	if (*_DAT_100f20d0 - 0xcU < 9) {
		// WARNING: Could not recover jumptable at 0x100ab8dc. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(PTR_PTR_LAB_100f37d0 + (*_DAT_100f20d0 - 0xcU) * 4))(*(code **)(PTR_PTR_LAB_100f37d0 + (*_DAT_100f20d0 - 0xcU) * 4), param_2, param_3,
		    param_4, param_5, param_6, param_7, param_8);
		return;
	}
	return;
}

void WitchBuyItem(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	ulonglong uVar4;
	longlong lVar5;
	int iVar6;
	undefined4 uVar7;
	undefined uVar8;
	longlong lVar9;
	undefined uVar10;
	ulonglong uVar11;
	ulonglong in_r6;
	ulonglong in_r7;
	undefined7 uVar12;
	undefined8 in_r8;
	undefined uVar13;
	undefined7 uVar14;
	undefined8 in_r9;
	undefined uVar15;
	undefined7 uVar16;
	undefined8 in_r10;
	undefined uVar17;
	ulonglong uVar18;
	ulonglong uVar19;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f1e58;
	puVar2 = PTR_DAT_100f1828;
	puVar1 = PTR_DAT_100f1824;
	uVar17 = (undefined)in_r10;
	uVar16 = (undefined7)((ulonglong)in_r10 >> 8);
	uVar15 = (undefined)in_r9;
	uVar14 = (undefined7)((ulonglong)in_r9 >> 8);
	uVar13 = (undefined)in_r8;
	uVar12 = (undefined7)((ulonglong)in_r8 >> 8);
	uVar11 = ZEXT48(PTR_DAT_100f2098);
	uVar19 = ZEXT48(PTR_DAT_100f1e58);
	uVar18 = ZEXT48(PTR_DAT_100f1828);
	uVar10 = (undefined)*_DAT_100f20b8;
	uVar4 = (ulonglong)*_DAT_100f20c4 - (ulonglong)*_DAT_100f20b8;
	lVar5 = (ulonglong) * (uint *)PTR_DAT_100f2098 + (uVar4 & 0xffffffff00000000 | (ulonglong)(uint)((int)uVar4 >> 2));
	iVar6 = (int)lVar5;
	if (iVar6 < 3) {
		uVar7 = GetRndSeed((char)*(uint *)PTR_DAT_100f2098, uVar10, (char)PTR_DAT_100f2098, (char)in_r6,
		    (char)in_r7, uVar13, uVar15, uVar17, in_stack_ffffffb8);
		lVar9 = uVar18 + (ulonglong) * (uint *)puVar1 * 0x55ec;
		uVar10 = (undefined)lVar9;
		*(undefined4 *)((int)lVar9 + 0x53d4) = uVar7;
	}
	uVar8 = TakePlrsMoney(*(int *)(puVar2 + *(int *)puVar1 * 0x55ec + 0x549c), uVar10, (char)uVar11,
	    (char)in_r6, (char)in_r7, uVar13, uVar15, uVar17, in_stack_ffffffb8);
	StoreAutoPlace(uVar8, uVar10, (char)uVar11, (char)in_r6, (char)in_r7, uVar13, uVar15, uVar17,
	    in_stack_ffffffb8);
	if (iVar6 < 3) {
		CalcPlrInv((ulonglong) * (uint *)puVar1, 1, uVar11, in_r6, in_r7, CONCAT71(uVar12, uVar13),
		    CONCAT71(uVar14, uVar15), CONCAT71(uVar16, uVar17), in_stack_ffffffb8);
	} else {
		if (iVar6 == 0x13) {
			*(undefined4 *)(puVar3 + 7000) = 0xffffffff;
		} else {
			in_r7 = uVar19 + lVar5 * 0x170;
			while (*(int *)((int)in_r7 + 0x178) != -1) {
				lVar9 = 0x2e;
				in_r6 = in_r7 - 8;
				uVar11 = in_r7 + 0x168;
				do {
					uVar11 = uVar11 + 8;
					uVar7 = ((undefined4 *)uVar11)[1];
					in_r6 = in_r6 + 8;
					*(undefined4 *)in_r6 = *(undefined4 *)uVar11;
					((undefined4 *)in_r6)[1] = uVar7;
					lVar9 = lVar9 + -1;
				} while (lVar9 != 0);
				in_r7 = in_r7 + 0x170;
				lVar5 = lVar5 + 1;
			}
			*(undefined4 *)(puVar3 + (int)lVar5 * 0x170 + 8) = 0xffffffff;
		}
		CalcPlrInv((ulonglong) * (uint *)puVar1, 1, uVar11, in_r6, in_r7, CONCAT71(uVar12, uVar13),
		    CONCAT71(uVar14, uVar15), CONCAT71(uVar16, uVar17), in_stack_ffffffb8);
	}
	return;
}

void S_WBuyEnter(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	uint uVar2;
	int iVar3;
	undefined4 uVar4;
	uint uVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	int *piVar10;
	uint *puVar11;
	int *piVar12;
	longlong lVar13;
	ulonglong uVar14;
	undefined uVar15;
	longlong lVar16;
	undefined uVar17;
	ulonglong uVar18;
	undefined uVar19;
	ulonglong uVar20;
	undefined uVar21;
	ulonglong uVar22;
	undefined uVar23;
	longlong lVar24;
	undefined uVar25;
	longlong lVar26;
	undefined uVar27;
	longlong lVar28;
	undefined4 in_stack_ffffffb8;

	piVar12 = _DAT_100f20d0;
	piVar10 = _DAT_100f20c4;
	puVar9 = PTR_DAT_100f1980;
	puVar8 = PTR_DAT_100f197c;
	puVar7 = PTR_DAT_100f1828;
	puVar6 = PTR_DAT_100f1824;
	lVar26 = (longlong)param_8;
	lVar24 = (longlong)param_7;
	uVar20 = ZEXT48(PTR_DAT_100f1e58);
	uVar18 = ZEXT48(PTR_DAT_100f1828);
	iVar1 = *_DAT_100f20d0;
	uVar15 = SUB41(PTR_DAT_100f1828, 0);
	uVar17 = SUB41(PTR_DAT_100f1e58, 0);
	if (iVar1 == 0x16) {
		StartStore('\x05', param_2, 0x16, uVar15, uVar17, param_6, param_7, param_8, in_stack_ffffffb8);
		*piVar12 = 0xe;
	} else {
		*(undefined4 *)PTR_DAT_100f20a4 = 6;
		puVar11 = _DAT_100f20bc;
		*piVar10 = iVar1;
		piVar10 = _DAT_100f20b8;
		uVar2 = *puVar11;
		*(uint *)PTR_DAT_100f2098 = uVar2;
		uVar22 = (ulonglong) * (uint *)puVar6 * 0x55ec;
		lVar16 = uVar18 + uVar22;
		iVar3 = *(int *)((int)lVar16 + 0x1c8);
		lVar13 = uVar20 + ((ulonglong)uVar2 + (ulonglong)(uint)(iVar1 - *piVar10 >> 2)) * 0x170;
		if (iVar3 < *(int *)((int)lVar13 + 200)) {
			StartStore('\t', (char)iVar3, (char)lVar16, uVar15, uVar17, (char)uVar22, param_7, param_8,
			    in_stack_ffffffb8);
		} else {
			lVar16 = lVar16 + 0x53cc;
			lVar28 = 0x2e;
			lVar13 = lVar13 + -8;
			do {
				lVar13 = lVar13 + 8;
				uVar4 = ((undefined4 *)lVar13)[1];
				lVar16 = lVar16 + 8;
				*(undefined4 *)lVar16 = *(undefined4 *)lVar13;
				((undefined4 *)lVar16)[1] = uVar4;
				lVar28 = lVar28 + -1;
			} while (lVar28 != 0);
			SetCursor_(*(int *)(puVar7 + (int)uVar22 + 0x5494) + 0xc, (char)lVar13, (char)lVar16, uVar15,
			    uVar17, (char)uVar22, param_7, param_8, in_stack_ffffffb8);
			uVar14 = 0;
			lVar28 = 0;
			while (true) {
				uVar23 = (undefined)uVar22;
				uVar21 = (undefined)uVar20;
				uVar19 = (undefined)uVar18;
				uVar17 = (undefined)lVar16;
				uVar15 = (undefined)lVar13;
				uVar25 = (undefined)lVar24;
				uVar27 = (undefined)lVar26;
				if ((0x27 < (int)lVar28) || ((int)uVar14 != 0))
					break;
				iVar1 = *(int *)puVar9;
				uVar20 = 0;
				uVar2 = iVar1 / 0x1c + (iVar1 >> 0x1f);
				uVar22 = (longlong)(int)((ulonglong)((longlong)iVar1 * -0x6db6db6d) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar2;
				uVar5 = *(int *)puVar8 / 0x1c + (*(int *)puVar8 >> 0x1f);
				lVar16 = uVar22 + (ulonglong)(uVar2 >> 0x1f);
				uVar18 = (ulonglong)uVar5 + (ulonglong)(uVar5 >> 0x1f);
				lVar13 = lVar28;
				uVar14 = SpecialAutoPlace(*(int *)puVar6, (int)lVar28, lVar16, (int)uVar18, 0, (char)uVar2, uVar25,
				    uVar27, in_stack_ffffffb8);
				lVar28 = lVar28 + 1;
			}
			if ((int)uVar14 == 0) {
				StartStore('\n', uVar15, uVar17, uVar19, uVar21, uVar23, uVar25, uVar27, in_stack_ffffffb8);
			} else {
				StartStore('\v', uVar15, uVar17, uVar19, uVar21, uVar23, uVar25, uVar27, in_stack_ffffffb8);
			}
			SetCursor_(1, uVar15, uVar17, uVar19, uVar21, uVar23, uVar25, uVar27, in_stack_ffffffb8);
		}
	}
	return;
}

void S_WSellEnter(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	uint uVar2;
	undefined4 uVar3;
	undefined4 uVar4;
	int *piVar5;
	uint *puVar6;
	int *piVar7;
	longlong lVar8;
	undefined8 uVar9;
	undefined uVar10;
	longlong lVar11;
	undefined uVar12;
	longlong lVar13;
	undefined uVar14;
	longlong lVar15;
	undefined4 in_stack_ffffffc8;

	piVar7 = _DAT_100f20d0;
	piVar5 = _DAT_100f20c4;
	iVar1 = *_DAT_100f20d0;
	if (iVar1 == 0x16) {
		StartStore('\x05', param_2, param_3, 0x16, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		*piVar7 = 0x10;
	} else {
		*(undefined4 *)PTR_DAT_100f20a4 = 7;
		puVar6 = _DAT_100f20bc;
		lVar15 = 0x2e;
		*piVar5 = iVar1;
		piVar5 = _DAT_100f20b8;
		uVar2 = *puVar6;
		*(uint *)PTR_DAT_100f2098 = uVar2;
		lVar8 = (ulonglong)uVar2 + (ulonglong)(uint)(iVar1 - *piVar5 >> 2);
		lVar11 = ZEXT48(PTR_DAT_100f20ac) + lVar8 * 0x170 + -8;
		lVar13 = ZEXT48(PTR_DAT_100f1828) + (ulonglong) * (uint *)PTR_DAT_100f1824 * 0x55ec + 0x53cc;
		do {
			lVar11 = lVar11 + 8;
			uVar12 = (undefined)lVar11;
			uVar4 = *(undefined4 *)lVar11;
			uVar10 = (undefined)uVar4;
			uVar3 = ((undefined4 *)lVar11)[1];
			lVar13 = lVar13 + 8;
			uVar14 = (undefined)lVar13;
			*(undefined4 *)lVar13 = uVar4;
			((undefined4 *)lVar13)[1] = uVar3;
			lVar15 = lVar15 + -1;
		} while (lVar15 != 0);
		uVar9 = StoreGoldFit((int)lVar8, uVar10, uVar12, uVar14, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
		if ((int)uVar9 == 0) {
			StartStore('\n', uVar10, uVar12, uVar14, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		} else {
			StartStore('\v', uVar10, uVar12, uVar14, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		}
	}
	return;
}

void WitchRechargeItem(undefined8 uParm1, undefined param_2, undefined param_3, undefined8 uParm4,
    undefined8 uParm5, undefined8 uParm6, undefined8 uParm7, undefined8 uParm8)

{
	undefined *puVar1;
	undefined *puVar2;
	int iVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined **ppuVar6;
	ulonglong uVar7;
	undefined7 uVar8;
	undefined uVar9;
	undefined7 uVar10;
	undefined uVar11;
	undefined7 uVar12;
	undefined uVar13;
	undefined7 uVar14;
	undefined uVar15;
	undefined7 uVar16;
	undefined uVar17;
	undefined4 in_stack_ffffffb8;

	puVar5 = PTR_DAT_100f20ac;
	puVar2 = PTR_DAT_100f1828;
	puVar4 = PTR_DAT_100f1824;
	uVar17 = (undefined)uParm8;
	uVar16 = (undefined7)((ulonglong)uParm8 >> 8);
	uVar15 = (undefined)uParm7;
	uVar14 = (undefined7)((ulonglong)uParm7 >> 8);
	uVar13 = (undefined)uParm6;
	uVar12 = (undefined7)((ulonglong)uParm6 >> 8);
	uVar11 = (undefined)uParm5;
	uVar10 = (undefined7)((ulonglong)uParm5 >> 8);
	uVar9 = (undefined)uParm4;
	uVar8 = (undefined7)((ulonglong)uParm4 >> 8);
	ppuVar6 = &toc;
	TakePlrsMoney(*(int *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x549c), param_2,
	    param_3, uVar9, uVar11, uVar13, uVar15, uVar17, in_stack_ffffffb8);
	puVar1 = ppuVar6[-0x1bca];
	uVar7 = (ulonglong) * (uint *)ppuVar6[-0x1bce] + ((ulonglong) * (uint *)ppuVar6[-0x1bc3] - (ulonglong) * (uint *)ppuVar6[-0x1bc6] & 0xffffffff00000000 | (ulonglong)(uint)((int)((ulonglong) * (uint *)ppuVar6[-0x1bc3] - (ulonglong) * (uint *)ppuVar6[-0x1bc6]) >> 2));
	iVar3 = (int)uVar7;
	*(undefined4 *)(puVar5 + iVar3 * 0x170 + 0xe4) = *(undefined4 *)(puVar5 + iVar3 * 0x170 + 0xe8);
	if ((char)puVar1[iVar3] < '\0') {
		puVar2 = puVar2 + *(int *)puVar4 * 0x55ec;
		*(undefined4 *)(puVar2 + 0xb3c) = *(undefined4 *)(puVar2 + 0xb40);
	} else {
		puVar2 = puVar2 + (int)(char)puVar1[iVar3] * 0x170 + *(int *)puVar4 * 0x55ec;
		*(undefined4 *)(puVar2 + 0xf8c) = *(undefined4 *)(puVar2 + 0xf90);
	}
	CalcPlrInv((ulonglong) * (uint *)puVar4, 1, uVar7, CONCAT71(uVar8, uVar9), CONCAT71(uVar10, uVar11),
	    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), CONCAT71(uVar16, uVar17),
	    in_stack_ffffffb8);
	return;
}

void S_WRechargeEnter(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	uint uVar2;
	undefined4 uVar3;
	undefined *puVar4;
	undefined *puVar5;
	int *piVar6;
	uint *puVar7;
	int *piVar8;
	longlong lVar9;
	undefined uVar10;
	longlong lVar11;
	ulonglong uVar12;
	undefined uVar13;
	ulonglong uVar14;
	undefined uVar15;
	longlong lVar16;
	longlong lVar17;
	longlong lVar18;
	undefined4 in_stack_ffffffb8;

	piVar8 = _DAT_100f20d0;
	piVar6 = _DAT_100f20c4;
	puVar5 = PTR_DAT_100f20ac;
	puVar4 = PTR_DAT_100f1828;
	uVar14 = ZEXT48(PTR_DAT_100f20ac);
	uVar12 = ZEXT48(PTR_DAT_100f1828);
	iVar1 = *_DAT_100f20d0;
	uVar13 = SUB41(PTR_DAT_100f1828, 0);
	uVar15 = SUB41(PTR_DAT_100f20ac, 0);
	if (iVar1 == 0x16) {
		StartStore('\x05', param_2, param_3, uVar13, uVar15, 0x16, param_7, param_8, in_stack_ffffffb8);
		*piVar8 = 0x12;
	} else {
		*(undefined4 *)PTR_DAT_100f20a4 = 8;
		puVar7 = _DAT_100f20bc;
		lVar18 = 0x2e;
		*piVar6 = iVar1;
		piVar6 = _DAT_100f20b8;
		uVar2 = *puVar7;
		*(uint *)PTR_DAT_100f2098 = uVar2;
		lVar16 = ((ulonglong)uVar2 + (ulonglong)(uint)(iVar1 - *piVar6 >> 2)) * 0x170;
		lVar17 = (ulonglong) * (uint *)PTR_DAT_100f1824 * 0x55ec;
		lVar9 = uVar14 + lVar16 + -8;
		lVar11 = uVar12 + lVar17 + 0x53cc;
		do {
			lVar9 = lVar9 + 8;
			uVar3 = ((undefined4 *)lVar9)[1];
			lVar11 = lVar11 + 8;
			*(undefined4 *)lVar11 = *(undefined4 *)lVar9;
			((undefined4 *)lVar11)[1] = uVar3;
			lVar18 = lVar18 + -1;
		} while (lVar18 != 0);
		uVar10 = (undefined) * (int *)(puVar4 + (int)lVar17 + 0x1c8);
		if (*(int *)(puVar4 + (int)lVar17 + 0x1c8) < *(int *)(puVar5 + (int)lVar16 + 200)) {
			StartStore('\t', uVar10, (char)lVar11, uVar13, uVar15, (char)lVar16, (char)lVar17, param_8,
			    in_stack_ffffffb8);
		} else {
			StartStore('\v', uVar10, (char)lVar11, uVar13, uVar15, (char)lVar16, (char)lVar17, param_8,
			    in_stack_ffffffb8);
		}
	}
	return;
}

void S_BoyEnter(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined4 *puVar6;
	int *piVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined4 in_stack_ffffffc8;

	piVar7 = _DAT_100f20c4;
	puVar6 = _DAT_100f20bc;
	puVar5 = PTR_DAT_100f20a4;
	puVar4 = PTR_DAT_100f2094;
	uVar11 = SUB41(PTR_DAT_100f20a4, 0);
	uVar10 = SUB41(_DAT_100f20c4, 0);
	iVar1 = *(int *)(PTR_DAT_100f1e14 + 8);
	if ((iVar1 != -1) && (uVar9 = (undefined)*_DAT_100f20d0, *_DAT_100f20d0 == 0x12)) {
		uVar8 = SUB41(PTR_DAT_100f1828, 0);
		if (*(int *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x1c8) < 0x32) {
			*(undefined4 *)PTR_DAT_100f20a4 = 0xc;
			puVar4 = PTR_DAT_100f2098;
			*piVar7 = 0x12;
			*(undefined4 *)puVar4 = *puVar6;
			StartStore('\t', (char)puVar4, (char)puVar6, uVar9, uVar10, uVar11, param_7, param_8,
			    in_stack_ffffffc8);
			return;
		}
		TakePlrsMoney(0x32, uVar8, param_3, uVar9, uVar10, uVar11, param_7, param_8, in_stack_ffffffc8);
		StartStore('\r', uVar8, param_3, uVar9, uVar10, uVar11, param_7, param_8, in_stack_ffffffc8);
		return;
	}
	iVar2 = *_DAT_100f20d0;
	if (((iVar2 == 8) && (iVar1 != -1)) || ((iVar2 == 0xc && (iVar1 == -1)))) {
		*(undefined4 *)PTR_DAT_100f209c = 8;
		puVar3 = PTR_DAT_100f2090;
		*(undefined4 *)puVar5 = 0xc;
		*piVar7 = iVar2;
		*(undefined4 *)puVar4 = 0xe1;
		*(undefined4 *)puVar3 = 0xea;
		StartStore('\x13', (char)puVar3, (char)puVar4, 0xe1, uVar10, uVar11, (char)iVar2, param_8,
		    in_stack_ffffffc8);
	} else {
		*PTR_DAT_100f186c = 0;
	}
	return;
}

void S_BoyEnter(undefined8 uParm1, undefined param_2, undefined param_3, undefined8 uParm4,
    undefined8 uParm5, undefined8 uParm6, undefined8 uParm7, undefined8 uParm8)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined uVar4;
	undefined7 uVar5;
	undefined uVar6;
	undefined7 uVar7;
	undefined uVar8;
	undefined7 uVar9;
	undefined uVar10;
	undefined7 uVar11;
	undefined uVar12;
	undefined7 uVar13;
	undefined uVar14;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_DAT_100f1824;
	uVar14 = (undefined)uParm8;
	uVar13 = (undefined7)((ulonglong)uParm8 >> 8);
	uVar12 = (undefined)uParm7;
	uVar11 = (undefined7)((ulonglong)uParm7 >> 8);
	uVar10 = (undefined)uParm6;
	uVar9 = (undefined7)((ulonglong)uParm6 >> 8);
	uVar8 = (undefined)uParm5;
	uVar7 = (undefined7)((ulonglong)uParm5 >> 8);
	uVar6 = (undefined)uParm4;
	uVar5 = (undefined7)((ulonglong)uParm4 >> 8);
	ppuVar3 = &toc;
	uVar4 = TakePlrsMoney(*(int *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x549c),
	    param_2, param_3, uVar6, uVar8, uVar10, uVar12, uVar14, in_stack_ffffffc8);
	StoreAutoPlace(uVar4, param_2, param_3, uVar6, uVar8, uVar10, uVar12, uVar14, in_stack_ffffffc8);
	puVar1 = (undefined4 *)ppuVar3[-0x1bcb];
	*(undefined4 *)(ppuVar3[-0x1c6f] + 8) = 0xffffffff;
	*puVar1 = 0xc;
	CalcPlrInv((ulonglong) * (uint *)puVar2, 1, 0xffffffffffffffff, CONCAT71(uVar5, uVar6),
	    CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10), CONCAT71(uVar11, uVar12),
	    CONCAT71(uVar13, uVar14), in_stack_ffffffc8);
	return;
}

void S_BoyEnter(void)

{
	uint uVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	uint uVar6;
	undefined *puVar7;
	uint *puVar8;
	uint *puVar9;
	undefined uVar11;
	undefined4 uVar10;
	longlong lVar12;
	undefined uVar13;
	ulonglong uVar14;
	ulonglong in_r6;
	ulonglong in_r7;
	undefined param_6;
	undefined7 uVar15;
	undefined8 in_r9;
	undefined uVar16;
	undefined7 uVar17;
	undefined8 in_r10;
	undefined uVar18;
	int iVar19;
	ulonglong uVar20;
	ulonglong uVar21;
	undefined4 in_stack_ffffffa8;

	puVar9 = _DAT_100f20c4;
	puVar8 = _DAT_100f20b8;
	puVar7 = PTR_DAT_100f2098;
	uVar6 = _DAT_100f1e10;
	puVar5 = PTR_DAT_100f1828;
	puVar4 = PTR_DAT_100f1824;
	puVar3 = PTR_DAT_100f17e0;
	uVar18 = (undefined)in_r10;
	uVar17 = (undefined7)((ulonglong)in_r10 >> 8);
	uVar16 = (undefined)in_r9;
	uVar15 = (undefined7)((ulonglong)in_r9 >> 8);
	uVar20 = (ulonglong)_DAT_100f1e10;
	uVar21 = ZEXT48(PTR_DAT_100f1828);
	uVar13 = (undefined)*_DAT_100f20b8;
	uVar1 = *(uint *)PTR_DAT_100f2098;
	uVar14 = (ulonglong)uVar1;
	iVar19 = uVar1 + ((int)(*_DAT_100f20c4 - *_DAT_100f20b8) >> 2);
	uVar11 = (undefined)*_DAT_100f20c4;
	if (*PTR_DAT_100f17e0 == '\x01') {
		if (iVar19 < 2) {
			uVar10 = GetRndSeed(uVar11, uVar13, (char)uVar1, (char)in_r6, (char)in_r7, param_6, uVar16, uVar18,
			    in_stack_ffffffa8);
			lVar12 = uVar21 + (ulonglong) * (uint *)puVar4 * 0x55ec;
			uVar13 = (undefined)lVar12;
			*(undefined4 *)((int)lVar12 + 0x53d4) = uVar10;
		}
	} else {
		if (iVar19 < 3) {
			uVar10 = GetRndSeed(uVar11, uVar13, (char)uVar1, (char)in_r6, (char)in_r7, param_6, uVar16, uVar18,
			    in_stack_ffffffa8);
			lVar12 = uVar21 + (ulonglong) * (uint *)puVar4 * 0x55ec;
			uVar13 = (undefined)lVar12;
			*(undefined4 *)((int)lVar12 + 0x53d4) = uVar10;
		}
	}
	TakePlrsMoney(*(int *)(puVar5 + *(int *)puVar4 * 0x55ec + 0x549c), uVar13, (char)uVar14, (char)in_r6,
	    (char)in_r7, param_6, uVar16, uVar18, in_stack_ffffffa8);
	lVar12 = uVar21 + (ulonglong) * (uint *)puVar4 * 0x55ec;
	iVar2 = (int)lVar12;
	if (*(char *)(iVar2 + 0x5410) == '\0') {
		*(undefined4 *)(iVar2 + 0x540c) = 0;
	}
	StoreAutoPlace((char)lVar12, uVar13, (char)uVar14, (char)in_r6, (char)in_r7, param_6, uVar16, uVar18,
	    in_stack_ffffffa8);
	if (*puVar3 == '\x01') {
		if (iVar19 < 2) {
			return;
		}
	} else {
		if (iVar19 < 3) {
			return;
		}
	}
	uVar21 = (ulonglong) * (uint *)puVar7 + ((ulonglong)*puVar9 - (ulonglong)*puVar8 & 0xffffffff00000000 | (ulonglong)(uint)((int)((ulonglong)*puVar9 - (ulonglong)*puVar8) >> 2));
	if ((int)uVar21 == 0x13) {
		*(undefined4 *)(uVar6 + 7000) = 0xffffffff;
	} else {
		in_r7 = uVar20 + uVar21 * 0x170;
		while (*(int *)((int)in_r7 + 0x178) != -1) {
			lVar12 = 0x2e;
			in_r6 = in_r7 - 8;
			uVar14 = in_r7 + 0x168;
			do {
				uVar14 = uVar14 + 8;
				uVar10 = ((undefined4 *)uVar14)[1];
				in_r6 = in_r6 + 8;
				*(undefined4 *)in_r6 = *(undefined4 *)uVar14;
				((undefined4 *)in_r6)[1] = uVar10;
				lVar12 = lVar12 + -1;
			} while (lVar12 != 0);
			in_r7 = in_r7 + 0x170;
			uVar21 = uVar21 + 1;
		}
		*(undefined4 *)(uVar6 + (int)uVar21 * 0x170 + 8) = 0xffffffff;
	}
	CalcPlrInv((ulonglong) * (uint *)puVar4, 1, uVar14, in_r6, in_r7, uVar21, CONCAT71(uVar15, uVar16),
	    CONCAT71(uVar17, uVar18), in_stack_ffffffa8);
	return;
}

void S_BBuyEnter(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	undefined4 uVar2;
	uint uVar3;
	uint uVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined4 *puVar10;
	undefined4 *puVar11;
	ulonglong uVar12;
	longlong lVar13;
	longlong lVar14;
	ulonglong uVar15;
	ulonglong uVar16;
	undefined uVar17;
	undefined uVar18;
	ulonglong uVar19;
	undefined uVar20;
	undefined uVar21;
	ulonglong uVar22;
	undefined uVar23;
	longlong lVar24;
	undefined uVar25;
	longlong lVar26;
	undefined uVar27;
	ulonglong uVar28;
	longlong lVar29;
	undefined4 in_stack_ffffffb8;

	puVar11 = _DAT_100f20c4;
	puVar9 = PTR_DAT_100f1e14;
	puVar8 = PTR_DAT_100f1980;
	puVar7 = PTR_DAT_100f197c;
	puVar6 = PTR_DAT_100f1828;
	puVar5 = PTR_DAT_100f1824;
	lVar26 = (longlong)param_8;
	lVar24 = (longlong)param_7;
	uVar19 = ZEXT48(PTR_DAT_100f1828);
	uVar16 = ZEXT48(PTR_DAT_100f1e14);
	if (*_DAT_100f20d0 == 10) {
		*(undefined4 *)PTR_DAT_100f20a4 = 0xd;
		puVar10 = _DAT_100f20bc;
		*puVar11 = 10;
		*(undefined4 *)PTR_DAT_100f2098 = *puVar10;
		iVar1 = *(int *)(puVar9 + 200);
		uVar22 = (ulonglong) * (uint *)puVar5 * 0x55ec;
		lVar13 = uVar19 + uVar22;
		uVar17 = SUB41(puVar9, 0);
		uVar20 = SUB41(puVar6, 0);
		if (*(int *)((int)lVar13 + 0x1c8) < iVar1 + (iVar1 >> 1)) {
			StartStore('\t', (char)lVar13, (char)iVar1, uVar17, uVar20, (char)uVar22, param_7, param_8,
			    in_stack_ffffffb8);
		} else {
			lVar13 = lVar13 + 0x53cc;
			lVar29 = 0x2e;
			lVar14 = uVar16 - 8;
			do {
				lVar14 = lVar14 + 8;
				uVar2 = ((undefined4 *)lVar14)[1];
				lVar13 = lVar13 + 8;
				*(undefined4 *)lVar13 = *(undefined4 *)lVar14;
				((undefined4 *)lVar13)[1] = uVar2;
				lVar29 = lVar29 + -1;
			} while (lVar29 != 0);
			lVar13 = uVar19 + uVar22;
			uVar3 = *(uint *)((int)lVar13 + 0x549c);
			uVar15 = (ulonglong)uVar3;
			*(int *)((int)lVar13 + 0x549c) = uVar3 + ((int)uVar3 >> 1);
			SetCursor_(*(int *)(puVar6 + (int)uVar22 + 0x5494) + 0xc, (char)uVar3, (char)lVar13, uVar17,
			    uVar20, (char)uVar22, param_7, param_8, in_stack_ffffffb8);
			uVar12 = 0;
			uVar28 = 0;
			while (true) {
				uVar23 = (undefined)uVar22;
				uVar21 = (undefined)uVar19;
				uVar18 = (undefined)uVar16;
				uVar20 = (undefined)lVar13;
				uVar17 = (undefined)uVar15;
				uVar25 = (undefined)lVar24;
				uVar27 = (undefined)lVar26;
				if ((0x27 < (int)uVar28) || ((int)uVar12 != 0))
					break;
				iVar1 = *(int *)puVar8;
				uVar19 = 0;
				uVar3 = iVar1 / 0x1c + (iVar1 >> 0x1f);
				uVar22 = (longlong)(int)((ulonglong)((longlong)iVar1 * -0x6db6db6d) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar3;
				uVar4 = *(int *)puVar7 / 0x1c + (*(int *)puVar7 >> 0x1f);
				lVar13 = uVar22 + (ulonglong)(uVar3 >> 0x1f);
				uVar16 = (ulonglong)uVar4 + (ulonglong)(uVar4 >> 0x1f);
				uVar15 = uVar28;
				uVar12 = AutoPlace(*(int *)puVar5, (int)uVar28, lVar13, (int)uVar16, 0, (char)uVar3, uVar25,
				    uVar27, in_stack_ffffffb8);
				uVar28 = uVar28 + 1;
			}
			if ((int)uVar12 == 0) {
				StartStore('\n', uVar17, uVar20, uVar18, uVar21, uVar23, uVar25, uVar27, in_stack_ffffffb8);
			} else {
				StartStore('\v', uVar17, uVar20, uVar18, uVar21, uVar23, uVar25, uVar27, in_stack_ffffffb8);
			}
			SetCursor_(1, uVar17, uVar20, uVar18, uVar21, uVar23, uVar25, uVar27, in_stack_ffffffb8);
		}
	} else {
		*PTR_DAT_100f186c = 0;
	}
	return;
}

void StoryIdItem(void)

{
	char cVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	ulonglong uVar5;
	undefined7 uVar6;
	undefined8 in_r6;
	undefined uVar7;
	undefined7 uVar8;
	undefined8 in_r7;
	undefined uVar9;
	undefined7 uVar10;
	undefined8 in_r8;
	undefined uVar11;
	undefined7 uVar12;
	undefined8 in_r9;
	undefined uVar13;
	undefined7 uVar14;
	undefined8 in_r10;
	undefined uVar15;
	undefined4 in_stack_ffffffb8;

	puVar4 = PTR_DAT_100f1828;
	puVar3 = PTR_DAT_100f1824;
	uVar15 = (undefined)in_r10;
	uVar14 = (undefined7)((ulonglong)in_r10 >> 8);
	uVar13 = (undefined)in_r9;
	uVar12 = (undefined7)((ulonglong)in_r9 >> 8);
	uVar11 = (undefined)in_r8;
	uVar10 = (undefined7)((ulonglong)in_r8 >> 8);
	uVar9 = (undefined)in_r7;
	uVar8 = (undefined7)((ulonglong)in_r7 >> 8);
	uVar7 = (undefined)in_r6;
	uVar6 = (undefined7)((ulonglong)in_r6 >> 8);
	cVar1 = PTR_DAT_100f20a8[*(int *)PTR_DAT_100f2098 + (*_DAT_100f20c4 - *_DAT_100f20b8 >> 2)];
	uVar5 = SEXT18(cVar1);
	if ((longlong)uVar5 < 0) {
		if (cVar1 == -1) {
			*(undefined4 *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x4d0) = 1;
		}
		if (cVar1 == -2) {
			*(undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0xd70) = 1;
		}
		if (cVar1 == -3) {
			*(undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0xa90) = 1;
		}
		if (cVar1 == -4) {
			*(undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0xc00) = 1;
		}
		if (cVar1 == -5) {
			*(undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0x640) = 1;
		}
		if (cVar1 == -6) {
			*(undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0x7b0) = 1;
		}
		if (cVar1 == -7) {
			*(undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0x920) = 1;
		}
	} else {
		*(undefined4 *)(PTR_DAT_100f1828 + (int)cVar1 * 0x170 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0xee0) = 1;
	}
	iVar2 = *(int *)puVar3;
	*(undefined4 *)(puVar4 + iVar2 * 0x55ec + 0x540c) = 1;
	TakePlrsMoney(*(int *)(puVar4 + iVar2 * 0x55ec + 0x549c), 1, cVar1, uVar7, uVar9, uVar11, uVar13, uVar15,
	    in_stack_ffffffb8);
	CalcPlrInv((ulonglong) * (uint *)puVar3, 1, uVar5, CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9),
	    CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15),
	    in_stack_ffffffb8);
	return;
}

void S_ConfirmEnter(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined4 *puVar2;
	int *piVar3;
	undefined **ppuVar4;
	undefined4 in_stack_ffffffc8;

	piVar3 = _DAT_100f20d0;
	ppuVar4 = &toc;
	if (*_DAT_100f20d0 == 0x12) {
		if (*(uint *)PTR_DAT_100f20a4 < 0x13) {
			// WARNING: Could not recover jumptable at 0x100ac500. Too many branches
			// WARNING: Treating indirect jump as call
			(**(code **)(PTR_PTR_LAB_100f37cc + *(uint *)PTR_DAT_100f20a4 * 4))();
			return;
		}
		StartStore((char)*(undefined4 *)PTR_DAT_100f20a4, param_2, param_3, param_4, param_5, param_6,
		    param_7, param_8, in_stack_ffffffc8);
	} else {
		StartStore((char)*(undefined4 *)PTR_DAT_100f20a4, param_2, param_3, param_4, param_5, param_6,
		    param_7, param_8, in_stack_ffffffc8);
		puVar1 = (undefined4 *)ppuVar4[-0x1bce];
		puVar2 = (undefined4 *)ppuVar4[-0x1bc5];
		*piVar3 = *(int *)ppuVar4[-0x1bc3];
		*puVar2 = *puVar1;
	}
	return;
}

void S_HealerEnter(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	if (*_DAT_100f20d0 - 0xcU < 7) {
		// WARNING: Could not recover jumptable at 0x100ac5ec. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(PTR_PTR_LAB_100f37c8 + (*_DAT_100f20d0 - 0xcU) * 4))(*(code **)(PTR_PTR_LAB_100f37c8 + (*_DAT_100f20d0 - 0xcU) * 4), param_2, param_3,
		    param_4, param_5, param_6, param_7, param_8);
		return;
	}
	return;
}

void S_HBuyEnter(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	uint uVar2;
	int iVar3;
	undefined4 uVar4;
	uint uVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	int *piVar10;
	uint *puVar11;
	int *piVar12;
	longlong lVar13;
	ulonglong uVar14;
	undefined uVar15;
	longlong lVar16;
	undefined uVar17;
	ulonglong uVar18;
	undefined uVar19;
	ulonglong uVar20;
	undefined uVar21;
	ulonglong uVar22;
	undefined uVar23;
	longlong lVar24;
	undefined uVar25;
	longlong lVar26;
	undefined uVar27;
	longlong lVar28;
	undefined4 in_stack_ffffffb8;

	piVar12 = _DAT_100f20d0;
	piVar10 = _DAT_100f20c4;
	puVar9 = PTR_DAT_100f1980;
	puVar8 = PTR_DAT_100f197c;
	puVar7 = PTR_DAT_100f1828;
	puVar6 = PTR_DAT_100f1824;
	lVar26 = (longlong)param_8;
	lVar24 = (longlong)param_7;
	uVar20 = (ulonglong)_DAT_100f1e10;
	uVar18 = ZEXT48(PTR_DAT_100f1828);
	iVar1 = *_DAT_100f20d0;
	uVar15 = SUB41(PTR_DAT_100f1828, 0);
	uVar17 = (undefined)_DAT_100f1e10;
	if (iVar1 == 0x16) {
		StartStore('\x0e', param_2, 0x16, uVar15, uVar17, param_6, param_7, param_8, in_stack_ffffffb8);
		*piVar12 = 0x10;
	} else {
		*(undefined4 *)PTR_DAT_100f20a4 = 0x10;
		puVar11 = _DAT_100f20bc;
		*piVar10 = iVar1;
		piVar10 = _DAT_100f20b8;
		uVar2 = *puVar11;
		*(uint *)PTR_DAT_100f2098 = uVar2;
		uVar22 = (ulonglong) * (uint *)puVar6 * 0x55ec;
		lVar16 = uVar18 + uVar22;
		iVar3 = *(int *)((int)lVar16 + 0x1c8);
		lVar13 = uVar20 + ((ulonglong)uVar2 + (ulonglong)(uint)(iVar1 - *piVar10 >> 2)) * 0x170;
		if (iVar3 < *(int *)((int)lVar13 + 200)) {
			StartStore('\t', (char)iVar3, (char)lVar16, uVar15, uVar17, (char)uVar22, param_7, param_8,
			    in_stack_ffffffb8);
		} else {
			lVar16 = lVar16 + 0x53cc;
			lVar28 = 0x2e;
			lVar13 = lVar13 + -8;
			do {
				lVar13 = lVar13 + 8;
				uVar4 = ((undefined4 *)lVar13)[1];
				lVar16 = lVar16 + 8;
				*(undefined4 *)lVar16 = *(undefined4 *)lVar13;
				((undefined4 *)lVar16)[1] = uVar4;
				lVar28 = lVar28 + -1;
			} while (lVar28 != 0);
			SetCursor_(*(int *)(puVar7 + (int)uVar22 + 0x5494) + 0xc, (char)lVar13, (char)lVar16, uVar15,
			    uVar17, (char)uVar22, param_7, param_8, in_stack_ffffffb8);
			uVar14 = 0;
			lVar28 = 0;
			while (true) {
				uVar23 = (undefined)uVar22;
				uVar21 = (undefined)uVar20;
				uVar19 = (undefined)uVar18;
				uVar17 = (undefined)lVar16;
				uVar15 = (undefined)lVar13;
				uVar25 = (undefined)lVar24;
				uVar27 = (undefined)lVar26;
				if ((0x27 < (int)lVar28) || ((int)uVar14 != 0))
					break;
				iVar1 = *(int *)puVar9;
				uVar20 = 0;
				uVar2 = iVar1 / 0x1c + (iVar1 >> 0x1f);
				uVar22 = (longlong)(int)((ulonglong)((longlong)iVar1 * -0x6db6db6d) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar2;
				uVar5 = *(int *)puVar8 / 0x1c + (*(int *)puVar8 >> 0x1f);
				lVar16 = uVar22 + (ulonglong)(uVar2 >> 0x1f);
				uVar18 = (ulonglong)uVar5 + (ulonglong)(uVar5 >> 0x1f);
				lVar13 = lVar28;
				uVar14 = SpecialAutoPlace(*(int *)puVar6, (int)lVar28, lVar16, (int)uVar18, 0, (char)uVar2, uVar25,
				    uVar27, in_stack_ffffffb8);
				lVar28 = lVar28 + 1;
			}
			if ((int)uVar14 == 0) {
				StartStore('\n', uVar15, uVar17, uVar19, uVar21, uVar23, uVar25, uVar27, in_stack_ffffffb8);
			} else {
				StartStore('\v', uVar15, uVar17, uVar19, uVar21, uVar23, uVar25, uVar27, in_stack_ffffffb8);
			}
			SetCursor_(1, uVar15, uVar17, uVar19, uVar21, uVar23, uVar25, uVar27, in_stack_ffffffb8);
		}
	}
	return;
}

void S_HBuyEnter(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined4 *puVar4;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_DAT_100f20a4;
	iVar1 = *_DAT_100f20d0;
	if (iVar1 == 0xe) {
		StartStore('\x11', param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	} else {
		if (iVar1 < 0xe) {
			if (iVar1 == 0xc) {
				*(undefined4 *)PTR_DAT_100f209c = 4;
				puVar4 = _DAT_100f20c4;
				*(undefined4 *)puVar2 = 0xf;
				puVar3 = PTR_DAT_100f2094;
				*puVar4 = 0xc;
				puVar2 = PTR_DAT_100f2090;
				*(undefined4 *)puVar3 = 0x97;
				*(undefined4 *)puVar2 = 0x9f;
				StartStore('\x13', (char)puVar2, (char)puVar3, 0x97, param_5, param_6, param_7, param_8,
				    in_stack_ffffffc8);
			}
		} else {
			if (iVar1 == 0x12) {
				*PTR_DAT_100f186c = 0;
			}
		}
	}
	return;
}

void S_SIDEnter(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	uint uVar2;
	undefined4 uVar3;
	undefined *puVar4;
	undefined *puVar5;
	int *piVar6;
	uint *puVar7;
	int *piVar8;
	longlong lVar9;
	undefined uVar10;
	longlong lVar11;
	ulonglong uVar12;
	undefined uVar13;
	ulonglong uVar14;
	undefined uVar15;
	longlong lVar16;
	longlong lVar17;
	longlong lVar18;
	undefined4 in_stack_ffffffb8;

	piVar8 = _DAT_100f20d0;
	piVar6 = _DAT_100f20c4;
	puVar5 = PTR_DAT_100f20ac;
	puVar4 = PTR_DAT_100f1828;
	uVar14 = ZEXT48(PTR_DAT_100f20ac);
	uVar12 = ZEXT48(PTR_DAT_100f1828);
	iVar1 = *_DAT_100f20d0;
	uVar13 = SUB41(PTR_DAT_100f1828, 0);
	uVar15 = SUB41(PTR_DAT_100f20ac, 0);
	if (iVar1 == 0x16) {
		StartStore('\x0f', param_2, param_3, uVar13, uVar15, 0x16, param_7, param_8, in_stack_ffffffb8);
		*piVar8 = 0xe;
	} else {
		*(undefined4 *)PTR_DAT_100f20a4 = 0x11;
		puVar7 = _DAT_100f20bc;
		lVar18 = 0x2e;
		*piVar6 = iVar1;
		piVar6 = _DAT_100f20b8;
		uVar2 = *puVar7;
		*(uint *)PTR_DAT_100f2098 = uVar2;
		lVar16 = ((ulonglong)uVar2 + (ulonglong)(uint)(iVar1 - *piVar6 >> 2)) * 0x170;
		lVar17 = (ulonglong) * (uint *)PTR_DAT_100f1824 * 0x55ec;
		lVar9 = uVar14 + lVar16 + -8;
		lVar11 = uVar12 + lVar17 + 0x53cc;
		do {
			lVar9 = lVar9 + 8;
			uVar3 = ((undefined4 *)lVar9)[1];
			lVar11 = lVar11 + 8;
			*(undefined4 *)lVar11 = *(undefined4 *)lVar9;
			((undefined4 *)lVar11)[1] = uVar3;
			lVar18 = lVar18 + -1;
		} while (lVar18 != 0);
		uVar10 = (undefined) * (int *)(puVar4 + (int)lVar17 + 0x1c8);
		if (*(int *)(puVar4 + (int)lVar17 + 0x1c8) < *(int *)(puVar5 + (int)lVar16 + 200)) {
			StartStore('\t', uVar10, (char)lVar11, uVar13, uVar15, (char)lVar16, (char)lVar17, param_8,
			    in_stack_ffffffb8);
		} else {
			StartStore('\v', uVar10, (char)lVar11, uVar13, uVar15, (char)lVar16, (char)lVar17, param_8,
			    in_stack_ffffffb8);
		}
	}
	return;
}

void S_TalkEnter(undefined8 uParm1, undefined param_2, undefined8 uParm3, undefined param_4,
    undefined param_5, undefined param_6, undefined4 uParm7, undefined4 uParm8)

{
	uint uVar1;
	uint uVar2;
	undefined *puVar3;
	undefined *puVar4;
	uint *puVar5;
	undefined **ppuVar6;
	undefined *puVar7;
	longlong lVar8;
	int *piVar9;
	ulonglong uVar10;
	ulonglong uVar11;
	longlong lVar12;
	longlong lVar13;
	int iVar14;
	longlong lVar15;
	undefined *puVar16;
	int iVar17;
	longlong lVar18;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	puVar5 = _DAT_100f20d0;
	puVar4 = PTR_DAT_100f209c;
	puVar16 = PTR_DAT_100f2094;
	puVar3 = PTR_DAT_100f206c;
	ppuVar6 = &toc;
	uVar1 = *_DAT_100f20d0;
	uVar10 = (ulonglong)uVar1;
	if (uVar1 == 0x16) {
		StartStore((char)*(undefined4 *)PTR_DAT_100f20a4, param_2, 0x16, param_4, param_5, param_6,
		    (char)uParm7, (char)uParm8, in_stack_ffffffa8);
		*puVar5 = *(uint *)ppuVar6[-0x1bc3];
	} else {
		uVar2 = *(uint *)PTR_DAT_100f209c;
		uVar11 = (ulonglong)uVar2;
		lVar18 = 4;
		lVar8 = ZEXT48(PTR_DAT_100f206c) + (ulonglong)(uVar2 << 6);
		lVar13 = 0;
		lVar12 = 0;
		puVar7 = PTR_DAT_100f19cc;
		do {
			piVar9 = (int *)lVar8;
			if (((puVar7[2] == '\x02') && (*piVar9 != -1)) && (*(int *)(puVar7 + 0x14) != 0)) {
				lVar13 = lVar13 + 1;
			}
			if (((puVar7[0x1a] == '\x02') && (piVar9[1] != -1)) && (*(int *)(puVar7 + 0x2c) != 0)) {
				lVar13 = lVar13 + 1;
			}
			if (((puVar7[0x32] == '\x02') && (piVar9[2] != -1)) && (*(int *)(puVar7 + 0x44) != 0)) {
				lVar13 = lVar13 + 1;
			}
			if (((puVar7[0x4a] == '\x02') && (piVar9[3] != -1)) && (*(int *)(puVar7 + 0x5c) != 0)) {
				lVar13 = lVar13 + 1;
			}
			iVar14 = (int)lVar13;
			puVar7 = puVar7 + 0x60;
			lVar8 = lVar8 + 0x10;
			lVar12 = lVar12 + 3;
			lVar18 = lVar18 + -1;
		} while (lVar18 != 0);
		if (iVar14 < 7) {
			lVar15 = 0xf - lVar13;
			lVar18 = 2;
		} else {
			lVar15 = 0xe - (ulonglong)(uint)(iVar14 >> 1);
			lVar18 = 1;
		}
		if (uVar1 == (int)lVar15 - 2U) {
			SetRndSeed(*(undefined4 *)(PTR_DAT_100f1878 + uVar2 * 0x10c + 0x8c));
			uVar1 = *(uint *)puVar16;
			uVar10 = (ulonglong)uVar1;
			lVar13 = ((ulonglong) * (uint *)ppuVar6[-0x1bd0] - uVar10) + 1;
			lVar8 = random(0, lVar13, (char)uVar1, (char)uVar11, (char)lVar12, (char)iVar14, (char)uParm7,
			    (char)uParm8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
			InitQTextMsg(*(int *)puVar16 + (int)lVar8, lVar13, uVar10, uVar11, lVar12, iVar14, uParm7, uParm8,
			    in_stack_ffffffa8);
		} else {
			iVar14 = 0;
			iVar17 = 0;
			puVar16 = PTR_DAT_100f19cc;
			do {
				if (((puVar16[2] == '\x02') && (*(int *)(puVar3 + *(int *)puVar4 * 0x40 + iVar17) != -1)) && (*(int *)(puVar16 + 0x14) != 0)) {
					if ((uint)lVar15 == *puVar5) {
						InitQTextMsg(*(int *)(puVar3 + *(int *)puVar4 * 0x40 + iVar17), lVar8, uVar10, uVar11,
						    lVar12, (int)lVar13, uParm7, uParm8, in_stack_ffffffa8);
					}
					lVar15 = lVar15 + lVar18;
				}
				iVar14 = iVar14 + 1;
				iVar17 = iVar17 + 4;
				puVar16 = puVar16 + 0x18;
			} while (iVar14 < 0x10);
		}
	}
	return;
}

void S_TavernEnter(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined4 *puVar4;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_DAT_100f20a4;
	iVar1 = *_DAT_100f20d0;
	if (iVar1 == 0x12) {
		*PTR_DAT_100f186c = 0;
	} else {
		if ((iVar1 < 0x12) && (iVar1 == 0xc)) {
			*(undefined4 *)PTR_DAT_100f209c = 3;
			puVar4 = _DAT_100f20c4;
			*(undefined4 *)puVar2 = 0x15;
			puVar3 = PTR_DAT_100f2094;
			*puVar4 = 0xc;
			puVar2 = PTR_DAT_100f2090;
			*(undefined4 *)puVar3 = 0xa1;
			*(undefined4 *)puVar2 = 0xa8;
			StartStore('\x13', (char)puVar2, (char)puVar3, 0xa1, param_5, param_6, param_7, param_8,
			    in_stack_ffffffc8);
		}
	}
	return;
}

void S_BarmaidEnter(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined4 *puVar4;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_DAT_100f20a4;
	iVar1 = *_DAT_100f20d0;
	if (iVar1 == 0x12) {
		*PTR_DAT_100f186c = 0;
	} else {
		if ((iVar1 < 0x12) && (iVar1 == 0xc)) {
			*(undefined4 *)PTR_DAT_100f209c = 7;
			puVar4 = _DAT_100f20c4;
			*(undefined4 *)puVar2 = 0x17;
			puVar3 = PTR_DAT_100f2094;
			*puVar4 = 0xc;
			puVar2 = PTR_DAT_100f2090;
			*(undefined4 *)puVar3 = 0xb4;
			*(undefined4 *)puVar2 = 0xbb;
			StartStore('\x13', (char)puVar2, (char)puVar3, 0xb4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffc8);
		}
	}
	return;
}

void S_DrunkEnter(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined4 *puVar4;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_DAT_100f20a4;
	iVar1 = *_DAT_100f20d0;
	if (iVar1 == 0x12) {
		*PTR_DAT_100f186c = 0;
	} else {
		if ((iVar1 < 0x12) && (iVar1 == 0xc)) {
			*(undefined4 *)PTR_DAT_100f209c = 5;
			puVar4 = _DAT_100f20c4;
			*(undefined4 *)puVar2 = 0x16;
			puVar3 = PTR_DAT_100f2094;
			*puVar4 = 0xc;
			puVar2 = PTR_DAT_100f2090;
			*(undefined4 *)puVar3 = 0xc9;
			*(undefined4 *)puVar2 = 0xd3;
			StartStore('\x13', (char)puVar2, (char)puVar3, 0xc9, param_5, param_6, param_7, param_8,
			    in_stack_ffffffc8);
		}
	}
	return;
}

void STextEnter(undefined8 param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	ulonglong uVar4;
	ulonglong uVar5;
	undefined7 uVar6;
	undefined uVar7;
	undefined7 uVar8;
	undefined uVar9;
	undefined7 uVar10;
	undefined uVar11;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_DAT_100f18a0;
	puVar1 = PTR_DAT_100f183c;
	uVar10 = (undefined7)((ulonglong)param_5 >> 8);
	uVar11 = (undefined)param_5;
	uVar8 = (undefined7)((ulonglong)param_4 >> 8);
	uVar9 = (undefined)param_4;
	uVar6 = (undefined7)(param_3 >> 8);
	uVar7 = (undefined)param_3;
	ppuVar3 = &toc;
	uVar5 = ZEXT48(PTR_DAT_100f18a0);
	if (*PTR_DAT_100f18a0 == '\0') {
		PlaySFX(0x46);
		if (((longlong)(char)*ppuVar3[-0x1dd9] & 0xffffffffU) < 0x18) {
			// WARNING: Could not recover jumptable at 0x100ace20. Too many branches
			// WARNING: Treating indirect jump as call
			(**(code **)(ppuVar3[-0x1603] + (int)(char)*ppuVar3[-0x1dd9] * 4))();
			return;
		}
	} else {
		uVar4 = ZEXT48(PTR_DAT_100f183c);
		*PTR_DAT_100f18a0 = 0;
		if (*puVar1 == '\0') {
			uVar4 = sfx_stop((char)puVar1, (char)puVar2, uVar7, uVar9, uVar11, (char)param_6, (char)param_7,
			    (char)param_8, in_stack_ffffffc8);
		}
		music_stop2(uVar4, uVar5, CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9), CONCAT71(uVar10, uVar11),
		    param_6, param_7, param_8, in_stack_ffffffc8);
	}
	return;
}

void CheckStoreBtn(void)

{
	char cVar1;
	int iVar2;
	uint uVar3;
	uint uVar4;
	undefined *puVar5;
	undefined *puVar6;
	char *pcVar7;
	char *pcVar8;
	ulonglong uVar9;
	longlong lVar10;
	ulonglong uVar11;
	undefined uVar12;
	ulonglong uVar13;
	undefined uVar14;
	ulonglong uVar15;
	undefined uVar16;
	ulonglong uVar17;
	undefined uVar18;
	undefined8 in_r8;
	undefined4 uVar19;
	undefined uVar20;
	undefined4 in_r9;
	undefined uVar21;
	undefined4 in_r10;
	undefined uVar22;
	longlong lVar23;
	int iVar24;
	undefined4 in_stack_ffffffb8;

	pcVar8 = _DAT_100f20cc;
	pcVar7 = _DAT_100f20c8;
	puVar6 = PTR_DAT_100f18a0;
	puVar5 = PTR_DAT_100f183c;
	uVar22 = (undefined)in_r10;
	uVar21 = (undefined)in_r9;
	uVar19 = (undefined4)in_r8;
	uVar11 = ZEXT48(PTR_DAT_100f18a0);
	uVar17 = ZEXT48(PTR_DAT_100f1928);
	uVar18 = SUB41(PTR_DAT_100f1928, 0);
	uVar15 = ZEXT48(_DAT_100f20d0);
	uVar16 = SUB41(_DAT_100f20d0, 0);
	uVar13 = (ulonglong)_DAT_100f20d4;
	uVar14 = (undefined)_DAT_100f20d4;
	if (*PTR_DAT_100f18a0 == '\0') {
		if (*_DAT_100f20d0 != -1) {
			iVar2 = *(int *)PTR_DAT_100f1924;
			uVar20 = (undefined)iVar2;
			if ((0x1f < iVar2) && (iVar2 < 0x141)) {
				if (*_DAT_100f20dc == '\0') {
					iVar24 = *(int *)PTR_DAT_100f1928;
					if (iVar24 < 0x158) {
						return;
					}
				} else {
					iVar24 = *(int *)PTR_DAT_100f1928;
					if (iVar24 < 0x18) {
						return;
					}
				}
				if (iVar24 < 0x269) {
					iVar24 = (iVar2 + -0x20) / 6 + (iVar2 + -0x20 >> 0x1f);
					uVar3 = *_DAT_100f20d8;
					uVar12 = (undefined)uVar3;
					uVar4 = iVar24 >> 1;
					lVar23 = ((longlong)iVar24 & 0xffffffff00000000U | (ulonglong)uVar4) + (ulonglong)(uVar4 >> 0x1f);
					iVar24 = (int)lVar23;
					if ((uVar3 == 0) || (*(int *)PTR_DAT_100f1928 < 0x259)) {
						if (4 < iVar24) {
							if (0x16 < iVar24) {
								lVar23 = 0x16;
							}
							if (((uVar3 != 0) && ((int)lVar23 < 0x15)) && (iVar24 = _DAT_100f20d4 + (int)lVar23 * 0x9c, *(int *)(iVar24 + 0x94) == 0)) {
								if (*(int *)(iVar24 + -0xa4) == 0) {
									if (*(int *)(iVar24 + -8) != 0) {
										lVar23 = lVar23 + -1;
									}
								} else {
									lVar23 = lVar23 + -2;
								}
							}
							lVar10 = uVar13 + lVar23 * 0x9c;
							if ((*(int *)((int)lVar10 + 0x94) != 0) || ((uVar3 != 0 && ((int)lVar23 == 0x16)))) {
								*_DAT_100f20d0 = (int)lVar23;
								STextEnter(lVar10, (ulonglong)uVar3, uVar13, uVar15, uVar17, iVar2, in_r9, in_r10,
								    in_stack_ffffffb8);
							}
						}
					} else {
						if (iVar24 == 4) {
							cVar1 = *_DAT_100f20cc;
							if (cVar1 < '\x01') {
								STextUp(cVar1, uVar12, uVar14, uVar16, uVar18, uVar20, uVar21, uVar22,
								    in_stack_ffffffb8);
								*pcVar8 = '\n';
							} else {
								*_DAT_100f20cc = cVar1 + -1;
							}
						}
						if (iVar24 == 0x14) {
							cVar1 = *pcVar7;
							if (cVar1 < '\x01') {
								STextDown(cVar1, uVar12, uVar14, uVar16, uVar18, uVar20, uVar21, uVar22,
								    in_stack_ffffffb8);
								*pcVar7 = '\n';
							} else {
								*pcVar7 = cVar1 + -1;
							}
						}
					}
				}
			}
		}
	} else {
		uVar9 = ZEXT48(PTR_DAT_100f183c);
		*PTR_DAT_100f18a0 = 0;
		if (*puVar5 == '\0') {
			uVar9 = sfx_stop((char)puVar5, (char)puVar6, uVar14, uVar16, uVar18, (char)in_r8, uVar21, uVar22,
			    in_stack_ffffffb8);
		}
		music_stop2(uVar9, uVar11, uVar13, uVar15, uVar17, uVar19, in_r9, in_r10, in_stack_ffffffb8);
	}
	return;
}

void ReleaseStoreBtn(void)

{
	undefined *puVar1;

	puVar1 = _DAT_100f20c8;
	*_DAT_100f20cc = 0xff;
	*puVar1 = 0xff;
	return;
}
