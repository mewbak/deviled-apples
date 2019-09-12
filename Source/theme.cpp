
BOOL TFit_Shrine(int i)

{
	int iVar1;
	int iVar2;
	int iVar3;
	char *pcVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	iVar9 = 0;
	iVar8 = 0;
	iVar7 = 0;
	iVar1 = *(int *)(i * 8 + 0x101ab828);
	iVar2 = 0;
	do {
		do {
			if (iVar7 != 0) {
				_DAT_101ab810 = iVar7;
				_DAT_101ab814 = iVar8;
				_DAT_101ab818 = iVar9;
				return 1;
			}
			iVar5 = iVar9 * 0x70;
			pcVar4 = (char *)(_DAT_1012f1c8 + iVar5 + iVar8);
			if ((int)*pcVar4 == iVar1) {
				iVar3 = _DAT_1012f1d4 + iVar9 * 0xe0 + iVar2;
				if ((((((&DAT_1012f330)[(int)*(short *)(iVar3 + -2)] != '\0') && ((&DAT_10130b33)[(int)*(short *)(iVar3 + -0xe0)] == '\0')) && ((&DAT_10130b33)[(int)*(short *)(iVar3 + 0xe0)] == '\0')) && (((int)pcVar4[-0x70] == iVar1 && ((int)pcVar4[0x70] == iVar1)))) && ((iVar6 = _DAT_1012f1ac + iVar5 + iVar8, *(char *)(iVar6 + -0x71) == '\0' && (*(char *)(iVar6 + 0x6f) == '\0')))) {
					iVar7 = 1;
				}
				if ((((iVar7 == 0) && ((&DAT_1012f330)[(int)*(short *)(iVar3 + -0xe0)] != '\0')) && (((&DAT_10130b33)[(int)*(short *)(iVar3 + -2)] == '\0' && ((((&DAT_10130b33)[(int)*(short *)(iVar3 + 2)] == '\0' && ((int)pcVar4[-1] == iVar1)) && ((int)pcVar4[1] == iVar1)))))) && ((iVar5 = _DAT_1012f1ac + iVar5 + iVar8, *(char *)(iVar5 + -0x71) == '\0' && (*(char *)(iVar5 + -0x6f) == '\0')))) {
					iVar7 = 2;
				}
			}
		} while ((iVar7 != 0) || (iVar9 = iVar9 + 1, iVar9 != 0x70));
		iVar8 = iVar8 + 1;
		iVar2 = iVar2 + 2;
		iVar9 = 0;
	} while (iVar8 != 0x70);
	return 0;
}

BOOL TFit_Obj5(int t)

{
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int *piVar6;
	int *piVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar3 = 0x100f8fd0;
	iVar10 = 0;
	iVar9 = 0;
	iVar4 = random('\0', 5);
	iVar1 = *(int *)(*(int *)(iVar3 + -0x6fcc) + t * 8 + 4);
	iVar5 = iVar4 + 1;
	while (true) {
		do {
			do {
				while (true) {
					if (iVar5 < 1) {
						piVar6 = *(int **)(iVar3 + -0x6ec8);
						**(int **)(iVar3 + -0x6ec4) = iVar10;
						*piVar6 = iVar9;
						return 1;
					}
					bVar2 = false;
					if (((int)*(char *)(**(int **)(iVar3 + -0x7588) + iVar10 * 0x70 + iVar9) == iVar1) && ((&DAT_10130b33)[(int)*(short *)(**(int **)(iVar3 + -0x757c) + iVar10 * 0xe0 + iVar9 * 2)] == '\0')) {
						bVar2 = true;
						iVar8 = 0;
						piVar6 = (int *)&DAT_1011fa08;
						piVar7 = (int *)&DAT_1011fa6c;
						while ((bVar2 && (iVar8 < 0x19))) {
							if ((&DAT_10130b33)
							        [(int)*(short *)(**(int **)(iVar3 + -0x757c) + (iVar10 + *piVar6) * 0xe0 + (iVar9 + *piVar7) * 2)]
							    != '\0') {
								bVar2 = false;
							}
							if (iVar1 != (int)*(char *)(**(int **)(iVar3 + -0x7588) + iVar9 + (iVar10 + *piVar6) * 0x70 + *piVar7)) {
								bVar2 = false;
							}
							piVar6 = piVar6 + 1;
							piVar7 = piVar7 + 1;
							iVar8 = iVar8 + 1;
						}
					}
					if (!bVar2)
						break;
					iVar5 = iVar5 + -1;
				}
				iVar10 = iVar10 + 1;
			} while (iVar10 != 0x70);
			iVar9 = iVar9 + 1;
			iVar10 = 0;
		} while (iVar9 != 0x70);
		if (iVar5 == iVar4 + 1)
			break;
		iVar9 = 0;
	}
	return 0;
}

BOOL TFit_SkelRoom(int t)

{
	undefined8 uVar1;
	BOOL BVar2;
	int iVar3;
	byte *pbVar4;

	uVar1 = 0x100f8fd0;
	if ((byte)(leveltype - 1U) < 2) {
		iVar3 = 0;
		pbVar4 = (byte *)((int)&Monsters[0].trans_file + 3);
		while (iVar3 < nummtypes) {
			BVar2 = IsSkel((uint)*pbVar4);
			if (BVar2 != 0) {
				**(int **)((int)uVar1 + -0x6ecc) = iVar3;
				BVar2 = TFit_Obj5(t);
				return BVar2;
			}
			pbVar4 = pbVar4 + 0x208;
			iVar3 = iVar3 + 1;
		}
	}
	return 0;
}

BOOL TFit_GoatShrine(int t)

