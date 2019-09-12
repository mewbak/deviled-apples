
void FreeInvGFX(void)

{
	MemFreeDbg((int **)&DAT_100f41bc);
	return;
}

void InitInv(void)

{
	char cVar1;
	undefined4 *puVar2;
	int iVar3;
	BYTE *pBVar4;

	iVar3 = 0x100f8fd0;
	iVar3 = 0x100f8fd0;
	cVar1 = *(char *)((int)plr + myplr * 0x55ec + 0x15c);
	if (cVar1 == '\0') {
		iVar3 = iVar3;
		pBVar4 = LoadFileInMem("Data\\Inv\\Inv.CEL", (DWORD *)0x0);
		*(BYTE **)(iVar3 + -0x4e14) = pBVar4;
	} else {
		if (cVar1 == '\x01') {
			iVar3 = iVar3;
			pBVar4 = LoadFileInMem("Data\\Inv\\Inv_rog.CEL", (DWORD *)0x0);
			*(BYTE **)(iVar3 + -0x4e14) = pBVar4;
		} else {
			if (cVar1 == '\x02') {
				iVar3 = iVar3;
				pBVar4 = LoadFileInMem("Data\\Inv\\Inv_Sor.CEL", (DWORD *)0x0);
				*(BYTE **)(iVar3 + -0x4e14) = pBVar4;
			}
		}
	}
	puVar2 = *(undefined4 **)(iVar3 + -0x7670);
	**(undefined4 **)(iVar3 + -0x77bc) = 0;
	*puVar2 = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void InvDrawSlotBack(int X, int Y, int W, int H)

{
	byte bVar1;
	byte *pbVar2;
	int iVar3;
	longlong lVar4;
	byte *pbVar5;

	lVar4 = (longlong)H;
	pbVar2 = (byte *)(_DAT_101271e4 + *(int *)(&DAT_1019ed80 + Y * 4) + X);
	iVar3 = W;
	do {
		do {
			pbVar5 = pbVar2;
			bVar1 = *pbVar5;
			if (0xaf < bVar1) {
				if (bVar1 < 0xc0) {
					*pbVar5 = bVar1 - 0x10;
				} else {
					if (0xef < bVar1) {
						*pbVar5 = bVar1 + 0xb0;
					}
				}
			}
			iVar3 = iVar3 + -1;
			pbVar2 = pbVar5 + 1;
		} while (iVar3 != 0);
		lVar4 = lVar4 + -1;
		pbVar2 = pbVar5 + (-0x2ff - W);
		iVar3 = W;
	} while (lVar4 != 0);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void DrawInv(void)

{
	int *piVar1;
	int nWidth;
	int nCel;
	ulonglong colour;
	char col;
	char col_00;
	int nWidth_00;
	PlayerStruct *pPVar2;
	int sy;
	undefined *puVar3;
	int sx;
	int nCel_00;

	nWidth = 0x100f8fd0;
	CelDecodeOnly(0x180, 0x1ff, _DAT_100f41bc, 1, 0x140);
	if (*(int *)((int)plr + myplr * 0x55ec + 0x4a0) != -1) {
		InvDrawSlotBack(0x205, 0xdb, 0x38, 0x38);
		nCel_00 = myplr * 0x55ec;
		nCel = *(int *)((int)plr + nCel_00 + 0x558) + 0xc;
		nWidth_00 = *(int *)(s__AAAAAAACEEEEIIIIDNOOOOOX0UUUUYb_100f65a7 + nCel * 4 + 0x41);
		if (DAT_101285f5 == '\0') {
			col_00 = -0x3b;
			if (*(char *)((int)plr + nCel_00 + 0x4d4) != '\0') {
				col_00 = -0x4b;
			}
			if (*(int *)((int)plr + nCel_00 + 0x5fc) == 0) {
				col_00 = -0x1b;
			}
			thunk_CelDecodeClr(col_00, 0x205, 0xdb, _DAT_101285f0, nCel, nWidth_00, 0, 8);
		}
		if (*(int *)((int)plr + myplr * 0x55ec + 0x5fc) == 0) {
			thunk_CelDrawHdrLightRed(0x205, 0xdb, _DAT_101285f0, nCel, nWidth_00, 0, 8, '\x01');
		} else {
			thunk_CelDrawHdrOnly(0x205, 0xdb, _DAT_101285f0, nCel, nWidth_00, 0, 8);
		}
	}
	if (*(int *)((int)plr + myplr * 0x55ec + 0x610) != -1) {
		InvDrawSlotBack(0x1b0, 0x16d, 0x1c, 0x1c);
		nCel = myplr * 0x55ec;
		nCel_00 = *(int *)((int)plr + nCel + 0x6c8) + 0xc;
		nWidth_00 = *(int *)(s__AAAAAAACEEEEIIIIDNOOOOOX0UUUUYb_100f65a7 + nCel_00 * 4 + 0x41);
		if (DAT_101285f5 == '\x01') {
			col_00 = -0x3b;
			if (*(char *)((int)plr + nCel + 0x644) != '\0') {
				col_00 = -0x4b;
			}
			if (*(int *)((int)plr + nCel + 0x76c) == 0) {
				col_00 = -0x1b;
			}
			thunk_CelDecodeClr(col_00, 0x1b0, 0x16d, _DAT_101285f0, nCel_00, nWidth_00, 0, 8);
		}
		if (*(int *)((int)plr + myplr * 0x55ec + 0x76c) == 0) {
			thunk_CelDrawHdrLightRed(0x1b0, 0x16d, _DAT_101285f0, nCel_00, nWidth_00, 0, 8, '\x01');
		} else {
			thunk_CelDrawHdrOnly(0x1b0, 0x16d, _DAT_101285f0, nCel_00, nWidth_00, 0, 8);
		}
	}
	if (*(int *)((int)plr + myplr * 0x55ec + 0x780) != -1) {
		InvDrawSlotBack(0x279, 0x16d, 0x1c, 0x1c);
		nCel = myplr * 0x55ec;
		nCel_00 = *(int *)((int)plr + nCel + 0x838) + 0xc;
		nWidth_00 = *(int *)(s__AAAAAAACEEEEIIIIDNOOOOOX0UUUUYb_100f65a7 + nCel_00 * 4 + 0x41);
		if (DAT_101285f5 == '\x02') {
			col_00 = -0x3b;
			if (*(char *)((int)plr + nCel + 0x7b4) != '\0') {
				col_00 = -0x4b;
			}
			if (*(int *)((int)plr + nCel + 0x8dc) == 0) {
				col_00 = -0x1b;
			}
			thunk_CelDecodeClr(col_00, 0x279, 0x16d, _DAT_101285f0, nCel_00, nWidth_00, 0, 8);
		}
		if (*(int *)((int)plr + myplr * 0x55ec + 0x8dc) == 0) {
			thunk_CelDrawHdrLightRed(0x279, 0x16d, _DAT_101285f0, nCel_00, nWidth_00, 0, 8, '\x01');
		} else {
			thunk_CelDrawHdrOnly(0x279, 0x16d, _DAT_101285f0, nCel_00, nWidth_00, 0, 8);
		}
	}
	if (*(int *)((int)plr + myplr * 0x55ec + 0x8f0) != -1) {
		InvDrawSlotBack(0x24d, 0xdc, 0x1c, 0x1c);
		nCel = myplr * 0x55ec;
		nCel_00 = *(int *)((int)plr + nCel + 0x9a8) + 0xc;
		nWidth_00 = *(int *)(s__AAAAAAACEEEEIIIIDNOOOOOX0UUUUYb_100f65a7 + nCel_00 * 4 + 0x41);
		if (DAT_101285f5 == '\x03') {
			col_00 = -0x3b;
			if (*(char *)((int)plr + nCel + 0x924) != '\0') {
				col_00 = -0x4b;
			}
			if (*(int *)((int)plr + nCel + 0xa4c) == 0) {
				col_00 = -0x1b;
			}
			thunk_CelDecodeClr(col_00, 0x24d, 0xdc, _DAT_101285f0, nCel_00, nWidth_00, 0, 8);
		}
		if (*(int *)((int)plr + myplr * 0x55ec + 0xa4c) == 0) {
			thunk_CelDrawHdrLightRed(0x24d, 0xdc, _DAT_101285f0, nCel_00, nWidth_00, 0, 8, '\x01');
		} else {
			thunk_CelDrawHdrOnly(0x24d, 0xdc, _DAT_101285f0, nCel_00, nWidth_00, 0, 8);
		}
	}
	if (*(int *)((int)plr + myplr * 0x55ec + 0xa60) != -1) {
		InvDrawSlotBack(0x191, 0x140, 0x38, 0x54);
		nCel = myplr * 0x55ec;
		nCel_00 = *(int *)((int)plr + nCel + 0xb18) + 0xc;
		nWidth_00 = *(int *)(s__AAAAAAACEEEEIIIIDNOOOOOX0UUUUYb_100f65a7 + nCel_00 * 4 + 0x41);
		if (nWidth_00 == 0x1c) {
			sx = 0x19f;
		} else {
			sx = 0x191;
		}
		if (*(int *)(&DAT_100f68b8 + nCel_00 * 4) == 0x54) {
			sy = 0x140;
		} else {
			sy = 0x132;
		}
		if (DAT_101285f5 == '\x04') {
			col_00 = -0x3b;
			if (*(char *)((int)plr + nCel + 0xa94) != '\0') {
				col_00 = -0x4b;
			}
			if (*(int *)((int)plr + nCel + 0xbbc) == 0) {
				col_00 = -0x1b;
			}
			thunk_CelDecodeClr(col_00, sx, sy, _DAT_101285f0, nCel_00, nWidth_00, 0, 8);
		}
		if (*(int *)((int)plr + myplr * 0x55ec + 0xbbc) == 0) {
			thunk_CelDrawHdrLightRed(sx, sy, _DAT_101285f0, nCel_00, nWidth_00, 0, 8, '\x01');
		} else {
			thunk_CelDrawHdrOnly(sx, sy, _DAT_101285f0, nCel_00, nWidth_00, 0, 8);
		}
		if (*(char *)((int)plr + myplr * 0x55ec + 0xb15) == '\x02') {
			InvDrawSlotBack(0x277, 0x140, 0x38, 0x54);
			**(undefined4 **)(nWidth + -0x7290) = 0;
			_DAT_1019fd98 = 1;
			if (nWidth_00 == 0x1c) {
				colour._4_4_ = (BYTE *)(_DAT_101271e4 + 0x3c285);
			} else {
				colour._4_4_ = (BYTE *)(_DAT_101271e4 + 0x3c277);
			}
			CelDecodeHdrLightTrans(colour._4_4_, _DAT_101285f0, nCel_00, nWidth_00, 0, 8);
			_DAT_1019fd98 = 0;
		}
	}
	if (*(int *)((int)plr + myplr * 0x55ec + 0xbd0) != -1) {
		InvDrawSlotBack(0x277, 0x140, 0x38, 0x54);
		nWidth_00 = myplr * 0x55ec;
		nCel = *(int *)((int)plr + nWidth_00 + 0xc88) + 0xc;
		nWidth = *(int *)(s__AAAAAAACEEEEIIIIDNOOOOOX0UUUUYb_100f65a7 + nCel * 4 + 0x41);
		if (nWidth == 0x1c) {
			nCel_00 = 0x285;
		} else {
			nCel_00 = 0x279;
		}
		if (*(int *)(&DAT_100f68b8 + nCel * 4) == 0x54) {
			sx = 0x140;
		} else {
			sx = 0x132;
		}
		if (DAT_101285f5 == '\x05') {
			col_00 = -0x3b;
			if (*(char *)((int)plr + nWidth_00 + 0xc04) != '\0') {
				col_00 = -0x4b;
			}
			if (*(int *)((int)plr + nWidth_00 + 0xd2c) == 0) {
				col_00 = -0x1b;
			}
			thunk_CelDecodeClr(col_00, nCel_00, sx, _DAT_101285f0, nCel, nWidth, 0, 8);
		}
		if (*(int *)((int)plr + myplr * 0x55ec + 0xd2c) == 0) {
			thunk_CelDrawHdrLightRed(nCel_00, sx, _DAT_101285f0, nCel, nWidth, 0, 8, '\x01');
		} else {
			thunk_CelDrawHdrOnly(nCel_00, sx, _DAT_101285f0, nCel, nWidth, 0, 8);
		}
	}
	if (*(int *)((int)plr + myplr * 0x55ec + 0xd40) != -1) {
		InvDrawSlotBack(0x205, 0x140, 0x38, 0x54);
		nWidth_00 = myplr * 0x55ec;
		nCel = *(int *)((int)plr + nWidth_00 + 0xdf8) + 0xc;
		nWidth = *(int *)(s__AAAAAAACEEEEIIIIDNOOOOOX0UUUUYb_100f65a7 + nCel * 4 + 0x41);
		if (DAT_101285f5 == '\x06') {
			col_00 = -0x3b;
			if (*(char *)((int)plr + nWidth_00 + 0xd74) != '\0') {
				col_00 = -0x4b;
			}
			if (*(int *)((int)plr + nWidth_00 + 0xe9c) == 0) {
				col_00 = -0x1b;
			}
			thunk_CelDecodeClr(col_00, 0x205, 0x140, _DAT_101285f0, nCel, nWidth, 0, 8);
		}
		if (*(int *)((int)plr + myplr * 0x55ec + 0xe9c) == 0) {
			thunk_CelDrawHdrLightRed(0x205, 0x140, _DAT_101285f0, nCel, nWidth, 0, 8, '\x01');
		} else {
			thunk_CelDrawHdrOnly(0x205, 0x140, _DAT_101285f0, nCel, nWidth, 0, 8);
		}
	}
	nWidth = 0;
	puVar3 = &DAT_100fc5bc;
	do {
		if (*(char *)((int)plr + myplr * 0x55ec + nWidth + 0x482c) != '\0') {
			InvDrawSlotBack(*(int *)(puVar3 + 200) + 0x40, *(int *)(puVar3 + 0xcc) + 0x9f, 0x1c, 0x1c);
		}
		nWidth = nWidth + 1;
		puVar3 = puVar3 + 8;
	} while (nWidth < 0x28);
	nWidth = 0;
	puVar3 = &DAT_100fc5bc;
	do {
		pPVar2 = (PlayerStruct *)((int)plr + myplr * 0x55ec);
		col_00 = *(char *)((int)&pPVar2->SpdList[0]._iPLToHit + nWidth);
		if ('\0' < col_00) {
			piVar1 = &pPVar2->_pmode + ((int)col_00 + -1) * 0x5c;
			nCel = piVar1[0x3da] + 0xc;
			nWidth_00 = *(int *)(s__AAAAAAACEEEEIIIIDNOOOOOX0UUUUYb_100f65a7 + nCel * 4 + 0x41);
			if ((int)DAT_101285f5 == (int)col_00 + 6) {
				col = -0x3b;
				if (*(char *)(piVar1 + 0x3b9) != '\0') {
					col = -0x4b;
				}
				if (piVar1[0x403] == 0) {
					col = -0x1b;
				}
				thunk_CelDecodeClr(col, *(int *)(puVar3 + 200) + 0x40, *(int *)(puVar3 + 0xcc) + 0x9f, _DAT_101285f0,
				    nCel, nWidth_00, 0, 8);
			}
			if (*(int *)((int)plr + myplr * 0x55ec + ((int)col_00 + -1) * 0x170 + 0x100c) == 0) {
				thunk_CelDrawHdrLightRed(*(int *)(puVar3 + 200) + 0x40, *(int *)(puVar3 + 0xcc) + 0x9f, _DAT_101285f0,
				    nCel, nWidth_00, 0, 8, '\x01');
			} else {
				thunk_CelDrawHdrOnly(
				    *(int *)(puVar3 + 200) + 0x40, *(int *)(puVar3 + 0xcc) + 0x9f, _DAT_101285f0, nCel, nWidth_00, 0, 8);
			}
		}
		nWidth = nWidth + 1;
		puVar3 = puVar3 + 8;
	} while (nWidth < 0x28);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void DrawInvBelt(void)

{
	int iVar1;
	longlong lVar2;
	int nCel;
	char col;
	int nWidth;
	int iVar3;
	int iVar4;
	int iVar5;

	lVar2 = 0x100f8fd0;
	if (_DAT_10128154 == 0) {
		DrawPanelBox(0xcd, 0x15, 0xe8, 0x1c, 0x10d, 0x205);
		iVar4 = 0;
		lVar2 = lVar2 + 0x35ec;
		iVar5 = 0;
		do {
			if (*(int *)((int)plr + myplr * 0x55ec + iVar5 + 0x485c) != -1) {
				iVar1 = (int)lVar2;
				InvDrawSlotBack(*(int *)(iVar1 + 0x208) + 0x40, *(int *)(iVar1 + 0x20c) + 0x9f, 0x1c, 0x1c);
				iVar3 = myplr * 0x55ec + iVar5;
				nCel = *(int *)((int)plr + iVar3 + 0x4914) + 0xc;
				nWidth = *(int *)(s__AAAAAAACEEEEIIIIDNOOOOOX0UUUUYb_100f65a7 + nCel * 4 + 0x41);
				if ((int)DAT_101285f5 == iVar4 + 0x2f) {
					col = -0x3b;
					if (*(char *)((int)plr + iVar3 + 0x4890) != '\0') {
						col = -0x4b;
					}
					if (*(int *)((int)plr + iVar3 + 0x49b8) == 0) {
						col = -0x1b;
					}
					thunk_CelDecodeClr(col, *(int *)(iVar1 + 0x208) + 0x40, *(int *)(iVar1 + 0x20c) + 0x9f, _DAT_101285f0,
					    nCel, nWidth, 0, 8);
				}
				if (*(int *)((int)plr + myplr * 0x55ec + iVar5 + 0x49b8) == 0) {
					thunk_CelDrawHdrLightRed(*(int *)(iVar1 + 0x208) + 0x40, *(int *)(iVar1 + 0x20c) + 0x9f,
					    _DAT_101285f0, nCel, nWidth, 0, 8, '\x01');
				} else {
					thunk_CelDrawHdrOnly(*(int *)(iVar1 + 0x208) + 0x40, *(int *)(iVar1 + 0x20c) + 0x9f, _DAT_101285f0,
					    nCel, nWidth, 0, 8);
				}
				nWidth = myplr * 0x55ec + iVar5;
				if (((AllItemsList[*(int *)((int)plr + nWidth + 0x49bc)].iUsable != 0) && (*(int *)((int)plr + nWidth + 0x49b8) != 0)) && (*(int *)((int)plr + nWidth + 0x485c) != 0xb)) {
					CPrintString((*(int *)(iVar1 + 0x208) + *(int *)(*(int *)(iVar1 + 0x20c) * 4 + 0x1019effc) + 0x5c) - (uint)(byte)(&DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[iVar4 + 0x31U & 0xff]]],
					    (uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[iVar4 + 0x31U & 0xff]], '\0');
				}
			}
			iVar4 = iVar4 + 1;
			lVar2 = lVar2 + 8;
			iVar5 = iVar5 + 0x170;
		} while (iVar4 < 8);
	}
	return;
}

BOOL AutoPlace(int pnum, int ii, int sx, int sy, BOOL saveflag)

{
	undefined4 uVar1;
	uint uVar2;
	undefined4 *puVar3;
	int iVar4;
	undefined8 uVar5;
	undefined4 *puVar6;
	int iVar7;
	int iVar8;
	int *piVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	uint uVar15;
	longlong lVar16;

	uVar15 = ii / 10 + (ii >> 0x1f);
	iVar4 = (uVar15 + (uVar15 >> 0x1f)) * 10;
	uVar15 = 1;
	iVar7 = iVar4;
	if (iVar4 < 0) {
		iVar7 = 0;
	}
	uVar2 = ii / 10 + (ii >> 0x1f);
	iVar14 = pnum * 0x55ec;
	iVar10 = (int)&((PlayerStruct *)((int)plr + iVar14))->_pmode + iVar7;
	ii = ii + (uVar2 + (uVar2 >> 0x1f)) * -10;
	iVar12 = 0;
	while ((iVar12 < sy && (uVar15 != 0))) {
		if (0x27 < iVar7) {
			uVar15 = 0;
		}
		iVar11 = ii;
		if (ii < 0) {
			iVar11 = 0;
		}
		iVar8 = iVar10 + iVar11;
		iVar13 = 0;
		while ((iVar13 < sx && (uVar15 != 0))) {
			if (iVar11 < 10) {
				uVar5 = countLeadingZeros(-(int)*(char *)(iVar8 + 0x482c));
				uVar15 = (uint)uVar5 >> 5 & 0xff;
			} else {
				uVar15 = 0;
			}
			iVar8 = iVar8 + 1;
			iVar11 = iVar11 + 1;
			iVar13 = iVar13 + 1;
		}
		iVar10 = iVar10 + 10;
		iVar7 = iVar7 + 10;
		iVar12 = iVar12 + 1;
	}
	if ((uVar15 != 0) && (saveflag != 0)) {
		piVar9 = (int *)((int)plr + iVar14 + 0x4828);
		lVar16 = 0x2e;
		puVar3 = (undefined4 *)((int)plr + iVar14 + 0x53cc);
		puVar6 = (undefined4 *)((int)plr + iVar14 + *(int *)((int)plr + iVar14 + 0x4828) * 0x170 + 0xea0);
		do {
			uVar1 = puVar3[3];
			puVar6[2] = puVar3[2];
			puVar6[3] = uVar1;
			lVar16 = lVar16 + -1;
			puVar3 = puVar3 + 2;
			puVar6 = puVar6 + 2;
		} while (lVar16 != 0);
		*piVar9 = *piVar9 + 1;
		if (iVar4 < 0) {
			iVar4 = 0;
		}
		iVar4 = (int)&((PlayerStruct *)((int)plr + iVar14))->_pmode + iVar4;
		iVar7 = 0;
		while (iVar7 < sy) {
			iVar12 = ii;
			if (ii < 0) {
				iVar12 = 0;
			}
			iVar12 = iVar4 + iVar12;
			iVar10 = 0;
			lVar16 = (longlong)sx;
			if (0 < sx) {
				do {
					if ((iVar10 == 0) && (iVar7 == sy + -1)) {
						*(undefined *)(iVar12 + 0x482c) = (char)*(undefined4 *)((int)plr + iVar14 + 0x4828);
					} else {
						*(char *)(iVar12 + 0x482c) = -(char)*(undefined4 *)((int)plr + iVar14 + 0x4828);
					}
					iVar12 = iVar12 + 1;
					iVar10 = iVar10 + 1;
					lVar16 = lVar16 + -1;
				} while (lVar16 != 0);
			}
			iVar4 = iVar4 + 10;
			iVar7 = iVar7 + 1;
		}
		CalcPlrScrolls(pnum);
	}
	return (BOOL)uVar15;
}

BOOL SpecialAutoPlace(int pnum, int ii, int sx, int sy, BOOL saveflag)

{
	undefined4 uVar1;
	uint uVar2;
	undefined4 *puVar3;
	int iVar4;
	undefined8 uVar5;
	undefined4 *puVar6;
	int iVar7;
	int iVar8;
	int *piVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	uint uVar15;
	longlong lVar16;

	uVar15 = ii / 10 + (ii >> 0x1f);
	iVar4 = (uVar15 + (uVar15 >> 0x1f)) * 10;
	uVar15 = 1;
	iVar7 = iVar4;
	if (iVar4 < 0) {
		iVar7 = 0;
	}
	uVar2 = ii / 10 + (ii >> 0x1f);
	iVar14 = pnum * 0x55ec;
	iVar10 = (int)&((PlayerStruct *)((int)plr + iVar14))->_pmode + iVar7;
	ii = ii + (uVar2 + (uVar2 >> 0x1f)) * -10;
	iVar12 = 0;
	while ((iVar12 < sy && (uVar15 != 0))) {
		if (0x27 < iVar7) {
			uVar15 = 0;
		}
		iVar11 = ii;
		if (ii < 0) {
			iVar11 = 0;
		}
		iVar8 = iVar10 + iVar11;
		iVar13 = 0;
		while ((iVar13 < sx && (uVar15 != 0))) {
			if (iVar11 < 10) {
				uVar5 = countLeadingZeros(-(int)*(char *)(iVar8 + 0x482c));
				uVar15 = (uint)uVar5 >> 5 & 0xff;
			} else {
				uVar15 = 0;
			}
			iVar8 = iVar8 + 1;
			iVar11 = iVar11 + 1;
			iVar13 = iVar13 + 1;
		}
		iVar10 = iVar10 + 10;
		iVar7 = iVar7 + 10;
		iVar12 = iVar12 + 1;
	}
	if (uVar15 == 0) {
		if ((sx < 2) && (sy < 2)) {
			if (*(int *)((int)plr + iVar14 + 0x485c) == -1) {
				uVar15 = 1;
			} else {
				if (*(int *)((int)plr + iVar14 + 0x49cc) == -1) {
					uVar15 = 1;
				} else {
					if (*(int *)((int)plr + iVar14 + 0x4b3c) == -1) {
						uVar15 = 1;
					} else {
						if (*(int *)((int)plr + iVar14 + 0x4cac) == -1) {
							uVar15 = 1;
						} else {
							if (*(int *)((int)plr + iVar14 + 0x4e1c) == -1) {
								uVar15 = 1;
							} else {
								if (*(int *)((int)plr + iVar14 + 0x4f8c) == -1) {
									uVar15 = 1;
								} else {
									if (*(int *)((int)plr + iVar14 + 0x50fc) == -1) {
										uVar15 = 1;
									} else {
										if (*(int *)((int)plr + iVar14 + 0x526c) == -1) {
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
	if ((uVar15 != 0) && (saveflag != 0)) {
		piVar9 = (int *)((int)plr + iVar14 + 0x4828);
		lVar16 = 0x2e;
		puVar3 = (undefined4 *)((int)plr + iVar14 + 0x53cc);
		puVar6 = (undefined4 *)((int)plr + iVar14 + *(int *)((int)plr + iVar14 + 0x4828) * 0x170 + 0xea0);
		do {
			uVar1 = puVar3[3];
			puVar6[2] = puVar3[2];
			puVar6[3] = uVar1;
			lVar16 = lVar16 + -1;
			puVar3 = puVar3 + 2;
			puVar6 = puVar6 + 2;
		} while (lVar16 != 0);
		*piVar9 = *piVar9 + 1;
		if (iVar4 < 0) {
			iVar4 = 0;
		}
		iVar4 = (int)&((PlayerStruct *)((int)plr + iVar14))->_pmode + iVar4;
		iVar7 = 0;
		while (iVar7 < sy) {
			iVar12 = ii;
			if (ii < 0) {
				iVar12 = 0;
			}
			iVar12 = iVar4 + iVar12;
			iVar10 = 0;
			lVar16 = (longlong)sx;
			if (0 < sx) {
				do {
					if ((iVar10 == 0) && (iVar7 == sy + -1)) {
						*(undefined *)(iVar12 + 0x482c) = (char)*(undefined4 *)((int)plr + iVar14 + 0x4828);
					} else {
						*(char *)(iVar12 + 0x482c) = -(char)*(undefined4 *)((int)plr + iVar14 + 0x4828);
					}
					iVar12 = iVar12 + 1;
					iVar10 = iVar10 + 1;
					lVar16 = lVar16 + -1;
				} while (lVar16 != 0);
			}
			iVar4 = iVar4 + 10;
			iVar7 = iVar7 + 1;
		}
		CalcPlrScrolls(pnum);
	}
	return (BOOL)uVar15;
}

BOOL GoldAutoPlace(int pnum)

{
	int iVar1;
	uint uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int *piVar6;
	int *piVar7;
	int iVar8;
	PlayerStruct *pPVar9;
	PlayerStruct *pPVar10;
	int iVar11;
	longlong lVar12;

	iVar11 = 0;
	iVar3 = pnum * 0x55ec;
	pPVar10 = (PlayerStruct *)((int)plr + iVar3);
	iVar5 = 0;
	pPVar9 = pPVar10;
	while ((iVar11 < *(int *)((int)plr + iVar3 + 0x4828) && (iVar5 == 0))) {
		if ((pPVar9->InvList[0]._iPLGetHit == 0xb) && (iVar4 = *(int *)((int)plr + iVar3 + 0x5498) + *(int *)(pPVar9->InvList[1]._iName + 0x37), iVar4 < 0x1389)) {
			*(int *)(pPVar9->InvList[1]._iName + 0x37) = iVar4;
			if (iVar4 < 0x9c4) {
				if (iVar4 < 0x3e9) {
					*(undefined4 *)(pPVar9->InvList[1]._iName + 0x33) = 4;
				} else {
					*(undefined4 *)(pPVar9->InvList[1]._iName + 0x33) = 5;
				}
			} else {
				*(undefined4 *)(pPVar9->InvList[1]._iName + 0x33) = 6;
			}
			iVar5 = CalculateGold(pnum);
			*(int *)((int)plr + iVar3 + 0x1c8) = iVar5;
			iVar5 = 1;
		}
		pPVar9 = (PlayerStruct *)&pPVar9->_pDexterity;
		iVar11 = iVar11 + 1;
	}
	if (iVar5 == 0) {
		iVar11 = 0;
		pPVar9 = pPVar10;
		while ((iVar11 < *(int *)((int)plr + iVar3 + 0x4828) && (iVar5 == 0))) {
			if ((pPVar9->InvList[0]._iPLGetHit == 0xb) && ((iVar4 = *(int *)(pPVar9->InvList[1]._iName + 0x37), iVar4 < 5000 && (iVar4 = iVar4 + *(int *)((int)plr + iVar3 + 0x5498), iVar4 < 0x1389)))) {
				*(int *)(pPVar9->InvList[1]._iName + 0x37) = iVar4;
				if (iVar4 < 0x9c4) {
					if (iVar4 < 0x3e9) {
						*(undefined4 *)(pPVar9->InvList[1]._iName + 0x33) = 4;
					} else {
						*(undefined4 *)(pPVar9->InvList[1]._iName + 0x33) = 5;
					}
				} else {
					*(undefined4 *)(pPVar9->InvList[1]._iName + 0x33) = 6;
				}
				iVar5 = CalculateGold(pnum);
				*(int *)((int)plr + iVar3 + 0x1c8) = iVar5;
				iVar5 = 1;
			}
			pPVar9 = (PlayerStruct *)&pPVar9->_pDexterity;
			iVar11 = iVar11 + 1;
		}
	}
	if (iVar5 == 0) {
		iVar11 = 0x27;
		while (-1 < iVar11) {
			if (iVar5 != 0) {
				return iVar5;
			}
			uVar2 = iVar11 / 10 + (iVar11 >> 0x1f);
			iVar8 = (uVar2 + (uVar2 >> 0x1f)) * 10;
			iVar4 = iVar11 + (uVar2 + (uVar2 >> 0x1f)) * -10;
			if (*(char *)((int)pPVar10 + iVar4 + iVar8 + 0x482c) == '\0') {
				iVar5 = *(int *)((int)plr + iVar3 + 0x4828);
				lVar12 = 0x2e;
				piVar7 = &pPVar10->InvList[iVar5]._iPLMR;
				piVar6 = (int *)((int)plr + iVar3 + 0x53cc);
				do {
					iVar1 = piVar6[3];
					piVar7[2] = piVar6[2];
					piVar7[3] = iVar1;
					lVar12 = lVar12 + -1;
					piVar7 = piVar7 + 2;
					piVar6 = piVar6 + 2;
				} while (lVar12 != 0);
				*(int *)((int)plr + iVar3 + 0x4828) = *(int *)((int)plr + iVar3 + 0x4828) + 1;
				*(undefined *)((int)pPVar10 + iVar4 + iVar8 + 0x482c) = (char)*(undefined4 *)((int)plr + iVar3 + 0x4828);
				iVar4 = *(int *)((int)plr + iVar3 + 0x5498);
				if (iVar4 < 0x9c4) {
					if (iVar4 < 0x3e9) {
						*(undefined4 *)(pPVar10->InvList[iVar5 + 1]._iName + 0x33) = 4;
					} else {
						*(undefined4 *)(pPVar10->InvList[iVar5 + 1]._iName + 0x33) = 5;
					}
				} else {
					*(undefined4 *)(pPVar10->InvList[iVar5 + 1]._iName + 0x33) = 6;
				}
				iVar5 = CalculateGold(pnum);
				*(int *)((int)plr + iVar3 + 0x1c8) = iVar5;
				iVar5 = 1;
			}
			iVar11 = iVar11 + -1;
		}
	}
	return (BOOL)iVar5;
}

BOOL WeaponAutoPlace(int pnum)

{
	int iVar1;
	int iVar2;
	undefined4 uVar3;
	BOOL BVar4;
	undefined4 *puVar5;
	undefined4 *puVar6;
	longlong lVar7;

	pnum = pnum * 0x55ec;
	if (*(char *)((int)plr + pnum + 0x5491) == '\x02') {
		if ((*(int *)((int)plr + pnum + 0xa60) == -1) && (*(int *)((int)plr + pnum + 0xbd0) == -1)) {
			NetSendCmdChItem(1, '\x04');
			lVar7 = 0x2e;
			puVar5 = (undefined4 *)((int)plr + pnum + 0x53cc);
			puVar6 = (undefined4 *)((int)plr + pnum + 0xa50);
			do {
				uVar3 = puVar5[3];
				puVar6[2] = puVar5[2];
				puVar6[3] = uVar3;
				lVar7 = lVar7 + -1;
				puVar5 = puVar5 + 2;
				puVar6 = puVar6 + 2;
			} while (lVar7 != 0);
			BVar4 = 1;
		} else {
			BVar4 = 0;
		}
	} else {
		iVar1 = *(int *)((int)plr + pnum + 0xa60);
		if ((iVar1 == -1) || (*(char *)((int)plr + pnum + 0xb16) != '\x01')) {
			iVar2 = *(int *)((int)plr + pnum + 0xbd0);
			if ((iVar2 == -1) || (*(char *)((int)plr + pnum + 0xc86) != '\x01')) {
				if (iVar1 == -1) {
					NetSendCmdChItem(1, '\x04');
					lVar7 = 0x2e;
					puVar5 = (undefined4 *)((int)plr + pnum + 0x53cc);
					puVar6 = (undefined4 *)((int)plr + pnum + 0xa50);
					do {
						uVar3 = puVar5[3];
						puVar6[2] = puVar5[2];
						puVar6[3] = uVar3;
						lVar7 = lVar7 + -1;
						puVar5 = puVar5 + 2;
						puVar6 = puVar6 + 2;
					} while (lVar7 != 0);
				} else {
					if ((iVar2 != -1) || (*(char *)((int)plr + pnum + 0xb15) == '\x02')) {
						return 0;
					}
					NetSendCmdChItem(1, '\x05');
					lVar7 = 0x2e;
					puVar5 = (undefined4 *)((int)plr + pnum + 0x53cc);
					puVar6 = (undefined4 *)((int)plr + pnum + 0xbc0);
					do {
						uVar3 = puVar5[3];
						puVar6[2] = puVar5[2];
						puVar6[3] = uVar3;
						lVar7 = lVar7 + -1;
						puVar5 = puVar5 + 2;
						puVar6 = puVar6 + 2;
					} while (lVar7 != 0);
				}
				BVar4 = 1;
			} else {
				BVar4 = 0;
			}
		} else {
			BVar4 = 0;
		}
	}
	return BVar4;
}

int SwapItem(ItemStruct *a, ItemStruct *b)

{
	int iVar1;
	int *piVar2;
	int *piVar3;
	longlong lVar4;
	int aiStack376[50];
	int local_b0;

	lVar4 = 0x2e;
	piVar2 = aiStack376;
	piVar3 = &a->_iPLMR;
	do {
		iVar1 = piVar3[3];
		piVar2[2] = piVar3[2];
		piVar2[3] = iVar1;
		lVar4 = lVar4 + -1;
		piVar2 = piVar2 + 2;
		piVar3 = piVar3 + 2;
	} while (lVar4 != 0);
	lVar4 = 0x2e;
	piVar2 = &a->_iPLMR;
	piVar3 = &b->_iPLMR;
	do {
		iVar1 = piVar3[3];
		piVar2[2] = piVar3[2];
		piVar2[3] = iVar1;
		lVar4 = lVar4 + -1;
		piVar2 = piVar2 + 2;
		piVar3 = piVar3 + 2;
	} while (lVar4 != 0);
	lVar4 = 0x2e;
	piVar2 = aiStack376;
	piVar3 = &b->_iPLMR;
	do {
		iVar1 = piVar2[3];
		piVar3[2] = piVar2[2];
		piVar3[3] = iVar1;
		lVar4 = lVar4 + -1;
		piVar2 = piVar2 + 2;
		piVar3 = piVar3 + 2;
	} while (lVar4 != 0);
	return local_b0 + 0xc;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CheckInvPaste(int pnum, int mx, int my)

{
	int *piVar1;
	bool bVar2;
	char cVar3;
	bool bVar4;
	longlong lVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	uint uVar15;
	uint uVar16;
	int iVar17;
	longlong lVar18;

	iVar7 = 0x100f8fd0;
	iVar17 = pnum * 0x55ec;
	piVar1 = (int *)((int)plr + iVar17 + 0x5494);
	SetICursor(*piVar1 + 0xc);
	bVar2 = false;
	uVar16 = 0;
	mx = mx + (**(int **)(iVar7 + -0x7638) >> 1);
	my = my + (**(int **)(iVar7 + -0x7640) >> 1);
	while ((uVar16 < 0x49 && (!bVar2))) {
		if ((*(int *)(&DAT_100fc5bc + uVar16 * 8) <= mx) && (((mx < *(int *)(&DAT_100fc5bc + uVar16 * 8) + 0x1c && (iVar11 = *(int *)(uVar16 * 8 + 0x100fc5c0), iVar11 + -0x1d <= my)) && (my < iVar11)))) {
			bVar2 = true;
			uVar16 = uVar16 - 1;
		}
		if (uVar16 == 0x18) {
			if ((_DAT_10128608 & 1) == 0) {
				mx = mx + -0xe;
			}
			if ((_DAT_10128604 & 1) == 0) {
				my = my + -0xe;
			}
		}
		if ((uVar16 == 0x40) && ((_DAT_10128604 & 1) == 0)) {
			my = my + 0xe;
		}
		uVar16 = uVar16 + 1;
	}
	if (bVar2) {
		uVar15 = 7;
		if ((-1 < (int)uVar16) && ((int)uVar16 < 4)) {
			uVar15 = 4;
		}
		if ((3 < (int)uVar16) && ((int)uVar16 < 6)) {
			uVar15 = 5;
		}
		if (uVar16 == 6) {
			uVar15 = 6;
		}
		if ((6 < (int)uVar16) && ((int)uVar16 < 0x13)) {
			uVar15 = 1;
		}
		if ((0x12 < (int)uVar16) && ((int)uVar16 < 0x19)) {
			uVar15 = 3;
		}
		if ((0x40 < (int)uVar16) && ((int)uVar16 < 0x49)) {
			uVar15 = 8;
		}
		cVar3 = *(char *)((int)plr + iVar17 + 0x5491);
		bVar2 = uVar15 == (int)cVar3;
		if ((uVar15 == 1) && (cVar3 == '\x02')) {
			uVar15 = 2;
			bVar2 = true;
		}
		if ((((cVar3 == '\a') && (uVar15 == 8)) && (_DAT_10128608 == 1)) && ((_DAT_10128604 == 1 && (bVar2 = *(int *)((int)plr + iVar17 + 0x5538) != 0 && *(int *)(iVar7 + *(int *)((int)plr + iVar17 + 0x553c) * 0x4c + 0x3898) != 0, *(int *)((int)plr + iVar17 + 0x53dc) == 0xb)))) {
			bVar2 = false;
		}
		if (uVar15 == 7) {
			iVar11 = uVar16 - 0x19;
			lVar18 = 0;
			bVar4 = true;
			bVar2 = true;
			if (*(int *)((int)plr + iVar17 + 0x53dc) != 0xb) {
				uVar16 = iVar11 / 10 + (iVar11 >> 0x1f);
				iVar9 = ((uVar16 + (uVar16 >> 0x1f)) - ((int)(_DAT_10128604 - 1) >> 1)) * 10;
				if (iVar9 < 0) {
					iVar9 = 0;
				}
				iVar8 = (int)plr + iVar17 + iVar9;
				uVar16 = iVar11 / 10 + (iVar11 >> 0x1f);
				iVar11 = (iVar11 + (uVar16 + (uVar16 >> 0x1f)) * -10) - ((int)(_DAT_10128608 - 1) >> 1);
				iVar14 = 0;
				while ((bVar2 = bVar4, iVar14 < (int)_DAT_10128604 && (bVar2 = bVar4, bVar4))) {
					if (0x27 < iVar9) {
						bVar4 = false;
					}
					iVar12 = iVar11;
					if (iVar11 < 0) {
						iVar12 = 0;
					}
					iVar10 = iVar8 + iVar12;
					iVar13 = 0;
					while ((iVar13 < (int)_DAT_10128608 && (bVar4))) {
						if (iVar12 < 10) {
							lVar5 = lVar18;
							if (*(char *)(iVar10 + 0x482c) != '\0') {
								lVar5 = (longlong) * (char *)(iVar10 + 0x482c);
								if (lVar5 < 0) {
									lVar5 = -lVar5;
								}
								if (((int)lVar18 != 0) && (iVar6 = (int)lVar5, lVar5 = lVar18, (int)lVar18 != iVar6)) {
									bVar4 = false;
									lVar5 = lVar18;
								}
							}
						} else {
							bVar4 = false;
							lVar5 = lVar18;
						}
						iVar10 = iVar10 + 1;
						iVar12 = iVar12 + 1;
						iVar13 = iVar13 + 1;
						lVar18 = lVar5;
					}
					iVar8 = iVar8 + 10;
					iVar9 = iVar9 + 10;
					iVar14 = iVar14 + 1;
				}
			}
		}
		if ((((bVar2) && (uVar15 != 7)) && (uVar15 != 8)) && (*(int *)((int)plr + iVar17 + 0x5538) == 0)) {
			cVar3 = *(char *)((int)plr + iVar17 + 0x15c);
			bVar2 = false;
			if (cVar3 == '\0') {
				PlaySFX(0x2d6);
			} else {
				if (cVar3 == '\x01') {
					PlaySFX(0x26f);
				} else {
					if (cVar3 == '\x02') {
						PlaySFX(0x208);
					}
				}
			}
		}
		if (bVar2) {
			if (pnum == myplr) {
				PlaySFX(*(int *)(*(int *)(iVar7 + -0x71d4) + (uint) * (byte *)(*(int *)(iVar7 + -0x71d0) + *piVar1) * 4));
			}
			if (uVar15 < 9) {
				// WARNING: Could not recover jumptable at 0x10047084. Too many branches
				// WARNING: Treating indirect jump as call
				(**(code **)(iVar7 + 0x3834 + uVar15 * 4))();
				return;
			}
			CalcPlrInv(pnum, 1);
			if (pnum == myplr) {
				SetCursorPos(**(int **)(iVar7 + -0x76a8) + (**(int **)(iVar7 + -0x7650) >> 1),
				    **(int **)(iVar7 + -0x76ac) + (**(int **)(iVar7 + -0x7654) >> 1));
				SetCursor_(1);
			}
		}
	}
	return;
}

void CheckInvSwap(int pnum, BYTE bLoc, int idx, WORD wCI, int seed, BOOL bId)

{
	undefined4 uVar1;
	int iVar2;
	undefined4 *puVar3;
	undefined4 *puVar4;
	int iVar5;
	longlong lVar6;

	iVar2 = 0x100f8fd0;
	RecreateItem(0x7f, idx, wCI, seed, 0);
	iVar5 = *(int *)(iVar2 + -0x77a8) + pnum * 0x55ec;
	lVar6 = 0x2e;
	puVar3 = (undefined4 *)(*(int *)(iVar2 + -0x7690) + 0xb688);
	puVar4 = (undefined4 *)(iVar5 + 0x53cc);
	do {
		uVar1 = puVar3[3];
		puVar4[2] = puVar3[2];
		puVar4[3] = uVar1;
		lVar6 = lVar6 + -1;
		puVar3 = puVar3 + 2;
		puVar4 = puVar4 + 2;
	} while (lVar6 != 0);
	if (bId != 0) {
		*(undefined4 *)(iVar5 + 0x540c) = 1;
	}
	if (bLoc < 7) {
		lVar6 = 0x2e;
		puVar3 = (undefined4 *)(iVar5 + (uint)bLoc * 0x170 + 0x490);
		puVar4 = (undefined4 *)(iVar5 + 0x53cc);
		do {
			uVar1 = puVar4[3];
			puVar3[2] = puVar4[2];
			puVar3[3] = uVar1;
			lVar6 = lVar6 + -1;
			puVar3 = puVar3 + 2;
			puVar4 = puVar4 + 2;
		} while (lVar6 != 0);
		if (bLoc == '\x04') {
			if (*(char *)(iVar5 + 0x5491) == '\x02') {
				*(undefined4 *)(iVar5 + 0xbd0) = 0xffffffff;
			}
		} else {
			if ((bLoc == '\x05') && (*(char *)(iVar5 + 0x5491) == '\x02')) {
				*(undefined4 *)(iVar5 + 0xa60) = 0xffffffff;
			}
		}
	}
	CalcPlrInv(pnum, 1);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CheckInvCut(int pnum, int mx, int my)

{
	char cVar1;
	undefined4 uVar2;
	uint uVar3;
	undefined4 *puVar4;
	int *piVar5;
	int *piVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	undefined uVar11;
	int iVar12;
	int iVar13;
	undefined uVar15;
	int iVar14;
	longlong lVar16;
	longlong lVar17;
	longlong lVar18;
	ulonglong uVar19;
	longlong lVar20;
	int *piVar21;
	longlong lVar22;
	longlong lVar23;
	longlong lVar24;
	int local_4c;

	iVar12 = 0x100f8fd0;
	lVar22 = (longlong)pnum * 0x55ec;
	lVar20 = ZEXT48(plr) + lVar22;
	piVar21 = (int *)lVar20;
	if (*piVar21 < 4) {
		if (_DAT_10128178 != 0) {
			_DAT_10128178 = 0;
			_DAT_101282cc = 0;
		}
		bVar8 = false;
		uVar19 = 0;
		while ((iVar14 = (int)uVar19, (uVar19 & 0xffffffff) < 0x49 && (!bVar8))) {
			if ((*(int *)(&DAT_100fc5bc + iVar14 * 8) <= mx) && (((mx < *(int *)(&DAT_100fc5bc + iVar14 * 8) + 0x1d && (iVar14 = *(int *)(iVar14 * 8 + 0x100fc5c0), iVar14 + -0x1d <= my)) && (my < iVar14)))) {
				bVar8 = true;
				uVar19 = uVar19 - 1;
			}
			uVar19 = uVar19 + 1;
		}
		if (bVar8) {
			iVar9 = (int)lVar22;
			piVar5 = (int *)((int)&plr[0].HoldItem._iPLGetHit + iVar9);
			*piVar5 = -1;
			if (((-1 < iVar14) && (iVar14 < 4)) && (piVar6 = (int *)((int)&plr[0].InvBody[0]._iPLGetHit + iVar9), *piVar6 != -1)) {
				iVar12 = 0x100f8fd0;
				NetSendCmdDelItem(0, '\0');
				lVar23 = 0x2e;
				lVar17 = lVar22 + 0x1018c28c;
				lVar16 = lVar22 + 0x10187350;
				do {
					lVar16 = lVar16 + 8;
					uVar2 = ((undefined4 *)lVar16)[1];
					lVar17 = lVar17 + 8;
					*(undefined4 *)lVar17 = *(undefined4 *)lVar16;
					((undefined4 *)lVar17)[1] = uVar2;
					lVar23 = lVar23 + -1;
				} while (lVar23 != 0);
				*piVar6 = -1;
			}
			if ((iVar14 == 4) && (piVar6 = (int *)((int)&plr[0].InvBody[1]._iPLGetHit + iVar9), *piVar6 != -1)) {
				NetSendCmdDelItem(0, '\x01');
				lVar23 = 0x2e;
				lVar17 = lVar22 + 0x1018c28c;
				lVar16 = lVar22 + 0x101874c0;
				do {
					lVar16 = lVar16 + 8;
					uVar2 = ((undefined4 *)lVar16)[1];
					lVar17 = lVar17 + 8;
					*(undefined4 *)lVar17 = *(undefined4 *)lVar16;
					((undefined4 *)lVar17)[1] = uVar2;
					lVar23 = lVar23 + -1;
				} while (lVar23 != 0);
				*piVar6 = -1;
			}
			if ((iVar14 == 5) && (piVar6 = (int *)((int)&plr[0].InvBody[2]._iPLGetHit + iVar9), *piVar6 != -1)) {
				NetSendCmdDelItem(0, '\x02');
				lVar23 = 0x2e;
				lVar17 = lVar22 + 0x1018c28c;
				lVar16 = lVar22 + 0x10187630;
				do {
					lVar16 = lVar16 + 8;
					uVar2 = ((undefined4 *)lVar16)[1];
					lVar17 = lVar17 + 8;
					*(undefined4 *)lVar17 = *(undefined4 *)lVar16;
					((undefined4 *)lVar17)[1] = uVar2;
					lVar23 = lVar23 + -1;
				} while (lVar23 != 0);
				*piVar6 = -1;
			}
			if ((iVar14 == 6) && (piVar6 = (int *)((int)&plr[0].InvBody[3]._iPLGetHit + iVar9), *piVar6 != -1)) {
				NetSendCmdDelItem(0, '\x03');
				lVar23 = 0x2e;
				lVar17 = lVar22 + 0x1018c28c;
				lVar16 = lVar22 + 0x101877a0;
				do {
					lVar16 = lVar16 + 8;
					uVar2 = ((undefined4 *)lVar16)[1];
					lVar17 = lVar17 + 8;
					*(undefined4 *)lVar17 = *(undefined4 *)lVar16;
					((undefined4 *)lVar17)[1] = uVar2;
					lVar23 = lVar23 + -1;
				} while (lVar23 != 0);
				*piVar6 = -1;
			}
			if (((6 < iVar14) && (iVar14 < 0xd)) && (piVar6 = (int *)((int)&plr[0].InvBody[4]._iPLGetHit + iVar9), *piVar6 != -1)) {
				NetSendCmdDelItem(0, '\x04');
				lVar23 = 0x2e;
				lVar17 = lVar22 + 0x1018c28c;
				lVar16 = lVar22 + 0x10187910;
				do {
					lVar16 = lVar16 + 8;
					uVar2 = ((undefined4 *)lVar16)[1];
					lVar17 = lVar17 + 8;
					*(undefined4 *)lVar17 = *(undefined4 *)lVar16;
					((undefined4 *)lVar17)[1] = uVar2;
					lVar23 = lVar23 + -1;
				} while (lVar23 != 0);
				*piVar6 = -1;
			}
			if (((0xc < iVar14) && (iVar14 < 0x13)) && (piVar6 = (int *)((int)&plr[0].InvBody[5]._iPLGetHit + iVar9), *piVar6 != -1)) {
				NetSendCmdDelItem(0, '\x05');
				lVar23 = 0x2e;
				lVar17 = lVar22 + 0x1018c28c;
				lVar16 = lVar22 + 0x10187a80;
				do {
					lVar16 = lVar16 + 8;
					uVar2 = ((undefined4 *)lVar16)[1];
					lVar17 = lVar17 + 8;
					*(undefined4 *)lVar17 = *(undefined4 *)lVar16;
					((undefined4 *)lVar17)[1] = uVar2;
					lVar23 = lVar23 + -1;
				} while (lVar23 != 0);
				*piVar6 = -1;
			}
			if (((0x12 < iVar14) && (iVar14 < 0x19)) && (piVar6 = (int *)((int)&plr[0].InvBody[6]._iPLGetHit + iVar9), *piVar6 != -1)) {
				NetSendCmdDelItem(0, '\x06');
				lVar23 = 0x2e;
				lVar17 = lVar22 + 0x1018c28c;
				lVar16 = lVar22 + 0x10187bf0;
				do {
					lVar16 = lVar16 + 8;
					uVar2 = ((undefined4 *)lVar16)[1];
					lVar17 = lVar17 + 8;
					*(undefined4 *)lVar17 = *(undefined4 *)lVar16;
					((undefined4 *)lVar17)[1] = uVar2;
					lVar23 = lVar23 + -1;
				} while (lVar23 != 0);
				*piVar6 = -1;
			}
			if (0x18 < iVar14) {
				if (iVar14 < 0x41) {
					if (*(char *)(iVar14 + iVar9 + 0x1018b6ec + -0x19) != '\0') {
						cVar1 = *(char *)(iVar9 + 0x1018b6ec + iVar14 + -0x19);
						if (cVar1 < '\x01') {
							lVar16 = -(longlong)cVar1;
						} else {
							lVar16 = (longlong)cVar1;
						}
						lVar23 = 4;
						lVar17 = lVar20;
						do {
							iVar7 = (int)lVar17;
							iVar13 = (int)lVar16;
							iVar10 = (int)-lVar16;
							if ((iVar13 == (int)*(char *)(iVar7 + 0x482c)) || (iVar10 == (int)*(char *)(iVar7 + 0x482c))) {
								*(undefined *)(iVar7 + 0x482c) = 0;
							}
							if ((iVar13 == (int)*(char *)(iVar7 + 0x482d)) || (iVar10 == (int)*(char *)(iVar7 + 0x482d))) {
								*(undefined *)(iVar7 + 0x482d) = 0;
							}
							if ((iVar13 == (int)*(char *)(iVar7 + 0x482e)) || (iVar10 == (int)*(char *)(iVar7 + 0x482e))) {
								*(undefined *)(iVar7 + 0x482e) = 0;
							}
							if ((iVar13 == (int)*(char *)(iVar7 + 0x482f)) || (iVar10 == (int)*(char *)(iVar7 + 0x482f))) {
								*(undefined *)(iVar7 + 0x482f) = 0;
							}
							if ((iVar13 == (int)*(char *)(iVar7 + 0x4830)) || (iVar10 == (int)*(char *)(iVar7 + 0x4830))) {
								*(undefined *)(iVar7 + 0x4830) = 0;
							}
							if ((iVar13 == (int)*(char *)(iVar7 + 0x4831)) || (iVar10 == (int)*(char *)(iVar7 + 0x4831))) {
								*(undefined *)(iVar7 + 0x4831) = 0;
							}
							if ((iVar13 == (int)*(char *)(iVar7 + 0x4832)) || (iVar10 == (int)*(char *)(iVar7 + 0x4832))) {
								*(undefined *)(iVar7 + 0x4832) = 0;
							}
							if ((iVar13 == (int)*(char *)(iVar7 + 0x4833)) || (iVar10 == (int)*(char *)(iVar7 + 0x4833))) {
								*(undefined *)(iVar7 + 0x4833) = 0;
							}
							if ((iVar13 == (int)*(char *)(iVar7 + 0x4834)) || (iVar10 == (int)*(char *)(iVar7 + 0x4834))) {
								*(undefined *)(iVar7 + 0x4834) = 0;
							}
							if ((iVar13 == (int)*(char *)(iVar7 + 0x4835)) || (iVar10 == (int)*(char *)(iVar7 + 0x4835))) {
								*(undefined *)(iVar7 + 0x4835) = 0;
							}
							lVar17 = lVar17 + 10;
							lVar23 = lVar23 + -1;
						} while (lVar23 != 0);
						lVar23 = lVar22 + 0x1018c28c;
						lVar18 = lVar22 + 0x10187d68 + (lVar16 + -1) * 0x170;
						lVar24 = 0x2e;
						lVar17 = lVar18 + -8;
						do {
							lVar17 = lVar17 + 8;
							uVar2 = ((undefined4 *)lVar17)[1];
							lVar23 = lVar23 + 8;
							*(undefined4 *)lVar23 = *(undefined4 *)lVar17;
							((undefined4 *)lVar23)[1] = uVar2;
							lVar24 = lVar24 + -1;
						} while (lVar24 != 0);
						*(int *)((int)&plr[0].SpdList[0]._iPLDam + iVar9) = *(int *)((int)&plr[0].SpdList[0]._iPLDam + iVar9) + -1;
						uVar3 = *(uint *)((int)&plr[0].SpdList[0]._iPLDam + iVar9);
						if ((0 < (int)uVar3) && (iVar13 - 1U != uVar3)) {
							lVar18 = lVar18 + -8;
							lVar23 = 0x2e;
							lVar17 = lVar22 + 0x10187d68 + (ulonglong)uVar3 * 0x170 + -8;
							do {
								lVar17 = lVar17 + 8;
								uVar2 = ((undefined4 *)lVar17)[1];
								lVar18 = lVar18 + 8;
								*(undefined4 *)lVar18 = *(undefined4 *)lVar17;
								((undefined4 *)lVar18)[1] = uVar2;
								lVar23 = lVar23 + -1;
							} while (lVar23 != 0);
							lVar17 = 8;
							uVar15 = (undefined)lVar16;
							uVar11 = (undefined)-lVar16;
							do {
								iVar7 = (int)lVar20;
								if ((int)*(char *)(iVar7 + 0x482c) == piVar21[0x120a] + 1) {
									*(undefined *)(iVar7 + 0x482c) = uVar15;
								}
								if ((int)*(char *)(iVar7 + 0x482c) == -(piVar21[0x120a] + 1)) {
									*(undefined *)(iVar7 + 0x482c) = uVar11;
								}
								if ((int)*(char *)(iVar7 + 0x482d) == piVar21[0x120a] + 1) {
									*(undefined *)(iVar7 + 0x482d) = uVar15;
								}
								if ((int)*(char *)(iVar7 + 0x482d) == -(piVar21[0x120a] + 1)) {
									*(undefined *)(iVar7 + 0x482d) = uVar11;
								}
								if ((int)*(char *)(iVar7 + 0x482e) == piVar21[0x120a] + 1) {
									*(undefined *)(iVar7 + 0x482e) = uVar15;
								}
								if ((int)*(char *)(iVar7 + 0x482e) == -(piVar21[0x120a] + 1)) {
									*(undefined *)(iVar7 + 0x482e) = uVar11;
								}
								if ((int)*(char *)(iVar7 + 0x482f) == piVar21[0x120a] + 1) {
									*(undefined *)(iVar7 + 0x482f) = uVar15;
								}
								if ((int)*(char *)(iVar7 + 0x482f) == -(piVar21[0x120a] + 1)) {
									*(undefined *)(iVar7 + 0x482f) = uVar11;
								}
								if ((int)*(char *)(iVar7 + 0x4830) == piVar21[0x120a] + 1) {
									*(undefined *)(iVar7 + 0x4830) = uVar15;
								}
								if ((int)*(char *)(iVar7 + 0x4830) == -(piVar21[0x120a] + 1)) {
									*(undefined *)(iVar7 + 0x4830) = uVar11;
								}
								lVar20 = lVar20 + 5;
								lVar17 = lVar17 + -1;
							} while (lVar17 != 0);
						}
					}
				}
			}
			if (0x40 < iVar14) {
				lVar20 = (uVar19 - 0x41) * 0x170;
				iVar14 = (int)lVar20;
				if (*(int *)(iVar9 + 0x1018b71c + iVar14) != -1) {
					lVar17 = 0x2e;
					lVar16 = lVar22 + 0x1018c28c;
					lVar20 = lVar22 + lVar20 + 0x1018b70c;
					do {
						lVar20 = lVar20 + 8;
						uVar2 = ((undefined4 *)lVar20)[1];
						lVar16 = lVar16 + 8;
						*(undefined4 *)lVar16 = *(undefined4 *)lVar20;
						((undefined4 *)lVar16)[1] = uVar2;
						lVar17 = lVar17 + -1;
					} while (lVar17 != 0);
					puVar4 = *(undefined4 **)(iVar12 + -0x7670);
					*(undefined4 *)(iVar9 + 0x1018b71c + iVar14) = 0xffffffff;
					*puVar4 = 1;
				}
			}
			iVar14 = *piVar5;
			if (iVar14 != -1) {
				if (iVar14 == 0xb) {
					iVar14 = CalculateGold(pnum);
					*(int *)((int)&plr[0]._pGold + iVar9) = iVar14;
				}
				CalcPlrInv(pnum, 1);
				CheckItemStats(pnum);
				if (pnum == **(int **)(iVar12 + -0x77ac)) {
					PlaySFX(0x32);
					SetCursor_(*(int *)((int)plr[0].dwReserved + iVar9 + 8) + 0xc);
					mx = mx - (**(int **)(iVar12 + -0x7650) >> 1);
					my = my - (**(int **)(iVar12 + -0x7654) >> 1);
					SetCursorPos(mx, my);
					piVar21 = *(int **)(local_4c + -0x76ac);
					**(int **)(local_4c + -0x76a8) = mx;
					*piVar21 = my;
				}
			}
		}
	}
	return;
}

void inv_update_rem_item(int pnum, BYTE iv)

{
	if (((int)(char)iv & 0xffU) < 7) {
		*(undefined4 *)((int)plr + pnum * 0x55ec + ((int)(char)iv & 0xffU) * 0x170 + 0x4a0) = 0xffffffff;
	}
	if (((PlayerStruct *)((int)plr + pnum * 0x55ec))->_pmode == 8) {
		CalcPlrInv(pnum, 0);
	} else {
		CalcPlrInv(pnum, 1);
	}
	return;
}

void RemoveInvItem(int pnum, int iv)

{
	uint uVar1;
	undefined4 uVar2;
	int iVar3;
	int iVar4;
	longlong lVar5;
	longlong lVar6;
	int iVar7;
	longlong lVar8;
	char cVar9;
	longlong lVar10;
	int iVar11;
	undefined uVar12;
	longlong lVar13;
	longlong lVar14;

	iVar4 = 0x100f8fd0;
	lVar6 = (longlong)iv + 1;
	lVar13 = (longlong)pnum * 0x55ec;
	lVar5 = ZEXT48(plr) + lVar13;
	lVar14 = 4;
	lVar10 = -lVar6;
	lVar8 = lVar5;
	do {
		iVar3 = (int)lVar8;
		iVar7 = (int)lVar6;
		iVar11 = (int)lVar10;
		if ((iVar7 == (int)*(char *)(iVar3 + 0x482c)) || (iVar11 == (int)*(char *)(iVar3 + 0x482c))) {
			*(undefined *)(iVar3 + 0x482c) = 0;
		}
		if ((iVar7 == (int)*(char *)(iVar3 + 0x482d)) || (iVar11 == (int)*(char *)(iVar3 + 0x482d))) {
			*(undefined *)(iVar3 + 0x482d) = 0;
		}
		if ((iVar7 == (int)*(char *)(iVar3 + 0x482e)) || (iVar11 == (int)*(char *)(iVar3 + 0x482e))) {
			*(undefined *)(iVar3 + 0x482e) = 0;
		}
		if ((iVar7 == (int)*(char *)(iVar3 + 0x482f)) || (iVar11 == (int)*(char *)(iVar3 + 0x482f))) {
			*(undefined *)(iVar3 + 0x482f) = 0;
		}
		if ((iVar7 == (int)*(char *)(iVar3 + 0x4830)) || (iVar11 == (int)*(char *)(iVar3 + 0x4830))) {
			*(undefined *)(iVar3 + 0x4830) = 0;
		}
		if ((iVar7 == (int)*(char *)(iVar3 + 0x4831)) || (iVar11 == (int)*(char *)(iVar3 + 0x4831))) {
			*(undefined *)(iVar3 + 0x4831) = 0;
		}
		if ((iVar7 == (int)*(char *)(iVar3 + 0x4832)) || (iVar11 == (int)*(char *)(iVar3 + 0x4832))) {
			*(undefined *)(iVar3 + 0x4832) = 0;
		}
		if ((iVar7 == (int)*(char *)(iVar3 + 0x4833)) || (iVar11 == (int)*(char *)(iVar3 + 0x4833))) {
			*(undefined *)(iVar3 + 0x4833) = 0;
		}
		if ((iVar7 == (int)*(char *)(iVar3 + 0x4834)) || (iVar11 == (int)*(char *)(iVar3 + 0x4834))) {
			*(undefined *)(iVar3 + 0x4834) = 0;
		}
		if ((iVar7 == (int)*(char *)(iVar3 + 0x4835)) || (iVar11 == (int)*(char *)(iVar3 + 0x4835))) {
			*(undefined *)(iVar3 + 0x4835) = 0;
		}
		lVar8 = lVar8 + 10;
		lVar14 = lVar14 + -1;
	} while (lVar14 != 0);
	iVar3 = (int)lVar13;
	*(int *)((int)&plr[0].SpdList[0]._iPLDam + iVar3) = *(int *)((int)&plr[0].SpdList[0]._iPLDam + iVar3) + -1;
	uVar1 = *(uint *)((int)&plr[0].SpdList[0]._iPLDam + iVar3);
	if ((0 < (int)uVar1) && (iv != uVar1)) {
		lVar8 = lVar13 + 0x10187d68 + (ulonglong)uVar1 * 0x170 + -8;
		lVar14 = 0x2e;
		lVar6 = lVar13 + 0x10187d68 + (longlong)iv * 0x170 + -8;
		do {
			lVar8 = lVar8 + 8;
			uVar2 = ((undefined4 *)lVar8)[1];
			lVar6 = lVar6 + 8;
			*(undefined4 *)lVar6 = *(undefined4 *)lVar8;
			((undefined4 *)lVar6)[1] = uVar2;
			lVar14 = lVar14 + -1;
		} while (lVar14 != 0);
		cVar9 = (char)iv + '\x01';
		lVar6 = 8;
		uVar12 = (undefined)lVar10;
		lVar8 = lVar5;
		do {
			iVar7 = (int)lVar8;
			iVar11 = (int)lVar5;
			if ((int)*(char *)(iVar7 + 0x482c) == *(int *)(iVar11 + 0x4828) + 1) {
				*(char *)(iVar7 + 0x482c) = cVar9;
			}
			if ((int)*(char *)(iVar7 + 0x482c) == -(*(int *)(iVar11 + 0x4828) + 1)) {
				*(undefined *)(iVar7 + 0x482c) = uVar12;
			}
			if ((int)*(char *)(iVar7 + 0x482d) == *(int *)(iVar11 + 0x4828) + 1) {
				*(char *)(iVar7 + 0x482d) = cVar9;
			}
			if ((int)*(char *)(iVar7 + 0x482d) == -(*(int *)(iVar11 + 0x4828) + 1)) {
				*(undefined *)(iVar7 + 0x482d) = uVar12;
			}
			if ((int)*(char *)(iVar7 + 0x482e) == *(int *)(iVar11 + 0x4828) + 1) {
				*(char *)(iVar7 + 0x482e) = cVar9;
			}
			if ((int)*(char *)(iVar7 + 0x482e) == -(*(int *)(iVar11 + 0x4828) + 1)) {
				*(undefined *)(iVar7 + 0x482e) = uVar12;
			}
			if ((int)*(char *)(iVar7 + 0x482f) == *(int *)(iVar11 + 0x4828) + 1) {
				*(char *)(iVar7 + 0x482f) = cVar9;
			}
			if ((int)*(char *)(iVar7 + 0x482f) == -(*(int *)(iVar11 + 0x4828) + 1)) {
				*(undefined *)(iVar7 + 0x482f) = uVar12;
			}
			if ((int)*(char *)(iVar7 + 0x4830) == *(int *)(iVar11 + 0x4828) + 1) {
				*(char *)(iVar7 + 0x4830) = cVar9;
			}
			if ((int)*(char *)(iVar7 + 0x4830) == -(*(int *)(iVar11 + 0x4828) + 1)) {
				*(undefined *)(iVar7 + 0x4830) = uVar12;
			}
			lVar8 = lVar8 + 5;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
	}
	CalcPlrScrolls(pnum);
	if ((&plr[0]._pRSplType)[iVar3] == '\x02') {
		uVar1 = *(uint *)((int)&plr[0]._pRSpell + iVar3);
		if (uVar1 != 0xffffffff) {
			uVar1 = 1 << (ulonglong)uVar1 - 1;
			if ((uVar1 & *(uint *)((int)&plr[0]._pScrlSpells + iVar3 + 4) | (int)uVar1 >> 0x1f & *(uint *)((int)&plr[0]._pScrlSpells + iVar3)) == 0) {
				*(undefined4 *)((int)&plr[0]._pRSpell + iVar3) = 0xffffffff;
			}
			**(undefined4 **)(iVar4 + -0x76bc) = 0xff;
		}
	}
	return;
}

void RemoveSpdBarItem(int pnum, int iv)

{
	uint uVar1;
	int iVar2;
	int iVar3;

	iVar2 = 0x100f8fd0;
	iVar3 = pnum * 0x55ec;
	*(undefined4 *)((int)plr + iVar3 + iv * 0x170 + 0x485c) = 0xffffffff;
	CalcPlrScrolls(pnum);
	if (*(char *)((int)plr + iVar3 + 0xb8) == '\x02') {
		uVar1 = *(uint *)((int)plr + iVar3 + 0xb4);
		if ((uVar1 != 0xffffffff) && (uVar1 = 1 << (ulonglong)uVar1 - 1, (uVar1 & *(uint *)((int)plr + iVar3 + 0x118) | (int)uVar1 >> 0x1f & *(uint *)((int)plr + iVar3 + 0x114)) == 0)) {
			*(undefined4 *)((int)plr + iVar3 + 0xb4) = 0xffffffff;
		}
	}
	**(undefined4 **)(iVar2 + -0x76bc) = 0xff;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void CheckInvItem(void)

{
	if (_DAT_1012861c < 0xc) {
		CheckInvCut(myplr, MouseX, _MouseY);
	} else {
		CheckInvPaste(myplr, MouseX, _MouseY);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CheckInvScrn(void)

{
	if ((((0xbe < MouseX) && (MouseX < 0x1b5)) && (0x160 < _MouseY)) && (_MouseY < 0x181)) {
		CheckInvItem();
	}
	return;
}

void CheckItemStats(int pnum)

{
	pnum = pnum * 0x55ec;
	*(undefined4 *)((int)plr + pnum + 0x5538) = 0;
	if (*(int *)((int)plr + pnum + 0x160) < (int)*(char *)((int)plr + pnum + 0x5534)) {
		return;
	}
	if (*(int *)((int)plr + pnum + 0x168) < (int)(uint) * (byte *)((int)plr + pnum + 0x5535)) {
		return;
	}
	if (*(int *)((int)plr + pnum + 0x170) < (int)*(char *)((int)plr + pnum + 0x5536)) {
		return;
	}
	*(undefined4 *)((int)plr + pnum + 0x5538) = 1;
	return;
}

void CheckBookLevel(int pnum)

{
	byte bVar1;
	uint uVar2;
	longlong lVar3;

	pnum = pnum * 0x55ec;
	if (*(int *)((int)plr + pnum + 0x54b0) != 0x18) {
		return;
	}
	*(undefined *)((int)plr + pnum + 0x5535) = (char)*(undefined4 *)(*(int *)((int)plr + pnum + 0x54b4) * 0x38 + 0x1010efbc);
	lVar3 = (longlong) * (char *)((int)plr + pnum + *(int *)((int)plr + pnum + 0x54b4) + 0xc1);
	while ((int)lVar3 != 0) {
		bVar1 = *(byte *)((int)plr + pnum + 0x5535);
		lVar3 = lVar3 + -1;
		*(char *)((int)plr + pnum + 0x5535) = bVar1 + (char)((int)((uint)bVar1 * 0x14) / 100);
		bVar1 = *(byte *)((int)plr + pnum + 0x5535);
		uVar2 = (int)((uint)bVar1 * 0x14) / 100;
		if (0xff < (int)((uint)bVar1 + uVar2 + (uVar2 >> 0x1f))) {
			*(undefined *)((int)plr + pnum + 0x5535) = 0xff;
			lVar3 = 0;
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CheckQuestItem(int pnum)

{
	char cVar1;
	int iVar2;

	iVar2 = *(int *)((int)plr + pnum * 0x55ec + 0x553c);
	if (iVar2 == 10) {
		quests[8]._qactive = '\x03';
	}
	if ((iVar2 == 0x11) && (quests[1]._qactive == '\x02')) {
		if (quests[1]._qvar1 == '\x03') {
			_DAT_1012d924 = 10;
			cVar1 = *(char *)((int)plr + pnum * 0x55ec + 0x15c);
			if (cVar1 == '\0') {
				_DAT_1012d920 = 0x32f;
			} else {
				if (cVar1 == '\x01') {
					_DAT_1012d920 = 0x2c2;
				} else {
					if (cVar1 == '\x02') {
						_DAT_1012d920 = 0x25b;
					}
				}
			}
			quests[1]._qvar1 = '\x04';
		}
	}
	if (iVar2 == 0x10) {
		if (quests[10]._qactive == '\x01') {
			quests[10]._qactive = '\x02';
			quests[10]._qvar1 = '\x01';
		}
		if (quests[10]._qlog == 1) {
			_DAT_1012d924 = 10;
			cVar1 = *(char *)((int)plr + myplr * 0x55ec + 0x15c);
			if (cVar1 == '\0') {
				_DAT_1012d920 = 0x329;
			} else {
				if (cVar1 == '\x01') {
					_DAT_1012d920 = 700;
				} else {
					if (cVar1 == '\x02') {
						_DAT_1012d920 = 0x255;
					}
				}
			}
		}
	}
	if (iVar2 == 0xf) {
		_DAT_1012d924 = 0x1e;
		cVar1 = *(char *)((int)plr + myplr * 0x55ec + 0x15c);
		if (cVar1 == '\0') {
			_DAT_1012d920 = 0x328;
		} else {
			if (cVar1 == '\x01') {
				_DAT_1012d920 = 699;
			} else {
				if (cVar1 == '\x02') {
					_DAT_1012d920 = 0x254;
				}
			}
		}
	}
	if (iVar2 == 9) {
		if (quests[0]._qactive == '\x01') {
			quests[0]._qactive = '\x02';
			quests[0]._qvar1 = '\x01';
		}
		if (quests[0]._qlog == 1) {
			_DAT_1012d924 = 10;
			cVar1 = *(char *)((int)plr + myplr * 0x55ec + 0x15c);
			if (cVar1 == '\0') {
				_DAT_1012d920 = 0x327;
			} else {
				if (cVar1 == '\x01') {
					_DAT_1012d920 = 0x2ba;
				} else {
					if (cVar1 == '\x02') {
						_DAT_1012d920 = 0x253;
					}
				}
			}
		}
	}
	if (iVar2 != 0x1c) {
		return;
	}
	cVar1 = *(char *)((int)plr + myplr * 0x55ec + 0x15c);
	if (cVar1 == '\0') {
		_DAT_1012d920 = 0x32b;
		_DAT_1012d924 = 0x14;
		quests[9]._qactive = '\x03';
		return;
	}
	if (cVar1 == '\x01') {
		_DAT_1012d920 = 0x2be;
		_DAT_1012d924 = 0x14;
		quests[9]._qactive = '\x03';
		return;
	}
	if (cVar1 != '\x02') {
		_DAT_1012d924 = 0x14;
		quests[9]._qactive = '\x03';
		return;
	}
	_DAT_1012d920 = 599;
	_DAT_1012d924 = 0x14;
	quests[9]._qactive = '\x03';
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void InvGetItem(int pnum, int ii)

{
	undefined4 uVar1;
	undefined8 uVar2;
	undefined4 *puVar3;
	int i;
	undefined4 *puVar4;
	int iVar5;
	longlong lVar6;

	uVar2 = 0x100f8fd0;
	if (_DAT_10128178 != 0) {
		_DAT_10128178 = 0;
		_DAT_101282cc = 0;
	}
	iVar5 = ii * 0x170;
	if (*(char *)(_DAT_1012f1a8 + *(int *)(iVar5 + 0x1013d994) * 0x70 + *(int *)(iVar5 + 0x1013d998)) != '\0') {
		if ((myplr == pnum) && (0xb < _DAT_1012861c)) {
			NetSendCmdPItem(1, 'V', (BYTE) * (undefined4 *)((int)plr + myplr * 0x55ec + 0x38),
			    (BYTE) * (undefined4 *)((int)plr + myplr * 0x55ec + 0x3c));
		}
		*(ushort *)(iVar5 + 0x1013d98c) = *(ushort *)(iVar5 + 0x1013d98c) & 0x7fff;
		lVar6 = 0x2e;
		puVar3 = (undefined4 *)(iVar5 + 0x1013d980);
		puVar4 = (undefined4 *)((int)plr + pnum * 0x55ec + 0x53cc);
		do {
			uVar1 = puVar3[3];
			puVar4[2] = puVar3[2];
			puVar4[3] = uVar1;
			lVar6 = lVar6 + -1;
			puVar3 = puVar3 + 2;
			puVar4 = puVar4 + 2;
		} while (lVar6 != 0);
		CheckQuestItem(pnum);
		CheckBookLevel(pnum);
		CheckItemStats(pnum);
		i = 0;
		*(undefined *)(_DAT_1012f1a8 + *(int *)(iVar5 + 0x1013d994) * 0x70 + *(int *)(iVar5 + 0x1013d998)) = 0;
		while (i < _DAT_1013d984) {
			if (*(int *)(&DAT_1013d788 + i * 4) == ii) {
				DeleteItem(*(int *)(&DAT_1013d788 + i * 4), i);
				i = 0;
			} else {
				i = i + 1;
			}
		}
		**(undefined **)((int)uVar2 + -0x7748) = 0xff;
		NewCursor(*(int *)((int)plr + pnum * 0x55ec + 0x5494) + 0xc);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AutoGetItem(int pnum, int ii)

{
	char cVar1;
	undefined4 uVar2;
	int iVar3;
	uint uVar4;
	int *piVar5;
	BOOL BVar6;
	int *piVar7;
	int ii_00;
	undefined4 *puVar8;
	int *piVar9;
	int i;
	undefined4 *puVar10;
	ulonglong uVar11;
	int iVar12;
	int iVar13;
	PlayerStruct *pPVar14;
	int ii_01;
	longlong lVar15;
	longlong lVar16;

	lVar16 = 0x100f8fd0;
	uVar11 = ZEXT48(&DAT_1013d988);
	if (_DAT_10128178 != 0) {
		_DAT_10128178 = 0;
		_DAT_101282cc = 0;
	}
	if ((ii == 0x7f) || (*(char *)(_DAT_1012f1a8 + *(int *)(ii * 0x170 + 0x1013d994) * 0x70 + *(int *)(ii * 0x170 + 0x1013d998)) != '\0')) {
		iVar13 = ii * 0x170;
		i = pnum * 0x55ec;
		*(ushort *)(iVar13 + 0x1013d98c) = *(ushort *)(iVar13 + 0x1013d98c) & 0x7fff;
		lVar15 = 0x2e;
		puVar8 = (undefined4 *)((int)plr + i + 0x53cc);
		puVar10 = (undefined4 *)(iVar13 + 0x1013d980);
		do {
			uVar2 = puVar10[3];
			puVar8[2] = puVar10[2];
			puVar8[3] = uVar2;
			lVar15 = lVar15 + -1;
			puVar8 = puVar8 + 2;
			puVar10 = puVar10 + 2;
		} while (lVar15 != 0);
		CheckQuestItem(pnum);
		CheckBookLevel(pnum);
		CheckItemStats(pnum);
		SetICursor(*(int *)((int)plr + i + 0x5494) + 0xc);
		iVar12 = (int)uVar11;
		ii_00 = (int)lVar16;
		piVar5 = (int *)((int)plr + i + 0x53dc);
		if (*piVar5 == 0xb) {
			BVar6 = GoldAutoPlace(pnum);
		} else {
			BVar6 = 0;
			uVar4 = *(uint *)((int)plr + i + 0x78) & 0xf;
			if (((((uVar4 == 0) || (uVar4 == 1)) && (((PlayerStruct *)((int)plr + i))->_pmode < 4)) && ((*(int *)((int)plr + i + 0x5538) != 0 && (*(char *)((int)plr + i + 0x5492) == '\x01')))) && (BVar6 = WeaponAutoPlace(pnum), BVar6 != 0)) {
				CalcPlrInv(pnum, 1);
			}
			iVar12 = (int)uVar11;
			ii_00 = (int)lVar16;
			if (BVar6 == 0) {
				ii_01 = **(int **)(ii_00 + -0x7648);
				iVar3 = **(int **)(ii_00 + -0x764c);
				if ((ii_01 == 1) && (iVar3 == 1)) {
					pPVar14 = (PlayerStruct *)((int)plr + i);
					if ((*(int *)((int)plr + i + 0x5538) != 0) && (*(int *)(ii_00 + *(int *)((int)plr + i + 0x553c) * 0x4c + 0x3898) != 0)) {
						ii_00 = 0;
						while ((ii_00 < 8 && (BVar6 == 0))) {
							if (pPVar14->SpdList[0]._iPLGetHit == -1) {
								lVar15 = 0x2e;
								piVar9 = &pPVar14->SpdList[0]._iPLMR;
								piVar7 = (int *)((int)plr + i + 0x53cc);
								do {
									iVar12 = piVar7[3];
									piVar9[2] = piVar7[2];
									piVar9[3] = iVar12;
									lVar15 = lVar15 + -1;
									piVar9 = piVar9 + 2;
									piVar7 = piVar7 + 2;
								} while (lVar15 != 0);
								CalcPlrScrolls(pnum);
								_DAT_1013c96c = 1;
								BVar6 = 1;
							}
							pPVar14 = (PlayerStruct *)&pPVar14->_pDexterity;
							ii_00 = ii_00 + 1;
						}
					}
					ii_00 = 0x1e;
					while ((ii_00 < 0x28 && (BVar6 == 0))) {
						BVar6 = AutoPlace(pnum, ii_00, 1, 1, 1);
						ii_00 = ii_00 + 1;
					}
					ii_00 = 0x14;
					while ((ii_00 < 0x1e && (BVar6 == 0))) {
						BVar6 = AutoPlace(pnum, ii_00, 1, 1, 1);
						ii_00 = ii_00 + 1;
					}
					ii_00 = 10;
					while ((ii_00 < 0x14 && (BVar6 == 0))) {
						BVar6 = AutoPlace(pnum, ii_00, 1, 1, 1);
						ii_00 = ii_00 + 1;
					}
					ii_00 = 0;
					while ((ii_00 < 10 && (BVar6 == 0))) {
						BVar6 = AutoPlace(pnum, ii_00, 1, 1, 1);
						ii_00 = ii_00 + 1;
					}
				}
				if ((ii_01 == 1) && (iVar3 == 2)) {
					ii_00 = 0x1d;
					while ((0x13 < ii_00 && (BVar6 == 0))) {
						BVar6 = AutoPlace(pnum, ii_00, 1, 2, 1);
						ii_00 = ii_00 + -1;
					}
					ii_00 = 9;
					while ((-1 < ii_00 && (BVar6 == 0))) {
						BVar6 = AutoPlace(pnum, ii_00, 1, 2, 1);
						ii_00 = ii_00 + -1;
					}
					ii_00 = 0x13;
					while ((9 < ii_00 && (BVar6 == 0))) {
						BVar6 = AutoPlace(pnum, ii_00, 1, 2, 1);
						ii_00 = ii_00 + -1;
					}
				}
				if ((ii_01 == 1) && (iVar3 == 3)) {
					ii_00 = 0;
					while ((ii_00 < 0x14 && (BVar6 == 0))) {
						BVar6 = AutoPlace(pnum, ii_00, 1, 3, 1);
						ii_00 = ii_00 + 1;
					}
				}
				if ((ii_01 == 2) && (iVar3 == 2)) {
					ii_00 = 0;
					lVar15 = lVar16 + 0x35c4;
					while ((ii_00 < 10 && (BVar6 == 0))) {
						BVar6 = AutoPlace(pnum, *(int *)lVar15, 2, 2, 1);
						ii_00 = ii_00 + 1;
						lVar15 = lVar15 + 4;
					}
					ii_00 = 0x15;
					while ((ii_00 < 0x1d && (BVar6 == 0))) {
						BVar6 = AutoPlace(pnum, ii_00, 2, 2, 1);
						ii_00 = ii_00 + 2;
					}
					ii_00 = 1;
					while ((ii_00 < 9 && (BVar6 == 0))) {
						BVar6 = AutoPlace(pnum, ii_00, 2, 2, 1);
						ii_00 = ii_00 + 2;
					}
					ii_00 = 10;
					while ((ii_00 < 0x13 && (BVar6 == 0))) {
						BVar6 = AutoPlace(pnum, ii_00, 2, 2, 1);
						ii_00 = ii_00 + 1;
					}
				}
				iVar12 = (int)uVar11;
				ii_00 = (int)lVar16;
				if ((ii_01 == 2) && (iVar3 == 3)) {
					ii_00 = 0;
					while ((ii_00 < 9 && (BVar6 == 0))) {
						BVar6 = AutoPlace(pnum, ii_00, 2, 3, 1);
						ii_00 = ii_00 + 1;
					}
					ii_01 = 10;
					while (true) {
						iVar12 = (int)uVar11;
						ii_00 = (int)lVar16;
						if ((0x12 < ii_01) || (BVar6 != 0))
							break;
						BVar6 = AutoPlace(pnum, ii_01, 2, 3, 1);
						ii_01 = ii_01 + 1;
					}
				}
			}
		}
		if (BVar6 == 0) {
			if (pnum == **(int **)(ii_00 + -0x77ac)) {
				cVar1 = *(char *)((int)plr + i + 0x15c);
				if (cVar1 == '\0') {
					ii_00 = random('\0', 3);
					PlaySFX(ii_00 + 0x2d7);
				} else {
					if (cVar1 == '\x01') {
						ii_00 = random('\0', 3);
						PlaySFX(ii_00 + 0x270);
					} else {
						if (cVar1 == '\x02') {
							ii_00 = random('\0', 3);
							PlaySFX(ii_00 + 0x209);
						}
					}
				}
			}
			lVar16 = 0x2e;
			puVar8 = (undefined4 *)((int)plr + i + 0x53cc);
			puVar10 = (undefined4 *)(iVar13 + 0x1013d980);
			do {
				uVar2 = puVar10[3];
				puVar8[2] = puVar10[2];
				puVar8[3] = uVar2;
				lVar16 = lVar16 + -1;
				puVar8 = puVar8 + 2;
				puVar10 = puVar10 + 2;
			} while (lVar16 != 0);
			RespawnItem(ii, 1);
			NetSendCmdPItem(
			    1, '\v', (BYTE) * (undefined4 *)(iVar12 + iVar13 + 0xc), (BYTE) * (undefined4 *)(iVar12 + iVar13 + 0x10));
			*piVar5 = -1;
		} else {
			i = 0;
			*(undefined *)(**(int **)(ii_00 + -0x768c) + *(int *)(iVar12 + iVar13 + 0xc) * 0x70 + *(int *)(iVar12 + iVar13 + 0x10)) = 0;
			while (i < _DAT_1013d984) {
				if (*(int *)(&DAT_1013d788 + i * 4) == ii) {
					DeleteItem(*(int *)(&DAT_1013d788 + i * 4), i);
					i = 0;
				} else {
					i = i + 1;
				}
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FindGetItem(int idx, WORD ci, int iseed)

{
	ulonglong uVar1;
	int iVar2;
	int *piVar3;

	uVar1 = (ulonglong)_DAT_1013d984;
	piVar3 = (int *)&DAT_1013d788;
	if (0 < (int)_DAT_1013d984) {
		do {
			iVar2 = *piVar3 * 0x170;
			if (((idx == *(int *)(iVar2 + 0x1013daf0)) && (iseed == *(int *)(&DAT_1013d988 + iVar2))) && (ci == *(WORD *)(iVar2 + 0x1013d98c))) {
				return *piVar3;
			}
			piVar3 = piVar3 + 1;
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
	}
	return -1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SyncGetItem(int x, int y, int idx, WORD ci, int iseed)

{
	char cVar1;
	int i;
	int iVar2;

	cVar1 = *(char *)(_DAT_1012f1a8 + x * 0x70 + y);
	if (cVar1 == '\0') {
		iVar2 = FindGetItem(idx, ci, iseed);
	} else {
		iVar2 = (int)cVar1 + -1;
		i = iVar2 * 0x170;
		if (((idx == *(int *)(i + 0x1013daf0)) && (iseed == *(int *)(&DAT_1013d988 + i))) && (ci == *(WORD *)(i + 0x1013d98c))) {
			FindGetItem(idx, ci, iseed);
		} else {
			iVar2 = FindGetItem(idx, ci, iseed);
		}
	}
	if (iVar2 != -1) {
		i = 0;
		*(undefined *)(_DAT_1012f1a8 + *(int *)(iVar2 * 0x170 + 0x1013d994) * 0x70 + *(int *)(iVar2 * 0x170 + 0x1013d998)) = 0;
		while (i < _DAT_1013d984) {
			if (*(int *)(&DAT_1013d788 + i * 4) == iVar2) {
				DeleteItem(*(int *)(&DAT_1013d788 + i * 4), i);
				FindGetItem(idx, ci, iseed);
				i = 0;
			} else {
				i = i + 1;
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL CanPut(int x, int y)

{
	char cVar1;
	char cVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar4 = x * 0x70;
	if (*(char *)(_DAT_1012f1a8 + iVar4 + y) != '\0') {
		return 0;
	}
	x = x * 0xe0;
	iVar3 = y * 2;
	if ((&DAT_10130b33)[(int)*(short *)(_DAT_1012f1d4 + x + iVar3)] != '\0') {
		return 0;
	}
	cVar2 = *(char *)(_DAT_1012f1ac + iVar4 + y);
	if (cVar2 != '\0') {
		if (cVar2 < '\x01') {
			iVar5 = -((int)cVar2 + 1);
		} else {
			iVar5 = (int)cVar2 + -1;
		}
		if (*(int *)(iVar5 * 0x78 + 0x1017e40c) != 0) {
			return 0;
		}
	}
	cVar2 = *(char *)(_DAT_1012f1ac + iVar4 + y + 0x71);
	if ('\0' < cVar2) {
		if (*(char *)(((int)cVar2 + -1) * 0x78 + 0x1017e414) != '\0') {
			return 0;
		}
	}
	if (cVar2 < '\0') {
		if (*(char *)(((int)cVar2 + 1) * -0x78 + 0x1017e414) != '\0') {
			return 0;
		}
	}
	y = _DAT_1012f1ac + iVar4 + y;
	cVar2 = *(char *)(y + 0x70);
	if ('\0' < cVar2) {
		cVar1 = *(char *)(y + 1);
		if ('\0' < cVar1) {
			if ((*(char *)(((int)cVar2 + -1) * 0x78 + 0x1017e414) != '\0') && (*(char *)(((int)cVar1 + -1) * 0x78 + 0x1017e414) != '\0')) {
				return 0;
			}
		}
	}
	if (((currlevel != 0) || (*(short *)(_DAT_1012f1b4 + x + iVar3) == 0)) && ((currlevel != 0 || (*(short *)(_DAT_1012f1b4 + x + iVar3 + 0xe2) == 0)))) {
		return 1;
	}
	return 0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL TryInvPut(void)

{
	uint uVar1;
	int iVar2;
	BOOL BVar3;

	if (_DAT_1013d984 < 0x7f) {
		iVar2 = GetDirection(*(int *)((int)plr + myplr * 0x55ec + 0x38), *(int *)((int)plr + myplr * 0x55ec + 0x3c),
		    _DAT_10128600, _DAT_101285fc);
		BVar3 = CanPut(*(int *)((int)plr + myplr * 0x55ec + 0x38) + *(int *)(&DAT_1010c890 + iVar2 * 4),
		    *(int *)((int)plr + myplr * 0x55ec + 0x3c) + *(int *)(&DAT_1010c8b0 + iVar2 * 4));
		if (BVar3 == 0) {
			uVar1 = (iVar2 - 1U) * 4 & 0x1c;
			BVar3 = CanPut(*(int *)((int)plr + myplr * 0x55ec + 0x38) + *(int *)(&DAT_1010c890 + uVar1),
			    *(int *)((int)plr + myplr * 0x55ec + 0x3c) + *(int *)(&DAT_1010c8b0 + uVar1));
			if (BVar3 == 0) {
				uVar1 = ((iVar2 - 1U & 7) + 2) * 4 & 0x1c;
				BVar3 = CanPut(*(int *)((int)plr + myplr * 0x55ec + 0x38) + *(int *)(&DAT_1010c890 + uVar1),
				    *(int *)((int)plr + myplr * 0x55ec + 0x3c) + *(int *)(&DAT_1010c8b0 + uVar1));
				if (BVar3 == 0) {
					BVar3 = CanPut(*(int *)((int)plr + myplr * 0x55ec + 0x38), *(int *)((int)plr + myplr * 0x55ec + 0x3c));
				} else {
					BVar3 = 1;
				}
			} else {
				BVar3 = 1;
			}
		} else {
			BVar3 = 1;
		}
	} else {
		BVar3 = 0;
	}
	return BVar3;
}

void DrawInvMsg(char *msg)

{
	DWORD DVar1;
	int local_2c;

	DVar1 = GetTickCount();
	if (4999 < DVar1 - *(int *)(local_2c + -0x4e18)) {
		*(DWORD *)(local_2c + -0x4e18) = DVar1;
		ErrorPlrMsg(msg);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int InvPutItem(int pnum, int x, int y)

{
	int *piVar1;
	WORD *pWVar2;
	int *piVar3;
	undefined4 uVar4;
	uint uVar5;
	bool bVar6;
	undefined8 uVar7;
	int iVar8;
	int i;
	int iVar9;
	BOOL BVar10;
	undefined4 *puVar11;
	undefined4 *puVar12;
	int y_00;
	int x_00;
	longlong lVar13;

	uVar7 = 0x100f8fd0;
	if (_DAT_1013d984 < 0x7f) {
		pnum = pnum * 0x55ec;
		piVar1 = (int *)((int)plr + pnum + 0x553c);
		pWVar2 = (WORD *)((int)plr + pnum + 0x53d8);
		piVar3 = (int *)((int)plr + pnum + 0x53d4);
		iVar8 = FindGetItem(*piVar1, *pWVar2, *piVar3);
		if (iVar8 != -1) {
			DrawInvMsg(*(char **)((int)uVar7 + -0x6158));
			SyncGetItem(x, y, *piVar1, *pWVar2, *piVar3);
		}
		piVar1 = (int *)((int)plr + pnum + 0x38);
		piVar3 = (int *)((int)plr + pnum + 0x3c);
		i = GetDirection(*piVar1, *piVar3, x, y);
		iVar8 = *piVar3;
		iVar9 = abs(x - *piVar1);
		if ((1 < iVar9) || (iVar8 = abs(y - iVar8), 1 < iVar8)) {
			x = *piVar1 + *(int *)(&DAT_1010c890 + i * 4);
			y = *piVar3 + *(int *)(&DAT_1010c8b0 + i * 4);
		}
		BVar10 = CanPut(x, y);
		iVar8 = (int)uVar7;
		if (BVar10 == 0) {
			uVar5 = (i - 1U) * 4 & 0x1c;
			x = *piVar1 + *(int *)(&DAT_1010c890 + uVar5);
			y = *piVar3 + *(int *)(&DAT_1010c8b0 + uVar5);
			BVar10 = CanPut(x, y);
			iVar8 = (int)uVar7;
			if (BVar10 == 0) {
				uVar5 = ((i - 1U & 7) + 2) * 4 & 0x1c;
				x = *piVar1 + *(int *)(&DAT_1010c890 + uVar5);
				y = *piVar3 + *(int *)(&DAT_1010c8b0 + uVar5);
				BVar10 = CanPut(x, y);
				iVar8 = (int)uVar7;
				if (BVar10 == 0) {
					bVar6 = false;
					i = 1;
					while ((iVar8 = (int)uVar7, i < 0x32 && (!bVar6))) {
						iVar8 = -i;
						while ((iVar8 <= i && (!bVar6))) {
							y_00 = iVar8 + *(int *)((int)plr + pnum + 0x3c);
							iVar9 = -i;
							while ((iVar9 <= i && (!bVar6))) {
								x_00 = iVar9 + *(int *)((int)plr + pnum + 0x38);
								BVar10 = CanPut(x_00, y_00);
								if (BVar10 != 0) {
									bVar6 = true;
									y = y_00;
									x = x_00;
								}
								iVar9 = iVar9 + 1;
							}
							iVar8 = iVar8 + 1;
						}
						i = i + 1;
					}
					if (!bVar6) {
						return -1;
					}
				}
			}
		}
		i = _DAT_1013d58c;
		*(char *)(**(int **)(iVar8 + -0x768c) + x * 0x70 + y) = (char)_DAT_1013d58c + '\x01';
		y_00 = _DAT_1013d58c * 0x170;
		lVar13 = 0x2e;
		iVar9 = *(int *)(&DAT_1013d58c + (0x7e - _DAT_1013d984) * 4);
		*(int *)(*(int *)(iVar8 + -0x71e0) + _DAT_1013d984 * 4) = _DAT_1013d58c;
		_DAT_1013d58c = iVar9;
		puVar11 = (undefined4 *)((int)plr + pnum + 0x53cc);
		puVar12 = (undefined4 *)(y_00 + 0x1013d980);
		do {
			uVar4 = puVar11[3];
			puVar12[2] = puVar11[2];
			puVar12[3] = uVar4;
			lVar13 = lVar13 + -1;
			puVar11 = puVar11 + 2;
			puVar12 = puVar12 + 2;
		} while (lVar13 != 0);
		*(int *)(y_00 + 0x1013d994) = x;
		*(int *)(y_00 + 0x1013d998) = y;
		RespawnItem(i, 1);
		_DAT_1013d984 = _DAT_1013d984 + 1;
		NewCursor(1);
	} else {
		i = -1;
	}
	return i;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int SyncPutItem(int pnum,
    int x,
    int y,
    int idx,
    WORD icreateinfo,
    int iseed,
    int Id,
    int dur,
    int mdur,
    int ch,
    int mch,
    int ivalue,
    DWORD ibuff)

{
	int *piVar1;
	int *piVar2;
	uint uVar3;
	bool bVar4;
	undefined8 uVar5;
	int iVar6;
	int ii;
	int ch_00;
	BOOL BVar7;
	int y_00;
	ulonglong uVar8;
	int x_00;
	int mdur_00;
	uint in_stack_0000003c;
	int mch_00;
	int ivalue_00;
	int ivalue_01;
	int ibuff_00;

	uVar5 = 0x100f8fd0;
	uVar8 = (ulonglong)in_stack_0000003c;
	if (_DAT_1013d984 < 0x7f) {
		iVar6 = FindGetItem(idx, icreateinfo, iseed);
		if (iVar6 != -1) {
			DrawInvMsg(*(char **)((int)uVar5 + -0x615c));
			SyncGetItem(x, y, idx, icreateinfo, iseed);
		}
		pnum = pnum * 0x55ec;
		piVar1 = (int *)((int)plr + pnum + 0x38);
		piVar2 = (int *)((int)plr + pnum + 0x3c);
		ii = GetDirection(*piVar1, *piVar2, x, y);
		iVar6 = *piVar2;
		ch_00 = abs(x - *piVar1);
		if ((1 < ch_00) || (iVar6 = abs(y - iVar6), 1 < iVar6)) {
			x = *piVar1 + *(int *)(&DAT_1010c890 + ii * 4);
			y = *piVar2 + *(int *)(&DAT_1010c8b0 + ii * 4);
		}
		BVar7 = CanPut(x, y);
		iVar6 = (int)uVar5;
		ch_00 = (int)uVar8;
		if (BVar7 == 0) {
			uVar3 = (ii - 1U) * 4 & 0x1c;
			x = *piVar1 + *(int *)(&DAT_1010c890 + uVar3);
			y = *piVar2 + *(int *)(&DAT_1010c8b0 + uVar3);
			BVar7 = CanPut(x, y);
			iVar6 = (int)uVar5;
			ch_00 = (int)uVar8;
			if (BVar7 == 0) {
				uVar3 = ((ii - 1U & 7) + 2) * 4 & 0x1c;
				x = *piVar1 + *(int *)(&DAT_1010c890 + uVar3);
				y = *piVar2 + *(int *)(&DAT_1010c8b0 + uVar3);
				BVar7 = CanPut(x, y);
				iVar6 = (int)uVar5;
				ch_00 = (int)uVar8;
				if (BVar7 == 0) {
					bVar4 = false;
					ii = 1;
					while (true) {
						iVar6 = (int)uVar5;
						ch_00 = (int)uVar8;
						if ((0x31 < ii) || (bVar4))
							break;
						iVar6 = -ii;
						while ((iVar6 <= ii && (!bVar4))) {
							y_00 = iVar6 + *(int *)((int)plr + pnum + 0x3c);
							ch_00 = -ii;
							while ((ch_00 <= ii && (!bVar4))) {
								x_00 = ch_00 + *(int *)((int)plr + pnum + 0x38);
								BVar7 = CanPut(x_00, y_00);
								if (BVar7 != 0) {
									bVar4 = true;
									y = y_00;
									x = x_00;
								}
								ch_00 = ch_00 + 1;
							}
							iVar6 = iVar6 + 1;
						}
						ii = ii + 1;
					}
					if (!bVar4) {
						return -1;
					}
				}
			}
		}
		ii = **(int **)(iVar6 + -0x71f4);
		*(char *)(**(int **)(iVar6 + -0x768c) + x * 0x70 + y) = (char)ii + '\x01';
		y_00 = *(int *)(iVar6 + -0x71e0);
		x_00 = _DAT_1013d984 * 4;
		**(undefined4 **)(iVar6 + -0x71f4) = *(undefined4 *)(*(int *)(iVar6 + -0x71f4) + (0x7e - _DAT_1013d984) * 4);
		*(int *)(y_00 + x_00) = ii;
		if (idx == 0x17) {
			RecreateEar(ii, icreateinfo, iseed, Id, dur, mdur_00, ch_00, mch_00, ivalue_01, ibuff_00);
		} else {
			RecreateItem(ii, idx, icreateinfo, iseed, ivalue_00);
			if (Id != 0) {
				*(undefined4 *)(*(int *)(iVar6 + -0x7690) + ii * 0x170 + 0x38) = 1;
			}
			y_00 = *(int *)(iVar6 + -0x7690) + ii * 0x170;
			*(int *)(y_00 + 0xec) = dur;
			*(int *)(y_00 + 0xf0) = mdur_00;
			*(int *)(y_00 + 0xe4) = ch_00;
			*(int *)(y_00 + 0xe8) = mch_00;
		}
		iVar6 = *(int *)(iVar6 + -0x7690) + ii * 0x170;
		*(int *)(iVar6 + 0xc) = x;
		*(int *)(iVar6 + 0x10) = y;
		RespawnItem(ii, 1);
		_DAT_1013d984 = _DAT_1013d984 + 1;
	} else {
		ii = -1;
	}
	return ii;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

char CheckInvHLight(void)

{
	int iVar1;
	int nGold;
	char *pcVar2;
	int *piVar3;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	PlayerStruct *pPVar4;
	char cVar5;
	ItemStruct *x;
	ulonglong uVar6;
	int iVar7;
	longlong lVar8;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	iVar1 = 0x100f8fd0;
	uVar6 = 0;
	piVar3 = (int *)&DAT_100fc5bc;
	lVar8 = 0x49;
	do {
		if ((((*piVar3 <= MouseX) && (MouseX < *piVar3 + 0x1d)) && (piVar3[1] + -0x1d <= _MouseY)) && (_MouseY < piVar3[1]))
			break;
		piVar3 = piVar3 + 2;
		uVar6 = uVar6 + 1;
		lVar8 = lVar8 + -1;
	} while (lVar8 != 0);
	if (0x48 < (uVar6 & 0xffffffff)) {
		return -1;
	}
	DAT_101283d4 = 0;
	cVar5 = -1;
	x = (ItemStruct *)0x0;
	nGold = myplr * 0x55ec;
	pPVar4 = (PlayerStruct *)((int)plr + nGold);
	ClearPanel();
	iVar7 = (int)uVar6;
	if ((iVar7 < 0) || (3 < iVar7)) {
		if (iVar7 == 4) {
			x = (ItemStruct *)((int)plr + nGold + 0x608);
			cVar5 = '\x01';
		} else {
			if (iVar7 == 5) {
				x = (ItemStruct *)((int)plr + nGold + 0x778);
				cVar5 = '\x02';
			} else {
				if (iVar7 == 6) {
					x = (ItemStruct *)((int)plr + nGold + 0x8e8);
					cVar5 = '\x03';
				} else {
					if ((iVar7 < 7) || (0xc < iVar7)) {
						if ((iVar7 < 0xd) || (0x12 < iVar7)) {
							if ((iVar7 < 0x13) || (0x18 < iVar7)) {
								if ((iVar7 < 0x19) || (0x40 < iVar7)) {
									if (0x40 < iVar7) {
										x = (ItemStruct *)&pPVar4->SpdList[iVar7 + -0x41]._iPLHP;
										**(undefined4 **)(iVar1 + -0x7670) = 1;
										if (x->_itype == -1) {
											return -1;
										}
										cVar5 = (char)uVar6 + -0x12;
									}
								} else {
									nGold = abs((int)*(char *)((int)&pPVar4->SpdList[0]._iMiscId + iVar7 + 3));
									if (nGold == 0) {
										return -1;
									}
									cVar5 = (char)nGold + '\x06';
									x = (ItemStruct *)&pPVar4->InvList[nGold + -1]._iPLHP;
								}
							} else {
								x = (ItemStruct *)((int)plr + nGold + 0xd38);
								cVar5 = '\x06';
							}
						} else {
							x = (ItemStruct *)((int)plr + nGold + 0xa58);
							if ((*(int *)((int)plr + nGold + 0xa60) == -1) || (*(char *)((int)plr + nGold + 0xb15) != '\x02')) {
								x = (ItemStruct *)((int)plr + nGold + 0xbc8);
								cVar5 = '\x05';
							} else {
								cVar5 = '\x04';
							}
						}
					} else {
						x = (ItemStruct *)((int)plr + nGold + 0xa58);
						cVar5 = '\x04';
					}
				}
			}
		}
	} else {
		x = (ItemStruct *)((int)plr + nGold + 0x498);
		cVar5 = '\0';
	}
	if (x->_itype == -1) {
		cVar5 = -1;
	} else {
		if (x->_itype == 0xb) {
			nGold = x->_ivalue;
			pcVar2 = get_pieces_str(nGold);
			wsprintf((int)&DAT_101283d5, *(undefined4 *)(iVar1 + -0x6160), nGold, pcVar2, in_r7, in_r8, in_r9, in_r10,
			    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
			    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
		} else {
			if (x->_iMagical == '\x01') {
				DAT_101283d4 = 1;
			} else {
				if (x->_iMagical == '\x02') {
					DAT_101283d4 = 3;
				}
			}
			strcpy(&DAT_101283d5, x->_iName);
			if (x->_iIdentified == 0) {
				PrintItemDur(x);
			} else {
				strcpy(&DAT_101283d5, x->_iIName);
				PrintItemDetails(x);
			}
		}
	}
	return cVar5;
}

void RemoveScroll(int pnum)

{
	uint uVar1;
	int iVar2;
	int iVar4;
	ulonglong uVar3;
	PlayerStruct *pPVar5;
	int iv;
	PlayerStruct *pPVar6;
	longlong lVar7;

	iVar4 = pnum * 0x55ec;
	pPVar6 = (PlayerStruct *)((int)plr + iVar4);
	uVar1 = *(uint *)((int)plr + iVar4 + 0x4828);
	uVar3 = (ulonglong)uVar1;
	iVar4 = *(int *)((int)plr + iVar4 + 0xa4);
	iv = 0;
	pPVar5 = pPVar6;
	if (0 < (int)uVar1) {
		do {
			if ((pPVar5->InvList[0]._iPLGetHit != -1) && (((iVar2 = *(int *)(pPVar5->InvList[1]._iIName + 0xf), iVar2 == 0x15 || (iVar2 == 0x16)) && (*(int *)(pPVar5->InvList[1]._iIName + 0x13) == iVar4)))) {
				RemoveInvItem(pnum, iv);
				CalcPlrScrolls(pnum);
				return;
			}
			pPVar5 = (PlayerStruct *)&pPVar5->_pDexterity;
			iv = iv + 1;
			uVar3 = uVar3 - 1;
		} while (uVar3 != 0);
	}
	lVar7 = 8;
	iv = 0;
	while (((pPVar6->SpdList[0]._iPLGetHit == -1 || ((iVar2 = *(int *)(pPVar6->SpdList[1]._iIName + 0xf), iVar2 != 0x15 && (iVar2 != 0x16)))) || (*(int *)(pPVar6->SpdList[1]._iIName + 0x13) != iVar4))) {
		pPVar6 = (PlayerStruct *)&pPVar6->_pDexterity;
		iv = iv + 1;
		lVar7 = lVar7 + -1;
		if (lVar7 == 0) {
			return;
		}
	}
	RemoveSpdBarItem(pnum, iv);
	CalcPlrScrolls(pnum);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL UseScroll(void)

{
	uint uVar1;
	int iVar2;
	int iVar4;
	ulonglong uVar3;
	PlayerStruct *pPVar5;
	PlayerStruct *pPVar6;
	longlong lVar7;

	if (_DAT_1012861c != 1) {
		return 0;
	}
	if ((leveltype == '\0') && (*(int *)(*(int *)((int)plr + myplr * 0x55ec + 0xb4) * 0x38 + 0x1010efb8) == 0)) {
		return 0;
	}
	iVar4 = myplr * 0x55ec;
	pPVar6 = (PlayerStruct *)((int)plr + iVar4);
	uVar1 = *(uint *)((int)plr + iVar4 + 0x4828);
	uVar3 = (ulonglong)uVar1;
	iVar4 = *(int *)((int)plr + iVar4 + 0xb4);
	pPVar5 = pPVar6;
	if (0 < (int)uVar1) {
		do {
			if ((pPVar5->InvList[0]._iPLGetHit != -1) && (((iVar2 = *(int *)(pPVar5->InvList[1]._iIName + 0xf), iVar2 == 0x15 || (iVar2 == 0x16)) && (*(int *)(pPVar5->InvList[1]._iIName + 0x13) == iVar4)))) {
				return 1;
			}
			pPVar5 = (PlayerStruct *)&pPVar5->_pDexterity;
			uVar3 = uVar3 - 1;
		} while (uVar3 != 0);
	}
	lVar7 = 2;
	while (true) {
		if (((pPVar6->SpdList[0]._iPLGetHit != -1) && ((iVar2 = *(int *)(pPVar6->SpdList[1]._iIName + 0xf), iVar2 == 0x15 || (iVar2 == 0x16)))) && (*(int *)(pPVar6->SpdList[1]._iIName + 0x13) == iVar4)) {
			return 1;
		}
		if (((pPVar6->SpdList[1]._iPLGetHit != -1) && ((iVar2 = *(int *)(pPVar6->SpdList[2]._iIName + 0xf), iVar2 == 0x15 || (iVar2 == 0x16)))) && (*(int *)(pPVar6->SpdList[2]._iIName + 0x13) == iVar4)) {
			return 1;
		}
		if ((pPVar6->SpdList[2]._iPLGetHit != -1) && (((iVar2 = *(int *)(pPVar6->SpdList[3]._iIName + 0xf), iVar2 == 0x15 || (iVar2 == 0x16)) && (*(int *)(pPVar6->SpdList[3]._iIName + 0x13) == iVar4)))) {
			return 1;
		}
		if ((pPVar6->SpdList[3]._iPLGetHit != -1) && (((iVar2 = *(int *)(pPVar6->SpdList[4]._iIName + 0xf), iVar2 == 0x15 || (iVar2 == 0x16)) && (*(int *)(pPVar6->SpdList[4]._iIName + 0x13) == iVar4))))
			break;
		pPVar6 = (PlayerStruct *)&pPVar6->InvBody[1]._iFlags;
		lVar7 = lVar7 + -1;
		if (lVar7 == 0) {
			return 0;
		}
	}
	return 1;
}

void UseStaffCharge(int pnum)

{
	int *piVar1;
	int iVar2;

	iVar2 = pnum * 0x55ec;
	if (((*(int *)((int)plr + iVar2 + 0xa60) != -1) && (*(int *)((int)plr + iVar2 + 0xb34) == 0x17)) && (*(int *)((int)plr + iVar2 + 0xb38) == *(int *)((int)plr + iVar2 + 0xb4))) {
		piVar1 = (int *)((int)plr + iVar2 + 0xb3c);
		iVar2 = *piVar1;
		if (0 < iVar2) {
			*piVar1 = iVar2 + -1;
			CalcPlrStaff(pnum);
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL UseStaff(void)

{
	int iVar1;

	if (_DAT_1012861c != 1) {
		return 0;
	}
	iVar1 = myplr * 0x55ec;
	if ((((*(int *)((int)plr + iVar1 + 0xa60) != -1) && (*(int *)((int)plr + iVar1 + 0xb34) == 0x17)) && (*(int *)((int)plr + iVar1 + 0xb38) == *(int *)((int)plr + iVar1 + 0xb4))) && (0 < *(int *)((int)plr + iVar1 + 0xb3c))) {
		return 1;
	}
	return 0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void StartGoldDrop(void)

{
	_DAT_101282c4 = (int)DAT_101285f5;
	if (_DAT_101282c4 < 0x2f) {
		_DAT_101282c8 = *(undefined4 *)((int)plr + myplr * 0x55ec + (int)DAT_101285f5 * 0x170 + 0x55c);
	} else {
		_DAT_101282c8 = *(undefined4 *)((int)plr + myplr * 0x55ec + (int)DAT_101285f5 * 0x170 + 0x588);
	}
	_DAT_10128178 = 1;
	_DAT_101282cc = 0;
	if (_DAT_10128154 != 0) {
		control_reset_talk();
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL UseInvItem(int pnum, int cii)

{
	char cVar1;
	int iVar2;
	bool bVar3;
	BOOL BVar4;
	int iVar5;
	int iVar6;

	iVar6 = pnum * 0x55ec;
	if (((*(char *)((int)plr + iVar6 + 0x139) == '\0') || (*(int *)((int)plr + iVar6 + 0x194) != 0)) || (pnum != myplr)) {
		if (_DAT_1012861c == 1) {
			if (stextflag == '\0') {
				if (cii < 6) {
					BVar4 = 0;
				} else {
					if (cii < 0x2f) {
						cii = cii + -7;
						iVar5 = iVar6 + cii * 0x170 + 0xea8;
						bVar3 = false;
					} else {
						if (_DAT_10128154 != 0) {
							return 1;
						}
						cii = cii + -0x2f;
						iVar5 = iVar6 + cii * 0x170 + 0x4854;
						bVar3 = true;
					}
					iVar2 = *(int *)((int)&plr[0]._pMagic + iVar5);
					if (iVar2 != 0x12) {
						if (iVar2 < 0x12) {
							if (0x10 < iVar2) {
								cVar1 = *(char *)((int)plr + iVar6 + 0x15c);
								if (cVar1 == '\0') {
									_DAT_1012d920 = 0x32f;
								} else {
									if (cVar1 == '\x01') {
										_DAT_1012d920 = 0x2c2;
									} else {
										if (cVar1 == '\x02') {
											_DAT_1012d920 = 0x25b;
										}
									}
								}
								_DAT_1012d924 = 10;
								return 1;
							}
						} else {
							if (iVar2 < 0x14) {
								PlaySFX(0x2f);
								cVar1 = *(char *)((int)plr + iVar6 + 0x15c);
								if (cVar1 == '\0') {
									_DAT_1012d920 = 0x2ec;
								} else {
									if (cVar1 == '\x01') {
										_DAT_1012d920 = 0x27f;
									} else {
										if (cVar1 == '\x02') {
											_DAT_1012d920 = 0x218;
										}
									}
								}
								_DAT_1012d924 = 10;
								return 1;
							}
						}
					}
					if (AllItemsList[iVar2].iUsable == 0) {
						BVar4 = 0;
					} else {
						if (*(int *)((int)&plr[0]._pBaseStr + iVar5) == 0) {
							cVar1 = *(char *)((int)plr + iVar6 + 0x15c);
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
							BVar4 = 1;
						} else {
							if ((*(int *)(plr[0]._pSplLvl + iVar5 + 0x1b) == 0) && (*(int *)(plr[0].walkpath + iVar5 + 4) == 0xb)) {
								StartGoldDrop();
								BVar4 = 1;
							} else {
								if (_DAT_10128178 != 0) {
									_DAT_10128178 = 0;
									_DAT_101282cc = 0;
								}
								iVar2 = *(int *)(plr[0]._pSplLvl + iVar5 + 0x1b);
								if (((iVar2 == 0x15) && (currlevel == 0)) && (*(int *)(*(int *)(plr[0]._pSplLvl + iVar5 + 0x1f) * 0x38 + 0x1010efb8) == 0)) {
									BVar4 = 1;
								} else {
									if (((iVar2 == 0x16) && (currlevel == 0)) && (*(int *)(*(int *)(plr[0]._pSplLvl + iVar5 + 0x1f) * 0x38 + 0x1010efb8) == 0)) {
										BVar4 = 1;
									} else {
										if (iVar2 == 0x18) {
											PlaySFX(0x41);
										} else {
											if (pnum == myplr) {
												PlaySFX(*(int *)(&DAT_10103848 + (uint)(byte)(&DAT_10103660)[*(int *)(&plr[0]._pSBkSplType + iVar5)] * 4));
											}
										}
										UseItem(pnum, *(int *)(plr[0]._pSplLvl + iVar5 + 0x1b),
										    *(int *)(plr[0]._pSplLvl + iVar5 + 0x1f));
										if (bVar3) {
											RemoveSpdBarItem(pnum, cii);
										} else {
											if (*(int *)((int)plr + iVar6 + cii * 0x170 + 0xf84) == 0x2a) {
												return 1;
											}
											RemoveInvItem(pnum, cii);
										}
										BVar4 = 1;
									}
								}
							}
						}
					}
				}
			} else {
				BVar4 = 1;
			}
		} else {
			BVar4 = 1;
		}
	} else {
		BVar4 = 1;
	}
	return BVar4;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void DoTelekinesis(void)

{
	BYTE mast;
	int iVar1;
	BOOL BVar2;

	iVar1 = 0x100f8fd0;
	if (DAT_101285f7 != -1) {
		iVar1 = 0x100f8fd0;
		NetSendCmdParam1(1, '\x1b', (short)DAT_101285f7);
	}
	if (**(BYTE **)(iVar1 + -0x7748) != -1) {
		mast = (BYTE) * *(undefined4 **)(iVar1 + -0x77ac);
		NetSendCmdGItem(1, '(', mast, mast, **(BYTE **)(iVar1 + -0x7748));
	}
	if (((_DAT_101285f8 != -1) && (BVar2 = M_Talker(_DAT_101285f8), BVar2 == 0)) && (*(int *)(*(int *)(iVar1 + -0x7754) + _DAT_101285f8 * 0xe8 + 0xd4) == 0)) {
		NetSendCmdParam1(1, '\x1c', (WORD)_DAT_101285f8);
	}
	NewCursor(1);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int CalculateGold(int pnum)

{
	uint uVar1;
	ulonglong uVar2;
	int iVar3;
	PlayerStruct *pPVar4;

	pnum = pnum * 0x55ec;
	pPVar4 = (PlayerStruct *)((int)plr + pnum);
	iVar3 = 0;
	if (*(int *)((int)plr + pnum + 0x485c) == 0xb) {
		iVar3 = *(int *)((int)plr + pnum + 0x4918);
		_drawpanflag = 0xff;
	}
	if (*(int *)((int)plr + pnum + 0x49cc) == 0xb) {
		_drawpanflag = 0xff;
		iVar3 = iVar3 + *(int *)((int)plr + pnum + 0x4a88);
	}
	if (*(int *)((int)plr + pnum + 0x4b3c) == 0xb) {
		_drawpanflag = 0xff;
		iVar3 = iVar3 + *(int *)((int)plr + pnum + 0x4bf8);
	}
	if (*(int *)((int)plr + pnum + 0x4cac) == 0xb) {
		_drawpanflag = 0xff;
		iVar3 = iVar3 + *(int *)((int)plr + pnum + 0x4d68);
	}
	if (*(int *)((int)plr + pnum + 0x4e1c) == 0xb) {
		_drawpanflag = 0xff;
		iVar3 = iVar3 + *(int *)((int)plr + pnum + 0x4ed8);
	}
	if (*(int *)((int)plr + pnum + 0x4f8c) == 0xb) {
		_drawpanflag = 0xff;
		iVar3 = iVar3 + *(int *)((int)plr + pnum + 0x5048);
	}
	if (*(int *)((int)plr + pnum + 0x50fc) == 0xb) {
		_drawpanflag = 0xff;
		iVar3 = iVar3 + *(int *)((int)plr + pnum + 0x51b8);
	}
	if (*(int *)((int)plr + pnum + 0x526c) == 0xb) {
		_drawpanflag = 0xff;
		iVar3 = iVar3 + *(int *)((int)plr + pnum + 0x5328);
	}
	uVar1 = *(uint *)((int)plr + pnum + 0x4828);
	uVar2 = (ulonglong)uVar1;
	if ((int)uVar1 < 1) {
		return iVar3;
	}
	do {
		if (pPVar4->InvList[0]._iPLGetHit == 0xb) {
			iVar3 = iVar3 + *(int *)(pPVar4->InvList[1]._iName + 0x37);
		}
		pPVar4 = (PlayerStruct *)&pPVar4->_pDexterity;
		uVar2 = uVar2 - 1;
	} while (uVar2 != 0);
	return iVar3;
}

// WARNING: Unknown calling convention yet parameter storage is locked

BOOL DropItemBeforeTrig(void)

{
	int iVar1;
	BOOL BVar2;

	iVar1 = 0x100f8fd0;
	BVar2 = TryInvPut();
	if (BVar2 != 0) {
		NetSendCmdPItem(1, '\n', (BYTE) * *(undefined4 **)(iVar1 + -0x7658), (BYTE) * *(undefined4 **)(iVar1 + -0x765c));
		NewCursor(1);
	}
	return (BOOL)(uint)(BVar2 != 0);
}