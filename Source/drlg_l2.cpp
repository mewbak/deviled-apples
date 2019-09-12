
BOOL DRLG_L2PlaceMiniSet(BYTE *miniset, int tmin, int tmax, int cx, int cy, BOOL setview, int ldir)

{
	byte bVar1;
	byte bVar2;
	int *piVar3;
	bool bVar4;
	undefined8 uVar5;
	byte *pbVar6;
	int v;
	int v_00;
	undefined *puVar7;
	int iVar8;
	int iVar9;
	byte *pbVar10;
	int iVar11;
	ulonglong uVar12;
	int unaff_r29;
	int unaff_r31;
	ulonglong uVar13;
	BOOL BStack0000002c;
	int iStack00000030;
	int local_68;
	int local_64;

	uVar5 = 0x100f8fd0;
	uVar12 = ZEXT48(&DAT_1012aaf8);
	bVar1 = *miniset;
	bVar2 = miniset[1];
	if ((longlong)tmax - (longlong)tmin == 0) {
		local_68 = 1;
		BStack0000002c = setview;
		iStack00000030 = ldir;
	} else {
		BStack0000002c = setview;
		iStack00000030 = ldir;
		local_68 = random('\0', (int)((longlong)tmax - (longlong)tmin));
		local_68 = tmin + local_68;
	}
	v = 0x28 - (uint)bVar1;
	local_64 = 0;
	v_00 = 0x28 - (uint)bVar2;
	while (true) {
		if (local_68 <= local_64) {
			v = (int)uVar5;
			if (BStack0000002c == 1) {
				piVar3 = *(int **)(v + -0x77b4);
				**(int **)(v + -0x77b0) = unaff_r31 * 2 + 0x15;
				*piVar3 = unaff_r29 * 2 + 0x16;
			}
			if (iStack00000030 == 0) {
				**(int **)(v + -0x751c) = unaff_r31 * 2 + 0x15;
				**(int **)(v + -0x7520) = unaff_r29 * 2 + 0x16;
			}
			if (iStack00000030 == 6) {
				**(int **)(v + -0x751c) = unaff_r31 * 2 + 0x15;
				**(int **)(v + -0x7520) = unaff_r29 * 2 + 0x16;
			}
			return 1;
		}
		unaff_r31 = random('\0', v);
		unaff_r29 = random('\0', v_00);
		bVar4 = false;
		iVar8 = 0;
		while ((!bVar4 && (iVar8 < 200))) {
			bVar4 = true;
			if ((**(int **)((int)uVar5 + -0x7314) <= unaff_r31) && (((unaff_r31 <= *(int *)uVar12 && (_DAT_1012aafc <= unaff_r29)) && (unaff_r29 <= _DAT_1012aaf4)))) {
				bVar4 = false;
			}
			if (((cx != -1) && ((int)(cx - (uint)bVar1) <= unaff_r31)) && (unaff_r31 <= cx + 0xc)) {
				unaff_r31 = random('\0', v);
				unaff_r29 = random('\0', v_00);
				bVar4 = false;
			}
			if (((cy != -1) && ((int)(cy - (uint)bVar2) <= unaff_r29)) && (unaff_r29 <= cy + 0xc)) {
				unaff_r31 = random('\0', v);
				unaff_r29 = random('\0', v_00);
				bVar4 = false;
			}
			pbVar6 = dungeon + unaff_r29;
			puVar7 = &DAT_1013b370 + unaff_r29;
			pbVar10 = miniset + 2;
			iVar11 = 0;
			while ((iVar11 < (int)(uint)bVar2 && (bVar4))) {
				iVar9 = 0;
				while ((iVar9 < (int)(uint)bVar1 && (bVar4))) {
					if ((*pbVar10 != 0) && (*pbVar10 != pbVar6[(unaff_r31 + iVar9) * 0x28])) {
						bVar4 = false;
					}
					if (puVar7[(unaff_r31 + iVar9) * 0x28] != '\0') {
						bVar4 = false;
					}
					pbVar10 = pbVar10 + 1;
					iVar9 = iVar9 + 1;
				}
				pbVar6 = pbVar6 + 1;
				puVar7 = puVar7 + 1;
				iVar11 = iVar11 + 1;
			}
			if ((!bVar4) && (unaff_r31 = unaff_r31 + 1, unaff_r31 == v)) {
				unaff_r29 = unaff_r29 + 1;
				unaff_r31 = 0;
				if (unaff_r29 == v_00) {
					unaff_r29 = 0;
				}
			}
			iVar8 = iVar8 + 1;
		}
		if (199 < iVar8)
			break;
		pbVar6 = dungeon + unaff_r29;
		iVar11 = 0;
		iVar8 = (uint)bVar2 * (uint)bVar1 + 2;
		while (iVar11 < (int)(uint)bVar2) {
			pbVar10 = miniset + iVar8;
			iVar9 = 0;
			uVar13 = (ulonglong)bVar1;
			if (bVar1 != 0) {
				do {
					if (*pbVar10 != 0) {
						pbVar6[(unaff_r31 + iVar9) * 0x28] = *pbVar10;
					}
					iVar8 = iVar8 + 1;
					pbVar10 = pbVar10 + 1;
					iVar9 = iVar9 + 1;
					uVar13 = uVar13 - 1;
				} while (uVar13 != 0);
			}
			pbVar6 = pbVar6 + 1;
			iVar11 = iVar11 + 1;
		}
		local_64 = local_64 + 1;
	}
	return 0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_L2PlaceRndSet(BYTE *miniset, int rndper)

{
	byte bVar1;
	byte bVar2;
	bool bVar3;
	undefined8 uVar4;
	longlong lVar5;
	int iVar6;
	byte *pbVar7;
	undefined *puVar9;
	longlong lVar8;
	int iVar10;
	byte *pbVar11;
	longlong lVar12;
	int iVar13;
	longlong lVar14;
	ulonglong uVar15;
	int iVar16;
	undefined *puVar17;
	byte *pbVar18;
	longlong lVar19;
	int iVar20;
	int iVar21;
	longlong lVar22;
	longlong lVar23;
	int iVar24;
	longlong lVar25;
	ulonglong uVar26;

	uVar4 = 0x100f8fd0;
	pbVar18 = dungeon;
	uVar15 = ZEXT48(&DAT_1012aaf8);
	puVar17 = &DAT_1013b370;
	lVar19 = 0;
	bVar1 = *miniset;
	bVar2 = miniset[1];
	iVar16 = (uint)bVar2 * (uint)bVar1 + 2;
	iVar21 = (uint)bVar2 << 1;
	while (iVar20 = (int)lVar19, iVar20 < (int)(0x28 - (uint)bVar2)) {
		lVar22 = (ulonglong)bVar1 << 1;
		lVar23 = 0;
		while (iVar24 = (int)lVar23, iVar24 < (int)(0x28 - (uint)bVar1)) {
			bVar3 = true;
			if ((((**(int **)((int)uVar4 + -0x7314) <= iVar24) && (iVar24 <= *(int *)uVar15)) && (_DAT_1012aafc <= iVar20)) && (iVar20 <= _DAT_1012aaf4)) {
				bVar3 = false;
			}
			pbVar11 = miniset + 2;
			iVar6 = 0;
			puVar9 = puVar17;
			pbVar7 = pbVar18;
			while (true) {
				if (((int)(uint)bVar2 <= iVar6) || (!bVar3))
					break;
				iVar13 = 0;
				while ((iVar13 < (int)(uint)bVar1 && (bVar3))) {
					if ((*pbVar11 != 0) && (*pbVar11 != pbVar7[(iVar24 + iVar13) * 0x28])) {
						bVar3 = false;
					}
					if (puVar9[(iVar24 + iVar13) * 0x28] != '\0') {
						bVar3 = false;
					}
					pbVar11 = pbVar11 + 1;
					iVar13 = iVar13 + 1;
				}
				pbVar7 = pbVar7 + 1;
				puVar9 = puVar9 + 1;
				iVar6 = iVar6 + 1;
			}
			if (bVar3) {
				lVar14 = lVar23 - (ulonglong)bVar1;
				lVar12 = ZEXT48(dungeon) + (lVar19 - (ulonglong)bVar2);
				lVar8 = lVar19 - (ulonglong)bVar2;
				while (((int)lVar8 < iVar21 && (bVar3))) {
					lVar5 = lVar12 + lVar14 * 0x28;
					lVar25 = lVar22 - lVar14;
					if ((int)lVar14 < (int)lVar22) {
						do {
							if (*(BYTE *)lVar5 == miniset[iVar16]) {
								bVar3 = false;
							}
							lVar5 = lVar5 + 0x28;
							lVar25 = lVar25 + -1;
						} while (lVar25 != 0);
					}
					lVar12 = lVar12 + 1;
					lVar8 = lVar8 + 1;
				}
			}
			if ((bVar3) && (iVar6 = random('\0', 100), iVar6 < rndper)) {
				iVar13 = 0;
				iVar6 = iVar16;
				pbVar7 = pbVar18;
				while (iVar13 < (int)(uint)bVar2) {
					pbVar11 = miniset + iVar6;
					iVar10 = 0;
					uVar26 = (ulonglong)bVar1;
					if (bVar1 != 0) {
						do {
							if (*pbVar11 != 0) {
								pbVar7[(iVar24 + iVar10) * 0x28] = *pbVar11;
							}
							iVar6 = iVar6 + 1;
							pbVar11 = pbVar11 + 1;
							iVar10 = iVar10 + 1;
							uVar26 = uVar26 - 1;
						} while (uVar26 != 0);
					}
					pbVar7 = pbVar7 + 1;
					iVar13 = iVar13 + 1;
				}
			}
			lVar22 = lVar22 + 1;
			lVar23 = lVar23 + 1;
		}
		pbVar18 = pbVar18 + 1;
		puVar17 = puVar17 + 1;
		iVar21 = iVar21 + 1;
		lVar19 = lVar19 + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_L2Subs(void)

{
	char cVar1;
	int iVar2;
	longlong lVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	byte *pbVar7;
	byte *pbVar8;

	pbVar7 = dungeon;
	iVar5 = 0;
	do {
		iVar6 = 0;
		pbVar8 = pbVar7;
		do {
			if ((((iVar6 < _DAT_1012ab00) || (_DAT_1012aaf8 < iVar6)) && ((iVar5 < _DAT_1012aafc || (_DAT_1012aaf4 < iVar5)))) && ((iVar2 = random('\0', 4), iVar2 == 0 && (cVar1 = (&DAT_100f720a)[(uint)*pbVar8], cVar1 != '\0')))) {
				iVar2 = random('\0', 0x10);
				lVar3 = -1;
				while (-1 < iVar2) {
					lVar3 = lVar3 + 1;
					if ((int)lVar3 == 0xa1) {
						lVar3 = 0;
					}
					if (cVar1 == (&DAT_100f720a)[(int)lVar3]) {
						iVar2 = iVar2 + -1;
					}
				}
				iVar2 = iVar5 + -2;
				while (iVar2 < iVar5 + 2) {
					iVar4 = iVar6 + -2;
					while (iVar4 < iVar6 + 2) {
						if ((uint)lVar3 == (uint)dungeon[iVar4 * 0x28 + iVar2]) {
							iVar2 = iVar5 + 3;
							iVar4 = iVar6 + 2;
						}
						iVar4 = iVar4 + 1;
					}
					iVar2 = iVar2 + 1;
				}
				if (iVar2 < iVar5 + 3) {
					*pbVar8 = (byte)lVar3;
				}
			}
			iVar6 = iVar6 + 1;
			pbVar8 = pbVar8 + 0x28;
		} while (iVar6 < 0x28);
		iVar5 = iVar5 + 1;
		pbVar7 = pbVar7 + 1;
	} while (iVar5 < 0x28);
	return;
}

void DRLG_L2Shadows(void)

{
	char cVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	byte *pbVar5;
	bool bVar6;
	byte *pbVar7;
	byte *pbVar8;
	int iVar9;
	byte *pbVar10;
	longlong lVar11;

	iVar9 = 1;
	pbVar5 = dungeon;
	do {
		pbVar8 = pbVar5 + 0x29;
		lVar11 = 0x27;
		pbVar10 = dungeon;
		do {
			pbVar10 = pbVar10 + 0x28;
			pbVar7 = pbVar10 + iVar9;
			cVar1 = (&DAT_100f72ab)[(uint)*pbVar8];
			cVar2 = (&DAT_100f72ab)[(uint)pbVar8[-0x28]];
			cVar3 = (&DAT_100f72ab)[(uint)pbVar8[-1]];
			cVar4 = (&DAT_100f72ab)[(uint)pbVar8[-0x29]];
			if (cVar1 == DAT_100f71fc) {
				bVar6 = true;
				if ((cRam100f71fd != '\0') && (cVar4 != cRam100f71fd)) {
					bVar6 = false;
				}
				if ((cRam100f71fe != '\0') && (cVar3 != cRam100f71fe)) {
					bVar6 = false;
				}
				if ((cRam100f71ff != '\0') && (cVar2 != cRam100f71ff)) {
					bVar6 = false;
				}
				if (bVar6) {
					if (bRam100f7200 != 0) {
						pbVar7[-0x29] = bRam100f7200;
					}
					if (bRam100f7201 != 0) {
						pbVar7[-1] = bRam100f7201;
					}
					if (bRam100f7202 != 0) {
						pbVar7[-0x28] = bRam100f7202;
					}
				}
			}
			if (cVar1 == cRam100f7203) {
				bVar6 = true;
				if ((cRam100f7204 != '\0') && (cVar4 != cRam100f7204)) {
					bVar6 = false;
				}
				if ((cRam100f7205 != '\0') && (cVar3 != cRam100f7205)) {
					bVar6 = false;
				}
				if ((cRam100f7206 != '\0') && (cVar2 != cRam100f7206)) {
					bVar6 = false;
				}
				if (bVar6) {
					if (bRam100f7207 != 0) {
						pbVar7[-0x29] = bRam100f7207;
					}
					if (bRam100f7208 != 0) {
						pbVar7[-1] = bRam100f7208;
					}
					if (bRam100f7209 != 0) {
						pbVar7[-0x28] = bRam100f7209;
					}
				}
			}
			pbVar8 = pbVar8 + 0x28;
			lVar11 = lVar11 + -1;
		} while (lVar11 != 0);
		iVar9 = iVar9 + 1;
		pbVar5 = pbVar5 + 1;
	} while (iVar9 < 0x28);
	return;
}

void InitDungeon(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	int iVar5;
	longlong lVar6;

	puVar3 = &DAT_1012ab08;
	iVar5 = 0;
	puVar4 = &DAT_1013b370;
	do {
		lVar6 = 5;
		puVar1 = puVar3;
		puVar2 = puVar4;
		do {
			*puVar1 = 0x20;
			*puVar2 = 0;
			puVar1[0x28] = 0x20;
			puVar2[0x28] = 0;
			puVar1[0x50] = 0x20;
			puVar2[0x50] = 0;
			puVar1[0x78] = 0x20;
			puVar2[0x78] = 0;
			puVar1[0xa0] = 0x20;
			puVar2[0xa0] = 0;
			puVar1[200] = 0x20;
			puVar2[200] = 0;
			puVar1[0xf0] = 0x20;
			puVar2[0xf0] = 0;
			puVar1[0x118] = 0x20;
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

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_LoadL2SP(void)

{
	int iVar1;
	BOOL BVar2;

	iVar1 = 0x100f8fd0;
	_DAT_1013b358 = 0;
	BVar2 = QuestStatus(8);
	if (BVar2 == 0) {
		BVar2 = QuestStatus(9);
		if (BVar2 == 0) {
			BVar2 = QuestStatus(0xe);
			if (BVar2 != 0) {
				_DAT_1013b35c = LoadFileInMem(*(char **)(iVar1 + -0x639c), (DWORD *)0x0);
				_DAT_1013b358 = 1;
			}
		} else {
			_DAT_1013b35c = LoadFileInMem(*(char **)(iVar1 + -0x6398), (DWORD *)0x0);
			_DAT_1013b358 = 1;
		}
	} else {
		_DAT_1013b35c = LoadFileInMem(*(char **)(iVar1 + -0x6394), (DWORD *)0x0);
		_DAT_1013b358 = 1;
	}
	return;
}

void DRLG_FreeL2SP(void)

{
	MemFreeDbg((int **)&DAT_1013b35c);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_L2SetRoom(int rx1, int ry1)

{
	byte bVar1;
	byte bVar2;
	int *piVar3;
	uint *puVar4;
	uint *puVar5;
	int iVar6;
	char cVar7;
	int iVar8;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	int iVar9;
	undefined in_r8;
	char *pcVar10;
	undefined in_r9;
	undefined in_r10;
	int iVar11;
	ulonglong uVar12;
	undefined in_stack_ffffffbb;

	iVar6 = 0x100f8fd0;
	cVar7 = LockMemFile((ulonglong)_DAT_1013b35c, (char)ry1, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb);
	bVar1 = *(byte *)(int)cVar7;
	iVar11 = 0;
	bVar2 = *(byte *)((int)cVar7 + 2);
	piVar3 = *(int **)(iVar6 + -0x7550);
	**(int **)(iVar6 + -0x754c) = rx1;
	puVar4 = *(uint **)(iVar6 + -0x7554);
	*piVar3 = ry1;
	puVar5 = *(uint **)(iVar6 + -0x7558);
	*puVar4 = (uint)bVar1;
	iVar8 = *(int *)(iVar6 + -0x77cc);
	*puVar5 = (uint)bVar2;
	iVar8 = iVar8 + ry1;
	ry1 = *(int *)(iVar6 + -0x7514) + ry1;
	pcVar10 = (char *)(*(int *)(_DAT_1013b35c + 0x88) + 4);
	while (iVar11 < (int)(uint)bVar2) {
		iVar6 = 0;
		uVar12 = (ulonglong)bVar1;
		if (bVar1 != 0) {
			do {
				if (*pcVar10 == '\0') {
					*(undefined *)(iVar8 + (rx1 + iVar6) * 0x28) = 3;
				} else {
					iVar9 = (rx1 + iVar6) * 0x28;
					*(char *)(iVar8 + iVar9) = *pcVar10;
					*(byte *)(ry1 + iVar9) = *(byte *)(ry1 + iVar9) | 0x80;
				}
				pcVar10 = pcVar10 + 2;
				iVar6 = iVar6 + 1;
				uVar12 = uVar12 - 1;
			} while (uVar12 != 0);
		}
		iVar8 = iVar8 + 1;
		ry1 = ry1 + 1;
		iVar11 = iVar11 + 1;
	}
	UnlockMemFile((char)_DAT_1013b35c);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DefineRoom(int nX1, int nY1, int nX2, int nY2, BOOL ForceHW)

{
	undefined *puVar1;
	undefined *puVar2;
	ulonglong uVar3;
	uint uVar4;
	uint uVar5;
	undefined *puVar6;
	int iVar7;
	undefined *puVar8;
	byte *pbVar9;
	int iVar10;

	iVar7 = nX1 * 0x28;
	puVar1 = &DAT_1012ab08 + iVar7;
	puVar1[nY1] = 0x43;
	puVar6 = &DAT_1012ab08 + nX2 * 0x28;
	puVar1[nY2] = 0x45;
	puVar6[nY1] = 0x42;
	puVar6[nY2] = 0x41;
	_DAT_1012ab04 = _DAT_1012ab04 + 1;
	iVar10 = _DAT_1012ab04 * 0x14;
	*(int *)(&DAT_1012b148 + iVar10) = nX1;
	*(int *)(iVar10 + 0x1012b150) = nX2;
	*(int *)(iVar10 + 0x1012b14c) = nY1;
	*(int *)(iVar10 + 0x1012b154) = nY2;
	if (ForceHW == 1) {
		iVar10 = nX1;
		while (iVar10 < nX2) {
			pbVar9 = &DAT_1013b370 + iVar7 + nY1;
			uVar4 = nY2 - iVar10;
			if (iVar10 < nY2) {
				uVar3 = (ulonglong)(uVar4 >> 3);
				uVar5 = uVar4;
				if (uVar4 >> 3 == 0)
					goto LAB_1002d248;
				do {
					iVar7 = iVar7 + 0x140;
					*pbVar9 = *pbVar9 | 0x80;
					pbVar9[0x28] = pbVar9[0x28] | 0x80;
					pbVar9[0x50] = pbVar9[0x50] | 0x80;
					pbVar9[0x78] = pbVar9[0x78] | 0x80;
					pbVar9[0xa0] = pbVar9[0xa0] | 0x80;
					pbVar9[200] = pbVar9[200] | 0x80;
					pbVar9[0xf0] = pbVar9[0xf0] | 0x80;
					pbVar9[0x118] = pbVar9[0x118] | 0x80;
					pbVar9 = pbVar9 + 0x140;
					uVar3 = uVar3 - 1;
				} while (uVar3 != 0);
				uVar5 = uVar4 & 7;
				while (uVar5 != 0) {
				LAB_1002d248:
					iVar7 = iVar7 + 0x28;
					*pbVar9 = *pbVar9 | 0x80;
					pbVar9 = pbVar9 + 0x28;
					uVar5 = uVar5 - 1;
				}
				iVar10 = iVar10 + uVar4;
			}
			iVar10 = iVar10 + 1;
			iVar7 = iVar7 + 0x28;
		}
	}
	iVar7 = nX1 + 1;
	iVar10 = iVar7 * 0x28;
	puVar2 = &DAT_1012ab08 + nY1 + iVar10;
	puVar8 = &DAT_1012ab08 + nY2 + iVar10;
	uVar4 = nX2 - iVar7;
	if (iVar7 <= nX2 + -1) {
		uVar3 = (ulonglong)(uVar4 >> 3);
		if (uVar4 >> 3 != 0) {
			do {
				*puVar2 = 0x23;
				*puVar8 = 0x23;
				puVar2[0x28] = 0x23;
				puVar8[0x28] = 0x23;
				puVar2[0x50] = 0x23;
				puVar8[0x50] = 0x23;
				puVar2[0x78] = 0x23;
				puVar8[0x78] = 0x23;
				puVar2[0xa0] = 0x23;
				puVar8[0xa0] = 0x23;
				puVar2[200] = 0x23;
				puVar8[200] = 0x23;
				puVar2[0xf0] = 0x23;
				puVar8[0xf0] = 0x23;
				puVar2[0x118] = 0x23;
				puVar2 = puVar2 + 0x140;
				puVar8[0x118] = 0x23;
				puVar8 = puVar8 + 0x140;
				uVar3 = uVar3 - 1;
			} while (uVar3 != 0);
			uVar4 = uVar4 & 7;
			if (uVar4 == 0)
				goto LAB_1002d31c;
		}
		do {
			*puVar2 = 0x23;
			puVar2 = puVar2 + 0x28;
			*puVar8 = 0x23;
			puVar8 = puVar8 + 0x28;
			uVar4 = uVar4 - 1;
		} while (uVar4 != 0);
	}
LAB_1002d31c:
	iVar7 = nY1 + 1;
	puVar1 = puVar1 + iVar7;
	puVar6 = puVar6 + iVar7;
	nY1 = nY1 + 0x1012ab09;
	do {
		if (nY2 + -1 < iVar7) {
			return;
		}
		*puVar1 = 0x23;
		puVar2 = (undefined *)(nY1 + iVar10);
		*puVar6 = 0x23;
		uVar4 = nX2 - (nX1 + 1);
		if (nX1 + 1 < nX2) {
			uVar3 = (ulonglong)(uVar4 >> 3);
			if (uVar4 >> 3 != 0) {
				do {
					*puVar2 = 0x2e;
					puVar2[0x28] = 0x2e;
					puVar2[0x50] = 0x2e;
					puVar2[0x78] = 0x2e;
					puVar2[0xa0] = 0x2e;
					puVar2[200] = 0x2e;
					puVar2[0xf0] = 0x2e;
					puVar2[0x118] = 0x2e;
					puVar2 = puVar2 + 0x140;
					uVar3 = uVar3 - 1;
				} while (uVar3 != 0);
				uVar4 = uVar4 & 7;
				if (uVar4 == 0)
					goto LAB_1002d3a4;
			}
			do {
				*puVar2 = 0x2e;
				puVar2 = puVar2 + 0x28;
				uVar4 = uVar4 - 1;
			} while (uVar4 != 0);
		}
	LAB_1002d3a4:
		puVar1 = puVar1 + 1;
		puVar6 = puVar6 + 1;
		nY1 = nY1 + 1;
		iVar7 = iVar7 + 1;
	} while (true);
}

void CreateDoorType(int nX, int nY)

{
	char cVar1;
	bool bVar2;

	nX = nX * 0x28;
	bVar2 = *(char *)(nX + nY + 0x1012ab09) == 'D' || (*(char *)(nX + nY + 0x1012ab07) == 'D' || (*(char *)(nX + nY + 0x1012ab30) == 'D' || *(char *)(nX + nY + 0x1012aae0) == 'D'));
	cVar1 = (&DAT_1012ab08)[nX + nY];
	if ((((cVar1 == 'B') || (cVar1 == 'C')) || (cVar1 == 'A')) || (cVar1 == 'E')) {
		bVar2 = true;
	}
	if (bVar2) {
		return;
	}
	(&DAT_1012ab08)[nX + nY] = 'D';
	return;
}

void PlaceHallExt(int nX, int nY)

{
	if ((&DAT_1012ab08)[nX * 0x28 + nY] != ' ') {
		return;
	}
	(&DAT_1012ab08)[nX * 0x28 + nY] = ',';
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddHall(int nX1, int nY1, int nX2, int nY2, int nHd)

{
	int *piVar1;
	int *piVar2;
	int *piVar3;

	if (_DAT_1012b79c == (int *)0x0) {
		_DAT_1012b79c = (int *)DiabloAllocPtr(0x18);
		*_DAT_1012b79c = nX1;
		_DAT_1012b79c[1] = nY1;
		_DAT_1012b79c[2] = nX2;
		_DAT_1012b79c[3] = nY2;
		_DAT_1012b79c[4] = nHd;
		_DAT_1012b79c[5] = 0;
	} else {
		piVar2 = (int *)DiabloAllocPtr(0x18);
		*piVar2 = nX1;
		piVar2[1] = nY1;
		piVar2[2] = nX2;
		piVar2[3] = nY2;
		piVar2[4] = nHd;
		piVar2[5] = 0;
		piVar1 = _DAT_1012b79c;
		do {
			piVar3 = piVar1;
			piVar1 = (int *)piVar3[5];
		} while (piVar1 != (int *)0x0);
		*(int **)(piVar3 + 5) = piVar2;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CreateRoom(int nX1, int nY1, int nX2, int nY2, int nRDest, int nHDir, BOOL ForceHW, int nH, int nW)

{
	int *piVar1;
	int *piVar2;
	int nRDest_00;
	int iVar3;
	int iVar4;
	int v;
	int v_00;
	int iVar5;
	int iVar6;
	int nX1_00;
	int nY1_00;
	int nX2_00;
	int nY2_00;
	int nX2_01;
	int nY2_01;
	int nHd;
	int in_stack_00000038;
	int nW_00;

	nRDest_00 = 0x100f8fd0;
	if (_DAT_1012ab04 < 0x50) {
		v = nX2 - nX1;
		v_00 = nY2 - nY1;
		if ((_DAT_100f71c8 <= v) && (_DAT_100f71c8 <= v_00)) {
			if (_DAT_100f71cc < v) {
				nRDest_00 = 0x100f8fd0;
				nHd = nHDir;
				iVar3 = random('\0', _DAT_100f71cc - _DAT_100f71d0);
				iVar3 = _DAT_100f71d0 + iVar3;
			} else {
				iVar3 = v;
				nHd = nHDir;
				if (_DAT_100f71d0 < v) {
					nRDest_00 = 0x100f8fd0;
					nHd = nHDir;
					iVar3 = random('\0', v - _DAT_100f71d0);
					iVar3 = _DAT_100f71d0 + iVar3;
				}
			}
			if (_DAT_100f71cc < v_00) {
				iVar4 = random('\0', _DAT_100f71cc - _DAT_100f71d0);
				iVar4 = _DAT_100f71d0 + iVar4;
			} else {
				iVar4 = v_00;
				if (_DAT_100f71d0 < v_00) {
					iVar4 = random('\0', v_00 - _DAT_100f71d0);
					iVar4 = _DAT_100f71d0 + iVar4;
				}
			}
			if (ForceHW == 1) {
				iVar4 = nH;
				iVar3 = in_stack_00000038;
			}
			v = random('\0', v);
			v = nX1 + v;
			v_00 = random('\0', v_00);
			v_00 = nY1 + v_00;
			nX2_01 = v + iVar3;
			if (nX2 < v + iVar3) {
				v = nX2 - iVar3;
				nX2_01 = nX2;
			}
			nY2_01 = v_00 + iVar4;
			if (nY2 < v_00 + iVar4) {
				v_00 = nY2 - iVar4;
				nY2_01 = nY2;
			}
			if (0x25 < v) {
				v = 0x26;
			}
			if (0x25 < v_00) {
				v_00 = 0x26;
			}
			if (v < 2) {
				v = 1;
			}
			if (v_00 < 2) {
				v_00 = 1;
			}
			if (0x25 < nX2_01) {
				nX2_01 = 0x26;
			}
			if (0x25 < nY2_01) {
				nY2_01 = 0x26;
			}
			if (nX2_01 < 2) {
				nX2_01 = 1;
			}
			if (nY2_01 < 2) {
				nY2_01 = 1;
			}
			DefineRoom(v, v_00, nX2_01, nY2_01, ForceHW);
			if (ForceHW == 1) {
				piVar1 = *(int **)(nRDest_00 + -0x731c);
				**(int **)(nRDest_00 + -0x7314) = v + 2;
				piVar2 = *(int **)(nRDest_00 + -0x7318);
				*piVar1 = v_00 + 2;
				piVar1 = *(int **)(nRDest_00 + -0x7320);
				*piVar2 = nX2_01;
				*piVar1 = nY2_01;
			}
			nRDest_00 = **(int **)(nRDest_00 + -0x7334);
			*(int *)(nRDest_00 * 0x14 + 0x1012b158) = nRDest;
			if (nRDest != 0) {
				if (nHd == 1) {
					iVar5 = random('\0', (nX2_01 - v) + -2);
					iVar6 = nRDest * 0x14;
					nX1_00 = v + iVar5 + 1;
					iVar5 = random('\0', (*(int *)(iVar6 + 0x1012b150) - *(int *)(&DAT_1012b148 + iVar6)) + -2);
					nY2_00 = *(int *)(iVar6 + 0x1012b154);
					nX2_00 = *(int *)(&DAT_1012b148 + iVar6) + iVar5 + 1;
					nY1_00 = v_00;
				}
				if (nHd == 3) {
					iVar5 = random('\0', (nX2_01 - v) + -2);
					iVar6 = nRDest * 0x14;
					nX1_00 = v + iVar5 + 1;
					iVar5 = random('\0', (*(int *)(iVar6 + 0x1012b150) - *(int *)(&DAT_1012b148 + iVar6)) + -2);
					nY2_00 = *(int *)(iVar6 + 0x1012b14c);
					nX2_00 = *(int *)(&DAT_1012b148 + iVar6) + iVar5 + 1;
					nY1_00 = nY2_01;
				}
				if (nHd == 2) {
					iVar5 = random('\0', (nY2_01 - v_00) + -2);
					iVar6 = nRDest * 0x14;
					nY1_00 = v_00 + iVar5 + 1;
					nX2_00 = *(int *)(&DAT_1012b148 + iVar6);
					iVar5 = random('\0', (*(int *)(iVar6 + 0x1012b154) - *(int *)(iVar6 + 0x1012b14c)) + -2);
					nY2_00 = *(int *)(iVar6 + 0x1012b14c) + iVar5 + 1;
					nX1_00 = nX2_01;
				}
				if (nHd == 4) {
					iVar6 = random('\0', (nY2_01 - v_00) + -2);
					nRDest = nRDest * 0x14;
					nY1_00 = v_00 + iVar6 + 1;
					nX2_00 = *(int *)(nRDest + 0x1012b150);
					iVar6 = random('\0', (*(int *)(nRDest + 0x1012b154) - *(int *)(nRDest + 0x1012b14c)) + -2);
					nY2_00 = *(int *)(nRDest + 0x1012b14c) + iVar6 + 1;
					nX1_00 = v;
				}
				AddHall(nX1_00, nY1_00, nX2_00, nY2_00, nHd);
			}
			if (iVar3 < iVar4) {
				CreateRoom(nX1 + 2, nY1 + 2, v + -2, nY2_01 + -2, nRDest_00, 2, 0, 0, nW_00);
				CreateRoom(nX2_01 + 2, v_00 + 2, nX2 + -2, nY2 + -2, nRDest_00, 4, 0, 0, nW_00);
				CreateRoom(nX1 + 2, nY2_01 + 2, nX2_01 + -2, nY2 + -2, nRDest_00, 1, 0, 0, nW_00);
				CreateRoom(v + 2, nY1 + 2, nX2 + -2, v_00 + -2, nRDest_00, 3, 0, 0, nW_00);
			} else {
				CreateRoom(nX1 + 2, nY1 + 2, nX2_01 + -2, v_00 + -2, nRDest_00, 3, 0, 0, nW_00);
				CreateRoom(v + 2, nY2_01 + 2, nX2 + -2, nY2 + -2, nRDest_00, 1, 0, 0, nW_00);
				CreateRoom(nX1 + 2, v_00 + 2, v + -2, nY2 + -2, nRDest_00, 2, 0, 0, nW_00);
				CreateRoom(nX2_01 + 2, nY1 + 2, nX2 + -2, nY2_01 + -2, nRDest_00, 4, 0, 0, nW_00);
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void GetHall(int *nX1, int *nY1, int *nX2, int *nY2, int *nHd)

{
	int iVar1;
	int *p;

	iVar1 = _DAT_1012b79c[5];
	*nX1 = *_DAT_1012b79c;
	*nY1 = _DAT_1012b79c[1];
	*nX2 = _DAT_1012b79c[2];
	*nY2 = _DAT_1012b79c[3];
	*nHd = _DAT_1012b79c[4];
	p = _DAT_1012b79c;
	_DAT_1012b79c = (int *)0x0;
	mem_free_dbg(p);
	_DAT_1012b79c = (int *)iVar1;
	return;
}

void ConnectHall(int nX1, int nY1, int nX2, int nY2, int nHd)

{
	char cVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int nX;
	int nY;
	char *pcVar10;

	bVar3 = false;
	iVar4 = random('\0', 100);
	iVar5 = random('\0', 100);
	CreateDoorType(nX1, nY1);
	CreateDoorType(nX2, nY2);
	abs(nX2 - nX1);
	abs(nY2 - nY1);
	nX2 = nX2 - *(int *)(&DAT_100f71d4 + nHd * 4);
	nY2 = nY2 - *(int *)(&DAT_100f71e8 + nHd * 4);
	(&DAT_1012ab08)[nX2 * 0x28 + nY2] = 0x2c;
	bVar2 = false;
	nY = nY1;
	nX = nX1;
	while (!bVar3) {
		if ((0x25 < nX) && (nHd == 2)) {
			nHd = 4;
		}
		if ((0x25 < nY) && (nHd == 3)) {
			nHd = 1;
		}
		if ((nX < 2) && (nHd == 4)) {
			nHd = 2;
		}
		if ((nY < 2) && (nHd == 1)) {
			nHd = 3;
		}
		cVar1 = (&DAT_1012ab08)[nX * 0x28 + nY];
		if ((cVar1 == 'C') && ((nHd == 1 || (nHd == 4)))) {
			nHd = 2;
		}
		if ((cVar1 == 'B') && (nHd - 1U < 2)) {
			nHd = 3;
		}
		if ((cVar1 == 'E') && (nHd - 3U < 2)) {
			nHd = 1;
		}
		if ((cVar1 == 'A') && (nHd - 2U < 2)) {
			nHd = 4;
		}
		nX = nX + *(int *)(&DAT_100f71d4 + nHd * 4);
		nY = nY + *(int *)(&DAT_100f71e8 + nHd * 4);
		pcVar10 = &DAT_1012ab08 + nX * 0x28 + nY;
		if (*pcVar10 == ' ') {
			if (bVar2) {
				CreateDoorType(nX - *(int *)(&DAT_100f71d4 + nHd * 4), nY - *(int *)(&DAT_100f71e8 + nHd * 4));
			} else {
				if (iVar4 < 0x32) {
					if ((nHd == 1) || (nHd == 3)) {
						PlaceHallExt(nX + -1, nY);
					} else {
						PlaceHallExt(nX, nY + -1);
					}
				}
				if (iVar5 < 0x32) {
					if ((nHd == 1) || (nHd == 3)) {
						PlaceHallExt(nX + 1, nY);
					} else {
						PlaceHallExt(nX, nY + 1);
					}
				}
			}
			*pcVar10 = ',';
			bVar2 = false;
		} else {
			if ((!bVar2) && (*pcVar10 == '#')) {
				CreateDoorType(nX, nY);
			}
			if (*pcVar10 != ',') {
				bVar2 = true;
			}
		}
		iVar6 = abs(nX2 - nX);
		iVar7 = abs(nY2 - nY);
		if (iVar7 < iVar6) {
			iVar9 = iVar6 << 1;
			if (0x1e < iVar9) {
				iVar9 = 0x1e;
			}
			iVar8 = random('\0', 100);
			if (iVar8 < iVar9) {
				if ((nX < nX2) && (nX < 0x28)) {
					nHd = 2;
				} else {
					nHd = 4;
				}
			}
		} else {
			iVar9 = iVar7 * 5;
			if (0x50 < iVar9) {
				iVar9 = 0x50;
			}
			iVar8 = random('\0', 100);
			if (iVar8 < iVar9) {
				if ((nY < nY2) && (nY < 0x28)) {
					nHd = 3;
				} else {
					nHd = 1;
				}
			}
		}
		if (((iVar7 < 10) && (nX == nX2)) && ((nHd == 2 || (nHd == 4)))) {
			if ((nY < nY2) && (nY < 0x28)) {
				nHd = 3;
			} else {
				nHd = 1;
			}
		}
		if (((iVar6 < 10) && (nY == nY2)) && ((nHd == 1 || (nHd == 3)))) {
			if ((nX < nX2) && (nX < 0x28)) {
				nHd = 2;
			} else {
				nHd = 4;
			}
		}
		if (((iVar7 == 1) && (1 < iVar6)) && ((nHd == 1 || (nHd == 3)))) {
			if ((nX < nX2) && (nX < 0x28)) {
				nHd = 2;
			} else {
				nHd = 4;
			}
		}
		if (((iVar6 == 1) && (1 < iVar7)) && ((nHd == 2 || (nHd == 4)))) {
			if ((nY < nY2) && (nX < 0x28)) {
				nHd = 3;
			} else {
				nHd = 1;
			}
		}
		if (((iVar6 == 0) && (*pcVar10 != ' ')) && ((nHd == 2 || (nHd == 4)))) {
			if ((nX1 < nX2) && (nX < 0x28)) {
				nHd = 3;
			} else {
				nHd = 1;
			}
		}
		if (((iVar7 == 0) && (*pcVar10 != ' ')) && ((nHd == 1 || (nHd == 3)))) {
			if ((nY1 < nY2) && (nY < 0x28)) {
				nHd = 2;
			} else {
				nHd = 4;
			}
		}
		if ((nX == nX2) && (nY == nY2)) {
			bVar3 = true;
		}
	}
	return;
}

void DoPatternCheck(int i, int j)

{
	char cVar1;
	int iVar2;
	undefined4 *puVar3;
	undefined4 *puVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	puVar4 = (undefined4 *)&DAT_100f79f8;
	while (puVar4[4] != 0xff) {
		iVar6 = i + -1;
		iVar7 = j + -1;
		iVar2 = 0xfe;
		iVar5 = 0;
		puVar3 = puVar4;
		while ((iVar5 < 9 && (iVar2 == 0xfe))) {
			iVar2 = 0xff;
			if ((iVar5 == 3) || (iVar5 == 6)) {
				iVar7 = iVar7 + 1;
				iVar6 = i + -1;
			}
			if ((((iVar6 < 0) || (0x27 < iVar6)) || (iVar7 < 0)) || (0x27 < iVar7)) {
				iVar2 = 0xfe;
			} else {
				switch (*puVar3) {
				case 0:
					iVar2 = 0xfe;
					break;
				case 1:
					if ((&DAT_1012ab08)[iVar6 * 0x28 + iVar7] == '#') {
						iVar2 = 0xfe;
					}
					break;
				case 2:
					if ((&DAT_1012ab08)[iVar6 * 0x28 + iVar7] == '.') {
						iVar2 = 0xfe;
					}
					break;
				case 3:
					if ((&DAT_1012ab08)[iVar6 * 0x28 + iVar7] == 'D') {
						iVar2 = 0xfe;
					}
					break;
				case 4:
					if ((&DAT_1012ab08)[iVar6 * 0x28 + iVar7] == ' ') {
						iVar2 = 0xfe;
					}
					break;
				case 5:
					if (((&DAT_1012ab08)[iVar6 * 0x28 + iVar7] == 'D') || ((&DAT_1012ab08)[iVar6 * 0x28 + iVar7] == '.')) {
						iVar2 = 0xfe;
					}
					break;
				case 6:
					if (((&DAT_1012ab08)[iVar6 * 0x28 + iVar7] == 'D') || ((&DAT_1012ab08)[iVar6 * 0x28 + iVar7] == '#')) {
						iVar2 = 0xfe;
					}
					break;
				case 7:
					if (((&DAT_1012ab08)[iVar6 * 0x28 + iVar7] == ' ') || ((&DAT_1012ab08)[iVar6 * 0x28 + iVar7] == '.')) {
						iVar2 = 0xfe;
					}
					break;
				case 8:
					cVar1 = (&DAT_1012ab08)[iVar6 * 0x28 + iVar7];
					if (((cVar1 == 'D') || (cVar1 == '#')) || (cVar1 == '.')) {
						iVar2 = 0xfe;
					}
				}
			}
			iVar6 = iVar6 + 1;
			puVar3 = puVar3 + 1;
			iVar5 = iVar5 + 1;
		}
		if (iVar2 == 0xfe) {
			dungeon[i * 0x28 + j] = (byte)puVar4[9];
		}
		puVar4 = puVar4 + 10;
	}
	return;
}

void L2TileFix(void)

{
	byte *pbVar1;
	byte *pbVar2;
	byte *pbVar3;
	int iVar4;
	longlong lVar5;

	iVar4 = 0;
	pbVar3 = dungeon;
	do {
		lVar5 = 0x14;
		pbVar2 = pbVar3;
		do {
			if ((*pbVar2 == 1) && (pbVar2[1] == 3)) {
				pbVar2[1] = 1;
			}
			if ((*pbVar2 == 3) && (pbVar2[1] == 1)) {
				pbVar2[1] = 3;
			}
			if ((*pbVar2 == 3) && (pbVar2[0x28] == 7)) {
				pbVar2[0x28] = 3;
			}
			if ((*pbVar2 == 2) && (pbVar2[0x28] == 3)) {
				pbVar2[0x28] = 2;
			}
			if ((*pbVar2 == 0xb) && (pbVar2[0x28] == 0xe)) {
				pbVar2[0x28] = 0x10;
			}
			pbVar1 = pbVar2 + 0x28;
			if ((*pbVar1 == 1) && (pbVar2[0x29] == 3)) {
				pbVar2[0x29] = 1;
			}
			if ((*pbVar1 == 3) && (pbVar2[0x29] == 1)) {
				pbVar2[0x29] = 3;
			}
			if ((*pbVar1 == 3) && (pbVar2[0x50] == 7)) {
				pbVar2[0x50] = 3;
			}
			if ((*pbVar1 == 2) && (pbVar2[0x50] == 3)) {
				pbVar2[0x50] = 2;
			}
			if ((*pbVar1 == 0xb) && (pbVar2[0x50] == 0xe)) {
				pbVar2[0x50] = 0x10;
			}
			pbVar2 = pbVar2 + 0x50;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		pbVar3 = pbVar3 + 1;
	} while (iVar4 < 0x28);
	return;
}

BOOL DL2_Cont(BOOL x1f, BOOL y1f, BOOL x2f, BOOL y2f)

{
	if ((((x1f != 0) && (x2f != 0)) && (y1f != 0)) && (y2f != 0)) {
		return 0;
	}
	if (((x1f != 0) && (x2f != 0)) && ((y1f != 0 || (y2f != 0)))) {
		return 1;
	}
	if (((y1f != 0) && (y2f != 0)) && ((x1f != 0 || (x2f != 0)))) {
		return 1;
	}
	return 0;
}

int DL2_NumNoChar(void)

{
	int iVar1;
	char *pcVar2;
	char *pcVar3;
	int iVar4;
	longlong lVar5;

	pcVar3 = &DAT_1012ab08;
	iVar1 = 0;
	iVar4 = 0;
	do {
		lVar5 = 4;
		pcVar2 = pcVar3;
		do {
			if (*pcVar2 == ' ') {
				iVar1 = iVar1 + 1;
			}
			if (pcVar2[0x28] == ' ') {
				iVar1 = iVar1 + 1;
			}
			if (pcVar2[0x50] == ' ') {
				iVar1 = iVar1 + 1;
			}
			if (pcVar2[0x78] == ' ') {
				iVar1 = iVar1 + 1;
			}
			if (pcVar2[0xa0] == ' ') {
				iVar1 = iVar1 + 1;
			}
			if (pcVar2[200] == ' ') {
				iVar1 = iVar1 + 1;
			}
			if (pcVar2[0xf0] == ' ') {
				iVar1 = iVar1 + 1;
			}
			if (pcVar2[0x118] == ' ') {
				iVar1 = iVar1 + 1;
			}
			if (pcVar2[0x140] == ' ') {
				iVar1 = iVar1 + 1;
			}
			if (pcVar2[0x168] == ' ') {
				iVar1 = iVar1 + 1;
			}
			pcVar2 = pcVar2 + 400;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		pcVar3 = pcVar3 + 1;
	} while (iVar4 < 0x28);
	return iVar1;
}

void DL2_DrawRoom(int x1, int y1, int x2, int y2)

{
	ulonglong uVar1;
	uint uVar2;
	undefined *puVar3;
	undefined *puVar4;
	int iVar5;

	iVar5 = y1;
	puVar3 = &DAT_1012ab08 + y1;
	while (iVar5 <= y2) {
		puVar4 = puVar3 + x1 * 0x28;
		uVar2 = (x2 + 1) - x1;
		if (x1 <= x2) {
			uVar1 = (ulonglong)(uVar2 >> 3);
			if (uVar2 >> 3 != 0) {
				do {
					*puVar4 = 0x2e;
					puVar4[0x28] = 0x2e;
					puVar4[0x50] = 0x2e;
					puVar4[0x78] = 0x2e;
					puVar4[0xa0] = 0x2e;
					puVar4[200] = 0x2e;
					puVar4[0xf0] = 0x2e;
					puVar4[0x118] = 0x2e;
					puVar4 = puVar4 + 0x140;
					uVar1 = uVar1 - 1;
				} while (uVar1 != 0);
				uVar2 = uVar2 & 7;
				if (uVar2 == 0)
					goto LAB_1002e524;
			}
			do {
				*puVar4 = 0x2e;
				puVar4 = puVar4 + 0x28;
				uVar2 = uVar2 - 1;
			} while (uVar2 != 0);
		}
	LAB_1002e524:
		puVar3 = puVar3 + 1;
		iVar5 = iVar5 + 1;
	}
	iVar5 = x1 * 0x28;
	puVar3 = &DAT_1012ab08 + iVar5 + y1;
	puVar4 = &DAT_1012ab08 + x2 * 0x28 + y1;
	uVar2 = (y2 + 1) - y1;
	if (y1 <= y2) {
		uVar1 = (ulonglong)(uVar2 >> 3);
		if (uVar2 >> 3 != 0) {
			do {
				*puVar3 = 0x23;
				*puVar4 = 0x23;
				puVar3[1] = 0x23;
				puVar4[1] = 0x23;
				puVar3[2] = 0x23;
				puVar4[2] = 0x23;
				puVar3[3] = 0x23;
				puVar4[3] = 0x23;
				puVar3[4] = 0x23;
				puVar4[4] = 0x23;
				puVar3[5] = 0x23;
				puVar4[5] = 0x23;
				puVar3[6] = 0x23;
				puVar4[6] = 0x23;
				puVar3[7] = 0x23;
				puVar3 = puVar3 + 8;
				puVar4[7] = 0x23;
				puVar4 = puVar4 + 8;
				uVar1 = uVar1 - 1;
			} while (uVar1 != 0);
			uVar2 = uVar2 & 7;
			if (uVar2 == 0)
				goto LAB_1002e5d8;
		}
		do {
			*puVar3 = 0x23;
			puVar3 = puVar3 + 1;
			*puVar4 = 0x23;
			puVar4 = puVar4 + 1;
			uVar2 = uVar2 - 1;
		} while (uVar2 != 0);
	}
LAB_1002e5d8:
	puVar3 = &DAT_1012ab08 + y1 + iVar5;
	puVar4 = &DAT_1012ab08 + y2 + iVar5;
	uVar2 = (x2 + 1) - x1;
	if (x1 <= x2) {
		uVar1 = (ulonglong)(uVar2 >> 3);
		if (uVar2 >> 3 != 0) {
			do {
				*puVar3 = 0x23;
				*puVar4 = 0x23;
				puVar3[0x28] = 0x23;
				puVar4[0x28] = 0x23;
				puVar3[0x50] = 0x23;
				puVar4[0x50] = 0x23;
				puVar3[0x78] = 0x23;
				puVar4[0x78] = 0x23;
				puVar3[0xa0] = 0x23;
				puVar4[0xa0] = 0x23;
				puVar3[200] = 0x23;
				puVar4[200] = 0x23;
				puVar3[0xf0] = 0x23;
				puVar4[0xf0] = 0x23;
				puVar3[0x118] = 0x23;
				puVar3 = puVar3 + 0x140;
				puVar4[0x118] = 0x23;
				puVar4 = puVar4 + 0x140;
				uVar1 = uVar1 - 1;
			} while (uVar1 != 0);
			uVar2 = uVar2 & 7;
			if (uVar2 == 0) {
				return;
			}
		}
		do {
			*puVar3 = 0x23;
			puVar3 = puVar3 + 0x28;
			*puVar4 = 0x23;
			puVar4 = puVar4 + 0x28;
			uVar2 = uVar2 - 1;
		} while (uVar2 != 0);
	}
	return;
}

void DL2_KnockWalls(int x1, int y1, int x2, int y2)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;

	iVar2 = x1 + 1;
	iVar1 = x2 - iVar2;
	puVar3 = &DAT_1012ab08 + y1 + iVar2 * 0x28;
	puVar4 = &DAT_1012ab08 + y2 + iVar2 * 0x28;
	if (iVar2 < x2) {
		do {
			if ((puVar3[-1] == '.') && (puVar3[1] == '.')) {
				*puVar3 = 0x2e;
			}
			if ((puVar4[-1] == '.') && (puVar4[1] == '.')) {
				*puVar4 = 0x2e;
			}
			if (puVar3[-1] == 'D') {
				puVar3[-1] = 0x2e;
			}
			if (puVar4[1] == 'D') {
				puVar4[1] = 0x2e;
			}
			puVar3 = puVar3 + 0x28;
			puVar4 = puVar4 + 0x28;
			iVar1 = iVar1 + -1;
		} while (iVar1 != 0);
	}
	y1 = y1 + 1;
	puVar4 = &DAT_1012ab08 + x1 * 0x28 + y1;
	iVar2 = y2 - y1;
	puVar3 = &DAT_1012ab08 + x2 * 0x28 + y1;
	if (y2 <= y1) {
		return;
	}
	do {
		if ((puVar4[-0x28] == '.') && (puVar4[0x28] == '.')) {
			*puVar4 = 0x2e;
		}
		if ((puVar3[-0x28] == '.') && (puVar3[0x28] == '.')) {
			*puVar3 = 0x2e;
		}
		if (puVar4[-0x28] == 'D') {
			puVar4[-0x28] = 0x2e;
		}
		if (puVar3[0x28] == 'D') {
			puVar3[0x28] = 0x2e;
		}
		puVar4 = puVar4 + 1;
		puVar3 = puVar3 + 1;
		iVar2 = iVar2 + -1;
	} while (iVar2 != 0);
	return;
}

BOOL DL2_FillVoids(void)

{
	int iVar1;
	int x1;
	BOOL BVar2;
	char *pcVar3;
	int y1;
	int iVar4;
	char *pcVar5;
	undefined *puVar6;
	int y2f;
	int y1f;
	int x2f;
	int x1f;
	int y2;
	int x2;

	iVar4 = 0;
	while ((y1 = DL2_NumNoChar(), 700 < y1 && (iVar4 < 100))) {
		y1 = random('\0', 0x26);
		x2 = y1 + 1;
		iVar1 = random('\0', 0x26);
		y2 = iVar1 + 1;
		x1 = x2 * 0x28 + y2;
		if ((&DAT_1012ab08)[x1] == '#') {
			y2f = 0;
			y1f = 0;
			x2f = 0;
			x1f = 0;
			if ((*(char *)(x1 + 0x1012aae0) == ' ') && (*(char *)(x1 + 0x1012ab30) == '.')) {
				if (((*(char *)(x1 + 0x1012ab2f) == '.') && (*(char *)(x1 + 0x1012ab31) == '.')) && ((*(char *)(x1 + 0x1012aadf) == ' ' && (*(char *)(x1 + 0x1012aae1) == ' ')))) {
					y2f = 1;
					y1f = 1;
					x1f = 1;
				}
			} else {
				if ((*(char *)(x1 + 0x1012ab30) == ' ') && (*(char *)(x1 + 0x1012aae0) == '.')) {
					if ((((*(char *)(x1 + 0x1012aadf) == '.') && (*(char *)(x1 + 0x1012aae1) == '.')) && (*(char *)(x1 + 0x1012ab2f) == ' ')) && (*(char *)(x1 + 0x1012ab31) == ' ')) {
						y2f = 1;
						y1f = 1;
						x2f = 1;
					}
				} else {
					if ((*(char *)(x1 + 0x1012ab07) == ' ') && (*(char *)(x1 + 0x1012ab09) == '.')) {
						if (((*(char *)(x1 + 0x1012aae1) == '.') && (*(char *)(x1 + 0x1012ab31) == '.')) && ((*(char *)(x1 + 0x1012aadf) == ' ' && (*(char *)(x1 + 0x1012ab2f) == ' ')))) {
							x2f = 1;
							x1f = 1;
							y1f = 1;
						}
					} else {
						if ((*(char *)(x1 + 0x1012ab09) == ' ') && ((((*(char *)(x1 + 0x1012ab07) == '.' && (*(char *)(x1 + 0x1012aadf) == '.')) && (*(char *)(x1 + 0x1012ab2f) == '.')) && ((*(char *)(x1 + 0x1012aae1) == ' ' && (*(char *)(x1 + 0x1012ab31) == ' ')))))) {
							x2f = 1;
							x1f = 1;
							y2f = 1;
						}
					}
				}
			}
			BVar2 = DL2_Cont(x1f, y1f, x2f, y2f);
			if (BVar2 != 0) {
				x1 = x2;
				if (x1f != 0) {
					x1 = y1;
				}
				if (x2f != 0) {
					x2 = y1 + 2;
				}
				y1 = y2;
				if (y1f != 0) {
					y1 = iVar1;
				}
				if (y2f != 0) {
					y2 = iVar1 + 2;
				}
				if (x1f == 0) {
					puVar6 = &DAT_1012ab08 + x2 * 0x28;
					pcVar3 = puVar6 + y1;
					pcVar5 = puVar6 + y2;
					while ((y1f != 0 || (y2f != 0))) {
						if (y1 == 0) {
							y1f = 0;
						}
						if (y2 == 0x27) {
							y2f = 0;
						}
						if (0xd < y2 - y1) {
							y1f = 0;
							y2f = 0;
						}
						if (y1f != 0) {
							pcVar3 = pcVar3 + -1;
							y1 = y1 + -1;
						}
						if (y2f != 0) {
							pcVar5 = pcVar5 + 1;
							y2 = y2 + 1;
						}
						if (*pcVar3 != ' ') {
							y1f = 0;
						}
						if (*pcVar5 != ' ') {
							y2f = 0;
						}
					}
					iVar1 = y1 + 2;
					if (5 < (y2 + -2) - iVar1) {
						while (x2f != 0) {
							if (x2 == 0x27) {
								x2f = 0;
							}
							if (0xb < x2 - x1) {
								x2f = 0;
							}
							y2f = (y2 + -1) - iVar1;
							pcVar3 = puVar6 + y1 + 2;
							if (iVar1 <= y2 + -2) {
								do {
									if (*pcVar3 != ' ') {
										x2f = 0;
									}
									pcVar3 = pcVar3 + 1;
									y2f = y2f + -1;
								} while (y2f != 0);
							}
							if (x2f != 0) {
								puVar6 = puVar6 + 0x28;
								x2 = x2 + 1;
							}
						}
						x2 = x2 + -2;
						if (5 < x2 - x1) {
							DL2_DrawRoom(x1, y1 + 2, x2, y2 + -2);
							DL2_KnockWalls(x1, y1 + 2, x2, y2 + -2);
						}
					}
				} else {
					if (x2f == 0) {
						puVar6 = &DAT_1012ab08 + x1 * 0x28;
						pcVar3 = puVar6 + y1;
						pcVar5 = puVar6 + y2;
						while ((y1f != 0 || (y2f != 0))) {
							if (y1 == 0) {
								y1f = 0;
							}
							if (y2 == 0x27) {
								y2f = 0;
							}
							if (0xd < y2 - y1) {
								y1f = 0;
								y2f = 0;
							}
							if (y1f != 0) {
								pcVar3 = pcVar3 + -1;
								y1 = y1 + -1;
							}
							if (y2f != 0) {
								pcVar5 = pcVar5 + 1;
								y2 = y2 + 1;
							}
							if (*pcVar3 != ' ') {
								y1f = 0;
							}
							if (*pcVar5 != ' ') {
								y2f = 0;
							}
						}
						iVar1 = y1 + 2;
						if (5 < (y2 + -2) - iVar1) {
							while (x1f != 0) {
								if (x1 == 0) {
									x1f = 0;
								}
								if (0xb < x2 - x1) {
									x1f = 0;
								}
								y2f = (y2 + -1) - iVar1;
								pcVar3 = puVar6 + y1 + 2;
								if (iVar1 <= y2 + -2) {
									do {
										if (*pcVar3 != ' ') {
											x1f = 0;
										}
										pcVar3 = pcVar3 + 1;
										y2f = y2f + -1;
									} while (y2f != 0);
								}
								if (x1f != 0) {
									puVar6 = puVar6 + -0x28;
									x1 = x1 + -1;
								}
							}
							x1 = x1 + 2;
							if (5 < x2 - x1) {
								DL2_DrawRoom(x1, y1 + 2, x2, y2 + -2);
								DL2_KnockWalls(x1, y1 + 2, x2, y2 + -2);
							}
						}
					} else {
						if (y1f == 0) {
							puVar6 = &DAT_1012ab08 + y2;
							pcVar3 = puVar6 + x1 * 0x28;
							pcVar5 = puVar6 + x2 * 0x28;
							while ((x1f != 0 || (x2f != 0))) {
								if (x1 == 0) {
									x1f = 0;
								}
								if (x2 == 0x27) {
									x2f = 0;
								}
								if (0xd < x2 - x1) {
									x1f = 0;
									x2f = 0;
								}
								if (x1f != 0) {
									pcVar3 = pcVar3 + -0x28;
									x1 = x1 + -1;
								}
								if (x2f != 0) {
									pcVar5 = pcVar5 + 0x28;
									x2 = x2 + 1;
								}
								if (*pcVar3 != ' ') {
									x1f = 0;
								}
								if (*pcVar5 != ' ') {
									x2f = 0;
								}
							}
							iVar1 = x1 + 2;
							if (5 < (x2 + -2) - iVar1) {
								while (y2f != 0) {
									if (y2 == 0x27) {
										y2f = 0;
									}
									if (0xb < y2 - y1) {
										y2f = 0;
									}
									y1f = (x2 + -1) - iVar1;
									pcVar3 = puVar6 + iVar1 * 0x28;
									if (iVar1 <= x2 + -2) {
										do {
											if (*pcVar3 != ' ') {
												y2f = 0;
											}
											pcVar3 = pcVar3 + 0x28;
											y1f = y1f + -1;
										} while (y1f != 0);
									}
									if (y2f != 0) {
										puVar6 = puVar6 + 1;
										y2 = y2 + 1;
									}
								}
								y2 = y2 + -2;
								if (5 < y2 - y1) {
									DL2_DrawRoom(x1 + 2, y1, x2 + -2, y2);
									DL2_KnockWalls(x1 + 2, y1, x2 + -2, y2);
								}
							}
						} else {
							if (y2f == 0) {
								puVar6 = &DAT_1012ab08 + y1;
								pcVar3 = puVar6 + x1 * 0x28;
								pcVar5 = puVar6 + x2 * 0x28;
								while ((x1f != 0 || (x2f != 0))) {
									if (x1 == 0) {
										x1f = 0;
									}
									if (x2 == 0x27) {
										x2f = 0;
									}
									if (0xd < x2 - x1) {
										x1f = 0;
										x2f = 0;
									}
									if (x1f != 0) {
										pcVar3 = pcVar3 + -0x28;
										x1 = x1 + -1;
									}
									if (x2f != 0) {
										pcVar5 = pcVar5 + 0x28;
										x2 = x2 + 1;
									}
									if (*pcVar3 != ' ') {
										x1f = 0;
									}
									if (*pcVar5 != ' ') {
										x2f = 0;
									}
								}
								iVar1 = x1 + 2;
								if (5 < (x2 + -2) - iVar1) {
									while (y1f != 0) {
										if (y1 == 0) {
											y1f = 0;
										}
										if (0xb < y2 - y1) {
											y1f = 0;
										}
										y2f = (x2 + -1) - iVar1;
										pcVar3 = puVar6 + iVar1 * 0x28;
										if (iVar1 <= x2 + -2) {
											do {
												if (*pcVar3 != ' ') {
													y1f = 0;
												}
												pcVar3 = pcVar3 + 0x28;
												y2f = y2f + -1;
											} while (y2f != 0);
										}
										if (y1f != 0) {
											puVar6 = puVar6 + -1;
											y1 = y1 + -1;
										}
									}
									y1 = y1 + 2;
									if (5 < y2 - y1) {
										DL2_DrawRoom(x1 + 2, y1, x2 + -2, y2);
										DL2_KnockWalls(x1 + 2, y1, x2 + -2, y2);
									}
								}
							}
						}
					}
				}
			}
			iVar4 = iVar4 + 1;
		}
	}
	iVar4 = DL2_NumNoChar();
	return (BOOL)(uint)(iVar4 < 0x2bd);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL CreateDungeon(void)

{
	undefined8 uVar1;
	char *pcVar2;
	BOOL ForceHW;
	char *pcVar3;
	int nH;
	int i;
	longlong lVar4;
	int nW;
	int local_20;
	int local_1c;
	int local_18;
	int local_14;
	int local_10[4];

	uVar1 = 0x100f8fd0;
	nH = 0;
	ForceHW = 0;
	if (currlevel == 7) {
		if (quests[8]._qactive != '\0') {
			ForceHW = 1;
			nH = 0xf;
		}
	} else {
		if (currlevel < 7) {
			if (currlevel == 5) {
				if (quests[9]._qactive != '\0') {
					ForceHW = 1;
					nH = 0x14;
				}
			} else {
				if ((4 < currlevel) && (quests[14]._qactive != '\0')) {
					ForceHW = 1;
					nH = 10;
				}
			}
		}
	}
	CreateRoom(2, 2, 0x27, 0x27, 0, 0, ForceHW, nH, nW);
	while (_DAT_1012b79c != 0) {
		GetHall(local_10, &local_14, &local_18, &local_1c, &local_20);
		ConnectHall(local_10[0], local_14, local_18, local_1c, local_20);
	}
	nH = 0;
	pcVar2 = *(char **)((int)uVar1 + -0x7330);
	do {
		lVar4 = 0x29;
		pcVar3 = pcVar2;
		do {
			if (*pcVar3 == 'C') {
				*pcVar3 = '#';
			}
			if (*pcVar3 == 'B') {
				*pcVar3 = '#';
			}
			if (*pcVar3 == 'E') {
				*pcVar3 = '#';
			}
			if (*pcVar3 == 'A') {
				*pcVar3 = '#';
			}
			if (*pcVar3 == ',') {
				*pcVar3 = '.';
				if (pcVar3[-0x29] == ' ') {
					pcVar3[-0x29] = '#';
				}
				if (pcVar3[-0x28] == ' ') {
					pcVar3[-0x28] = '#';
				}
				if (pcVar3[-0x27] == ' ') {
					pcVar3[-0x27] = '#';
				}
				if (pcVar3[0x27] == ' ') {
					pcVar3[0x27] = '#';
				}
				if (pcVar3[0x28] == ' ') {
					pcVar3[0x28] = '#';
				}
				if (pcVar3[0x29] == ' ') {
					pcVar3[0x29] = '#';
				}
				if (pcVar3[-1] == ' ') {
					pcVar3[-1] = '#';
				}
				if (pcVar3[1] == ' ') {
					pcVar3[1] = '#';
				}
			}
			pcVar3 = pcVar3 + 0x28;
			lVar4 = lVar4 + -1;
		} while (lVar4 != 0);
		nH = nH + 1;
		pcVar2 = pcVar2 + 1;
	} while (nH < 0x29);
	ForceHW = DL2_FillVoids();
	if (ForceHW == 0) {
		ForceHW = 0;
	} else {
		nH = 0;
		do {
			i = 0;
			do {
				DoPatternCheck(i, nH);
				i = i + 1;
			} while (i < 0x28);
			nH = nH + 1;
		} while (nH < 0x28);
		ForceHW = 1;
	}
	return ForceHW;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_L2Pass3(void)

{
	undefined *puVar1;
	short sVar2;
	int iVar3;
	char cVar4;
	undefined in_r4;
	byte *pbVar5;
	undefined in_r5;
	short sVar6;
	undefined in_r6;
	short sVar8;
	byte *pbVar7;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	short sVar12;
	int iVar9;
	int iVar10;
	int iVar11;
	undefined in_r10;
	int iVar13;
	int iVar14;
	longlong lVar15;
	undefined in_stack_ffffffbb;

	iVar3 = 0x100f8fd0;
	cVar4 = LockMemFile((ulonglong)_DAT_1013b350, in_r4, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb);
	iVar13 = (int)cVar4;
	sVar6 = CONCAT11(*(undefined *)(iVar13 + 0x59), *(undefined *)(iVar13 + 0x58)) + 1;
	sVar8 = CONCAT11(*(undefined *)(iVar13 + 0x5b), *(undefined *)(iVar13 + 0x5a)) + 1;
	sVar12 = CONCAT11(*(undefined *)(iVar13 + 0x5d), *(undefined *)(iVar13 + 0x5c)) + 1;
	iVar14 = 0;
	sVar2 = CONCAT11(*(undefined *)(iVar13 + 0x5f), *(undefined *)(iVar13 + 0x5e)) + 1;
	iVar13 = 0;
	do {
		lVar15 = 0xe;
		iVar9 = 0;
		do {
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar9) = sVar6;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar9 + 0xe0) = sVar8;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar9 + 2) = sVar12;
			iVar10 = iVar9 + 0x1c0;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar9 + 0xe2) = sVar2;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar10) = sVar6;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar10 + 0xe0) = sVar8;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar10 + 2) = sVar12;
			iVar11 = iVar9 + 0x380;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar10 + 0xe2) = sVar2;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar11) = sVar6;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar11 + 0xe0) = sVar8;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar11 + 2) = sVar12;
			iVar10 = iVar9 + 0x540;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar11 + 0xe2) = sVar2;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar10) = sVar6;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar10 + 0xe0) = sVar8;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar10 + 2) = sVar12;
			iVar9 = iVar9 + 0x700;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar10 + 0xe2) = sVar2;
			lVar15 = lVar15 + -1;
		} while (lVar15 != 0);
		iVar14 = iVar14 + 2;
		iVar13 = iVar13 + 4;
	} while (iVar14 < 0x70);
	pbVar7 = *(byte **)(iVar3 + -0x77cc);
	iVar3 = 0;
	iVar13 = 0x20;
	do {
		lVar15 = 0x14;
		iVar14 = 0xe00;
		pbVar5 = pbVar7;
		do {
			puVar1 = (undefined *)((int)cVar4 + ((uint)*pbVar5 - 1) * 8);
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar14) = CONCAT11(puVar1[1], *puVar1) + 1;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar14 + 0xe0) = CONCAT11(puVar1[3], puVar1[2]) + 1;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar14 + 2) = CONCAT11(puVar1[5], puVar1[4]) + 1;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar14 + 0xe2) = CONCAT11(puVar1[7], puVar1[6]) + 1;
			puVar1 = (undefined *)((int)cVar4 + ((uint)pbVar5[0x28] - 1) * 8);
			iVar9 = iVar14 + 0x1c0;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar9) = CONCAT11(puVar1[1], *puVar1) + 1;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar9 + 0xe0) = CONCAT11(puVar1[3], puVar1[2]) + 1;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar9 + 2) = CONCAT11(puVar1[5], puVar1[4]) + 1;
			pbVar5 = pbVar5 + 0x50;
			iVar14 = iVar14 + 0x380;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar9 + 0xe2) = CONCAT11(puVar1[7], puVar1[6]) + 1;
			lVar15 = lVar15 + -1;
		} while (lVar15 != 0);
		iVar3 = iVar3 + 1;
		pbVar7 = pbVar7 + 1;
		iVar13 = iVar13 + 4;
	} while (iVar3 < 0x28);
	UnlockMemFile((char)_DAT_1013b350);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_L2TransFix(void)

