
void InitQuests(undefined param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined4 *puVar3;
	ulonglong uVar4;
	int iVar5;
	undefined8 uVar6;
	longlong lVar7;
	undefined *puVar8;
	ulonglong uVar9;
	undefined uVar10;
	undefined uVar11;
	longlong lVar12;
	undefined uVar13;
	longlong lVar14;
	undefined uVar15;
	longlong lVar16;
	undefined uVar17;
	longlong lVar18;
	undefined uVar19;
	int iVar20;
	ulonglong uVar21;
	undefined *puVar22;
	ulonglong uVar23;
	longlong lVar24;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	puVar22 = _DAT_100f1f64;
	puVar2 = PTR_DAT_100f19cc;
	puVar1 = PTR_DAT_100f17e0;
	lVar18 = (longlong)param_8;
	lVar16 = (longlong)param_7;
	lVar14 = (longlong)param_6;
	lVar12 = (longlong)param_5;
	lVar7 = (longlong)param_4;
	uVar9 = SEXT18(param_3);
	uVar4 = ZEXT48(&toc);
	uVar23 = ZEXT48(PTR_DAT_100f19cc);
	if (*PTR_DAT_100f17e0 == '\x01') {
		PTR_DAT_100f19cc[2] = 0;
		puVar2[0x1a] = 0;
		puVar2[0x32] = 0;
		puVar2[0x4a] = 0;
		puVar2[0x62] = 0;
		puVar2[0x7a] = 0;
		puVar2[0x92] = 0;
		puVar2[0xaa] = 0;
		puVar2[0xc2] = 0;
		puVar2[0xda] = 0;
		puVar2[0xf2] = 0;
		puVar2[0x10a] = 0;
		puVar2[0x122] = 0;
		puVar2[0x13a] = 0;
		puVar2[0x152] = 0;
		puVar2[0x16a] = 0;
	} else {
		lVar7 = 0;
		lVar24 = 2;
		uVar9 = uVar23;
		puVar8 = _DAT_100f1f64;
		do {
			iVar20 = (int)uVar9;
			if ((*(uint *)(puVar8 + 8) & 1) == 0) {
				*(undefined *)(iVar20 + 2) = 0;
			}
			if ((*(uint *)(puVar8 + 0x1c) & 1) == 0) {
				*(undefined *)(iVar20 + 0x1a) = 0;
			}
			if ((*(uint *)(puVar8 + 0x30) & 1) == 0) {
				*(undefined *)(iVar20 + 0x32) = 0;
			}
			if ((*(uint *)(puVar8 + 0x44) & 1) == 0) {
				*(undefined *)(iVar20 + 0x4a) = 0;
			}
			if ((*(uint *)(puVar8 + 0x58) & 1) == 0) {
				*(undefined *)(iVar20 + 0x62) = 0;
			}
			if ((*(uint *)(puVar8 + 0x6c) & 1) == 0) {
				*(undefined *)(iVar20 + 0x7a) = 0;
			}
			if ((*(uint *)(puVar8 + 0x80) & 1) == 0) {
				*(undefined *)(iVar20 + 0x92) = 0;
			}
			if ((*(uint *)(puVar8 + 0x94) & 1) == 0) {
				*(undefined *)(iVar20 + 0xaa) = 0;
			}
			puVar8 = puVar8 + 0xa0;
			uVar9 = uVar9 + 0xc0;
			lVar7 = lVar7 + 7;
			lVar24 = lVar24 + -1;
		} while (lVar24 != 0);
	}
	puVar3 = _DAT_100f2078;
	uVar21 = 0;
	*(undefined4 *)PTR_DAT_100f1808 = 0;
	puVar8 = PTR_DAT_100f2074;
	*puVar3 = 1;
	iVar20 = 0;
	*(undefined4 *)puVar8 = 0;
	do {
		if (((byte)*puVar1 < 2) || ((*(uint *)(puVar22 + 8) & 1) != 0)) {
			puVar8 = (undefined *)uVar23;
			puVar8[1] = puVar22[3];
			if ((byte)*puVar1 < 2) {
				puVar8[2] = 1;
				*puVar8 = *puVar22;
				puVar8[0xf] = 0;
				*(undefined4 *)(puVar8 + 0x14) = 0;
			} else {
				*puVar8 = puVar22[1];
				uVar6 = delta_quest_inited(iVar20);
				if ((int)uVar6 == 0) {
					puVar8[2] = 1;
					puVar8[0xf] = 0;
					*(undefined4 *)(puVar8 + 0x14) = 0;
				}
				iVar20 = iVar20 + 1;
			}
			puVar8[0xc] = puVar22[5];
			*(undefined4 *)(puVar8 + 4) = 0;
			*(undefined4 *)(puVar8 + 8) = 0;
			puVar8[0xd] = (char)uVar21;
			puVar8[3] = puVar22[2];
			puVar8[0x10] = 0;
			puVar8[0xe] = (char)*(undefined4 *)(puVar22 + 0xc);
		}
		iVar5 = (int)uVar4;
		uVar19 = (undefined)lVar18;
		uVar17 = (undefined)lVar16;
		uVar15 = (undefined)lVar14;
		uVar13 = (undefined)lVar12;
		uVar11 = (undefined)lVar7;
		uVar10 = (undefined)uVar9;
		uVar21 = uVar21 + 1;
		uVar23 = uVar23 + 0x18;
		puVar22 = puVar22 + 0x14;
	} while ((uVar21 & 0xffffffff) < 0x10);
	if (*puVar1 == '\x01') {
		SetRndSeed(*(undefined4 *)(*(int *)(iVar5 + -0x75ec) + 0x3c));
		lVar7 = random(0, 2, uVar10, uVar11, uVar13, uVar15, uVar17, uVar19, in_stack_ffffffa8,
		    in_stack_ffffffaf, in_stack_ffffffbb);
		if ((int)lVar7 == 0) {
			puVar2[0x122] = 0;
		} else {
			puVar2[0x13a] = 0;
		}
		lVar7 = random(0, 3, uVar10, uVar11, uVar13, uVar15, uVar17, uVar19, in_stack_ffffffa8,
		    in_stack_ffffffaf, in_stack_ffffffbb);
		puVar22 = puVar2 + 2;
		puVar22[*(int *)(*(int *)(iVar5 + -0x5898) + (int)lVar7 * 4) * 0x18] = 0;
		lVar7 = random(0, 3, uVar10, uVar11, uVar13, uVar15, uVar17, uVar19, in_stack_ffffffa8,
		    in_stack_ffffffaf, in_stack_ffffffbb);
		puVar22[*(int *)(*(int *)(iVar5 + -0x589c) + (int)lVar7 * 4) * 0x18] = 0;
		lVar7 = random(0, 3, uVar10, uVar11, uVar13, uVar15, uVar17, uVar19, in_stack_ffffffa8,
		    in_stack_ffffffaf, in_stack_ffffffbb);
		puVar22[*(int *)(*(int *)(iVar5 + -0x58a0) + (int)lVar7 * 4) * 0x18] = 0;
		lVar7 = random(0, 2, uVar10, uVar11, uVar13, uVar15, uVar17, uVar19, in_stack_ffffffa8,
		    in_stack_ffffffaf, in_stack_ffffffbb);
		puVar22[*(int *)(*(int *)(iVar5 + -0x58a4) + (int)lVar7 * 4) * 0x18] = 0;
	}
	if (puVar2[0x122] == '\0') {
		puVar2[0x130] = 2;
	}
	if (puVar2[2] == '\0') {
		puVar2[0x10] = 2;
	}
	puVar2[0xb7] = 1;
	if (*puVar1 != '\x01') {
		puVar2[0x177] = 2;
	}
	return;
}

