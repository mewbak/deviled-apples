
void FreeInvGFX(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	mem_free_dbg((int **)&DAT_100f41bc, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	return;
}

void InitInv(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	char cVar1;
	undefined4 *puVar2;
	undefined **ppuVar3;
	longlong lVar4;
	undefined4 in_stack_ffffffc8;

	ppuVar3 = &toc;
	cVar1 = PTR_DAT_100f1828[*(int *)PTR_DAT_100f1824 * 0x55ec + 0x15c];
	if (cVar1 == '\0') {
		ppuVar3 = &toc;
		lVar4 = LoadFileInMem((ulonglong)_DAT_100f2e8c, (undefined4 *)0x0, param_3, param_4, param_5, param_6,
		    param_7, param_8, in_stack_ffffffc8);
		ppuVar3[-0x1385] = (undefined *)lVar4;
	} else {
		if (cVar1 == '\x01') {
			ppuVar3 = &toc;
			lVar4 = LoadFileInMem((ulonglong)_DAT_100f2e88, (undefined4 *)0x0, param_3, param_4, param_5,
			    param_6, param_7, param_8, in_stack_ffffffc8);
			ppuVar3[-0x1385] = (undefined *)lVar4;
		} else {
			if (cVar1 == '\x02') {
				ppuVar3 = &toc;
				lVar4 = LoadFileInMem((ulonglong)_DAT_100f2e84, (undefined4 *)0x0, param_3, param_4, param_5,
				    param_6, param_7, param_8, in_stack_ffffffc8);
				ppuVar3[-0x1385] = (undefined *)lVar4;
			}
		}
	}
	puVar2 = (undefined4 *)ppuVar3[-0x1d9c];
	*(undefined4 *)ppuVar3[-0x1def] = 0;
	*puVar2 = 0;
	return;
}

void InvDrawSlotBack(int param_1, int param_2, int param_3, longlong param_4)

{
	byte bVar1;
	byte *pbVar2;
	int iVar3;
	byte *pbVar4;

	pbVar2 = (byte *)(*(int *)PTR_DAT_100f17cc + *(int *)(PTR_DAT_100f1938 + param_2 * 4) + param_1);
	iVar3 = param_3;
	do {
		do {
			pbVar4 = pbVar2;
			bVar1 = *pbVar4;
			if (0xaf < bVar1) {
				if (bVar1 < 0xc0) {
					*pbVar4 = bVar1 - 0x10;
				} else {
					if (0xef < bVar1) {
						*pbVar4 = bVar1 + 0xb0;
					}
				}
			}
			iVar3 = iVar3 + -1;
			pbVar2 = pbVar4 + 1;
		} while (iVar3 != 0);
		param_4 = param_4 + -1;
		pbVar2 = pbVar4 + (-0x2ff - param_3);
		iVar3 = param_3;
	} while (param_4 != 0);
	return;
}

void DrawInv(void)

{
	char cVar1;
	uint uVar2;
	undefined *puVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined4 *puVar9;
	undefined **ppuVar10;
	longlong lVar11;
	ulonglong uVar12;
	undefined uVar14;
	int iVar13;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 uVar15;
	undefined8 in_r10;
	undefined8 uVar16;
	undefined *puVar17;
	longlong lVar18;
	ulonglong uVar19;
	undefined4 in_stack_fffffef8;

	puVar9 = _DAT_100f1d3c;
	puVar8 = PTR_DAT_100f199c;
	puVar7 = PTR_DAT_100f18a4;
	puVar6 = PTR_DAT_100f1828;
	puVar5 = PTR_DAT_100f1824;
	puVar17 = PTR_DAT_100f17cc;
	ppuVar10 = &toc;
	CelDecodeOnly(0x180, 0x1ff, (ulonglong)_DAT_100f41bc, 1, 0x140, in_r8, in_r9, (int)in_r10,
	    in_stack_fffffef8);
	if (*(int *)(puVar6 + *(int *)puVar5 * 0x55ec + 0x4a0) != -1) {
		InvDrawSlotBack(0x205, 0xdb, 0x38, 0x38);
		lVar11 = (ulonglong) * (uint *)(puVar6 + *(int *)puVar5 * 0x55ec + 0x558) + 0xc;
		uVar19 = (ulonglong)
		    * (uint *)(s__AAAAAAACEEEEIIIIDNOOOOOX0UUUUYb_100f65a7 + (int)lVar11 * 4 + 0x41);
		if (*puVar7 == '\0') {
			uVar14 = 0xc5;
			if ((puVar6 + *(int *)puVar5 * 0x55ec)[0x4d4] != '\0') {
				uVar14 = 0xb5;
			}
			if (*(int *)(puVar6 + *(int *)puVar5 * 0x55ec + 0x5fc) == 0) {
				uVar14 = 0xe5;
			}
			in_r10 = 8;
			CelDecodeClr(uVar14, 0x205, 0xdb, (ulonglong) * (uint *)puVar8, lVar11, uVar19, 0, 8, in_stack_fffffef8);
		}
		if (*(int *)(puVar6 + *(int *)puVar5 * 0x55ec + 0x5fc) == 0) {
			in_r10 = 1;
			CelDrawHdrLightRed(0x205, 0xdb, (ulonglong) * (uint *)puVar8, lVar11, uVar19, 0, 8, 1, in_stack_fffffef8);
		} else {
			CelDrawHdrOnly(0x205, 0xdb, (ulonglong) * (uint *)puVar8, lVar11, uVar19, 0, 8, (int)in_r10,
			    in_stack_fffffef8);
		}
	}
	if (*(int *)(puVar6 + *(int *)puVar5 * 0x55ec + 0x610) != -1) {
		InvDrawSlotBack(0x1b0, 0x16d, 0x1c, 0x1c);
		lVar11 = (ulonglong) * (uint *)(puVar6 + *(int *)puVar5 * 0x55ec + 0x6c8) + 0xc;
		uVar19 = (ulonglong)
		    * (uint *)(s__AAAAAAACEEEEIIIIDNOOOOOX0UUUUYb_100f65a7 + (int)lVar11 * 4 + 0x41);
		if (*puVar7 == '\x01') {
			uVar14 = 0xc5;
			if ((puVar6 + *(int *)puVar5 * 0x55ec)[0x644] != '\0') {
				uVar14 = 0xb5;
			}
			if (*(int *)(puVar6 + *(int *)puVar5 * 0x55ec + 0x76c) == 0) {
				uVar14 = 0xe5;
			}
			in_r10 = 8;
			CelDecodeClr(uVar14, 0x1b0, 0x16d, (ulonglong) * (uint *)puVar8, lVar11, uVar19, 0, 8, in_stack_fffffef8);
		}
		if (*(int *)(puVar6 + *(int *)puVar5 * 0x55ec + 0x76c) == 0) {
			in_r10 = 1;
			CelDrawHdrLightRed(0x1b0, 0x16d, (ulonglong) * (uint *)puVar8, lVar11, uVar19, 0, 8, 1, in_stack_fffffef8);
		} else {
			CelDrawHdrOnly(0x1b0, 0x16d, (ulonglong) * (uint *)puVar8, lVar11, uVar19, 0, 8, (int)in_r10,
			    in_stack_fffffef8);
		}
	}
	if (*(int *)(puVar6 + *(int *)puVar5 * 0x55ec + 0x780) != -1) {
		InvDrawSlotBack(0x279, 0x16d, 0x1c, 0x1c);
		lVar11 = (ulonglong) * (uint *)(puVar6 + *(int *)puVar5 * 0x55ec + 0x838) + 0xc;
		uVar19 = (ulonglong)
		    * (uint *)(s__AAAAAAACEEEEIIIIDNOOOOOX0UUUUYb_100f65a7 + (int)lVar11 * 4 + 0x41);
		if (*puVar7 == '\x02') {
			uVar14 = 0xc5;
			if ((puVar6 + *(int *)puVar5 * 0x55ec)[0x7b4] != '\0') {
				uVar14 = 0xb5;
			}
			if (*(int *)(puVar6 + *(int *)puVar5 * 0x55ec + 0x8dc) == 0) {
				uVar14 = 0xe5;
			}
			in_r10 = 8;
			CelDecodeClr(uVar14, 0x279, 0x16d, (ulonglong) * (uint *)puVar8, lVar11, uVar19, 0, 8, in_stack_fffffef8);
		}
		if (*(int *)(puVar6 + *(int *)puVar5 * 0x55ec + 0x8dc) == 0) {
			in_r10 = 1;
			CelDrawHdrLightRed(0x279, 0x16d, (ulonglong) * (uint *)puVar8, lVar11, uVar19, 0, 8, 1, in_stack_fffffef8);
		} else {
			CelDrawHdrOnly(0x279, 0x16d, (ulonglong) * (uint *)puVar8, lVar11, uVar19, 0, 8, (int)in_r10,
			    in_stack_fffffef8);
		}
	}
	if (*(int *)(puVar6 + *(int *)puVar5 * 0x55ec + 0x8f0) != -1) {
		InvDrawSlotBack(0x24d, 0xdc, 0x1c, 0x1c);
		lVar11 = (ulonglong) * (uint *)(puVar6 + *(int *)puVar5 * 0x55ec + 0x9a8) + 0xc;
		uVar19 = (ulonglong)
		    * (uint *)(s__AAAAAAACEEEEIIIIDNOOOOOX0UUUUYb_100f65a7 + (int)lVar11 * 4 + 0x41);
		if (*puVar7 == '\x03') {
			uVar14 = 0xc5;
			if ((puVar6 + *(int *)puVar5 * 0x55ec)[0x924] != '\0') {
				uVar14 = 0xb5;
			}
			if (*(int *)(puVar6 + *(int *)puVar5 * 0x55ec + 0xa4c) == 0) {
				uVar14 = 0xe5;
			}
			in_r10 = 8;
			CelDecodeClr(uVar14, 0x24d, 0xdc, (ulonglong) * (uint *)puVar8, lVar11, uVar19, 0, 8, in_stack_fffffef8);
		}
		if (*(int *)(puVar6 + *(int *)puVar5 * 0x55ec + 0xa4c) == 0) {
			in_r10 = 1;
			CelDrawHdrLightRed(0x24d, 0xdc, (ulonglong) * (uint *)puVar8, lVar11, uVar19, 0, 8, 1, in_stack_fffffef8);
		} else {
			CelDrawHdrOnly(0x24d, 0xdc, (ulonglong) * (uint *)puVar8, lVar11, uVar19, 0, 8, (int)in_r10,
			    in_stack_fffffef8);
		}
	}
	if (*(int *)(puVar6 + *(int *)puVar5 * 0x55ec + 0xa60) != -1) {
		InvDrawSlotBack(0x191, 0x140, 0x38, 0x54);
		iVar13 = *(int *)puVar5 * 0x55ec;
		lVar11 = (ulonglong) * (uint *)(puVar6 + iVar13 + 0xb18) + 0xc;
		uVar2 = *(uint *)(s__AAAAAAACEEEEIIIIDNOOOOOX0UUUUYb_100f65a7 + (int)lVar11 * 4 + 0x41);
		uVar19 = (ulonglong)uVar2;
		if (uVar2 == 0x1c) {
			lVar18 = 0x19f;
		} else {
			lVar18 = 0x191;
		}
		if (*(int *)(&DAT_100f68b8 + (int)lVar11 * 4) == 0x54) {
			uVar16 = 0x140;
		} else {
			uVar16 = 0x132;
		}
		if (*puVar7 == '\x04') {
			uVar14 = 0xc5;
			if (puVar6[iVar13 + 0xa94] != '\0') {
				uVar14 = 0xb5;
			}
			if (*(int *)(puVar6 + iVar13 + 0xbbc) == 0) {
				uVar14 = 0xe5;
			}
			in_r10 = 8;
			CelDecodeClr(uVar14, lVar18, uVar16, (ulonglong) * (uint *)puVar8, lVar11, uVar19, 0, 8,
			    in_stack_fffffef8);
		}
		if (*(int *)(puVar6 + *(int *)puVar5 * 0x55ec + 0xbbc) == 0) {
			uVar15 = 8;
			in_r10 = 1;
			CelDrawHdrLightRed(lVar18, uVar16, (ulonglong) * (uint *)puVar8, lVar11, uVar19, 0, 8, 1, in_stack_fffffef8);
		} else {
			uVar15 = 8;
			CelDrawHdrOnly((int)lVar18, uVar16, (ulonglong) * (uint *)puVar8, lVar11, uVar19, 0, 8, (int)in_r10,
			    in_stack_fffffef8);
		}
		if (puVar6[*(int *)puVar5 * 0x55ec + 0xb15] == '\x02') {
			InvDrawSlotBack(0x277, 0x140, 0x38, 0x54);
			*(undefined4 *)ppuVar10[-0x1ca4] = 0;
			*puVar9 = 1;
			if (uVar2 == 0x1c) {
				uVar12 = (ulonglong) * (uint *)puVar17 + 0x3c285;
			} else {
				uVar12 = (ulonglong) * (uint *)puVar17 + 0x3c277;
			}
			CelDecodeHdrLightTrans(uVar12, (ulonglong) * (uint *)puVar8, lVar11, uVar19, 0, 8, uVar15, (int)in_r10,
			    in_stack_fffffef8);
			*puVar9 = 0;
		}
	}
	if (*(int *)(puVar6 + *(int *)puVar5 * 0x55ec + 0xbd0) != -1) {
		InvDrawSlotBack(0x277, 0x140, 0x38, 0x54);
		iVar13 = *(int *)puVar5 * 0x55ec;
		lVar11 = (ulonglong) * (uint *)(puVar6 + iVar13 + 0xc88) + 0xc;
		uVar19 = (ulonglong)
		    * (uint *)(s__AAAAAAACEEEEIIIIDNOOOOOX0UUUUYb_100f65a7 + (int)lVar11 * 4 + 0x41);
		if (*(uint *)(s__AAAAAAACEEEEIIIIDNOOOOOX0UUUUYb_100f65a7 + (int)lVar11 * 4 + 0x41) == 0x1c) {
			lVar18 = 0x285;
		} else {
			lVar18 = 0x279;
		}
		if (*(int *)(&DAT_100f68b8 + (int)lVar11 * 4) == 0x54) {
			uVar16 = 0x140;
		} else {
			uVar16 = 0x132;
		}
		if (*puVar7 == '\x05') {
			uVar14 = 0xc5;
			if (puVar6[iVar13 + 0xc04] != '\0') {
				uVar14 = 0xb5;
			}
			if (*(int *)(puVar6 + iVar13 + 0xd2c) == 0) {
				uVar14 = 0xe5;
			}
			in_r10 = 8;
			CelDecodeClr(uVar14, lVar18, uVar16, (ulonglong) * (uint *)puVar8, lVar11, uVar19, 0, 8,
			    in_stack_fffffef8);
		}
		if (*(int *)(puVar6 + *(int *)puVar5 * 0x55ec + 0xd2c) == 0) {
			in_r10 = 1;
			CelDrawHdrLightRed(lVar18, uVar16, (ulonglong) * (uint *)puVar8, lVar11, uVar19, 0, 8, 1, in_stack_fffffef8);
		} else {
			CelDrawHdrOnly((int)lVar18, uVar16, (ulonglong) * (uint *)puVar8, lVar11, uVar19, 0, 8, (int)in_r10,
			    in_stack_fffffef8);
		}
	}
	if (*(int *)(puVar6 + *(int *)puVar5 * 0x55ec + 0xd40) != -1) {
		InvDrawSlotBack(0x205, 0x140, 0x38, 0x54);
		lVar11 = (ulonglong) * (uint *)(puVar6 + *(int *)puVar5 * 0x55ec + 0xdf8) + 0xc;
		uVar19 = (ulonglong)
		    * (uint *)(s__AAAAAAACEEEEIIIIDNOOOOOX0UUUUYb_100f65a7 + (int)lVar11 * 4 + 0x41);
		if (*puVar7 == '\x06') {
			uVar14 = 0xc5;
			if ((puVar6 + *(int *)puVar5 * 0x55ec)[0xd74] != '\0') {
				uVar14 = 0xb5;
			}
			if (*(int *)(puVar6 + *(int *)puVar5 * 0x55ec + 0xe9c) == 0) {
				uVar14 = 0xe5;
			}
			in_r10 = 8;
			CelDecodeClr(uVar14, 0x205, 0x140, (ulonglong) * (uint *)puVar8, lVar11, uVar19, 0, 8, in_stack_fffffef8);
		}
		if (*(int *)(puVar6 + *(int *)puVar5 * 0x55ec + 0xe9c) == 0) {
			in_r10 = 1;
			CelDrawHdrLightRed(0x205, 0x140, (ulonglong) * (uint *)puVar8, lVar11, uVar19, 0, 8, 1, in_stack_fffffef8);
		} else {
			CelDrawHdrOnly(0x205, 0x140, (ulonglong) * (uint *)puVar8, lVar11, uVar19, 0, 8, (int)in_r10,
			    in_stack_fffffef8);
		}
	}
	iVar13 = 0;
	puVar17 = &DAT_100fc5bc;
	do {
		if (puVar6[*(int *)puVar5 * 0x55ec + iVar13 + 0x482c] != '\0') {
			InvDrawSlotBack(*(int *)(puVar17 + 200) + 0x40, *(int *)(puVar17 + 0xcc) + 0x9f, 0x1c, 0x1c);
		}
		iVar13 = iVar13 + 1;
		puVar17 = puVar17 + 8;
	} while (iVar13 < 0x28);
	iVar13 = 0;
	puVar17 = &DAT_100fc5bc;
	do {
		cVar1 = (puVar6 + *(int *)puVar5 * 0x55ec)[iVar13 + 0x482c];
		if ('\0' < cVar1) {
			iVar4 = ((int)cVar1 + -1) * 0x170;
			puVar3 = puVar6 + *(int *)puVar5 * 0x55ec + iVar4;
			lVar11 = (ulonglong) * (uint *)(puVar3 + 0xf68) + 0xc;
			uVar19 = (ulonglong)
			    * (uint *)(s__AAAAAAACEEEEIIIIDNOOOOOX0UUUUYb_100f65a7 + (int)lVar11 * 4 + 0x41);
			if ((int)(char)*puVar7 == (int)cVar1 + 6) {
				uVar14 = 0xc5;
				if (puVar3[0xee4] != '\0') {
					uVar14 = 0xb5;
				}
				if (*(int *)(puVar3 + 0x100c) == 0) {
					uVar14 = 0xe5;
				}
				in_r10 = 8;
				CelDecodeClr(uVar14, (ulonglong) * (uint *)(puVar17 + 200) + 0x40,
				    (ulonglong) * (uint *)(puVar17 + 0xcc) + 0x9f, (ulonglong) * (uint *)puVar8, lVar11,
				    uVar19, 0, 8, in_stack_fffffef8);
			}
			if (*(int *)(puVar6 + *(int *)puVar5 * 0x55ec + iVar4 + 0x100c) == 0) {
				in_r10 = 1;
				CelDrawHdrLightRed((ulonglong) * (uint *)(puVar17 + 200) + 0x40,
				    (ulonglong) * (uint *)(puVar17 + 0xcc) + 0x9f, (ulonglong) * (uint *)puVar8, lVar11,
				    uVar19, 0, 8, 1, in_stack_fffffef8);
			} else {
				CelDrawHdrOnly(*(int *)(puVar17 + 200) + 0x40, (ulonglong) * (uint *)(puVar17 + 0xcc) + 0x9f,
				    (ulonglong) * (uint *)puVar8, lVar11, uVar19, 0, 8, (int)in_r10, in_stack_fffffef8);
			}
		}
		iVar13 = iVar13 + 1;
		puVar17 = puVar17 + 8;
	} while (iVar13 < 0x28);
	return;
}

void DrawInvBelt(void)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	longlong lVar7;
	longlong lVar8;
	undefined uVar9;
	undefined *puVar10;
	undefined4 uVar11;
	undefined4 uVar12;
	undefined8 in_r10;
	ulonglong uVar13;
	int iVar14;
	int iVar15;
	undefined4 in_stack_ffffff88;

	puVar6 = PTR_DAT_100f199c;
	puVar5 = PTR_DAT_100f1938;
	puVar4 = PTR_DAT_100f18a4;
	puVar3 = PTR_DAT_100f1828;
	puVar2 = PTR_DAT_100f1824;
	uVar13 = ZEXT48(&toc);
	if (*(int *)PTR_DAT_100f1900 == 0) {
		DrawPanelBox(0xcd, 0x15, 0xe8, 0x1c, 0x10d, 0x205);
		iVar14 = 0;
		lVar7 = uVar13 + 0x35ec;
		iVar15 = 0;
		do {
			if (*(int *)(puVar3 + *(int *)puVar2 * 0x55ec + iVar15 + 0x485c) != -1) {
				iVar1 = (int)lVar7;
				InvDrawSlotBack(*(int *)(iVar1 + 0x208) + 0x40, *(int *)(iVar1 + 0x20c) + 0x9f, 0x1c, 0x1c);
				puVar10 = puVar3 + *(int *)puVar2 * 0x55ec + iVar15;
				lVar8 = (ulonglong) * (uint *)(puVar10 + 0x4914) + 0xc;
				uVar13 = (ulonglong)
				    * (uint *)(s__AAAAAAACEEEEIIIIDNOOOOOX0UUUUYb_100f65a7 + (int)lVar8 * 4 + 0x41);
				if ((int)(char)*puVar4 == iVar14 + 0x2f) {
					uVar9 = 0xc5;
					if (puVar10[0x4890] != '\0') {
						uVar9 = 0xb5;
					}
					if (*(int *)(puVar10 + 0x49b8) == 0) {
						uVar9 = 0xe5;
					}
					in_r10 = 8;
					CelDecodeClr(uVar9, (ulonglong) * (uint *)(iVar1 + 0x208) + 0x40,
					    (ulonglong) * (uint *)(iVar1 + 0x20c) + 0x9f, (ulonglong) * (uint *)puVar6, lVar8,
					    uVar13, 0, 8, in_stack_ffffff88);
				}
				if (*(int *)(puVar3 + *(int *)puVar2 * 0x55ec + iVar15 + 0x49b8) == 0) {
					uVar11 = 0;
					uVar12 = 8;
					in_r10 = 1;
					CelDrawHdrLightRed((ulonglong) * (uint *)(iVar1 + 0x208) + 0x40,
					    (ulonglong) * (uint *)(iVar1 + 0x20c) + 0x9f, (ulonglong) * (uint *)puVar6, lVar8,
					    uVar13, 0, 8, 1, in_stack_ffffff88);
				} else {
					uVar11 = 0;
					uVar12 = 8;
					CelDrawHdrOnly(*(int *)(iVar1 + 0x208) + 0x40, (ulonglong) * (uint *)(iVar1 + 0x20c) + 0x9f,
					    (ulonglong) * (uint *)puVar6, lVar8, uVar13, 0, 8, (int)in_r10, in_stack_ffffff88);
				}
				puVar10 = puVar3 + *(int *)puVar2 * 0x55ec + iVar15;
				if (((*(int *)(*(int *)(puVar10 + 0x49bc) * 0x4c + 0x100fc868) != 0) && (*(int *)(puVar10 + 0x49b8) != 0)) && (*(int *)(puVar10 + 0x485c) != 0xb)) {
					CPrintString(((ulonglong) * (uint *)(iVar1 + 0x208) + (ulonglong) * (uint *)(puVar5 + *(int *)(iVar1 + 0x20c) * 4 + 0x27c) + 0x5c) - (ulonglong)(byte)(&DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[iVar14 + 0x31U & 0xff]]],
					    (ulonglong)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[iVar14 + 0x31U & 0xff]], 0,
					    (ulonglong) * (uint *)(iVar1 + 0x208), uVar13, uVar11, uVar12, (int)in_r10,
					    in_stack_ffffff88);
				}
			}
			iVar14 = iVar14 + 1;
			lVar7 = lVar7 + 8;
			iVar15 = iVar15 + 0x170;
		} while (iVar14 < 8);
	}
	return;
}

