
void DrawSpellCel(int param_1, undefined8 param_2, longlong param_3, longlong param_4, longlong param_5,
    int param_6, int param_7, int param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined **ppuVar2;
	ulonglong uVar3;
	longlong lVar4;
	ulonglong uVar5;
	longlong lVar6;
	char cVar7;
	undefined uVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	char *pcVar12;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffffa8;
	int local_28;
	char *local_24;
	int local_20;
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	uVar8 = (undefined)param_5;
	lVar11 = (longlong)param_8;
	lVar10 = (longlong)param_7;
	lVar9 = (longlong)param_6;
	ppuVar2 = &toc;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar3 = FUN_100b8f7c(param_3, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	puVar1 = ppuVar2[-0x1da5];
	local_28 = *(int *)ppuVar2[-0x1e01] + *(int *)(ppuVar2[-0x1da6] + (int)param_2 * 4) + param_1;
	uVar5 = ZEXT48(register0x0000000c) - 0x20;
	lVar4 = FUN_1003cdf8(uVar3, (int)param_4, (int *)uVar5);
	local_24 = (char *)lVar4;
	pcVar12 = local_24 + local_20;
	lVar4 = param_5;
	do {
		cVar7 = *local_24;
		lVar6 = (longlong)cVar7;
		if (lVar6 < 0) {
			local_28 = local_28 - (int)cVar7;
			local_24 = local_24 + 1;
		} else {
			param_4 = ZEXT48(register0x0000000c) - 0x24;
			lVar6 = -lVar6;
			uVar5 = ZEXT48(puVar1);
			local_24 = local_24 + 1;
			FUN_100c996c(&local_28, (byte **)param_4, (int)puVar1, (int)cVar7);
		}
		lVar4 = lVar4 + lVar6;
	} while (((int)lVar4 != 0) || (local_28 = (local_28 + -0x300) - (int)param_5, lVar4 = param_5, local_24 != pcVar12));
	FUN_100b9100((int)param_3, (char)param_4, (char)uVar5, cVar7, uVar8, (char)lVar9, (char)lVar10,
	    (char)lVar11, in_stack_ffffffa8);
	return;
}

void SetSpellTrans(char param_1)

{
	char cVar1;
	undefined *puVar2;
	char cVar3;
	undefined *puVar4;
	char cVar5;
	char cVar6;
	char cVar7;
	char cVar8;
	char cVar9;
	char cVar10;
	char *pcVar11;
	char cVar12;
	longlong lVar13;

	puVar2 = PTR_DAT_100f193c;
	if (param_1 == '\0') {
		lVar13 = 4;
		cVar12 = '\0';
		pcVar11 = PTR_DAT_100f193c;
		do {
			*pcVar11 = cVar12;
			pcVar11[1] = cVar12 + '\x01';
			pcVar11[2] = cVar12 + '\x02';
			pcVar11[3] = cVar12 + '\x03';
			pcVar11[4] = cVar12 + '\x04';
			pcVar11[5] = cVar12 + '\x05';
			pcVar11[6] = cVar12 + '\x06';
			pcVar11[7] = cVar12 + '\a';
			pcVar11[8] = cVar12 + '\b';
			pcVar11[9] = cVar12 + '\t';
			pcVar11[10] = cVar12 + '\n';
			pcVar11[0xb] = cVar12 + '\v';
			pcVar11[0xc] = cVar12 + '\f';
			pcVar11[0xd] = cVar12 + '\r';
			pcVar11[0xe] = cVar12 + '\x0e';
			pcVar11[0xf] = cVar12 + '\x0f';
			cVar1 = cVar12 + '\x18';
			pcVar11[0x10] = cVar12 + '\x10';
			pcVar11[0x11] = cVar12 + '\x11';
			cVar10 = cVar12 + '\x19';
			pcVar11[0x12] = cVar12 + '\x12';
			cVar9 = cVar12 + '\x1a';
			pcVar11[0x13] = cVar12 + '\x13';
			cVar8 = cVar12 + '\x1b';
			pcVar11[0x14] = cVar12 + '\x14';
			cVar7 = cVar12 + '\x1c';
			pcVar11[0x15] = cVar12 + '\x15';
			cVar6 = cVar12 + '\x1d';
			pcVar11[0x16] = cVar12 + '\x16';
			cVar5 = cVar12 + '\x1e';
			pcVar11[0x17] = cVar12 + '\x17';
			cVar3 = cVar12 + '\x1f';
			cVar12 = cVar12 + ' ';
			pcVar11[0x18] = cVar1;
			pcVar11[0x19] = cVar10;
			pcVar11[0x1a] = cVar9;
			pcVar11[0x1b] = cVar8;
			pcVar11[0x1c] = cVar7;
			pcVar11[0x1d] = cVar6;
			pcVar11[0x1e] = cVar5;
			pcVar11[0x1f] = cVar3;
			pcVar11 = pcVar11 + 0x20;
			lVar13 = lVar13 + -1;
		} while (lVar13 != 0);
	}
	pcVar11 = puVar2 + 0x80;
	lVar13 = 4;
	cVar12 = -0x80;
	do {
		*pcVar11 = cVar12;
		pcVar11[1] = cVar12 + '\x01';
		pcVar11[2] = cVar12 + '\x02';
		pcVar11[3] = cVar12 + '\x03';
		pcVar11[4] = cVar12 + '\x04';
		pcVar11[5] = cVar12 + '\x05';
		pcVar11[6] = cVar12 + '\x06';
		pcVar11[7] = cVar12 + '\a';
		pcVar11[8] = cVar12 + '\b';
		pcVar11[9] = cVar12 + '\t';
		pcVar11[10] = cVar12 + '\n';
		pcVar11[0xb] = cVar12 + '\v';
		pcVar11[0xc] = cVar12 + '\f';
		pcVar11[0xd] = cVar12 + '\r';
		pcVar11[0xe] = cVar12 + '\x0e';
		pcVar11[0xf] = cVar12 + '\x0f';
		cVar1 = cVar12 + '\x18';
		pcVar11[0x10] = cVar12 + '\x10';
		pcVar11[0x11] = cVar12 + '\x11';
		cVar10 = cVar12 + '\x19';
		pcVar11[0x12] = cVar12 + '\x12';
		cVar9 = cVar12 + '\x1a';
		pcVar11[0x13] = cVar12 + '\x13';
		cVar8 = cVar12 + '\x1b';
		pcVar11[0x14] = cVar12 + '\x14';
		cVar7 = cVar12 + '\x1c';
		pcVar11[0x15] = cVar12 + '\x15';
		cVar6 = cVar12 + '\x1d';
		pcVar11[0x16] = cVar12 + '\x16';
		cVar5 = cVar12 + '\x1e';
		pcVar11[0x17] = cVar12 + '\x17';
		cVar3 = cVar12 + '\x1f';
		cVar12 = cVar12 + ' ';
		pcVar11[0x18] = cVar1;
		pcVar11[0x19] = cVar10;
		pcVar11[0x1a] = cVar9;
		pcVar11[0x1b] = cVar8;
		pcVar11[0x1c] = cVar7;
		pcVar11[0x1d] = cVar6;
		pcVar11[0x1e] = cVar5;
		pcVar11[0x1f] = cVar3;
		pcVar11 = pcVar11 + 0x20;
		lVar13 = lVar13 + -1;
	} while (lVar13 != 0);
	puVar2[0xff] = 0;
	if (param_1 == '\x03') {
		puVar2[0x90] = 0xd1;
		puVar2[0x91] = 0xd3;
		puVar2[0x92] = 0xd5;
		puVar2[0xa0] = 0xd0;
		puVar2[0xc0] = 0xd0;
		puVar2[0xa1] = 0xd1;
		puVar2[0xc1] = 0xd1;
		puVar2[0xa2] = 0xd2;
		puVar2[0xc2] = 0xd2;
		puVar2[0xa3] = 0xd3;
		puVar2[0xc3] = 0xd3;
		puVar2[0xa4] = 0xd4;
		puVar2[0xc4] = 0xd4;
		puVar2[0xa5] = 0xd5;
		puVar2[0xc5] = 0xd5;
		puVar2[0xa6] = 0xd6;
		puVar2[0xc6] = 0xd6;
		puVar2[0xa7] = 0xd7;
		puVar2[199] = 0xd7;
		puVar2[0xa8] = 0xd8;
		puVar2[200] = 0xd8;
		puVar2[0xa9] = 0xd9;
		puVar2[0xc9] = 0xd9;
		puVar2[0xaa] = 0xda;
		puVar2[0xca] = 0xda;
		puVar2[0xab] = 0xdb;
		puVar2[0xcb] = 0xdb;
		puVar2[0xac] = 0xdc;
		puVar2[0xcc] = 0xdc;
		puVar2[0xad] = 0xdd;
		puVar2[0xcd] = 0xdd;
		puVar2[0xae] = 0xde;
		puVar2[0xce] = 0xde;
		puVar2[0xaf] = 0xdf;
		puVar2[0xcf] = 0xdf;
	} else {
		if (param_1 < '\x03') {
			if (param_1 == '\x01') {
				puVar2[0x90] = 0xb1;
				puVar2[0x91] = 0xb3;
				puVar2[0x92] = 0xb5;
				puVar2[0xa0] = 0xb0;
				puVar2[0xc0] = 0xb0;
				puVar2[0xd0] = 0xb0;
				puVar2[0xa1] = 0xb1;
				puVar2[0xc1] = 0xb1;
				puVar2[0xd1] = 0xb1;
				puVar2[0xa2] = 0xb2;
				puVar2[0xc2] = 0xb2;
				puVar2[0xd2] = 0xb2;
				puVar2[0xa3] = 0xb3;
				puVar2[0xc3] = 0xb3;
				puVar2[0xd3] = 0xb3;
				puVar2[0xa4] = 0xb4;
				puVar2[0xc4] = 0xb4;
				puVar2[0xd4] = 0xb4;
				puVar2[0xa5] = 0xb5;
				puVar2[0xc5] = 0xb5;
				puVar2[0xd5] = 0xb5;
				puVar2[0xa6] = 0xb6;
				puVar2[0xc6] = 0xb6;
				puVar2[0xd6] = 0xb6;
				puVar2[0xa7] = 0xb7;
				puVar2[199] = 0xb7;
				puVar2[0xd7] = 0xb7;
				puVar2[0xa8] = 0xb8;
				puVar2[200] = 0xb8;
				puVar2[0xd8] = 0xb8;
				puVar2[0xa9] = 0xb9;
				puVar2[0xc9] = 0xb9;
				puVar2[0xd9] = 0xb9;
				puVar2[0xaa] = 0xba;
				puVar2[0xca] = 0xba;
				puVar2[0xda] = 0xba;
				puVar2[0xab] = 0xbb;
				puVar2[0xcb] = 0xbb;
				puVar2[0xdb] = 0xbb;
				puVar2[0xac] = 0xbc;
				puVar2[0xcc] = 0xbc;
				puVar2[0xdc] = 0xbc;
				puVar2[0xad] = 0xbd;
				puVar2[0xcd] = 0xbd;
				puVar2[0xdd] = 0xbd;
				puVar2[0xae] = 0xbe;
				puVar2[0xce] = 0xbe;
				puVar2[0xde] = 0xbe;
				puVar2[0xaf] = 0xbf;
				puVar2[0xcf] = 0xbf;
				puVar2[0xdf] = 0xbf;
			} else {
				if ('\0' < param_1) {
					puVar2[0x90] = 0xa1;
					puVar2[0x91] = 0xa3;
					puVar2[0x92] = 0xa5;
					puVar2[0xc0] = 0xa0;
					puVar2[0xd0] = 0xa0;
					puVar2[0xc1] = 0xa1;
					puVar2[0xd1] = 0xa1;
					puVar2[0xc2] = 0xa2;
					puVar2[0xd2] = 0xa2;
					puVar2[0xc3] = 0xa3;
					puVar2[0xd3] = 0xa3;
					puVar2[0xc4] = 0xa4;
					puVar2[0xd4] = 0xa4;
					puVar2[0xc5] = 0xa5;
					puVar2[0xd5] = 0xa5;
					puVar2[0xc6] = 0xa6;
					puVar2[0xd6] = 0xa6;
					puVar2[199] = 0xa7;
					puVar2[0xd7] = 0xa7;
					puVar2[200] = 0xa8;
					puVar2[0xd8] = 0xa8;
					puVar2[0xc9] = 0xa9;
					puVar2[0xd9] = 0xa9;
					puVar2[0xca] = 0xaa;
					puVar2[0xda] = 0xaa;
					puVar2[0xcb] = 0xab;
					puVar2[0xdb] = 0xab;
					puVar2[0xcc] = 0xac;
					puVar2[0xdc] = 0xac;
					puVar2[0xcd] = 0xad;
					puVar2[0xdd] = 0xad;
					puVar2[0xce] = 0xae;
					puVar2[0xde] = 0xae;
					puVar2[0xcf] = 0xaf;
					puVar2[0xdf] = 0xaf;
				}
			}
		} else {
			if (param_1 < '\x05') {
				puVar2[0x90] = 0xf1;
				puVar2[0x91] = 0xf3;
				puVar2[0x92] = 0xf5;
				puVar2[0xa0] = 0xf0;
				puVar2[0xc0] = 0xf0;
				puVar2[0xd0] = 0xf0;
				puVar2[0xa1] = 0xf1;
				puVar2[0xc1] = 0xf1;
				puVar2[0xd1] = 0xf1;
				puVar2[0xa2] = 0xf2;
				puVar2[0xc2] = 0xf2;
				puVar2[0xd2] = 0xf2;
				puVar2[0xa3] = 0xf3;
				puVar2[0xc3] = 0xf3;
				puVar2[0xd3] = 0xf3;
				puVar2[0xa4] = 0xf4;
				puVar2[0xc4] = 0xf4;
				puVar2[0xd4] = 0xf4;
				puVar2[0xa5] = 0xf5;
				puVar2[0xc5] = 0xf5;
				puVar2[0xd5] = 0xf5;
				puVar2[0xa6] = 0xf6;
				puVar2[0xc6] = 0xf6;
				puVar2[0xd6] = 0xf6;
				puVar2[0xa7] = 0xf7;
				puVar2[199] = 0xf7;
				puVar2[0xd7] = 0xf7;
				puVar4 = puVar2 + 0xf8;
				lVar13 = 7;
				cVar12 = -8;
				do {
					puVar4[-0x50] = cVar12;
					puVar4[-0x30] = cVar12;
					puVar4[-0x20] = cVar12;
					puVar4 = puVar4 + 1;
					lVar13 = lVar13 + -1;
					cVar12 = cVar12 + '\x01';
				} while (lVar13 != 0);
				puVar2[0xaf] = 0;
				puVar2[0xcf] = 0;
				puVar2[0xdf] = 0;
			}
		}
	}
	return;
}

void DrawSpell(void)

{
	char cVar1;
	char cVar2;
	undefined *puVar3;
	int iVar4;
	undefined **ppuVar5;
	undefined8 uVar6;
	char cVar7;
	undefined *puVar8;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	char cVar9;
	undefined *puVar10;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f1824;
	ppuVar5 = &toc;
	puVar10 = PTR_DAT_100f1828 + 0xb4;
	iVar4 = *(int *)PTR_DAT_100f1824 * 0x55ec;
	puVar8 = PTR_DAT_100f1828 + iVar4;
	cVar9 = puVar8[0xb8];
	cVar7 = (char)*(undefined4 *)(puVar10 + iVar4);
	cVar1 = puVar8[0x5570];
	cVar2 = puVar8[(int)cVar7 + 0xc1];
	if ((cVar9 == '\x01') && ((int)cVar7 != -1)) {
		ppuVar5 = &toc;
		uVar6 = CheckSpell(*(int *)PTR_DAT_100f1824, (int)cVar7, '\x01', 1, 1, (char)in_r8, (char)in_r9,
		    (char)in_r10, in_stack_ffffffb8);
		if ((int)uVar6 == 0) {
			cVar9 = '\x04';
		}
		if ((int)cVar2 + (int)cVar1 < 1) {
			cVar9 = '\x04';
		}
	}
	if (((*ppuVar5[-0x1df9] == '\0') && (cVar9 != '\x04')) && (*(int *)(ppuVar5[-0x1da7] + (int)cVar7 * 0x38 + 0x18) == 0)) {
		cVar9 = '\x04';
	}
	if (*(int *)(puVar10 + *(int *)puVar3 * 0x55ec) < 0) {
		cVar9 = '\x04';
	}
	SetSpellTrans(cVar9);
	if (cVar7 == -1) {
		DrawSpellCel(0x275, 0x277, ZEXT48(ppuVar5[-0x13ec]), 0x1b, 0x38, in_r8, in_r9, in_r10, in_stack_ffffffb8);
	} else {
		DrawSpellCel(0x275, 0x277, ZEXT48(ppuVar5[-0x13ec]),
		    (longlong) * (char *)((int)ppuVar5 + (int)cVar7 + -0x2cf8), 0x38, in_r8, in_r9, in_r10,
		    in_stack_ffffffb8);
	}
	return;
}

void DrawSpellList(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined4 uVar8;
	char cVar9;
	ulonglong uVar10;
	undefined *puVar11;
	undefined *puVar12;
	undefined uVar13;
	uint uVar15;
	undefined uVar18;
	ulonglong uVar14;
	int iVar16;
	undefined4 uVar17;
	undefined uVar20;
	undefined4 uVar19;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	ulonglong in_r13;
	longlong lVar21;
	ulonglong uVar22;
	ulonglong uVar23;
	longlong unaff_r19;
	int iVar24;
	int iVar25;
	longlong lVar26;
	int iVar27;
	int iVar28;
	longlong lVar29;
	longlong lVar30;
	undefined4 in_stack_ffffff68;
	undefined in_stack_ffffff6f;
	undefined4 in_stack_ffffff7c;
	undefined4 in_stack_ffffff80;
	undefined4 in_stack_ffffff84;
	undefined4 in_stack_ffffff88;
	undefined4 in_stack_ffffff8c;
	undefined4 in_stack_ffffff90;
	undefined4 in_stack_ffffff94;
	uint local_68;
	uint local_60;
	undefined *local_58;

	uVar8 = _DAT_100f2b30;
	puVar7 = PTR_DAT_100f1934;
	puVar6 = PTR_DAT_100f1930;
	puVar5 = PTR_DAT_100f192c;
	puVar4 = PTR_DAT_100f1920;
	puVar3 = PTR_DAT_100f191c;
	puVar2 = PTR_DAT_100f1828;
	puVar1 = PTR_DAT_100f1824;
	uVar10 = ZEXT48(&toc);
	iVar27 = 0x27c;
	lVar26 = 0x1ef;
	*(undefined4 *)PTR_DAT_100f1930 = 0xffffffff;
	*puVar5 = 0;
	ClearPanel();
	iVar25 = 0;
	do {
		if (iVar25 == 2) {
			SetSpellTrans('\x02');
			local_68 = 0x2c;
			local_60 = *(uint *)(puVar2 + *(int *)puVar1 * 0x55ec + 0x114);
			in_r13 = (ulonglong) * (uint *)(puVar2 + *(int *)puVar1 * 0x55ec + 0x114 + 1);
		} else {
			if (iVar25 < 2) {
				if (iVar25 == 0) {
					SetSpellTrans('\0');
					local_68 = 0x2e;
					local_60 = *(uint *)(puVar2 + *(int *)puVar1 * 0x55ec + 0x10c);
					in_r13 = (ulonglong) * (uint *)(puVar2 + *(int *)puVar1 * 0x55ec + 0x10c + 1);
				} else {
					if (-1 < iVar25) {
						local_68 = 0x2f;
						local_60 = *(uint *)(puVar2 + *(int *)puVar1 * 0x55ec + 0x104);
						in_r13 = (ulonglong) * (uint *)(puVar2 + *(int *)puVar1 * 0x55ec + 0x104 + 1);
					}
				}
			} else {
				if (iVar25 < 4) {
					SetSpellTrans('\x03');
					local_68 = 0x2d;
					local_60 = *(uint *)(puVar2 + *(int *)puVar1 * 0x55ec + 0x5560);
					in_r13 = (ulonglong) * (uint *)(puVar2 + *(int *)puVar1 * 0x55ec + 0x5560 + 1);
				}
			}
		}
		local_58 = puVar7 + 0x38;
		uVar23 = 1;
		lVar21 = uVar10 - 0x2cf7;
		uVar22 = 0;
		iVar24 = 1;
		do {
			if ((in_r13 & uVar23 | (ulonglong)local_60 & uVar22) != 0) {
				if (iVar25 == 1) {
					unaff_r19 = (longlong)(char)(puVar2 + *(int *)puVar1 * 0x55ec)[iVar24 + 0xc1] + (longlong)(char)(puVar2 + *(int *)puVar1 * 0x55ec)[0x5570];
					if (unaff_r19 < 0) {
						unaff_r19 = 0;
					}
					if ((int)unaff_r19 < 1) {
						cVar9 = '\x04';
					} else {
						cVar9 = '\x01';
					}
					SetSpellTrans(cVar9);
				}
				if ((**(char **)((int)uVar10 + -0x77e4) == '\0') && (*(int *)(local_58 + 0x18) == 0)) {
					SetSpellTrans('\x04');
				}
				DrawSpellCel(iVar27, lVar26, (ulonglong) * (uint *)((int)uVar10 + -0x4fb0),
				    (longlong) * (char *)lVar21, 0x38, in_r8, in_r9, in_r10, in_stack_ffffff68);
				iVar28 = (int)uVar10;
				if ((((iVar27 + -0x40 <= **(int **)(iVar28 + -0x76a8)) && (**(int **)(iVar28 + -0x76a8) < iVar27 + -8)) && ((int)lVar26 + -0xd8 <= **(int **)(iVar28 + -0x76ac))) && (**(int **)(iVar28 + -0x76ac) < (int)lVar26 + -0xa0)) {
					*(int *)puVar6 = iVar24;
					*(int *)puVar4 = iVar25;
					uVar17 = 0x38;
					uVar15 = local_68;
					DrawSpellCel(iVar27, lVar26, (ulonglong) * (uint *)(iVar28 + -0x4fb0), (ulonglong)local_68, 0x38, in_r8, in_r9, in_r10, in_stack_ffffff68);
					iVar28 = (int)uVar10;
					if (iVar25 == 2) {
						sprintf((int)puVar5, *(undefined4 *)(iVar28 + -0x6488),
						    *(undefined4 *)(puVar7 + *(int *)puVar6 * 0x38 + 4), uVar15, uVar17, in_r8,
						    in_r9, in_r10, in_stack_ffffff68, in_stack_ffffff6f, in_stack_ffffff7c,
						    in_stack_ffffff80, in_stack_ffffff84, in_stack_ffffff88, in_stack_ffffff8c,
						    in_stack_ffffff90, in_stack_ffffff94);
						uVar13 = (undefined)uVar17;
						lVar29 = 0;
						iVar28 = *(int *)puVar6;
						puVar12 = puVar2 + *(int *)puVar1 * 0x55ec;
						uVar14 = (ulonglong) * (uint *)(puVar12 + 0x4828);
						puVar11 = puVar12;
						if (0 < (int)*(uint *)(puVar12 + 0x4828)) {
							do {
								if (((*(int *)(puVar11 + 0xeb0) != -1) && ((*(int *)(puVar11 + 0xf84) == 0x15 || (*(int *)(puVar11 + 0xf84) == 0x16)))) && (iVar28 == *(int *)(puVar11 + 0xf88))) {
									lVar29 = lVar29 + 1;
								}
								puVar11 = puVar11 + 0x170;
								uVar14 = uVar14 - 1;
							} while (uVar14 != 0);
						}
						lVar30 = 2;
						do {
							if (((*(int *)(puVar12 + 0x485c) != -1) && ((*(int *)(puVar12 + 0x4930) == 0x15 || (*(int *)(puVar12 + 0x4930) == 0x16)))) && (iVar28 == *(int *)(puVar12 + 0x4934))) {
								lVar29 = lVar29 + 1;
							}
							if ((*(int *)(puVar12 + 0x49cc) != -1) && (((*(int *)(puVar12 + 0x4aa0) == 0x15 || (*(int *)(puVar12 + 0x4aa0) == 0x16)) && (iVar28 == *(int *)(puVar12 + 0x4aa4))))) {
								lVar29 = lVar29 + 1;
							}
							if (((*(int *)(puVar12 + 0x4b3c) != -1) && ((*(int *)(puVar12 + 0x4c10) == 0x15 || (*(int *)(puVar12 + 0x4c10) == 0x16)))) && (iVar28 == *(int *)(puVar12 + 0x4c14))) {
								lVar29 = lVar29 + 1;
							}
							iVar16 = *(int *)(puVar12 + 0x4cac);
							if (((iVar16 != -1) && ((iVar16 = *(int *)(puVar12 + 0x4d80), iVar16 == 0x15 || (iVar16 == 0x16)))) && (iVar16 = *(int *)(puVar12 + 0x4d84), iVar28 == iVar16)) {
								lVar29 = lVar29 + 1;
							}
							uVar20 = (undefined)iVar16;
							uVar18 = (undefined)lVar29;
							puVar12 = puVar12 + 0x5c0;
							lVar30 = lVar30 + -1;
						} while (lVar30 != 0);
						if ((int)lVar29 == 1) {
							strcpy((int)puVar3, *(int *)((int)uVar10 + -0x648c));
						} else {
							sprintf((int)puVar3, *(undefined4 *)((int)uVar10 + -0x6490), (int)lVar29, iVar16,
							    uVar17, in_r8, in_r9, in_r10, in_stack_ffffff68, in_stack_ffffff6f,
							    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84, in_stack_ffffff88,
							    in_stack_ffffff8c, in_stack_ffffff90, in_stack_ffffff94);
						}
						AddPanelString((int)puVar3, 1, uVar18, uVar20, uVar13, (char)in_r8, (char)in_r9, (char)in_r10,
						    in_stack_ffffff68);
					} else {
						if (iVar25 < 2) {
							if (iVar25 == 0) {
								sprintf((int)puVar5, *(undefined4 *)(iVar28 + -0x6474),
								    *(undefined4 *)(puVar7 + *(int *)puVar6 * 0x38 + 8), uVar15, uVar17, in_r8, in_r9, in_r10, in_stack_ffffff68, in_stack_ffffff6f, in_stack_ffffff7c,
								    in_stack_ffffff80, in_stack_ffffff84, in_stack_ffffff88, in_stack_ffffff8c, in_stack_ffffff90, in_stack_ffffff94);
							} else {
								if (-1 < iVar25) {
									uVar19 = *(undefined4 *)(puVar7 + *(int *)puVar6 * 0x38 + 4);
									sprintf((int)puVar5, *(undefined4 *)(iVar28 + -0x6478), uVar19, uVar15, uVar17,
									    in_r8, in_r9, in_r10, in_stack_ffffff68, in_stack_ffffff6f,
									    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84,
									    in_stack_ffffff88, in_stack_ffffff8c, in_stack_ffffff90,
									    in_stack_ffffff94);
									if (*(int *)puVar6 == 0x1f) {
										sprintf((int)puVar3, *(undefined4 *)((int)uVar10 + -0x647c), uVar19, uVar15,
										    uVar17, in_r8, in_r9, in_r10, in_stack_ffffff68, in_stack_ffffff6f,
										    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84,
										    in_stack_ffffff88, in_stack_ffffff8c, in_stack_ffffff90,
										    in_stack_ffffff94);
										AddPanelString((int)puVar3, 1, (char)uVar19, (char)uVar15, (char)uVar17, (char)in_r8,
										    (char)in_r9, (char)in_r10, in_stack_ffffff68);
									}
									uVar20 = (undefined)uVar17;
									uVar18 = (undefined)uVar15;
									uVar13 = (undefined)uVar19;
									if ((int)unaff_r19 == 0) {
										sprintf((int)puVar3, *(undefined4 *)((int)uVar10 + -0x6480), uVar19, uVar15,
										    uVar17, in_r8, in_r9, in_r10, in_stack_ffffff68, in_stack_ffffff6f,
										    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84,
										    in_stack_ffffff88, in_stack_ffffff8c, in_stack_ffffff90,
										    in_stack_ffffff94);
									} else {
										uVar13 = (char)unaff_r19;
										sprintf((int)puVar3, *(undefined4 *)((int)uVar10 + -0x6484), (int)unaff_r19,
										    uVar15, uVar17, in_r8, in_r9, in_r10, in_stack_ffffff68,
										    in_stack_ffffff6f, in_stack_ffffff7c, in_stack_ffffff80,
										    in_stack_ffffff84, in_stack_ffffff88, in_stack_ffffff8c,
										    in_stack_ffffff90, in_stack_ffffff94);
									}
									AddPanelString((int)puVar3, 1, uVar13, uVar18, uVar20, (char)in_r8, (char)in_r9,
									    (char)in_r10, in_stack_ffffff68);
								}
							}
						} else {
							if (iVar25 < 4) {
								sprintf((int)puVar5, *(undefined4 *)(iVar28 + -0x6494),
								    *(undefined4 *)(puVar7 + *(int *)puVar6 * 0x38 + 4), uVar15, uVar17, in_r8, in_r9, in_r10, in_stack_ffffff68, in_stack_ffffff6f, in_stack_ffffff7c,
								    in_stack_ffffff80, in_stack_ffffff84, in_stack_ffffff88, in_stack_ffffff8c, in_stack_ffffff90, in_stack_ffffff94);
								uVar20 = (undefined)uVar17;
								uVar18 = (undefined)uVar15;
								iVar28 = *(int *)(puVar2 + *(int *)puVar1 * 0x55ec + 0xb3c);
								uVar13 = (undefined)iVar28;
								if (iVar28 == 1) {
									strcpy((int)puVar3, *(int *)((int)uVar10 + -0x6498));
								} else {
									sprintf((int)puVar3, *(undefined4 *)((int)uVar10 + -0x649c), iVar28, uVar15,
									    uVar17, in_r8, in_r9, in_r10, in_stack_ffffff68, in_stack_ffffff6f,
									    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84,
									    in_stack_ffffff88, in_stack_ffffff8c, in_stack_ffffff90,
									    in_stack_ffffff94);
								}
								AddPanelString((int)puVar3, 1, uVar13, uVar18, uVar20, (char)in_r8, (char)in_r9, (char)in_r10, in_stack_ffffff68);
							}
						}
					}
					lVar29 = 0;
					iVar28 = 0;
					do {
						if ((*(int *)puVar6 == *(int *)(puVar2 + *(int *)puVar1 * 0x55ec + iVar28 + 0x120)) && (*(int *)puVar4 == (int)(char)(puVar2 + *(int *)puVar1 * 0x55ec)[(int)lVar29 + 0x130])) {
							uVar17 = (undefined4)(lVar29 + 0x30);
							uVar19 = 0x38;
							DrawSpellCel(iVar27, lVar26, (ulonglong) * (uint *)((int)uVar10 + -0x4fb0), lVar29 + 0x30,
							    0x38, in_r8, in_r9, in_r10, in_stack_ffffff68);
							uVar20 = (undefined)uVar19;
							uVar18 = (undefined)uVar17;
							uVar13 = (undefined)(lVar29 + 5);
							sprintf((int)puVar3, uVar8, (int)(lVar29 + 5), uVar17, uVar19, in_r8, in_r9, in_r10,
							    in_stack_ffffff68, in_stack_ffffff6f, in_stack_ffffff7c, in_stack_ffffff80,
							    in_stack_ffffff84, in_stack_ffffff88, in_stack_ffffff8c, in_stack_ffffff90,
							    in_stack_ffffff94);
							AddPanelString((int)puVar3, 1, uVar13, uVar18, uVar20, (char)in_r8, (char)in_r9, (char)in_r10,
							    in_stack_ffffff68);
						}
						lVar29 = lVar29 + 1;
						iVar28 = iVar28 + 4;
					} while ((int)lVar29 < 4);
				}
				iVar27 = iVar27 + -0x38;
				if (iVar27 == 0x14) {
					iVar27 = 0x27c;
					lVar26 = lVar26 + -0x38;
				}
			}
			uVar22 = SetCursorPos(uVar22, uVar23, 1);
			iVar24 = iVar24 + 1;
			local_58 = local_58 + 0x38;
			lVar21 = lVar21 + 1;
		} while (iVar24 < 0x25);
		if (((in_r13 | (ulonglong)local_60) != 0) && (iVar27 != 0x27c)) {
			iVar27 = iVar27 + -0x38;
		}
		if (iVar27 == 0x14) {
			iVar27 = 0x27c;
			lVar26 = lVar26 + -0x38;
		}
		iVar25 = iVar25 + 1;
	} while (iVar25 < 4);
	return;
}

void SetSpell(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined4 *puVar2;
	undefined4 *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined **ppuVar6;

	puVar5 = PTR_DAT_100f1930;
	puVar4 = PTR_DAT_100f1828;
	ppuVar6 = &toc;
	*(undefined4 *)PTR_DAT_100f1918 = 0;
	if (*(int *)puVar5 != -1) {
		ClearPanel();
		iVar1 = *(int *)ppuVar6[-0x1deb];
		puVar2 = (undefined4 *)ppuVar6[-0x1dac];
		puVar3 = (undefined4 *)ppuVar6[-0x1daf];
		*(undefined4 *)(puVar4 + iVar1 * 0x55ec + 0xb4) = *(undefined4 *)puVar5;
		(puVar4 + iVar1 * 0x55ec)[0xb8] = (char)*puVar2;
		*puVar3 = 0xff;
	}
	return;
}

void SetSpeedSpell(int param_1)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;

	puVar6 = PTR_DAT_100f1930;
	puVar5 = PTR_DAT_100f1920;
	puVar4 = PTR_DAT_100f1828;
	puVar3 = PTR_DAT_100f1824;
	iVar1 = *(int *)PTR_DAT_100f1930;
	if (iVar1 == -1) {
		return;
	}
	iVar2 = *(int *)PTR_DAT_100f1920;
	puVar7 = PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec;
	if ((iVar1 == *(int *)(puVar7 + 0x120)) && (iVar2 == (int)(char)puVar7[0x130])) {
		*(undefined4 *)(puVar7 + 0x120) = 0xffffffff;
	}
	if ((iVar1 == *(int *)(puVar7 + 0x124)) && (iVar2 == (int)(char)puVar7[0x131])) {
		*(undefined4 *)(puVar7 + 0x124) = 0xffffffff;
	}
	if ((iVar1 == *(int *)(puVar7 + 0x128)) && (iVar2 == (int)(char)puVar7[0x132])) {
		*(undefined4 *)(puVar7 + 0x128) = 0xffffffff;
	}
	if ((iVar1 == *(int *)(puVar7 + 300)) && (iVar2 == (int)(char)puVar7[0x133])) {
		*(undefined4 *)(puVar7 + 300) = 0xffffffff;
	}
	iVar1 = *(int *)puVar3;
	*(undefined4 *)(puVar4 + iVar1 * 0x55ec + param_1 * 4 + 0x120) = *(undefined4 *)puVar6;
	(puVar4 + iVar1 * 0x55ec)[param_1 + 0x130] = (char)*(undefined4 *)puVar5;
	return;
}