{
	undefined8 uVar1;
	BOOL BVar2;
	int iVar3;
	byte *pbVar4;

	uVar1 = 0x100f8fd0;
	pbVar4 = (byte *)((int)&Monsters[0].trans_file + 3);
	iVar3 = 0;
	while (true) {
		if (nummtypes <= iVar3) {
			return 0;
		}
		BVar2 = IsGoat((uint)*pbVar4);
		if (BVar2 != 0)
			break;
		pbVar4 = pbVar4 + 0x208;
		iVar3 = iVar3 + 1;
	}
	**(int **)((int)uVar1 + -0x6ecc) = iVar3;
	BVar2 = TFit_Obj5(t);
	return BVar2;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL CheckThemeObj3(int xp, int yp, int t, int f)

{
	uint uVar1;
	int iVar2;
	int iVar3;
	uint *puVar4;
	uint *puVar5;

	puVar5 = (uint *)&DAT_1011fad0;
	iVar3 = 0;
	puVar4 = (uint *)&DAT_1011faf4;
	while (true) {
		if ((longlong)((longlong)xp + (ulonglong)*puVar5) < 0) {
			return 0;
		}
		uVar1 = *puVar4;
		if ((longlong)((longlong)yp + (ulonglong)uVar1) < 0) {
			return 0;
		}
		iVar2 = (int)((longlong)xp + (ulonglong)*puVar5);
		if ((&DAT_10130b33)
		        [(int)*(short *)(_DAT_1012f1d4 + iVar2 * 0xe0 + (int)((longlong)yp + (ulonglong)uVar1) * 2)]
		    != '\0') {
			return 0;
		}
		iVar2 = iVar2 * 0x70;
		if (*(int *)(t * 8 + 0x101ab828) != (int)*(char *)(yp + _DAT_1012f1c8 + iVar2 + uVar1))
			break;
		if (*(char *)(yp + _DAT_1012f1ac + iVar2 + uVar1) != '\0') {
			return 0;
		}
		if ((f != -1) && (iVar2 = random('\0', f), iVar2 == 0)) {
			return 0;
		}
		iVar3 = iVar3 + 1;
		puVar4 = puVar4 + 1;
		puVar5 = puVar5 + 1;
		if (8 < iVar3) {
			return 1;
		}
	}
	return 0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL TFit_Obj3(int t)

{
	int *piVar1;
	undefined8 uVar2;
	BOOL BVar3;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	int yp;
	undefined8 unaff_r29;
	int xp;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	char cStack41;
	undefined4 local_28;
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	uVar2 = 0x100f8fd0;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	yp = 1;
	local_28 = _DAT_100f44b0;
	do {
		xp = 1;
		do {
			BVar3 = CheckThemeObj3(xp, yp, t, (int)(&cStack41)[(uint)leveltype]);
			if (BVar3 != 0) {
				piVar1 = *(int **)((int)uVar2 + -0x6ec8);
				**(int **)((int)uVar2 + -0x6ec4) = xp;
				*piVar1 = yp;
				return 1;
			}
			xp = xp + 1;
		} while (xp < 0x6f);
		yp = yp + 1;
	} while (yp < 0x6f);
	return 0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL CheckThemeReqs(int t)

{
	BOOL BVar1;

	BVar1 = 1;
	switch (t) {
	case 1:
	case 5:
		if ((byte)(leveltype - 3U) < 2) {
			BVar1 = 0;
		}
		break;
	case 3:
		if ((byte)(leveltype - 3U) < 2) {
			BVar1 = 0;
		}
		break;
	case 7:
		if (_DAT_101ab808 == 0) {
			BVar1 = 0;
		}
		break;
	case 9:
		if (_DAT_101ab7fc == 0) {
			BVar1 = 0;
		}
		break;
	case 10:
	case 0x10:
		if (leveltype == '\x01') {
			BVar1 = 0;
		}
		break;
	case 0xc:
		if ((leveltype != '\x04') || (_DAT_101ab804 == 0)) {
			BVar1 = 0;
		}
		break;
	case 0xd:
		if (_DAT_101ab800 == 0) {
			BVar1 = 0;
		}
		break;
	case 0xe:
		if (_DAT_101ab7f8 == 0) {
			BVar1 = 0;
		}
	}
	return BVar1;
}

BOOL SpecialThemeFit(int i, int t)

{
	int iVar1;
	BOOL BVar2;

	iVar1 = 0x100f8fd0;
	BVar2 = CheckThemeReqs(t);
	if ((uint)t < 0x11) {
		// WARNING: Could not recover jumptable at 0x100ae384. Too many branches
		// WARNING: Treating indirect jump as call
		BVar2 = (**(code **)(*(int *)(iVar1 + -0x5698) + t * 4))();
		return BVar2;
	}
	return BVar2;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL CheckThemeRoom(int tv)

{
	ulonglong uVar1;
	char *pcVar2;
	int *piVar3;
	byte *pbVar4;
	char *pcVar5;
	short *psVar6;
	byte *pbVar7;
	short *psVar8;
	int iVar9;
	int iVar10;
	longlong lVar11;

	uVar1 = (ulonglong)_numtrigs;
	piVar3 = (int *)&DAT_101aca9c;
	if (0 < (int)_numtrigs) {
		do {
			if (tv == (int)_DAT_1012f1c8[*piVar3 * 0x70 + piVar3[1]]) {
				return 0;
			}
			piVar3 = piVar3 + 4;
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
	}
	iVar10 = 0;
	iVar9 = 0;
	pbVar7 = _DAT_1012f1bc;
	pcVar5 = _DAT_1012f1c8;
	do {
		lVar11 = 0x10;
		pbVar4 = pbVar7;
		pcVar2 = pcVar5;
		do {
			if (tv == (int)*pcVar2) {
				if ((*pbVar4 & 8) != 0) {
					return 0;
				}
				iVar10 = iVar10 + 1;
			}
			if (tv == (int)pcVar2[0x70]) {
				if ((pbVar4[0x70] & 8) != 0) {
					return 0;
				}
				iVar10 = iVar10 + 1;
			}
			if (tv == (int)pcVar2[0xe0]) {
				if ((pbVar4[0xe0] & 8) != 0) {
					return 0;
				}
				iVar10 = iVar10 + 1;
			}
			if (tv == (int)pcVar2[0x150]) {
				if ((pbVar4[0x150] & 8) != 0) {
					return 0;
				}
				iVar10 = iVar10 + 1;
			}
			if (tv == (int)pcVar2[0x1c0]) {
				if ((pbVar4[0x1c0] & 8) != 0) {
					return 0;
				}
				iVar10 = iVar10 + 1;
			}
			if (tv == (int)pcVar2[0x230]) {
				if ((pbVar4[0x230] & 8) != 0) {
					return 0;
				}
				iVar10 = iVar10 + 1;
			}
			if (tv == (int)pcVar2[0x2a0]) {
				if ((pbVar4[0x2a0] & 8) != 0) {
					return 0;
				}
				iVar10 = iVar10 + 1;
			}
			pcVar2 = pcVar2 + 0x310;
			pbVar4 = pbVar4 + 0x310;
			lVar11 = lVar11 + -1;
		} while (lVar11 != 0);
		iVar9 = iVar9 + 1;
		pbVar7 = pbVar7 + 1;
		pcVar5 = pcVar5 + 1;
	} while (iVar9 < 0x70);
	if ((leveltype == '\x01') && ((iVar10 < 9 || (100 < iVar10)))) {
		return 0;
	}
	iVar9 = 0;
	pcVar5 = _DAT_1012f1c8;
	psVar8 = _DAT_1012f1d4;
	do {
		lVar11 = 0x38;
		pcVar2 = pcVar5;
		psVar6 = psVar8;
		do {
			if ((tv == (int)*pcVar2) && ((&DAT_10130b33)[(int)*psVar6] == '\0')) {
				if ((tv != (int)pcVar2[-0x70]) && ((&DAT_10130b33)[(int)psVar6[-0x70]] == '\0')) {
					return 0;
				}
				if ((tv != (int)pcVar2[0x70]) && ((&DAT_10130b33)[(int)psVar6[0x70]] == '\0')) {
					return 0;
				}
				if ((tv != (int)pcVar2[-1]) && ((&DAT_10130b33)[(int)psVar6[-1]] == '\0')) {
					return 0;
				}
				if ((tv != (int)pcVar2[1]) && ((&DAT_10130b33)[(int)psVar6[1]] == '\0')) {
					return 0;
				}
			}
			if ((tv == (int)pcVar2[0x70]) && ((&DAT_10130b33)[(int)psVar6[0x70]] == '\0')) {
				if ((tv != (int)*pcVar2) && ((&DAT_10130b33)[(int)*psVar6] == '\0')) {
					return 0;
				}
				if ((tv != (int)pcVar2[0xe0]) && ((&DAT_10130b33)[(int)psVar6[0xe0]] == '\0')) {
					return 0;
				}
				if ((tv != (int)pcVar2[0x6f]) && ((&DAT_10130b33)[(int)psVar6[0x6f]] == '\0')) {
					return 0;
				}
				if ((tv != (int)pcVar2[0x71]) && ((&DAT_10130b33)[(int)psVar6[0x71]] == '\0')) {
					return 0;
				}
			}
			pcVar2 = pcVar2 + 0xe0;
			psVar6 = psVar6 + 0xe0;
			lVar11 = lVar11 + -1;
		} while (lVar11 != 0);
		iVar9 = iVar9 + 1;
		psVar8 = psVar8 + 1;
		pcVar5 = pcVar5 + 1;
		if (0x6f < iVar9) {
			return 1;
		}
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void InitThemes(void)

{
	ulonglong uVar1;
	longlong lVar2;
	char *pcVar3;
	BOOL BVar4;
	int iVar5;
	undefined *puVar6;
	longlong lVar7;
	int tv;
	undefined *puVar8;
	char *pcVar9;

	puVar8 = &DAT_1012edb4;
	pcVar9 = &DAT_101ab824;
	_DAT_101ab820 = 0;
	_DAT_101ab81c = -1;
	_DAT_101ab80c = 1;
	_DAT_101ab808 = 1;
	_DAT_101ab804 = 1;
	_DAT_101ab800 = 1;
	_DAT_101ab7fc = 1;
	_DAT_101ab7f8 = 1;
	_DAT_101ab7f4 = 1;
	_DAT_101ab7f0 = 0;
	_DAT_101ab7ec = 1;
	if (currlevel != 0x10) {
		if (leveltype == '\x01') {
			_DAT_101ab7dc = 0;
			tv = 0;
			uRam101ab7e0 = 0;
			uRam101ab7e4 = 0;
			uRam101ab7e8 = 0;
			while ((tv < 0x100 && (_DAT_101ab820 < 0x32))) {
				BVar4 = CheckThemeRoom(tv);
				if (BVar4 != 0) {
					*(int *)(_DAT_101ab820 * 8 + 0x101ab828) = tv;
					iVar5 = random('\0', 4);
					uVar1 = (ulonglong) * (uint *)(&DAT_1011f9f8 + iVar5 * 4);
					while (BVar4 = SpecialThemeFit(_DAT_101ab820, (int)uVar1), BVar4 == 0) {
						iVar5 = random('\0', 0x11);
						uVar1 = SEXT48(iVar5);
					}
					(&DAT_101ab824)[_DAT_101ab820 * 8] = (char)uVar1;
					_DAT_101ab820 = _DAT_101ab820 + 1;
				}
				tv = tv + 1;
			}
		}
		if ((byte)(leveltype - 2U) < 3) {
			lVar7 = 0;
			if (0 < (int)_DAT_1012f19c) {
				if ((8 < (int)_DAT_1012f19c) && (uVar1 = (ulonglong)(_DAT_1012f19c - 1 >> 3), pcVar3 = pcVar9, 0 < (int)(_DAT_1012f19c - 8))) {
					do {
						*pcVar3 = -1;
						lVar7 = lVar7 + 8;
						pcVar3[8] = -1;
						pcVar3[0x10] = -1;
						pcVar3[0x18] = -1;
						pcVar3[0x20] = -1;
						pcVar3[0x28] = -1;
						pcVar3[0x30] = -1;
						pcVar3[0x38] = -1;
						pcVar3 = pcVar3 + 0x40;
						uVar1 = uVar1 - 1;
					} while (uVar1 != 0);
				}
				puVar6 = &DAT_101ab824 + (int)lVar7 * 8;
				lVar2 = (ulonglong)_DAT_1012f19c - lVar7;
				if ((int)lVar7 < (int)_DAT_1012f19c) {
					do {
						*puVar6 = 0xff;
						puVar6 = puVar6 + 8;
						lVar2 = lVar2 + -1;
					} while (lVar2 != 0);
				}
			}
			BVar4 = QuestStatus(3);
			if (BVar4 != 0) {
				tv = 0;
				pcVar3 = pcVar9;
				puVar6 = puVar8;
				while (tv < (int)_DAT_1012f19c) {
					*(undefined4 *)(pcVar3 + 4) = *(undefined4 *)(puVar6 + 8);
					BVar4 = SpecialThemeFit(tv, 5);
					if (BVar4 != 0) {
						(&DAT_101ab824)[tv * 8] = 5;
						_DAT_101ab81c = tv;
						break;
					}
					puVar6 = puVar6 + 0x14;
					pcVar3 = pcVar3 + 8;
					tv = tv + 1;
				}
			}
			tv = 0;
			while (tv < (int)_DAT_1012f19c) {
				if (*pcVar9 == -1) {
					*(undefined4 *)(pcVar9 + 4) = *(undefined4 *)(puVar8 + 8);
					iVar5 = random('\0', 4);
					uVar1 = (ulonglong) * (uint *)(&DAT_1011f9f8 + iVar5 * 4);
					while (BVar4 = SpecialThemeFit(tv, (int)uVar1), BVar4 == 0) {
						iVar5 = random('\0', 0x11);
						uVar1 = SEXT48(iVar5);
					}
					*pcVar9 = (char)uVar1;
				}
				pcVar9 = pcVar9 + 8;
				puVar8 = puVar8 + 0x14;
				tv = tv + 1;
			}
			_DAT_101ab820 = _DAT_101ab820 + _DAT_1012f19c;
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void HoldThemeRooms(void)

{
	char cVar1;
	int iVar2;
	int iVar3;
	undefined *puVar4;
	int iVar5;
	int iVar6;
	longlong lVar7;

	if (currlevel != 0x10) {
		if (leveltype == '\x01') {
			puVar4 = &DAT_101ab824;
			iVar5 = 0;
			while (iVar5 < _DAT_101ab820) {
				iVar6 = 0;
				cVar1 = (char)*(undefined4 *)(puVar4 + 4);
				do {
					lVar7 = 0x10;
					iVar3 = 0;
					do {
						if (cVar1 == *(char *)(iVar6 + _DAT_1012f1c8 + iVar3)) {
							*(byte *)(iVar6 + _DAT_1012f1bc + iVar3) = *(byte *)(iVar6 + _DAT_1012f1bc + iVar3) | 8;
						}
						if (cVar1 == *(char *)(iVar6 + _DAT_1012f1c8 + iVar3 + 0x70)) {
							iVar2 = _DAT_1012f1bc + iVar3 + 0x70;
							*(byte *)(iVar6 + iVar2) = *(byte *)(iVar6 + iVar2) | 8;
						}
						if (cVar1 == *(char *)(iVar6 + _DAT_1012f1c8 + iVar3 + 0xe0)) {
							iVar2 = _DAT_1012f1bc + iVar3 + 0xe0;
							*(byte *)(iVar6 + iVar2) = *(byte *)(iVar6 + iVar2) | 8;
						}
						if (cVar1 == *(char *)(iVar6 + _DAT_1012f1c8 + iVar3 + 0x150)) {
							iVar2 = _DAT_1012f1bc + iVar3 + 0x150;
							*(byte *)(iVar6 + iVar2) = *(byte *)(iVar6 + iVar2) | 8;
						}
						if (cVar1 == *(char *)(iVar6 + _DAT_1012f1c8 + iVar3 + 0x1c0)) {
							iVar2 = _DAT_1012f1bc + iVar3 + 0x1c0;
							*(byte *)(iVar6 + iVar2) = *(byte *)(iVar6 + iVar2) | 8;
						}
						if (cVar1 == *(char *)(iVar6 + _DAT_1012f1c8 + iVar3 + 0x230)) {
							iVar2 = _DAT_1012f1bc + iVar3 + 0x230;
							*(byte *)(iVar6 + iVar2) = *(byte *)(iVar6 + iVar2) | 8;
						}
						if (cVar1 == *(char *)(iVar6 + _DAT_1012f1c8 + iVar3 + 0x2a0)) {
							iVar2 = _DAT_1012f1bc + iVar3 + 0x2a0;
							*(byte *)(iVar6 + iVar2) = *(byte *)(iVar6 + iVar2) | 8;
						}
						iVar3 = iVar3 + 0x310;
						lVar7 = lVar7 + -1;
					} while (lVar7 != 0);
					iVar6 = iVar6 + 1;
				} while (iVar6 < 0x70);
				puVar4 = puVar4 + 8;
				iVar5 = iVar5 + 1;
			}
		} else {
			DRLG_HoldThemeRooms();
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void PlaceThemeMonsts(int t, int f)

{
	ulonglong uVar1;
	int y;
	int v;
	int dir;
	int iVar2;
	int iVar3;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	int x;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	int iVar4;
	undefined8 unaff_r26;
	int iVar5;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int local_1f8[113];
	undefined4 local_34;
	undefined4 uStack48;
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

	y = 0x100f8fd0;
	local_34 = (undefined4)((ulonglong)unaff_r19 >> 0x20);
	uStack48 = (undefined4)((ulonglong)unaff_r20 >> 0x20);
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
	v = 0;
	iVar3 = 0;
	uVar1 = (ulonglong)(uint)nummtypes;
	iVar2 = (int)&Monsters[0].trans_file + 3;
	if (0 < nummtypes) {
		do {
			if ((*(byte *)(iVar2 + 1) & 1) != 0) {
				local_1f8[v] = iVar3;
				v = v + 1;
			}
			iVar2 = iVar2 + 0x208;
			iVar3 = iVar3 + 1;
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
	}
	v = random('\0', v);
	iVar2 = *(int *)(y + -0x6fcc);
	v = local_1f8[v];
	y = 0;
	iVar3 = 0;
	do {
		iVar5 = 0;
		iVar4 = 0;
		x = 0;
		do {
			if ((int)*(char *)(y + _DAT_1012f1c8 + iVar5) == *(int *)(iVar2 + t * 8 + 4)) {
				if ((&DAT_10130b33)[(int)*(short *)(iVar3 + _DAT_1012f1d4 + iVar4)] == '\0') {
					if (((*(char *)(y + _DAT_1012f1a8 + iVar5) == '\0') && (*(char *)(y + _DAT_1012f1ac + iVar5) == '\0')) && (dir = random('\0', f), dir == 0)) {
						dir = random('\0', 8);
						AddMonster(x, y, dir, v, 1);
					}
				}
			}
			x = x + 1;
			iVar4 = iVar4 + 0xe0;
			iVar5 = iVar5 + 0x70;
		} while (x < 0x70);
		y = y + 1;
		iVar3 = iVar3 + 2;
	} while (y < 0x70);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Theme_Barrel(int t)

{
	int ot;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	int oy;
	undefined8 unaff_r23;
	int ox;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	int iVar1;
	undefined8 unaff_r26;
	int iVar2;
	undefined8 unaff_r27;
	int iVar3;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	char cStack57;
	undefined4 local_38;
	undefined4 local_34;
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
	oy = 0;
	iVar1 = 0;
	local_34 = _DAT_100f44b4;
	local_38 = _DAT_100f44b8;
	do {
		iVar3 = 0;
		iVar2 = 0;
		ox = 0;
		do {
			if ((((int)*(char *)(oy + _DAT_1012f1c8 + iVar3) == *(int *)(t * 8 + 0x101ab828)) && ((&DAT_10130b33)[(int)*(short *)(iVar1 + _DAT_1012f1d4 + iVar2)] == '\0')) && (ot = random('\0', (int)*(char *)((int)&local_34 + ((uint)leveltype - 1))), ot == 0)) {
				ot = random('\0', (int)*(char *)((int)&local_34 + ((uint)leveltype - 1)));
				if (ot == 0) {
					ot = 0x39;
				} else {
					ot = 0x3a;
				}
				AddObject(ot, ox, oy);
			}
			ox = ox + 1;
			iVar2 = iVar2 + 0xe0;
			iVar3 = iVar3 + 0x70;
		} while (ox < 0x70);
		oy = oy + 1;
		iVar1 = iVar1 + 2;
	} while (oy < 0x70);
	PlaceThemeMonsts(t, (int)(&cStack57)[(uint)leveltype]);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Theme_Shrine(int t)

{
	int iVar1;
	char cStack25;
	undefined4 local_18;

	iVar1 = 0x100f8fd0;
	local_18 = _DAT_100f44bc;
	TFit_Shrine(t);
	if (**(int **)(iVar1 + -0x6ecc) == 1) {
		AddObject(9, _DAT_101ab818 + -1, _DAT_101ab814);
		AddObject(0x3c, _DAT_101ab818, _DAT_101ab814);
		AddObject(9, _DAT_101ab818 + 1, _DAT_101ab814);
	} else {
		AddObject(9, _DAT_101ab818, _DAT_101ab814 + -1);
		AddObject(0x3b, _DAT_101ab818, _DAT_101ab814);
		AddObject(9, _DAT_101ab818, _DAT_101ab814 + 1);
	}
	PlaceThemeMonsts(t, (int)(&cStack25)[(uint) * *(byte **)(iVar1 + -0x7794)]);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Theme_MonstPit(int t)

{
	int iVar1;
	int iVar2;
	int x;
	int y;
	char cStack25;
	undefined4 local_18;

	iVar1 = 0x100f8fd0;
	local_18 = _DAT_100f44c0;
	iVar2 = random('\0', 100);
	iVar2 = iVar2 + 1;
	x = 0;
	y = 0;
	while (0 < iVar2) {
		if (((int)*(char *)(**(int **)(iVar1 + -0x7588) + x * 0x70 + y) == *(int *)(*(int *)(iVar1 + -0x6fcc) + t * 8 + 4)) && ((&DAT_10130b33)[(int)*(short *)(**(int **)(iVar1 + -0x757c) + x * 0xe0 + y * 2)] == '\0')) {
			iVar2 = iVar2 + -1;
		}
		if ((0 < iVar2) && (x = x + 1, x == 0x70)) {
			y = y + 1;
			x = 0;
			if (y == 0x70) {
				y = 0;
			}
		}
	}
	CreateRndItem(x, y, 1, 0, 1);
	ItemNoFlippy();
	PlaceThemeMonsts(t, (int)(&cStack25)[(uint) * *(byte **)(iVar1 + -0x7794)]);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Theme_SkelRoom(int t)

{
	int ox;
	int oy;
	int ii;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	char cStack41;
	undefined4 local_28;
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	oy = 0x100f8fd0;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	local_28 = _DAT_100f44c4;
	TFit_SkelRoom(t);
	ox = **(int **)(oy + -0x6ec4);
	oy = **(int **)(oy + -0x6ec8);
	AddObject(3, ox, oy);
	ii = random('\0', (int)(&cStack41)[(uint)leveltype]);
	if (ii == 0) {
		AddObject(0xb, ox + -1, oy + -1);
	} else {
		ii = PreSpawnSkeleton();
		SpawnSkeleton(ii, ox + -1, oy + -1);
	}
	ii = PreSpawnSkeleton();
	SpawnSkeleton(ii, ox, oy + -1);
	ii = random('\0', (int)(&cStack41)[(uint)leveltype]);
	if (ii == 0) {
		AddObject(0xd, ox + 1, oy + -1);
	} else {
		ii = PreSpawnSkeleton();
		SpawnSkeleton(ii, ox + 1, oy + -1);
	}
	ii = random('\0', (int)(&cStack41)[(uint)leveltype]);
	if (ii == 0) {
		AddObject(0xc, ox + -1, oy);
	} else {
		ii = PreSpawnSkeleton();
		SpawnSkeleton(ii, ox + -1, oy);
	}
	ii = random('\0', (int)(&cStack41)[(uint)leveltype]);
	if (ii == 0) {
		AddObject(0xc, ox + 1, oy);
	} else {
		ii = PreSpawnSkeleton();
		SpawnSkeleton(ii, ox + 1, oy);
	}
	ii = random('\0', (int)(&cStack41)[(uint)leveltype]);
	if (ii == 0) {
		AddObject(0xd, ox + -1, oy + 1);
	} else {
		ii = PreSpawnSkeleton();
		SpawnSkeleton(ii, ox + -1, oy + 1);
	}
	ii = PreSpawnSkeleton();
	SpawnSkeleton(ii, ox, oy + 1);
	ii = random('\0', (int)(&cStack41)[(uint)leveltype]);
	if (ii == 0) {
		AddObject(0xb, ox + 1, oy + 1);
	} else {
		ii = PreSpawnSkeleton();
		SpawnSkeleton(ii, ox + 1, oy + 1);
	}
	if (*(char *)(_DAT_1012f1ac + ox * 0x70 + oy + -3) == '\0') {
		AddObject(0x3d, ox, oy + -2);
	}
	if (*(char *)(_DAT_1012f1ac + ox * 0x70 + oy + 3) == '\0') {
		AddObject(0x3d, ox, oy + 2);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Theme_Treasure(int t)

{
	int iVar1;
	int iVar2;
	uint uVar3;
	int iVar4;
	int *piVar5;
	undefined8 unaff_r18;
	undefined8 unaff_r19;
	int y;
	undefined8 unaff_r20;
	int x;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	int iVar6;
	undefined8 unaff_r23;
	int iVar7;
	undefined8 unaff_r24;
	int iVar8;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	char cStack69;
	undefined4 local_44;
	undefined4 local_40[2];
	undefined4 local_38;
	undefined4 uStack52;
	undefined4 uStack48;
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

	iVar1 = 0x100f8fd0;
	local_38 = (undefined4)((ulonglong)unaff_r18 >> 0x20);
	uStack52 = (undefined4)((ulonglong)unaff_r19 >> 0x20);
	uStack48 = (undefined4)((ulonglong)unaff_r20 >> 0x20);
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
	local_40[0] = _DAT_100f44c8;
	local_44 = _DAT_100f44cc;
	GetRndSeed();
	iVar1 = *(int *)(iVar1 + -0x6fcc);
	y = 0;
	iVar6 = 0;
	do {
		iVar8 = 0;
		iVar7 = 0;
		x = 0;
		do {
			if (((int)*(char *)(y + _DAT_1012f1c8 + iVar8) == *(int *)(iVar1 + t * 8 + 4)) && ((&DAT_10130b33)[(int)*(short *)(iVar6 + _DAT_1012f1d4 + iVar7)] == '\0')) {
				iVar2 = random('\0', (int)*(char *)((int)local_40 + ((uint)leveltype - 1)));
				uVar3 = random('\0', (int)*(char *)((int)local_40 + ((uint)leveltype - 1)));
				if ((uVar3 & 0x7fffffff) == 0) {
					CreateTypeItem(x, y, 0, 0xb, 0, 0, 1);
					ItemNoFlippy();
				}
				if (iVar2 == 0) {
					CreateRndItem(x, y, 0, 0, 1);
					ItemNoFlippy();
				} else {
					if (iVar2 < (int)*(char *)((int)local_40 + ((uint)leveltype - 1)) + -2)
						goto LAB_100af624;
				}
				iVar4 = ItemNoFlippy();
				if (((int)*(char *)((int)local_40 + ((uint)leveltype - 1)) + -2 <= iVar2) && (leveltype != 1)) {
					piVar5 = (int *)(iVar4 * 0x170 + 0x1013da4c);
					*piVar5 = *piVar5 >> 1;
				}
			}
		LAB_100af624:
			x = x + 1;
			iVar7 = iVar7 + 0xe0;
			iVar8 = iVar8 + 0x70;
		} while (x < 0x70);
		y = y + 1;
		iVar6 = iVar6 + 2;
		if (0x6f < y) {
			PlaceThemeMonsts(t, (int)(&cStack69)[(uint)leveltype]);
			return;
		}
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Theme_Library(int t)

{
	undefined8 uVar1;
	BOOL BVar2;
	int iVar3;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	int yp;
	undefined8 unaff_r23;
	int xp;
	undefined8 unaff_r24;
	int iVar4;
	undefined8 unaff_r25;
	int iVar5;
	undefined8 unaff_r26;
	int iVar6;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 local_48;
	undefined4 local_44[6];
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

	uVar1 = 0x100f8fd0;
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
	local_44[0] = _DAT_100f44d0;
	local_48 = _DAT_100f44d4;
	TFit_Shrine(t);
	if (**(int **)((int)uVar1 + -0x6ecc) == 1) {
		AddObject(0x41, _DAT_101ab818 + -1, _DAT_101ab814);
		AddObject(0x3f, _DAT_101ab818, _DAT_101ab814);
		AddObject(0x41, _DAT_101ab818 + 1, _DAT_101ab814);
	} else {
		AddObject(0x41, _DAT_101ab818, _DAT_101ab814 + -1);
		AddObject(0x3e, _DAT_101ab818, _DAT_101ab814);
		AddObject(0x41, _DAT_101ab818, _DAT_101ab814 + 1);
	}
	yp = 1;
	iVar4 = 2;
	do {
		xp = 1;
		iVar6 = 0xe0;
		iVar5 = 0x70;
		do {
			BVar2 = CheckThemeObj3(xp, yp, t, -1);
			if (((BVar2 != 0) && (*(short *)(iVar4 + _DAT_1012f1b4 + iVar6) == 0)) && (iVar3 = random('\0', (int)*(char *)((int)local_44 + ((uint)leveltype - 1))), iVar3 == 0)) {
				AddObject(0x40, xp, yp);
				iVar3 = random('\0', (int)*(char *)((int)local_44 + ((uint)leveltype - 1)) << 1);
				if (iVar3 != 0) {
					iVar3 = ((int)*(char *)(yp + _DAT_1012f1ac + iVar5) + -1) * 0x78;
					*(undefined *)(iVar3 + 0x1017e414) = 0;
					*(int *)(iVar3 + 0x1017e3f8) = *(int *)(iVar3 + 0x1017e3f8) + 2;
				}
			}
			iVar3 = (int)uVar1;
			xp = xp + 1;
			iVar5 = iVar5 + 0x70;
			iVar6 = iVar6 + 0xe0;
		} while (xp < 0x6f);
		yp = yp + 1;
		iVar4 = iVar4 + 2;
	} while (yp < 0x6f);
	BVar2 = QuestStatus(3);
	if (BVar2 == 0) {
		PlaceThemeMonsts(t, (int)*(char *)((int)&local_48 + (uint)leveltype));
	} else {
		if (t != **(int **)(iVar3 + -0x70a8)) {
			PlaceThemeMonsts(t, (int)*(char *)((int)&local_48 + (uint)leveltype));
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Theme_Torture(int t)

{
	BOOL BVar1;
	int iVar2;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	int yp;
	undefined8 unaff_r23;
	int xp;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	int iVar3;
	undefined8 unaff_r26;
	int iVar4;
	undefined8 unaff_r27;
	int iVar5;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	char cStack57;
	undefined4 local_38;
	undefined4 local_34;
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
	yp = 1;
	iVar3 = 2;
	local_34 = _DAT_100f44d8;
	local_38 = _DAT_100f44dc;
	do {
		xp = 1;
		iVar5 = 0x70;
		iVar4 = 0xe0;
		do {
			if (((((int)*(char *)(yp + _DAT_1012f1c8 + iVar5) == *(int *)(t * 8 + 0x101ab828)) && ((&DAT_10130b33)[(int)*(short *)(iVar3 + _DAT_1012f1d4 + iVar4)] == '\0')) && (BVar1 = CheckThemeObj3(xp, yp, t, -1), BVar1 != 0)) && (iVar2 = random('\0', (int)*(char *)((int)&local_38 + (uint)leveltype + 3)), iVar2 == 0)) {
				AddObject(0x1e, xp, yp);
			}
			xp = xp + 1;
			iVar4 = iVar4 + 0xe0;
			iVar5 = iVar5 + 0x70;
		} while (xp < 0x6f);
		yp = yp + 1;
		iVar3 = iVar3 + 2;
	} while (yp < 0x6f);
	PlaceThemeMonsts(t, (int)(&cStack57)[(uint)leveltype]);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Theme_BloodFountain(int t)

{
	int iVar1;
	char cStack25;
	undefined4 local_18;

	iVar1 = 0x100f8fd0;
	local_18 = _DAT_100f44e0;
	TFit_Obj5(t);
	AddObject(0x42, **(int **)(iVar1 + -0x6ec4), **(int **)(iVar1 + -0x6ec8));
	PlaceThemeMonsts(t, (int)(&cStack25)[(uint) * *(byte **)(iVar1 + -0x7794)]);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Theme_Decap(int t)

{
	BOOL BVar1;
	int iVar2;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	int yp;
	undefined8 unaff_r23;
	int xp;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	int iVar3;
	undefined8 unaff_r26;
	int iVar4;
	undefined8 unaff_r27;
	int iVar5;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	char cStack57;
	undefined4 local_38;
	undefined4 local_34;
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
	yp = 1;
	iVar3 = 2;
	local_34 = _DAT_100f44e4;
	local_38 = _DAT_100f44e8;
	do {
		xp = 1;
		iVar5 = 0x70;
		iVar4 = 0xe0;
		do {
			if (((((int)*(char *)(yp + _DAT_1012f1c8 + iVar5) == *(int *)(t * 8 + 0x101ab828)) && ((&DAT_10130b33)[(int)*(short *)(iVar3 + _DAT_1012f1d4 + iVar4)] == '\0')) && (BVar1 = CheckThemeObj3(xp, yp, t, -1), BVar1 != 0)) && (iVar2 = random('\0', (int)*(char *)((int)&local_38 + (uint)leveltype + 3)), iVar2 == 0)) {
				AddObject(0x43, xp, yp);
			}
			xp = xp + 1;
			iVar4 = iVar4 + 0xe0;
			iVar5 = iVar5 + 0x70;
		} while (xp < 0x6f);
		yp = yp + 1;
		iVar3 = iVar3 + 2;
	} while (yp < 0x6f);
	PlaceThemeMonsts(t, (int)(&cStack57)[(uint)leveltype]);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Theme_PurifyingFountain(int t)

{
	int iVar1;
	char cStack25;
	undefined4 local_18;

	iVar1 = 0x100f8fd0;
	local_18 = _DAT_100f44ec;
	TFit_Obj5(t);
	AddObject(0x4c, **(int **)(iVar1 + -0x6ec4), **(int **)(iVar1 + -0x6ec8));
	PlaceThemeMonsts(t, (int)(&cStack25)[(uint) * *(byte **)(iVar1 + -0x7794)]);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Theme_ArmorStand(int t)

{
	int iVar1;
	BOOL BVar2;
	int iVar3;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	int yp;
	undefined8 unaff_r22;
	int xp;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	int iVar4;
	undefined8 unaff_r25;
	int iVar5;
	undefined8 unaff_r26;
	int iVar6;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	char cStack73;
	undefined4 local_48;
	undefined4 local_44;
	undefined4 local_34;
	undefined4 uStack48;
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

	iVar1 = 0x100f8fd0;
	local_34 = (undefined4)((ulonglong)unaff_r19 >> 0x20);
	uStack48 = (undefined4)((ulonglong)unaff_r20 >> 0x20);
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
	local_44 = _DAT_100f44f0;
	local_48 = _DAT_100f44f4;
	if (_DAT_101ab80c != 0) {
		iVar1 = 0x100f8fd0;
		TFit_Obj3(t);
		AddObject(0x4d, **(int **)(iVar1 + -0x6ec4), **(int **)(iVar1 + -0x6ec8));
	}
	iVar1 = *(int *)(iVar1 + -0x6fcc);
	yp = 0;
	iVar4 = 0;
	do {
		iVar6 = 0;
		iVar5 = 0;
		xp = 0;
		do {
			if (((((int)*(char *)(yp + _DAT_1012f1c8 + iVar6) == *(int *)(iVar1 + t * 8 + 4)) && ((&DAT_10130b33)[(int)*(short *)(iVar4 + _DAT_1012f1d4 + iVar5)] == '\0')) && (BVar2 = CheckThemeObj3(xp, yp, t, -1), BVar2 != 0)) && (iVar3 = random('\0', (int)*(char *)((int)&local_48 + (uint)leveltype + 3)), iVar3 == 0)) {
				AddObject(0x4e, xp, yp);
			}
			xp = xp + 1;
			iVar5 = iVar5 + 0xe0;
			iVar6 = iVar6 + 0x70;
		} while (xp < 0x70);
		yp = yp + 1;
		iVar4 = iVar4 + 2;
	} while (yp < 0x70);
	PlaceThemeMonsts(t, (int)(&cStack73)[(uint)leveltype]);
	_DAT_101ab80c = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Theme_GoatShrine(int t)

{
	int iVar1;
	int y;
	int x;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar1 = 0x100f8fd0;
	TFit_GoatShrine(t);
	AddObject(0x4f, _DAT_101ab818, _DAT_101ab814);
	iVar1 = *(int *)(iVar1 + -0x6fcc);
	y = _DAT_101ab814 + -1;
	iVar2 = y * 2;
	while (y <= _DAT_101ab814 + 1) {
		x = _DAT_101ab818 + -1;
		iVar4 = x * 0x70;
		iVar3 = x * 0xe0;
		while (x <= _DAT_101ab818 + 1) {
			if ((((int)*(char *)(y + _DAT_1012f1c8 + iVar4) == *(int *)(iVar1 + t * 8 + 4)) && ((&DAT_10130b33)[(int)*(short *)(iVar2 + _DAT_1012f1d4 + iVar3)] == '\0')) && ((x != _DAT_101ab818 || (y != _DAT_101ab814)))) {
				AddMonster(x, y, 1, _DAT_101ab810, 1);
			}
			iVar4 = iVar4 + 0x70;
			iVar3 = iVar3 + 0xe0;
			x = x + 1;
		}
		iVar2 = iVar2 + 2;
		y = y + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Theme_Cauldron(int t)

{
	int iVar1;
	char cStack25;
	undefined4 local_18;

	iVar1 = 0x100f8fd0;
	local_18 = _DAT_100f44f8;
	TFit_Obj5(t);
	AddObject(0x50, **(int **)(iVar1 + -0x6ec4), **(int **)(iVar1 + -0x6ec8));
	PlaceThemeMonsts(t, (int)(&cStack25)[(uint) * *(byte **)(iVar1 + -0x7794)]);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Theme_MurkyFountain(int t)

{
	int iVar1;
	char cStack25;
	undefined4 local_18;

	iVar1 = 0x100f8fd0;
	local_18 = _DAT_100f44fc;
	TFit_Obj5(t);
	AddObject(0x51, **(int **)(iVar1 + -0x6ec4), **(int **)(iVar1 + -0x6ec8));
	PlaceThemeMonsts(t, (int)(&cStack25)[(uint) * *(byte **)(iVar1 + -0x7794)]);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Theme_TearFountain(int t)

{
	int iVar1;
	char cStack25;
	undefined4 local_18;

	iVar1 = 0x100f8fd0;
	local_18 = _DAT_100f4500;
	TFit_Obj5(t);
	AddObject(0x52, **(int **)(iVar1 + -0x6ec4), **(int **)(iVar1 + -0x6ec8));
	PlaceThemeMonsts(t, (int)(&cStack25)[(uint) * *(byte **)(iVar1 + -0x7794)]);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Theme_BrnCross(int t)

{
	undefined8 uVar1;
	BOOL BVar2;
	int iVar3;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	int yp;
	undefined8 unaff_r23;
	int xp;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	int iVar4;
	undefined8 unaff_r26;
	int iVar5;
	undefined8 unaff_r27;
	int iVar6;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	char cStack57;
	undefined4 local_38;
	undefined4 local_34;
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

	uVar1 = 0x100f8fd0;
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
	yp = 0;
	iVar4 = 0;
	local_34 = _DAT_100f4504;
	local_38 = _DAT_100f4508;
	do {
		iVar6 = 0;
		iVar5 = 0;
		xp = 0;
		do {
			if (((((int)*(char *)(yp + _DAT_1012f1c8 + iVar6) == *(int *)(t * 8 + 0x101ab828)) && ((&DAT_10130b33)[(int)*(short *)(iVar4 + _DAT_1012f1d4 + iVar5)] == '\0')) && (BVar2 = CheckThemeObj3(xp, yp, t, -1), BVar2 != 0)) && (iVar3 = random('\0', (int)(&cStack57)[(uint)leveltype]), iVar3 == 0)) {
				AddObject(0x5b, xp, yp);
			}
			iVar3 = (int)uVar1;
			xp = xp + 1;
			iVar5 = iVar5 + 0xe0;
			iVar6 = iVar6 + 0x70;
		} while (xp < 0x70);
		yp = yp + 1;
		iVar4 = iVar4 + 2;
	} while (yp < 0x70);
	PlaceThemeMonsts(t, (int)*(char *)((int)&local_38 + (uint)leveltype + 3));
	**(undefined4 **)(iVar3 + -0x6ee8) = 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Theme_WeaponRack(int t)

{
	int iVar1;
	BOOL BVar2;
	int iVar3;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	int yp;
	undefined8 unaff_r22;
	int xp;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	int iVar4;
	undefined8 unaff_r25;
	int iVar5;
	undefined8 unaff_r26;
	int iVar6;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	char cStack73;
	undefined4 local_48;
	undefined4 local_44;
	undefined4 local_34;
	undefined4 uStack48;
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

	iVar1 = 0x100f8fd0;
	local_34 = (undefined4)((ulonglong)unaff_r19 >> 0x20);
	uStack48 = (undefined4)((ulonglong)unaff_r20 >> 0x20);
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
	local_44 = _DAT_100f450c;
	local_48 = _DAT_100f4510;
	if (_DAT_101ab7ec != 0) {
		iVar1 = 0x100f8fd0;
		TFit_Obj3(t);
		AddObject(0x5c, **(int **)(iVar1 + -0x6ec4), **(int **)(iVar1 + -0x6ec8));
	}
	iVar1 = *(int *)(iVar1 + -0x6fcc);
	yp = 0;
	iVar4 = 0;
	do {
		iVar6 = 0;
		iVar5 = 0;
		xp = 0;
		do {
			if (((((int)*(char *)(yp + _DAT_1012f1c8 + iVar6) == *(int *)(iVar1 + t * 8 + 4)) && ((&DAT_10130b33)[(int)*(short *)(iVar4 + _DAT_1012f1d4 + iVar5)] == '\0')) && (BVar2 = CheckThemeObj3(xp, yp, t, -1), BVar2 != 0)) && (iVar3 = random('\0', (int)*(char *)((int)&local_48 + (uint)leveltype + 3)), iVar3 == 0)) {
				AddObject(0x5d, xp, yp);
			}
			xp = xp + 1;
			iVar5 = iVar5 + 0xe0;
			iVar6 = iVar6 + 0x70;
		} while (xp < 0x70);
		yp = yp + 1;
		iVar4 = iVar4 + 2;
	} while (yp < 0x70);
	PlaceThemeMonsts(t, (int)(&cStack73)[(uint)leveltype]);
	_DAT_101ab7ec = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void UpdateL4Trans(void)

{
	int iVar1;
	char *pcVar2;
	int iVar3;
	longlong lVar4;

	iVar3 = 0;
	do {
		lVar4 = 0xe;
		iVar1 = 0;
		do {
			pcVar2 = (char *)(iVar3 + _DAT_1012f1c8 + iVar1);
			if (*pcVar2 != '\0') {
				*pcVar2 = '\x01';
			}
			pcVar2 = (char *)(iVar3 + _DAT_1012f1c8 + iVar1 + 0x70);
			if (*pcVar2 != '\0') {
				*pcVar2 = '\x01';
			}
			pcVar2 = (char *)(iVar3 + _DAT_1012f1c8 + iVar1 + 0xe0);
			if (*pcVar2 != '\0') {
				*pcVar2 = '\x01';
			}
			pcVar2 = (char *)(iVar3 + _DAT_1012f1c8 + iVar1 + 0x150);
			if (*pcVar2 != '\0') {
				*pcVar2 = '\x01';
			}
			pcVar2 = (char *)(iVar3 + _DAT_1012f1c8 + iVar1 + 0x1c0);
			if (*pcVar2 != '\0') {
				*pcVar2 = '\x01';
			}
			pcVar2 = (char *)(iVar3 + _DAT_1012f1c8 + iVar1 + 0x230);
			if (*pcVar2 != '\0') {
				*pcVar2 = '\x01';
			}
			pcVar2 = (char *)(iVar3 + _DAT_1012f1c8 + iVar1 + 0x2a0);
			if (*pcVar2 != '\0') {
				*pcVar2 = '\x01';
			}
			pcVar2 = (char *)(iVar3 + _DAT_1012f1c8 + iVar1 + 0x310);
			if (*pcVar2 != '\0') {
				*pcVar2 = '\x01';
			}
			iVar1 = iVar1 + 0x380;
			lVar4 = lVar4 + -1;
		} while (lVar4 != 0);
		iVar3 = iVar3 + 1;
	} while (iVar3 < 0x70);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CreateThemeRooms(void)

{
	int iVar1;
	char *pcVar2;

	if (currlevel != 0x10) {
		pcVar2 = &DAT_101ab824;
		_DAT_1017df00 = 1;
		iVar1 = 0;
		while (iVar1 < _DAT_101ab820) {
			_DAT_101ab818 = 0;
			_DAT_101ab814 = 0;
			if (((longlong)*pcVar2 & 0xffffffffU) < 0x11) {
				// WARNING: Could not recover jumptable at 0x100b03b4. Too many branches
				// WARNING: Treating indirect jump as call
				(*(code *)(&PTR_LAB_1011fba0)[(int)*pcVar2])();
				return;
			}
			pcVar2 = pcVar2 + 8;
			iVar1 = iVar1 + 1;
		}
		_DAT_1017df00 = 0;
		if ((leveltype == '\x04') && (0 < _DAT_1012f19c)) {
			UpdateL4Trans();
		}
	}
	return;
}
