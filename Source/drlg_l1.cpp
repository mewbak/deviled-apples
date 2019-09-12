
void DRLG_PlaceDoor(int x, int y)

{
	byte bVar1;
	byte bVar2;
	byte *pbVar3;

	bVar1 = (&DAT_1013b370)[x * 0x28 + y];
	if ((bVar1 & 0x80) == 0) {
		pbVar3 = dungeon + x * 0x28 + y;
		bVar2 = *pbVar3;
		if ((bVar1 & 0x7f) == 1) {
			if ((y != 1) && (bVar2 == 2)) {
				*pbVar3 = 0x1a;
			}
			if ((y != 1) && (bVar2 == 7)) {
				*pbVar3 = 0x1f;
			}
			if ((y != 1) && (bVar2 == 0xe)) {
				*pbVar3 = 0x2a;
			}
			if ((y != 1) && (bVar2 == 4)) {
				*pbVar3 = 0x2b;
			}
			if ((x != 1) && (bVar2 == 1)) {
				*pbVar3 = 0x19;
			}
			if ((x != 1) && (bVar2 == 10)) {
				*pbVar3 = 0x28;
			}
			if ((x != 1) && (bVar2 == 6)) {
				*pbVar3 = 0x1e;
			}
		}
		if ((bVar1 & 0x7f) == 2) {
			if ((x != 1) && (bVar2 == 1)) {
				*pbVar3 = 0x19;
			}
			if ((x != 1) && (bVar2 == 6)) {
				*pbVar3 = 0x1e;
			}
			if ((x != 1) && (bVar2 == 10)) {
				*pbVar3 = 0x28;
			}
			if ((x != 1) && (bVar2 == 4)) {
				*pbVar3 = 0x29;
			}
			if ((y != 1) && (bVar2 == 2)) {
				*pbVar3 = 0x1a;
			}
			if ((y != 1) && (bVar2 == 0xe)) {
				*pbVar3 = 0x2a;
			}
			if ((y != 1) && (bVar2 == 7)) {
				*pbVar3 = 0x1f;
			}
		}
		if ((bVar1 & 0x7f) == 3) {
			if (((x != 1) && (y != 1)) && (bVar2 == 4)) {
				*pbVar3 = 0x1c;
			}
			if ((x != 1) && (bVar2 == 10)) {
				*pbVar3 = 0x28;
			}
			if ((y != 1) && (bVar2 == 0xe)) {
				*pbVar3 = 0x2a;
			}
			if ((y != 1) && (bVar2 == 2)) {
				*pbVar3 = 0x1a;
			}
			if ((x != 1) && (bVar2 == 1)) {
				*pbVar3 = 0x19;
			}
			if ((y != 1) && (bVar2 == 7)) {
				*pbVar3 = 0x1f;
			}
			if ((x != 1) && (bVar2 == 6)) {
				*pbVar3 = 0x1e;
			}
		}
	}
	(&DAT_1013b370)[x * 0x28 + y] = 0x80;
	return;
}

void DRLG_L1Shadows(void)

{
	char cVar1;
	char cVar2;
	char cVar3;
	byte bVar4;
	char cVar5;
	char cVar6;
	char cVar7;
	char cVar8;
	char *pcVar9;
	byte *pbVar10;
	bool bVar11;
	byte *pbVar12;
	char *pcVar13;
	int iVar14;
	byte *pbVar15;
	int iVar16;
	byte bVar17;
	char *pcVar18;
	byte *pbVar19;
	byte *pbVar20;
	char *pcVar21;
	longlong lVar22;

	iVar16 = 1;
	pbVar12 = dungeon + 1;
	pcVar13 = (char *)0x1013b371;
	pbVar19 = pbVar12;
	pcVar18 = pcVar13;
	do {
		iVar14 = 1;
		pbVar10 = pbVar19;
		pbVar15 = dungeon;
		pcVar9 = pcVar18;
		do {
			pbVar15 = pbVar15 + 0x28;
			lVar22 = 0x25;
			cVar5 = (&DAT_100f6f43)[(uint)pbVar10[0x28]];
			pbVar20 = pbVar15 + iVar16;
			cVar6 = (&DAT_100f6f43)[(uint)*pbVar10];
			cVar7 = (&DAT_100f6f43)[(uint)pbVar10[0x27]];
			cVar8 = (&DAT_100f6f43)[(uint)pbVar10[-1]];
			cVar1 = pcVar9[-1];
			cVar2 = pcVar9[0x27];
			cVar3 = *pcVar9;
			pcVar21 = &DAT_100f6e40;
			do {
				if (cVar5 == *pcVar21) {
					bVar11 = true;
					if ((pcVar21[1] != '\0') && (cVar8 != pcVar21[1])) {
						bVar11 = false;
					}
					if ((pcVar21[2] != '\0') && (cVar7 != pcVar21[2])) {
						bVar11 = false;
					}
					if ((pcVar21[3] != '\0') && (cVar6 != pcVar21[3])) {
						bVar11 = false;
					}
					if (bVar11) {
						if ((pcVar21[4] != 0) && (cVar1 == '\0')) {
							pbVar20[-0x29] = pcVar21[4];
						}
						if ((pcVar21[5] != 0) && (cVar2 == '\0')) {
							pbVar20[-1] = pcVar21[5];
						}
						if ((pcVar21[6] != 0) && (cVar3 == '\0')) {
							pbVar20[-0x28] = pcVar21[6];
						}
					}
				}
				pcVar21 = pcVar21 + 7;
				lVar22 = lVar22 + -1;
			} while (lVar22 != 0);
			iVar14 = iVar14 + 1;
			pbVar10 = pbVar10 + 0x28;
			pcVar9 = pcVar9 + 0x28;
		} while (iVar14 < 0x28);
		iVar16 = iVar16 + 1;
		pcVar18 = pcVar18 + 1;
		pbVar19 = pbVar19 + 1;
	} while (iVar16 < 0x28);
	iVar16 = 1;
	do {
		lVar22 = 0x27;
		pbVar19 = pbVar12;
		pcVar18 = pcVar13;
		do {
			pbVar15 = pbVar19 + 0x28;
			if ((*pbVar19 == 0x8b) && (*pcVar18 == '\0')) {
				bVar4 = *pbVar15;
				bVar17 = 0x8b;
				if (bVar4 == 0x1d) {
					bVar17 = 0x8d;
				}
				if (bVar4 == 0x20) {
					bVar17 = 0x8d;
				}
				if (bVar4 == 0x23) {
					bVar17 = 0x8d;
				}
				if (bVar4 == 0x25) {
					bVar17 = 0x8d;
				}
				if (bVar4 == 0x26) {
					bVar17 = 0x8d;
				}
				if (bVar4 == 0x27) {
					bVar17 = 0x8d;
				}
				*pbVar19 = bVar17;
			}
			if ((*pbVar19 == 0x95) && (*pcVar18 == '\0')) {
				bVar4 = *pbVar15;
				bVar17 = 0x95;
				if (bVar4 == 0x1d) {
					bVar17 = 0x99;
				}
				if (bVar4 == 0x20) {
					bVar17 = 0x99;
				}
				if (bVar4 == 0x23) {
					bVar17 = 0x99;
				}
				if (bVar4 == 0x25) {
					bVar17 = 0x99;
				}
				if (bVar4 == 0x26) {
					bVar17 = 0x99;
				}
				if (bVar4 == 0x27) {
					bVar17 = 0x99;
				}
				*pbVar19 = bVar17;
			}
			if ((*pbVar19 == 0x94) && (*pcVar18 == '\0')) {
				bVar4 = *pbVar15;
				bVar17 = 0x94;
				if (bVar4 == 0x1d) {
					bVar17 = 0x9a;
				}
				if (bVar4 == 0x20) {
					bVar17 = 0x9a;
				}
				if (bVar4 == 0x23) {
					bVar17 = 0x9a;
				}
				if (bVar4 == 0x25) {
					bVar17 = 0x9a;
				}
				if (bVar4 == 0x26) {
					bVar17 = 0x9a;
				}
				if (bVar4 == 0x27) {
					bVar17 = 0x9a;
				}
				*pbVar19 = bVar17;
			}
			lVar22 = lVar22 + -1;
			pbVar19 = pbVar15;
			pcVar18 = pcVar18 + 0x28;
		} while (lVar22 != 0);
		iVar16 = iVar16 + 1;
		pcVar13 = pcVar13 + 1;
		pbVar12 = pbVar12 + 1;
	} while (iVar16 < 0x28);
	return;
}

int DRLG_PlaceMiniSet(BYTE *miniset, int tmin, int tmax, int cx, int cy, BOOL setview, int noquad, int ldir)

{
	byte bVar1;
	byte bVar2;
	undefined uVar3;
	int *piVar4;
	bool bVar5;
	longlong lVar6;
	ulonglong uVar7;
	int iVar8;
	byte *pbVar9;
	undefined *puVar11;
	longlong lVar10;
	int iVar12;
	longlong lVar13;
	int iVar14;
	int iVar15;
	longlong lVar16;
	int unaff_r29;
	int x1;
	ulonglong uVar17;
	BOOL BStack0000002c;
	int iStack00000034;

	uVar7 = SEXT48((int)miniset);
	lVar6 = 0x100f8fd0;
	bVar1 = *miniset;
	bVar2 = miniset[1];
	if ((longlong)tmax - (longlong)tmin == 0) {
		tmin = 1;
		BStack0000002c = setview;
		iStack00000034 = ldir;
	} else {
		BStack0000002c = setview;
		iStack00000034 = ldir;
		iVar8 = random('\0', (int)((longlong)tmax - (longlong)tmin));
		tmin = tmin + iVar8;
	}
	lVar16 = (longlong)(int)(uint)bVar2 * (longlong)(int)(uint)bVar1 + 2;
	iVar8 = 0;
	do {
		iVar15 = (int)lVar6;
		if (tmin <= iVar8) {
			if ((uVar7 & 0xffffffff) == (lVar6 - 0x1e87U & 0xffffffff)) {
				uVar3 = **(undefined **)(iVar15 + -0x7518);
				**(undefined **)(iVar15 + -0x7518) = 0;
				DRLG_MRectTrans(x1, unaff_r29 + 2, x1 + 5, unaff_r29 + 4);
				**(undefined **)(iVar15 + -0x7518) = uVar3;
				*(int *)(*(int *)(iVar15 + -0x7604) + 0x13c) = x1 * 2 + 0x15;
				*(int *)(*(int *)(iVar15 + -0x7604) + 0x140) = unaff_r29 * 2 + 0x16;
			}
			if (BStack0000002c == 1) {
				piVar4 = *(int **)(iVar15 + -0x77b4);
				**(int **)(iVar15 + -0x77b0) = x1 * 2 + 0x13;
				*piVar4 = unaff_r29 * 2 + 0x14;
			}
			if (iStack00000034 == 0) {
				piVar4 = *(int **)(iVar15 + -0x7520);
				**(int **)(iVar15 + -0x751c) = x1 * 2 + 0x13;
				*piVar4 = unaff_r29 * 2 + 0x14;
			}
			if ((x1 < cx) && (unaff_r29 < cy)) {
				iVar8 = 0;
			} else {
				if ((cx < x1) && (unaff_r29 < cy)) {
					iVar8 = 1;
				} else {
					if ((x1 < cx) && (cy < unaff_r29)) {
						iVar8 = 2;
					} else {
						iVar8 = 3;
					}
				}
			}
			return iVar8;
		}
		x1 = random('\0', 0x28 - (uint)bVar1);
		unaff_r29 = random('\0', 0x28 - (uint)bVar2);
		bVar5 = false;
		iVar15 = 0;
		while (!bVar5) {
			bVar5 = true;
			if (((cx != -1) && ((int)(cx - (uint)bVar1) <= x1)) && (x1 <= cx + 0xc)) {
				bVar5 = false;
				x1 = x1 + 1;
			}
			if (((cy != -1) && ((int)(cy - (uint)bVar2) <= unaff_r29)) && (unaff_r29 <= cy + 0xc)) {
				bVar5 = false;
				unaff_r29 = unaff_r29 + 1;
			}
			if (noquad == 2) {
				if ((x1 < cx) && (cy < unaff_r29)) {
					bVar5 = false;
				}
			} else {
				if (noquad < 2) {
					if (noquad == 0) {
						if ((x1 < cx) && (unaff_r29 < cy)) {
							bVar5 = false;
						}
					} else {
						if (((-1 < noquad) && (cx < x1)) && (unaff_r29 < cy)) {
							bVar5 = false;
						}
					}
				} else {
					if (((noquad < 4) && (cx < x1)) && (cy < unaff_r29)) {
						bVar5 = false;
					}
				}
			}
			pbVar9 = dungeon + unaff_r29;
			puVar11 = &DAT_1013b370 + unaff_r29;
			lVar10 = uVar7 + 2;
			iVar14 = 0;
			while ((iVar14 < (int)(uint)bVar2 && (bVar5))) {
				iVar12 = 0;
				while ((iVar12 < (int)(uint)bVar1 && (bVar5))) {
					if ((*(byte *)lVar10 != 0) && (*(byte *)lVar10 != pbVar9[(x1 + iVar12) * 0x28])) {
						bVar5 = false;
					}
					if (puVar11[(x1 + iVar12) * 0x28] != '\0') {
						bVar5 = false;
					}
					lVar10 = lVar10 + 1;
					iVar12 = iVar12 + 1;
				}
				pbVar9 = pbVar9 + 1;
				puVar11 = puVar11 + 1;
				iVar14 = iVar14 + 1;
			}
			if (!bVar5) {
				x1 = x1 + 1;
				if (x1 == 0x28 - (uint)bVar1) {
					unaff_r29 = unaff_r29 + 1;
					x1 = 0;
					if (unaff_r29 == 0x28 - (uint)bVar2) {
						unaff_r29 = 0;
					}
				}
				iVar15 = iVar15 + 1;
				if (4000 < iVar15) {
					return -1;
				}
			}
		}
		pbVar9 = dungeon + unaff_r29;
		iVar15 = 0;
		lVar10 = lVar16;
		while (iVar15 < (int)(uint)bVar2) {
			lVar13 = uVar7 + lVar10;
			iVar14 = 0;
			uVar17 = (ulonglong)bVar1;
			if (bVar1 != 0) {
				do {
					if (*(byte *)lVar13 != 0) {
						pbVar9[(x1 + iVar14) * 0x28] = *(byte *)lVar13;
					}
					lVar10 = lVar10 + 1;
					lVar13 = lVar13 + 1;
					iVar14 = iVar14 + 1;
					uVar17 = uVar17 - 1;
				} while (uVar17 != 0);
			}
			pbVar9 = pbVar9 + 1;
			iVar15 = iVar15 + 1;
		}
		iVar8 = iVar8 + 1;
	} while (true);
}