{
	byte *pbVar1;
	int iVar2;
	byte *pbVar3;
	int iVar4;
	int iVar5;
	undefined *puVar6;
	longlong lVar7;

	iVar5 = 0x10;
	pbVar3 = dungeon;
	iVar4 = 0;
	do {
		lVar7 = 0x28;
		iVar2 = 0x700;
		pbVar1 = pbVar3;
		do {
			if ((*pbVar1 == 0xe) && (pbVar1[-1] == 10)) {
				puVar6 = (undefined *)(iVar5 + _DAT_1012f1c8 + iVar2);
				puVar6[0x70] = *puVar6;
				puVar6 = (undefined *)(iVar5 + _DAT_1012f1c8 + iVar2);
				puVar6[0x71] = *puVar6;
			}
			if ((*pbVar1 == 0xf) && (pbVar1[0x28] == 0xb)) {
				puVar6 = (undefined *)(iVar5 + _DAT_1012f1c8 + iVar2);
				puVar6[1] = *puVar6;
				puVar6 = (undefined *)(iVar5 + _DAT_1012f1c8 + iVar2);
				puVar6[0x71] = *puVar6;
			}
			if (*pbVar1 == 10) {
				puVar6 = (undefined *)(iVar5 + _DAT_1012f1c8 + iVar2);
				puVar6[0x70] = *puVar6;
				puVar6 = (undefined *)(iVar5 + _DAT_1012f1c8 + iVar2);
				puVar6[0x71] = *puVar6;
			}
			if (*pbVar1 == 0xb) {
				puVar6 = (undefined *)(iVar5 + _DAT_1012f1c8 + iVar2);
				puVar6[1] = *puVar6;
				puVar6 = (undefined *)(iVar5 + _DAT_1012f1c8 + iVar2);
				puVar6[0x71] = *puVar6;
			}
			if (*pbVar1 == 0x10) {
				puVar6 = (undefined *)(iVar5 + _DAT_1012f1c8 + iVar2);
				puVar6[0x70] = *puVar6;
				puVar6 = (undefined *)(iVar5 + _DAT_1012f1c8 + iVar2);
				puVar6[1] = *puVar6;
				puVar6 = (undefined *)(iVar5 + _DAT_1012f1c8 + iVar2);
				puVar6[0x71] = *puVar6;
			}
			iVar2 = iVar2 + 0xe0;
			pbVar1 = pbVar1 + 0x28;
			lVar7 = lVar7 + -1;
		} while (lVar7 != 0);
		iVar4 = iVar4 + 1;
		pbVar3 = pbVar3 + 1;
		iVar5 = iVar5 + 2;
	} while (iVar4 < 0x28);
	return;
}

