
void InitCursor(void)

{
	int iVar1;
	BYTE *pBVar2;

	iVar1 = 0x100f8fd0;
	pBVar2 = LoadFileInMem("Data\\Inv\\Objcurs.CEL", (DWORD *)0x0);
	**(BYTE ***)(iVar1 + -0x7634) = pBVar2;
	ClearCursor();
	return;
}

void FreeCursor(void)

{
	MemFreeDbg((int **)&DAT_101285f0);
	ClearCursor();
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SetICursor(int i)

{
	uint uVar1;
	uint uVar2;

	_DAT_10128610 = *(int *)(s__AAAAAAACEEEEIIIIDNOOOOOX0UUUUYb_100f65a7 + i * 4 + 0x41);
	_DAT_1012860c = *(int *)(&DAT_100f68b8 + i * 4);
	uVar1 = _DAT_10128610 / 0x1c + (_DAT_10128610 >> 0x1f);
	uVar2 = _DAT_1012860c / 0x1c + (_DAT_1012860c >> 0x1f);
	_DAT_10128604 = uVar2 + (uVar2 >> 0x1f);
	_DAT_10128608 = uVar1 + (uVar1 >> 0x1f);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SetCursor_(int i)

{
	_DAT_10128618 = *(undefined4 *)(s__AAAAAAACEEEEIIIIDNOOOOOX0UUUUYb_100f65a7 + i * 4 + 0x41);
	_DAT_10128614 = *(undefined4 *)(&DAT_100f68b8 + i * 4);
	_DAT_1012861c = i;
	SetICursor(i);
	return;
}

void NewCursor(int i)

{
	SetCursor_(i);
	return;
}

void InitLevelCursor(void)

{
	undefined4 *puVar1;
	undefined4 *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	int iVar6;

	iVar6 = 0x100f8fd0;
	SetCursor_(1);
	puVar1 = *(undefined4 **)(iVar6 + -0x77b4);
	**(undefined4 **)(iVar6 + -0x7658) = **(undefined4 **)(iVar6 + -0x77b0);
	puVar2 = *(undefined4 **)(iVar6 + -0x7750);
	**(undefined4 **)(iVar6 + -0x765c) = *puVar1;
	puVar3 = *(undefined **)(iVar6 + -0x774c);
	*(undefined4 *)(iVar6 + -0x4f84) = 0xffffffff;
	puVar4 = *(undefined **)(iVar6 + -0x7748);
	*puVar2 = 0xffffffff;
	puVar5 = *(undefined **)(iVar6 + -0x775c);
	*puVar3 = 0xff;
	*puVar4 = 0xff;
	*puVar5 = 0xff;
	ClearCursor();
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void CheckTown(void)

{
	uint uVar1;
	int iVar2;
	uint uVar3;
	ulonglong in_r6;
	longlong in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int iVar4;
	int *piVar5;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	iVar4 = 0;
	piVar5 = (int *)&DAT_1014939c;
	do {
		if (_DAT_10149b70 <= iVar4) {
			return;
		}
		iVar2 = *piVar5 * 0xb4;
		if (*(int *)(&DAT_10149b74 + iVar2) == 10) {
			uVar1 = *(uint *)(iVar2 + 0x10149b78);
			uVar3 = uVar1 - 1;
			if ((((_DAT_10128600 != uVar3) || (in_r6 = (ulonglong)_DAT_101285fc, _DAT_101285fc != *(uint *)(iVar2 + 0x10149b7c))) && ((_DAT_10128600 != uVar1 || (in_r6 = (ulonglong)_DAT_101285fc, _DAT_101285fc != *(int *)(iVar2 + 0x10149b7c) - 1U)))) && ((_DAT_10128600 != uVar3 || (in_r6 = (ulonglong)_DAT_101285fc, _DAT_101285fc != *(int *)(iVar2 + 0x10149b7c) - 1U)))) {
				in_r7 = (ulonglong)uVar1 - 2;
				if (((_DAT_10128600 != (uint)in_r7) || (in_r6 = (ulonglong)_DAT_101285fc, _DAT_101285fc != *(int *)(iVar2 + 0x10149b7c) - 1U)) && ((((_DAT_10128600 != (uint)in_r7 || (in_r6 = (ulonglong)_DAT_101285fc, _DAT_101285fc != *(int *)(iVar2 + 0x10149b7c) - 2U)) && ((_DAT_10128600 != uVar3 || (_DAT_101285fc != *(int *)(iVar2 + 0x10149b7c) - 2U)))) && ((_DAT_10128600 != uVar1 || (_DAT_101285fc != *(uint *)(iVar2 + 0x10149b7c)))))))
					goto LAB_10021d2c;
			}
			_trigflag = 1;
			ClearPanel();
			strcpy(&DAT_101283d5, "Town Portal");
			wsprintf((int)&DAT_101282d4, "from %s", *(int *)(iVar2 + 0x10149bec) * 0x55ec + 0x10186ffc, (int)in_r6,
			    (int)in_r7, in_r8, in_r9, in_r10, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac,
			    in_stack_ffffffb0, in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
			    in_stack_ffffffc4);
			AddPanelString(&DAT_101282d4, 1);
			_DAT_10128600 = *(uint *)(iVar2 + 0x10149b78);
			_DAT_101285fc = *(uint *)(iVar2 + 0x10149b7c);
		}
	LAB_10021d2c:
		piVar5 = piVar5 + 1;
		iVar4 = iVar4 + 1;
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CheckRportal(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int *piVar5;

	iVar4 = 0;
	piVar5 = (int *)&DAT_1014939c;
	while (iVar4 < _DAT_10149b70) {
		iVar2 = *piVar5 * 0xb4;
		if (*(int *)(&DAT_10149b74 + iVar2) == 0x41) {
			iVar1 = *(int *)(iVar2 + 0x10149b78);
			iVar3 = iVar1 + -1;
			if ((((((_DAT_10128600 == iVar3) && (_DAT_101285fc == *(int *)(iVar2 + 0x10149b7c))) || ((_DAT_10128600 == iVar1 && (_DAT_101285fc == *(int *)(iVar2 + 0x10149b7c) + -1)))) || ((_DAT_10128600 == iVar3 && (_DAT_101285fc == *(int *)(iVar2 + 0x10149b7c) + -1)))) || ((_DAT_10128600 == iVar1 + -2 && (_DAT_101285fc == *(int *)(iVar2 + 0x10149b7c) + -1)))) || ((((_DAT_10128600 == iVar1 + -2 && (_DAT_101285fc == *(int *)(iVar2 + 0x10149b7c) + -2)) || ((_DAT_10128600 == iVar3 && (_DAT_101285fc == *(int *)(iVar2 + 0x10149b7c) + -2)))) || ((_DAT_10128600 == iVar1 && (_DAT_101285fc == *(int *)(iVar2 + 0x10149b7c))))))) {
				_trigflag = 1;
				ClearPanel();
				strcpy(&DAT_101283d5, "Portal to");
				if (DAT_1012f316 == '\0') {
					strcpy(&DAT_101282d4, "The Unholy Altar");
				} else {
					strcpy(&DAT_101282d4, "level 15");
				}
				AddPanelString(&DAT_101282d4, 1);
				_DAT_10128600 = *(int *)(iVar2 + 0x10149b78);
				_DAT_101285fc = *(int *)(iVar2 + 0x10149b7c);
			}
		}
		piVar5 = piVar5 + 1;
		iVar4 = iVar4 + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CheckCursMove(void)

{
	uchar uVar1;
	short sVar2;
	uint uVar3;
	undefined4 *puVar4;
	undefined4 *puVar5;
	undefined4 *puVar6;
	uint uVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	uchar *puVar13;
	char cVar14;
	int iVar15;
	BOOL BVar16;
	char cVar17;
	ulonglong uVar18;
	uchar *puVar19;
	int iVar20;
	int iVar21;
	byte *pbVar22;
	int *piVar23;
	uint uVar24;
	uchar *puVar25;
	uint uVar26;
	uchar *puVar27;
	bool bVar28;
	longlong lVar29;

	iVar21 = _MouseY;
	iVar15 = 0x100f8fd0;
	piVar23 = (int *)&DAT_1012f1ac;
	if ((_DAT_101282b8 == 0) && (_DAT_1019cbec == 0)) {
		if ((_DAT_1013c970 != 0) || (iVar11 = MouseX, _DAT_10128158 != 0)) {
			if (MouseX < 0x141) {
				iVar11 = MouseX + 0xa0;
			} else {
				iVar11 = 0;
			}
		}
	} else {
		if (MouseX < 0xa0) {
			iVar11 = 0;
		} else {
			iVar11 = MouseX + -0xa0;
		}
	}
	if ((0x15f < _MouseY) && (iVar15 = 0x100f8fd0, BVar16 = track_isscrolling(), BVar16 != 0)) {
		iVar21 = 0x15f;
	}
	if (**(int **)(iVar15 + -0x766c) == 0) {
		iVar11 = iVar11 >> 1;
		iVar21 = iVar21 >> 1;
	}
	uVar24 = iVar11 - ScrollStruct_1012f2e8._sxoff;
	iVar20 = **(uint **)(iVar15 + -0x77ac) * 0x55ec;
	iVar11 = *(int *)((int)plr + iVar20 + 0x1e4);
	uVar26 = iVar21 - ScrollStruct_1012f2e8._syoff;
	uVar3 = *(uint *)((int)plr + iVar20 + 0x1e8);
	uVar7 = (int)uVar3 >> 8;
	uVar18 = (ulonglong)uVar3 + (ulonglong) * (uint *)((int)plr + iVar20 + 0x6c);
	uVar3 = (int)uVar18 >> 8;
	if (ScrollStruct_1012f2e8._sdir != 0) {
		uVar24 = uVar24 - ((iVar11 >> 8) - (iVar11 + *(int *)((int)plr + iVar20 + 0x68) >> 8));
		uVar26 = uVar26 - (uVar7 - uVar3);
	}
	if ((int)uVar24 < 0) {
		uVar24 = 0;
	}
	if (0x27f < (int)uVar24) {
		uVar24 = 0x280;
	}
	if ((int)uVar26 < 0) {
		uVar26 = 0;
	}
	if (0x1df < (int)uVar26) {
		uVar26 = 0x1e0;
	}
	if (**(int **)(iVar15 + -0x766c) == 0) {
		iVar21 = 5;
	} else {
		iVar21 = 10;
	}
	uVar18 = (ZEXT48(plr) + (ulonglong) * *(uint **)(iVar15 + -0x77ac) * 0x55ec & 0xffffffff00000000 | (ulonglong)uVar7) - (uVar18 & 0xffffffff00000000 | (ulonglong)uVar3) & 0xffffffff00000000 | (ulonglong)(uint)((int)(uVar24 & 0x3f) >> 1);
	bVar28 = (ulonglong)(uVar26 & 0x1f) < uVar18;
	puVar27 = (uchar *)(**(int **)(iVar15 + -0x77b4) + (((int)uVar26 >> 5) - ((int)uVar24 >> 6)));
	puVar25 = (uchar *)((((int)uVar24 >> 6) + ((int)uVar26 >> 5) + **(int **)(iVar15 + -0x77b0)) - iVar21);
	if (bVar28) {
		puVar27 = puVar27 + -1;
	}
	uVar18 = 0x20 - uVar18;
	iVar21 = ((uint)uVar18 >> 0x1f) + (uint)(uVar18 <= (ulonglong)(uVar26 & 0x1f));
	if (iVar21 != 0) {
		puVar25 = puVar25 + 1;
	}
	if ((int)puVar25 < 0) {
		puVar25 = (uchar *)0x0;
	}
	if (0x6f < (int)puVar25) {
		puVar25 = (uchar *)0x6f;
	}
	if ((int)puVar27 < 0) {
		puVar27 = (uchar *)0x0;
	}
	if (0x6f < (int)puVar27) {
		puVar27 = (uchar *)0x6f;
	}
	bVar10 = true;
	bVar8 = false;
	if ((bVar28) && (iVar21 != 0)) {
		bVar8 = true;
	}
	if (!bVar8) {
		bVar9 = false;
		bVar8 = true;
		if ((!bVar28) && (iVar21 == 0)) {
			bVar8 = false;
		}
		if ((bVar8) && ((uVar24 & 0x3f) < 0x20)) {
			bVar9 = true;
		}
		if (!bVar9) {
			bVar10 = false;
		}
	}
	*(undefined4 *)(iVar15 + -0x4f84) = _DAT_101285f8;
	_DAT_101285f8 = -1;
	DAT_101285f7 = -1;
	DAT_101285f6 = -1;
	if (**(char **)(iVar15 + -0x772c) != -1) {
		**(undefined4 **)(iVar15 + -0x7670) = 1;
	}
	puVar4 = *(undefined4 **)(iVar15 + -0x7674);
	**(undefined **)(iVar15 + -0x772c) = 0xff;
	puVar5 = *(undefined4 **)(iVar15 + -0x76d4);
	DAT_101285f4 = -1;
	puVar6 = *(undefined4 **)(iVar15 + -0x7740);
	*puVar4 = 0;
	*puVar5 = 0;
	*puVar6 = 0;
	iVar21 = **(int **)(iVar15 + -0x77ac);
	puVar19 = _DAT_101285fc;
	puVar13 = _DAT_10128600;
	if (((*(char *)((int)plr + iVar21 * 0x55ec + 0x139) == '\0') && (puVar19 = puVar27, puVar13 = puVar25, **(int **)(iVar15 + -0x7744) < 0xc)) && (puVar19 = puVar27, puVar13 = puVar25, **(int **)(iVar15 + -0x76b8) == 0)) {
		if (**(int **)(iVar15 + -0x76ac) < 0x161) {
			puVar19 = _DAT_101285fc;
			puVar13 = _DAT_10128600;
			if (**(int **)(iVar15 + -0x7678) == 0) {
				if ((**(int **)(iVar15 + -0x77bc) == 0) || (MouseX < 0x141)) {
					if (((**(int **)(iVar15 + -0x77c0) == 0) || (puVar19 = _DAT_101285fc, puVar13 = _DAT_10128600, MouseX < 0x141)) && (((**(int **)(iVar15 + -0x77c4) == 0 && (**(int **)(iVar15 + -0x77c8) == 0)) || (puVar19 = _DAT_101285fc, puVar13 = _DAT_10128600, 0x13f < MouseX)))) {
						if (**(char **)(iVar15 + -0x7794) == '\0') {
							if ((!bVar10) && (sVar2 = *(short *)(_DAT_1012f1b4 + (int)puVar25 * 0xe0 + (int)puVar27 * 2 + 0xe0), 0 < sVar2)) {
								_DAT_101285f8 = (int)sVar2 + -1;
								_DAT_10128600 = puVar25 + 1;
								_DAT_101285fc = puVar27;
							}
							if ((bVar10) && (sVar2 = *(short *)(_DAT_1012f1b4 + (int)puVar25 * 0xe0 + (int)puVar27 * 2 + 2), 0 < sVar2)) {
								_DAT_101285f8 = (int)sVar2 + -1;
								_DAT_101285fc = puVar27 + 1;
								_DAT_10128600 = puVar25;
							}
							sVar2 = *(short *)(_DAT_1012f1b4 + (int)puVar25 * 0xe0 + (int)puVar27 * 2);
							if (0 < sVar2) {
								_DAT_101285f8 = (int)sVar2 + -1;
								_DAT_101285fc = puVar27;
								_DAT_10128600 = puVar25;
							}
							sVar2 = *(short *)(_DAT_1012f1b4 + (int)puVar25 * 0xe0 + (int)puVar27 * 2 + 0xe2);
							if (0 < sVar2) {
								_DAT_101285f8 = (int)sVar2 + -1;
								_DAT_10128600 = puVar25 + 1;
								_DAT_101285fc = puVar27 + 1;
							}
							if (*(int *)(*(int *)(iVar15 + -0x7758) + _DAT_101285f8 * 0x10c + 0x54) == 0) {
								_DAT_101285f8 = -1;
							}
						} else {
							if (*(int *)(iVar15 + -0x4f84) != -1) {
								if (((!bVar10) && (sVar2 = *(short *)(_DAT_1012f1b4 + (int)puVar25 * 0xe0 + (int)puVar27 * 2 + 0x1c2), sVar2 != 0)) && ((puVar27[_DAT_1012f1bc + (int)puVar25 * 0x70 + 0xe1] & 0x40) != 0)) {
									if (sVar2 < 1) {
										iVar11 = -((int)sVar2 + 1);
									} else {
										iVar11 = (int)sVar2 + -1;
									}
									if (((iVar11 == *(int *)(iVar15 + -0x4f84)) && (*(int *)(iVar11 * 0xe8 + 0x10151ac8) >> 6 != 0)) && ((*(byte *)(*(int *)(iVar11 * 0xe8 + 0x10151b14) + 0x7a) & 4) != 0)) {
										_DAT_10128600 = puVar25 + 1;
										_DAT_101285fc = puVar27 + 2;
										_DAT_101285f8 = iVar11;
									}
								}
								if (((bVar10) && (sVar2 = *(short *)(_DAT_1012f1b4 + (int)puVar25 * 0xe0 + (int)puVar27 * 2 + 0xe4), sVar2 != 0)) && ((puVar27[_DAT_1012f1bc + (int)puVar25 * 0x70 + 0x72] & 0x40) != 0)) {
									if (sVar2 < 1) {
										iVar11 = -((int)sVar2 + 1);
									} else {
										iVar11 = (int)sVar2 + -1;
									}
									if (((iVar11 == *(int *)(iVar15 + -0x4f84)) && (*(int *)(iVar11 * 0xe8 + 0x10151ac8) >> 6 != 0)) && ((*(byte *)(*(int *)(iVar11 * 0xe8 + 0x10151b14) + 0x7a) & 4) != 0)) {
										_DAT_10128600 = puVar25 + 1;
										_DAT_101285fc = puVar27 + 2;
										_DAT_101285f8 = iVar11;
									}
								}
								iVar20 = (int)puVar25 * 0xe0;
								iVar11 = (int)puVar27 * 2;
								sVar2 = *(short *)(_DAT_1012f1b4 + iVar20 + iVar11 + 0x1c4);
								if ((sVar2 != 0) && ((puVar27[_DAT_1012f1bc + (int)puVar25 * 0x70 + 0xe2] & 0x40) != 0)) {
									if (sVar2 < 1) {
										iVar12 = -((int)sVar2 + 1);
									} else {
										iVar12 = (int)sVar2 + -1;
									}
									if (((iVar12 == *(int *)(iVar15 + -0x4f84)) && (*(int *)(iVar12 * 0xe8 + 0x10151ac8) >> 6 != 0)) && ((*(byte *)(*(int *)(iVar12 * 0xe8 + 0x10151b14) + 0x7a) & 4) != 0)) {
										_DAT_10128600 = puVar25 + 2;
										_DAT_101285fc = puVar27 + 2;
										_DAT_101285f8 = iVar12;
									}
								}
								if (((!bVar10) && (sVar2 = *(short *)(_DAT_1012f1b4 + iVar20 + iVar11 + 0xe0), sVar2 != 0)) && ((puVar27[_DAT_1012f1bc + (int)puVar25 * 0x70 + 0x70] & 0x40) != 0)) {
									if (sVar2 < 1) {
										iVar12 = -((int)sVar2 + 1);
									} else {
										iVar12 = (int)sVar2 + -1;
									}
									if (((iVar12 == *(int *)(iVar15 + -0x4f84)) && (*(int *)(iVar12 * 0xe8 + 0x10151ac8) >> 6 != 0)) && ((*(byte *)(*(int *)(iVar12 * 0xe8 + 0x10151b14) + 0x7a) & 2) != 0)) {
										_DAT_10128600 = puVar25 + 1;
										_DAT_101285f8 = iVar12;
										_DAT_101285fc = puVar27;
									}
								}
								if (((bVar10) && (sVar2 = *(short *)(_DAT_1012f1b4 + iVar20 + iVar11 + 2), sVar2 != 0)) && ((puVar27[_DAT_1012f1bc + (int)puVar25 * 0x70 + 1] & 0x40) != 0)) {
									if (sVar2 < 1) {
										iVar12 = -((int)sVar2 + 1);
									} else {
										iVar12 = (int)sVar2 + -1;
									}
									if (((iVar12 == *(int *)(iVar15 + -0x4f84)) && (*(int *)(iVar12 * 0xe8 + 0x10151ac8) >> 6 != 0)) && ((*(byte *)(*(int *)(iVar12 * 0xe8 + 0x10151b14) + 0x7a) & 2) != 0)) {
										_DAT_101285fc = puVar27 + 1;
										_DAT_101285f8 = iVar12;
										_DAT_10128600 = puVar25;
									}
								}
								sVar2 = *(short *)(_DAT_1012f1b4 + iVar20 + iVar11);
								if ((sVar2 != 0) && ((puVar27[_DAT_1012f1bc + (int)puVar25 * 0x70] & 0x40) != 0)) {
									if (sVar2 < 1) {
										iVar12 = -((int)sVar2 + 1);
									} else {
										iVar12 = (int)sVar2 + -1;
									}
									if (((iVar12 == *(int *)(iVar15 + -0x4f84)) && (*(int *)(iVar12 * 0xe8 + 0x10151ac8) >> 6 != 0)) && ((*(byte *)(*(int *)(iVar12 * 0xe8 + 0x10151b14) + 0x7a) & 1) != 0)) {
										_DAT_101285f8 = iVar12;
										_DAT_101285fc = puVar27;
										_DAT_10128600 = puVar25;
									}
								}
								sVar2 = *(short *)(_DAT_1012f1b4 + iVar20 + iVar11 + 0xe2);
								if ((sVar2 != 0) && ((puVar27[_DAT_1012f1bc + (int)puVar25 * 0x70 + 0x71] & 0x40) != 0)) {
									if (sVar2 < 1) {
										iVar11 = -((int)sVar2 + 1);
									} else {
										iVar11 = (int)sVar2 + -1;
									}
									if (((iVar11 == *(int *)(iVar15 + -0x4f84)) && (*(int *)(iVar11 * 0xe8 + 0x10151ac8) >> 6 != 0)) && ((*(byte *)(*(int *)(iVar11 * 0xe8 + 0x10151b14) + 0x7a) & 2) != 0)) {
										_DAT_10128600 = puVar25 + 1;
										_DAT_101285fc = puVar27 + 1;
										_DAT_101285f8 = iVar11;
									}
								}
								if ((_DAT_101285f8 != -1) && ((*(uint *)(_DAT_101285f8 * 0xe8 + 0x10151ad0) & 1) != 0)) {
									_DAT_101285f8 = -1;
									_DAT_101285fc = puVar27;
									_DAT_10128600 = puVar25;
								}
								if ((_DAT_101285f8 != -1) && ((*(uint *)(_DAT_101285f8 * 0xe8 + 0x10151ad0) & 0x20) != 0)) {
									_DAT_101285f8 = -1;
								}
								if (_DAT_101285f8 != -1) {
									return;
								}
							}
							if (((!bVar10) && (sVar2 = *(short *)(_DAT_1012f1b4 + (int)puVar25 * 0xe0 + (int)puVar27 * 2 + 0x1c2), sVar2 != 0)) && ((puVar27[_DAT_1012f1bc + (int)puVar25 * 0x70 + 0xe1] & 0x40) != 0)) {
								if (sVar2 < 1) {
									iVar11 = -((int)sVar2 + 1);
								} else {
									iVar11 = (int)sVar2 + -1;
								}
								if ((*(int *)(iVar11 * 0xe8 + 0x10151ac8) >> 6 != 0) && ((*(byte *)(*(int *)(iVar11 * 0xe8 + 0x10151b14) + 0x7a) & 4) != 0)) {
									_DAT_10128600 = puVar25 + 2;
									_DAT_101285fc = puVar27 + 1;
									_DAT_101285f8 = iVar11;
								}
							}
							if (((bVar10) && (sVar2 = *(short *)(_DAT_1012f1b4 + (int)puVar25 * 0xe0 + (int)puVar27 * 2 + 0xe4), sVar2 != 0)) && ((puVar27[_DAT_1012f1bc + (int)puVar25 * 0x70 + 0x72] & 0x40) != 0)) {
								if (sVar2 < 1) {
									iVar11 = -((int)sVar2 + 1);
								} else {
									iVar11 = (int)sVar2 + -1;
								}
								if ((*(int *)(iVar11 * 0xe8 + 0x10151ac8) >> 6 != 0) && ((*(byte *)(*(int *)(iVar11 * 0xe8 + 0x10151b14) + 0x7a) & 4) != 0)) {
									_DAT_10128600 = puVar25 + 1;
									_DAT_101285fc = puVar27 + 2;
									_DAT_101285f8 = iVar11;
								}
							}
							iVar20 = (int)puVar25 * 0xe0;
							iVar11 = (int)puVar27 * 2;
							sVar2 = *(short *)(_DAT_1012f1b4 + iVar20 + iVar11 + 0x1c4);
							if ((sVar2 != 0) && ((puVar27[_DAT_1012f1bc + (int)puVar25 * 0x70 + 0xe2] & 0x40) != 0)) {
								if (sVar2 < 1) {
									iVar12 = -((int)sVar2 + 1);
								} else {
									iVar12 = (int)sVar2 + -1;
								}
								if ((*(int *)(iVar12 * 0xe8 + 0x10151ac8) >> 6 != 0) && ((*(byte *)(*(int *)(iVar12 * 0xe8 + 0x10151b14) + 0x7a) & 4) != 0)) {
									_DAT_10128600 = puVar25 + 2;
									_DAT_101285fc = puVar27 + 2;
									_DAT_101285f8 = iVar12;
								}
							}
							if (((!bVar10) && (sVar2 = *(short *)(_DAT_1012f1b4 + iVar20 + iVar11 + 0xe0), sVar2 != 0)) && ((puVar27[_DAT_1012f1bc + (int)puVar25 * 0x70 + 0x70] & 0x40) != 0)) {
								if (sVar2 < 1) {
									iVar12 = -((int)sVar2 + 1);
								} else {
									iVar12 = (int)sVar2 + -1;
								}
								if ((*(int *)(iVar12 * 0xe8 + 0x10151ac8) >> 6 != 0) && ((*(byte *)(*(int *)(iVar12 * 0xe8 + 0x10151b14) + 0x7a) & 2) != 0)) {
									_DAT_10128600 = puVar25 + 1;
									_DAT_101285f8 = iVar12;
									_DAT_101285fc = puVar27;
								}
							}
							if (((bVar10) && (sVar2 = *(short *)(_DAT_1012f1b4 + iVar20 + iVar11 + 2), sVar2 != 0)) && ((puVar27[_DAT_1012f1bc + (int)puVar25 * 0x70 + 1] & 0x40) != 0)) {
								if (sVar2 < 1) {
									iVar12 = -((int)sVar2 + 1);
								} else {
									iVar12 = (int)sVar2 + -1;
								}
								if ((*(int *)(iVar12 * 0xe8 + 0x10151ac8) >> 6 != 0) && ((*(byte *)(*(int *)(iVar12 * 0xe8 + 0x10151b14) + 0x7a) & 2) != 0)) {
									_DAT_101285fc = puVar27 + 1;
									_DAT_101285f8 = iVar12;
									_DAT_10128600 = puVar25;
								}
							}
							sVar2 = *(short *)(_DAT_1012f1b4 + iVar20 + iVar11);
							if ((sVar2 != 0) && ((puVar27[_DAT_1012f1bc + (int)puVar25 * 0x70] & 0x40) != 0)) {
								if (sVar2 < 1) {
									iVar12 = -((int)sVar2 + 1);
								} else {
									iVar12 = (int)sVar2 + -1;
								}
								if ((*(int *)(iVar12 * 0xe8 + 0x10151ac8) >> 6 != 0) && ((*(byte *)(*(int *)(iVar12 * 0xe8 + 0x10151b14) + 0x7a) & 1) != 0)) {
									_DAT_101285f8 = iVar12;
									_DAT_101285fc = puVar27;
									_DAT_10128600 = puVar25;
								}
							}
							sVar2 = *(short *)(_DAT_1012f1b4 + iVar20 + iVar11 + 0xe2);
							if ((sVar2 != 0) && ((puVar27[_DAT_1012f1bc + (int)puVar25 * 0x70 + 0x71] & 0x40) != 0)) {
								if (sVar2 < 1) {
									iVar11 = -((int)sVar2 + 1);
								} else {
									iVar11 = (int)sVar2 + -1;
								}
								if ((*(int *)(iVar11 * 0xe8 + 0x10151ac8) >> 6 != 0) && ((*(byte *)(*(int *)(iVar11 * 0xe8 + 0x10151b14) + 0x7a) & 2) != 0)) {
									_DAT_10128600 = puVar25 + 1;
									_DAT_101285fc = puVar27 + 1;
									_DAT_101285f8 = iVar11;
								}
							}
							if ((_DAT_101285f8 != -1) && ((*(uint *)(_DAT_101285f8 * 0xe8 + 0x10151ad0) & 1) != 0)) {
								_DAT_101285f8 = -1;
								_DAT_101285fc = puVar27;
								_DAT_10128600 = puVar25;
							}
							if ((_DAT_101285f8 != -1) && ((*(uint *)(_DAT_101285f8 * 0xe8 + 0x10151ad0) & 0x20) != 0)) {
								_DAT_101285f8 = -1;
							}
						}
						if (_DAT_101285f8 == -1) {
							if ((!bVar10) && (uVar1 = puVar27[_DAT_1012f1b8 + (int)puVar25 * 0x70 + 0x70], uVar1 != '\0')) {
								if ((char)uVar1 < '\x01') {
									cVar17 = -(uVar1 + '\x01');
								} else {
									cVar17 = uVar1 + -1;
								}
								if (((int)cVar17 != iVar21) && (*(int *)((int)plr + (int)cVar17 * 0x55ec + 0x194) != 0)) {
									_DAT_10128600 = puVar25 + 1;
									DAT_101285f4 = cVar17;
									_DAT_101285fc = puVar27;
								}
							}
							if ((bVar10) && (uVar1 = puVar27[_DAT_1012f1b8 + (int)puVar25 * 0x70 + 1], uVar1 != '\0')) {
								if ((char)uVar1 < '\x01') {
									cVar17 = -(uVar1 + '\x01');
								} else {
									cVar17 = uVar1 + -1;
								}
								if (((int)cVar17 != iVar21) && (*(int *)((int)plr + (int)cVar17 * 0x55ec + 0x194) != 0)) {
									_DAT_101285fc = puVar27 + 1;
									DAT_101285f4 = cVar17;
									_DAT_10128600 = puVar25;
								}
							}
							iVar11 = (int)puVar25 * 0x70;
							uVar1 = puVar27[_DAT_1012f1b8 + iVar11];
							if (uVar1 != '\0') {
								if ((char)uVar1 < '\x01') {
									cVar17 = -(uVar1 + '\x01');
								} else {
									cVar17 = uVar1 + -1;
								}
								if ((int)cVar17 != iVar21) {
									DAT_101285f4 = cVar17;
									_DAT_101285fc = puVar27;
									_DAT_10128600 = puVar25;
								}
							}
							if ((puVar27[_DAT_1012f1bc + iVar11] & 4) != 0) {
								if (((puVar25 == (uchar *)plr[0].WorldX) && (puVar27 == (uchar *)plr[0].WorldY)) && (iVar21 != 0)) {
									DAT_101285f4 = '\0';
									_DAT_101285fc = puVar27;
									_DAT_10128600 = puVar25;
								}
								if (((puVar25 == plr[1]._pName._24_4_) && (puVar27 == plr[1]._pName._28_4_)) && (iVar21 != 1)) {
									DAT_101285f4 = '\x01';
									_DAT_101285fc = puVar27;
									_DAT_10128600 = puVar25;
								}
								if (((puVar25 == plr[2]._pAAnim[2]) && (puVar27 == plr[2]._pAAnim[3])) && (iVar21 != 2)) {
									DAT_101285f4 = '\x02';
									_DAT_101285fc = puVar27;
									_DAT_10128600 = puVar25;
								}
								if (((puVar25 == (uchar *)plr[3].InvBody[0]._iAnimFlag) && (puVar27 == plr[3].InvBody[0]._iAnimData)) && (iVar21 != 3)) {
									DAT_101285f4 = '\x03';
									_DAT_101285fc = puVar27;
									_DAT_10128600 = puVar25;
								}
							}
							if (**(int **)(iVar15 + -0x7744) == 8) {
								iVar20 = -1;
								do {
									puVar19 = puVar25 + iVar20;
									lVar29 = 3;
									pbVar22 = puVar27 + _DAT_1012f1bc + (int)puVar19 * 0x70 + -1;
									iVar12 = -1;
									do {
										if ((*pbVar22 & 4) != 0) {
											puVar13 = puVar27 + iVar12;
											if ((((uchar *)plr[0].WorldX == puVar19) && ((uchar *)plr[0].WorldY == puVar13)) && (iVar21 != 0)) {
												DAT_101285f4 = '\0';
												_DAT_101285fc = puVar13;
												_DAT_10128600 = puVar19;
											}
											if (((plr[1]._pName._24_4_ == puVar19) && (plr[1]._pName._28_4_ == puVar13)) && (iVar21 != 1)) {
												DAT_101285f4 = '\x01';
												_DAT_101285fc = puVar13;
												_DAT_10128600 = puVar19;
											}
											if (((plr[2]._pAAnim[2] == puVar19) && (plr[2]._pAAnim[3] == puVar13)) && (iVar21 != 2)) {
												DAT_101285f4 = '\x02';
												_DAT_101285fc = puVar13;
												_DAT_10128600 = puVar19;
											}
											if ((((uchar *)plr[3].InvBody[0]._iAnimFlag == puVar19) && (plr[3].InvBody[0]._iAnimData == puVar13)) && (iVar21 != 3)) {
												DAT_101285f4 = '\x03';
												_DAT_101285fc = puVar13;
												_DAT_10128600 = puVar19;
											}
										}
										pbVar22 = pbVar22 + 1;
										iVar12 = iVar12 + 1;
										lVar29 = lVar29 + -1;
									} while (lVar29 != 0);
									iVar20 = iVar20 + 1;
								} while (iVar20 < 2);
							}
							uVar1 = puVar27[_DAT_1012f1b8 + iVar11 + 0x71];
							if (uVar1 != '\0') {
								if ((char)uVar1 < '\x01') {
									cVar17 = -(uVar1 + '\x01');
								} else {
									cVar17 = uVar1 + -1;
								}
								if (((int)cVar17 != iVar21) && (*(int *)((int)plr + (int)cVar17 * 0x55ec + 0x194) != 0)) {
									_DAT_10128600 = puVar25 + 1;
									_DAT_101285fc = puVar27 + 1;
									DAT_101285f4 = cVar17;
								}
							}
						}
						if ((_DAT_101285f8 == -1) && (DAT_101285f4 == -1)) {
							if ((!bVar10) && (uVar1 = puVar27[*piVar23 + (int)puVar25 * 0x70 + 0x70], uVar1 != '\0')) {
								if ((char)uVar1 < '\x01') {
									cVar17 = -(uVar1 + '\x01');
								} else {
									cVar17 = uVar1 + -1;
								}
								if ('\x01' < *(char *)((int)cVar17 * 0x78 + 0x1017e414)) {
									_DAT_10128600 = puVar25 + 1;
									DAT_101285f7 = cVar17;
									_DAT_101285fc = puVar27;
								}
							}
							if ((bVar10) && (uVar1 = puVar27[*piVar23 + (int)puVar25 * 0x70 + 1], uVar1 != '\0')) {
								if ((char)uVar1 < '\x01') {
									cVar17 = -(uVar1 + '\x01');
								} else {
									cVar17 = uVar1 + -1;
								}
								if ('\x01' < *(char *)((int)cVar17 * 0x78 + 0x1017e414)) {
									_DAT_101285fc = puVar27 + 1;
									DAT_101285f7 = cVar17;
									_DAT_10128600 = puVar25;
								}
							}
							uVar1 = puVar27[*piVar23 + (int)puVar25 * 0x70];
							if (uVar1 != '\0') {
								if ((char)uVar1 < '\x01') {
									cVar17 = -(uVar1 + '\x01');
								} else {
									cVar17 = uVar1 + -1;
								}
								cVar14 = *(char *)((int)cVar17 * 0x78 + 0x1017e414);
								if ((cVar14 == '\x01') || (cVar14 == '\x03')) {
									DAT_101285f7 = cVar17;
									_DAT_101285fc = puVar27;
									_DAT_10128600 = puVar25;
								}
							}
							uVar1 = puVar27[*piVar23 + (int)puVar25 * 0x70 + 0x71];
							if (uVar1 != '\0') {
								if ((char)uVar1 < '\x01') {
									cVar17 = -(uVar1 + '\x01');
								} else {
									cVar17 = uVar1 + -1;
								}
								if ('\x01' < *(char *)((int)cVar17 * 0x78 + 0x1017e414)) {
									_DAT_10128600 = puVar25 + 1;
									_DAT_101285fc = puVar27 + 1;
									DAT_101285f7 = cVar17;
								}
							}
						}
						if (((DAT_101285f4 == -1) && (DAT_101285f7 == -1)) && (_DAT_101285f8 == -1)) {
							if (((!bVar10) && ('\0' < (char)puVar27[**(int **)(iVar15 + -0x768c) + (int)puVar25 * 0x70 + 0x70])) && (cVar17 = puVar27[**(int **)(iVar15 + -0x768c) + (int)puVar25 * 0x70 + 0x70] + -1, '\x01' < *(char *)((int)cVar17 * 0x170 + 0x1013d9b8))) {
								_DAT_10128600 = puVar25 + 1;
								DAT_101285f6 = cVar17;
								_DAT_101285fc = puVar27;
							}
							if (((bVar10) && ('\0' < (char)puVar27[**(int **)(iVar15 + -0x768c) + (int)puVar25 * 0x70 + 1])) && (cVar17 = puVar27[**(int **)(iVar15 + -0x768c) + (int)puVar25 * 0x70 + 1] + -1, '\x01' < *(char *)((int)cVar17 * 0x170 + 0x1013d9b8))) {
								_DAT_101285fc = puVar27 + 1;
								DAT_101285f6 = cVar17;
								_DAT_10128600 = puVar25;
							}
							if ('\0' < (char)puVar27[**(int **)(iVar15 + -0x768c) + (int)puVar25 * 0x70]) {
								cVar14 = puVar27[**(int **)(iVar15 + -0x768c) + (int)puVar25 * 0x70] + -1;
								cVar17 = *(char *)((int)cVar14 * 0x170 + 0x1013d9b8);
								if ((cVar17 == '\x01') || (cVar17 == '\x03')) {
									DAT_101285f6 = cVar14;
									_DAT_101285fc = puVar27;
									_DAT_10128600 = puVar25;
								}
							}
							if (('\0' < (char)puVar27[**(int **)(iVar15 + -0x768c) + (int)puVar25 * 0x70 + 0x71]) && (cVar17 = puVar27[**(int **)(iVar15 + -0x768c) + (int)puVar25 * 0x70 + 0x71] + -1, '\x01' < *(char *)((int)cVar17 * 0x170 + 0x1013d9b8))) {
								_DAT_10128600 = puVar25 + 1;
								_DAT_101285fc = puVar27 + 1;
								DAT_101285f6 = cVar17;
							}
							if (DAT_101285f6 == -1) {
								_DAT_101285fc = puVar27;
								_DAT_10128600 = puVar25;
								CheckTrigForce();
								CheckTown();
								CheckRportal();
							}
						}
						if (**(int **)(iVar15 + -0x7744) == 2) {
							DAT_101285f7 = -1;
							_DAT_101285f8 = -1;
							DAT_101285f6 = -1;
							_DAT_101285fc = puVar27;
							_DAT_10128600 = puVar25;
						}
						puVar19 = _DAT_101285fc;
						puVar13 = _DAT_10128600;
						if ((_DAT_101285f8 != -1) && (puVar19 = _DAT_101285fc, puVar13 = _DAT_10128600, (*(uint *)(_DAT_101285f8 * 0xe8 + 0x10151ad0) & 0x20) != 0)) {
							_DAT_101285f8 = -1;
							puVar19 = _DAT_101285fc;
							puVar13 = _DAT_10128600;
						}
					}
				} else {
					cVar17 = CheckInvHLight();
					**(char **)(iVar15 + -0x772c) = cVar17;
					puVar19 = _DAT_101285fc;
					puVar13 = _DAT_10128600;
				}
			}
		} else {
			CheckPanelInfo();
			puVar19 = _DAT_101285fc;
			puVar13 = _DAT_10128600;
		}
	}
	_DAT_10128600 = puVar13;
	_DAT_101285fc = puVar19;
	return;
}
