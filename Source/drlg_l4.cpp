
void DRLG_L4Shadows(void)

{
	char cVar1;
	undefined *puVar2;
	char *pcVar3;
	int iVar4;
	longlong lVar5;

	iVar4 = 1;
	puVar2 = PTR_DAT_100f1804;
	do {
		pcVar3 = puVar2 + 0x29;
		lVar5 = 0xd;
		do {
			cVar1 = *pcVar3;
			if (cVar1 == '\x0f' || (cVar1 == '\b' || (cVar1 == '\x04' || cVar1 == '\x03'))) {
				if (pcVar3[-0x28] == '\x06') {
					pcVar3[-0x28] = '/';
				}
				if (pcVar3[-0x29] == '\x06') {
					pcVar3[-0x29] = '0';
				}
			}
			cVar1 = pcVar3[0x28];
			if (cVar1 == '\x0f' || (cVar1 == '\b' || (cVar1 == '\x04' || cVar1 == '\x03'))) {
				if (*pcVar3 == '\x06') {
					*pcVar3 = '/';
				}
				if (pcVar3[-1] == '\x06') {
					pcVar3[-1] = '0';
				}
			}
			cVar1 = pcVar3[0x50];
			if (cVar1 == '\x0f' || (cVar1 == '\b' || (cVar1 == '\x04' || cVar1 == '\x03'))) {
				if (pcVar3[0x28] == '\x06') {
					pcVar3[0x28] = '/';
				}
				if (pcVar3[0x27] == '\x06') {
					pcVar3[0x27] = '0';
				}
			}
			pcVar3 = pcVar3 + 0x78;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		puVar2 = puVar2 + 1;
	} while (iVar4 < 0x28);
	return;
}

void InitL4Dungeon(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	int iVar5;
	longlong lVar6;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	int local_3c;

	memset((char)PTR_DAT_100f1d08, 0x90, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	memset((char)*(undefined4 *)(local_3c + -0x72cc), 0, param_3, param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	puVar3 = *(undefined **)(local_3c + -0x77cc);
	iVar5 = 0;
	puVar4 = *(undefined **)(local_3c + -0x7514);
	do {
		lVar6 = 5;
		puVar1 = puVar3;
		puVar2 = puVar4;
		do {
			*puVar1 = 0x1e;
			*puVar2 = 0;
			puVar1[0x28] = 0x1e;
			puVar2[0x28] = 0;
			puVar1[0x50] = 0x1e;
			puVar2[0x50] = 0;
			puVar1[0x78] = 0x1e;
			puVar2[0x78] = 0;
			puVar1[0xa0] = 0x1e;
			puVar2[0xa0] = 0;
			puVar1[200] = 0x1e;
			puVar2[200] = 0;
			puVar1[0xf0] = 0x1e;
			puVar2[0xf0] = 0;
			puVar1[0x118] = 0x1e;
			puVar1 = puVar1 + 0x140;
			puVar2[0x118] = 0;
			puVar2 = puVar2 + 0x140;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
		iVar5 = iVar5 + 1;
		puVar4 = puVar4 + 1;
		puVar3 = puVar3 + 1;
	} while (iVar5 < 0x28);
	return;
}

void DRLG_LoadL4SP(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined8 uVar4;
	longlong lVar5;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_DAT_100f1aac;
	puVar1 = PTR_DAT_100f1aa8;
	ppuVar3 = &toc;
	*(undefined4 *)PTR_DAT_100f1aac = 0;
	uVar4 = QuestStatus(0xb);
	if ((int)uVar4 != 0) {
		lVar5 = LoadFileInMem(ZEXT48(ppuVar3[-0x18b2]), (undefined4 *)0x0, param_3, param_4, param_5, param_6,
		    param_7, param_8, in_stack_ffffffc8);
		*(int *)puVar1 = (int)lVar5;
		*(undefined4 *)puVar2 = 1;
	}
	if ((*ppuVar3[-0x1df9] == '\x0f') && (*ppuVar3[-0x1dfc] != '\x01')) {
		lVar5 = LoadFileInMem(ZEXT48(ppuVar3[-0x18b3]), (undefined4 *)0x0, param_3, param_4, param_5, param_6,
		    param_7, param_8, in_stack_ffffffc8);
		*(int *)puVar1 = (int)lVar5;
		*(undefined4 *)puVar2 = 1;
	}
	return;
}

void DRLG_FreeL4SP(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	mem_free_dbg((int **)PTR_DAT_100f1aa8, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	return;
}

void DRLG_L4SetSPRoom(int param_1, longlong param_2, undefined8 param_3, ulonglong param_4, longlong param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	byte bVar1;
	byte bVar2;
	byte bVar3;
	undefined4 *puVar4;
	uint *puVar5;
	uint *puVar6;
	undefined *puVar7;
	int iVar8;
	undefined *puVar9;
	undefined **ppuVar10;
	ulonglong uVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	int iVar15;
	undefined4 in_stack_ffffffb8;

	puVar9 = PTR_DAT_100f1aa8;
	ppuVar10 = &toc;
	uVar11 = FUN_100b8f7c((ulonglong) * (uint *)PTR_DAT_100f1aa8, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	bVar1 = *(byte *)uVar11;
	iVar15 = 0;
	bVar2 = ((byte *)uVar11)[2];
	puVar4 = (undefined4 *)ppuVar10[-0x1d54];
	*(int *)ppuVar10[-0x1d53] = param_1;
	puVar5 = (uint *)ppuVar10[-0x1d55];
	*puVar4 = (int)param_2;
	puVar6 = (uint *)ppuVar10[-0x1d56];
	*puVar5 = (uint)bVar1;
	puVar7 = ppuVar10[-0x1df3];
	*puVar6 = (uint)bVar2;
	lVar12 = ZEXT48(puVar7) + param_2;
	param_2 = ZEXT48(ppuVar10[-0x1d45]) + param_2;
	lVar13 = (ulonglong) * (uint *)(*(int *)puVar9 + 0x88) + 4;
	while (iVar15 < (int)(uint)bVar2) {
		lVar14 = 0;
		uVar11 = (ulonglong)bVar1;
		if (bVar1 != 0) {
			do {
				bVar3 = *(byte *)lVar13;
				param_4 = (ulonglong)bVar3;
				if (bVar3 == 0) {
					*(undefined *)((int)lVar12 + (param_1 + (int)lVar14) * 0x28) = 6;
				} else {
					param_5 = ((longlong)param_1 + lVar14) * 0x28;
					iVar8 = (int)param_5;
					*(byte *)((int)lVar12 + iVar8) = bVar3;
					*(byte *)((int)param_2 + iVar8) = *(byte *)((int)param_2 + iVar8) | 0x80;
				}
				lVar13 = lVar13 + 2;
				lVar14 = lVar14 + 1;
				uVar11 = uVar11 - 1;
			} while (uVar11 != 0);
		}
		lVar12 = lVar12 + 1;
		param_2 = param_2 + 1;
		iVar15 = iVar15 + 1;
	}
	FUN_100b9100(*(int *)puVar9, (char)lVar12, (char)param_2, (char)param_4, (char)param_5, (char)lVar13,
	    bVar1, bVar2, in_stack_ffffffb8);
	return;
}

void L4makeDmt(void)

{
	byte *pbVar1;
	byte *pbVar2;
	byte *pbVar3;
	byte *pbVar4;
	byte *pbVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	int iVar9;
	longlong lVar10;

	iVar9 = 1;
	puVar7 = PTR_DAT_100f1d04 + 1;
	puVar8 = PTR_DAT_100f1804;
	do {
		pbVar5 = puVar7 + 0x50;
		lVar10 = 0xd;
		puVar6 = puVar8;
		do {
			*puVar6 = (&DAT_100f8cc3)
			    [(uint)pbVar5[0x51] * 8 + (uint)pbVar5[1] * 4 + (uint)*pbVar5 + (uint)pbVar5[0x50] * 2];
			puVar6[0x28] = (&DAT_100f8cc3)
			    [(uint)pbVar5[0xf1] * 8 + (uint)pbVar5[0xa1] * 4 + (uint)pbVar5[0xa0] + (uint)pbVar5[0xf0] * 2];
			pbVar1 = pbVar5 + 0x191;
			pbVar2 = pbVar5 + 400;
			pbVar3 = pbVar5 + 0x141;
			pbVar4 = pbVar5 + 0x140;
			pbVar5 = pbVar5 + 0x1e0;
			puVar6[0x50] = (&DAT_100f8cc3)
			    [(uint)*pbVar1 * 8 + (uint)*pbVar3 * 4 + (uint)*pbVar4 + (uint)*pbVar2 * 2];
			puVar6 = puVar6 + 0x78;
			lVar10 = lVar10 + -1;
		} while (lVar10 != 0);
		iVar9 = iVar9 + 2;
		puVar7 = puVar7 + 2;
		puVar8 = puVar8 + 1;
	} while (iVar9 < 0x4e);
	return;
}

int L4HWallOk(int param_1, int param_2)

{
	char cVar1;
	int iVar2;
	char *pcVar3;
	int iVar4;

	iVar4 = 1;
	while (true) {
		iVar2 = (param_1 + iVar4) * 0x28;
		pcVar3 = PTR_DAT_100f1804 + iVar2 + param_2;
		if ((((*pcVar3 != '\x06') || (PTR_DAT_100f1abc[iVar2 + param_2] != '\0')) || (pcVar3[-1] != '\x06')) || (pcVar3[1] != '\x06'))
			break;
		iVar4 = iVar4 + 1;
	}
	cVar1 = PTR_DAT_100f1804[iVar2 + param_2];
	if (3 < iVar4 && (cVar1 == '\x16' || (cVar1 == '\x15' || (cVar1 == '\x10' || (cVar1 == '\x0f' || (cVar1 == '\r' || (cVar1 == '\f' || cVar1 == '\n'))))))) {
		return iVar4;
	}
	return -1;
}

int L4VWallOk(int param_1, int param_2)

{
	char cVar1;
	char *pcVar2;
	int iVar3;
	char *pcVar4;

	pcVar4 = PTR_DAT_100f1abc + param_1 * 0x28 + param_2 + 1;
	iVar3 = 1;
	pcVar2 = PTR_DAT_100f1804 + param_1 * 0x28 + param_2;
	while ((((pcVar2[1] == '\x06' && (*pcVar4 == '\0')) && (pcVar2[-0x27] == '\x06')) && (pcVar2[0x29] == '\x06'))) {
		pcVar4 = pcVar4 + 1;
		iVar3 = iVar3 + 1;
		pcVar2 = pcVar2 + 1;
	}
	cVar1 = (PTR_DAT_100f1804 + param_1 * 0x28 + param_2)[iVar3];
	if (3 < iVar3 && (cVar1 == '\x17' || (cVar1 == '\x15' || (cVar1 == '\x10' || (cVar1 == '\x0f' || (cVar1 == '\x0e' || (cVar1 == '\v' || (cVar1 == '\t' || cVar1 == '\b')))))))) {
		return iVar3;
	}
	return -1;
}

void L4HorizWall(int param_1, int param_2, longlong param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined *puVar1;
	int iVar2;
	undefined *puVar3;
	ulonglong uVar4;
	char *pcVar6;
	longlong lVar5;
	int iVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	ulonglong uVar11;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined1 in_stack_ffffffcb;

	puVar3 = PTR_DAT_100f1804;
	uVar11 = ZEXT48(PTR_DAT_100f1804);
	pcVar6 = PTR_DAT_100f1804 + param_1 * 0x28 + param_2;
	if (*pcVar6 == '\r') {
		*pcVar6 = '\x11';
	}
	if (*pcVar6 == '\x10') {
		*pcVar6 = '\v';
	}
	if (*pcVar6 == '\f') {
		*pcVar6 = '\x0e';
	}
	iVar7 = (int)param_3;
	lVar5 = 1;
	if (1 < iVar7) {
		if (8 < iVar7 + -1) {
			uVar4 = (ulonglong)(iVar7 - 2U >> 3);
			puVar1 = puVar3 + param_2;
			if (1 < iVar7 + -8) {
				do {
					lVar10 = (longlong)param_1 + lVar5;
					param_8 = (undefined)lVar10;
					lVar5 = lVar5 + 8;
					iVar2 = (int)lVar10;
					puVar1[iVar2 * 0x28] = 2;
					lVar9 = (lVar10 + 2) * 0x28;
					param_7 = (undefined)lVar9;
					puVar1[(iVar2 + 1) * 0x28] = 2;
					lVar8 = (lVar10 + 3) * 0x28;
					param_6 = (undefined)lVar8;
					puVar1[(int)lVar9] = 2;
					lVar9 = (lVar10 + 4) * 0x28;
					param_5 = (undefined)lVar9;
					puVar1[(int)lVar8] = 2;
					puVar1[(int)lVar9] = 2;
					puVar1[(iVar2 + 5) * 0x28] = 2;
					puVar1[(iVar2 + 6) * 0x28] = 2;
					puVar1[(iVar2 + 7) * 0x28] = 2;
					uVar4 = uVar4 - 1;
				} while (uVar4 != 0);
			}
		}
		param_4 = (undefined)(uVar11 + (longlong)param_2);
		lVar9 = param_3 - lVar5;
		if ((int)lVar5 < iVar7) {
			do {
				iVar2 = (int)lVar5;
				lVar5 = lVar5 + 1;
				*(undefined *)((int)(uVar11 + (longlong)param_2) + (param_1 + iVar2) * 0x28) = 2;
				lVar9 = lVar9 + -1;
			} while (lVar9 != 0);
		}
	}
	pcVar6 = puVar3 + (param_1 + iVar7) * 0x28 + param_2;
	if (*pcVar6 == '\x0f') {
		*pcVar6 = '\x0e';
	}
	if (*pcVar6 == '\n') {
		*pcVar6 = '\x11';
	}
	if (*pcVar6 == '\x15') {
		*pcVar6 = '\x17';
	}
	if (*pcVar6 == '\x16') {
		*pcVar6 = '\x1d';
	}
	lVar5 = random(0, param_3 + -3, (char)param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb);
	iVar7 = (param_1 + (int)lVar5 + 1) * 0x28;
	puVar1 = puVar3 + param_2 + iVar7;
	puVar3[iVar7 + param_2] = 0x39;
	puVar1[0x50] = 0x38;
	puVar1[0x28] = 0x3c;
	if (puVar1[-1] == '\x06') {
		puVar1[-1] = 0x3a;
	}
	if (puVar3[param_2 + iVar7 + 0x27] == '\x06') {
		puVar3[param_2 + iVar7 + 0x27] = ';';
	}
	return;
}

void L4VertWall(longlong param_1, longlong param_2, longlong param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	ulonglong uVar3;
	longlong lVar4;
	undefined *puVar5;
	char *pcVar6;
	longlong lVar7;
	int iVar8;
	longlong lVar9;
	char *pcVar10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined1 in_stack_ffffffcb;

	puVar2 = PTR_DAT_100f1804;
	lVar9 = ZEXT48(PTR_DAT_100f1804) + param_1 * 0x28 + param_2;
	pcVar10 = (char *)lVar9;
	if (*pcVar10 == '\x0e') {
		*pcVar10 = '\x11';
	}
	if (*pcVar10 == '\b') {
		*pcVar10 = '\t';
	}
	if (*pcVar10 == '\x0f') {
		*pcVar10 = '\n';
	}
	iVar8 = (int)param_3;
	lVar7 = 1;
	if (1 < iVar8) {
		if (8 < iVar8 + -1) {
			uVar3 = (ulonglong)(iVar8 - 2U >> 3);
			lVar4 = lVar9 + 1;
			if (1 < iVar8 + -8) {
				do {
					puVar5 = (undefined *)lVar4;
					*puVar5 = 1;
					lVar7 = lVar7 + 8;
					puVar5[1] = 1;
					puVar5[2] = 1;
					puVar5[3] = 1;
					puVar5[4] = 1;
					puVar5[5] = 1;
					puVar5[6] = 1;
					puVar5[7] = 1;
					lVar4 = lVar4 + 8;
					uVar3 = uVar3 - 1;
				} while (uVar3 != 0);
			}
		}
		lVar9 = lVar9 + lVar7;
		lVar4 = param_3 - lVar7;
		if ((int)lVar7 < iVar8) {
			do {
				*(undefined *)lVar9 = 1;
				lVar9 = lVar9 + 1;
				lVar4 = lVar4 + -1;
			} while (lVar4 != 0);
		}
	}
	pcVar6 = pcVar10 + iVar8;
	if (*pcVar6 == '\v') {
		*pcVar6 = '\x11';
	}
	if (*pcVar6 == '\t') {
		*pcVar6 = '\n';
	}
	if (*pcVar6 == '\x10') {
		*pcVar6 = '\r';
	}
	if (*pcVar6 == '\x15') {
		*pcVar6 = '\x16';
	}
	if (*pcVar6 == '\x17') {
		*pcVar6 = '\x1d';
	}
	lVar9 = random(0, param_3 + -3, (char)param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb);
	iVar1 = (int)(param_1 * 0x28);
	iVar8 = (int)lVar9 + 1;
	puVar5 = puVar2 + iVar8 + (int)param_2 + iVar1;
	pcVar10[iVar8] = '5';
	puVar5[2] = 0x34;
	puVar5[1] = 6;
	if (puVar5[-0x28] == '\x06') {
		puVar5[-0x28] = 0x36;
	}
	pcVar10 = puVar2 + iVar8 + (int)param_2 + iVar1 + -0x29;
	if (*pcVar10 == '\x06') {
		*pcVar10 = '7';
	}
	return;
}

longlong L4AddWall(char param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	longlong lVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	char *pcVar11;
	char *pcVar12;
	char *pcVar13;
	char *pcVar14;
	longlong lVar15;
	longlong lVar16;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined in_stack_ffffffcb;

	lVar10 = (longlong)param_8;
	lVar9 = (longlong)param_7;
	lVar8 = (longlong)param_6;
	lVar7 = (longlong)param_5;
	lVar6 = (longlong)param_4;
	lVar5 = (longlong)param_3;
	lVar1 = (longlong)param_1;
	lVar15 = 0;
	pcVar11 = PTR_DAT_100f1abc;
	pcVar12 = PTR_DAT_100f1804;
	do {
		lVar16 = 0;
		pcVar13 = pcVar11;
		pcVar14 = pcVar12;
		do {
			if (*pcVar13 == '\0') {
				iVar3 = (int)lVar16;
				iVar4 = (int)lVar15;
				if ((*pcVar14 == '\n') && (lVar1 = random(0, 100, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb), (int)lVar1 < 100)) {
					iVar2 = L4HWallOk(iVar3, iVar4);
					lVar1 = (longlong)iVar2;
					lVar5 = lVar1;
					if (iVar2 != -1) {
						lVar5 = lVar1;
						lVar1 = L4HorizWall(iVar3, iVar4, lVar1, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9,
						    (char)lVar10, in_stack_ffffffb8);
					}
				}
				if ((*pcVar14 == '\f') && (lVar1 = random(0, 100, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb), (int)lVar1 < 100)) {
					iVar2 = L4HWallOk(iVar3, iVar4);
					lVar1 = (longlong)iVar2;
					lVar5 = lVar1;
					if (iVar2 != -1) {
						lVar5 = lVar1;
						lVar1 = L4HorizWall(iVar3, iVar4, lVar1, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9,
						    (char)lVar10, in_stack_ffffffb8);
					}
				}
				if ((*pcVar14 == '\r') && (lVar1 = random(0, 100, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb), (int)lVar1 < 100)) {
					iVar2 = L4HWallOk(iVar3, iVar4);
					lVar1 = (longlong)iVar2;
					lVar5 = lVar1;
					if (iVar2 != -1) {
						lVar5 = lVar1;
						lVar1 = L4HorizWall(iVar3, iVar4, lVar1, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9,
						    (char)lVar10, in_stack_ffffffb8);
					}
				}
				if ((*pcVar14 == '\x0f') && (lVar1 = random(0, 100, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb), (int)lVar1 < 100)) {
					iVar2 = L4HWallOk(iVar3, iVar4);
					lVar1 = (longlong)iVar2;
					lVar5 = lVar1;
					if (iVar2 != -1) {
						lVar5 = lVar1;
						lVar1 = L4HorizWall(iVar3, iVar4, lVar1, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9,
						    (char)lVar10, in_stack_ffffffb8);
					}
				}
				if ((*pcVar14 == '\x10') && (lVar1 = random(0, 100, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb), (int)lVar1 < 100)) {
					iVar2 = L4HWallOk(iVar3, iVar4);
					lVar1 = (longlong)iVar2;
					lVar5 = lVar1;
					if (iVar2 != -1) {
						lVar5 = lVar1;
						lVar1 = L4HorizWall(iVar3, iVar4, lVar1, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9,
						    (char)lVar10, in_stack_ffffffb8);
					}
				}
				if ((*pcVar14 == '\x15') && (lVar1 = random(0, 100, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb), (int)lVar1 < 100)) {
					iVar2 = L4HWallOk(iVar3, iVar4);
					lVar1 = (longlong)iVar2;
					lVar5 = lVar1;
					if (iVar2 != -1) {
						lVar5 = lVar1;
						lVar1 = L4HorizWall(iVar3, iVar4, lVar1, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9,
						    (char)lVar10, in_stack_ffffffb8);
					}
				}
				if ((*pcVar14 == '\x16') && (lVar1 = random(0, 100, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb), (int)lVar1 < 100)) {
					iVar2 = L4HWallOk(iVar3, iVar4);
					lVar1 = (longlong)iVar2;
					lVar5 = lVar1;
					if (iVar2 != -1) {
						lVar5 = lVar1;
						lVar1 = L4HorizWall(iVar3, iVar4, lVar1, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9,
						    (char)lVar10, in_stack_ffffffb8);
					}
				}
				if ((*pcVar14 == '\b') && (lVar1 = random(0, 100, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb), (int)lVar1 < 100)) {
					iVar2 = L4VWallOk(iVar3, iVar4);
					lVar1 = (longlong)iVar2;
					lVar5 = lVar1;
					if (iVar2 != -1) {
						lVar5 = lVar1;
						lVar1 = L4VertWall(lVar16, lVar15, lVar1, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8);
					}
				}
				if ((*pcVar14 == '\t') && (lVar1 = random(0, 100, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb), (int)lVar1 < 100)) {
					iVar2 = L4VWallOk(iVar3, iVar4);
					lVar1 = (longlong)iVar2;
					lVar5 = lVar1;
					if (iVar2 != -1) {
						lVar5 = lVar1;
						lVar1 = L4VertWall(lVar16, lVar15, lVar1, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8);
					}
				}
				if ((*pcVar14 == '\v') && (lVar1 = random(0, 100, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb), (int)lVar1 < 100)) {
					iVar2 = L4VWallOk(iVar3, iVar4);
					lVar1 = (longlong)iVar2;
					lVar5 = lVar1;
					if (iVar2 != -1) {
						lVar5 = lVar1;
						lVar1 = L4VertWall(lVar16, lVar15, lVar1, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8);
					}
				}
				if ((*pcVar14 == '\x0e') && (lVar1 = random(0, 100, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb), (int)lVar1 < 100)) {
					iVar2 = L4VWallOk(iVar3, iVar4);
					lVar1 = (longlong)iVar2;
					lVar5 = lVar1;
					if (iVar2 != -1) {
						lVar5 = lVar1;
						lVar1 = L4VertWall(lVar16, lVar15, lVar1, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8);
					}
				}
				if ((*pcVar14 == '\x0f') && (lVar1 = random(0, 100, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb), (int)lVar1 < 100)) {
					iVar2 = L4VWallOk(iVar3, iVar4);
					lVar1 = (longlong)iVar2;
					lVar5 = lVar1;
					if (iVar2 != -1) {
						lVar5 = lVar1;
						lVar1 = L4VertWall(lVar16, lVar15, lVar1, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8);
					}
				}
				if ((*pcVar14 == '\x10') && (lVar1 = random(0, 100, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb), (int)lVar1 < 100)) {
					iVar2 = L4VWallOk(iVar3, iVar4);
					lVar1 = (longlong)iVar2;
					lVar5 = lVar1;
					if (iVar2 != -1) {
						lVar5 = lVar1;
						lVar1 = L4VertWall(lVar16, lVar15, lVar1, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8);
					}
				}
				if ((*pcVar14 == '\x15') && (lVar1 = random(0, 100, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb), (int)lVar1 < 100)) {
					iVar2 = L4VWallOk(iVar3, iVar4);
					lVar1 = (longlong)iVar2;
					lVar5 = lVar1;
					if (iVar2 != -1) {
						lVar5 = lVar1;
						lVar1 = L4VertWall(lVar16, lVar15, lVar1, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8);
					}
				}
				if ((*pcVar14 == '\x17') && (lVar1 = random(0, 100, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb), (int)lVar1 < 100)) {
					iVar3 = L4VWallOk(iVar3, iVar4);
					lVar1 = (longlong)iVar3;
					lVar5 = lVar1;
					if (iVar3 != -1) {
						lVar5 = lVar1;
						lVar1 = L4VertWall(lVar16, lVar15, lVar1, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8);
					}
				}
			}
			lVar16 = lVar16 + 1;
			pcVar14 = pcVar14 + 0x28;
			pcVar13 = pcVar13 + 0x28;
		} while ((int)lVar16 < 0x28);
		lVar15 = lVar15 + 1;
		pcVar12 = pcVar12 + 1;
		pcVar11 = pcVar11 + 1;
	} while ((int)lVar15 < 0x28);
	return lVar1;
}

void L4tileFix(void)

{
	char *pcVar1;
	char *pcVar2;
	char *pcVar3;
	char *pcVar4;
	int iVar5;
	longlong lVar6;

	pcVar4 = PTR_DAT_100f1804;
	iVar5 = 0;
	pcVar3 = PTR_DAT_100f1804;
	do {
		lVar6 = 0x14;
		pcVar2 = pcVar3;
		do {
			if ((*pcVar2 == '\x02') && (pcVar2[0x28] == '\x06')) {
				pcVar2[0x28] = '\x05';
			}
			if ((*pcVar2 == '\x02') && (pcVar2[0x28] == '\x01')) {
				pcVar2[0x28] = '\r';
			}
			if ((*pcVar2 == '\x01') && (pcVar2[1] == '\x02')) {
				pcVar2[1] = '\x0e';
			}
			pcVar1 = pcVar2 + 0x28;
			if ((*pcVar1 == '\x02') && (pcVar2[0x50] == '\x06')) {
				pcVar2[0x50] = '\x05';
			}
			if ((*pcVar1 == '\x02') && (pcVar2[0x50] == '\x01')) {
				pcVar2[0x50] = '\r';
			}
			if ((*pcVar1 == '\x01') && (pcVar2[0x29] == '\x02')) {
				pcVar2[0x29] = '\x0e';
			}
			pcVar2 = pcVar2 + 0x50;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
		iVar5 = iVar5 + 1;
		pcVar3 = pcVar3 + 1;
	} while (iVar5 < 0x28);
	iVar5 = 0;
	pcVar3 = pcVar4;
	do {
		lVar6 = 0x28;
		pcVar2 = pcVar3;
		do {
			if ((*pcVar2 == '\x02') && (pcVar2[0x28] == '\x06')) {
				pcVar2[0x28] = '\x02';
			}
			if ((*pcVar2 == '\x02') && (pcVar2[0x28] == '\t')) {
				pcVar2[0x28] = '\v';
			}
			if ((*pcVar2 == '\t') && (pcVar2[0x28] == '\x06')) {
				pcVar2[0x28] = '\f';
			}
			if ((*pcVar2 == '\x0e') && (pcVar2[0x28] == '\x01')) {
				pcVar2[0x28] = '\r';
			}
			if ((*pcVar2 == '\x06') && (pcVar2[0x28] == '\x0e')) {
				pcVar2[0x28] = '\x0f';
			}
			if ((*pcVar2 == '\x06') && (pcVar2[1] == '\r')) {
				pcVar2[1] = '\x10';
			}
			if ((*pcVar2 == '\x01') && (pcVar2[1] == '\t')) {
				pcVar2[1] = '\n';
			}
			if ((*pcVar2 == '\x06') && (pcVar2[-1] == '\x01')) {
				pcVar2[-1] = '\x01';
			}
			pcVar2 = pcVar2 + 0x28;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
		iVar5 = iVar5 + 1;
		pcVar3 = pcVar3 + 1;
	} while (iVar5 < 0x28);
	iVar5 = 0;
	pcVar3 = pcVar4;
	do {
		lVar6 = 0x28;
		pcVar2 = pcVar3;
		do {
			if ((*pcVar2 == '\r') && (pcVar2[1] == '\x1e')) {
				pcVar2[1] = '\x1b';
			}
			if ((*pcVar2 == '\x1b') && (pcVar2[0x28] == '\x1e')) {
				pcVar2[0x28] = '\x13';
			}
			if ((*pcVar2 == '\x01') && (pcVar2[1] == '\x1e')) {
				pcVar2[1] = '\x1b';
			}
			if ((*pcVar2 == '\x1b') && (pcVar2[0x28] == '\x01')) {
				pcVar2[0x28] = '\x10';
			}
			if ((*pcVar2 == '\x13') && (pcVar2[0x28] == '\x1b')) {
				pcVar2[0x28] = '\x1a';
			}
			if ((*pcVar2 == '\x1b') && (pcVar2[0x28] == '\x1e')) {
				pcVar2[0x28] = '\x13';
			}
			if ((*pcVar2 == '\x02') && (pcVar2[0x28] == '\x0f')) {
				pcVar2[0x28] = '\x0e';
			}
			if ((*pcVar2 == '\x0e') && (pcVar2[0x28] == '\x0f')) {
				pcVar2[0x28] = '\x0e';
			}
			if ((*pcVar2 == '\x16') && (pcVar2[0x28] == '\x01')) {
				pcVar2[0x28] = '\x10';
			}
			if ((*pcVar2 == '\x1b') && (pcVar2[0x28] == '\x01')) {
				pcVar2[0x28] = '\x10';
			}
			if (((*pcVar2 == '\x06') && (pcVar2[0x28] == '\x1b')) && (pcVar2[0x29] != '\0')) {
				pcVar2[0x28] = '\x16';
			}
			if ((*pcVar2 == '\x16') && (pcVar2[0x28] == '\x1e')) {
				pcVar2[0x28] = '\x13';
			}
			if (((*pcVar2 == '\x15') && (pcVar2[0x28] == '\x01')) && (pcVar2[0x27] == '\x01')) {
				pcVar2[0x28] = '\r';
			}
			if (((*pcVar2 == '\x0e') && (pcVar2[0x28] == '\x1e')) && (pcVar2[1] == '\x06')) {
				pcVar2[0x28] = '\x1c';
			}
			if (((*pcVar2 == '\x10') && (pcVar2[0x28] == '\x06')) && (pcVar2[1] == '\x1e')) {
				pcVar2[1] = '\x1b';
			}
			if (((*pcVar2 == '\x10') && (pcVar2[1] == '\x1e')) && (pcVar2[0x29] == '\x1e')) {
				pcVar2[1] = '\x1b';
			}
			if (((*pcVar2 == '\x06') && (pcVar2[0x28] == '\x1e')) && (pcVar2[0x27] == '\x06')) {
				pcVar2[0x28] = '\x15';
			}
			if (((*pcVar2 == '\x02') && (pcVar2[0x28] == '\x1b')) && (pcVar2[0x29] == '\t')) {
				pcVar2[0x28] = '\x1d';
			}
			if ((*pcVar2 == '\t') && (pcVar2[0x28] == '\x0f')) {
				pcVar2[0x28] = '\x0e';
			}
			if (((*pcVar2 == '\x0f') && (pcVar2[0x28] == '\x1b')) && (pcVar2[0x29] == '\x02')) {
				pcVar2[0x28] = '\x1d';
			}
			if ((*pcVar2 == '\x13') && (pcVar2[0x28] == '\x12')) {
				pcVar2[0x28] = '\x18';
			}
			if ((*pcVar2 == '\t') && (pcVar2[0x28] == '\x0f')) {
				pcVar2[0x28] = '\x0e';
			}
			if (((*pcVar2 == '\x13') && (pcVar2[0x28] == '\x13')) && (pcVar2[0x27] == '\x1e')) {
				pcVar2[0x28] = '\x18';
			}
			if (((*pcVar2 == '\x18') && (pcVar2[-1] == '\x1e')) && (pcVar2[-2] == '\x06')) {
				pcVar2[-1] = '\x15';
			}
			if ((*pcVar2 == '\x02') && (pcVar2[0x28] == '\x1e')) {
				pcVar2[0x28] = '\x1c';
			}
			if ((*pcVar2 == '\x0f') && (pcVar2[0x28] == '\x1e')) {
				pcVar2[0x28] = '\x1c';
			}
			if ((*pcVar2 == '\x1c') && (pcVar2[1] == '\x1e')) {
				pcVar2[1] = '\x12';
			}
			if ((*pcVar2 == '\x1c') && (pcVar2[1] == '\x02')) {
				pcVar2[1] = '\x0f';
			}
			if ((((*pcVar2 == '\x13') && (pcVar2[0x50] == '\x02')) && (pcVar2[0x27] == '\x12')) && (pcVar2[0x29] == '\x01')) {
				pcVar2[0x28] = '\x11';
			}
			if (((*pcVar2 == '\x13') && (pcVar2[0x50] == '\x02')) && ((pcVar2[0x27] == '\x16' && (pcVar2[0x29] == '\x01')))) {
				pcVar2[0x28] = '\x11';
			}
			if (((*pcVar2 == '\x13') && (pcVar2[0x50] == '\x02')) && ((pcVar2[0x27] == '\x12' && (pcVar2[0x29] == '\r')))) {
				pcVar2[0x28] = '\x11';
			}
			if ((((*pcVar2 == '\x15') && (pcVar2[0x50] == '\x02')) && (pcVar2[0x27] == '\x12')) && (pcVar2[0x29] == '\x01')) {
				pcVar2[0x28] = '\x11';
			}
			if (((*pcVar2 == '\x15') && (pcVar2[0x29] == '\x01')) && ((pcVar2[0x27] == '\x16' && (pcVar2[0x50] == '\x03')))) {
				pcVar2[0x28] = '\x11';
			}
			if (((*pcVar2 == '\x0f') && (pcVar2[0x28] == '\x1c')) && ((pcVar2[0x50] == '\x1e' && (pcVar2[0x27] == '\x06')))) {
				pcVar2[0x28] = '\x17';
			}
			if (((*pcVar2 == '\x0e') && (pcVar2[0x28] == '\x1c')) && (pcVar2[0x50] == '\x01')) {
				pcVar2[0x28] = '\x17';
			}
			if (((*pcVar2 == '\x0f') && (pcVar2[0x28] == '\x1b')) && (pcVar2[0x29] == '\x1e')) {
				pcVar2[0x28] = '\x1d';
			}
			if ((*pcVar2 == '\x1c') && (pcVar2[1] == '\t')) {
				pcVar2[1] = '\x0f';
			}
			if ((*pcVar2 == '\x15') && (pcVar2[0x27] == '\x15')) {
				pcVar2[0x28] = '\x18';
			}
			if (((*pcVar2 == '\x02') && (pcVar2[0x28] == '\x1b')) && (pcVar2[0x29] == '\x1e')) {
				pcVar2[0x28] = '\x1d';
			}
			if ((*pcVar2 == '\x02') && (pcVar2[0x28] == '\x12')) {
				pcVar2[0x28] = '\x19';
			}
			if (((*pcVar2 == '\x15') && (pcVar2[0x28] == '\t')) && (pcVar2[0x50] == '\x02')) {
				pcVar2[0x28] = '\v';
			}
			if ((*pcVar2 == '\x13') && (pcVar2[0x28] == '\n')) {
				pcVar2[0x28] = '\x11';
			}
			if ((*pcVar2 == '\x0f') && (pcVar2[1] == '\x03')) {
				pcVar2[1] = '\x04';
			}
			if ((*pcVar2 == '\x16') && (pcVar2[1] == '\t')) {
				pcVar2[1] = '\x0f';
			}
			if ((*pcVar2 == '\x12') && (pcVar2[1] == '\x1e')) {
				pcVar2[1] = '\x12';
			}
			if ((*pcVar2 == '\x18') && (pcVar2[-0x28] == '\x1e')) {
				pcVar2[-0x28] = '\x13';
			}
			if ((*pcVar2 == '\x15') && (pcVar2[1] == '\x02')) {
				pcVar2[1] = '\x0f';
			}
			if ((*pcVar2 == '\x15') && (pcVar2[1] == '\t')) {
				pcVar2[1] = '\n';
			}
			if ((*pcVar2 == '\x16') && (pcVar2[1] == '\x1e')) {
				pcVar2[1] = '\x12';
			}
			if ((*pcVar2 == '\x15') && (pcVar2[1] == '\x1e')) {
				pcVar2[1] = '\x12';
			}
			if ((*pcVar2 == '\x10') && (pcVar2[1] == '\x02')) {
				pcVar2[1] = '\x0f';
			}
			if ((*pcVar2 == '\r') && (pcVar2[1] == '\x02')) {
				pcVar2[1] = '\x0f';
			}
			if ((*pcVar2 == '\x16') && (pcVar2[1] == '\x02')) {
				pcVar2[1] = '\x0f';
			}
			if (((*pcVar2 == '\x15') && (pcVar2[0x28] == '\x12')) && (pcVar2[0x50] == '\x1e')) {
				pcVar2[0x28] = '\x18';
			}
			if (((*pcVar2 == '\x15') && (pcVar2[0x28] == '\t')) && (pcVar2[0x29] == '\x01')) {
				pcVar2[0x28] = '\x10';
			}
			if (((*pcVar2 == '\x02') && (pcVar2[0x28] == '\x1b')) && (pcVar2[0x29] == '\x02')) {
				pcVar2[0x28] = '\x1d';
			}
			if ((*pcVar2 == '\x17') && (pcVar2[1] == '\x02')) {
				pcVar2[1] = '\x0f';
			}
			if ((*pcVar2 == '\x17') && (pcVar2[1] == '\t')) {
				pcVar2[1] = '\x0f';
			}
			if ((*pcVar2 == '\x19') && (pcVar2[1] == '\x02')) {
				pcVar2[1] = '\x0f';
			}
			if ((*pcVar2 == '\x16') && (pcVar2[0x28] == '\t')) {
				pcVar2[0x28] = '\v';
			}
			if ((*pcVar2 == '\x17') && (pcVar2[0x28] == '\t')) {
				pcVar2[0x28] = '\v';
			}
			if ((*pcVar2 == '\x0f') && (pcVar2[0x28] == '\x01')) {
				pcVar2[0x28] = '\x10';
			}
			if ((*pcVar2 == '\v') && (pcVar2[0x28] == '\x0f')) {
				pcVar2[0x28] = '\x0e';
			}
			if ((*pcVar2 == '\x17') && (pcVar2[0x28] == '\x01')) {
				pcVar2[0x28] = '\x10';
			}
			if ((*pcVar2 == '\x15') && (pcVar2[0x28] == '\x1b')) {
				pcVar2[0x28] = '\x1a';
			}
			if ((*pcVar2 == '\x15') && (pcVar2[0x28] == '\x12')) {
				pcVar2[0x28] = '\x18';
			}
			if ((*pcVar2 == '\x1a') && (pcVar2[0x28] == '\x01')) {
				pcVar2[0x28] = '\x10';
			}
			if ((*pcVar2 == '\x1d') && (pcVar2[0x28] == '\x01')) {
				pcVar2[0x28] = '\x10';
			}
			if ((*pcVar2 == '\x1d') && (pcVar2[1] == '\x02')) {
				pcVar2[1] = '\x0f';
			}
			if ((*pcVar2 == '\x01') && (pcVar2[-1] == '\x0f')) {
				pcVar2[-1] = '\n';
			}
			if ((*pcVar2 == '\x12') && (pcVar2[1] == '\x02')) {
				pcVar2[1] = '\x0f';
			}
			if ((*pcVar2 == '\x17') && (pcVar2[1] == '\x1e')) {
				pcVar2[1] = '\x12';
			}
			if ((*pcVar2 == '\x12') && (pcVar2[1] == '\t')) {
				pcVar2[1] = '\n';
			}
			if (((*pcVar2 == '\x0e') && (pcVar2[0x28] == '\x1e')) && (pcVar2[0x29] == '\x1e')) {
				pcVar2[0x28] = '\x17';
			}
			if (((*pcVar2 == '\x02') && (pcVar2[0x28] == '\x1c')) && (pcVar2[0x27] == '\x06')) {
				pcVar2[0x28] = '\x17';
			}
			if (((*pcVar2 == '\x17') && (pcVar2[0x28] == '\x12')) && (pcVar2[-1] == '\x06')) {
				pcVar2[0x28] = '\x18';
			}
			if (((*pcVar2 == '\x0e') && (pcVar2[0x28] == '\x17')) && (pcVar2[0x50] == '\x1e')) {
				pcVar2[0x28] = '\x1c';
			}
			if (((*pcVar2 == '\x0e') && (pcVar2[0x28] == '\x1c')) && ((pcVar2[0x50] == '\x1e' && (pcVar2[0x27] == '\x06')))) {
				pcVar2[0x28] = '\x17';
			}
			if ((*pcVar2 == '\x17') && (pcVar2[0x28] == '\x1e')) {
				pcVar2[0x28] = '\x13';
			}
			if ((*pcVar2 == '\x1d') && (pcVar2[0x28] == '\x1e')) {
				pcVar2[0x28] = '\x13';
			}
			if ((*pcVar2 == '\x1d') && (pcVar2[1] == '\x1e')) {
				pcVar2[1] = '\x12';
			}
			if ((*pcVar2 == '\x13') && (pcVar2[0x28] == '\x1e')) {
				pcVar2[0x28] = '\x13';
			}
			if ((*pcVar2 == '\x15') && (pcVar2[0x28] == '\x1e')) {
				pcVar2[0x28] = '\x13';
			}
			if ((*pcVar2 == '\x1a') && (pcVar2[0x28] == '\x1e')) {
				pcVar2[0x28] = '\x13';
			}
			if ((*pcVar2 == '\x10') && (pcVar2[1] == '\x1e')) {
				pcVar2[1] = '\x12';
			}
			if ((*pcVar2 == '\r') && (pcVar2[1] == '\t')) {
				pcVar2[1] = '\n';
			}
			if ((*pcVar2 == '\x19') && (pcVar2[1] == '\x1e')) {
				pcVar2[1] = '\x12';
			}
			if ((*pcVar2 == '\x12') && (pcVar2[1] == '\x02')) {
				pcVar2[1] = '\x0f';
			}
			if ((*pcVar2 == '\v') && (pcVar2[0x28] == '\x03')) {
				pcVar2[0x28] = '\x05';
			}
			if ((*pcVar2 == '\x13') && (pcVar2[0x28] == '\t')) {
				pcVar2[0x28] = '\v';
			}
			if ((*pcVar2 == '\x13') && (pcVar2[0x28] == '\x01')) {
				pcVar2[0x28] = '\r';
			}
			if (((*pcVar2 == '\x13') && (pcVar2[0x28] == '\r')) && (pcVar2[0x27] == '\x06')) {
				pcVar2[0x28] = '\x10';
			}
			pcVar2 = pcVar2 + 0x28;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
		iVar5 = iVar5 + 1;
		pcVar3 = pcVar3 + 1;
	} while (iVar5 < 0x28);
	iVar5 = 0;
	pcVar3 = pcVar4;
	do {
		lVar6 = 0x28;
		pcVar2 = pcVar3;
		do {
			if (((*pcVar2 == '\x15') && (pcVar2[1] == '\x18')) && (pcVar2[2] == '\x01')) {
				pcVar2[1] = '\x11';
			}
			if (((*pcVar2 == '\x0f') && (pcVar2[0x29] == '\t')) && ((pcVar2[0x27] == '\x01' && (pcVar2[0x50] == '\x10')))) {
				pcVar2[0x28] = '\x1d';
			}
			if ((*pcVar2 == '\x02') && (pcVar2[-0x28] == '\x06')) {
				pcVar2[-0x28] = '\b';
			}
			if ((*pcVar2 == '\x01') && (pcVar2[-1] == '\x06')) {
				pcVar2[-1] = '\a';
			}
			if (((*pcVar2 == '\x06') && (pcVar2[0x28] == '\x0f')) && (pcVar2[0x29] == '\x04')) {
				pcVar2[0x28] = '\n';
			}
			if ((*pcVar2 == '\x01') && (pcVar2[1] == '\x03')) {
				pcVar2[1] = '\x04';
			}
			if ((*pcVar2 == '\x01') && (pcVar2[1] == '\x06')) {
				pcVar2[1] = '\x04';
			}
			if ((*pcVar2 == '\t') && (pcVar2[1] == '\x03')) {
				pcVar2[1] = '\x04';
			}
			if ((*pcVar2 == '\n') && (pcVar2[1] == '\x03')) {
				pcVar2[1] = '\x04';
			}
			if ((*pcVar2 == '\r') && (pcVar2[1] == '\x03')) {
				pcVar2[1] = '\x04';
			}
			if ((*pcVar2 == '\x01') && (pcVar2[1] == '\x05')) {
				pcVar2[1] = '\f';
			}
			if ((*pcVar2 == '\x01') && (pcVar2[1] == '\x10')) {
				pcVar2[1] = '\r';
			}
			if ((*pcVar2 == '\x06') && (pcVar2[1] == '\r')) {
				pcVar2[1] = '\x10';
			}
			if ((*pcVar2 == '\x19') && (pcVar2[1] == '\t')) {
				pcVar2[1] = '\n';
			}
			if ((*pcVar2 == '\r') && (pcVar2[1] == '\x05')) {
				pcVar2[1] = '\f';
			}
			if (((*pcVar2 == '\x1c') && (pcVar2[-1] == '\x06')) && (pcVar2[0x28] == '\x01')) {
				pcVar2[0x28] = '\x17';
			}
			if ((*pcVar2 == '\x13') && (pcVar2[0x28] == '\n')) {
				pcVar2[0x28] = '\x11';
			}
			if ((*pcVar2 == '\x15') && (pcVar2[0x28] == '\t')) {
				pcVar2[0x28] = '\v';
			}
			if ((*pcVar2 == '\v') && (pcVar2[0x28] == '\x03')) {
				pcVar2[0x28] = '\x05';
			}
			if ((*pcVar2 == '\n') && (pcVar2[0x28] == '\x04')) {
				pcVar2[0x28] = '\f';
			}
			if ((*pcVar2 == '\x0e') && (pcVar2[0x28] == '\x04')) {
				pcVar2[0x28] = '\f';
			}
			if ((*pcVar2 == '\x1b') && (pcVar2[0x28] == '\t')) {
				pcVar2[0x28] = '\v';
			}
			if ((*pcVar2 == '\x0f') && (pcVar2[0x28] == '\x04')) {
				pcVar2[0x28] = '\f';
			}
			if ((*pcVar2 == '\x15') && (pcVar2[0x28] == '\x01')) {
				pcVar2[0x28] = '\x10';
			}
			if ((*pcVar2 == '\v') && (pcVar2[0x28] == '\x04')) {
				pcVar2[0x28] = '\f';
			}
			if ((*pcVar2 == '\x02') && (pcVar2[0x28] == '\x03')) {
				pcVar2[0x28] = '\x05';
			}
			if ((*pcVar2 == '\t') && (pcVar2[0x28] == '\x03')) {
				pcVar2[0x28] = '\x05';
			}
			if ((*pcVar2 == '\x0e') && (pcVar2[0x28] == '\x03')) {
				pcVar2[0x28] = '\x05';
			}
			if ((*pcVar2 == '\x0f') && (pcVar2[0x28] == '\x03')) {
				pcVar2[0x28] = '\x05';
			}
			if (((*pcVar2 == '\x02') && (pcVar2[0x28] == '\x05')) && (pcVar2[0x27] == '\x10')) {
				pcVar2[0x28] = '\f';
			}
			if ((*pcVar2 == '\x02') && (pcVar2[0x28] == '\x04')) {
				pcVar2[0x28] = '\f';
			}
			if ((*pcVar2 == '\t') && (pcVar2[0x28] == '\x04')) {
				pcVar2[0x28] = '\f';
			}
			if ((*pcVar2 == '\x01') && (pcVar2[-1] == '\b')) {
				pcVar2[-1] = '\t';
			}
			if (((*pcVar2 == '\x1c') && (pcVar2[0x28] == '\x17')) && (pcVar2[0x29] == '\x03')) {
				pcVar2[0x28] = '\x10';
			}
			pcVar2 = pcVar2 + 0x28;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
		iVar5 = iVar5 + 1;
		pcVar3 = pcVar3 + 1;
	} while (iVar5 < 0x28);
	iVar5 = 0;
	pcVar3 = pcVar4;
	do {
		lVar6 = 0x28;
		pcVar2 = pcVar3;
		do {
			if ((*pcVar2 == '\x15') && (pcVar2[0x28] == '\n')) {
				pcVar2[0x28] = '\x11';
			}
			if ((*pcVar2 == '\x11') && (pcVar2[0x28] == '\x04')) {
				pcVar2[0x28] = '\f';
			}
			if ((*pcVar2 == '\n') && (pcVar2[0x28] == '\x04')) {
				pcVar2[0x28] = '\f';
			}
			if ((*pcVar2 == '\x11') && (pcVar2[1] == '\x05')) {
				pcVar2[1] = '\f';
			}
			if ((*pcVar2 == '\x1d') && (pcVar2[1] == '\t')) {
				pcVar2[1] = '\n';
			}
			if ((*pcVar2 == '\r') && (pcVar2[1] == '\x05')) {
				pcVar2[1] = '\f';
			}
			if ((*pcVar2 == '\t') && (pcVar2[1] == '\x10')) {
				pcVar2[1] = '\r';
			}
			if ((*pcVar2 == '\n') && (pcVar2[1] == '\x10')) {
				pcVar2[1] = '\r';
			}
			if ((*pcVar2 == '\x10') && (pcVar2[1] == '\x03')) {
				pcVar2[1] = '\x04';
			}
			if ((*pcVar2 == '\v') && (pcVar2[1] == '\x05')) {
				pcVar2[1] = '\f';
			}
			if (((*pcVar2 == '\n') && (pcVar2[0x28] == '\x03')) && (pcVar2[0x27] == '\x10')) {
				pcVar2[0x28] = '\f';
			}
			if ((*pcVar2 == '\x10') && (pcVar2[1] == '\x05')) {
				pcVar2[1] = '\f';
			}
			if ((*pcVar2 == '\x01') && (pcVar2[1] == '\x06')) {
				pcVar2[1] = '\x04';
			}
			if (((*pcVar2 == '\x15') && (pcVar2[0x28] == '\r')) && (pcVar2[1] == '\n')) {
				pcVar2[0x29] = '\f';
			}
			if ((*pcVar2 == '\x0f') && (pcVar2[0x28] == '\n')) {
				pcVar2[0x28] = '\x11';
			}
			if ((*pcVar2 == '\x16') && (pcVar2[1] == '\v')) {
				pcVar2[1] = '\x11';
			}
			if (((*pcVar2 == '\x0f') && (pcVar2[0x28] == '\x1c')) && (pcVar2[0x50] == '\x10')) {
				pcVar2[0x28] = '\x17';
			}
			if (((*pcVar2 == '\x1c') && (pcVar2[0x28] == '\x17')) && ((pcVar2[0x29] == '\x01' && (pcVar2[0x50] == '\x06')))) {
				pcVar2[0x28] = '\x10';
			}
			pcVar2 = pcVar2 + 0x28;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
		iVar5 = iVar5 + 1;
		pcVar3 = pcVar3 + 1;
	} while (iVar5 < 0x28);
	iVar5 = 0;
	do {
		lVar6 = 0x14;
		pcVar3 = pcVar4;
		do {
			if (((*pcVar3 == '\x0f') && (pcVar3[0x28] == '\x1c')) && (pcVar3[0x50] == '\x10')) {
				pcVar3[0x28] = '\x17';
			}
			if ((((*pcVar3 == '\x15') && (pcVar3[0x27] == '\x15')) && (pcVar3[0x29] == '\r')) && (pcVar3[0x50] == '\x02')) {
				pcVar3[0x28] = '\x11';
			}
			if (((*pcVar3 == '\x13') && (pcVar3[0x28] == '\x0f')) && (pcVar3[0x29] == '\f')) {
				pcVar3[0x28] = '\x11';
			}
			pcVar2 = pcVar3 + 0x28;
			if (((*pcVar2 == '\x0f') && (pcVar3[0x50] == '\x1c')) && (pcVar3[0x78] == '\x10')) {
				pcVar3[0x50] = '\x17';
			}
			if ((((*pcVar2 == '\x15') && (pcVar3[0x4f] == '\x15')) && (pcVar3[0x51] == '\r')) && (pcVar3[0x78] == '\x02')) {
				pcVar3[0x50] = '\x11';
			}
			if (((*pcVar2 == '\x13') && (pcVar3[0x50] == '\x0f')) && (pcVar3[0x51] == '\f')) {
				pcVar3[0x50] = '\x11';
			}
			pcVar3 = pcVar3 + 0x50;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
		iVar5 = iVar5 + 1;
		pcVar4 = pcVar4 + 1;
	} while (iVar5 < 0x28);
	return;
}

void DRLG_L4Subs(undefined param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	char cVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	int iVar10;
	int iVar11;
	char *pcVar12;
	byte *pbVar13;
	byte *pbVar14;
	char *pcVar15;
	char *pcVar16;
	byte *pbVar17;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	pcVar12 = PTR_DAT_100f1abc;
	pbVar13 = PTR_DAT_100f1804;
	lVar9 = (longlong)param_8;
	lVar8 = (longlong)param_7;
	lVar7 = (longlong)param_6;
	lVar6 = (longlong)param_5;
	lVar5 = (longlong)param_4;
	lVar4 = (longlong)param_3;
	iVar10 = 0;
	pcVar15 = PTR_DAT_100f1abc;
	pbVar14 = PTR_DAT_100f1804;
	do {
		iVar11 = 0;
		pcVar16 = pcVar15;
		pbVar17 = pbVar14;
		do {
			lVar2 = random(0, 3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8,
			    (char)lVar9, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
			if ((((int)lVar2 == 0) && (cVar1 = (&DAT_100f8dc3)[(uint)*pbVar17], cVar1 != '\0')) && (*pcVar16 == '\0')) {
				lVar2 = random(0, 0x10, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8,
				    (char)lVar9, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
				lVar3 = -1;
				while (-1 < (int)lVar2) {
					lVar3 = lVar3 + 1;
					if ((int)lVar3 == 0x8c) {
						lVar3 = 0;
					}
					if (cVar1 == (&DAT_100f8dc3)[(int)lVar3]) {
						lVar2 = lVar2 + -1;
					}
				}
				*pbVar17 = (byte)lVar3;
			}
			iVar11 = iVar11 + 1;
			pcVar16 = pcVar16 + 0x28;
			pbVar17 = pbVar17 + 0x28;
		} while (iVar11 < 0x28);
		iVar10 = iVar10 + 1;
		pcVar15 = pcVar15 + 1;
		pbVar14 = pbVar14 + 1;
	} while (iVar10 < 0x28);
	iVar10 = 0;
	do {
		iVar11 = 0;
		pcVar15 = pcVar12;
		pbVar14 = pbVar13;
		do {
			lVar2 = random(0, 10, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8,
			    (char)lVar9, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
			if ((((int)lVar2 == 0) && ((&DAT_100f8dc3)[(uint)*pbVar14] == '\x06')) && (*pcVar15 == '\0')) {
				lVar2 = random(0, 3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8,
				    (char)lVar9, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
				*pbVar14 = (char)lVar2 + 0x5f;
			}
			iVar11 = iVar11 + 1;
			pcVar15 = pcVar15 + 0x28;
			pbVar14 = pbVar14 + 0x28;
		} while (iVar11 < 0x28);
		iVar10 = iVar10 + 1;
		pcVar12 = pcVar12 + 1;
		pbVar13 = pbVar13 + 1;
	} while (iVar10 < 0x28);
	return;
}

void L4makeDungeon(void)

{
	undefined *puVar1;
	undefined *puVar2;
	int iVar3;
	undefined *puVar4;
	undefined *puVar5;
	int iVar6;
	undefined *puVar7;
	int iVar8;
	undefined *puVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	longlong lVar13;

	puVar2 = PTR_DAT_100f1d08;
	puVar1 = PTR_DAT_100f1d04;
	iVar8 = 0;
	iVar6 = 0;
	puVar5 = PTR_DAT_100f1d08;
	do {
		lVar13 = 4;
		iVar3 = 0;
		puVar4 = puVar5;
		do {
			puVar9 = puVar1 + iVar3 + iVar6;
			*puVar9 = *puVar4;
			puVar9[1] = *puVar4;
			puVar9[0x50] = *puVar4;
			puVar9[0x51] = *puVar4;
			puVar9 = puVar1 + iVar3 + 0xa0 + iVar6;
			*puVar9 = puVar4[0x14];
			puVar9[1] = puVar4[0x14];
			puVar9[0x50] = puVar4[0x14];
			puVar9[0x51] = puVar4[0x14];
			puVar9 = puVar1 + iVar3 + 0x140 + iVar6;
			*puVar9 = puVar4[0x28];
			puVar9[1] = puVar4[0x28];
			puVar9[0x50] = puVar4[0x28];
			puVar9[0x51] = puVar4[0x28];
			puVar9 = puVar1 + iVar3 + 0x1e0 + iVar6;
			*puVar9 = puVar4[0x3c];
			puVar9[1] = puVar4[0x3c];
			puVar9[0x50] = puVar4[0x3c];
			puVar9[0x51] = puVar4[0x3c];
			puVar7 = puVar1 + iVar3 + 0x280 + iVar6;
			iVar3 = iVar3 + 800;
			*puVar7 = puVar4[0x50];
			puVar7[1] = puVar4[0x50];
			puVar7[0x50] = puVar4[0x50];
			puVar9 = puVar4 + 0x50;
			puVar4 = puVar4 + 100;
			puVar7[0x51] = *puVar9;
			lVar13 = lVar13 + -1;
		} while (lVar13 != 0);
		iVar8 = iVar8 + 1;
		iVar6 = iVar6 + 2;
		puVar5 = puVar5 + 1;
	} while (iVar8 < 0x14);
	iVar8 = 0;
	iVar6 = 0;
	do {
		lVar13 = 4;
		puVar5 = puVar2 + (0x13 - iVar8);
		iVar3 = 0;
		do {
			puVar4 = puVar1 + iVar3 + iVar6;
			puVar4[0x28] = *puVar5;
			puVar4[0x29] = *puVar5;
			puVar4[0x78] = *puVar5;
			puVar4[0x79] = *puVar5;
			puVar4 = puVar1 + iVar3 + 0xa0 + iVar6;
			puVar4[0x28] = puVar5[0x14];
			puVar4[0x29] = puVar5[0x14];
			puVar4[0x78] = puVar5[0x14];
			puVar4[0x79] = puVar5[0x14];
			puVar4 = puVar1 + iVar3 + 0x140 + iVar6;
			puVar4[0x28] = puVar5[0x28];
			puVar4[0x29] = puVar5[0x28];
			puVar4[0x78] = puVar5[0x28];
			puVar4[0x79] = puVar5[0x28];
			puVar4 = puVar1 + iVar3 + 0x1e0 + iVar6;
			puVar4[0x28] = puVar5[0x3c];
			puVar4[0x29] = puVar5[0x3c];
			puVar4[0x78] = puVar5[0x3c];
			puVar4[0x79] = puVar5[0x3c];
			puVar9 = puVar1 + iVar3 + 0x280 + iVar6;
			iVar3 = iVar3 + 800;
			puVar9[0x28] = puVar5[0x50];
			puVar9[0x29] = puVar5[0x50];
			puVar9[0x78] = puVar5[0x50];
			puVar4 = puVar5 + 0x50;
			puVar5 = puVar5 + 100;
			puVar9[0x79] = *puVar4;
			lVar13 = lVar13 + -1;
		} while (lVar13 != 0);
		iVar8 = iVar8 + 1;
		iVar6 = iVar6 + 2;
	} while (iVar8 < 0x14);
	iVar8 = 0;
	iVar6 = 0;
	puVar5 = puVar2;
	do {
		lVar13 = 4;
		iVar10 = 0;
		iVar3 = 0;
		do {
			puVar7 = puVar1 + iVar3 + iVar6;
			puVar4 = puVar5 + (0x13 - iVar10) * 0x14;
			puVar7[0xc80] = *puVar4;
			iVar11 = iVar10 + 3;
			puVar7[0xc81] = *puVar4;
			puVar7[0xcd0] = *puVar4;
			puVar9 = puVar5 + (0x13 - (iVar10 + 1)) * 0x14;
			puVar7[0xcd1] = *puVar4;
			puVar7 = puVar1 + iVar3 + 0xa0 + iVar6;
			puVar7[0xc80] = *puVar9;
			iVar12 = iVar10 + 4;
			puVar7[0xc81] = *puVar9;
			puVar7[0xcd0] = *puVar9;
			puVar4 = puVar5 + (0x13 - (iVar10 + 2)) * 0x14;
			puVar7[0xcd1] = *puVar9;
			puVar7 = puVar1 + iVar3 + 0x140 + iVar6;
			puVar7[0xc80] = *puVar4;
			iVar10 = iVar10 + 5;
			puVar7[0xc81] = *puVar4;
			puVar7[0xcd0] = *puVar4;
			puVar9 = puVar5 + (0x13 - iVar11) * 0x14;
			puVar7[0xcd1] = *puVar4;
			puVar7 = puVar1 + iVar3 + 0x1e0 + iVar6;
			puVar7[0xc80] = *puVar9;
			puVar7[0xc81] = *puVar9;
			puVar7[0xcd0] = *puVar9;
			puVar4 = puVar5 + (0x13 - iVar12) * 0x14;
			puVar7[0xcd1] = *puVar9;
			puVar9 = puVar1 + iVar3 + 0x280 + iVar6;
			iVar3 = iVar3 + 800;
			puVar9[0xc80] = *puVar4;
			puVar9[0xc81] = *puVar4;
			puVar9[0xcd0] = *puVar4;
			puVar9[0xcd1] = *puVar4;
			lVar13 = lVar13 + -1;
		} while (lVar13 != 0);
		iVar8 = iVar8 + 1;
		puVar5 = puVar5 + 1;
		iVar6 = iVar6 + 2;
	} while (iVar8 < 0x14);
	iVar8 = 0;
	iVar6 = 0;
	do {
		lVar13 = 4;
		puVar5 = puVar2 + (0x13 - iVar8);
		iVar10 = 0;
		iVar3 = 0;
		do {
			puVar7 = puVar1 + iVar3 + iVar6;
			puVar4 = puVar5 + (0x13 - iVar10) * 0x14;
			puVar7[0xca8] = *puVar4;
			iVar11 = iVar10 + 3;
			puVar7[0xca9] = *puVar4;
			puVar7[0xcf8] = *puVar4;
			puVar9 = puVar5 + (0x13 - (iVar10 + 1)) * 0x14;
			puVar7[0xcf9] = *puVar4;
			puVar7 = puVar1 + iVar3 + 0xa0 + iVar6;
			puVar7[0xca8] = *puVar9;
			iVar12 = iVar10 + 4;
			puVar7[0xca9] = *puVar9;
			puVar7[0xcf8] = *puVar9;
			puVar4 = puVar5 + (0x13 - (iVar10 + 2)) * 0x14;
			puVar7[0xcf9] = *puVar9;
			puVar7 = puVar1 + iVar3 + 0x140 + iVar6;
			puVar7[0xca8] = *puVar4;
			iVar10 = iVar10 + 5;
			puVar7[0xca9] = *puVar4;
			puVar7[0xcf8] = *puVar4;
			puVar9 = puVar5 + (0x13 - iVar11) * 0x14;
			puVar7[0xcf9] = *puVar4;
			puVar7 = puVar1 + iVar3 + 0x1e0 + iVar6;
			puVar7[0xca8] = *puVar9;
			puVar7[0xca9] = *puVar9;
			puVar7[0xcf8] = *puVar9;
			puVar4 = puVar5 + (0x13 - iVar12) * 0x14;
			puVar7[0xcf9] = *puVar9;
			puVar9 = puVar1 + iVar3 + 0x280 + iVar6;
			iVar3 = iVar3 + 800;
			puVar9[0xca8] = *puVar4;
			puVar9[0xca9] = *puVar4;
			puVar9[0xcf8] = *puVar4;
			puVar9[0xcf9] = *puVar4;
			lVar13 = lVar13 + -1;
		} while (lVar13 != 0);
		iVar8 = iVar8 + 1;
		iVar6 = iVar6 + 2;
	} while (iVar8 < 0x14);
	return;
}

void uShape(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    char param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	char *pcVar3;
	longlong lVar4;
	int iVar5;
	undefined4 *puVar7;
	longlong lVar6;
	char cVar8;
	longlong lVar9;
	undefined uVar10;
	longlong lVar11;
	ulonglong uVar12;
	longlong lVar13;
	longlong lVar14;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined in_stack_ffffffcb;

	puVar2 = PTR_DAT_100f1d08;
	puVar1 = PTR_DAT_100f1d00;
	lVar14 = (longlong)param_5;
	uVar12 = ZEXT48(PTR_DAT_100f1d08);
	cVar8 = '\x13';
	lVar4 = uVar12 + 0x13;
	lVar11 = ZEXT48(PTR_DAT_100f1d00) + 0x4c;
	lVar13 = 10;
	lVar6 = lVar11;
	do {
		lVar9 = 0x13;
		while (puVar7 = (undefined4 *)lVar6, -1 < (int)lVar9) {
			lVar14 = lVar4 + lVar9 * 0x14;
			pcVar3 = (char *)lVar14;
			if (*pcVar3 != '\x01') {
				*puVar7 = 0;
			}
			if (*pcVar3 == '\x01') {
				if ((pcVar3[1] == '\x01') && (pcVar3[0x15] == '\0')) {
					*puVar7 = 1;
				} else {
					*puVar7 = 0;
				}
				lVar9 = 0;
			}
			lVar9 = lVar9 + -1;
		}
		lVar9 = 0x13;
		puVar7 = puVar7 + -1;
		while (uVar10 = (undefined)lVar9, -1 < (int)lVar9) {
			lVar14 = lVar4 + -1 + lVar9 * 0x14;
			pcVar3 = (char *)lVar14;
			if (*pcVar3 != '\x01') {
				*puVar7 = 0;
			}
			if (*pcVar3 == '\x01') {
				if ((pcVar3[1] == '\x01') && (pcVar3[0x15] == '\0')) {
					*puVar7 = 1;
				} else {
					*puVar7 = 0;
				}
				lVar9 = 0;
			}
			lVar9 = lVar9 + -1;
		}
		lVar4 = lVar4 + -2;
		lVar6 = lVar6 + -8;
		cVar8 = cVar8 + -1;
		lVar13 = lVar13 + -1;
	} while (lVar13 != 0);
	lVar6 = random(0, 0x13, (char)lVar4, (char)lVar6, (char)lVar14, cVar8, uVar10, param_8,
	    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb);
	lVar6 = lVar6 + 1;
	do {
		if (*(int *)(puVar1 + (int)lVar6 * 4) == 0) {
			lVar6 = lVar6 + 1;
			if ((int)lVar6 == 0x14) {
				lVar6 = 1;
			}
		} else {
			iVar5 = 0x13;
			while (-1 < iVar5) {
				pcVar3 = puVar2 + iVar5 * 0x14 + (int)lVar6;
				if (*pcVar3 == '\x01') {
					iVar5 = -1;
					lVar6 = 0;
				} else {
					*pcVar3 = '\x01';
					pcVar3[1] = '\x01';
				}
				iVar5 = iVar5 + -1;
			}
		}
	} while ((int)lVar6 != 0);
	lVar4 = uVar12 + 0x17c;
	lVar14 = 10;
	cVar8 = '\x13';
	do {
		lVar13 = 0x13;
		while (puVar7 = (undefined4 *)lVar11, -1 < (int)lVar13) {
			lVar6 = lVar4 + lVar13;
			pcVar3 = (char *)lVar6;
			if (*pcVar3 != '\x01') {
				*puVar7 = 0;
			}
			if (*pcVar3 == '\x01') {
				if ((pcVar3[0x14] == '\x01') && (pcVar3[0x15] == '\0')) {
					*puVar7 = 1;
				} else {
					*puVar7 = 0;
				}
				lVar13 = 0;
			}
			lVar13 = lVar13 + -1;
		}
		lVar13 = 0x13;
		puVar7 = puVar7 + -1;
		while (-1 < (int)lVar13) {
			lVar6 = lVar4 + -0x14 + lVar13;
			pcVar3 = (char *)lVar6;
			if (*pcVar3 != '\x01') {
				*puVar7 = 0;
			}
			if (*pcVar3 == '\x01') {
				if ((pcVar3[0x14] == '\x01') && (pcVar3[0x15] == '\0')) {
					*puVar7 = 1;
				} else {
					*puVar7 = 0;
				}
				lVar13 = 0;
			}
			lVar13 = lVar13 + -1;
		}
		lVar4 = lVar4 + -0x28;
		lVar11 = lVar11 + -8;
		cVar8 = cVar8 + -1;
		lVar14 = lVar14 + -1;
	} while (lVar14 != 0);
	lVar6 = random(0, 0x13, (char)lVar4, (char)lVar6, (char)lVar13, cVar8, uVar10, param_8,
	    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb);
	lVar6 = lVar6 + 1;
	do {
		if (*(int *)(puVar1 + (int)lVar6 * 4) == 0) {
			lVar6 = lVar6 + 1;
			if ((int)lVar6 == 0x14) {
				lVar6 = 1;
			}
		} else {
			iVar5 = 0x13;
			while (-1 < iVar5) {
				pcVar3 = puVar2 + (int)lVar6 * 0x14 + iVar5;
				if (*pcVar3 == '\x01') {
					iVar5 = -1;
					lVar6 = 0;
				} else {
					*pcVar3 = '\x01';
					pcVar3[0x14] = '\x01';
				}
				iVar5 = iVar5 + -1;
			}
		}
	} while ((int)lVar6 != 0);
	return;
}

longlong GetArea(void)

{
	longlong lVar1;
	char *pcVar2;
	char *pcVar3;
	int iVar4;
	longlong lVar5;

	lVar1 = 0;
	iVar4 = 0;
	pcVar3 = PTR_DAT_100f1d08;
	do {
		lVar5 = 2;
		pcVar2 = pcVar3;
		do {
			if (*pcVar2 == '\x01') {
				lVar1 = lVar1 + 1;
			}
			if (pcVar2[0x14] == '\x01') {
				lVar1 = lVar1 + 1;
			}
			if (pcVar2[0x28] == '\x01') {
				lVar1 = lVar1 + 1;
			}
			if (pcVar2[0x3c] == '\x01') {
				lVar1 = lVar1 + 1;
			}
			if (pcVar2[0x50] == '\x01') {
				lVar1 = lVar1 + 1;
			}
			if (pcVar2[100] == '\x01') {
				lVar1 = lVar1 + 1;
			}
			if (pcVar2[0x78] == '\x01') {
				lVar1 = lVar1 + 1;
			}
			if (pcVar2[0x8c] == '\x01') {
				lVar1 = lVar1 + 1;
			}
			if (pcVar2[0xa0] == '\x01') {
				lVar1 = lVar1 + 1;
			}
			if (pcVar2[0xb4] == '\x01') {
				lVar1 = lVar1 + 1;
			}
			pcVar2 = pcVar2 + 200;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		pcVar3 = pcVar3 + 1;
	} while (iVar4 < 0x14);
	return lVar1;
}

void L4drawRoom(int param_1, int param_2, longlong param_3, int param_4)

{
	int iVar1;
	ulonglong uVar2;
	longlong lVar3;
	int iVar4;
	int iVar5;
	longlong lVar6;
	undefined *puVar7;

	iVar4 = (int)param_3;
	iVar5 = 0;
	puVar7 = PTR_DAT_100f1d08 + param_2;
	while (iVar5 < param_4) {
		lVar6 = 0;
		if (0 < iVar4) {
			if ((8 < iVar4) && (uVar2 = (ulonglong)(iVar4 - 1U >> 3), 0 < iVar4 + -8)) {
				do {
					iVar1 = param_1 + (int)lVar6;
					lVar6 = lVar6 + 8;
					puVar7[iVar1 * 0x14] = 1;
					puVar7[(iVar1 + 1) * 0x14] = 1;
					puVar7[(iVar1 + 2) * 0x14] = 1;
					puVar7[(iVar1 + 3) * 0x14] = 1;
					puVar7[(iVar1 + 4) * 0x14] = 1;
					puVar7[(iVar1 + 5) * 0x14] = 1;
					puVar7[(iVar1 + 6) * 0x14] = 1;
					puVar7[(iVar1 + 7) * 0x14] = 1;
					uVar2 = uVar2 - 1;
				} while (uVar2 != 0);
			}
			lVar3 = param_3 - lVar6;
			if ((int)lVar6 < iVar4) {
				do {
					iVar1 = (int)lVar6;
					lVar6 = lVar6 + 1;
					puVar7[(param_1 + iVar1) * 0x14] = 1;
					lVar3 = lVar3 + -1;
				} while (lVar3 != 0);
			}
		}
		puVar7 = puVar7 + 1;
		iVar5 = iVar5 + 1;
	}
	return;
}

undefined8 L4checkRoom(longlong param_1, int param_2, longlong param_3, int param_4)

{
	int iVar1;
	undefined *puVar2;
	longlong lVar3;
	int iVar4;
	longlong lVar5;

	if (((int)param_1 < 1) || (param_2 < 1)) {
		return 0;
	}
	iVar4 = 0;
	puVar2 = PTR_DAT_100f1d08 + param_2;
	do {
		if (param_4 <= iVar4) {
			return 1;
		}
		lVar3 = 0;
		lVar5 = param_3;
		if (0 < (int)param_3) {
			do {
				if ((((param_1 + lVar3 < 0) || (iVar1 = (int)(param_1 + lVar3), 0x13 < iVar1)) || (param_2 + iVar4 < 0)) || (0x13 < param_2 + iVar4)) {
					return 0;
				}
				if (puVar2[iVar1 * 0x14] != '\0') {
					return 0;
				}
				lVar3 = lVar3 + 1;
				lVar5 = lVar5 + -1;
			} while (lVar5 != 0);
		}
		puVar2 = puVar2 + 1;
		iVar4 = iVar4 + 1;
	} while (true);
}

// WARNING: Removing unreachable block (ram,0x100391f0)

void L4roomGen(longlong param_1, longlong param_2, ulonglong param_3, ulonglong param_4, int param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	int iVar3;
	bool bVar4;
	longlong lVar5;
	longlong lVar6;
	undefined8 uVar7;
	int iVar8;
	ulonglong uVar9;
	undefined param_6_00;
	ulonglong uVar10;
	undefined param_7_00;
	undefined param_8_00;
	longlong param_1_00;
	longlong lVar11;
	undefined uVar12;
	longlong param_2_00;
	longlong lVar13;
	longlong lVar14;
	ulonglong param_4_00;
	ulonglong param_3_00;
	undefined4 param_9_00;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	lVar14 = (longlong)param_8;
	lVar13 = (longlong)param_7;
	lVar11 = (longlong)param_6;
	lVar6 = (longlong)param_5;
	uVar9 = param_3;
	uVar10 = param_4;
	lVar5 = random(0, 4, (char)param_3, (char)param_4, (char)param_5, param_6, param_7, param_8,
	    param_9_00, in_stack_ffffffaf, in_stack_ffffffbb);
	if (param_5 == 1) {
		if ((int)lVar5 == 0) {
			bVar4 = false;
		} else {
			bVar4 = true;
		}
	} else {
		if ((int)lVar5 == 0) {
			bVar4 = true;
		} else {
			bVar4 = false;
		}
	}
	if (bVar4) {
		iVar8 = 0;
		do {
			param_6_00 = (undefined)uVar9;
			param_7_00 = (undefined)uVar10;
			lVar5 = random(0, 5, param_6_00, param_7_00, (char)lVar6, (char)lVar11, (char)lVar13,
			    (char)lVar14, param_9_00, in_stack_ffffffaf, in_stack_ffffffbb);
			uVar1 = ((int)lVar5 + 2 >> 1) << 1;
			param_3_00 = (ulonglong)uVar1;
			lVar5 = random(0, 5, param_6_00, param_7_00, (char)lVar6, (char)lVar11, (char)lVar13,
			    (char)lVar14, param_9_00, in_stack_ffffffaf, in_stack_ffffffbb);
			uVar9 = param_3_00 + 2;
			uVar2 = ((int)(lVar5 + 2U) >> 1) * 2;
			param_4_00 = (ulonglong)uVar2;
			uVar10 = param_4_00 + 1;
			param_1_00 = (param_1 + (ulonglong)(uint)((int)param_3 >> 1) + (ulonglong)((int)param_3 < 0 && (param_3 & 1) != 0)) - (lVar5 + 2U & 0xffffffff00000000 | (ulonglong)(uint)((int)uVar1 >> 1));
			iVar3 = (int)(param_2 - param_4_00);
			lVar5 = L4checkRoom(param_1_00 + -1, iVar3 + -1, uVar9, (int)uVar10);
			param_8_00 = (undefined)lVar14;
			param_7_00 = (undefined)lVar13;
			param_6_00 = (undefined)lVar11;
			iVar8 = iVar8 + 1;
			if (lVar5 != 0)
				break;
		} while (iVar8 < 0x14);
		if ((int)lVar5 == 1) {
			L4drawRoom((int)param_1_00, iVar3, param_3_00, uVar2);
		}
		iVar8 = (int)(param_2 + param_4);
		uVar7 = L4checkRoom(param_1_00 + -1, iVar8, param_3_00 + 2, uVar2 + 1);
		if ((int)uVar7 == 1) {
			L4drawRoom((int)param_1_00, iVar8, param_3_00, uVar2);
		}
		if ((int)lVar5 == 1) {
			L4roomGen(param_1_00, param_2 - param_4_00, param_3_00, param_4_00, 0, param_6_00, param_7_00,
			    param_8_00, param_9_00);
		}
		if ((int)uVar7 == 1) {
			L4roomGen(param_1_00, param_2 + param_4, param_3_00, param_4_00, 0, param_6_00, param_7_00,
			    param_8_00, param_9_00);
		}
	} else {
		if (!bVar4) {
			iVar8 = 0;
			do {
				param_6_00 = (undefined)uVar9;
				param_7_00 = (undefined)uVar10;
				param_8_00 = (undefined)lVar6;
				uVar12 = (undefined)lVar11;
				lVar6 = random(0, 5, param_6_00, param_7_00, param_8_00, uVar12, (char)lVar13, (char)lVar14,
				    param_9_00, in_stack_ffffffaf, in_stack_ffffffbb);
				param_3_00 = (ulonglong)(uint)(((int)lVar6 + 2 >> 1) << 1);
				lVar6 = random(0, 5, param_6_00, param_7_00, param_8_00, uVar12, (char)lVar13, (char)lVar14,
				    param_9_00, in_stack_ffffffaf, in_stack_ffffffbb);
				uVar10 = param_3_00 + 1;
				uVar1 = ((int)(lVar6 + 2U) >> 1) * 2;
				param_4_00 = (ulonglong)uVar1;
				uVar9 = param_4_00 + 2;
				param_2_00 = (param_2 + (ulonglong)(uint)((int)param_4 >> 1) + (ulonglong)((int)param_4 < 0 && (param_4 & 1) != 0)) - (lVar6 + 2U & 0xffffffff00000000 | (ulonglong)(uint)((int)uVar1 >> 1));
				param_1_00 = param_1 - param_3_00;
				iVar3 = (int)param_2_00;
				lVar6 = param_1_00;
				lVar11 = param_2_00;
				lVar5 = L4checkRoom(param_1_00 + -1, iVar3 + -1, uVar9, (int)uVar10);
				param_8_00 = (undefined)lVar14;
				param_7_00 = (undefined)lVar13;
				param_6_00 = (undefined)lVar11;
				iVar8 = iVar8 + 1;
				if (lVar5 != 0)
					break;
			} while (iVar8 < 0x14);
			if ((int)lVar5 == 1) {
				L4drawRoom((int)param_1_00, iVar3, param_3_00, uVar1);
			}
			param_1 = param_1 + param_3;
			uVar7 = L4checkRoom(param_1, iVar3 + -1, param_3_00 + 1, uVar1 + 2);
			if ((int)uVar7 == 1) {
				L4drawRoom((int)param_1, iVar3, param_3_00, uVar1);
			}
			if ((int)lVar5 == 1) {
				L4roomGen(param_1_00, param_2_00, param_3_00, param_4_00, 1, param_6_00, param_7_00, param_8_00,
				    param_9_00);
			}
			if ((int)uVar7 == 1) {
				L4roomGen(param_1, param_2_00, param_3_00, param_4_00, 1, param_6_00, param_7_00, param_8_00,
				    param_9_00);
			}
		}
	}
	return;
}

void L4firstRoom(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	char cVar1;
	int *piVar2;
	int iVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined **ppuVar11;
	longlong lVar12;
	longlong lVar13;
	undefined8 uVar14;
	longlong lVar15;
	ulonglong uVar16;
	undefined uVar17;
	ulonglong uVar18;
	undefined uVar19;
	ulonglong unaff_r23;
	ulonglong uVar20;
	int iVar21;
	int iVar22;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;

	puVar10 = PTR_DAT_100f1cf4;
	puVar9 = PTR_DAT_100f1cf0;
	puVar8 = PTR_DAT_100f1cec;
	puVar7 = PTR_DAT_100f1ce8;
	puVar6 = PTR_DAT_100f19cc;
	puVar5 = PTR_DAT_100f17ec;
	puVar4 = PTR_DAT_100f17e0;
	ppuVar11 = &toc;
	cVar1 = *PTR_DAT_100f17ec;
	if (cVar1 == '\x10') {
		uVar18 = 0xe;
		uVar16 = 0xe;
	} else {
		if ((cVar1 == PTR_DAT_100f19cc[0x108]) && (PTR_DAT_100f19cc[0x10a] != '\0')) {
			uVar18 = 0xb;
			uVar16 = 0xb;
		} else {
			if ((cVar1 == PTR_DAT_100f19cc[0x168]) && (*PTR_DAT_100f17e0 != '\x01')) {
				uVar18 = 0xb;
				uVar16 = 0xb;
			} else {
				ppuVar11 = &toc;
				lVar12 = random(0, 5, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff98,
				    in_stack_ffffff9f, in_stack_ffffffab);
				uVar18 = lVar12 + 2;
				lVar12 = random(0, 5, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff98,
				    in_stack_ffffff9f, in_stack_ffffffab);
				uVar16 = lVar12 + 2;
			}
		}
	}
	uVar17 = (undefined)uVar16;
	uVar19 = (undefined)uVar18;
	uVar20 = unaff_r23 & 0xffffffff00000000 | (ulonglong)(uint)(0x14 - (int)uVar18 >> 1);
	lVar12 = random(0, (-uVar20 - uVar18) + 0x14, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
	lVar12 = uVar20 + lVar12;
	if (0x13 < (int)(uVar18 + lVar12)) {
		lVar12 = (lVar12 - (uVar18 + lVar12 + -0x13)) + 1;
	}
	iVar3 = (int)uVar16;
	uVar20 = unaff_r23 & 0xffffffff00000000 | (ulonglong)(uint)(0x14 - iVar3 >> 1);
	lVar13 = random(0, (-uVar20 - uVar16) + 0x14, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
	lVar13 = uVar20 + lVar13;
	if (0x13 < (int)(uVar16 + lVar13)) {
		lVar13 = (lVar13 - (uVar16 + lVar13 + -0x13)) + 1;
	}
	iVar22 = (int)lVar12;
	iVar21 = (int)lVar13;
	if (*puVar5 == '\x10') {
		piVar2 = (int *)ppuVar11[-0x1cb6];
		*(int *)ppuVar11[-0x1cb5] = iVar22;
		*piVar2 = iVar21;
	}
	uVar14 = QuestStatus(0xb);
	if (((int)uVar14 == 0) && ((*puVar5 != puVar6[0x168] || (*puVar4 == '\x01')))) {
		*(undefined4 *)puVar10 = 0;
		*(undefined4 *)puVar9 = 0;
		*(undefined4 *)puVar8 = 0;
		*(undefined4 *)puVar7 = 0;
	} else {
		*(int *)puVar10 = iVar22 + 1;
		*(int *)puVar9 = iVar21 + 1;
		*(int *)puVar8 = *(int *)puVar10 + (int)uVar18;
		*(int *)puVar7 = *(int *)puVar9 + iVar3;
	}
	L4drawRoom(iVar22, iVar21, uVar18, iVar3);
	lVar15 = random(0, 2, uVar19, uVar17, param_5, param_6, param_7, param_8, in_stack_ffffff98,
	    in_stack_ffffff9f, in_stack_ffffffab);
	L4roomGen(lVar12, lVar13, uVar18, uVar16, (int)lVar15, param_6, param_7, param_8, in_stack_ffffff98);
	return;
}

void L4SaveQuads(void)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	undefined *puVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;

	puVar3 = PTR_DAT_100f1abc;
	iVar15 = 0;
	iVar1 = *(int *)PTR_DAT_100f1cfc;
	iVar2 = -iVar1;
	puVar4 = PTR_DAT_100f1abc + *(int *)PTR_DAT_100f1cf8;
	iVar26 = (iVar1 + 3) * 0x28;
	iVar25 = (iVar2 + 0x24) * 0x28;
	iVar24 = (iVar1 + 4) * 0x28;
	iVar23 = (iVar2 + 0x23) * 0x28;
	iVar22 = (iVar1 + 5) * 0x28;
	iVar21 = (iVar2 + 0x22) * 0x28;
	iVar20 = (iVar1 + 6) * 0x28;
	iVar6 = (iVar2 + 0x27) * 0x28;
	iVar7 = (iVar1 + 1) * 0x28;
	iVar8 = (iVar2 + 0x26) * 0x28;
	iVar9 = (iVar1 + 2) * 0x28;
	iVar10 = (iVar2 + 0x25) * 0x28;
	iVar19 = (iVar2 + 0x21) * 0x28;
	iVar18 = (iVar1 + 7) * 0x28;
	iVar17 = (iVar2 + 0x20) * 0x28;
	iVar5 = 0x27 - *(int *)PTR_DAT_100f1cf8;
	do {
		puVar4[iVar1 * 0x28] = 1;
		puVar12 = puVar3 + (iVar5 - iVar15);
		puVar4[iVar6] = 1;
		iVar16 = 8;
		puVar12[iVar1 * 0x28] = 1;
		puVar12[iVar6] = 1;
		puVar4[iVar7] = 1;
		puVar4[iVar8] = 1;
		puVar12[iVar7] = 1;
		puVar12[iVar8] = 1;
		puVar4[iVar9] = 1;
		puVar4[iVar10] = 1;
		puVar12[iVar9] = 1;
		puVar12[iVar10] = 1;
		puVar4[iVar26] = 1;
		puVar4[iVar25] = 1;
		puVar12[iVar26] = 1;
		puVar12[iVar25] = 1;
		puVar4[iVar24] = 1;
		puVar4[iVar23] = 1;
		puVar12[iVar24] = 1;
		puVar12[iVar23] = 1;
		puVar4[iVar22] = 1;
		puVar4[iVar21] = 1;
		puVar12[iVar22] = 1;
		puVar12[iVar21] = 1;
		puVar4[iVar20] = 1;
		puVar4[iVar19] = 1;
		puVar12[iVar20] = 1;
		puVar12[iVar19] = 1;
		puVar4[iVar18] = 1;
		puVar4[iVar17] = 1;
		puVar12[iVar18] = 1;
		puVar12[iVar17] = 1;
		puVar12 = puVar3 + (iVar5 - iVar15);
		iVar13 = 6;
		do {
			iVar11 = (iVar1 + iVar16) * 0x28;
			puVar4[iVar11] = 1;
			iVar14 = ((iVar2 + 0x27) - iVar16) * 0x28;
			iVar16 = iVar16 + 1;
			puVar4[iVar14] = 1;
			puVar12[iVar11] = 1;
			puVar12[iVar14] = 1;
			iVar13 = iVar13 + -1;
		} while (iVar13 != 0);
		iVar15 = iVar15 + 1;
		puVar4 = puVar4 + 1;
	} while (iVar15 < 0xe);
	return;
}

void DRLG_L4SetRoom(longlong param_1, longlong param_2, longlong param_3, ulonglong param_4,
    longlong param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	byte bVar1;
	byte bVar2;
	byte bVar3;
	int iVar4;
	undefined **ppuVar5;
	ulonglong uVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	int iVar10;
	undefined4 in_stack_ffffffb8;

	ppuVar5 = &toc;
	uVar6 = FUN_100b8f7c(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	iVar10 = 0;
	lVar8 = (ulonglong) * (uint *)((int)param_1 + 0x88) + 4;
	bVar1 = *(byte *)uVar6;
	lVar7 = ZEXT48(ppuVar5[-0x1df3]) + param_3;
	bVar2 = ((byte *)uVar6)[2];
	param_3 = ZEXT48(ppuVar5[-0x1d45]) + param_3;
	while (iVar10 < (int)(uint)bVar2) {
		lVar9 = 0;
		uVar6 = (ulonglong)bVar1;
		if (bVar1 != 0) {
			do {
				bVar3 = *(byte *)lVar8;
				param_4 = (ulonglong)bVar3;
				if (bVar3 == 0) {
					*(undefined *)((int)lVar7 + ((int)param_2 + (int)lVar9) * 0x28) = 6;
				} else {
					param_5 = (param_2 + lVar9) * 0x28;
					iVar4 = (int)param_5;
					*(byte *)((int)lVar7 + iVar4) = bVar3;
					*(byte *)((int)param_3 + iVar4) = *(byte *)((int)param_3 + iVar4) | 0x80;
				}
				lVar8 = lVar8 + 2;
				lVar9 = lVar9 + 1;
				uVar6 = uVar6 - 1;
			} while (uVar6 != 0);
		}
		lVar7 = lVar7 + 1;
		param_3 = param_3 + 1;
		iVar10 = iVar10 + 1;
	}
	FUN_100b9100((int)param_1, (char)lVar7, (char)param_3, (char)param_4, (char)param_5, (char)lVar8, bVar1,
	    bVar2, in_stack_ffffffb8);
	return;
}

void DRLG_LoadDiabQuads(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

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
	undefined **ppuVar13;
	ulonglong uVar14;
	longlong lVar15;
	undefined uVar16;
	ulonglong uVar17;
	undefined uVar18;
	undefined7 uVar19;
	undefined uVar20;
	undefined7 uVar21;
	undefined uVar22;
	undefined uVar23;
	undefined uVar24;
	undefined uVar25;
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
	undefined4 in_stack_ffffff98;
	int *local_38[3];
	undefined4 local_2c;
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

	puVar12 = PTR_DAT_100f1cfc;
	puVar11 = PTR_DAT_100f1cf8;
	puVar10 = PTR_DAT_100f1ce4;
	puVar9 = PTR_DAT_100f1ce0;
	puVar8 = PTR_DAT_100f1cdc;
	puVar7 = PTR_DAT_100f1cd8;
	puVar6 = PTR_DAT_100f1cd4;
	puVar5 = PTR_DAT_100f1cd0;
	puVar4 = PTR_DAT_100f1ccc;
	puVar3 = PTR_DAT_100f1cc8;
	uVar21 = (undefined7)((ulonglong)param_5 >> 8);
	uVar22 = (undefined)param_5;
	uVar19 = (undefined7)((ulonglong)param_4 >> 8);
	uVar20 = (undefined)param_4;
	ppuVar13 = &toc;
	local_2c = (undefined4)((ulonglong)unaff_r21 >> 0x20);
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
	uVar14 = LoadFileInMem(ZEXT48(PTR_s_Levels_L4Data_diab1_DUN_100f2cf8), (undefined4 *)0x0, param_3,
	    param_4, param_5, param_6, param_7, param_8, in_stack_ffffff98);
	local_38[0] = (int *)uVar14;
	*(int *)puVar10 = *(int *)puVar12 + 4;
	*(int *)puVar9 = *(int *)puVar11 + 4;
	uVar1 = *(uint *)puVar10;
	uVar16 = (undefined)uVar1;
	uVar17 = (ulonglong) * (uint *)puVar9;
	DRLG_L4SetRoom(uVar14 & 0xffffffff, (ulonglong)uVar1, uVar17, CONCAT71(uVar19, uVar20),
	    CONCAT71(uVar21, uVar22), param_6, param_7, param_8, in_stack_ffffff98);
	mem_free_dbg(local_38, uVar16, (char)uVar17, uVar20, uVar22, (char)param_6, (char)param_7, (char)param_8,
	    in_stack_ffffff98);
	if (param_1 == 0) {
		lVar15 = LoadFileInMem(ZEXT48(ppuVar13[-0x18b8]), (undefined4 *)0x0, uVar17, CONCAT71(uVar19, uVar20), CONCAT71(uVar21, uVar22), param_6, param_7, param_8, in_stack_ffffff98);
		local_38[0] = (int *)lVar15;
	} else {
		lVar15 = LoadFileInMem(ZEXT48(ppuVar13[-0x18b7]), (undefined4 *)0x0, uVar17, CONCAT71(uVar19, uVar20), CONCAT71(uVar21, uVar22), param_6, param_7, param_8, in_stack_ffffff98);
		local_38[0] = (int *)lVar15;
	}
	*(int *)puVar8 = 0x1b - *(int *)puVar12;
	*(int *)puVar7 = *(int *)puVar11 + 1;
	uVar1 = *(uint *)puVar8;
	uVar16 = (undefined)uVar1;
	uVar14 = (ulonglong) * (uint *)puVar7;
	DRLG_L4SetRoom(ZEXT48(local_38[0]), (ulonglong)uVar1, uVar14, CONCAT71(uVar19, uVar20),
	    CONCAT71(uVar21, uVar22), param_6, param_7, param_8, in_stack_ffffff98);
	mem_free_dbg(local_38, uVar16, (char)uVar14, uVar20, uVar22, (char)param_6, (char)param_7, (char)param_8,
	    in_stack_ffffff98);
	if (param_1 == 0) {
		lVar15 = LoadFileInMem(ZEXT48(ppuVar13[-0x18ba]), (undefined4 *)0x0, uVar14, CONCAT71(uVar19, uVar20), CONCAT71(uVar21, uVar22), param_6, param_7, param_8, in_stack_ffffff98);
		local_38[0] = (int *)lVar15;
	} else {
		lVar15 = LoadFileInMem(ZEXT48(ppuVar13[-0x18b9]), (undefined4 *)0x0, uVar14, CONCAT71(uVar19, uVar20), CONCAT71(uVar21, uVar22), param_6, param_7, param_8, in_stack_ffffff98);
		local_38[0] = (int *)lVar15;
	}
	*(int *)puVar6 = *(int *)puVar12 + 1;
	*(int *)puVar5 = 0x1b - *(int *)puVar11;
	uVar1 = *(uint *)puVar6;
	uVar16 = (undefined)uVar1;
	uVar14 = (ulonglong) * (uint *)puVar5;
	DRLG_L4SetRoom(ZEXT48(local_38[0]), (ulonglong)uVar1, uVar14, CONCAT71(uVar19, uVar20),
	    CONCAT71(uVar21, uVar22), param_6, param_7, param_8, in_stack_ffffff98);
	mem_free_dbg(local_38, uVar16, (char)uVar14, uVar20, uVar22, (char)param_6, (char)param_7, (char)param_8,
	    in_stack_ffffff98);
	if (param_1 == 0) {
		lVar15 = LoadFileInMem(ZEXT48(ppuVar13[-0x18bc]), (undefined4 *)0x0, uVar14, CONCAT71(uVar19, uVar20), CONCAT71(uVar21, uVar22), param_6, param_7, param_8, in_stack_ffffff98);
		local_38[0] = (int *)lVar15;
	} else {
		lVar15 = LoadFileInMem(ZEXT48(ppuVar13[-0x18bb]), (undefined4 *)0x0, uVar14, CONCAT71(uVar19, uVar20), CONCAT71(uVar21, uVar22), param_6, param_7, param_8, in_stack_ffffff98);
		local_38[0] = (int *)lVar15;
	}
	uVar25 = (undefined)param_8;
	uVar24 = (undefined)param_7;
	uVar23 = (undefined)param_6;
	*(int *)puVar4 = 0x1c - *(int *)puVar12;
	*(int *)puVar3 = 0x1c - *(int *)puVar11;
	uVar1 = *(uint *)puVar4;
	uVar16 = (undefined)uVar1;
	uVar2 = *(uint *)puVar3;
	uVar18 = (undefined)uVar2;
	DRLG_L4SetRoom(ZEXT48(local_38[0]), (ulonglong)uVar1, (ulonglong)uVar2, CONCAT71(uVar19, uVar20),
	    CONCAT71(uVar21, uVar22), param_6, param_7, param_8, in_stack_ffffff98);
	mem_free_dbg(local_38, uVar16, uVar18, uVar20, uVar22, uVar23, uVar24, uVar25, in_stack_ffffff98);
	return;
}

undefined8
DRLG_L4PlaceMiniSet(byte *param_1, longlong param_2, longlong param_3, int param_4, int param_5, int param_6,
    int param_7, char param_8, undefined4 param_9, undefined param_10, undefined4 param_11,
    undefined4 param_12)

{
	byte bVar1;
	byte bVar2;
	int *piVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	ulonglong uVar7;
	ulonglong uVar8;
	longlong lVar9;
	int iVar10;
	bool bVar12;
	longlong lVar11;
	undefined uVar13;
	longlong lVar14;
	ulonglong uVar15;
	undefined uVar17;
	longlong lVar16;
	longlong lVar18;
	ulonglong uVar19;
	ulonglong uVar20;
	ulonglong uVar21;
	longlong lVar22;
	longlong lVar23;
	int iVar24;
	longlong unaff_r29;
	longlong unaff_r31;
	ulonglong uVar25;
	undefined4 in_stack_ffffff68;
	undefined in_stack_ffffff6f;
	undefined in_stack_ffffff7b;
	int local_68;
	int local_64;

	puVar6 = PTR_DAT_100f1cec;
	puVar5 = PTR_DAT_100f1ce8;
	lVar18 = (longlong)param_8;
	lVar16 = (longlong)param_7;
	uVar15 = SEXT48(param_6);
	lVar14 = (longlong)param_5;
	lVar11 = (longlong)param_4;
	uVar7 = ZEXT48(&toc);
	uVar19 = ZEXT48(PTR_DAT_100f1cf0);
	uVar21 = ZEXT48(PTR_DAT_100f1abc);
	uVar20 = ZEXT48(PTR_DAT_100f1804);
	bVar1 = *param_1;
	bVar2 = param_1[1];
	if (param_3 - param_2 == 0) {
		local_68 = 1;
	} else {
		lVar22 = random(0, param_3 - param_2, (char)param_3, (char)param_4, (char)param_5,
		    (char)param_6, (char)param_7, param_8, in_stack_ffffff68, in_stack_ffffff6f,
		    in_stack_ffffff7b);
		local_68 = (int)param_2 + (int)lVar22;
	}
	lVar22 = 0x28 - (ulonglong)bVar1;
	local_64 = 0;
	lVar23 = 0x28 - (ulonglong)bVar2;
	while (true) {
		uVar13 = (undefined)lVar11;
		if (local_68 <= local_64) {
			iVar24 = (int)uVar7;
			iVar10 = (int)unaff_r31;
			iVar4 = (int)unaff_r29;
			if (**(char **)(iVar24 + -0x77e4) == '\x0f') {
				*(int *)(*(int *)(iVar24 + -0x7604) + 0x16c) = iVar10 + 1;
				*(int *)(*(int *)(iVar24 + -0x7604) + 0x170) = iVar4 + 1;
			}
			if (param_6 == 1) {
				piVar3 = *(int **)(iVar24 + -0x77b4);
				**(int **)(iVar24 + -0x77b0) = iVar10 * 2 + 0x15;
				*piVar3 = iVar4 * 2 + 0x16;
			}
			if (param_7 == 0) {
				piVar3 = *(int **)(iVar24 + -0x7520);
				**(int **)(iVar24 + -0x751c) = iVar10 * 2 + 0x15;
				*piVar3 = iVar4 * 2 + 0x16;
			}
			return 1;
		}
		unaff_r31 = random(0, lVar22, (char)param_3, uVar13, (char)lVar14, (char)uVar15, (char)lVar16,
		    (char)lVar18, in_stack_ffffff68, in_stack_ffffff6f, in_stack_ffffff7b);
		unaff_r29 = random(0, lVar23, (char)param_3, uVar13, (char)lVar14, (char)uVar15, (char)lVar16,
		    (char)lVar18, in_stack_ffffff68, in_stack_ffffff6f, in_stack_ffffff7b);
		bVar12 = false;
		iVar24 = 0;
		while (true) {
			uVar17 = (undefined)lVar16;
			uVar13 = (undefined)lVar14;
			if ((bVar12) || (199 < iVar24))
				break;
			bVar12 = true;
			iVar10 = (int)unaff_r31;
			if ((((**(int **)((int)uVar7 + -0x72dc) <= iVar10) && (iVar10 <= *(int *)puVar6)) && (*(int *)uVar19 <= (int)unaff_r29)) && ((int)unaff_r29 <= *(int *)puVar5)) {
				bVar12 = false;
			}
			if (((param_4 != -1) && ((int)(param_4 - (uint)bVar1) <= iVar10)) && (iVar10 <= param_4 + 0xc)) {
				unaff_r31 = random(0, lVar22, (char)param_3, bVar12, uVar13, (char)uVar15, uVar17,
				    (char)lVar18, in_stack_ffffff68, in_stack_ffffff6f, in_stack_ffffff7b);
				unaff_r29 = random(0, lVar23, (char)param_3, bVar12, uVar13, (char)uVar15, uVar17,
				    (char)lVar18, in_stack_ffffff68, in_stack_ffffff6f, in_stack_ffffff7b);
				bVar12 = false;
			}
			if (((param_5 != -1) && ((int)(param_5 - (uint)bVar2) <= (int)unaff_r29)) && ((int)unaff_r29 <= param_5 + 0xc)) {
				unaff_r31 = random(0, lVar22, (char)param_3, bVar12, uVar13, (char)uVar15, uVar17,
				    (char)lVar18, in_stack_ffffff68, in_stack_ffffff6f, in_stack_ffffff7b);
				unaff_r29 = random(0, lVar23, (char)param_3, bVar12, uVar13, (char)uVar15, uVar17,
				    (char)lVar18, in_stack_ffffff68, in_stack_ffffff6f, in_stack_ffffff7b);
				bVar12 = false;
			}
			lVar11 = uVar20 + unaff_r29;
			lVar9 = uVar21 + unaff_r29;
			lVar14 = (longlong)(int)param_1 + 2;
			lVar16 = 0;
			while (((int)lVar16 < (int)(uint)bVar2 && (bVar12))) {
				param_3 = 0;
				while ((iVar10 = (int)param_3, iVar10 < (int)(uint)bVar1 && (bVar12))) {
					if ((*(byte *)lVar14 != 0) && (uVar15 = (ulonglong) * (byte *)((int)lVar11 + ((int)unaff_r31 + iVar10) * 0x28), (ulonglong) * (byte *)lVar14 != uVar15)) {
						bVar12 = false;
					}
					if (*(char *)((int)lVar9 + ((int)unaff_r31 + iVar10) * 0x28) != '\0') {
						bVar12 = false;
					}
					lVar14 = lVar14 + 1;
					param_3 = param_3 + 1;
				}
				lVar11 = lVar11 + 1;
				lVar9 = lVar9 + 1;
				lVar16 = lVar16 + 1;
			}
			if ((!bVar12) && (unaff_r31 = unaff_r31 + 1, (int)unaff_r31 == (int)lVar22)) {
				unaff_r29 = unaff_r29 + 1;
				unaff_r31 = 0;
				if ((int)unaff_r29 == (int)lVar23) {
					unaff_r29 = 0;
				}
			}
			iVar24 = iVar24 + 1;
		}
		if (199 < iVar24)
			break;
		uVar8 = (ulonglong)((uint)bVar2 * (uint)bVar1 + 2);
		lVar11 = uVar20 + unaff_r29;
		lVar14 = uVar21 + unaff_r29;
		lVar16 = 0;
		while ((int)lVar16 < (int)(uint)bVar2) {
			param_3 = (longlong)(int)param_1 + uVar8;
			lVar9 = 0;
			uVar25 = (ulonglong)bVar1;
			if (bVar1 != 0) {
				do {
					if (*(char *)param_3 != '\0') {
						uVar15 = (unaff_r31 + lVar9) * 0x28;
						iVar24 = (int)uVar15;
						*(char *)((int)lVar11 + iVar24) = *(char *)param_3;
						*(byte *)((int)lVar14 + iVar24) = *(byte *)((int)lVar14 + iVar24) | 8;
					}
					uVar8 = uVar8 + 1;
					param_3 = param_3 + 1;
					lVar9 = lVar9 + 1;
					uVar25 = uVar25 - 1;
				} while (uVar25 != 0);
			}
			lVar11 = lVar11 + 1;
			lVar14 = lVar14 + 1;
			lVar16 = lVar16 + 1;
		}
		local_64 = local_64 + 1;
	}
	return 0;
}

undefined8 IsDURWall(char param_1)

{
	if (param_1 == '\x19') {
		return 1;
	}
	if (param_1 == '\x1c') {
		return 1;
	}
	if (param_1 == '\x17') {
		return 1;
	}
	return 0;
}

undefined8 IsDLLWall(char param_1)

{
	if (param_1 == '\x1b') {
		return 1;
	}
	if (param_1 == '\x1a') {
		return 1;
	}
	if (param_1 == '\x16') {
		return 1;
	}
	return 0;
}

void DRLG_L4TransFix(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined8 uVar2;
	undefined *puVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char *pcVar8;
	int iVar9;
	char *pcVar10;

	puVar1 = PTR_DAT_100f1a48;
	iVar5 = 0x10;
	iVar6 = 0;
	pcVar8 = PTR_DAT_100f1804;
	do {
		iVar7 = 0;
		iVar9 = 0x700;
		pcVar10 = pcVar8;
		do {
			uVar2 = IsDURWall(*pcVar10);
			if (((int)uVar2 != 0) && (pcVar10[-1] == '\x12')) {
				puVar3 = (undefined *)(iVar5 + *(int *)puVar1 + iVar9);
				puVar3[0x70] = *puVar3;
				puVar3 = (undefined *)(iVar5 + *(int *)puVar1 + iVar9);
				puVar3[0x71] = *puVar3;
			}
			uVar2 = IsDLLWall(*pcVar10);
			if (((int)uVar2 != 0) && (pcVar10[0x28] == '\x13')) {
				puVar3 = (undefined *)(iVar5 + *(int *)puVar1 + iVar9);
				puVar3[1] = *puVar3;
				puVar3 = (undefined *)(iVar5 + *(int *)puVar1 + iVar9);
				puVar3[0x71] = *puVar3;
			}
			if (*pcVar10 == '\x12') {
				puVar3 = (undefined *)(iVar5 + *(int *)puVar1 + iVar9);
				puVar3[0x70] = *puVar3;
				puVar3 = (undefined *)(iVar5 + *(int *)puVar1 + iVar9);
				puVar3[0x71] = *puVar3;
			}
			if (*pcVar10 == '\x13') {
				puVar3 = (undefined *)(iVar5 + *(int *)puVar1 + iVar9);
				puVar3[1] = *puVar3;
				puVar3 = (undefined *)(iVar5 + *(int *)puVar1 + iVar9);
				puVar3[0x71] = *puVar3;
			}
			if (*pcVar10 == '\x18') {
				puVar3 = (undefined *)(iVar5 + *(int *)puVar1 + iVar9);
				puVar3[0x70] = *puVar3;
				puVar3 = (undefined *)(iVar5 + *(int *)puVar1 + iVar9);
				puVar3[1] = *puVar3;
				puVar3 = (undefined *)(iVar5 + *(int *)puVar1 + iVar9);
				puVar3[0x71] = *puVar3;
			}
			if (*pcVar10 == '9') {
				iVar4 = iVar5 + *(int *)puVar1 + iVar9;
				*(undefined *)(iVar4 + -0x70) = *(undefined *)(iVar4 + 1);
				puVar3 = (undefined *)(iVar5 + *(int *)puVar1 + iVar9);
				*puVar3 = puVar3[1];
			}
			if (*pcVar10 == '5') {
				iVar4 = iVar5 + *(int *)puVar1 + iVar9;
				*(undefined *)(iVar4 + -1) = *(undefined *)(iVar4 + 0x70);
				puVar3 = (undefined *)(iVar5 + *(int *)puVar1 + iVar9);
				*puVar3 = puVar3[0x70];
			}
			iVar7 = iVar7 + 1;
			pcVar10 = pcVar10 + 0x28;
			iVar9 = iVar9 + 0xe0;
		} while (iVar7 < 0x28);
		iVar6 = iVar6 + 1;
		pcVar8 = pcVar8 + 1;
		iVar5 = iVar5 + 2;
	} while (iVar6 < 0x28);
	return;
}

void DRLG_L4Corners(void)

{
	byte *pbVar1;
	byte bVar2;
	undefined *puVar3;
	byte *pbVar4;
	int iVar5;
	longlong lVar6;

	iVar5 = 1;
	puVar3 = PTR_DAT_100f1804;
	do {
		pbVar4 = puVar3 + 0x29;
		lVar6 = 0x13;
		do {
			bVar2 = *pbVar4;
			if ((0x11 < bVar2) && (bVar2 < 0x1f)) {
				if (pbVar4[0x28] < 0x12) {
					*pbVar4 = bVar2 + 0x62;
				} else {
					if (pbVar4[1] < 0x12) {
						*pbVar4 = bVar2 + 0x62;
					}
				}
			}
			pbVar1 = pbVar4 + 0x28;
			bVar2 = *pbVar1;
			if ((0x11 < bVar2) && (bVar2 < 0x1f)) {
				if (pbVar4[0x50] < 0x12) {
					*pbVar1 = bVar2 + 0x62;
				} else {
					if (pbVar4[0x29] < 0x12) {
						*pbVar1 = bVar2 + 0x62;
					}
				}
			}
			pbVar4 = pbVar4 + 0x50;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
		iVar5 = iVar5 + 1;
		puVar3 = puVar3 + 1;
	} while (iVar5 < 0x27);
	return;
}

// WARNING: Removing unreachable block (ram,0x1003a1cc)

void L4FixRim(void)

{
	longlong lVar1;
	undefined *puVar2;
	undefined *puVar3;

	puVar2 = PTR_DAT_100f1d08;
	*PTR_DAT_100f1d08 = 0;
	puVar2[0x14] = 0;
	puVar2[0x28] = 0;
	puVar2[0x3c] = 0;
	puVar2[0x50] = 0;
	puVar2[100] = 0;
	puVar2[0x78] = 0;
	puVar2[0x8c] = 0;
	puVar2[0xa0] = 0;
	puVar2[0xb4] = 0;
	puVar2[200] = 0;
	puVar2[0xdc] = 0;
	puVar2[0xf0] = 0;
	puVar2[0x104] = 0;
	puVar2[0x118] = 0;
	puVar2[300] = 0;
	puVar3 = puVar2 + 0x140;
	lVar1 = 4;
	do {
		*puVar3 = 0;
		puVar3 = puVar3 + 0x14;
		lVar1 = lVar1 + -1;
	} while (lVar1 != 0);
	*puVar2 = 0;
	puVar2[1] = 0;
	puVar2[2] = 0;
	puVar2[3] = 0;
	puVar2[4] = 0;
	puVar2[5] = 0;
	puVar2[6] = 0;
	puVar2[7] = 0;
	puVar2[8] = 0;
	puVar2[9] = 0;
	puVar2[10] = 0;
	puVar2[0xb] = 0;
	puVar2[0xc] = 0;
	puVar2[0xd] = 0;
	puVar2[0xe] = 0;
	puVar2[0xf] = 0;
	puVar2 = puVar2 + 0x10;
	lVar1 = 4;
	do {
		*puVar2 = 0;
		puVar2 = puVar2 + 1;
		lVar1 = lVar1 + -1;
	} while (lVar1 != 0);
	return;
}

void DRLG_L4GeneralFix(void)

{
	char cVar1;
	char *pcVar2;
	char *pcVar3;
	int iVar4;
	longlong lVar5;

	iVar4 = 0;
	pcVar3 = PTR_DAT_100f1804;
	do {
		lVar5 = 0xd;
		pcVar2 = pcVar3;
		do {
			if ((((*pcVar2 == '\x18') || (*pcVar2 == 'z')) && (pcVar2[0x28] == '\x02')) && (pcVar2[1] == '\x05')) {
				*pcVar2 = '\x11';
			}
			cVar1 = pcVar2[0x28];
			if (((cVar1 == '\x18') || (cVar1 == 'z')) && ((pcVar2[0x50] == '\x02' && (pcVar2[0x29] == '\x05')))) {
				pcVar2[0x28] = '\x11';
			}
			cVar1 = pcVar2[0x50];
			if (((cVar1 == '\x18') || (cVar1 == 'z')) && ((pcVar2[0x78] == '\x02' && (pcVar2[0x51] == '\x05')))) {
				pcVar2[0x50] = '\x11';
			}
			pcVar2 = pcVar2 + 0x78;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		pcVar3 = pcVar3 + 1;
	} while (iVar4 < 0x27);
	return;
}

void DRLG_L4(int param_1, ulonglong param_2, ulonglong param_3, ulonglong param_4, longlong param_5, undefined8 param_6, undefined8 param_7, int param_8, undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	ulonglong uVar8;
	undefined8 uVar9;
	undefined uVar11;
	undefined *puVar10;
	char cVar12;
	undefined uVar13;
	undefined *puVar16;
	ulonglong uVar14;
	longlong lVar15;
	undefined *puVar17;
	undefined4 uVar18;
	undefined4 uVar19;
	undefined4 uVar20;
	ulonglong uVar21;
	ulonglong uVar22;
	ulonglong uVar23;
	undefined *puVar24;
	int iVar26;
	ulonglong uVar25;
	longlong lVar27;
	undefined4 in_stack_ffffff58;
	undefined in_stack_ffffff5f;
	undefined4 in_stack_ffffff7c;
	undefined4 in_stack_ffffff80;

	puVar7 = PTR_DAT_100f1cf4;
	puVar6 = PTR_DAT_100f1cf0;
	puVar5 = PTR_DAT_100f1cec;
	puVar4 = PTR_DAT_100f1ce8;
	puVar3 = PTR_DAT_100f19cc;
	puVar2 = PTR_DAT_100f1820;
	puVar17 = PTR_DAT_100f181c;
	puVar24 = PTR_DAT_100f17ec;
	puVar16 = PTR_DAT_100f17e0;
	lVar15 = (longlong)param_8;
	uVar14 = ZEXT48(&toc);
	uVar22 = ZEXT48(PTR_DAT_100f1a90);
	uVar9 = 0;
	uVar21 = ZEXT48(PTR_DAT_100f1a80);
	uVar23 = ZEXT48(PTR_DAT_100f1804);
	do {
		uVar14._7_1_ = (undefined)param_3;
		uVar11 = (undefined)param_2;
		if ((int)uVar9 != 0) {
			DRLG_L4GeneralFix();
			if (*puVar24 != '\x10') {
				uVar11 = 10;
				uVar14._7_1_ = 6;
				param_4 = 8;
				param_5 = 1;
				DRLG_PlaceThemeRooms(7, 10, 6, 8, 1, (char)param_6, (char)param_7, (char)lVar15, in_stack_ffffff58);
			}
			DRLG_L4Shadows();
			uVar13 = DRLG_L4Corners();
			uVar13 = DRLG_L4Subs(uVar13, uVar11, (undefined)uVar14, (char)param_4, (char)param_5,
			    (char)param_6, (char)param_7, (char)lVar15, in_stack_ffffff58);
			DRLG_Init_Globals(uVar13, uVar11, (undefined)uVar14, (char)param_4, (char)param_5, (char)param_6,
			    (char)param_7, (char)lVar15, in_stack_ffffff58);
			uVar9 = QuestStatus(0xb);
			if ((int)uVar9 != 0) {
				lVar27 = 0x14;
				param_5 = 0;
				uVar14 = uVar23;
				param_4 = uVar22;
				do {
					puVar16 = (undefined *)uVar14;
					puVar17 = (undefined *)param_4;
					*puVar17 = *puVar16;
					puVar17[0x28] = puVar16[0x28];
					puVar17[0x50] = puVar16[0x50];
					puVar17[0x78] = puVar16[0x78];
					puVar17[0xa0] = puVar16[0xa0];
					puVar17[200] = puVar16[200];
					puVar17[0xf0] = puVar16[0xf0];
					puVar17[0x118] = puVar16[0x118];
					puVar17[0x140] = puVar16[0x140];
					puVar17[0x168] = puVar16[0x168];
					puVar17[400] = puVar16[400];
					puVar17[0x1b8] = puVar16[0x1b8];
					puVar17[0x1e0] = puVar16[0x1e0];
					puVar17[0x208] = puVar16[0x208];
					puVar17[0x230] = puVar16[0x230];
					puVar17[600] = puVar16[600];
					puVar17[0x280] = puVar16[0x280];
					puVar17[0x2a8] = puVar16[0x2a8];
					puVar17[0x2d0] = puVar16[0x2d0];
					puVar17[0x2f8] = puVar16[0x2f8];
					puVar17[800] = puVar16[800];
					puVar17[0x348] = puVar16[0x348];
					puVar17[0x370] = puVar16[0x370];
					puVar17[0x398] = puVar16[0x398];
					puVar17[0x3c0] = puVar16[0x3c0];
					puVar17[1000] = puVar16[1000];
					puVar17[0x410] = puVar16[0x410];
					puVar17[0x438] = puVar16[0x438];
					puVar17[0x460] = puVar16[0x460];
					puVar17[0x488] = puVar16[0x488];
					puVar17[0x4b0] = puVar16[0x4b0];
					puVar17[0x4d8] = puVar16[0x4d8];
					puVar17[0x500] = puVar16[0x500];
					puVar17[0x528] = puVar16[0x528];
					puVar17[0x550] = puVar16[0x550];
					puVar17[0x578] = puVar16[0x578];
					puVar17[0x5a0] = puVar16[0x5a0];
					puVar17[0x5c8] = puVar16[0x5c8];
					puVar17[0x5f0] = puVar16[0x5f0];
					puVar17[0x618] = puVar16[0x618];
					param_5 = param_5 + 1;
					puVar17[1] = puVar16[1];
					puVar17[0x29] = puVar16[0x29];
					puVar17[0x51] = puVar16[0x51];
					puVar17[0x79] = puVar16[0x79];
					puVar17[0xa1] = puVar16[0xa1];
					puVar17[0xc9] = puVar16[0xc9];
					puVar17[0xf1] = puVar16[0xf1];
					puVar17[0x119] = puVar16[0x119];
					puVar17[0x141] = puVar16[0x141];
					puVar17[0x169] = puVar16[0x169];
					puVar17[0x191] = puVar16[0x191];
					puVar17[0x1b9] = puVar16[0x1b9];
					puVar17[0x1e1] = puVar16[0x1e1];
					puVar17[0x209] = puVar16[0x209];
					puVar17[0x231] = puVar16[0x231];
					puVar17[0x259] = puVar16[0x259];
					puVar17[0x281] = puVar16[0x281];
					puVar17[0x2a9] = puVar16[0x2a9];
					puVar17[0x2d1] = puVar16[0x2d1];
					puVar17[0x2f9] = puVar16[0x2f9];
					puVar17[0x321] = puVar16[0x321];
					puVar17[0x349] = puVar16[0x349];
					puVar17[0x371] = puVar16[0x371];
					puVar17[0x399] = puVar16[0x399];
					puVar17[0x3c1] = puVar16[0x3c1];
					puVar17[0x3e9] = puVar16[0x3e9];
					puVar17[0x411] = puVar16[0x411];
					puVar17[0x439] = puVar16[0x439];
					puVar17[0x461] = puVar16[0x461];
					puVar17[0x489] = puVar16[0x489];
					puVar17[0x4b1] = puVar16[0x4b1];
					puVar17[0x4d9] = puVar16[0x4d9];
					puVar17[0x501] = puVar16[0x501];
					puVar17[0x529] = puVar16[0x529];
					puVar17[0x551] = puVar16[0x551];
					puVar17[0x579] = puVar16[0x579];
					puVar17[0x5a1] = puVar16[0x5a1];
					puVar17[0x5c9] = puVar16[0x5c9];
					puVar17[0x5f1] = puVar16[0x5f1];
					uVar14 = uVar14 + 2;
					uVar14._7_1_ = (undefined)uVar14;
					puVar17[0x619] = puVar16[0x619];
					param_4 = param_4 + 2;
					lVar27 = lVar27 + -1;
				} while (lVar27 != 0);
			}
			uVar14 = (ulonglong) * (uint *)puVar6;
			DRLG_CheckQuests((char)*(undefined4 *)puVar7, (char)*(uint *)puVar6, (undefined)uVar14, (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)lVar15, in_stack_ffffff58);
			uVar20 = (undefined4)lVar15;
			uVar19 = (undefined4)param_7;
			uVar18 = (undefined4)param_6;
			if (*puVar24 == '\x0f') {
				lVar27 = 0;
				uVar21 = uVar23;
				do {
					iVar26 = 0;
					uVar25 = uVar21;
					do {
						if (*(char *)uVar25 == 'b') {
							uVar14 = lVar27 - 1;
							param_4 = 5;
							Make_SetPC(iVar26 + -1, (int)uVar14, 5, 5);
						}
						if (*(char *)uVar25 == 'k') {
							uVar14 = lVar27 - 1;
							param_4 = 5;
							Make_SetPC(iVar26 + -1, (int)uVar14, 5, 5);
						}
						uVar20 = (undefined4)lVar15;
						uVar19 = (undefined4)param_7;
						uVar18 = (undefined4)param_6;
						iVar26 = iVar26 + 1;
						uVar25 = uVar25 + 0x28;
					} while (iVar26 < 0x28);
					lVar27 = lVar27 + 1;
					uVar21 = uVar21 + 1;
				} while ((int)lVar27 < 0x28);
			}
			if (*puVar24 == '\x10') {
				lVar27 = 0x14;
				lVar15 = 0;
				do {
					puVar24 = (undefined *)uVar23;
					puVar16 = (undefined *)uVar22;
					*puVar16 = *puVar24;
					puVar16[0x28] = puVar24[0x28];
					puVar16[0x50] = puVar24[0x50];
					puVar16[0x78] = puVar24[0x78];
					puVar16[0xa0] = puVar24[0xa0];
					puVar16[200] = puVar24[200];
					puVar16[0xf0] = puVar24[0xf0];
					puVar16[0x118] = puVar24[0x118];
					puVar16[0x140] = puVar24[0x140];
					puVar16[0x168] = puVar24[0x168];
					puVar16[400] = puVar24[400];
					puVar16[0x1b8] = puVar24[0x1b8];
					puVar16[0x1e0] = puVar24[0x1e0];
					puVar16[0x208] = puVar24[0x208];
					puVar16[0x230] = puVar24[0x230];
					puVar16[600] = puVar24[600];
					puVar16[0x280] = puVar24[0x280];
					puVar16[0x2a8] = puVar24[0x2a8];
					puVar16[0x2d0] = puVar24[0x2d0];
					puVar16[0x2f8] = puVar24[0x2f8];
					puVar16[800] = puVar24[800];
					puVar16[0x348] = puVar24[0x348];
					puVar16[0x370] = puVar24[0x370];
					puVar16[0x398] = puVar24[0x398];
					puVar16[0x3c0] = puVar24[0x3c0];
					puVar16[1000] = puVar24[1000];
					puVar16[0x410] = puVar24[0x410];
					puVar16[0x438] = puVar24[0x438];
					puVar16[0x460] = puVar24[0x460];
					puVar16[0x488] = puVar24[0x488];
					puVar16[0x4b0] = puVar24[0x4b0];
					puVar16[0x4d8] = puVar24[0x4d8];
					puVar16[0x500] = puVar24[0x500];
					puVar16[0x528] = puVar24[0x528];
					puVar16[0x550] = puVar24[0x550];
					puVar16[0x578] = puVar24[0x578];
					puVar16[0x5a0] = puVar24[0x5a0];
					puVar16[0x5c8] = puVar24[0x5c8];
					puVar16[0x5f0] = puVar24[0x5f0];
					puVar16[0x618] = puVar24[0x618];
					lVar15 = lVar15 + 1;
					puVar16[1] = puVar24[1];
					puVar16[0x29] = puVar24[0x29];
					puVar16[0x51] = puVar24[0x51];
					puVar16[0x79] = puVar24[0x79];
					puVar16[0xa1] = puVar24[0xa1];
					puVar16[0xc9] = puVar24[0xc9];
					puVar16[0xf1] = puVar24[0xf1];
					puVar16[0x119] = puVar24[0x119];
					puVar16[0x141] = puVar24[0x141];
					puVar16[0x169] = puVar24[0x169];
					puVar16[0x191] = puVar24[0x191];
					puVar16[0x1b9] = puVar24[0x1b9];
					puVar16[0x1e1] = puVar24[0x1e1];
					puVar16[0x209] = puVar24[0x209];
					puVar16[0x231] = puVar24[0x231];
					puVar16[0x259] = puVar24[0x259];
					puVar16[0x281] = puVar24[0x281];
					puVar16[0x2a9] = puVar24[0x2a9];
					puVar16[0x2d1] = puVar24[0x2d1];
					puVar16[0x2f9] = puVar24[0x2f9];
					puVar16[0x321] = puVar24[0x321];
					puVar16[0x349] = puVar24[0x349];
					puVar16[0x371] = puVar24[0x371];
					puVar16[0x399] = puVar24[0x399];
					puVar16[0x3c1] = puVar24[0x3c1];
					puVar16[0x3e9] = puVar24[0x3e9];
					puVar16[0x411] = puVar24[0x411];
					puVar16[0x439] = puVar24[0x439];
					puVar16[0x461] = puVar24[0x461];
					puVar16[0x489] = puVar24[0x489];
					puVar16[0x4b1] = puVar24[0x4b1];
					puVar16[0x4d9] = puVar24[0x4d9];
					puVar16[0x501] = puVar24[0x501];
					puVar16[0x529] = puVar24[0x529];
					puVar16[0x551] = puVar24[0x551];
					puVar16[0x579] = puVar24[0x579];
					puVar16[0x5a1] = puVar24[0x5a1];
					puVar16[0x5c9] = puVar24[0x5c9];
					puVar16[0x5f1] = puVar24[0x5f1];
					uVar23 = uVar23 + 2;
					puVar16[0x619] = puVar24[0x619];
					uVar22 = uVar22 + 2;
					lVar27 = lVar27 + -1;
				} while (lVar27 != 0);
				DRLG_LoadDiabQuads(0, uVar14, lVar15, param_4, param_5, uVar18, uVar19, uVar20, in_stack_ffffff58);
			}
			return;
		}
		lVar27 = DRLG_InitTrans((char)uVar9, uVar11, (undefined)uVar14, (char)param_4, (char)param_5,
		    (char)param_6, (char)param_7, (char)lVar15, in_stack_ffffff58);
		do {
			uVar11 = InitL4Dungeon((char)lVar27, (char)param_2, (char)param_3, (char)param_4, (char)param_5,
			    (char)param_6, (char)param_7, (char)lVar15, in_stack_ffffff58);
			L4firstRoom(uVar11, (char)param_2, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
			    (char)param_7, (char)lVar15, in_stack_ffffff58);
			L4FixRim();
			lVar27 = GetArea();
			iVar26 = (int)lVar27;
			if (0xac < iVar26) {
				lVar27 = uShape((char)lVar27, (char)param_2, (char)param_3, (char)param_4, (char)param_5,
				    (char)param_6, (char)param_7, (char)lVar15, in_stack_ffffff58);
			}
			uVar19 = (undefined4)param_7;
			uVar18 = (undefined4)param_6;
		} while (iVar26 < 0xad);
		L4makeDungeon();
		L4makeDmt();
		L4tileFix();
		if (*puVar24 == '\x10') {
			L4SaveQuads();
		}
		uVar9 = QuestStatus(0xb);
		if (((int)uVar9 != 0) || ((cVar12 = *puVar24, cVar12 == puVar3[0x168] && (*puVar16 != '\x01')))) {
			param_3 = (ulonglong) * (uint *)puVar7;
			param_5 = 1;
			lVar27 = param_3 * 0x28;
			param_2 = (ulonglong) * (uint *)((int)uVar14 + -0x7514) + lVar27;
			while (cVar12 = (char)lVar27, (int)param_3 < *(int *)puVar5) {
				uVar1 = *(uint *)puVar6;
				lVar27 = param_2 + (ulonglong)uVar1;
				param_4 = (ulonglong) * (uint *)puVar4 - (ulonglong)uVar1;
				if ((int)uVar1 < (int)*(uint *)puVar4) {
					uVar1 = (uint)param_4 >> 3;
					uVar8 = (ulonglong)uVar1;
					uVar25 = param_4;
					if (uVar1 != 0) {
						do {
							puVar10 = (undefined *)lVar27;
							*puVar10 = 1;
							puVar10[1] = 1;
							puVar10[2] = 1;
							puVar10[3] = 1;
							puVar10[4] = 1;
							puVar10[5] = 1;
							puVar10[6] = 1;
							puVar10[7] = 1;
							lVar27 = lVar27 + 8;
							uVar8 = uVar8 - 1;
						} while (uVar8 != 0);
						param_4 = param_4 & 7;
						uVar25 = param_4;
						if (param_4 == 0)
							goto LAB_1003a41c;
					}
					do {
						*(undefined *)lVar27 = 1;
						lVar27 = lVar27 + 1;
						uVar25 = uVar25 - 1;
					} while (uVar25 != 0);
				}
			LAB_1003a41c:
				param_2 = param_2 + 0x28;
				param_3 = param_3 + 1;
			}
		}
		L4AddWall(cVar12, (char)param_2, (char)param_3, (char)param_4, (char)param_5, (char)uVar18,
		    (char)uVar19, (char)lVar15, in_stack_ffffff58);
		uVar11 = DRLG_L2FloodTVal(6, (char)param_2, (char)param_3, (char)param_4, (char)param_5, (char)uVar18,
		    (char)uVar19, (char)lVar15, in_stack_ffffff58);
		DRLG_L4TransFix(uVar11, (char)param_2, (char)param_3, (char)param_4, (char)param_5, (char)uVar18,
		    (char)uVar19, (char)lVar15, in_stack_ffffff58);
		if (**(int **)((int)uVar14 + -0x7524) != 0) {
			param_2 = (ulonglong) * (uint *)puVar6;
			DRLG_L4SetSPRoom(*(int *)puVar7, param_2, param_3, param_4, param_5, uVar18, uVar19, (int)lVar15,
			    in_stack_ffffff58);
		}
		if (*puVar24 == '\x10') {
			DRLG_LoadDiabQuads(1, param_2, param_3, param_4, param_5, uVar18, uVar19, (int)lVar15, in_stack_ffffff58);
		}
		uVar9 = QuestStatus(0xb);
		uVar11 = (undefined)lVar15;
		if ((int)uVar9 == 0) {
			if (*puVar24 == '\x0f') {
				if (param_1 == 0) {
					param_3 = 1;
					param_4 = 0xffffffffffffffff;
					param_5 = -1;
					param_6 = 1;
					param_7 = 0;
					uVar9 = DRLG_L4PlaceMiniSet(&DAT_100f8cd3, 1, 1, -1, -1, 1, 0, uVar11, in_stack_ffffff58,
					    in_stack_ffffff5f, in_stack_ffffff7c, in_stack_ffffff80);
					if ((int)uVar9 != 0) {
						if ((*puVar16 == '\x01') && (puVar3[0x7a] != '\x02')) {
							param_3 = 1;
							param_4 = 0xffffffffffffffff;
							param_5 = -1;
							param_6 = 0;
							param_7 = 1;
							uVar9 = DRLG_L4PlaceMiniSet(&DAT_100f8d5b, 1, 1, -1, -1, 0, 1, (char)lVar15, in_stack_ffffff58,
							    in_stack_ffffff5f, in_stack_ffffff7c, in_stack_ffffff80);
						} else {
							param_3 = 1;
							param_4 = 0xffffffffffffffff;
							param_5 = -1;
							param_6 = 0;
							param_7 = 1;
							uVar9 = DRLG_L4PlaceMiniSet(&DAT_100f8d8f, 1, 1, -1, -1, 0, 1, (char)lVar15, in_stack_ffffff58,
							    in_stack_ffffff5f, in_stack_ffffff7c, in_stack_ffffff80);
						}
					}
					param_2 = (ulonglong) * (uint *)puVar2;
					*(uint *)puVar2 = *(uint *)puVar2 + 1;
				} else {
					param_3 = 1;
					param_4 = 0xffffffffffffffff;
					param_5 = -1;
					param_6 = 0;
					param_7 = 0;
					uVar9 = DRLG_L4PlaceMiniSet(&DAT_100f8cd3, 1, 1, -1, -1, 0, 0, uVar11, in_stack_ffffff58,
					    in_stack_ffffff5f, in_stack_ffffff7c, in_stack_ffffff80);
					if ((int)uVar9 != 0) {
						if ((*puVar16 == '\x01') && (puVar3[0x7a] != '\x02')) {
							param_3 = 1;
							param_4 = 0xffffffffffffffff;
							param_5 = -1;
							param_6 = 1;
							param_7 = 1;
							uVar9 = DRLG_L4PlaceMiniSet(&DAT_100f8d5b, 1, 1, -1, -1, 1, 1, (char)lVar15, in_stack_ffffff58,
							    in_stack_ffffff5f, in_stack_ffffff7c, in_stack_ffffff80);
						} else {
							param_3 = 1;
							param_4 = 0xffffffffffffffff;
							param_5 = -1;
							param_6 = 1;
							param_7 = 1;
							uVar9 = DRLG_L4PlaceMiniSet(&DAT_100f8d8f, 1, 1, -1, -1, 1, 1, (char)lVar15, in_stack_ffffff58,
							    in_stack_ffffff5f, in_stack_ffffff7c, in_stack_ffffff80);
						}
					}
					param_2 = (ulonglong) * (uint *)puVar17;
					*(uint *)puVar17 = *(uint *)puVar17 + 1;
				}
			} else {
				if (param_1 == 0) {
					param_3 = 1;
					param_4 = 0xffffffffffffffff;
					param_5 = -1;
					param_6 = 1;
					param_7 = 0;
					uVar9 = DRLG_L4PlaceMiniSet(&DAT_100f8cd3, 1, 1, -1, -1, 1, 0, uVar11, in_stack_ffffff58,
					    in_stack_ffffff5f, in_stack_ffffff7c, in_stack_ffffff80);
					if (((int)uVar9 != 0) && (*puVar24 != '\x10')) {
						param_3 = 1;
						param_4 = 0xffffffffffffffff;
						param_5 = -1;
						param_6 = 0;
						param_7 = 1;
						uVar9 = DRLG_L4PlaceMiniSet(&DAT_100f8d27, 1, 1, -1, -1, 0, 1, (char)lVar15, in_stack_ffffff58,
						    in_stack_ffffff5f, in_stack_ffffff7c, in_stack_ffffff80);
					}
					if (((int)uVar9 != 0) && (*puVar24 == '\r')) {
						param_3 = 1;
						param_4 = 0xffffffffffffffff;
						param_5 = -1;
						param_6 = 0;
						param_7 = 6;
						uVar9 = DRLG_L4PlaceMiniSet(&DAT_100f8cfd, 1, 1, -1, -1, 0, 6, (char)lVar15, in_stack_ffffff58,
						    in_stack_ffffff5f, in_stack_ffffff7c, in_stack_ffffff80);
					}
					param_2 = (ulonglong) * (uint *)puVar2;
					*(uint *)puVar2 = *(uint *)puVar2 + 1;
				} else {
					if (param_1 == 1) {
						param_3 = 1;
						param_4 = 0xffffffffffffffff;
						param_5 = -1;
						param_6 = 0;
						param_7 = 0;
						uVar9 = DRLG_L4PlaceMiniSet(&DAT_100f8cd3, 1, 1, -1, -1, 0, 0, uVar11, in_stack_ffffff58,
						    in_stack_ffffff5f, in_stack_ffffff7c, in_stack_ffffff80);
						if (((int)uVar9 != 0) && (*puVar24 != '\x10')) {
							param_3 = 1;
							param_4 = 0xffffffffffffffff;
							param_5 = -1;
							param_6 = 1;
							param_7 = 1;
							uVar9 = DRLG_L4PlaceMiniSet(&DAT_100f8d27, 1, 1, -1, -1, 1, 1, (char)lVar15, in_stack_ffffff58,
							    in_stack_ffffff5f, in_stack_ffffff7c, in_stack_ffffff80);
						}
						if (((int)uVar9 != 0) && (*puVar24 == '\r')) {
							param_3 = 1;
							param_4 = 0xffffffffffffffff;
							param_5 = -1;
							param_6 = 0;
							param_7 = 6;
							uVar9 = DRLG_L4PlaceMiniSet(&DAT_100f8cfd, 1, 1, -1, -1, 0, 6, (char)lVar15, in_stack_ffffff58,
							    in_stack_ffffff5f, in_stack_ffffff7c, in_stack_ffffff80);
						}
						param_2 = (ulonglong) * (uint *)puVar17;
						*(uint *)puVar17 = *(uint *)puVar17 + 1;
					} else {
						param_3 = 1;
						param_4 = 0xffffffffffffffff;
						param_5 = -1;
						param_6 = 0;
						param_7 = 0;
						uVar9 = DRLG_L4PlaceMiniSet(&DAT_100f8cd3, 1, 1, -1, -1, 0, 0, uVar11, in_stack_ffffff58,
						    in_stack_ffffff5f, in_stack_ffffff7c, in_stack_ffffff80);
						if (((int)uVar9 != 0) && (*puVar24 != '\x10')) {
							param_3 = 1;
							param_4 = 0xffffffffffffffff;
							param_5 = -1;
							param_6 = 0;
							param_7 = 1;
							uVar9 = DRLG_L4PlaceMiniSet(&DAT_100f8d27, 1, 1, -1, -1, 0, 1, (char)lVar15, in_stack_ffffff58,
							    in_stack_ffffff5f, in_stack_ffffff7c, in_stack_ffffff80);
						}
						if (((int)uVar9 != 0) && (*puVar24 == '\r')) {
							param_3 = 1;
							param_4 = 0xffffffffffffffff;
							param_5 = -1;
							param_6 = 1;
							param_7 = 6;
							uVar9 = DRLG_L4PlaceMiniSet(&DAT_100f8cfd, 1, 1, -1, -1, 1, 6, (char)lVar15, in_stack_ffffff58,
							    in_stack_ffffff5f, in_stack_ffffff7c, in_stack_ffffff80);
						}
						param_2 = (ulonglong) * (uint *)puVar2;
						*(uint *)puVar2 = *(uint *)puVar2 + 1;
					}
				}
			}
		} else {
			if (param_1 == 0) {
				param_3 = 1;
				param_4 = 0xffffffffffffffff;
				param_5 = -1;
				param_6 = 1;
				param_7 = 0;
				uVar9 = DRLG_L4PlaceMiniSet(&DAT_100f8cd3, 1, 1, -1, -1, 1, 0, uVar11, in_stack_ffffff58, in_stack_ffffff5f,
				    in_stack_ffffff7c, in_stack_ffffff80);
				if (((int)uVar9 != 0) && (*puVar24 == '\r')) {
					param_3 = 1;
					param_4 = 0xffffffffffffffff;
					param_5 = -1;
					param_6 = 0;
					param_7 = 6;
					uVar9 = DRLG_L4PlaceMiniSet(&DAT_100f8cfd, 1, 1, -1, -1, 0, 6, (char)lVar15, in_stack_ffffff58,
					    in_stack_ffffff5f, in_stack_ffffff7c, in_stack_ffffff80);
				}
				param_2 = (ulonglong) * (uint *)puVar2;
				*(uint *)puVar2 = *(uint *)puVar2 + 1;
			} else {
				if (param_1 == 1) {
					param_3 = 1;
					param_4 = 0xffffffffffffffff;
					param_5 = -1;
					param_6 = 0;
					param_7 = 0;
					uVar9 = DRLG_L4PlaceMiniSet(&DAT_100f8cd3, 1, 1, -1, -1, 0, 0, uVar11, in_stack_ffffff58,
					    in_stack_ffffff5f, in_stack_ffffff7c, in_stack_ffffff80);
					if (((int)uVar9 != 0) && (*puVar24 == '\r')) {
						param_3 = 1;
						param_4 = 0xffffffffffffffff;
						param_5 = -1;
						param_6 = 0;
						param_7 = 6;
						uVar9 = DRLG_L4PlaceMiniSet(&DAT_100f8cfd, 1, 1, -1, -1, 0, 6, (char)lVar15, in_stack_ffffff58,
						    in_stack_ffffff5f, in_stack_ffffff7c, in_stack_ffffff80);
					}
					*(int *)puVar2 = **(int **)((int)uVar14 + -0x754c) * 2 + 0x16;
					uVar1 = *(int *)uVar21 * 2;
					param_2 = (ulonglong)uVar1;
					*(uint *)puVar17 = uVar1 + 0x16;
				} else {
					param_3 = 1;
					param_4 = 0xffffffffffffffff;
					param_5 = -1;
					param_6 = 0;
					param_7 = 0;
					uVar9 = DRLG_L4PlaceMiniSet(&DAT_100f8cd3, 1, 1, -1, -1, 0, 0, uVar11, in_stack_ffffff58,
					    in_stack_ffffff5f, in_stack_ffffff7c, in_stack_ffffff80);
					if (((int)uVar9 != 0) && (*puVar24 == '\r')) {
						param_3 = 1;
						param_4 = 0xffffffffffffffff;
						param_5 = -1;
						param_6 = 1;
						param_7 = 6;
						uVar9 = DRLG_L4PlaceMiniSet(&DAT_100f8cfd, 1, 1, -1, -1, 1, 6, (char)lVar15, in_stack_ffffff58,
						    in_stack_ffffff5f, in_stack_ffffff7c, in_stack_ffffff80);
					}
					param_2 = (ulonglong) * (uint *)puVar2;
					*(uint *)puVar2 = *(uint *)puVar2 + 1;
				}
			}
		}
	} while (true);
}

void DRLG_L4Pass3(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	short sVar6;
	longlong lVar5;
	undefined **ppuVar7;
	ulonglong uVar8;
	ulonglong uVar9;
	short sVar11;
	longlong lVar10;
	short sVar12;
	longlong lVar13;
	short sVar17;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar18;
	int iVar19;
	longlong lVar20;
	longlong lVar21;
	undefined4 in_stack_ffffffb8;

	puVar4 = PTR_DAT_100f1a64;
	puVar3 = PTR_DAT_100f1a54;
	ppuVar7 = &toc;
	uVar8 = FUN_100b8f7c((ulonglong) * (uint *)PTR_DAT_100f1a64, param_2, param_3, param_4, param_5, param_6,
	    param_7, param_8, in_stack_ffffffb8);
	iVar2 = (int)uVar8;
	sVar11 = CONCAT11(*(undefined *)(iVar2 + 0xe9), *(undefined *)(iVar2 + 0xe8)) + 1;
	sVar12 = CONCAT11(*(undefined *)(iVar2 + 0xeb), *(undefined *)(iVar2 + 0xea)) + 1;
	sVar17 = CONCAT11(*(undefined *)(iVar2 + 0xed), *(undefined *)(iVar2 + 0xec)) + 1;
	iVar19 = 0;
	sVar6 = CONCAT11(*(undefined *)(iVar2 + 0xef), *(undefined *)(iVar2 + 0xee)) + 1;
	iVar18 = 0;
	do {
		lVar20 = 0xe;
		iVar14 = 0;
		do {
			*(short *)(iVar18 + *(int *)puVar3 + iVar14) = sVar11;
			*(short *)(iVar18 + *(int *)puVar3 + iVar14 + 0xe0) = sVar12;
			*(short *)(iVar18 + *(int *)puVar3 + iVar14 + 2) = sVar17;
			iVar15 = iVar14 + 0x1c0;
			*(short *)(iVar18 + *(int *)puVar3 + iVar14 + 0xe2) = sVar6;
			*(short *)(iVar18 + *(int *)puVar3 + iVar15) = sVar11;
			*(short *)(iVar18 + *(int *)puVar3 + iVar15 + 0xe0) = sVar12;
			*(short *)(iVar18 + *(int *)puVar3 + iVar15 + 2) = sVar17;
			iVar16 = iVar14 + 0x380;
			*(short *)(iVar18 + *(int *)puVar3 + iVar15 + 0xe2) = sVar6;
			*(short *)(iVar18 + *(int *)puVar3 + iVar16) = sVar11;
			*(short *)(iVar18 + *(int *)puVar3 + iVar16 + 0xe0) = sVar12;
			*(short *)(iVar18 + *(int *)puVar3 + iVar16 + 2) = sVar17;
			iVar15 = iVar14 + 0x540;
			*(short *)(iVar18 + *(int *)puVar3 + iVar16 + 0xe2) = sVar6;
			*(short *)(iVar18 + *(int *)puVar3 + iVar15) = sVar11;
			*(short *)(iVar18 + *(int *)puVar3 + iVar15 + 0xe0) = sVar12;
			*(short *)(iVar18 + *(int *)puVar3 + iVar15 + 2) = sVar17;
			iVar14 = iVar14 + 0x700;
			*(short *)(iVar18 + *(int *)puVar3 + iVar15 + 0xe2) = sVar6;
			lVar20 = lVar20 + -1;
		} while (lVar20 != 0);
		iVar19 = iVar19 + 2;
		iVar18 = iVar18 + 4;
	} while (iVar19 < 0x70);
	uVar8 = ZEXT48(ppuVar7[-0x1df3]);
	lVar13 = 0;
	lVar20 = 0x20;
	do {
		lVar21 = 0x28;
		lVar10 = 0xe00;
		uVar9 = uVar8;
		do {
			lVar5 = (ulonglong) * (byte *)uVar9 - 1;
			if (lVar5 < 0) {
				sVar6 = 0;
				sVar11 = 0;
				sVar17 = 0;
				sVar12 = 0;
			} else {
				puVar1 = (undefined *)(iVar2 + (int)lVar5 * 8);
				sVar6 = CONCAT11(puVar1[1], *puVar1) + 1;
				sVar11 = CONCAT11(puVar1[3], puVar1[2]) + 1;
				sVar17 = CONCAT11(puVar1[5], puVar1[4]) + 1;
				sVar12 = CONCAT11(puVar1[7], puVar1[6]) + 1;
			}
			uVar9 = uVar9 + 0x28;
			iVar19 = (int)lVar10;
			iVar18 = (int)lVar20;
			*(short *)(iVar18 + *(int *)puVar3 + iVar19) = sVar6;
			*(short *)(iVar18 + *(int *)puVar3 + iVar19 + 0xe0) = sVar11;
			*(short *)(iVar18 + *(int *)puVar3 + iVar19 + 2) = sVar17;
			lVar5 = (ulonglong) * (uint *)puVar3 + lVar10;
			lVar10 = lVar10 + 0x1c0;
			*(short *)(iVar18 + (int)lVar5 + 0xe2) = sVar12;
			lVar21 = lVar21 + -1;
		} while (lVar21 != 0);
		lVar13 = lVar13 + 1;
		uVar8 = uVar8 + 1;
		lVar20 = lVar20 + 4;
	} while ((int)lVar13 < 0x28);
	FUN_100b9100(*(int *)puVar4, (char)uVar9, (char)lVar10, (char)uVar8, (char)lVar20, (char)lVar13,
	    (char)lVar5, (char)sVar12, in_stack_ffffffb8);
	return;
}

void CreateL4Dungeon(undefined4 param_1, int param_2, undefined8 param_3, undefined8 param_4,
    longlong param_5, undefined8 param_6, undefined8 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined4 *puVar2;
	undefined **ppuVar3;
	undefined8 uVar4;
	undefined8 extraout_r3;
	undefined uVar5;
	ulonglong uVar6;
	undefined uVar7;
	ulonglong uVar8;
	undefined uVar9;
	ulonglong uVar10;
	undefined uVar11;
	undefined7 uVar12;
	undefined uVar13;
	undefined4 uVar14;
	undefined uVar15;
	undefined4 uVar16;
	undefined uVar17;
	undefined uVar18;
	undefined4 in_stack_ffffffc8;

	uVar12 = (undefined7)((ulonglong)param_5 >> 8);
	uVar13 = (undefined)param_5;
	ppuVar3 = &toc;
	SetRndSeed(param_1);
	uVar10 = 0x10;
	puVar1 = (undefined4 *)ppuVar3[-0x1d4d];
	uVar8 = 0x60;
	*(undefined4 *)ppuVar3[-0x1d4c] = 0x10;
	puVar2 = (undefined4 *)ppuVar3[-0x1d4e];
	*puVar1 = 0x10;
	puVar1 = (undefined4 *)ppuVar3[-0x1d4f];
	*puVar2 = 0x60;
	puVar2 = (undefined4 *)ppuVar3[-0x1dec];
	uVar6 = ZEXT48(puVar2);
	*puVar1 = 0x60;
	puVar1 = (undefined4 *)ppuVar3[-0x1ded];
	*puVar2 = 0x28;
	*puVar1 = 0x28;
	uVar4 = DRLG_InitSetPC();
	DRLG_LoadL4SP(uVar4, uVar6, uVar8, uVar10, CONCAT71(uVar12, uVar13), (int)param_6, (int)param_7, param_8,
	    in_stack_ffffffc8);
	uVar16 = (undefined4)param_7;
	uVar14 = (undefined4)param_6;
	DRLG_L4(param_2, uVar6, uVar8, uVar10, CONCAT71(uVar12, uVar13), param_6, param_7, param_8,
	    in_stack_ffffffc8);
	uVar18 = (undefined)param_8;
	uVar17 = (undefined)uVar16;
	uVar15 = (undefined)uVar14;
	uVar11 = (undefined)uVar10;
	uVar9 = (undefined)uVar8;
	uVar7 = (undefined)uVar6;
	uVar5 = DRLG_L4Pass3(extraout_r3, uVar6, uVar8, uVar10, CONCAT71(uVar12, uVar13), uVar14, uVar16, param_8,
	    in_stack_ffffffc8);
	DRLG_FreeL4SP(uVar5, uVar7, uVar9, uVar11, uVar13, uVar15, uVar17, uVar18, in_stack_ffffffc8);
	DRLG_SetPC();
	return;
}