void L2DirtFix(void)

{
	byte *pbVar1;
	byte *pbVar2;
	byte *pbVar3;
	int iVar4;
	longlong lVar5;

	iVar4 = 0;
	pbVar3 = dungeon;
	do {
		lVar5 = 0x14;
		pbVar2 = pbVar3;
		do {
			if ((*pbVar2 == 0xd) && (pbVar2[0x28] != 0xb)) {
				*pbVar2 = 0x92;
			}
			if ((*pbVar2 == 0xb) && (pbVar2[0x28] != 0xb)) {
				*pbVar2 = 0x90;
			}
			if ((*pbVar2 == 0xf) && (pbVar2[0x28] != 0xb)) {
				*pbVar2 = 0x94;
			}
			if ((*pbVar2 == 10) && (pbVar2[1] != 10)) {
				*pbVar2 = 0x8f;
			}
			if ((*pbVar2 == 0xd) && (pbVar2[1] != 10)) {
				*pbVar2 = 0x92;
			}
			if ((*pbVar2 == 0xe) && (pbVar2[1] != 0xf)) {
				*pbVar2 = 0x93;
			}
			pbVar1 = pbVar2 + 0x28;
			if ((*pbVar1 == 0xd) && (pbVar2[0x50] != 0xb)) {
				*pbVar1 = 0x92;
			}
			if ((*pbVar1 == 0xb) && (pbVar2[0x50] != 0xb)) {
				*pbVar1 = 0x90;
			}
			if ((*pbVar1 == 0xf) && (pbVar2[0x50] != 0xb)) {
				*pbVar1 = 0x94;
			}
			if ((*pbVar1 == 10) && (pbVar2[0x29] != 10)) {
				*pbVar1 = 0x8f;
			}
			if ((*pbVar1 == 0xd) && (pbVar2[0x29] != 10)) {
				*pbVar1 = 0x92;
			}
			if ((*pbVar1 == 0xe) && (pbVar2[0x29] != 0xf)) {
				*pbVar1 = 0x93;
			}
			pbVar2 = pbVar2 + 0x50;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		pbVar3 = pbVar3 + 1;
	} while (iVar4 < 0x28);
	return;
}

void L2LockoutFix(void)

{
	byte bVar1;
	bool bVar2;
	byte *pbVar3;
	byte *pbVar4;
	byte *pbVar5;
	byte *pbVar6;
	byte *pbVar7;
	int iVar8;
	int iVar9;
	longlong lVar10;

	pbVar4 = dungeon;
	iVar8 = 0;
	pbVar5 = &DAT_1013b370;
	pbVar7 = pbVar4;
	do {
		lVar10 = 8;
		pbVar6 = pbVar7;
		do {
			if ((*pbVar6 == 4) && (pbVar6[-0x28] != 3)) {
				*pbVar6 = 1;
			}
			if ((*pbVar6 == 5) && (pbVar6[-1] != 3)) {
				*pbVar6 = 2;
			}
			pbVar3 = pbVar6 + 0x28;
			if ((*pbVar3 == 4) && (*pbVar6 != 3)) {
				*pbVar3 = 1;
			}
			if ((*pbVar3 == 5) && (pbVar6[0x27] != 3)) {
				*pbVar3 = 2;
			}
			pbVar3 = pbVar6 + 0x50;
			if ((*pbVar3 == 4) && (pbVar6[0x28] != 3)) {
				*pbVar3 = 1;
			}
			if ((*pbVar3 == 5) && (pbVar6[0x4f] != 3)) {
				*pbVar3 = 2;
			}
			pbVar3 = pbVar6 + 0x78;
			if ((*pbVar3 == 4) && (pbVar6[0x50] != 3)) {
				*pbVar3 = 1;
			}
			if ((*pbVar3 == 5) && (pbVar6[0x77] != 3)) {
				*pbVar3 = 2;
			}
			pbVar3 = pbVar6 + 0xa0;
			if ((*pbVar3 == 4) && (pbVar6[0x78] != 3)) {
				*pbVar3 = 1;
			}
			if ((*pbVar3 == 5) && (pbVar6[0x9f] != 3)) {
				*pbVar3 = 2;
			}
			pbVar6 = pbVar6 + 200;
			lVar10 = lVar10 + -1;
		} while (lVar10 != 0);
		iVar8 = iVar8 + 1;
		pbVar7 = pbVar7 + 1;
	} while (iVar8 < 0x28);
	lVar10 = 0x26;
	pbVar6 = pbVar4;
	pbVar7 = pbVar5;
	do {
		pbVar6 = pbVar6 + 1;
		pbVar7 = pbVar7 + 1;
		iVar9 = 1;
		iVar8 = 0x28;
		while (true) {
			if (0x26 < iVar9)
				break;
			if ((pbVar7[iVar8] & 0x80) == 0) {
				pbVar3 = pbVar6 + iVar8;
				if ((((*pbVar3 == 2) || (*pbVar3 == 5)) && (pbVar3[-1] == 3)) && (pbVar3[1] == 3)) {
					bVar2 = false;
					while (((bVar1 = *pbVar3, bVar1 == 2 || (bVar1 == 5)) && ((pbVar3[-1] == 3 && (pbVar3[1] == 3))))) {
						if (bVar1 == 5) {
							bVar2 = true;
						}
						pbVar3 = pbVar3 + 0x28;
						iVar9 = iVar9 + 1;
						iVar8 = iVar8 + 0x28;
					}
					if ((!bVar2) && ((pbVar7[iVar8 + -0x28] & 0x80) == 0)) {
						pbVar6[iVar8 + -0x28] = 5;
					}
				}
			}
			iVar9 = iVar9 + 1;
			iVar8 = iVar8 + 0x28;
		}
		lVar10 = lVar10 + -1;
	} while (lVar10 != 0);
	lVar10 = 0x26;
	do {
		pbVar5 = pbVar5 + 0x28;
		pbVar4 = pbVar4 + 0x28;
		iVar8 = 1;
		pbVar7 = pbVar5;
		while (true) {
			pbVar7 = pbVar7 + 1;
			if (0x26 < iVar8)
				break;
			if ((*pbVar7 & 0x80) == 0) {
				pbVar6 = pbVar4 + iVar8;
				if ((((*pbVar6 == 1) || (*pbVar6 == 4)) && (pbVar6[-0x28] == 3)) && (pbVar6[0x28] == 3)) {
					bVar2 = false;
					while (((bVar1 = *pbVar6, bVar1 == 1 || (bVar1 == 4)) && ((pbVar6[-0x28] == 3 && (pbVar6[0x28] == 3))))) {
						if (bVar1 == 4) {
							bVar2 = true;
						}
						pbVar6 = pbVar6 + 1;
						iVar8 = iVar8 + 1;
						pbVar7 = pbVar7 + 1;
					}
					if ((!bVar2) && ((pbVar5[iVar8 + -1] & 0x80) == 0)) {
						pbVar4[iVar8 + -1] = 4;
					}
				}
			}
			iVar8 = iVar8 + 1;
		}
		lVar10 = lVar10 + -1;
	} while (lVar10 != 0);
	return;
}

void L2DoorFix(void)

{
	byte *pbVar1;
	byte *pbVar2;
	byte *pbVar3;
	int iVar4;
	longlong lVar5;

	iVar4 = 1;
	pbVar2 = dungeon;
	do {
		pbVar3 = pbVar2 + 0x29;
		lVar5 = 0xd;
		do {
			if ((*pbVar3 == 4) && (pbVar3[-1] == 3)) {
				*pbVar3 = 7;
			}
			if ((*pbVar3 == 5) && (pbVar3[-0x28] == 3)) {
				*pbVar3 = 9;
			}
			pbVar1 = pbVar3 + 0x28;
			if ((*pbVar1 == 4) && (pbVar3[0x27] == 3)) {
				*pbVar1 = 7;
			}
			if ((*pbVar1 == 5) && (*pbVar3 == 3)) {
				*pbVar1 = 9;
			}
			pbVar1 = pbVar3 + 0x50;
			if ((*pbVar1 == 4) && (pbVar3[0x4f] == 3)) {
				*pbVar1 = 7;
			}
			if ((*pbVar1 == 5) && (pbVar3[0x28] == 3)) {
				*pbVar1 = 9;
			}
			pbVar3 = pbVar3 + 0x78;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		pbVar2 = pbVar2 + 1;
	} while (iVar4 < 0x28);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_L2(int entry)

{
	undefined *puVar1;
	undefined8 uVar2;
	int iVar3;
	BOOL BVar4;
	BOOL BVar5;
	undefined *puVar6;
	undefined *puVar7;
	longlong lVar8;

	uVar2 = 0x100f8fd0;
	BVar5 = 0;
	while (iVar3 = (int)uVar2, BVar5 == 0) {
		_DAT_1012ab04 = 0;
		InitDungeon();
		DRLG_InitTrans();
		BVar4 = CreateDungeon();
		if (BVar4 != 0) {
			L2TileFix();
			if (_DAT_1013b358 != 0) {
				DRLG_L2SetRoom(_DAT_1012ab00, _DAT_1012aafc);
			}
			DRLG_L5FloodTVal();
			DRLG_L2TransFix();
			if (entry == 0) {
				BVar5 = DRLG_L2PlaceMiniSet(&DAT_100f782c, 1, 1, -1, -1, 1, 0);
				if (BVar5 != 0) {
					BVar5 = DRLG_L2PlaceMiniSet(&DAT_100f784e, 1, 1, -1, -1, 0, 1);
				}
				if ((BVar5 != 0) && (currlevel == 5)) {
					BVar5 = DRLG_L2PlaceMiniSet(&DAT_100f7870, 1, 1, -1, -1, 0, 6);
				}
				_DAT_1012f30c = _DAT_1012f30c + -2;
			} else {
				if (entry == 1) {
					BVar5 = DRLG_L2PlaceMiniSet(&DAT_100f782c, 1, 1, -1, -1, 0, 0);
					if (BVar5 != 0) {
						BVar5 = DRLG_L2PlaceMiniSet(&DAT_100f784e, 1, 1, -1, -1, 1, 1);
					}
					if ((BVar5 != 0) && (currlevel == 5)) {
						BVar5 = DRLG_L2PlaceMiniSet(&DAT_100f7870, 1, 1, -1, -1, 0, 6);
					}
					_DAT_1012f310 = _DAT_1012f310 + -1;
				} else {
					BVar5 = DRLG_L2PlaceMiniSet(&DAT_100f782c, 1, 1, -1, -1, 0, 0);
					if (BVar5 != 0) {
						BVar5 = DRLG_L2PlaceMiniSet(&DAT_100f784e, 1, 1, -1, -1, 0, 1);
					}
					if ((BVar5 != 0) && (currlevel == 5)) {
						BVar5 = DRLG_L2PlaceMiniSet(&DAT_100f7870, 1, 1, -1, -1, 1, 6);
					}
					_DAT_1012f30c = _DAT_1012f30c + -2;
				}
			}
		}
	}
	L2LockoutFix();
	L2DoorFix();
	L2DirtFix();
	if (BVar5 != 0) {
		DRLG_PlaceThemeRooms(6, 10, 3, 0, 0);
	}
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x167a), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1666), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1652), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x163e), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x162a), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1616), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1602), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x15ee), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1a64), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1a52), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1a40), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1a2e), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1a1c), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1a0a), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x19f8), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x19e6), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1c84), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1c72), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1c60), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1c4e), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1c3c), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1c2a), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1c18), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1c06), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1bf4), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1be2), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1bd0), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1bbe), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1bac), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1b9a), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1b88), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1b76), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1b64), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1b56), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1b48), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1b3a), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1b2c), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1b1e), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1b10), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1b02), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1af4), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1ae2), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1ad0), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1abe), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1aac), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1a9a), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1a88), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1a76), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x19d4), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x19c6), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x19b8), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x19aa), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x199c), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x198e), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1980), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1972), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1964), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1956), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1948), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x193a), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x192c), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x191e), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1910), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1902), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x18f4), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x18e6), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x18d8), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x18ca), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x18bc), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x18ae), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x18a0), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1892), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1884), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1876), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1868), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x185a), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x184c), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x183e), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1830), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1822), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1814), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1806), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x17f8), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x17ea), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x17dc), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x17ce), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x17c0), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x17b2), 100);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x173e), 99);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x16d6), 10);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x16d2), 10);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x16ce), 10);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x16ca), 10);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x16c6), 10);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x16c2), 10);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x16be), 0x32);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x16ba), 1);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x169a), 1);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x172a), 3);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1720), 3);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1716), 3);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1710), 3);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x170a), 3);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x1700), 0x14);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x16fa), 0x14);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x16f4), 3);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x16ea), 0x14);
	DRLG_L2PlaceRndSet((BYTE *)(iVar3 + -0x16e0), 0x14);
	DRLG_L2Subs();
	DRLG_L2Shadows();
	puVar6 = *(undefined **)(iVar3 + -0x77cc);
	lVar8 = 0x14;
	puVar7 = *(undefined **)(iVar3 + -0x7540);
	do {
		*puVar7 = *puVar6;
		puVar7[0x28] = puVar6[0x28];
		puVar7[0x50] = puVar6[0x50];
		puVar7[0x78] = puVar6[0x78];
		puVar7[0xa0] = puVar6[0xa0];
		puVar7[200] = puVar6[200];
		puVar7[0xf0] = puVar6[0xf0];
		puVar7[0x118] = puVar6[0x118];
		puVar7[0x140] = puVar6[0x140];
		puVar7[0x168] = puVar6[0x168];
		puVar7[400] = puVar6[400];
		puVar7[0x1b8] = puVar6[0x1b8];
		puVar7[0x1e0] = puVar6[0x1e0];
		puVar7[0x208] = puVar6[0x208];
		puVar7[0x230] = puVar6[0x230];
		puVar7[600] = puVar6[600];
		puVar7[0x280] = puVar6[0x280];
		puVar7[0x2a8] = puVar6[0x2a8];
		puVar7[0x2d0] = puVar6[0x2d0];
		puVar7[0x2f8] = puVar6[0x2f8];
		puVar7[800] = puVar6[800];
		puVar7[0x348] = puVar6[0x348];
		puVar7[0x370] = puVar6[0x370];
		puVar7[0x398] = puVar6[0x398];
		puVar7[0x3c0] = puVar6[0x3c0];
		puVar7[1000] = puVar6[1000];
		puVar7[0x410] = puVar6[0x410];
		puVar7[0x438] = puVar6[0x438];
		puVar7[0x460] = puVar6[0x460];
		puVar7[0x488] = puVar6[0x488];
		puVar7[0x4b0] = puVar6[0x4b0];
		puVar7[0x4d8] = puVar6[0x4d8];
		puVar7[0x500] = puVar6[0x500];
		puVar7[0x528] = puVar6[0x528];
		puVar7[0x550] = puVar6[0x550];
		puVar7[0x578] = puVar6[0x578];
		puVar7[0x5a0] = puVar6[0x5a0];
		puVar7[0x5c8] = puVar6[0x5c8];
		puVar7[0x5f0] = puVar6[0x5f0];
		puVar7[0x618] = puVar6[0x618];
		puVar7[1] = puVar6[1];
		puVar7[0x29] = puVar6[0x29];
		puVar7[0x51] = puVar6[0x51];
		puVar7[0x79] = puVar6[0x79];
		puVar7[0xa1] = puVar6[0xa1];
		puVar7[0xc9] = puVar6[0xc9];
		puVar7[0xf1] = puVar6[0xf1];
		puVar7[0x119] = puVar6[0x119];
		puVar7[0x141] = puVar6[0x141];
		puVar7[0x169] = puVar6[0x169];
		puVar7[0x191] = puVar6[0x191];
		puVar7[0x1b9] = puVar6[0x1b9];
		puVar7[0x1e1] = puVar6[0x1e1];
		puVar7[0x209] = puVar6[0x209];
		puVar7[0x231] = puVar6[0x231];
		puVar7[0x259] = puVar6[0x259];
		puVar7[0x281] = puVar6[0x281];
		puVar7[0x2a9] = puVar6[0x2a9];
		puVar7[0x2d1] = puVar6[0x2d1];
		puVar7[0x2f9] = puVar6[0x2f9];
		puVar7[0x321] = puVar6[0x321];
		puVar7[0x349] = puVar6[0x349];
		puVar7[0x371] = puVar6[0x371];
		puVar7[0x399] = puVar6[0x399];
		puVar7[0x3c1] = puVar6[0x3c1];
		puVar7[0x3e9] = puVar6[0x3e9];
		puVar7[0x411] = puVar6[0x411];
		puVar7[0x439] = puVar6[0x439];
		puVar7[0x461] = puVar6[0x461];
		puVar7[0x489] = puVar6[0x489];
		puVar7[0x4b1] = puVar6[0x4b1];
		puVar7[0x4d9] = puVar6[0x4d9];
		puVar7[0x501] = puVar6[0x501];
		puVar7[0x529] = puVar6[0x529];
		puVar7[0x551] = puVar6[0x551];
		puVar7[0x579] = puVar6[0x579];
		puVar7[0x5a1] = puVar6[0x5a1];
		puVar7[0x5c9] = puVar6[0x5c9];
		puVar7[0x5f1] = puVar6[0x5f1];
		puVar1 = puVar6 + 0x619;
		puVar6 = puVar6 + 2;
		puVar7[0x619] = *puVar1;
		puVar7 = puVar7 + 2;
		lVar8 = lVar8 + -1;
	} while (lVar8 != 0);
	DRLG_Init_Globals();
	DRLG_CheckQuests(_DAT_1012ab00, _DAT_1012aafc);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_InitL2Vals(void)