void ToggleSpell(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	char cVar1;
	int iVar2;
	uint uVar3;
	undefined4 *puVar4;
	undefined *puVar5;
	undefined **ppuVar6;
	ulonglong uVar7;
	ulonglong uVar8;
	undefined *puVar9;
	ulonglong unaff_r26;
	ulonglong unaff_r27;

	puVar5 = PTR_DAT_100f1828;
	ppuVar6 = &toc;
	iVar2 = *(int *)PTR_DAT_100f1824;
	puVar9 = PTR_DAT_100f1828 + iVar2 * 0x55ec;
	uVar3 = *(uint *)(puVar9 + param_1 * 4 + 0x120);
	if (uVar3 != 0xffffffff) {
		cVar1 = puVar9[param_1 + 0x130];
		if (cVar1 == '\x02') {
			unaff_r27 = (ulonglong) * (uint *)(puVar9 + 0x114);
			unaff_r26 = (ulonglong) * (uint *)(puVar9 + 0x118);
		} else {
			if (cVar1 < '\x02') {
				if (cVar1 == '\0') {
					unaff_r27 = (ulonglong) * (uint *)(puVar9 + 0x10c);
					unaff_r26 = (ulonglong) * (uint *)(puVar9 + 0x110);
				} else {
					if (-1 < cVar1) {
						unaff_r27 = (ulonglong) * (uint *)(puVar9 + 0x104);
						unaff_r26 = (ulonglong) * (uint *)(puVar9 + 0x108);
					}
				}
			} else {
				if (cVar1 < '\x04') {
					unaff_r27 = (ulonglong) * (uint *)(puVar9 + 0x5560);
					unaff_r26 = (ulonglong) * (uint *)(puVar9 + 0x5564);
				}
			}
		}
		uVar8 = 1;
		uVar7 = SetCursorPos(0, 1, (ulonglong)uVar3 - 1, param_4, param_5, param_6, param_7, param_8);
		if ((unaff_r26 & uVar8 | unaff_r27 & uVar7) != 0) {
			puVar4 = (undefined4 *)ppuVar6[-0x1daf];
			*(uint *)(puVar5 + iVar2 * 0x55ec + 0xb4) = uVar3;
			(puVar5 + iVar2 * 0x55ec)[0xb8] = puVar9[param_1 + 0x130];
			*puVar4 = 0xff;
		}
	}
	return;
}

void CPrintString(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	byte bVar1;
	longlong lVar2;
	ulonglong uVar3;
	longlong lVar4;
	undefined **ppuVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	undefined *puVar8;
	char *pcVar9;
	byte *pbVar10;
	longlong lVar11;
	undefined uVar12;
	ulonglong uVar13;
	undefined uVar14;
	ulonglong uVar15;
	undefined *puVar16;
	undefined uVar17;
	char cVar18;
	undefined uVar19;
	undefined uVar20;
	char cVar21;
	undefined4 in_stack_ffffffb8;
	uint local_18[6];

	uVar20 = (undefined)param_8;
	uVar19 = (undefined)param_7;
	cVar18 = (char)param_6;
	ppuVar5 = &toc;
	uVar6 = FUN_100b8f7c((ulonglong)_DAT_100f402c, param_2, param_3, param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffffb8);
	uVar7 = FUN_1003cdf8(uVar6, (int)param_2, (int *)local_18);
	cVar21 = (char)param_3;
	uVar13 = (ulonglong) * (uint *)ppuVar5[-0x1e01];
	uVar6 = (ulonglong)local_18[0];
	param_1 = uVar13 + param_1;
	uVar15 = uVar7 + uVar6;
	if (cVar21 == '\x01') {
		do {
			lVar11 = 0xd;
			do {
				pcVar9 = (char *)uVar7;
				uVar7 = uVar7 + 1;
				lVar4 = (longlong)*pcVar9;
				if (lVar4 < 0) {
					param_1 = param_1 - lVar4;
					lVar2 = lVar4;
				} else {
					lVar2 = -lVar4;
					do {
						bVar1 = *(byte *)uVar7;
						uVar13 = (ulonglong)bVar1;
						uVar7 = uVar7 + 1;
						if (bVar1 < 0xfe) {
							if (0xef < bVar1) {
								uVar13 = uVar13 - 0x3e;
							}
						} else {
							uVar13 = 0xbf;
						}
						lVar4 = lVar4 + -1;
						*(undefined *)param_1 = (char)uVar13;
						param_1 = param_1 + 1;
					} while (lVar4 != 0);
				}
				uVar14 = (undefined)uVar13;
				lVar11 = lVar11 + lVar2;
				uVar12 = (undefined)lVar11;
			} while ((int)lVar11 != 0);
			param_1 = param_1 + -0x30d;
			uVar17 = (undefined)param_1;
		} while ((uVar7 & 0xffffffff) != (uVar15 & 0xffffffff));
	} else {
		if (cVar21 < '\x01') {
			if (-1 < cVar21) {
				do {
					lVar11 = 0xd;
					uVar13 = uVar6;
					do {
						cVar18 = *(char *)uVar7;
						uVar7 = uVar7 + 1;
						uVar6 = SEXT18(cVar18);
						if ((longlong)uVar6 < 0) {
							param_1 = param_1 - uVar6;
							lVar11 = lVar11 + uVar6;
							uVar6 = uVar13;
						} else {
							lVar11 = lVar11 - uVar6;
							if (cVar18 != '\0') {
								uVar3 = (ulonglong)((uint)(int)cVar18 >> 3);
								uVar13 = uVar6;
								if ((uint)(int)cVar18 >> 3 != 0) {
									do {
										puVar8 = (undefined *)uVar7;
										puVar16 = (undefined *)param_1;
										*puVar16 = *puVar8;
										puVar16[1] = puVar8[1];
										puVar16[2] = puVar8[2];
										puVar16[3] = puVar8[3];
										puVar16[4] = puVar8[4];
										puVar16[5] = puVar8[5];
										puVar16[6] = puVar8[6];
										uVar7 = uVar7 + 8;
										puVar16[7] = puVar8[7];
										param_1 = param_1 + 8;
										uVar3 = uVar3 - 1;
									} while (uVar3 != 0);
									uVar6 = uVar6 & 7;
									uVar13 = uVar6;
									if (uVar6 == 0)
										goto LAB_1001d068;
								}
								do {
									puVar8 = (undefined *)uVar7;
									uVar7 = uVar7 + 1;
									*(undefined *)param_1 = *puVar8;
									param_1 = param_1 + 1;
									uVar13 = uVar13 - 1;
								} while (uVar13 != 0);
							}
						}
					LAB_1001d068:
						uVar14 = (undefined)lVar11;
						uVar12 = (undefined)uVar6;
						uVar13 = uVar6;
					} while ((int)lVar11 != 0);
					param_1 = param_1 + -0x30d;
					uVar17 = (undefined)param_1;
				} while ((uVar7 & 0xffffffff) != (uVar15 & 0xffffffff));
				goto LAB_1001d1bc;
			}
		} else {
			if (cVar21 < '\x03') {
				do {
					lVar11 = 0xd;
					do {
						pcVar9 = (char *)uVar7;
						uVar7 = uVar7 + 1;
						lVar4 = (longlong)*pcVar9;
						if (lVar4 < 0) {
							param_1 = param_1 - lVar4;
							lVar2 = lVar4;
						} else {
							lVar2 = -lVar4;
							do {
								pbVar10 = (byte *)uVar7;
								uVar13 = (ulonglong)*pbVar10;
								uVar7 = uVar7 + 1;
								if (0xef < *pbVar10) {
									uVar13 = uVar13 - 0x10;
								}
								lVar4 = lVar4 + -1;
								*(undefined *)param_1 = (char)uVar13;
								param_1 = param_1 + 1;
							} while (lVar4 != 0);
						}
						uVar14 = (undefined)uVar13;
						lVar11 = lVar11 + lVar2;
						uVar12 = (undefined)lVar11;
					} while ((int)lVar11 != 0);
					param_1 = param_1 + -0x30d;
					uVar17 = (undefined)param_1;
				} while ((uVar7 & 0xffffffff) != (uVar15 & 0xffffffff));
				goto LAB_1001d1bc;
			}
		}
		do {
			lVar11 = 0xd;
			do {
				pcVar9 = (char *)uVar7;
				uVar7 = uVar7 + 1;
				lVar4 = (longlong)*pcVar9;
				if (lVar4 < 0) {
					param_1 = param_1 - lVar4;
					lVar2 = lVar4;
				} else {
					lVar2 = -lVar4;
					do {
						bVar1 = *(byte *)uVar7;
						uVar13 = (ulonglong)bVar1;
						uVar7 = uVar7 + 1;
						if (0xef < bVar1) {
							if (bVar1 < 0xfe) {
								uVar13 = uVar13 - 0x2e;
							} else {
								uVar13 = 0xcf;
							}
						}
						lVar4 = lVar4 + -1;
						*(undefined *)param_1 = (char)uVar13;
						param_1 = param_1 + 1;
					} while (lVar4 != 0);
				}
				uVar14 = (undefined)uVar13;
				lVar11 = lVar11 + lVar2;
				uVar12 = (undefined)lVar11;
			} while ((int)lVar11 != 0);
			param_1 = param_1 + -0x30d;
			uVar17 = (undefined)param_1;
		} while ((uVar7 & 0xffffffff) != (uVar15 & 0xffffffff));
	}
LAB_1001d1bc:
	FUN_100b9100((int)ppuVar5[-0x13e9], uVar12, uVar14, (char)uVar15, uVar17, cVar18, uVar19, uVar20,
	    in_stack_ffffffb8);
	return;
}

void AddPanelString(int param_1, undefined4 param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined **ppuVar3;

	puVar2 = PTR_DAT_100f190c;
	ppuVar3 = &toc;
	strcpy((int)(PTR_DAT_100f1910 + *(int *)PTR_DAT_100f190c * 0x40), param_1);
	iVar1 = *(int *)puVar2;
	*(undefined4 *)(ppuVar3[-0x1db2] + iVar1 * 4) = param_2;
	if (iVar1 < 4) {
		*(int *)puVar2 = *(int *)puVar2 + 1;
	}
	return;
}

void ClearPanel(void)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f1904;
	*(undefined4 *)PTR_DAT_100f190c = 0;
	*(undefined4 *)puVar1 = 0;
	return;
}

void DrawPanelBox(int param_1, int param_2, uint param_3, longlong param_4, int param_5, int param_6)

{
	undefined2 uVar1;
	undefined4 uVar2;
	undefined4 *puVar3;
	ulonglong uVar4;
	ulonglong uVar5;
	undefined4 *puVar6;
	undefined4 *puVar7;
	uint uVar8;
	undefined4 *local_c;
	undefined4 *local_8;

	local_8 = (undefined4 *)(_DAT_100f4018 + param_2 * 0x280 + param_1);
	local_c = (undefined4 *)(*(int *)PTR_DAT_100f17cc + param_6 * 0x300 + param_5);
	do {
		puVar6 = local_8;
		puVar7 = local_c;
		uVar8 = param_3;
		if ((param_3 & 1) != 0) {
			puVar6 = (undefined4 *)((int)local_8 + 1);
			uVar8 = param_3 - 1;
			*(undefined *)local_c = *(undefined *)local_8;
			puVar7 = (undefined4 *)((int)local_c + 1);
		}
		if ((uVar8 & 2) != 0) {
			uVar1 = *(undefined2 *)puVar6;
			puVar6 = (undefined4 *)((int)puVar6 + 2);
			uVar8 = uVar8 - 2;
			*(undefined2 *)puVar7 = uVar1;
			puVar7 = (undefined4 *)((int)puVar7 + 2);
		}
		uVar5 = (ulonglong)(uVar8 >> 2);
		if (3 < (int)uVar8) {
			uVar4 = (ulonglong)(uVar8 >> 5);
			if (uVar8 >> 5 != 0) {
				do {
					*puVar7 = *puVar6;
					puVar7[1] = puVar6[1];
					puVar7[2] = puVar6[2];
					puVar7[3] = puVar6[3];
					puVar7[4] = puVar6[4];
					puVar7[5] = puVar6[5];
					puVar7[6] = puVar6[6];
					puVar3 = puVar6 + 7;
					puVar6 = puVar6 + 8;
					puVar7[7] = *puVar3;
					puVar7 = puVar7 + 8;
					uVar4 = uVar4 - 1;
				} while (uVar4 != 0);
				uVar5 = uVar5 & 7;
				if ((uVar8 >> 2 & 7) == 0)
					goto LAB_1001d378;
			}
			do {
				uVar2 = *puVar6;
				puVar6 = puVar6 + 1;
				*puVar7 = uVar2;
				puVar7 = puVar7 + 1;
				uVar5 = uVar5 - 1;
			} while (uVar5 != 0);
		}
	LAB_1001d378:
		param_4 = param_4 + -1;
		local_8 = local_8 + 0xa0;
		local_c = local_c + 0xc0;
		if (param_4 == 0) {
			return;
		}
	} while (true);
}

void SetFlaskHeight(int param_1, longlong param_2, longlong param_3, int param_4, int param_5)

{
	undefined4 *puVar1;
	undefined4 *puVar2;
	undefined4 *puVar3;
	longlong lVar4;
	undefined4 *local_10;
	undefined4 *local_c;

	local_10 = (undefined4 *)(*(int *)PTR_DAT_100f17cc + param_5 * 0x300 + param_4);
	param_3 = param_3 - param_2;
	local_c = (undefined4 *)(param_1 + (int)param_2 * 0x58);
	do {
		lVar4 = 0xb;
		puVar2 = local_c + 0x16;
		puVar3 = local_10;
		do {
			*puVar3 = *local_c;
			puVar1 = local_c + 1;
			local_c = local_c + 2;
			puVar3[1] = *puVar1;
			puVar3 = puVar3 + 2;
			lVar4 = lVar4 + -1;
		} while (lVar4 != 0);
		param_3 = param_3 + -1;
		local_10 = local_10 + 0xc0;
		local_c = puVar2;
	} while (param_3 != 0);
	return;
}