void DRLG_L1Floor(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	byte *pbVar4;
	char *pcVar5;
	byte *pbVar6;
	char *pcVar7;

	pcVar5 = &DAT_1013b370;
	iVar2 = 0;
	pbVar4 = dungeon;
	do {
		iVar3 = 0;
		pcVar7 = pcVar5;
		pbVar6 = pbVar4;
		do {
			if ((*pcVar7 == '\0') && (*pbVar6 == 0xd)) {
				iVar1 = random('\0', 3);
				if (iVar1 == 1) {
					*pbVar6 = 0xa2;
				}
				if (iVar1 == 2) {
					*pbVar6 = 0xa3;
				}
			}
			iVar3 = iVar3 + 1;
			pbVar6 = pbVar6 + 0x28;
			pcVar7 = pcVar7 + 0x28;
		} while (iVar3 < 0x28);
		iVar2 = iVar2 + 1;
		pbVar4 = pbVar4 + 1;
		pcVar5 = pcVar5 + 1;
	} while (iVar2 < 0x28);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_L1Pass3(void)

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
	sVar6 = CONCAT11(*(undefined *)(iVar13 + 0xa9), *(undefined *)(iVar13 + 0xa8)) + 1;
	sVar8 = CONCAT11(*(undefined *)(iVar13 + 0xab), *(undefined *)(iVar13 + 0xaa)) + 1;
	sVar12 = CONCAT11(*(undefined *)(iVar13 + 0xad), *(undefined *)(iVar13 + 0xac)) + 1;
	iVar14 = 0;
	sVar2 = CONCAT11(*(undefined *)(iVar13 + 0xaf), *(undefined *)(iVar13 + 0xae)) + 1;
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

void DRLG_LoadL1SP(void)

{
	int iVar1;
	BOOL BVar2;

	iVar1 = 0x100f8fd0;
	_DAT_1013b358 = 0;
	BVar2 = QuestStatus(6);
	if (BVar2 != 0) {
		_DAT_1013b35c = LoadFileInMem(*(char **)(iVar1 + -0x63b0), (DWORD *)0x0);
		_DAT_1013b358 = 1;
	}
	BVar2 = QuestStatus(0xc);
	if ((BVar2 != 0) && (**(char **)(iVar1 + -0x77f0) == '\x01')) {
		_DAT_1013b35c = LoadFileInMem(*(char **)(iVar1 + -0x63b4), (DWORD *)0x0);
		_DAT_1013b358 = 1;
	}
	BVar2 = QuestStatus(7);
	if (BVar2 != 0) {
		_DAT_1013b35c = LoadFileInMem(*(char **)(iVar1 + -0x63b8), (DWORD *)0x0);
		_DAT_1013b358 = 1;
	}
	return;
}

void DRLG_FreeL1SP(void)

{
	MemFreeDbg((int **)&DAT_1013b35c);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_Init_Globals(void)

{
	undefined uVar1;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	ZeroMemory((char)_DAT_1012f1bc, 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffcb, in_stack_ffffffcf,
	    local_2c);
	ZeroMemory((char)**(undefined4 **)(local_2c + -0x7680), 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	ZeroMemory((char)**(undefined4 **)(local_2c + -0x767c), 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	ZeroMemory((char)**(undefined4 **)(local_2c + -0x7630), 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	ZeroMemory((char)**(undefined4 **)(local_2c + -0x7684), 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	ZeroMemory((char)**(undefined4 **)(local_2c + -0x768c), 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	ZeroMemory((char)**(undefined4 **)(local_2c + -0x7594), 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	ZeroMemory((char)**(undefined4 **)(local_2c + -0x7598), 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	if (**(int **)(local_2c + -0x752c) == 0) {
		if (**(int **)(local_2c + -0x776c) == 0) {
			uVar1 = 0xf;
		} else {
			uVar1 = 3;
		}
	} else {
		uVar1 = 0;
	}
	FillMemory((char)**(undefined4 **)(local_2c + -0x758c), 0, uVar1, in_r6, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_InitL1Vals(void)

{
	short sVar1;
	undefined uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	longlong lVar7;

	iVar6 = 0;
	iVar5 = 0;
	do {
		iVar3 = 0;
		lVar7 = 0x70;
		iVar4 = 0;
		do {
			sVar1 = *(short *)(iVar5 + _DAT_1012f1d4 + iVar3);
			if (sVar1 == 0xc) {
				uVar2 = 1;
			LAB_1002875c:
				*(undefined *)(iVar6 + _DAT_1012f1a0 + iVar4) = uVar2;
			} else {
				if (sVar1 == 0xb) {
					uVar2 = 2;
					goto LAB_1002875c;
				}
				if (sVar1 == 0x47) {
					uVar2 = 1;
					goto LAB_1002875c;
				}
				if (sVar1 == 0x103) {
					uVar2 = 5;
					goto LAB_1002875c;
				}
				if (sVar1 == 0xf9) {
					uVar2 = 2;
					goto LAB_1002875c;
				}
				if (sVar1 == 0x145) {
					uVar2 = 2;
					goto LAB_1002875c;
				}
				if (sVar1 == 0x141) {
					uVar2 = 1;
					goto LAB_1002875c;
				}
				if (sVar1 == 0xff) {
					uVar2 = 4;
					goto LAB_1002875c;
				}
				if (sVar1 == 0xd3) {
					uVar2 = 1;
					goto LAB_1002875c;
				}
				if (sVar1 == 0x158) {
					uVar2 = 2;
					goto LAB_1002875c;
				}
				if (sVar1 == 0x155) {
					uVar2 = 1;
					goto LAB_1002875c;
				}
				if (sVar1 == 0x14b) {
					uVar2 = 2;
					goto LAB_1002875c;
				}
				if (sVar1 == 0x1a2) {
					uVar2 = 1;
					goto LAB_1002875c;
				}
				if (sVar1 == 0x1a5) {
					uVar2 = 2;
					goto LAB_1002875c;
				}
			}
			iVar3 = iVar3 + 0xe0;
			iVar4 = iVar4 + 0x70;
			lVar7 = lVar7 + -1;
		} while (lVar7 != 0);
		iVar6 = iVar6 + 1;
		iVar5 = iVar5 + 2;
		if (0x6f < iVar6) {
			return;
		}
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void LoadL1Dungeon(char *sFileName, int vx, int vy)

{
	byte bVar1;
	byte bVar2;
	int *piVar3;
	int iVar4;
	char cVar5;
	undefined uVar7;
	char *pcVar6;
	undefined uVar9;
	byte *pbVar8;
	undefined uVar11;
	char *pcVar10;
	undefined uVar13;
	byte *pbVar12;
	undefined uVar15;
	char *pcVar14;
	undefined in_r9;
	byte *pbVar16;
	undefined in_r10;
	int iVar17;
	int iVar18;
	longlong lVar19;
	ulonglong uVar20;
	undefined in_stack_ffffffab;
	BYTE *local_18;

	uVar9 = (undefined)vy;
	iVar4 = 0x100f8fd0;
	uVar15 = 0x10;
	uVar13 = 0x28;
	_DAT_1012f32c = 0x10;
	uVar11 = 0x24;
	_DAT_1012f328 = 0x10;
	_DAT_1012f324 = 0x60;
	_DAT_1012f320 = 0x60;
	DRLG_InitTrans();
	uVar7 = 0;
	local_18 = LoadFileInMem(sFileName, (DWORD *)0x0);
	cVar5 = LockMemFile(ZEXT48(local_18), uVar7, uVar9, uVar11, uVar13, uVar15, in_r9, in_r10, in_stack_ffffffab);
	pcVar14 = *(char **)(iVar4 + -0x77cc);
	iVar18 = 0;
	pbVar16 = *(byte **)(iVar4 + -0x7514);
	pcVar10 = pcVar14;
	pbVar12 = pbVar16;
	do {
		lVar19 = 5;
		iVar17 = 0;
		pcVar6 = pcVar10;
		pbVar8 = pbVar12;
		do {
			*pcVar6 = '\x16';
			*pbVar8 = 0;
			pcVar6[0x28] = '\x16';
			pbVar8[0x28] = 0;
			pcVar6[0x50] = '\x16';
			pbVar8[0x50] = 0;
			pcVar6[0x78] = '\x16';
			pbVar8[0x78] = 0;
			pcVar6[0xa0] = '\x16';
			pbVar8[0xa0] = 0;
			pcVar6[200] = '\x16';
			pbVar8[200] = 0;
			pcVar6[0xf0] = '\x16';
			pbVar8[0xf0] = 0;
			pcVar6[0x118] = '\x16';
			pcVar6 = pcVar6 + 0x140;
			pbVar8[0x118] = 0;
			pbVar8 = pbVar8 + 0x140;
			lVar19 = lVar19 + -1;
		} while (lVar19 != 0);
		iVar18 = iVar18 + 1;
		pbVar12 = pbVar12 + 1;
		pcVar10 = pcVar10 + 1;
	} while (iVar18 < 0x28);
	bVar1 = *(byte *)(int)cVar5;
	lVar19 = (longlong)cVar5 + 4;
	bVar2 = *(byte *)((int)cVar5 + 2);
	while (iVar17 < (int)(uint)bVar2) {
		uVar20 = (ulonglong)bVar1;
		pcVar10 = pcVar14;
		pbVar12 = pbVar16;
		if (bVar1 != 0) {
			do {
				if (*(char *)lVar19 == '\0') {
					*pcVar10 = '\r';
				} else {
					*pcVar10 = *(char *)lVar19;
					*pbVar12 = *pbVar12 | 0x80;
				}
				lVar19 = lVar19 + 2;
				pcVar10 = pcVar10 + 0x28;
				pbVar12 = pbVar12 + 0x28;
				uVar20 = uVar20 - 1;
			} while (uVar20 != 0);
		}
		pcVar14 = pcVar14 + 1;
		pbVar16 = pbVar16 + 1;
		iVar17 = iVar17 + 1;
	}
	DRLG_L1Floor();
	piVar3 = *(int **)(iVar4 + -0x77b4);
	**(int **)(iVar4 + -0x77b0) = vx;
	*piVar3 = vy;
	DRLG_L1Pass3();
	DRLG_Init_Globals();
	DRLG_InitL1Vals();
	SetMapMonsters(local_18, 0, 0);
	SetMapObjects(local_18, 0, 0);
	UnlockMemFile((char)local_18);
	MemFreeDbg((int **)&local_18);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void LoadPreL1Dungeon(char *sFileName, int vx, int vy)

{
	byte bVar1;
	byte bVar2;
	int iVar3;
	char cVar4;
	undefined uVar6;
	char *pcVar5;
	undefined uVar8;
	byte *pbVar7;
	undefined uVar10;
	char *pcVar9;
	undefined uVar12;
	byte *pbVar11;
	undefined in_r8;
	byte *pbVar13;
	undefined in_r9;
	int iVar14;
	undefined in_r10;
	int iVar15;
	char *pcVar16;
	longlong lVar17;
	ulonglong uVar18;
	int iStack0000001c;
	int iStack00000020;
	undefined in_stack_ffffff9b;
	int *local_18[6];

	iVar3 = 0x100f8fd0;
	uVar12 = 0x10;
	uVar8 = 0x20;
	_DAT_1012f32c = 0x10;
	uVar10 = 0x24;
	_DAT_1012f328 = 0x10;
	uVar6 = 0;
	_DAT_1012f324 = 0x60;
	_DAT_1012f320 = 0x60;
	iStack0000001c = vx;
	iStack00000020 = vy;
	local_18[0] = (int *)LoadFileInMem(sFileName, (DWORD *)0x0);
	cVar4 = LockMemFile(ZEXT48(local_18[0]), uVar6, uVar8, uVar10, uVar12, in_r8, in_r9, in_r10, in_stack_ffffff9b);
	pcVar16 = *(char **)(iVar3 + -0x77cc);
	iVar15 = 0;
	pbVar13 = *(byte **)(iVar3 + -0x7514);
	pcVar9 = pcVar16;
	pbVar11 = pbVar13;
	do {
		lVar17 = 5;
		iVar14 = 0;
		pcVar5 = pcVar9;
		pbVar7 = pbVar11;
		do {
			*pcVar5 = '\x16';
			*pbVar7 = 0;
			pcVar5[0x28] = '\x16';
			pbVar7[0x28] = 0;
			pcVar5[0x50] = '\x16';
			pbVar7[0x50] = 0;
			pcVar5[0x78] = '\x16';
			pbVar7[0x78] = 0;
			pcVar5[0xa0] = '\x16';
			pbVar7[0xa0] = 0;
			pcVar5[200] = '\x16';
			pbVar7[200] = 0;
			pcVar5[0xf0] = '\x16';
			pbVar7[0xf0] = 0;
			pcVar5[0x118] = '\x16';
			pcVar5 = pcVar5 + 0x140;
			pbVar7[0x118] = 0;
			pbVar7 = pbVar7 + 0x140;
			lVar17 = lVar17 + -1;
		} while (lVar17 != 0);
		iVar15 = iVar15 + 1;
		pbVar11 = pbVar11 + 1;
		pcVar9 = pcVar9 + 1;
	} while (iVar15 < 0x28);
	bVar1 = *(byte *)(int)cVar4;
	bVar2 = *(byte *)((int)cVar4 + 2);
	lVar17 = (longlong)cVar4 + 4;
	pcVar9 = pcVar16;
	while (iVar14 < (int)(uint)bVar2) {
		uVar18 = (ulonglong)bVar1;
		pcVar5 = pcVar9;
		pbVar11 = pbVar13;
		if (bVar1 != 0) {
			do {
				if (*(char *)lVar17 == '\0') {
					*pcVar5 = '\r';
				} else {
					*pcVar5 = *(char *)lVar17;
					*pbVar11 = *pbVar11 | 0x80;
				}
				lVar17 = lVar17 + 2;
				pcVar5 = pcVar5 + 0x28;
				pbVar11 = pbVar11 + 0x28;
				uVar18 = uVar18 - 1;
			} while (uVar18 != 0);
		}
		pcVar9 = pcVar9 + 1;
		pbVar13 = pbVar13 + 1;
		iVar14 = iVar14 + 1;
	}
	DRLG_L1Floor();
	pcVar9 = *(char **)(iVar3 + -0x7540);
	lVar17 = 0x14;
	do {
		*pcVar9 = *pcVar16;
		pcVar9[0x28] = pcVar16[0x28];
		pcVar9[0x50] = pcVar16[0x50];
		pcVar9[0x78] = pcVar16[0x78];
		pcVar9[0xa0] = pcVar16[0xa0];
		pcVar9[200] = pcVar16[200];
		pcVar9[0xf0] = pcVar16[0xf0];
		pcVar9[0x118] = pcVar16[0x118];
		pcVar9[0x140] = pcVar16[0x140];
		pcVar9[0x168] = pcVar16[0x168];
		pcVar9[400] = pcVar16[400];
		pcVar9[0x1b8] = pcVar16[0x1b8];
		pcVar9[0x1e0] = pcVar16[0x1e0];
		pcVar9[0x208] = pcVar16[0x208];
		pcVar9[0x230] = pcVar16[0x230];
		pcVar9[600] = pcVar16[600];
		pcVar9[0x280] = pcVar16[0x280];
		pcVar9[0x2a8] = pcVar16[0x2a8];
		pcVar9[0x2d0] = pcVar16[0x2d0];
		pcVar9[0x2f8] = pcVar16[0x2f8];
		pcVar9[800] = pcVar16[800];
		pcVar9[0x348] = pcVar16[0x348];
		pcVar9[0x370] = pcVar16[0x370];
		pcVar9[0x398] = pcVar16[0x398];
		pcVar9[0x3c0] = pcVar16[0x3c0];
		pcVar9[1000] = pcVar16[1000];
		pcVar9[0x410] = pcVar16[0x410];
		pcVar9[0x438] = pcVar16[0x438];
		pcVar9[0x460] = pcVar16[0x460];
		pcVar9[0x488] = pcVar16[0x488];
		pcVar9[0x4b0] = pcVar16[0x4b0];
		pcVar9[0x4d8] = pcVar16[0x4d8];
		pcVar9[0x500] = pcVar16[0x500];
		pcVar9[0x528] = pcVar16[0x528];
		pcVar9[0x550] = pcVar16[0x550];
		pcVar9[0x578] = pcVar16[0x578];
		pcVar9[0x5a0] = pcVar16[0x5a0];
		pcVar9[0x5c8] = pcVar16[0x5c8];
		pcVar9[0x5f0] = pcVar16[0x5f0];
		pcVar9[0x618] = pcVar16[0x618];
		pcVar9[1] = pcVar16[1];
		pcVar9[0x29] = pcVar16[0x29];
		pcVar9[0x51] = pcVar16[0x51];
		pcVar9[0x79] = pcVar16[0x79];
		pcVar9[0xa1] = pcVar16[0xa1];
		pcVar9[0xc9] = pcVar16[0xc9];
		pcVar9[0xf1] = pcVar16[0xf1];
		pcVar9[0x119] = pcVar16[0x119];
		pcVar9[0x141] = pcVar16[0x141];
		pcVar9[0x169] = pcVar16[0x169];
		pcVar9[0x191] = pcVar16[0x191];
		pcVar9[0x1b9] = pcVar16[0x1b9];
		pcVar9[0x1e1] = pcVar16[0x1e1];
		pcVar9[0x209] = pcVar16[0x209];
		pcVar9[0x231] = pcVar16[0x231];
		pcVar9[0x259] = pcVar16[0x259];
		pcVar9[0x281] = pcVar16[0x281];
		pcVar9[0x2a9] = pcVar16[0x2a9];
		pcVar9[0x2d1] = pcVar16[0x2d1];
		pcVar9[0x2f9] = pcVar16[0x2f9];
		pcVar9[0x321] = pcVar16[0x321];
		pcVar9[0x349] = pcVar16[0x349];
		pcVar9[0x371] = pcVar16[0x371];
		pcVar9[0x399] = pcVar16[0x399];
		pcVar9[0x3c1] = pcVar16[0x3c1];
		pcVar9[0x3e9] = pcVar16[0x3e9];
		pcVar9[0x411] = pcVar16[0x411];
		pcVar9[0x439] = pcVar16[0x439];
		pcVar9[0x461] = pcVar16[0x461];
		pcVar9[0x489] = pcVar16[0x489];
		pcVar9[0x4b1] = pcVar16[0x4b1];
		pcVar9[0x4d9] = pcVar16[0x4d9];
		pcVar9[0x501] = pcVar16[0x501];
		pcVar9[0x529] = pcVar16[0x529];
		pcVar9[0x551] = pcVar16[0x551];
		pcVar9[0x579] = pcVar16[0x579];
		pcVar9[0x5a1] = pcVar16[0x5a1];
		pcVar9[0x5c9] = pcVar16[0x5c9];
		pcVar9[0x5f1] = pcVar16[0x5f1];
		pcVar5 = pcVar16 + 0x619;
		pcVar16 = pcVar16 + 2;
		pcVar9[0x619] = *pcVar5;
		pcVar9 = pcVar9 + 2;
		lVar17 = lVar17 + -1;
	} while (lVar17 != 0);
	UnlockMemFile((char)local_18[0]);
	MemFreeDbg(local_18);
	return;
}

void InitL5Dungeon(void)

{
	byte *pbVar1;
	undefined *puVar2;
	byte *pbVar3;
	undefined *puVar4;
	int iVar5;
	longlong lVar6;

	pbVar3 = dungeon;
	iVar5 = 0;
	puVar4 = &DAT_1013b370;
	do {
		lVar6 = 5;
		pbVar1 = pbVar3;
		puVar2 = puVar4;
		do {
			*pbVar1 = 0;
			*puVar2 = 0;
			pbVar1[0x28] = 0;
			puVar2[0x28] = 0;
			pbVar1[0x50] = 0;
			puVar2[0x50] = 0;
			pbVar1[0x78] = 0;
			puVar2[0x78] = 0;
			pbVar1[0xa0] = 0;
			puVar2[0xa0] = 0;
			pbVar1[200] = 0;
			puVar2[200] = 0;
			pbVar1[0xf0] = 0;
			puVar2[0xf0] = 0;
			pbVar1[0x118] = 0;
			pbVar1 = pbVar1 + 0x140;
			puVar2[0x118] = 0;
			puVar2 = puVar2 + 0x140;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
		iVar5 = iVar5 + 1;
		puVar4 = puVar4 + 1;
		pbVar3 = pbVar3 + 1;
	} while (iVar5 < 0x28);
	return;
}

void L5ClearFlags(void)

{
	byte *pbVar1;
	byte *pbVar2;
	int iVar3;
	longlong lVar4;

	iVar3 = 0;
	pbVar2 = &DAT_1013b370;
	do {
		lVar4 = 5;
		pbVar1 = pbVar2;
		do {
			*pbVar1 = *pbVar1 & 0xbf;
			pbVar1[0x28] = pbVar1[0x28] & 0xbf;
			pbVar1[0x50] = pbVar1[0x50] & 0xbf;
			pbVar1[0x78] = pbVar1[0x78] & 0xbf;
			pbVar1[0xa0] = pbVar1[0xa0] & 0xbf;
			pbVar1[200] = pbVar1[200] & 0xbf;
			pbVar1[0xf0] = pbVar1[0xf0] & 0xbf;
			pbVar1[0x118] = pbVar1[0x118] & 0xbf;
			pbVar1 = pbVar1 + 0x140;
			lVar4 = lVar4 + -1;
		} while (lVar4 != 0);
		iVar3 = iVar3 + 1;
		pbVar2 = pbVar2 + 1;
	} while (iVar3 < 0x28);
	return;
}

void L5drawRoom(int x, int y, int w, int h)

{
	int iVar1;
	ulonglong uVar2;
	longlong lVar3;
	byte *pbVar4;
	longlong lVar5;
	int iVar6;
	byte *pbVar7;

	pbVar4 = dungeon;
	iVar6 = 0;
	while (iVar6 < h) {
		lVar5 = 0;
		if (0 < w) {
			if (8 < w) {
				uVar2 = (ulonglong)(w - 1U >> 3);
				pbVar7 = pbVar4 + y;
				if (0 < w + -8) {
					do {
						iVar1 = (int)lVar5 + x;
						lVar5 = lVar5 + 8;
						pbVar7[iVar1 * 0x28] = 1;
						pbVar7[(iVar1 + 1) * 0x28] = 1;
						pbVar7[(iVar1 + 2) * 0x28] = 1;
						pbVar7[(iVar1 + 3) * 0x28] = 1;
						pbVar7[(iVar1 + 4) * 0x28] = 1;
						pbVar7[(iVar1 + 5) * 0x28] = 1;
						pbVar7[(iVar1 + 6) * 0x28] = 1;
						pbVar7[(iVar1 + 7) * 0x28] = 1;
						uVar2 = uVar2 - 1;
					} while (uVar2 != 0);
				}
			}
			lVar3 = (longlong)w - lVar5;
			if ((int)lVar5 < w) {
				do {
					iVar1 = (int)lVar5;
					lVar5 = lVar5 + 1;
					pbVar4[(iVar1 + x) * 0x28 + y] = 1;
					lVar3 = lVar3 + -1;
				} while (lVar3 != 0);
			}
		}
		pbVar4 = pbVar4 + 1;
		iVar6 = iVar6 + 1;
	}
	return;
}

BOOL L5checkRoom(int x, int y, int width, int height)

{
	int iVar1;
	byte *pbVar2;
	longlong lVar3;
	int iVar4;
	longlong lVar5;

	iVar4 = 0;
	pbVar2 = dungeon + y;
	do {
		if (height <= iVar4) {
			return 1;
		}
		lVar3 = 0;
		lVar5 = (longlong)width;
		if (0 < width) {
			do {
				if (((((longlong)x + lVar3 < 0) || (iVar1 = (int)((longlong)x + lVar3), 0x27 < iVar1)) || (y + iVar4 < 0)) || (0x27 < y + iVar4)) {
					return 0;
				}
				if (pbVar2[iVar1 * 0x28] != 0) {
					return 0;
				}
				lVar3 = lVar3 + 1;
				lVar5 = lVar5 + -1;
			} while (lVar5 != 0);
		}
		pbVar2 = pbVar2 + 1;
		iVar4 = iVar4 + 1;
	} while (true);
}

// WARNING: Removing unreachable block (ram,0x1002908c)

void L5roomGen(int x, int y, int w, int h, int dir)

{
	int x_00;
	int y_00;
	bool bVar1;
	int iVar2;
	int w_00;
	int h_00;
	BOOL BVar3;
	BOOL BVar4;

	iVar2 = random('\0', 4);
	if (dir == 1) {
		if (iVar2 == 0) {
			bVar1 = false;
		} else {
			bVar1 = true;
		}
	} else {
		if (iVar2 == 0) {
			bVar1 = true;
		} else {
			bVar1 = false;
		}
	}
	if (bVar1) {
		iVar2 = 0;
		do {
			w_00 = random('\0', 5);
			w_00 = (w_00 + 2 >> 1) * 2;
			h_00 = random('\0', 5);
			x_00 = h_00 + 2 >> 1;
			h_00 = x_00 * 2;
			y_00 = y + x_00 * -2;
			x_00 = (x + (w >> 1) + (uint)(w < 0 && (w & 1U) != 0)) - (w_00 >> 1);
			BVar3 = L5checkRoom(x_00 + -1, y_00 + -1, w_00 + 2, h_00 + 1);
			iVar2 = iVar2 + 1;
			if (BVar3 != 0)
				break;
		} while (iVar2 < 0x14);
		if (BVar3 == 1) {
			L5drawRoom(x_00, y_00, w_00, h_00);
		}
		y = y + h;
		BVar4 = L5checkRoom(x_00 + -1, y, w_00 + 2, h_00 + 1);
		if (BVar4 == 1) {
			L5drawRoom(x_00, y, w_00, h_00);
		}
		if (BVar3 == 1) {
			L5roomGen(x_00, y_00, w_00, h_00, 0);
		}
		if (BVar4 == 1) {
			L5roomGen(x_00, y, w_00, h_00, 0);
		}
	} else {
		if (!bVar1) {
			iVar2 = 0;
			do {
				w_00 = random('\0', 5);
				x_00 = w_00 + 2 >> 1;
				w_00 = x_00 * 2;
				h_00 = random('\0', 5);
				h_00 = (h_00 + 2 >> 1) * 2;
				y_00 = (y + (h >> 1) + (uint)(h < 0 && (h & 1U) != 0)) - (h_00 >> 1);
				x_00 = x + x_00 * -2;
				BVar3 = L5checkRoom(x_00 + -1, y_00 + -1, h_00 + 2, w_00 + 1);
				iVar2 = iVar2 + 1;
				if (BVar3 != 0)
					break;
			} while (iVar2 < 0x14);
			if (BVar3 == 1) {
				L5drawRoom(x_00, y_00, w_00, h_00);
			}
			x = x + w;
			BVar4 = L5checkRoom(x, y_00 + -1, w_00 + 1, h_00 + 2);
			if (BVar4 == 1) {
				L5drawRoom(x, y_00, w_00, h_00);
			}
			if (BVar3 == 1) {
				L5roomGen(x_00, y_00, w_00, h_00, 1);
			}
			if (BVar4 == 1) {
				L5roomGen(x, y_00, w_00, h_00, 1);
			}
		}
	}
	return;
}

void L5firstRoom(void)

{
	ulonglong uVar1;
	int iVar2;
	int iVar3;
	uint uVar4;
	byte *pbVar5;
	uint uVar6;
	uint uVar7;

	iVar2 = 0x100f8fd0;
	iVar3 = random('\0', 2);
	if (iVar3 != 0) {
		uVar7 = 1;
		uVar6 = 0x27;
		iVar3 = random('\0', 2);
		*(int *)(iVar2 + -0x4f20) = iVar3;
		iVar3 = random('\0', 2);
		*(int *)(iVar2 + -0x4f24) = iVar3;
		iVar3 = random('\0', 2);
		*(int *)(iVar2 + -0x4f28) = iVar3;
		if (*(int *)(iVar2 + -0x4f20) + *(int *)(iVar2 + -0x4f28) < 2) {
			*(undefined4 *)(iVar2 + -0x4f24) = 1;
		}
		if (*(int *)(iVar2 + -0x4f20) == 0) {
			uVar7 = 0x12;
		} else {
			L5drawRoom(1, 0xf, 10, 10);
		}
		if (*(int *)(iVar2 + -0x4f24) != 0) {
			L5drawRoom(0xf, 0xf, 10, 10);
		}
		if (*(int *)(iVar2 + -0x4f28) == 0) {
			uVar6 = 0x16;
		} else {
			L5drawRoom(0x1d, 0xf, 10, 10);
		}
		pbVar5 = dungeon + uVar7 * 0x28;
		uVar4 = uVar6 - uVar7;
		if (uVar7 < uVar6) {
			uVar1 = (ulonglong)(uVar4 >> 3);
			if (uVar4 >> 3 != 0) {
				do {
					pbVar5[0x11] = 1;
					pbVar5[0x12] = 1;
					pbVar5[0x13] = 1;
					pbVar5[0x14] = 1;
					pbVar5[0x15] = 1;
					pbVar5[0x16] = 1;
					pbVar5[0x39] = 1;
					pbVar5[0x3a] = 1;
					pbVar5[0x3b] = 1;
					pbVar5[0x3c] = 1;
					pbVar5[0x3d] = 1;
					pbVar5[0x3e] = 1;
					pbVar5[0x61] = 1;
					pbVar5[0x62] = 1;
					pbVar5[99] = 1;
					pbVar5[100] = 1;
					pbVar5[0x65] = 1;
					pbVar5[0x66] = 1;
					pbVar5[0x89] = 1;
					pbVar5[0x8a] = 1;
					pbVar5[0x8b] = 1;
					pbVar5[0x8c] = 1;
					pbVar5[0x8d] = 1;
					pbVar5[0x8e] = 1;
					pbVar5[0xb1] = 1;
					pbVar5[0xb2] = 1;
					pbVar5[0xb3] = 1;
					pbVar5[0xb4] = 1;
					pbVar5[0xb5] = 1;
					pbVar5[0xb6] = 1;
					pbVar5[0xd9] = 1;
					pbVar5[0xda] = 1;
					pbVar5[0xdb] = 1;
					pbVar5[0xdc] = 1;
					pbVar5[0xdd] = 1;
					pbVar5[0xde] = 1;
					pbVar5[0x101] = 1;
					pbVar5[0x102] = 1;
					pbVar5[0x103] = 1;
					pbVar5[0x104] = 1;
					pbVar5[0x105] = 1;
					pbVar5[0x106] = 1;
					pbVar5[0x129] = 1;
					pbVar5[0x12a] = 1;
					pbVar5[299] = 1;
					pbVar5[300] = 1;
					pbVar5[0x12d] = 1;
					pbVar5[0x12e] = 1;
					pbVar5 = pbVar5 + 0x140;
					uVar1 = uVar1 - 1;
				} while (uVar1 != 0);
				uVar4 = uVar4 & 7;
				if (uVar4 == 0)
					goto LAB_1002972c;
			}
			do {
				pbVar5[0x11] = 1;
				pbVar5[0x12] = 1;
				pbVar5[0x13] = 1;
				pbVar5[0x14] = 1;
				pbVar5[0x15] = 1;
				pbVar5[0x16] = 1;
				pbVar5 = pbVar5 + 0x28;
				uVar4 = uVar4 - 1;
			} while (uVar4 != 0);
		}
	LAB_1002972c:
		if (*(int *)(iVar2 + -0x4f20) != 0) {
			L5roomGen(1, 0xf, 10, 10, 1);
		}
		if (*(int *)(iVar2 + -0x4f24) != 0) {
			L5roomGen(0xf, 0xf, 10, 10, 1);
		}
		if (*(int *)(iVar2 + -0x4f28) != 0) {
			L5roomGen(0x1d, 0xf, 10, 10, 1);
		}
		*(undefined4 *)(iVar2 + -0x4f34) = 0;
		*(undefined4 *)(iVar2 + -0x4f30) = 0;
		*(undefined4 *)(iVar2 + -0x4f2c) = 0;
		return;
	}
	uVar6 = 1;
	uVar7 = 0x27;
	iVar3 = random('\0', 2);
	*(int *)(iVar2 + -0x4f2c) = iVar3;
	iVar3 = random('\0', 2);
	*(int *)(iVar2 + -0x4f30) = iVar3;
	iVar3 = random('\0', 2);
	*(int *)(iVar2 + -0x4f34) = iVar3;
	if (*(int *)(iVar2 + -0x4f2c) + *(int *)(iVar2 + -0x4f34) < 2) {
		*(undefined4 *)(iVar2 + -0x4f30) = 1;
	}
	if (*(int *)(iVar2 + -0x4f2c) == 0) {
		uVar6 = 0x12;
	} else {
		L5drawRoom(0xf, 1, 10, 10);
	}
	if (*(int *)(iVar2 + -0x4f30) != 0) {
		L5drawRoom(0xf, 0xf, 10, 10);
	}
	if (*(int *)(iVar2 + -0x4f34) == 0) {
		uVar7 = 0x16;
	} else {
		L5drawRoom(0xf, 0x1d, 10, 10);
	}
	pbVar5 = dungeon + uVar6;
	uVar4 = uVar7 - uVar6;
	if (uVar6 < uVar7) {
		uVar1 = (ulonglong)(uVar4 >> 3);
		if (uVar4 >> 3 != 0) {
			do {
				pbVar5[0x2a8] = 1;
				pbVar5[0x2d0] = 1;
				pbVar5[0x2f8] = 1;
				pbVar5[800] = 1;
				pbVar5[0x348] = 1;
				pbVar5[0x370] = 1;
				pbVar5[0x2a9] = 1;
				pbVar5[0x2d1] = 1;
				pbVar5[0x2f9] = 1;
				pbVar5[0x321] = 1;
				pbVar5[0x349] = 1;
				pbVar5[0x371] = 1;
				pbVar5[0x2aa] = 1;
				pbVar5[0x2d2] = 1;
				pbVar5[0x2fa] = 1;
				pbVar5[0x322] = 1;
				pbVar5[0x34a] = 1;
				pbVar5[0x372] = 1;
				pbVar5[0x2ab] = 1;
				pbVar5[0x2d3] = 1;
				pbVar5[0x2fb] = 1;
				pbVar5[0x323] = 1;
				pbVar5[0x34b] = 1;
				pbVar5[0x373] = 1;
				pbVar5[0x2ac] = 1;
				pbVar5[0x2d4] = 1;
				pbVar5[0x2fc] = 1;
				pbVar5[0x324] = 1;
				pbVar5[0x34c] = 1;
				pbVar5[0x374] = 1;
				pbVar5[0x2ad] = 1;
				pbVar5[0x2d5] = 1;
				pbVar5[0x2fd] = 1;
				pbVar5[0x325] = 1;
				pbVar5[0x34d] = 1;
				pbVar5[0x375] = 1;
				pbVar5[0x2ae] = 1;
				pbVar5[0x2d6] = 1;
				pbVar5[0x2fe] = 1;
				pbVar5[0x326] = 1;
				pbVar5[0x34e] = 1;
				pbVar5[0x376] = 1;
				pbVar5[0x2af] = 1;
				pbVar5[0x2d7] = 1;
				pbVar5[0x2ff] = 1;
				pbVar5[0x327] = 1;
				pbVar5[0x34f] = 1;
				pbVar5[0x377] = 1;
				pbVar5 = pbVar5 + 8;
				uVar1 = uVar1 - 1;
			} while (uVar1 != 0);
			uVar4 = uVar4 & 7;
			if (uVar4 == 0)
				goto LAB_100294d0;
		}
		do {
			pbVar5[0x2a8] = 1;
			pbVar5[0x2d0] = 1;
			pbVar5[0x2f8] = 1;
			pbVar5[800] = 1;
			pbVar5[0x348] = 1;
			pbVar5[0x370] = 1;
			pbVar5 = pbVar5 + 1;
			uVar4 = uVar4 - 1;
		} while (uVar4 != 0);
	}
LAB_100294d0:
	if (*(int *)(iVar2 + -0x4f2c) != 0) {
		L5roomGen(0xf, 1, 10, 10, 0);
	}
	if (*(int *)(iVar2 + -0x4f30) != 0) {
		L5roomGen(0xf, 0xf, 10, 10, 0);
	}
	if (*(int *)(iVar2 + -0x4f34) != 0) {
		L5roomGen(0xf, 0x1d, 10, 10, 0);
	}
	*(undefined4 *)(iVar2 + -0x4f28) = 0;
	*(undefined4 *)(iVar2 + -0x4f24) = 0;
	*(undefined4 *)(iVar2 + -0x4f20) = 0;
	return;
}

int L5GetArea(void)

{
	int iVar1;
	byte *pbVar2;
	byte *pbVar3;
	int iVar4;
	longlong lVar5;

	pbVar3 = dungeon;
	iVar1 = 0;
	iVar4 = 0;
	do {
		lVar5 = 4;
		pbVar2 = pbVar3;
		do {
			if (*pbVar2 == 1) {
				iVar1 = iVar1 + 1;
			}
			if (pbVar2[0x28] == 1) {
				iVar1 = iVar1 + 1;
			}
			if (pbVar2[0x50] == 1) {
				iVar1 = iVar1 + 1;
			}
			if (pbVar2[0x78] == 1) {
				iVar1 = iVar1 + 1;
			}
			if (pbVar2[0xa0] == 1) {
				iVar1 = iVar1 + 1;
			}
			if (pbVar2[200] == 1) {
				iVar1 = iVar1 + 1;
			}
			if (pbVar2[0xf0] == 1) {
				iVar1 = iVar1 + 1;
			}
			if (pbVar2[0x118] == 1) {
				iVar1 = iVar1 + 1;
			}
			if (pbVar2[0x140] == 1) {
				iVar1 = iVar1 + 1;
			}
			if (pbVar2[0x168] == 1) {
				iVar1 = iVar1 + 1;
			}
			pbVar2 = pbVar2 + 400;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		pbVar3 = pbVar3 + 1;
	} while (iVar4 < 0x28);
	return iVar1;
}

void L5makeDungeon(void)

{
	byte *pbVar1;
	int iVar2;
	byte *pbVar3;
	byte *pbVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	longlong lVar8;

	iVar7 = 0;
	pbVar4 = dungeon;
	iVar5 = 0;
	do {
		lVar8 = 8;
		iVar2 = 0;
		pbVar3 = pbVar4;
		do {
			iVar6 = iVar2 + iVar5;
			(&DAT_101291f4)[iVar6] = *pbVar3;
			*(byte *)(iVar6 + 0x101291f5) = *pbVar3;
			*(byte *)(iVar6 + 0x10129244) = *pbVar3;
			*(byte *)(iVar6 + 0x10129245) = *pbVar3;
			iVar6 = iVar2 + iVar5;
			*(byte *)(iVar6 + 0x10129294) = pbVar3[0x28];
			*(byte *)(iVar6 + 0x10129295) = pbVar3[0x28];
			*(byte *)(iVar6 + 0x101292e4) = pbVar3[0x28];
			*(byte *)(iVar6 + 0x101292e5) = pbVar3[0x28];
			iVar6 = iVar2 + iVar5;
			*(byte *)(iVar6 + 0x10129334) = pbVar3[0x50];
			*(byte *)(iVar6 + 0x10129335) = pbVar3[0x50];
			*(byte *)(iVar6 + 0x10129384) = pbVar3[0x50];
			*(byte *)(iVar6 + 0x10129385) = pbVar3[0x50];
			iVar6 = iVar2 + iVar5;
			*(byte *)(iVar6 + 0x101293d4) = pbVar3[0x78];
			*(byte *)(iVar6 + 0x101293d5) = pbVar3[0x78];
			*(byte *)(iVar6 + 0x10129424) = pbVar3[0x78];
			*(byte *)(iVar6 + 0x10129425) = pbVar3[0x78];
			iVar6 = iVar2 + iVar5;
			iVar2 = iVar2 + 800;
			*(byte *)(iVar6 + 0x10129474) = pbVar3[0xa0];
			*(byte *)(iVar6 + 0x10129475) = pbVar3[0xa0];
			*(byte *)(iVar6 + 0x101294c4) = pbVar3[0xa0];
			pbVar1 = pbVar3 + 0xa0;
			pbVar3 = pbVar3 + 200;
			*(byte *)(iVar6 + 0x101294c5) = *pbVar1;
			lVar8 = lVar8 + -1;
		} while (lVar8 != 0);
		iVar7 = iVar7 + 1;
		iVar5 = iVar5 + 2;
		pbVar4 = pbVar4 + 1;
	} while (iVar7 < 0x28);
	return;
}

void L5makeDmt(void)

{
	byte *pbVar1;
	byte *pbVar2;
	byte *pbVar3;
	byte *pbVar4;
	byte *pbVar5;
	byte *pbVar6;
	int iVar7;
	byte *pbVar8;
	int iVar9;
	longlong lVar10;

	pbVar8 = dungeon;
	lVar10 = 0x14;
	pbVar5 = pbVar8;
	do {
		*pbVar5 = 0x16;
		pbVar5[0x28] = 0x16;
		pbVar5[0x50] = 0x16;
		pbVar5[0x78] = 0x16;
		pbVar5[0xa0] = 0x16;
		pbVar5[200] = 0x16;
		pbVar5[0xf0] = 0x16;
		pbVar5[0x118] = 0x16;
		pbVar5[0x140] = 0x16;
		pbVar5[0x168] = 0x16;
		pbVar5[400] = 0x16;
		pbVar5[0x1b8] = 0x16;
		pbVar5[0x1e0] = 0x16;
		pbVar5[0x208] = 0x16;
		pbVar5[0x230] = 0x16;
		pbVar5[600] = 0x16;
		pbVar5[0x280] = 0x16;
		pbVar5[0x2a8] = 0x16;
		pbVar5[0x2d0] = 0x16;
		pbVar5[0x2f8] = 0x16;
		pbVar5[800] = 0x16;
		pbVar5[0x348] = 0x16;
		pbVar5[0x370] = 0x16;
		pbVar5[0x398] = 0x16;
		pbVar5[0x3c0] = 0x16;
		pbVar5[1000] = 0x16;
		pbVar5[0x410] = 0x16;
		pbVar5[0x438] = 0x16;
		pbVar5[0x460] = 0x16;
		pbVar5[0x488] = 0x16;
		pbVar5[0x4b0] = 0x16;
		pbVar5[0x4d8] = 0x16;
		pbVar5[0x500] = 0x16;
		pbVar5[0x528] = 0x16;
		pbVar5[0x550] = 0x16;
		pbVar5[0x578] = 0x16;
		pbVar5[0x5a0] = 0x16;
		pbVar5[0x5c8] = 0x16;
		pbVar5[0x5f0] = 0x16;
		pbVar5[0x618] = 0x16;
		pbVar5[1] = 0x16;
		pbVar5[0x29] = 0x16;
		pbVar5[0x51] = 0x16;
		pbVar5[0x79] = 0x16;
		pbVar5[0xa1] = 0x16;
		pbVar5[0xc9] = 0x16;
		pbVar5[0xf1] = 0x16;
		pbVar5[0x119] = 0x16;
		pbVar5[0x141] = 0x16;
		pbVar5[0x169] = 0x16;
		pbVar5[0x191] = 0x16;
		pbVar5[0x1b9] = 0x16;
		pbVar5[0x1e1] = 0x16;
		pbVar5[0x209] = 0x16;
		pbVar5[0x231] = 0x16;
		pbVar5[0x259] = 0x16;
		pbVar5[0x281] = 0x16;
		pbVar5[0x2a9] = 0x16;
		pbVar5[0x2d1] = 0x16;
		pbVar5[0x2f9] = 0x16;
		pbVar5[0x321] = 0x16;
		pbVar5[0x349] = 0x16;
		pbVar5[0x371] = 0x16;
		pbVar5[0x399] = 0x16;
		pbVar5[0x3c1] = 0x16;
		pbVar5[0x3e9] = 0x16;
		pbVar5[0x411] = 0x16;
		pbVar5[0x439] = 0x16;
		pbVar5[0x461] = 0x16;
		pbVar5[0x489] = 0x16;
		pbVar5[0x4b1] = 0x16;
		pbVar5[0x4d9] = 0x16;
		pbVar5[0x501] = 0x16;
		pbVar5[0x529] = 0x16;
		pbVar5[0x551] = 0x16;
		pbVar5[0x579] = 0x16;
		pbVar5[0x5a1] = 0x16;
		pbVar5[0x5c9] = 0x16;
		pbVar5[0x5f1] = 0x16;
		pbVar5[0x619] = 0x16;
		pbVar5 = pbVar5 + 2;
		lVar10 = lVar10 + -1;
	} while (lVar10 != 0);
	iVar9 = 1;
	iVar7 = 0x101291f5;
	do {
		pbVar6 = (byte *)(iVar7 + 0x50);
		lVar10 = 0xd;
		pbVar5 = pbVar8;
		do {
			*pbVar5 = (&DAT_100f7193)[(uint)pbVar6[0x51] * 8 + (uint)pbVar6[1] * 4 + (uint)*pbVar6 + (uint)pbVar6[0x50] * 2];
			pbVar5[0x28] = (&DAT_100f7193)[(uint)pbVar6[0xf1] * 8 + (uint)pbVar6[0xa1] * 4 + (uint)pbVar6[0xa0] + (uint)pbVar6[0xf0] * 2];
			pbVar1 = pbVar6 + 0x191;
			pbVar2 = pbVar6 + 400;
			pbVar3 = pbVar6 + 0x141;
			pbVar4 = pbVar6 + 0x140;
			pbVar6 = pbVar6 + 0x1e0;
			pbVar5[0x50] = (&DAT_100f7193)[(uint)*pbVar1 * 8 + (uint)*pbVar3 * 4 + (uint)*pbVar4 + (uint)*pbVar2 * 2];
			pbVar5 = pbVar5 + 0x78;
			lVar10 = lVar10 + -1;
		} while (lVar10 != 0);
		iVar9 = iVar9 + 2;
		iVar7 = iVar7 + 2;
		pbVar8 = pbVar8 + 1;
	} while (iVar9 < 0x4e);
	return;
}

int L5HWallOk(int i, int j)

{
	byte bVar1;
	bool bVar2;
	byte *pbVar3;
	int iVar4;
	int iVar5;

	iVar5 = 1;
	while (true) {
		iVar4 = (i + iVar5) * 0x28;
		pbVar3 = dungeon + iVar4 + j;
		if ((((*pbVar3 != 0xd) || (pbVar3[-1] != 0xd)) || (pbVar3[1] != 0xd)) || ((&DAT_1013b370)[iVar4 + j] != '\0'))
			break;
		iVar5 = iVar5 + 1;
	}
	bVar1 = dungeon[iVar4 + j];
	bVar2 = false;
	if ((2 < bVar1) && (bVar1 < 8)) {
		bVar2 = true;
	}
	if ((0xf < bVar1) && (bVar1 < 0x19)) {
		bVar2 = true;
	}
	if (bVar1 == 0x16) {
		bVar2 = false;
	}
	if (iVar5 == 1) {
		bVar2 = false;
	}
	if (bVar2) {
		return iVar5;
	}
	return -1;
}

int L5VWallOk(int i, int j)

{
	byte bVar1;
	byte *pbVar2;
	bool bVar3;
	int iVar4;
	char *pcVar5;

	pcVar5 = (char *)(i * 0x28 + j + 0x1013b371);
	iVar4 = 1;
	pbVar2 = dungeon + i * 0x28 + j;
	while (true) {
		if ((((pbVar2[1] != 0xd) || (pbVar2[-0x27] != 0xd)) || (pbVar2[0x29] != 0xd)) || (*pcVar5 != '\0'))
			break;
		pcVar5 = pcVar5 + 1;
		iVar4 = iVar4 + 1;
		pbVar2 = pbVar2 + 1;
	}
	bVar1 = (dungeon + i * 0x28 + j)[iVar4];
	bVar3 = false;
	if ((2 < bVar1) && (bVar1 < 8)) {
		bVar3 = true;
	}
	if ((0xf < bVar1) && (bVar1 < 0x19)) {
		bVar3 = true;
	}
	if (bVar1 == 0x16) {
		bVar3 = false;
	}
	if (iVar4 == 1) {
		bVar3 = false;
	}
	if (bVar3) {
		return iVar4;
	}
	return -1;
}

void L5HorizWall(int i, int j, char p, int dx)

{
	int iVar1;
	ulonglong uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	byte *pbVar6;
	char cVar7;
	byte unaff_r30;

	iVar3 = 0x100f8fd0;
	iVar4 = random('\0', 4);
	if (iVar4 == 2) {
		unaff_r30 = 0xc;
		if (p == '\x02') {
			p = 0xc;
		}
		if (p == 4) {
			p = 10;
		}
	} else {
		if (iVar4 < 2) {
			if (-1 < iVar4) {
				unaff_r30 = 2;
			}
		} else {
			if (iVar4 < 4) {
				unaff_r30 = 0x24;
				if (p == '\x02') {
					p = 0x24;
				}
				if (p == 4) {
					p = 0x1b;
				}
			}
		}
	}
	iVar4 = random('\0', 6);
	if (iVar4 == 5) {
		cVar7 = '\f';
	} else {
		cVar7 = '\x1a';
	}
	if (unaff_r30 == 0xc) {
		cVar7 = '\f';
	}
	dungeon[i * 0x28 + j] = p;
	iVar4 = 1;
	if (1 < dx) {
		if (8 < dx + -1) {
			uVar2 = (ulonglong)(dx - 2U >> 3);
			pbVar6 = dungeon + j;
			if (1 < dx + -8) {
				do {
					iVar5 = i + iVar4;
					iVar4 = iVar4 + 8;
					pbVar6[iVar5 * 0x28] = unaff_r30;
					pbVar6[(iVar5 + 1) * 0x28] = unaff_r30;
					pbVar6[(iVar5 + 2) * 0x28] = unaff_r30;
					pbVar6[(iVar5 + 3) * 0x28] = unaff_r30;
					pbVar6[(iVar5 + 4) * 0x28] = unaff_r30;
					pbVar6[(iVar5 + 5) * 0x28] = unaff_r30;
					pbVar6[(iVar5 + 6) * 0x28] = unaff_r30;
					pbVar6[(iVar5 + 7) * 0x28] = unaff_r30;
					uVar2 = uVar2 - 1;
				} while (uVar2 != 0);
			}
		}
		iVar5 = dx - iVar4;
		if (iVar4 < dx) {
			do {
				iVar1 = i + iVar4;
				iVar4 = iVar4 + 1;
				dungeon[iVar1 * 0x28 + j] = unaff_r30;
				iVar5 = iVar5 + -1;
			} while (iVar5 != 0);
		}
	}
	iVar4 = random('\0', dx + -1);
	if (cVar7 == '\f') {
		dungeon[(i + iVar4 + 1) * 0x28 + j] = 0xc;
	} else {
		iVar3 = *(int *)(iVar3 + -0x7514);
		j = (i + iVar4 + 1) * 0x28 + j;
		dungeon[j] = 2;
		*(byte *)(iVar3 + j) = *(byte *)(iVar3 + j) | 1;
	}
	return;
}

void L5VertWall(int i, int j, char p, int dy)

{
	ulonglong uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char *pcVar5;
	char cVar6;
	char unaff_r27;
	char *pcVar7;

	iVar3 = 0x100f8fd0;
	iVar4 = random('\0', 4);
	if (iVar4 == 2) {
		unaff_r27 = '\v';
		if (p == '\x01') {
			p = '\v';
		}
		if (p == '\x04') {
			p = '\x0e';
		}
	} else {
		if (iVar4 < 2) {
			if (-1 < iVar4) {
				unaff_r27 = '\x01';
			}
		} else {
			if (iVar4 < 4) {
				unaff_r27 = '#';
				if (p == '\x01') {
					p = '#';
				}
				if (p == '\x04') {
					p = '%';
				}
			}
		}
	}
	iVar4 = random('\0', 6);
	if (iVar4 == 5) {
		cVar6 = '\v';
	} else {
		cVar6 = '\x19';
	}
	if (unaff_r27 == '\v') {
		cVar6 = '\v';
	}
	pcVar7 = (char *)(*(int *)(iVar3 + -0x77cc) + i * 0x28 + j);
	*pcVar7 = p;
	iVar4 = 1;
	if (1 < dy) {
		if (8 < dy + -1) {
			uVar1 = (ulonglong)(dy - 2U >> 3);
			pcVar5 = pcVar7 + 1;
			if (1 < dy + -8) {
				do {
					*pcVar5 = unaff_r27;
					iVar4 = iVar4 + 8;
					pcVar5[1] = unaff_r27;
					pcVar5[2] = unaff_r27;
					pcVar5[3] = unaff_r27;
					pcVar5[4] = unaff_r27;
					pcVar5[5] = unaff_r27;
					pcVar5[6] = unaff_r27;
					pcVar5[7] = unaff_r27;
					pcVar5 = pcVar5 + 8;
					uVar1 = uVar1 - 1;
				} while (uVar1 != 0);
			}
		}
		pcVar5 = pcVar7 + iVar4;
		iVar2 = dy - iVar4;
		if (iVar4 < dy) {
			do {
				*pcVar5 = unaff_r27;
				pcVar5 = pcVar5 + 1;
				iVar2 = iVar2 + -1;
			} while (iVar2 != 0);
		}
	}
	iVar4 = random('\0', dy + -1);
	iVar4 = iVar4 + 1;
	if (cVar6 == '\v') {
		pcVar7[iVar4] = '\v';
	} else {
		pcVar7[iVar4] = '\x01';
		iVar4 = i * 0x28 + j + iVar4;
		*(byte *)(*(int *)(iVar3 + -0x7514) + iVar4) = *(byte *)(*(int *)(iVar3 + -0x7514) + iVar4) | 2;
	}
	return;
}

void L5AddWall(void)

{
	int dx;
	int j;
	int i;
	byte *pbVar1;
	char *pcVar2;
	byte *pbVar3;
	char *pcVar4;

	pcVar2 = &DAT_1013b370;
	j = 0;
	pbVar1 = dungeon;
	do {
		i = 0;
		pcVar4 = pcVar2;
		pbVar3 = pbVar1;
		do {
			if (*pcVar4 == '\0') {
				if (((*pbVar3 == 3) && (dx = random('\0', 100), dx < 100)) && (dx = L5HWallOk(i, j), dx != -1)) {
					L5HorizWall(i, j, '\x02', dx);
				}
				if (((*pbVar3 == 3) && (dx = random('\0', 100), dx < 100)) && (dx = L5VWallOk(i, j), dx != -1)) {
					L5VertWall(i, j, '\x01', dx);
				}
				if (((*pbVar3 == 6) && (dx = random('\0', 100), dx < 100)) && (dx = L5HWallOk(i, j), dx != -1)) {
					L5HorizWall(i, j, '\x04', dx);
				}
				if (((*pbVar3 == 7) && (dx = random('\0', 100), dx < 100)) && (dx = L5VWallOk(i, j), dx != -1)) {
					L5VertWall(i, j, '\x04', dx);
				}
				if (((*pbVar3 == 2) && (dx = random('\0', 100), dx < 100)) && (dx = L5HWallOk(i, j), dx != -1)) {
					L5HorizWall(i, j, '\x02', dx);
				}
				if (((*pbVar3 == 1) && (dx = random('\0', 100), dx < 100)) && (dx = L5VWallOk(i, j), dx != -1)) {
					L5VertWall(i, j, '\x01', dx);
				}
			}
			i = i + 1;
			pbVar3 = pbVar3 + 0x28;
			pcVar4 = pcVar4 + 0x28;
		} while (i < 0x28);
		j = j + 1;
		pbVar1 = pbVar1 + 1;
		pcVar2 = pcVar2 + 1;
	} while (j < 0x28);
	return;
}

void DRLG_L5GChamber(int sx, int sy, BOOL topflag, BOOL bottomflag, BOOL leftflag, BOOL rightflag)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	byte *pbVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	if (topflag == 1) {
		pbVar6 = dungeon + sy + sx * 0x28;
		pbVar6[0x50] = 0xc;
		pbVar6[0x78] = 0xc;
		pbVar6[0xa0] = 3;
		pbVar6[0x118] = 9;
		pbVar6[0x140] = 0xc;
		pbVar6[0x168] = 2;
	}
	if (bottomflag == 1) {
		pbVar6 = dungeon + sy + sx * 0x28;
		pbVar6[0x5b] = 10;
		pbVar6[0x83] = 0xc;
		pbVar6[0xab] = 8;
		pbVar6[0x123] = 5;
		pbVar6[0x14b] = 0xc;
		if (pbVar6[0x173] != 4) {
			pbVar6[0x173] = 0x15;
		}
	}
	if (leftflag == 1) {
		pbVar6 = dungeon + sy + sx * 0x28;
		pbVar6[2] = 0xb;
		pbVar6[3] = 0xb;
		pbVar6[4] = 3;
		pbVar6[7] = 8;
		pbVar6[8] = 0xb;
		pbVar6[9] = 1;
	}
	if (rightflag == 1) {
		pbVar6 = dungeon + sy + (sx + 0xb) * 0x28;
		pbVar6[2] = 0xe;
		pbVar6[3] = 0xb;
		pbVar6[4] = 9;
		pbVar6[7] = 5;
		pbVar6[8] = 0xb;
		if (pbVar6[9] != 4) {
			pbVar6[9] = 0x15;
		}
	}
	iVar1 = sy + 0x1013bff1;
	iVar2 = sy + 0x1013b371;
	iVar3 = 1;
	do {
		iVar7 = (sx + 1) * 0x28;
		*(undefined *)(iVar1 + iVar7) = 0xd;
		iVar5 = (sx + 2) * 0x28;
		*(byte *)(iVar2 + iVar7) = *(byte *)(iVar2 + iVar7) | 0x40;
		iVar7 = (sx + 3) * 0x28;
		*(undefined *)(iVar1 + iVar5) = 0xd;
		iVar9 = (sx + 4) * 0x28;
		*(byte *)(iVar2 + iVar5) = *(byte *)(iVar2 + iVar5) | 0x40;
		iVar4 = (sx + 5) * 0x28;
		*(undefined *)(iVar1 + iVar7) = 0xd;
		iVar8 = (sx + 6) * 0x28;
		*(byte *)(iVar2 + iVar7) = *(byte *)(iVar2 + iVar7) | 0x40;
		iVar5 = (sx + 7) * 0x28;
		*(undefined *)(iVar1 + iVar9) = 0xd;
		iVar7 = (sx + 8) * 0x28;
		*(byte *)(iVar2 + iVar9) = *(byte *)(iVar2 + iVar9) | 0x40;
		*(undefined *)(iVar1 + iVar4) = 0xd;
		*(byte *)(iVar2 + iVar4) = *(byte *)(iVar2 + iVar4) | 0x40;
		*(undefined *)(iVar1 + iVar8) = 0xd;
		*(byte *)(iVar2 + iVar8) = *(byte *)(iVar2 + iVar8) | 0x40;
		*(undefined *)(iVar1 + iVar5) = 0xd;
		*(byte *)(iVar2 + iVar5) = *(byte *)(iVar2 + iVar5) | 0x40;
		*(undefined *)(iVar1 + iVar7) = 0xd;
		*(byte *)(iVar2 + iVar7) = *(byte *)(iVar2 + iVar7) | 0x40;
		iVar7 = 9;
		iVar5 = 2;
		do {
			iVar4 = sx + iVar7;
			iVar7 = iVar7 + 1;
			iVar4 = iVar4 * 0x28;
			*(undefined *)(iVar1 + iVar4) = 0xd;
			*(byte *)(iVar2 + iVar4) = *(byte *)(iVar2 + iVar4) | 0x40;
			iVar5 = iVar5 + -1;
		} while (iVar5 != 0);
		iVar3 = iVar3 + 1;
		iVar2 = iVar2 + 1;
		iVar1 = iVar1 + 1;
	} while (iVar3 < 0xb);
	pbVar6 = dungeon + sy + sx * 0x28;
	pbVar6[0xa4] = 0xf;
	pbVar6[0x11c] = 0xf;
	pbVar6[0xa7] = 0xf;
	pbVar6[0x11f] = 0xf;
	return;
}

void DRLG_L5GHall(int x1, int y1, int x2, int y2)

{
	ulonglong uVar1;
	uint uVar2;
	byte *pbVar3;

	if (y1 != y2) {
		pbVar3 = dungeon + x1 * 0x28 + y1;
		uVar2 = y2 - y1;
		if (y2 <= y1) {
			return;
		}
		uVar1 = (ulonglong)(uVar2 >> 3);
		if (uVar2 >> 3 != 0) {
			do {
				*pbVar3 = 0xb;
				pbVar3[0x78] = 0xb;
				pbVar3[1] = 0xb;
				pbVar3[0x79] = 0xb;
				pbVar3[2] = 0xb;
				pbVar3[0x7a] = 0xb;
				pbVar3[3] = 0xb;
				pbVar3[0x7b] = 0xb;
				pbVar3[4] = 0xb;
				pbVar3[0x7c] = 0xb;
				pbVar3[5] = 0xb;
				pbVar3[0x7d] = 0xb;
				pbVar3[6] = 0xb;
				pbVar3[0x7e] = 0xb;
				pbVar3[7] = 0xb;
				pbVar3[0x7f] = 0xb;
				pbVar3 = pbVar3 + 8;
				uVar1 = uVar1 - 1;
			} while (uVar1 != 0);
			uVar2 = uVar2 & 7;
			if (uVar2 == 0) {
				return;
			}
		}
		do {
			*pbVar3 = 0xb;
			pbVar3[0x78] = 0xb;
			pbVar3 = pbVar3 + 1;
			uVar2 = uVar2 - 1;
		} while (uVar2 != 0);
		return;
	}
	pbVar3 = dungeon + y1 + x1 * 0x28;
	uVar2 = x2 - x1;
	if (x2 <= x1) {
		return;
	}
	uVar1 = (ulonglong)(uVar2 >> 3);
	if (uVar2 >> 3 != 0) {
		do {
			*pbVar3 = 0xc;
			pbVar3[3] = 0xc;
			pbVar3[0x28] = 0xc;
			pbVar3[0x2b] = 0xc;
			pbVar3[0x50] = 0xc;
			pbVar3[0x53] = 0xc;
			pbVar3[0x78] = 0xc;
			pbVar3[0x7b] = 0xc;
			pbVar3[0xa0] = 0xc;
			pbVar3[0xa3] = 0xc;
			pbVar3[200] = 0xc;
			pbVar3[0xcb] = 0xc;
			pbVar3[0xf0] = 0xc;
			pbVar3[0xf3] = 0xc;
			pbVar3[0x118] = 0xc;
			pbVar3[0x11b] = 0xc;
			pbVar3 = pbVar3 + 0x140;
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
		uVar2 = uVar2 & 7;
		if (uVar2 == 0) {
			return;
		}
	}
	do {
		*pbVar3 = 0xc;
		pbVar3[3] = 0xc;
		pbVar3 = pbVar3 + 0x28;
		uVar2 = uVar2 - 1;
	} while (uVar2 != 0);
	return;
}

void L5tileFix(void)

{
	byte *pbVar1;
	byte *pbVar2;
	byte *pbVar3;
	int iVar4;
	longlong lVar5;

	pbVar3 = dungeon;
	iVar4 = 0;
	pbVar2 = pbVar3;
	do {
		lVar5 = 0x28;
		pbVar1 = pbVar2;
		do {
			if ((*pbVar1 == 2) && (pbVar1[0x28] == 0x16)) {
				pbVar1[0x28] = 0x17;
			}
			if ((*pbVar1 == 0xd) && (pbVar1[0x28] == 0x16)) {
				pbVar1[0x28] = 0x12;
			}
			if ((*pbVar1 == 0xd) && (pbVar1[0x28] == 2)) {
				pbVar1[0x28] = 7;
			}
			if ((*pbVar1 == 6) && (pbVar1[0x28] == 0x16)) {
				pbVar1[0x28] = 0x18;
			}
			if ((*pbVar1 == 1) && (pbVar1[1] == 0x16)) {
				pbVar1[1] = 0x18;
			}
			if ((*pbVar1 == 0xd) && (pbVar1[1] == 1)) {
				pbVar1[1] = 6;
			}
			if ((*pbVar1 == 0xd) && (pbVar1[1] == 0x16)) {
				pbVar1[1] = 0x13;
			}
			pbVar1 = pbVar1 + 0x28;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		pbVar2 = pbVar2 + 1;
	} while (iVar4 < 0x28);
	iVar4 = 0;
	pbVar2 = pbVar3;
	do {
		lVar5 = 0x28;
		pbVar1 = pbVar2;
		do {
			if ((*pbVar1 == 0xd) && (pbVar1[0x28] == 0x13)) {
				pbVar1[0x28] = 0x15;
			}
			if ((*pbVar1 == 0xd) && (pbVar1[0x28] == 0x16)) {
				pbVar1[0x28] = 0x14;
			}
			if ((*pbVar1 == 7) && (pbVar1[0x28] == 0x16)) {
				pbVar1[0x28] = 0x17;
			}
			if ((*pbVar1 == 0xd) && (pbVar1[0x28] == 0x18)) {
				pbVar1[0x28] = 0x15;
			}
			if ((*pbVar1 == 0x13) && (pbVar1[0x28] == 0x16)) {
				pbVar1[0x28] = 0x14;
			}
			if ((*pbVar1 == 2) && (pbVar1[0x28] == 0x13)) {
				pbVar1[0x28] = 0x15;
			}
			if ((*pbVar1 == 0x13) && (pbVar1[0x28] == 1)) {
				pbVar1[0x28] = 6;
			}
			if ((*pbVar1 == 7) && (pbVar1[0x28] == 0x13)) {
				pbVar1[0x28] = 0x15;
			}
			if ((*pbVar1 == 2) && (pbVar1[0x28] == 1)) {
				pbVar1[0x28] = 6;
			}
			if ((*pbVar1 == 3) && (pbVar1[0x28] == 0x16)) {
				pbVar1[0x28] = 0x18;
			}
			if ((*pbVar1 == 0x15) && (pbVar1[0x28] == 1)) {
				pbVar1[0x28] = 6;
			}
			if ((*pbVar1 == 7) && (pbVar1[0x28] == 1)) {
				pbVar1[0x28] = 6;
			}
			if ((*pbVar1 == 7) && (pbVar1[0x28] == 0x18)) {
				pbVar1[0x28] = 0x15;
			}
			if ((*pbVar1 == 4) && (pbVar1[0x28] == 0x10)) {
				pbVar1[0x28] = 0x11;
			}
			if ((*pbVar1 == 7) && (pbVar1[0x28] == 0xd)) {
				pbVar1[0x28] = 0x11;
			}
			if ((*pbVar1 == 2) && (pbVar1[0x28] == 0x18)) {
				pbVar1[0x28] = 0x15;
			}
			if ((*pbVar1 == 2) && (pbVar1[0x28] == 0xd)) {
				pbVar1[0x28] = 0x11;
			}
			if ((*pbVar1 == 0x17) && (pbVar1[-0x28] == 0x16)) {
				pbVar1[-0x28] = 0x13;
			}
			if ((*pbVar1 == 0x13) && (pbVar1[-0x28] == 0x17)) {
				pbVar1[-0x28] = 0x15;
			}
			if ((*pbVar1 == 6) && (pbVar1[-0x28] == 0x16)) {
				pbVar1[-0x28] = 0x18;
			}
			if ((*pbVar1 == 6) && (pbVar1[-0x28] == 0x17)) {
				pbVar1[-0x28] = 0x15;
			}
			if ((*pbVar1 == 1) && (pbVar1[1] == 2)) {
				pbVar1[1] = 7;
			}
			if ((*pbVar1 == 6) && (pbVar1[1] == 0x12)) {
				pbVar1[1] = 0x15;
			}
			if ((*pbVar1 == 0x12) && (pbVar1[1] == 2)) {
				pbVar1[1] = 7;
			}
			if ((*pbVar1 == 6) && (pbVar1[1] == 2)) {
				pbVar1[1] = 7;
			}
			if ((*pbVar1 == 0x15) && (pbVar1[1] == 2)) {
				pbVar1[1] = 7;
			}
			if ((*pbVar1 == 6) && (pbVar1[1] == 0x16)) {
				pbVar1[1] = 0x18;
			}
			if ((*pbVar1 == 6) && (pbVar1[1] == 0xd)) {
				pbVar1[1] = 0x10;
			}
			if ((*pbVar1 == 1) && (pbVar1[1] == 0xd)) {
				pbVar1[1] = 0x10;
			}
			if ((*pbVar1 == 0xd) && (pbVar1[1] == 0x10)) {
				pbVar1[1] = 0x11;
			}
			if ((*pbVar1 == 6) && (pbVar1[-1] == 0x16)) {
				pbVar1[-1] = 7;
			}
			if ((*pbVar1 == 6) && (pbVar1[-1] == 0x16)) {
				pbVar1[-1] = 0x18;
			}
			if ((*pbVar1 == 7) && (pbVar1[-1] == 0x18)) {
				pbVar1[-1] = 0x15;
			}
			if ((*pbVar1 == 0x12) && (pbVar1[-1] == 0x18)) {
				pbVar1[-1] = 0x15;
			}
			pbVar1 = pbVar1 + 0x28;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		pbVar2 = pbVar2 + 1;
	} while (iVar4 < 0x28);
	iVar4 = 0;
	do {
		lVar5 = 0x14;
		pbVar2 = pbVar3;
		do {
			if ((*pbVar2 == 4) && (pbVar2[1] == 2)) {
				pbVar2[1] = 7;
			}
			if ((*pbVar2 == 2) && (pbVar2[0x28] == 0x13)) {
				pbVar2[0x28] = 0x15;
			}
			if ((*pbVar2 == 0x12) && (pbVar2[1] == 0x16)) {
				pbVar2[1] = 0x14;
			}
			pbVar1 = pbVar2 + 0x28;
			if ((*pbVar1 == 4) && (pbVar2[0x29] == 2)) {
				pbVar2[0x29] = 7;
			}
			if ((*pbVar1 == 2) && (pbVar2[0x50] == 0x13)) {
				pbVar2[0x50] = 0x15;
			}
			if ((*pbVar1 == 0x12) && (pbVar2[0x29] == 0x16)) {
				pbVar2[0x29] = 0x14;
			}
			pbVar2 = pbVar2 + 0x50;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		pbVar3 = pbVar3 + 1;
	} while (iVar4 < 0x28);
	return;
}

void DRLG_L5Subs(void)

{
	char cVar1;
	int iVar2;
	int iVar3;
	byte bVar4;
	char *pcVar5;
	byte *pbVar6;
	char *pcVar7;
	byte *pbVar8;
	int iVar9;
	int iVar10;

	iVar9 = 0;
	pbVar6 = dungeon;
	pcVar5 = &DAT_1013b370;
	do {
		iVar10 = 0;
		pbVar8 = pbVar6;
		pcVar7 = pcVar5;
		do {
			iVar2 = random('\0', 4);
			if (((iVar2 == 0) && (cVar1 = (&DAT_100f7012)[(uint)*pbVar8], cVar1 != '\0')) && (*pcVar7 == '\0')) {
				iVar2 = random('\0', 0x10);
				iVar3 = -1;
				while (-1 < iVar2) {
					iVar3 = iVar3 + 1;
					if (iVar3 == 0xce) {
						iVar3 = 0;
					}
					if (cVar1 == (&DAT_100f7012)[iVar3]) {
						iVar2 = iVar2 + -1;
					}
				}
				if (iVar3 == 0x59) {
					if (((&DAT_100f7012)[(uint)pbVar8[-1]] == 'O') && (pcVar7[-1] == '\0')) {
						pbVar8[-1] = 0x5a;
					} else {
						iVar3 = 0x4f;
					}
				}
				bVar4 = (byte)iVar3;
				if (iVar3 == 0x5b) {
					if (((&DAT_100f7012)[(uint)pbVar8[0x28]] == 'P') && (pcVar7[0x28] == '\0')) {
						pbVar8[0x28] = 0x5c;
					} else {
						bVar4 = 0x50;
					}
				}
				*pbVar8 = bVar4;
			}
			iVar10 = iVar10 + 1;
			pcVar7 = pcVar7 + 0x28;
			pbVar8 = pbVar8 + 0x28;
		} while (iVar10 < 0x28);
		iVar9 = iVar9 + 1;
		pcVar5 = pcVar5 + 1;
		pbVar6 = pbVar6 + 1;
	} while (iVar9 < 0x28);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_L5SetRoom(int rx1, int ry1)

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
					*(undefined *)(iVar8 + (rx1 + iVar6) * 0x28) = 0xd;
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

void L5FillChambers(void)

{
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 0x100f8fd0;
	if (_DAT_100f40b0 != 0) {
		iVar1 = 0x100f8fd0;
		DRLG_L5GChamber(0, 0xe, 0, 0, 0, 1);
	}
	if (*(int *)(iVar1 + -0x4f24) != 0) {
		if ((*(int *)(iVar1 + -0x4f20) != 0) && (*(int *)(iVar1 + -0x4f28) == 0)) {
			DRLG_L5GChamber(0xe, 0xe, 0, 0, 1, 0);
		}
		if ((*(int *)(iVar1 + -0x4f20) == 0) && (*(int *)(iVar1 + -0x4f28) != 0)) {
			DRLG_L5GChamber(0xe, 0xe, 0, 0, 0, 1);
		}
		if ((*(int *)(iVar1 + -0x4f20) != 0) && (*(int *)(iVar1 + -0x4f28) != 0)) {
			DRLG_L5GChamber(0xe, 0xe, 0, 0, 1, 1);
		}
		if ((*(int *)(iVar1 + -0x4f20) == 0) && (*(int *)(iVar1 + -0x4f28) == 0)) {
			DRLG_L5GChamber(0xe, 0xe, 0, 0, 0, 0);
		}
	}
	if (*(int *)(iVar1 + -0x4f28) != 0) {
		DRLG_L5GChamber(0x1c, 0xe, 0, 0, 1, 0);
	}
	if ((*(int *)(iVar1 + -0x4f20) != 0) && (*(int *)(iVar1 + -0x4f24) != 0)) {
		DRLG_L5GHall(0xc, 0x12, 0xe, 0x12);
	}
	if ((*(int *)(iVar1 + -0x4f24) != 0) && (*(int *)(iVar1 + -0x4f28) != 0)) {
		DRLG_L5GHall(0x1a, 0x12, 0x1c, 0x12);
	}
	if (((*(int *)(iVar1 + -0x4f20) != 0) && (*(int *)(iVar1 + -0x4f24) == 0)) && (*(int *)(iVar1 + -0x4f28) != 0)) {
		DRLG_L5GHall(0xc, 0x12, 0x1c, 0x12);
	}
	if (*(int *)(iVar1 + -0x4f2c) != 0) {
		DRLG_L5GChamber(0xe, 0, 0, 1, 0, 0);
	}
	if (*(int *)(iVar1 + -0x4f30) != 0) {
		if ((*(int *)(iVar1 + -0x4f2c) != 0) && (*(int *)(iVar1 + -0x4f34) == 0)) {
			DRLG_L5GChamber(0xe, 0xe, 1, 0, 0, 0);
		}
		if ((*(int *)(iVar1 + -0x4f2c) == 0) && (*(int *)(iVar1 + -0x4f34) != 0)) {
			DRLG_L5GChamber(0xe, 0xe, 0, 1, 0, 0);
		}
		if ((*(int *)(iVar1 + -0x4f2c) != 0) && (*(int *)(iVar1 + -0x4f34) != 0)) {
			DRLG_L5GChamber(0xe, 0xe, 1, 1, 0, 0);
		}
		if ((*(int *)(iVar1 + -0x4f2c) == 0) && (*(int *)(iVar1 + -0x4f34) == 0)) {
			DRLG_L5GChamber(0xe, 0xe, 0, 0, 0, 0);
		}
	}
	if (*(int *)(iVar1 + -0x4f34) != 0) {
		DRLG_L5GChamber(0xe, 0x1c, 1, 0, 0, 0);
	}
	if ((*(int *)(iVar1 + -0x4f2c) != 0) && (*(int *)(iVar1 + -0x4f30) != 0)) {
		DRLG_L5GHall(0x12, 0xc, 0x12, 0xe);
	}
	if ((*(int *)(iVar1 + -0x4f30) != 0) && (*(int *)(iVar1 + -0x4f34) != 0)) {
		DRLG_L5GHall(0x12, 0x1a, 0x12, 0x1c);
	}
	if (((*(int *)(iVar1 + -0x4f2c) != 0) && (*(int *)(iVar1 + -0x4f30) == 0)) && (*(int *)(iVar1 + -0x4f34) != 0)) {
		DRLG_L5GHall(0x12, 0xc, 0x12, 0x1c);
	}
	if (**(int **)(iVar1 + -0x7524) != 0) {
		if (((*(int *)(iVar1 + -0x4f2c) == 0) && (*(int *)(iVar1 + -0x4f30) == 0)) && (*(int *)(iVar1 + -0x4f34) == 0)) {
			iVar3 = 1;
			if ((((*(int *)(iVar1 + -0x4f20) == 0) && (*(int *)(iVar1 + -0x4f24) != 0)) && (*(int *)(iVar1 + -0x4f28) != 0)) && (iVar2 = random('\0', 2), iVar2 != 0)) {
				iVar3 = 2;
			}
			if (((*(int *)(iVar1 + -0x4f20) != 0) && (*(int *)(iVar1 + -0x4f24) != 0)) && ((*(int *)(iVar1 + -0x4f28) == 0 && (iVar2 = random('\0', 2), iVar2 != 0)))) {
				iVar3 = 0;
			}
			if (((*(int *)(iVar1 + -0x4f20) != 0) && (*(int *)(iVar1 + -0x4f24) == 0)) && (*(int *)(iVar1 + -0x4f28) != 0)) {
				iVar3 = random('\0', 2);
				if (iVar3 == 0) {
					iVar3 = 2;
				} else {
					iVar3 = 0;
				}
			}
			if (((*(int *)(iVar1 + -0x4f20) != 0) && (*(int *)(iVar1 + -0x4f24) != 0)) && (*(int *)(iVar1 + -0x4f28) != 0)) {
				iVar3 = random('\0', 3);
			}
			if (iVar3 == 1) {
				DRLG_L5SetRoom(0x10, 0x10);
			} else {
				if (iVar3 < 1) {
					if (-1 < iVar3) {
						DRLG_L5SetRoom(2, 0x10);
					}
				} else {
					if (iVar3 < 3) {
						DRLG_L5SetRoom(0x1e, 0x10);
					}
				}
			}
		} else {
			iVar3 = 1;
			if (((*(int *)(iVar1 + -0x4f2c) == 0) && (*(int *)(iVar1 + -0x4f30) != 0)) && ((*(int *)(iVar1 + -0x4f34) != 0 && (iVar2 = random('\0', 2), iVar2 != 0)))) {
				iVar3 = 2;
			}
			if ((((*(int *)(iVar1 + -0x4f2c) != 0) && (*(int *)(iVar1 + -0x4f30) != 0)) && (*(int *)(iVar1 + -0x4f34) == 0)) && (iVar2 = random('\0', 2), iVar2 != 0)) {
				iVar3 = 0;
			}
			if (((*(int *)(iVar1 + -0x4f2c) != 0) && (*(int *)(iVar1 + -0x4f30) == 0)) && (*(int *)(iVar1 + -0x4f34) != 0)) {
				iVar3 = random('\0', 2);
				if (iVar3 == 0) {
					iVar3 = 2;
				} else {
					iVar3 = 0;
				}
			}
			if (((*(int *)(iVar1 + -0x4f2c) != 0) && (*(int *)(iVar1 + -0x4f30) != 0)) && (*(int *)(iVar1 + -0x4f34) != 0)) {
				iVar3 = random('\0', 3);
			}
			if (iVar3 == 1) {
				DRLG_L5SetRoom(0x10, 0x10);
			} else {
				if (iVar3 < 1) {
					if (-1 < iVar3) {
						DRLG_L5SetRoom(0x10, 2);
					}
				} else {
					if (iVar3 < 3) {
						DRLG_L5SetRoom(0x10, 0x1e);
					}
				}
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_L5FTVR(int i, int j, int x, int y, int d)

{
	int iVar1;
	int iVar2;
	BYTE *p;
	int *piVar3;
	char *pcVar4;
	int *piVar5;
	int *piVar6;
	int *piVar7;
	uint in_r8;
	int iVar8;
	int *piVar9;
	int *piVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	iVar2 = 0x100f8fd0;
	iVar21 = 0;
	p = DiabloAllocPtr(200000);
	do {
		if (0 < iVar21) {
			iVar21 = iVar21 + -1;
			piVar3 = (int *)(p + iVar21 * 0x14);
			i = *piVar3;
			j = piVar3[1];
			x = piVar3[2];
			y = piVar3[3];
			d = piVar3[4];
		}
		pcVar4 = (char *)(_DAT_1012f1c8 + x * 0x70 + y);
		if ((*pcVar4 == '\0') && ((ulonglong)(in_r8 & 0xff) == (ulonglong) * (byte *)(*(int *)(iVar2 + -0x77cc) + i * 0x28 + j))) {
			*pcVar4 = DAT_1012f2d8;
			iVar8 = x * 0x70 + y;
			iVar16 = iVar21 + 7;
			*(char *)(_DAT_1012f1c8 + iVar8 + 0x70) = DAT_1012f2d8;
			iVar14 = j + 1;
			iVar20 = x + 2;
			*(char *)(_DAT_1012f1c8 + iVar8 + 1) = DAT_1012f2d8;
			iVar1 = i + 1;
			piVar5 = (int *)(p + iVar21 * 0x14);
			iVar19 = y + 2;
			*(char *)(_DAT_1012f1c8 + iVar8 + 0x71) = DAT_1012f2d8;
			piVar3 = (int *)(p + (iVar21 + 1) * 0x14);
			*piVar5 = iVar1;
			iVar11 = iVar21 + 3;
			piVar10 = (int *)(p + (iVar21 + 2) * 0x14);
			piVar5[1] = iVar14;
			iVar18 = i + -1;
			piVar5[2] = iVar20;
			iVar17 = x + -2;
			piVar5[3] = iVar19;
			iVar12 = j + -1;
			piVar5[4] = 8;
			piVar5 = (int *)(p + (iVar21 + 4) * 0x14);
			iVar15 = iVar21 + 5;
			*piVar3 = iVar18;
			iVar8 = iVar21 + 6;
			iVar13 = y + -2;
			piVar3[1] = iVar14;
			iVar21 = iVar21 + 8;
			piVar3[2] = iVar17;
			piVar6 = (int *)(p + iVar15 * 0x14);
			piVar3[3] = iVar19;
			piVar9 = (int *)(p + iVar11 * 0x14);
			piVar3[4] = 7;
			piVar3 = (int *)(p + iVar16 * 0x14);
			piVar7 = (int *)(p + iVar8 * 0x14);
			*piVar10 = iVar1;
			piVar10[1] = iVar12;
			piVar10[2] = iVar20;
			piVar10[3] = iVar13;
			piVar10[4] = 6;
			*piVar9 = iVar18;
			piVar9[1] = iVar12;
			piVar9[2] = iVar17;
			piVar9[3] = iVar13;
			piVar9[4] = 5;
			*piVar5 = i;
			piVar5[1] = iVar12;
			piVar5[2] = x;
			piVar5[3] = iVar13;
			piVar5[4] = 4;
			*piVar6 = i;
			piVar6[1] = iVar14;
			piVar6[2] = x;
			piVar6[3] = iVar19;
			piVar6[4] = 3;
			*piVar7 = iVar18;
			piVar7[1] = j;
			piVar7[2] = iVar17;
			piVar7[3] = y;
			piVar7[4] = 2;
			*piVar3 = iVar1;
			piVar3[1] = j;
			piVar3[2] = iVar20;
			piVar3[3] = y;
			piVar3[4] = 1;
		} else {
			if ((uint)d < 9) {
				// WARNING: Could not recover jumptable at 0x1002b898. Too many branches
				// WARNING: Treating indirect jump as call
				(**(code **)(iVar2 + -0x1e2c + d * 4))();
				return;
			}
		}
	} while (0 < iVar21);
	mem_free_dbg(p);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_L5FloodTVal(void)

{
	byte in_r3;
	int y;
	int x;
	int j;
	int i;
	byte *pbVar1;
	int iVar2;
	byte *pbVar3;

	pbVar1 = dungeon;
	y = 0x10;
	j = 0;
	do {
		x = 0x10;
		i = 0;
		iVar2 = 0x700;
		pbVar3 = pbVar1;
		do {
			if ((in_r3 == *pbVar3) && (*(char *)(y + _DAT_1012f1c8 + iVar2) == '\0')) {
				DRLG_L5FTVR(i, j, x, y, 0);
				DAT_1012f2d8 = DAT_1012f2d8 + '\x01';
			}
			i = i + 1;
			x = x + 2;
			pbVar3 = pbVar3 + 0x28;
			iVar2 = iVar2 + 0xe0;
		} while (i < 0x28);
		j = j + 1;
		pbVar1 = pbVar1 + 1;
		y = y + 2;
	} while (j < 0x28);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_L5TransFix(void)

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
			if ((*pbVar1 == 0x17) && (pbVar1[-1] == 0x12)) {
				puVar6 = (undefined *)(iVar5 + _DAT_1012f1c8 + iVar2);
				puVar6[0x70] = *puVar6;
				puVar6 = (undefined *)(iVar5 + _DAT_1012f1c8 + iVar2);
				puVar6[0x71] = *puVar6;
			}
			if ((*pbVar1 == 0x18) && (pbVar1[0x28] == 0x13)) {
				puVar6 = (undefined *)(iVar5 + _DAT_1012f1c8 + iVar2);
				puVar6[1] = *puVar6;
				puVar6 = (undefined *)(iVar5 + _DAT_1012f1c8 + iVar2);
				puVar6[0x71] = *puVar6;
			}
			if (*pbVar1 == 0x12) {
				puVar6 = (undefined *)(iVar5 + _DAT_1012f1c8 + iVar2);
				puVar6[0x70] = *puVar6;
				puVar6 = (undefined *)(iVar5 + _DAT_1012f1c8 + iVar2);
				puVar6[0x71] = *puVar6;
			}
			if (*pbVar1 == 0x13) {
				puVar6 = (undefined *)(iVar5 + _DAT_1012f1c8 + iVar2);
				puVar6[1] = *puVar6;
				puVar6 = (undefined *)(iVar5 + _DAT_1012f1c8 + iVar2);
				puVar6[0x71] = *puVar6;
			}
			if (*pbVar1 == 0x14) {
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

void DRLG_L5DirtFix(void)

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
			if ((*pbVar2 == 0x15) && (pbVar2[0x28] != 0x13)) {
				*pbVar2 = 0xca;
			}
			if ((*pbVar2 == 0x13) && (pbVar2[0x28] != 0x13)) {
				*pbVar2 = 200;
			}
			if ((*pbVar2 == 0x18) && (pbVar2[0x28] != 0x13)) {
				*pbVar2 = 0xcd;
			}
			if ((*pbVar2 == 0x12) && (pbVar2[1] != 0x12)) {
				*pbVar2 = 199;
			}
			if ((*pbVar2 == 0x15) && (pbVar2[1] != 0x12)) {
				*pbVar2 = 0xca;
			}
			if ((*pbVar2 == 0x17) && (pbVar2[1] != 0x12)) {
				*pbVar2 = 0xcc;
			}
			pbVar1 = pbVar2 + 0x28;
			if ((*pbVar1 == 0x15) && (pbVar2[0x50] != 0x13)) {
				*pbVar1 = 0xca;
			}
			if ((*pbVar1 == 0x13) && (pbVar2[0x50] != 0x13)) {
				*pbVar1 = 200;
			}
			if ((*pbVar1 == 0x18) && (pbVar2[0x50] != 0x13)) {
				*pbVar1 = 0xcd;
			}
			if ((*pbVar1 == 0x12) && (pbVar2[0x29] != 0x12)) {
				*pbVar1 = 199;
			}
			if ((*pbVar1 == 0x15) && (pbVar2[0x29] != 0x12)) {
				*pbVar1 = 0xca;
			}
			if ((*pbVar1 == 0x17) && (pbVar2[0x29] != 0x12)) {
				*pbVar1 = 0xcc;
			}
			pbVar2 = pbVar2 + 0x50;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		pbVar3 = pbVar3 + 1;
	} while (iVar4 < 0x28);
	return;
}

void DRLG_L5CornerFix(void)

{
	undefined *puVar1;
	byte *pbVar2;
	byte *pbVar3;
	byte *pbVar4;
	byte *pbVar5;
	int iVar6;
	longlong lVar7;

	iVar6 = 1;
	puVar1 = &DAT_1013b370;
	pbVar2 = dungeon;
	do {
		pbVar3 = puVar1 + 0x29;
		lVar7 = 0x13;
		pbVar4 = pbVar2 + 0x29;
		do {
			if (((((*pbVar3 & 0x80) == 0) && (*pbVar4 == 0x11)) && (pbVar4[-0x28] == 0xd)) && (pbVar4[-1] == 1)) {
				*pbVar4 = 0x10;
				pbVar3[-1] = pbVar3[-1] & 0x80;
			}
			if (*pbVar4 == 0xca) {
				if (pbVar4[0x28] == 0xd) {
					if (pbVar4[1] == 1) {
						*pbVar4 = 8;
					}
				}
			}
			pbVar5 = pbVar4 + 0x28;
			if ((((pbVar3[0x28] & 0x80) == 0) && (*pbVar5 == 0x11)) && ((*pbVar4 == 0xd && (pbVar4[0x27] == 1)))) {
				*pbVar5 = 0x10;
				pbVar3[0x27] = pbVar3[0x27] & 0x80;
			}
			if (*pbVar5 == 0xca) {
				if (pbVar4[0x50] == 0xd) {
					if (pbVar4[0x29] == 1) {
						*pbVar5 = 8;
					}
				}
			}
			pbVar3 = pbVar3 + 0x50;
			pbVar4 = pbVar4 + 0x50;
			lVar7 = lVar7 + -1;
		} while (lVar7 != 0);
		iVar6 = iVar6 + 1;
		puVar1 = puVar1 + 1;
		pbVar2 = pbVar2 + 1;
	} while (iVar6 < 0x27);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_L5(int entry)

{
	bool bVar1;
	undefined8 uVar2;
	int dy;
	BOOL BVar3;
	char *_pdungeon;
	char *pcVar4;
	byte *pbVar5;
	int sx;
	byte *pbVar6;
	int unaff_r23;
	char *pcVar7;
	char *pcVar8;
	int iVar9;
	int x;
	longlong lVar10;

	uVar2 = 0x100f8fd0;
	bVar1 = false;
	if (currlevel == 2) {
		unaff_r23 = 0x2b5;
	} else {
		if (currlevel < 2) {
			if (currlevel != 0) {
				unaff_r23 = 0x215;
			}
		} else {
			if (currlevel < 5) {
				unaff_r23 = 0x2f9;
			}
		}
	}
	while (!bVar1) {
		DRLG_InitTrans();
		do {
			InitL5Dungeon();
			L5firstRoom();
			dy = L5GetArea();
		} while (dy < unaff_r23);
		L5makeDungeon();
		L5makeDmt();
		L5FillChambers();
		L5tileFix();
		L5AddWall();
		L5ClearFlags();
		DRLG_L5FloodTVal();
		bVar1 = true;
		BVar3 = QuestStatus(0xd);
		if (BVar3 != 0) {
			if (entry == 0) {
				dy = DRLG_PlaceMiniSet(&DAT_100f7149, 1, 1, 0, 0, 1, -1, 0);
				if (dy < 0) {
					bVar1 = false;
				}
			} else {
				dy = DRLG_PlaceMiniSet(&DAT_100f7149, 1, 1, 0, 0, 0, -1, 0);
				bVar1 = -1 < dy;
				_DAT_1012f30c = _DAT_1012f30c + -1;
			}
		}
		BVar3 = QuestStatus(7);
		if (BVar3 == 0) {
			if (entry == 0) {
				dy = DRLG_PlaceMiniSet(&DAT_100f7103, 1, 1, 0, 0, 1, -1, 0);
				if (dy < 0) {
					bVar1 = false;
				} else {
					dy = DRLG_PlaceMiniSet(&DAT_100f7125, 1, 1, 0, 0, 0, -1, 1);
					if (dy < 0) {
						bVar1 = false;
					}
				}
			} else {
				dy = DRLG_PlaceMiniSet(&DAT_100f7103, 1, 1, 0, 0, 0, -1, 0);
				if (dy < 0) {
					bVar1 = false;
				} else {
					dy = DRLG_PlaceMiniSet(&DAT_100f7125, 1, 1, 0, 0, 1, -1, 1);
					if (dy < 0) {
						bVar1 = false;
					}
				}
				_DAT_1012f30c = _DAT_1012f30c + -1;
			}
		} else {
			if (entry == 0) {
				dy = DRLG_PlaceMiniSet(&DAT_100f70e1, 1, 1, 0, 0, 1, -1, 0);
				if (dy < 0) {
					bVar1 = false;
				}
			} else {
				dy = DRLG_PlaceMiniSet(&DAT_100f70e1, 1, 1, 0, 0, 0, -1, 0);
				if (dy < 0) {
					bVar1 = false;
				}
				if (entry == 1) {
					_DAT_1012f310 = _DAT_1013b36c * 2 + 0x14;
					_DAT_1012f30c = _DAT_1013b368 * 2 + 0x1c;
				} else {
					_DAT_1012f30c = _DAT_1012f30c + -1;
				}
			}
		}
	}
	pcVar8 = *(char **)((int)uVar2 + -0x77cc);
	x = 0;
	dy = 0x10;
	pcVar7 = pcVar8;
	do {
		iVar9 = 0;
		sx = 0x10;
		pcVar4 = pcVar7;
		do {
			if (*pcVar4 == '@') {
				DRLG_CopyTrans(sx, dy + 1, sx, dy);
				DRLG_CopyTrans(sx + 1, dy + 1, sx + 1, dy);
			}
			iVar9 = iVar9 + 1;
			sx = sx + 2;
			pcVar4 = pcVar4 + 0x28;
		} while (iVar9 < 0x28);
		x = x + 1;
		dy = dy + 2;
		pcVar7 = pcVar7 + 1;
	} while (x < 0x28);
	DRLG_L5TransFix();
	DRLG_L5DirtFix();
	DRLG_L5CornerFix();
	dy = 0;
	pbVar6 = *(byte **)((int)uVar2 + -0x7514);
	do {
		x = 0;
		pbVar5 = pbVar6;
		do {
			if ((*pbVar5 & 0x7f) != 0) {
				DRLG_PlaceDoor(x, dy);
			}
			sx = (int)uVar2;
			x = x + 1;
			pbVar5 = pbVar5 + 0x28;
		} while (x < 0x28);
		dy = dy + 1;
		pbVar6 = pbVar6 + 1;
	} while (dy < 0x28);
	DRLG_L5Subs();
	DRLG_L1Shadows();
	DRLG_PlaceMiniSet((BYTE *)(sx + -0x1e91), 5, 10, 0, 0, 0, -1, 4);
	DRLG_L1Floor();
	_pdungeon = *(char **)(sx + -0x7540);
	lVar10 = 0x14;
	do {
		*_pdungeon = *pcVar8;
		_pdungeon[0x28] = pcVar8[0x28];
		_pdungeon[0x50] = pcVar8[0x50];
		_pdungeon[0x78] = pcVar8[0x78];
		_pdungeon[0xa0] = pcVar8[0xa0];
		_pdungeon[200] = pcVar8[200];
		_pdungeon[0xf0] = pcVar8[0xf0];
		_pdungeon[0x118] = pcVar8[0x118];
		_pdungeon[0x140] = pcVar8[0x140];
		_pdungeon[0x168] = pcVar8[0x168];
		_pdungeon[400] = pcVar8[400];
		_pdungeon[0x1b8] = pcVar8[0x1b8];
		_pdungeon[0x1e0] = pcVar8[0x1e0];
		_pdungeon[0x208] = pcVar8[0x208];
		_pdungeon[0x230] = pcVar8[0x230];
		_pdungeon[600] = pcVar8[600];
		_pdungeon[0x280] = pcVar8[0x280];
		_pdungeon[0x2a8] = pcVar8[0x2a8];
		_pdungeon[0x2d0] = pcVar8[0x2d0];
		_pdungeon[0x2f8] = pcVar8[0x2f8];
		_pdungeon[800] = pcVar8[800];
		_pdungeon[0x348] = pcVar8[0x348];
		_pdungeon[0x370] = pcVar8[0x370];
		_pdungeon[0x398] = pcVar8[0x398];
		_pdungeon[0x3c0] = pcVar8[0x3c0];
		_pdungeon[1000] = pcVar8[1000];
		_pdungeon[0x410] = pcVar8[0x410];
		_pdungeon[0x438] = pcVar8[0x438];
		_pdungeon[0x460] = pcVar8[0x460];
		_pdungeon[0x488] = pcVar8[0x488];
		_pdungeon[0x4b0] = pcVar8[0x4b0];
		_pdungeon[0x4d8] = pcVar8[0x4d8];
		_pdungeon[0x500] = pcVar8[0x500];
		_pdungeon[0x528] = pcVar8[0x528];
		_pdungeon[0x550] = pcVar8[0x550];
		_pdungeon[0x578] = pcVar8[0x578];
		_pdungeon[0x5a0] = pcVar8[0x5a0];
		_pdungeon[0x5c8] = pcVar8[0x5c8];
		_pdungeon[0x5f0] = pcVar8[0x5f0];
		_pdungeon[0x618] = pcVar8[0x618];
		_pdungeon[1] = pcVar8[1];
		_pdungeon[0x29] = pcVar8[0x29];
		_pdungeon[0x51] = pcVar8[0x51];
		_pdungeon[0x79] = pcVar8[0x79];
		_pdungeon[0xa1] = pcVar8[0xa1];
		_pdungeon[0xc9] = pcVar8[0xc9];
		_pdungeon[0xf1] = pcVar8[0xf1];
		_pdungeon[0x119] = pcVar8[0x119];
		_pdungeon[0x141] = pcVar8[0x141];
		_pdungeon[0x169] = pcVar8[0x169];
		_pdungeon[0x191] = pcVar8[0x191];
		_pdungeon[0x1b9] = pcVar8[0x1b9];
		_pdungeon[0x1e1] = pcVar8[0x1e1];
		_pdungeon[0x209] = pcVar8[0x209];
		_pdungeon[0x231] = pcVar8[0x231];
		_pdungeon[0x259] = pcVar8[0x259];
		_pdungeon[0x281] = pcVar8[0x281];
		_pdungeon[0x2a9] = pcVar8[0x2a9];
		_pdungeon[0x2d1] = pcVar8[0x2d1];
		_pdungeon[0x2f9] = pcVar8[0x2f9];
		_pdungeon[0x321] = pcVar8[0x321];
		_pdungeon[0x349] = pcVar8[0x349];
		_pdungeon[0x371] = pcVar8[0x371];
		_pdungeon[0x399] = pcVar8[0x399];
		_pdungeon[0x3c1] = pcVar8[0x3c1];
		_pdungeon[0x3e9] = pcVar8[0x3e9];
		_pdungeon[0x411] = pcVar8[0x411];
		_pdungeon[0x439] = pcVar8[0x439];
		_pdungeon[0x461] = pcVar8[0x461];
		_pdungeon[0x489] = pcVar8[0x489];
		_pdungeon[0x4b1] = pcVar8[0x4b1];
		_pdungeon[0x4d9] = pcVar8[0x4d9];
		_pdungeon[0x501] = pcVar8[0x501];
		_pdungeon[0x529] = pcVar8[0x529];
		_pdungeon[0x551] = pcVar8[0x551];
		_pdungeon[0x579] = pcVar8[0x579];
		_pdungeon[0x5a1] = pcVar8[0x5a1];
		_pdungeon[0x5c9] = pcVar8[0x5c9];
		_pdungeon[0x5f1] = pcVar8[0x5f1];
		pcVar7 = pcVar8 + 0x619;
		pcVar8 = pcVar8 + 2;
		_pdungeon[0x619] = *pcVar7;
		_pdungeon = _pdungeon + 2;
		lVar10 = lVar10 + -1;
	} while (lVar10 != 0);
	DRLG_Init_Globals();
	DRLG_CheckQuests(_DAT_1013b36c, _DAT_1013b368);
	return;
}

void CreateL5Dungeon(DWORD rseed, int entry)

{
	undefined4 *puVar1;
	undefined4 *puVar2;
	int iVar3;

	iVar3 = 0x100f8fd0;
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
	DRLG_LoadL1SP();
	DRLG_L5(entry);
	DRLG_L1Pass3();
	DRLG_FreeL1SP();
	DRLG_InitL1Vals();
	DRLG_SetPC();
	return;
}