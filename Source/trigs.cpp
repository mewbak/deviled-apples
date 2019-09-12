
void InitNoTriggers(void)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f1890;
	*(undefined4 *)PTR_DAT_100f1ed8 = 0;
	*(undefined4 *)puVar1 = 0;
	return;
}

void InitTownTriggers(void)

{
	byte bVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;

	puVar6 = PTR_DAT_100f1edc;
	puVar4 = PTR_DAT_100f1ed8;
	*(undefined4 *)PTR_DAT_100f1edc = 0x19;
	puVar7 = PTR_DAT_100f17e0;
	*(undefined4 *)(puVar6 + 4) = 0x1d;
	puVar5 = PTR_DAT_100f2124;
	*(undefined4 *)(puVar6 + 8) = 0x402;
	*(undefined4 *)puVar4 = 1;
	puVar3 = PTR_DAT_100f1824;
	if (*puVar7 == '\x04') {
		*(undefined4 *)puVar5 = 1;
		*(undefined4 *)(puVar5 + 4) = 1;
		*(undefined4 *)(puVar5 + 8) = 1;
		*(undefined4 *)(puVar6 + 0x10) = 0x31;
		*(undefined4 *)(puVar6 + 0x14) = 0x15;
		*(undefined4 *)(puVar6 + 0x18) = 0x407;
		*(undefined4 *)(puVar6 + 0x1c) = 5;
		*(int *)puVar4 = *(int *)puVar4 + 1;
		*(undefined4 *)(puVar6 + 0x20) = 0x11;
		*(undefined4 *)(puVar6 + 0x24) = 0x45;
		*(undefined4 *)(puVar6 + 0x28) = 0x407;
		*(undefined4 *)(puVar6 + 0x2c) = 9;
		*(int *)puVar4 = *(int *)puVar4 + 1;
		*(undefined4 *)(puVar6 + 0x30) = 0x29;
		*(undefined4 *)(puVar6 + 0x34) = 0x50;
		*(undefined4 *)(puVar6 + 0x38) = 0x407;
		*(undefined4 *)(puVar6 + 0x3c) = 0xd;
		*(int *)puVar4 = *(int *)puVar4 + 1;
	} else {
		*(undefined4 *)puVar5 = 0;
		puVar7 = PTR_DAT_100f1828;
		*(undefined4 *)(puVar5 + 4) = 0;
		*(undefined4 *)(puVar5 + 8) = 0;
		bVar1 = puVar7[*(int *)puVar3 * 0x55ec + 0x5590];
		if ((bVar1 & 1) != 0) {
			*(undefined4 *)(puVar6 + 0x10) = 0x31;
			*(undefined4 *)(puVar6 + 0x14) = 0x15;
			*(undefined4 *)(puVar6 + 0x18) = 0x407;
			*(undefined4 *)(puVar6 + 0x1c) = 5;
			*(int *)puVar4 = *(int *)puVar4 + 1;
			*(undefined4 *)puVar5 = 1;
		}
		if ((bVar1 & 2) != 0) {
			iVar2 = *(int *)puVar4;
			*(undefined4 *)(puVar6 + iVar2 * 0x10) = 0x11;
			puVar7 = puVar6 + iVar2 * 0x10;
			*(undefined4 *)(puVar7 + 4) = 0x45;
			*(undefined4 *)(puVar7 + 8) = 0x407;
			*(undefined4 *)(puVar7 + 0xc) = 9;
			*(int *)puVar4 = *(int *)puVar4 + 1;
			*(undefined4 *)(puVar5 + 4) = 1;
		}
		if ((bVar1 & 4) != 0) {
			iVar2 = *(int *)puVar4;
			*(undefined4 *)(puVar6 + iVar2 * 0x10) = 0x29;
			puVar6 = puVar6 + iVar2 * 0x10;
			*(undefined4 *)(puVar6 + 4) = 0x50;
			*(undefined4 *)(puVar6 + 8) = 0x407;
			*(undefined4 *)(puVar6 + 0xc) = 0xd;
			*(int *)puVar4 = *(int *)puVar4 + 1;
			*(undefined4 *)(puVar5 + 8) = 1;
		}
	}
	*(undefined4 *)PTR_DAT_100f1890 = 0;
	return;
}

void InitL1Triggers(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	int *piVar4;
	short *psVar5;
	short *psVar6;
	int iVar7;
	int iVar8;
	longlong lVar9;

	puVar2 = PTR_DAT_100f1ed8;
	puVar1 = PTR_DAT_100f1a54;
	iVar8 = 0;
	*(undefined4 *)PTR_DAT_100f1ed8 = 0;
	puVar3 = PTR_DAT_100f1edc;
	psVar6 = *(short **)puVar1;
	do {
		lVar9 = 0x38;
		iVar7 = 0;
		psVar5 = psVar6;
		do {
			if (*psVar5 == 0x81) {
				piVar4 = (int *)(puVar3 + *(int *)puVar2 * 0x10);
				*piVar4 = iVar7;
				piVar4[1] = iVar8;
				piVar4[2] = 0x403;
				*(int *)puVar2 = *(int *)puVar2 + 1;
			}
			if (*psVar5 == 0x73) {
				piVar4 = (int *)(puVar3 + *(int *)puVar2 * 0x10);
				*piVar4 = iVar7;
				piVar4[1] = iVar8;
				piVar4[2] = 0x402;
				*(int *)puVar2 = *(int *)puVar2 + 1;
			}
			if (psVar5[0x70] == 0x81) {
				piVar4 = (int *)(puVar3 + *(int *)puVar2 * 0x10);
				*piVar4 = iVar7 + 1;
				piVar4[1] = iVar8;
				piVar4[2] = 0x403;
				*(int *)puVar2 = *(int *)puVar2 + 1;
			}
			if (psVar5[0x70] == 0x73) {
				piVar4 = (int *)(puVar3 + *(int *)puVar2 * 0x10);
				*piVar4 = iVar7 + 1;
				piVar4[1] = iVar8;
				piVar4[2] = 0x402;
				*(int *)puVar2 = *(int *)puVar2 + 1;
			}
			psVar5 = psVar5 + 0xe0;
			iVar7 = iVar7 + 2;
			lVar9 = lVar9 + -1;
		} while (lVar9 != 0);
		iVar8 = iVar8 + 1;
		psVar6 = psVar6 + 1;
	} while (iVar8 < 0x70);
	*(undefined4 *)PTR_DAT_100f1890 = 0;
	return;
}

void InitL2Triggers(void)