void CheckQuests(undefined8 uParm1, char param_2, undefined param_3, ulonglong uParm4, ulonglong uParm5, undefined8 uParm6, undefined8 uParm7, ulonglong uParm8)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	char *pcVar9;
	undefined *puVar10;
	undefined **ppuVar11;
	undefined8 uVar12;
	longlong lVar13;
	ulonglong uVar14;
	undefined uVar15;
	undefined uVar16;
	undefined4 uVar17;
	undefined4 uVar18;
	undefined4 uVar19;
	int iVar20;
	ulonglong uVar21;
	char *pcVar22;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;

	puVar10 = PTR_DAT_100f2074;
	pcVar9 = _DAT_100f1dd0;
	puVar8 = PTR_DAT_100f19cc;
	puVar7 = PTR_DAT_100f1828;
	puVar6 = PTR_DAT_100f1824;
	puVar5 = PTR_DAT_100f17f8;
	puVar4 = PTR_DAT_100f17f0;
	puVar3 = PTR_DAT_100f17ec;
	puVar2 = PTR_DAT_100f17e0;
	ppuVar11 = &toc;
	uVar21 = ZEXT48(PTR_DAT_100f19cc);
	uVar12 = QuestStatus(0xf);
	if ((((int)uVar12 != 0) && (*puVar2 != '\x01')) && (puVar8[0x177] == '\x02')) {
		lVar13 = (ulonglong)(uint)(*(int *)ppuVar11[-0x1d54] << 1) + 0x16;
		param_3 = (undefined)lVar13;
		AddObject(0x53, *(int *)ppuVar11[-0x1d53] * 2 + 0x14, (int)lVar13, (char)uParm4, (char)uParm5,
		    (char)uParm6, (char)uParm7, (char)uParm8, in_stack_ffffff98);
		puVar8[0x177] = 3;
		param_2 = '\x0f';
		NetSendCmdQuest(1);
	}
	if (*puVar2 == '\x01') {
		if (((*puVar3 == puVar8[0x168]) && (*puVar5 == '\0')) && (1 < (byte)puVar8[0x177])) {
			if ((puVar8[0x16a] == '\x02') || (puVar8[0x16a] == '\x03')) {
				if ((puVar8[0x178] == '\0') || (puVar8[0x178] == '\x02')) {
					uParm5 = 0;
					lVar13 = (ulonglong)(uint)(*(int *)(puVar8 + 0x16c) << 1) + 0x10;
					param_3 = (undefined)lVar13;
					*(int *)(puVar8 + 0x16c) = (int)lVar13;
					uParm4 = (ulonglong)(uint)(*(int *)(puVar8 + 0x170) << 1) + 0x10;
					param_2 = (char)uParm4;
					*(int *)(puVar8 + 0x170) = (int)uParm4;
					uParm6 = 0x41;
					uParm7 = 0;
					uParm8 = (ulonglong) * (uint *)puVar6;
					AddMissile(lVar13, uParm4, lVar13, uParm4, 0, 0x41, 0, uParm8, in_stack_ffffff98,
					    in_stack_ffffff9f, 0, 0);
					puVar8[0x178] = 1;
					if (puVar8[0x16a] == '\x02') {
						puVar8[0x177] = 3;
					}
				}
			}
		}
		if ((((puVar8[0x16a] == '\x03') && (*puVar5 != '\0')) && (*puVar4 == '\x05')) && (puVar8[0x178] == '\x04')) {
			param_2 = ' ';
			param_3 = 0x23;
			uParm4 = 0x20;
			uParm8 = (ulonglong) * (uint *)puVar6;
			uParm5 = 0;
			uParm6 = 0x41;
			uParm7 = 0;
			AddMissile(0x23, 0x20, 0x23, 0x20, 0, 0x41, 0, uParm8, in_stack_ffffff98, in_stack_ffffff9f, 0, 0);
			puVar8[0x178] = 3;
		}
		uVar19 = (undefined4)uParm8;
		uVar18 = (undefined4)uParm7;
		uVar17 = (undefined4)uParm6;
		uVar19._3_1_ = (undefined)uParm8;
		uVar18._3_1_ = (undefined)uParm7;
		uVar17._3_1_ = (undefined)uParm6;
		uVar16 = (undefined)uParm5;
		uVar15 = (undefined)uParm4;
		if (*puVar5 == '\0') {
			if (*(int *)(puVar7 + *(int *)puVar6 * 0x55ec) == 0) {
				iVar20 = 0;
				do {
					pcVar22 = (char *)uVar21;
					if (((*puVar3 == *pcVar22) && (pcVar22[0xc] != '\0')) && (pcVar22[2] != '\0')) {
						uVar1 = *(uint *)puVar6;
						if ((*(int *)(puVar7 + uVar1 * 0x55ec + 0x38) == *(int *)(pcVar22 + 4)) && (*(int *)(puVar7 + uVar1 * 0x55ec + 0x3c) == *(int *)(pcVar22 + 8))) {
							if (pcVar22[3] != -1) {
								*pcVar9 = pcVar22[3];
							}
							StartNewLvl((ulonglong)uVar1, 0x405, (ulonglong)(byte)pcVar22[0xc], uParm4, uParm5,
							    (int)uParm6, (int)uParm7, (int)uParm8, in_stack_ffffff98);
						}
					}
					iVar20 = iVar20 + 1;
					uVar21 = uVar21 + 0x18;
				} while (iVar20 < 0x10);
			}
		} else {
			if (*puVar4 == puVar8[0x144]) {
				param_3 = (undefined)(uVar21 + 0x13a);
				param_2 = puVar8[0x13a];
				if ((((param_2 != '\x01') && (*ppuVar11[-0x1de5] == puVar8[0x13b])) && (*(int *)ppuVar11[-0x1d8b] == 4)) && (param_2 != '\x03')) {
					*(undefined *)(uVar21 + 0x13a) = 3;
					uVar21 = (ulonglong) * (uint *)(puVar7 + *(int *)puVar6 * 0x55ec + 0x38);
					uVar14 = (ulonglong) * (uint *)(puVar7 + *(int *)puVar6 * 0x55ec + 0x3c);
					PlaySfxLoc(0xc, uVar21, uVar14, uParm4, uParm5, uVar17, uVar18, uVar19, in_stack_ffffff98);
					uVar19._3_1_ = (undefined)uVar19;
					uVar18._3_1_ = (undefined)uVar18;
					uVar17._3_1_ = (undefined)uVar17;
					uVar16 = (undefined)uParm5;
					uVar15 = (undefined)uParm4;
					param_3 = (undefined)uVar14;
					param_2 = (char)uVar21;
					LoadPalette(ZEXT48(ppuVar11[-0x162a]), uVar21, uVar14, uParm4, uParm5, uVar17, uVar18, uVar19,
					    in_stack_ffffff98);
					*(undefined4 *)puVar10 = 0x20;
				}
			}
			if (0 < (int)*(uint *)puVar10) {
				palette_update_quest_palette((ulonglong) * (uint *)puVar10, param_2, param_3, uVar15, uVar16, (undefined)uVar17,
				    (undefined)uVar18, (undefined)uVar19, in_stack_ffffff98);
				*(int *)puVar10 = *(int *)puVar10 + -1;
			}
		}
	}
	return;
}

undefined8
ForceQuests(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	char *pcVar5;
	char *pcVar6;
	byte *pbVar7;
	int iVar8;
	longlong lVar9;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar4 = PTR_DAT_100f1978;
	puVar3 = PTR_DAT_100f1974;
	if (*PTR_DAT_100f17e0 == '\x01') {
		iVar8 = 0;
		pbVar7 = PTR_DAT_100f19cc;
		do {
			if (((iVar8 != 0xf) && (*PTR_DAT_100f17ec == *pbVar7)) && (pbVar7[0xc] != 0)) {
				lVar9 = 7;
				iVar1 = *(int *)(pbVar7 + 4);
				iVar2 = *(int *)(pbVar7 + 8);
				pcVar5 = PTR_DAT_100f3724;
				pcVar6 = PTR_DAT_100f3720;
				do {
					if ((*(int *)PTR_DAT_100f1978 == iVar1 + (int)*pcVar5) && (*(int *)PTR_DAT_100f1974 == iVar2 + (int)*pcVar6)) {
						sprintf((int)PTR_DAT_100f192c, PTR_s_To__s_100f371c,
						    *(undefined4 *)(PTR_PTR_s_King_Leoric_s_Tomb_100f2070 + ((uint)(byte)PTR_DAT_100f19cc[(uint)pbVar7[0xd] * 0x18 + 0xc] - 1) * 4),
						    PTR_DAT_100f3720, pcVar5, pcVar6, pbVar7, (uint)(byte)*PTR_DAT_100f17ec,
						    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0,
						    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0,
						    in_stack_ffffffe4);
						*(int *)puVar4 = iVar1;
						*(int *)puVar3 = iVar2;
						return 1;
					}
					pcVar5 = pcVar5 + 1;
					pcVar6 = pcVar6 + 1;
					lVar9 = lVar9 + -1;
				} while (lVar9 != 0);
			}
			iVar8 = iVar8 + 1;
			pbVar7 = pbVar7 + 0x18;
		} while (iVar8 < 0x10);
	}
	return 0;
}

undefined8 QuestStatus(int param_1)

{
	if (*PTR_DAT_100f17f8 != '\0') {
		return 0;
	}
	if (*PTR_DAT_100f17ec != PTR_DAT_100f19cc[param_1 * 0x18]) {
		return 0;
	}
	if (PTR_DAT_100f19cc[param_1 * 0x18 + 2] == '\0') {
		return 0;
	}
	if ((*PTR_DAT_100f17e0 != '\x01') && ((*(uint *)(_DAT_100f1f64 + param_1 * 0x14 + 8) & 1) == 0)) {
		return 0;
	}
	return 1;
}