void DrawFlask(int param_1, int param_2, int param_3, int param_4, int param_5, longlong param_6,
    undefined param_7, undefined param_8, undefined4 param_9)

{
	byte *local_18;
	byte *local_14[5];

	local_14[0] = (byte *)(param_1 + param_3);
	local_18 = (byte *)(param_4 + param_5);
	do {
		FUN_100c9e9c(&local_18, local_14, 0x3b);
		param_6 = param_6 + -1;
		local_14[0] = local_14[0] + param_2 + -0x3b;
		local_18 = local_18 + 0x2c5;
	} while (param_6 != 0);
	return;
}

void DrawLifeFlask(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	ulonglong uVar2;
	undefined **ppuVar3;
	undefined *puVar4;
	longlong lVar5;
	int iVar6;
	undefined4 in_stack_ffffff98;

	puVar1 = PTR_DAT_100f17cc;
	ppuVar3 = &toc;
	puVar4 = PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec;
	*(int *)(puVar4 + 0x19c) = (int)(_DAT_100f4040 * (((double)CONCAT44(0x43300000, *(uint *)(puVar4 + 0x194) ^ 0x80000000) - _DAT_100f4038) / ((double)CONCAT44(0x43300000, *(uint *)(puVar4 + 0x198) ^ 0x80000000) - _DAT_100f4038)));
	uVar2 = (ulonglong) * (uint *)(puVar4 + 0x19c);
	if (0x50 < (int)*(uint *)(puVar4 + 0x19c)) {
		uVar2 = 0x50;
	}
	lVar5 = 0x50 - uVar2;
	if (0xb < (int)lVar5) {
		lVar5 = 0xb;
	}
	lVar5 = lVar5 + 2;
	DrawFlask(_DAT_100f4010, 0x58, 0x115, *(int *)puVar1, 0x5d9ad, lVar5, param_7, param_8,
	    in_stack_ffffff98);
	iVar6 = (int)lVar5;
	if (iVar6 != 0xd) {
		DrawFlask((int)ppuVar3[-0x13ee], 0x280, iVar6 * 0x280 + 0x7ed, *(int *)puVar1,
		    iVar6 * 0x300 + 0x5d9ad, 0xd - lVar5, param_7, param_8, in_stack_ffffff98);
	}
	return;
}

void UpdateLifeFlask(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	ulonglong uVar2;
	int iVar3;

	puVar1 = PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec;
	iVar3 = (int)(_DAT_100f4040 * (((double)CONCAT44(0x43300000, *(uint *)(puVar1 + 0x194) ^ 0x80000000) - _DAT_100f4038) / ((double)CONCAT44(0x43300000, *(uint *)(puVar1 + 0x198) ^ 0x80000000) - _DAT_100f4038)));
	uVar2 = (longlong)iVar3 & 0xffffffff;
	*(int *)(puVar1 + 0x19c) = iVar3;
	if (0x45 < iVar3) {
		uVar2 = 0x45;
	}
	iVar3 = (int)uVar2;
	if (iVar3 != 0x45) {
		SetFlaskHeight(_DAT_100f4010, 0x10, 0x55 - uVar2, 0xa0, 0x200);
	}
	if (iVar3 != 0) {
		DrawPanelBox(0x60, 0x55 - iVar3, 0x58, uVar2, 0xa0, 0x245 - iVar3);
	}
	return;
}

void DrawManaFlask(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	ulonglong uVar2;
	undefined **ppuVar3;
	longlong lVar4;
	int iVar5;
	undefined4 in_stack_ffffffc8;

	puVar1 = PTR_DAT_100f17cc;
	ppuVar3 = &toc;
	uVar2 = (ulonglong) * (uint *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x1b0);
	if (0x50 < (int)*(uint *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x1b0)) {
		uVar2 = 0x50;
	}
	lVar4 = 0x50 - uVar2;
	if (0xb < (int)lVar4) {
		lVar4 = 0xb;
	}
	lVar4 = lVar4 + 2;
	DrawFlask(_DAT_100f4014, 0x58, 0x115, *(int *)PTR_DAT_100f17cc, 0x5db1b, lVar4, param_7, param_8,
	    in_stack_ffffffc8);
	iVar5 = (int)lVar4;
	if (iVar5 != 0xd) {
		DrawFlask((int)ppuVar3[-0x13ee], 0x280, iVar5 * 0x280 + 0x95b, *(int *)puVar1,
		    iVar5 * 0x300 + 0x5db1b, 0xd - lVar4, param_7, param_8, in_stack_ffffffc8);
	}
	return;
}

void control_update_life_mana(void)

{
	uint uVar1;
	int iVar2;
	undefined *puVar3;
	uint uVar4;
	double local_18;
	double local_8;

	uVar4 = *(uint *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x1ac);
	uVar1 = *(uint *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x1a8);
	if ((int)uVar4 < 0) {
		uVar4 = 0;
	}
	if ((int)uVar1 < 0) {
		uVar1 = 0;
	}
	if (uVar4 == 0) {
		iVar2 = 0;
	} else {
		local_8 = (double)CONCAT44(0x43300000, uVar1 ^ 0x80000000);
		iVar2 = (int)(_DAT_100f4040 * ((local_8 - _DAT_100f4038) / ((double)CONCAT44(0x43300000, uVar4 ^ 0x80000000) - _DAT_100f4038)));
	}
	puVar3 = PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec;
	*(int *)(puVar3 + 0x1b0) = iVar2;
	local_18 = (double)CONCAT44(0x43300000, *(uint *)(puVar3 + 0x194) ^ 0x80000000);
	*(int *)(puVar3 + 0x19c) = (int)(_DAT_100f4040 * ((local_18 - _DAT_100f4038) / ((double)CONCAT44(0x43300000, *(uint *)(puVar3 + 0x198) ^ 0x80000000) - _DAT_100f4038)));
	return;
}

void UpdateManaFlask(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	ulonglong uVar3;
	int iVar4;

	uVar2 = *(uint *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x1ac);
	uVar1 = *(uint *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x1a8);
	if ((int)uVar2 < 0) {
		uVar2 = 0;
	}
	if ((int)uVar1 < 0) {
		uVar1 = 0;
	}
	if (uVar2 == 0) {
		uVar3 = 0;
	} else {
		uVar3 = (longlong)(int)(_DAT_100f4040 * (((double)CONCAT44(0x43300000, uVar1 ^ 0x80000000) - _DAT_100f4038) / ((double)CONCAT44(0x43300000, uVar2 ^ 0x80000000) - _DAT_100f4038))) & 0xffffffff;
	}
	*(int *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x1b0) = (int)uVar3;
	if (0x45 < (int)uVar3) {
		uVar3 = 0x45;
	}
	iVar4 = (int)uVar3;
	if (iVar4 != 0x45) {
		SetFlaskHeight(_DAT_100f4014, 0x10, 0x55 - uVar3, 0x210, 0x200);
	}
	if (iVar4 != 0) {
		DrawPanelBox(0x1d0, 0x55 - iVar4, 0x58, uVar3, 0x210, 0x245 - iVar4);
	}
	DrawSpell();
	return;
}

void InitControlPan(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	char cVar1;
	undefined4 *puVar2;
	uint uVar3;
	undefined4 *puVar4;
	int *piVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined **ppuVar10;
	int iVar11;
	int iVar12;
	undefined *puVar15;
	undefined4 uVar16;
	longlong lVar13;
	ulonglong uVar14;
	undefined uVar17;
	undefined uVar18;
	undefined8 uVar19;
	ulonglong uVar20;
	undefined uVar21;
	undefined8 uVar22;
	undefined4 uVar23;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff78;
	undefined in_stack_ffffff7f;
	int local_7c;
	int *local_38[2];
	int *local_30[5];
	undefined4 local_1c;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	puVar2 = _DAT_100f2b08;
	puVar9 = PTR_DAT_100f18f4;
	puVar8 = PTR_DAT_100f18ec;
	puVar7 = PTR_DAT_100f18e8;
	puVar6 = PTR_DAT_100f17e0;
	ppuVar10 = &toc;
	local_1c = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	if (*PTR_DAT_100f17e0 == '\x01') {
		puVar15 = (undefined *)DiabloAllocPtr(0x16800);
		ppuVar10[-0x13ee] = puVar15;
		memset((char)ppuVar10[-0x13ee], 0, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
		    (char)param_7, (char)param_8, (char)in_stack_ffffff78, in_stack_ffffff7f, local_7c);
	} else {
		puVar15 = (undefined *)DiabloAllocPtr(0x2d000);
		ppuVar10[-0x13ee] = puVar15;
		memset((char)ppuVar10[-0x13ee], 0, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
		    (char)param_7, (char)param_8, (char)in_stack_ffffff78, in_stack_ffffff7f, local_7c);
	}
	iVar11 = local_7c;
	uVar16 = DiabloAllocPtr(0x1e40);
	*(undefined4 *)(local_7c + -0x4fbc) = uVar16;
	memset((char)*(undefined4 *)(local_7c + -0x4fbc), 0x40, (char)param_3, (char)param_4,
	    (char)param_5, (char)param_6, (char)param_7, (char)param_8, (char)in_stack_ffffff78,
	    in_stack_ffffff7f, iVar11);
	iVar12 = iVar11;
	uVar16 = DiabloAllocPtr(0x1e40);
	*(undefined4 *)(iVar11 + -0x4fc0) = uVar16;
	memset((char)*(undefined4 *)(iVar11 + -0x4fc0), 0x40, (char)param_3, (char)param_4, (char)param_5,
	    (char)param_6, (char)param_7, (char)param_8, (char)in_stack_ffffff78, in_stack_ffffff7f,
	    iVar12);
	lVar13 = LoadFileInMem((ulonglong) * (uint *)(iVar12 + -0x64a4), (undefined4 *)0x0, param_3, param_4,
	    param_5, param_6, param_7, param_8, in_stack_ffffff78);
	*(undefined4 *)(iVar12 + -0x4fa4) = (int)lVar13;
	lVar13 = LoadFileInMem((ulonglong) * (uint *)(iVar12 + -0x64a8), (undefined4 *)0x0, param_3, param_4,
	    param_5, param_6, param_7, param_8, in_stack_ffffff78);
	*(undefined4 *)(iVar12 + -0x4fa8) = (int)lVar13;
	lVar13 = LoadFileInMem((ulonglong) * (uint *)(iVar12 + -0x64ac), (undefined4 *)0x0, param_3, param_4,
	    param_5, param_6, param_7, param_8, in_stack_ffffff78);
	*(undefined4 *)(iVar12 + -0x4fb0) = (int)lVar13;
	SetSpellTrans('\0');
	uVar14 = LoadFileInMem((ulonglong) * (uint *)(iVar12 + -0x64b0), (undefined4 *)0x0, param_3, param_4,
	    param_5, param_6, param_7, param_8, in_stack_ffffff78);
	local_30[0] = (int *)uVar14;
	uVar17 = 0;
	uVar19 = 0x8f;
	uVar14 = uVar14 & 0xffffffff;
	uVar22 = 0x280;
	uVar16 = 1;
	uVar23 = 0x280;
	CelDecodeRect(*(int *)(iVar12 + -0x4fb8), 0, 0x8f, 0x280, uVar14, 1, 0x280, param_8, in_stack_ffffff78);
	mem_free_dbg(local_30, uVar17, (char)uVar19, (char)uVar22, (char)uVar14, (char)uVar16, (char)uVar23,
	    (char)param_8, in_stack_ffffff78);
	uVar14 = LoadFileInMem((ulonglong) * (uint *)(iVar12 + -0x64b4), (undefined4 *)0x0, uVar19, uVar22,
	    uVar14, uVar16, uVar23, param_8, in_stack_ffffff78);
	local_30[0] = (int *)uVar14;
	CelDecodeRect(*(int *)(iVar12 + -0x4fc0), 0, 0x57, 0x58, uVar14 & 0xffffffff, 1, 0x58, param_8,
	    in_stack_ffffff78);
	uVar17 = 0;
	uVar14 = ZEXT48(local_30[0]);
	uVar19 = 0x57;
	uVar22 = 0x58;
	uVar16 = 2;
	uVar23 = 0x58;
	CelDecodeRect(*(int *)(iVar12 + -0x4fbc), 0, 0x57, 0x58, uVar14, 2, 0x58, param_8, in_stack_ffffff78);
	mem_free_dbg(local_30, uVar17, (char)uVar19, (char)uVar22, (char)uVar14, (char)uVar16, (char)uVar23,
	    (char)param_8, in_stack_ffffff78);
	**(undefined4 **)(iVar12 + -0x76d0) = 0;
	if (*puVar6 != '\x01') {
		uVar14 = LoadFileInMem((ulonglong) * (uint *)(iVar12 + -0x64b8), (undefined4 *)0x0, uVar19, uVar22,
		    uVar14, uVar16, uVar23, param_8, in_stack_ffffff78);
		local_38[0] = (int *)uVar14;
		uVar17 = 0;
		uVar19 = 0x11f;
		uVar14 = uVar14 & 0xffffffff;
		uVar22 = 0x280;
		uVar16 = 1;
		uVar23 = 0x280;
		CelDecodeRect(*(int *)(iVar12 + -0x4fb8), 0, 0x11f, 0x280, uVar14, 1, 0x280, param_8, in_stack_ffffff78);
		mem_free_dbg(local_38, uVar17, (char)uVar19, (char)uVar22, (char)uVar14, (char)uVar16, (char)uVar23,
		    (char)param_8, in_stack_ffffff78);
		lVar13 = LoadFileInMem((ulonglong) * (uint *)(iVar12 + -0x64bc), (undefined4 *)0x0, uVar19, uVar22,
		    uVar14, uVar16, uVar23, param_8, in_stack_ffffff78);
		*(undefined4 *)(iVar12 + -0x4fe4) = (int)lVar13;
		lVar13 = LoadFileInMem((ulonglong) * (uint *)(iVar12 + -0x64c0), (undefined4 *)0x0, uVar19, uVar22,
		    uVar14, uVar16, uVar23, param_8, in_stack_ffffff78);
		*(undefined4 *)(iVar12 + -0x4fe8) = (int)lVar13;
		*(undefined4 *)(iVar12 + -0x4fd8) = 0;
		**(undefined **)(iVar12 + -0x64c4) = 0;
		*(undefined *)(iVar12 + -0x4fe0) = 1;
		*(undefined *)(iVar12 + -0x4fdf) = 1;
		*(undefined *)(iVar12 + -0x4fde) = 1;
		*(undefined *)(iVar12 + -0x4fdd) = 1;
		*puVar2 = 0;
		puVar2[1] = 0;
		puVar2[2] = 0;
	}
	puVar2 = *(undefined4 **)(iVar12 + -0x76d8);
	uVar20 = ZEXT48(puVar2);
	**(undefined4 **)(iVar12 + -0x76d4) = 0;
	uVar3 = *(uint *)(iVar12 + -0x64cc);
	*puVar2 = 0;
	lVar13 = LoadFileInMem((ulonglong)uVar3, (undefined4 *)0x0, uVar20, uVar22, uVar14, uVar16, uVar23,
	    param_8, in_stack_ffffff78);
	*(undefined4 *)(iVar12 + -0x4fa0) = (int)lVar13;
	puVar2 = *(undefined4 **)(iVar12 + -0x76e0);
	*(undefined4 *)puVar9 = 0;
	*(undefined4 *)(puVar9 + 4) = 0;
	*(undefined4 *)(puVar9 + 8) = 0;
	*(undefined4 *)(puVar9 + 0xc) = 0;
	*(undefined4 *)(puVar9 + 0x10) = 0;
	*(undefined4 *)(puVar9 + 0x14) = 0;
	*(undefined4 *)(puVar9 + 0x18) = 0;
	*(undefined4 *)(puVar9 + 0x1c) = 0;
	*puVar2 = 0;
	if (*puVar6 == '\x01') {
		*(undefined4 *)puVar8 = 6;
	} else {
		*(undefined4 *)puVar8 = 8;
	}
	lVar13 = LoadFileInMem((ulonglong) * (uint *)(iVar12 + -0x64d0), (undefined4 *)0x0, uVar20, uVar22,
	    uVar14, uVar16, uVar23, param_8, in_stack_ffffff78);
	*(undefined4 *)(iVar12 + -0x4fac) = (int)lVar13;
	puVar2 = *(undefined4 **)(iVar12 + -0x76ec);
	uVar21 = SUB41(puVar2, 0);
	*(undefined4 *)puVar7 = 0;
	uVar3 = *(uint *)(iVar12 + -0x64d4);
	*(undefined4 *)(puVar7 + 4) = 0;
	*(undefined4 *)(puVar7 + 8) = 0;
	*(undefined4 *)(puVar7 + 0xc) = 0;
	*puVar2 = 0;
	lVar13 = LoadFileInMem((ulonglong)uVar3, (undefined4 *)0x0, ZEXT48(puVar2), uVar22, uVar14, uVar16,
	    uVar23, param_8, in_stack_ffffff78);
	*(undefined4 *)(iVar12 + -0x4fc4) = (int)lVar13;
	uVar18 = (undefined) * (int *)(iVar12 + -0x64d8);
	uVar17 = strcpy(*(int *)(iVar12 + -0x76a4), *(int *)(iVar12 + -0x64d8));
	ClearPanel(uVar17, uVar18, uVar21, (char)uVar22, (char)uVar14, (char)uVar16, (char)uVar23,
	    (char)param_8, in_stack_ffffff78);
	puVar2 = *(undefined4 **)(iVar12 + -0x76f4);
	**(undefined4 **)(iVar12 + -0x76f0) = 1;
	puVar4 = *(undefined4 **)(iVar12 + -0x77c4);
	*puVar2 = 1;
	puVar2 = *(undefined4 **)(iVar12 + -0x76b8);
	uVar20 = ZEXT48(puVar2);
	*puVar4 = 0;
	uVar3 = *(uint *)(iVar12 + -0x64dc);
	*puVar2 = 0;
	lVar13 = LoadFileInMem((ulonglong)uVar3, (undefined4 *)0x0, uVar20, uVar22, uVar14, uVar16, uVar23,
	    param_8, in_stack_ffffff78);
	*(undefined4 *)(iVar12 + -0x4fc8) = (int)lVar13;
	lVar13 = LoadFileInMem((ulonglong) * (uint *)(iVar12 + -0x64e0), (undefined4 *)0x0, uVar20, uVar22,
	    uVar14, uVar16, uVar23, param_8, in_stack_ffffff78);
	*(undefined4 *)(iVar12 + -0x4fcc) = (int)lVar13;
	lVar13 = LoadFileInMem((ulonglong) * (uint *)(iVar12 + -0x64e4), (undefined4 *)0x0, uVar20, uVar22,
	    uVar14, uVar16, uVar23, param_8, in_stack_ffffff78);
	*(undefined4 *)(iVar12 + -0x4fd0) = (int)lVar13;
	puVar2 = *(undefined4 **)(iVar12 + -0x77c0);
	**(undefined4 **)(iVar12 + -0x76f8) = 0;
	piVar5 = *(int **)(iVar12 + -0x77ac);
	*puVar2 = 0;
	cVar1 = *(char *)(*(int *)(iVar12 + -0x77a8) + *piVar5 * 0x55ec + 0x15c);
	if (cVar1 == '\0') {
		_DAT_100f6420 = 0x1a;
	} else {
		if (cVar1 == '\x01') {
			_DAT_100f6420 = 0x1c;
		} else {
			if (cVar1 == '\x02') {
				_DAT_100f6420 = 0x1b;
			}
		}
	}
	lVar13 = LoadFileInMem((ulonglong) * (uint *)(iVar12 + -0x64e8), (undefined4 *)0x0, uVar20, uVar22,
	    uVar14, uVar16, uVar23, param_8, in_stack_ffffff78);
	puVar2 = *(undefined4 **)(iVar12 + -0x7700);
	*puVar2 = (int)lVar13;
	lVar13 = LoadFileInMem((ulonglong) * (uint *)(iVar12 + -0x64ec), (undefined4 *)0x0, ZEXT48(puVar2),
	    uVar22, uVar14, uVar16, uVar23, param_8, in_stack_ffffff78);
	*(undefined4 *)(iVar12 + -0x4fb4) = (int)lVar13;
	puVar2 = *(undefined4 **)(iVar12 + -0x7708);
	**(undefined4 **)(iVar12 + -0x7704) = 0;
	puVar4 = *(undefined4 **)(iVar12 + -0x770c);
	*puVar2 = 0;
	puVar2 = *(undefined4 **)(iVar12 + -0x7710);
	*puVar4 = 0;
	puVar4 = *(undefined4 **)(iVar12 + -0x7714);
	*puVar2 = 0;
	*puVar4 = 1;
	return;
}

void ClearCtrlPan(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	DrawPanelBox(0, _DAT_100f3ff8 + 0x10, 0x280, 0x80, 0x40, 0x200);
	DrawInfoBox();
	return;
}

void DrawCtrlPan(void)

{
	undefined *puVar1;
	ulonglong uVar2;
	int iVar3;
	longlong in_r8;
	undefined4 uVar4;
	undefined4 in_r9;
	undefined4 in_r10;
	longlong lVar5;
	int *piVar6;
	int *piVar7;
	undefined4 in_stack_ffffffb8;

	puVar1 = PTR_DAT_100f18f4;
	uVar2 = ZEXT48(&toc);
	lVar5 = 0;
	piVar6 = (int *)&DAT_100f6300;
	piVar7 = (int *)PTR_DAT_100f18f4;
	do {
		if (*piVar7 == 0) {
			in_r8 = (ulonglong)(uint)piVar6[1] + 0xa0;
			DrawPanelBox(*piVar6, piVar6[1] - 0x150, 0x47, 0x14, *piVar6 + 0x40, (int)in_r8);
		} else {
			CelDecodeOnly(*piVar6 + 0x40, (ulonglong)(uint)piVar6[1] + 0xb2,
			    (ulonglong) * (uint *)((int)uVar2 + -0x4fa0), lVar5 + 1, 0x47, (int)in_r8, in_r9, in_r10, in_stack_ffffffb8);
		}
		uVar4 = (undefined4)in_r8;
		iVar3 = (int)uVar2;
		lVar5 = lVar5 + 1;
		piVar6 = piVar6 + 5;
		piVar7 = piVar7 + 1;
	} while ((int)lVar5 < 6);
	if (**(int **)(iVar3 + -0x76e4) == 8) {
		CelDecodeOnly(0x97, 0x27a, (ulonglong) * (uint *)(iVar3 + -0x4fe4),
		    (ulonglong) * (uint *)(puVar1 + 0x18) + 1, 0x21, uVar4, in_r9, in_r10, in_stack_ffffffb8);
		if (*(int *)(iVar3 + -0x2444) == 0) {
			CelDecodeOnly(0x24f, 0x27a, (ulonglong) * (uint *)(iVar3 + -0x4fe4),
			    (ulonglong) * (uint *)(puVar1 + 0x1c) + 5, 0x21, uVar4, in_r9, in_r10, in_stack_ffffffb8);
		} else {
			CelDecodeOnly(0x24f, 0x27a, (ulonglong) * (uint *)(iVar3 + -0x4fe4),
			    (ulonglong) * (uint *)(puVar1 + 0x1c) + 3, 0x21, uVar4, in_r9, in_r10, in_stack_ffffffb8);
		}
	}
	return;
}

