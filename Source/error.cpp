
void InitDiabloMsg(char e)

{
	bool bVar1;
	longlong lVar2;
	char *pcVar3;

	pcVar3 = &DAT_1012ed61;
	lVar2 = (longlong)DAT_1012ed60;
	if (0 < lVar2) {
		do {
			if (*pcVar3 == e) {
				return;
			}
			pcVar3 = pcVar3 + 1;
			lVar2 = lVar2 + -1;
		} while (lVar2 != 0);
	}
	bVar1 = DAT_1012ed60 < 'P';
	(&DAT_1012ed61)[(int)DAT_1012ed60] = e;
	if (bVar1) {
		DAT_1012ed60 = DAT_1012ed60 + '\x01';
	}
	DAT_1012edb1 = 0x46;
	DAT_1012edb2 = DAT_1012ed61;
	return;
}

void ClrDiabloMsg(void)

{
	DAT_1012ed60 = 0;
	DAT_1012ed61 = 0;
	uRam1012ed62 = 0;
	uRam1012ed63 = 0;
	uRam1012ed64 = 0;
	uRam1012ed65 = 0;
	uRam1012ed66 = 0;
	uRam1012ed67 = 0;
	uRam1012ed68 = 0;
	uRam1012ed69 = 0;
	uRam1012ed6a = 0;
	uRam1012ed6b = 0;
	uRam1012ed6c = 0;
	uRam1012ed6d = 0;
	uRam1012ed6e = 0;
	uRam1012ed6f = 0;
	uRam1012ed70 = 0;
	uRam1012ed71 = 0;
	uRam1012ed72 = 0;
	uRam1012ed73 = 0;
	uRam1012ed74 = 0;
	uRam1012ed75 = 0;
	uRam1012ed76 = 0;
	uRam1012ed77 = 0;
	uRam1012ed78 = 0;
	uRam1012ed79 = 0;
	uRam1012ed7a = 0;
	uRam1012ed7b = 0;
	uRam1012ed7c = 0;
	uRam1012ed7d = 0;
	uRam1012ed7e = 0;
	uRam1012ed7f = 0;
	uRam1012ed80 = 0;
	uRam1012ed81 = 0;
	uRam1012ed82 = 0;
	uRam1012ed83 = 0;
	uRam1012ed84 = 0;
	uRam1012ed85 = 0;
	uRam1012ed86 = 0;
	uRam1012ed87 = 0;
	uRam1012ed88 = 0;
	uRam1012ed89 = 0;
	uRam1012ed8a = 0;
	uRam1012ed8b = 0;
	uRam1012ed8c = 0;
	uRam1012ed8d = 0;
	uRam1012ed8e = 0;
	uRam1012ed8f = 0;
	uRam1012ed90 = 0;
	uRam1012ed91 = 0;
	uRam1012ed92 = 0;
	uRam1012ed93 = 0;
	uRam1012ed94 = 0;
	uRam1012ed95 = 0;
	uRam1012ed96 = 0;
	uRam1012ed97 = 0;
	uRam1012ed98 = 0;
	uRam1012ed99 = 0;
	uRam1012ed9a = 0;
	uRam1012ed9b = 0;
	uRam1012ed9c = 0;
	uRam1012ed9d = 0;
	uRam1012ed9e = 0;
	uRam1012ed9f = 0;
	uRam1012eda0 = 0;
	uRam1012eda1 = 0;
	uRam1012eda2 = 0;
	uRam1012eda3 = 0;
	uRam1012eda4 = 0;
	uRam1012eda5 = 0;
	uRam1012eda6 = 0;
	uRam1012eda7 = 0;
	uRam1012eda8 = 0;
	uRam1012eda9 = 0;
	uRam1012edaa = 0;
	uRam1012edab = 0;
	uRam1012edac = 0;
	uRam1012edad = 0;
	uRam1012edae = 0;
	uRam1012edaf = 0;
	uRam1012edb0 = 0;
	DAT_1012edb2 = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void DrawDiabloMsg(void)

{
	byte bVar1;
	byte *pbVar2;
	byte *pbVar3;
	byte *pbVar4;
	byte *pbVar5;
	byte *pbVar6;
	byte *pbVar7;
	byte *pbVar8;
	ulonglong uVar9;
	longlong lVar10;
	undefined8 uVar11;
	longlong lVar12;
	size_t sVar14;
	byte *pbVar15;
	longlong lVar13;
	undefined *puVar16;
	undefined *puVar17;
	longlong lVar18;
	int sy;
	int sx;
	longlong lVar19;
	byte *pbVar20;

	uVar11 = 0x100f8fd0;
	pbVar20 = &DAT_101282d4;
	CelDecodeOnly(0xa5, 0x13e, _DAT_101ab4b0, 1, 0xc);
	CelDecodeOnly(0x24f, 0x13e, _DAT_101ab4b0, 4, 0xc);
	CelDecodeOnly(0xa5, 0x16e, _DAT_101ab4b0, 2, 0xc);
	CelDecodeOnly(0x24f, 0x16e, _DAT_101ab4b0, 3, 0xc);
	sx = 0xad;
	sy = 0;
	do {
		CelDecodeOnly(sx, 0x13e, _DAT_101ab4b0, 5, 0xc);
		CelDecodeOnly(sx, 0x16e, _DAT_101ab4b0, 7, 0xc);
		sy = sy + 1;
		sx = sx + 0xc;
	} while (sy < 0x23);
	sy = 0x14a;
	sx = 0;
	do {
		CelDecodeOnly(0xa5, sy, _DAT_101ab4b0, 6, 0xc);
		CelDecodeOnly(0x24f, sy, _DAT_101ab4b0, 8, 0xc);
		sx = sx + 1;
		sy = sy + 0xc;
	} while (sx < 3);
	lVar18 = 0x1b;
	puVar17 = (undefined *)(**(int **)((int)uVar11 + -0x7804) + 0x441a8);
	do {
		lVar12 = 0xd8;
		do {
			puVar16 = puVar17;
			lVar12 = lVar12 + -1;
			*puVar16 = 0;
			puVar17 = puVar16 + 2;
		} while (lVar12 != 0);
		lVar12 = 0xd8;
		puVar16 = puVar16 + -0x4ae;
		do {
			puVar17 = puVar16;
			lVar12 = lVar12 + -1;
			puVar17[1] = 0;
			puVar16 = puVar17 + 2;
		} while (lVar12 != 0);
		lVar18 = lVar18 + -1;
		puVar17 = puVar17 + -0x4ae;
	} while (lVar18 != 0);
	strcpy(&DAT_101282d4, *(char **)((int)uVar11 + 0x26c0 + (int)DAT_1012edb2 * 4));
	lVar19 = (ulonglong) * (uint *)(*(int *)((int)uVar11 + -0x7698) + 0x558) + 0xa5;
	sVar14 = strlen(&DAT_101282d4);
	lVar12 = 0;
	sy = 0;
	lVar18 = 0;
	if (0 < (longlong)(int)sVar14) {
		if ((8 < (int)sVar14) && (uVar9 = (ulonglong)(sVar14 - 1 >> 3), pbVar15 = pbVar20, 0 < (int)(sVar14 - 8))) {
			do {
				bVar1 = *pbVar15;
				lVar18 = lVar18 + 8;
				pbVar2 = pbVar15 + 1;
				pbVar3 = pbVar15 + 2;
				pbVar4 = pbVar15 + 3;
				pbVar5 = pbVar15 + 4;
				pbVar6 = pbVar15 + 5;
				pbVar7 = pbVar15 + 6;
				pbVar8 = pbVar15 + 7;
				pbVar15 = pbVar15 + 8;
				lVar12 = (ulonglong)(byte)(
				             &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar8]]]
				    + (ulonglong)(byte)(
				          &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar7]]]
				    + (ulonglong)(byte)(
				          &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar6]]]
				    + (ulonglong)(byte)(
				          &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar5]]]
				    + (ulonglong)(byte)(
				          &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar4]]]
				    + (ulonglong)(byte)(
				          &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar3]]]
				    + (ulonglong)(byte)(
				          &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar2]]]
				    + (ulonglong)(byte)(
				          &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]]]
				    + lVar12 + 8;
				uVar9 = uVar9 - 1;
			} while (uVar9 != 0);
		}
		sy = (int)lVar12;
		lVar13 = ZEXT48(&DAT_101282d4) + lVar18;
		lVar10 = (longlong)(int)sVar14 - lVar18;
		if ((int)lVar18 < (int)sVar14) {
			do {
				pbVar15 = (byte *)lVar13;
				lVar13 = lVar13 + 1;
				lVar12 = (ulonglong)(byte)(
				             &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar15]]]
				    + lVar12 + 1;
				sy = (int)lVar12;
				lVar10 = lVar10 + -1;
			} while (lVar10 != 0);
		}
	}
	if (sy < 0x1ba) {
		lVar19 = lVar19 + (ulonglong)(uint)(0x1ba - sy >> 1);
	}
	sy = 0;
	while (sy < (int)sVar14) {
		bVar1 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar20]];
		if (bVar1 != 0) {
			CPrintString((int)lVar19, (uint)bVar1, '\x03');
		}
		pbVar20 = pbVar20 + 1;
		sy = sy + 1;
		lVar19 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + lVar19 + 1;
	}
	if ('\0' < DAT_1012edb1) {
		DAT_1012edb1 = DAT_1012edb1 + -1;
	}
	if (DAT_1012edb1 == '\0') {
		DAT_1012ed60 = DAT_1012ed60 + -1;
		DAT_1012edb1 = 'F';
		if (DAT_1012ed60 == '\0') {
			DAT_1012edb2 = '\0';
		} else {
			DAT_1012edb2 = *(char *)(*(int *)((int)uVar11 + -0x7280) + (int)DAT_1012ed60);
		}
	}
	return;
}