{
	short sVar1;
	undefined uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	longlong lVar8;

	iVar7 = 0;
	iVar5 = 0;
	do {
		iVar3 = 0;
		lVar8 = 0x38;
		iVar4 = 0;
		do {
			sVar1 = *(short *)(iVar5 + _DAT_1012f1d4 + iVar3);
			if (sVar1 == 0x21d) {
				uVar2 = 5;
			LAB_10030758:
				*(undefined *)(iVar7 + _DAT_1012f1a0 + iVar4) = uVar2;
			} else {
				if (sVar1 == 0xb2) {
					uVar2 = 5;
					goto LAB_10030758;
				}
				if (sVar1 == 0x227) {
					uVar2 = 5;
					goto LAB_10030758;
				}
				if (sVar1 == 0x21e) {
					uVar2 = 6;
					goto LAB_10030758;
				}
				if (sVar1 == 0x229) {
					uVar2 = 6;
					goto LAB_10030758;
				}
				if (sVar1 == 0xd) {
					uVar2 = 5;
					goto LAB_10030758;
				}
				if (sVar1 == 0x11) {
					uVar2 = 6;
					goto LAB_10030758;
				}
			}
			sVar1 = *(short *)(iVar5 + _DAT_1012f1d4 + iVar3 + 0xe0);
			if (sVar1 == 0x21d) {
				uVar2 = 5;
			LAB_100307e8:
				*(undefined *)(iVar7 + _DAT_1012f1a0 + iVar4 + 0x70) = uVar2;
			} else {
				if (sVar1 == 0xb2) {
					uVar2 = 5;
					goto LAB_100307e8;
				}
				if (sVar1 == 0x227) {
					uVar2 = 5;
					goto LAB_100307e8;
				}
				if (sVar1 == 0x21e) {
					uVar2 = 6;
					goto LAB_100307e8;
				}
				if (sVar1 == 0x229) {
					uVar2 = 6;
					goto LAB_100307e8;
				}
				if (sVar1 == 0xd) {
					uVar2 = 5;
					goto LAB_100307e8;
				}
				if (sVar1 == 0x11) {
					uVar2 = 6;
					goto LAB_100307e8;
				}
			}
			iVar3 = iVar3 + 0x1c0;
			iVar4 = iVar4 + 0xe0;
			lVar8 = lVar8 + -1;
		} while (lVar8 != 0);
		iVar7 = iVar7 + 1;
		iVar5 = iVar5 + 2;
		if (0x6f < iVar7) {
			iVar7 = 0;
			iVar5 = 0;
			do {
				lVar8 = 0x38;
				iVar3 = 0;
				iVar4 = 0;
				do {
					sVar1 = *(short *)(iVar5 + _DAT_1012f1d4 + iVar3);
					if (sVar1 == 0x84) {
						*(undefined *)(iVar7 + _DAT_1012f1a0 + iVar4 + 1) = 2;
						*(undefined *)(iVar7 + _DAT_1012f1a0 + iVar4 + 2) = 1;
					} else {
						if ((sVar1 == 0x87) || (sVar1 == 0x8b)) {
							*(undefined *)(iVar7 + _DAT_1012f1a0 + iVar4 + 0x70) = 3;
							*(undefined *)(iVar7 + _DAT_1012f1a0 + iVar4 + 0xe0) = 4;
						}
					}
					iVar6 = iVar4 + 0x70;
					sVar1 = *(short *)(iVar5 + _DAT_1012f1d4 + iVar3 + 0xe0);
					if (sVar1 == 0x84) {
						*(undefined *)(iVar7 + _DAT_1012f1a0 + iVar6 + 1) = 2;
						*(undefined *)(iVar7 + _DAT_1012f1a0 + iVar6 + 2) = 1;
					} else {
						if ((sVar1 == 0x87) || (sVar1 == 0x8b)) {
							*(undefined *)(iVar7 + _DAT_1012f1a0 + iVar6 + 0x70) = 3;
							*(undefined *)(iVar7 + _DAT_1012f1a0 + iVar6 + 0xe0) = 4;
						}
					}
					iVar3 = iVar3 + 0x1c0;
					iVar4 = iVar4 + 0xe0;
					lVar8 = lVar8 + -1;
				} while (lVar8 != 0);
				iVar7 = iVar7 + 1;
				iVar5 = iVar5 + 2;
			} while (iVar7 < 0x70);
			return;
		}
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void LoadL2Dungeon(char *sFileName, int vx, int vy)

{
	byte bVar1;
	byte bVar2;
	short sVar3;
	int *piVar4;
	int iVar5;
	char cVar6;
	undefined uVar10;
	char *pcVar7;
	char *pcVar8;
	int iVar9;
	undefined uVar13;
	byte *pbVar11;
	int iVar12;
	undefined in_r6;
	undefined in_r7;
	byte *pbVar14;
	undefined in_r8;
	char *pcVar15;
	undefined in_r9;
	byte *pbVar16;
	undefined in_r10;
	int iVar17;
	int iVar18;
	int iVar19;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	longlong lVar20;
	ulonglong uVar21;
	undefined in_stack_ffffff9b;
	int *local_28[5];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	uVar13 = (undefined)vy;
	iVar5 = 0x100f8fd0;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	InitDungeon();
	DRLG_InitTrans();
	uVar10 = 0;
	local_28[0] = (int *)LoadFileInMem(sFileName, (DWORD *)0x0);
	cVar6 = LockMemFile(ZEXT48(local_28[0]), uVar10, uVar13, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff9b);
	pcVar15 = *(char **)(iVar5 + -0x77cc);
	iVar19 = 0;
	pbVar16 = *(byte **)(iVar5 + -0x7514);
	pcVar8 = pcVar15;
	pbVar14 = pbVar16;
	do {
		lVar20 = 5;
		iVar17 = 0;
		pcVar7 = pcVar8;
		pbVar11 = pbVar14;
		do {
			*pcVar7 = '\f';
			*pbVar11 = 0;
			pcVar7[0x28] = '\f';
			pbVar11[0x28] = 0;
			pcVar7[0x50] = '\f';
			pbVar11[0x50] = 0;
			pcVar7[0x78] = '\f';
			pbVar11[0x78] = 0;
			pcVar7[0xa0] = '\f';
			pbVar11[0xa0] = 0;
			pcVar7[200] = '\f';
			pbVar11[200] = 0;
			pcVar7[0xf0] = '\f';
			pbVar11[0xf0] = 0;
			pcVar7[0x118] = '\f';
			pcVar7 = pcVar7 + 0x140;
			pbVar11[0x118] = 0;
			pbVar11 = pbVar11 + 0x140;
			lVar20 = lVar20 + -1;
		} while (lVar20 != 0);
		iVar19 = iVar19 + 1;
		pbVar14 = pbVar14 + 1;
		pcVar8 = pcVar8 + 1;
	} while (iVar19 < 0x28);
	bVar1 = *(byte *)(int)cVar6;
	bVar2 = *(byte *)((int)cVar6 + 2);
	lVar20 = (longlong)cVar6 + 4;
	pcVar8 = pcVar15;
	while (iVar17 < (int)(uint)bVar2) {
		uVar21 = (ulonglong)bVar1;
		pcVar7 = pcVar8;
		pbVar14 = pbVar16;
		if (bVar1 != 0) {
			do {
				if (*(char *)lVar20 == '\0') {
					*pcVar7 = '\x03';
				} else {
					*pcVar7 = *(char *)lVar20;
					*pbVar14 = *pbVar14 | 0x80;
				}
				lVar20 = lVar20 + 2;
				pcVar7 = pcVar7 + 0x28;
				pbVar14 = pbVar14 + 0x28;
				uVar21 = uVar21 - 1;
			} while (uVar21 != 0);
		}
		pcVar8 = pcVar8 + 1;
		pbVar16 = pbVar16 + 1;
		iVar17 = iVar17 + 1;
	}
	iVar19 = 0;
	do {
		lVar20 = 4;
		pcVar8 = pcVar15;
		do {
			if (*pcVar8 == '\0') {
				*pcVar8 = '\f';
			}
			if (pcVar8[0x28] == '\0') {
				pcVar8[0x28] = '\f';
			}
			if (pcVar8[0x50] == '\0') {
				pcVar8[0x50] = '\f';
			}
			if (pcVar8[0x78] == '\0') {
				pcVar8[0x78] = '\f';
			}
			if (pcVar8[0xa0] == '\0') {
				pcVar8[0xa0] = '\f';
			}
			if (pcVar8[200] == '\0') {
				pcVar8[200] = '\f';
			}
			if (pcVar8[0xf0] == '\0') {
				pcVar8[0xf0] = '\f';
			}
			if (pcVar8[0x118] == '\0') {
				pcVar8[0x118] = '\f';
			}
			if (pcVar8[0x140] == '\0') {
				pcVar8[0x140] = '\f';
			}
			if (pcVar8[0x168] == '\0') {
				pcVar8[0x168] = '\f';
			}
			pcVar8 = pcVar8 + 400;
			lVar20 = lVar20 + -1;
		} while (lVar20 != 0);
		iVar19 = iVar19 + 1;
		pcVar15 = pcVar15 + 1;
	} while (iVar19 < 0x28);
	DRLG_L2Pass3();
	DRLG_Init_Globals();
	iVar17 = 0;
	iVar19 = 0;
	do {
		lVar20 = 0x38;
		iVar9 = 0;
		iVar12 = 0;
		do {
			uVar10 = 0;
			sVar3 = *(short *)(iVar19 + _DAT_1012f1d4 + iVar9);
			if (sVar3 == 0x21d) {
				uVar10 = 5;
			}
			if (sVar3 == 0xb2) {
				uVar10 = 5;
			}
			if (sVar3 == 0x227) {
				uVar10 = 5;
			}
			if (sVar3 == 0x21e) {
				uVar10 = 6;
			}
			if (sVar3 == 0x229) {
				uVar10 = 6;
			}
			if (sVar3 == 0xd) {
				uVar10 = 5;
			}
			if (sVar3 == 0x11) {
				uVar10 = 6;
			}
			*(undefined *)(iVar17 + _DAT_1012f1a0 + iVar12) = uVar10;
			uVar10 = 0;
			sVar3 = *(short *)(iVar19 + _DAT_1012f1d4 + iVar9 + 0xe0);
			if (sVar3 == 0x21d) {
				uVar10 = 5;
			}
			if (sVar3 == 0xb2) {
				uVar10 = 5;
			}
			if (sVar3 == 0x227) {
				uVar10 = 5;
			}
			if (sVar3 == 0x21e) {
				uVar10 = 6;
			}
			if (sVar3 == 0x229) {
				uVar10 = 6;
			}
			if (sVar3 == 0xd) {
				uVar10 = 5;
			}
			if (sVar3 == 0x11) {
				uVar10 = 6;
			}
			iVar9 = iVar9 + 0x1c0;
			*(undefined *)(iVar17 + _DAT_1012f1a0 + iVar12 + 0x70) = uVar10;
			iVar12 = iVar12 + 0xe0;
			lVar20 = lVar20 + -1;
		} while (lVar20 != 0);
		iVar17 = iVar17 + 1;
		iVar19 = iVar19 + 2;
	} while (iVar17 < 0x70);
	iVar17 = 0;
	iVar19 = 0;
	do {
		lVar20 = 0x38;
		iVar9 = 0;
		iVar12 = 0;
		do {
			sVar3 = *(short *)(iVar19 + _DAT_1012f1d4 + iVar9);
			if (sVar3 == 0x84) {
				*(undefined *)(iVar17 + _DAT_1012f1a0 + iVar12 + 1) = 2;
				*(undefined *)(iVar17 + _DAT_1012f1a0 + iVar12 + 2) = 1;
			} else {
				if ((sVar3 == 0x87) || (sVar3 == 0x8b)) {
					*(undefined *)(iVar17 + _DAT_1012f1a0 + iVar12 + 0x70) = 3;
					*(undefined *)(iVar17 + _DAT_1012f1a0 + iVar12 + 0xe0) = 4;
				}
			}
			iVar18 = iVar12 + 0x70;
			sVar3 = *(short *)(iVar19 + _DAT_1012f1d4 + iVar9 + 0xe0);
			if (sVar3 == 0x84) {
				*(undefined *)(iVar17 + _DAT_1012f1a0 + iVar18 + 1) = 2;
				*(undefined *)(iVar17 + _DAT_1012f1a0 + iVar18 + 2) = 1;
			} else {
				if ((sVar3 == 0x87) || (sVar3 == 0x8b)) {
					*(undefined *)(iVar17 + _DAT_1012f1a0 + iVar18 + 0x70) = 3;
					*(undefined *)(iVar17 + _DAT_1012f1a0 + iVar18 + 0xe0) = 4;
				}
			}
			iVar9 = iVar9 + 0x1c0;
			iVar12 = iVar12 + 0xe0;
			lVar20 = lVar20 + -1;
		} while (lVar20 != 0);
		iVar17 = iVar17 + 1;
		iVar19 = iVar19 + 2;
	} while (iVar17 < 0x70);
	piVar4 = *(int **)(iVar5 + -0x77b4);
	**(int **)(iVar5 + -0x77b0) = vx;
	*piVar4 = vy;
	SetMapMonsters((BYTE *)local_28[0], 0, 0);
	SetMapObjects((BYTE *)local_28[0], 0, 0);
	UnlockMemFile((char)local_28[0]);
	MemFreeDbg(local_28);
	return;
}

void LoadPreL2Dungeon(char *sFileName, int vx, int vy)

{
	byte bVar1;
	byte bVar2;
	int iVar3;
	char cVar4;
	undefined uVar6;
	char *pcVar5;
	undefined uVar8;
	char *pcVar7;
	undefined in_r6;
	byte *pbVar9;
	undefined in_r7;
	char *pcVar10;
	undefined in_r8;
	byte *pbVar11;
	undefined in_r9;
	byte *pbVar12;
	undefined in_r10;
	int iVar13;
	int iVar14;
	longlong lVar15;
	ulonglong uVar16;
	int iStack0000001c;
	int iStack00000020;
	undefined in_stack_ffffff9b;
	int *local_18[6];

	uVar8 = (undefined)vy;
	iVar3 = 0x100f8fd0;
	iStack0000001c = vx;
	iStack00000020 = vy;
	InitDungeon();
	DRLG_InitTrans();
	uVar6 = 0;
	local_18[0] = (int *)LoadFileInMem(sFileName, (DWORD *)0x0);
	cVar4 = LockMemFile(ZEXT48(local_18[0]), uVar6, uVar8, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff9b);
	pcVar5 = *(char **)(iVar3 + -0x77cc);
	iVar14 = 0;
	pbVar12 = *(byte **)(iVar3 + -0x7514);
	pcVar10 = pcVar5;
	pbVar11 = pbVar12;
	do {
		lVar15 = 5;
		iVar13 = 0;
		pcVar7 = pcVar10;
		pbVar9 = pbVar11;
		do {
			*pcVar7 = '\f';
			*pbVar9 = 0;
			pcVar7[0x28] = '\f';
			pbVar9[0x28] = 0;
			pcVar7[0x50] = '\f';
			pbVar9[0x50] = 0;
			pcVar7[0x78] = '\f';
			pbVar9[0x78] = 0;
			pcVar7[0xa0] = '\f';
			pbVar9[0xa0] = 0;
			pcVar7[200] = '\f';
			pbVar9[200] = 0;
			pcVar7[0xf0] = '\f';
			pbVar9[0xf0] = 0;
			pcVar7[0x118] = '\f';
			pcVar7 = pcVar7 + 0x140;
			pbVar9[0x118] = 0;
			pbVar9 = pbVar9 + 0x140;
			lVar15 = lVar15 + -1;
		} while (lVar15 != 0);
		iVar14 = iVar14 + 1;
		pbVar11 = pbVar11 + 1;
		pcVar10 = pcVar10 + 1;
	} while (iVar14 < 0x28);
	bVar1 = *(byte *)(int)cVar4;
	bVar2 = *(byte *)((int)cVar4 + 2);
	lVar15 = (longlong)cVar4 + 4;
	pcVar10 = pcVar5;
	while (iVar13 < (int)(uint)bVar2) {
		uVar16 = (ulonglong)bVar1;
		pcVar7 = pcVar10;
		pbVar11 = pbVar12;
		if (bVar1 != 0) {
			do {
				if (*(char *)lVar15 == '\0') {
					*pcVar7 = '\x03';
				} else {
					*pcVar7 = *(char *)lVar15;
					*pbVar11 = *pbVar11 | 0x80;
				}
				lVar15 = lVar15 + 2;
				pcVar7 = pcVar7 + 0x28;
				pbVar11 = pbVar11 + 0x28;
				uVar16 = uVar16 - 1;
			} while (uVar16 != 0);
		}
		pcVar10 = pcVar10 + 1;
		pbVar12 = pbVar12 + 1;
		iVar13 = iVar13 + 1;
	}
	iVar14 = 0;
	pcVar10 = pcVar5;
	do {
		lVar15 = 4;
		pcVar7 = pcVar10;
		do {
			if (*pcVar7 == '\0') {
				*pcVar7 = '\f';
			}
			if (pcVar7[0x28] == '\0') {
				pcVar7[0x28] = '\f';
			}
			if (pcVar7[0x50] == '\0') {
				pcVar7[0x50] = '\f';
			}
			if (pcVar7[0x78] == '\0') {
				pcVar7[0x78] = '\f';
			}
			if (pcVar7[0xa0] == '\0') {
				pcVar7[0xa0] = '\f';
			}
			if (pcVar7[200] == '\0') {
				pcVar7[200] = '\f';
			}
			if (pcVar7[0xf0] == '\0') {
				pcVar7[0xf0] = '\f';
			}
			if (pcVar7[0x118] == '\0') {
				pcVar7[0x118] = '\f';
			}
			if (pcVar7[0x140] == '\0') {
				pcVar7[0x140] = '\f';
			}
			if (pcVar7[0x168] == '\0') {
				pcVar7[0x168] = '\f';
			}
			pcVar7 = pcVar7 + 400;
			lVar15 = lVar15 + -1;
		} while (lVar15 != 0);
		iVar14 = iVar14 + 1;
		pcVar10 = pcVar10 + 1;
	} while (iVar14 < 0x28);
	pcVar10 = *(char **)(iVar3 + -0x7540);
	lVar15 = 0x14;
	do {
		*pcVar10 = *pcVar5;
		pcVar10[0x28] = pcVar5[0x28];
		pcVar10[0x50] = pcVar5[0x50];
		pcVar10[0x78] = pcVar5[0x78];
		pcVar10[0xa0] = pcVar5[0xa0];
		pcVar10[200] = pcVar5[200];
		pcVar10[0xf0] = pcVar5[0xf0];
		pcVar10[0x118] = pcVar5[0x118];
		pcVar10[0x140] = pcVar5[0x140];
		pcVar10[0x168] = pcVar5[0x168];
		pcVar10[400] = pcVar5[400];
		pcVar10[0x1b8] = pcVar5[0x1b8];
		pcVar10[0x1e0] = pcVar5[0x1e0];
		pcVar10[0x208] = pcVar5[0x208];
		pcVar10[0x230] = pcVar5[0x230];
		pcVar10[600] = pcVar5[600];
		pcVar10[0x280] = pcVar5[0x280];
		pcVar10[0x2a8] = pcVar5[0x2a8];
		pcVar10[0x2d0] = pcVar5[0x2d0];
		pcVar10[0x2f8] = pcVar5[0x2f8];
		pcVar10[800] = pcVar5[800];
		pcVar10[0x348] = pcVar5[0x348];
		pcVar10[0x370] = pcVar5[0x370];
		pcVar10[0x398] = pcVar5[0x398];
		pcVar10[0x3c0] = pcVar5[0x3c0];
		pcVar10[1000] = pcVar5[1000];
		pcVar10[0x410] = pcVar5[0x410];
		pcVar10[0x438] = pcVar5[0x438];
		pcVar10[0x460] = pcVar5[0x460];
		pcVar10[0x488] = pcVar5[0x488];
		pcVar10[0x4b0] = pcVar5[0x4b0];
		pcVar10[0x4d8] = pcVar5[0x4d8];
		pcVar10[0x500] = pcVar5[0x500];
		pcVar10[0x528] = pcVar5[0x528];
		pcVar10[0x550] = pcVar5[0x550];
		pcVar10[0x578] = pcVar5[0x578];
		pcVar10[0x5a0] = pcVar5[0x5a0];
		pcVar10[0x5c8] = pcVar5[0x5c8];
		pcVar10[0x5f0] = pcVar5[0x5f0];
		pcVar10[0x618] = pcVar5[0x618];
		pcVar10[1] = pcVar5[1];
		pcVar10[0x29] = pcVar5[0x29];
		pcVar10[0x51] = pcVar5[0x51];
		pcVar10[0x79] = pcVar5[0x79];
		pcVar10[0xa1] = pcVar5[0xa1];
		pcVar10[0xc9] = pcVar5[0xc9];
		pcVar10[0xf1] = pcVar5[0xf1];
		pcVar10[0x119] = pcVar5[0x119];
		pcVar10[0x141] = pcVar5[0x141];
		pcVar10[0x169] = pcVar5[0x169];
		pcVar10[0x191] = pcVar5[0x191];
		pcVar10[0x1b9] = pcVar5[0x1b9];
		pcVar10[0x1e1] = pcVar5[0x1e1];
		pcVar10[0x209] = pcVar5[0x209];
		pcVar10[0x231] = pcVar5[0x231];
		pcVar10[0x259] = pcVar5[0x259];
		pcVar10[0x281] = pcVar5[0x281];
		pcVar10[0x2a9] = pcVar5[0x2a9];
		pcVar10[0x2d1] = pcVar5[0x2d1];
		pcVar10[0x2f9] = pcVar5[0x2f9];
		pcVar10[0x321] = pcVar5[0x321];
		pcVar10[0x349] = pcVar5[0x349];
		pcVar10[0x371] = pcVar5[0x371];
		pcVar10[0x399] = pcVar5[0x399];
		pcVar10[0x3c1] = pcVar5[0x3c1];
		pcVar10[0x3e9] = pcVar5[0x3e9];
		pcVar10[0x411] = pcVar5[0x411];
		pcVar10[0x439] = pcVar5[0x439];
		pcVar10[0x461] = pcVar5[0x461];
		pcVar10[0x489] = pcVar5[0x489];
		pcVar10[0x4b1] = pcVar5[0x4b1];
		pcVar10[0x4d9] = pcVar5[0x4d9];
		pcVar10[0x501] = pcVar5[0x501];
		pcVar10[0x529] = pcVar5[0x529];
		pcVar10[0x551] = pcVar5[0x551];
		pcVar10[0x579] = pcVar5[0x579];
		pcVar10[0x5a1] = pcVar5[0x5a1];
		pcVar10[0x5c9] = pcVar5[0x5c9];
		pcVar10[0x5f1] = pcVar5[0x5f1];
		pcVar7 = pcVar5 + 0x619;
		pcVar5 = pcVar5 + 2;
		pcVar10[0x619] = *pcVar7;
		pcVar10 = pcVar10 + 2;
		lVar15 = lVar15 + -1;
	} while (lVar15 != 0);
	UnlockMemFile((char)local_18[0]);
	MemFreeDbg(local_18);
	return;
}

void CreateL2Dungeon(DWORD rseed, int entry)

{
	undefined4 *puVar1;
	undefined4 *puVar2;
	int iVar3;

	iVar3 = 0x100f8fd0;
	if (gbMaxPlayers == '\x01') {
		iVar3 = 0x100f8fd0;
		if ((currlevel == 7) && (iVar3 = 0x100f8fd0, quests[8]._qactive == '\0')) {
			currlevel = 6;
			iVar3 = 0x100f8fd0;
			CreateL2Dungeon(DRam101291bc, 4);
			currlevel = 7;
		}
		if (currlevel == 8) {
			if (quests[8]._qactive == '\0') {
				currlevel = 6;
				CreateL2Dungeon(DRam101291bc, 4);
				currlevel = 8;
			} else {
				currlevel = 7;
				CreateL2Dungeon(DRam101291c0, 4);
				currlevel = 8;
			}
		}
	}
	SetRndSeed(rseed);
	puVar1 = *(undefined4 **)(iVar3 + -0x7534);
	**(undefined4 **)(iVar3 + -30000) = 0x10;
	puVar2 = *(undefined4 **)(iVar3 + -0x7538);
	*puVar1 = 0x10;
	puVar1 = *(undefined4 **)(iVar3 + -0x753c);
	*puVar2 = 0x60;
	*puVar1 = 0x60;
	DRLG_InitTrans();
	DRLG_InitSetPC();
	DRLG_LoadL2SP();
	DRLG_L2(entry);
	DRLG_L2Pass3();
	DRLG_FreeL2SP();
	DRLG_InitL2Vals();
	DRLG_SetPC();
	return;
}