void DoSpeedBook(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	uint uVar3;
	uint uVar4;
	uint uVar5;
	uint uVar6;
	uint uVar7;
	uint uVar8;
	undefined *puVar10;
	ulonglong uVar9;
	ulonglong uVar11;
	ulonglong unaff_r18;
	ulonglong uVar12;
	ulonglong unaff_r19;
	ulonglong uVar13;
	int iVar14;
	int iVar15;
	int iVar16;

	puVar10 = PTR_DAT_100f1824;
	iVar16 = 0x27c;
	*(undefined4 *)PTR_DAT_100f1918 = 1;
	puVar10 = PTR_DAT_100f1828 + *(int *)puVar10 * 0x55ec;
	if (*(int *)(puVar10 + 0xb4) != -1) {
		uVar1 = *(uint *)(puVar10 + 0x10c);
		iVar14 = 0;
		uVar2 = *(uint *)(puVar10 + 0x110);
		uVar3 = *(uint *)(puVar10 + 0x104);
		uVar4 = *(uint *)(puVar10 + 0x108);
		uVar5 = *(uint *)(puVar10 + 0x114);
		uVar6 = *(uint *)(puVar10 + 0x118);
		uVar7 = *(uint *)(puVar10 + 0x5560);
		uVar8 = *(uint *)(puVar10 + 0x5564);
		do {
			uVar12 = (ulonglong)uVar6;
			uVar13 = (ulonglong)uVar5;
			if (iVar14 != 2) {
				if (iVar14 < 2) {
					uVar12 = (ulonglong)uVar2;
					uVar13 = (ulonglong)uVar1;
					if ((iVar14 != 0) && (uVar12 = (ulonglong)uVar4, uVar13 = (ulonglong)uVar3, iVar14 < 0)) {
						uVar12 = unaff_r18;
						uVar13 = unaff_r19;
					}
				} else {
					uVar12 = unaff_r18;
					uVar13 = unaff_r19;
					if (iVar14 < 4) {
						uVar12 = (ulonglong)uVar8;
						uVar13 = (ulonglong)uVar7;
					}
				}
			}
			uVar11 = 1;
			uVar9 = 0;
			iVar15 = 1;
			do {
				if (((uVar12 & uVar11 | uVar13 & uVar9) != 0) && (iVar16 = iVar16 + -0x38, iVar16 == 0x14)) {
					iVar16 = 0x27c;
				}
				uVar9 = SetCursorPos();
				iVar15 = iVar15 + 1;
			} while (iVar15 < 0x25);
			if (((uVar12 | uVar13) != 0) && (iVar16 != 0x27c)) {
				iVar16 = iVar16 + -0x38;
			}
			if (iVar16 == 0x14) {
				iVar16 = 0x27c;
			}
			iVar14 = iVar14 + 1;
			unaff_r18 = uVar12;
			unaff_r19 = uVar13;
		} while (iVar14 < 4);
	}
	return;
}

void DoPanBtn(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	ulonglong uVar7;
	undefined uVar8;
	longlong lVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	uint *puVar15;
	ulonglong uVar14;
	undefined uVar16;
	ulonglong uVar17;
	undefined uVar18;
	undefined4 in_stack_ffffffc8;

	puVar6 = PTR_DAT_100f1928;
	puVar5 = PTR_DAT_100f1924;
	puVar4 = PTR_DAT_100f18f0;
	puVar3 = PTR_DAT_100f18b4;
	uVar11 = SUB41(PTR_DAT_100f1924, 0);
	uVar10 = SUB41(PTR_DAT_100f1928, 0);
	uVar13 = SUB41(PTR_DAT_100f18b4, 0);
	uVar7 = (ulonglong) * (uint *)PTR_DAT_100f18ec;
	uVar12 = SUB41(PTR_DAT_100f18f0, 0);
	uVar14 = ZEXT48(&DAT_100f6300);
	uVar16 = 0;
	uVar17 = ZEXT48(PTR_DAT_100f18f4);
	uVar18 = SUB41(PTR_DAT_100f18f4, 0);
	iVar1 = *(int *)PTR_DAT_100f1928;
	iVar2 = *(int *)PTR_DAT_100f1924;
	if (0 < (int)*(uint *)PTR_DAT_100f18ec) {
		do {
			puVar15 = (uint *)uVar14;
			lVar9 = (ulonglong)*puVar15 + (ulonglong)puVar15[2];
			param_2 = (undefined)lVar9;
			if (((((int)*puVar15 <= iVar1) && (iVar1 <= (int)lVar9)) && ((int)puVar15[1] <= iVar2)) && (iVar2 <= (int)(puVar15[1] + puVar15[3]))) {
				*(undefined4 *)uVar17 = 1;
				*(undefined4 *)puVar3 = 1;
				*(undefined4 *)puVar4 = 1;
			}
			uVar14 = uVar14 + 0x14;
			uVar16 = (undefined)uVar14;
			uVar17 = uVar17 + 4;
			uVar18 = (undefined)uVar17;
			uVar7 = uVar7 - 1;
		} while (uVar7 != 0);
	}
	if (((*(int *)PTR_DAT_100f1918 == 0) && (0x234 < *(int *)puVar6)) && ((*(int *)puVar6 < 0x26d && ((0x19f < *(int *)puVar5 && (*(int *)puVar5 < 0x1d8)))))) {
		uVar8 = DoSpeedBook((char)PTR_DAT_100f1918, param_2, uVar10, uVar11, uVar12, uVar13, uVar16, uVar18,
		    in_stack_ffffffc8);
		gamemenu_off(uVar8, param_2, uVar10, uVar11, uVar12, uVar13, uVar16, uVar18, in_stack_ffffffc8);
	}
	return;
}

void control_set_button_down(int param_1)

{
	undefined *puVar1;
	undefined *puVar2;

	puVar1 = PTR_DAT_100f18b4;
	*(undefined4 *)(PTR_DAT_100f18f4 + param_1 * 4) = 1;
	puVar2 = PTR_DAT_100f18f0;
	*(undefined4 *)puVar1 = 1;
	*(undefined4 *)puVar2 = 1;
	return;
}

void control_check_btn_press(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;

	puVar2 = PTR_DAT_100f1928;
	puVar1 = PTR_DAT_100f1924;
	if ((((iRam100f633c <= *(int *)PTR_DAT_100f1928) && (*(int *)PTR_DAT_100f1928 <= iRam100f633c + iRam100f6344)) && (iRam100f6340 <= *(int *)PTR_DAT_100f1924)) && (*(int *)PTR_DAT_100f1924 <= iRam100f6340 + iRam100f6348)) {
		control_set_button_down(3);
	}
	if (((iRam100f6378 <= *(int *)puVar2) && (*(int *)puVar2 <= iRam100f6378 + iRam100f6380)) && ((iRam100f637c <= *(int *)puVar1 && (*(int *)puVar1 <= iRam100f637c + iRam100f6384)))) {
		control_set_button_down(6);
	}
	return;
}

void DoAutoMap(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	if ((*PTR_DAT_100f17ec == '\0') && (*PTR_DAT_100f17e0 == '\x01')) {
		InitDiabloMsg('\x01');
	} else {
		if (*(int *)PTR_DAT_100f1858 == 0) {
			FUN_1001995c();
		} else {
			*(undefined4 *)PTR_DAT_100f1858 = 0;
		}
	}
	return;
}

void CheckPanelInfo(undefined8 uParm1, undefined8 uParm2, ulonglong uParm3, ulonglong uParm4,
    undefined4 uParm5, undefined4 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	char cVar1;
	uint uVar2;
	uint uVar3;
	int iVar4;
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
	undefined *puVar15;
	undefined *puVar16;
	undefined *puVar17;
	ulonglong uVar18;
	int iVar19;
	longlong lVar20;
	undefined uVar21;
	undefined uVar22;
	undefined4 uVar23;
	undefined uVar24;
	undefined uVar25;
	undefined uVar26;
	undefined uVar27;
	ulonglong uVar28;
	int iVar29;
	int iVar30;
	longlong lVar31;
	longlong lVar32;
	int *piVar33;
	undefined4 in_stack_ffffff78;
	undefined in_stack_ffffff7f;
	undefined4 in_stack_ffffff8c;
	undefined4 in_stack_ffffff90;
	undefined4 in_stack_ffffff94;
	undefined4 in_stack_ffffff98;
	undefined4 in_stack_ffffff9c;
	undefined4 in_stack_ffffffa0;
	undefined4 in_stack_ffffffa4;

	puVar17 = PTR_s_Player_friendly_100f2adc;
	puVar16 = PTR_s_Player_attack_100f2ad8;
	puVar15 = PTR_s_Hotkey____s_100f2ad4;
	puVar14 = PTR_DAT_100f1934;
	puVar13 = PTR_DAT_100f192c;
	puVar12 = PTR_DAT_100f1928;
	puVar11 = PTR_DAT_100f1924;
	puVar10 = PTR_DAT_100f191c;
	puVar9 = PTR_DAT_100f1904;
	puVar8 = PTR_DAT_100f18fc;
	puVar7 = PTR_DAT_100f18ec;
	puVar6 = PTR_DAT_100f18a8;
	puVar5 = PTR_DAT_100f1824;
	uVar18 = ZEXT48(&toc);
	uVar28 = ZEXT48(PTR_DAT_100f1828);
	*(undefined4 *)PTR_DAT_100f18fc = 0;
	ClearPanel();
	iVar30 = 0;
	lVar20 = uVar18 - 0x2c10;
	lVar32 = uVar18 - 0x2cd0;
	lVar31 = uVar18 - 0x2c30;
	while (true) {
		uVar23 = (undefined4)uParm4;
		iVar19 = (int)uVar18;
		uVar21 = (undefined)uParm3;
		if (*(int *)puVar7 <= iVar30)
			break;
		piVar33 = (int *)lVar32;
		uVar3 = *(uint *)puVar12;
		uParm3 = (ulonglong)uVar3;
		uVar2 = piVar33[1];
		uParm4 = (ulonglong)uVar2;
		if (((*piVar33 <= (int)uVar3) && ((int)uVar3 <= *piVar33 + piVar33[2])) && (((int)uVar2 <= *(int *)puVar11 && (*(int *)puVar11 <= (int)(uVar2 + piVar33[3]))))) {
			if (iVar30 == 7) {
				if (_DAT_100f6b8c == 0) {
					strcpy((int)puVar13, (int)puVar16);
				} else {
					strcpy((int)puVar13, (int)puVar17);
				}
			} else {
				strcpy((int)puVar13, *(int *)lVar20);
			}
			uVar3 = *(uint *)lVar31;
			uParm3 = (ulonglong)uVar3;
			if (uVar3 != 0) {
				sprintf((int)puVar10, puVar15, uVar3, (int)uParm4, uParm5, uParm6, uParm7, uParm8,
				    in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8c, in_stack_ffffff90,
				    in_stack_ffffff94, in_stack_ffffff98, in_stack_ffffff9c, in_stack_ffffffa0,
				    in_stack_ffffffa4);
				AddPanelString((int)puVar10, 1, (char)uParm3, (char)uParm4, (char)uParm5, (char)uParm6, (char)uParm7, (char)uParm8, in_stack_ffffff78);
			}
			*puVar6 = 0;
			*(undefined4 *)puVar8 = 1;
			*(undefined4 *)puVar9 = 1;
		}
		lVar32 = lVar32 + 0x14;
		lVar20 = lVar20 + 4;
		lVar31 = lVar31 + 4;
		iVar30 = iVar30 + 1;
	}
	if ((((**(int **)(iVar19 + -0x76b8) == 0) && (0x234 < *(int *)puVar12)) && (*(int *)puVar12 < 0x26d)) && ((0x19f < *(int *)puVar11 && (*(int *)puVar11 < 0x1d8)))) {
		strcpy((int)puVar13, *(int *)(iVar19 + -0x6500));
		iVar30 = *(int *)(iVar19 + -0x6504);
		*puVar6 = 0;
		*(undefined4 *)puVar8 = 1;
		*(undefined4 *)puVar9 = 1;
		strcpy((int)puVar10, iVar30);
		AddPanelString((int)puVar10, 1, uVar21, (char)uVar23, (char)uParm5, (char)uParm6, (char)uParm7,
		    (char)uParm8, in_stack_ffffff78);
		iVar29 = (int)uVar28;
		uVar27 = (undefined)uParm8;
		uVar26 = (undefined)uParm7;
		uVar25 = (undefined)uParm6;
		uVar24 = (undefined)uParm5;
		uVar21 = (undefined)uVar23;
		iVar4 = iVar29 + *(int *)puVar5 * 0x55ec;
		iVar30 = *(int *)(iVar4 + 0xb4);
		if (iVar30 != -1) {
			cVar1 = *(char *)(iVar4 + 0xb8);
			if (cVar1 == '\x02') {
				uVar21 = (undefined) * (undefined4 *)(puVar14 + iVar30 * 0x38 + 4);
				sprintf((int)puVar10, *(undefined4 *)(iVar19 + -0x6488),
				    *(undefined4 *)(puVar14 + iVar30 * 0x38 + 4), uVar23, uParm5, uParm6, uParm7, uParm8, in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8c, in_stack_ffffff90,
				    in_stack_ffffff94, in_stack_ffffff98, in_stack_ffffff9c, in_stack_ffffffa0,
				    in_stack_ffffffa4);
				AddPanelString((int)puVar10, 1, uVar21, (char)uVar23, (char)uParm5, (char)uParm6, (char)uParm7,
				    (char)uParm8, in_stack_ffffff78);
				uVar27 = (undefined)uParm8;
				uVar26 = (undefined)uParm7;
				uVar25 = (undefined)uParm6;
				uVar24 = (undefined)uParm5;
				uVar21 = (undefined)uVar23;
				lVar32 = 0;
				lVar31 = uVar28 + (ulonglong) * (uint *)puVar5 * 0x55ec;
				uVar3 = *(uint *)((int)lVar31 + 0x4828);
				uVar18 = (ulonglong)uVar3;
				lVar20 = lVar31;
				if (0 < (int)uVar3) {
					do {
						iVar4 = (int)lVar20;
						if (((*(int *)(iVar4 + 0xeb0) != -1) && ((*(int *)(iVar4 + 0xf84) == 0x15 || (*(int *)(iVar4 + 0xf84) == 0x16)))) && (iVar30 == *(int *)(iVar4 + 0xf88))) {
							lVar32 = lVar32 + 1;
						}
						lVar20 = lVar20 + 0x170;
						uVar18 = uVar18 - 1;
					} while (uVar18 != 0);
				}
				lVar20 = 2;
				do {
					iVar4 = (int)lVar31;
					if ((*(int *)(iVar4 + 0x485c) != -1) && (((*(int *)(iVar4 + 0x4930) == 0x15 || (*(int *)(iVar4 + 0x4930) == 0x16)) && (iVar30 == *(int *)(iVar4 + 0x4934))))) {
						lVar32 = lVar32 + 1;
					}
					if (((*(int *)(iVar4 + 0x49cc) != -1) && ((*(int *)(iVar4 + 0x4aa0) == 0x15 || (*(int *)(iVar4 + 0x4aa0) == 0x16)))) && (iVar30 == *(int *)(iVar4 + 0x4aa4))) {
						lVar32 = lVar32 + 1;
					}
					if (((*(int *)(iVar4 + 0x4b3c) != -1) && ((*(int *)(iVar4 + 0x4c10) == 0x15 || (*(int *)(iVar4 + 0x4c10) == 0x16)))) && (iVar30 == *(int *)(iVar4 + 0x4c14))) {
						lVar32 = lVar32 + 1;
					}
					if ((*(int *)(iVar4 + 0x4cac) != -1) && (((*(int *)(iVar4 + 0x4d80) == 0x15 || (*(int *)(iVar4 + 0x4d80) == 0x16)) && (iVar30 == *(int *)(iVar4 + 0x4d84))))) {
						lVar32 = lVar32 + 1;
					}
					uVar22 = (undefined)lVar32;
					lVar31 = lVar31 + 0x5c0;
					lVar20 = lVar20 + -1;
				} while (lVar20 != 0);
				if ((int)lVar32 == 1) {
					strcpy((int)puVar10, *(int *)(iVar19 + -0x648c));
				} else {
					sprintf((int)puVar10, *(undefined4 *)(iVar19 + -0x6490), (int)lVar32, uVar23, uParm5,
					    uParm6, uParm7, uParm8, in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8c,
					    in_stack_ffffff90, in_stack_ffffff94, in_stack_ffffff98, in_stack_ffffff9c,
					    in_stack_ffffffa0, in_stack_ffffffa4);
				}
				AddPanelString((int)puVar10, 1, uVar22, uVar21, uVar24, uVar25, uVar26, uVar27, in_stack_ffffff78);
			} else {
				if (cVar1 < '\x02') {
					if (cVar1 == '\0') {
						uVar22 = (undefined) * (undefined4 *)(puVar14 + iVar30 * 0x38 + 8);
						sprintf((int)puVar10, *(undefined4 *)(iVar19 + -0x6474),
						    *(undefined4 *)(puVar14 + iVar30 * 0x38 + 8), uVar23, uParm5, uParm6, uParm7,
						    uParm8, in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8c,
						    in_stack_ffffff90, in_stack_ffffff94, in_stack_ffffff98, in_stack_ffffff9c,
						    in_stack_ffffffa0, in_stack_ffffffa4);
						AddPanelString((int)puVar10, 1, uVar22, uVar21, uVar24, uVar25, uVar26, uVar27, in_stack_ffffff78);
					} else {
						if (-1 < cVar1) {
							uVar21 = (undefined) * (undefined4 *)(puVar14 + iVar30 * 0x38 + 4);
							sprintf((int)puVar10, *(undefined4 *)(iVar19 + -0x6478),
							    *(undefined4 *)(puVar14 + iVar30 * 0x38 + 4), uVar23, uParm5, uParm6, uParm7,
							    uParm8, in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8c,
							    in_stack_ffffff90, in_stack_ffffff94, in_stack_ffffff98, in_stack_ffffff9c,
							    in_stack_ffffffa0, in_stack_ffffffa4);
							AddPanelString((int)puVar10, 1, uVar21, (char)uVar23, (char)uParm5, (char)uParm6, (char)uParm7, (char)uParm8, in_stack_ffffff78);
							uVar27 = (undefined)uParm8;
							uVar26 = (undefined)uParm7;
							uVar25 = (undefined)uParm6;
							uVar24 = (undefined)uParm5;
							uVar21 = (undefined)uVar23;
							iVar29 = iVar29 + *(int *)puVar5 * 0x55ec;
							lVar20 = (longlong) * (char *)(iVar29 + iVar30 + 0xc1) + (longlong) * (char *)(iVar29 + 0x5570);
							iVar30 = (int)lVar20;
							if (lVar20 < 0) {
								iVar30 = 0;
							}
							uVar22 = (undefined)iVar30;
							if (iVar30 == 0) {
								sprintf((int)puVar10, *(undefined4 *)(iVar19 + -0x6480), 0, uVar23, uParm5, uParm6,
								    uParm7, uParm8, in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8c,
								    in_stack_ffffff90, in_stack_ffffff94, in_stack_ffffff98, in_stack_ffffff9c, in_stack_ffffffa0, in_stack_ffffffa4);
							} else {
								sprintf((int)puVar10, *(undefined4 *)(iVar19 + -0x6484), iVar30, uVar23, uParm5,
								    uParm6, uParm7, uParm8, in_stack_ffffff78, in_stack_ffffff7f,
								    in_stack_ffffff8c, in_stack_ffffff90, in_stack_ffffff94, in_stack_ffffff98, in_stack_ffffff9c, in_stack_ffffffa0, in_stack_ffffffa4);
							}
							AddPanelString((int)puVar10, 1, uVar22, uVar21, uVar24, uVar25, uVar26, uVar27,
							    in_stack_ffffff78);
						}
					}
				} else {
					if (cVar1 < '\x04') {
						uVar21 = (undefined) * (undefined4 *)(puVar14 + iVar30 * 0x38 + 4);
						sprintf((int)puVar10, *(undefined4 *)(iVar19 + -0x6494),
						    *(undefined4 *)(puVar14 + iVar30 * 0x38 + 4), uVar23, uParm5, uParm6, uParm7,
						    uParm8, in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8c,
						    in_stack_ffffff90, in_stack_ffffff94, in_stack_ffffff98, in_stack_ffffff9c,
						    in_stack_ffffffa0, in_stack_ffffffa4);
						AddPanelString((int)puVar10, 1, uVar21, (char)uVar23, (char)uParm5, (char)uParm6, (char)uParm7,
						    (char)uParm8, in_stack_ffffff78);
						uVar22 = (undefined)uParm8;
						uVar27 = (undefined)uParm7;
						uVar26 = (undefined)uParm6;
						uVar25 = (undefined)uParm5;
						uVar24 = (undefined)uVar23;
						iVar30 = *(int *)(iVar29 + *(int *)puVar5 * 0x55ec + 0xb3c);
						uVar21 = (undefined)iVar30;
						if (iVar30 == 1) {
							strcpy((int)puVar10, *(int *)(iVar19 + -0x6498));
						} else {
							sprintf((int)puVar10, *(undefined4 *)(iVar19 + -0x649c), iVar30, uVar23, uParm5,
							    uParm6, uParm7, uParm8, in_stack_ffffff78, in_stack_ffffff7f,
							    in_stack_ffffff8c, in_stack_ffffff90, in_stack_ffffff94, in_stack_ffffff98,
							    in_stack_ffffff9c, in_stack_ffffffa0, in_stack_ffffffa4);
						}
						AddPanelString((int)puVar10, 1, uVar21, uVar24, uVar25, uVar26, uVar27, uVar22, in_stack_ffffff78);
					}
				}
			}
		}
	}
	if (((0xbe < *(int *)puVar12) && (*(int *)puVar12 < 0x1b5)) && ((0x164 < *(int *)puVar11 && (*(int *)puVar11 < 0x181)))) {
		uVar21 = CheckInvHLight();
		**(undefined **)(iVar19 + -0x772c) = uVar21;
	}
	return;
}

void CheckBtnUp(undefined param_1, undefined param_2, char param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	ulonglong uVar8;
	uint uVar9;
	uint *puVar10;
	int *piVar11;
	int iVar12;
	undefined4 in_stack_ffffff88;

	puVar5 = PTR_DAT_100f1928;
	puVar4 = PTR_DAT_100f1924;
	piVar11 = (int *)PTR_DAT_100f18f4;
	puVar3 = PTR_DAT_100f18f0;
	uVar8 = SEXT18(param_3);
	uVar7 = ZEXT48(PTR_DAT_100f18b4);
	iVar12 = 0;
	uVar6 = ZEXT48(PTR_DAT_100f18f0);
	uVar9 = 0;
	puVar10 = (uint *)&DAT_100f6300;
	*(undefined4 *)PTR_DAT_100f18b4 = 1;
	*(undefined4 *)puVar3 = 0;
	do {
		if (*piVar11 != 0) {
			uVar7 = 0;
			*piVar11 = 0;
			uVar1 = *(uint *)puVar5;
			uVar8 = (ulonglong)uVar1;
			uVar2 = *puVar10;
			uVar6 = (ulonglong)uVar2;
			if (((int)uVar2 <= (int)uVar1) && ((int)uVar1 <= (int)(uVar2 + puVar10[2]))) {
				uVar1 = *(uint *)puVar4;
				uVar8 = (ulonglong)uVar1;
				uVar2 = puVar10[1];
				uVar6 = (ulonglong)uVar2;
				if (((int)uVar2 <= (int)uVar1) && (((int)uVar1 <= (int)(uVar2 + puVar10[3]) && (uVar9 < 8)))) {
					// WARNING: Could not recover jumptable at 0x1001e810. Too many branches
					// WARNING: Treating indirect jump as call
					(**(code **)((int)&PTR_LAB_100f64c8 + iVar12))();
					return;
				}
			}
		}
		uVar9 = uVar9 + 1;
		puVar10 = puVar10 + 5;
		iVar12 = iVar12 + 4;
		piVar11 = piVar11 + 1;
		if (7 < (int)uVar9) {
			gamemenu_off((char)uVar6, (char)uVar7, (char)uVar8, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffff88);
			return;
		}
	} while (true);
}