ulonglong AutoPlace(int param_1, int param_2, longlong param_3, int param_4, int param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined4 uVar1;
	uint uVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	undefined8 uVar7;
	longlong lVar8;
	int *piVar9;
	int iVar10;
	int iVar11;
	longlong lVar12;
	ulonglong uVar13;
	longlong lVar14;
	undefined4 in_stack_ffffffb8;

	uVar2 = param_2 / 10 + (param_2 >> 0x1f);
	lVar5 = ((ulonglong)uVar2 + (ulonglong)(uVar2 >> 0x1f)) * 10;
	uVar13 = 1;
	lVar6 = lVar5;
	if ((int)lVar5 < 0) {
		lVar6 = 0;
	}
	uVar2 = param_2 / 10 + (param_2 >> 0x1f);
	lVar4 = ZEXT48(PTR_DAT_100f1828) + (longlong)param_1 * 0x55ec;
	lVar12 = lVar4 + lVar6;
	lVar3 = (longlong)param_2 + ((ulonglong)uVar2 + (ulonglong)(uVar2 >> 0x1f)) * -10;
	iVar10 = 0;
	while (true) {
		if ((param_4 <= iVar10) || ((int)uVar13 == 0))
			break;
		if (0x27 < (int)lVar6) {
			uVar13 = 0;
		}
		lVar14 = lVar3;
		if ((int)lVar3 < 0) {
			lVar14 = 0;
		}
		lVar8 = lVar12 + lVar14;
		iVar11 = 0;
		while ((iVar11 < (int)param_3 && ((int)uVar13 != 0))) {
			if ((int)lVar14 < 10) {
				uVar7 = countLeadingZeros(-(int)*(char *)((int)lVar8 + 0x482c));
				uVar13 = (ulonglong)((uint)uVar7 >> 5 & 0xff);
			} else {
				uVar13 = 0;
			}
			lVar8 = lVar8 + 1;
			lVar14 = lVar14 + 1;
			iVar11 = iVar11 + 1;
		}
		lVar12 = lVar12 + 10;
		lVar6 = lVar6 + 10;
		iVar10 = iVar10 + 1;
	}
	if (((int)uVar13 != 0) && (param_5 != 0)) {
		lVar12 = ZEXT48(PTR_DAT_100f1828) + (longlong)param_1 * 0x55ec;
		piVar9 = (int *)((int)lVar12 + 0x4828);
		lVar6 = lVar12 + 0x53cc;
		lVar14 = 0x2e;
		lVar12 = lVar12 + (ulonglong) * (uint *)((int)lVar12 + 0x4828) * 0x170 + 0xea0;
		do {
			lVar6 = lVar6 + 8;
			uVar1 = ((undefined4 *)lVar6)[1];
			lVar12 = lVar12 + 8;
			*(undefined4 *)lVar12 = *(undefined4 *)lVar6;
			((undefined4 *)lVar12)[1] = uVar1;
			lVar14 = lVar14 + -1;
		} while (lVar14 != 0);
		*piVar9 = *piVar9 + 1;
		if ((int)lVar5 < 0) {
			lVar5 = 0;
		}
		lVar6 = lVar4 + lVar5;
		iVar10 = 0;
		while (iVar10 < param_4) {
			lVar5 = lVar3;
			if ((int)lVar3 < 0) {
				lVar5 = 0;
			}
			lVar5 = lVar6 + lVar5;
			iVar11 = 0;
			lVar12 = param_3;
			if (0 < (int)param_3) {
				do {
					if ((iVar11 == 0) && (iVar10 == (int)((longlong)param_4 + -1))) {
						*(undefined *)((int)lVar5 + 0x482c) = (char)*(undefined4 *)((int)lVar4 + 0x4828);
					} else {
						*(char *)((int)lVar5 + 0x482c) = -(char)*(undefined4 *)((int)lVar4 + 0x4828);
					}
					lVar5 = lVar5 + 1;
					iVar11 = iVar11 + 1;
					lVar12 = lVar12 + -1;
				} while (lVar12 != 0);
			}
			lVar6 = lVar6 + 10;
			iVar10 = iVar10 + 1;
		}
		CalcPlrScrolls(param_1, (char)lVar3, (char)param_3, (char)param_4, (char)((longlong)param_4 + -1),
		    (char)lVar4, (char)lVar5, (char)lVar6, in_stack_ffffffb8);
	}
	return uVar13;
}

ulonglong SpecialAutoPlace(int param_1, int param_2, longlong param_3, int param_4, int param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined4 uVar1;
	uint uVar2;
	longlong lVar3;
	int iVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	undefined8 uVar8;
	longlong lVar9;
	int *piVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	longlong lVar14;
	ulonglong uVar15;
	longlong lVar16;
	undefined4 in_stack_ffffffb8;

	iVar4 = (int)param_3;
	uVar2 = param_2 / 10 + (param_2 >> 0x1f);
	lVar6 = ((ulonglong)uVar2 + (ulonglong)(uVar2 >> 0x1f)) * 10;
	uVar15 = 1;
	lVar7 = lVar6;
	if ((int)lVar6 < 0) {
		lVar7 = 0;
	}
	uVar2 = param_2 / 10 + (param_2 >> 0x1f);
	lVar5 = ZEXT48(PTR_DAT_100f1828) + (longlong)param_1 * 0x55ec;
	lVar14 = lVar5 + lVar7;
	lVar3 = (longlong)param_2 + ((ulonglong)uVar2 + (ulonglong)(uVar2 >> 0x1f)) * -10;
	iVar12 = 0;
	while (true) {
		if ((param_4 <= iVar12) || ((int)uVar15 == 0))
			break;
		if (0x27 < (int)lVar7) {
			uVar15 = 0;
		}
		lVar16 = lVar3;
		if ((int)lVar3 < 0) {
			lVar16 = 0;
		}
		lVar9 = lVar14 + lVar16;
		iVar13 = 0;
		while ((iVar13 < iVar4 && ((int)uVar15 != 0))) {
			if ((int)lVar16 < 10) {
				uVar8 = countLeadingZeros(-(int)*(char *)((int)lVar9 + 0x482c));
				uVar15 = (ulonglong)((uint)uVar8 >> 5 & 0xff);
			} else {
				uVar15 = 0;
			}
			lVar9 = lVar9 + 1;
			lVar16 = lVar16 + 1;
			iVar13 = iVar13 + 1;
		}
		lVar14 = lVar14 + 10;
		lVar7 = lVar7 + 10;
		iVar12 = iVar12 + 1;
	}
	iVar12 = (int)lVar5;
	if ((int)uVar15 == 0) {
		if ((iVar4 < 2) && (param_4 < 2)) {
			if (*(int *)(iVar12 + 0x485c) == -1) {
				uVar15 = 1;
			} else {
				if (*(int *)(iVar12 + 0x49cc) == -1) {
					uVar15 = 1;
				} else {
					if (*(int *)(iVar12 + 0x4b3c) == -1) {
						uVar15 = 1;
					} else {
						if (*(int *)(iVar12 + 0x4cac) == -1) {
							uVar15 = 1;
						} else {
							if (*(int *)(iVar12 + 0x4e1c) == -1) {
								uVar15 = 1;
							} else {
								if (*(int *)(iVar12 + 0x4f8c) == -1) {
									uVar15 = 1;
								} else {
									if (*(int *)(iVar12 + 0x50fc) == -1) {
										uVar15 = 1;
									} else {
										if (*(int *)(iVar12 + 0x526c) == -1) {
											uVar15 = 1;
										}
									}
								}
							}
						}
					}
				}
			}
		} else {
			uVar15 = 0;
		}
	}
	if (((int)uVar15 != 0) && (param_5 != 0)) {
		lVar14 = ZEXT48(PTR_DAT_100f1828) + (longlong)param_1 * 0x55ec;
		piVar10 = (int *)((int)lVar14 + 0x4828);
		lVar7 = lVar14 + 0x53cc;
		lVar16 = 0x2e;
		lVar14 = lVar14 + (ulonglong) * (uint *)((int)lVar14 + 0x4828) * 0x170 + 0xea0;
		do {
			lVar7 = lVar7 + 8;
			uVar1 = ((undefined4 *)lVar7)[1];
			lVar14 = lVar14 + 8;
			*(undefined4 *)lVar14 = *(undefined4 *)lVar7;
			((undefined4 *)lVar14)[1] = uVar1;
			lVar16 = lVar16 + -1;
		} while (lVar16 != 0);
		*piVar10 = *piVar10 + 1;
		if ((int)lVar6 < 0) {
			lVar6 = 0;
		}
		lVar7 = lVar5 + lVar6;
		iVar13 = 0;
		while (iVar13 < param_4) {
			lVar6 = lVar3;
			if ((int)lVar3 < 0) {
				lVar6 = 0;
			}
			lVar6 = lVar7 + lVar6;
			iVar11 = 0;
			lVar14 = param_3;
			if (0 < iVar4) {
				do {
					if ((iVar11 == 0) && (iVar13 == (int)((longlong)param_4 + -1))) {
						*(undefined *)((int)lVar6 + 0x482c) = (char)*(undefined4 *)(iVar12 + 0x4828);
					} else {
						*(char *)((int)lVar6 + 0x482c) = -(char)*(undefined4 *)(iVar12 + 0x4828);
					}
					lVar6 = lVar6 + 1;
					iVar11 = iVar11 + 1;
					lVar14 = lVar14 + -1;
				} while (lVar14 != 0);
			}
			lVar7 = lVar7 + 10;
			iVar13 = iVar13 + 1;
		}
		CalcPlrScrolls(param_1, (char)lVar3, (char)param_3, (char)param_4, (char)((longlong)param_4 + -1),
		    (char)lVar5, (char)lVar6, (char)lVar7, in_stack_ffffffb8);
	}
	return uVar15;
}

void GoldAutoPlace(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined4 uVar2;
	uint uVar3;
	bool bVar4;
	int iVar5;
	ulonglong uVar6;
	undefined4 *puVar7;
	undefined4 *puVar8;
	int iVar9;
	undefined *puVar10;
	undefined *puVar11;
	int iVar12;
	longlong lVar13;

	iVar12 = 0;
	puVar11 = PTR_DAT_100f1828 + param_1 * 0x55ec;
	bVar4 = false;
	puVar10 = puVar11;
	while ((iVar12 < *(int *)(puVar11 + 0x4828) && (!bVar4))) {
		if ((*(int *)(puVar10 + 0xeb0) == 0xb) && (iVar5 = *(int *)(puVar11 + 0x5498) + *(int *)(puVar10 + 0xf6c), iVar5 < 0x1389)) {
			*(int *)(puVar10 + 0xf6c) = iVar5;
			if (iVar5 < 0x9c4) {
				if (iVar5 < 0x3e9) {
					*(undefined4 *)(puVar10 + 0xf68) = 4;
				} else {
					*(undefined4 *)(puVar10 + 0xf68) = 5;
				}
			} else {
				*(undefined4 *)(puVar10 + 0xf68) = 6;
			}
			uVar6 = CalculateGold(param_1);
			*(int *)(puVar11 + 0x1c8) = (int)uVar6;
			bVar4 = true;
		}
		puVar10 = puVar10 + 0x170;
		iVar12 = iVar12 + 1;
	}
	if (!bVar4) {
		iVar12 = 0;
		puVar10 = puVar11;
		while ((iVar12 < *(int *)(puVar11 + 0x4828) && (!bVar4))) {
			if ((*(int *)(puVar10 + 0xeb0) == 0xb) && ((*(int *)(puVar10 + 0xf6c) < 5000 && (iVar5 = *(int *)(puVar10 + 0xf6c) + *(int *)(puVar11 + 0x5498), iVar5 < 0x1389)))) {
				*(int *)(puVar10 + 0xf6c) = iVar5;
				if (iVar5 < 0x9c4) {
					if (iVar5 < 0x3e9) {
						*(undefined4 *)(puVar10 + 0xf68) = 4;
					} else {
						*(undefined4 *)(puVar10 + 0xf68) = 5;
					}
				} else {
					*(undefined4 *)(puVar10 + 0xf68) = 6;
				}
				uVar6 = CalculateGold(param_1);
				*(int *)(puVar11 + 0x1c8) = (int)uVar6;
				bVar4 = true;
			}
			puVar10 = puVar10 + 0x170;
			iVar12 = iVar12 + 1;
		}
	}
	if (!bVar4) {
		iVar12 = 0x27;
		while (-1 < iVar12) {
			if (bVar4) {
				return;
			}
			uVar3 = iVar12 / 10 + (iVar12 >> 0x1f);
			iVar9 = (uVar3 + (uVar3 >> 0x1f)) * 10;
			iVar5 = iVar12 + (uVar3 + (uVar3 >> 0x1f)) * -10;
			if (puVar11[iVar5 + iVar9 + 0x482c] == '\0') {
				iVar1 = *(int *)(puVar11 + 0x4828);
				lVar13 = 0x2e;
				puVar8 = (undefined4 *)(puVar11 + iVar1 * 0x170 + 0xea0);
				puVar7 = (undefined4 *)(puVar11 + 0x53cc);
				do {
					uVar2 = puVar7[3];
					puVar8[2] = puVar7[2];
					puVar8[3] = uVar2;
					lVar13 = lVar13 + -1;
					puVar8 = puVar8 + 2;
					puVar7 = puVar7 + 2;
				} while (lVar13 != 0);
				*(int *)(puVar11 + 0x4828) = *(int *)(puVar11 + 0x4828) + 1;
				puVar11[iVar5 + iVar9 + 0x482c] = (char)*(undefined4 *)(puVar11 + 0x4828);
				if (*(int *)(puVar11 + 0x5498) < 0x9c4) {
					if (*(int *)(puVar11 + 0x5498) < 0x3e9) {
						*(undefined4 *)(puVar11 + iVar1 * 0x170 + 0xf68) = 4;
					} else {
						*(undefined4 *)(puVar11 + iVar1 * 0x170 + 0xf68) = 5;
					}
				} else {
					*(undefined4 *)(puVar11 + iVar1 * 0x170 + 0xf68) = 6;
				}
				uVar6 = CalculateGold(param_1);
				*(int *)(puVar11 + 0x1c8) = (int)uVar6;
				bVar4 = true;
			}
			iVar12 = iVar12 + -1;
		}
	}
	return;
}

undefined8
WeaponAutoPlace(int param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	uint uVar1;
	undefined4 uVar2;
	undefined8 uVar3;
	undefined4 *puVar4;
	undefined4 *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	longlong lVar8;

	puVar7 = PTR_DAT_100f1828;
	param_1 = param_1 * 0x55ec;
	puVar6 = PTR_DAT_100f1828 + param_1;
	if (puVar6[0x5491] == '\x02') {
		if ((*(int *)(puVar6 + 0xa60) == -1) && (*(int *)(puVar6 + 0xbd0) == -1)) {
			NetSendCmdChItem(1, 4, param_3, param_4, param_5, param_6, param_7, param_8);
			lVar8 = 0x2e;
			puVar4 = (undefined4 *)(puVar6 + 0x53cc);
			puVar5 = (undefined4 *)(puVar6 + 0xa50);
			do {
				uVar2 = puVar4[3];
				puVar5[2] = puVar4[2];
				puVar5[3] = uVar2;
				lVar8 = lVar8 + -1;
				puVar4 = puVar4 + 2;
				puVar5 = puVar5 + 2;
			} while (lVar8 != 0);
			uVar3 = 1;
		} else {
			uVar3 = 0;
		}
	} else {
		if ((*(int *)(puVar6 + 0xa60) == -1) || (puVar6[0xb16] != '\x01')) {
			uVar1 = *(uint *)(PTR_DAT_100f1828 + param_1 + 0xbd0);
			if ((uVar1 == 0xffffffff) || ((PTR_DAT_100f1828 + param_1)[0xc86] != '\x01')) {
				if (*(int *)(puVar6 + 0xa60) == -1) {
					NetSendCmdChItem(1, 4, (ulonglong)uVar1, param_4, param_5, param_6, param_7, param_8);
					lVar8 = 0x2e;
					puVar4 = (undefined4 *)(puVar7 + param_1 + 0x53cc);
					puVar5 = (undefined4 *)(puVar7 + param_1 + 0xa50);
					do {
						uVar2 = puVar4[3];
						puVar5[2] = puVar4[2];
						puVar5[3] = uVar2;
						lVar8 = lVar8 + -1;
						puVar4 = puVar4 + 2;
						puVar5 = puVar5 + 2;
					} while (lVar8 != 0);
				} else {
					if ((uVar1 != 0xffffffff) || (puVar7 = PTR_DAT_100f1828 + param_1, puVar7[0xb15] == '\x02')) {
						return 0;
					}
					NetSendCmdChItem(1, 5, (ulonglong)uVar1, param_4, param_5, param_6, param_7, param_8);
					lVar8 = 0x2e;
					puVar4 = (undefined4 *)(puVar7 + 0x53cc);
					puVar5 = (undefined4 *)(puVar7 + 0xbc0);
					do {
						uVar2 = puVar4[3];
						puVar5[2] = puVar4[2];
						puVar5[3] = uVar2;
						lVar8 = lVar8 + -1;
						puVar4 = puVar4 + 2;
						puVar5 = puVar5 + 2;
					} while (lVar8 != 0);
				}
				uVar3 = 1;
			} else {
				uVar3 = 0;
			}
		} else {
			uVar3 = 0;
		}
	}
	return uVar3;
}