{
	short *psVar1;
	int iVar2;
	int iVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int *piVar10;
	short *psVar11;
	short *psVar12;
	longlong lVar13;

	puVar5 = PTR_DAT_100f1ed8;
	puVar4 = PTR_DAT_100f19cc;
	iVar9 = 0;
	*(undefined4 *)PTR_DAT_100f1ed8 = 0;
	puVar6 = PTR_DAT_100f1edc;
	psVar12 = *(short **)PTR_DAT_100f1a54;
	iVar2 = *(int *)(puVar4 + 0x154);
	iVar3 = *(int *)(puVar4 + 0x158);
	do {
		lVar13 = 0x38;
		iVar7 = 0;
		psVar11 = psVar12;
		do {
			if ((*psVar11 == 0x10b) && ((iVar7 != iVar2 || (iVar9 != iVar3)))) {
				piVar10 = (int *)(puVar6 + *(int *)puVar5 * 0x10);
				*piVar10 = iVar7;
				piVar10[1] = iVar9;
				piVar10[2] = 0x403;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			if (*psVar11 == 0x22f) {
				piVar10 = (int *)(puVar6 + *(int *)puVar5 * 0x10);
				*piVar10 = iVar7;
				piVar10[1] = iVar9;
				piVar10[2] = 0x408;
				piVar10[3] = 0;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			if (*psVar11 == 0x10f) {
				piVar10 = (int *)(puVar6 + *(int *)puVar5 * 0x10);
				*piVar10 = iVar7;
				piVar10[1] = iVar9;
				piVar10[2] = 0x402;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			psVar1 = psVar11 + 0x70;
			iVar8 = iVar7 + 1;
			if ((*psVar1 == 0x10b) && ((iVar8 != iVar2 || (iVar9 != iVar3)))) {
				piVar10 = (int *)(puVar6 + *(int *)puVar5 * 0x10);
				*piVar10 = iVar8;
				piVar10[1] = iVar9;
				piVar10[2] = 0x403;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			if (*psVar1 == 0x22f) {
				piVar10 = (int *)(puVar6 + *(int *)puVar5 * 0x10);
				*piVar10 = iVar8;
				piVar10[1] = iVar9;
				piVar10[2] = 0x408;
				piVar10[3] = 0;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			if (*psVar1 == 0x10f) {
				piVar10 = (int *)(puVar6 + *(int *)puVar5 * 0x10);
				*piVar10 = iVar8;
				piVar10[1] = iVar9;
				piVar10[2] = 0x402;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			psVar11 = psVar11 + 0xe0;
			iVar7 = iVar7 + 2;
			lVar13 = lVar13 + -1;
		} while (lVar13 != 0);
		iVar9 = iVar9 + 1;
		psVar12 = psVar12 + 1;
	} while (iVar9 < 0x70);
	*(undefined4 *)PTR_DAT_100f1890 = 0;
	return;
}

void InitL3Triggers(void)

{
	short *psVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	int iVar5;
	int *piVar6;
	short *psVar7;
	short *psVar8;
	int iVar9;
	int iVar10;
	longlong lVar11;

	puVar3 = PTR_DAT_100f1ed8;
	puVar2 = PTR_DAT_100f1a54;
	iVar5 = 0;
	*(undefined4 *)PTR_DAT_100f1ed8 = 0;
	puVar4 = PTR_DAT_100f1edc;
	psVar8 = *(short **)puVar2;
	do {
		lVar11 = 0x38;
		iVar9 = 0;
		psVar7 = psVar8;
		do {
			if (*psVar7 == 0xab) {
				piVar6 = (int *)(puVar4 + *(int *)puVar3 * 0x10);
				*piVar6 = iVar9;
				piVar6[1] = iVar5;
				piVar6[2] = 0x403;
				*(int *)puVar3 = *(int *)puVar3 + 1;
			}
			if (*psVar7 == 0xa8) {
				piVar6 = (int *)(puVar4 + *(int *)puVar3 * 0x10);
				*piVar6 = iVar9;
				piVar6[1] = iVar5;
				piVar6[2] = 0x402;
				*(int *)puVar3 = *(int *)puVar3 + 1;
			}
			if (*psVar7 == 0x225) {
				piVar6 = (int *)(puVar4 + *(int *)puVar3 * 0x10);
				*piVar6 = iVar9;
				piVar6[1] = iVar5;
				piVar6[2] = 0x408;
				*(int *)puVar3 = *(int *)puVar3 + 1;
			}
			psVar1 = psVar7 + 0x70;
			iVar10 = iVar9 + 1;
			if (*psVar1 == 0xab) {
				piVar6 = (int *)(puVar4 + *(int *)puVar3 * 0x10);
				*piVar6 = iVar10;
				piVar6[1] = iVar5;
				piVar6[2] = 0x403;
				*(int *)puVar3 = *(int *)puVar3 + 1;
			}
			if (*psVar1 == 0xa8) {
				piVar6 = (int *)(puVar4 + *(int *)puVar3 * 0x10);
				*piVar6 = iVar10;
				piVar6[1] = iVar5;
				piVar6[2] = 0x402;
				*(int *)puVar3 = *(int *)puVar3 + 1;
			}
			if (*psVar1 == 0x225) {
				piVar6 = (int *)(puVar4 + *(int *)puVar3 * 0x10);
				*piVar6 = iVar10;
				piVar6[1] = iVar5;
				piVar6[2] = 0x408;
				*(int *)puVar3 = *(int *)puVar3 + 1;
			}
			psVar7 = psVar7 + 0xe0;
			iVar9 = iVar9 + 2;
			lVar11 = lVar11 + -1;
		} while (lVar11 != 0);
		iVar5 = iVar5 + 1;
		psVar8 = psVar8 + 1;
	} while (iVar5 < 0x70);
	*(undefined4 *)PTR_DAT_100f1890 = 0;
	return;
}

void InitL4Triggers(void)

{
	short *psVar1;
	char cVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	int iVar7;
	int iVar8;
	int *piVar9;
	short *psVar10;
	short *psVar11;
	int iVar12;
	longlong lVar13;

	puVar5 = PTR_DAT_100f1ed8;
	puVar4 = PTR_DAT_100f1a54;
	iVar8 = 0;
	*(undefined4 *)PTR_DAT_100f1ed8 = 0;
	puVar6 = PTR_DAT_100f1edc;
	puVar3 = PTR_DAT_100f19cc;
	psVar11 = *(short **)puVar4;
	do {
		lVar13 = 0x38;
		iVar7 = 0;
		psVar10 = psVar11;
		do {
			if (*psVar10 == 0x53) {
				piVar9 = (int *)(puVar6 + *(int *)puVar5 * 0x10);
				*piVar9 = iVar7;
				piVar9[1] = iVar8;
				piVar9[2] = 0x403;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			if (*psVar10 == 0x1a6) {
				piVar9 = (int *)(puVar6 + *(int *)puVar5 * 0x10);
				*piVar9 = iVar7;
				piVar9[1] = iVar8;
				piVar9[2] = 0x408;
				piVar9[3] = 0;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			if (*psVar10 == 0x78) {
				piVar9 = (int *)(puVar6 + *(int *)puVar5 * 0x10);
				*piVar9 = iVar7;
				piVar9[1] = iVar8;
				piVar9[2] = 0x402;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			psVar1 = psVar10 + 0x70;
			iVar12 = iVar7 + 1;
			if (*psVar1 == 0x53) {
				piVar9 = (int *)(puVar6 + *(int *)puVar5 * 0x10);
				*piVar9 = iVar12;
				piVar9[1] = iVar8;
				piVar9[2] = 0x403;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			if (*psVar1 == 0x1a6) {
				piVar9 = (int *)(puVar6 + *(int *)puVar5 * 0x10);
				*piVar9 = iVar12;
				piVar9[1] = iVar8;
				piVar9[2] = 0x408;
				piVar9[3] = 0;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			if (*psVar1 == 0x78) {
				piVar9 = (int *)(puVar6 + *(int *)puVar5 * 0x10);
				*piVar9 = iVar12;
				piVar9[1] = iVar8;
				piVar9[2] = 0x402;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			psVar10 = psVar10 + 0xe0;
			iVar7 = iVar7 + 2;
			lVar13 = lVar13 + -1;
		} while (lVar13 != 0);
		iVar8 = iVar8 + 1;
		psVar11 = psVar11 + 1;
	} while (iVar8 < 0x70);
	iVar7 = 0;
	iVar8 = 0;
	do {
		lVar13 = 0x10;
		cVar2 = puVar3[0x16a];
		psVar11 = (short *)(*(int *)puVar4 + iVar8);
		piVar9 = (int *)(puVar6 + *(int *)puVar5 * 0x10);
		iVar12 = 0;
		do {
			if ((*psVar11 == 0x172) && (cVar2 == '\x03')) {
				*piVar9 = iVar12;
				piVar9[1] = iVar7;
				piVar9[2] = 0x402;
				piVar9 = piVar9 + 4;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			if ((psVar11[0x70] == 0x172) && (cVar2 == '\x03')) {
				*piVar9 = iVar12 + 1;
				piVar9[1] = iVar7;
				piVar9[2] = 0x402;
				piVar9 = piVar9 + 4;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			if ((psVar11[0xe0] == 0x172) && (cVar2 == '\x03')) {
				*piVar9 = iVar12 + 2;
				piVar9[1] = iVar7;
				piVar9[2] = 0x402;
				piVar9 = piVar9 + 4;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			if ((psVar11[0x150] == 0x172) && (cVar2 == '\x03')) {
				*piVar9 = iVar12 + 3;
				piVar9[1] = iVar7;
				piVar9[2] = 0x402;
				piVar9 = piVar9 + 4;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			if ((psVar11[0x1c0] == 0x172) && (cVar2 == '\x03')) {
				*piVar9 = iVar12 + 4;
				piVar9[1] = iVar7;
				piVar9[2] = 0x402;
				piVar9 = piVar9 + 4;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			if ((psVar11[0x230] == 0x172) && (cVar2 == '\x03')) {
				*piVar9 = iVar12 + 5;
				piVar9[1] = iVar7;
				piVar9[2] = 0x402;
				piVar9 = piVar9 + 4;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			if ((psVar11[0x2a0] == 0x172) && (cVar2 == '\x03')) {
				*piVar9 = iVar12 + 6;
				piVar9[1] = iVar7;
				piVar9[2] = 0x402;
				piVar9 = piVar9 + 4;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			psVar11 = psVar11 + 0x310;
			iVar12 = iVar12 + 7;
			lVar13 = lVar13 + -1;
		} while (lVar13 != 0);
		iVar7 = iVar7 + 1;
		iVar8 = iVar8 + 2;
	} while (iVar7 < 0x70);
	*(undefined4 *)PTR_DAT_100f1890 = 0;
	return;
}

void InitSKingTriggers(void)

{
	undefined *puVar1;
	undefined *puVar2;

	puVar2 = PTR_DAT_100f1edc;
	*(undefined4 *)PTR_DAT_100f1ed8 = 1;
	puVar1 = PTR_DAT_100f1890;
	*(undefined4 *)puVar2 = 0x52;
	*(undefined4 *)(puVar2 + 4) = 0x2a;
	*(undefined4 *)(puVar2 + 8) = 0x404;
	*(undefined4 *)puVar1 = 0;
	return;
}

void InitSChambTriggers(void)

{
	undefined *puVar1;
	undefined *puVar2;

	puVar2 = PTR_DAT_100f1edc;
	*(undefined4 *)PTR_DAT_100f1ed8 = 1;
	puVar1 = PTR_DAT_100f1890;
	*(undefined4 *)puVar2 = 0x46;
	*(undefined4 *)(puVar2 + 4) = 0x27;
	*(undefined4 *)(puVar2 + 8) = 0x404;
	*(undefined4 *)puVar1 = 0;
	return;
}

void InitPWaterTriggers(void)

{
	undefined *puVar1;
	undefined *puVar2;

	puVar2 = PTR_DAT_100f1edc;
	*(undefined4 *)PTR_DAT_100f1ed8 = 1;
	puVar1 = PTR_DAT_100f1890;
	*(undefined4 *)puVar2 = 0x1e;
	*(undefined4 *)(puVar2 + 4) = 0x53;
	*(undefined4 *)(puVar2 + 8) = 0x404;
	*(undefined4 *)puVar1 = 0;
	return;
}

void InitVPTriggers(void)

{
	undefined *puVar1;
	undefined *puVar2;

	puVar2 = PTR_DAT_100f1edc;
	*(undefined4 *)PTR_DAT_100f1ed8 = 1;
	puVar1 = PTR_DAT_100f1890;
	*(undefined4 *)puVar2 = 0x23;
	*(undefined4 *)(puVar2 + 4) = 0x20;
	*(undefined4 *)(puVar2 + 8) = 0x404;
	*(undefined4 *)puVar1 = 0;
	return;
}

undefined8
ForceTownTrig(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	int *piVar3;
	int iVar4;
	short *psVar5;
	longlong lVar6;

	puVar2 = PTR_DAT_100f1978;
	puVar1 = PTR_DAT_100f1974;
	psVar5 = (short *)(*(int *)PTR_DAT_100f1a54 + *(int *)PTR_DAT_100f1978 * 0xe0 + *(int *)PTR_DAT_100f1974 * 2);
	piVar3 = (int *)PTR_DAT_100f3a3c;
	while (*piVar3 != -1) {
		if (*piVar3 == (int)*psVar5) {
			strcpy((int)PTR_DAT_100f192c, (int)PTR_s_Down_to_dungeon_100f3a38);
			*(undefined4 *)puVar2 = 0x19;
			*(undefined4 *)puVar1 = 0x1d;
			return 1;
		}
		piVar3 = piVar3 + 1;
	}
	piVar3 = (int *)PTR_DAT_100f3a34;
	if (*(int *)PTR_DAT_100f2124 != 0) {
		while (*piVar3 != -1) {
			if (*piVar3 == (int)*psVar5) {
				strcpy((int)PTR_DAT_100f192c, (int)PTR_s_Down_to_catacombs_100f3a30);
				*(undefined4 *)puVar2 = 0x31;
				*(undefined4 *)puVar1 = 0x15;
				return 1;
			}
			piVar3 = piVar3 + 1;
		}
	}
	if (*(int *)(PTR_DAT_100f2124 + 4) != 0) {
		lVar6 = 0x16;
		iVar4 = 0x4af;
		do {
			if (iVar4 == (int)*psVar5) {
				strcpy((int)PTR_DAT_100f192c, (int)PTR_s_Down_to_caves_100f3a2c);
				*(undefined4 *)puVar2 = 0x11;
				*(undefined4 *)puVar1 = 0x45;
				return 1;
			}
			iVar4 = iVar4 + 1;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
	}
	if (*(int *)(PTR_DAT_100f2124 + 8) != 0) {
		lVar6 = 0x10;
		iVar4 = 0x4d8;
		do {
			if (iVar4 == (int)*psVar5) {
				strcpy((int)PTR_DAT_100f192c, (int)PTR_s_Down_to_hell_100f3a28);
				*(undefined4 *)puVar2 = 0x29;
				*(undefined4 *)puVar1 = 0x50;
				return 1;
			}
			iVar4 = iVar4 + 1;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
	}
	return 0;
}

undefined8 ForceL1Trig(void)

{
	byte bVar1;
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
	ulonglong uVar12;
	ulonglong uVar13;
	undefined *puVar14;
	undefined *puVar15;
	int iVar16;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int *piVar17;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	puVar11 = PTR_s_Up_to_level__i_100f3a20;
	puVar15 = PTR_s_Up_to_town_100f3a1c;
	puVar10 = PTR_s_Down_to_level__i_100f3a14;
	puVar9 = PTR_DAT_100f1edc;
	puVar8 = PTR_DAT_100f1ed8;
	puVar7 = PTR_DAT_100f1a54;
	puVar6 = PTR_DAT_100f1978;
	puVar5 = PTR_DAT_100f1974;
	puVar4 = PTR_DAT_100f192c;
	puVar3 = PTR_DAT_100f17ec;
	uVar13 = ZEXT48(&toc);
	piVar17 = (int *)PTR_DAT_100f3a24;
	while (*piVar17 != -1) {
		if (*piVar17 == (int)*(short *)(*(int *)puVar7 + *(int *)puVar6 * 0xe0 + *(int *)puVar5 * 2)) {
			bVar1 = *puVar3;
			if (bVar1 < 2) {
				strcpy((int)puVar4, (int)puVar15);
			} else {
				sprintf((int)puVar4, puVar11, (uint)bVar1 - 1, in_r6, in_r7, in_r8, in_r9, in_r10,
				    in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac, in_stack_ffffffb0,
				    in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
				    in_stack_ffffffc4);
			}
			uVar2 = *(uint *)puVar8;
			uVar12 = (ulonglong)uVar2;
			iVar16 = 0;
			puVar14 = puVar9;
			if (0 < (int)uVar2) {
				do {
					if (*(int *)(puVar14 + 8) == 0x403) {
						*(undefined4 *)puVar6 = *(undefined4 *)(puVar9 + iVar16 * 0x10);
						*(undefined4 *)puVar5 = *(undefined4 *)(puVar9 + iVar16 * 0x10 + 4);
						return 1;
					}
					puVar14 = puVar14 + 0x10;
					iVar16 = iVar16 + 1;
					uVar12 = uVar12 - 1;
				} while (uVar12 != 0);
			}
		}
		piVar17 = piVar17 + 1;
	}
	piVar17 = *(int **)((int)uVar13 + -0x55b8);
	do {
		if (*piVar17 == -1) {
			return 0;
		}
		if (*piVar17 == (int)*(short *)(*(int *)puVar7 + *(int *)puVar6 * 0xe0 + *(int *)puVar5 * 2)) {
			sprintf((int)puVar4, puVar10, (uint)(byte)*puVar3 + 1, in_r6, in_r7, in_r8, in_r9, in_r10,
			    in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac, in_stack_ffffffb0,
			    in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
			    in_stack_ffffffc4);
			uVar2 = *(uint *)puVar8;
			uVar13 = (ulonglong)uVar2;
			iVar16 = 0;
			puVar15 = puVar9;
			if (0 < (int)uVar2) {
				do {
					if (*(int *)(puVar15 + 8) == 0x402) {
						*(undefined4 *)puVar6 = *(undefined4 *)(puVar9 + iVar16 * 0x10);
						*(undefined4 *)puVar5 = *(undefined4 *)(puVar9 + iVar16 * 0x10 + 4);
						return 1;
					}
					puVar15 = puVar15 + 0x10;
					iVar16 = iVar16 + 1;
					uVar13 = uVar13 - 1;
				} while (uVar13 != 0);
			}
		}
		piVar17 = piVar17 + 1;
	} while (true);
}

undefined8 ForceL2Trig(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	ulonglong uVar9;
	ulonglong uVar10;
	undefined *puVar13;
	longlong lVar11;
	longlong lVar12;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	uint *puVar14;
	int iVar15;
	int *piVar16;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	puVar8 = PTR_s_Down_to_level__i_100f3a14;
	puVar7 = PTR_DAT_100f1edc;
	puVar6 = PTR_DAT_100f1ed8;
	puVar5 = PTR_DAT_100f1a54;
	puVar4 = PTR_DAT_100f1978;
	puVar3 = PTR_DAT_100f1974;
	puVar2 = PTR_DAT_100f192c;
	puVar1 = PTR_DAT_100f17ec;
	uVar10 = ZEXT48(&toc);
	piVar16 = (int *)PTR_DAT_100f3a10;
	while (*piVar16 != -1) {
		if (*piVar16 == (int)*(short *)(*(int *)puVar5 + *(int *)puVar4 * 0xe0 + *(int *)puVar3 * 2)) {
			iVar15 = 0;
			puVar14 = (uint *)puVar7;
			while (iVar15 < *(int *)puVar6) {
				if (puVar14[2] == 0x403) {
					lVar11 = abs((ulonglong)*puVar14 - (ulonglong) * (uint *)puVar4);
					lVar12 = abs((ulonglong)puVar14[1] - (ulonglong) * (uint *)puVar3);
					if (((int)lVar11 < 4) && ((int)lVar12 < 4)) {
						sprintf((int)puVar2, *(undefined4 *)((int)uVar10 + -0x55b0), (uint)(byte)*puVar1 - 1,
						    in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff98, in_stack_ffffff9f,
						    in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4, in_stack_ffffffb8,
						    in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4);
						*(undefined4 *)puVar4 = *(undefined4 *)(puVar7 + iVar15 * 0x10);
						*(undefined4 *)puVar3 = *(undefined4 *)(puVar7 + iVar15 * 0x10 + 4);
						return 1;
					}
				}
				puVar14 = puVar14 + 4;
				iVar15 = iVar15 + 1;
			}
		}
		piVar16 = piVar16 + 1;
	}
	piVar16 = *(int **)((int)uVar10 + -0x55c4);
	while (*piVar16 != -1) {
		if (*piVar16 == (int)*(short *)(*(int *)puVar5 + *(int *)puVar4 * 0xe0 + *(int *)puVar3 * 2)) {
			sprintf((int)puVar2, puVar8, (uint)(byte)*puVar1 + 1, in_r6, in_r7, in_r8, in_r9, in_r10,
			    in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac, in_stack_ffffffb0,
			    in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
			    in_stack_ffffffc4);
			uVar9 = (ulonglong) * (uint *)puVar6;
			iVar15 = 0;
			puVar13 = puVar7;
			if (0 < (int)*(uint *)puVar6) {
				do {
					if (*(int *)(puVar13 + 8) == 0x402) {
						*(undefined4 *)puVar4 = *(undefined4 *)(puVar7 + iVar15 * 0x10);
						*(undefined4 *)puVar3 = *(undefined4 *)(puVar7 + iVar15 * 0x10 + 4);
						return 1;
					}
					puVar13 = puVar13 + 0x10;
					iVar15 = iVar15 + 1;
					uVar9 = uVar9 - 1;
				} while (uVar9 != 0);
			}
		}
		piVar16 = piVar16 + 1;
	}
	if (*puVar1 == '\x05') {
		piVar16 = *(int **)((int)uVar10 + -0x55c8);
		while (*piVar16 != -1) {
			if (*piVar16 == (int)*(short *)(*(int *)puVar5 + *(int *)puVar4 * 0xe0 + *(int *)puVar3 * 2)) {
				iVar15 = 0;
				puVar14 = (uint *)puVar7;
				while (iVar15 < *(int *)puVar6) {
					if (puVar14[2] == 0x408) {
						lVar11 = abs((ulonglong)*puVar14 - (ulonglong) * (uint *)puVar4);
						lVar12 = abs((ulonglong)puVar14[1] - (ulonglong) * (uint *)puVar3);
						if (((int)lVar11 < 4) && ((int)lVar12 < 4)) {
							strcpy((int)puVar2, *(int *)((int)uVar10 + -0x55b4));
							*(undefined4 *)puVar4 = *(undefined4 *)(puVar7 + iVar15 * 0x10);
							*(undefined4 *)puVar3 = *(undefined4 *)(puVar7 + iVar15 * 0x10 + 4);
							return 1;
						}
					}
					puVar14 = puVar14 + 4;
					iVar15 = iVar15 + 1;
				}
			}
			piVar16 = piVar16 + 1;
		}
	}
	return 0;
}

undefined8 ForceL3Trig(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	ulonglong uVar9;
	ulonglong uVar10;
	undefined *puVar13;
	short *psVar14;
	undefined *puVar15;
	longlong lVar11;
	longlong lVar12;
	int iVar16;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int *piVar17;
	uint *puVar18;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar15 = PTR_s_Up_to_level__i_100f3a20;
	puVar8 = PTR_s_Down_to_level__i_100f3a14;
	puVar7 = PTR_DAT_100f1edc;
	puVar6 = PTR_DAT_100f1ed8;
	puVar5 = PTR_DAT_100f1a54;
	puVar4 = PTR_DAT_100f1978;
	puVar3 = PTR_DAT_100f1974;
	puVar2 = PTR_DAT_100f192c;
	puVar1 = PTR_DAT_100f17ec;
	uVar10 = ZEXT48(&toc);
	piVar17 = (int *)PTR_DAT_100f3a04;
	while (*piVar17 != -1) {
		if (*piVar17 == (int)*(short *)(*(int *)puVar5 + *(int *)puVar4 * 0xe0 + *(int *)puVar3 * 2)) {
			sprintf((int)puVar2, puVar15, (uint)(byte)*puVar1 - 1, in_r6, in_r7, in_r8, in_r9, in_r10,
			    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbc, in_stack_ffffffc0,
			    in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0,
			    in_stack_ffffffd4);
			uVar9 = (ulonglong) * (uint *)puVar6;
			iVar16 = 0;
			puVar13 = puVar7;
			if (0 < (int)*(uint *)puVar6) {
				do {
					if (*(int *)(puVar13 + 8) == 0x403) {
						*(undefined4 *)puVar4 = *(undefined4 *)(puVar7 + iVar16 * 0x10);
						*(undefined4 *)puVar3 = *(undefined4 *)(puVar7 + iVar16 * 0x10 + 4);
						return 1;
					}
					puVar13 = puVar13 + 0x10;
					iVar16 = iVar16 + 1;
					uVar9 = uVar9 - 1;
				} while (uVar9 != 0);
			}
		}
		piVar17 = piVar17 + 1;
	}
	piVar17 = *(int **)((int)uVar10 + -0x55d0);
	while (iVar16 = *piVar17, iVar16 != -1) {
		psVar14 = (short *)(*(int *)puVar5 + *(int *)puVar4 * 0xe0 + *(int *)puVar3 * 2);
		if (((iVar16 == (int)*psVar14) || (iVar16 == (int)psVar14[0x70])) || (iVar16 == (int)psVar14[0xe0])) {
			sprintf((int)puVar2, puVar8, (uint)(byte)*puVar1 + 1, in_r6, in_r7, in_r8, in_r9, in_r10,
			    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbc, in_stack_ffffffc0,
			    in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0,
			    in_stack_ffffffd4);
			uVar9 = (ulonglong) * (uint *)puVar6;
			iVar16 = 0;
			puVar15 = puVar7;
			if (0 < (int)*(uint *)puVar6) {
				do {
					if (*(int *)(puVar15 + 8) == 0x402) {
						*(undefined4 *)puVar4 = *(undefined4 *)(puVar7 + iVar16 * 0x10);
						*(undefined4 *)puVar3 = *(undefined4 *)(puVar7 + iVar16 * 0x10 + 4);
						return 1;
					}
					puVar15 = puVar15 + 0x10;
					iVar16 = iVar16 + 1;
					uVar9 = uVar9 - 1;
				} while (uVar9 != 0);
			}
		}
		piVar17 = piVar17 + 1;
	}
	if (*puVar1 == '\t') {
		piVar17 = *(int **)((int)uVar10 + -0x55d4);
		while (*piVar17 != -1) {
			if (*piVar17 == (int)*(short *)(*(int *)puVar5 + *(int *)puVar4 * 0xe0 + *(int *)puVar3 * 2)) {
				iVar16 = 0;
				puVar18 = (uint *)puVar7;
				while (iVar16 < *(int *)puVar6) {
					if (puVar18[2] == 0x408) {
						lVar11 = abs((ulonglong)*puVar18 - (ulonglong) * (uint *)puVar4);
						lVar12 = abs((ulonglong)puVar18[1] - (ulonglong) * (uint *)puVar3);
						if (((int)lVar11 < 4) && ((int)lVar12 < 4)) {
							strcpy((int)puVar2, *(int *)((int)uVar10 + -0x55b4));
							*(undefined4 *)puVar4 = *(undefined4 *)(puVar7 + iVar16 * 0x10);
							*(undefined4 *)puVar3 = *(undefined4 *)(puVar7 + iVar16 * 0x10 + 4);
							return 1;
						}
					}
					puVar18 = puVar18 + 4;
					iVar16 = iVar16 + 1;
				}
			}
			piVar17 = piVar17 + 1;
		}
	}
	return 0;
}

undefined8 ForceL4Trig(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	ulonglong uVar9;
	ulonglong uVar10;
	undefined *puVar13;
	undefined *puVar14;
	longlong lVar11;
	longlong lVar12;
	undefined *puVar15;
	int iVar16;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int *piVar17;
	uint *puVar18;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	puVar14 = PTR_s_Up_to_level__i_100f3a20;
	puVar8 = PTR_s_Down_to_level__i_100f3a14;
	puVar7 = PTR_s_Down_to_Diablo_100f39e8;
	puVar6 = PTR_DAT_100f1edc;
	puVar5 = PTR_DAT_100f1ed8;
	puVar4 = PTR_DAT_100f1a54;
	puVar3 = PTR_DAT_100f1978;
	puVar2 = PTR_DAT_100f1974;
	puVar1 = PTR_DAT_100f192c;
	puVar15 = PTR_DAT_100f17ec;
	uVar10 = ZEXT48(&toc);
	piVar17 = (int *)PTR_DAT_100f39f8;
	while (*piVar17 != -1) {
		if (*piVar17 == (int)*(short *)(*(int *)puVar4 + *(int *)puVar3 * 0xe0 + *(int *)puVar2 * 2)) {
			sprintf((int)puVar1, puVar14, (uint)(byte)*puVar15 - 1, in_r6, in_r7, in_r8, in_r9, in_r10,
			    in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac, in_stack_ffffffb0,
			    in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
			    in_stack_ffffffc4);
			uVar9 = (ulonglong) * (uint *)puVar5;
			iVar16 = 0;
			puVar13 = puVar6;
			if (0 < (int)*(uint *)puVar5) {
				do {
					if (*(int *)(puVar13 + 8) == 0x403) {
						*(undefined4 *)puVar3 = *(undefined4 *)(puVar6 + iVar16 * 0x10);
						*(undefined4 *)puVar2 = *(undefined4 *)(puVar6 + iVar16 * 0x10 + 4);
						return 1;
					}
					puVar13 = puVar13 + 0x10;
					iVar16 = iVar16 + 1;
					uVar9 = uVar9 - 1;
				} while (uVar9 != 0);
			}
		}
		piVar17 = piVar17 + 1;
	}
	piVar17 = *(int **)((int)uVar10 + -0x55dc);
	while (true) {
		iVar16 = (int)uVar10;
		if (*piVar17 == -1)
			break;
		if (*piVar17 == (int)*(short *)(*(int *)puVar4 + *(int *)puVar3 * 0xe0 + *(int *)puVar2 * 2)) {
			sprintf((int)puVar1, puVar8, (uint)(byte)*puVar15 + 1, in_r6, in_r7, in_r8, in_r9, in_r10,
			    in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac, in_stack_ffffffb0,
			    in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
			    in_stack_ffffffc4);
			uVar9 = (ulonglong) * (uint *)puVar5;
			iVar16 = 0;
			puVar14 = puVar6;
			if (0 < (int)*(uint *)puVar5) {
				do {
					if (*(int *)(puVar14 + 8) == 0x402) {
						*(undefined4 *)puVar3 = *(undefined4 *)(puVar6 + iVar16 * 0x10);
						*(undefined4 *)puVar2 = *(undefined4 *)(puVar6 + iVar16 * 0x10 + 4);
						return 1;
					}
					puVar14 = puVar14 + 0x10;
					iVar16 = iVar16 + 1;
					uVar9 = uVar9 - 1;
				} while (uVar9 != 0);
			}
		}
		piVar17 = piVar17 + 1;
	}
	if (*puVar15 == '\r') {
		piVar17 = *(int **)(iVar16 + -0x55e0);
		while (true) {
			iVar16 = (int)uVar10;
			if (*piVar17 == -1)
				break;
			if (*piVar17 == (int)*(short *)(*(int *)puVar4 + *(int *)puVar3 * 0xe0 + *(int *)puVar2 * 2)) {
				iVar16 = 0;
				puVar18 = (uint *)puVar6;
				while (iVar16 < *(int *)puVar5) {
					if (puVar18[2] == 0x408) {
						lVar11 = abs((ulonglong)*puVar18 - (ulonglong) * (uint *)puVar3);
						lVar12 = abs((ulonglong)puVar18[1] - (ulonglong) * (uint *)puVar2);
						if (((int)lVar11 < 4) && ((int)lVar12 < 4)) {
							strcpy((int)puVar1, *(int *)((int)uVar10 + -0x55b4));
							*(undefined4 *)puVar3 = *(undefined4 *)(puVar6 + iVar16 * 0x10);
							*(undefined4 *)puVar2 = *(undefined4 *)(puVar6 + iVar16 * 0x10 + 4);
							return 1;
						}
					}
					puVar18 = puVar18 + 4;
					iVar16 = iVar16 + 1;
				}
			}
			piVar17 = piVar17 + 1;
		}
	}
	if (*puVar15 == '\x0f') {
		piVar17 = *(int **)(iVar16 + -0x55e4);
		while (*piVar17 != -1) {
			if (*piVar17 == (int)*(short *)(*(int *)puVar4 + *(int *)puVar3 * 0xe0 + *(int *)puVar2 * 2)) {
				strcpy((int)puVar1, (int)puVar7);
				uVar10 = (ulonglong) * (uint *)puVar5;
				iVar16 = 0;
				puVar15 = puVar6;
				if (0 < (int)*(uint *)puVar5) {
					do {
						if (*(int *)(puVar15 + 8) == 0x402) {
							*(undefined4 *)puVar3 = *(undefined4 *)(puVar6 + iVar16 * 0x10);
							*(undefined4 *)puVar2 = *(undefined4 *)(puVar6 + iVar16 * 0x10 + 4);
							return 1;
						}
						puVar15 = puVar15 + 0x10;
						iVar16 = iVar16 + 1;
						uVar10 = uVar10 - 1;
					} while (uVar10 != 0);
				}
			}
			piVar17 = piVar17 + 1;
		}
	}
	return 0;
}

void Freeupstairs(void)

{
	undefined *puVar1;
	undefined *puVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int *piVar7;
	int iVar8;

	puVar2 = PTR_DAT_100f1ed8;
	puVar1 = PTR_DAT_100f1834;
	iVar8 = 0;
	piVar7 = (int *)PTR_DAT_100f1edc;
	while (iVar8 < *(int *)puVar2) {
		iVar4 = *piVar7;
		iVar6 = piVar7[1];
		iVar5 = iVar6 + -2;
		iVar3 = *(int *)puVar1 + (iVar4 + -2) * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + -1) * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + iVar4 * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + 1) * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + 2) * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar5 = iVar6 + -1;
		iVar3 = *(int *)puVar1 + (iVar4 + -2) * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + -1) * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + iVar4 * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + 1) * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + 2) * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar5 = iVar6 + 1;
		iVar3 = *(int *)puVar1 + (iVar4 + -2) * 0x70;
		*(byte *)(iVar6 + iVar3) = *(byte *)(iVar6 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + -1) * 0x70;
		*(byte *)(iVar6 + iVar3) = *(byte *)(iVar6 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + iVar4 * 0x70;
		*(byte *)(iVar6 + iVar3) = *(byte *)(iVar6 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + 1) * 0x70;
		*(byte *)(iVar6 + iVar3) = *(byte *)(iVar6 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + 2) * 0x70;
		*(byte *)(iVar6 + iVar3) = *(byte *)(iVar6 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + -2) * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + -1) * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + iVar4 * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + 1) * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + 2) * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar6 = iVar6 + 2;
		piVar7 = piVar7 + 4;
		iVar8 = iVar8 + 1;
		iVar3 = *(int *)puVar1 + (iVar4 + -2) * 0x70;
		*(byte *)(iVar6 + iVar3) = *(byte *)(iVar6 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + -1) * 0x70;
		*(byte *)(iVar6 + iVar3) = *(byte *)(iVar6 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + iVar4 * 0x70;
		*(byte *)(iVar6 + iVar3) = *(byte *)(iVar6 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + 1) * 0x70;
		*(byte *)(iVar6 + iVar3) = *(byte *)(iVar6 + iVar3) | 8;
		iVar4 = *(int *)puVar1 + (iVar4 + 2) * 0x70;
		*(byte *)(iVar6 + iVar4) = *(byte *)(iVar6 + iVar4) | 8;
	}
	return;
}

undefined8 ForceSKingTrig(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	int *piVar4;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar3 = PTR_DAT_100f1edc;
	puVar2 = PTR_DAT_100f1978;
	puVar1 = PTR_DAT_100f1974;
	piVar4 = (int *)PTR_DAT_100f3a24;
	while (true) {
		if (*piVar4 == -1) {
			return 0;
		}
		if (*piVar4 == (int)*(short *)(*(int *)PTR_DAT_100f1a54 + *(int *)PTR_DAT_100f1978 * 0xe0 + *(int *)PTR_DAT_100f1974 * 2))
			break;
		piVar4 = piVar4 + 1;
	}
	sprintf((int)PTR_DAT_100f192c, PTR_s_Back_to_Level__i_100f39e4,
	    (uint)(byte)PTR_DAT_100f19cc[0x120], in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffb8,
	    in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
	    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	*(undefined4 *)puVar2 = *(undefined4 *)puVar3;
	*(undefined4 *)puVar1 = *(undefined4 *)(puVar3 + 4);
	return 1;
}

undefined8 ForceSChambTrig(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	int *piVar4;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar3 = PTR_DAT_100f1edc;
	puVar2 = PTR_DAT_100f1978;
	puVar1 = PTR_DAT_100f1974;
	piVar4 = (int *)PTR_DAT_100f3a0c;
	while (true) {
		if (*piVar4 == -1) {
			return 0;
		}
		if (*piVar4 == (int)*(short *)(*(int *)PTR_DAT_100f1a54 + *(int *)PTR_DAT_100f1978 * 0xe0 + *(int *)PTR_DAT_100f1974 * 2))
			break;
		piVar4 = piVar4 + 1;
	}
	sprintf((int)PTR_DAT_100f192c, PTR_s_Back_to_Level__i_100f39e4,
	    (uint)(byte)PTR_DAT_100f19cc[0x150], in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffb8,
	    in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
	    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	*(undefined4 *)puVar2 = *(undefined4 *)puVar3;
	*(undefined4 *)puVar1 = *(undefined4 *)(puVar3 + 4);
	return 1;
}

undefined8 ForcePWaterTrig(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	int *piVar4;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar3 = PTR_DAT_100f1edc;
	puVar2 = PTR_DAT_100f1978;
	puVar1 = PTR_DAT_100f1974;
	piVar4 = (int *)PTR_DAT_100f3a00;
	while (true) {
		if (*piVar4 == -1) {
			return 0;
		}
		if (*piVar4 == (int)*(short *)(*(int *)PTR_DAT_100f1a54 + *(int *)PTR_DAT_100f1978 * 0xe0 + *(int *)PTR_DAT_100f1974 * 2))
			break;
		piVar4 = piVar4 + 1;
	}
	sprintf((int)PTR_DAT_100f192c, PTR_s_Back_to_Level__i_100f39e4,
	    (uint)(byte)PTR_DAT_100f19cc[0x138], in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffb8,
	    in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
	    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	*(undefined4 *)puVar2 = *(undefined4 *)puVar3;
	*(undefined4 *)puVar1 = *(undefined4 *)(puVar3 + 4);
	return 1;
}

// WARNING: Removing unreachable block (ram,0x100b78e0)

void CheckTrigForce(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	byte bVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined uVar7;
	undefined4 uVar6;
	undefined8 uVar5;
	undefined4 in_stack_ffffffc8;

	puVar4 = PTR_DAT_100f1924;
	puVar3 = PTR_DAT_100f1890;
	puVar2 = PTR_DAT_100f183c;
	*(undefined4 *)PTR_DAT_100f1890 = 0;
	if (*(int *)puVar4 < 0x160) {
		uVar7 = SUB41(PTR_DAT_100f17f8, 0);
		if (*PTR_DAT_100f17f8 == '\0') {
			bVar1 = *puVar2;
			if (bVar1 == 2) {
				uVar6 = ForceL2Trig();
				uVar7 = (undefined)uVar6;
				*(undefined4 *)puVar3 = uVar6;
			} else {
				if (bVar1 < 2) {
					if (bVar1 == 0) {
						uVar5 = ForceTownTrig(uVar7, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
						    in_stack_ffffffc8);
						uVar7 = (undefined)uVar5;
						*(int *)puVar3 = (int)uVar5;
					} else {
						uVar6 = ForceL1Trig();
						uVar7 = (undefined)uVar6;
						*(undefined4 *)puVar3 = uVar6;
					}
				} else {
					if (bVar1 == 4) {
						uVar6 = ForceL4Trig();
						uVar7 = (undefined)uVar6;
						*(undefined4 *)puVar3 = uVar6;
					} else {
						if (bVar1 < 4) {
							uVar6 = ForceL3Trig();
							uVar7 = (undefined)uVar6;
							*(undefined4 *)puVar3 = uVar6;
						}
					}
				}
			}
			if ((*puVar2 != '\0') && (*(int *)puVar3 == 0)) {
				uVar5 = ForceQuests(uVar7, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffffc8);
				*(int *)puVar3 = (int)uVar5;
			}
		} else {
			bVar1 = *PTR_DAT_100f17f0;
			if (bVar1 != 3) {
				if (bVar1 < 3) {
					if (bVar1 == 1) {
						uVar6 = ForceSKingTrig();
						*(undefined4 *)puVar3 = uVar6;
					} else {
						if (bVar1 != 0) {
							uVar6 = ForceSChambTrig();
							*(undefined4 *)puVar3 = uVar6;
						}
					}
				} else {
					if (bVar1 < 5) {
						uVar6 = ForcePWaterTrig();
						*(undefined4 *)puVar3 = uVar6;
					}
				}
			}
		}
		if (*(int *)puVar3 != 0) {
			ClearPanel();
		}
	}
	return;
}

void CheckTriggers(void)

{
	char cVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	ulonglong uVar11;
	int iVar12;
	ulonglong uVar13;
	ulonglong uVar14;
	ulonglong uVar15;
	ulonglong in_r7;
	undefined *puVar16;
	ulonglong in_r9;
	undefined4 uVar17;
	uint uVar18;
	undefined8 in_r10;
	undefined4 uVar19;
	int iVar20;
	char unaff_r18;
	ulonglong unaff_r19;
	ulonglong unaff_r20;
	int iVar21;
	uint *puVar22;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffa8;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	puVar10 = PTR_s_Unknown_trigger_msg_100f39e0;
	puVar9 = PTR_DAT_100f2110;
	puVar8 = PTR_DAT_100f1ed8;
	puVar7 = PTR_DAT_100f1e98;
	puVar6 = PTR_DAT_100f188c;
	puVar5 = PTR_DAT_100f1828;
	puVar4 = PTR_DAT_100f1824;
	puVar3 = PTR_DAT_100f17ec;
	puVar2 = PTR_DAT_100f17e0;
	if (*(int *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec) == 0) {
		iVar21 = 0;
		puVar22 = (uint *)PTR_DAT_100f1edc;
		while (iVar21 < *(int *)puVar8) {
			uVar11 = (ulonglong) * (uint *)puVar4;
			iVar12 = *(uint *)puVar4 * 0x55ec;
			puVar16 = puVar5 + iVar12;
			uVar14 = (ulonglong) * (uint *)(puVar16 + 0x38);
			if ((*(uint *)(puVar16 + 0x38) == *puVar22) && (uVar15 = (ulonglong) * (uint *)(puVar16 + 0x3c), *(uint *)(puVar16 + 0x3c) == puVar22[1])) {
				uVar18 = puVar22[2];
				uVar13 = (ulonglong)uVar18;
				uVar17 = (undefined4)in_r9;
				uVar19 = (undefined4)in_r10;
				if (uVar18 == 0x404) {
					StartNewLvl(uVar11, uVar13, (ulonglong) * (uint *)puVar7, uVar15, in_r7, puVar16, uVar17, uVar19,
					    in_stack_ffffff98);
				} else {
					if ((int)uVar18 < 0x404) {
						if (uVar18 == 0x402) {
							if ((0xb < *(int *)puVar6) && (iVar12 = DropItemBeforeTrig(), iVar12 != 0)) {
								return;
							}
							StartNewLvl((ulonglong) * (uint *)puVar4, (ulonglong)puVar22[2],
							    (ulonglong)(byte)*puVar3 + 1, uVar15, in_r7, puVar16, (int)in_r9, (int)in_r10,
							    in_stack_ffffff98);
						} else {
							if ((int)uVar18 < 0x402) {
							LAB_100b7c08:
								app_fatal((int)puVar10, uVar13, uVar14, uVar15, in_r7, puVar16, uVar17, uVar19,
								    in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffa8, in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4, in_stack_ffffffb8,
								    in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4);
							} else {
								if ((0xb < *(int *)puVar6) && (iVar12 = DropItemBeforeTrig(), iVar12 != 0)) {
									return;
								}
								StartNewLvl((ulonglong) * (uint *)puVar4, (ulonglong)puVar22[2],
								    (ulonglong)(byte)*puVar3 - 1, uVar15, in_r7, puVar16, (int)in_r9,
								    (int)in_r10, in_stack_ffffff98);
							}
						}
					} else {
						if (uVar18 == 0x408) {
							*(uint *)puVar9 = (uint)(byte)*puVar3;
							StartNewLvl(uVar11, (ulonglong)puVar22[2], 0, uVar15, in_r7, puVar16, uVar17, uVar19,
							    in_stack_ffffff98);
						} else {
							if ((0x407 < (int)uVar18) || ((int)uVar18 < 0x407))
								goto LAB_100b7c08;
							in_r7 = (ulonglong)(byte)*puVar2;
							if (*puVar2 != 1) {
								uVar18 = puVar22[3];
								in_r9 = (ulonglong)uVar18;
								in_r10 = 0;
								if ((uVar18 == 5) && (in_r7 = SEXT18((char)puVar16[0x1b4]), (char)puVar16[0x1b4] < '\b')) {
									unaff_r19 = uVar15 + 1;
									in_r10 = 1;
									unaff_r18 = '(';
									unaff_r20 = uVar14;
								}
								if ((uVar18 == 9) && (in_r7 = SEXT18((char)puVar16[0x1b4]), (char)puVar16[0x1b4] < '\r')) {
									unaff_r20 = uVar14 + 1;
									in_r10 = 1;
									unaff_r18 = ')';
									unaff_r19 = uVar15;
								}
								if ((uVar18 == 0xd) && (in_r7 = SEXT18((char)puVar16[0x1b4]), (char)puVar16[0x1b4] < '\x11')) {
									unaff_r19 = uVar15 + 1;
									in_r10 = 1;
									unaff_r18 = '*';
									unaff_r20 = uVar14;
								}
								iVar20 = (int)in_r10;
								if (iVar20 != 0) {
									cVar1 = puVar5[iVar12 + 0x15c];
									if (cVar1 == '\0') {
										PlaySFX(0x2fa);
									} else {
										if (cVar1 == '\x01') {
											PlaySFX(0x28d);
										} else {
											if (cVar1 == '\x02') {
												PlaySFX(0x226);
											}
										}
									}
									InitDiabloMsg(unaff_r18);
									NetSendCmdLoc(1, 1, (ulonglong)((uint)unaff_r20 & 0xff),
									    (ulonglong)((uint)unaff_r19 & 0xff), in_r7, puVar16, uVar18, iVar20,
									    in_stack_ffffff98);
									return;
								}
							}
							StartNewLvl(uVar11, uVar13, (ulonglong)puVar22[3], uVar15, in_r7, puVar16, (int)in_r9,
							    (int)in_r10, in_stack_ffffff98);
						}
					}
				}
			}
			puVar22 = puVar22 + 4;
			iVar21 = iVar21 + 1;
		}
	}
	return;
}