void FreeControlPan(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined **ppuVar2;
	ulonglong uVar3;
	undefined4 in_stack_ffffffc8;

	ppuVar2 = &toc;
	uVar3 = (ulonglong)_DAT_100f4018;
	_DAT_100f4018 = 0;
	mem_free_dbg(uVar3, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	puVar1 = ppuVar2[-0x13ef];
	ppuVar2[-0x13ef] = (undefined *)0x0;
	mem_free_dbg(ZEXT48(puVar1), param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	puVar1 = ppuVar2[-0x13f0];
	ppuVar2[-0x13f0] = (undefined *)0x0;
	mem_free_dbg(ZEXT48(puVar1), param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	mem_free_dbg((int **)(ppuVar2 + -0x13e9), param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	mem_free_dbg((int **)(ppuVar2 + -0x13ea), param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	mem_free_dbg((int **)(ppuVar2 + -0x13ec), param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	mem_free_dbg((int **)(ppuVar2 + -0x13e8), param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	mem_free_dbg((int **)(ppuVar2 + -0x13f9), param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	mem_free_dbg((int **)(ppuVar2 + -0x13fa), param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	mem_free_dbg((int **)(ppuVar2 + -0x13eb), param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	mem_free_dbg((int **)(ppuVar2 + -0x13f1), param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	mem_free_dbg((int **)ppuVar2[-0x1dc0], param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	mem_free_dbg((int **)(ppuVar2 + -0x13f2), param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	mem_free_dbg((int **)(ppuVar2 + -0x13f3), param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	mem_free_dbg((int **)(ppuVar2 + -0x13f4), param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	mem_free_dbg((int **)(ppuVar2 + -0x13ed), param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	return;
}

undefined8 control_WriteStringToBuffer(byte *param_1)

{
	byte bVar1;
	longlong lVar2;

	lVar2 = 0;
	do {
		if (*param_1 == 0) {
			return 1;
		}
		bVar1 = *param_1;
		param_1 = param_1 + 1;
		lVar2 = lVar2 + (ulonglong)(byte)(&DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]]];
	} while ((int)lVar2 < 0x7d);
	return 0;
}

void control_print_info_str(int param_1, byte *param_2, int param_3, longlong param_4, undefined8 param_5,
    int param_6, int param_7, int param_8, undefined4 param_9)

{
	byte bVar1;
	undefined *puVar2;
	longlong lVar3;
	byte *pbVar4;
	ulonglong uVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	ulonglong uVar9;
	ulonglong uVar10;
	undefined4 in_stack_ffffffa8;

	puVar2 = PTR_DAT_100f18a8;
	lVar8 = (longlong)param_8;
	lVar7 = (longlong)param_7;
	lVar6 = (longlong)param_6;
	param_4 = param_4 * 0x14;
	uVar5 = ZEXT48(&DAT_100f6274);
	uVar9 = 0;
	uVar10 = (ulonglong) * (uint *)(&DAT_100f6274 + (int)param_4 + param_1 * 4);
	if (param_3 == 1) {
		lVar3 = 0;
		pbVar4 = param_2;
		while (true) {
			if (*pbVar4 == 0)
				break;
			bVar1 = *pbVar4;
			pbVar4 = pbVar4 + 1;
			lVar3 = (ulonglong)(byte)(&DAT_100f6230)
			            [(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]]]
			    + lVar3
			    + 2;
		}
		if ((int)lVar3 < 0x120) {
			uVar9 = (ulonglong)(uint)(0x120 - (int)lVar3 >> 1);
		}
		uVar10 = uVar10 + uVar9;
	}
	while (*param_2 != 0) {
		bVar1 = *param_2;
		param_2 = param_2 + 1;
		bVar1 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]];
		uVar9 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + uVar9 + 2;
		if (bVar1 != 0) {
			if ((int)uVar9 < 0x120) {
				CPrintString(uVar10, (ulonglong)bVar1, (ulonglong)(byte)*puVar2, param_4, uVar5, (int)lVar6,
				    (int)lVar7, (int)lVar8, in_stack_ffffffa8);
			}
		}
		uVar10 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + uVar10 + 2;
	}
	return;
}

void control_draw_info_str(void)

{
	bool bVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined8 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int iVar4;
	byte *pbVar5;
	int *piVar6;
	undefined4 in_stack_ffffffb8;

	puVar2 = PTR_DAT_100f190c;
	ppuVar3 = &toc;
	if (*(int *)PTR_DAT_100f1900 == 0) {
		bVar1 = *PTR_DAT_100f192c == '\0';
		if (!bVar1) {
			ppuVar3 = &toc;
			control_print_info_str(0, PTR_DAT_100f192c, 1, (ulonglong) * (uint *)PTR_DAT_100f190c, in_r7, in_r8, in_r9,
			    in_r10, in_stack_ffffffb8);
		}
		iVar4 = 0;
		piVar6 = (int *)ppuVar3[-0x1db2];
		pbVar5 = ppuVar3[-0x1db0];
		while (iVar4 < (int)*(uint *)puVar2) {
			control_print_info_str(iVar4 + (uint)!bVar1, pbVar5, *piVar6, (ulonglong) * (uint *)puVar2 - (ulonglong)bVar1, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffb8);
			piVar6 = piVar6 + 1;
			pbVar5 = pbVar5 + 0x40;
			iVar4 = iVar4 + 1;
		}
	}
	return;
}

void DrawInfoBox(void)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined **ppuVar11;
	undefined *puVar13;
	longlong lVar12;
	undefined8 uVar14;
	int iVar16;
	ulonglong uVar15;
	undefined8 uVar17;
	undefined uVar18;
	char cVar19;
	undefined uVar21;
	undefined4 uVar20;
	undefined uVar23;
	undefined4 uVar22;
	undefined uVar25;
	undefined4 uVar24;
	undefined4 in_r9;
	undefined uVar26;
	undefined4 in_r10;
	undefined uVar27;
	ulonglong uVar28;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar10 = PTR_DAT_100f192c;
	puVar9 = PTR_DAT_100f191c;
	puVar8 = PTR_DAT_100f1918;
	puVar7 = PTR_DAT_100f18a8;
	puVar6 = PTR_DAT_100f1890;
	puVar5 = PTR_DAT_100f1880;
	puVar4 = PTR_DAT_100f187c;
	puVar13 = PTR_DAT_100f1874;
	puVar3 = PTR_DAT_100f1828;
	puVar2 = PTR_DAT_100f1824;
	ppuVar11 = &toc;
	uVar28 = ZEXT48(PTR_DAT_100f187c);
	uVar14 = 0x3e;
	uVar17 = 0x120;
	uVar20 = 0x3c;
	uVar22 = 0xf1;
	uVar24 = 0x22e;
	DrawPanelBox(0xb1, 0x3e, 0x120, 0x3c, 0xf1, 0x22e);
	if ((((*(int *)ppuVar11[-0x1db5] == 0) && (*(int *)puVar6 == 0)) && (*ppuVar11[-0x1dcb] == -1)) && (*(int *)puVar8 == 0)) {
		*puVar10 = 0;
		*puVar7 = 0;
		ClearPanel();
	}
	uVar27 = (undefined)in_r10;
	uVar26 = (undefined)in_r9;
	uVar25 = (undefined)uVar24;
	uVar23 = (undefined)uVar22;
	uVar21 = (undefined)uVar20;
	uVar18 = (undefined)uVar17;
	if (*(int *)puVar8 == 0) {
		if (*(int *)puVar6 == 0) {
			if (*(int *)ppuVar11[-0x1dd1] < 0xc) {
				if (*ppuVar11[-0x1dd2] != -1) {
					GetItemStr();
				}
				if ((int)(char)*ppuVar11[-0x1dd3] != -1) {
					GetObjectStr((int)(char)*ppuVar11[-0x1dd3], uVar14, uVar17, uVar20, uVar22, uVar24, in_r9, in_r10, in_stack_ffffffa8);
				}
				iVar16 = *(int *)puVar5;
				if (iVar16 != -1) {
					if (*ppuVar11[-0x1de5] == '\0') {
						strcpy((int)puVar10, (int)(ppuVar11[-0x1dd6] + iVar16 * 0x10c + 0xa0));
					} else {
						*puVar7 = 0;
						uVar15 = (ulonglong) * (uint *)(puVar4 + iVar16 * 0xe8 + 0xdc);
						strcpy((int)puVar10, *(uint *)(puVar4 + iVar16 * 0xe8 + 0xdc));
						ClearPanel();
						lVar12 = uVar28 + (ulonglong) * (uint *)puVar5 * 0xe8;
						iVar16 = (int)lVar12;
						if (*(char *)(iVar16 + 0xc0) == '\0') {
							PrintMonstHistory((uint) * *(byte **)(iVar16 + 0xe0), uVar15, uVar17, uVar20, uVar22, uVar24, in_r9, in_r10, in_stack_ffffffa8);
						} else {
							*puVar7 = 3;
							PrintUniqueHistory((char)lVar12, (char)uVar15, (char)uVar17, (char)uVar20, (char)uVar22,
							    (char)uVar24, (char)in_r9, (char)in_r10, in_stack_ffffffa8);
						}
					}
				}
				cVar19 = *puVar13;
				if (cVar19 != -1) {
					*puVar7 = 3;
					strcpy((int)puVar10, (int)(puVar3 + (int)cVar19 * 0x55ec + 0x13c));
					ClearPanel();
					uVar18 = (undefined)uVar20;
					cVar19 = puVar3[(int)(char)*puVar13 * 0x55ec + 0x1b4];
					sprintf((int)puVar9, ppuVar11[-0x1946], (int)cVar19, uVar20, uVar22, uVar24, in_r9, in_r10,
					    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbc, in_stack_ffffffc0,
					    in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0,
					    in_stack_ffffffd4);
					AddPanelString((int)puVar9, 1, cVar19, uVar18, (char)uVar22, (char)uVar24, (char)in_r9,
					    (char)in_r10, in_stack_ffffffa8);
					uVar27 = (undefined)in_r10;
					uVar26 = (undefined)in_r9;
					uVar25 = (undefined)uVar24;
					uVar23 = (undefined)uVar22;
					iVar16 = *(int *)(puVar3 + (int)(char)*puVar13 * 0x55ec + 0x194) >> 6;
					uVar18 = (undefined)iVar16;
					iVar1 = *(int *)(puVar3 + (int)(char)*puVar13 * 0x55ec + 0x198) >> 6;
					uVar21 = (undefined)iVar1;
					sprintf((int)puVar9, ppuVar11[-0x1947], iVar16, iVar1, uVar22, uVar24, in_r9, in_r10,
					    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbc, in_stack_ffffffc0,
					    in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0,
					    in_stack_ffffffd4);
					AddPanelString((int)puVar9, 1, uVar18, uVar21, uVar23, uVar25, uVar26, uVar27, in_stack_ffffffa8);
				}
			} else {
				iVar16 = *(int *)puVar2 * 0x55ec;
				puVar13 = puVar3 + iVar16;
				if (*(int *)(puVar13 + 0x53dc) == 0xb) {
					iVar16 = *(int *)(puVar13 + 0x5498);
					uVar28 = get_pieces_str(iVar16);
					sprintf((int)puVar10, ppuVar11[-0x1944], iVar16, (int)uVar28, uVar22, uVar24, in_r9, in_r10,
					    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbc, in_stack_ffffffc0,
					    in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0,
					    in_stack_ffffffd4);
				} else {
					if (*(int *)(puVar13 + 0x5538) == 0) {
						ClearPanel();
						AddPanelString((int)ppuVar11[-0x1945], 1, uVar18, uVar21, uVar23, uVar25, uVar26, uVar27,
						    in_stack_ffffffa8);
						*(undefined4 *)ppuVar11[-0x1db3] = 1;
					} else {
						if (*(int *)(puVar13 + 0x540c) == 0) {
							strcpy((int)puVar10, (int)(puVar3 + iVar16 + 0x5411));
						} else {
							strcpy((int)puVar10, (int)(puVar3 + iVar16 + 0x5451));
						}
						cVar19 = puVar3[*(int *)puVar2 * 0x55ec + 0x5410];
						if (cVar19 == '\x01') {
							*puVar7 = 1;
						}
						if (cVar19 == '\x02') {
							*puVar7 = 3;
						}
					}
				}
			}
			goto LAB_1001eed0;
		}
	}
	*puVar7 = 0;
LAB_1001eed0:
	if ((*puVar10 != '\0') || (*(int *)ppuVar11[-0x1db1] != 0)) {
		control_draw_info_str();
	}
	return;
}

void ADD_PlrStringXY(longlong param_1, int param_2, int param_3, byte *param_4, undefined8 param_5,
    undefined8 param_6, int param_7, int param_8, undefined4 param_9)

{
	byte bVar1;
	longlong lVar2;
	byte *pbVar3;
	ulonglong uVar4;
	undefined8 uVar5;
	ulonglong uVar6;
	longlong lVar7;
	longlong lVar8;
	ulonglong uVar9;
	int iVar10;
	undefined4 in_stack_ffffffa8;

	lVar8 = (longlong)param_8;
	lVar7 = (longlong)param_7;
	uVar6 = ZEXT48(PTR_DAT_100f1938);
	uVar9 = 0;
	uVar4 = (ulonglong) * (uint *)(PTR_DAT_100f1938 + param_2 * 4 + 0x280);
	iVar10 = (param_3 - (int)param_1) + 1;
	lVar2 = 0;
	pbVar3 = param_4;
	while (true) {
		if (*pbVar3 == 0)
			break;
		bVar1 = *pbVar3;
		pbVar3 = pbVar3 + 1;
		lVar2 = (ulonglong)(byte)(&DAT_100f6230)
		            [(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]]]
		    + lVar2 + 1;
	}
	if ((int)lVar2 < iVar10) {
		uVar9 = (ulonglong)(uint)(iVar10 - (int)lVar2 >> 1);
	}
	lVar2 = param_1 + uVar4 + 0x40 + uVar9;
	uVar5 = param_5;
	while (*param_4 != 0) {
		bVar1 = *param_4;
		param_4 = param_4 + 1;
		bVar1 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]];
		uVar9 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + uVar9 + 1;
		if (bVar1 != 0) {
			if ((int)uVar9 < iVar10) {
				CPrintString(lVar2, (ulonglong)bVar1, param_5, uVar4, uVar5, (int)uVar6, (int)lVar7, (int)lVar8,
				    in_stack_ffffffa8);
			}
		}
		lVar2 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + lVar2 + 1;
	}
	return;
}

void PrintGameStr(longlong param_1, int param_2, byte *param_3, undefined8 param_4, undefined8 param_5,
    int param_6, int param_7, int param_8, undefined4 param_9)

{
	byte bVar1;
	undefined8 uVar2;
	ulonglong uVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	undefined4 in_stack_ffffffa8;

	lVar6 = (longlong)param_8;
	lVar5 = (longlong)param_7;
	lVar4 = (longlong)param_6;
	uVar3 = ZEXT48(PTR_DAT_100f1938);
	param_1 = param_1 + (ulonglong) * (uint *)(PTR_DAT_100f1938 + param_2 * 4 + 0x280) + 0x40;
	uVar2 = param_4;
	while (*param_3 != 0) {
		bVar1 = *param_3;
		param_3 = param_3 + 1;
		bVar1 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]];
		if (bVar1 != 0) {
			CPrintString(param_1, (ulonglong)bVar1, param_4, uVar2, uVar3, (int)lVar4, (int)lVar5, (int)lVar6,
			    in_stack_ffffffa8);
		}
		param_1 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + param_1 + 1;
	}
	return;
}

void MY_PlrStringXY(longlong param_1, int param_2, int param_3, byte *param_4, undefined8 param_5,
    longlong param_6, undefined8 param_7, int param_8, undefined4 param_9)

{
	byte bVar1;
	longlong lVar2;
	byte *pbVar3;
	ulonglong uVar4;
	undefined8 uVar5;
	undefined4 uVar6;
	ulonglong uVar7;
	longlong lVar8;
	ulonglong uVar9;
	int iVar10;
	undefined4 in_stack_ffffffa8;

	uVar6 = (undefined4)param_6;
	lVar8 = (longlong)param_8;
	uVar7 = ZEXT48(PTR_DAT_100f1938);
	uVar9 = 0;
	uVar4 = (ulonglong) * (uint *)(PTR_DAT_100f1938 + param_2 * 4 + 0x280);
	iVar10 = (param_3 - (int)param_1) + 1;
	lVar2 = 0;
	pbVar3 = param_4;
	while (true) {
		if (*pbVar3 == 0)
			break;
		bVar1 = *pbVar3;
		pbVar3 = pbVar3 + 1;
		lVar2 = (ulonglong)(byte)(&DAT_100f6230)
		            [(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]]]
		    + param_6 + lVar2;
	}
	if ((int)lVar2 < iVar10) {
		uVar9 = (ulonglong)(uint)(iVar10 - (int)lVar2 >> 1);
	}
	lVar2 = param_1 + uVar4 + 0x40 + uVar9;
	uVar5 = param_5;
	while (*param_4 != 0) {
		bVar1 = *param_4;
		param_4 = param_4 + 1;
		bVar1 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]];
		uVar9 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + param_6 + uVar9;
		if (bVar1 != 0) {
			if ((int)uVar9 < iVar10) {
				CPrintString(lVar2, (ulonglong)bVar1, param_5, uVar4, uVar5, uVar6, (int)uVar7, (int)lVar8,
				    in_stack_ffffffa8);
			}
		}
		lVar2 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + param_6 + lVar2;
	}
	return;
}

void DrawChr(void)

{
	char cVar1;
	int iVar2;
	uint uVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined4 uVar8;
	int iVar9;
	undefined **ppuVar10;
	longlong lVar11;
	byte *pbVar12;
	undefined *puVar13;
	undefined4 uVar15;
	undefined8 uVar14;
	undefined4 uVar16;
	undefined8 in_r8;
	undefined *puVar17;
	undefined4 in_r9;
	ulonglong uVar18;
	undefined4 in_r10;
	undefined8 unaff_r20;
	ulonglong uVar19;
	undefined4 uVar21;
	undefined8 uVar20;
	undefined4 uVar22;
	undefined8 unaff_r21;
	int iVar23;
	undefined *puVar24;
	uint uVar25;
	undefined8 unaff_r22;
	int iVar26;
	undefined *puVar27;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined *puVar28;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined *puVar29;
	undefined8 unaff_r28;
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
	byte abStack120[72];
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

	uVar8 = _DAT_100f2aa4;
	uVar16 = _DAT_100f2aa0;
	uVar22 = _DAT_100f2a98;
	uVar21 = _DAT_100f2a90;
	puVar7 = PTR_DAT_100f18e8;
	puVar6 = PTR_DAT_100f1870;
	puVar5 = PTR_DAT_100f1828;
	puVar4 = PTR_DAT_100f1824;
	ppuVar10 = &toc;
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
	CelDecodeOnly(0x40, 0x1ff, (ulonglong)_DAT_100f4028, 1, 0x140, (int)in_r8, in_r9, in_r10, in_stack_ffffff58);
	pbVar12 = puVar5 + *(int *)puVar4 * 0x55ec + 0x13c;
	uVar15 = 0;
	ADD_PlrStringXY(0x14, 0x20, 0x97, pbVar12, 0, in_r8, in_r9, in_r10, in_stack_ffffff58);
	puVar29 = puVar5 + 0x15c;
	cVar1 = puVar29[*(int *)puVar4 * 0x55ec];
	if (cVar1 == '\0') {
		pbVar12 = ppuVar10[-0x1948];
		uVar15 = 0;
		ADD_PlrStringXY(0xa8, 0x20, 299, pbVar12, 0, in_r8, in_r9, in_r10, in_stack_ffffff58);
	} else {
		if (cVar1 == '\x01') {
			pbVar12 = ppuVar10[-0x1949];
			uVar15 = 0;
			ADD_PlrStringXY(0xa8, 0x20, 299, pbVar12, 0, in_r8, in_r9, in_r10, in_stack_ffffff58);
		} else {
			if (cVar1 == '\x02') {
				pbVar12 = ppuVar10[-0x194a];
				uVar15 = 0;
				ADD_PlrStringXY(0xa8, 0x20, 299, pbVar12, 0, in_r8, in_r9, in_r10, in_stack_ffffff58);
			}
		}
	}
	sprintf((int)abStack120, uVar8, (int)(char)(puVar5 + 0x1b4)[*(int *)puVar4 * 0x55ec], pbVar12,
	    uVar15, (int)in_r8, in_r9, in_r10, in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c,
	    in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78, in_stack_ffffff7c,
	    in_stack_ffffff80, in_stack_ffffff84);
	pbVar12 = abStack120;
	uVar15 = 0;
	ADD_PlrStringXY(0x42, 0x45, 0x6d, pbVar12, 0, in_r8, in_r9, in_r10, in_stack_ffffff58);
	sprintf((int)abStack120, uVar16, *(undefined4 *)(puVar5 + *(int *)puVar4 * 0x55ec + 0x1b8),
	    pbVar12, uVar15, (int)in_r8, in_r9, in_r10, in_stack_ffffff58, in_stack_ffffff5f,
	    in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78,
	    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	pbVar12 = abStack120;
	uVar15 = 0;
	ADD_PlrStringXY(0xd8, 0x45, 300, pbVar12, 0, in_r8, in_r9, in_r10, in_stack_ffffff58);
	if ((puVar5 + 0x1b4)[*(int *)puVar4 * 0x55ec] == '2') {
		strcpy((int)abStack120, (int)ppuVar10[-0x194d]);
		uVar14 = 3;
	} else {
		sprintf((int)abStack120, uVar16, *(undefined4 *)(puVar5 + *(int *)puVar4 * 0x55ec + 0x1c0),
		    pbVar12, uVar15, (int)in_r8, in_r9, in_r10, in_stack_ffffff58, in_stack_ffffff5f,
		    in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78,
		    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
		uVar14 = 0;
	}
	uVar16 = (undefined4)uVar14;
	pbVar12 = abStack120;
	ADD_PlrStringXY(0xd8, 0x61, 300, pbVar12, uVar14, in_r8, in_r9, in_r10, in_stack_ffffff58);
	sprintf((int)abStack120, uVar8, *(undefined4 *)(puVar5 + *(int *)puVar4 * 0x55ec + 0x1c8),
	    pbVar12, uVar16, (int)in_r8, in_r9, in_r10, in_stack_ffffff58, in_stack_ffffff5f,
	    in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78,
	    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	pbVar12 = abStack120;
	uVar16 = 0;
	ADD_PlrStringXY(0xd8, 0x92, 300, pbVar12, 0, in_r8, in_r9, in_r10, in_stack_ffffff58);
	iVar9 = *(int *)puVar4 * 0x55ec;
	iVar26 = *(int *)(puVar5 + iVar9 + 0x5558);
	uVar19 = (ulonglong)(0 < iVar26);
	if (iVar26 < 0) {
		uVar19 = 2;
	}
	uVar15 = (undefined4)uVar19;
	puVar28 = puVar5 + 0x170;
	uVar25 = *(int *)(puVar28 + iVar9) / 5 + (*(int *)(puVar28 + iVar9) >> 0x1f);
	sprintf((int)abStack120, uVar8,
	    *(int *)(puVar5 + iVar9 + 0x554c) + iVar26 + uVar25 + (uVar25 >> 0x1f), pbVar12, uVar16, (int)in_r8, in_r9, in_r10, in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c,
	    in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78, in_stack_ffffff7c,
	    in_stack_ffffff80, in_stack_ffffff84);
	pbVar12 = abStack120;
	ADD_PlrStringXY(0x102, 0xb7, 0x12d, pbVar12, uVar19, in_r8, in_r9, in_r10, in_stack_ffffff58);
	iVar26 = *(int *)(puVar5 + *(int *)puVar4 * 0x55ec + 0x5554);
	uVar19 = (ulonglong)(0 < iVar26);
	if (iVar26 < 0) {
		uVar19 = 2;
	}
	sprintf((int)abStack120, uVar22,
	    (*(int *)(puVar28 + *(int *)puVar4 * 0x55ec) >> 1) + iVar26 + 0x32, pbVar12, uVar15,
	    (int)in_r8, in_r9, in_r10, in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c,
	    in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78, in_stack_ffffff7c,
	    in_stack_ffffff80, in_stack_ffffff84);
	ADD_PlrStringXY(0x102, 0xd3, 0x12d, abStack120, uVar19, in_r8, in_r9, in_r10, in_stack_ffffff58);
	iVar9 = *(int *)puVar4 * 0x55ec;
	iVar26 = *(int *)(puVar5 + iVar9 + 0x5550);
	uVar19 = (ulonglong)(0 < iVar26);
	if (iVar26 < 0) {
		uVar19 = 2;
	}
	uVar16 = (undefined4)uVar19;
	puVar17 = puVar5 + iVar9;
	uVar25 = *(uint *)(puVar17 + 0x5544);
	uVar18 = (ulonglong)uVar25;
	uVar3 = (int)(uVar25 * iVar26) / 100 + ((int)(uVar25 * iVar26) >> 0x1f);
	iVar23 = uVar25 + uVar3 + (uVar3 >> 0x1f) + *(int *)(puVar17 + 0x555c);
	if (*(int *)(puVar17 + 0xa60) == 3) {
		if (puVar29[iVar9] == '\x01') {
			iVar23 = iVar23 + *(int *)(puVar17 + 0x184);
		} else {
			iVar23 = iVar23 + (*(int *)(puVar17 + 0x184) >> 1);
		}
	} else {
		iVar23 = iVar23 + *(int *)(puVar17 + 0x184);
	}
	puVar13 = puVar5 + iVar9;
	iVar2 = *(int *)(puVar13 + 0x5548);
	uVar3 = (iVar2 * iVar26) / 100 + (iVar2 * iVar26 >> 0x1f);
	iVar26 = iVar2 + uVar3 + (uVar3 >> 0x1f) + *(int *)(puVar17 + 0x555c);
	if (*(int *)(puVar17 + 0xa60) == 3) {
		if (puVar29[iVar9] == '\x01') {
			iVar26 = iVar26 + *(int *)(puVar13 + 0x184);
		} else {
			iVar26 = iVar26 + (*(int *)(puVar13 + 0x184) >> 1);
		}
	} else {
		iVar26 = iVar26 + *(int *)(puVar13 + 0x184);
	}
	sprintf((int)abStack120, ppuVar10[-0x194f], iVar23, iVar26, iVar2, puVar17, uVar25, in_r10,
	    in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70,
	    in_stack_ffffff74, in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80,
	    in_stack_ffffff84);
	uVar15 = (undefined4)uVar18;
	if ((iVar23 < 100) && (iVar26 < 100)) {
		pbVar12 = abStack120;
		uVar14 = 0;
		MY_PlrStringXY(0x102, 0xef, 0x12d, pbVar12, uVar19, 0, uVar18, in_r10, in_stack_ffffff58);
	} else {
		pbVar12 = abStack120;
		uVar14 = 0xffffffffffffffff;
		MY_PlrStringXY(0xfe, 0xef, 0x131, pbVar12, uVar19, -1, uVar18, in_r10, in_stack_ffffff58);
	}
	cVar1 = puVar5[*(int *)puVar4 * 0x55ec + 0x1c5];
	uVar19 = (ulonglong)(cVar1 != '\0');
	if ((int)cVar1 < 0x4b) {
		sprintf((int)abStack120, uVar22, (int)cVar1, pbVar12, uVar16, (int)uVar14, uVar15, in_r10,
		    in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70,
		    in_stack_ffffff74, in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80,
		    in_stack_ffffff84);
	} else {
		uVar19 = 3;
		sprintf((int)abStack120, uVar21, (int)cVar1, pbVar12, uVar16, (int)uVar14, uVar15, in_r10,
		    in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70,
		    in_stack_ffffff74, in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80,
		    in_stack_ffffff84);
	}
	uVar16 = (undefined4)uVar19;
	pbVar12 = abStack120;
	ADD_PlrStringXY(0x101, 0x114, 300, pbVar12, uVar19, uVar14, uVar15, in_r10, in_stack_ffffff58);
	cVar1 = puVar5[*(int *)puVar4 * 0x55ec + 0x1c6];
	uVar19 = (ulonglong)(cVar1 != '\0');
	if ((int)cVar1 < 0x4b) {
		sprintf((int)abStack120, uVar22, (int)cVar1, pbVar12, uVar16, (int)uVar14, uVar15, in_r10,
		    in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70,
		    in_stack_ffffff74, in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80,
		    in_stack_ffffff84);
	} else {
		uVar19 = 3;
		sprintf((int)abStack120, uVar21, (int)cVar1, pbVar12, uVar16, (int)uVar14, uVar15, in_r10,
		    in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70,
		    in_stack_ffffff74, in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80,
		    in_stack_ffffff84);
	}
	uVar16 = (undefined4)uVar19;
	pbVar12 = abStack120;
	ADD_PlrStringXY(0x101, 0x130, 300, pbVar12, uVar19, uVar14, uVar15, in_r10, in_stack_ffffff58);
	cVar1 = puVar5[*(int *)puVar4 * 0x55ec + 0x1c7];
	uVar19 = (ulonglong)(cVar1 != '\0');
	if ((int)cVar1 < 0x4b) {
		sprintf((int)abStack120, uVar22, (int)cVar1, pbVar12, uVar16, (int)uVar14, uVar15, in_r10,
		    in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70,
		    in_stack_ffffff74, in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80,
		    in_stack_ffffff84);
	} else {
		uVar19 = 3;
		sprintf((int)abStack120, uVar21, (int)cVar1, pbVar12, uVar16, (int)uVar14, uVar15, in_r10,
		    in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70,
		    in_stack_ffffff74, in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80,
		    in_stack_ffffff84);
	}
	uVar21 = (undefined4)uVar19;
	pbVar12 = abStack120;
	ADD_PlrStringXY(0x101, 0x14c, 300, pbVar12, uVar19, uVar14, uVar15, in_r10, in_stack_ffffff58);
	puVar17 = puVar5 + 0x164;
	uVar20 = 0;
	sprintf((int)abStack120, uVar8, *(undefined4 *)(puVar17 + *(int *)puVar4 * 0x55ec), pbVar12,
	    uVar21, (int)uVar14, uVar15, in_r10, in_stack_ffffff58, in_stack_ffffff5f,
	    in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78,
	    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	if (*(int *)(puVar17 + *(int *)puVar4 * 0x55ec) == *(int *)(puVar6 + (int)(char)puVar29[*(int *)puVar4 * 0x55ec] * 0x10)) {
		uVar20 = 3;
	}
	uVar21 = (undefined4)uVar20;
	pbVar12 = abStack120;
	ADD_PlrStringXY(0x5f, 0x9b, 0x7e, pbVar12, uVar20, uVar14, uVar15, in_r10, in_stack_ffffff58);
	puVar13 = puVar5 + 0x16c;
	uVar20 = 0;
	sprintf((int)abStack120, uVar8, *(undefined4 *)(puVar13 + *(int *)puVar4 * 0x55ec), pbVar12,
	    uVar21, (int)uVar14, uVar15, in_r10, in_stack_ffffff58, in_stack_ffffff5f,
	    in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78,
	    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	if (*(int *)(puVar13 + *(int *)puVar4 * 0x55ec) == *(int *)(puVar6 + (int)(char)puVar29[*(int *)puVar4 * 0x55ec] * 0x10 + 4)) {
		uVar20 = 3;
	}
	uVar21 = (undefined4)uVar20;
	pbVar12 = abStack120;
	ADD_PlrStringXY(0x5f, 0xb7, 0x7e, pbVar12, uVar20, uVar14, uVar15, in_r10, in_stack_ffffff58);
	puVar27 = puVar5 + 0x174;
	uVar20 = 0;
	sprintf((int)abStack120, uVar8, *(undefined4 *)(puVar27 + *(int *)puVar4 * 0x55ec), pbVar12,
	    uVar21, (int)uVar14, uVar15, in_r10, in_stack_ffffff58, in_stack_ffffff5f,
	    in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78,
	    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	if (*(int *)(puVar27 + *(int *)puVar4 * 0x55ec) == *(int *)(puVar6 + (int)(char)puVar29[*(int *)puVar4 * 0x55ec] * 0x10 + 8)) {
		uVar20 = 3;
	}
	uVar21 = (undefined4)uVar20;
	pbVar12 = abStack120;
	ADD_PlrStringXY(0x5f, 0xd3, 0x7e, pbVar12, uVar20, uVar14, uVar15, in_r10, in_stack_ffffff58);
	puVar24 = puVar5 + 0x17c;
	uVar20 = 0;
	sprintf((int)abStack120, uVar8, *(undefined4 *)(puVar24 + *(int *)puVar4 * 0x55ec), pbVar12,
	    uVar21, (int)uVar14, uVar15, in_r10, in_stack_ffffff58, in_stack_ffffff5f,
	    in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78,
	    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	if (*(int *)(puVar24 + *(int *)puVar4 * 0x55ec) == *(int *)(puVar6 + (int)(char)puVar29[*(int *)puVar4 * 0x55ec] * 0x10 + 0xc)) {
		uVar20 = 3;
	}
	uVar21 = (undefined4)uVar20;
	pbVar12 = abStack120;
	ADD_PlrStringXY(0x5f, 0xef, 0x7e, pbVar12, uVar20, uVar14, uVar15, in_r10, in_stack_ffffff58);
	iVar26 = *(int *)(puVar5 + *(int *)puVar4 * 0x55ec + 0x160);
	uVar19 = (ulonglong)(*(int *)(puVar17 + *(int *)puVar4 * 0x55ec) < iVar26);
	if (iVar26 < *(int *)(puVar17 + *(int *)puVar4 * 0x55ec)) {
		uVar19 = 2;
	}
	uVar22 = (undefined4)uVar19;
	sprintf((int)abStack120, uVar8, iVar26, pbVar12, uVar21, (int)uVar14, uVar15, in_r10,
	    in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70,
	    in_stack_ffffff74, in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80,
	    in_stack_ffffff84);
	pbVar12 = abStack120;
	ADD_PlrStringXY(0x8f, 0x9b, 0xad, pbVar12, uVar19, uVar14, uVar15, in_r10, in_stack_ffffff58);
	iVar26 = *(int *)(puVar5 + *(int *)puVar4 * 0x55ec + 0x168);
	uVar19 = (ulonglong)(*(int *)(puVar13 + *(int *)puVar4 * 0x55ec) < iVar26);
	if (iVar26 < *(int *)(puVar13 + *(int *)puVar4 * 0x55ec)) {
		uVar19 = 2;
	}
	uVar21 = (undefined4)uVar19;
	sprintf((int)abStack120, uVar8, iVar26, pbVar12, uVar22, (int)uVar14, uVar15, in_r10,
	    in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70,
	    in_stack_ffffff74, in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80,
	    in_stack_ffffff84);
	pbVar12 = abStack120;
	ADD_PlrStringXY(0x8f, 0xb7, 0xad, pbVar12, uVar19, uVar14, uVar15, in_r10, in_stack_ffffff58);
	iVar26 = *(int *)(puVar28 + *(int *)puVar4 * 0x55ec);
	uVar19 = (ulonglong)(*(int *)(puVar27 + *(int *)puVar4 * 0x55ec) < iVar26);
	if (iVar26 < *(int *)(puVar27 + *(int *)puVar4 * 0x55ec)) {
		uVar19 = 2;
	}
	uVar22 = (undefined4)uVar19;
	sprintf((int)abStack120, uVar8, iVar26, pbVar12, uVar21, (int)uVar14, uVar15, in_r10,
	    in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70,
	    in_stack_ffffff74, in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80,
	    in_stack_ffffff84);
	pbVar12 = abStack120;
	ADD_PlrStringXY(0x8f, 0xd3, 0xad, pbVar12, uVar19, uVar14, uVar15, in_r10, in_stack_ffffff58);
	iVar26 = *(int *)(puVar5 + *(int *)puVar4 * 0x55ec + 0x178);
	uVar19 = (ulonglong)(*(int *)(puVar24 + *(int *)puVar4 * 0x55ec) < iVar26);
	if (iVar26 < *(int *)(puVar24 + *(int *)puVar4 * 0x55ec)) {
		uVar19 = 2;
	}
	uVar21 = (undefined4)uVar19;
	sprintf((int)abStack120, uVar8, iVar26, pbVar12, uVar22, (int)uVar14, uVar15, in_r10,
	    in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70,
	    in_stack_ffffff74, in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80,
	    in_stack_ffffff84);
	pbVar12 = abStack120;
	ADD_PlrStringXY(0x8f, 0xef, 0xad, pbVar12, uVar19, uVar14, uVar15, in_r10, in_stack_ffffff58);
	puVar28 = puVar5 + 0x180;
	if (0 < *(int *)(puVar28 + *(int *)puVar4 * 0x55ec)) {
		lVar11 = CalcStatDiff(*(int *)puVar4);
		if ((int)lVar11 < *(int *)(puVar28 + *(int *)puVar4 * 0x55ec)) {
			lVar11 = CalcStatDiff(*(int *)puVar4);
			*(int *)(puVar28 + *(int *)puVar4 * 0x55ec) = (int)lVar11;
		}
	}
	if (0 < *(int *)(puVar28 + *(int *)puVar4 * 0x55ec)) {
		sprintf((int)abStack120, uVar8, *(int *)(puVar28 + *(int *)puVar4 * 0x55ec), pbVar12, uVar21,
		    (int)uVar14, uVar15, in_r10, in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c,
		    in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78, in_stack_ffffff7c,
		    in_stack_ffffff80, in_stack_ffffff84);
		pbVar12 = abStack120;
		uVar21 = 2;
		ADD_PlrStringXY(0x5f, 0x10a, 0x7e, pbVar12, 2, uVar14, uVar15, in_r10, in_stack_ffffff58);
		cVar1 = puVar29[*(int *)puVar4 * 0x55ec];
		if (*(int *)(puVar17 + *(int *)puVar4 * 0x55ec) < *(int *)(puVar6 + (int)cVar1 * 0x10)) {
			pbVar12 = (byte *)((ulonglong) * (uint *)puVar7 + 2);
			uVar21 = 0x29;
			CelDecodeOnly(0xc9, 0x13f, ZEXT48(ppuVar10[-0x13eb]), (ulonglong) * (uint *)puVar7 + 2, 0x29,
			    (int)uVar14, uVar15, in_r10, in_stack_ffffff58);
		}
		iVar26 = (int)cVar1 * 0x10;
		if (*(int *)(puVar13 + *(int *)puVar4 * 0x55ec) < *(int *)(puVar6 + iVar26 + 4)) {
			pbVar12 = (byte *)((ulonglong) * (uint *)(puVar7 + 4) + 4);
			uVar21 = 0x29;
			CelDecodeOnly(0xc9, 0x15b, ZEXT48(ppuVar10[-0x13eb]), (ulonglong) * (uint *)(puVar7 + 4) + 4, 0x29,
			    (int)uVar14, uVar15, in_r10, in_stack_ffffff58);
		}
		if (*(int *)(puVar27 + *(int *)puVar4 * 0x55ec) < *(int *)(puVar6 + iVar26 + 8)) {
			pbVar12 = (byte *)((ulonglong) * (uint *)(puVar7 + 8) + 6);
			uVar21 = 0x29;
			CelDecodeOnly(0xc9, 0x178, ZEXT48(ppuVar10[-0x13eb]), (ulonglong) * (uint *)(puVar7 + 8) + 6, 0x29,
			    (int)uVar14, uVar15, in_r10, in_stack_ffffff58);
		}
		if (*(int *)(puVar24 + *(int *)puVar4 * 0x55ec) < *(int *)(puVar6 + iVar26 + 0xc)) {
			pbVar12 = (byte *)((ulonglong) * (uint *)(puVar7 + 0xc) + 8);
			uVar21 = 0x29;
			CelDecodeOnly(0xc9, 0x194, ZEXT48(ppuVar10[-0x13eb]), (ulonglong) * (uint *)(puVar7 + 0xc) + 8, 0x29,
			    (int)uVar14, uVar15, in_r10, in_stack_ffffff58);
		}
	}
	iVar26 = *(int *)(puVar5 + 0x198 + *(int *)puVar4 * 0x55ec);
	uVar19 = (ulonglong)(*(int *)(puVar5 + *(int *)puVar4 * 0x55ec + 400) < iVar26);
	uVar25 = (uint)(*(int *)(puVar5 + *(int *)puVar4 * 0x55ec + 400) < iVar26);
	sprintf((int)abStack120, uVar8, iVar26 >> 6, pbVar12, uVar21, (int)uVar14, uVar15, in_r10,
	    in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70,
	    in_stack_ffffff74, in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80,
	    in_stack_ffffff84);
	pbVar12 = abStack120;
	ADD_PlrStringXY(0x5f, 0x130, 0x7e, pbVar12, uVar19, uVar14, uVar15, in_r10, in_stack_ffffff58);
	if (*(int *)(puVar5 + *(int *)puVar4 * 0x55ec + 0x194) != *(int *)(puVar5 + 0x198 + *(int *)puVar4 * 0x55ec)) {
		uVar19 = 2;
	}
	uVar21 = (undefined4)uVar19;
	sprintf((int)abStack120, uVar8, *(int *)(puVar5 + *(int *)puVar4 * 0x55ec + 0x194) >> 6, pbVar12, uVar25, (int)uVar14, uVar15, in_r10, in_stack_ffffff58, in_stack_ffffff5f,
	    in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78,
	    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	pbVar12 = abStack120;
	ADD_PlrStringXY(0x8f, 0x130, 0xae, pbVar12, uVar19, uVar14, uVar15, in_r10, in_stack_ffffff58);
	iVar26 = *(int *)(puVar5 + 0x1ac + *(int *)puVar4 * 0x55ec);
	uVar19 = (ulonglong)(*(int *)(puVar5 + *(int *)puVar4 * 0x55ec + 0x1a4) < iVar26);
	uVar25 = (uint)(*(int *)(puVar5 + *(int *)puVar4 * 0x55ec + 0x1a4) < iVar26);
	sprintf((int)abStack120, uVar8, iVar26 >> 6, pbVar12, uVar21, (int)uVar14, uVar15, in_r10,
	    in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70,
	    in_stack_ffffff74, in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80,
	    in_stack_ffffff84);
	pbVar12 = abStack120;
	ADD_PlrStringXY(0x5f, 0x14c, 0x7e, pbVar12, uVar19, uVar14, uVar15, in_r10, in_stack_ffffff58);
	if (*(int *)(puVar5 + *(int *)puVar4 * 0x55ec + 0x1a8) != *(int *)(puVar5 + 0x1ac + *(int *)puVar4 * 0x55ec)) {
		uVar19 = 2;
	}
	sprintf((int)abStack120, uVar8, *(int *)(puVar5 + *(int *)puVar4 * 0x55ec + 0x1a8) >> 6, pbVar12, uVar25, (int)uVar14, uVar15, in_r10, in_stack_ffffff58, in_stack_ffffff5f,
	    in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78,
	    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	ADD_PlrStringXY(0x8f, 0x14c, 0xae, abStack120, uVar19, uVar14, uVar15, in_r10, in_stack_ffffff58);
	return;
}

void CheckLvlBtn(void)

{
	if (*(int *)PTR_DAT_100f18f8 != 0) {
		return;
	}
	if (*(int *)PTR_DAT_100f1928 < 0x28) {
		return;
	}
	if (0x51 < *(int *)PTR_DAT_100f1928) {
		return;
	}
	if (*(int *)PTR_DAT_100f1924 < 0x139) {
		return;
	}
	if (0x14f < *(int *)PTR_DAT_100f1924) {
		return;
	}
	*(undefined4 *)PTR_DAT_100f18f8 = 1;
	return;
}

void ReleaseLvlBtn(void)

{
	if ((((0x27 < *(int *)PTR_DAT_100f1928) && (*(int *)PTR_DAT_100f1928 < 0x52)) && (0x138 < *(int *)PTR_DAT_100f1924)) && (*(int *)PTR_DAT_100f1924 < 0x150)) {
		*(undefined4 *)PTR_DAT_100f180c = 1;
	}
	*(undefined4 *)PTR_DAT_100f18f8 = 0;
	return;
}

void DrawLevelUpIcon(void)

{
	undefined **ppuVar1;
	undefined8 in_r8;
	undefined4 uVar2;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined8 uVar3;
	undefined4 in_stack_ffffffc8;

	uVar2 = (undefined4)in_r8;
	ppuVar1 = &toc;
	if (*PTR_DAT_100f186c == '\0') {
		if (*(int *)PTR_DAT_100f18f8 == 0) {
			uVar3 = 2;
		} else {
			uVar3 = 3;
		}
		ADD_PlrStringXY(0, 0x12f, 0x78, _DAT_100f2a8c, 0, in_r8, in_r9, in_r10, in_stack_ffffffc8);
		CelDecodeOnly(0x68, 0x1ef, ZEXT48(ppuVar1[-0x13eb]), uVar3, 0x29, uVar2, in_r9, in_r10, in_stack_ffffffc8);
	}
	return;
}

void CheckChrBtns(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	undefined *puVar7;
	int *piVar8;
	int *piVar9;
	undefined *puVar10;
	int *piVar11;
	undefined4 *puVar12;
	int iVar13;
	int iVar14;
	longlong lVar15;

	puVar7 = PTR_DAT_100f18e4;
	if ((*(int *)PTR_DAT_100f18e4 == 0) && (puVar10 = PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec, *(int *)(puVar10 + 0x180) != 0)) {
		lVar15 = 2;
		piVar11 = (int *)&DAT_100f63e0;
		piVar8 = (int *)(PTR_DAT_100f1870 + (int)(char)puVar10[0x15c] * 0x10);
		iVar1 = *(int *)(puVar10 + 0x164);
		iVar13 = 0;
		iVar2 = *(int *)(puVar10 + 0x16c);
		iVar3 = *(int *)(puVar10 + 0x174);
		iVar4 = *(int *)(puVar10 + 0x17c);
		iVar5 = *(int *)PTR_DAT_100f1928;
		iVar6 = *(int *)PTR_DAT_100f1924;
		puVar12 = (undefined4 *)PTR_DAT_100f18e8;
		do {
			if (iVar13 == 2) {
				if (iVar3 < *piVar8)
					goto LAB_1001fe80;
			} else {
				if (iVar13 < 2) {
					if (iVar13 == 0) {
						if (iVar1 < *piVar8)
							goto LAB_1001fe80;
					} else {
						if ((-1 < iVar13) && (iVar2 < *piVar8)) {
						LAB_1001fe80:
							if ((*piVar11 <= iVar5) && (((iVar5 <= *piVar11 + piVar11[2] && (piVar11[1] <= iVar6)) && (iVar6 <= piVar11[1] + piVar11[3])))) {
								*puVar12 = 1;
								*(undefined4 *)puVar7 = 1;
							}
						}
					}
				} else {
					if ((iVar13 < 4) && (iVar4 < *piVar8))
						goto LAB_1001fe80;
				}
			}
			iVar14 = iVar13 + 1;
			piVar9 = piVar8 + 1;
			if (iVar14 == 2) {
				if (iVar3 < *piVar9)
					goto LAB_1001ff38;
			} else {
				if (iVar14 < 2) {
					if (iVar13 == -1) {
						if (iVar1 < *piVar9)
							goto LAB_1001ff38;
					} else {
						if ((-1 < iVar14) && (iVar2 < *piVar9)) {
						LAB_1001ff38:
							if ((piVar11[4] <= iVar5) && (((iVar5 <= piVar11[4] + piVar11[6] && (piVar11[5] <= iVar6)) && (iVar6 <= piVar11[5] + piVar11[7])))) {
								puVar12[1] = 1;
								*(undefined4 *)puVar7 = 1;
							}
						}
					}
				} else {
					if ((iVar14 < 4) && (iVar4 < *piVar9))
						goto LAB_1001ff38;
				}
			}
			piVar8 = piVar8 + 2;
			piVar11 = piVar11 + 8;
			puVar12 = puVar12 + 2;
			iVar13 = iVar13 + 2;
			lVar15 = lVar15 + -1;
		} while (lVar15 != 0);
	}
	return;
}

void ReleaseChrBtns(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	int iVar5;
	undefined8 in_r6;
	undefined8 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int iVar6;
	int *piVar7;
	int *piVar8;
	undefined4 in_stack_ffffffa8;

	puVar4 = PTR_DAT_100f1928;
	puVar3 = PTR_DAT_100f1924;
	piVar8 = (int *)PTR_DAT_100f18e8;
	puVar2 = PTR_DAT_100f1828;
	puVar1 = PTR_DAT_100f1824;
	iVar6 = 0;
	piVar7 = (int *)&DAT_100f63e0;
	*(undefined4 *)PTR_DAT_100f18e4 = 0;
	do {
		if (*piVar8 != 0) {
			*piVar8 = 0;
			if ((*piVar7 <= *(int *)puVar4) && (*(int *)puVar4 <= *piVar7 + piVar7[2])) {
				if ((piVar7[1] <= *(int *)puVar3) && (*(int *)puVar3 <= piVar7[1] + piVar7[3])) {
					if (iVar6 == 2) {
						NetSendCmdParam1(1, 5, 1, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffa8);
						iVar5 = *(int *)puVar1 * 0x55ec + 0x180;
						*(int *)(puVar2 + iVar5) = *(int *)(puVar2 + iVar5) + -1;
					} else {
						if (iVar6 < 2) {
							if (iVar6 == 0) {
								NetSendCmdParam1(1, 3, 1, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffa8);
								iVar5 = *(int *)puVar1 * 0x55ec + 0x180;
								*(int *)(puVar2 + iVar5) = *(int *)(puVar2 + iVar5) + -1;
							} else {
								if (-1 < iVar6) {
									NetSendCmdParam1(1, 4, 1, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffa8);
									iVar5 = *(int *)puVar1 * 0x55ec + 0x180;
									*(int *)(puVar2 + iVar5) = *(int *)(puVar2 + iVar5) + -1;
								}
							}
						} else {
							if (iVar6 < 4) {
								NetSendCmdParam1(1, 6, 1, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffa8);
								iVar5 = *(int *)puVar1 * 0x55ec + 0x180;
								*(int *)(puVar2 + iVar5) = *(int *)(puVar2 + iVar5) + -1;
							}
						}
					}
				}
			}
		}
		iVar6 = iVar6 + 1;
		piVar7 = piVar7 + 4;
		piVar8 = piVar8 + 1;
	} while (iVar6 < 4);
	return;
}

longlong DrawDurIcon4Item(int param_1, longlong param_2, longlong param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined4 in_stack_ffffffc8;

	iVar1 = *(int *)(param_1 + 8);
	if ((iVar1 != -1) && (*(int *)(param_1 + 0xec) < 6)) {
		if ((int)param_3 == 0) {
			if (*(char *)(param_1 + 0xbe) == '\x01') {
				if (iVar1 == 4) {
					param_3 = 5;
				} else {
					if (iVar1 < 4) {
						if (iVar1 == 2) {
							param_3 = 6;
						} else {
							if (iVar1 < 2) {
								if (0 < iVar1) {
									param_3 = 2;
								}
							} else {
								param_3 = 7;
							}
						}
					} else {
						if (iVar1 == 10) {
							param_3 = 8;
						}
					}
				}
			} else {
				param_3 = 1;
			}
		}
		if (2 < *(int *)(param_1 + 0xec)) {
			param_3 = param_3 + 8;
		}
		CelDecodeOnly((int)param_2, 0x1ef, (ulonglong)_DAT_100f400c, param_3, 0x20, param_6, param_7, param_8,
		    in_stack_ffffffc8);
		param_2 = param_2 + -0x28;
	}
	return param_2;
}

void DrawDurIcon(void)

{
	undefined *puVar1;
	longlong lVar2;
	ulonglong uVar3;
	undefined8 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;

	if (((*(int *)PTR_DAT_100f180c == 0) && (*(int *)PTR_DAT_100f1808 == 0)) || ((*(int *)PTR_DAT_100f1814 == 0 && (*(int *)PTR_DAT_100f1810 == 0)))) {
		lVar2 = 0x290;
		if ((*(int *)PTR_DAT_100f1814 != 0) || (*(int *)PTR_DAT_100f1810 != 0)) {
			lVar2 = 0x150;
		}
		uVar3 = ZEXT48(PTR_DAT_100f1828);
		puVar1 = PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec;
		lVar2 = DrawDurIcon4Item((int)(puVar1 + 0x498), lVar2, 4, uVar3, in_r7, in_r8, in_r9, in_r10,
		    in_stack_ffffffc8);
		lVar2 = DrawDurIcon4Item((int)(puVar1 + 0xd38), lVar2, 3, uVar3, in_r7, in_r8, in_r9, in_r10,
		    in_stack_ffffffc8);
		lVar2 = DrawDurIcon4Item((int)(puVar1 + 0xa58), lVar2, 0, uVar3, in_r7, in_r8, in_r9, in_r10,
		    in_stack_ffffffc8);
		DrawDurIcon4Item((int)(puVar1 + 0xbc8), lVar2, 0, uVar3, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffc8);
	}
	return;
}

void RedBack(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	byte *pbVar2;
	longlong lVar3;
	byte bVar4;
	longlong lVar5;
	byte *local_18;
	int local_14;
	byte *local_10[4];

	if (*(int *)PTR_DAT_100f1864 == 0) {
		local_14 = 0x1200;
	} else {
		local_14 = 0x600;
	}
	if (*PTR_DAT_100f183c == '\x04') {
		lVar5 = 0x160;
		local_10[0] = (byte *)(*(int *)PTR_DAT_100f17cc + 0x1e040);
		iVar1 = *(int *)PTR_DAT_100f1860;
		do {
			lVar3 = 0x280;
			pbVar2 = local_10[0];
			do {
				local_10[0] = pbVar2;
				bVar4 = *local_10[0];
				if (0x1f < bVar4) {
					bVar4 = *(byte *)(iVar1 + local_14 + (uint)bVar4);
				}
				lVar3 = lVar3 + -1;
				*local_10[0] = bVar4;
				pbVar2 = local_10[0] + 1;
			} while (lVar3 != 0);
			lVar5 = lVar5 + -1;
			local_10[0] = local_10[0] + 0x81;
		} while (lVar5 != 0);
	} else {
		lVar5 = 0x160;
		local_10[0] = (byte *)(*(int *)PTR_DAT_100f17cc + 0x1e040);
		local_14 = *(int *)PTR_DAT_100f1860 + local_14;
		do {
			local_18 = local_10[0];
			FUN_100c996c(local_10, &local_18, local_14, 0x280);
			lVar5 = lVar5 + -1;
			local_10[0] = local_10[0] + 0x80;
		} while (lVar5 != 0);
	}
	return;
}

void PrintSBookStr(longlong param_1, int param_2, int param_3, longlong param_4, undefined8 param_5,
    undefined8 param_6, int param_7, int param_8, undefined4 param_9)

{
	byte bVar1;
	longlong lVar2;
	byte *pbVar3;
	undefined8 uVar4;
	ulonglong uVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	ulonglong uVar9;
	undefined4 in_stack_ffffffa8;

	lVar7 = (longlong)param_8;
	lVar6 = (longlong)param_7;
	uVar5 = ZEXT48(PTR_DAT_100f1938);
	uVar9 = 0;
	param_1 = param_1 + (ulonglong) * (uint *)(PTR_DAT_100f1938 + param_2 * 4) + 0x1b8;
	uVar4 = param_5;
	lVar8 = param_4;
	if (param_3 != 0) {
		lVar2 = 0;
		lVar8 = param_4;
		while (true) {
			pbVar3 = (byte *)lVar8;
			if (*pbVar3 == 0)
				break;
			lVar8 = lVar8 + 1;
			lVar2 = (ulonglong)(byte)(&DAT_100f6230)
			            [(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar3]]]
			    + lVar2 + 1;
		}
		if ((int)lVar2 < 0xde) {
			uVar9 = (ulonglong)(uint)(0xde - (int)lVar2 >> 1);
		}
		param_1 = param_1 + uVar9;
		uVar4 = param_5;
		lVar8 = param_4;
	}
	while (true) {
		pbVar3 = (byte *)lVar8;
		if (*pbVar3 == 0)
			break;
		lVar8 = lVar8 + 1;
		bVar1 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar3]];
		uVar9 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + uVar9 + 1;
		if (bVar1 != 0) {
			if ((int)uVar9 < 0xdf) {
				CPrintString(param_1, (ulonglong)bVar1, param_5, param_4, uVar4, (int)uVar5, (int)lVar6, (int)lVar7, in_stack_ffffffa8);
			}
		}
		param_1 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + param_1 + 1;
	}
	return;
}

undefined8
GetSBookTrans(int param_1, int param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	uint uVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	ulonglong uVar8;
	undefined8 uVar9;
	ulonglong uVar10;
	longlong lVar11;
	undefined8 uVar12;
	undefined4 in_stack_ffffffa8;

	puVar6 = PTR_DAT_100f1828;
	puVar5 = PTR_DAT_100f1824;
	ppuVar7 = &toc;
	uVar12 = 1;
	uVar10 = 1;
	uVar8 = SetCursorPos(0, 1, (longlong)param_1 + -1, param_4, param_5, param_6);
	uVar1 = *(uint *)puVar5;
	lVar11 = (ulonglong)uVar1 * 0x55ec;
	iVar4 = (int)lVar11;
	uVar2 = *(uint *)(puVar6 + iVar4 + 0x5564);
	if ((uVar10 & (ulonglong)uVar2 | uVar8 & (ulonglong) * (uint *)(puVar6 + iVar4 + 0x5560)) != 0) {
		uVar12 = 3;
	}
	uVar3 = 1 << (longlong)param_1 + -1;
	if ((uVar3 & *(uint *)(puVar6 + iVar4 + 0x110) | (int)uVar3 >> 0x1f & *(uint *)(puVar6 + iVar4 + 0x10c)) != 0) {
		uVar12 = 0;
	}
	if ((char)uVar12 == '\x01') {
		uVar9 = CheckSpell(uVar1, param_1, '\x01', 1, (char)uVar2, (char)lVar11, param_7, param_8,
		    in_stack_ffffffa8);
		if ((int)uVar9 == 0) {
			uVar12 = 4;
		}
		if ((char)((puVar6 + *(int *)puVar5 * 0x55ec)[param_1 + 0xc1] + (puVar6 + *(int *)puVar5 * 0x55ec)[0x5570]) < '\x01') {
			uVar12 = 4;
		}
	}
	if ((((param_2 != 0) && (*ppuVar7[-0x1df9] == '\0')) && ((char)uVar12 != '\x04')) && (*(int *)(ppuVar7[-0x1da7] + param_1 * 0x38 + 0x18) == 0)) {
		uVar12 = 4;
	}
	return uVar12;
}

void DrawSpellBook(void)

{
	uint uVar1;
	uint uVar2;
	uint uVar3;
	uint uVar4;
	uint uVar5;
	uint uVar6;
	uint uVar7;
	int iVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined *puVar12;
	undefined4 uVar13;
	undefined4 uVar14;
	undefined4 uVar15;
	undefined4 uVar16;
	int iVar17;
	undefined4 uVar18;
	ulonglong uVar19;
	ulonglong uVar20;
	ulonglong uVar21;
	undefined8 uVar22;
	longlong lVar23;
	ulonglong uVar24;
	char cVar26;
	undefined uVar27;
	int iVar25;
	uint uVar28;
	int iVar29;
	undefined *puVar30;
	ulonglong uVar31;
	undefined4 uVar32;
	undefined4 in_r8;
	longlong lVar33;
	undefined4 in_r9;
	undefined4 in_r10;
	ulonglong uVar34;
	int iVar35;
	int iVar36;
	longlong lVar37;
	ulonglong uVar38;
	undefined4 in_stack_ffffff78;
	undefined in_stack_ffffff7f;
	undefined4 in_stack_ffffff8c;
	undefined4 in_stack_ffffff90;
	undefined4 in_stack_ffffff94;
	undefined4 in_stack_ffffff98;
	undefined4 in_stack_ffffff9c;
	undefined4 in_stack_ffffffa0;
	undefined4 in_stack_ffffffa4;
	undefined4 local_58;
	int local_54;

	uVar18 = _DAT_100f2b4c;
	iVar17 = _DAT_100f2a88;
	uVar16 = _DAT_100f2a84;
	uVar15 = _DAT_100f2a80;
	uVar14 = _DAT_100f2a7c;
	uVar13 = _DAT_100f2a78;
	puVar12 = PTR_DAT_100f191c;
	puVar11 = PTR_DAT_100f18d8;
	puVar10 = PTR_DAT_100f1828;
	puVar9 = PTR_DAT_100f1824;
	uVar19 = ZEXT48(&toc);
	uVar34 = (ulonglong)_DAT_100f2b50;
	uVar38 = ZEXT48(PTR_DAT_100f191c);
	CelDecodeOnly(0x180, 0x1ff, (ulonglong)_DAT_100f4008, 1, 0x140, in_r8, in_r9, in_r10, in_stack_ffffff78);
	uVar20 = (ulonglong) * (uint *)puVar11;
	lVar33 = uVar20 * 0x4c;
	CelDecodeOnly((int)lVar33 + 0x187, 0x1fc, (ulonglong) * (uint *)((int)uVar19 + -0x4fcc), uVar20 + 1, 0x4c, (int)lVar33, in_r9, in_r10, in_stack_ffffff78);
	lVar37 = 0xd7;
	iVar36 = 1;
	puVar30 = puVar10 + *(int *)puVar9 * 0x55ec;
	uVar1 = *(uint *)(puVar30 + 0x5560);
	iVar35 = 4;
	uVar2 = *(uint *)(puVar30 + 0x104);
	uVar3 = *(uint *)(puVar30 + 0x5564);
	uVar20 = (ulonglong)uVar3;
	uVar4 = *(uint *)(puVar30 + 0x108);
	uVar31 = (ulonglong)uVar4;
	uVar5 = *(uint *)(puVar30 + 0x10c);
	uVar6 = *(uint *)(puVar30 + 0x110);
	do {
		uVar7 = *(uint *)(*(int *)puVar11 * 0x1c + iVar35 + 0x100f641c);
		if (uVar7 != 0xffffffff) {
			cVar26 = (char)uVar7 + -1;
			uVar24 = 1;
			uVar21 = SetCursorPos(0);
			if (((ulonglong)(uVar6 | uVar3 | uVar4) & uVar24 | (ulonglong)(uVar5 | uVar1 | uVar2) & uVar21) != 0) {
				uVar22 = GetSBookTrans(uVar7, 1, cVar26, (char)uVar20, (char)uVar31, (char)lVar33, (char)in_r9,
				    (char)in_r10, in_stack_ffffff78);
				SetSpellTrans((char)uVar22);
				DrawSpellCel(0x18b, lVar37, (ulonglong) * (uint *)((int)uVar19 + -0x4fd0),
				    (longlong) * (char *)((int)uVar19 + -0x2cf8 + uVar7), 0x25, (int)lVar33, in_r9,
				    in_r10, in_stack_ffffff78);
				if ((uVar7 == *(uint *)(puVar10 + *(int *)puVar9 * 0x55ec + 0xb4)) && ((char)uVar22 == (puVar10 + *(int *)puVar9 * 0x55ec)[0xb8])) {
					SetSpellTrans('\0');
					DrawSpellCel(0x18b, lVar37, (ulonglong) * (uint *)((int)uVar19 + -0x4fd0), 0x2b, 0x25,
					    (int)lVar33, in_r9, in_r10, in_stack_ffffff78);
				}
				iVar8 = (int)lVar37;
				uVar27 = 0;
				uVar28 = *(uint *)(*(int *)((int)uVar19 + -0x769c) + uVar7 * 0x38 + 4);
				uVar32 = 0;
				PrintSBookStr(10, iVar8 + -0x17, 0, (ulonglong)uVar28, 0, lVar33, in_r9, in_r10, in_stack_ffffff78);
				uVar22 = GetSBookTrans(uVar7, 0, uVar27, (char)uVar28, (char)uVar32, (char)lVar33, (char)in_r9,
				    (char)in_r10, in_stack_ffffff78);
				cVar26 = (char)uVar22;
				if (cVar26 == '\x03') {
					sprintf((int)puVar12, uVar16,
					    *(undefined4 *)(puVar10 + *(int *)puVar9 * 0x55ec + 0xb3c), uVar28, uVar32,
					    (int)lVar33, in_r9, in_r10, in_stack_ffffff78, in_stack_ffffff7f,
					    in_stack_ffffff8c, in_stack_ffffff90, in_stack_ffffff94, in_stack_ffffff98,
					    in_stack_ffffff9c, in_stack_ffffffa0, in_stack_ffffffa4);
				} else {
					if ((cVar26 < '\x03') && (cVar26 == '\0')) {
						strcpy((int)puVar12, iVar17);
					} else {
						lVar23 = GetManaAmount(*(int *)puVar9, uVar7);
						iVar25 = (int)lVar23 >> 6;
						GetDamageAmt(uVar7);
						if (local_54 == -1) {
							iVar29 = local_54;
							sprintf((int)puVar12, uVar14, iVar25, 0xffffffff, uVar32, (int)lVar33, in_r9, in_r10,
							    in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8c, in_stack_ffffff90,
							    in_stack_ffffff94, in_stack_ffffff98, in_stack_ffffff9c, in_stack_ffffffa0,
							    in_stack_ffffffa4);
						} else {
							iVar29 = local_54;
							uVar32 = local_58;
							sprintf((int)puVar12, uVar15, iVar25, local_54, local_58, (int)lVar33, in_r9, in_r10,
							    in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8c, in_stack_ffffff90,
							    in_stack_ffffff94, in_stack_ffffff98, in_stack_ffffff9c, in_stack_ffffffa0,
							    in_stack_ffffffa4);
						}
						if (uVar7 == 0x24) {
							sprintf((int)puVar12, uVar13, iVar25, iVar29, uVar32, (int)lVar33, in_r9, in_r10,
							    in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8c, in_stack_ffffff90,
							    in_stack_ffffff94, in_stack_ffffff98, in_stack_ffffff9c, in_stack_ffffffa0,
							    in_stack_ffffffa4);
						}
						uVar32 = 0;
						puVar30 = puVar12;
						PrintSBookStr(10, iVar8 + -1, 0, uVar38, 0, lVar33, in_r9, in_r10, in_stack_ffffff78);
						lVar23 = (longlong)(char)(puVar10 + *(int *)puVar9 * 0x55ec)[uVar7 + 0xc1] + (longlong)(char)(puVar10 + *(int *)puVar9 * 0x55ec)[0x5570];
						iVar25 = (int)lVar23;
						if (lVar23 < 0) {
							iVar25 = 0;
						}
						if (iVar25 == 0) {
							sprintf((int)puVar12, (int)uVar34, 0, puVar30, uVar32, (int)lVar33, in_r9, in_r10,
							    in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8c, in_stack_ffffff90,
							    in_stack_ffffff94, in_stack_ffffff98, in_stack_ffffff9c, in_stack_ffffffa0,
							    in_stack_ffffffa4);
						} else {
							sprintf((int)puVar12, uVar18, iVar25, puVar30, uVar32, (int)lVar33, in_r9, in_r10,
							    in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8c, in_stack_ffffff90,
							    in_stack_ffffff94, in_stack_ffffff98, in_stack_ffffff9c, in_stack_ffffffa0,
							    in_stack_ffffffa4);
						}
					}
				}
				uVar31 = 0;
				uVar20 = uVar38;
				PrintSBookStr(10, iVar8 + -0xc, 0, uVar38, 0, lVar33, in_r9, in_r10, in_stack_ffffff78);
			}
		}
		iVar36 = iVar36 + 1;
		iVar35 = iVar35 + 4;
		lVar37 = lVar37 + 0x2b;
	} while (iVar36 < 8);
	return;
}

void CheckSBook(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	int iVar2;
	int iVar3;
	uint uVar4;
	uint uVar5;
	uint uVar6;
	uint uVar7;
	uint uVar8;
	undefined4 *puVar9;
	uint uVar10;
	uint uVar11;
	undefined *puVar12;
	undefined *puVar13;
	undefined *puVar14;
	undefined **ppuVar15;
	ulonglong uVar16;
	undefined *puVar18;
	ulonglong uVar17;
	undefined uVar19;

	puVar14 = PTR_DAT_100f1924;
	puVar13 = PTR_DAT_100f18d8;
	puVar12 = PTR_DAT_100f1828;
	ppuVar15 = &toc;
	iVar1 = *(int *)PTR_DAT_100f1928;
	if ((((0x14a < iVar1) && (iVar1 < 0x170)) && (iVar2 = *(int *)PTR_DAT_100f1924, 0x11 < iVar2)) && (iVar2 < 0x13a)) {
		iVar3 = *(int *)PTR_DAT_100f1824;
		uVar11 = (iVar2 + -0x12) / 0x2b + (iVar2 + -0x12 >> 0x1f);
		puVar18 = PTR_DAT_100f1828 + iVar3 * 0x55ec;
		uVar4 = *(uint *)(puVar18 + 0x5560);
		uVar5 = *(uint *)(puVar18 + 0x104);
		uVar6 = *(uint *)(puVar18 + 0x5564);
		uVar7 = *(uint *)(puVar18 + 0x108);
		uVar10 = *(uint *)(&DAT_100f6420 + *(int *)PTR_DAT_100f18d8 * 0x1c + (uVar11 + (uVar11 >> 0x1f)) * 4);
		uVar11 = *(uint *)(puVar18 + 0x10c);
		uVar8 = *(uint *)(puVar18 + 0x110);
		if (uVar10 != 0xffffffff) {
			uVar17 = 1;
			uVar16 = SetCursorPos(0, 1, (ulonglong)uVar10 - 1, &DAT_100f6420, param_5, param_6, param_7, param_8);
			if (((ulonglong)(uVar8 | uVar6 | uVar7) & uVar17 | (ulonglong)(uVar11 | uVar4 | uVar5) & uVar16) != 0) {
				uVar19 = 1;
				if ((uVar17 & (ulonglong)uVar6 | uVar16 & (ulonglong)uVar4) != 0) {
					uVar19 = 3;
				}
				if ((uVar17 & (ulonglong)uVar8 | uVar16 & (ulonglong)uVar11) != 0) {
					uVar19 = 0;
				}
				puVar9 = (undefined4 *)ppuVar15[-0x1daf];
				*(uint *)(puVar12 + iVar3 * 0x55ec + 0xb4) = uVar10;
				(puVar12 + iVar3 * 0x55ec)[0xb8] = uVar19;
				*puVar9 = 0xff;
			}
		}
	}
	if (((0x146 < iVar1) && (iVar1 < 0x279)) && ((0x13f < *(int *)puVar14 && (*(int *)puVar14 < 0x15d)))) {
		uVar4 = (iVar1 + -0x147) / 0x4c + (iVar1 + -0x147 >> 0x1f);
		*(uint *)puVar13 = uVar4 + (uVar4 >> 0x1f);
	}
	return;
}

ulonglong get_pieces_str(int param_1)

{
	if (param_1 == 1) {
		return (ulonglong)_DAT_100f2a74;
	}
	return (ulonglong)_DAT_100f2a70;
}

void DrawGoldSplit(int iParm1)

{
	byte bVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	ulonglong uVar5;
	undefined4 uVar6;
	undefined *puVar7;
	byte *pbVar8;
	undefined4 uVar10;
	undefined8 uVar9;
	undefined4 uVar11;
	undefined8 in_r8;
	undefined4 uVar12;
	undefined4 in_r9;
	undefined4 in_r10;
	longlong lVar13;
	int iVar14;
	byte *pbVar15;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	pbVar15 = PTR_DAT_100f191c;
	puVar3 = PTR_DAT_100f18c4;
	puVar2 = PTR_DAT_100f18bc;
	uVar12 = (undefined4)in_r8;
	uVar11 = (undefined4)((ulonglong)in_r8 >> 0x20);
	ppuVar4 = &toc;
	lVar13 = 0;
	uVar6 = 1;
	uVar10 = 0x105;
	CelDecodeOnly(0x19f, 0x152, (ulonglong)_DAT_100f401c, 1, 0x105, uVar12, in_r9, in_r10, in_stack_ffffffa8);
	sprintf((int)pbVar15, ppuVar4[-0x1959], *(undefined4 *)puVar3, uVar6, uVar10, uVar12, in_r9, in_r10,
	    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbc, in_stack_ffffffc0,
	    in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0,
	    in_stack_ffffffd4);
	uVar6 = 3;
	puVar7 = pbVar15;
	ADD_PlrStringXY(0x16e, 0x57, 600, pbVar15, 3, CONCAT44(uVar11, uVar12), in_r9, in_r10, in_stack_ffffffa8);
	uVar5 = get_pieces_str(*(int *)puVar3);
	sprintf((int)pbVar15, ppuVar4[-0x195a], (int)uVar5, puVar7, uVar6, uVar12, in_r9, in_r10,
	    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbc, in_stack_ffffffc0,
	    in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0,
	    in_stack_ffffffd4);
	ADD_PlrStringXY(0x16e, 0x67, 600, pbVar15, 3, CONCAT44(uVar11, uVar12), in_r9, in_r10, in_stack_ffffffa8);
	pbVar8 = ppuVar4[-0x195b];
	uVar9 = 3;
	ADD_PlrStringXY(0x16e, 0x79, 600, pbVar8, 3, CONCAT44(uVar11, uVar12), in_r9, in_r10, in_stack_ffffffa8);
	if (iParm1 < 1) {
		iVar14 = 0x1c2;
	} else {
		sprintf((int)pbVar15, ppuVar4[-0x195c], iParm1, pbVar8, (int)uVar9, uVar12, in_r9, in_r10,
		    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbc, in_stack_ffffffc0,
		    in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0,
		    in_stack_ffffffd4);
		PrintGameStr(0x184, 0x8c, pbVar15, 0, uVar9, uVar12, in_r9, in_r10, in_stack_ffffffa8);
		iVar14 = 0;
		while (bVar1 = *pbVar15, iVar14 < (int)(char)bVar1) {
			pbVar15 = pbVar15 + 1;
			iVar14 = iVar14 + 1;
			lVar13 = (ulonglong)(byte)(&DAT_100f6230)
			             [(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]]]
			    + lVar13 + 1;
		}
		iVar14 = (int)lVar13 + 0x1c4;
	}
	CelDecodeOnly(iVar14, 300, (ulonglong) * (uint *)ppuVar4[-0x1ddd], (ulonglong) * (uint *)puVar2, 0xc, uVar12, in_r9, in_r10, in_stack_ffffffa8);
	*(uint *)puVar2 = (*(uint *)puVar2 & 7) + 1;
	return;
}

void control_drop_gold(char param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	char cVar5;
	int iVar6;
	undefined4 uVar7;
	uint uVar8;
	uint uVar9;
	undefined uVar11;
	longlong lVar10;
	undefined uVar12;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	int local_4c;
	char local_28[20];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	puVar4 = PTR_DAT_100f18cc;
	puVar3 = PTR_DAT_100f18c8;
	puVar2 = PTR_DAT_100f18c4;
	puVar1 = PTR_DAT_100f1824;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	if (*(int *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x194) >> 6 == 0) {
		*(undefined4 *)PTR_DAT_100f18cc = 0;
		*(undefined4 *)puVar3 = 0;
	} else {
		memset(ZEXT48(register0x0000000c) - 0x28, 0, 6, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
		uVar11 = 0xd8;
		uVar12 = 10;
		_itoa((char)*(undefined4 *)puVar3, 0xd8, 10, param_4, param_5, param_6, param_7, param_8,
		    (char)in_stack_ffffffa8, in_stack_ffffffaf, local_4c);
		if (param_1 == '\r') {
			if (0 < *(int *)puVar3) {
				control_remove_gold((ulonglong) * (uint *)puVar1, (ulonglong) * *(uint **)(local_4c + -0x7710), uVar12,
				    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
			}
			*(undefined4 *)puVar4 = 0;
		} else {
			if (param_1 == '\x1b') {
				*(undefined4 *)puVar4 = 0;
				*(undefined4 *)puVar3 = 0;
			} else {
				if (param_1 == '\b') {
					iVar6 = strlen((uint)local_28);
					lVar10 = ZEXT48(register0x0000000c) - 0x29;
					*(undefined *)((int)lVar10 + iVar6) = 0;
					uVar7 = atoi((int)local_28, (char)lVar10, uVar12, param_4, param_5, param_6, param_7,
					    param_8, in_stack_ffffffa8);
					*(undefined4 *)puVar3 = uVar7;
				} else {
					if ((-1 < (longlong)param_1 + -0x30) && ((int)((longlong)param_1 + -0x30) < 10)) {
						if ((*(int *)puVar3 != 0) || (iVar6 = atoi((int)local_28, uVar11, uVar12, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8), cVar5 = param_1, iVar6 <= *(int *)puVar2)) {
							iVar6 = strlen((uint)local_28);
							local_28[iVar6] = param_1;
							iVar6 = atoi((int)local_28, uVar11, uVar12, param_4, param_5, param_6, param_7,
							    param_8, in_stack_ffffffa8);
							if (*(int *)puVar2 < iVar6) {
								return;
							}
							uVar8 = strlen((uint)local_28);
							uVar9 = strlen((uint)local_28);
							cVar5 = local_28[0];
							if (uVar8 < uVar9) {
								return;
							}
						}
						local_28[0] = cVar5;
						uVar7 = atoi((int)local_28, uVar11, uVar12, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
						*(undefined4 *)puVar3 = uVar7;
					}
				}
			}
		}
	}
	return;
}

void control_remove_gold(longlong param_1, longlong param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	int iVar3;
	undefined *puVar4;
	int iVar5;
	int *piVar6;
	undefined uVar7;
	longlong lVar8;
	ulonglong uVar9;
	undefined4 in_stack_ffffffb8;

	puVar4 = PTR_DAT_100f18c8;
	puVar2 = PTR_DAT_100f1828;
	uVar9 = ZEXT48(PTR_DAT_100f1828);
	iVar5 = (int)param_1;
	if ((int)param_2 < 0x2f) {
		uVar7 = (undefined) * (int *)PTR_DAT_100f18c8;
		iVar3 = (int)(param_2 + -7);
		puVar1 = PTR_DAT_100f1828 + iVar3 * 0x170 + iVar5 * 0x55ec;
		*(int *)(puVar1 + 0xf6c) = *(int *)(puVar1 + 0xf6c) - *(int *)PTR_DAT_100f18c8;
		if (*(int *)(puVar1 + 0xf6c) < 1) {
			RemoveInvItem(param_1, param_2 + -7, uVar7, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffb8);
		} else {
			SetGoldCurs(iVar5, iVar3);
		}
	} else {
		iVar3 = (int)param_2 + -0x2f;
		uVar7 = (undefined) * (int *)PTR_DAT_100f18c8;
		puVar1 = PTR_DAT_100f1828 + iVar3 * 0x170 + iVar5 * 0x55ec;
		*(int *)(puVar1 + 0x4918) = *(int *)(puVar1 + 0x4918) - *(int *)PTR_DAT_100f18c8;
		if (*(int *)(puVar1 + 0x4918) < 1) {
			RemoveSpdBarItem(iVar5, iVar3, uVar7, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
		} else {
			SetSpdbarGoldCurs(iVar5, iVar3);
		}
	}
	lVar8 = uVar9 + param_1 * 0x55ec + 0x53d4;
	lVar8._7_1_ = (undefined)lVar8;
	piVar6 = (int *)lVar8;
	SetPlrHandItem((int)piVar6, 0, uVar7, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	GetGoldSeed(iVar5, piVar6, uVar7, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	puVar2 = puVar2 + (int)(param_1 * 0x55ec);
	*(undefined4 *)(puVar2 + 0x5498) = *(undefined4 *)puVar4;
	*(undefined4 *)(puVar2 + 0x5538) = 1;
	control_set_gold_curs(iVar5, (undefined)lVar8, uVar7, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	uVar9 = CalculateGold(iVar5);
	*(int *)(puVar2 + 0x1c8) = (int)uVar9;
	*(undefined4 *)puVar4 = 0;
	return;
}

void control_set_gold_curs(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	int iVar2;
	undefined *puVar3;
	undefined4 in_stack_ffffffc8;

	puVar3 = PTR_DAT_100f1828;
	iVar2 = (int)((longlong)param_1 * 0x55ec);
	puVar1 = PTR_DAT_100f1828 + iVar2;
	if (*(int *)(puVar1 + 0x5498) < 0x9c4) {
		if (*(int *)(puVar1 + 0x5498) < 0x3e9) {
			*(undefined4 *)(puVar1 + 0x5494) = 4;
		} else {
			*(undefined4 *)(puVar1 + 0x5494) = 5;
		}
	} else {
		*(undefined4 *)(puVar1 + 0x5494) = 6;
	}
	NewCursor(*(int *)(puVar3 + iVar2 + 0x5494) + 0xc, (char)puVar3,
	    (char)((longlong)param_1 * 0x55ec), param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	return;
}

byte *control_print_talk_msg(byte *param_1, longlong param_2, int param_3, undefined8 param_4, undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	byte bVar1;
	uint *puVar2;
	undefined8 uVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	undefined4 in_stack_ffffffa8;

	lVar6 = (longlong)param_8;
	lVar5 = (longlong)param_7;
	lVar4 = (longlong)param_6;
	lVar7 = param_2 + 0x108;
	puVar2 = (uint *)param_4;
	*puVar2 = (int)param_2 + *(int *)(PTR_DAT_100f1938 + (param_3 + 0x216) * 4) + 0x108;
	uVar3 = param_5;
	while (true) {
		if (*param_1 == 0) {
			return (byte *)0x0;
		}
		bVar1 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*param_1]];
		lVar7 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + lVar7 + 1;
		if (0x202 < (int)lVar7)
			break;
		param_1 = param_1 + 1;
		if (bVar1 != 0) {
			CPrintString((ulonglong)*puVar2, (ulonglong)bVar1, (longlong)(char)param_5, param_4, uVar3,
			    (int)lVar4, (int)lVar5, (int)lVar6, in_stack_ffffffa8);
		}
		*puVar2 = (uint)(byte)(&DAT_100f6230)[(uint)bVar1] + *puVar2 + 1;
	}
	return param_1;
}

byte *DrawTalkPan(void)

{
	undefined *puVar1;
	ulonglong uVar2;
	byte *pbVar3;
	undefined8 uVar4;
	longlong lVar5;
	undefined8 uVar6;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined8 uVar7;
	int iVar8;
	int iVar9;
	longlong lVar10;
	int *piVar11;
	longlong lVar12;
	int iVar13;
	int iVar14;
	undefined4 in_stack_ffffff98;
	int local_38;

	puVar1 = PTR_DAT_100f1824;
	uVar2 = ZEXT48(&toc);
	pbVar3 = PTR_DAT_100f1900;
	if (*(int *)PTR_DAT_100f1900 != 0) {
		DrawPanelBox(0xaf, _DAT_100f3ff8 + 0x14, 0x126, 5, 0xef, 0x204);
		iVar8 = 0;
		do {
			DrawPanelBox((iVar8 >> 1) + 0xaf, iVar8 + *(int *)((int)uVar2 + -0x4fd8) + 0x19, 0x125 - iVar8, 1, (iVar8 >> 1) + 0xef, iVar8 + 0x209);
			iVar8 = iVar8 + 1;
		} while (iVar8 < 10);
		DrawPanelBox(0xb9, *(int *)((int)uVar2 + -0x4fd8) + 0x23, 0x112, 0x1e, 0xf9, 0x213);
		DrawPanelBox(0xb4, *(int *)((int)uVar2 + -0x4fd8) + 0x41, 0x11c, 5, 0xf4, 0x231);
		iVar8 = 0;
		do {
			DrawPanelBox(0xb4, iVar8 + *(int *)((int)uVar2 + -0x4fd8) + 0x46, iVar8 + 0x11c, 1, 0xf4,
			    iVar8 + 0x236);
			iVar8 = iVar8 + 1;
		} while (iVar8 < 10);
		uVar6 = 0x240;
		DrawPanelBox(0xaa, *(int *)((int)uVar2 + -0x4fd8) + 0x50, 0x136, 0x37, 0xea, 0x240);
		iVar8 = 0;
		pbVar3 = *(byte **)((int)uVar2 + -0x64c4);
		iVar13 = 0;
		do {
			pbVar3 = control_print_talk_msg(pbVar3, 0, iVar13, ZEXT48(register0x0000000c) - 0x38, 0, (int)uVar6, in_r9,
			    in_r10, in_stack_ffffff98);
			if (pbVar3 == (byte *)0x0)
				break;
			iVar8 = iVar8 + 1;
			iVar13 = iVar13 + 0xd;
		} while (iVar8 < 3);
		if (pbVar3 != (byte *)0x0) {
			*pbVar3 = 0;
		}
		iVar8 = (int)uVar2;
		CelDecDatOnly((undefined4 *)(**(uint **)(iVar8 + -0x7804) + local_38),
		    (ulonglong) * *(uint **)(iVar8 + -0x7774), (ulonglong) * (uint *)(iVar8 + -0x4fd4), 0xc,
		    (ulonglong) * *(uint **)(iVar8 + -0x7804), (int)uVar6, in_r9, in_r10, in_stack_ffffff98);
		iVar13 = (int)uVar2;
		iVar14 = 0;
		piVar11 = *(int **)(iVar13 + -0x64c8);
		iVar8 = *(int *)(iVar13 + -0x77a8);
		lVar12 = uVar2 - 0x4fe0;
		pbVar3 = (byte *)(*(uint *)(iVar13 + -0x4fd4) & 7);
		lVar10 = 0x254;
		*(byte **)(iVar13 + -0x4fd4) = pbVar3 + 1;
		iVar13 = 0;
		iVar9 = 0x3c;
		do {
			if (iVar13 != *(int *)puVar1) {
				if (*(char *)lVar12 == '\0') {
					uVar7 = 2;
					if (iVar14 == 0) {
						lVar5 = 1;
					} else {
						lVar5 = 2;
					}
					if (*piVar11 != 0) {
						lVar5 = lVar5 + 4;
					}
					pbVar3 = (byte *)CelDecodeOnly(0xec, lVar10, (ulonglong) * (uint *)((int)uVar2 + -0x4fe8), lVar5, 0x3d, (int)uVar6, in_r9, in_r10, in_stack_ffffff98);
				} else {
					uVar7 = 3;
					if (*piVar11 != 0) {
						if (iVar14 == 0) {
							uVar4 = 3;
						} else {
							uVar4 = 4;
						}
						pbVar3 = (byte *)CelDecodeOnly(0xec, lVar10, (ulonglong) * (uint *)((int)uVar2 + -0x4fe8),
						    uVar4, 0x3d, (int)uVar6, in_r9, in_r10, in_stack_ffffff98);
					}
				}
				if (*(char *)(iVar8 + 0x1d) != '\0') {
					pbVar3 = control_print_talk_msg((byte *)(iVar8 + 0x13c), 0x2e, iVar9, ZEXT48(register0x0000000c) - 0x38, uVar7, (int)uVar6, in_r9, in_r10, in_stack_ffffff98);
				}
				piVar11 = piVar11 + 1;
				lVar10 = lVar10 + 0x12;
				iVar9 = iVar9 + 0x12;
				iVar14 = iVar14 + 1;
			}
			iVar13 = iVar13 + 1;
			iVar8 = iVar8 + 0x55ec;
			lVar12 = lVar12 + 1;
		} while (iVar13 < 4);
	}
	return pbVar3;
}

undefined8 control_check_talk_btn(void)

{
	int iVar1;
	uint uVar2;
	undefined4 *puVar3;

	puVar3 = _DAT_100f2b08;
	if (*(int *)PTR_DAT_100f1900 == 0) {
		return 0;
	}
	if (*(int *)PTR_DAT_100f1928 < 0xac) {
		return 0;
	}
	iVar1 = *(int *)PTR_DAT_100f1924;
	if (iVar1 < 0x1a5) {
		return 0;
	}
	if (0xe9 < *(int *)PTR_DAT_100f1928) {
		return 0;
	}
	if (0x1db < iVar1) {
		return 0;
	}
	*_DAT_100f2b08 = 0;
	uVar2 = (iVar1 + -0x1a5) / 0x12 + (iVar1 + -0x1a5 >> 0x1f);
	puVar3[1] = 0;
	puVar3[2] = 0;
	puVar3[uVar2 + (uVar2 >> 0x1f)] = 1;
	return 1;
}

void control_release_talk_btn(void)

{
	uint uVar1;
	undefined *puVar2;
	undefined4 *puVar3;
	undefined8 uVar4;
	int iVar5;
	int iVar6;

	puVar3 = _DAT_100f2b08;
	puVar2 = PTR_DAT_100f1928;
	if (*(int *)PTR_DAT_100f1900 == 0) {
		return;
	}
	*_DAT_100f2b08 = 0;
	puVar3[1] = 0;
	puVar3[2] = 0;
	if (*(int *)puVar2 < 0xac) {
		return;
	}
	iVar5 = *(int *)PTR_DAT_100f1924;
	if (iVar5 < 0x1a5) {
		return;
	}
	if (0xe9 < *(int *)puVar2) {
		return;
	}
	if (0x1db < iVar5) {
		return;
	}
	uVar1 = (iVar5 + -0x1a5) / 0x12 + (iVar5 + -0x1a5 >> 0x1f);
	iVar6 = uVar1 + (uVar1 >> 0x1f);
	iVar5 = 0;
	while ((iVar5 < 4 && (iVar6 != -1))) {
		if (iVar5 != *(int *)PTR_DAT_100f1824) {
			iVar6 = iVar6 + -1;
		}
		iVar5 = iVar5 + 1;
	}
	if (4 < iVar5) {
		return;
	}
	uVar4 = countLeadingZeros((uint) * (byte *)(iVar5 + 0x100f3fef));
	*(undefined *)(iVar5 + 0x100f3fef) = (char)((uint)uVar4 >> 5);
	return;
}

void control_reset_talk_msg(undefined4 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9, undefined param_10, undefined4 param_11)

{
	undefined *puVar1;
	undefined8 uVar2;
	undefined8 uVar3;
	undefined7 uVar4;
	undefined uVar5;
	undefined7 uVar6;
	undefined uVar7;
	uint uVar8;
	undefined4 in_stack_ffffffc8;

	puVar1 = PTR_DAT_100f2b0c;
	uVar6 = (undefined7)((ulonglong)param_5 >> 8);
	uVar7 = (undefined)param_5;
	uVar4 = (undefined7)((ulonglong)param_4 >> 8);
	uVar5 = (undefined)param_4;
	uVar8 = (uint)(DAT_100f3ff0 != '\0');
	if (cRam100f3ff1 != '\0') {
		uVar8 = uVar8 | 2;
	}
	if (cRam100f3ff2 != '\0') {
		uVar8 = uVar8 | 4;
	}
	uVar3 = 3;
	if (cRam100f3ff3 != '\0') {
		uVar8 = uVar8 | 8;
	}
	uVar2 = msgcmd_add_server_cmd_W(PTR_DAT_100f2b0c, 0xf2, 3, uVar5, uVar7, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffc8);
	if ((int)uVar2 == 0) {
		NetSendCmdString(uVar8, (uint)puVar1, uVar3, CONCAT71(uVar4, uVar5), CONCAT71(uVar6, uVar7), param_6,
		    param_7, param_8, in_stack_ffffffc8);
	}
	return;
}

void control_type_message(void)

{
	undefined *puVar1;
	undefined4 *puVar2;
	undefined *puVar3;

	puVar3 = PTR_DAT_100f2b0c;
	puVar2 = _DAT_100f2b08;
	if (*PTR_DAT_100f17e0 == '\x01') {
		return;
	}
	*(undefined4 *)PTR_DAT_100f1900 = 1;
	puVar1 = PTR_DAT_100f1914;
	_DAT_100f3ff8 = 0x90;
	*puVar3 = 0;
	_DAT_100f3ffc = 1;
	*puVar2 = 0;
	puVar2[1] = 0;
	puVar2[2] = 0;
	*(undefined4 *)puVar1 = 0xff;
	DAT_100f3ff5 = DAT_100f3ff4;
	return;
}

void control_reset_talk(void)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f1914;
	*(undefined4 *)PTR_DAT_100f1900 = 0;
	_DAT_100f3ff8 = 0;
	*(undefined4 *)puVar1 = 0xff;
	return;
}

void control_press_enter(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint uVar1;
	byte *pbVar2;
	undefined *puVar3;
	ulonglong uVar4;
	int iVar5;
	ulonglong uVar6;
	uint uVar7;
	byte *pbVar8;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;

	puVar3 = PTR_DAT_100f2b0c;
	pbVar2 = _DAT_100f2a5c;
	uVar4 = ZEXT48(&toc);
	if (*PTR_DAT_100f2b0c != '\0') {
		control_reset_talk_msg(PTR_DAT_100f2b0c, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8);
		uVar7 = 0;
		pbVar8 = pbVar2;
		do {
			uVar6 = strcmp(pbVar8, puVar3);
			iVar5 = (int)uVar4;
			if ((int)uVar6 == 0)
				break;
			uVar7 = uVar7 + 1;
			pbVar8 = pbVar8 + 0x50;
		} while ((int)uVar7 < 8);
		if ((int)uVar7 < 8) {
			uVar1 = (uint) * (byte *)(iVar5 + -0x4fdc) - 1 & 7;
			if (uVar7 != uVar1) {
				strcpy((int)(pbVar2 + uVar7 * 0x50), (int)(pbVar2 + uVar1 * 0x50));
				strcpy((int)(pbVar2 + uVar1 * 0x50), (int)puVar3);
			}
		} else {
			strcpy((int)(pbVar2 + (uint) * (byte *)(iVar5 + -0x4fdc) * 0x50), (int)puVar3);
			*(char *)(iVar5 + -0x4fdc) = *(char *)(iVar5 + -0x4fdc) + '\x01';
			*(byte *)(iVar5 + -0x4fdc) = *(byte *)(iVar5 + -0x4fdc) & 7;
		}
		*(undefined *)(iVar5 + -0x4fdb) = *(undefined *)(iVar5 + -0x4fdc);
		*puVar3 = 0;
	}
	control_reset_talk();
	return;
}

undefined8
control_talk_last_key(ulonglong param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined8 uVar2;
	int iVar3;

	puVar1 = PTR_DAT_100f2b0c;
	if (*PTR_DAT_100f17e0 == '\x01') {
		uVar2 = 0;
	} else {
		if (*(int *)PTR_DAT_100f1900 == 0) {
			uVar2 = 0;
		} else {
			if ((param_1 & 0xffffffff) < 0x20) {
				uVar2 = 0;
			} else {
				iVar3 = strlen((uint)PTR_DAT_100f2b0c);
				if (iVar3 < 0x4e) {
					puVar1[iVar3] = (char)param_1;
					puVar1[iVar3 + 1] = 0;
				}
				uVar2 = 1;
			}
		}
	}
	return uVar2;
}

void control_up_down(char param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	DAT_100f3ff5 = DAT_100f3ff5 + param_1 & 7;
	if (*(char *)(_DAT_100f2a5c + (uint)DAT_100f3ff5 * 0x50) == '\0') {
		DAT_100f3ff5 = DAT_100f3ff5 + param_1 & 7;
		if (*(char *)(_DAT_100f2a5c + (uint)DAT_100f3ff5 * 0x50) == '\0') {
			DAT_100f3ff5 = DAT_100f3ff5 + param_1 & 7;
			if (*(char *)(_DAT_100f2a5c + (uint)DAT_100f3ff5 * 0x50) == '\0') {
				DAT_100f3ff5 = DAT_100f3ff5 + param_1 & 7;
				if (*(char *)(_DAT_100f2a5c + (uint)DAT_100f3ff5 * 0x50) == '\0') {
					DAT_100f3ff5 = DAT_100f3ff5 + param_1 & 7;
					if (*(char *)(_DAT_100f2a5c + (uint)DAT_100f3ff5 * 0x50) == '\0') {
						DAT_100f3ff5 = DAT_100f3ff5 + param_1 & 7;
						if (*(char *)(_DAT_100f2a5c + (uint)DAT_100f3ff5 * 0x50) == '\0') {
							DAT_100f3ff5 = DAT_100f3ff5 + param_1 & 7;
							if (*(char *)(_DAT_100f2a5c + (uint)DAT_100f3ff5 * 0x50) == '\0') {
								DAT_100f3ff5 = DAT_100f3ff5 + param_1 & 7;
								if (*(char *)(_DAT_100f2a5c + (uint)DAT_100f3ff5 * 0x50) != '\0') {
									strcpy((int)PTR_DAT_100f2b0c, _DAT_100f2a5c + (uint)DAT_100f3ff5 * 0x50);
								}
							} else {
								strcpy((int)PTR_DAT_100f2b0c, _DAT_100f2a5c + (uint)DAT_100f3ff5 * 0x50);
							}
						} else {
							strcpy((int)PTR_DAT_100f2b0c, _DAT_100f2a5c + (uint)DAT_100f3ff5 * 0x50);
						}
					} else {
						strcpy((int)PTR_DAT_100f2b0c, _DAT_100f2a5c + (uint)DAT_100f3ff5 * 0x50);
					}
				} else {
					strcpy((int)PTR_DAT_100f2b0c, _DAT_100f2a5c + (uint)DAT_100f3ff5 * 0x50);
				}
			} else {
				strcpy((int)PTR_DAT_100f2b0c, _DAT_100f2a5c + (uint)DAT_100f3ff5 * 0x50);
			}
		} else {
			strcpy((int)PTR_DAT_100f2b0c, _DAT_100f2a5c + (uint)DAT_100f3ff5 * 0x50);
		}
	} else {
		strcpy((int)PTR_DAT_100f2b0c, _DAT_100f2a5c + (uint)DAT_100f3ff5 * 0x50);
	}
	return;
}

undefined8
control_presskeys(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined8 uVar2;
	int iVar3;
	undefined4 in_stack_ffffffc8;

	puVar1 = PTR_DAT_100f2b0c;
	if (*PTR_DAT_100f17e0 == '\x01') {
		uVar2 = 0;
	} else {
		if (*(int *)PTR_DAT_100f1900 == 0) {
			uVar2 = 0;
		} else {
			if ((param_1 & 0xffffffff) != 0x20) {
				if ((param_1 & 0xffffffff) == 0x1b) {
					control_reset_talk();
				} else {
					if ((param_1 & 0xffffffff) == 0xd) {
						control_press_enter(param_1, ZEXT48(PTR_DAT_100f1900), param_3, param_4, param_5, param_6, param_7,
						    param_8, in_stack_ffffffc8);
					} else {
						if ((param_1 & 0xffffffff) == 8) {
							iVar3 = strlen((uint)PTR_DAT_100f2b0c);
							if (0 < iVar3) {
								puVar1[iVar3 + -1] = 0;
							}
						} else {
							if ((param_1 & 0xffffffff) == 0x28) {
								control_up_down('\x01', (char)PTR_DAT_100f1900, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffc8);
							} else {
								if ((param_1 & 0xffffffff) != 0x26) {
									return 0;
								}
								control_up_down(-1, (char)PTR_DAT_100f1900, (char)param_3, (char)param_4, (char)param_5,
								    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffc8);
							}
						}
					}
				}
			}
			uVar2 = 1;
		}
	}
	return uVar2;
}