longlong SwapItem(int param_1, int param_2)

{
	undefined4 uVar1;
	undefined4 *puVar2;
	undefined4 *puVar3;
	longlong lVar4;
	undefined4 auStack376[50];
	uint local_b0;

	lVar4 = 0x2e;
	puVar2 = auStack376;
	puVar3 = (undefined4 *)(param_1 + -8);
	do {
		uVar1 = puVar3[3];
		puVar2[2] = puVar3[2];
		puVar2[3] = uVar1;
		lVar4 = lVar4 + -1;
		puVar2 = puVar2 + 2;
		puVar3 = puVar3 + 2;
	} while (lVar4 != 0);
	lVar4 = 0x2e;
	puVar2 = (undefined4 *)(param_1 + -8);
	puVar3 = (undefined4 *)(param_2 + -8);
	do {
		uVar1 = puVar3[3];
		puVar2[2] = puVar3[2];
		puVar2[3] = uVar1;
		lVar4 = lVar4 + -1;
		puVar2 = puVar2 + 2;
		puVar3 = puVar3 + 2;
	} while (lVar4 != 0);
	lVar4 = 0x2e;
	puVar2 = auStack376;
	puVar3 = (undefined4 *)(param_2 + -8);
	do {
		uVar1 = puVar2[3];
		puVar3[2] = puVar2[2];
		puVar3[3] = uVar1;
		lVar4 = lVar4 + -1;
		puVar2 = puVar2 + 2;
		puVar3 = puVar3 + 2;
	} while (lVar4 != 0);
	return (ulonglong)local_b0 + 0xc;
}

