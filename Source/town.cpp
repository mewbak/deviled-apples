
void town_clear_upper_buf(BYTE *pBuff)

{
	longlong lVar1;
	int iVar2;
	int iVar3;
	longlong lVar4;

	lVar4 = 4;
	iVar2 = 0x1e;
	do {
		if (pBuff < _DAT_1019fd84) {
			return;
		}
		pBuff = pBuff + iVar2;
		lVar1 = lVar4;
		do {
			lVar1 = lVar1 + -1;
			*pBuff = '\0';
			pBuff = pBuff + 1;
		} while (lVar1 != 0);
		lVar4 = lVar4 + 4;
		iVar3 = iVar2 + -2;
		pBuff = pBuff + iVar2 + -0x340;
		iVar2 = iVar3;
	} while (iVar3 != 0);
	lVar4 = 0x3c;
	iVar2 = 2;
	do {
		if (pBuff < _DAT_1019fd84) {
			return;
		}
		pBuff = pBuff + iVar2;
		lVar1 = lVar4;
		do {
			lVar1 = lVar1 + -1;
			*pBuff = '\0';
			pBuff = pBuff + 1;
		} while (lVar1 != 0);
		iVar3 = iVar2 + 2;
		pBuff = pBuff + iVar2 + -0x340;
		lVar4 = lVar4 + -4;
		iVar2 = iVar3;
	} while (iVar3 != 0x20);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void town_clear_low_buf(BYTE *pBuff)

{
	longlong lVar1;
	int iVar2;
	longlong lVar3;

	iVar2 = 0x1e;
	lVar3 = 4;
	do {
		if (pBuff < _DAT_1019fd84) {
			pBuff = pBuff + iVar2;
			lVar1 = lVar3;
			do {
				lVar1 = lVar1 + -1;
				*pBuff = '\0';
				pBuff = pBuff + 1;
			} while (lVar1 != 0);
			pBuff = pBuff + iVar2;
		} else {
			pBuff = pBuff + 0x40;
		}
		iVar2 = iVar2 + -2;
		lVar3 = lVar3 + 4;
		pBuff = pBuff + -0x340;
	} while (iVar2 != 0);
	iVar2 = 2;
	lVar3 = 0x3c;
	do {
		if (pBuff < _DAT_1019fd84) {
			pBuff = pBuff + iVar2;
			lVar1 = lVar3;
			do {
				lVar1 = lVar1 + -1;
				*pBuff = '\0';
				pBuff = pBuff + 1;
			} while (lVar1 != 0);
			pBuff = pBuff + iVar2;
		} else {
			pBuff = pBuff + 0x40;
		}
		iVar2 = iVar2 + 2;
		lVar3 = lVar3 + -4;
		pBuff = pBuff + -0x340;
	} while (iVar2 != 0x20);
	return;
}

void town_special_lower(BYTE *pBuff, int nCel)

{
	return;
}

void town_special_upper(BYTE *pBuff, int nCel)

{
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void town_draw_clipped_e_flag(BYTE *pBuff, int x, int y, int sx, int sy)

{
	int iVar1;
	int iVar2;
	int iVar3;
	BYTE *pBuff_00;
	ushort *puVar4;

	iVar1 = 0x100f8fd0;
	iVar2 = IsometricCoord(x, y);
	iVar3 = 0;
	puVar4 = (ushort *)(**(int **)(iVar1 + -0x7584) + iVar2 * 0x20);
	pBuff_00 = pBuff;
	do {
		_level_cel_block = (uint)*puVar4;
		if (*puVar4 != 0) {
			drawLowerScreen(pBuff_00);
		}
		_level_cel_block = (uint)puVar4[1];
		if (puVar4[1] != 0) {
			drawLowerScreen(pBuff_00 + 0x20);
		}
		iVar3 = iVar3 + 2;
		puVar4 = puVar4 + 2;
		pBuff_00 = pBuff_00 + -0x6000;
	} while (iVar3 < 0xc);
	town_draw_clipped_town(pBuff, x, y, sx, sy, 0);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void town_draw_clipped_town(BYTE *pBuff, int sx, int sy, int dx, int dy, int eflag)

{
	short sVar1;
	int iVar2;
	int iVar3;
	char cVar4;
	int sx_00;
	int sx_01;
	int iVar5;
	BYTE *pBuff_00;

	iVar3 = 0x100f8fd0;
	iVar5 = sx * 0x70;
	cVar4 = *(char *)(_DAT_1012f1a8 + iVar5 + sy);
	pBuff_00 = (BYTE *)(_DAT_101271e4 + *(int *)(&DAT_1019ed80 + dy * 4) + dx);
	if (cVar4 != '\0') {
		cVar4 = cVar4 + -1;
		iVar2 = (int)cVar4 * 0x170;
		sx_00 = dx - *(int *)(iVar2 + 0x1013d9b0);
		iVar3 = 0x100f8fd0;
		if (cVar4 == DAT_101285f6) {
			iVar3 = 0x100f8fd0;
			thunk_CelDrawHdrClrHL(-0x4b, sx_00, dy, *(BYTE **)(iVar2 + 0x1013d9a0), *(int *)(iVar2 + 0x1013d9a8),
			    *(int *)(iVar2 + 0x1013d9ac), 0, 8);
		}
		thunk_Cel2DrawHdrOnly(sx_00, dy, *(BYTE **)(iVar2 + 0x1013d9a0), *(int *)(iVar2 + 0x1013d9a8),
		    *(int *)(iVar2 + 0x1013d9ac), 0, 8);
	}
	if ((*(byte *)(_DAT_1012f1bc + iVar5 + sy) & 0x10) != 0) {
		iVar2 = (int)*(short *)(_DAT_1012f1b4 + sx * 0xe0 + sy * 2 + -2) + 1;
		sx_00 = iVar2 * -0x10c;
		sx_01 = dx - *(int *)(sx_00 + 0x101aba08);
		if (-iVar2 == _DAT_101285f8) {
			CelDrawHdrClrHL(-0x5a, sx_01, dy, *(BYTE **)(sx_00 + 0x101ab9e8), *(int *)(sx_00 + 0x101ab9f8),
			    *(int *)(sx_00 + 0x101aba04), 0, 8);
		}
		Cel2DrawHdrOnly(sx_01, dy, *(BYTE **)(sx_00 + 0x101ab9e8), *(int *)(sx_00 + 0x101ab9f8),
		    *(int *)(sx_00 + 0x101aba04), 0, 8);
	}
	sVar1 = *(short *)(_DAT_1012f1b4 + sx * 0xe0 + sy * 2);
	if (0 < sVar1) {
		sx_00 = (int)sVar1 + -1;
		iVar2 = sx_00 * 0x10c;
		sx_01 = dx - *(int *)(iVar2 + 0x101aba08);
		if (sx_00 == _DAT_101285f8) {
			CelDrawHdrClrHL(-0x5a, sx_01, dy, *(BYTE **)(iVar2 + 0x101ab9e8), *(int *)(iVar2 + 0x101ab9f8),
			    *(int *)(iVar2 + 0x101aba04), 0, 8);
		}
		Cel2DrawHdrOnly(sx_01, dy, *(BYTE **)(iVar2 + 0x101ab9e8), *(int *)(iVar2 + 0x101ab9f8),
		    *(int *)(iVar2 + 0x101aba04), 0, 8);
	}
	if ((*(byte *)(_DAT_1012f1bc + iVar5 + sy) & 0x20) != 0) {
		cVar4 = -(*(char *)(_DAT_1012f1b8 + iVar5 + sy + -1) + '\x01');
		iVar2 = (int)cVar4 * 0x55ec;
		sx_01 = dy + *(int *)((int)plr + iVar2 + 100);
		sx_00 = (dx + *(int *)((int)plr + iVar2 + 0x60)) - *(int *)((int)plr + iVar2 + 0x94);
		if (cVar4 == DAT_101285f4) {
			Cl2DecodeClrHL(-0x5b, sx_00, sx_01, *(BYTE **)((int)plr + iVar2 + 0x7c),
			    *(int *)((int)plr + iVar2 + 0x8c), *(int *)((int)plr + iVar2 + 0x90), 0, 8);
		}
		Cl2DecodeFrm4(sx_00, sx_01, *(BYTE **)((int)plr + iVar2 + 0x7c), *(int *)((int)plr + iVar2 + 0x8c),
		    *(int *)((int)plr + iVar2 + 0x90), 0, 8);
		if (eflag != 0) {
			if (*(int *)((int)plr + iVar2 + 0x98) != 0) {
				town_draw_clipped_e_flag(pBuff_00 + -0x40, sx + -1, sy + 1, dx + -0x40, dy);
			}
		}
	}
	if ((*(byte *)(_DAT_1012f1bc + iVar5 + sy) & 4) != 0) {
		DrawDeadPlayer(sx, sy, dx, dy, 0, 8, 1);
	}
	cVar4 = *(char *)(_DAT_1012f1b8 + iVar5 + sy);
	if ('\0' < cVar4) {
		cVar4 = cVar4 + -1;
		iVar2 = (int)cVar4 * 0x55ec;
		sx_01 = dy + *(int *)((int)plr + iVar2 + 100);
		sx_00 = (dx + *(int *)((int)plr + iVar2 + 0x60)) - *(int *)((int)plr + iVar2 + 0x94);
		if (cVar4 == DAT_101285f4) {
			Cl2DecodeClrHL(-0x5b, sx_00, sx_01, *(BYTE **)((int)plr + iVar2 + 0x7c),
			    *(int *)((int)plr + iVar2 + 0x8c), *(int *)((int)plr + iVar2 + 0x90), 0, 8);
		}
		Cl2DecodeFrm4(sx_00, sx_01, *(BYTE **)((int)plr + iVar2 + 0x7c), *(int *)((int)plr + iVar2 + 0x8c),
		    *(int *)((int)plr + iVar2 + 0x90), 0, 8);
		if (eflag != 0) {
			if (*(int *)((int)plr + iVar2 + 0x98) != 0) {
				town_draw_clipped_e_flag(pBuff_00 + -0x40, sx + -1, sy + 1, dx + -0x40, dy);
			}
		}
	}
	if ((*(byte *)(_DAT_1012f1bc + iVar5 + sy) & 1) != 0) {
		DrawClippedMissile(sx, sy, dx, dy, 0, 8, 0);
	}
	cVar4 = *(char *)(**(int **)(iVar3 + -0x7598) + iVar5 + sy);
	if (cVar4 != '\0') {
		town_special_lower(pBuff_00, (int)cVar4);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void town_draw_lower(int x, int y, int sx, int sy, int chunks, int eflag)

{
	short sVar1;
	int iVar2;
	int iVar3;
	BYTE *pBuff;
	ushort *puVar4;
	int iVar5;
	int iVar6;
	int *piVar7;
	int iVar8;

	if (eflag != 0) {
		if ((((y < 0) || (0x6f < y)) || (x < 0)) || (0x6f < x)) {
			town_clear_low_buf((BYTE *)(_DAT_101271e4 + *(int *)(&DAT_1019ed80 + sy * 4) + sx));
		} else {
			sVar1 = *(short *)(_DAT_1012f1d4 + x * 0xe0 + y * 2);
			_level_cel_block = SEXT24(sVar1);
			if (((longlong)sVar1 & 0xffffffffU) == 0) {
				town_clear_low_buf((BYTE *)(_DAT_101271e4 + *(int *)(&DAT_1019ed80 + sy * 4) + sx));
			} else {
				pBuff = (BYTE *)(_DAT_101271e4 + *(int *)(&DAT_1019ed80 + sy * 4) + sx + 0x20);
				iVar2 = IsometricCoord(x, y);
				iVar6 = 1;
				puVar4 = (ushort *)(_DAT_1012f1cc + iVar2 * 0x20 + 2);
				do {
					_level_cel_block = (uint)*puVar4;
					if (*puVar4 != 0) {
						drawLowerScreen(pBuff);
					}
					iVar6 = iVar6 + 2;
					puVar4 = puVar4 + 2;
					pBuff = pBuff + -0x6000;
				} while (iVar6 < 0x11);
				town_draw_clipped_town((BYTE *)(_DAT_101271e4 + *(int *)(&DAT_1019ed80 + sy * 4) + sx), x, y, sx, sy, 0);
			}
		}
		x = x + 1;
		y = y + -1;
		sx = sx + 0x40;
	}
	iVar6 = x * 0xe0;
	piVar7 = (int *)(&DAT_1019ed80 + sy * 4);
	iVar2 = y << 1;
	iVar8 = 0;
	while (iVar8 < chunks - eflag) {
		if (((y < 0) || (0x6f < y)) || ((x < 0 || (0x6f < x)))) {
			town_clear_low_buf((BYTE *)(_DAT_101271e4 + *piVar7 + sx));
		} else {
			_level_cel_block = SEXT24(*(short *)(_DAT_1012f1d4 + iVar6 + iVar2));
			if (_level_cel_block == 0) {
				town_clear_low_buf((BYTE *)(_DAT_101271e4 + *piVar7 + sx));
			} else {
				pBuff = (BYTE *)(_DAT_101271e4 + *piVar7 + sx);
				iVar3 = IsometricCoord(x, y);
				iVar5 = 0;
				puVar4 = (ushort *)(_DAT_1012f1cc + iVar3 * 0x20);
				do {
					_level_cel_block = (uint)*puVar4;
					if (*puVar4 != 0) {
						drawLowerScreen(pBuff);
					}
					_level_cel_block = (uint)puVar4[1];
					if (puVar4[1] != 0) {
						drawLowerScreen(pBuff + 0x20);
					}
					iVar5 = iVar5 + 2;
					puVar4 = puVar4 + 2;
					pBuff = pBuff + -0x6000;
				} while (iVar5 < 0x10);
				town_draw_clipped_town((BYTE *)(_DAT_101271e4 + *piVar7 + sx), x, y, sx, sy, 1);
			}
		}
		iVar6 = iVar6 + 0xe0;
		x = x + 1;
		iVar2 = iVar2 + -2;
		y = y + -1;
		sx = sx + 0x40;
		iVar8 = iVar8 + 1;
	}
	if (eflag != 0) {
		if (((y < 0) || (0x6f < y)) || ((x < 0 || (0x6f < x)))) {
			town_clear_low_buf((BYTE *)(_DAT_101271e4 + *piVar7 + sx));
		} else {
			_level_cel_block = SEXT24(*(short *)(_DAT_1012f1d4 + x * 0xe0 + y * 2));
			if (_level_cel_block == 0) {
				town_clear_low_buf((BYTE *)(_DAT_101271e4 + *piVar7 + sx));
			} else {
				pBuff = (BYTE *)(_DAT_101271e4 + *piVar7 + sx);
				iVar2 = IsometricCoord(x, y);
				iVar6 = 0;
				puVar4 = (ushort *)(_DAT_1012f1cc + iVar2 * 0x20);
				do {
					_level_cel_block = (uint)*puVar4;
					if (*puVar4 != 0) {
						drawLowerScreen(pBuff);
					}
					iVar6 = iVar6 + 2;
					puVar4 = puVar4 + 2;
					pBuff = pBuff + -0x6000;
				} while (iVar6 < 0x10);
				town_draw_clipped_town((BYTE *)(_DAT_101271e4 + *piVar7 + sx), x, y, sx, sy, 0);
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void town_draw_clipped_e_flag_2(BYTE *pBuff, int x, int y, int skipChunks, int CelSkip, int sx, int sy)

{
	int iVar1;
	int iVar2;
	int iVar3;
	longlong lVar4;

	lVar4 = (longlong)(int)pBuff;
	iVar1 = 0x100f8fd0;
	if ((longlong)skipChunks != 0) {
		lVar4 = lVar4 + (longlong)skipChunks * 0x6000;
	}
	iVar2 = IsometricCoord(x, y);
	iVar3 = 0;
	iVar1 = **(int **)(iVar1 + -0x7584) + iVar2 * 0x20;
	do {
		if (skipChunks <= iVar3) {
			_level_cel_block = (uint) * (ushort *)(iVar1 + 4);
			if (*(ushort *)(iVar1 + 4) != 0) {
				drawLowerScreen((BYTE *)lVar4);
			}
			_level_cel_block = (uint) * (ushort *)(iVar1 + 6);
			if (*(ushort *)(iVar1 + 6) != 0) {
				drawLowerScreen((BYTE *)lVar4 + 0x20);
			}
		}
		iVar3 = iVar3 + 1;
		iVar1 = iVar1 + 4;
		lVar4 = lVar4 + -0x6000;
	} while (iVar3 < 6);
	if (CelSkip < 8) {
		town_draw_clipped_town_2(pBuff, x, y, skipChunks, CelSkip, sx, sy, 0);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void town_draw_clipped_town_2(BYTE *pBuff, int sx, int sy, int skipChunks, int CelSkip, int dx, int dy, int eflag)

{
	short sVar1;
	int iVar2;
	char cVar3;
	int sx_00;
	int sx_01;
	undefined *puVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar2 = 0x100f8fd0;
	iVar7 = sx * 0x70;
	puVar4 = &DAT_1013d988;
	cVar3 = *(char *)(_DAT_1012f1a8 + iVar7 + sy);
	if (cVar3 != '\0') {
		cVar3 = cVar3 + -1;
		iVar5 = (int)cVar3 * 0x170;
		sx_00 = dx - *(int *)(iVar5 + 0x1013d9b0);
		iVar2 = 0x100f8fd0;
		if (cVar3 == DAT_101285f6) {
			iVar2 = 0x100f8fd0;
			puVar4 = &DAT_1013d988;
			thunk_CelDrawHdrClrHL(-0x4b, sx_00, dy, *(BYTE **)(iVar5 + 0x1013d9a0), *(int *)(iVar5 + 0x1013d9a8),
			    *(int *)(iVar5 + 0x1013d9ac), CelSkip, 8);
		}
		puVar4 = puVar4 + iVar5;
		thunk_Cel2DrawHdrOnly(sx_00, dy, *(BYTE **)(puVar4 + 0x18), *(int *)(puVar4 + 0x20), *(int *)(puVar4 + 0x24),
		    CelSkip, 8);
	}
	if ((*(byte *)(_DAT_1012f1bc + iVar7 + sy) & 0x10) != 0) {
		iVar5 = (int)*(short *)(_DAT_1012f1b4 + sx * 0xe0 + sy * 2 + -2) + 1;
		sx_00 = iVar5 * -0x10c;
		sx_01 = dx - *(int *)(sx_00 + 0x101aba08);
		if (-iVar5 == _DAT_101285f8) {
			CelDrawHdrClrHL(-0x5a, sx_01, dy, *(BYTE **)(sx_00 + 0x101ab9e8), *(int *)(sx_00 + 0x101ab9f8),
			    *(int *)(sx_00 + 0x101aba04), CelSkip, 8);
		}
		Cel2DrawHdrOnly(sx_01, dy, *(BYTE **)(sx_00 + 0x101ab9e8), *(int *)(sx_00 + 0x101ab9f8),
		    *(int *)(sx_00 + 0x101aba04), CelSkip, 8);
	}
	sVar1 = *(short *)(_DAT_1012f1b4 + sx * 0xe0 + sy * 2);
	if (0 < sVar1) {
		sx_00 = (int)sVar1 + -1;
		iVar5 = sx_00 * 0x10c;
		sx_01 = dx - *(int *)(iVar5 + 0x101aba08);
		if (sx_00 == _DAT_101285f8) {
			CelDrawHdrClrHL(-0x5a, sx_01, dy, *(BYTE **)(iVar5 + 0x101ab9e8), *(int *)(iVar5 + 0x101ab9f8),
			    *(int *)(iVar5 + 0x101aba04), CelSkip, 8);
		}
		Cel2DrawHdrOnly(sx_01, dy, *(BYTE **)(iVar5 + 0x101ab9e8), *(int *)(iVar5 + 0x101ab9f8),
		    *(int *)(iVar5 + 0x101aba04), CelSkip, 8);
	}
	if ((*(byte *)(_DAT_1012f1bc + iVar7 + sy) & 0x20) != 0) {
		cVar3 = -(*(char *)(_DAT_1012f1b8 + iVar7 + sy + -1) + '\x01');
		iVar5 = (int)cVar3 * 0x55ec;
		sx_01 = dy + *(int *)((int)plr + iVar5 + 100);
		sx_00 = (dx + *(int *)((int)plr + iVar5 + 0x60)) - *(int *)((int)plr + iVar5 + 0x94);
		if (cVar3 == DAT_101285f4) {
			Cl2DecodeClrHL(-0x5b, sx_00, sx_01, *(BYTE **)((int)plr + iVar5 + 0x7c),
			    *(int *)((int)plr + iVar5 + 0x8c), *(int *)((int)plr + iVar5 + 0x90), CelSkip, 8);
		}
		iVar6 = (int)&plr[0]._pmode + iVar5;
		Cl2DecodeFrm4(sx_00, sx_01, *(BYTE **)((int)&plr[0]._pAnimData + iVar5),
		    *(int *)((int)&plr[0]._pAnimFrame + iVar5),
		    *(int *)((int)&plr[0]._pAnimWidth + iVar5), CelSkip, 8);
		if (eflag != 0) {
			if (*(int *)(iVar6 + 0x98) != 0) {
				town_draw_clipped_e_flag_2(pBuff + -0x40, sx + -1, sy + 1, skipChunks, CelSkip, dx + -0x40, dy);
			}
		}
	}
	if ((*(byte *)(_DAT_1012f1bc + iVar7 + sy) & 4) != 0) {
		DrawDeadPlayer(sx, sy, dx, dy, CelSkip, 8, 1);
	}
	cVar3 = *(char *)(_DAT_1012f1b8 + iVar7 + sy);
	if ('\0' < cVar3) {
		cVar3 = cVar3 + -1;
		iVar5 = (int)cVar3 * 0x55ec;
		sx_01 = dy + *(int *)((int)plr + iVar5 + 100);
		sx_00 = (dx + *(int *)((int)plr + iVar5 + 0x60)) - *(int *)((int)plr + iVar5 + 0x94);
		if (cVar3 == DAT_101285f4) {
			Cl2DecodeClrHL(-0x5b, sx_00, sx_01, *(BYTE **)((int)plr + iVar5 + 0x7c),
			    *(int *)((int)plr + iVar5 + 0x8c), *(int *)((int)plr + iVar5 + 0x90), CelSkip, 8);
		}
		iVar6 = (int)&plr[0]._pmode + iVar5;
		Cl2DecodeFrm4(sx_00, sx_01, *(BYTE **)((int)&plr[0]._pAnimData + iVar5),
		    *(int *)((int)&plr[0]._pAnimFrame + iVar5),
		    *(int *)((int)&plr[0]._pAnimWidth + iVar5), CelSkip, 8);
		if (eflag != 0) {
			if (*(int *)(iVar6 + 0x98) != 0) {
				town_draw_clipped_e_flag_2(pBuff + -0x40, sx + -1, sy + 1, skipChunks, CelSkip, dx + -0x40, dy);
			}
		}
	}
	if ((*(byte *)(_DAT_1012f1bc + iVar7 + sy) & 1) != 0) {
		DrawClippedMissile(sx, sy, dx, dy, CelSkip, 8, 0);
	}
	cVar3 = *(char *)(**(int **)(iVar2 + -0x7598) + iVar7 + sy);
	if (cVar3 != '\0') {
		town_special_lower(pBuff + *(int *)(*(int *)(iVar2 + -0x7698) + CelSkip * 0x40), (int)cVar3);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void town_draw_lower_2(int x, int y, int sx, int sy, int chunks, int skipChunks, int eflag)

{
	short sVar1;
	int CelSkip;
	int iVar2;
	int iVar3;
	ulonglong uVar4;
	int *piVar5;
	int iVar6;
	int iVar7;
	int *piVar8;
	int iVar9;
	BYTE *pBuff;
	int iStack00000030;

	uVar4 = ZEXT48(&DAT_1012f1cc);
	CelSkip = (skipChunks + 1) * 2;
	iStack00000030 = eflag;
	if (eflag != 0) {
		if ((((y < 0) || (0x6f < y)) || (x < 0)) || (0x6f < x)) {
			iStack00000030 = eflag;
			town_clear_low_buf((BYTE *)(_DAT_101271e4 + *(int *)(&DAT_1019ed80 + sy * 4) + sx));
		} else {
			sVar1 = *(short *)(_DAT_1012f1d4 + x * 0xe0 + y * 2);
			_level_cel_block = SEXT24(sVar1);
			if (((longlong)sVar1 & 0xffffffffU) == 0) {
				iStack00000030 = eflag;
				town_clear_low_buf((BYTE *)(_DAT_101271e4 + *(int *)(&DAT_1019ed80 + sy * 4) + sx));
			} else {
				pBuff = (BYTE *)(_DAT_101271e4 + *(int *)(&DAT_1019ed80 + sy * 4) + sx + -0x5fe0);
				iStack00000030 = eflag;
				iVar2 = IsometricCoord(x, y);
				iVar7 = 0;
				iVar2 = *(int *)uVar4 + iVar2 * 0x20;
				do {
					if ((skipChunks <= iVar7) && (_level_cel_block = (uint) * (ushort *)(iVar2 + 6), *(ushort *)(iVar2 + 6) != 0)) {
						drawLowerScreen(pBuff);
					}
					iVar7 = iVar7 + 1;
					iVar2 = iVar2 + 4;
					pBuff = pBuff + -0x6000;
				} while (iVar7 < 7);
				if (CelSkip < 8) {
					town_draw_clipped_town_2((BYTE *)(_DAT_101271e4 + *(int *)(&DAT_1019ed80 + sy * 4) + sx), x, y, skipChunks,
					    CelSkip, sx, sy, 0);
				}
			}
		}
		x = x + 1;
		y = y + -1;
		sx = sx + 0x40;
	}
	piVar8 = (int *)(&DAT_1019ed80 + sy * 4);
	iVar7 = x * 0xe0;
	chunks = chunks - iStack00000030;
	iVar2 = y << 1;
	iVar6 = 0;
	while (piVar5 = (int *)uVar4, iVar6 < chunks) {
		if (((y < 0) || (0x6f < y)) || ((x < 0 || (0x6f < x)))) {
			town_clear_low_buf((BYTE *)(_DAT_101271e4 + *piVar8 + sx));
		} else {
			_level_cel_block = SEXT24(*(short *)(_DAT_1012f1d4 + iVar7 + iVar2));
			if (_level_cel_block == 0) {
				town_clear_low_buf((BYTE *)(_DAT_101271e4 + *piVar8 + sx));
			} else {
				pBuff = (BYTE *)(_DAT_101271e4 + *piVar8 + sx + -0x6000);
				iVar3 = IsometricCoord(x, y);
				iVar9 = 0;
				iVar3 = *(int *)uVar4 + iVar3 * 0x20;
				do {
					if (skipChunks <= iVar9) {
						_level_cel_block = (uint) * (ushort *)(iVar3 + 4);
						if (*(ushort *)(iVar3 + 4) != 0) {
							drawLowerScreen(pBuff);
						}
						_level_cel_block = (uint) * (ushort *)(iVar3 + 6);
						if (*(ushort *)(iVar3 + 6) != 0) {
							drawLowerScreen(pBuff + 0x20);
						}
					}
					iVar9 = iVar9 + 1;
					iVar3 = iVar3 + 4;
					pBuff = pBuff + -0x6000;
				} while (iVar9 < 7);
				if (CelSkip < 8) {
					town_draw_clipped_town_2((BYTE *)(_DAT_101271e4 + *piVar8 + sx + (skipChunks + 1) * -0x6000), x, y,
					    skipChunks, CelSkip, sx, sy, 1);
				}
			}
		}
		iVar7 = iVar7 + 0xe0;
		x = x + 1;
		iVar2 = iVar2 + -2;
		y = y + -1;
		sx = sx + 0x40;
		iVar6 = iVar6 + 1;
	}
	if (iStack00000030 != 0) {
		if ((((y < 0) || (0x6f < y)) || (x < 0)) || (0x6f < x)) {
			town_clear_low_buf((BYTE *)(_DAT_101271e4 + *piVar8 + sx));
		} else {
			_level_cel_block = SEXT24(*(short *)(_DAT_1012f1d4 + x * 0xe0 + y * 2));
			if (_level_cel_block == 0) {
				town_clear_low_buf((BYTE *)(_DAT_101271e4 + *piVar8 + sx));
			} else {
				pBuff = (BYTE *)(_DAT_101271e4 + *piVar8 + sx + -0x6000);
				iVar2 = IsometricCoord(x, y);
				iVar7 = 0;
				iVar2 = *piVar5 + iVar2 * 0x20;
				do {
					if ((skipChunks <= iVar7) && (_level_cel_block = (uint) * (ushort *)(iVar2 + 4), *(ushort *)(iVar2 + 4) != 0)) {
						drawLowerScreen(pBuff);
					}
					iVar7 = iVar7 + 1;
					iVar2 = iVar2 + 4;
					pBuff = pBuff + -0x6000;
				} while (iVar7 < 7);
				if (CelSkip < 8) {
					town_draw_clipped_town_2((BYTE *)(_DAT_101271e4 + *piVar8 + sx), x, y, skipChunks, CelSkip, sx, sy, 0);
				}
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void town_draw_e_flag(BYTE *pBuff, int x, int y, int capChunks, int CelCap, int sx, int sy)

{
	int iVar1;
	int iVar2;
	int iVar3;
	BYTE *pBuff_00;
	ushort *puVar4;

	iVar1 = 0x100f8fd0;
	iVar2 = IsometricCoord(x, y);
	iVar3 = 0;
	puVar4 = (ushort *)(**(int **)(iVar1 + -0x7584) + iVar2 * 0x20);
	pBuff_00 = pBuff;
	do {
		if (iVar3 <= capChunks) {
			_level_cel_block = (uint)*puVar4;
			if (*puVar4 != 0) {
				drawUpperScreen(pBuff_00);
			}
			_level_cel_block = (uint)puVar4[1];
			if (puVar4[1] != 0) {
				drawUpperScreen(pBuff_00 + 0x20);
			}
		}
		iVar3 = iVar3 + 1;
		puVar4 = puVar4 + 2;
		pBuff_00 = pBuff_00 + -0x6000;
	} while (iVar3 < 7);
	town_draw_town_all(pBuff, x, y, capChunks, CelCap, sx, sy, 0);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void town_draw_town_all(BYTE *pBuff, int x, int y, int capChunks, int CelCap, int sx, int sy, int eflag)

{
	short sVar1;
	int iVar2;
	char cVar3;
	int sx_00;
	int sx_01;
	undefined *puVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar2 = 0x100f8fd0;
	iVar7 = x * 0x70;
	puVar4 = &DAT_1013d988;
	cVar3 = *(char *)(_DAT_1012f1a8 + iVar7 + y);
	if (cVar3 != '\0') {
		cVar3 = cVar3 + -1;
		iVar5 = (int)cVar3 * 0x170;
		sx_00 = sx - *(int *)(iVar5 + 0x1013d9b0);
		iVar2 = 0x100f8fd0;
		if (cVar3 == DAT_101285f6) {
			iVar2 = 0x100f8fd0;
			puVar4 = &DAT_1013d988;
			thunk_CelDecodeClr(-0x4b, sx_00, sy, *(BYTE **)(iVar5 + 0x1013d9a0), *(int *)(iVar5 + 0x1013d9a8),
			    *(int *)(iVar5 + 0x1013d9ac), 0, CelCap);
		}
		puVar4 = puVar4 + iVar5;
		thunk_CelDrawHdrOnly(sx_00, sy, *(BYTE **)(puVar4 + 0x18), *(int *)(puVar4 + 0x20), *(int *)(puVar4 + 0x24), 0,
		    CelCap);
	}
	if ((*(byte *)(_DAT_1012f1bc + iVar7 + y) & 0x10) != 0) {
		iVar5 = (int)*(short *)(_DAT_1012f1b4 + x * 0xe0 + y * 2 + -2) + 1;
		sx_00 = iVar5 * -0x10c;
		sx_01 = sx - *(int *)(sx_00 + 0x101aba08);
		if (-iVar5 == _DAT_101285f8) {
			CelDecodeClr(-0x5a, sx_01, sy, *(BYTE **)(sx_00 + 0x101ab9e8), *(int *)(sx_00 + 0x101ab9f8),
			    *(int *)(sx_00 + 0x101aba04), 0, CelCap);
		}
		CelDrawHdrOnly(sx_01, sy, *(BYTE **)(sx_00 + 0x101ab9e8), *(int *)(sx_00 + 0x101ab9f8),
		    *(int *)(sx_00 + 0x101aba04), 0, CelCap);
	}
	sVar1 = *(short *)(_DAT_1012f1b4 + x * 0xe0 + y * 2);
	if (0 < sVar1) {
		sx_00 = (int)sVar1 + -1;
		iVar5 = sx_00 * 0x10c;
		sx_01 = sx - *(int *)(iVar5 + 0x101aba08);
		if (sx_00 == _DAT_101285f8) {
			CelDecodeClr(-0x5a, sx_01, sy, *(BYTE **)(iVar5 + 0x101ab9e8), *(int *)(iVar5 + 0x101ab9f8),
			    *(int *)(iVar5 + 0x101aba04), 0, CelCap);
		}
		CelDrawHdrOnly(sx_01, sy, *(BYTE **)(iVar5 + 0x101ab9e8), *(int *)(iVar5 + 0x101ab9f8),
		    *(int *)(iVar5 + 0x101aba04), 0, CelCap);
	}
	if ((*(byte *)(_DAT_1012f1bc + iVar7 + y) & 0x20) != 0) {
		cVar3 = -(*(char *)(_DAT_1012f1b8 + iVar7 + y + -1) + '\x01');
		iVar5 = (int)cVar3 * 0x55ec;
		sx_01 = sy + *(int *)((int)plr + iVar5 + 100);
		sx_00 = (sx + *(int *)((int)plr + iVar5 + 0x60)) - *(int *)((int)plr + iVar5 + 0x94);
		if (cVar3 == DAT_101285f4) {
			Cl2DecodeFrm2(-0x5b, sx_00, sx_01, *(BYTE **)((int)plr + iVar5 + 0x7c),
			    *(int *)((int)plr + iVar5 + 0x8c), *(int *)((int)plr + iVar5 + 0x90), 0, CelCap);
		}
		iVar6 = (int)&plr[0]._pmode + iVar5;
		Cl2DecodeFrm1(sx_00, sx_01, *(BYTE **)((int)&plr[0]._pAnimData + iVar5),
		    *(int *)((int)&plr[0]._pAnimFrame + iVar5),
		    *(int *)((int)&plr[0]._pAnimWidth + iVar5), 0, CelCap);
		if (eflag != 0) {
			if (*(int *)(iVar6 + 0x98) != 0) {
				town_draw_e_flag(pBuff + -0x40, x + -1, y + 1, capChunks, CelCap, sx + -0x40, sy);
			}
		}
	}
	if ((*(byte *)(_DAT_1012f1bc + iVar7 + y) & 4) != 0) {
		DrawDeadPlayer(x, y, sx, sy, 0, CelCap, 0);
	}
	cVar3 = *(char *)(_DAT_1012f1b8 + iVar7 + y);
	if ('\0' < cVar3) {
		cVar3 = cVar3 + -1;
		iVar5 = (int)cVar3 * 0x55ec;
		sx_01 = sy + *(int *)((int)plr + iVar5 + 100);
		sx_00 = (sx + *(int *)((int)plr + iVar5 + 0x60)) - *(int *)((int)plr + iVar5 + 0x94);
		if (cVar3 == DAT_101285f4) {
			Cl2DecodeFrm2(-0x5b, sx_00, sx_01, *(BYTE **)((int)plr + iVar5 + 0x7c),
			    *(int *)((int)plr + iVar5 + 0x8c), *(int *)((int)plr + iVar5 + 0x90), 0, CelCap);
		}
		iVar6 = (int)&plr[0]._pmode + iVar5;
		Cl2DecodeFrm1(sx_00, sx_01, *(BYTE **)((int)&plr[0]._pAnimData + iVar5),
		    *(int *)((int)&plr[0]._pAnimFrame + iVar5),
		    *(int *)((int)&plr[0]._pAnimWidth + iVar5), 0, CelCap);
		if (eflag != 0) {
			if (*(int *)(iVar6 + 0x98) != 0) {
				town_draw_e_flag(pBuff + -0x40, x + -1, y + 1, capChunks, CelCap, sx + -0x40, sy);
			}
		}
	}
	if ((*(byte *)(_DAT_1012f1bc + iVar7 + y) & 1) != 0) {
		DrawMissile(x, y, sx, sy, 0, CelCap, 0);
	}
	cVar3 = *(char *)(**(int **)(iVar2 + -0x7598) + iVar7 + y);
	if (cVar3 != '\0') {
		town_special_upper(pBuff, (int)cVar3);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void town_draw_upper(int x, int y, int sx, int sy, int chunks, int capChunks, int eflag)

{
	short sVar1;
	ushort uVar2;
	int sx_00;
	int iVar3;
	int iVar4;
	longlong lVar5;
	int iVar7;
	longlong lVar6;
	ushort *puVar8;
	int iVar9;
	uint *puVar10;
	int iVar11;
	longlong lVar12;
	int CelCap;

	lVar12 = (longlong)sx;
	CelCap = (capChunks + 1) * 2;
	if (8 < CelCap) {
		CelCap = 8;
	}
	if (eflag != 0) {
		if ((((y < 0) || (0x6f < y)) || (x < 0)) || (0x6f < x)) {
			town_clear_upper_buf((BYTE *)(_DAT_101271e4 + *(int *)(&DAT_1019ed80 + sy * 4) + sx));
		} else {
			sVar1 = *(short *)(_DAT_1012f1d4 + x * 0xe0 + y * 2);
			_level_cel_block = SEXT24(sVar1);
			if (((longlong)sVar1 & 0xffffffffU) == 0) {
				town_clear_upper_buf((BYTE *)(_DAT_101271e4 + *(int *)(&DAT_1019ed80 + sy * 4) + sx));
			} else {
				lVar5 = (ulonglong)_DAT_101271e4 + (ulonglong) * (uint *)(&DAT_1019ed80 + sy * 4) + lVar12 + 0x20;
				iVar3 = IsometricCoord(x, y);
				iVar7 = 0;
				iVar3 = _DAT_1012f1cc + iVar3 * 0x20;
				do {
					if ((iVar7 <= capChunks) && (_level_cel_block = (uint) * (ushort *)(iVar3 + 2), *(ushort *)(iVar3 + 2) != 0)) {
						drawUpperScreen((BYTE *)lVar5);
					}
					iVar7 = iVar7 + 1;
					iVar3 = iVar3 + 4;
					lVar5 = lVar5 + -0x6000;
				} while (iVar7 < 7);
				town_draw_town_all((BYTE *)(_DAT_101271e4 + *(uint *)(&DAT_1019ed80 + sy * 4) + sx), x, y,
				    capChunks, CelCap, sx, sy, 0);
			}
		}
		x = x + 1;
		y = y + -1;
		lVar12 = lVar12 + 0x40;
	}
	iVar11 = x * 0xe0;
	puVar10 = (uint *)(&DAT_1019ed80 + sy * 4);
	iVar3 = y << 1;
	iVar7 = 0;
	while (sx_00 = (int)lVar12, iVar7 < chunks - eflag) {
		if (((y < 0) || (0x6f < y)) || ((x < 0 || (0x6f < x)))) {
			town_clear_upper_buf((BYTE *)(_DAT_101271e4 + *puVar10 + sx_00));
		} else {
			_level_cel_block = SEXT24(*(short *)(_DAT_1012f1d4 + iVar11 + iVar3));
			if (_level_cel_block == 0) {
				town_clear_upper_buf((BYTE *)(_DAT_101271e4 + *puVar10 + sx_00));
			} else {
				lVar6 = (ulonglong)_DAT_101271e4 + (ulonglong)*puVar10 + lVar12;
				iVar4 = IsometricCoord(x, y);
				iVar9 = 0;
				lVar5 = (ulonglong)_DAT_1012f1cc + (ulonglong)(uint)(iVar4 << 5);
				do {
					if (iVar9 <= capChunks) {
						_level_cel_block = (uint) * (ushort *)lVar5;
						if (*(ushort *)lVar5 != 0) {
							drawUpperScreen((BYTE *)lVar6);
						}
						uVar2 = *(ushort *)((int)lVar5 + 2);
						_level_cel_block = (uint)uVar2;
						if (uVar2 != 0) {
							drawUpperScreen((BYTE *)lVar6 + 0x20);
						}
					}
					iVar9 = iVar9 + 1;
					lVar5 = lVar5 + 4;
					lVar6 = lVar6 + -0x6000;
				} while (iVar9 < 7);
				town_draw_town_all((BYTE *)(_DAT_101271e4 + *puVar10 + sx_00), x, y, capChunks, CelCap, sx_00, sy,
				    1);
			}
		}
		iVar11 = iVar11 + 0xe0;
		x = x + 1;
		iVar3 = iVar3 + -2;
		y = y + -1;
		lVar12 = lVar12 + 0x40;
		iVar7 = iVar7 + 1;
	}
	if (eflag != 0) {
		if ((((y < 0) || (0x6f < y)) || (x < 0)) || (0x6f < x)) {
			town_clear_upper_buf((BYTE *)(_DAT_101271e4 + *puVar10 + sx_00));
		} else {
			_level_cel_block = SEXT24(*(short *)(_DAT_1012f1d4 + x * 0xe0 + y * 2));
			if (_level_cel_block == 0) {
				town_clear_upper_buf((BYTE *)(_DAT_101271e4 + *puVar10 + sx_00));
			} else {
				lVar12 = (ulonglong)_DAT_101271e4 + (ulonglong)*puVar10 + lVar12;
				iVar3 = IsometricCoord(x, y);
				iVar7 = 0;
				puVar8 = (ushort *)(_DAT_1012f1cc + iVar3 * 0x20);
				do {
					if ((iVar7 <= capChunks) && (_level_cel_block = (uint)*puVar8, *puVar8 != 0)) {
						drawUpperScreen((BYTE *)lVar12);
					}
					iVar7 = iVar7 + 1;
					puVar8 = puVar8 + 2;
					lVar12 = lVar12 + -0x6000;
				} while (iVar7 < 7);
				town_draw_town_all((BYTE *)(_DAT_101271e4 + *puVar10 + sx_00), x, y, capChunks, CelCap, sx_00, sy,
				    0);
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void T_DrawGame(int x, int y)

{
	int capChunks;
	int x_00;
	int y_00;
	int skipChunks;
	int chunks;
	int sy;
	int sx;

	x_00 = x + -10;
	y_00 = y + -1;
	chunks = 10;
	skipChunks = 5;
	_DAT_1012f308 = 0x280;
	_DAT_1012f304 = 0x160;
	_DAT_1012f300 = 10;
	_DAT_1012f2fc = 0xb;
	sx = ScrollStruct_1012f2e8._sxoff + 0x40;
	sy = ScrollStruct_1012f2e8._syoff + 0xaf;
	if ((_DAT_101282b8 != 0) || (_DAT_1019cbec != 0)) {
		chunks = 6;
		x_00 = x + -8;
		y_00 = y + -3;
		sx = ScrollStruct_1012f2e8._sxoff + 0x160;
	}
	if ((_DAT_1013c970 != 0) || (_DAT_10128158 != 0)) {
		chunks = 6;
		x_00 = x_00 + 2;
		y_00 = y_00 + -2;
		sx = sx + -0x20;
	}
	switch (ScrollStruct_1012f2e8._sdir) {
	case 1:
		skipChunks = 6;
		sy = ScrollStruct_1012f2e8._syoff + 0x8f;
		x_00 = x_00 + -1;
		y_00 = y_00 + -1;
		break;
	case 2:
		skipChunks = 6;
		sy = ScrollStruct_1012f2e8._syoff + 0x8f;
		x_00 = x_00 + -1;
		y_00 = y_00 + -1;
		chunks = chunks + 1;
		break;
	case 3:
		chunks = chunks + 1;
		break;
	case 4:
		skipChunks = 6;
		chunks = chunks + 1;
		break;
	case 5:
		skipChunks = 6;
		break;
	case 6:
		skipChunks = 6;
		sx = sx + -0x40;
		x_00 = x_00 + -1;
		y_00 = y_00 + 1;
		chunks = chunks + 1;
		break;
	case 7:
		sx = sx + -0x40;
		x_00 = x_00 + -1;
		y_00 = y_00 + 1;
		chunks = chunks + 1;
		break;
	case 8:
		skipChunks = 6;
		sx = sx + -0x40;
		sy = ScrollStruct_1012f2e8._syoff + 0x8f;
		x_00 = x_00 + -2;
		chunks = chunks + 1;
	}
	capChunks = 0;
	_DAT_1019fd84 = _DAT_101271e4 + iRam1019f000;
	do {
		town_draw_upper(x_00, y_00, sx, sy, chunks, capChunks, 0);
		y_00 = y_00 + 1;
		town_draw_upper(x_00, y_00, sx + -0x20, sy + 0x10, chunks, capChunks, 1);
		capChunks = capChunks + 1;
		sy = sy + 0x20;
		x_00 = x_00 + 1;
	} while (capChunks < 7);
	capChunks = 0;
	_DAT_1019fd84 = _DAT_101271e4 + iRam1019f580;
	while (capChunks < skipChunks) {
		town_draw_lower(x_00, y_00, sx, sy, chunks, 0);
		y_00 = y_00 + 1;
		town_draw_lower(x_00, y_00, sx + -0x20, sy + 0x10, chunks, 1);
		x_00 = x_00 + 1;
		sy = sy + 0x20;
		capChunks = capChunks + 1;
	}
	skipChunks = 0;
	do {
		town_draw_lower_2(x_00, y_00, sx, sy, chunks, skipChunks, 0);
		y_00 = y_00 + 1;
		town_draw_lower_2(x_00, y_00, sx + -0x20, sy + 0x10, chunks, skipChunks, 1);
		skipChunks = skipChunks + 1;
		sy = sy + 0x20;
		x_00 = x_00 + 1;
	} while (skipChunks < 7);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void T_DrawZoom(int x, int y)

{
	undefined uVar1;
	undefined2 uVar2;
	undefined8 uVar3;
	undefined2 *puVar4;
	undefined *puVar5;
	undefined2 *puVar6;
	longlong lVar7;
	int capChunks;
	int x_00;
	int y_00;
	int skipChunks;
	int chunks;
	int sy;
	int sx;

	uVar3 = 0x100f8fd0;
	x_00 = x + -6;
	y_00 = y + -1;
	chunks = 6;
	skipChunks = 0;
	_DAT_1012f308 = 0x180;
	_DAT_1012f304 = 0xc0;
	_DAT_1012f300 = 6;
	_DAT_1012f2fc = 6;
	sx = ScrollStruct_1012f2e8._sxoff + 0x40;
	sy = ScrollStruct_1012f2e8._syoff + 0x8f;
	switch (ScrollStruct_1012f2e8._sdir) {
	case 1:
		skipChunks = 1;
		sy = ScrollStruct_1012f2e8._syoff + 0x6f;
		x_00 = x + -7;
		y_00 = y + -2;
		break;
	case 2:
		chunks = 7;
		sy = ScrollStruct_1012f2e8._syoff + 0x6f;
		skipChunks = 1;
		x_00 = x + -7;
		y_00 = y + -2;
		break;
	case 3:
		chunks = 7;
		break;
	case 4:
		chunks = 7;
		skipChunks = 1;
		break;
	case 5:
		skipChunks = 1;
		break;
	case 6:
		chunks = 7;
		skipChunks = 1;
		x_00 = x + -7;
		sx = ScrollStruct_1012f2e8._sxoff;
		y_00 = y;
		break;
	case 7:
		chunks = 7;
		x_00 = x + -7;
		sx = ScrollStruct_1012f2e8._sxoff;
		y_00 = y;
		break;
	case 8:
		chunks = 7;
		skipChunks = 1;
		sy = ScrollStruct_1012f2e8._syoff + 0x6f;
		x_00 = x + -8;
		sx = ScrollStruct_1012f2e8._sxoff;
	}
	capChunks = 0;
	_DAT_1019fd84 = _DAT_101271e4 + iRam1019efbc;
	do {
		town_draw_upper(x_00, y_00, sx, sy, chunks, capChunks, 0);
		y_00 = y_00 + 1;
		town_draw_upper(x_00, y_00, sx + -0x20, sy + 0x10, chunks, capChunks, 1);
		capChunks = capChunks + 1;
		sy = sy + 0x20;
		x_00 = x_00 + 1;
	} while (capChunks < 7);
	capChunks = 0;
	_DAT_1019fd84 = _DAT_101271e4 + iRam1019f280;
	while (capChunks < skipChunks) {
		town_draw_lower(x_00, y_00, sx, sy, chunks, 0);
		y_00 = y_00 + 1;
		town_draw_lower(x_00, y_00, sx + -0x20, sy + 0x10, chunks, 1);
		x_00 = x_00 + 1;
		sy = sy + 0x20;
		capChunks = capChunks + 1;
	}
	skipChunks = 0;
	do {
		town_draw_lower_2(x_00, y_00, sx, sy, chunks, skipChunks, 0);
		y_00 = y_00 + 1;
		town_draw_lower_2(x_00, y_00, sx + -0x20, sy + 0x10, chunks, skipChunks, 1);
		skipChunks = skipChunks + 1;
		sy = sy + 0x20;
		x_00 = x_00 + 1;
	} while (skipChunks < 7);
	sx = (int)uVar3;
	if ((**(int **)(sx + -0x77c4) == 0) && (**(int **)(sx + -0x77c8) == 0)) {
		if ((**(int **)(sx + -0x77bc) == 0) && (**(int **)(sx + -0x77c0) == 0)) {
			y_00 = 0x3bd60;
			sx = 0x5fa40;
			x_00 = 0x140;
		} else {
			y_00 = 0x3bdb0;
			sx = 0x5fa40;
			x_00 = 0xa0;
		}
	} else {
		y_00 = 0x3bdb0;
		sx = 0x5fb80;
		x_00 = 0xa0;
	}
	skipChunks = x_00 + 0x300;
	puVar4 = (undefined2 *)(_DAT_101271e4 + sx);
	puVar5 = (undefined *)(_DAT_101271e4 + y_00);
	puVar6 = puVar4 + 0x180;
	lVar7 = 0xb0;
	sx = x_00;
	do {
		do {
			uVar1 = *puVar5;
			sx = sx + -1;
			puVar5 = puVar5 + 1;
			uVar2 = CONCAT11(uVar1, uVar1);
			*puVar4 = uVar2;
			puVar4 = puVar4 + 1;
			*puVar6 = uVar2;
			puVar6 = puVar6 + 1;
		} while (sx != 0);
		lVar7 = lVar7 + -1;
		puVar5 = puVar5 + -skipChunks;
		puVar6 = puVar6 + skipChunks * 0x7fffffff;
		puVar4 = puVar4 + skipChunks * 0x7fffffff;
		sx = x_00;
	} while (lVar7 != 0);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void T_DrawView(int StartX, int StartY)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	_DAT_1019fd94 = 0;
	_DAT_1019fd98 = 0;
	if (_DAT_10129148 == 0) {
		T_DrawZoom(StartX, StartY);
	} else {
		T_DrawGame(StartX, StartY);
	}
	if (**(int **)(iVar1 + -0x7778) != 0) {
		DrawAutomap();
	}
	if ((**(char **)(iVar1 + -0x7764) != '\0') && (DAT_1014919d == '\0')) {
		DrawSText();
	}
	if (**(int **)(iVar1 + -0x77bc) == 0) {
		if (**(int **)(iVar1 + -0x77c0) != 0) {
			DrawSpellBook();
		}
	} else {
		DrawInv();
	}
	DrawDurIcon();
	if (**(int **)(iVar1 + -0x77c4) == 0) {
		if (**(int **)(iVar1 + -0x77c8) == 0) {
			if ((*(int *)(*(int *)(iVar1 + -0x77a8) + **(int **)(iVar1 + -0x77ac) * 0x55ec + 0x180) != 0)
			    && (_DAT_101282b4 == 0)) {
				DrawLevelUpIcon();
			}
		} else {
			DrawQuestLog();
		}
	} else {
		DrawChr();
	}
	if (**(int **)(iVar1 + -0x7674) != 0) {
		DrawUniqueInfo();
	}
	if (DAT_1014919d != '\0') {
		DrawQText();
	}
	if (_DAT_101282b4 != 0) {
		DrawSpellList();
	}
	if (**(int **)(iVar1 + -0x7704) != 0) {
		DrawGoldSplit(**(int **)(iVar1 + -0x7708));
	}
	if (**(int **)(iVar1 + -0x75d4) != 0) {
		DrawHelp();
	}
	if (**(char **)(iVar1 + -0x75d8) != '\0') {
		DrawDiabloMsg();
	}
	if ((**(int **)(iVar1 + -0x75d0) != 0) && (**(int **)(iVar1 + -0x75cc) == 0)) {
		gmenu_draw_pause();
	}
	DrawPlrMsg();
	gmenu_draw();
	doom_draw();
	DrawInfoBox();
	DrawLifeFlask();
	DrawManaFlask();
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SetTownMicros(void)

{
	short sVar1;
	undefined *puVar2;
	undefined8 uVar3;
	int iVar4;
	char cVar6;
	int iVar5;
	undefined in_r4;
	undefined2 *puVar7;
	undefined in_r5;
	uint uVar8;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	int y;
	int x;
	int iVar9;
	int iVar10;
	longlong lVar11;
	undefined in_stack_ffffff7b;

	uVar3 = 0x100f8fd0;
	cVar6 = LockMemFile((ulonglong)_DAT_1013b34c, in_r4, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffff7b);
	y = 0;
	iVar9 = 0;
	do {
		x = 0;
		iVar10 = 0;
		do {
			sVar1 = *(short *)(iVar9 + _DAT_1012f1d4 + iVar10);
			iVar5 = IsometricCoord(x, y);
			iVar4 = (int)uVar3;
			puVar7 = (undefined2 *)(_DAT_1012f1cc + iVar5 * 0x20);
			if (sVar1 == 0) {
				*puVar7 = 0;
				puVar7[1] = 0;
				puVar7[2] = 0;
				puVar7[3] = 0;
				puVar7[4] = 0;
				puVar7[5] = 0;
				puVar7[6] = 0;
				puVar7[7] = 0;
				puVar7[8] = 0;
				puVar7[9] = 0;
				puVar7[10] = 0;
				puVar7[0xb] = 0;
				puVar7[0xc] = 0;
				puVar7[0xd] = 0;
				puVar7[0xe] = 0;
				puVar7[0xf] = 0;
			} else {
				lVar11 = 2;
				iVar5 = (int)cVar6 + ((int)sVar1 + -1) * 0x20;
				uVar8 = 0;
				do {
					puVar2 = (undefined *)(iVar5 + (0xe - (uVar8 & 0xe)) * 2);
					*puVar7 = CONCAT11(puVar2[1], *puVar2);
					puVar2 = (undefined *)(iVar5 + ((0xe - (uVar8 + 1 & 0xe)) + (uVar8 + 1 & 1)) * 2);
					puVar7[1] = CONCAT11(puVar2[1], *puVar2);
					puVar2 = (undefined *)(iVar5 + (0xe - (uVar8 + 2 & 0xe)) * 2);
					puVar7[2] = CONCAT11(puVar2[1], *puVar2);
					puVar2 = (undefined *)(iVar5 + ((0xe - (uVar8 + 3 & 0xe)) + (uVar8 + 3 & 1)) * 2);
					puVar7[3] = CONCAT11(puVar2[1], *puVar2);
					puVar2 = (undefined *)(iVar5 + (0xe - (uVar8 + 4 & 0xe)) * 2);
					puVar7[4] = CONCAT11(puVar2[1], *puVar2);
					puVar2 = (undefined *)(iVar5 + ((0xe - (uVar8 + 5 & 0xe)) + (uVar8 + 5 & 1)) * 2);
					puVar7[5] = CONCAT11(puVar2[1], *puVar2);
					puVar2 = (undefined *)(iVar5 + (0xe - (uVar8 + 6 & 0xe)) * 2);
					puVar7[6] = CONCAT11(puVar2[1], *puVar2);
					puVar2 = (undefined *)(iVar5 + ((0xe - (uVar8 + 7 & 0xe)) + (uVar8 + 7 & 1)) * 2);
					uVar8 = uVar8 + 8;
					puVar7[7] = CONCAT11(puVar2[1], *puVar2);
					puVar7 = puVar7 + 8;
					lVar11 = lVar11 + -1;
				} while (lVar11 != 0);
			}
			x = x + 1;
			iVar10 = iVar10 + 0xe0;
		} while (x < 0x70);
		y = y + 1;
		iVar9 = iVar9 + 2;
	} while (y < 0x70);
	UnlockMemFile((char)_DAT_1013b34c);
	if (**(int **)(iVar4 + -0x766c) == 0) {
		_DAT_1012f308 = 0x180;
		_DAT_1012f304 = 0xe0;
		_DAT_1012f300 = 6;
		_DAT_1012f2fc = 7;
	} else {
		_DAT_1012f308 = 0x280;
		_DAT_1012f304 = 0x160;
		_DAT_1012f300 = 10;
		_DAT_1012f2fc = 0xb;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void T_FillSector(BYTE *P3Tiles, BYTE *pSector, int xi, int yi, int w, int h)

{
	short sVar1;
	undefined *puVar2;
	char cVar3;
	char cVar4;
	undefined uVar6;
	undefined uVar7;
	int iVar5;
	undefined uVar8;
	undefined uVar10;
	int iVar9;
	undefined uVar12;
	int iVar11;
	undefined uVar13;
	undefined in_r9;
	undefined in_r10;
	longlong lVar14;
	undefined in_stack_ffffffab;

	uVar13 = (undefined)h;
	uVar12 = (undefined)w;
	uVar10 = (undefined)yi;
	uVar8 = (undefined)xi;
	uVar6 = SUB41(pSector, 0);
	uVar7 = uVar6;
	cVar3 = LockMemFile((longlong)(int)P3Tiles, uVar6, uVar8, uVar10, uVar12, uVar13, in_r9, in_r10,
	    in_stack_ffffffab);
	cVar4 = LockMemFile((longlong)(int)pSector, uVar7, uVar8, uVar10, uVar12, uVar13, in_r9, in_r10,
	    in_stack_ffffffab);
	yi = yi << 1;
	iVar11 = 4;
	iVar9 = 0;
	while (iVar9 < h) {
		iVar5 = xi * 0xe0;
		lVar14 = (longlong)w;
		if (0 < w) {
			do {
				sVar1 = CONCAT11(((undefined *)((int)cVar4 + iVar11))[1], *(undefined *)((int)cVar4 + iVar11));
				if (sVar1 == 0) {
					*(undefined2 *)(yi + _DAT_1012f1d4 + iVar5) = 0;
					*(undefined2 *)(yi + _DAT_1012f1d4 + iVar5 + 0xe0) = 0;
					*(undefined2 *)(yi + _DAT_1012f1d4 + iVar5 + 2) = 0;
					*(undefined2 *)(yi + _DAT_1012f1d4 + iVar5 + 0xe2) = 0;
				} else {
					puVar2 = (undefined *)((int)cVar3 + ((int)sVar1 + -1) * 8);
					*(short *)(yi + _DAT_1012f1d4 + iVar5) = CONCAT11(puVar2[1], *puVar2) + 1;
					*(short *)(yi + _DAT_1012f1d4 + iVar5 + 0xe0) = CONCAT11(puVar2[3], puVar2[2]) + 1;
					*(short *)(yi + _DAT_1012f1d4 + iVar5 + 2) = CONCAT11(puVar2[5], puVar2[4]) + 1;
					*(short *)(yi + _DAT_1012f1d4 + iVar5 + 0xe2) = CONCAT11(puVar2[7], puVar2[6]) + 1;
				}
				iVar5 = iVar5 + 0x1c0;
				iVar11 = iVar11 + 2;
				lVar14 = lVar14 + -1;
			} while (lVar14 != 0);
		}
		yi = yi + 4;
		iVar9 = iVar9 + 1;
	}
	UnlockMemFile((char)P3Tiles);
	UnlockMemFile(uVar6);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void T_FillTile(BYTE *P3Tiles, int xx, int yy, int t)

{
	undefined *puVar1;
	char cVar2;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffbb;

	cVar2 = LockMemFile((longlong)(int)P3Tiles, (char)xx, (char)yy, (char)t, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffffbb);
	puVar1 = (undefined *)((int)cVar2 + (t + -1) * 8);
	xx = xx * 0xe0;
	yy = yy * 2;
	*(short *)(_DAT_1012f1d4 + xx + yy) = CONCAT11(puVar1[1], *puVar1) + 1;
	*(short *)(_DAT_1012f1d4 + xx + yy + 0xe0) = CONCAT11(puVar1[3], puVar1[2]) + 1;
	*(short *)(_DAT_1012f1d4 + xx + yy + 2) = CONCAT11(puVar1[5], puVar1[4]) + 1;
	*(short *)(_DAT_1012f1d4 + xx + yy + 0xe2) = CONCAT11(puVar1[7], puVar1[6]) + 1;
	UnlockMemFile((char)P3Tiles);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void T_Pass3(void)

{
	char cVar1;
	undefined8 uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int xx;
	longlong lVar7;
	int *local_18;
	int *local_14[5];

	uVar2 = 0x100f8fd0;
	xx = 0;
	iVar3 = 0;
	do {
		iVar4 = 0;
		lVar7 = 0xe;
		do {
			*(undefined2 *)(iVar3 + _DAT_1012f1d4 + iVar4) = 0;
			*(undefined2 *)(iVar3 + _DAT_1012f1d4 + iVar4 + 0xe0) = 0;
			*(undefined2 *)(iVar3 + _DAT_1012f1d4 + iVar4 + 2) = 0;
			iVar5 = iVar4 + 0x1c0;
			*(undefined2 *)(iVar3 + _DAT_1012f1d4 + iVar4 + 0xe2) = 0;
			*(undefined2 *)(iVar3 + _DAT_1012f1d4 + iVar5) = 0;
			*(undefined2 *)(iVar3 + _DAT_1012f1d4 + iVar5 + 0xe0) = 0;
			*(undefined2 *)(iVar3 + _DAT_1012f1d4 + iVar5 + 2) = 0;
			iVar6 = iVar4 + 0x380;
			*(undefined2 *)(iVar3 + _DAT_1012f1d4 + iVar5 + 0xe2) = 0;
			*(undefined2 *)(iVar3 + _DAT_1012f1d4 + iVar6) = 0;
			*(undefined2 *)(iVar3 + _DAT_1012f1d4 + iVar6 + 0xe0) = 0;
			*(undefined2 *)(iVar3 + _DAT_1012f1d4 + iVar6 + 2) = 0;
			iVar5 = iVar4 + 0x540;
			*(undefined2 *)(iVar3 + _DAT_1012f1d4 + iVar6 + 0xe2) = 0;
			*(undefined2 *)(iVar3 + _DAT_1012f1d4 + iVar5) = 0;
			*(undefined2 *)(iVar3 + _DAT_1012f1d4 + iVar5 + 0xe0) = 0;
			*(undefined2 *)(iVar3 + _DAT_1012f1d4 + iVar5 + 2) = 0;
			iVar4 = iVar4 + 0x700;
			*(undefined2 *)(iVar3 + _DAT_1012f1d4 + iVar5 + 0xe2) = 0;
			lVar7 = lVar7 + -1;
		} while (lVar7 != 0);
		xx = xx + 2;
		iVar3 = iVar3 + 4;
	} while (xx < 0x70);
	local_14[0] = (int *)LoadFileInMem("Levels\\TownData\\Town.TIL", (DWORD *)0x0);
	local_18 = (int *)LoadFileInMem(*(char **)((int)uVar2 + -0x5674), (DWORD *)0x0);
	T_FillSector((BYTE *)local_14[0], (BYTE *)local_18, 0x2e, 0x2e, 0x19, 0x19);
	MemFreeDbg(&local_18);
	local_18 = (int *)LoadFileInMem(*(char **)((int)uVar2 + -0x5678), (DWORD *)0x0);
	T_FillSector((BYTE *)local_14[0], (BYTE *)local_18, 0x2e, 0, 0x19, 0x17);
	MemFreeDbg(&local_18);
	local_18 = (int *)LoadFileInMem(*(char **)((int)uVar2 + -0x567c), (DWORD *)0x0);
	T_FillSector((BYTE *)local_14[0], (BYTE *)local_18, 0, 0x2e, 0x17, 0x19);
	MemFreeDbg(&local_18);
	local_18 = (int *)LoadFileInMem(*(char **)((int)uVar2 + -0x5680), (DWORD *)0x0);
	T_FillSector((BYTE *)local_14[0], (BYTE *)local_18, 0, 0, 0x17, 0x17);
	MemFreeDbg(&local_18);
	iVar3 = (int)uVar2;
	if (**(char **)(iVar3 + -0x77f0) == '\x01') {
		xx = *(int *)(iVar3 + -0x77a8) + 0x5590;
		if ((*(byte *)(xx + myplr * 0x55ec) & 1) == 0) {
			T_FillTile((BYTE *)local_14[0], 0x30, 0x14, 0x140);
		}
		if ((*(byte *)(xx + myplr * 0x55ec) & 2) == 0) {
			T_FillTile((BYTE *)local_14[0], 0x10, 0x44, 0x14c);
			T_FillTile((BYTE *)local_14[0], 0x10, 0x46, 0x14b);
		}
		iVar3 = (int)uVar2;
		if ((*(byte *)(xx + myplr * 0x55ec) & 4) == 0) {
			xx = 0x24;
			do {
				iVar3 = random('\0', 4);
				T_FillTile((BYTE *)local_14[0], xx, 0x4e, iVar3 + 1);
				iVar3 = (int)uVar2;
				xx = xx + 1;
			} while (xx < 0x2e);
		}
	}
	cVar1 = *(char *)(*(int *)(iVar3 + -0x7604) + 0x13a);
	if ((cVar1 == '\x03') || (cVar1 == '\0')) {
		T_FillTile((BYTE *)local_14[0], 0x3c, 0x46, 0x47);
	} else {
		T_FillTile((BYTE *)local_14[0], 0x3c, 0x46, 0x156);
	}
	MemFreeDbg(local_14);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CreateTown(int entry)

{
	short sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	undefined uVar5;
	undefined uVar7;
	int iVar6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	longlong lVar8;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	iVar2 = 0x100f8fd0;
	uVar7 = 10;
	_DAT_1012f32c = 10;
	_DAT_1012f328 = 10;
	_DAT_1012f324 = 0x54;
	uVar5 = 0xc;
	_DAT_1012f320 = 0x54;
	if (entry == 0) {
		_DAT_1012f310 = 0x4b;
		_DAT_1012f30c = 0x44;
	} else {
		if (entry == 1) {
			_DAT_1012f310 = 0x19;
			_DAT_1012f30c = 0x1f;
		} else {
			if (entry == 7) {
				if (_DAT_101aca94 == 5) {
					_DAT_1012f310 = 0x31;
					_DAT_1012f30c = 0x16;
				}
				if (_DAT_101aca94 == 9) {
					_DAT_1012f310 = 0x12;
					_DAT_1012f30c = 0x45;
				}
				if (_DAT_101aca94 == 0xd) {
					_DAT_1012f310 = 0x29;
					_DAT_1012f30c = 0x51;
				}
			}
		}
	}
	T_Pass3();
	ZeroMemory((char)**(undefined4 **)(iVar2 + -0x758c), 0, uVar5, uVar7, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	ZeroMemory((char)**(undefined4 **)(local_2c + -0x779c), 0, uVar5, uVar7, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	ZeroMemory((char)**(undefined4 **)(local_2c + -0x7680), 0, uVar5, uVar7, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	ZeroMemory((char)**(undefined4 **)(local_2c + -0x767c), 0, uVar5, uVar7, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	ZeroMemory((char)**(undefined4 **)(local_2c + -0x7684), 0, uVar5, uVar7, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	ZeroMemory((char)**(undefined4 **)(local_2c + -0x768c), 0, uVar5, uVar7, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	ZeroMemory((char)_DAT_1012f1a0, 0, uVar5, uVar7, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffcb,
	    in_stack_ffffffcf, local_2c);
	iVar6 = 0;
	iVar2 = 0;
	do {
		iVar3 = 0;
		lVar8 = 0x70;
		iVar4 = 0;
		do {
			sVar1 = *(short *)(iVar2 + _DAT_1012f1d4 + iVar3);
			if (sVar1 == 0x168) {
				*(undefined *)(iVar6 + _DAT_1012f1a0 + iVar4) = 1;
			} else {
				if (sVar1 == 0x166) {
					*(undefined *)(iVar6 + _DAT_1012f1a0 + iVar4) = 2;
				} else {
					if (sVar1 == 0x81) {
						*(undefined *)(iVar6 + _DAT_1012f1a0 + iVar4) = 6;
					} else {
						if (sVar1 == 0x82) {
							*(undefined *)(iVar6 + _DAT_1012f1a0 + iVar4) = 7;
						} else {
							if (sVar1 == 0x80) {
								*(undefined *)(iVar6 + _DAT_1012f1a0 + iVar4) = 8;
							} else {
								if (sVar1 == 0x75) {
									*(undefined *)(iVar6 + _DAT_1012f1a0 + iVar4) = 9;
								} else {
									if (sVar1 == 0x9d) {
										*(undefined *)(iVar6 + _DAT_1012f1a0 + iVar4) = 10;
									} else {
										if (sVar1 == 0x9e) {
											*(undefined *)(iVar6 + _DAT_1012f1a0 + iVar4) = 0xb;
										} else {
											if (sVar1 == 0x9c) {
												*(undefined *)(iVar6 + _DAT_1012f1a0 + iVar4) = 0xc;
											} else {
												if (sVar1 == 0xa2) {
													*(undefined *)(iVar6 + _DAT_1012f1a0 + iVar4) = 0xd;
												} else {
													if (sVar1 == 0xa0) {
														*(undefined *)(iVar6 + _DAT_1012f1a0 + iVar4) = 0xe;
													} else {
														if (sVar1 == 0xd6) {
															*(undefined *)(iVar6 + _DAT_1012f1a0 + iVar4) = 0xf;
														} else {
															if (sVar1 == 0xd4) {
																*(undefined *)(iVar6 + _DAT_1012f1a0 + iVar4) = 0x10;
															} else {
																if (sVar1 == 0xd9) {
																	*(undefined *)(iVar6 + _DAT_1012f1a0 + iVar4) = 0x11;
																} else {
																	if (sVar1 == 0xd8) {
																		*(undefined *)(iVar6 + _DAT_1012f1a0 + iVar4) = 0x12;
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			iVar3 = iVar3 + 0xe0;
			iVar4 = iVar4 + 0x70;
			lVar8 = lVar8 + -1;
		} while (lVar8 != 0);
		iVar6 = iVar6 + 1;
		iVar2 = iVar2 + 2;
	} while (iVar6 < 0x70);
	SetTownMicros();
	return;
}
