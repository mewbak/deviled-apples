
void InitDiabloMsg(char param_1)

{
	char cVar1;
	undefined *puVar2;
	char *pcVar3;
	char *pcVar4;
	longlong lVar5;
	char *pcVar6;

	pcVar4 = _DAT_100f1d50;
	pcVar3 = _DAT_100f1d4c;
	cVar1 = *_DAT_100f1d4c;
	lVar5 = (longlong)cVar1;
	pcVar6 = _DAT_100f1d50;
	if (0 < lVar5) {
		do {
			if (*pcVar6 == param_1) {
				return;
			}
			pcVar6 = pcVar6 + 1;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
	}
	_DAT_100f1d50[(int)cVar1] = param_1;
	if (cVar1 < 'P') {
		*pcVar3 = *pcVar3 + '\x01';
	}
	puVar2 = PTR_DAT_100f19f4;
	*PTR_DAT_100f19f8 = *pcVar4;
	*puVar2 = 0x46;
	return;
}

void ClrDiabloMsg(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;

	puVar3 = _DAT_100f1d50;
	puVar1 = PTR_DAT_100f19f8;
	*_DAT_100f1d50 = 0;
	puVar2 = _DAT_100f1d4c;
	puVar3[1] = 0;
	puVar3[2] = 0;
	puVar3[3] = 0;
	puVar3[4] = 0;
	puVar3[5] = 0;
	puVar3[6] = 0;
	puVar3[7] = 0;
	puVar3[8] = 0;
	puVar3[9] = 0;
	puVar3[10] = 0;
	puVar3[0xb] = 0;
	puVar3[0xc] = 0;
	puVar3[0xd] = 0;
	puVar3[0xe] = 0;
	puVar3[0xf] = 0;
	puVar3[0x10] = 0;
	puVar3[0x11] = 0;
	puVar3[0x12] = 0;
	puVar3[0x13] = 0;
	puVar3[0x14] = 0;
	puVar3[0x15] = 0;
	puVar3[0x16] = 0;
	puVar3[0x17] = 0;
	puVar3[0x18] = 0;
	puVar3[0x19] = 0;
	puVar3[0x1a] = 0;
	puVar3[0x1b] = 0;
	puVar3[0x1c] = 0;
	puVar3[0x1d] = 0;
	puVar3[0x1e] = 0;
	puVar3[0x1f] = 0;
	puVar3[0x20] = 0;
	puVar3[0x21] = 0;
	puVar3[0x22] = 0;
	puVar3[0x23] = 0;
	puVar3[0x24] = 0;
	puVar3[0x25] = 0;
	puVar3[0x26] = 0;
	puVar3[0x27] = 0;
	puVar3[0x28] = 0;
	puVar3[0x29] = 0;
	puVar3[0x2a] = 0;
	puVar3[0x2b] = 0;
	puVar3[0x2c] = 0;
	puVar3[0x2d] = 0;
	puVar3[0x2e] = 0;
	puVar3[0x2f] = 0;
	puVar3[0x30] = 0;
	puVar3[0x31] = 0;
	puVar3[0x32] = 0;
	puVar3[0x33] = 0;
	puVar3[0x34] = 0;
	puVar3[0x35] = 0;
	puVar3[0x36] = 0;
	puVar3[0x37] = 0;
	puVar3[0x38] = 0;
	puVar3[0x39] = 0;
	puVar3[0x3a] = 0;
	puVar3[0x3b] = 0;
	puVar3[0x3c] = 0;
	puVar3[0x3d] = 0;
	puVar3[0x3e] = 0;
	puVar3[0x3f] = 0;
	puVar3[0x40] = 0;
	puVar3[0x41] = 0;
	puVar3[0x42] = 0;
	puVar3[0x43] = 0;
	puVar3[0x44] = 0;
	puVar3[0x45] = 0;
	puVar3[0x46] = 0;
	puVar3[0x47] = 0;
	puVar3[0x48] = 0;
	puVar3[0x49] = 0;
	puVar3[0x4a] = 0;
	puVar3[0x4b] = 0;
	puVar3[0x4c] = 0;
	puVar3[0x4d] = 0;
	puVar3[0x4e] = 0;
	puVar3[0x4f] = 0;
	*puVar1 = 0;
	*puVar2 = 0;
	return;
}

void DrawDiabloMsg(void)

{
	byte bVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	uint *puVar5;
	char *pcVar6;
	ulonglong uVar7;
	longlong lVar8;
	ulonglong uVar9;
	longlong lVar10;
	int iVar13;
	byte *pbVar14;
	ulonglong uVar11;
	longlong lVar12;
	undefined *puVar15;
	undefined *puVar16;
	ulonglong uVar17;
	ulonglong uVar18;
	ulonglong in_r8;
	ulonglong in_r9;
	undefined4 in_r10;
	longlong lVar19;
	int iVar20;
	longlong lVar21;
	ulonglong uVar22;
	undefined4 in_stack_ffffff98;

	pcVar6 = _DAT_100f1d4c;
	puVar5 = _DAT_100f1d48;
	puVar4 = PTR_DAT_100f19f8;
	puVar3 = PTR_DAT_100f19f4;
	puVar2 = PTR_DAT_100f191c;
	uVar9 = ZEXT48(&toc);
	uVar22 = ZEXT48(PTR_DAT_100f191c);
	CelDecodeOnly(0xa5, 0x13e, (ulonglong)*_DAT_100f1d48, 1, 0xc, (int)in_r8, (int)in_r9, in_r10,
	    in_stack_ffffff98);
	CelDecodeOnly(0x24f, 0x13e, (ulonglong)*puVar5, 4, 0xc, (int)in_r8, (int)in_r9, in_r10, in_stack_ffffff98);
	CelDecodeOnly(0xa5, 0x16e, (ulonglong)*puVar5, 2, 0xc, (int)in_r8, (int)in_r9, in_r10, in_stack_ffffff98);
	CelDecodeOnly(0x24f, 0x16e, (ulonglong)*puVar5, 3, 0xc, (int)in_r8, (int)in_r9, in_r10, in_stack_ffffff98);
	iVar20 = 0xad;
	iVar13 = 0;
	do {
		CelDecodeOnly(iVar20, 0x13e, (ulonglong)*puVar5, 5, 0xc, (int)in_r8, (int)in_r9, in_r10,
		    in_stack_ffffff98);
		CelDecodeOnly(iVar20, 0x16e, (ulonglong)*puVar5, 7, 0xc, (int)in_r8, (int)in_r9, in_r10,
		    in_stack_ffffff98);
		iVar13 = iVar13 + 1;
		iVar20 = iVar20 + 0xc;
	} while (iVar13 < 0x23);
	lVar19 = 0x14a;
	iVar13 = 0;
	do {
		CelDecodeOnly(0xa5, lVar19, (ulonglong)*puVar5, 6, 0xc, (int)in_r8, (int)in_r9, in_r10, in_stack_ffffff98);
		uVar17 = 8;
		uVar18 = 0xc;
		CelDecodeOnly(0x24f, lVar19, (ulonglong)*puVar5, 8, 0xc, (int)in_r8, (int)in_r9, in_r10,
		    in_stack_ffffff98);
		iVar13 = iVar13 + 1;
		lVar19 = lVar19 + 0xc;
	} while (iVar13 < 3);
	lVar19 = 0x1b;
	puVar16 = (undefined *)(**(int **)((int)uVar9 + -0x7804) + 0x441a8);
	do {
		lVar10 = 0xd8;
		do {
			puVar15 = puVar16;
			lVar10 = lVar10 + -1;
			*puVar15 = 0;
			puVar16 = puVar15 + 2;
		} while (lVar10 != 0);
		lVar10 = 0xd8;
		puVar15 = puVar15 + -0x4ae;
		do {
			puVar16 = puVar15;
			lVar10 = lVar10 + -1;
			puVar16[1] = 0;
			puVar15 = puVar16 + 2;
		} while (lVar10 != 0);
		lVar19 = lVar19 + -1;
		puVar16 = puVar16 + -0x4ae;
	} while (lVar19 != 0);
	strcpy((int)puVar2, *(int *)((int)uVar9 + 0x26c0 + (int)(char)*puVar4 * 4));
	lVar21 = (ulonglong) * (uint *)(*(int *)((int)uVar9 + -0x7698) + 0x558) + 0xa5;
	iVar13 = strlen((uint)puVar2);
	lVar10 = 0;
	lVar19 = 0;
	if (0 < (longlong)iVar13) {
		if ((8 < iVar13) && (uVar7 = (ulonglong)(iVar13 - 1U >> 3), uVar11 = uVar22, 0 < iVar13 + -8)) {
			do {
				pbVar14 = (byte *)uVar11;
				lVar19 = lVar19 + 8;
				in_r9 = (ulonglong)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar14[5]]];
				in_r8 = (ulonglong)(byte)(&DAT_100f64e8)[(uint)pbVar14[6]];
				uVar11 = uVar11 + 8;
				uVar18 = (ulonglong)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar14[6]]];
				uVar17 = (ulonglong)(byte)(&DAT_100f6230)
				    [(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar14[6]]]];
				lVar10 = (ulonglong)(byte)(&DAT_100f6230)
				             [(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar14[7]]]]
				    + uVar17 + (ulonglong)(byte)(&DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar14[5]]]] + (ulonglong)(byte)(&DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar14[4]]]] + (ulonglong)(byte)(&DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar14[3]]]] + (ulonglong)(byte)(&DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar14[2]]]] + (ulonglong)(byte)(&DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar14[1]]]] + (ulonglong)(byte)(&DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar14]]] + lVar10 + 8;
				uVar7 = uVar7 - 1;
			} while (uVar7 != 0);
		}
		lVar12 = uVar22 + lVar19;
		lVar8 = (longlong)iVar13 - lVar19;
		if ((int)lVar19 < iVar13) {
			do {
				pbVar14 = (byte *)lVar12;
				lVar12 = lVar12 + 1;
				lVar10 = (ulonglong)(byte)(&DAT_100f6230)
				             [(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar14]]]
				    + lVar10 + 1;
				lVar8 = lVar8 + -1;
			} while (lVar8 != 0);
		}
	}
	if ((int)lVar10 < 0x1ba) {
		lVar21 = lVar21 + (0x1baU - lVar10 & 0xffffffff00000000 | (ulonglong)(uint)((int)(0x1baU - lVar10) >> 1));
	}
	iVar20 = 0;
	while (iVar20 < iVar13) {
		bVar1 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint) * (byte *)uVar22]];
		if (bVar1 != 0) {
			CPrintString(lVar21, (ulonglong)bVar1, 3, uVar17, uVar18, (int)in_r8, (int)in_r9, in_r10,
			    in_stack_ffffff98);
		}
		uVar22 = uVar22 + 1;
		iVar20 = iVar20 + 1;
		lVar21 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + lVar21 + 1;
	}
	if ('\0' < (char)*puVar3) {
		*puVar3 = *puVar3 + -1;
	}
	if (*puVar3 == '\0') {
		*pcVar6 = *pcVar6 + -1;
		*puVar3 = 0x46;
		if (*pcVar6 == '\0') {
			*puVar4 = 0;
		} else {
			*puVar4 = *(undefined *)(*(int *)((int)uVar9 + -0x7280) + (int)*pcVar6);
		}
	}
	return;
}