void CheckInvPaste(ulonglong param_1, longlong param_2, longlong param_3, ulonglong param_4,
    undefined8 param_5, undefined8 param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	bool bVar1;
	byte bVar2;
	uint uVar3;
	uint uVar4;
	uint uVar5;
	int *piVar6;
	int iVar7;
	bool bVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined *puVar12;
	int iVar13;
	int iVar14;
	undefined **ppuVar15;
	longlong lVar16;
	longlong lVar17;
	char cVar18;
	ulonglong uVar19;
	longlong lVar20;
	char cVar21;
	undefined uVar22;
	ulonglong uVar23;
	undefined uVar24;
	ulonglong uVar25;
	undefined uVar26;
	undefined uVar27;
	undefined uVar28;
	uint uVar29;
	ulonglong uVar30;
	ulonglong uVar31;
	longlong lVar32;
	undefined4 in_stack_fffffe28;
	undefined in_stack_fffffe2f;
	undefined4 local_1cc;

	puVar12 = PTR_DAT_100f1988;
	puVar11 = PTR_DAT_100f1984;
	puVar10 = PTR_DAT_100f1828;
	puVar9 = PTR_DAT_100f1824;
	ppuVar15 = &toc;
	uVar31 = ZEXT48(PTR_DAT_100f1828);
	iVar7 = (int)(param_1 * 0x55ec);
	piVar6 = (int *)(PTR_DAT_100f1828 + iVar7 + 0x5494);
	SetICursor(*piVar6 + 0xc);
	bVar1 = false;
	uVar30 = 0;
	uVar3 = *(uint *)puVar12;
	uVar4 = *(uint *)puVar11;
	uVar23 = param_2 + (ulonglong)(uint)(*(int *)ppuVar15[-0x1d8e] >> 1);
	uVar25 = param_3 + (ulonglong)(uint)(*(int *)ppuVar15[-0x1d90] >> 1);
	uVar29 = uVar4 & 1;
	uVar19 = (ulonglong)uVar29;
	while ((iVar14 = (int)uVar30, (uVar30 & 0xffffffff) < 0x49 && (!bVar1))) {
		param_4 = ZEXT48(&DAT_100fc5bc) + (ulonglong)(uint)(iVar14 << 3);
		iVar14 = *(int *)param_4;
		if ((iVar14 <= (int)uVar23) && ((int)uVar23 < iVar14 + 0x1c)) {
			uVar5 = ((int *)param_4)[1];
			param_4 = (ulonglong)uVar5;
			if (((int)(uVar5 - 0x1d) <= (int)uVar25) && ((int)uVar25 < (int)uVar5)) {
				bVar1 = true;
				uVar30 = uVar30 - 1;
			}
		}
		if ((int)uVar30 == 0x18) {
			if ((uVar3 & 1) == 0) {
				uVar23 = uVar23 - 0xe;
			}
			if (uVar29 == 0) {
				uVar25 = uVar25 - 0xe;
			}
		}
		if (((int)uVar30 == 0x40) && (uVar29 == 0)) {
			uVar25 = uVar25 + 0xe;
		}
		uVar30 = uVar30 + 1;
	}
	if (bVar1) {
		uVar29 = 7;
		if ((-1 < iVar14) && (iVar14 < 4)) {
			uVar29 = 4;
		}
		if ((3 < iVar14) && (iVar14 < 6)) {
			uVar29 = 5;
		}
		if (iVar14 == 6) {
			uVar29 = 6;
		}
		if ((6 < iVar14) && (iVar14 < 0x13)) {
			uVar29 = 1;
		}
		if ((0x12 < iVar14) && (iVar14 < 0x19)) {
			uVar29 = 3;
		}
		if ((0x40 < iVar14) && (iVar14 < 0x49)) {
			uVar29 = 8;
		}
		cVar18 = puVar10[iVar7 + 0x5491];
		bVar1 = uVar29 == (int)cVar18;
		if ((uVar29 == 1) && (cVar18 == '\x02')) {
			uVar29 = 2;
			bVar1 = true;
		}
		if ((((cVar18 == '\a') && (uVar29 == 8)) && (uVar3 == 1)) && ((uVar4 == 1 && (bVar1 = *(int *)(puVar10 + iVar7 + 0x5538) != 0 && ppuVar15[*(int *)(puVar10 + iVar7 + 0x553c) * 0x13 + 0xe26] != (undefined *)0x0, *(int *)(puVar10 + iVar7 + 0x53dc) == 0xb)))) {
			bVar1 = false;
		}
		if (uVar29 == 7) {
			lVar32 = 0;
			bVar8 = true;
			bVar1 = true;
			iVar13 = (int)(uVar30 - 0x19);
			iVar14 = iVar13 >> 0x1f;
			if (*(int *)(puVar10 + iVar7 + 0x53dc) == 0xb) {
				uVar3 = iVar13 / 10 + iVar14;
				uVar23 = uVar23 & 0xffffffff00000000 | (ulonglong)uVar3;
				uVar25 = (ulonglong)(uVar3 >> 0x1f);
				uVar19 = (((longlong)(int)((ulonglong)((longlong)iVar13 * 0x66666667) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar3) + (ulonglong)(uVar3 >> 0x1f)) * 10;
				param_4 = (uVar23 + uVar25) * 10;
			} else {
				uVar5 = iVar13 / 10 + iVar14;
				lVar17 = ((((longlong)(int)((ulonglong)((longlong)iVar13 * 0x66666667) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar5) + (ulonglong)(uVar5 >> 0x1f)) - (ulonglong)(uint)((int)(uVar4 - 1) >> 1)) * 10;
				if ((int)lVar17 < 0) {
					lVar17 = 0;
				}
				lVar16 = uVar31 + param_1 * 0x55ec + lVar17;
				uVar23 = uVar23 & 0xffffffff00000000 | (ulonglong)(uint)((int)(uVar3 - 1) >> 1);
				uVar5 = iVar13 / 10 + iVar14;
				lVar20 = ((longlong)(int)((ulonglong)((longlong)iVar13 * 0x66666667) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar5) + (ulonglong)(uVar5 >> 0x1f);
				uVar19 = lVar20 * 10;
				param_4 = ((uVar30 - 0x19) + lVar20 * -10) - uVar23;
				param_8 = 0;
				while ((bVar1 = bVar8, (int)param_8 < (int)uVar4 && (bVar1 = bVar8, bVar8))) {
					if (0x27 < (int)lVar17) {
						bVar8 = false;
					}
					uVar25 = param_4;
					if ((int)param_4 < 0) {
						uVar25 = 0;
					}
					uVar19 = lVar16 + uVar25;
					param_7 = 0;
					while (((int)param_7 < (int)uVar3 && (bVar8))) {
						if ((int)uVar25 < 10) {
							bVar2 = *(byte *)((int)uVar19 + 0x482c);
							uVar23 = (ulonglong)bVar2;
							lVar20 = lVar32;
							if (bVar2 != 0) {
								lVar20 = (longlong)(char)bVar2;
								if (lVar20 < 0) {
									lVar20 = -lVar20;
								}
								if (((int)lVar32 != 0) && (iVar14 = (int)lVar20, lVar20 = lVar32, (int)lVar32 != iVar14)) {
									bVar8 = false;
									lVar20 = lVar32;
								}
							}
						} else {
							bVar8 = false;
							lVar20 = lVar32;
						}
						uVar19 = uVar19 + 1;
						uVar25 = uVar25 + 1;
						param_7 = param_7 + 1;
						lVar32 = lVar20;
					}
					lVar16 = lVar16 + 10;
					lVar17 = lVar17 + 10;
					param_8 = param_8 + 1;
				}
			}
		}
		if ((((bVar1) && (uVar29 != 7)) && (uVar29 != 8)) && (*(int *)(puVar10 + iVar7 + 0x5538) == 0)) {
			cVar18 = (puVar10 + iVar7)[0x15c];
			bVar1 = false;
			if (cVar18 == '\0') {
				PlaySFX(0x2d6);
			} else {
				if (cVar18 == '\x01') {
					PlaySFX(0x26f);
				} else {
					if (cVar18 == '\x02') {
						PlaySFX(0x208);
					}
				}
			}
		}
		if (bVar1) {
			if ((int)param_1 == *(int *)puVar9) {
				PlaySFX((ulonglong)
				    * (uint *)(ppuVar15[-0x1c75] + (uint)(byte)ppuVar15[-0x1c74][*piVar6] * 4));
			}
			uVar28 = (undefined)param_8;
			uVar27 = (undefined)param_7;
			uVar26 = (undefined)uVar25;
			uVar24 = (undefined)uVar23;
			if (uVar29 < 9) {
				// WARNING: Could not recover jumptable at 0x10047084. Too many branches
				// WARNING: Treating indirect jump as call
				(*(code *)ppuVar15[uVar29 + 0xe0d])();
				return;
			}
			CalcPlrInv(param_1, 1, uVar19, param_4, uVar23, uVar25, param_7, param_8, in_stack_fffffe28);
			if ((int)param_1 == *(int *)puVar9) {
				uVar22 = SUB41(ppuVar15[-0x1daa], 0);
				cVar21 = (char)*(undefined4 *)ppuVar15[-0x1daa];
				cVar18 = (char)*(undefined4 *)ppuVar15[-0x1dab] + (char)(*(int *)ppuVar15[-0x1d95] >> 1);
				SetCursorPos(cVar21 + (char)(*(int *)ppuVar15[-0x1d94] >> 1), cVar18, cVar21, uVar22, uVar24,
				    uVar26, uVar27, uVar28, (char)in_stack_fffffe28, in_stack_fffffe2f, local_1cc);
				SetCursor_(1, cVar18, cVar21, uVar22, uVar24, uVar26, uVar27, uVar28, in_stack_fffffe28);
			}
		}
	}
	return;
}

void CheckInvSwap(ulonglong param_1, byte param_2, int param_3, ulonglong param_4, ulonglong param_5,
    ulonglong param_6, ulonglong param_7, ulonglong param_8, undefined4 param_9)

{
	undefined4 uVar1;
	int iVar2;
	undefined **ppuVar3;
	undefined4 *puVar4;
	ulonglong uVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	undefined7 uVar8;
	undefined uVar9;
	undefined7 uVar10;
	undefined uVar11;
	undefined7 uVar12;
	undefined uVar13;
	longlong lVar14;
	longlong lVar15;
	undefined4 in_stack_ffffffb8;

	uVar12 = (undefined7)(param_8 >> 8);
	uVar13 = (undefined)param_8;
	uVar10 = (undefined7)(param_7 >> 8);
	uVar11 = (undefined)param_7;
	uVar8 = (undefined7)(param_6 >> 8);
	uVar9 = (undefined)param_6;
	ppuVar3 = &toc;
	uVar7 = 0;
	RecreateItem(0x7f, param_3, param_4, param_5, 0, uVar9, uVar11, uVar13, in_stack_ffffffb8);
	uVar6 = ZEXT48(ppuVar3[-0x1dea]) + param_1 * 0x55ec;
	lVar14 = 0x2e;
	uVar5 = uVar6 + 0x53cc;
	puVar4 = (undefined4 *)(ppuVar3[-0x1da4] + 0xb688);
	do {
		uVar1 = puVar4[3];
		uVar5 = uVar5 + 8;
		*(undefined4 *)uVar5 = puVar4[2];
		((undefined4 *)uVar5)[1] = uVar1;
		lVar14 = lVar14 + -1;
		puVar4 = puVar4 + 2;
	} while (lVar14 != 0);
	iVar2 = (int)uVar6;
	if ((int)param_6 != 0) {
		*(undefined4 *)(iVar2 + 0x540c) = 1;
	}
	if (param_2 < 7) {
		lVar14 = uVar6 + 0x53cc;
		lVar15 = 0x2e;
		uVar5 = uVar6 + (ulonglong)param_2 * 0x170 + 0x490;
		do {
			lVar14 = lVar14 + 8;
			uVar1 = ((undefined4 *)lVar14)[1];
			uVar5 = uVar5 + 8;
			*(undefined4 *)uVar5 = *(undefined4 *)lVar14;
			((undefined4 *)uVar5)[1] = uVar1;
			lVar15 = lVar15 + -1;
		} while (lVar15 != 0);
		if (param_2 == 4) {
			if (*(char *)(iVar2 + 0x5491) == '\x02') {
				*(undefined4 *)(iVar2 + 0xbd0) = 0xffffffff;
			}
		} else {
			if ((param_2 == 5) && (*(char *)(iVar2 + 0x5491) == '\x02')) {
				*(undefined4 *)(iVar2 + 0xa60) = 0xffffffff;
			}
		}
	}
	CalcPlrInv(param_1, 1, uVar5, uVar6, uVar7, CONCAT71(uVar8, uVar9), CONCAT71(uVar10, uVar11),
	    CONCAT71(uVar12, uVar13), in_stack_ffffffb8);
	return;
}

void CheckInvCut(ulonglong param_1, int param_2, int param_3, undefined8 param_4, undefined8 param_5,
    ulonglong param_6, ulonglong param_7, ulonglong param_8, undefined4 param_9)

{
	undefined4 uVar1;
	uint uVar2;
	undefined4 *puVar3;
	undefined *puVar4;
	int iVar5;
	undefined *puVar6;
	int iVar7;
	undefined uVar8;
	undefined **ppuVar9;
	int iVar10;
	char cVar12;
	int iVar11;
	longlong lVar13;
	ulonglong uVar14;
	ulonglong uVar15;
	undefined uVar16;
	undefined uVar17;
	ulonglong uVar18;
	longlong lVar19;
	undefined uVar20;
	undefined uVar21;
	undefined uVar22;
	undefined uVar23;
	ulonglong uVar24;
	int iVar25;
	ulonglong uVar26;
	int *piVar27;
	longlong lVar28;
	ulonglong uVar29;
	longlong lVar30;
	longlong lVar31;
	undefined4 in_stack_ffffffa8;
	undefined uVar32;
	undefined in_stack_ffffffaf;
	int local_4c;

	puVar4 = PTR_DAT_100f18c8;
	puVar6 = PTR_DAT_100f1828;
	ppuVar9 = &toc;
	uVar29 = ZEXT48(PTR_DAT_100f1828);
	lVar28 = param_1 * 0x55ec;
	uVar18 = ZEXT48(PTR_DAT_100f18cc);
	uVar15 = ZEXT48(&DAT_100fc5bc);
	uVar26 = uVar29 + lVar28;
	piVar27 = (int *)uVar26;
	if (*piVar27 < 4) {
		if (*(int *)PTR_DAT_100f18cc != 0) {
			*(undefined4 *)PTR_DAT_100f18cc = 0;
			*(undefined4 *)puVar4 = 0;
		}
		uVar14 = 0;
		uVar24 = 0;
		while (true) {
			iVar25 = (int)uVar24;
			if ((0x48 < (uVar24 & 0xffffffff)) || ((int)uVar14 != 0))
				break;
			if ((*(int *)(&DAT_100fc5bc + iVar25 * 8) <= param_2) && (((param_2 < *(int *)(&DAT_100fc5bc + iVar25 * 8) + 0x1d && (iVar25 = *(int *)(iVar25 * 8 + 0x100fc5c0), iVar25 + -0x1d <= param_3)) && (param_3 < iVar25)))) {
				uVar14 = 1;
				uVar24 = uVar24 - 1;
			}
			uVar24 = uVar24 + 1;
		}
		if ((int)uVar14 != 0) {
			iVar5 = (int)lVar28;
			*(int *)(puVar6 + iVar5 + 0x53dc) = -1;
			if (((-1 < iVar25) && (iVar25 < 4)) && (*(int *)(puVar6 + iVar5 + 0x4a0) != -1)) {
				ppuVar9 = &toc;
				NetSendCmdDelItem(0, 0, uVar14, ZEXT48(&DAT_100fc5bc), uVar18, (int)param_6, (int)param_7, (int)param_8,
				    in_stack_ffffffa8);
				lVar30 = 0x2e;
				uVar14 = uVar29 + lVar28 + 0x53cc;
				lVar13 = uVar29 + lVar28 + 0x490;
				do {
					lVar13 = lVar13 + 8;
					uVar1 = ((undefined4 *)lVar13)[1];
					uVar14 = uVar14 + 8;
					*(undefined4 *)uVar14 = *(undefined4 *)lVar13;
					((undefined4 *)uVar14)[1] = uVar1;
					lVar30 = lVar30 + -1;
				} while (lVar30 != 0);
				*(int *)(puVar6 + iVar5 + 0x4a0) = -1;
			}
			if ((iVar25 == 4) && (*(int *)(puVar6 + iVar5 + 0x610) != -1)) {
				NetSendCmdDelItem(0, 1, uVar14, uVar15, uVar18, (int)param_6, (int)param_7, (int)param_8,
				    in_stack_ffffffa8);
				lVar30 = 0x2e;
				uVar14 = uVar29 + lVar28 + 0x53cc;
				lVar13 = uVar29 + lVar28 + 0x600;
				do {
					lVar13 = lVar13 + 8;
					uVar1 = ((undefined4 *)lVar13)[1];
					uVar14 = uVar14 + 8;
					*(undefined4 *)uVar14 = *(undefined4 *)lVar13;
					((undefined4 *)uVar14)[1] = uVar1;
					lVar30 = lVar30 + -1;
				} while (lVar30 != 0);
				*(int *)(puVar6 + iVar5 + 0x610) = -1;
			}
			if ((iVar25 == 5) && (*(int *)(puVar6 + iVar5 + 0x780) != -1)) {
				NetSendCmdDelItem(0, 2, uVar14, uVar15, uVar18, (int)param_6, (int)param_7, (int)param_8,
				    in_stack_ffffffa8);
				lVar30 = 0x2e;
				uVar14 = uVar29 + lVar28 + 0x53cc;
				lVar13 = uVar29 + lVar28 + 0x770;
				do {
					lVar13 = lVar13 + 8;
					uVar1 = ((undefined4 *)lVar13)[1];
					uVar14 = uVar14 + 8;
					*(undefined4 *)uVar14 = *(undefined4 *)lVar13;
					((undefined4 *)uVar14)[1] = uVar1;
					lVar30 = lVar30 + -1;
				} while (lVar30 != 0);
				*(int *)(puVar6 + iVar5 + 0x780) = -1;
			}
			if ((iVar25 == 6) && (*(int *)(puVar6 + iVar5 + 0x8f0) != -1)) {
				NetSendCmdDelItem(0, 3, uVar14, uVar15, uVar18, (int)param_6, (int)param_7, (int)param_8,
				    in_stack_ffffffa8);
				lVar30 = 0x2e;
				uVar14 = uVar29 + lVar28 + 0x53cc;
				lVar13 = uVar29 + lVar28 + 0x8e0;
				do {
					lVar13 = lVar13 + 8;
					uVar1 = ((undefined4 *)lVar13)[1];
					uVar14 = uVar14 + 8;
					*(undefined4 *)uVar14 = *(undefined4 *)lVar13;
					((undefined4 *)uVar14)[1] = uVar1;
					lVar30 = lVar30 + -1;
				} while (lVar30 != 0);
				*(int *)(puVar6 + iVar5 + 0x8f0) = -1;
			}
			if (((6 < iVar25) && (iVar25 < 0xd)) && (*(int *)(puVar6 + iVar5 + 0xa60) != -1)) {
				NetSendCmdDelItem(0, 4, uVar14, uVar15, uVar18, (int)param_6, (int)param_7, (int)param_8,
				    in_stack_ffffffa8);
				lVar30 = 0x2e;
				uVar14 = uVar29 + lVar28 + 0x53cc;
				lVar13 = uVar29 + lVar28 + 0xa50;
				do {
					lVar13 = lVar13 + 8;
					uVar1 = ((undefined4 *)lVar13)[1];
					uVar14 = uVar14 + 8;
					*(undefined4 *)uVar14 = *(undefined4 *)lVar13;
					((undefined4 *)uVar14)[1] = uVar1;
					lVar30 = lVar30 + -1;
				} while (lVar30 != 0);
				*(int *)(puVar6 + iVar5 + 0xa60) = -1;
			}
			if (((0xc < iVar25) && (iVar25 < 0x13)) && (*(int *)(puVar6 + iVar5 + 0xbd0) != -1)) {
				NetSendCmdDelItem(0, 5, uVar14, uVar15, uVar18, (int)param_6, (int)param_7, (int)param_8,
				    in_stack_ffffffa8);
				lVar30 = 0x2e;
				uVar14 = uVar29 + lVar28 + 0x53cc;
				lVar13 = uVar29 + lVar28 + 0xbc0;
				do {
					lVar13 = lVar13 + 8;
					uVar1 = ((undefined4 *)lVar13)[1];
					uVar14 = uVar14 + 8;
					*(undefined4 *)uVar14 = *(undefined4 *)lVar13;
					((undefined4 *)uVar14)[1] = uVar1;
					lVar30 = lVar30 + -1;
				} while (lVar30 != 0);
				*(int *)(puVar6 + iVar5 + 0xbd0) = -1;
			}
			if (((0x12 < iVar25) && (iVar25 < 0x19)) && (*(int *)(puVar6 + iVar5 + 0xd40) != -1)) {
				NetSendCmdDelItem(0, 6, uVar14, uVar15, uVar18, (int)param_6, (int)param_7, (int)param_8,
				    in_stack_ffffffa8);
				lVar30 = 0x2e;
				uVar14 = uVar29 + lVar28 + 0x53cc;
				lVar13 = uVar29 + lVar28 + 0xd30;
				do {
					lVar13 = lVar13 + 8;
					uVar1 = ((undefined4 *)lVar13)[1];
					uVar14 = uVar14 + 8;
					*(undefined4 *)uVar14 = *(undefined4 *)lVar13;
					((undefined4 *)uVar14)[1] = uVar1;
					lVar30 = lVar30 + -1;
				} while (lVar30 != 0);
				*(int *)(puVar6 + iVar5 + 0xd40) = -1;
			}
			if (0x18 < iVar25) {
				if (iVar25 < 0x41) {
					uVar14 = uVar24 - 0x19;
					if ((puVar6 + iVar5 + 0x482c)[iVar25 + -0x19] != '\0') {
						cVar12 = (puVar6 + iVar5 + 0x482c)[(int)uVar14];
						if (cVar12 < '\x01') {
							lVar13 = -(longlong)cVar12;
						} else {
							lVar13 = (longlong)cVar12;
						}
						lVar30 = 4;
						uVar15 = uVar26;
						do {
							iVar11 = (int)uVar15;
							iVar10 = (int)lVar13;
							iVar7 = (int)-lVar13;
							if ((iVar10 == (int)*(char *)(iVar11 + 0x482c)) || (iVar7 == (int)*(char *)(iVar11 + 0x482c))) {
								*(undefined *)(iVar11 + 0x482c) = 0;
							}
							if ((iVar10 == (int)*(char *)(iVar11 + 0x482d)) || (iVar7 == (int)*(char *)(iVar11 + 0x482d))) {
								*(undefined *)(iVar11 + 0x482d) = 0;
							}
							if ((iVar10 == (int)*(char *)(iVar11 + 0x482e)) || (iVar7 == (int)*(char *)(iVar11 + 0x482e))) {
								*(undefined *)(iVar11 + 0x482e) = 0;
							}
							if ((iVar10 == (int)*(char *)(iVar11 + 0x482f)) || (iVar7 == (int)*(char *)(iVar11 + 0x482f))) {
								*(undefined *)(iVar11 + 0x482f) = 0;
							}
							if ((iVar10 == (int)*(char *)(iVar11 + 0x4830)) || (iVar7 == (int)*(char *)(iVar11 + 0x4830))) {
								*(undefined *)(iVar11 + 0x4830) = 0;
							}
							if ((iVar10 == (int)*(char *)(iVar11 + 0x4831)) || (iVar7 == (int)*(char *)(iVar11 + 0x4831))) {
								*(undefined *)(iVar11 + 0x4831) = 0;
							}
							if ((iVar10 == (int)*(char *)(iVar11 + 0x4832)) || (iVar7 == (int)*(char *)(iVar11 + 0x4832))) {
								*(undefined *)(iVar11 + 0x4832) = 0;
							}
							if ((iVar10 == (int)*(char *)(iVar11 + 0x4833)) || (iVar7 == (int)*(char *)(iVar11 + 0x4833))) {
								*(undefined *)(iVar11 + 0x4833) = 0;
							}
							if ((iVar10 == (int)*(char *)(iVar11 + 0x4834)) || (iVar7 == (int)*(char *)(iVar11 + 0x4834))) {
								*(undefined *)(iVar11 + 0x4834) = 0;
							}
							if ((iVar10 == (int)*(char *)(iVar11 + 0x4835)) || (iVar7 == (int)*(char *)(iVar11 + 0x4835))) {
								*(undefined *)(iVar11 + 0x4835) = 0;
							}
							uVar15 = uVar15 + 10;
							lVar30 = lVar30 + -1;
						} while (lVar30 != 0);
						uVar18 = uVar29 + lVar28 + 0x53cc;
						param_6 = uVar29 + lVar28 + 0xea8;
						param_7 = param_6 + (lVar13 + -1) * 0x170;
						lVar30 = 0x2e;
						uVar15 = param_7 - 8;
						do {
							uVar15 = uVar15 + 8;
							uVar1 = ((undefined4 *)uVar15)[1];
							uVar18 = uVar18 + 8;
							*(undefined4 *)uVar18 = *(undefined4 *)uVar15;
							((undefined4 *)uVar18)[1] = uVar1;
							lVar30 = lVar30 + -1;
						} while (lVar30 != 0);
						puVar4 = puVar6 + iVar5;
						*(int *)(puVar4 + 0x4828) = *(int *)(puVar4 + 0x4828) + -1;
						uVar2 = *(uint *)(puVar4 + 0x4828);
						uVar14 = (ulonglong)uVar2;
						if ((0 < (int)uVar2) && (iVar10 - 1U != uVar2)) {
							lVar19 = param_7 - 8;
							lVar31 = 0x2e;
							lVar30 = param_6 + uVar14 * 0x170 + -8;
							do {
								lVar30 = lVar30 + 8;
								uVar1 = ((undefined4 *)lVar30)[1];
								lVar19 = lVar19 + 8;
								*(undefined4 *)lVar19 = *(undefined4 *)lVar30;
								((undefined4 *)lVar19)[1] = uVar1;
								lVar31 = lVar31 + -1;
							} while (lVar31 != 0);
							lVar30 = 8;
							cVar12 = (char)lVar13;
							uVar14 = SEXT18(cVar12);
							uVar8 = (undefined)-lVar13;
							uVar18 = 0;
							uVar15 = uVar26;
							do {
								iVar11 = (int)uVar15;
								if ((int)*(char *)(iVar11 + 0x482c) == piVar27[0x120a] + 1) {
									*(char *)(iVar11 + 0x482c) = cVar12;
								}
								if ((int)*(char *)(iVar11 + 0x482c) == -(piVar27[0x120a] + 1)) {
									*(undefined *)(iVar11 + 0x482c) = uVar8;
								}
								if ((int)*(char *)(iVar11 + 0x482d) == piVar27[0x120a] + 1) {
									*(char *)(iVar11 + 0x482d) = cVar12;
								}
								if ((int)*(char *)(iVar11 + 0x482d) == -(piVar27[0x120a] + 1)) {
									*(undefined *)(iVar11 + 0x482d) = uVar8;
								}
								if ((int)*(char *)(iVar11 + 0x482e) == piVar27[0x120a] + 1) {
									*(char *)(iVar11 + 0x482e) = cVar12;
								}
								if ((int)*(char *)(iVar11 + 0x482e) == -(piVar27[0x120a] + 1)) {
									*(undefined *)(iVar11 + 0x482e) = uVar8;
								}
								if ((int)*(char *)(iVar11 + 0x482f) == piVar27[0x120a] + 1) {
									*(char *)(iVar11 + 0x482f) = cVar12;
								}
								if ((int)*(char *)(iVar11 + 0x482f) == -(piVar27[0x120a] + 1)) {
									*(undefined *)(iVar11 + 0x482f) = uVar8;
								}
								if ((int)*(char *)(iVar11 + 0x4830) == piVar27[0x120a] + 1) {
									*(char *)(iVar11 + 0x4830) = cVar12;
								}
								if ((int)*(char *)(iVar11 + 0x4830) == -(piVar27[0x120a] + 1)) {
									*(undefined *)(iVar11 + 0x4830) = uVar8;
								}
								uVar15 = uVar15 + 5;
								uVar18 = uVar18 + 4;
								lVar30 = lVar30 + -1;
							} while (lVar30 != 0);
						}
					}
				}
			}
			if (0x40 < iVar25) {
				uVar15 = (uVar24 - 0x41) * 0x170;
				uVar18 = uVar29 + lVar28 + 0x485c;
				if (*(int *)((int)uVar18 + (int)uVar15) != -1) {
					lVar13 = 0x2e;
					uVar14 = uVar29 + lVar28 + 0x53cc;
					lVar28 = uVar29 + lVar28 + uVar15 + 0x484c;
					do {
						lVar28 = lVar28 + 8;
						uVar1 = ((undefined4 *)lVar28)[1];
						uVar14 = uVar14 + 8;
						*(undefined4 *)uVar14 = *(undefined4 *)lVar28;
						((undefined4 *)uVar14)[1] = uVar1;
						lVar13 = lVar13 + -1;
					} while (lVar13 != 0);
					puVar3 = (undefined4 *)ppuVar9[-0x1d9c];
					*(undefined4 *)((int)uVar18 + (int)uVar15) = 0xffffffff;
					*puVar3 = 1;
				}
			}
			iVar25 = *(int *)(puVar6 + iVar5 + 0x53dc);
			if (iVar25 != -1) {
				iVar11 = (int)param_1;
				if (iVar25 == 0xb) {
					uVar26 = CalculateGold(iVar11);
					*(int *)(puVar6 + iVar5 + 0x1c8) = (int)uVar26;
				}
				uVar22 = (undefined)param_7;
				uVar21 = (undefined)param_6;
				uVar20 = (undefined)uVar18;
				uVar17 = (undefined)uVar15;
				uVar16 = (undefined)uVar14;
				uVar23 = (undefined)param_8;
				uVar8 = 1;
				CalcPlrInv(param_1, 1, uVar14, uVar15, uVar18, param_6, param_7, param_8, in_stack_ffffffa8);
				CheckItemStats(iVar11);
				if (iVar11 == *(int *)ppuVar9[-0x1deb]) {
					PlaySFX(0x32);
					uVar32 = (undefined)in_stack_ffffffa8;
					SetCursor_(*(int *)(puVar6 + iVar5 + 0x5494) + 0xc, uVar8, uVar16, uVar17, uVar20, uVar21,
					    uVar22, uVar23, in_stack_ffffffa8);
					lVar28 = (longlong)param_2 - (ulonglong)(uint)(*(int *)ppuVar9[-0x1d94] >> 1);
					lVar13 = (longlong)param_3 - (ulonglong)(uint)(*(int *)ppuVar9[-0x1d95] >> 1);
					SetCursorPos((char)lVar28, (char)lVar13, uVar16, uVar17, uVar20, uVar21, uVar22, uVar23, uVar32,
					    in_stack_ffffffaf, local_4c);
					puVar3 = *(undefined4 **)(local_4c + -0x76ac);
					**(undefined4 **)(local_4c + -0x76a8) = (int)lVar28;
					*puVar3 = (int)lVar13;
				}
			}
		}
	}
	return;
}

void inv_update_rem_item(ulonglong param_1, uint param_2, undefined8 param_3, ulonglong param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	ulonglong uVar2;
	undefined4 in_stack_ffffffc8;

	puVar1 = PTR_DAT_100f1828;
	uVar2 = ZEXT48(PTR_DAT_100f1828);
	if ((param_2 & 0xff) < 7) {
		*(undefined4 *)(PTR_DAT_100f1828 + (param_2 & 0xff) * 0x170 + (int)param_1 * 0x55ec + 0x4a0) = 0xffffffff;
	}
	if (*(int *)(puVar1 + (int)param_1 * 0x55ec) == 8) {
		CalcPlrInv(param_1, 0, uVar2, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	} else {
		CalcPlrInv(param_1, 1, uVar2, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	}
	return;
}

void RemoveInvItem(longlong param_1, longlong param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined4 uVar2;
	int iVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	char cVar6;
	longlong lVar7;
	int iVar8;
	char cVar9;
	longlong lVar10;
	char cVar11;
	char cVar12;
	longlong lVar13;
	int iVar14;
	char cVar15;
	char cVar16;
	longlong lVar17;
	ulonglong uVar18;
	longlong lVar19;
	undefined4 in_stack_ffffffc8;

	puVar4 = PTR_DAT_100f1828;
	cVar6 = (char)param_2;
	ppuVar5 = &toc;
	uVar18 = ZEXT48(PTR_DAT_100f1828);
	lVar17 = param_1 * 0x55ec;
	lVar7 = uVar18 + lVar17;
	lVar19 = 4;
	lVar13 = -(param_2 + 1);
	lVar13._7_1_ = (char)lVar13;
	cVar16 = '\0';
	lVar10 = lVar7;
	do {
		iVar3 = (int)lVar10;
		iVar8 = (int)(param_2 + 1);
		iVar14 = (int)lVar13;
		if ((iVar8 == (int)*(char *)(iVar3 + 0x482c)) || (iVar14 == (int)*(char *)(iVar3 + 0x482c))) {
			*(undefined *)(iVar3 + 0x482c) = 0;
		}
		if ((iVar8 == (int)*(char *)(iVar3 + 0x482d)) || (iVar14 == (int)*(char *)(iVar3 + 0x482d))) {
			*(undefined *)(iVar3 + 0x482d) = 0;
		}
		if ((iVar8 == (int)*(char *)(iVar3 + 0x482e)) || (iVar14 == (int)*(char *)(iVar3 + 0x482e))) {
			*(undefined *)(iVar3 + 0x482e) = 0;
		}
		if ((iVar8 == (int)*(char *)(iVar3 + 0x482f)) || (iVar14 == (int)*(char *)(iVar3 + 0x482f))) {
			*(undefined *)(iVar3 + 0x482f) = 0;
		}
		if ((iVar8 == (int)*(char *)(iVar3 + 0x4830)) || (iVar14 == (int)*(char *)(iVar3 + 0x4830))) {
			*(undefined *)(iVar3 + 0x4830) = 0;
		}
		if ((iVar8 == (int)*(char *)(iVar3 + 0x4831)) || (iVar14 == (int)*(char *)(iVar3 + 0x4831))) {
			*(undefined *)(iVar3 + 0x4831) = 0;
		}
		if ((iVar8 == (int)*(char *)(iVar3 + 0x4832)) || (iVar14 == (int)*(char *)(iVar3 + 0x4832))) {
			*(undefined *)(iVar3 + 0x4832) = 0;
		}
		if ((iVar8 == (int)*(char *)(iVar3 + 0x4833)) || (iVar14 == (int)*(char *)(iVar3 + 0x4833))) {
			*(undefined *)(iVar3 + 0x4833) = 0;
		}
		if ((iVar8 == (int)*(char *)(iVar3 + 0x4834)) || (iVar14 == (int)*(char *)(iVar3 + 0x4834))) {
			*(undefined *)(iVar3 + 0x4834) = 0;
		}
		cVar12 = *(char *)(iVar3 + 0x4835);
		if ((iVar8 == (int)cVar12) || (iVar14 == (int)cVar12)) {
			*(undefined *)(iVar3 + 0x4835) = 0;
		}
		lVar10 = lVar10 + 10;
		cVar16 = cVar16 + '\t';
		lVar19 = lVar19 + -1;
	} while (lVar19 != 0);
	cVar11 = (char)(uVar18 + lVar17);
	iVar3 = (int)(uVar18 + lVar17);
	cVar9 = (char)*(int *)(iVar3 + 0x4828);
	*(int *)(iVar3 + 0x4828) = *(int *)(iVar3 + 0x4828) + -1;
	uVar1 = *(uint *)(iVar3 + 0x4828);
	cVar15 = (char)lVar13;
	if ((0 < (int)uVar1) && (cVar15 = (char)lVar13, (uint)param_2 != uVar1)) {
		lVar13 = uVar18 + lVar17 + 0xea8;
		lVar10 = lVar13 + (ulonglong)uVar1 * 0x170 + -8;
		lVar19 = 0x2e;
		lVar13 = lVar13 + param_2 * 0x170 + -8;
		do {
			lVar10 = lVar10 + 8;
			uVar2 = ((undefined4 *)lVar10)[1];
			lVar13 = lVar13 + 8;
			*(undefined4 *)lVar13 = *(undefined4 *)lVar10;
			((undefined4 *)lVar13)[1] = uVar2;
			lVar19 = lVar19 + -1;
		} while (lVar19 != 0);
		cVar11 = cVar6 + '\x01';
		lVar13 = 8;
		cVar15 = '\0';
		lVar10 = lVar7;
		do {
			iVar3 = (int)lVar10;
			iVar8 = (int)lVar7;
			if ((int)*(char *)(iVar3 + 0x482c) == *(int *)(iVar8 + 0x4828) + 1) {
				*(char *)(iVar3 + 0x482c) = cVar11;
			}
			if ((int)*(char *)(iVar3 + 0x482c) == -(*(int *)(iVar8 + 0x4828) + 1)) {
				*(char *)(iVar3 + 0x482c) = (char)lVar13;
			}
			if ((int)*(char *)(iVar3 + 0x482d) == *(int *)(iVar8 + 0x4828) + 1) {
				*(char *)(iVar3 + 0x482d) = cVar11;
			}
			if ((int)*(char *)(iVar3 + 0x482d) == -(*(int *)(iVar8 + 0x4828) + 1)) {
				*(char *)(iVar3 + 0x482d) = (char)lVar13;
			}
			if ((int)*(char *)(iVar3 + 0x482e) == *(int *)(iVar8 + 0x4828) + 1) {
				*(char *)(iVar3 + 0x482e) = cVar11;
			}
			if ((int)*(char *)(iVar3 + 0x482e) == -(*(int *)(iVar8 + 0x4828) + 1)) {
				*(char *)(iVar3 + 0x482e) = (char)lVar13;
			}
			if ((int)*(char *)(iVar3 + 0x482f) == *(int *)(iVar8 + 0x4828) + 1) {
				*(char *)(iVar3 + 0x482f) = cVar11;
			}
			if ((int)*(char *)(iVar3 + 0x482f) == -(*(int *)(iVar8 + 0x4828) + 1)) {
				*(char *)(iVar3 + 0x482f) = (char)lVar13;
			}
			if ((int)*(char *)(iVar3 + 0x4830) == *(int *)(iVar8 + 0x4828) + 1) {
				*(char *)(iVar3 + 0x4830) = cVar11;
			}
			cVar9 = *(char *)(iVar3 + 0x4830);
			lVar19 = -((ulonglong) * (uint *)(iVar8 + 0x4828) + 1);
			cVar6 = (char)lVar19;
			if ((int)cVar9 == (int)lVar19) {
				*(char *)(iVar3 + 0x4830) = (char)lVar13;
			}
			lVar10 = lVar10 + 5;
			cVar12 = (char)lVar10;
			cVar15 = cVar15 + '\x04';
			lVar13 = lVar13 + -1;
		} while (lVar13 != 0);
	}
	CalcPlrScrolls((int)param_1, cVar6, (char)lVar7, cVar9, cVar11, cVar12, cVar15, cVar16, in_stack_ffffffc8);
	puVar4 = puVar4 + (int)lVar17;
	if (puVar4[0xb8] == '\x02') {
		if (*(uint *)(puVar4 + 0xb4) != 0xffffffff) {
			uVar1 = 1 << (ulonglong) * (uint *)(puVar4 + 0xb4) - 1;
			if ((uVar1 & *(uint *)(puVar4 + 0x118) | (int)uVar1 >> 0x1f & *(uint *)(puVar4 + 0x114)) == 0) {
				*(undefined4 *)(puVar4 + 0xb4) = 0xffffffff;
			}
			*(undefined4 *)ppuVar5[-0x1daf] = 0xff;
		}
	}
	return;
}

void RemoveSpdBarItem(int param_1, int param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	longlong lVar5;
	longlong lVar6;
	undefined4 in_stack_ffffffc8;

	puVar3 = PTR_DAT_100f1828;
	ppuVar4 = &toc;
	lVar6 = ZEXT48(PTR_DAT_100f1828) + (longlong)param_1 * 0x55ec;
	lVar5 = lVar6 + (longlong)param_2 * 0x170;
	*(undefined4 *)((int)lVar5 + 0x485c) = 0xffffffff;
	CalcPlrScrolls(param_1, (char)lVar5, (char)puVar3, (char)((longlong)param_1 * 0x55ec), param_5, param_6,
	    param_7, param_8, in_stack_ffffffc8);
	iVar2 = (int)lVar6;
	if (*(char *)(iVar2 + 0xb8) == '\x02') {
		if ((*(uint *)(iVar2 + 0xb4) != 0xffffffff) && (uVar1 = 1 << (ulonglong) * (uint *)(iVar2 + 0xb4) - 1, (uVar1 & *(uint *)(iVar2 + 0x118) | (int)uVar1 >> 0x1f & *(uint *)(iVar2 + 0x114)) == 0)) {
			*(undefined4 *)(iVar2 + 0xb4) = 0xffffffff;
		}
	}
	*(undefined4 *)ppuVar4[-0x1daf] = 0xff;
	return;
}

void CheckInvItem(void)

{
	ulonglong in_r6;
	undefined8 in_r7;
	ulonglong in_r8;
	ulonglong in_r9;
	ulonglong in_r10;
	undefined4 in_stack_ffffffc8;

	if (*(int *)PTR_DAT_100f188c < 0xc) {
		CheckInvCut((ulonglong) * (uint *)PTR_DAT_100f1824, *(int *)PTR_DAT_100f1928,
		    *(int *)PTR_DAT_100f1924, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffc8);
	} else {
		CheckInvPaste((ulonglong) * (uint *)PTR_DAT_100f1824, (ulonglong) * (uint *)PTR_DAT_100f1928,
		    (ulonglong) * (uint *)PTR_DAT_100f1924, in_r6, in_r7, in_r8, in_r9, in_r10,
		    in_stack_ffffffc8);
	}
	return;
}

void CheckInvScrn(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	if ((0xbe < *(int *)PTR_DAT_100f1928) && (*(int *)PTR_DAT_100f1928 < 0x1b5)) {
		if ((0x160 < *(int *)PTR_DAT_100f1924) && (*(int *)PTR_DAT_100f1924 < 0x181)) {
			CheckInvItem(PTR_DAT_100f1924, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
		}
	}
	return;
}

void CheckItemStats(int param_1)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f1828 + param_1 * 0x55ec;
	*(undefined4 *)(puVar1 + 0x5538) = 0;
	if (*(int *)(puVar1 + 0x160) < (int)(char)puVar1[0x5534]) {
		return;
	}
	if (*(int *)(puVar1 + 0x168) < (int)(uint)(byte)puVar1[0x5535]) {
		return;
	}
	if (*(int *)(puVar1 + 0x170) < (int)(char)puVar1[0x5536]) {
		return;
	}
	*(undefined4 *)(puVar1 + 0x5538) = 1;
	return;
}

void CheckBookLevel(int param_1)

{
	uint uVar1;
	undefined *puVar2;
	longlong lVar3;

	puVar2 = PTR_DAT_100f1828 + param_1 * 0x55ec;
	if (*(int *)(puVar2 + 0x54b0) != 0x18) {
		return;
	}
	puVar2[0x5535] = (char)*(undefined4 *)(PTR_DAT_100f1934 + *(int *)(puVar2 + 0x54b4) * 0x38 + 0x1c);
	lVar3 = (longlong)(char)puVar2[*(int *)(puVar2 + 0x54b4) + 0xc1];
	while ((int)lVar3 != 0) {
		lVar3 = lVar3 + -1;
		puVar2[0x5535] = puVar2[0x5535] + (char)((int)((uint)(byte)puVar2[0x5535] * 0x14) / 100);
		uVar1 = (int)((uint)(byte)puVar2[0x5535] * 0x14) / 100;
		if (0xff < (int)((uint)(byte)puVar2[0x5535] + uVar1 + (uVar1 >> 0x1f))) {
			puVar2[0x5535] = 0xff;
			lVar3 = 0;
		}
	}
	return;
}

void CheckQuestItem(int param_1)

{
	char cVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined4 *puVar6;
	undefined4 *puVar7;

	puVar7 = _DAT_100f1df8;
	puVar6 = _DAT_100f1df4;
	puVar5 = PTR_DAT_100f19cc;
	puVar4 = PTR_DAT_100f1828;
	puVar3 = PTR_DAT_100f1824;
	iVar2 = *(int *)(PTR_DAT_100f1828 + param_1 * 0x55ec + 0x553c);
	if (iVar2 == 10) {
		PTR_DAT_100f19cc[0xc2] = 3;
	}
	if ((iVar2 == 0x11) && (puVar5[0x1a] == '\x02')) {
		if (puVar5[0x27] == '\x03') {
			*puVar7 = 10;
			cVar1 = puVar4[param_1 * 0x55ec + 0x15c];
			if (cVar1 == '\0') {
				*puVar6 = 0x32f;
			} else {
				if (cVar1 == '\x01') {
					*puVar6 = 0x2c2;
				} else {
					if (cVar1 == '\x02') {
						*puVar6 = 0x25b;
					}
				}
			}
			puVar5[0x27] = 4;
		}
	}
	if (iVar2 == 0x10) {
		if (puVar5[0xf2] == '\x01') {
			puVar5[0xf2] = 2;
			puVar5[0xff] = 1;
		}
		if (*(int *)(puVar5 + 0x104) == 1) {
			*puVar7 = 10;
			cVar1 = puVar4[*(int *)puVar3 * 0x55ec + 0x15c];
			if (cVar1 == '\0') {
				*puVar6 = 0x329;
			} else {
				if (cVar1 == '\x01') {
					*puVar6 = 700;
				} else {
					if (cVar1 == '\x02') {
						*puVar6 = 0x255;
					}
				}
			}
		}
	}
	if (iVar2 == 0xf) {
		*puVar7 = 0x1e;
		cVar1 = puVar4[*(int *)puVar3 * 0x55ec + 0x15c];
		if (cVar1 == '\0') {
			*puVar6 = 0x328;
		} else {
			if (cVar1 == '\x01') {
				*puVar6 = 699;
			} else {
				if (cVar1 == '\x02') {
					*puVar6 = 0x254;
				}
			}
		}
	}
	if (iVar2 == 9) {
		if (puVar5[2] == '\x01') {
			puVar5[2] = 2;
			puVar5[0xf] = 1;
		}
		if (*(int *)(puVar5 + 0x14) == 1) {
			*puVar7 = 10;
			cVar1 = puVar4[*(int *)puVar3 * 0x55ec + 0x15c];
			if (cVar1 == '\0') {
				*puVar6 = 0x327;
			} else {
				if (cVar1 == '\x01') {
					*puVar6 = 0x2ba;
				} else {
					if (cVar1 == '\x02') {
						*puVar6 = 0x253;
					}
				}
			}
		}
	}
	if (iVar2 != 0x1c) {
		return;
	}
	puVar5[0xda] = 3;
	*puVar7 = 0x14;
	cVar1 = puVar4[*(int *)puVar3 * 0x55ec + 0x15c];
	if (cVar1 == '\0') {
		*puVar6 = 0x32b;
		return;
	}
	if (cVar1 == '\x01') {
		*puVar6 = 0x2be;
		return;
	}
	if (cVar1 != '\x02') {
		return;
	}
	*puVar6 = 599;
	return;
}

void InvGetItem(int param_1, int param_2, undefined8 param_3, undefined8 param_4, longlong param_5,
    uint param_6, int param_7, int param_8, undefined4 param_9)

{
	undefined4 uVar1;
	uint uVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	int *piVar6;
	int iVar7;
	ulonglong uVar8;
	undefined4 *puVar9;
	int iVar10;
	undefined4 *puVar12;
	ulonglong uVar11;
	undefined *puVar14;
	undefined8 uVar13;
	undefined uVar15;
	longlong lVar16;
	longlong lVar17;
	longlong lVar18;
	int iVar19;
	longlong lVar20;
	undefined4 in_stack_ffffffa8;

	iVar7 = _DAT_100f1df0;
	piVar6 = _DAT_100f1dec;
	puVar5 = PTR_DAT_100f1944;
	puVar4 = PTR_DAT_100f1940;
	puVar14 = PTR_DAT_100f18c8;
	puVar3 = PTR_DAT_100f1828;
	uVar15 = (undefined)param_5;
	lVar18 = (longlong)param_8;
	lVar17 = (longlong)param_7;
	lVar16 = (longlong)(int)param_6;
	uVar8 = ZEXT48(&toc);
	if (*(int *)PTR_DAT_100f18cc != 0) {
		*(undefined4 *)PTR_DAT_100f18cc = 0;
		*(undefined4 *)puVar14 = 0;
	}
	iVar19 = param_2 * 0x170;
	if (*(char *)(*(int *)puVar5 + *(int *)(puVar4 + iVar19 + 0xc) * 0x70 + *(int *)(puVar4 + iVar19 + 0x10)) != '\0') {
		if ((*(int *)PTR_DAT_100f1824 == param_1) && (0xb < *(int *)PTR_DAT_100f188c)) {
			NetSendCmdPItem(1, 0x56, (ulonglong)(*(uint *)(puVar3 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x38) & 0xff),
			    (ulonglong)(*(uint *)(puVar3 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x3c) & 0xff),
			    param_5, param_6, param_7, param_8, in_stack_ffffffa8);
		}
		puVar14 = puVar4 + iVar19;
		*(ushort *)(puVar14 + 4) = *(ushort *)(puVar14 + 4) & 0x7fff;
		lVar20 = 0x2e;
		puVar9 = (undefined4 *)(puVar14 + -8);
		puVar12 = (undefined4 *)(puVar3 + param_1 * 0x55ec + 0x53cc);
		do {
			uVar1 = puVar9[3];
			puVar12[2] = puVar9[2];
			puVar12[3] = uVar1;
			lVar20 = lVar20 + -1;
			puVar9 = puVar9 + 2;
			puVar12 = puVar12 + 2;
		} while (lVar20 != 0);
		CheckQuestItem(param_1);
		CheckBookLevel(param_1);
		CheckItemStats(param_1);
		uVar13 = 0;
		iVar10 = 0;
		uVar2 = *(uint *)puVar5;
		uVar11 = (ulonglong)uVar2;
		*(undefined *)(uVar2 + *(int *)(puVar4 + iVar19 + 0xc) * 0x70 + *(int *)(puVar4 + iVar19 + 0x10)) = 0;
		while (iVar10 < *piVar6) {
			iVar19 = *(int *)(iVar7 + iVar10 * 4);
			if (iVar19 == param_2) {
				DeleteItem(iVar19, iVar10);
				iVar10 = 0;
			} else {
				iVar10 = iVar10 + 1;
			}
		}
		puVar14 = *(undefined **)((int)uVar8 + -0x7748);
		*puVar14 = 0xff;
		NewCursor(*(int *)(puVar3 + param_1 * 0x55ec + 0x5494) + 0xc, (char)puVar14, (char)uVar11,
		    (char)uVar13, uVar15, (char)lVar16, (char)lVar17, (char)lVar18, in_stack_ffffffa8);
	}
	return;
}

void AutoGetItem(ulonglong param_1, longlong param_2, undefined8 param_3, ulonglong param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	char cVar1;
	uint uVar2;
	uint uVar3;
	undefined4 uVar4;
	uint uVar5;
	uint uVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	int *piVar11;
	int iVar12;
	ulonglong uVar13;
	ulonglong uVar14;
	int iVar15;
	longlong lVar16;
	int iVar17;
	int iVar18;
	longlong lVar19;
	int iVar20;
	ulonglong uVar21;
	undefined uVar22;
	undefined uVar23;
	undefined uVar24;
	uint uVar25;
	undefined uVar26;
	undefined4 uVar27;
	undefined uVar28;
	undefined4 uVar29;
	undefined uVar30;
	ulonglong uVar31;
	longlong lVar32;
	longlong lVar33;
	ulonglong uVar34;
	longlong lVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	ulonglong uVar39;
	ulonglong uVar40;
	longlong lVar41;
	longlong lVar42;
	undefined4 in_stack_ffffff78;
	undefined in_stack_ffffff7f;
	undefined in_stack_ffffff8b;

	iVar12 = _DAT_100f1df0;
	piVar11 = _DAT_100f1dec;
	puVar10 = PTR_DAT_100f1960;
	puVar9 = PTR_DAT_100f1940;
	puVar7 = PTR_DAT_100f18c8;
	puVar8 = PTR_DAT_100f1828;
	uVar14 = ZEXT48(&toc);
	uVar31 = ZEXT48(PTR_DAT_100f1940);
	uVar34 = ZEXT48(PTR_DAT_100f1828);
	if (*(int *)PTR_DAT_100f18cc != 0) {
		*(undefined4 *)PTR_DAT_100f18cc = 0;
		*(undefined4 *)puVar7 = 0;
	}
	iVar36 = (int)param_2;
	if ((iVar36 == 0x7f) || (*(char *)(*(int *)PTR_DAT_100f1944 + *(int *)(puVar9 + iVar36 * 0x170 + 0xc) * 0x70 + *(int *)(puVar9 + iVar36 * 0x170 + 0x10)) != '\0')) {
		lVar33 = uVar31 + param_2 * 0x170;
		lVar35 = param_1 * 0x55ec;
		lVar16 = lVar33 + -8;
		lVar32 = uVar34 + lVar35;
		*(ushort *)((int)lVar33 + 4) = *(ushort *)((int)lVar33 + 4) & 0x7fff;
		lVar19 = lVar32 + 0x53cc;
		lVar41 = 0x2e;
		do {
			lVar16 = lVar16 + 8;
			uVar5 = *(uint *)lVar16;
			uVar21 = (ulonglong)uVar5;
			uVar25 = ((uint *)lVar16)[1];
			lVar19 = lVar19 + 8;
			uVar24 = (undefined)lVar19;
			*(uint *)lVar19 = uVar5;
			((uint *)lVar19)[1] = uVar25;
			lVar41 = lVar41 + -1;
		} while (lVar41 != 0);
		iVar17 = (int)param_1;
		CheckQuestItem(iVar17);
		CheckBookLevel(iVar17);
		CheckItemStats(iVar17);
		iVar20 = (int)lVar35;
		puVar7 = puVar8 + iVar20;
		SetICursor(*(int *)(puVar7 + 0x5494) + 0xc);
		iVar37 = (int)uVar31;
		iVar15 = (int)uVar14;
		uVar29 = (undefined4)param_8;
		uVar27 = (undefined4)param_7;
		uVar25 = (uint)param_6;
		uVar22 = (undefined)uVar21;
		uVar23 = (undefined)param_4;
		if (*(int *)(puVar7 + 0x53dc) == 0xb) {
			iVar18 = GoldAutoPlace(iVar17, uVar24, uVar22, uVar23, (char)param_5, (char)param_6, (char)param_7,
			    (char)param_8, in_stack_ffffff78);
		} else {
			uVar40 = 0;
			if (((((*(uint *)(puVar7 + 0x78) & 0xf) == 0) || ((*(uint *)(puVar7 + 0x78) & 0xf) == 1)) && (*(int *)(puVar8 + iVar20) < 4)) && ((*(int *)(puVar8 + iVar20 + 0x5538) != 0 && ((puVar8 + iVar20)[0x5492] == '\x01')))) {
				uVar40 = WeaponAutoPlace(iVar17, uVar24, uVar22, uVar23, (char)param_5, (char)param_6, (char)param_7,
				    (char)param_8, in_stack_ffffff78);
				uVar29 = (undefined4)param_8;
				uVar27 = (undefined4)param_7;
				uVar25 = (uint)param_6;
				if (uVar40 != 0) {
					CalcPlrInv(param_1, 1, uVar21, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff78);
				}
			}
			iVar37 = (int)uVar31;
			uVar23 = (undefined)param_4;
			uVar22 = (undefined)uVar21;
			iVar15 = (int)uVar14;
			iVar18 = (int)uVar40;
			if (iVar18 == 0) {
				uVar5 = **(uint **)(iVar15 + -0x7648);
				uVar13 = (ulonglong)uVar5;
				uVar2 = **(uint **)(iVar15 + -0x764c);
				uVar39 = (ulonglong)uVar2;
				if ((uVar5 == 1) && (uVar2 == 1)) {
					lVar35 = uVar34 + lVar35;
					if ((*(int *)((int)lVar35 + 0x5538) != 0) && (*(int *)(iVar15 + *(int *)((int)lVar35 + 0x553c) * 0x4c + 0x3898) != 0)) {
						iVar37 = 0;
						lVar16 = lVar35;
						while ((iVar37 < 8 && ((int)uVar40 == 0))) {
							if (*(int *)((int)lVar16 + 0x485c) == -1) {
								lVar42 = 0x2e;
								lVar41 = lVar16 + 0x484c;
								lVar19 = lVar35 + 0x53cc;
								do {
									lVar19 = lVar19 + 8;
									uVar6 = *(uint *)lVar19;
									uVar21 = (ulonglong)uVar6;
									uVar3 = ((uint *)lVar19)[1];
									lVar41 = lVar41 + 8;
									*(uint *)lVar41 = uVar6;
									((uint *)lVar41)[1] = uVar3;
									lVar42 = lVar42 + -1;
								} while (lVar42 != 0);
								CalcPlrScrolls(iVar17, (char)lVar41, (char)uVar6, (char)param_4, (char)param_5,
								    (char)uVar25, (char)uVar27, (char)uVar29, in_stack_ffffff78);
								*(undefined4 *)puVar10 = 1;
								uVar40 = 1;
							}
							lVar16 = lVar16 + 0x170;
							iVar37 = iVar37 + 1;
						}
					}
					iVar37 = 0x1e;
					while ((iVar37 < 0x28 && ((int)uVar40 == 0))) {
						param_5 = 1;
						uVar21 = uVar13;
						param_4 = uVar39;
						uVar40 = AutoPlace(iVar17, iVar37, uVar13, 1, 1, (char)uVar25, (char)uVar27, (char)uVar29,
						    in_stack_ffffff78);
						iVar37 = iVar37 + 1;
					}
					iVar37 = 0x14;
					while ((iVar37 < 0x1e && ((int)uVar40 == 0))) {
						param_5 = 1;
						uVar21 = uVar13;
						param_4 = uVar39;
						uVar40 = AutoPlace(iVar17, iVar37, uVar13, 1, 1, (char)uVar25, (char)uVar27, (char)uVar29,
						    in_stack_ffffff78);
						iVar37 = iVar37 + 1;
					}
					iVar37 = 10;
					while ((iVar37 < 0x14 && ((int)uVar40 == 0))) {
						param_5 = 1;
						uVar21 = uVar13;
						param_4 = uVar39;
						uVar40 = AutoPlace(iVar17, iVar37, uVar13, 1, 1, (char)uVar25, (char)uVar27, (char)uVar29,
						    in_stack_ffffff78);
						iVar37 = iVar37 + 1;
					}
					iVar37 = 0;
					while ((iVar37 < 10 && ((int)uVar40 == 0))) {
						param_5 = 1;
						uVar21 = uVar13;
						param_4 = uVar39;
						uVar40 = AutoPlace(iVar17, iVar37, uVar13, 1, 1, (char)uVar25, (char)uVar27, (char)uVar29,
						    in_stack_ffffff78);
						iVar37 = iVar37 + 1;
					}
				}
				if ((uVar5 == 1) && (uVar2 == 2)) {
					iVar37 = 0x1d;
					while ((0x13 < iVar37 && ((int)uVar40 == 0))) {
						param_5 = 1;
						uVar21 = uVar13;
						param_4 = uVar39;
						uVar40 = AutoPlace(iVar17, iVar37, uVar13, 2, 1, (char)uVar25, (char)uVar27, (char)uVar29,
						    in_stack_ffffff78);
						iVar37 = iVar37 + -1;
					}
					iVar37 = 9;
					while ((-1 < iVar37 && ((int)uVar40 == 0))) {
						param_5 = 1;
						uVar21 = uVar13;
						param_4 = uVar39;
						uVar40 = AutoPlace(iVar17, iVar37, uVar13, 2, 1, (char)uVar25, (char)uVar27, (char)uVar29,
						    in_stack_ffffff78);
						iVar37 = iVar37 + -1;
					}
					iVar37 = 0x13;
					while ((9 < iVar37 && ((int)uVar40 == 0))) {
						param_5 = 1;
						uVar21 = uVar13;
						param_4 = uVar39;
						uVar40 = AutoPlace(iVar17, iVar37, uVar13, 2, 1, (char)uVar25, (char)uVar27, (char)uVar29,
						    in_stack_ffffff78);
						iVar37 = iVar37 + -1;
					}
				}
				if ((uVar5 == 1) && (uVar2 == 3)) {
					iVar37 = 0;
					while ((iVar37 < 0x14 && ((int)uVar40 == 0))) {
						param_5 = 1;
						uVar21 = uVar13;
						param_4 = uVar39;
						uVar40 = AutoPlace(iVar17, iVar37, uVar13, 3, 1, (char)uVar25, (char)uVar27, (char)uVar29,
						    in_stack_ffffff78);
						iVar37 = iVar37 + 1;
					}
				}
				if ((uVar5 == 2) && (uVar2 == 2)) {
					iVar37 = 0;
					lVar16 = uVar14 + 0x35c4;
					while ((iVar37 < 10 && ((int)uVar40 == 0))) {
						param_5 = 1;
						uVar21 = uVar13;
						param_4 = uVar39;
						uVar40 = AutoPlace(iVar17, *(int *)lVar16, uVar13, 2, 1, (char)uVar25, (char)uVar27,
						    (char)uVar29, in_stack_ffffff78);
						iVar37 = iVar37 + 1;
						lVar16 = lVar16 + 4;
					}
					iVar37 = 0x15;
					while ((iVar37 < 0x1d && ((int)uVar40 == 0))) {
						param_5 = 1;
						uVar21 = uVar13;
						param_4 = uVar39;
						uVar40 = AutoPlace(iVar17, iVar37, uVar13, 2, 1, (char)uVar25, (char)uVar27, (char)uVar29,
						    in_stack_ffffff78);
						iVar37 = iVar37 + 2;
					}
					iVar37 = 1;
					while ((iVar37 < 9 && ((int)uVar40 == 0))) {
						param_5 = 1;
						uVar21 = uVar13;
						param_4 = uVar39;
						uVar40 = AutoPlace(iVar17, iVar37, uVar13, 2, 1, (char)uVar25, (char)uVar27, (char)uVar29,
						    in_stack_ffffff78);
						iVar37 = iVar37 + 2;
					}
					iVar37 = 10;
					while ((iVar37 < 0x13 && ((int)uVar40 == 0))) {
						param_5 = 1;
						uVar21 = uVar13;
						param_4 = uVar39;
						uVar40 = AutoPlace(iVar17, iVar37, uVar13, 2, 1, (char)uVar25, (char)uVar27, (char)uVar29,
						    in_stack_ffffff78);
						iVar37 = iVar37 + 1;
					}
				}
				iVar37 = (int)uVar31;
				uVar23 = (undefined)param_4;
				uVar22 = (undefined)uVar21;
				iVar15 = (int)uVar14;
				iVar18 = (int)uVar40;
				if ((uVar5 == 2) && (uVar2 == 3)) {
					iVar37 = 0;
					while ((iVar37 < 9 && ((int)uVar40 == 0))) {
						param_5 = 1;
						uVar21 = uVar13;
						param_4 = uVar39;
						uVar40 = AutoPlace(iVar17, iVar37, uVar13, 3, 1, (char)uVar25, (char)uVar27, (char)uVar29,
						    in_stack_ffffff78);
						iVar37 = iVar37 + 1;
					}
					iVar38 = 10;
					while (true) {
						iVar37 = (int)uVar31;
						uVar23 = (undefined)param_4;
						uVar22 = (undefined)uVar21;
						iVar15 = (int)uVar14;
						iVar18 = (int)uVar40;
						if ((0x12 < iVar38) || (iVar18 != 0))
							break;
						param_5 = 1;
						uVar21 = uVar13;
						param_4 = uVar39;
						uVar40 = AutoPlace(iVar17, iVar38, uVar13, 3, 1, (char)uVar25, (char)uVar27, (char)uVar29,
						    in_stack_ffffff78);
						iVar38 = iVar38 + 1;
					}
				}
			}
		}
		iVar38 = (int)(param_2 * 0x170);
		if (iVar18 == 0) {
			if (iVar17 == **(int **)(iVar15 + -0x77ac)) {
				cVar1 = puVar8[iVar20 + 0x15c];
				uVar24 = (undefined)param_5;
				uVar26 = (undefined)uVar25;
				uVar28 = (undefined)uVar27;
				uVar30 = (undefined)uVar29;
				if (cVar1 == '\0') {
					lVar16 = random(0, 3, uVar22, uVar23, uVar24, uVar26, uVar28, uVar30, in_stack_ffffff78,
					    in_stack_ffffff7f, in_stack_ffffff8b);
					PlaySFX(lVar16 + 0x2d7);
				} else {
					if (cVar1 == '\x01') {
						lVar16 = random(0, 3, uVar22, uVar23, uVar24, uVar26, uVar28, uVar30, in_stack_ffffff78,
						    in_stack_ffffff7f, in_stack_ffffff8b);
						PlaySFX(lVar16 + 0x270);
					} else {
						if (cVar1 == '\x02') {
							lVar16 = random(0, 3, uVar22, uVar23, uVar24, uVar26, uVar28, uVar30, in_stack_ffffff78,
							    in_stack_ffffff7f, in_stack_ffffff8b);
							PlaySFX(lVar16 + 0x209);
						}
					}
				}
			}
			lVar32 = lVar32 + 0x53cc;
			lVar16 = 0x2e;
			lVar33 = lVar33 + -8;
			do {
				lVar33 = lVar33 + 8;
				uVar4 = ((undefined4 *)lVar33)[1];
				lVar32 = lVar32 + 8;
				*(undefined4 *)lVar32 = *(undefined4 *)lVar33;
				((undefined4 *)lVar32)[1] = uVar4;
				lVar16 = lVar16 + -1;
			} while (lVar16 != 0);
			RespawnItem(param_2, 1, (char)lVar32, uVar23, (char)param_5, (char)uVar25, (char)uVar27,
			    (char)uVar29, in_stack_ffffff78);
			iVar37 = iVar37 + iVar38;
			NetSendCmdPItem(1, 0xb, (ulonglong)(*(uint *)(iVar37 + 0xc) & 0xff),
			    (ulonglong)(*(uint *)(iVar37 + 0x10) & 0xff), param_5, uVar25, uVar27, uVar29,
			    in_stack_ffffff78);
			*(int *)(puVar7 + 0x53dc) = -1;
		} else {
			iVar37 = iVar37 + iVar38;
			iVar20 = 0;
			*(undefined *)(**(int **)(iVar15 + -0x768c) + *(int *)(iVar37 + 0xc) * 0x70 + *(int *)(iVar37 + 0x10)) = 0;
			while (iVar20 < *piVar11) {
				iVar37 = *(int *)(iVar12 + iVar20 * 4);
				if (iVar37 == iVar36) {
					DeleteItem(iVar37, iVar20);
					iVar20 = 0;
				} else {
					iVar20 = iVar20 + 1;
				}
			}
		}
	}
	return;
}

int FindGetItem(int param_1, short param_2, int param_3)

{
	ulonglong uVar1;
	int iVar2;
	int *piVar3;

	uVar1 = (ulonglong)*_DAT_100f1dec;
	piVar3 = _DAT_100f1df0;
	if (0 < (int)*_DAT_100f1dec) {
		do {
			iVar2 = *piVar3 * 0x170;
			if (((param_1 == *(int *)(PTR_DAT_100f1940 + iVar2 + 0x168)) && (param_3 == *(int *)(PTR_DAT_100f1940 + iVar2))) && (param_2 == *(short *)(PTR_DAT_100f1940 + iVar2 + 1))) {
				return *piVar3;
			}
			piVar3 = piVar3 + 1;
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
	}
	return -1;
}

int SyncGetItem(int param_1, int param_2, int param_3, short param_4, int param_5, undefined4 param_6,
    undefined param_7, undefined param_8, undefined4 param_9, undefined param_10,
    undefined4 param_11)

{
	char cVar1;
	undefined *puVar2;
	undefined *puVar3;
	int *piVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar5 = _DAT_100f1df0;
	piVar4 = _DAT_100f1dec;
	puVar3 = PTR_DAT_100f1944;
	puVar2 = PTR_DAT_100f1940;
	cVar1 = *(char *)(*(int *)PTR_DAT_100f1944 + param_1 * 0x70 + param_2);
	if (cVar1 == '\0') {
		iVar6 = FindGetItem(param_3, param_4, param_5);
		iVar8 = iVar6;
	} else {
		iVar8 = (int)cVar1 + -1;
		iVar6 = iVar8 * 0x170;
		if (((param_3 == *(int *)(PTR_DAT_100f1940 + iVar6 + 0x168)) && (param_5 == *(int *)(PTR_DAT_100f1940 + iVar6))) && (param_4 == *(short *)(PTR_DAT_100f1940 + iVar6 + 4))) {
			iVar6 = FindGetItem(param_3, param_4, param_5);
		} else {
			iVar6 = FindGetItem(param_3, param_4, param_5);
			iVar8 = iVar6;
		}
	}
	if (iVar8 != -1) {
		iVar7 = 0;
		iVar6 = *(int *)(puVar2 + iVar8 * 0x170 + 0xc) * 0x70;
		*(undefined *)(*(int *)puVar3 + iVar6 + *(int *)(puVar2 + iVar8 * 0x170 + 0x10)) = 0;
		while (iVar7 < *piVar4) {
			iVar6 = *(int *)(iVar5 + iVar7 * 4);
			if (iVar6 == iVar8) {
				DeleteItem(iVar6, iVar7);
				iVar6 = FindGetItem(param_3, param_4, param_5);
				iVar7 = 0;
			} else {
				iVar7 = iVar7 + 1;
			}
		}
	}
	return iVar6;
}

undefined8 CanPut(int param_1, int param_2)

{
	char cVar1;
	char cVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar5 = param_1 * 0x70;
	if (*(char *)(*(int *)PTR_DAT_100f1944 + iVar5 + param_2) != '\0') {
		return 0;
	}
	param_1 = param_1 * 0xe0;
	iVar4 = param_2 * 2;
	if (*(char *)(_DAT_100f1da4 + (int)*(short *)(*(int *)PTR_DAT_100f1a54 + param_1 + iVar4)) != '\0') {
		return 0;
	}
	iVar3 = *(int *)PTR_DAT_100f194c;
	cVar2 = *(char *)(iVar3 + iVar5 + param_2);
	if (cVar2 != '\0') {
		if (cVar2 < '\x01') {
			iVar6 = -((int)cVar2 + 1);
		} else {
			iVar6 = (int)cVar2 + -1;
		}
		if (*(int *)(PTR_DAT_100f1948 + iVar6 * 0x78 + 0x38) != 0) {
			return 0;
		}
	}
	cVar2 = *(char *)(iVar3 + iVar5 + param_2 + 0x71);
	if ('\0' < cVar2) {
		if (PTR_DAT_100f1948[((int)cVar2 + -1) * 0x78 + 0x40] != '\0') {
			return 0;
		}
	}
	if (cVar2 < '\0') {
		if (PTR_DAT_100f1948[((int)cVar2 + 1) * -0x78 + 0x40] != '\0') {
			return 0;
		}
	}
	param_2 = iVar3 + iVar5 + param_2;
	cVar2 = *(char *)(param_2 + 0x70);
	if ('\0' < cVar2) {
		cVar1 = *(char *)(param_2 + 1);
		if ('\0' < cVar1) {
			if (((PTR_DAT_100f1948 + 0x40)[((int)cVar2 + -1) * 0x78] != '\0') && ((PTR_DAT_100f1948 + 0x40)[((int)cVar1 + -1) * 0x78] != '\0')) {
				return 0;
			}
		}
	}
	if (((*PTR_DAT_100f17ec != '\0') || (*(short *)(*(int *)PTR_DAT_100f1954 + param_1 + iVar4) == 0))
	    && ((*PTR_DAT_100f17ec != '\0' || (*(short *)(*(int *)PTR_DAT_100f1954 + param_1 + iVar4 + 0xe2) == 0)))) {
		return 1;
	}
	return 0;
}

undefined8
TryInvPut(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	uint uVar2;
	undefined *puVar3;
	int iVar4;
	int iVar5;
	undefined8 uVar6;
	ulonglong uVar7;
	uint uVar8;
	undefined *puVar9;
	undefined *puVar10;

	iVar5 = _DAT_100f1de4;
	iVar4 = _DAT_100f1de0;
	puVar3 = PTR_DAT_100f1824;
	if (*_DAT_100f1dec < 0x7f) {
		puVar10 = PTR_DAT_100f1828 + 0x38;
		puVar9 = PTR_DAT_100f1828 + 0x3c;
		uVar7 = GetDirection((ulonglong) * (uint *)(puVar10 + *(int *)PTR_DAT_100f1824 * 0x55ec),
		    *(int *)(puVar9 + *(int *)PTR_DAT_100f1824 * 0x55ec),
		    (ulonglong) * (uint *)PTR_DAT_100f1978, *(int *)PTR_DAT_100f1974);
		iVar1 = (int)uVar7 * 4;
		uVar6 = CanPut(*(int *)(puVar10 + *(int *)puVar3 * 0x55ec) + *(int *)(iVar5 + iVar1),
		    *(int *)(puVar9 + *(int *)puVar3 * 0x55ec) + *(int *)(iVar4 + iVar1));
		if ((int)uVar6 == 0) {
			uVar8 = (int)uVar7 - 1;
			uVar2 = uVar8 * 4 & 0x1c;
			uVar6 = CanPut(*(int *)(puVar10 + *(int *)puVar3 * 0x55ec) + *(int *)(iVar5 + uVar2),
			    *(int *)(puVar9 + *(int *)puVar3 * 0x55ec) + *(int *)(iVar4 + uVar2));
			if ((int)uVar6 == 0) {
				uVar2 = ((uVar8 & 7) + 2) * 4 & 0x1c;
				uVar6 = CanPut(*(int *)(puVar10 + *(int *)puVar3 * 0x55ec) + *(int *)(iVar5 + uVar2),
				    *(int *)(puVar9 + *(int *)puVar3 * 0x55ec) + *(int *)(iVar4 + uVar2));
				if ((int)uVar6 == 0) {
					uVar6 = CanPut(*(int *)(puVar10 + *(int *)puVar3 * 0x55ec),
					    *(int *)(puVar9 + *(int *)puVar3 * 0x55ec));
				} else {
					uVar6 = 1;
				}
			} else {
				uVar6 = 1;
			}
		} else {
			uVar6 = 1;
		}
	} else {
		uVar6 = 0;
	}
	return uVar6;
}

void DrawInvMsg(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	longlong lVar1;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	int local_2c;

	lVar1 = GetTickCount((char)param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
	if (4999 < (lVar1 - (ulonglong) * (uint *)(local_2c + -0x4e18) & 0xffffffff)) {
		*(undefined4 *)(local_2c + -0x4e18) = (int)lVar1;
		ErrorPlrMsg(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	}
	return;
}

ulonglong InvPutItem(int param_1, longlong param_2, longlong param_3, undefined param_4,
    undefined param_5, undefined param_6, char param_7, char param_8,
    undefined4 param_9)

{
	int *piVar1;
	short *psVar2;
	uint *puVar3;
	uint *puVar4;
	short sVar5;
	uint uVar6;
	undefined4 uVar7;
	bool bVar8;
	undefined *puVar9;
	uint *puVar10;
	int *piVar11;
	uint uVar12;
	ulonglong uVar13;
	int iVar17;
	ulonglong uVar14;
	longlong lVar15;
	undefined8 uVar16;
	undefined uVar19;
	undefined4 *puVar18;
	undefined uVar21;
	longlong lVar20;
	undefined uVar22;
	undefined uVar23;
	undefined uVar24;
	longlong lVar25;
	int iVar26;
	int iVar27;
	undefined *puVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	ulonglong uVar32;
	int iVar33;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffbc;

	piVar11 = _DAT_100f1dec;
	iVar30 = _DAT_100f1de4;
	iVar29 = _DAT_100f1de0;
	puVar10 = _DAT_100f1ddc;
	puVar9 = PTR_DAT_100f1828;
	iVar27 = (int)param_3;
	iVar26 = (int)param_2;
	lVar25 = (longlong)param_8;
	lVar20 = (longlong)param_7;
	uVar13 = ZEXT48(&toc);
	uVar32 = ZEXT48(PTR_DAT_100f1940);
	if (*_DAT_100f1dec < 0x7f) {
		param_1 = param_1 * 0x55ec;
		puVar28 = PTR_DAT_100f1828 + param_1;
		piVar1 = (int *)(PTR_DAT_100f1828 + param_1 + 0x553c);
		psVar2 = (short *)(PTR_DAT_100f1828 + param_1 + 0x53d8);
		sVar5 = *psVar2;
		uVar19 = (undefined)sVar5;
		iVar17 = *(int *)(puVar28 + 0x53d4);
		uVar21 = (undefined)iVar17;
		iVar17 = FindGetItem(*piVar1, sVar5, iVar17);
		if (iVar17 != -1) {
			DrawInvMsg(*(int *)((int)uVar13 + -0x6158), uVar19, uVar21, param_4, param_5, param_6,
			    (char)lVar20, (char)lVar25, in_stack_ffffff98);
			SyncGetItem(iVar26, iVar27, *piVar1, *psVar2, *(int *)(puVar28 + 0x53d4), 1, (char)lVar20,
			    (char)lVar25, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffbc);
		}
		puVar3 = (uint *)(puVar9 + param_1 + 0x38);
		puVar4 = (uint *)(puVar9 + param_1 + 0x3c);
		uVar14 = GetDirection((ulonglong)*puVar3, *puVar4, param_2, iVar27);
		uVar6 = *puVar4;
		lVar15 = abs(param_2 - (ulonglong)*puVar3);
		if ((1 < (int)lVar15) || (lVar15 = abs(param_3 - (ulonglong)uVar6), 1 < (int)lVar15)) {
			iVar27 = (int)uVar14 * 4;
			iVar26 = *puVar3 + *(int *)(iVar30 + iVar27);
			iVar27 = *puVar4 + *(int *)(iVar29 + iVar27);
		}
		uVar16 = CanPut(iVar26, iVar27);
		uVar21 = (undefined)lVar25;
		uVar19 = (undefined)lVar20;
		iVar17 = (int)uVar13;
		if ((int)uVar16 == 0) {
			uVar12 = (int)uVar14 - 1;
			uVar6 = uVar12 * 4 & 0x1c;
			iVar26 = *puVar3 + *(int *)(iVar30 + uVar6);
			iVar27 = *puVar4 + *(int *)(iVar29 + uVar6);
			uVar16 = CanPut(iVar26, iVar27);
			uVar21 = (undefined)lVar25;
			uVar19 = (undefined)lVar20;
			iVar17 = (int)uVar13;
			if ((int)uVar16 == 0) {
				uVar6 = ((uVar12 & 7) + 2) * 4 & 0x1c;
				iVar26 = *puVar3 + *(int *)(iVar30 + uVar6);
				iVar27 = *puVar4 + *(int *)(iVar29 + uVar6);
				uVar16 = CanPut(iVar26, iVar27);
				uVar21 = (undefined)lVar25;
				uVar19 = (undefined)lVar20;
				iVar17 = (int)uVar13;
				if ((int)uVar16 == 0) {
					bVar8 = false;
					iVar29 = 1;
					while (true) {
						uVar21 = (undefined)lVar25;
						uVar19 = (undefined)lVar20;
						iVar17 = (int)uVar13;
						if ((0x31 < iVar29) || (bVar8))
							break;
						iVar30 = -iVar29;
						while ((iVar30 <= iVar29 && (!bVar8))) {
							iVar31 = iVar30 + *(int *)(puVar9 + param_1 + 0x3c);
							iVar17 = -iVar29;
							while ((iVar17 <= iVar29 && (!bVar8))) {
								iVar33 = iVar17 + *(int *)(puVar9 + param_1 + 0x38);
								uVar16 = CanPut(iVar33, iVar31);
								if ((int)uVar16 != 0) {
									bVar8 = true;
									iVar27 = iVar31;
									iVar26 = iVar33;
								}
								iVar17 = iVar17 + 1;
							}
							iVar30 = iVar30 + 1;
						}
						iVar29 = iVar29 + 1;
					}
					if (!bVar8) {
						return 0xffffffffffffffff;
					}
				}
			}
		}
		uVar6 = *puVar10;
		uVar13 = (ulonglong)uVar6;
		*(char *)(**(int **)(iVar17 + -0x768c) + iVar26 * 0x70 + iVar27) = (char)uVar6 + '\x01';
		lVar25 = uVar13 * 0x170;
		lVar25._7_1_ = (undefined)lVar25;
		iVar29 = *(int *)(iVar17 + -0x71e0);
		uVar23 = (undefined)iVar29;
		iVar30 = *piVar11;
		lVar20 = uVar32 + lVar25 + -8;
		uVar24 = (undefined)puVar10[0x7e - iVar30];
		lVar15 = 0x2e;
		*puVar10 = puVar10[0x7e - iVar30];
		*(uint *)(iVar29 + iVar30 * 4) = uVar6;
		puVar18 = (undefined4 *)(puVar28 + 0x53cc);
		do {
			uVar7 = puVar18[3];
			lVar20 = lVar20 + 8;
			*(undefined4 *)lVar20 = puVar18[2];
			((undefined4 *)lVar20)[1] = uVar7;
			lVar15 = lVar15 + -1;
			puVar18 = puVar18 + 2;
		} while (lVar15 != 0);
		lVar25 = uVar32 + lVar25;
		iVar29 = (int)lVar25;
		*(int *)(iVar29 + 0xc) = iVar26;
		*(int *)(iVar29 + 0x10) = iVar27;
		uVar22 = (undefined)lVar25;
		RespawnItem(uVar13, 1, uVar22, uVar23, uVar24, (undefined)lVar25, uVar19, uVar21, in_stack_ffffff98);
		iVar29 = *piVar11;
		*piVar11 = iVar29 + 1;
		NewCursor(1, (char)iVar29, uVar22, uVar23, uVar24, (undefined)lVar25, uVar19, uVar21,
		    in_stack_ffffff98);
	} else {
		uVar13 = 0xffffffffffffffff;
	}
	return uVar13;
}

ulonglong SyncPutItem(int param_1, longlong param_2, longlong param_3, int param_4, ulonglong param_5,
    ulonglong param_6, int param_7, int param_8, undefined4 param_9,
    undefined param_10, undefined4 param_11, uint param_12, undefined4 param_13,
    int param_14, undefined4 param_15)

{
	uint *puVar1;
	uint *puVar2;
	uint uVar3;
	bool bVar4;
	undefined *puVar5;
	int *piVar6;
	uint uVar7;
	ulonglong uVar8;
	int iVar12;
	ulonglong uVar9;
	longlong lVar10;
	undefined8 uVar11;
	undefined uVar13;
	int iVar15;
	longlong lVar14;
	undefined uVar16;
	undefined uVar17;
	undefined uVar18;
	undefined uVar19;
	ulonglong uVar20;
	undefined uVar21;
	longlong lVar22;
	undefined uVar23;
	ulonglong uVar24;
	undefined4 uVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	undefined4 in_stack_ffffff78;
	undefined in_stack_ffffff7f;
	undefined4 in_stack_ffffff9c;

	piVar6 = _DAT_100f1dec;
	iVar26 = _DAT_100f1de4;
	iVar29 = _DAT_100f1de0;
	puVar5 = PTR_DAT_100f1828;
	iVar27 = (int)param_3;
	iVar28 = (int)param_2;
	uVar13 = (undefined)param_5;
	lVar22 = (longlong)param_8;
	uVar19 = (undefined)param_8;
	lVar14 = (longlong)param_7;
	uVar17 = (undefined)param_7;
	uVar16 = (undefined)param_4;
	uVar8 = ZEXT48(&toc);
	uVar21 = (undefined)param_11;
	uVar24 = (ulonglong)param_12;
	uVar23 = (undefined)param_13;
	if (*_DAT_100f1dec < 0x7f) {
		iVar15 = (int)param_6;
		uVar20 = param_6;
		iVar15._3_1_ = (char)param_6;
		uVar18 = uVar13;
		iVar12 = FindGetItem(param_4, (short)param_5, iVar15);
		if (iVar12 != -1) {
			DrawInvMsg(*(int *)((int)uVar8 + -0x615c), uVar13, (undefined)iVar15, uVar16, uVar18,
			    (char)uVar20, (char)lVar14, (char)lVar22, in_stack_ffffff78);
			uVar20 = 2;
			SyncGetItem(iVar28, iVar27, param_4, (short)param_5, iVar15, 2, (char)lVar14, (char)lVar22,
			    in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff9c);
		}
		param_1 = param_1 * 0x55ec;
		puVar1 = (uint *)(puVar5 + param_1 + 0x38);
		puVar2 = (uint *)(puVar5 + param_1 + 0x3c);
		uVar9 = GetDirection((ulonglong)*puVar1, *puVar2, param_2, iVar27);
		uVar3 = *puVar2;
		lVar10 = abs(param_2 - (ulonglong)*puVar1);
		if ((1 < (int)lVar10) || (lVar10 = abs(param_3 - (ulonglong)uVar3), 1 < (int)lVar10)) {
			iVar27 = (int)uVar9 * 4;
			iVar28 = *puVar1 + *(int *)(iVar26 + iVar27);
			iVar27 = *puVar2 + *(int *)(iVar29 + iVar27);
		}
		uVar11 = CanPut(iVar28, iVar27);
		iVar15._3_1_ = (undefined)lVar22;
		uVar16 = (undefined)lVar14;
		uVar13 = (undefined)uVar20;
		uVar25 = (undefined4)uVar24;
		iVar12 = (int)uVar8;
		if ((int)uVar11 == 0) {
			uVar7 = (int)uVar9 - 1;
			uVar3 = uVar7 * 4 & 0x1c;
			iVar28 = *puVar1 + *(int *)(iVar26 + uVar3);
			iVar27 = *puVar2 + *(int *)(iVar29 + uVar3);
			uVar11 = CanPut(iVar28, iVar27);
			iVar15._3_1_ = (undefined)lVar22;
			uVar16 = (undefined)lVar14;
			uVar13 = (undefined)uVar20;
			uVar25 = (undefined4)uVar24;
			iVar12 = (int)uVar8;
			if ((int)uVar11 == 0) {
				uVar3 = ((uVar7 & 7) + 2) * 4 & 0x1c;
				iVar28 = *puVar1 + *(int *)(iVar26 + uVar3);
				iVar27 = *puVar2 + *(int *)(iVar29 + uVar3);
				uVar11 = CanPut(iVar28, iVar27);
				iVar15._3_1_ = (undefined)lVar22;
				uVar16 = (undefined)lVar14;
				uVar13 = (undefined)uVar20;
				uVar25 = (undefined4)uVar24;
				iVar12 = (int)uVar8;
				if ((int)uVar11 == 0) {
					bVar4 = false;
					iVar29 = 1;
					while (true) {
						iVar15._3_1_ = (undefined)lVar22;
						uVar16 = (undefined)lVar14;
						uVar13 = (undefined)uVar20;
						uVar25 = (undefined4)uVar24;
						iVar12 = (int)uVar8;
						if ((0x31 < iVar29) || (bVar4))
							break;
						iVar26 = -iVar29;
						while ((iVar26 <= iVar29 && (!bVar4))) {
							iVar30 = iVar26 + *(int *)(puVar5 + param_1 + 0x3c);
							iVar12 = -iVar29;
							while ((iVar12 <= iVar29 && (!bVar4))) {
								iVar31 = iVar12 + *(int *)(puVar5 + param_1 + 0x38);
								uVar11 = CanPut(iVar31, iVar30);
								if ((int)uVar11 != 0) {
									bVar4 = true;
									iVar27 = iVar30;
									iVar28 = iVar31;
								}
								iVar12 = iVar12 + 1;
							}
							iVar26 = iVar26 + 1;
						}
						iVar29 = iVar29 + 1;
					}
					if (!bVar4) {
						return 0xffffffffffffffff;
					}
				}
			}
		}
		uVar18 = (undefined)uVar25;
		uVar3 = **(uint **)(iVar12 + -0x71f4);
		uVar8 = (ulonglong)uVar3;
		*(char *)(**(int **)(iVar12 + -0x768c) + iVar28 * 0x70 + iVar27) = (char)uVar3 + '\x01';
		iVar29 = *piVar6;
		iVar26 = *(int *)(iVar12 + -0x71e0);
		**(undefined4 **)(iVar12 + -0x71f4) = *(undefined4 *)(*(int *)(iVar12 + -0x71f4) + (0x7e - iVar29) * 4);
		*(uint *)(iVar26 + iVar29 * 4) = uVar3;
		if (param_4 == 0x17) {
			FUN_1004fd24(uVar3, param_5, iVar15, param_7, param_8, param_11, uVar25, param_13, in_stack_ffffff78,
			    in_stack_ffffff7f, param_14, param_15);
		} else {
			uVar19 = (undefined)param_14;
			uVar17 = (char)param_6;
			uVar21 = uVar13;
			uVar18 = uVar16;
			uVar23 = (undefined)iVar15;
			RecreateItem(uVar8, param_4, param_5, param_6, param_14, uVar13, uVar16, (undefined)iVar15,
			    in_stack_ffffff78);
			if (param_7 != 0) {
				*(undefined4 *)(*(int *)(iVar12 + -0x7690) + uVar3 * 0x170 + 0x38) = 1;
			}
			iVar29 = *(int *)(iVar12 + -0x7690) + uVar3 * 0x170;
			*(int *)(iVar29 + 0xec) = param_8;
			*(undefined4 *)(iVar29 + 0xf0) = param_11;
			*(undefined4 *)(iVar29 + 0xe4) = uVar25;
			*(undefined4 *)(iVar29 + 0xe8) = param_13;
		}
		lVar14 = (ulonglong) * (uint *)(iVar12 + -0x7690) + uVar8 * 0x170;
		iVar29 = (int)lVar14;
		*(int *)(iVar29 + 0xc) = iVar28;
		*(int *)(iVar29 + 0x10) = iVar27;
		RespawnItem(uVar8, 1, (char)lVar14, uVar17, uVar19, uVar21, uVar18, uVar23, in_stack_ffffff78);
		*piVar6 = *piVar6 + 1;
	} else {
		uVar8 = 0xffffffffffffffff;
	}
	return uVar8;
}

longlong CheckInvHLight(void)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	ulonglong uVar6;
	int iVar7;
	int in_r7;
	int in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	longlong lVar8;
	longlong lVar9;
	ulonglong uVar10;
	int iVar11;
	longlong lVar12;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar4 = PTR_DAT_100f192c;
	puVar3 = PTR_DAT_100f18a8;
	puVar2 = PTR_DAT_100f1824;
	ppuVar5 = &toc;
	uVar10 = 0;
	uVar6 = ZEXT48(&DAT_100fc5bc);
	lVar12 = 0x49;
	do {
		iVar7 = *(int *)uVar6;
		if ((((iVar7 <= *(int *)PTR_DAT_100f1928) && (*(int *)PTR_DAT_100f1928 < iVar7 + 0x1d)) && (iVar7 = ((int *)uVar6)[1], iVar7 + -0x1d <= *(int *)PTR_DAT_100f1924)) && (*(int *)PTR_DAT_100f1924 < iVar7))
			break;
		uVar6 = uVar6 + 8;
		uVar10 = uVar10 + 1;
		lVar12 = lVar12 + -1;
	} while (lVar12 != 0);
	if (0x48 < (uVar10 & 0xffffffff)) {
		return 0xffffffffffffffff;
	}
	*PTR_DAT_100f18a8 = 0;
	lVar9 = -1;
	lVar12 = 0;
	lVar8 = ZEXT48(PTR_DAT_100f1828) + (ulonglong) * (uint *)puVar2 * 0x55ec;
	ClearPanel();
	iVar11 = (int)uVar10;
	if ((iVar11 < 0) || (3 < iVar11)) {
		if (iVar11 == 4) {
			lVar12 = lVar8 + 0x608;
			lVar9 = 1;
		} else {
			if (iVar11 == 5) {
				lVar12 = lVar8 + 0x778;
				lVar9 = 2;
			} else {
				if (iVar11 == 6) {
					lVar12 = lVar8 + 0x8e8;
					lVar9 = 3;
				} else {
					if ((iVar11 < 7) || (0xc < iVar11)) {
						iVar1 = (int)lVar8;
						if ((iVar11 < 0xd) || (0x12 < iVar11)) {
							if ((iVar11 < 0x13) || (0x18 < iVar11)) {
								if ((iVar11 < 0x19) || (0x40 < iVar11)) {
									if (0x40 < iVar11) {
										lVar12 = lVar8 + (uVar10 - 0x41) * 0x170 + 0x4854;
										*(undefined4 *)ppuVar5[-0x1d9c] = 1;
										if (*(int *)((int)lVar12 + 8) == -1) {
											return 0xffffffffffffffff;
										}
										lVar9 = uVar10 - 0x12;
									}
								} else {
									lVar12 = abs((longlong) * (char *)(iVar1 + iVar11 + 0x4813));
									if ((int)lVar12 == 0) {
										return 0xffffffffffffffff;
									}
									lVar9 = lVar12 + 6;
									lVar12 = lVar8 + (lVar12 + -1) * 0x170 + 0xea8;
								}
							} else {
								lVar12 = lVar8 + 0xd38;
								lVar9 = 6;
							}
						} else {
							lVar12 = lVar8 + 0xa58;
							if ((*(int *)(iVar1 + 0xa60) == -1) || (*(char *)(iVar1 + 0xb15) != '\x02')) {
								lVar12 = lVar8 + 0xbc8;
								lVar9 = 5;
							} else {
								lVar9 = 4;
							}
						}
					} else {
						lVar12 = lVar8 + 0xa58;
						lVar9 = 4;
					}
				}
			}
		}
	} else {
		lVar12 = lVar8 + 0x498;
		lVar9 = 0;
	}
	iVar11 = (int)lVar12;
	if (*(int *)(iVar11 + 8) == -1) {
		lVar9 = -1;
	} else {
		if (*(int *)(iVar11 + 8) == 0xb) {
			iVar7 = *(int *)(iVar11 + 0xc4);
			uVar6 = get_pieces_str(iVar7);
			sprintf((int)puVar4, ppuVar5[-0x1858], iVar7, (int)uVar6, in_r7, in_r8, in_r9, in_r10,
			    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0,
			    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0,
			    in_stack_ffffffe4);
		} else {
			if (*(char *)(iVar11 + 0x3c) == '\x01') {
				*puVar3 = 1;
			} else {
				if (*(char *)(iVar11 + 0x3c) == '\x02') {
					*puVar3 = 3;
				}
			}
			lVar8 = lVar12 + 0x3d;
			strcpy((int)puVar4, (int)lVar8);
			if (*(int *)(iVar11 + 0x38) == 0) {
				PrintItemDur(iVar11, lVar8, uVar6, iVar7, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffb8);
			} else {
				lVar8 = lVar12 + 0x7d;
				strcpy((int)puVar4, (int)lVar8);
				PrintItemDetails(lVar12, lVar8, uVar6, iVar7, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffb8);
			}
		}
	}
	return lVar9;
}

void RemoveScroll(longlong param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	int iVar3;
	ulonglong uVar4;
	int iVar6;
	longlong lVar5;
	longlong lVar7;
	undefined uVar8;
	longlong lVar9;
	undefined uVar10;
	undefined4 in_stack_ffffffc8;

	lVar9 = ZEXT48(PTR_DAT_100f1828) + param_1 * 0x55ec;
	lVar9._7_1_ = (undefined)lVar9;
	uVar1 = *(uint *)((int)lVar9 + 0x4828);
	uVar4 = (ulonglong)uVar1;
	iVar2 = *(int *)((int)lVar9 + 0xa4);
	lVar7 = 0;
	uVar10 = (undefined)iVar2;
	iVar6 = (int)param_1;
	lVar5 = lVar9;
	if (0 < (int)uVar1) {
		do {
			uVar8 = (undefined)lVar7;
			iVar3 = (int)lVar5;
			if ((*(int *)(iVar3 + 0xeb0) != -1) && (((*(int *)(iVar3 + 0xf84) == 0x15 || (*(int *)(iVar3 + 0xf84) == 0x16)) && (*(int *)(iVar3 + 0xf88) == iVar2)))) {
				RemoveInvItem(param_1, lVar7, (undefined)lVar9, uVar10, param_5, param_6, param_7, param_8,
				    in_stack_ffffffc8);
				CalcPlrScrolls(iVar6, uVar8, (undefined)lVar9, uVar10, param_5, param_6, param_7, param_8,
				    in_stack_ffffffc8);
				return;
			}
			lVar5 = lVar5 + 0x170;
			lVar7 = lVar7 + 1;
			uVar4 = uVar4 - 1;
		} while (uVar4 != 0);
	}
	lVar7 = 8;
	lVar5 = 0;
	while (true) {
		uVar8 = (undefined)lVar9;
		lVar9._7_1_ = (undefined)lVar5;
		iVar3 = (int)lVar9;
		if (((*(int *)(iVar3 + 0x485c) != -1) && ((*(int *)(iVar3 + 0x4930) == 0x15 || (*(int *)(iVar3 + 0x4930) == 0x16)))) && (*(int *)(iVar3 + 0x4934) == iVar2))
			break;
		lVar9 = lVar9 + 0x170;
		lVar5 = lVar5 + 1;
		lVar7 = lVar7 + -1;
		if (lVar7 == 0) {
			return;
		}
	}
	RemoveSpdBarItem(iVar6, (int)lVar5, uVar8, uVar10, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	CalcPlrScrolls(iVar6, (undefined)lVar9, uVar8, uVar10, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

undefined8 UseScroll(void)

{
	int iVar1;
	ulonglong uVar2;
	undefined *puVar3;
	undefined *puVar4;
	longlong lVar5;

	if (*(int *)PTR_DAT_100f188c != 1) {
		return 0;
	}
	if ((*PTR_DAT_100f183c == '\0') && (*(int *)(PTR_DAT_100f1934 + *(int *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0xb4) * 0x38 + 0x18) == 0)) {
		return 0;
	}
	puVar4 = PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec;
	uVar2 = (ulonglong) * (uint *)(puVar4 + 0x4828);
	iVar1 = *(int *)(puVar4 + 0xb4);
	puVar3 = puVar4;
	if (0 < (int)*(uint *)(puVar4 + 0x4828)) {
		do {
			if ((*(int *)(puVar3 + 0xeb0) != -1) && (((*(int *)(puVar3 + 0xf84) == 0x15 || (*(int *)(puVar3 + 0xf84) == 0x16)) && (*(int *)(puVar3 + 0xf88) == iVar1)))) {
				return 1;
			}
			puVar3 = puVar3 + 0x170;
			uVar2 = uVar2 - 1;
		} while (uVar2 != 0);
	}
	lVar5 = 2;
	while (true) {
		if (((*(int *)(puVar4 + 0x485c) != -1) && ((*(int *)(puVar4 + 0x4930) == 0x15 || (*(int *)(puVar4 + 0x4930) == 0x16)))) && (*(int *)(puVar4 + 0x4934) == iVar1)) {
			return 1;
		}
		if (((*(int *)(puVar4 + 0x49cc) != -1) && ((*(int *)(puVar4 + 0x4aa0) == 0x15 || (*(int *)(puVar4 + 0x4aa0) == 0x16)))) && (*(int *)(puVar4 + 0x4aa4) == iVar1)) {
			return 1;
		}
		if ((*(int *)(puVar4 + 0x4b3c) != -1) && (((*(int *)(puVar4 + 0x4c10) == 0x15 || (*(int *)(puVar4 + 0x4c10) == 0x16)) && (*(int *)(puVar4 + 0x4c14) == iVar1)))) {
			return 1;
		}
		if ((*(int *)(puVar4 + 0x4cac) != -1) && (((*(int *)(puVar4 + 0x4d80) == 0x15 || (*(int *)(puVar4 + 0x4d80) == 0x16)) && (*(int *)(puVar4 + 0x4d84) == iVar1))))
			break;
		puVar4 = puVar4 + 0x5c0;
		lVar5 = lVar5 + -1;
		if (lVar5 == 0) {
			return 0;
		}
	}
	return 1;
}

void UseStaffCharge(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	int *piVar2;
	longlong lVar3;
	undefined4 in_stack_ffffffc8;

	lVar3 = ZEXT48(PTR_DAT_100f1828) + (longlong)param_1 * 0x55ec;
	iVar1 = (int)lVar3;
	if (((*(int *)(iVar1 + 0xa60) != -1) && (*(int *)(iVar1 + 0xb34) == 0x17)) && (*(int *)(iVar1 + 0xb38) == *(int *)(iVar1 + 0xb4))) {
		lVar3 = lVar3 + 0xb3c;
		piVar2 = (int *)lVar3;
		iVar1 = *piVar2;
		if (0 < iVar1) {
			*piVar2 = iVar1 + -1;
			CalcPlrStaff(param_1, (char)iVar1, (char)lVar3, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffc8);
		}
	}
	return;
}

undefined8 UseStaff(void)

{
	undefined *puVar1;

	if (*(int *)PTR_DAT_100f188c != 1) {
		return 0;
	}
	puVar1 = PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec;
	if ((((*(int *)(puVar1 + 0xa60) != -1) && (*(int *)(puVar1 + 0xb34) == 0x17)) && (*(int *)(puVar1 + 0xb38) == *(int *)(puVar1 + 0xb4))) && (0 < *(int *)(puVar1 + 0xb3c))) {
		return 1;
	}
	return 0;
}

void StartGoldDrop(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	char cVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;

	puVar4 = PTR_DAT_100f18c4;
	puVar3 = PTR_DAT_100f1828;
	puVar2 = PTR_DAT_100f1824;
	cVar1 = *PTR_DAT_100f18a4;
	*(int *)PTR_DAT_100f18c0 = (int)cVar1;
	if ((int)cVar1 < 0x2f) {
		*(undefined4 *)puVar4 = *(undefined4 *)(puVar3 + (int)cVar1 * 0x170 + *(int *)puVar2 * 0x55ec + 0x55c);
	} else {
		*(undefined4 *)puVar4 = *(undefined4 *)(puVar3 + (int)cVar1 * 0x170 + *(int *)puVar2 * 0x55ec + 0x588);
	}
	puVar2 = PTR_DAT_100f18c8;
	*(undefined4 *)PTR_DAT_100f18cc = 1;
	puVar3 = PTR_DAT_100f1900;
	*(undefined4 *)puVar2 = 0;
	if (*(int *)puVar3 != 0) {
		control_reset_talk();
	}
	return;
}

undefined8
UseInvItem(longlong param_1, longlong param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	char cVar1;
	undefined *puVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined4 *puVar11;
	undefined4 *puVar12;
	undefined8 uVar13;
	undefined uVar14;
	undefined uVar15;
	undefined uVar16;
	int iVar17;
	undefined4 in_stack_ffffffa8;

	puVar12 = _DAT_100f1df8;
	puVar11 = _DAT_100f1df4;
	puVar10 = PTR_DAT_100f1934;
	puVar9 = PTR_DAT_100f18c8;
	puVar8 = PTR_DAT_100f1828;
	puVar7 = PTR_DAT_100f1824;
	puVar6 = PTR_DAT_100f17ec;
	iVar5 = (int)param_1;
	iVar3 = iVar5 * 0x55ec;
	uVar15 = SUB41(PTR_DAT_100f17ec, 0);
	if ((((PTR_DAT_100f1828 + iVar3)[0x139] == '\0') || (*(int *)(PTR_DAT_100f1828 + iVar3 + 0x194) != 0)) || (iVar5 != *(int *)PTR_DAT_100f1824)) {
		if (*(int *)PTR_DAT_100f188c == 1) {
			if (*PTR_DAT_100f186c == '\0') {
				if ((int)param_2 < 6) {
					uVar13 = 0;
				} else {
					if ((int)param_2 < 0x2f) {
						param_2 = param_2 + -7;
						iVar17 = iVar3 + (int)param_2 * 0x170 + 0xea8;
						bVar4 = false;
					} else {
						if (*(int *)PTR_DAT_100f1900 != 0) {
							return 1;
						}
						param_2 = param_2 + -0x2f;
						iVar17 = iVar3 + (int)param_2 * 0x170 + 0x4854;
						bVar4 = true;
					}
					puVar2 = PTR_DAT_100f1828 + iVar17;
					iVar17 = *(int *)(puVar2 + 0x168);
					if (iVar17 != 0x12) {
						if (iVar17 < 0x12) {
							if (0x10 < iVar17) {
								*_DAT_100f1df8 = 10;
								cVar1 = puVar8[iVar3 + 0x15c];
								if (cVar1 == '\0') {
									*puVar11 = 0x32f;
								} else {
									if (cVar1 == '\x01') {
										*puVar11 = 0x2c2;
									} else {
										if (cVar1 == '\x02') {
											*puVar11 = 0x25b;
										}
									}
								}
								return 1;
							}
						} else {
							if (iVar17 < 0x14) {
								PlaySFX(0x2f);
								*puVar12 = 10;
								cVar1 = puVar8[iVar3 + 0x15c];
								if (cVar1 == '\0') {
									*puVar11 = 0x2ec;
								} else {
									if (cVar1 == '\x01') {
										*puVar11 = 0x27f;
									} else {
										if (cVar1 == '\x02') {
											*puVar11 = 0x218;
										}
									}
								}
								return 1;
							}
						}
					}
					uVar16 = 0x28;
					if (*(int *)(iVar17 * 0x4c + 0x100fc868) == 0) {
						uVar13 = 0;
					} else {
						if (*(int *)(puVar2 + 0x164) == 0) {
							cVar1 = PTR_DAT_100f1828[iVar3 + 0x15c];
							if (cVar1 == '\0') {
								PlaySFX(0x2d6);
							} else {
								if (cVar1 == '\x01') {
									PlaySFX(0x26f);
								} else {
									if (cVar1 == '\x02') {
										PlaySFX(0x208);
									}
								}
							}
							uVar13 = 1;
						} else {
							if ((*(int *)(puVar2 + 0xdc) == 0) && (*(int *)(puVar2 + 8) == 0xb)) {
								StartGoldDrop((char)PTR_DAT_100f1824, 0xb, (char)PTR_DAT_100f18cc, uVar15, 0x28, param_6,
								    param_7, param_8, in_stack_ffffffa8);
								uVar13 = 1;
							} else {
								if (*(int *)PTR_DAT_100f18cc != 0) {
									uVar16 = 0;
									*(undefined4 *)PTR_DAT_100f18cc = 0;
									*(undefined4 *)puVar9 = 0;
								}
								iVar17 = *(int *)(puVar2 + 0xdc);
								if (((iVar17 == 0x15) && (*puVar6 == '\0')) && (*(int *)(puVar10 + *(int *)(puVar2 + 0xe0) * 0x38 + 0x18) == 0)) {
									uVar13 = 1;
								} else {
									if (((iVar17 == 0x16) && (*puVar6 == '\0')) && (*(int *)(puVar10 + *(int *)(puVar2 + 0xe0) * 0x38 + 0x18) == 0)) {
										uVar13 = 1;
									} else {
										if (iVar17 == 0x18) {
											PlaySFX(0x41);
										} else {
											if (iVar5 == *(int *)puVar7) {
												PlaySFX((ulonglong)
												    * (uint *)(_DAT_100f1dfc + (uint)(byte)PTR_DAT_100f1e00[*(int *)(puVar2 + 0xc0)] * 4));
											}
										}
										uVar14 = (undefined) * (undefined4 *)(puVar2 + 0xe0);
										UseItem(param_1, *(uint *)(puVar2 + 0xdc), uVar14, uVar15, uVar16, param_6,
										    param_7, param_8, in_stack_ffffffa8);
										if (bVar4) {
											RemoveSpdBarItem(iVar5, (int)param_2, uVar14, uVar15, uVar16, param_6, param_7, param_8,
											    in_stack_ffffffa8);
										} else {
											if (*(int *)(puVar8 + (int)param_2 * 0x170 + iVar3 + 0xf84) == 0x2a) {
												return 1;
											}
											RemoveInvItem(param_1, param_2, uVar14, uVar15, uVar16, param_6, param_7, param_8,
											    in_stack_ffffffa8);
										}
										uVar13 = 1;
									}
								}
							}
						}
					}
				}
			} else {
				uVar13 = 1;
			}
		} else {
			uVar13 = 1;
		}
	} else {
		uVar13 = 1;
	}
	return uVar13;
}

void DoTelekinesis(undefined8 uParm1, undefined param_2, undefined8 uParm3, ulonglong uParm4,
    undefined8 uParm5, undefined4 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	int iVar1;
	uint uVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	undefined8 uVar5;
	char cVar6;
	undefined uVar7;
	ulonglong uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined4 in_stack_ffffffc8;

	puVar3 = PTR_DAT_100f1880;
	ppuVar4 = &toc;
	cVar6 = *PTR_DAT_100f1884;
	if (cVar6 != -1) {
		param_2 = 0x1b;
		ppuVar4 = &toc;
		NetSendCmdParam1(1, 0x1b, (longlong)cVar6, uParm4, uParm5, uParm6, uParm7, uParm8, in_stack_ffffffc8);
	}
	uVar8 = (ulonglong)(byte)*ppuVar4[-0x1dd2];
	if (*ppuVar4[-0x1dd2] != 0xff) {
		param_2 = 0x28;
		uParm4 = (ulonglong)(*(uint *)ppuVar4[-0x1deb] & 0xff);
		cVar6 = (char)(*(uint *)ppuVar4[-0x1deb] & 0xff);
		NetSendCmdGItem(1);
	}
	uVar12 = (undefined)uParm8;
	uVar11 = (undefined)uParm7;
	uVar10 = (undefined)uParm6;
	uVar9 = (undefined)uVar8;
	uVar7 = (undefined)uParm4;
	iVar1 = *(int *)puVar3;
	if (iVar1 != -1) {
		uVar5 = M_Talker(iVar1);
		uVar12 = (undefined)uParm8;
		uVar11 = (undefined)uParm7;
		uVar10 = (undefined)uParm6;
		uVar9 = (undefined)uVar8;
		uVar7 = (undefined)uParm4;
		if ((int)uVar5 == 0) {
			uVar2 = *(uint *)puVar3;
			param_2 = (undefined)uVar2;
			if (*(int *)(ppuVar4[-0x1dd5] + uVar2 * 0xe8 + 0xd4) == 0) {
				cVar6 = (char)(uVar2 & 0xffff);
				param_2 = 0x1c;
				NetSendCmdParam1(1, 0x1c, (ulonglong)(uVar2 & 0xffff), uParm4, uVar8, uParm6, uParm7, uParm8,
				    in_stack_ffffffc8);
			}
		}
	}
	NewCursor(1, param_2, cVar6, uVar7, uVar9, uVar10, uVar11, uVar12, in_stack_ffffffc8);
	return;
}

ulonglong CalculateGold(int param_1)

{
	uint uVar1;
	undefined *puVar2;
	ulonglong uVar3;
	ulonglong uVar4;
	undefined *puVar5;

	puVar2 = PTR_DAT_100f1914;
	puVar5 = PTR_DAT_100f1828 + param_1 * 0x55ec;
	uVar4 = 0;
	if (*(int *)(puVar5 + 0x485c) == 0xb) {
		uVar4 = (ulonglong) * (uint *)(puVar5 + 0x4918);
		*(undefined4 *)PTR_DAT_100f1914 = 0xff;
	}
	if (*(int *)(puVar5 + 0x49cc) == 0xb) {
		uVar1 = *(uint *)(puVar5 + 0x4a88);
		*(undefined4 *)puVar2 = 0xff;
		uVar4 = uVar4 + (ulonglong)uVar1;
	}
	if (*(int *)(puVar5 + 0x4b3c) == 0xb) {
		uVar1 = *(uint *)(puVar5 + 0x4bf8);
		*(undefined4 *)puVar2 = 0xff;
		uVar4 = uVar4 + (ulonglong)uVar1;
	}
	if (*(int *)(puVar5 + 0x4cac) == 0xb) {
		uVar1 = *(uint *)(puVar5 + 0x4d68);
		*(undefined4 *)puVar2 = 0xff;
		uVar4 = uVar4 + (ulonglong)uVar1;
	}
	if (*(int *)(puVar5 + 0x4e1c) == 0xb) {
		uVar1 = *(uint *)(puVar5 + 0x4ed8);
		*(undefined4 *)puVar2 = 0xff;
		uVar4 = uVar4 + (ulonglong)uVar1;
	}
	if (*(int *)(puVar5 + 0x4f8c) == 0xb) {
		uVar1 = *(uint *)(puVar5 + 0x5048);
		*(undefined4 *)puVar2 = 0xff;
		uVar4 = uVar4 + (ulonglong)uVar1;
	}
	if (*(int *)(puVar5 + 0x50fc) == 0xb) {
		uVar1 = *(uint *)(puVar5 + 0x51b8);
		*(undefined4 *)puVar2 = 0xff;
		uVar4 = uVar4 + (ulonglong)uVar1;
	}
	if (*(int *)(puVar5 + 0x526c) == 0xb) {
		uVar1 = *(uint *)(puVar5 + 0x5328);
		*(undefined4 *)puVar2 = 0xff;
		uVar4 = uVar4 + (ulonglong)uVar1;
	}
	uVar3 = (ulonglong) * (uint *)(puVar5 + 0x4828);
	if ((int)*(uint *)(puVar5 + 0x4828) < 1) {
		return uVar4;
	}
	do {
		if (*(int *)(puVar5 + 0xeb0) == 0xb) {
			uVar4 = uVar4 + (ulonglong) * (uint *)(puVar5 + 0xf6c);
		}
		puVar5 = puVar5 + 0x170;
		uVar3 = uVar3 - 1;
	} while (uVar3 != 0);
	return uVar4;
}

ulonglong DropItemBeforeTrig(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined8 uParm5, uint uParm6, undefined4 uParm7, undefined4 uParm8)

{
	bool bVar1;
	undefined **ppuVar2;
	undefined8 uVar3;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined7 uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined4 in_stack_ffffffc8;

	uVar8 = (undefined)uParm5;
	uVar7 = (undefined7)((ulonglong)uParm5 >> 8);
	ppuVar2 = &toc;
	uVar3 = TryInvPut(param_1, param_2, param_3, param_4, uVar8, (char)uParm6, (char)uParm7, (char)uParm8,
	    in_stack_ffffffc8);
	uVar11 = (undefined)uParm8;
	uVar10 = (undefined)uParm7;
	uVar9 = (undefined)uParm6;
	bVar1 = (int)uVar3 != 0;
	if (bVar1) {
		uVar4 = 10;
		uVar5 = (undefined)(*(uint *)ppuVar2[-0x1d96] & 0xff);
		uVar6 = (undefined)(*(uint *)ppuVar2[-0x1d97] & 0xff);
		NetSendCmdPItem(1, 10, (ulonglong)(*(uint *)ppuVar2[-0x1d96] & 0xff),
		    (ulonglong)(*(uint *)ppuVar2[-0x1d97] & 0xff), CONCAT71(uVar7, uVar8), uParm6, uParm7,
		    uParm8, in_stack_ffffffc8);
		NewCursor(1, uVar4, uVar5, uVar6, uVar8, uVar9, uVar10, uVar11, in_stack_ffffffc8);
	}
	return (ulonglong)bVar1;
}
