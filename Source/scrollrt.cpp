
void ClearCursor(void)

{
	_DAT_100f440c = 0;
	_DAT_100f441c = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void scrollrt_draw_cursor_back_buffer(void)

{
	bool bVar1;
	int iVar2;
	undefined8 uVar3;
	undefined8 in_r6;
	int nCel;
	int nWidth;
	int CelSkip;
	int CelCap;
	int iVar4;
	undefined *sx;
	longlong lVar5;

	uVar3 = 0x100f8fd0;
	if (_DAT_100f441c != 0) {
		sx = &DAT_1019cd80;
		lVar5 = (ulonglong)_DAT_101271e4 + (ulonglong)_DAT_100f4424 + 0x40;
		iVar4 = _DAT_100f4418;
		while (true) {
			bVar1 = iVar4 == 0;
			iVar4 = iVar4 + -1;
			iVar2 = (int)uVar3;
			if (bVar1)
				break;
			CelDrawHdrClrHL(
			    (char)lVar5, (int)sx, *(int *)(iVar2 + -0x4bb4), (BYTE *)in_r6, nCel, nWidth, CelSkip, CelCap);
			lVar5 = lVar5 + 0x300;
			sx = sx + *(int *)((int)uVar3 + -0x4bb4);
		}
		*(undefined4 *)(iVar2 + -0x4bbc) = *(undefined4 *)(iVar2 + -0x4bac);
		*(undefined4 *)(iVar2 + -0x4bc0) = *(undefined4 *)(iVar2 + -0x4bb0);
		*(undefined4 *)(iVar2 + -0x4bc4) = *(undefined4 *)(iVar2 + -0x4bb4);
		*(undefined4 *)(iVar2 + -0x4bc8) = *(undefined4 *)(iVar2 + -0x4bb8);
		*(undefined4 *)(iVar2 + -0x4bb4) = 0;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void scrollrt_draw_cursor_item(void)

{
	bool bVar1;
	int iVar2;
	int nWidth;
	undefined8 uVar3;
	int iVar4;
	undefined8 in_r6;
	undefined8 in_r7;
	undefined8 in_r8;
	undefined8 in_r9;
	undefined8 in_r10;
	char col;
	ulonglong uVar5;
	int sx;
	int iVar6;
	uint uVar7;

	uVar3 = 0x100f8fd0;
	if (((0 < _DAT_1012861c) && (_DAT_10128618 != 0)) && (_DAT_10128614 != 0)) {
		uVar7 = (uint)((ulonglong)(uint)MouseX - 1);
		if ((longlong)((ulonglong)(uint)MouseX - 1) < 0) {
			uVar7 = 0;
		} else {
			if (0x27f < (int)uVar7) {
				return;
			}
		}
		iVar6 = (int)((ulonglong)_MouseY - 1);
		if ((longlong)((ulonglong)_MouseY - 1) < 0) {
			iVar6 = 0;
		} else {
			if (0x1df < iVar6) {
				return;
			}
		}
		_DAT_100f441c = uVar7 + _DAT_10128618 + 1;
		if (0x27f < _DAT_100f441c) {
			_DAT_100f441c = 0x27f;
		}
		_DAT_100f4424 = uVar7 & 0xfffffffc;
		_DAT_100f441c = (_DAT_100f441c | 3) + (1 - _DAT_100f4424);
		_DAT_100f4418 = iVar6 + _DAT_10128614 + 1;
		if (0x1df < _DAT_100f4418) {
			_DAT_100f4418 = 0x1df;
		}
		iVar4 = _DAT_100f4418 + (1 - iVar6);
		uVar5 = ZEXT48(&DAT_1019cd80);
		sx = _DAT_101271e4 + (iVar6 + 0xa0) * 0x300 + _DAT_100f4424 + 0x40;
		_DAT_100f4418 = iVar4;
		_DAT_100f4420 = iVar6;
		while (true) {
			nWidth = _DAT_10128618;
			bVar1 = iVar4 == 0;
			iVar4 = iVar4 + -1;
			iVar2 = (int)uVar3;
			if (bVar1)
				break;
			CelDrawHdrClrHL((char)uVar5, sx, *(int *)(iVar2 + -0x4bb4), (BYTE *)in_r6, (int)in_r7, (int)in_r8, (int)in_r9,
			    (int)in_r10);
			sx = sx + 0x300;
			uVar5 = uVar5 + (ulonglong) * (uint *)((int)uVar3 + -0x4bb4);
		}
		**(int **)(iVar2 + -0x7808) = (_DAT_101271e4 + *(int *)(*(int *)(iVar2 + -0x7698) + 0xa00)) - (_DAT_10128618 + 2);
		if (_DAT_1012861c < 0xc) {
			thunk_Cel2DrawHdrOnly(
			    uVar7 + 0x41, iVar6 + _DAT_10128614 + 0xa0, _DAT_101285f0, _DAT_1012861c, nWidth, 0, 8);
		} else {
			col = -0x3b;
			iVar4 = **(int **)(iVar2 + -0x77ac) * 0x55ec;
			if (*(char *)((int)plr + iVar4 + 0x5410) != '\0') {
				col = -0x4b;
			}
			if (*(int *)((int)plr + iVar4 + 0x5538) == 0) {
				col = -0x1b;
			}
			thunk_CelDrawHdrClrHL(
			    col, uVar7 + 0x41, iVar6 + _DAT_10128614 + 0xa0, _DAT_101285f0, _DAT_1012861c, nWidth, 0, 8);
			if (col == -0x1b) {
				Cel2DrawHdrLightRed(uVar7 + 0x41, iVar6 + _DAT_10128614 + 0xa0, _DAT_101285f0, _DAT_1012861c,
				    _DAT_10128618, 0, 8, '\x01');
			} else {
				thunk_Cel2DrawHdrOnly(
				    uVar7 + 0x41, iVar6 + _DAT_10128614 + 0xa0, _DAT_101285f0, _DAT_1012861c, _DAT_10128618, 0, 8);
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DrawMissile(int x, int y, int sx, int sy, int CelSkip, int capChunks, BOOL pre)

{
	char cVar1;
	int nCel;
	ulonglong uVar2;
	ulonglong uVar3;
	int sx_00;
	int sx_01;
	int sy_00;
	int iVar4;
	int *piVar5;

	cVar1 = *(char *)(_DAT_1012f1a4 + x * 0x70 + y);
	if (cVar1 == -1) {
		piVar5 = (int *)&DAT_1014939c;
		iVar4 = 0;
		while (true) {
			if (_DAT_10149b70 <= iVar4) {
				return;
			}
			if (0x7c < *piVar5) {
				return;
			}
			nCel = *piVar5 * 0xb4;
			if ((((*(int *)(nCel + 0x10149b78) == x) && (*(int *)(nCel + 0x10149b7c) == y)) && (*(int *)(nCel + 0x10149be0) == pre)) && (*(int *)(nCel + 0x10149bd8) != 0))
				break;
		LAB_1009e064:
			piVar5 = piVar5 + 1;
			iVar4 = iVar4 + 1;
		}
		uVar2 = LockMemFileIf((uint *)(nCel + 0x10149bb4));
		if (uVar2 == 0) {
			UnlockMemFileIf((int *)(nCel + 0x10149bb4));
		} else {
			if (0 < *(int *)(nCel + 0x10149bd4)) {
				uVar3 = BESwap_1003cdc8((byte *)uVar2);
				if ((int)uVar3 < 0x33) {
					uVar2 = BESwap_1003cdc8((byte *)uVar2);
					sx_01 = *(int *)(nCel + 0x10149bd4);
					if (sx_01 <= (int)uVar2) {
						sy_00 = *(int *)(nCel + 0x10149b84) + sy;
						sx_00 = (*(int *)(nCel + 0x10149b80) + sx) - *(int *)(nCel + 0x10149bc8);
						if (*(int *)(nCel + 0x10149be4) == 0) {
							if (*(int *)(nCel + 0x10149bdc) == 0) {
								Cl2DecodeFrm1(sx_00, sy_00, (BYTE *)(nCel + 0x10149bb4), sx_01,
								    *(int *)(nCel + 0x10149bc4), CelSkip, capChunks);
							} else {
								Cl2DecodeLightTbl(sx_00, sy_00, (BYTE *)(nCel + 0x10149bb4), sx_01,
								    *(int *)(nCel + 0x10149bc4), CelSkip, capChunks);
							}
						} else {
							Cl2DecodeFrm3(sx_00, sy_00, (BYTE *)(nCel + 0x10149bb4), sx_01, *(int *)(nCel + 0x10149bc4),
							    CelSkip, capChunks, (char)*(int *)(nCel + 0x10149be4) + '\x03');
						}
						UnlockMemFileIf((int *)(nCel + 0x10149bb4));
						goto LAB_1009e064;
					}
				}
			}
			UnlockMemFileIf((int *)(nCel + 0x10149bb4));
		}
	} else {
		iVar4 = ((int)cVar1 + -1) * 0xb4;
		if ((*(int *)(iVar4 + 0x10149be0) == pre) && (*(int *)(iVar4 + 0x10149bd8) != 0)) {
			uVar2 = LockMemFileIf((uint *)(iVar4 + 0x10149bb4));
			if (uVar2 == 0) {
				UnlockMemFileIf((int *)(iVar4 + 0x10149bb4));
			} else {
				if (0 < *(int *)(iVar4 + 0x10149bd4)) {
					uVar3 = BESwap_1003cdc8((byte *)uVar2);
					if ((int)uVar3 < 0x33) {
						uVar2 = BESwap_1003cdc8((byte *)uVar2);
						nCel = *(int *)(iVar4 + 0x10149bd4);
						if (nCel <= (int)uVar2) {
							sy = *(int *)(iVar4 + 0x10149b84) + sy;
							sx_01 = (*(int *)(iVar4 + 0x10149b80) + sx) - *(int *)(iVar4 + 0x10149bc8);
							if (*(int *)(iVar4 + 0x10149be4) == 0) {
								if (*(int *)(iVar4 + 0x10149bdc) == 0) {
									Cl2DecodeFrm1(sx_01, sy, (BYTE *)(iVar4 + 0x10149bb4), nCel,
									    *(int *)(iVar4 + 0x10149bc4), CelSkip, capChunks);
								} else {
									Cl2DecodeLightTbl(sx_01, sy, (BYTE *)(iVar4 + 0x10149bb4), nCel,
									    *(int *)(iVar4 + 0x10149bc4), CelSkip, capChunks);
								}
							} else {
								Cl2DecodeFrm3(sx_01, sy, (BYTE *)(iVar4 + 0x10149bb4), nCel, *(int *)(iVar4 + 0x10149bc4),
								    CelSkip, capChunks, (char)*(int *)(iVar4 + 0x10149be4) + '\x03');
							}
							UnlockMemFileIf((int *)(iVar4 + 0x10149bb4));
							return;
						}
					}
				}
				UnlockMemFileIf((int *)(iVar4 + 0x10149bb4));
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DrawClippedMissile(int x, int y, int sx, int sy, int CelSkip, int capChunks, BOOL pre)

{
	char cVar1;
	int nCel;
	ulonglong uVar2;
	ulonglong uVar3;
	int sx_00;
	int sx_01;
	int sy_00;
	int iVar4;
	int *piVar5;

	cVar1 = *(char *)(_DAT_1012f1a4 + x * 0x70 + y);
	if (cVar1 == -1) {
		piVar5 = (int *)&DAT_1014939c;
		iVar4 = 0;
		while (true) {
			if (_DAT_10149b70 <= iVar4) {
				return;
			}
			if (0x7c < *piVar5) {
				return;
			}
			nCel = *piVar5 * 0xb4;
			if ((((*(int *)(nCel + 0x10149b78) == x) && (*(int *)(nCel + 0x10149b7c) == y)) && (*(int *)(nCel + 0x10149be0) == pre)) && (*(int *)(nCel + 0x10149bd8) != 0))
				break;
		LAB_1009e308:
			piVar5 = piVar5 + 1;
			iVar4 = iVar4 + 1;
		}
		uVar2 = LockMemFileIf((uint *)(nCel + 0x10149bb4));
		if (uVar2 == 0) {
			UnlockMemFileIf((int *)(nCel + 0x10149bb4));
		} else {
			if (0 < *(int *)(nCel + 0x10149bd4)) {
				uVar3 = BESwap_1003cdc8((byte *)uVar2);
				if ((int)uVar3 < 0x33) {
					uVar2 = BESwap_1003cdc8((byte *)uVar2);
					sx_01 = *(int *)(nCel + 0x10149bd4);
					if (sx_01 <= (int)uVar2) {
						sy_00 = *(int *)(nCel + 0x10149b84) + sy;
						sx_00 = (*(int *)(nCel + 0x10149b80) + sx) - *(int *)(nCel + 0x10149bc8);
						if (*(int *)(nCel + 0x10149be4) == 0) {
							if (*(int *)(nCel + 0x10149bdc) == 0) {
								Cl2DecodeFrm4(sx_00, sy_00, (BYTE *)(nCel + 0x10149bb4), sx_01,
								    *(int *)(nCel + 0x10149bc4), CelSkip, capChunks);
							} else {
								Cl2DecodeFrm6(sx_00, sy_00, (BYTE *)(nCel + 0x10149bb4), sx_01,
								    *(int *)(nCel + 0x10149bc4), CelSkip, capChunks);
							}
						} else {
							Cl2DecodeFrm5(sx_00, sy_00, (BYTE *)(nCel + 0x10149bb4), sx_01, *(int *)(nCel + 0x10149bc4),
							    CelSkip, capChunks, (char)*(int *)(nCel + 0x10149be4) + '\x03');
						}
						UnlockMemFileIf((int *)(nCel + 0x10149bb4));
						goto LAB_1009e308;
					}
				}
			}
			UnlockMemFileIf((int *)(nCel + 0x10149bb4));
		}
	} else {
		iVar4 = ((int)cVar1 + -1) * 0xb4;
		if ((*(int *)(iVar4 + 0x10149be0) == pre) && (*(int *)(iVar4 + 0x10149bd8) != 0)) {
			uVar2 = LockMemFileIf((uint *)(iVar4 + 0x10149bb4));
			if (uVar2 == 0) {
				UnlockMemFileIf((int *)(iVar4 + 0x10149bb4));
			} else {
				if (0 < *(int *)(iVar4 + 0x10149bd4)) {
					uVar3 = BESwap_1003cdc8((byte *)uVar2);
					if ((int)uVar3 < 0x33) {
						uVar2 = BESwap_1003cdc8((byte *)uVar2);
						nCel = *(int *)(iVar4 + 0x10149bd4);
						if (nCel <= (int)uVar2) {
							sy = *(int *)(iVar4 + 0x10149b84) + sy;
							sx_01 = (*(int *)(iVar4 + 0x10149b80) + sx) - *(int *)(iVar4 + 0x10149bc8);
							if (*(int *)(iVar4 + 0x10149be4) == 0) {
								if (*(int *)(iVar4 + 0x10149bdc) == 0) {
									Cl2DecodeFrm4(sx_01, sy, (BYTE *)(iVar4 + 0x10149bb4), nCel,
									    *(int *)(iVar4 + 0x10149bc4), CelSkip, capChunks);
								} else {
									Cl2DecodeFrm6(sx_01, sy, (BYTE *)(iVar4 + 0x10149bb4), nCel,
									    *(int *)(iVar4 + 0x10149bc4), CelSkip, capChunks);
								}
							} else {
								Cl2DecodeFrm5(sx_01, sy, (BYTE *)(iVar4 + 0x10149bb4), nCel, *(int *)(iVar4 + 0x10149bc4),
								    CelSkip, capChunks, (char)*(int *)(iVar4 + 0x10149be4) + '\x03');
							}
							UnlockMemFileIf((int *)(iVar4 + 0x10149bb4));
							return;
						}
					}
				}
				UnlockMemFileIf((int *)(iVar4 + 0x10149bb4));
			}
		}
	}
	return;
}

void DrawMonster(int x, int y, int mx, int my, int m, int CelSkip, int CelCap)

{
	int *piVar1;
	int iVar2;
	ulonglong uVar3;
	ulonglong uVar4;
	char light;
	uint *pCelBuff;

	iVar2 = 0x100f8fd0;
	if ((uint)m < 200) {
		m = m * 0xe8;
		pCelBuff = (uint *)(m + 0x10151a84);
		uVar3 = LockMemFileIf(pCelBuff);
		if (uVar3 == 0) {
			UnlockMemFileIf((int *)pCelBuff);
		} else {
			piVar1 = (int *)(m + 0x10151a98);
			if (0 < *piVar1) {
				uVar4 = BESwap_1003cdc8((byte *)uVar3);
				if ((int)uVar4 < 0x33) {
					uVar3 = BESwap_1003cdc8((byte *)uVar3);
					if (*piVar1 <= (int)uVar3) {
						if ((*(byte *)(**(int **)(iVar2 + -0x779c) + x * 0x70 + y) & 0x40) == 0) {
							Cl2DecodeFrm3(mx, my, (BYTE *)pCelBuff, *piVar1, *(int *)(*(int *)(m + 0x10151b10) + 0x1ec),
							    CelSkip, CelCap, '\x01');
							UnlockMemFileIf((int *)pCelBuff);
							return;
						}
						light = '\0';
						if (*(char *)(m + 0x10151af0) != '\0') {
							light = *(char *)(m + 0x10151af1) + '\x04';
						}
						if (*(int *)(m + 0x10151a34) == 0xf) {
							light = '\x02';
						}
						if ((*(int *)(*(int *)(iVar2 + -0x77a8) + **(int **)(iVar2 + -0x77ac) * 0x55ec + 0x1cc) != 0) && (8 < **(int **)(iVar2 + -0x7290))) {
							light = '\x01';
						}
						if (light == '\0') {
							Cl2DecodeLightTbl(mx, my, (BYTE *)pCelBuff, *piVar1,
							    *(int *)(*(int *)(m + 0x10151b10) + 0x1ec), CelSkip, CelCap);
						} else {
							Cl2DecodeFrm3(mx, my, (BYTE *)pCelBuff, *piVar1, *(int *)(*(int *)(m + 0x10151b10) + 0x1ec),
							    CelSkip, CelCap, light);
						}
						UnlockMemFileIf((int *)pCelBuff);
						return;
					}
				}
			}
			UnlockMemFileIf((int *)pCelBuff);
		}
	}
	return;
}

void DrawClippedMonster(int x, int y, int mx, int my, int m, int CelSkip, int capChunks)

{
	int *piVar1;
	int iVar2;
	ulonglong uVar3;
	ulonglong uVar4;
	char light;
	uint *pCelBuff;

	iVar2 = 0x100f8fd0;
	if ((uint)m < 200) {
		m = m * 0xe8;
		pCelBuff = (uint *)(m + 0x10151a84);
		uVar3 = LockMemFileIf(pCelBuff);
		if (uVar3 == 0) {
			UnlockMemFileIf((int *)pCelBuff);
		} else {
			piVar1 = (int *)(m + 0x10151a98);
			if (0 < *piVar1) {
				uVar4 = BESwap_1003cdc8((byte *)uVar3);
				if ((int)uVar4 < 0x33) {
					uVar3 = BESwap_1003cdc8((byte *)uVar3);
					if (*piVar1 <= (int)uVar3) {
						if ((*(byte *)(**(int **)(iVar2 + -0x779c) + x * 0x70 + y) & 0x40) == 0) {
							Cl2DecodeFrm5(mx, my, (BYTE *)pCelBuff, *piVar1, *(int *)(*(int *)(m + 0x10151b10) + 0x1ec),
							    CelSkip, capChunks, '\x01');
							UnlockMemFileIf((int *)pCelBuff);
							return;
						}
						light = '\0';
						if (*(char *)(m + 0x10151af0) != '\0') {
							light = *(char *)(m + 0x10151af1) + '\x04';
						}
						if (*(int *)(m + 0x10151a34) == 0xf) {
							light = '\x02';
						}
						if ((*(int *)(*(int *)(iVar2 + -0x77a8) + **(int **)(iVar2 + -0x77ac) * 0x55ec + 0x1cc) != 0) && (8 < **(int **)(iVar2 + -0x7290))) {
							light = '\x01';
						}
						if (light == '\0') {
							Cl2DecodeFrm6(mx, my, (BYTE *)pCelBuff, *piVar1, *(int *)(*(int *)(m + 0x10151b10) + 0x1ec),
							    CelSkip, capChunks);
						} else {
							Cl2DecodeFrm5(mx, my, (BYTE *)pCelBuff, *piVar1, *(int *)(*(int *)(m + 0x10151b10) + 0x1ec),
							    CelSkip, capChunks, light);
						}
						UnlockMemFileIf((int *)pCelBuff);
						return;
					}
				}
			}
			UnlockMemFileIf((int *)pCelBuff);
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DrawPlayer(int pnum,
    int x,
    int y,
    int px,
    int py,
    BYTE *pCelBuff,
    int nCel,
    int nWidth,
    int CelSkip,
    int capChunks)

{
	int iVar1;
	int iVar2;
	ulonglong uVar3;
	int CelSkip_00;
	int CelCap;

	iVar2 = 0x100f8fd0;
	if (((((*(byte *)(_DAT_1012f1bc + x * 0x70 + y) & 0x40) != 0) || (*(int *)((int)plr + myplr * 0x55ec + 0x1cc) != 0)) || ((iVar1 = _DAT_1019fd94, DAT_1012f316 == '\0' && (iVar1 = _DAT_1019fd94, currlevel == 0)))) && (iVar1 = _DAT_1019fd94, pCelBuff != (BYTE *)0x0)) {
		uVar3 = LockMemFileIf((uint *)pCelBuff);
		uVar3 = BESwap_1003cdc8((byte *)uVar3);
		UnlockMemFileIf((int *)pCelBuff);
		iVar1 = _DAT_1019fd94;
		if (((0 < nCel) && (iVar1 = _DAT_1019fd94, (int)uVar3 < 0x33)) && (iVar1 = _DAT_1019fd94, nCel <= (int)uVar3)) {
			if (pnum == (int)**(char **)(iVar2 + -0x775c)) {
				Cl2DecodeFrm2(-0x5b, px, py, pCelBuff, nCel, nWidth, CelSkip_00, CelCap);
			}
			iVar1 = _DAT_1019fd94;
			if (pnum == myplr) {
				Cl2DecodeFrm1(px, py, pCelBuff, nCel, nWidth, CelSkip_00, CelCap);
				iVar1 = _DAT_1019fd94;
				if (*(char *)((int)plr + pnum * 0x55ec + 0x5594) != '\0') {
					Cl2DecodeFrm1((px + *(int *)((int)plr + pnum * 0x55ec + 0x94)) - iRam10105074, py, (BYTE *)0x10104f94,
					    1, iRam10105034, CelSkip_00, CelCap);
					iVar1 = _DAT_1019fd94;
				}
			} else {
				if (((*(byte *)(_DAT_1012f1bc + x * 0x70 + y) & 0x40) == 0) || ((*(int *)((int)plr + myplr * 0x55ec + 0x1cc) != 0 && (8 < _DAT_1019fd94)))) {
					Cl2DecodeFrm3(px, py, pCelBuff, nCel, nWidth, CelSkip_00, CelCap, '\x01');
					iVar1 = _DAT_1019fd94;
					if (*(char *)((int)plr + pnum * 0x55ec + 0x5594) != '\0') {
						Cl2DecodeFrm3((px + *(int *)((int)plr + pnum * 0x55ec + 0x94)) - iRam10105074, py,
						    (BYTE *)0x10104f94, 1, iRam10105034, CelSkip_00, CelCap, '\x01');
						iVar1 = _DAT_1019fd94;
					}
				} else {
					if (_DAT_1019fd94 < 5) {
						_DAT_1019fd94 = 0;
					} else {
						_DAT_1019fd94 = _DAT_1019fd94 + -5;
					}
					Cl2DecodeLightTbl(px, py, pCelBuff, nCel, nWidth, CelSkip_00, CelCap);
					if (*(char *)((int)plr + pnum * 0x55ec + 0x5594) != '\0') {
						Cl2DecodeLightTbl((px + *(int *)((int)plr + pnum * 0x55ec + 0x94)) - iRam10105074, py,
						    (BYTE *)0x10104f94, 1, iRam10105034, CelSkip_00, CelCap);
					}
				}
			}
		}
	}
	_DAT_1019fd94 = iVar1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DrawClippedPlayer(int pnum,
    int x,
    int y,
    int px,
    int py,
    BYTE *pCelBuff,
    int nCel,
    int nWidth,
    int CelSkip,
    int capChunks)

{
	int iVar1;
	int iVar2;
	ulonglong uVar3;
	int CelSkip_00;
	int CelCap;

	iVar2 = 0x100f8fd0;
	if ((((*(byte *)(_DAT_1012f1bc + x * 0x70 + y) & 0x40) != 0) || (iVar1 = _DAT_1019fd94, *(int *)((int)plr + myplr * 0x55ec + 0x1cc) != 0)) && (iVar1 = _DAT_1019fd94, pCelBuff != (BYTE *)0x0)) {
		uVar3 = LockMemFileIf((uint *)pCelBuff);
		uVar3 = BESwap_1003cdc8((byte *)uVar3);
		UnlockMemFileIf((int *)pCelBuff);
		iVar1 = _DAT_1019fd94;
		if (((0 < nCel) && (iVar1 = _DAT_1019fd94, (int)uVar3 < 0x33)) && (iVar1 = _DAT_1019fd94, nCel <= (int)uVar3)) {
			if (pnum == (int)**(char **)(iVar2 + -0x775c)) {
				Cl2DecodeClrHL(-0x5b, px, py, pCelBuff, nCel, nWidth, CelSkip_00, CelCap);
			}
			iVar1 = _DAT_1019fd94;
			if (pnum == myplr) {
				Cl2DecodeFrm4(px, py, pCelBuff, nCel, nWidth, CelSkip_00, CelCap);
				iVar1 = _DAT_1019fd94;
				if (*(char *)((int)plr + pnum * 0x55ec + 0x5594) != '\0') {
					Cl2DecodeFrm4((px + *(int *)((int)plr + pnum * 0x55ec + 0x94)) - iRam10105074, py, (BYTE *)0x10104f94,
					    1, iRam10105034, CelSkip_00, CelCap);
					iVar1 = _DAT_1019fd94;
				}
			} else {
				if (((*(byte *)(_DAT_1012f1bc + x * 0x70 + y) & 0x40) == 0) || ((*(int *)((int)plr + myplr * 0x55ec + 0x1cc) != 0 && (8 < _DAT_1019fd94)))) {
					Cl2DecodeFrm5(px, py, pCelBuff, nCel, nWidth, CelSkip_00, CelCap, '\x01');
					iVar1 = _DAT_1019fd94;
					if (*(char *)((int)plr + pnum * 0x55ec + 0x5594) != '\0') {
						Cl2DecodeFrm5((px + *(int *)((int)plr + pnum * 0x55ec + 0x94)) - iRam10105074, py,
						    (BYTE *)0x10104f94, 1, iRam10105034, CelSkip_00, CelCap, '\x01');
						iVar1 = _DAT_1019fd94;
					}
				} else {
					if (_DAT_1019fd94 < 5) {
						_DAT_1019fd94 = 0;
					} else {
						_DAT_1019fd94 = _DAT_1019fd94 + -5;
					}
					Cl2DecodeFrm6(px, py, pCelBuff, nCel, nWidth, CelSkip_00, CelCap);
					if (*(char *)((int)plr + pnum * 0x55ec + 0x5594) != '\0') {
						Cl2DecodeFrm6((px + *(int *)((int)plr + pnum * 0x55ec + 0x94)) - iRam10105074, py,
						    (BYTE *)0x10104f94, 1, iRam10105034, CelSkip_00, CelCap);
					}
				}
			}
		}
	}
	_DAT_1019fd94 = iVar1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DrawDeadPlayer(int x, int y, int sx, int sy, int CelSkip, int capChunks, BOOL clipped)

{
	ulonglong uVar1;
	int bActivate;
	PlayerStruct *pPVar2;
	int iVar3;

	if (clipped == 0) {
		_DAT_100f4404 = &PTR_DrawPlayer_100f4e48;
	} else {
		_DAT_100f4404 = &PTR_DrawClippedPlayer_100f4e50;
	}
	pPVar2 = plr;
	iVar3 = x * 0x70 + y;
	bActivate = 0;
	*(byte *)(_DAT_1012f1bc + iVar3) = *(byte *)(_DAT_1012f1bc + iVar3) & 0xfb;
	do {
		uVar1 = LockMemFileIf((uint *)pPVar2->_pAnimData);
		if ((((pPVar2->plractive == false) || (pPVar2->_pHitPoints != 0)) || (pPVar2->plrlevel != (uint)currlevel)) || ((pPVar2->WorldX != x || (pPVar2->WorldY != y)))) {
			UnlockMemFileIf((int *)pPVar2->_pAnimData);
		} else {
			if ((uVar1 & 0xffffffff) == 0) {
				UnlockMemFileIf((int *)pPVar2->_pAnimData);
				return;
			}
			uVar1 = BESwap_1003cdc8((byte *)uVar1);
			if (((pPVar2->_pAnimFrame < 1) || (0x32 < (int)uVar1)) || ((int)uVar1 < pPVar2->_pAnimFrame)) {
				UnlockMemFileIf((int *)pPVar2->_pAnimData);
				return;
			}
			*(byte *)(iVar3 + _DAT_1012f1bc) = *(byte *)(iVar3 + _DAT_1012f1bc) | 4;
			fnMenu(bActivate);
			UnlockMemFileIf((int *)pPVar2->_pAnimData);
		}
		bActivate = bActivate + 1;
		pPVar2 = (PlayerStruct *)&pPVar2[1]._pSpellFlags;
		if (3 < bActivate) {
			return;
		}
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DrawObject(int x, int y, int ox, int oy, BOOL pre, int CelSkip, int capChunks)

{
	BYTE **ppBVar1;
	int *piVar2;
	byte bVar3;
	int iVar4;
	char cVar6;
	ulonglong uVar5;
	undefined uVar7;
	char cVar8;
	undefined uVar10;
	int iVar9;
	undefined uVar12;
	longlong lVar11;
	longlong lVar13;
	int iVar14;
	int sy;
	undefined in_stack_ffffffab;

	uVar12 = (undefined)CelSkip;
	uVar10 = (undefined)pre;
	cVar8 = (char)ox;
	uVar7 = (undefined)y;
	iVar4 = 0x100f8fd0;
	cVar6 = *(char *)(_DAT_1012f1ac + x * 0x70 + y);
	if (cVar6 < '\x01') {
		bVar3 = -(cVar6 + '\x01');
		lVar11 = ZEXT48(&DAT_1017e3d4) + (longlong)(char)bVar3 * 0x78;
		uVar12 = (undefined)lVar11;
		sy = (int)lVar11;
		if (pre != *(int *)(sy + 0x44)) {
			return;
		}
		CelSkip = 0;
		capChunks = 8;
		lVar11 = (ulonglong) * (uint *)(sy + 4) - (longlong)x;
		uVar10 = (undefined)lVar11;
		lVar13 = (ulonglong) * (uint *)(sy + 8) - (longlong)y;
		cVar6 = (char)lVar13;
		iVar9 = (int)lVar11;
		iVar14 = (int)lVar13;
		lVar11 = (ulonglong)(uint)(iVar9 << 5) + ((longlong)ox - (ulonglong) * (uint *)(sy + 0x2c));
		uVar7 = (undefined)lVar11;
		cVar8 = cVar6 * ' ';
		ox = (int)lVar11 + iVar14 * -0x20;
		sy = oy + iVar9 * 0x10 + iVar14 * 0x10;
	} else {
		bVar3 = cVar6 - 1;
		if (pre != *(int *)((int)(char)bVar3 * 0x78 + 0x1017e418)) {
			return;
		}
		ox = ox - *(int *)((int)(char)bVar3 * 0x78 + 0x1017e400);
		sy = oy;
	}
	if (bVar3 < 0x7f) {
		iVar9 = (int)(char)bVar3 * 0x78;
		ppBVar1 = (BYTE **)(iVar9 + 0x1017e3e8);
		cVar6 = LockMemFile(ZEXT48(*ppBVar1), uVar7, cVar8, (char)oy, uVar10, uVar12, bVar3, cVar6, in_stack_ffffffab);
		if ((longlong)cVar6 == 0) {
			UnlockMemFile((char)*ppBVar1);
		} else {
			piVar2 = (int *)(iVar9 + 0x1017e3f8);
			if ((0 < *piVar2) && (uVar5 = BESwap_1003cdc8((byte *)(int)cVar6), (int)uVar5 < 0x33)) {
				uVar5 = BESwap_1003cdc8((byte *)(int)cVar6);
				if (*piVar2 <= (int)uVar5) {
					if (bVar3 == **(byte **)(iVar4 + -0x774c)) {
						thunk_CelDecodeClr(
						    -0x3e, ox, sy, *ppBVar1, *piVar2, *(int *)(iVar9 + 0x1017e3fc), CelSkip, capChunks);
					}
					if (*(int *)(iVar9 + 0x1017e3e0) == 0) {
						if (((longlong)cVar6 & 0xffffffffU) == 0) {
							UnlockMemFile((char)*ppBVar1);
							return;
						}
						thunk_CelDrawHdrOnly(
						    ox, sy, *ppBVar1, *piVar2, *(int *)(iVar9 + 0x1017e3fc), CelSkip, capChunks);
					} else {
						CelDecodeHdrLightOnly(
						    ox, sy, *ppBVar1, *piVar2, *(int *)(iVar9 + 0x1017e3fc), CelSkip, capChunks);
					}
					UnlockMemFile((char)*ppBVar1);
					return;
				}
			}
			UnlockMemFile((char)*ppBVar1);
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DrawClippedObject(int x, int y, int ox, int oy, BOOL pre, int CelSkip, int capChunks)

{
	BYTE **ppBVar1;
	int *piVar2;
	byte bVar3;
	int iVar4;
	char cVar6;
	ulonglong uVar5;
	undefined uVar7;
	char cVar8;
	undefined uVar10;
	int iVar9;
	undefined uVar12;
	longlong lVar11;
	longlong lVar13;
	int iVar14;
	int sy;
	undefined in_stack_ffffffab;

	uVar12 = (undefined)CelSkip;
	uVar10 = (undefined)pre;
	cVar8 = (char)ox;
	uVar7 = (undefined)y;
	iVar4 = 0x100f8fd0;
	cVar6 = *(char *)(_DAT_1012f1ac + x * 0x70 + y);
	if (cVar6 < '\x01') {
		bVar3 = -(cVar6 + '\x01');
		lVar11 = ZEXT48(&DAT_1017e3d4) + (longlong)(char)bVar3 * 0x78;
		uVar12 = (undefined)lVar11;
		sy = (int)lVar11;
		if (pre != *(int *)(sy + 0x44)) {
			return;
		}
		CelSkip = 0;
		capChunks = 8;
		lVar11 = (ulonglong) * (uint *)(sy + 4) - (longlong)x;
		uVar10 = (undefined)lVar11;
		lVar13 = (ulonglong) * (uint *)(sy + 8) - (longlong)y;
		cVar6 = (char)lVar13;
		iVar9 = (int)lVar11;
		iVar14 = (int)lVar13;
		lVar11 = (ulonglong)(uint)(iVar9 << 5) + ((longlong)ox - (ulonglong) * (uint *)(sy + 0x2c));
		uVar7 = (undefined)lVar11;
		cVar8 = cVar6 * ' ';
		ox = (int)lVar11 + iVar14 * -0x20;
		sy = oy + iVar9 * 0x10 + iVar14 * 0x10;
	} else {
		bVar3 = cVar6 - 1;
		if (pre != *(int *)((int)(char)bVar3 * 0x78 + 0x1017e418)) {
			return;
		}
		ox = ox - *(int *)((int)(char)bVar3 * 0x78 + 0x1017e400);
		sy = oy;
	}
	if (bVar3 < 0x7f) {
		iVar9 = (int)(char)bVar3 * 0x78;
		ppBVar1 = (BYTE **)(iVar9 + 0x1017e3e8);
		cVar6 = LockMemFile(ZEXT48(*ppBVar1), uVar7, cVar8, (char)oy, uVar10, uVar12, bVar3, cVar6, in_stack_ffffffab);
		if (cVar6 == '\0') {
			UnlockMemFile((char)*ppBVar1);
		} else {
			piVar2 = (int *)(iVar9 + 0x1017e3f8);
			if ((0 < *piVar2) && (uVar5 = BESwap_1003cdc8((byte *)(int)cVar6), (int)uVar5 < 0x33)) {
				uVar5 = BESwap_1003cdc8((byte *)(int)cVar6);
				if (*piVar2 <= (int)uVar5) {
					if (bVar3 == **(byte **)(iVar4 + -0x774c)) {
						thunk_CelDrawHdrClrHL(
						    -0x3e, ox, sy, *ppBVar1, *piVar2, *(int *)(iVar9 + 0x1017e3fc), CelSkip, capChunks);
					}
					if (*(int *)(iVar9 + 0x1017e3e0) == 0) {
						thunk_Cel2DrawHdrOnly(
						    ox, sy, *ppBVar1, *piVar2, *(int *)(iVar9 + 0x1017e3fc), CelSkip, capChunks);
					} else {
						Cel2DecodeHdrLight(ox, sy, *ppBVar1, *piVar2, *(int *)(iVar9 + 0x1017e3fc), CelSkip, capChunks);
					}
					UnlockMemFile((char)*ppBVar1);
					return;
				}
			}
			UnlockMemFile((char)*ppBVar1);
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void scrollrt_draw_clipped_e_flag(BYTE *pBuff, int x, int y, int sx, int sy)

{
	ushort uVar1;
	undefined4 uVar2;
	undefined4 uVar3;
	undefined4 uVar4;
	int iVar5;
	int iVar6;
	ushort *puVar7;
	BYTE *pBVar8;

	uVar4 = _DAT_1019fd98;
	uVar3 = _DAT_1019fd94;
	uVar2 = _DAT_1019fd90;
	iVar5 = 0x100f8fd0;
	iVar6 = x * 0x70 + y;
	_DAT_1019fd90 = (int)*(short *)(_DAT_1012f1d4 + x * 0xe0 + y * 2);
	_DAT_1019fd94 = (int)*(char *)(_DAT_1012f1c4 + iVar6);
	_DAT_1019fd98 = (uint)(byte)((&DAT_10130332)[_DAT_1019fd90] & (&DAT_1012f1d8)[(int)*(char *)(_DAT_1012f1c8 + iVar6)]);
	iVar6 = IsometricCoord(x, y);
	DAT_1019fd8c = 1;
	puVar7 = (ushort *)(**(int **)(iVar5 + -0x7584) + iVar6 * 0x20);
	_level_cel_block = (uint)*puVar7;
	if (*puVar7 != 0) {
		drawLowerScreen(pBuff);
	}
	DAT_1019fd8c = 2;
	_level_cel_block = (uint)puVar7[1];
	if (puVar7[1] != 0) {
		drawLowerScreen(pBuff + 0x20);
	}
	DAT_1019fd8c = 0;
	iVar5 = 2;
	pBVar8 = pBuff;
	while (true) {
		if (_DAT_1012f2dc <= iVar5)
			break;
		uVar1 = puVar7[2];
		_level_cel_block = (uint)uVar1;
		if (uVar1 != 0) {
			drawLowerScreen(pBVar8 + -0x6000);
		}
		_level_cel_block = (uint)puVar7[3];
		if (puVar7[3] != 0) {
			drawLowerScreen(pBVar8 + -0x5fe0);
		}
		iVar5 = iVar5 + 2;
		pBVar8 = pBVar8 + -0x6000;
		puVar7 = puVar7 + 2;
	}
	scrollrt_draw_clipped_dungeon(pBuff, x, y, sx, sy, 0);
	_DAT_1019fd90 = uVar2;
	_DAT_1019fd94 = uVar3;
	_DAT_1019fd98 = uVar4;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void scrollrt_draw_clipped_dungeon(BYTE *pBuff, int sx, int sy, int dx, int dy, int eflag)

{
	char cVar1;
	byte bVar2;
	byte bVar3;
	char cVar4;
	char cVar5;
	short sVar6;
	short sVar7;
	BYTE *pCelBuff;
	BYTE **ppBVar8;
	int pnum;
	int iVar9;
	int sx_00;
	ulonglong pCelBuff_00;
	ulonglong uVar10;
	char cVar11;
	char cVar12;
	longlong lVar13;
	int nCel;
	undefined uVar14;
	longlong lVar15;
	undefined uVar16;
	longlong lVar17;
	undefined uVar18;
	undefined uVar20;
	longlong lVar19;
	undefined uVar21;
	undefined uVar22;
	undefined uVar23;
	char light;
	char cVar24;
	longlong lVar25;
	undefined uVar26;
	longlong lVar27;
	int nCel_00;
	int CelSkip;
	int capChunks;
	char bDead;

	uVar22 = (undefined)eflag;
	lVar25 = (longlong)dy;
	uVar20 = (undefined)dy;
	lVar17 = (longlong)dx;
	lVar17._7_1_ = (undefined)dx;
	lVar15 = (longlong)sy;
	lVar15._7_1_ = (undefined)sy;
	lVar13 = (longlong)sx;
	iVar9 = 0x100f8fd0;
	nCel_00 = sx * 0x70 + sy;
	light = (char)_DAT_1012f1b4;
	uVar16 = (undefined)_DAT_1012f1a8;
	uVar14 = (undefined)_DAT_1012f1c8;
	uVar23 = (undefined)_DAT_1012f1a0;
	sVar7 = *(short *)(_DAT_1012f1b4 + sx * 0xe0 + sy * 2);
	cVar1 = *(char *)(_DAT_1012f1a0 + nCel_00);
	bVar2 = *(byte *)(_DAT_1012f1bc + nCel_00);
	bDead = *(char *)(_DAT_1012f1b0 + nCel_00);
	cVar24 = *(char *)(_DAT_1012f1ac + nCel_00);
	bVar3 = *(byte *)(_DAT_1012f1a8 + nCel_00);
	cVar4 = *(char *)(_DAT_1012f1b8 + nCel_00);
	cVar5 = *(char *)(_DAT_1012f1c8 + nCel_00);
	cVar12 = *(char *)(_DAT_1012f1b8 + sx * 0x70 + sy + -1);
	sVar6 = *(short *)(_DAT_1012f1b4 + sx * 0xe0 + sy * 2 + -2);
	uVar21 = uVar20;
	uVar18 = (undefined)lVar17;
	if ((visiondebug != 0) && (uVar21 = uVar20, uVar18 = (undefined)lVar17, (bVar2 & 0x40) != 0)) {
		uVar16 = 1;
		uVar14 = SUB41(_DAT_10128fd8, 0);
		uVar18 = 0x40;
		uVar21 = 0;
		uVar22 = 8;
		iVar9 = 0x100f8fd0;
		Cel2DecodeHdrOnly(pBuff, _DAT_10128fd8, 1, 0x40, 0, 8);
	}
	if ((**(int **)(iVar9 + -0x70e4) != 0) && ((bVar2 & 1) != 0)) {
		uVar21 = 0;
		uVar22 = 8;
		uVar23 = 1;
		uVar14 = (undefined)lVar15;
		uVar18 = uVar20;
		uVar16 = (undefined)lVar17;
		DrawClippedMissile(sx, sy, dx, dy, 0, 8, 1);
	}
	if (**(int **)(iVar9 + -0x7290) < (int)**(char **)(iVar9 + -0x70cc)) {
		if (bDead != '\0') {
			uVar14 = (undefined) * (uint *)(iVar9 + -0x7614);
			lVar27 = (ulonglong) * (uint *)(iVar9 + -0x7614) + ((ulonglong)((int)bDead & 0x1f) - 1) * 0x50;
			nCel_00 = (int)lVar27;
			lVar27 = lVar27 + (ulonglong)(uint)((int)(char)((byte)((uint)(int)bDead >> 5) & 7) << 3);
			uVar26 = (undefined)lVar27;
			sx_00 = dx - *(int *)(nCel_00 + 0x48);
			pCelBuff_00._4_4_ = (uint *)lVar27;
			pCelBuff_00 = LockMemFileIf(pCelBuff_00._4_4_);
			if (pCelBuff_00 == 0) {
				UnlockMemFileIf((int *)pCelBuff_00._4_4_);
			} else {
				if (0 < *(int *)(nCel_00 + 0x40)) {
					uVar10 = BESwap_1003cdc8((byte *)pCelBuff_00);
					if ((int)uVar10 < 0x33) {
						pCelBuff_00 = BESwap_1003cdc8((byte *)pCelBuff_00);
						nCel = *(int *)(nCel_00 + 0x40);
						uVar18 = (undefined)nCel;
						if (nCel <= (int)pCelBuff_00) {
							light = *(char *)(nCel_00 + 0x4c);
							if (light == '\0') {
								uVar21 = (undefined) * (int *)(nCel_00 + 0x44);
								uVar22 = 0;
								uVar23 = 8;
								uVar14 = uVar20;
								uVar16 = uVar26;
								Cl2DecodeFrm6(sx_00, dy, (BYTE *)pCelBuff_00._4_4_, nCel, *(int *)(nCel_00 + 0x44), 0, 8);
							} else {
								uVar21 = (undefined) * (int *)(nCel_00 + 0x44);
								uVar22 = 0;
								uVar23 = 8;
								uVar14 = uVar20;
								uVar16 = uVar26;
								Cl2DecodeFrm5(
								    sx_00, dy, (BYTE *)pCelBuff_00._4_4_, nCel, *(int *)(nCel_00 + 0x44), 0, 8, light);
							}
							UnlockMemFileIf((int *)pCelBuff_00._4_4_);
							goto LAB_1009f63c;
						}
					}
				}
				UnlockMemFileIf((int *)pCelBuff_00._4_4_);
			}
		}
	LAB_1009f63c:
		if (cVar24 != '\0') {
			uVar21 = 1;
			uVar22 = 0;
			uVar23 = 8;
			uVar14 = (undefined)lVar15;
			uVar16 = (undefined)lVar17;
			uVar18 = uVar20;
			DrawClippedObject(sx, sy, dx, dy, 1, 0, 8);
		}
	}
	if (bVar3 != 0) {
		nCel_00 = *(int *)(iVar9 + -0x7690) + ((int)(char)bVar3 + -1) * 0x170;
		if ((*(int *)(nCel_00 + 0x34) == 0) && (bVar3 < 0x80)) {
			cVar11 = LockMemFile((ulonglong) * (uint *)(nCel_00 + 0x18), uVar14, uVar16, uVar18, uVar21, uVar22, uVar23,
			    light, (char)CelSkip);
			if (cVar11 == '\0') {
				UnlockMemFile((char)*(undefined4 *)(nCel_00 + 0x18));
			} else {
				if (0 < *(int *)(nCel_00 + 0x20)) {
					pCelBuff_00 = BESwap_1003cdc8((byte *)(int)cVar11);
					if ((int)pCelBuff_00 < 0x33) {
						pCelBuff_00 = BESwap_1003cdc8((byte *)(int)cVar11);
						sx_00 = *(int *)(nCel_00 + 0x20);
						uVar21 = (undefined)sx_00;
						if (sx_00 <= (int)pCelBuff_00) {
							nCel = dx - *(int *)(nCel_00 + 0x28);
							if ((int)(char)bVar3 + -1 == (int)**(char **)(iVar9 + -0x7748)) {
								light = '\b';
								thunk_CelDrawHdrClrHL(
								    -0x4b, nCel, dy, *(BYTE **)(nCel_00 + 0x18), sx_00, *(int *)(nCel_00 + 0x24), 0, 8);
							}
							uVar16 = SUB41(*(BYTE **)(nCel_00 + 0x18), 0);
							uVar18 = (undefined) * (int *)(nCel_00 + 0x20);
							uVar21 = (undefined) * (int *)(nCel_00 + 0x24);
							uVar22 = 0;
							uVar23 = 8;
							uVar14 = uVar20;
							Cel2DecodeHdrLight(nCel, dy, *(BYTE **)(nCel_00 + 0x18), *(int *)(nCel_00 + 0x20),
							    *(int *)(nCel_00 + 0x24), 0, 8);
							UnlockMemFile((char)*(undefined4 *)(nCel_00 + 0x18));
							goto LAB_1009f750;
						}
					}
				}
				UnlockMemFile((char)*(undefined4 *)(nCel_00 + 0x18));
			}
		}
	}
LAB_1009f750:
	if ((bVar2 & 0x20) != 0) {
		lVar27 = (longlong)cVar12 + 1;
		pCelBuff_00 = -lVar27;
		if ((pCelBuff_00 & 0xffffffff) < 4) {
			nCel = (int)lVar27 * -0x55ec;
			uVar16 = (undefined)(lVar15 + -1);
			lVar19 = (ulonglong) * (uint *)((int)plr + nCel + 100) + lVar25;
			uVar21 = (undefined)lVar19;
			lVar27 = ((ulonglong) * (uint *)((int)plr + nCel + 0x60) + lVar17) - (ulonglong) * (uint *)((int)plr + nCel + 0x94);
			uVar18 = (undefined)lVar27;
			pCelBuff = *(BYTE **)((int)plr + nCel + 0x7c);
			uVar22 = SUB41(pCelBuff, 0);
			nCel_00 = *(int *)((int)plr + nCel + 0x8c);
			uVar23 = (undefined)nCel_00;
			sx_00 = *(int *)((int)plr + nCel + 0x90);
			light = (char)sx_00;
			uVar14 = (char)sx;
			DrawClippedPlayer((int)pCelBuff_00, sx, (int)(lVar15 + -1), (int)lVar27, (int)lVar19, pCelBuff, nCel_00,
			    sx_00, CelSkip, capChunks);
			if (eflag != 0) {
				nCel_00 = *(int *)((int)plr + nCel + 0x98);
				if (nCel_00 != 0) {
					if (nCel_00 == 2) {
						scrollrt_draw_clipped_e_flag(pBuff + -0x3060, sx + -2, sy + 1, dx + -0x60, dy + -0x10);
					}
					uVar14 = (undefined)(lVar13 + -1);
					uVar16 = (undefined)(lVar15 + 1);
					uVar18 = (undefined)(lVar17 + -0x40);
					uVar21 = uVar20;
					scrollrt_draw_clipped_e_flag(
					    pBuff + -0x40, (int)(lVar13 + -1), (int)(lVar15 + 1), (int)(lVar17 + -0x40), dy);
				}
			}
		}
	}
	if ((bVar2 & 0x10) != 0) {
		if ((bVar2 & 0x40) == 0) {
			if (*(int *)((int)plr + **(int **)(iVar9 + -0x77ac) * 0x55ec + 0x1cc) == 0)
				goto LAB_1009f928;
		}
		if (sVar6 < 0) {
			nCel_00 = (int)sVar6 + 1;
			_DAT_1019fd80 = -nCel_00;
			if (_DAT_1019fd80 < 200) {
				nCel_00 = *(int *)(iVar9 + -0x7754) + nCel_00 * -0xe8;
				if ((*(uint *)(nCel_00 + 0xa0) & 1) == 0) {
					sx_00 = *(int *)(nCel_00 + 0xe0);
					uVar14 = (undefined)sx_00;
					if (sx_00 != 0) {
						lVar19 = (ulonglong) * (uint *)(nCel_00 + 0x3c) + lVar25;
						uVar18 = (undefined)lVar19;
						lVar27 = ((ulonglong) * (uint *)(nCel_00 + 0x38) + lVar17) - (ulonglong) * (uint *)(sx_00 + 0x1f0);
						uVar16 = (undefined)lVar27;
						LockMemFileIf((uint *)(nCel_00 + 0x54));
						sx_00 = (int)lVar27;
						nCel = (int)lVar19;
						if (_DAT_1019fd80 == **(uint **)(iVar9 + -0x7750)) {
							light = '\b';
							Cl2DecodeClrHL(-0x17, sx_00, nCel, (BYTE *)(nCel_00 + 0x54), *(int *)(nCel_00 + 0x68),
							    *(int *)(*(int *)(nCel_00 + 0xe0) + 0x1ec), 0, 8);
						}
						UnlockMemFileIf((int *)(nCel_00 + 0x54));
						uVar21 = (undefined)_DAT_1019fd80;
						uVar22 = 0;
						uVar23 = 8;
						uVar14 = (undefined)lVar15;
						DrawClippedMonster(sx, sy, sx_00, nCel, _DAT_1019fd80, 0, 8);
						if (eflag != 0) {
							if (*(int *)(nCel_00 + 0x6c) != 0) {
								uVar14 = (undefined)(lVar13 + -1);
								uVar16 = (undefined)(lVar15 + 1);
								uVar18 = (undefined)(lVar17 + -0x40);
								uVar21 = uVar20;
								scrollrt_draw_clipped_e_flag(
								    pBuff + -0x40, (int)(lVar13 + -1), (int)(lVar15 + 1), (int)(lVar17 + -0x40), dy);
							}
						}
					}
				}
			}
		}
	}
LAB_1009f928:
	if ((bVar2 & 4) != 0) {
		uVar21 = 0;
		uVar22 = 8;
		uVar23 = 1;
		uVar14 = (undefined)lVar15;
		uVar16 = (undefined)lVar17;
		uVar18 = uVar20;
		DrawDeadPlayer(sx, sy, dx, dy, 0, 8, 1);
	}
	uVar26 = (undefined)CelSkip;
	if (('\0' < cVar4) && (pCelBuff_00 = (longlong)cVar4 - 1, (pCelBuff_00 & 0xffffffff) < 4)) {
		pnum = (int)pCelBuff_00;
		nCel = pnum * 0x55ec;
		lVar19 = (ulonglong) * (uint *)((int)plr + nCel + 100) + lVar25;
		uVar21 = (undefined)lVar19;
		lVar27 = ((ulonglong) * (uint *)((int)plr + nCel + 0x60) + lVar17) - (ulonglong) * (uint *)((int)plr + nCel + 0x94);
		uVar18 = (undefined)lVar27;
		pCelBuff = *(BYTE **)((int)plr + nCel + 0x7c);
		uVar22 = SUB41(pCelBuff, 0);
		nCel_00 = *(int *)((int)plr + nCel + 0x8c);
		uVar23 = (undefined)nCel_00;
		sx_00 = *(int *)((int)plr + nCel + 0x90);
		light = (char)sx_00;
		uVar14 = (char)sx;
		uVar16 = (undefined)lVar15;
		DrawClippedPlayer(pnum, sx, sy, (int)lVar27, (int)lVar19, pCelBuff, nCel_00, sx_00, CelSkip, capChunks);
		if ((eflag != 0) && (nCel_00 = *(int *)((int)plr + nCel + 0x98), nCel_00 != 0)) {
			if (nCel_00 == 2) {
				scrollrt_draw_clipped_e_flag(pBuff + -0x3060, sx + -2, sy + 1, dx + -0x60, dy + -0x10);
			}
			uVar14 = (undefined)(lVar13 + -1);
			uVar16 = (undefined)(lVar15 + 1);
			uVar18 = (undefined)(lVar17 + -0x40);
			uVar21 = uVar20;
			scrollrt_draw_clipped_e_flag(
			    pBuff + -0x40, (int)(lVar13 + -1), (int)(lVar15 + 1), (int)(lVar17 + -0x40), dy);
		}
	}
	if (0 < sVar7) {
		if ((bVar2 & 0x40) == 0) {
			if (*(int *)((int)plr + **(int **)(iVar9 + -0x77ac) * 0x55ec + 0x1cc) == 0)
				goto LAB_1009fb10;
		}
		_DAT_1019fd80 = (int)sVar7 - 1;
		if (_DAT_1019fd80 < 200) {
			nCel_00 = *(int *)(iVar9 + -0x7754) + _DAT_1019fd80 * 0xe8;
			if ((*(uint *)(nCel_00 + 0xa0) & 1) == 0) {
				sx_00 = *(int *)(nCel_00 + 0xe0);
				uVar14 = (undefined)sx_00;
				if (sx_00 != 0) {
					lVar25 = (ulonglong) * (uint *)(nCel_00 + 0x3c) + lVar25;
					uVar18 = (undefined)lVar25;
					lVar27 = ((ulonglong) * (uint *)(nCel_00 + 0x38) + lVar17) - (ulonglong) * (uint *)(sx_00 + 0x1f0);
					uVar16 = (undefined)lVar27;
					LockMemFileIf((uint *)(nCel_00 + 0x54));
					sx_00 = (int)lVar27;
					nCel = (int)lVar25;
					if (_DAT_1019fd80 == **(uint **)(iVar9 + -0x7750)) {
						light = '\b';
						Cl2DecodeClrHL(-0x17, sx_00, nCel, (BYTE *)(nCel_00 + 0x54), *(int *)(nCel_00 + 0x68),
						    *(int *)(*(int *)(nCel_00 + 0xe0) + 0x1ec), 0, 8);
					}
					UnlockMemFileIf((int *)(nCel_00 + 0x54));
					uVar21 = (undefined)_DAT_1019fd80;
					uVar22 = 0;
					uVar23 = 8;
					uVar14 = (undefined)lVar15;
					DrawClippedMonster(sx, sy, sx_00, nCel, _DAT_1019fd80, 0, 8);
					if (eflag != 0) {
						if (*(int *)(nCel_00 + 0x6c) != 0) {
							uVar14 = (undefined)(lVar13 + -1);
							uVar16 = (undefined)(lVar15 + 1);
							uVar18 = (undefined)(lVar17 + -0x40);
							uVar21 = uVar20;
							scrollrt_draw_clipped_e_flag(
							    pBuff + -0x40, (int)(lVar13 + -1), (int)(lVar15 + 1), (int)(lVar17 + -0x40), dy);
						}
					}
				}
			}
		}
	}
LAB_1009fb10:
	if ((bVar2 & 1) != 0) {
		uVar21 = 0;
		uVar22 = 8;
		uVar23 = 0;
		uVar14 = (undefined)lVar15;
		uVar16 = (undefined)lVar17;
		uVar18 = uVar20;
		DrawClippedMissile(sx, sy, dx, dy, 0, 8, 0);
	}
	if (cVar24 != '\0') {
		if (**(int **)(iVar9 + -0x7290) < (int)**(char **)(iVar9 + -0x70cc)) {
			uVar21 = 0;
			uVar22 = 0;
			uVar23 = 8;
			uVar14 = (undefined)lVar15;
			uVar16 = (undefined)lVar17;
			uVar18 = uVar20;
			DrawClippedObject(sx, sy, dx, dy, 0, 0, 8);
		}
	}
	if (bVar3 != 0) {
		nCel_00 = *(int *)(iVar9 + -0x7690) + ((int)(char)bVar3 + -1) * 0x170;
		if ((*(int *)(nCel_00 + 0x34) != 0) && (bVar3 < 0x80)) {
			cVar12 = LockMemFile(
			    (ulonglong) * (uint *)(nCel_00 + 0x18), uVar14, uVar16, uVar18, uVar21, uVar22, uVar23, light, uVar26);
			if (cVar12 == '\0') {
				UnlockMemFile((char)*(undefined4 *)(nCel_00 + 0x18));
			} else {
				if (0 < *(int *)(nCel_00 + 0x20)) {
					pCelBuff_00 = BESwap_1003cdc8((byte *)(int)cVar12);
					if ((int)pCelBuff_00 < 0x33) {
						pCelBuff_00 = BESwap_1003cdc8((byte *)(int)cVar12);
						if (*(int *)(nCel_00 + 0x20) <= (int)pCelBuff_00) {
							dx = dx - *(int *)(nCel_00 + 0x28);
							if ((int)(char)bVar3 + -1 == (int)**(char **)(iVar9 + -0x7748)) {
								thunk_CelDrawHdrClrHL(-0x4b, dx, dy, *(BYTE **)(nCel_00 + 0x18), *(int *)(nCel_00 + 0x20),
								    *(int *)(nCel_00 + 0x24), 0, 8);
							}
							Cel2DecodeHdrLight(dx, dy, *(BYTE **)(nCel_00 + 0x18), *(int *)(nCel_00 + 0x20),
							    *(int *)(nCel_00 + 0x24), 0, 8);
							UnlockMemFile((char)*(undefined4 *)(nCel_00 + 0x18));
							goto LAB_1009fc68;
						}
					}
				}
				UnlockMemFile((char)*(undefined4 *)(nCel_00 + 0x18));
			}
		}
	}
LAB_1009fc68:
	if (cVar1 != '\0') {
		ppBVar8 = *(BYTE ***)(iVar9 + -0x7574);
		**(uint **)(iVar9 + -0x7294) = (uint) * (byte *)(*(int *)(iVar9 + -0x7268) + (int)cVar5);
		Cel2DecodeLightTrans(pBuff, *ppBVar8, (int)cVar1, 0x40, 0, 8);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void scrollrt_draw_lower(int x, int y, int sx, int sy, int chunks, int eflag)

{
	bool bVar1;
	ushort uVar2;
	ushort *puVar3;
	undefined8 uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	ulonglong uVar8;
	int *piVar9;
	ushort *puVar10;
	int iVar11;
	BYTE *pBuff;
	int iStack0000002c;

	uVar4 = 0x100f8fd0;
	uVar8 = ZEXT48(&DAT_1012f1c8);
	iStack0000002c = eflag;
	iVar5 = IsometricCoord(x, y);
	iVar7 = (int)uVar4;
	puVar10 = (ushort *)(**(int **)(iVar7 + -0x7584) + iVar5 * 0x20);
	if (iStack0000002c != 0) {
		if (((uint)y < 0x70) && ((uint)x < 0x70)) {
			_DAT_1019fd90 = (int)*(short *)(**(int **)(iVar7 + -0x757c) + x * 0xe0 + y * 2);
			iVar6 = x * 0x70 + y;
			**(int **)(iVar7 + -0x7290) = (int)*(char *)(**(int **)(iVar7 + -0x758c) + iVar6);
			iVar5 = _DAT_101271e4;
			if (_DAT_1019fd90 == 0) {
				thunk_world_draw_black_tile((BYTE *)(_DAT_101271e4 + *(int *)(&DAT_1019ed80 + sy * 4) + sx));
			} else {
				iVar11 = *(int *)(&DAT_1019ed80 + sy * 4);
				**(uint **)(iVar7 + -0x7294) = (uint)(*(byte *)(*(int *)(iVar7 + -0x7230) + _DAT_1019fd90) & *(byte *)(*(int *)(iVar7 + -0x7268) + (int)*(char *)(*(int *)uVar8 + iVar6)));
				pBuff = (BYTE *)(iVar5 + iVar11 + sx + 0x20);
				DAT_1019fd8c = 2;
				_level_cel_block = (uint)puVar10[1];
				if (puVar10[1] != 0) {
					drawLowerScreen(pBuff);
				}
				DAT_1019fd8c = 0;
				_level_cel_block = (uint)puVar10[3];
				if (puVar10[3] != 0) {
					drawLowerScreen(pBuff + -0x6000);
				}
				_level_cel_block = (uint)puVar10[5];
				if (puVar10[5] != 0) {
					drawLowerScreen(pBuff + -0xc000);
				}
				_level_cel_block = (uint)puVar10[7];
				if (puVar10[7] != 0) {
					drawLowerScreen(pBuff + -0x12000);
				}
				_level_cel_block = (uint)puVar10[9];
				if (puVar10[9] != 0) {
					drawLowerScreen(pBuff + -0x18000);
				}
				_level_cel_block = (uint)puVar10[0xb];
				if ((puVar10[0xb] != 0) && (**(char **)((int)uVar4 + -0x7794) == '\x04')) {
					drawLowerScreen(pBuff + -0x1e000);
				}
				scrollrt_draw_clipped_dungeon(
				    (BYTE *)(_DAT_101271e4 + *(int *)(&DAT_1019ed80 + sy * 4) + sx), x, y, sx, sy, 0);
			}
		}
		x = x + 1;
		y = y - 1;
		sx = sx + 0x40;
		puVar10 = puVar10 + 0x10;
		chunks = chunks + -1;
	}
	iVar5 = x * 0xe0;
	iVar6 = x * 0x70;
	piVar9 = (int *)(&DAT_1019ed80 + sy * 4);
	iVar7 = y << 1;
	while (true) {
		iVar11 = (int)uVar4;
		bVar1 = chunks == 0;
		chunks = chunks + -1;
		if (((bVar1) || (y < 0)) || (0x6f < x))
			break;
		if ((y < 0x70) && (-1 < x)) {
			_DAT_1019fd90 = (int)*(short *)(**(int **)(iVar11 + -0x757c) + iVar5 + iVar7);
			**(int **)(iVar11 + -0x7290) = (int)*(char *)(**(int **)(iVar11 + -0x758c) + iVar6 + y);
			if (_DAT_1019fd90 == 0) {
				thunk_world_draw_black_tile((BYTE *)(_DAT_101271e4 + *piVar9 + sx));
			} else {
				pBuff = (BYTE *)(_DAT_101271e4 + *piVar9 + sx);
				**(uint **)(iVar11 + -0x7294) = (uint)(*(byte *)(*(int *)(iVar11 + -0x7230) + _DAT_1019fd90) & *(byte *)(*(int *)(iVar11 + -0x7268) + (int)*(char *)(*(int *)uVar8 + iVar6 + y)));
				DAT_1019fd8c = 1;
				_level_cel_block = (uint)*puVar10;
				if (*puVar10 != 0) {
					drawLowerScreen(pBuff);
				}
				DAT_1019fd8c = 2;
				_level_cel_block = (uint)puVar10[1];
				if (puVar10[1] != 0) {
					drawLowerScreen(pBuff + 0x20);
				}
				DAT_1019fd8c = 0;
				iVar11 = 2;
				puVar3 = puVar10;
				while (iVar11 < _DAT_1012f2dc) {
					uVar2 = puVar3[2];
					_level_cel_block = (uint)uVar2;
					if (uVar2 != 0) {
						drawLowerScreen(pBuff + -0x6000);
					}
					_level_cel_block = (uint)puVar3[3];
					if (puVar3[3] != 0) {
						drawLowerScreen(pBuff + -0x5fe0);
					}
					iVar11 = iVar11 + 2;
					pBuff = pBuff + -0x6000;
					puVar3 = puVar3 + 2;
				}
				scrollrt_draw_clipped_dungeon((BYTE *)(_DAT_101271e4 + *piVar9 + sx), x, y, sx, sy, 1);
			}
		}
		iVar5 = iVar5 + 0xe0;
		iVar6 = iVar6 + 0x70;
		x = x + 1;
		iVar7 = iVar7 + -2;
		y = y - 1;
		sx = sx + 0x40;
		puVar10 = puVar10 + 0x10;
	}
	if (((iStack0000002c != 0) && ((uint)y < 0x70)) && ((uint)x < 0x70)) {
		_DAT_1019fd90 = (int)*(short *)(**(int **)(iVar11 + -0x757c) + x * 0xe0 + y * 2);
		iVar7 = x * 0x70 + y;
		**(int **)(iVar11 + -0x7290) = (int)*(char *)(**(int **)(iVar11 + -0x758c) + iVar7);
		if (_DAT_1019fd90 == 0) {
			thunk_world_draw_black_tile((BYTE *)(_DAT_101271e4 + *piVar9 + sx));
		} else {
			pBuff = (BYTE *)(_DAT_101271e4 + *piVar9 + sx);
			**(uint **)(iVar11 + -0x7294) = (uint)(*(byte *)(*(int *)(iVar11 + -0x7230) + _DAT_1019fd90) & *(byte *)(*(int *)(iVar11 + -0x7268) + (int)*(char *)(*(int *)uVar8 + iVar7)));
			DAT_1019fd8c = 1;
			_level_cel_block = (uint)*puVar10;
			if (*puVar10 != 0) {
				drawLowerScreen(pBuff);
			}
			DAT_1019fd8c = 0;
			_level_cel_block = (uint)puVar10[2];
			if (puVar10[2] != 0) {
				drawLowerScreen(pBuff + -0x6000);
			}
			_level_cel_block = (uint)puVar10[4];
			if (puVar10[4] != 0) {
				drawLowerScreen(pBuff + -0xc000);
			}
			_level_cel_block = (uint)puVar10[6];
			if (puVar10[6] != 0) {
				drawLowerScreen(pBuff + -0x12000);
			}
			_level_cel_block = (uint)puVar10[8];
			if (puVar10[8] != 0) {
				drawLowerScreen(pBuff + -0x18000);
			}
			_level_cel_block = (uint)puVar10[10];
			if ((puVar10[10] != 0) && (**(char **)(iVar11 + -0x7794) == '\x04')) {
				drawLowerScreen(pBuff + -0x1e000);
			}
			scrollrt_draw_clipped_dungeon((BYTE *)(_DAT_101271e4 + *piVar9 + sx), x, y, sx, sy, 0);
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void scrollrt_draw_clipped_e_flag_2(BYTE *pBuff, int x, int y, int skipChunks, int CelSkip, int sx, int sy)

{
	undefined4 uVar1;
	undefined4 uVar2;
	undefined4 uVar3;
	int iVar4;
	int iVar5;
	BYTE *pBuff_00;
	BYTE *pBuff_01;

	uVar3 = _DAT_1019fd98;
	uVar2 = _DAT_1019fd94;
	uVar1 = _DAT_1019fd90;
	iVar4 = 0x100f8fd0;
	iVar5 = x * 0x70 + y;
	_DAT_1019fd90 = (int)*(short *)(_DAT_1012f1d4 + x * 0xe0 + y * 2);
	pBuff_00 = pBuff + skipChunks * 0x6000;
	_DAT_1019fd94 = (int)*(char *)(_DAT_1012f1c4 + iVar5);
	_DAT_1019fd98 = (uint)(byte)((&DAT_10130332)[_DAT_1019fd90] & (&DAT_1012f1d8)[(int)*(char *)(_DAT_1012f1c8 + iVar5)]);
	iVar5 = IsometricCoord(x, y);
	iVar4 = **(int **)(iVar4 + -0x7584) + iVar5 * 0x20;
	pBuff_01 = pBuff_00;
	if (skipChunks == 2) {
	LAB_100a03a0:
		pBuff_00 = pBuff_01 + -0x6000;
		_level_cel_block = (uint) * (ushort *)(iVar4 + 0xc);
		if (*(ushort *)(iVar4 + 0xc) != 0) {
			drawLowerScreen(pBuff_00);
		}
		_level_cel_block = (uint) * (ushort *)(iVar4 + 0xe);
		if (*(ushort *)(iVar4 + 0xe) != 0) {
			drawLowerScreen(pBuff_01 + -0x5fe0);
		}
	} else {
		if (skipChunks < 2) {
			if (skipChunks == 0) {
				_level_cel_block = (uint) * (ushort *)(iVar4 + 4);
				if (*(ushort *)(iVar4 + 4) != 0) {
					drawLowerScreen(pBuff_00);
				}
				_level_cel_block = (uint) * (ushort *)(iVar4 + 6);
				if (*(ushort *)(iVar4 + 6) != 0) {
					drawLowerScreen(pBuff_00 + 0x20);
				}
			} else {
				if (skipChunks < 0)
					goto LAB_100a0404;
			}
			pBuff_01 = pBuff_00 + -0x6000;
			_level_cel_block = (uint) * (ushort *)(iVar4 + 8);
			if (*(ushort *)(iVar4 + 8) != 0) {
				drawLowerScreen(pBuff_01);
			}
			_level_cel_block = (uint) * (ushort *)(iVar4 + 10);
			if (*(ushort *)(iVar4 + 10) != 0) {
				drawLowerScreen(pBuff_00 + -0x5fe0);
			}
			goto LAB_100a03a0;
		}
		if (3 < skipChunks)
			goto LAB_100a0404;
	}
	_level_cel_block = (uint) * (ushort *)(iVar4 + 0x10);
	if (*(ushort *)(iVar4 + 0x10) != 0) {
		drawLowerScreen(pBuff_00 + -0x6000);
	}
	_level_cel_block = (uint) * (ushort *)(iVar4 + 0x12);
	if (*(ushort *)(iVar4 + 0x12) != 0) {
		drawLowerScreen(pBuff_00 + -0x5fe0);
	}
LAB_100a0404:
	if (CelSkip < 8) {
		scrollrt_draw_clipped_dungeon_2(pBuff, x, y, skipChunks, CelSkip, sx, sy, 0);
	}
	_DAT_1019fd90 = uVar1;
	_DAT_1019fd94 = uVar2;
	_DAT_1019fd98 = uVar3;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void scrollrt_draw_clipped_dungeon_2(BYTE *pBuff,
    int sx,
    int sy,
    int skipChunks,
    int CelSkip,
    int dx,
    int dy,
    int eflag)

{
	char cVar1;
	char cVar2;
	byte bVar3;
	byte bVar4;
	char cVar5;
	char cVar6;
	short sVar7;
	BYTE **ppBVar8;
	PlayerStruct *pPVar9;
	int iVar10;
	int iVar11;
	int sx_00;
	ulonglong pCelBuff;
	ulonglong uVar12;
	char cVar13;
	char cVar14;
	longlong lVar15;
	int nCel;
	int pnum;
	undefined uVar16;
	longlong lVar17;
	longlong lVar18;
	undefined uVar19;
	undefined uVar20;
	undefined uVar21;
	undefined uVar23;
	longlong lVar22;
	undefined uVar24;
	longlong lVar25;
	undefined uVar26;
	undefined uVar27;
	undefined uVar28;
	char light;
	PlayerStruct *pPVar29;
	longlong lVar30;
	undefined uVar31;
	int CelSkip_00;
	int capChunks;

	light = (char)eflag;
	lVar30 = (longlong)dy;
	uVar27 = (undefined)dy;
	lVar25 = (longlong)dx;
	lVar25._7_1_ = (undefined)dx;
	uVar23 = (undefined)CelSkip;
	uVar20 = (undefined)skipChunks;
	lVar17 = (longlong)sy;
	lVar17._7_1_ = (undefined)sy;
	lVar15 = (longlong)sx;
	iVar11 = 0x100f8fd0;
	pPVar29 = plr;
	iVar10 = sx * 0x70 + sy;
	uVar16 = (undefined)_DAT_1012f1c8;
	cVar1 = *(char *)(_DAT_1012f1ac + iVar10);
	lVar18 = (ulonglong)_DAT_1012f1b4 + lVar15 * 0xe0 + (ulonglong)(uint)(sy * 2);
	uVar19 = (undefined)lVar18;
	cVar13 = *(char *)(_DAT_1012f1b0 + iVar10);
	cVar2 = *(char *)(_DAT_1012f1a0 + iVar10);
	bVar3 = *(byte *)(_DAT_1012f1bc + iVar10);
	bVar4 = *(byte *)(_DAT_1012f1a8 + iVar10);
	cVar5 = *(char *)(_DAT_1012f1b8 + iVar10);
	cVar6 = *(char *)(_DAT_1012f1c8 + iVar10);
	iVar10 = (int)*(short *)(_DAT_1012f1b4 + (int)(lVar15 * 0xe0) + sy * 2);
	cVar14 = *(char *)(_DAT_1012f1b8 + sx * 0x70 + sy + -1);
	sVar7 = *(short *)((int)lVar18 + -2);
	uVar24 = uVar23;
	uVar21 = uVar20;
	uVar26 = (undefined)lVar25;
	uVar28 = uVar27;
	if ((visiondebug != 0) && (uVar24 = uVar23, uVar21 = uVar20, uVar26 = (undefined)lVar25, uVar28 = uVar27, (bVar3 & 0x40) != 0)) {
		uVar16 = SUB41(_DAT_10128fd8, 0);
		uVar19 = 1;
		uVar21 = 0x40;
		uVar26 = 8;
		uVar24 = uVar23;
		uVar28 = uVar27;
		iVar11 = 0x100f8fd0;
		pPVar29 = plr;
		Cel2DecodeHdrOnly(pBuff, _DAT_10128fd8, 1, 0x40, CelSkip, 8);
	}
	if ((**(int **)(iVar11 + -0x70e4) != 0) && ((bVar3 & 1) != 0)) {
		uVar26 = 8;
		uVar28 = 1;
		uVar16 = (undefined)lVar17;
		uVar24 = uVar23;
		uVar21 = uVar27;
		uVar19 = (undefined)lVar25;
		DrawClippedMissile(sx, sy, dx, dy, CelSkip, 8, 1);
	}
	if (**(int **)(iVar11 + -0x7290) < (int)**(char **)(iVar11 + -0x70cc)) {
		if (cVar13 != '\0') {
			uVar16 = (undefined) * (uint *)(iVar11 + -0x7614);
			lVar18 = (ulonglong) * (uint *)(iVar11 + -0x7614) + ((ulonglong)((int)cVar13 & 0x1f) - 1) * 0x50;
			pnum = (int)lVar18;
			lVar18 = lVar18 + (ulonglong)(uint)((int)(char)((byte)((uint)(int)cVar13 >> 5) & 7) << 3);
			uVar31 = (undefined)lVar18;
			sx_00 = dx - *(int *)(pnum + 0x48);
			pCelBuff._4_4_ = (uint *)lVar18;
			pCelBuff = LockMemFileIf(pCelBuff._4_4_);
			if (pCelBuff == 0) {
				UnlockMemFileIf((int *)pCelBuff._4_4_);
			} else {
				if (0 < *(int *)(pnum + 0x40)) {
					uVar12 = BESwap_1003cdc8((byte *)pCelBuff);
					if ((int)uVar12 < 0x33) {
						pCelBuff = BESwap_1003cdc8((byte *)pCelBuff);
						nCel = *(int *)(pnum + 0x40);
						uVar21 = (undefined)nCel;
						if (nCel <= (int)pCelBuff) {
							light = *(char *)(pnum + 0x4c);
							if (light == '\0') {
								uVar24 = (undefined) * (int *)(pnum + 0x44);
								uVar28 = 8;
								uVar16 = uVar27;
								uVar19 = uVar31;
								uVar26 = uVar23;
								Cl2DecodeFrm6(sx_00, dy, (BYTE *)pCelBuff._4_4_, nCel, *(int *)(pnum + 0x44), CelSkip, 8);
							} else {
								uVar24 = (undefined) * (int *)(pnum + 0x44);
								uVar28 = 8;
								uVar16 = uVar27;
								uVar19 = uVar31;
								uVar26 = uVar23;
								Cl2DecodeFrm5(
								    sx_00, dy, (BYTE *)pCelBuff._4_4_, nCel, *(int *)(pnum + 0x44), CelSkip, 8, light);
							}
							UnlockMemFileIf((int *)pCelBuff._4_4_);
							goto LAB_100a0694;
						}
					}
				}
				UnlockMemFileIf((int *)pCelBuff._4_4_);
			}
		}
	LAB_100a0694:
		if (cVar1 != '\0') {
			uVar24 = 1;
			uVar28 = 8;
			uVar16 = (undefined)lVar17;
			uVar19 = (undefined)lVar25;
			uVar21 = uVar27;
			uVar26 = uVar23;
			DrawClippedObject(sx, sy, dx, dy, 1, CelSkip, 8);
		}
	}
	if (bVar4 != 0) {
		pnum = *(int *)(iVar11 + -0x7690) + ((int)(char)bVar4 + -1) * 0x170;
		if ((*(int *)(pnum + 0x34) == 0) && (bVar4 < 0x80)) {
			cVar13 = LockMemFile((ulonglong) * (uint *)(pnum + 0x18), uVar16, uVar19, uVar21, uVar24, uVar26, uVar28,
			    light, (char)CelSkip_00);
			if (cVar13 == '\0') {
				UnlockMemFile((char)*(undefined4 *)(pnum + 0x18));
			} else {
				if (0 < *(int *)(pnum + 0x20)) {
					pCelBuff = BESwap_1003cdc8((byte *)(int)cVar13);
					if ((int)pCelBuff < 0x33) {
						pCelBuff = BESwap_1003cdc8((byte *)(int)cVar13);
						sx_00 = *(int *)(pnum + 0x20);
						uVar24 = (undefined)sx_00;
						if (sx_00 <= (int)pCelBuff) {
							nCel = dx - *(int *)(pnum + 0x28);
							if ((int)(char)bVar4 + -1 == (int)**(char **)(iVar11 + -0x7748)) {
								light = '\b';
								thunk_CelDrawHdrClrHL(
								    -0x4b, nCel, dy, *(BYTE **)(pnum + 0x18), sx_00, *(int *)(pnum + 0x24), CelSkip, 8);
							}
							uVar19 = SUB41(*(BYTE **)(pnum + 0x18), 0);
							uVar21 = (undefined) * (int *)(pnum + 0x20);
							uVar24 = (undefined) * (int *)(pnum + 0x24);
							uVar28 = 8;
							uVar16 = uVar27;
							uVar26 = uVar23;
							Cel2DecodeHdrLight(nCel, dy, *(BYTE **)(pnum + 0x18), *(int *)(pnum + 0x20),
							    *(int *)(pnum + 0x24), CelSkip, 8);
							UnlockMemFile((char)*(undefined4 *)(pnum + 0x18));
							goto LAB_100a07ac;
						}
					}
				}
				UnlockMemFile((char)*(undefined4 *)(pnum + 0x18));
			}
		}
	}
LAB_100a07ac:
	if ((bVar3 & 0x20) != 0) {
		lVar18 = (longlong)cVar14 + 1;
		pCelBuff = -lVar18;
		if ((pCelBuff & 0xffffffff) < 4) {
			uVar19 = (undefined)(lVar17 + -1);
			pPVar9 = (PlayerStruct *)((int)pPVar29 + (int)lVar18 * -0x55ec);
			lVar22 = (ulonglong)(uint)pPVar9->_pyoff + lVar30;
			uVar24 = (undefined)lVar22;
			lVar18 = ((ulonglong)(uint)pPVar9->_pxoff + lVar25) - (ulonglong)(uint)pPVar9->_pAnimWidth2;
			uVar21 = (undefined)lVar18;
			uVar26 = SUB41(pPVar9->_pAnimData, 0);
			uVar28 = (undefined)pPVar9->_pAnimFrame;
			light = (char)pPVar9->_pAnimWidth;
			uVar16 = (char)sx;
			DrawClippedPlayer((int)pCelBuff, sx, (int)(lVar17 + -1), (int)lVar18, (int)lVar22, pPVar9->_pAnimData,
			    pPVar9->_pAnimFrame, pPVar9->_pAnimWidth, CelSkip_00, capChunks);
			if (eflag != 0) {
				if (pPVar9->_peflag != 0) {
					if (pPVar9->_peflag == 2) {
						scrollrt_draw_clipped_e_flag_2(
						    pBuff + -0x3060, sx + -2, sy + 1, skipChunks, CelSkip, dx + -0x60, dy + -0x10);
					}
					uVar16 = (undefined)(lVar15 + -1);
					uVar19 = (undefined)(lVar17 + 1);
					uVar26 = (undefined)(lVar25 + -0x40);
					uVar21 = uVar20;
					uVar24 = uVar23;
					uVar28 = uVar27;
					scrollrt_draw_clipped_e_flag_2(pBuff + -0x40, (int)(lVar15 + -1), (int)(lVar17 + 1), skipChunks,
					    CelSkip, (int)(lVar25 + -0x40), dy);
				}
			}
		}
	}
	if ((bVar3 & 0x10) != 0) {
		if ((bVar3 & 0x40) == 0) {
			if (*(int *)((int)pPVar29 + **(int **)(iVar11 + -0x77ac) * 0x55ec + 0x1cc) == 0)
				goto LAB_100a0998;
		}
		if (sVar7 < 0) {
			pnum = (int)sVar7 + 1;
			_DAT_1019fd80 = -pnum;
			if (_DAT_1019fd80 < 200) {
				pnum = *(int *)(iVar11 + -0x7754) + pnum * -0xe8;
				if ((*(uint *)(pnum + 0xa0) & 1) == 0) {
					sx_00 = *(int *)(pnum + 0xe0);
					uVar16 = (undefined)sx_00;
					if (sx_00 != 0) {
						lVar22 = (ulonglong) * (uint *)(pnum + 0x3c) + lVar30;
						uVar21 = (undefined)lVar22;
						lVar18 = ((ulonglong) * (uint *)(pnum + 0x38) + lVar25) - (ulonglong) * (uint *)(sx_00 + 0x1f0);
						uVar19 = (undefined)lVar18;
						LockMemFileIf((uint *)(pnum + 0x54));
						sx_00 = (int)lVar18;
						nCel = (int)lVar22;
						if (_DAT_1019fd80 == **(uint **)(iVar11 + -0x7750)) {
							light = '\b';
							Cl2DecodeClrHL(-0x17, sx_00, nCel, (BYTE *)(pnum + 0x54), *(int *)(pnum + 0x68),
							    *(int *)(*(int *)(pnum + 0xe0) + 0x1ec), CelSkip, 8);
						}
						UnlockMemFileIf((int *)(pnum + 0x54));
						uVar24 = (undefined)_DAT_1019fd80;
						uVar28 = 8;
						uVar16 = (undefined)lVar17;
						uVar26 = uVar23;
						DrawClippedMonster(sx, sy, sx_00, nCel, _DAT_1019fd80, CelSkip, 8);
						if (eflag != 0) {
							if (*(int *)(pnum + 0x6c) == 0) {
								uVar16 = (undefined)(lVar15 + -1);
								uVar19 = (undefined)(lVar17 + 1);
								uVar26 = (undefined)(lVar25 + -0x40);
								uVar21 = uVar20;
								uVar24 = uVar23;
								uVar28 = uVar27;
								scrollrt_draw_clipped_e_flag_2(pBuff + -0x40, (int)(lVar15 + -1), (int)(lVar17 + 1),
								    skipChunks, CelSkip, (int)(lVar25 + -0x40), dy);
							}
						}
					}
				}
			}
		}
	}
LAB_100a0998:
	if ((bVar3 & 4) != 0) {
		uVar26 = 8;
		uVar28 = 1;
		uVar16 = (undefined)lVar17;
		uVar19 = (undefined)lVar25;
		uVar21 = uVar27;
		uVar24 = uVar23;
		DrawDeadPlayer(sx, sy, dx, dy, CelSkip, 8, 1);
	}
	uVar31 = (undefined)CelSkip_00;
	if (('\0' < cVar5) && (pCelBuff = (longlong)cVar5 - 1, (pCelBuff & 0xffffffff) < 4)) {
		pnum = (int)pCelBuff;
		pPVar9 = (PlayerStruct *)((int)pPVar29 + pnum * 0x55ec);
		lVar22 = (ulonglong)(uint)pPVar9->_pyoff + lVar30;
		uVar24 = (undefined)lVar22;
		lVar18 = ((ulonglong)(uint)pPVar9->_pxoff + lVar25) - (ulonglong)(uint)pPVar9->_pAnimWidth2;
		uVar21 = (undefined)lVar18;
		uVar26 = SUB41(pPVar9->_pAnimData, 0);
		uVar28 = (undefined)pPVar9->_pAnimFrame;
		light = (char)pPVar9->_pAnimWidth;
		uVar16 = (char)sx;
		uVar19 = (undefined)lVar17;
		DrawClippedPlayer(pnum, sx, sy, (int)lVar18, (int)lVar22, pPVar9->_pAnimData, pPVar9->_pAnimFrame,
		    pPVar9->_pAnimWidth, CelSkip_00, capChunks);
		if ((eflag != 0) && (pPVar9->_peflag != 0)) {
			if (pPVar9->_peflag == 2) {
				scrollrt_draw_clipped_e_flag_2(
				    pBuff + -0x3060, sx + -2, sy + 1, skipChunks, CelSkip, dx + -0x60, dy + -0x10);
			}
			uVar16 = (undefined)(lVar15 + -1);
			uVar19 = (undefined)(lVar17 + 1);
			uVar26 = (undefined)(lVar25 + -0x40);
			uVar21 = uVar20;
			uVar24 = uVar23;
			uVar28 = uVar27;
			scrollrt_draw_clipped_e_flag_2(
			    pBuff + -0x40, (int)(lVar15 + -1), (int)(lVar17 + 1), skipChunks, CelSkip, (int)(lVar25 + -0x40), dy);
		}
	}
	if (0 < iVar10) {
		if ((bVar3 & 0x40) == 0) {
			if (*(int *)((int)pPVar29 + **(int **)(iVar11 + -0x77ac) * 0x55ec + 0x1cc) == 0)
				goto LAB_100a0b9c;
		}
		_DAT_1019fd80 = iVar10 - 1;
		if (_DAT_1019fd80 < 200) {
			iVar10 = *(int *)(iVar11 + -0x7754) + _DAT_1019fd80 * 0xe8;
			if ((*(uint *)(iVar10 + 0xa0) & 1) == 0) {
				pnum = *(int *)(iVar10 + 0xe0);
				uVar16 = (undefined)pnum;
				if (pnum != 0) {
					lVar30 = (ulonglong) * (uint *)(iVar10 + 0x3c) + lVar30;
					uVar21 = (undefined)lVar30;
					lVar18 = ((ulonglong) * (uint *)(iVar10 + 0x38) + lVar25) - (ulonglong) * (uint *)(pnum + 0x1f0);
					uVar19 = (undefined)lVar18;
					LockMemFileIf((uint *)(iVar10 + 0x54));
					pnum = (int)lVar18;
					sx_00 = (int)lVar30;
					if (_DAT_1019fd80 == **(uint **)(iVar11 + -0x7750)) {
						light = '\b';
						Cl2DecodeClrHL(-0x17, pnum, sx_00, (BYTE *)(iVar10 + 0x54), *(int *)(iVar10 + 0x68),
						    *(int *)(*(int *)(iVar10 + 0xe0) + 0x1ec), CelSkip, 8);
					}
					UnlockMemFileIf((int *)(iVar10 + 0x54));
					uVar24 = (undefined)_DAT_1019fd80;
					uVar28 = 8;
					uVar16 = (undefined)lVar17;
					uVar26 = uVar23;
					DrawClippedMonster(sx, sy, pnum, sx_00, _DAT_1019fd80, CelSkip, 8);
					if (eflag != 0) {
						if (*(int *)(iVar10 + 0x6c) == 0) {
							uVar16 = (undefined)(lVar15 + -1);
							uVar19 = (undefined)(lVar17 + 1);
							uVar26 = (undefined)(lVar25 + -0x40);
							uVar21 = uVar20;
							uVar24 = uVar23;
							uVar28 = uVar27;
							scrollrt_draw_clipped_e_flag_2(pBuff + -0x40, (int)(lVar15 + -1), (int)(lVar17 + 1),
							    skipChunks, CelSkip, (int)(lVar25 + -0x40), dy);
						}
					}
				}
			}
		}
	}
LAB_100a0b9c:
	if ((bVar3 & 1) != 0) {
		uVar26 = 8;
		uVar28 = 0;
		uVar16 = (undefined)lVar17;
		uVar19 = (undefined)lVar25;
		uVar21 = uVar27;
		uVar24 = uVar23;
		DrawClippedMissile(sx, sy, dx, dy, CelSkip, 8, 0);
	}
	if (cVar1 != '\0') {
		if (**(int **)(iVar11 + -0x7290) < (int)**(char **)(iVar11 + -0x70cc)) {
			uVar24 = 0;
			uVar28 = 8;
			uVar16 = (undefined)lVar17;
			uVar19 = (undefined)lVar25;
			uVar21 = uVar27;
			uVar26 = uVar23;
			DrawClippedObject(sx, sy, dx, dy, 0, CelSkip, 8);
		}
	}
	if (bVar4 != 0) {
		iVar10 = *(int *)(iVar11 + -0x7690) + ((int)(char)bVar4 + -1) * 0x170;
		if ((*(int *)(iVar10 + 0x34) != 0) && (bVar4 < 0x80)) {
			cVar14 = LockMemFile(
			    (ulonglong) * (uint *)(iVar10 + 0x18), uVar16, uVar19, uVar21, uVar24, uVar26, uVar28, light, uVar31);
			if (cVar14 == '\0') {
				UnlockMemFile((char)*(undefined4 *)(iVar10 + 0x18));
			} else {
				if (0 < *(int *)(iVar10 + 0x20)) {
					pCelBuff = BESwap_1003cdc8((byte *)(int)cVar14);
					if ((int)pCelBuff < 0x33) {
						pCelBuff = BESwap_1003cdc8((byte *)(int)cVar14);
						if (*(int *)(iVar10 + 0x20) <= (int)pCelBuff) {
							dx = dx - *(int *)(iVar10 + 0x28);
							if ((int)(char)bVar4 + -1 == (int)**(char **)(iVar11 + -0x7748)) {
								thunk_CelDrawHdrClrHL(-0x4b, dx, dy, *(BYTE **)(iVar10 + 0x18), *(int *)(iVar10 + 0x20),
								    *(int *)(iVar10 + 0x24), CelSkip, 8);
							}
							Cel2DecodeHdrLight(dx, dy, *(BYTE **)(iVar10 + 0x18), *(int *)(iVar10 + 0x20),
							    *(int *)(iVar10 + 0x24), CelSkip, 8);
							UnlockMemFile((char)*(undefined4 *)(iVar10 + 0x18));
							goto LAB_100a0cf8;
						}
					}
				}
				UnlockMemFile((char)*(undefined4 *)(iVar10 + 0x18));
			}
		}
	}
LAB_100a0cf8:
	if (cVar2 != '\0') {
		ppBVar8 = *(BYTE ***)(iVar11 + -0x7574);
		**(uint **)(iVar11 + -0x7294) = (uint) * (byte *)(*(int *)(iVar11 + -0x7268) + (int)cVar6);
		Cel2DecodeLightTrans(pBuff, *ppBVar8, (int)cVar2, 0x40, CelSkip, 8);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void scrollrt_draw_lower_2(int x, int y, int sx, int sy, int chunks, int skipChunks, int eflag)

{
	bool bVar1;
	int CelSkip;
	undefined8 uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	longlong lVar7;
	int iVar8;
	int *piVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	BYTE *pBuff;
	int iStack00000030;

	lVar7 = (longlong)sy;
	uVar2 = 0x100f8fd0;
	iStack00000030 = eflag;
	iVar3 = IsometricCoord(x, y);
	iVar5 = (int)uVar2;
	iVar6 = skipChunks + 1;
	CelSkip = iVar6 * 2;
	iVar3 = **(int **)(iVar5 + -0x7584) + iVar3 * 0x20;
	if (iStack00000030 != 0) {
		if ((((-1 < y) && (y < 0x70)) && (-1 < x)) && (x < 0x70)) {
			_DAT_1019fd90 = (int)*(short *)(**(int **)(iVar5 + -0x757c) + x * 0xe0 + y * 2);
			iVar4 = x * 0x70 + y;
			**(int **)(iVar5 + -0x7290) = (int)*(char *)(**(int **)(iVar5 + -0x758c) + iVar4);
			iVar12 = _DAT_101271e4;
			if (_DAT_1019fd90 != 0) {
				iVar10 = 0;
				iVar8 = (int)lVar7;
				iVar11 = *(int *)(&DAT_1019ed80 + iVar8 * 4);
				**(uint **)(iVar5 + -0x7294) = (uint)(*(byte *)(*(int *)(iVar5 + -0x7230) + _DAT_1019fd90) & *(byte *)(*(int *)(iVar5 + -0x7268) + (int)*(char *)(**(int **)(iVar5 + -0x7588) + iVar4)));
				pBuff = (BYTE *)(iVar12 + iVar11 + sx + -0x5fe0);
				iVar5 = iVar3;
				while (iVar10 < (_DAT_1012f2dc >> 1) + -1) {
					if ((skipChunks <= iVar10) && (_level_cel_block = (uint) * (ushort *)(iVar5 + 6), *(ushort *)(iVar5 + 6) != 0)) {
						drawLowerScreen(pBuff);
					}
					pBuff = pBuff + -0x6000;
					iVar5 = iVar5 + 4;
					iVar10 = iVar10 + 1;
				}
				if (CelSkip < 8) {
					scrollrt_draw_clipped_dungeon_2(
					    (BYTE *)(_DAT_101271e4 + *(int *)(&DAT_1019ed80 + iVar8 * 4) + sx + iVar6 * -0x6000), x, y,
					    skipChunks, CelSkip, sx, (int)lVar7, 0);
				}
			}
		}
		x = x + 1;
		y = y - 1;
		sx = sx + 0x40;
		chunks = chunks + -1;
		iVar3 = iVar3 + 0x20;
	}
	piVar9 = (int *)(&DAT_1019ed80 + (int)lVar7 * 4);
	iVar12 = x * 0xe0;
	iVar4 = x * 0x70;
	iVar5 = y << 1;
	while (true) {
		bVar1 = chunks == 0;
		chunks = chunks + -1;
		iVar11 = (int)uVar2;
		if (((bVar1) || (0x6f < x)) || (y < 0))
			break;
		if ((y < 0x70) && (-1 < x)) {
			_DAT_1019fd90 = (int)*(short *)(**(int **)(iVar11 + -0x757c) + iVar12 + iVar5);
			**(int **)(iVar11 + -0x7290) = (int)*(char *)(**(int **)(iVar11 + -0x758c) + iVar4 + y);
			if (_DAT_1019fd90 != 0) {
				iVar8 = 0;
				pBuff = (BYTE *)(_DAT_101271e4 + *piVar9 + sx + -0x6000);
				**(uint **)(iVar11 + -0x7294) = (uint)(*(byte *)(*(int *)(iVar11 + -0x7230) + _DAT_1019fd90) & *(byte *)(*(int *)(iVar11 + -0x7268) + (int)*(char *)(**(int **)(iVar11 + -0x7588) + iVar4 + y)));
				iVar11 = iVar3;
				while (iVar8 < (_DAT_1012f2dc >> 1) + -1) {
					if (skipChunks <= iVar8) {
						_level_cel_block = (uint) * (ushort *)(iVar11 + 4);
						if (*(ushort *)(iVar11 + 4) != 0) {
							drawLowerScreen(pBuff);
						}
						_level_cel_block = (uint) * (ushort *)(iVar11 + 6);
						if (*(ushort *)(iVar11 + 6) != 0) {
							drawLowerScreen(pBuff + 0x20);
						}
					}
					iVar11 = iVar11 + 4;
					iVar8 = iVar8 + 1;
					pBuff = pBuff + -0x6000;
				}
				if (CelSkip < 8) {
					scrollrt_draw_clipped_dungeon_2((BYTE *)(_DAT_101271e4 + *piVar9 + sx + (skipChunks + 1) * -0x6000),
					    x, y, skipChunks, CelSkip, sx, (int)lVar7, 1);
				}
			}
		}
		iVar12 = iVar12 + 0xe0;
		iVar4 = iVar4 + 0x70;
		x = x + 1;
		iVar5 = iVar5 + -2;
		y = y - 1;
		sx = sx + 0x40;
		iVar3 = iVar3 + 0x20;
	}
	if (((iStack00000030 != 0) && ((uint)y < 0x70)) && ((uint)x < 0x70)) {
		_DAT_1019fd90 = (int)*(short *)(**(int **)(iVar11 + -0x757c) + x * 0xe0 + y * 2);
		iVar5 = x * 0x70 + y;
		**(int **)(iVar11 + -0x7290) = (int)*(char *)(**(int **)(iVar11 + -0x758c) + iVar5);
		if (_DAT_1019fd90 != 0) {
			iVar12 = 0;
			pBuff = (BYTE *)(_DAT_101271e4 + *piVar9 + sx + -0x6000);
			**(uint **)(iVar11 + -0x7294) = (uint)(*(byte *)(*(int *)(iVar11 + -0x7230) + _DAT_1019fd90) & *(byte *)(*(int *)(iVar11 + -0x7268) + (int)*(char *)(**(int **)(iVar11 + -0x7588) + iVar5)));
			while (iVar12 < (_DAT_1012f2dc >> 1) + -1) {
				if ((skipChunks <= iVar12) && (_level_cel_block = (uint) * (ushort *)(iVar3 + 4), *(ushort *)(iVar3 + 4) != 0)) {
					drawLowerScreen(pBuff);
				}
				pBuff = pBuff + -0x6000;
				iVar3 = iVar3 + 4;
				iVar12 = iVar12 + 1;
			}
			if (CelSkip < 8) {
				scrollrt_draw_clipped_dungeon_2((BYTE *)(_DAT_101271e4 + *piVar9 + sx + iVar6 * -0x6000), x, y,
				    skipChunks, CelSkip, sx, (int)lVar7, 0);
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void scrollrt_draw_e_flag(BYTE *pBuff, int x, int y, int capChunks, int CelCap, int sx, int sy)

{
	ushort uVar1;
	undefined4 uVar2;
	undefined4 uVar3;
	undefined4 uVar4;
	int iVar5;
	int iVar6;
	BYTE *pBVar7;
	ushort *puVar8;

	uVar4 = _DAT_1019fd98;
	uVar3 = _DAT_1019fd94;
	uVar2 = _DAT_1019fd90;
	iVar5 = 0x100f8fd0;
	iVar6 = x * 0x70 + y;
	_DAT_1019fd90 = (int)*(short *)(_DAT_1012f1d4 + x * 0xe0 + y * 2);
	_DAT_1019fd94 = (int)*(char *)(_DAT_1012f1c4 + iVar6);
	_DAT_1019fd98 = (uint)(byte)((&DAT_10130332)[_DAT_1019fd90] & (&DAT_1012f1d8)[(int)*(char *)(_DAT_1012f1c8 + iVar6)]);
	iVar6 = IsometricCoord(x, y);
	DAT_1019fd8c = 1;
	puVar8 = (ushort *)(**(int **)(iVar5 + -0x7584) + iVar6 * 0x20);
	_level_cel_block = (uint)*puVar8;
	if (*puVar8 != 0) {
		drawUpperScreen(pBuff);
	}
	DAT_1019fd8c = 2;
	_level_cel_block = (uint)puVar8[1];
	if (puVar8[1] != 0) {
		drawUpperScreen(pBuff + 0x20);
	}
	DAT_1019fd8c = 0;
	iVar5 = 1;
	pBVar7 = pBuff;
	while (true) {
		if ((_DAT_1012f2dc >> 1) + -1 <= iVar5)
			break;
		if (iVar5 <= capChunks) {
			uVar1 = puVar8[2];
			_level_cel_block = (uint)uVar1;
			if (uVar1 != 0) {
				drawUpperScreen(pBVar7 + -0x6000);
			}
			_level_cel_block = (uint)puVar8[3];
			if (puVar8[3] != 0) {
				drawUpperScreen(pBVar7 + -0x5fe0);
			}
		}
		iVar5 = iVar5 + 1;
		pBVar7 = pBVar7 + -0x6000;
		puVar8 = puVar8 + 2;
	}
	scrollrt_draw_dungeon(pBuff, x, y, capChunks, CelCap, sx, sy, 0);
	_DAT_1019fd90 = uVar2;
	_DAT_1019fd94 = uVar3;
	_DAT_1019fd98 = uVar4;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void scrollrt_draw_dungeon(BYTE *pBuff, int sx, int sy, int capChunks, int CelCap, int dx, int dy, int eflag)

{
	char cVar1;
	char cVar2;
	byte bVar3;
	byte bVar4;
	char cVar5;
	char cVar6;
	short sVar7;
	BYTE **ppBVar8;
	PlayerStruct *pPVar9;
	int iVar10;
	int iVar11;
	int sx_00;
	ulonglong pCelBuff;
	ulonglong uVar12;
	char cVar13;
	char cVar14;
	longlong lVar15;
	int nCel;
	int pnum;
	char cVar16;
	longlong lVar17;
	longlong lVar18;
	char cVar19;
	char cVar20;
	char cVar21;
	char cVar23;
	longlong lVar22;
	char cVar24;
	longlong lVar25;
	char cVar26;
	char cVar27;
	char cVar28;
	char light;
	PlayerStruct *pPVar29;
	longlong lVar30;
	int CelSkip;
	undefined uVar31;
	int capChunks_00;

	light = (char)eflag;
	lVar30 = (longlong)dy;
	cVar27 = (char)dy;
	lVar25 = (longlong)dx;
	lVar25._7_1_ = (char)dx;
	cVar23 = (char)CelCap;
	cVar20 = (char)capChunks;
	lVar17 = (longlong)sy;
	lVar17._7_1_ = (char)sy;
	lVar15 = (longlong)sx;
	iVar11 = 0x100f8fd0;
	pPVar29 = plr;
	iVar10 = sx * 0x70 + sy;
	cVar16 = (char)_DAT_1012f1c8;
	cVar1 = *(char *)(_DAT_1012f1ac + iVar10);
	lVar18 = (ulonglong)_DAT_1012f1b4 + lVar15 * 0xe0 + (ulonglong)(uint)(sy * 2);
	cVar19 = (char)lVar18;
	cVar13 = *(char *)(_DAT_1012f1b0 + iVar10);
	cVar2 = *(char *)(_DAT_1012f1a0 + iVar10);
	bVar3 = *(byte *)(_DAT_1012f1bc + iVar10);
	bVar4 = *(byte *)(_DAT_1012f1a8 + iVar10);
	cVar5 = *(char *)(_DAT_1012f1b8 + iVar10);
	cVar6 = *(char *)(_DAT_1012f1c8 + iVar10);
	iVar10 = (int)*(short *)(_DAT_1012f1b4 + (int)(lVar15 * 0xe0) + sy * 2);
	cVar14 = *(char *)(_DAT_1012f1b8 + sx * 0x70 + sy + -1);
	sVar7 = *(short *)((int)lVar18 + -2);
	cVar24 = cVar23;
	cVar21 = cVar20;
	cVar26 = (char)lVar25;
	cVar28 = cVar27;
	if ((visiondebug != 0) && (cVar24 = cVar23, cVar21 = cVar20, cVar26 = (char)lVar25, cVar28 = cVar27, (bVar3 & 0x40) != 0)) {
		cVar16 = (char)_DAT_10128fd8;
		cVar19 = '\x01';
		cVar21 = '@';
		cVar24 = '\0';
		cVar26 = cVar23;
		cVar28 = cVar27;
		iVar11 = 0x100f8fd0;
		pPVar29 = plr;
		CelDecodeHdrOnly(pBuff, _DAT_10128fd8, 1, 0x40, 0, CelCap);
	}
	if ((**(int **)(iVar11 + -0x70e4) != 0) && ((bVar3 & 1) != 0)) {
		cVar24 = '\0';
		cVar28 = '\x01';
		cVar16 = (char)lVar17;
		cVar21 = cVar27;
		cVar19 = (char)lVar25;
		cVar26 = cVar23;
		DrawMissile(sx, sy, dx, dy, 0, CelCap, 1);
	}
	if (**(int **)(iVar11 + -0x7290) < (int)**(char **)(iVar11 + -0x70cc)) {
		if (cVar13 != '\0') {
			cVar16 = (char)*(uint *)(iVar11 + -0x7614);
			lVar18 = (ulonglong) * (uint *)(iVar11 + -0x7614) + ((ulonglong)((int)cVar13 & 0x1f) - 1) * 0x50;
			pnum = (int)lVar18;
			lVar18 = lVar18 + (ulonglong)(uint)((int)(char)((byte)((uint)(int)cVar13 >> 5) & 7) << 3);
			cVar13 = (char)lVar18;
			sx_00 = dx - *(int *)(pnum + 0x48);
			pCelBuff._4_4_ = (uint *)lVar18;
			pCelBuff = LockMemFileIf(pCelBuff._4_4_);
			if (pCelBuff == 0) {
				UnlockMemFileIf((int *)pCelBuff._4_4_);
			} else {
				if (0 < *(int *)(pnum + 0x40)) {
					uVar12 = BESwap_1003cdc8((byte *)pCelBuff);
					if ((int)uVar12 < 0x33) {
						pCelBuff = BESwap_1003cdc8((byte *)pCelBuff);
						nCel = *(int *)(pnum + 0x40);
						cVar21 = (char)nCel;
						if (nCel <= (int)pCelBuff) {
							light = *(char *)(pnum + 0x4c);
							if (light == '\0') {
								cVar24 = (char)*(int *)(pnum + 0x44);
								cVar26 = '\0';
								cVar16 = cVar27;
								cVar19 = cVar13;
								cVar28 = cVar23;
								Cl2DecodeLightTbl(
								    sx_00, dy, (BYTE *)pCelBuff._4_4_, nCel, *(int *)(pnum + 0x44), 0, CelCap);
							} else {
								cVar24 = (char)*(int *)(pnum + 0x44);
								cVar26 = '\0';
								cVar16 = cVar27;
								cVar19 = cVar13;
								cVar28 = cVar23;
								Cl2DecodeFrm3(
								    sx_00, dy, (BYTE *)pCelBuff._4_4_, nCel, *(int *)(pnum + 0x44), 0, CelCap, light);
							}
							UnlockMemFileIf((int *)pCelBuff._4_4_);
							goto LAB_100a15ec;
						}
					}
				}
				UnlockMemFileIf((int *)pCelBuff._4_4_);
			}
		}
	LAB_100a15ec:
		if (cVar1 != '\0') {
			cVar24 = '\x01';
			cVar26 = '\0';
			cVar16 = (char)lVar17;
			cVar19 = (char)lVar25;
			cVar21 = cVar27;
			cVar28 = cVar23;
			DrawObject(sx, sy, dx, dy, 1, 0, CelCap);
		}
	}
	if (bVar4 != 0) {
		pnum = *(int *)(iVar11 + -0x7690) + ((int)(char)bVar4 + -1) * 0x170;
		if ((*(int *)(pnum + 0x34) == 0) && (bVar4 < 0x80)) {
			cVar13 = LockMemFile((ulonglong) * (uint *)(pnum + 0x18), cVar16, cVar19, cVar21, cVar24, cVar26, cVar28,
			    light, (char)CelSkip);
			if (cVar13 == '\0') {
				UnlockMemFile((char)*(undefined4 *)(pnum + 0x18));
			} else {
				if (0 < *(int *)(pnum + 0x20)) {
					pCelBuff = BESwap_1003cdc8((byte *)(int)cVar13);
					if ((int)pCelBuff < 0x33) {
						pCelBuff = BESwap_1003cdc8((byte *)(int)cVar13);
						sx_00 = *(int *)(pnum + 0x20);
						cVar24 = (char)sx_00;
						if (sx_00 <= (int)pCelBuff) {
							nCel = dx - *(int *)(pnum + 0x28);
							if ((int)(char)bVar4 + -1 == (int)**(char **)(iVar11 + -0x7748)) {
								light = cVar23;
								thunk_CelDecodeClr(
								    -0x4b, nCel, dy, *(BYTE **)(pnum + 0x18), sx_00, *(int *)(pnum + 0x24), 0, CelCap);
							}
							cVar19 = (char)*(BYTE **)(pnum + 0x18);
							cVar21 = (char)*(int *)(pnum + 0x20);
							cVar24 = (char)*(int *)(pnum + 0x24);
							cVar26 = '\0';
							cVar16 = cVar27;
							cVar28 = cVar23;
							CelDecodeHdrLightOnly(nCel, dy, *(BYTE **)(pnum + 0x18), *(int *)(pnum + 0x20),
							    *(int *)(pnum + 0x24), 0, CelCap);
							UnlockMemFile((char)*(undefined4 *)(pnum + 0x18));
							goto LAB_100a1704;
						}
					}
				}
				UnlockMemFile((char)*(undefined4 *)(pnum + 0x18));
			}
		}
	}
LAB_100a1704:
	if ((bVar3 & 0x20) != 0) {
		lVar18 = (longlong)cVar14 + 1;
		pCelBuff = -lVar18;
		if ((pCelBuff & 0xffffffff) < 4) {
			cVar19 = (char)(lVar17 + -1);
			pPVar9 = (PlayerStruct *)((int)pPVar29 + (int)lVar18 * -0x55ec);
			lVar22 = (ulonglong)(uint)pPVar9->_pyoff + lVar30;
			cVar24 = (char)lVar22;
			lVar18 = ((ulonglong)(uint)pPVar9->_pxoff + lVar25) - (ulonglong)(uint)pPVar9->_pAnimWidth2;
			cVar21 = (char)lVar18;
			cVar26 = (char)pPVar9->_pAnimData;
			cVar28 = (char)pPVar9->_pAnimFrame;
			light = (char)pPVar9->_pAnimWidth;
			cVar16 = (char)sx;
			DrawPlayer((int)pCelBuff, sx, (int)(lVar17 + -1), (int)lVar18, (int)lVar22, pPVar9->_pAnimData,
			    pPVar9->_pAnimFrame, pPVar9->_pAnimWidth, CelSkip, capChunks_00);
			if (eflag != 0) {
				if (pPVar9->_peflag != 0) {
					if (pPVar9->_peflag == 2) {
						scrollrt_draw_e_flag(
						    pBuff + -0x3060, sx + -2, sy + 1, capChunks, CelCap, dx + -0x60, dy + -0x10);
					}
					cVar16 = (char)(lVar15 + -1);
					cVar19 = (char)(lVar17 + 1);
					cVar26 = (char)(lVar25 + -0x40);
					cVar21 = cVar20;
					cVar24 = cVar23;
					cVar28 = cVar27;
					scrollrt_draw_e_flag(pBuff + -0x40, (int)(lVar15 + -1), (int)(lVar17 + 1), capChunks, CelCap,
					    (int)(lVar25 + -0x40), dy);
				}
			}
		}
	}
	if ((bVar3 & 0x10) != 0) {
		if ((bVar3 & 0x40) == 0) {
			if (*(int *)((int)pPVar29 + **(int **)(iVar11 + -0x77ac) * 0x55ec + 0x1cc) == 0)
				goto LAB_100a18f0;
		}
		if (sVar7 < 0) {
			pnum = (int)sVar7 + 1;
			_DAT_1019fd80 = -pnum;
			if (_DAT_1019fd80 < 200) {
				pnum = *(int *)(iVar11 + -0x7754) + pnum * -0xe8;
				if ((*(uint *)(pnum + 0xa0) & 1) == 0) {
					sx_00 = *(int *)(pnum + 0xe0);
					cVar16 = (char)sx_00;
					if (sx_00 != 0) {
						lVar22 = (ulonglong) * (uint *)(pnum + 0x3c) + lVar30;
						cVar21 = (char)lVar22;
						lVar18 = ((ulonglong) * (uint *)(pnum + 0x38) + lVar25) - (ulonglong) * (uint *)(sx_00 + 0x1f0);
						cVar19 = (char)lVar18;
						LockMemFileIf((uint *)(pnum + 0x54));
						sx_00 = (int)lVar18;
						nCel = (int)lVar22;
						if (_DAT_1019fd80 == **(uint **)(iVar11 + -0x7750)) {
							light = cVar23;
							Cl2DecodeFrm2(-0x17, sx_00, nCel, (BYTE *)(pnum + 0x54), *(int *)(pnum + 0x68),
							    *(int *)(*(int *)(pnum + 0xe0) + 0x1ec), 0, CelCap);
						}
						UnlockMemFileIf((int *)(pnum + 0x54));
						cVar24 = (char)_DAT_1019fd80;
						cVar26 = '\0';
						cVar16 = (char)lVar17;
						cVar28 = cVar23;
						DrawMonster(sx, sy, sx_00, nCel, _DAT_1019fd80, 0, CelCap);
						if (eflag != 0) {
							if (*(int *)(pnum + 0x6c) == 0) {
								cVar16 = (char)(lVar15 + -1);
								cVar19 = (char)(lVar17 + 1);
								cVar26 = (char)(lVar25 + -0x40);
								cVar21 = cVar20;
								cVar24 = cVar23;
								cVar28 = cVar27;
								scrollrt_draw_e_flag(pBuff + -0x40, (int)(lVar15 + -1), (int)(lVar17 + 1), capChunks,
								    CelCap, (int)(lVar25 + -0x40), dy);
							}
						}
					}
				}
			}
		}
	}
LAB_100a18f0:
	if ((bVar3 & 4) != 0) {
		cVar24 = '\0';
		cVar28 = '\0';
		cVar16 = (char)lVar17;
		cVar19 = (char)lVar25;
		cVar21 = cVar27;
		cVar26 = cVar23;
		DrawDeadPlayer(sx, sy, dx, dy, 0, CelCap, 0);
	}
	uVar31 = (undefined)CelSkip;
	if (('\0' < cVar5) && (pCelBuff = (longlong)cVar5 - 1, (pCelBuff & 0xffffffff) < 4)) {
		pnum = (int)pCelBuff;
		pPVar9 = (PlayerStruct *)((int)pPVar29 + pnum * 0x55ec);
		lVar22 = (ulonglong)(uint)pPVar9->_pyoff + lVar30;
		cVar24 = (char)lVar22;
		lVar18 = ((ulonglong)(uint)pPVar9->_pxoff + lVar25) - (ulonglong)(uint)pPVar9->_pAnimWidth2;
		cVar21 = (char)lVar18;
		cVar26 = (char)pPVar9->_pAnimData;
		cVar28 = (char)pPVar9->_pAnimFrame;
		light = (char)pPVar9->_pAnimWidth;
		cVar16 = (char)sx;
		cVar19 = (char)lVar17;
		DrawPlayer(pnum, sx, sy, (int)lVar18, (int)lVar22, pPVar9->_pAnimData, pPVar9->_pAnimFrame, pPVar9->_pAnimWidth,
		    CelSkip, capChunks_00);
		if ((eflag != 0) && (pPVar9->_peflag != 0)) {
			if (pPVar9->_peflag == 2) {
				scrollrt_draw_e_flag(pBuff + -0x3060, sx + -2, sy + 1, capChunks, CelCap, dx + -0x60, dy + -0x10);
			}
			cVar16 = (char)(lVar15 + -1);
			cVar19 = (char)(lVar17 + 1);
			cVar26 = (char)(lVar25 + -0x40);
			cVar21 = cVar20;
			cVar24 = cVar23;
			cVar28 = cVar27;
			scrollrt_draw_e_flag(
			    pBuff + -0x40, (int)(lVar15 + -1), (int)(lVar17 + 1), capChunks, CelCap, (int)(lVar25 + -0x40), dy);
		}
	}
	if (0 < iVar10) {
		if ((bVar3 & 0x40) == 0) {
			if (*(int *)((int)pPVar29 + **(int **)(iVar11 + -0x77ac) * 0x55ec + 0x1cc) == 0)
				goto LAB_100a1af4;
		}
		_DAT_1019fd80 = iVar10 - 1;
		if (_DAT_1019fd80 < 200) {
			iVar10 = *(int *)(iVar11 + -0x7754) + _DAT_1019fd80 * 0xe8;
			if ((*(uint *)(iVar10 + 0xa0) & 1) == 0) {
				pnum = *(int *)(iVar10 + 0xe0);
				cVar16 = (char)pnum;
				if (pnum != 0) {
					lVar30 = (ulonglong) * (uint *)(iVar10 + 0x3c) + lVar30;
					cVar21 = (char)lVar30;
					lVar18 = ((ulonglong) * (uint *)(iVar10 + 0x38) + lVar25) - (ulonglong) * (uint *)(pnum + 0x1f0);
					cVar19 = (char)lVar18;
					LockMemFileIf((uint *)(iVar10 + 0x54));
					pnum = (int)lVar18;
					sx_00 = (int)lVar30;
					if (_DAT_1019fd80 == **(uint **)(iVar11 + -0x7750)) {
						light = cVar23;
						Cl2DecodeFrm2(-0x17, pnum, sx_00, (BYTE *)(iVar10 + 0x54), *(int *)(iVar10 + 0x68),
						    *(int *)(*(int *)(iVar10 + 0xe0) + 0x1ec), 0, CelCap);
					}
					UnlockMemFileIf((int *)(iVar10 + 0x54));
					cVar24 = (char)_DAT_1019fd80;
					cVar26 = '\0';
					cVar16 = (char)lVar17;
					cVar28 = cVar23;
					DrawMonster(sx, sy, pnum, sx_00, _DAT_1019fd80, 0, CelCap);
					if (eflag != 0) {
						if (*(int *)(iVar10 + 0x6c) == 0) {
							cVar16 = (char)(lVar15 + -1);
							cVar19 = (char)(lVar17 + 1);
							cVar26 = (char)(lVar25 + -0x40);
							cVar21 = cVar20;
							cVar24 = cVar23;
							cVar28 = cVar27;
							scrollrt_draw_e_flag(pBuff + -0x40, (int)(lVar15 + -1), (int)(lVar17 + 1), capChunks,
							    CelCap, (int)(lVar25 + -0x40), dy);
						}
					}
				}
			}
		}
	}
LAB_100a1af4:
	if ((bVar3 & 1) != 0) {
		cVar24 = '\0';
		cVar28 = '\0';
		cVar16 = (char)lVar17;
		cVar19 = (char)lVar25;
		cVar21 = cVar27;
		cVar26 = cVar23;
		DrawMissile(sx, sy, dx, dy, 0, CelCap, 0);
	}
	if (cVar1 != '\0') {
		if (**(int **)(iVar11 + -0x7290) < (int)**(char **)(iVar11 + -0x70cc)) {
			cVar24 = '\0';
			cVar26 = '\0';
			cVar16 = (char)lVar17;
			cVar19 = (char)lVar25;
			cVar21 = cVar27;
			cVar28 = cVar23;
			DrawObject(sx, sy, dx, dy, 0, 0, CelCap);
		}
	}
	if (bVar4 != 0) {
		iVar10 = *(int *)(iVar11 + -0x7690) + ((int)(char)bVar4 + -1) * 0x170;
		if ((*(int *)(iVar10 + 0x34) != 0) && (bVar4 < 0x80)) {
			cVar14 = LockMemFile(
			    (ulonglong) * (uint *)(iVar10 + 0x18), cVar16, cVar19, cVar21, cVar24, cVar26, cVar28, light, uVar31);
			if (cVar14 == '\0') {
				UnlockMemFile((char)*(undefined4 *)(iVar10 + 0x18));
			} else {
				if (0 < *(int *)(iVar10 + 0x20)) {
					pCelBuff = BESwap_1003cdc8((byte *)(int)cVar14);
					if ((int)pCelBuff < 0x33) {
						pCelBuff = BESwap_1003cdc8((byte *)(int)cVar14);
						if (*(int *)(iVar10 + 0x20) <= (int)pCelBuff) {
							dx = dx - *(int *)(iVar10 + 0x28);
							if ((int)(char)bVar4 + -1 == (int)**(char **)(iVar11 + -0x7748)) {
								thunk_CelDecodeClr(-0x4b, dx, dy, *(BYTE **)(iVar10 + 0x18), *(int *)(iVar10 + 0x20),
								    *(int *)(iVar10 + 0x24), 0, CelCap);
							}
							CelDecodeHdrLightOnly(dx, dy, *(BYTE **)(iVar10 + 0x18), *(int *)(iVar10 + 0x20),
							    *(int *)(iVar10 + 0x24), 0, CelCap);
							UnlockMemFile((char)*(undefined4 *)(iVar10 + 0x18));
							goto LAB_100a1c50;
						}
					}
				}
				UnlockMemFile((char)*(undefined4 *)(iVar10 + 0x18));
			}
		}
	}
LAB_100a1c50:
	if (cVar2 != '\0') {
		ppBVar8 = *(BYTE ***)(iVar11 + -0x7574);
		**(uint **)(iVar11 + -0x7294) = (uint) * (byte *)(*(int *)(iVar11 + -0x7268) + (int)cVar6);
		CelDecodeHdrLightTrans(pBuff, *ppBVar8, (int)cVar2, 0x40, 0, CelCap);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void scrollrt_draw_upper(int x, int y, int sx, int sy, int chunks, int capChunks, int eflag)

{
	ushort uVar1;
	ushort *puVar2;
	undefined8 uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	longlong lVar7;
	int iVar8;
	int dy;
	int *piVar9;
	ushort *puVar10;
	int iVar11;
	BYTE *pBuff;
	int iStack00000028;
	int iStack00000030;
	int local_54;

	lVar7 = (longlong)sy;
	uVar3 = 0x100f8fd0;
	iStack00000028 = chunks;
	iStack00000030 = eflag;
	iVar4 = IsometricCoord(x, y);
	iVar6 = (int)uVar3;
	local_54 = (capChunks + 1) * 2;
	puVar10 = (ushort *)(**(int **)(iVar6 + -0x7584) + iVar4 * 0x20);
	if (8 < local_54) {
		local_54 = 8;
	}
	if (iStack00000030 != 0) {
		if ((((-1 < y) && (y < 0x70)) && (-1 < x)) && (x < 0x70)) {
			_DAT_1019fd90 = (int)*(short *)(**(int **)(iVar6 + -0x757c) + x * 0xe0 + y * 2);
			iVar5 = x * 0x70 + y;
			**(int **)(iVar6 + -0x7290) = (int)*(char *)(**(int **)(iVar6 + -0x758c) + iVar5);
			iVar4 = _DAT_101271e4;
			iVar8 = (int)lVar7;
			if (_DAT_1019fd90 == 0) {
				thunk_world_draw_black_tile((BYTE *)(_DAT_101271e4 + *(int *)(&DAT_1019ed80 + iVar8 * 4) + sx));
			} else {
				iVar11 = *(int *)(&DAT_1019ed80 + iVar8 * 4);
				**(uint **)(iVar6 + -0x7294) = (uint)(*(byte *)(*(int *)(iVar6 + -0x7230) + _DAT_1019fd90) & *(byte *)(*(int *)(iVar6 + -0x7268) + (int)*(char *)(**(int **)(iVar6 + -0x7588) + iVar5)));
				pBuff = (BYTE *)(iVar4 + iVar11 + sx + 0x20);
				if ((-1 < capChunks) && (_level_cel_block = (uint)puVar10[1], puVar10[1] != 0)) {
					DAT_1019fd8c = 2;
					drawUpperScreen(pBuff);
					DAT_1019fd8c = 0;
				}
				if ((0 < capChunks) && (_level_cel_block = (uint)puVar10[3], puVar10[3] != 0)) {
					drawUpperScreen(pBuff + -0x6000);
				}
				if ((1 < capChunks) && (_level_cel_block = (uint)puVar10[5], puVar10[5] != 0)) {
					drawUpperScreen(pBuff + -0xc000);
				}
				if ((2 < capChunks) && (_level_cel_block = (uint)puVar10[7], puVar10[7] != 0)) {
					drawUpperScreen(pBuff + -0x12000);
				}
				scrollrt_draw_dungeon((BYTE *)(_DAT_101271e4 + *(int *)(&DAT_1019ed80 + iVar8 * 4) + sx), x, y, capChunks,
				    local_54, sx, (int)lVar7, 0);
			}
		}
		x = x + 1;
		y = y + -1;
		sx = sx + 0x40;
		iStack00000028 = iStack00000028 + -1;
		puVar10 = puVar10 + 0x10;
	}
	iVar4 = x * 0xe0;
	iVar5 = x * 0x70;
	piVar9 = (int *)(&DAT_1019ed80 + (int)lVar7 * 4);
	iVar6 = y << 1;
	iVar8 = 0;
	while (dy = (int)lVar7, iVar11 = (int)uVar3, iVar8 < iStack00000028) {
		if ((((-1 < y) && (y < 0x70)) && (-1 < x)) && (x < 0x70)) {
			_DAT_1019fd90 = (int)*(short *)(**(int **)(iVar11 + -0x757c) + iVar4 + iVar6);
			**(int **)(iVar11 + -0x7290) = (int)*(char *)(**(int **)(iVar11 + -0x758c) + iVar5 + y);
			if (_DAT_1019fd90 == 0) {
				thunk_world_draw_black_tile((BYTE *)(_DAT_101271e4 + *piVar9 + sx));
			} else {
				pBuff = (BYTE *)(_DAT_101271e4 + *piVar9 + sx);
				**(uint **)(iVar11 + -0x7294) = (uint)(*(byte *)(*(int *)(iVar11 + -0x7230) + _DAT_1019fd90) & *(byte *)(*(int *)(iVar11 + -0x7268) + (int)*(char *)(**(int **)(iVar11 + -0x7588) + iVar5 + y)));
				DAT_1019fd8c = 1;
				_level_cel_block = (uint)*puVar10;
				if (*puVar10 != 0) {
					drawUpperScreen(pBuff);
				}
				DAT_1019fd8c = 2;
				_level_cel_block = (uint)puVar10[1];
				if (puVar10[1] != 0) {
					drawUpperScreen(pBuff + 0x20);
				}
				DAT_1019fd8c = 0;
				iVar11 = 1;
				puVar2 = puVar10;
				while (true) {
					if ((_DAT_1012f2dc >> 1) + -1 <= iVar11)
						break;
					if (iVar11 <= capChunks) {
						uVar1 = puVar2[2];
						_level_cel_block = (uint)uVar1;
						if (uVar1 != 0) {
							drawUpperScreen(pBuff + -0x6000);
						}
						_level_cel_block = (uint)puVar2[3];
						if (puVar2[3] != 0) {
							drawUpperScreen(pBuff + -0x5fe0);
						}
					}
					iVar11 = iVar11 + 1;
					pBuff = pBuff + -0x6000;
					puVar2 = puVar2 + 2;
				}
				scrollrt_draw_dungeon(
				    (BYTE *)(_DAT_101271e4 + *piVar9 + sx), x, y, capChunks, local_54, sx, (int)lVar7, 1);
			}
		}
		iVar4 = iVar4 + 0xe0;
		iVar5 = iVar5 + 0x70;
		x = x + 1;
		iVar6 = iVar6 + -2;
		y = y + -1;
		sx = sx + 0x40;
		puVar10 = puVar10 + 0x10;
		iVar8 = iVar8 + 1;
	}
	if (((iStack00000030 != 0) && (-1 < y)) && ((y < 0x70 && ((-1 < x && (x < 0x70)))))) {
		_DAT_1019fd90 = (int)*(short *)(**(int **)(iVar11 + -0x757c) + x * 0xe0 + y * 2);
		iVar6 = x * 0x70 + y;
		**(int **)(iVar11 + -0x7290) = (int)*(char *)(**(int **)(iVar11 + -0x758c) + iVar6);
		if (_DAT_1019fd90 == 0) {
			thunk_world_draw_black_tile((BYTE *)(_DAT_101271e4 + *piVar9 + sx));
		} else {
			pBuff = (BYTE *)(_DAT_101271e4 + *piVar9 + sx);
			**(uint **)(iVar11 + -0x7294) = (uint)(*(byte *)(*(int *)(iVar11 + -0x7230) + _DAT_1019fd90) & *(byte *)(*(int *)(iVar11 + -0x7268) + (int)*(char *)(**(int **)(iVar11 + -0x7588) + iVar6)));
			DAT_1019fd8c = 1;
			if ((-1 < capChunks) && (_level_cel_block = (uint)*puVar10, *puVar10 != 0)) {
				drawUpperScreen(pBuff);
			}
			DAT_1019fd8c = 0;
			if ((0 < capChunks) && (_level_cel_block = (uint)puVar10[2], puVar10[2] != 0)) {
				drawUpperScreen(pBuff + -0x6000);
			}
			if ((1 < capChunks) && (_level_cel_block = (uint)puVar10[4], puVar10[4] != 0)) {
				drawUpperScreen(pBuff + -0xc000);
			}
			if ((2 < capChunks) && (_level_cel_block = (uint)puVar10[6], puVar10[6] != 0)) {
				drawUpperScreen(pBuff + -0x12000);
			}
			scrollrt_draw_dungeon((BYTE *)(_DAT_101271e4 + *piVar9 + sx), x, y, capChunks, local_54, sx, dy, 0);
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DrawGame(int x, int y)

{
	undefined8 uVar1;
	int capChunks;
	int x_00;
	int y_00;
	int skipChunks;
	int chunks;
	int sy;
	int sx;

	uVar1 = 0x100f8fd0;
	x_00 = x + -10;
	y_00 = y + -1;
	chunks = 10;
	skipChunks = 8;
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
	capChunks = 8;
	switch (ScrollStruct_1012f2e8._sdir) {
	case 2:
		chunks = chunks + 1;
	case 1:
		skipChunks = 9;
		sy = ScrollStruct_1012f2e8._syoff + 0x8f;
		x_00 = x_00 + -1;
		y_00 = y_00 + -1;
		break;
	case 4:
		capChunks = 9;
	case 3:
		skipChunks = capChunks;
		chunks = chunks + 1;
		break;
	case 5:
		skipChunks = 9;
		break;
	case 6:
		capChunks = 9;
	case 7:
		skipChunks = capChunks;
		sx = sx + -0x40;
		x_00 = x_00 + -1;
		y_00 = y_00 + 1;
		chunks = chunks + 1;
		break;
	case 8:
		skipChunks = 9;
		sx = sx + -0x40;
		sy = ScrollStruct_1012f2e8._syoff + 0x8f;
		x_00 = x_00 + -2;
		chunks = chunks + 1;
	}
	capChunks = 0;
	_DAT_1019fd84 = _DAT_101271e4 + iRam1019f000;
	do {
		scrollrt_draw_upper(x_00, y_00, sx, sy, chunks, capChunks, 0);
		y_00 = y_00 + 1;
		scrollrt_draw_upper(x_00, y_00, sx + -0x20, sy + 0x10, chunks, capChunks, 1);
		capChunks = capChunks + 1;
		sy = sy + 0x20;
		x_00 = x_00 + 1;
	} while (capChunks < 4);
	capChunks = 0;
	_DAT_1019fd84 = _DAT_101271e4 + iRam1019f580;
	while (capChunks < skipChunks) {
		scrollrt_draw_lower(x_00, y_00, sx, sy, chunks, 0);
		y_00 = y_00 + 1;
		scrollrt_draw_lower(x_00, y_00, sx + -0x20, sy + 0x10, chunks, 1);
		x_00 = x_00 + 1;
		sy = sy + 0x20;
		capChunks = capChunks + 1;
	}
	skipChunks = 0;
	**(undefined **)((int)uVar1 + -0x6f4c) = 0;
	do {
		scrollrt_draw_lower_2(x_00, y_00, sx, sy, chunks, skipChunks, 0);
		y_00 = y_00 + 1;
		scrollrt_draw_lower_2(x_00, y_00, sx + -0x20, sy + 0x10, chunks, skipChunks, 1);
		skipChunks = skipChunks + 1;
		sy = sy + 0x20;
		x_00 = x_00 + 1;
	} while (skipChunks < 4);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DrawZoom(int x, int y)

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
	int iVar8;
	int chunks;
	int sy;
	int sx;

	uVar3 = 0x100f8fd0;
	x_00 = x + -6;
	y_00 = y + -1;
	chunks = 6;
	iVar8 = 3;
	_DAT_1012f308 = 0x180;
	_DAT_1012f304 = 0xc0;
	_DAT_1012f300 = 6;
	_DAT_1012f2fc = 6;
	sx = ScrollStruct_1012f2e8._sxoff + 0x40;
	sy = ScrollStruct_1012f2e8._syoff + 0x8f;
	capChunks = 3;
	switch (ScrollStruct_1012f2e8._sdir) {
	case 2:
		chunks = 7;
	case 1:
		iVar8 = 4;
		sy = ScrollStruct_1012f2e8._syoff + 0x6f;
		x_00 = x + -7;
		y_00 = y + -2;
		break;
	case 4:
		capChunks = 4;
	case 3:
		iVar8 = capChunks;
		chunks = 7;
		break;
	case 5:
		iVar8 = 4;
		break;
	case 6:
		capChunks = 4;
	case 7:
		iVar8 = capChunks;
		chunks = 7;
		x_00 = x + -7;
		sx = ScrollStruct_1012f2e8._sxoff;
		y_00 = y;
		break;
	case 8:
		chunks = 7;
		iVar8 = 4;
		sy = ScrollStruct_1012f2e8._syoff + 0x6f;
		x_00 = x + -8;
		sx = ScrollStruct_1012f2e8._sxoff;
	}
	capChunks = 0;
	_DAT_1019fd84 = _DAT_101271e4 + iRam1019efbc;
	do {
		scrollrt_draw_upper(x_00, y_00, sx, sy, chunks, capChunks, 0);
		y_00 = y_00 + 1;
		scrollrt_draw_upper(x_00, y_00, sx + -0x20, sy + 0x10, chunks, capChunks, 1);
		capChunks = capChunks + 1;
		sy = sy + 0x20;
		x_00 = x_00 + 1;
	} while (capChunks < 4);
	capChunks = 0;
	_DAT_1019fd84 = _DAT_101271e4 + iRam1019f280;
	while (capChunks < iVar8) {
		scrollrt_draw_lower(x_00, y_00, sx, sy, chunks, 0);
		y_00 = y_00 + 1;
		scrollrt_draw_lower(x_00, y_00, sx + -0x20, sy + 0x10, chunks, 1);
		x_00 = x_00 + 1;
		sy = sy + 0x20;
		capChunks = capChunks + 1;
	}
	capChunks = 0;
	**(undefined **)((int)uVar3 + -0x6f4c) = 0;
	do {
		scrollrt_draw_lower_2(x_00, y_00, sx, sy, chunks, capChunks, 0);
		y_00 = y_00 + 1;
		scrollrt_draw_lower_2(x_00, y_00, sx + -0x20, sy + 0x10, chunks, capChunks, 1);
		capChunks = capChunks + 1;
		sy = sy + 0x20;
		x_00 = x_00 + 1;
	} while (capChunks < 4);
	sx = (int)uVar3;
	if ((**(int **)(sx + -0x77c4) == 0) && (**(int **)(sx + -0x77c8) == 0)) {
		if ((**(int **)(sx + -0x77bc) == 0) && (**(int **)(sx + -0x77c0) == 0)) {
			y_00 = 0x3bd60;
			sx = 0x5fa40;
			capChunks = 0x140;
		} else {
			y_00 = 0x3bdb0;
			sx = 0x5fa40;
			capChunks = 0xa0;
		}
	} else {
		y_00 = 0x3bdb0;
		sx = 0x5fb80;
		capChunks = 0xa0;
	}
	x_00 = capChunks + 0x300;
	puVar4 = (undefined2 *)(_DAT_101271e4 + sx);
	puVar5 = (undefined *)(_DAT_101271e4 + y_00);
	puVar6 = puVar4 + 0x180;
	lVar7 = 0xb0;
	sx = capChunks;
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
		puVar5 = puVar5 + -x_00;
		puVar6 = puVar6 + x_00 * 0x7fffffff;
		puVar4 = puVar4 + x_00 * 0x7fffffff;
		sx = capChunks;
	} while (lVar7 != 0);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DrawView(int StartX, int StartY)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	if (_DAT_10129148 == 0) {
		DrawZoom(StartX, StartY);
	} else {
		DrawGame(StartX, StartY);
	}
	if (**(int **)(iVar1 + -0x7778) != 0) {
		DrawAutomap();
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
			if ((*(int *)(*(int *)(iVar1 + -0x77a8) + **(int **)(iVar1 + -0x77ac) * 0x55ec + 0x180) != 0) && (_DAT_101282b4 == 0)) {
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
	if (**(char **)(iVar1 + -0x7730) != '\0') {
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
	if (**(int **)(iVar1 + -0x75cc) == 0) {
		if (**(int **)(iVar1 + -0x75d0) != 0) {
			gmenu_draw_pause();
		}
	} else {
		RedBack();
	}
	DrawPlrMsg();
	gmenu_draw();
	doom_draw();
	DrawInfoBox();
	DrawLifeFlask();
	DrawManaFlask();
	return;
}

// WARNING: Unknown calling convention yet parameter storage is locked

void ClearScreenBuffer(void)

{
	int iVar1;
	undefined4 *puVar2;
	undefined4 *puVar3;
	longlong lVar4;
	longlong lVar5;

	iVar1 = 0x100f8fd0;
	lock_buf('\x03');
	lVar4 = 0x1e0;
	puVar2 = (undefined4 *)(**(int **)(iVar1 + -0x7804) + 0x1e040);
	do {
		lVar5 = 0xa0;
		do {
			puVar3 = puVar2;
			lVar5 = lVar5 + -1;
			*puVar3 = 0;
			puVar2 = puVar3 + 1;
		} while (lVar5 != 0);
		lVar4 = lVar4 + -1;
		puVar2 = puVar3 + 0x21;
	} while (lVar4 != 0);
	unlock_buf('\x03');
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DrawMain(int dwHgt, BOOL draw_desc, BOOL draw_hp, BOOL draw_mana, BOOL draw_sbar, BOOL draw_btn)

{
	int dwWdt;
	undefined *puVar1;
	int iVar2;
	undefined8 uVar3;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined in_r10;

	uVar9 = (undefined)draw_btn;
	uVar8 = (undefined)draw_sbar;
	uVar7 = (undefined)draw_mana;
	uVar6 = (undefined)draw_hp;
	uVar5 = (undefined)draw_desc;
	uVar10 = 0x68;
	puVar1 = (undefined *)(ZEXT48(register0x0000000c) - 0x60);
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	if (_DAT_1013c968 != 0) {
		Sleep(1, *puVar1);
		iVar2 = *(int *)(puVar1 + 0x14);
		uVar3 = Lock((char)(ZEXT48(register0x0000000c) - 0x60) + '8', uVar5, uVar6, uVar7, uVar8, uVar9, uVar10, in_r10,
		    *(undefined4 *)(puVar1 + 8));
		uVar4 = (undefined)uVar3;
		if ((int)uVar3 != 0) {
			if (*(int *)(puVar1 + 0x38) != 0) {
				dwHgt = 0x1e0;
			}
			if (0 < dwHgt) {
				uVar4 = 0;
				uVar5 = 0;
				uVar6 = 0x80;
				uVar7 = (char)dwHgt;
				DoBlitScreen(0, 0, 0x280, dwHgt, *puVar1);
			}
			if (dwHgt < 0x1e0) {
				if (draw_sbar != 0) {
					uVar4 = 0xcc;
					uVar5 = 0x65;
					uVar7 = 0x1c;
					DoBlitScreen(0xcc, 0x165, 0xe8, 0x1c, *puVar1);
				}
				if (draw_desc != 0) {
					uVar4 = 0xb0;
					uVar5 = 0x8e;
					uVar7 = 0x3c;
					DoBlitScreen(0xb0, 0x18e, 0x120, 0x3c, *puVar1);
				}
				if (draw_mana != 0) {
					DoBlitScreen(0x1cc, 0x160, 0x58, 0x48, *puVar1);
					uVar4 = 0x34;
					uVar5 = 0xa0;
					uVar7 = 0x38;
					DoBlitScreen(0x234, 0x1a0, 0x38, 0x38, *puVar1);
				}
				if (draw_hp != 0) {
					uVar4 = 0x60;
					uVar5 = 0x60;
					uVar7 = 0x48;
					DoBlitScreen(0x60, 0x160, 0x58, 0x48, *puVar1);
				}
				if (draw_btn != 0) {
					DoBlitScreen(8, 0x165, 0x48, 0x77, *puVar1);
					uVar5 = 0x65;
					uVar7 = 0x30;
					DoBlitScreen(0x22c, 0x165, 0x48, 0x30, *puVar1);
					uVar4 = SUB41(*(byte **)(iVar2 + -0x77f0), 0);
					if (1 < **(byte **)(iVar2 + -0x77f0)) {
						DoBlitScreen(0x54, 0x1bb, 0x24, 0x20, *puVar1);
						uVar4 = 0xc;
						uVar5 = 0xbb;
						uVar7 = 0x20;
						DoBlitScreen(0x20c, 0x1bb, 0x24, 0x20, *puVar1);
					}
				}
				if (*(int *)(iVar2 + -0x4bc4) != 0) {
					uVar4 = (undefined) * (undefined4 *)(iVar2 + -0x4bbc);
					uVar5 = (undefined) * (undefined4 *)(iVar2 + -0x4bc0);
					uVar7 = (undefined) * (undefined4 *)(iVar2 + -0x4bc8);
					DoBlitScreen(*(undefined4 *)(iVar2 + -0x4bbc), *(undefined4 *)(iVar2 + -0x4bc0),
					    *(int *)(iVar2 + -0x4bc4), *(undefined4 *)(iVar2 + -0x4bc8), *puVar1);
				}
				dwWdt = *(int *)(iVar2 + -0x4bb4);
				uVar6 = (undefined)dwWdt;
				if (dwWdt != 0) {
					uVar4 = (undefined) * (undefined4 *)(iVar2 + -0x4bac);
					uVar5 = (undefined) * (undefined4 *)(iVar2 + -0x4bb0);
					uVar7 = (undefined) * (undefined4 *)(iVar2 + -0x4bb8);
					DoBlitScreen(*(undefined4 *)(iVar2 + -0x4bac), *(undefined4 *)(iVar2 + -0x4bb0), dwWdt,
					    *(undefined4 *)(iVar2 + -0x4bb8), *puVar1);
				}
			}
			Unlock(uVar4, uVar5, uVar6, uVar7, uVar8, uVar9, uVar10, in_r10, *(undefined4 *)(puVar1 + 8));
			Sleep(1, *puVar1);
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void scrollrt_draw_game_screen(BOOL draw_cursor)

{
	int dwHgt;

	if (_drawpanflag == 0xff) {
		_drawpanflag = 0;
		dwHgt = 0x1e0;
	} else {
		dwHgt = 0;
	}
	if (draw_cursor != 0) {
		lock_buf('\0');
		scrollrt_draw_cursor_item();
		unlock_buf('\0');
	}
	DrawMain(dwHgt, 0, 0, 0, 0, 0);
	if (draw_cursor != 0) {
		lock_buf('\0');
		scrollrt_draw_cursor_back_buffer();
		unlock_buf('\0');
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DrawAndBlit(void)

{
	bool bVar1;
	int iVar2;
	int dwHgt;
	BOOL draw_desc;

	iVar2 = 0x100f8fd0;
	if (_gbRunGame != 0) {
		if (_drawpanflag == 0xff) {
			_DAT_101282c0 = 1;
			draw_desc = 0;
			bVar1 = true;
			_DAT_101282bc = 1;
			dwHgt = 0x1e0;
			_DAT_10128188 = 1;
			_DAT_1013c96c = 1;
		} else {
			if (_drawpanflag != 1) {
				return;
			}
			draw_desc = 1;
			bVar1 = false;
			dwHgt = 0x160;
		}
		_drawpanflag = 0;
		lock_buf('\0');
		if (**(char **)(iVar2 + -0x7794) == '\0') {
			T_DrawView(_DAT_1012f310, _DAT_1012f30c);
		} else {
			DrawView(_DAT_1012f310, _DAT_1012f30c);
		}
		if (bVar1) {
			ClearCtrlPan();
		}
		if (_DAT_101282c0 != 0) {
			UpdateLifeFlask();
		}
		if (_DAT_101282bc != 0) {
			UpdateManaFlask();
		}
		if (_DAT_10128188 != 0) {
			DrawCtrlPan();
		}
		if (_DAT_1013c96c != 0) {
			DrawInvBelt();
		}
		if (**(int **)(iVar2 + -0x76d0) != 0) {
			DrawTalkPan();
			dwHgt = 0x1e0;
		}
		scrollrt_draw_cursor_item();
		unlock_buf('\0');
		DrawMain(dwHgt, draw_desc, _DAT_101282c0, _DAT_101282bc, _DAT_1013c96c, _DAT_10128188);
		lock_buf('\0');
		scrollrt_draw_cursor_back_buffer();
		unlock_buf('\0');
		_DAT_101282c0 = 0;
		_DAT_101282bc = 0;
		_DAT_10128188 = 0;
		_DAT_1013c96c = 0;
	}
	return;
}