void CheckQuestKill(int param_1, int param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	char cVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined4 *puVar6;
	undefined4 *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	short *psVar10;
	int *piVar11;
	int iVar12;
	char *pcVar13;
	int iVar14;
	int iVar15;
	longlong lVar16;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;

	puVar9 = PTR_DAT_100f1edc;
	puVar8 = PTR_DAT_100f1ed8;
	puVar7 = _DAT_100f1df8;
	puVar6 = _DAT_100f1df4;
	puVar5 = PTR_DAT_100f1a54;
	puVar4 = PTR_DAT_100f19cc;
	puVar3 = PTR_DAT_100f1828;
	puVar2 = PTR_DAT_100f1824;
	cVar1 = **(char **)(PTR_DAT_100f187c + param_1 * 0xe8 + 0xe0);
	if (cVar1 == '2') {
		PTR_DAT_100f19cc[0x122] = 3;
		*puVar7 = 0x1e;
		cVar1 = puVar3[*(int *)puVar2 * 0x55ec + 0x15c];
		if (cVar1 == '\0') {
			*puVar6 = 0x322;
		} else {
			if (cVar1 == '\x01') {
				*puVar6 = 0x2b5;
			} else {
				if (cVar1 == '\x02') {
					*puVar6 = 0x24e;
				}
			}
		}
		if (param_2 != 0) {
			NetSendCmdQuest(1, 0xc);
		}
	} else {
		if (cVar1 == '3') {
			PTR_DAT_100f19cc[0x92] = 3;
			*puVar7 = 0x1e;
			cVar1 = puVar3[*(int *)puVar2 * 0x55ec + 0x15c];
			if (cVar1 == '\0') {
				*puVar6 = 800;
			} else {
				if (cVar1 == '\x01') {
					*puVar6 = 0x2b3;
				} else {
					if (cVar1 == '\x02') {
						*puVar6 = 0x24c;
					}
				}
			}
			if (param_2 != 0) {
				NetSendCmdQuest(1, 6);
			}
		} else {
			iVar12 = *(int *)(PTR_DAT_100f187c + param_1 * 0xe8 + 0xdc);
			if (iVar12 == *(int *)(PTR_DAT_100f1f44 + 4)) {
				PTR_DAT_100f19cc[0x32] = 3;
				*puVar7 = 0x1e;
				cVar1 = puVar3[*(int *)puVar2 * 0x55ec + 0x15c];
				if (cVar1 == '\0') {
					*puVar6 = 0x30c;
				} else {
					if (cVar1 == '\x01') {
						*puVar6 = 0x29f;
					} else {
						if (cVar1 == '\x02') {
							*puVar6 = 0x238;
						}
					}
				}
			} else {
				if (iVar12 == *(int *)(PTR_DAT_100f1f44 + 0x44)) {
					PTR_DAT_100f19cc[0x4a] = 3;
					*puVar7 = 0x1e;
					cVar1 = puVar3[*(int *)puVar2 * 0x55ec + 0x15c];
					if (cVar1 == '\0') {
						*puVar6 = 0x30d;
					} else {
						if (cVar1 == '\x01') {
							*puVar6 = 0x2a0;
						} else {
							if (cVar1 == '\x02') {
								*puVar6 = 0x239;
							}
						}
					}
				} else {
					if ((iVar12 == *(int *)(PTR_DAT_100f1f44 + 0x84)) && (*PTR_DAT_100f17e0 != '\x01')) {
						pcVar13 = PTR_DAT_100f19cc + 0x16a;
						PTR_DAT_100f19cc[0x16a] = 3;
						puVar4[0x177] = 7;
						iVar14 = 0;
						*puVar7 = 0x1e;
						iVar12 = 0;
						puVar4[0x7a] = 2;
						do {
							lVar16 = 0x10;
							cVar1 = *pcVar13;
							psVar10 = (short *)(*(int *)puVar5 + iVar12);
							piVar11 = (int *)(puVar9 + *(int *)puVar8 * 0x10);
							iVar15 = 0;
							do {
								if ((*psVar10 == 0x172) && (cVar1 == '\x03')) {
									*piVar11 = iVar15;
									piVar11[1] = iVar14;
									piVar11[2] = 0x402;
									piVar11 = piVar11 + 4;
									*(int *)puVar8 = *(int *)puVar8 + 1;
								}
								if ((psVar10[0x70] == 0x172) && (cVar1 == '\x03')) {
									*piVar11 = iVar15 + 1;
									piVar11[1] = iVar14;
									piVar11[2] = 0x402;
									piVar11 = piVar11 + 4;
									*(int *)puVar8 = *(int *)puVar8 + 1;
								}
								if ((psVar10[0xe0] == 0x172) && (cVar1 == '\x03')) {
									*piVar11 = iVar15 + 2;
									piVar11[1] = iVar14;
									piVar11[2] = 0x402;
									piVar11 = piVar11 + 4;
									*(int *)puVar8 = *(int *)puVar8 + 1;
								}
								if ((psVar10[0x150] == 0x172) && (cVar1 == '\x03')) {
									*piVar11 = iVar15 + 3;
									piVar11[1] = iVar14;
									piVar11[2] = 0x402;
									piVar11 = piVar11 + 4;
									*(int *)puVar8 = *(int *)puVar8 + 1;
								}
								if ((psVar10[0x1c0] == 0x172) && (cVar1 == '\x03')) {
									*piVar11 = iVar15 + 4;
									piVar11[1] = iVar14;
									piVar11[2] = 0x402;
									piVar11 = piVar11 + 4;
									*(int *)puVar8 = *(int *)puVar8 + 1;
								}
								if ((psVar10[0x230] == 0x172) && (cVar1 == '\x03')) {
									*piVar11 = iVar15 + 5;
									piVar11[1] = iVar14;
									piVar11[2] = 0x402;
									piVar11 = piVar11 + 4;
									*(int *)puVar8 = *(int *)puVar8 + 1;
								}
								if ((psVar10[0x2a0] == 0x172) && (cVar1 == '\x03')) {
									*piVar11 = iVar15 + 6;
									piVar11[1] = iVar14;
									piVar11[2] = 0x402;
									piVar11 = piVar11 + 4;
									*(int *)puVar8 = *(int *)puVar8 + 1;
								}
								psVar10 = psVar10 + 0x310;
								iVar15 = iVar15 + 7;
								lVar16 = lVar16 + -1;
							} while (lVar16 != 0);
							iVar14 = iVar14 + 1;
							iVar12 = iVar12 + 2;
						} while (iVar14 < 0x70);
						cVar1 = puVar3[*(int *)puVar2 * 0x55ec + 0x15c];
						if (cVar1 == '\0') {
							*puVar6 = 0x323;
						} else {
							if (cVar1 == '\x01') {
								*puVar6 = 0x2b6;
							} else {
								if (cVar1 == '\x02') {
									*puVar6 = 0x24f;
								}
							}
						}
						if (param_2 != 0) {
							NetSendCmdQuest(1, 0xf);
							NetSendCmdQuest(1, 5);
						}
					} else {
						if ((iVar12 == *(int *)(PTR_DAT_100f1f44 + 0x84)) && (*PTR_DAT_100f17e0 == '\x01')) {
							PTR_DAT_100f19cc[0x16a] = 3;
							*puVar7 = 0x1e;
							InitVPTriggers();
							puVar4[0x177] = 7;
							puVar4[0x178] = 4;
							puVar4[0x7a] = 2;
							AddMissile(0x23, 0x20, 0x23, 0x20, 0, 0x41, 0, (ulonglong) * (uint *)puVar2, in_stack_ffffffa8, in_stack_ffffffaf, 0, 0);
							cVar1 = puVar3[*(int *)puVar2 * 0x55ec + 0x15c];
							if (cVar1 == '\0') {
								*puVar6 = 0x323;
								return;
							}
							if (cVar1 == '\x01') {
								*puVar6 = 0x2b6;
								return;
							}
							if (cVar1 != '\x02') {
								return;
							}
							*puVar6 = 0x24f;
							return;
						}
						if (iVar12 == *(int *)(PTR_DAT_100f1f44 + 0x104)) {
							PTR_DAT_100f19cc[0x10a] = 3;
							*puVar7 = 0x1e;
							cVar1 = puVar3[*(int *)puVar2 * 0x55ec + 0x15c];
							if (cVar1 == '\0') {
								*puVar6 = 0x32e;
							} else {
								if (cVar1 == '\x01') {
									*puVar6 = 0x2c1;
								} else {
									if (cVar1 == '\x02') {
										*puVar6 = 0x25a;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return;
}

void DrawButcher(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	DRLG_RectTrans(*(int *)PTR_DAT_100f1a84 * 2 + 0x13, *(int *)PTR_DAT_100f1a80 * 2 + 0x13,
	    *(int *)PTR_DAT_100f1a84 * 2 + 0x1a, *(int *)PTR_DAT_100f1a80 * 2 + 0x1a);
	return;
}

void DrawSkelKing(int param_1, int param_2, int param_3)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f19cc + param_1 * 0x18;
	*(int *)(puVar1 + 4) = param_2 * 2 + 0x1c;
	*(int *)(puVar1 + 8) = param_3 * 2 + 0x17;
	return;
}

void DrawWarLord(longlong param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	byte bVar1;
	byte bVar2;
	uint *puVar3;
	int *piVar4;
	undefined *puVar5;
	undefined **ppuVar6;
	ulonglong uVar7;
	longlong lVar8;
	undefined8 uVar9;
	undefined uVar10;
	undefined uVar11;
	longlong lVar12;
	undefined uVar13;
	longlong lVar14;
	longlong lVar15;
	undefined uVar16;
	longlong lVar17;
	undefined uVar18;
	longlong lVar19;
	undefined4 in_stack_ffffffb8;
	int *local_18[6];

	ppuVar6 = &toc;
	uVar9 = 0;
	uVar7 = LoadFileInMem(ZEXT48(PTR_s_Levels_L4Data_Warlord2_DUN_100f3718), (undefined4 *)0x0, param_3,
	    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	local_18[0] = (int *)uVar7;
	uVar7 = FUN_100b8f7c(uVar7 & 0xffffffff, uVar9, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	bVar1 = *(byte *)uVar7;
	uVar10 = (undefined)(param_1 * 0x28);
	bVar2 = ((byte *)uVar7)[2];
	lVar17 = uVar7 + 4;
	puVar3 = (uint *)ppuVar6[-0x1d56];
	*(uint *)ppuVar6[-0x1d55] = (uint)bVar1;
	lVar14 = (ulonglong)bVar1 + param_1;
	lVar14._7_1_ = (undefined)lVar14;
	piVar4 = (int *)ppuVar6[-0x1d53];
	*puVar3 = (uint)bVar2;
	puVar5 = ppuVar6[-0x1df3];
	lVar15 = (ulonglong)bVar2 + param_2;
	lVar15._7_1_ = (undefined)lVar15;
	*piVar4 = (int)param_1;
	uVar7 = ZEXT48(ppuVar6[-0x1d54]);
	lVar12 = ZEXT48(puVar5) + param_2;
	*(int *)ppuVar6[-0x1d54] = (int)param_2;
	while (true) {
		uVar18 = (undefined)lVar17;
		uVar16 = (undefined)param_2;
		uVar13 = (undefined)lVar12;
		uVar11 = (undefined)uVar7;
		if ((int)lVar15 <= (int)param_2)
			break;
		lVar8 = lVar12 + param_1 * 0x28;
		lVar19 = lVar14 - param_1;
		if ((int)param_1 < (int)lVar14) {
			do {
				uVar7 = (ulonglong) * (byte *)lVar17;
				if (*(byte *)lVar17 == 0) {
					uVar7 = 6;
				}
				*(undefined *)lVar8 = (char)uVar7;
				lVar8 = lVar8 + 0x28;
				lVar17 = lVar17 + 2;
				lVar19 = lVar19 + -1;
			} while (lVar19 != 0);
		}
		lVar12 = lVar12 + 1;
		param_2 = param_2 + 1;
	}
	FUN_100b9100((int)local_18[0], uVar10, uVar11, uVar13, (undefined)lVar14, (undefined)lVar15, uVar16,
	    uVar18, in_stack_ffffffb8);
	mem_free_dbg(local_18, uVar10, uVar11, uVar13, (undefined)lVar14, (undefined)lVar15, uVar16, uVar18,
	    in_stack_ffffffb8);
	return;
}

void DrawWarLord(int param_1, longlong param_2, longlong param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	byte bVar1;
	byte bVar2;
	uint *puVar3;
	int *piVar4;
	undefined *puVar5;
	int iVar6;
	undefined **ppuVar7;
	ulonglong uVar8;
	longlong lVar9;
	undefined8 uVar10;
	undefined uVar11;
	undefined uVar12;
	longlong lVar13;
	undefined uVar14;
	longlong lVar15;
	longlong lVar16;
	undefined uVar17;
	longlong lVar18;
	undefined uVar19;
	ulonglong uVar20;
	int iVar21;
	int iVar22;
	longlong lVar23;
	undefined4 in_stack_ffffffa8;
	int *local_28[10];

	ppuVar7 = &toc;
	uVar10 = 0;
	uVar20 = ZEXT48(PTR_DAT_100f19cc);
	lVar13 = param_3;
	uVar8 = LoadFileInMem(ZEXT48(PTR_s_Levels_L2Data_Bonestr1_DUN_100f3714), (undefined4 *)0x0, param_3,
	    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	local_28[0] = (int *)uVar8;
	uVar8 = FUN_100b8f7c(uVar8 & 0xffffffff, uVar10, lVar13, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	bVar1 = *(byte *)uVar8;
	bVar2 = ((byte *)uVar8)[2];
	lVar18 = uVar8 + 4;
	puVar3 = (uint *)ppuVar7[-0x1d56];
	*(uint *)ppuVar7[-0x1d55] = (uint)bVar1;
	lVar15 = (ulonglong)bVar1 + param_2;
	lVar15._7_1_ = (undefined)lVar15;
	piVar4 = (int *)ppuVar7[-0x1d53];
	*puVar3 = (uint)bVar2;
	puVar5 = ppuVar7[-0x1df3];
	lVar16 = (ulonglong)bVar2 + param_3;
	lVar16._7_1_ = (undefined)lVar16;
	iVar21 = (int)param_2;
	*piVar4 = iVar21;
	uVar8 = ZEXT48(ppuVar7[-0x1d54]);
	lVar13 = ZEXT48(puVar5) + param_3;
	iVar22 = (int)param_3;
	*(int *)ppuVar7[-0x1d54] = iVar22;
	while (true) {
		uVar19 = (undefined)lVar18;
		uVar17 = (undefined)param_3;
		uVar14 = (undefined)lVar13;
		uVar12 = (undefined)uVar8;
		if ((int)lVar16 <= (int)param_3)
			break;
		lVar9 = lVar13 + param_2 * 0x28;
		lVar23 = lVar15 - param_2;
		if (iVar21 < (int)lVar15) {
			do {
				uVar8 = (ulonglong) * (byte *)lVar18;
				if (*(byte *)lVar18 == 0) {
					uVar8 = 3;
				}
				*(undefined *)lVar9 = (char)uVar8;
				lVar9 = lVar9 + 0x28;
				lVar18 = lVar18 + 2;
				lVar23 = lVar23 + -1;
			} while (lVar23 != 0);
		}
		lVar13 = lVar13 + 1;
		param_3 = param_3 + 1;
	}
	lVar13 = uVar20 + (longlong)param_1 * 0x18;
	iVar6 = (int)lVar13;
	*(int *)(iVar6 + 4) = iVar21 * 2 + 0x16;
	*(int *)(iVar6 + 8) = iVar22 * 2 + 0x17;
	uVar11 = (undefined)lVar13;
	FUN_100b9100((int)local_28[0], uVar11, uVar12, uVar14, (undefined)lVar15, (undefined)lVar16, uVar17,
	    uVar19, in_stack_ffffffa8);
	mem_free_dbg(local_28, uVar11, uVar12, uVar14, (undefined)lVar15, (undefined)lVar16, uVar17, uVar19,
	    in_stack_ffffffa8);
	return;
}

void DrawLTBanner(int param_1, int param_2, undefined8 param_3, undefined8 param_4, longlong param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	uint *puVar1;
	int *piVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	ulonglong uVar5;
	undefined8 uVar6;
	longlong lVar7;
	undefined uVar8;
	byte bVar9;
	byte bVar10;
	undefined uVar11;
	longlong lVar12;
	undefined uVar13;
	longlong lVar14;
	undefined uVar15;
	undefined uVar16;
	undefined4 in_stack_ffffffb8;
	int *local_18[6];

	ppuVar4 = &toc;
	uVar6 = 0;
	uVar5 = LoadFileInMem(ZEXT48(PTR_s_Levels_L1Data_Banner1_DUN_100f3710), (undefined4 *)0x0, param_3,
	    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	uVar16 = (undefined)param_8;
	local_18[0] = (int *)uVar5;
	uVar5 = FUN_100b8f7c(uVar5 & 0xffffffff, uVar6, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	bVar9 = *(byte *)uVar5;
	lVar14 = uVar5 + 4;
	bVar10 = ((byte *)uVar5)[2];
	lVar12 = 0;
	puVar1 = (uint *)ppuVar4[-0x1d56];
	*(uint *)ppuVar4[-0x1d55] = (uint)bVar9;
	piVar2 = (int *)ppuVar4[-0x1d53];
	*puVar1 = (uint)bVar10;
	puVar3 = ppuVar4[-0x1d50];
	*piVar2 = param_1;
	lVar7 = ZEXT48(puVar3) + (longlong)param_2;
	*(int *)ppuVar4[-0x1d54] = param_2;
	while (true) {
		uVar15 = (undefined)lVar14;
		uVar13 = (undefined)lVar12;
		uVar11 = (undefined)param_5;
		uVar8 = (undefined)lVar7;
		if ((int)(uint)bVar10 <= (int)lVar12)
			break;
		param_5 = 0;
		uVar5 = (ulonglong)bVar9;
		if (bVar9 != 0) {
			do {
				if (*(char *)lVar14 != '\0') {
					*(char *)((int)lVar7 + (param_1 + (int)param_5) * 0x28) = *(char *)lVar14;
				}
				lVar14 = lVar14 + 2;
				param_5 = param_5 + 1;
				uVar5 = uVar5 - 1;
			} while (uVar5 != 0);
		}
		lVar7 = lVar7 + 1;
		lVar12 = lVar12 + 1;
	}
	FUN_100b9100((int)local_18[0], uVar8, bVar9, bVar10, uVar11, uVar13, uVar15, uVar16, in_stack_ffffffb8);
	mem_free_dbg(local_18, uVar8, bVar9, bVar10, uVar11, uVar13, uVar15, uVar16, in_stack_ffffffb8);
	return;
}

void DrawBlind(int param_1, int param_2, undefined8 param_3, undefined8 param_4, longlong param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	int *piVar1;
	uint *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	ulonglong uVar5;
	undefined8 uVar6;
	longlong lVar7;
	undefined uVar8;
	byte bVar9;
	byte bVar10;
	undefined uVar11;
	longlong lVar12;
	undefined uVar13;
	longlong lVar14;
	undefined uVar15;
	undefined uVar16;
	undefined4 in_stack_ffffffb8;
	int *local_18[6];

	ppuVar4 = &toc;
	uVar6 = 0;
	uVar5 = LoadFileInMem(ZEXT48(PTR_s_Levels_L2Data_Blind1_DUN_100f370c), (undefined4 *)0x0, param_3,
	    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	uVar16 = (undefined)param_8;
	local_18[0] = (int *)uVar5;
	uVar5 = FUN_100b8f7c(uVar5 & 0xffffffff, uVar6, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	bVar9 = *(byte *)uVar5;
	lVar14 = uVar5 + 4;
	bVar10 = ((byte *)uVar5)[2];
	lVar12 = 0;
	piVar1 = (int *)ppuVar4[-0x1d54];
	*(int *)ppuVar4[-0x1d53] = param_1;
	puVar2 = (uint *)ppuVar4[-0x1d55];
	*piVar1 = param_2;
	puVar3 = ppuVar4[-0x1d50];
	*puVar2 = (uint)bVar9;
	lVar7 = ZEXT48(puVar3) + (longlong)param_2;
	*(uint *)ppuVar4[-0x1d56] = (uint)bVar10;
	while (true) {
		uVar15 = (undefined)lVar14;
		uVar13 = (undefined)lVar12;
		uVar11 = (undefined)param_5;
		uVar8 = (undefined)lVar7;
		if ((int)(uint)bVar10 <= (int)lVar12)
			break;
		param_5 = 0;
		uVar5 = (ulonglong)bVar9;
		if (bVar9 != 0) {
			do {
				if (*(char *)lVar14 != '\0') {
					*(char *)((int)lVar7 + (param_1 + (int)param_5) * 0x28) = *(char *)lVar14;
				}
				lVar14 = lVar14 + 2;
				param_5 = param_5 + 1;
				uVar5 = uVar5 - 1;
			} while (uVar5 != 0);
		}
		lVar7 = lVar7 + 1;
		lVar12 = lVar12 + 1;
	}
	FUN_100b9100((int)local_18[0], uVar8, bVar9, bVar10, uVar11, uVar13, uVar15, uVar16, in_stack_ffffffb8);
	mem_free_dbg(local_18, uVar8, bVar9, bVar10, uVar11, uVar13, uVar15, uVar16, in_stack_ffffffb8);
	return;
}

void DrawBlood(int param_1, int param_2, undefined8 param_3, undefined8 param_4, longlong param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	int *piVar1;
	uint *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	ulonglong uVar5;
	undefined8 uVar6;
	longlong lVar7;
	undefined uVar8;
	byte bVar9;
	byte bVar10;
	undefined uVar11;
	longlong lVar12;
	undefined uVar13;
	longlong lVar14;
	undefined uVar15;
	undefined uVar16;
	undefined4 in_stack_ffffffb8;
	int *local_18[6];

	ppuVar4 = &toc;
	uVar6 = 0;
	uVar5 = LoadFileInMem(ZEXT48(PTR_s_Levels_L2Data_Blood2_DUN_100f3708), (undefined4 *)0x0, param_3,
	    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	uVar16 = (undefined)param_8;
	local_18[0] = (int *)uVar5;
	uVar5 = FUN_100b8f7c(uVar5 & 0xffffffff, uVar6, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	bVar9 = *(byte *)uVar5;
	lVar14 = uVar5 + 4;
	bVar10 = ((byte *)uVar5)[2];
	lVar12 = 0;
	piVar1 = (int *)ppuVar4[-0x1d54];
	*(int *)ppuVar4[-0x1d53] = param_1;
	puVar2 = (uint *)ppuVar4[-0x1d55];
	*piVar1 = param_2;
	puVar3 = ppuVar4[-0x1df3];
	*puVar2 = (uint)bVar9;
	lVar7 = ZEXT48(puVar3) + (longlong)param_2;
	*(uint *)ppuVar4[-0x1d56] = (uint)bVar10;
	while (true) {
		uVar15 = (undefined)lVar14;
		uVar13 = (undefined)lVar12;
		uVar11 = (undefined)param_5;
		uVar8 = (undefined)lVar7;
		if ((int)(uint)bVar10 <= (int)lVar12)
			break;
		param_5 = 0;
		uVar5 = (ulonglong)bVar9;
		if (bVar9 != 0) {
			do {
				if (*(char *)lVar14 != '\0') {
					*(char *)((int)lVar7 + (param_1 + (int)param_5) * 0x28) = *(char *)lVar14;
				}
				lVar14 = lVar14 + 2;
				param_5 = param_5 + 1;
				uVar5 = uVar5 - 1;
			} while (uVar5 != 0);
		}
		lVar7 = lVar7 + 1;
		lVar12 = lVar12 + 1;
	}
	FUN_100b9100((int)local_18[0], uVar8, bVar9, bVar10, uVar11, uVar13, uVar15, uVar16, in_stack_ffffffb8);
	mem_free_dbg(local_18, uVar8, bVar9, bVar10, uVar11, uVar13, uVar15, uVar16, in_stack_ffffffb8);
	return;
}

void DRLG_CheckQuests(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	undefined8 uVar2;
	int iVar3;
	undefined *puVar4;

	uVar1 = ZEXT48(&toc);
	iVar3 = 0;
	puVar4 = PTR_DAT_100f19cc;
	while ((uVar2 = QuestStatus(iVar3), (int)uVar2 == 0 || (8 < ((ulonglong)(byte)puVar4[1] - 6 & 0xffffffff)))) {
		iVar3 = iVar3 + 1;
		puVar4 = puVar4 + 0x18;
		if (0xf < iVar3) {
			return;
		}
	}
	// WARNING: Could not recover jumptable at 0x1009ccdc. Too many branches
	// WARNING: Treating indirect jump as call
	(**(code **)(*(int *)((int)uVar1 + -0x58cc) + (int)((ulonglong)(byte)puVar4[1] - 6) * 4))();
	return;
}

void SetReturnLvlPos(void)

{
	byte bVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;

	puVar5 = PTR_DAT_100f1e9c;
	puVar4 = PTR_DAT_100f1e98;
	puVar3 = PTR_DAT_100f1e94;
	puVar2 = PTR_DAT_100f19cc;
	bVar1 = *PTR_DAT_100f17f0;
	if (bVar1 == 3) {
		return;
	}
	if (2 < bVar1) {
		if (bVar1 == 5) {
			*(int *)PTR_DAT_100f1ea0 = *(int *)(PTR_DAT_100f19cc + 0x16c) + 1;
			*(int *)puVar5 = *(int *)(puVar2 + 0x170) + -1;
			*(uint *)puVar4 = (uint)(byte)puVar2[0x168];
			*(undefined4 *)puVar3 = 4;
			return;
		}
		if (4 < bVar1) {
			return;
		}
		*(undefined4 *)PTR_DAT_100f1ea0 = *(undefined4 *)(PTR_DAT_100f19cc + 0x13c);
		*(int *)puVar5 = *(int *)(puVar2 + 0x140) + 1;
		*(uint *)puVar4 = (uint)(byte)puVar2[0x138];
		*(undefined4 *)puVar3 = 1;
		return;
	}
	if (bVar1 == 1) {
		*(int *)PTR_DAT_100f1ea0 = *(int *)(PTR_DAT_100f19cc + 0x124) + 1;
		*(undefined4 *)puVar5 = *(undefined4 *)(puVar2 + 0x128);
		*(uint *)puVar4 = (uint)(byte)puVar2[0x120];
		*(undefined4 *)puVar3 = 1;
		return;
	}
	if (bVar1 == 0) {
		return;
	}
	*(int *)PTR_DAT_100f1ea0 = *(int *)(PTR_DAT_100f19cc + 0x154) + 1;
	*(undefined4 *)puVar5 = *(undefined4 *)(puVar2 + 0x158);
	*(uint *)puVar4 = (uint)(byte)puVar2[0x150];
	*(undefined4 *)puVar3 = 2;
	return;
}

void GetReturnLvlPos(void)

{
	undefined *puVar1;
	undefined *puVar2;

	if (PTR_DAT_100f19cc[0x16a] == '\x03') {
		PTR_DAT_100f19cc[0x178] = 2;
	}
	puVar1 = PTR_DAT_100f1e9c;
	*(undefined4 *)PTR_DAT_100f1820 = *(undefined4 *)PTR_DAT_100f1ea0;
	puVar2 = PTR_DAT_100f1e98;
	*(undefined4 *)PTR_DAT_100f181c = *(undefined4 *)puVar1;
	puVar1 = PTR_DAT_100f1e94;
	*PTR_DAT_100f17ec = (char)*(undefined4 *)puVar2;
	*PTR_DAT_100f183c = (char)*(undefined4 *)puVar1;
	return;
}

void ResyncMPQuests(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined8 uVar4;
	uint uVar5;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_DAT_100f19cc;
	puVar1 = PTR_DAT_100f17ec;
	ppuVar3 = &toc;
	if (PTR_DAT_100f19cc[0x122] == '\x01') {
		if (((int)((uint)(byte)PTR_DAT_100f19cc[0x120] - 1) <= (int)(uint)(byte)*PTR_DAT_100f17ec) && ((uint)(byte)*PTR_DAT_100f17ec <= (uint)(byte)PTR_DAT_100f19cc[0x120] + 1)) {
			PTR_DAT_100f19cc[0x122] = 2;
			ppuVar3 = &toc;
			NetSendCmdQuest(1, 0xc);
		}
	}
	if (puVar2[0x92] == '\x01') {
		uVar5 = (uint)(byte)*puVar1;
		if (((int)((uint)(byte)puVar2[0x90] - 1) <= (int)uVar5) && (uVar5 <= (uint)(byte)puVar2[0x90] + 1)) {
			puVar2[0x92] = 2;
			NetSendCmdQuest(1, 6);
		}
	}
	if ((puVar2[0x16a] == '\x01') && ((uint)(byte)*puVar1 == (uint)(byte)puVar2[0x168] - 1)) {
		puVar2[0x16a] = 2;
		NetSendCmdQuest(1, 0xf);
	}
	uVar4 = QuestStatus(0xf);
	if ((int)uVar4 != 0) {
		AddObject(0x53, *(int *)ppuVar3[-0x1d53] * 2 + 0x14, *(int *)ppuVar3[-0x1d54] * 2 + 0x16,
		    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	}
	return;
}

void ResyncQuests(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	byte bVar1;
	undefined uVar2;
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
	undefined8 uVar14;
	ulonglong uVar15;
	longlong lVar16;
	undefined4 uVar17;
	longlong lVar18;
	undefined4 uVar19;
	longlong lVar20;
	undefined4 uVar21;
	longlong lVar22;
	int iVar23;
	uint *puVar24;
	uint *puVar25;
	undefined4 in_stack_ffffff88;

	puVar13 = PTR_DAT_100f206c;
	puVar25 = (uint *)PTR_DAT_100f1e40;
	puVar12 = PTR_DAT_100f1e3c;
	puVar11 = PTR_DAT_100f1ab8;
	puVar10 = PTR_DAT_100f1a84;
	puVar9 = PTR_DAT_100f1a80;
	puVar8 = PTR_DAT_100f1a7c;
	puVar7 = PTR_DAT_100f1a78;
	puVar6 = PTR_DAT_100f19cc;
	puVar5 = PTR_DAT_100f17f8;
	puVar4 = PTR_DAT_100f17f0;
	puVar3 = PTR_DAT_100f17ec;
	lVar20 = (longlong)param_8;
	lVar18 = (longlong)param_7;
	lVar16 = (longlong)param_6;
	if ((*PTR_DAT_100f17f8 != '\0') && (*PTR_DAT_100f17f0 == PTR_DAT_100f19cc[0x144])) {
		bVar1 = PTR_DAT_100f19cc[0x13a];
		uVar15 = (ulonglong)bVar1;
		if ((bVar1 != 1) && (*PTR_DAT_100f183c == PTR_DAT_100f19cc[0x13b])) {
			if (bVar1 == 3) {
				LoadPalette(ZEXT48(PTR_s_Levels_L3Data_L3pwater_pal_100f3728), uVar15, param_3, param_4,
				    param_5, param_6, param_7, param_8, in_stack_ffffff88);
			} else {
				LoadPalette((ulonglong)_DAT_100f3700, uVar15, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff88);
			}
			lVar22 = 0;
			do {
				palette_update_quest_palette(lVar22, (char)uVar15, (char)param_3, (char)param_4, (char)param_5, (char)lVar16,
				    (char)lVar18, (char)lVar20, in_stack_ffffff88);
				lVar22 = lVar22 + 1;
			} while ((int)lVar22 < 0x21);
		}
	}
	uVar14 = QuestStatus(7);
	uVar21 = (undefined4)lVar20;
	uVar19 = (undefined4)lVar18;
	uVar17 = (undefined4)lVar16;
	if ((int)uVar14 != 0) {
		if (puVar6[0xb7] == '\x01') {
			ObjChangeMapResync((ulonglong) * (uint *)puVar10 + (ulonglong) * (uint *)puVar8 + -2,
			    (ulonglong) * (uint *)puVar9 + (ulonglong) * (uint *)puVar7 + -2,
			    (int)((ulonglong) * (uint *)puVar10 + (ulonglong) * (uint *)puVar8) + 1,
			    (ulonglong) * (uint *)puVar9 + (ulonglong) * (uint *)puVar7 + 1, param_5, uVar17, uVar19, uVar21, in_stack_ffffff88);
		}
		if (puVar6[0xb7] == '\x02') {
			uVar15 = (ulonglong) * (uint *)puVar9 + (ulonglong) * (uint *)puVar7 + 1;
			ObjChangeMapResync((ulonglong) * (uint *)puVar10 + (ulonglong) * (uint *)puVar8 + -2,
			    (ulonglong) * (uint *)puVar9 + (ulonglong) * (uint *)puVar7 + -2,
			    (int)((ulonglong) * (uint *)puVar10 + (ulonglong) * (uint *)puVar8) + 1, uVar15,
			    param_5, (int)lVar16, (int)lVar18, (int)lVar20, in_stack_ffffff88);
			ObjChangeMapResync((ulonglong) * (uint *)puVar10, (ulonglong) * (uint *)puVar9,
			    *(uint *)puVar10 + (*(int *)puVar8 >> 1) + 2,
			    (ulonglong) * (uint *)puVar9 + ((uVar15 & 0xffffffff00000000 | (ulonglong)(uint)(*(int *)puVar7 >> 1)) - 2),
			    param_5, (int)lVar16, (int)lVar18, (int)lVar20, in_stack_ffffff88);
			iVar23 = 0;
			puVar24 = puVar25;
			while (iVar23 < *(int *)puVar12) {
				SyncObjectAnim((ulonglong)*puVar24);
				puVar24 = puVar24 + 1;
				iVar23 = iVar23 + 1;
			}
			uVar2 = *puVar11;
			*puVar11 = 9;
			DRLG_MRectTrans(*(int *)puVar10, *(int *)puVar9, *(int *)puVar10 + (*(int *)puVar8 >> 1) + 4,
			    *(int *)puVar9 + (*(int *)puVar7 >> 1));
			*puVar11 = uVar2;
		}
		uVar21 = (undefined4)lVar20;
		uVar19 = (undefined4)lVar18;
		uVar17 = (undefined4)lVar16;
		if (puVar6[0xb7] == '\x03') {
			ObjChangeMapResync((ulonglong) * (uint *)puVar10, (ulonglong) * (uint *)puVar9,
			    *(uint *)puVar10 + *(int *)puVar8 + 1,
			    (ulonglong) * (uint *)puVar9 + (ulonglong) * (uint *)puVar7 + 1, param_5, uVar17, uVar19, uVar21, in_stack_ffffff88);
			iVar23 = 0;
			puVar24 = puVar25;
			while (true) {
				uVar21 = (undefined4)lVar20;
				uVar19 = (undefined4)lVar18;
				uVar17 = (undefined4)lVar16;
				if (*(int *)puVar12 <= iVar23)
					break;
				SyncObjectAnim((ulonglong)*puVar24);
				puVar24 = puVar24 + 1;
				iVar23 = iVar23 + 1;
			}
			uVar2 = *puVar11;
			*puVar11 = 9;
			DRLG_MRectTrans(*(int *)puVar10, *(int *)puVar9, *(int *)puVar10 + (*(int *)puVar8 >> 1) + 4,
			    *(int *)puVar9 + (*(int *)puVar7 >> 1));
			*puVar11 = uVar2;
		}
	}
	if (*puVar3 == puVar6[0x18]) {
		if ((puVar6[0x1a] == '\x01') && (puVar6[0x27] == '\0')) {
			param_5 = 1;
			SpawnQuestItem(0x13, 0, 0, 5, 1, (char)uVar17, (char)uVar19, (char)uVar21, in_stack_ffffff88);
			puVar6[0x27] = 1;
		} else {
			if (puVar6[0x1a] == '\x02') {
				if ((byte)puVar6[0x27] < 5) {
					if (6 < (byte)puVar6[0x27]) {
						*(undefined4 *)(puVar13 + 0x44) = 0xffffffff;
					}
				} else {
					*(undefined4 *)(puVar13 + 0x44) = 0x7b;
					*(undefined4 *)(puVar13 + 0x184) = 0xffffffff;
				}
			}
		}
	}
	if ((((uint)(byte)*puVar3 == (uint)(byte)puVar6[0x60] + 1) && (puVar6[0x62] == '\x02')) && (puVar6[0x6f] == '\0')) {
		puVar6[0x6f] = 1;
		param_5 = 1;
		SpawnQuestItem(0xf, 0, 0, 5, 1, (char)uVar17, (char)uVar19, (char)uVar21, in_stack_ffffff88);
	}
	if ((*puVar5 != '\0') && (*puVar4 == '\x05')) {
		if (3 < (byte)puVar6[0x177]) {
			ObjChangeMapResync(1, 0xb, 0x14, 0x12, param_5, uVar17, uVar19, uVar21, in_stack_ffffff88);
		}
		if (5 < (byte)puVar6[0x177]) {
			ObjChangeMapResync(1, 0x12, 0x14, 0x18, param_5, uVar17, uVar19, uVar21, in_stack_ffffff88);
		}
		if (6 < (byte)puVar6[0x177]) {
			InitVPTriggers();
		}
		iVar23 = 0;
		while (iVar23 < *(int *)puVar12) {
			SyncObjectAnim((ulonglong)*puVar25);
			puVar25 = puVar25 + 1;
			iVar23 = iVar23 + 1;
		}
	}
	if ((*puVar3 == puVar6[0x168]) && (*puVar5 == '\0')) {
		if (((puVar6[0x178] == 1) || (2 < (byte)puVar6[0x178])) && ((puVar6[0x16a] == '\x02' || (puVar6[0x16a] == '\x03')))) {
			puVar6[0x178] = 2;
		}
	}
	return;
}

void PrintQLString(longlong param_1, int param_2, int param_3, ulonglong param_4, ulonglong param_5,
    undefined8 param_6, int param_7, int param_8, undefined4 param_9)

{
	byte bVar1;
	uint uVar2;
	undefined *puVar3;
	undefined *puVar4;
	uint *puVar5;
	ulonglong uVar6;
	longlong lVar7;
	int iVar9;
	longlong lVar8;
	byte *pbVar10;
	int iVar11;
	int iVar12;
	longlong lVar13;
	longlong lVar14;
	ulonglong uVar15;
	ulonglong uVar16;
	ulonglong uVar17;
	longlong lVar18;
	longlong lVar19;
	ulonglong uVar20;
	longlong lVar21;
	undefined4 in_stack_ffffff78;

	puVar5 = _DAT_100f2078;
	puVar4 = PTR_DAT_100f2068;
	puVar3 = PTR_DAT_100f185c;
	lVar19 = (longlong)param_8;
	lVar18 = (longlong)param_7;
	uVar17 = ZEXT48(PTR_DAT_100f1db4);
	uVar2 = *(uint *)(PTR_DAT_100f1db4 + param_2 * 4);
	lVar21 = param_1 + (ulonglong) * (uint *)(PTR_DAT_100f1938 + uVar2 * 4 + 0x330) + 0x60;
	uVar15 = param_4;
	uVar16 = param_5;
	iVar9 = strlen((uint)param_4);
	uVar20 = 0;
	if (param_3 != 0) {
		lVar14 = 0;
		iVar12 = 0;
		lVar13 = 0;
		if (0 < iVar9) {
			if ((8 < iVar9) && (uVar6 = (ulonglong)(iVar9 - 1U >> 3), 0 < iVar9 + -8)) {
				do {
					pbVar10 = (byte *)((uint)param_4 + (int)lVar13);
					lVar13 = lVar13 + 8;
					uVar17 = (ulonglong)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar10[5]]];
					uVar16 = (ulonglong)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar10[6]]];
					uVar15 = (ulonglong)(byte)(&DAT_100f64e8)[(uint)pbVar10[7]];
					lVar14 = (ulonglong)(byte)(&DAT_100f6230)
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
					    + lVar14 + 8;
					uVar6 = uVar6 - 1;
				} while (uVar6 != 0);
			}
			iVar12 = (int)lVar14;
			lVar7 = (longlong)iVar9 - lVar13;
			lVar8 = param_4 + lVar13;
			if ((int)lVar13 < iVar9) {
				do {
					pbVar10 = (byte *)lVar8;
					lVar8 = lVar8 + 1;
					lVar14 = (ulonglong)(byte)(&DAT_100f6230)
					             [(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar10]]]
					    + lVar14 + 1;
					iVar12 = (int)lVar14;
					lVar7 = lVar7 + -1;
				} while (lVar7 != 0);
			}
		}
		if (iVar12 < 0x101) {
			uVar20 = (ulonglong)(uint)(0x101 - iVar12 >> 1);
		}
		lVar21 = lVar21 + uVar20;
	}
	iVar12 = (int)param_1;
	if (*(int *)puVar4 == param_2) {
		if (param_3 == 0) {
			iVar11 = iVar12 + 0x4c;
		} else {
			iVar11 = iVar12 + (int)uVar20 + 0x4c;
		}
		uVar15 = (ulonglong)*puVar5;
		uVar16 = 0xc;
		CelDecodeOnly(iVar11, (ulonglong)uVar2 + 0xcd, (ulonglong) * (uint *)puVar3, uVar15, 0xc, (int)uVar17,
		    (int)lVar18, (int)lVar19, in_stack_ffffff78);
	}
	iVar11 = 0;
	while (true) {
		if (iVar9 <= iVar11)
			break;
		bVar1 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint) * (byte *)param_4]];
		uVar20 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + uVar20 + 1;
		if ((bVar1 != 0) && ((int)uVar20 < 0x102)) {
			CPrintString(lVar21, (ulonglong)bVar1, param_5, uVar15, uVar16, (int)uVar17, (int)lVar18, (int)lVar19, in_stack_ffffff78);
		}
		iVar11 = iVar11 + 1;
		param_4 = param_4 + 1;
		lVar21 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + lVar21 + 1;
	}
	if (*(int *)puVar4 == param_2) {
		if (param_3 == 0) {
			iVar12 = 0x154 - iVar12;
		} else {
			iVar12 = iVar12 + (int)uVar20 + 100;
		}
		CelDecodeOnly(iVar12, (ulonglong)uVar2 + 0xcd, (ulonglong) * (uint *)puVar3, (ulonglong)*puVar5, 0xc,
		    (int)uVar17, (int)lVar18, (int)lVar19, in_stack_ffffff78);
	}
	return;
}

void DrawQuestLog(void)

{
	int iVar1;
	int *piVar2;
	uint *puVar3;
	ulonglong uVar4;
	undefined4 uVar5;
	undefined8 in_r8;
	undefined4 uVar6;
	undefined4 in_r9;
	undefined4 in_r10;
	int iVar7;
	int iVar8;
	int *piVar9;
	undefined4 in_stack_ffffffb8;

	puVar3 = _DAT_100f2078;
	piVar2 = _DAT_100f205c;
	iVar1 = _DAT_100f1f64;
	uVar6 = (undefined4)in_r8;
	uVar5 = (undefined4)((ulonglong)in_r8 >> 0x20);
	uVar4 = ZEXT48(&toc);
	PrintQLString(0, 2, 1, (ulonglong)_DAT_100f36fc, 3, in_r8, in_r9, in_r10, in_stack_ffffffb8);
	CelDecodeOnly(0x40, 0x1ff, (ulonglong) * *(uint **)((int)uVar4 + -0x7700), 1, 0x140, uVar6, in_r9, in_r10,
	    in_stack_ffffffb8);
	iVar8 = 0;
	piVar9 = *(int **)((int)uVar4 + -0x6f70);
	iVar7 = **(int **)((int)uVar4 + -0x6f6c);
	while (iVar8 < *piVar2) {
		PrintQLString(0, iVar7, 1, (ulonglong) * (uint *)(iVar1 + *piVar9 * 0x14 + 0x10), 0,
		    CONCAT44(uVar5, uVar6), in_r9, in_r10, in_stack_ffffffb8);
		iVar7 = iVar7 + 2;
		piVar9 = piVar9 + 1;
		iVar8 = iVar8 + 1;
	}
	PrintQLString(0, 0x16, 1, (ulonglong) * (uint *)((int)uVar4 + -0x58d8), 0, CONCAT44(uVar5, uVar6), in_r9,
	    in_r10, in_stack_ffffffb8);
	*puVar3 = (*puVar3 & 7) + 1;
	return;
}

void StartQuestlog(void)

{
	int *piVar1;
	int *piVar2;
	undefined *puVar3;
	undefined4 *puVar4;
	undefined *puVar5;
	int *piVar6;
	int iVar7;
	longlong lVar8;

	piVar2 = _DAT_100f2064;
	piVar1 = _DAT_100f205c;
	*_DAT_100f205c = 0;
	puVar3 = PTR_DAT_100f2068;
	lVar8 = 4;
	iVar7 = 0;
	piVar6 = _DAT_100f2060;
	puVar5 = PTR_DAT_100f19cc;
	do {
		if ((puVar5[2] == '\x02') && (*(int *)(puVar5 + 0x14) != 0)) {
			*piVar6 = iVar7;
			piVar6 = piVar6 + 1;
			*piVar1 = *piVar1 + 1;
		}
		if ((puVar5[0x1a] == '\x02') && (*(int *)(puVar5 + 0x2c) != 0)) {
			*piVar6 = iVar7 + 1;
			piVar6 = piVar6 + 1;
			*piVar1 = *piVar1 + 1;
		}
		if ((puVar5[0x32] == '\x02') && (*(int *)(puVar5 + 0x44) != 0)) {
			*piVar6 = iVar7 + 2;
			piVar6 = piVar6 + 1;
			*piVar1 = *piVar1 + 1;
		}
		if ((puVar5[0x4a] == '\x02') && (*(int *)(puVar5 + 0x5c) != 0)) {
			*piVar6 = iVar7 + 3;
			piVar6 = piVar6 + 1;
			*piVar1 = *piVar1 + 1;
		}
		puVar5 = puVar5 + 0x60;
		iVar7 = iVar7 + 4;
		lVar8 = lVar8 + -1;
	} while (lVar8 != 0);
	iVar7 = *piVar1;
	if (iVar7 < 6) {
		*piVar2 = 8;
	} else {
		*piVar2 = 5 - (iVar7 >> 1);
	}
	if (iVar7 == 0) {
		*(undefined4 *)puVar3 = 0x16;
	} else {
		*(int *)puVar3 = *piVar2;
	}
	puVar4 = _DAT_100f2078;
	*(undefined4 *)PTR_DAT_100f1808 = 1;
	*puVar4 = 1;
	return;
}

void QuestlogUp(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;

	if (*_DAT_100f205c != 0) {
		iVar1 = *(int *)PTR_DAT_100f2068;
		if (iVar1 == *_DAT_100f2064) {
			*(undefined4 *)PTR_DAT_100f2068 = 0x16;
		} else {
			if (iVar1 == 0x16) {
				*(int *)PTR_DAT_100f2068 = (*_DAT_100f205c + -1) * 2 + *_DAT_100f2064;
			} else {
				*(int *)PTR_DAT_100f2068 = iVar1 + -2;
			}
		}
		PlaySFX(0x45);
	}
	return;
}

void QuestlogDown(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;

	if (*_DAT_100f205c != 0) {
		iVar1 = *(int *)PTR_DAT_100f2068;
		if (iVar1 == 0x16) {
			*(int *)PTR_DAT_100f2068 = *_DAT_100f2064;
		} else {
			if (iVar1 == (*_DAT_100f205c + -1) * 2 + *_DAT_100f2064) {
				*(undefined4 *)PTR_DAT_100f2068 = 0x16;
			} else {
				*(int *)PTR_DAT_100f2068 = iVar1 + 2;
			}
		}
		PlaySFX(0x45);
	}
	return;
}

void QuestlogEnter(void)

{
	uint uVar1;
	undefined **ppuVar2;
	undefined8 in_r6;
	undefined8 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;

	ppuVar2 = &toc;
	PlaySFX(0x46);
	if (*(int *)ppuVar2[-0x1bdd] != 0) {
		uVar1 = *(uint *)ppuVar2[-0x1bda];
		if (uVar1 != 0x16) {
			InitQTextMsg((uint)(byte)ppuVar2[-0x1d81]
			                                [*(int *)(ppuVar2[-0x1bdc] + ((int)(uVar1 - *(int *)ppuVar2[-0x1bdb]) >> 1) * 4) * 0x18 + 0xe],
			    ZEXT48(ppuVar2[-0x1bdc]), (ulonglong)uVar1, in_r6, in_r7, in_r8,
			    in_r9, in_r10, in_stack_ffffffc8);
		}
	}
	*(undefined4 *)ppuVar2[-0x1df2] = 0;
	return;
}

void QuestlogESC(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	int *piVar2;
	int *piVar3;
	undefined *puVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	puVar4 = PTR_DAT_100f2068;
	piVar3 = _DAT_100f2064;
	piVar2 = _DAT_100f205c;
	uVar1 = (*(int *)PTR_DAT_100f1924 + -0x20) / 6 + (*(int *)PTR_DAT_100f1924 + -0x20 >> 0x1f) >> 1;
	iVar5 = uVar1 + (uVar1 >> 0x1f);
	if (*_DAT_100f205c != 0) {
		iVar6 = 0;
		iVar7 = 0;
		while (iVar6 < *piVar2) {
			if (iVar5 == iVar7 + *piVar3) {
				*(int *)puVar4 = iVar5;
				QuestlogEnter();
			}
			iVar7 = iVar7 + 2;
			iVar6 = iVar6 + 1;
		}
	}
	if (iVar5 == 0x16) {
		*(undefined4 *)puVar4 = 0x16;
		QuestlogEnter();
	}
	return;
}

void SetMultiQuest(int param_1, undefined8 param_2, uint param_3, int param_4)

{
	byte bVar1;
	undefined *puVar2;

	puVar2 = PTR_DAT_100f19cc;
	bVar1 = PTR_DAT_100f19cc[param_1 * 0x18 + 2];
	if (bVar1 == 3) {
		return;
	}
	if ((int)(uint)bVar1 < (int)param_2) {
		PTR_DAT_100f19cc[param_1 * 0x18 + 2] = (byte)param_2;
	}
	puVar2 = puVar2 + param_1 * 0x18;
	*(uint *)(puVar2 + 0x14) = *(uint *)(puVar2 + 0x14) | param_3;
	if (param_4 <= (int)(uint)(byte)puVar2[0xf]) {
		return;
	}
	puVar2[0xf] = (char)param_4;
	return;
}
