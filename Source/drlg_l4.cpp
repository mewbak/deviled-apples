
void DRLG_L4Shadows(void)

{
	byte bVar1;
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
			bVar1 = *pbVar3;
			if (bVar1 == 0xf || (bVar1 == 8 || (bVar1 == 4 || bVar1 == 3))) {
				if (pbVar3[-0x28] == 6) {
					pbVar3[-0x28] = 0x2f;
				}
				if (pbVar3[-0x29] == 6) {
					pbVar3[-0x29] = 0x30;
				}
			}
			bVar1 = pbVar3[0x28];
			if (bVar1 == 0xf || (bVar1 == 8 || (bVar1 == 4 || bVar1 == 3))) {
				if (*pbVar3 == 6) {
					*pbVar3 = 0x2f;
				}
				if (pbVar3[-1] == 6) {
					pbVar3[-1] = 0x30;
				}
			}
			bVar1 = pbVar3[0x50];
			if (bVar1 == 0xf || (bVar1 == 8 || (bVar1 == 4 || bVar1 == 3))) {
				if (pbVar3[0x28] == 6) {
					pbVar3[0x28] = 0x2f;
				}
				if (pbVar3[0x27] == 6) {
					pbVar3[0x27] = 0x30;
				}
			}
			pbVar3 = pbVar3 + 0x78;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		pbVar2 = pbVar2 + 1;
	} while (iVar4 < 0x28);
	return;
}

void InitL4Dungeon(void)

{
	undefined *puVar1;
	undefined in_r5;
	undefined *puVar2;
	undefined in_r6;
	undefined *puVar3;
	undefined in_r7;
	undefined *puVar4;
	undefined in_r8;
	int iVar5;
	undefined in_r9;
	undefined in_r10;
	longlong lVar6;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	int local_3c;

	ZeroMemory(0x6c, 0x90, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	ZeroMemory((char)*(undefined4 *)(local_3c + -0x72cc), 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	puVar3 = *(undefined **)(local_3c + -0x77cc);
	iVar5 = 0;
	puVar4 = *(undefined **)(local_3c + -0x7514);
	do {
		lVar6 = 5;
		puVar1 = puVar3;
		puVar2 = puVar4;
		do {
			*puVar1 = 0x1e;
			*puVar2 = 0;
			puVar1[0x28] = 0x1e;
			puVar2[0x28] = 0;
			puVar1[0x50] = 0x1e;
			puVar2[0x50] = 0;
			puVar1[0x78] = 0x1e;
			puVar2[0x78] = 0;
			puVar1[0xa0] = 0x1e;
			puVar2[0xa0] = 0;
			puVar1[200] = 0x1e;
			puVar2[200] = 0;
			puVar1[0xf0] = 0x1e;
			puVar2[0xf0] = 0;
			puVar1[0x118] = 0x1e;
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

void DRLG_LoadL4SP(void)

{
	int iVar1;
	BOOL BVar2;

	iVar1 = 0x100f8fd0;
	_DAT_1013b358 = 0;
	BVar2 = QuestStatus(0xb);
	if (BVar2 != 0) {
		_DAT_1013b35c = LoadFileInMem(*(char **)(iVar1 + -0x62c8), (DWORD *)0x0);
		_DAT_1013b358 = 1;
	}
	if ((**(char **)(iVar1 + -0x77e4) == '\x0f') && (**(char **)(iVar1 + -0x77f0) != '\x01')) {
		_DAT_1013b35c = LoadFileInMem(*(char **)(iVar1 + -0x62cc), (DWORD *)0x0);
		_DAT_1013b358 = 1;
	}
	return;
}

void DRLG_FreeL4SP(void)

{
	MemFreeDbg((int **)&DAT_1013b35c);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_L4SetSPRoom(int rx1, int ry1)

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
					*(undefined *)(iVar8 + (rx1 + iVar6) * 0x28) = 6;
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

void L4makeDmt(void)

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

	iVar9 = 1;
	pbVar8 = dungeon;
	iVar7 = 0x1012be1d;
	do {
		pbVar5 = (byte *)(iVar7 + 0x50);
		lVar10 = 0xd;
		pbVar6 = pbVar8;
		do {
			*pbVar6 = (&DAT_100f8cc3)[(uint)pbVar5[0x51] * 8 + (uint)pbVar5[1] * 4 + (uint)*pbVar5 + (uint)pbVar5[0x50] * 2];
			pbVar6[0x28] = (&DAT_100f8cc3)[(uint)pbVar5[0xf1] * 8 + (uint)pbVar5[0xa1] * 4 + (uint)pbVar5[0xa0] + (uint)pbVar5[0xf0] * 2];
			pbVar1 = pbVar5 + 0x191;
			pbVar2 = pbVar5 + 400;
			pbVar3 = pbVar5 + 0x141;
			pbVar4 = pbVar5 + 0x140;
			pbVar5 = pbVar5 + 0x1e0;
			pbVar6[0x50] = (&DAT_100f8cc3)[(uint)*pbVar1 * 8 + (uint)*pbVar3 * 4 + (uint)*pbVar4 + (uint)*pbVar2 * 2];
			pbVar6 = pbVar6 + 0x78;
			lVar10 = lVar10 + -1;
		} while (lVar10 != 0);
		iVar9 = iVar9 + 2;
		iVar7 = iVar7 + 2;
		pbVar8 = pbVar8 + 1;
	} while (iVar9 < 0x4e);
	return;
}

int L4HWallOk(int i, int j)

{
	byte bVar1;
	int iVar2;
	byte *pbVar3;
	int iVar4;

	iVar4 = 1;
	while (true) {
		iVar2 = (i + iVar4) * 0x28;
		pbVar3 = dungeon + iVar2 + j;
		if ((((*pbVar3 != 6) || ((&DAT_1013b370)[iVar2 + j] != '\0')) || (pbVar3[-1] != 6)) || (pbVar3[1] != 6))
			break;
		iVar4 = iVar4 + 1;
	}
	bVar1 = dungeon[iVar2 + j];
	if (3 < iVar4 && (bVar1 == 0x16 || (bVar1 == 0x15 || (bVar1 == 0x10 || (bVar1 == 0xf || (bVar1 == 0xd || (bVar1 == 0xc || bVar1 == 10))))))) {
		return iVar4;
	}
	return -1;
}

int L4VWallOk(int i, int j)

{
	byte bVar1;
	byte *pbVar2;
	int iVar3;
	char *pcVar4;

	pcVar4 = (char *)(i * 0x28 + j + 0x1013b371);
	iVar3 = 1;
	pbVar2 = dungeon + i * 0x28 + j;
	while ((((pbVar2[1] == 6 && (*pcVar4 == '\0')) && (pbVar2[-0x27] == 6)) && (pbVar2[0x29] == 6))) {
		pcVar4 = pcVar4 + 1;
		iVar3 = iVar3 + 1;
		pbVar2 = pbVar2 + 1;
	}
	bVar1 = (dungeon + i * 0x28 + j)[iVar3];
	if (3 < iVar3 && (bVar1 == 0x17 || (bVar1 == 0x15 || (bVar1 == 0x10 || (bVar1 == 0xf || (bVar1 == 0xe || (bVar1 == 0xb || (bVar1 == 9 || bVar1 == 8)))))))) {
		return iVar3;
	}
	return -1;
}

void L4HorizWall(int i, int j, int dx)

{
	int iVar1;
	ulonglong uVar2;
	int iVar3;
	int iVar4;
	byte *pbVar5;

	pbVar5 = dungeon + i * 0x28 + j;
	if (*pbVar5 == 0xd) {
		*pbVar5 = 0x11;
	}
	if (*pbVar5 == 0x10) {
		*pbVar5 = 0xb;
	}
	if (*pbVar5 == 0xc) {
		*pbVar5 = 0xe;
	}
	iVar3 = 1;
	if (1 < dx) {
		if (8 < dx + -1) {
			uVar2 = (ulonglong)(dx - 2U >> 3);
			pbVar5 = dungeon + j;
			if (1 < dx + -8) {
				do {
					iVar4 = i + iVar3;
					iVar3 = iVar3 + 8;
					pbVar5[iVar4 * 0x28] = 2;
					pbVar5[(iVar4 + 1) * 0x28] = 2;
					pbVar5[(iVar4 + 2) * 0x28] = 2;
					pbVar5[(iVar4 + 3) * 0x28] = 2;
					pbVar5[(iVar4 + 4) * 0x28] = 2;
					pbVar5[(iVar4 + 5) * 0x28] = 2;
					pbVar5[(iVar4 + 6) * 0x28] = 2;
					pbVar5[(iVar4 + 7) * 0x28] = 2;
					uVar2 = uVar2 - 1;
				} while (uVar2 != 0);
			}
		}
		iVar4 = dx - iVar3;
		if (iVar3 < dx) {
			do {
				iVar1 = i + iVar3;
				iVar3 = iVar3 + 1;
				dungeon[iVar1 * 0x28 + j] = 2;
				iVar4 = iVar4 + -1;
			} while (iVar4 != 0);
		}
	}
	pbVar5 = dungeon + (i + dx) * 0x28 + j;
	if (*pbVar5 == 0xf) {
		*pbVar5 = 0xe;
	}
	if (*pbVar5 == 10) {
		*pbVar5 = 0x11;
	}
	if (*pbVar5 == 0x15) {
		*pbVar5 = 0x17;
	}
	if (*pbVar5 == 0x16) {
		*pbVar5 = 0x1d;
	}
	iVar3 = random('\0', dx + -3);
	iVar3 = (i + iVar3 + 1) * 0x28;
	pbVar5 = dungeon + j + iVar3;
	dungeon[iVar3 + j] = 0x39;
	pbVar5[0x50] = 0x38;
	pbVar5[0x28] = 0x3c;
	if (pbVar5[-1] == 6) {
		pbVar5[-1] = 0x3a;
	}
	if (dungeon[iVar3 + j + 0x27] == 6) {
		dungeon[iVar3 + j + 0x27] = 0x3b;
	}
	return;
}

void L4VertWall(int i, int j, int dy)

{
	char *pcVar1;
	ulonglong uVar2;
	int iVar3;
	int iVar4;
	byte *pbVar5;
	byte *pbVar6;

	i = i * 0x28;
	pbVar6 = dungeon + i + j;
	if (*pbVar6 == 0xe) {
		*pbVar6 = 0x11;
	}
	if (*pbVar6 == 8) {
		*pbVar6 = 9;
	}
	if (*pbVar6 == 0xf) {
		*pbVar6 = 10;
	}
	iVar4 = 1;
	if (1 < dy) {
		if (8 < dy + -1) {
			uVar2 = (ulonglong)(dy - 2U >> 3);
			pbVar5 = dungeon + i + j + 1;
			if (1 < dy + -8) {
				do {
					*pbVar5 = 1;
					iVar4 = iVar4 + 8;
					pbVar5[1] = 1;
					pbVar5[2] = 1;
					pbVar5[3] = 1;
					pbVar5[4] = 1;
					pbVar5[5] = 1;
					pbVar5[6] = 1;
					pbVar5[7] = 1;
					pbVar5 = pbVar5 + 8;
					uVar2 = uVar2 - 1;
				} while (uVar2 != 0);
			}
		}
		pbVar5 = pbVar6 + iVar4;
		iVar3 = dy - iVar4;
		if (iVar4 < dy) {
			do {
				*pbVar5 = 1;
				pbVar5 = pbVar5 + 1;
				iVar3 = iVar3 + -1;
			} while (iVar3 != 0);
		}
	}
	pbVar5 = pbVar6 + dy;
	if (*pbVar5 == 0xb) {
		*pbVar5 = 0x11;
	}
	if (*pbVar5 == 9) {
		*pbVar5 = 10;
	}
	if (*pbVar5 == 0x10) {
		*pbVar5 = 0xd;
	}
	if (*pbVar5 == 0x15) {
		*pbVar5 = 0x16;
	}
	if (*pbVar5 == 0x17) {
		*pbVar5 = 0x1d;
	}
	iVar4 = random('\0', dy + -3);
	iVar4 = iVar4 + 1;
	pbVar5 = dungeon + iVar4 + j + i;
	pbVar6[iVar4] = 0x35;
	pbVar5[2] = 0x34;
	pbVar5[1] = 6;
	if (pbVar5[-0x28] == 6) {
		pbVar5[-0x28] = 0x36;
	}
	pcVar1 = (char *)(i + j + iVar4 + 0x1013bfc7);
	if (*pcVar1 == '\x06') {
		*pcVar1 = '7';
	}
	return;
}

void L4AddWall(void)

{
	int dx;
	char *pcVar1;
	byte *pbVar2;
	char *pcVar3;
	byte *pbVar4;
	int j;
	int i;

	pcVar1 = &DAT_1013b370;
	j = 0;
	pbVar2 = dungeon;
	do {
		i = 0;
		pcVar3 = pcVar1;
		pbVar4 = pbVar2;
		do {
			if (*pcVar3 == '\0') {
				if (((*pbVar4 == 10) && (dx = random('\0', 100), dx < 100)) && (dx = L4HWallOk(i, j), dx != -1)) {
					L4HorizWall(i, j, dx);
				}
				if (((*pbVar4 == 0xc) && (dx = random('\0', 100), dx < 100)) && (dx = L4HWallOk(i, j), dx != -1)) {
					L4HorizWall(i, j, dx);
				}
				if (((*pbVar4 == 0xd) && (dx = random('\0', 100), dx < 100)) && (dx = L4HWallOk(i, j), dx != -1)) {
					L4HorizWall(i, j, dx);
				}
				if (((*pbVar4 == 0xf) && (dx = random('\0', 100), dx < 100)) && (dx = L4HWallOk(i, j), dx != -1)) {
					L4HorizWall(i, j, dx);
				}
				if (((*pbVar4 == 0x10) && (dx = random('\0', 100), dx < 100)) && (dx = L4HWallOk(i, j), dx != -1)) {
					L4HorizWall(i, j, dx);
				}
				if (((*pbVar4 == 0x15) && (dx = random('\0', 100), dx < 100)) && (dx = L4HWallOk(i, j), dx != -1)) {
					L4HorizWall(i, j, dx);
				}
				if (((*pbVar4 == 0x16) && (dx = random('\0', 100), dx < 100)) && (dx = L4HWallOk(i, j), dx != -1)) {
					L4HorizWall(i, j, dx);
				}
				if (((*pbVar4 == 8) && (dx = random('\0', 100), dx < 100)) && (dx = L4VWallOk(i, j), dx != -1)) {
					L4VertWall(i, j, dx);
				}
				if (((*pbVar4 == 9) && (dx = random('\0', 100), dx < 100)) && (dx = L4VWallOk(i, j), dx != -1)) {
					L4VertWall(i, j, dx);
				}
				if (((*pbVar4 == 0xb) && (dx = random('\0', 100), dx < 100)) && (dx = L4VWallOk(i, j), dx != -1)) {
					L4VertWall(i, j, dx);
				}
				if (((*pbVar4 == 0xe) && (dx = random('\0', 100), dx < 100)) && (dx = L4VWallOk(i, j), dx != -1)) {
					L4VertWall(i, j, dx);
				}
				if (((*pbVar4 == 0xf) && (dx = random('\0', 100), dx < 100)) && (dx = L4VWallOk(i, j), dx != -1)) {
					L4VertWall(i, j, dx);
				}
				if (((*pbVar4 == 0x10) && (dx = random('\0', 100), dx < 100)) && (dx = L4VWallOk(i, j), dx != -1)) {
					L4VertWall(i, j, dx);
				}
				if (((*pbVar4 == 0x15) && (dx = random('\0', 100), dx < 100)) && (dx = L4VWallOk(i, j), dx != -1)) {
					L4VertWall(i, j, dx);
				}
				if (((*pbVar4 == 0x17) && (dx = random('\0', 100), dx < 100)) && (dx = L4VWallOk(i, j), dx != -1)) {
					L4VertWall(i, j, dx);
				}
			}
			i = i + 1;
			pbVar4 = pbVar4 + 0x28;
			pcVar3 = pcVar3 + 0x28;
		} while (i < 0x28);
		j = j + 1;
		pbVar2 = pbVar2 + 1;
		pcVar1 = pcVar1 + 1;
	} while (j < 0x28);
	return;
}

void L4tileFix(void)

{
	byte *pbVar1;
	byte *pbVar2;
	byte *pbVar3;
	byte *pbVar4;
	int iVar5;
	longlong lVar6;

	pbVar4 = dungeon;
	iVar5 = 0;
	pbVar3 = pbVar4;
	do {
		lVar6 = 0x14;
		pbVar2 = pbVar3;
		do {
			if ((*pbVar2 == 2) && (pbVar2[0x28] == 6)) {
				pbVar2[0x28] = 5;
			}
			if ((*pbVar2 == 2) && (pbVar2[0x28] == 1)) {
				pbVar2[0x28] = 0xd;
			}
			if ((*pbVar2 == 1) && (pbVar2[1] == 2)) {
				pbVar2[1] = 0xe;
			}
			pbVar1 = pbVar2 + 0x28;
			if ((*pbVar1 == 2) && (pbVar2[0x50] == 6)) {
				pbVar2[0x50] = 5;
			}
			if ((*pbVar1 == 2) && (pbVar2[0x50] == 1)) {
				pbVar2[0x50] = 0xd;
			}
			if ((*pbVar1 == 1) && (pbVar2[0x29] == 2)) {
				pbVar2[0x29] = 0xe;
			}
			pbVar2 = pbVar2 + 0x50;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
		iVar5 = iVar5 + 1;
		pbVar3 = pbVar3 + 1;
	} while (iVar5 < 0x28);
	iVar5 = 0;
	pbVar3 = pbVar4;
	do {
		lVar6 = 0x28;
		pbVar2 = pbVar3;
		do {
			if ((*pbVar2 == 2) && (pbVar2[0x28] == 6)) {
				pbVar2[0x28] = 2;
			}
			if ((*pbVar2 == 2) && (pbVar2[0x28] == 9)) {
				pbVar2[0x28] = 0xb;
			}
			if ((*pbVar2 == 9) && (pbVar2[0x28] == 6)) {
				pbVar2[0x28] = 0xc;
			}
			if ((*pbVar2 == 0xe) && (pbVar2[0x28] == 1)) {
				pbVar2[0x28] = 0xd;
			}
			if ((*pbVar2 == 6) && (pbVar2[0x28] == 0xe)) {
				pbVar2[0x28] = 0xf;
			}
			if ((*pbVar2 == 6) && (pbVar2[1] == 0xd)) {
				pbVar2[1] = 0x10;
			}
			if ((*pbVar2 == 1) && (pbVar2[1] == 9)) {
				pbVar2[1] = 10;
			}
			if ((*pbVar2 == 6) && (pbVar2[-1] == 1)) {
				pbVar2[-1] = 1;
			}
			pbVar2 = pbVar2 + 0x28;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
		iVar5 = iVar5 + 1;
		pbVar3 = pbVar3 + 1;
	} while (iVar5 < 0x28);
	iVar5 = 0;
	pbVar3 = pbVar4;
	do {
		lVar6 = 0x28;
		pbVar2 = pbVar3;
		do {
			if ((*pbVar2 == 0xd) && (pbVar2[1] == 0x1e)) {
				pbVar2[1] = 0x1b;
			}
			if ((*pbVar2 == 0x1b) && (pbVar2[0x28] == 0x1e)) {
				pbVar2[0x28] = 0x13;
			}
			if ((*pbVar2 == 1) && (pbVar2[1] == 0x1e)) {
				pbVar2[1] = 0x1b;
			}
			if ((*pbVar2 == 0x1b) && (pbVar2[0x28] == 1)) {
				pbVar2[0x28] = 0x10;
			}
			if ((*pbVar2 == 0x13) && (pbVar2[0x28] == 0x1b)) {
				pbVar2[0x28] = 0x1a;
			}
			if ((*pbVar2 == 0x1b) && (pbVar2[0x28] == 0x1e)) {
				pbVar2[0x28] = 0x13;
			}
			if ((*pbVar2 == 2) && (pbVar2[0x28] == 0xf)) {
				pbVar2[0x28] = 0xe;
			}
			if ((*pbVar2 == 0xe) && (pbVar2[0x28] == 0xf)) {
				pbVar2[0x28] = 0xe;
			}
			if ((*pbVar2 == 0x16) && (pbVar2[0x28] == 1)) {
				pbVar2[0x28] = 0x10;
			}
			if ((*pbVar2 == 0x1b) && (pbVar2[0x28] == 1)) {
				pbVar2[0x28] = 0x10;
			}
			if (((*pbVar2 == 6) && (pbVar2[0x28] == 0x1b)) && (pbVar2[0x29] != 0)) {
				pbVar2[0x28] = 0x16;
			}
			if ((*pbVar2 == 0x16) && (pbVar2[0x28] == 0x1e)) {
				pbVar2[0x28] = 0x13;
			}
			if (((*pbVar2 == 0x15) && (pbVar2[0x28] == 1)) && (pbVar2[0x27] == 1)) {
				pbVar2[0x28] = 0xd;
			}
			if (((*pbVar2 == 0xe) && (pbVar2[0x28] == 0x1e)) && (pbVar2[1] == 6)) {
				pbVar2[0x28] = 0x1c;
			}
			if (((*pbVar2 == 0x10) && (pbVar2[0x28] == 6)) && (pbVar2[1] == 0x1e)) {
				pbVar2[1] = 0x1b;
			}
			if (((*pbVar2 == 0x10) && (pbVar2[1] == 0x1e)) && (pbVar2[0x29] == 0x1e)) {
				pbVar2[1] = 0x1b;
			}
			if (((*pbVar2 == 6) && (pbVar2[0x28] == 0x1e)) && (pbVar2[0x27] == 6)) {
				pbVar2[0x28] = 0x15;
			}
			if (((*pbVar2 == 2) && (pbVar2[0x28] == 0x1b)) && (pbVar2[0x29] == 9)) {
				pbVar2[0x28] = 0x1d;
			}
			if ((*pbVar2 == 9) && (pbVar2[0x28] == 0xf)) {
				pbVar2[0x28] = 0xe;
			}
			if (((*pbVar2 == 0xf) && (pbVar2[0x28] == 0x1b)) && (pbVar2[0x29] == 2)) {
				pbVar2[0x28] = 0x1d;
			}
			if ((*pbVar2 == 0x13) && (pbVar2[0x28] == 0x12)) {
				pbVar2[0x28] = 0x18;
			}
			if ((*pbVar2 == 9) && (pbVar2[0x28] == 0xf)) {
				pbVar2[0x28] = 0xe;
			}
			if (((*pbVar2 == 0x13) && (pbVar2[0x28] == 0x13)) && (pbVar2[0x27] == 0x1e)) {
				pbVar2[0x28] = 0x18;
			}
			if (((*pbVar2 == 0x18) && (pbVar2[-1] == 0x1e)) && (pbVar2[-2] == 6)) {
				pbVar2[-1] = 0x15;
			}
			if ((*pbVar2 == 2) && (pbVar2[0x28] == 0x1e)) {
				pbVar2[0x28] = 0x1c;
			}
			if ((*pbVar2 == 0xf) && (pbVar2[0x28] == 0x1e)) {
				pbVar2[0x28] = 0x1c;
			}
			if ((*pbVar2 == 0x1c) && (pbVar2[1] == 0x1e)) {
				pbVar2[1] = 0x12;
			}
			if ((*pbVar2 == 0x1c) && (pbVar2[1] == 2)) {
				pbVar2[1] = 0xf;
			}
			if ((((*pbVar2 == 0x13) && (pbVar2[0x50] == 2)) && (pbVar2[0x27] == 0x12)) && (pbVar2[0x29] == 1)) {
				pbVar2[0x28] = 0x11;
			}
			if (((*pbVar2 == 0x13) && (pbVar2[0x50] == 2)) && ((pbVar2[0x27] == 0x16 && (pbVar2[0x29] == 1)))) {
				pbVar2[0x28] = 0x11;
			}
			if (((*pbVar2 == 0x13) && (pbVar2[0x50] == 2)) && ((pbVar2[0x27] == 0x12 && (pbVar2[0x29] == 0xd)))) {
				pbVar2[0x28] = 0x11;
			}
			if ((((*pbVar2 == 0x15) && (pbVar2[0x50] == 2)) && (pbVar2[0x27] == 0x12)) && (pbVar2[0x29] == 1)) {
				pbVar2[0x28] = 0x11;
			}
			if (((*pbVar2 == 0x15) && (pbVar2[0x29] == 1)) && ((pbVar2[0x27] == 0x16 && (pbVar2[0x50] == 3)))) {
				pbVar2[0x28] = 0x11;
			}
			if (((*pbVar2 == 0xf) && (pbVar2[0x28] == 0x1c)) && ((pbVar2[0x50] == 0x1e && (pbVar2[0x27] == 6)))) {
				pbVar2[0x28] = 0x17;
			}
			if (((*pbVar2 == 0xe) && (pbVar2[0x28] == 0x1c)) && (pbVar2[0x50] == 1)) {
				pbVar2[0x28] = 0x17;
			}
			if (((*pbVar2 == 0xf) && (pbVar2[0x28] == 0x1b)) && (pbVar2[0x29] == 0x1e)) {
				pbVar2[0x28] = 0x1d;
			}
			if ((*pbVar2 == 0x1c) && (pbVar2[1] == 9)) {
				pbVar2[1] = 0xf;
			}
			if ((*pbVar2 == 0x15) && (pbVar2[0x27] == 0x15)) {
				pbVar2[0x28] = 0x18;
			}
			if (((*pbVar2 == 2) && (pbVar2[0x28] == 0x1b)) && (pbVar2[0x29] == 0x1e)) {
				pbVar2[0x28] = 0x1d;
			}
			if ((*pbVar2 == 2) && (pbVar2[0x28] == 0x12)) {
				pbVar2[0x28] = 0x19;
			}
			if (((*pbVar2 == 0x15) && (pbVar2[0x28] == 9)) && (pbVar2[0x50] == 2)) {
				pbVar2[0x28] = 0xb;
			}
			if ((*pbVar2 == 0x13) && (pbVar2[0x28] == 10)) {
				pbVar2[0x28] = 0x11;
			}
			if ((*pbVar2 == 0xf) && (pbVar2[1] == 3)) {
				pbVar2[1] = 4;
			}
			if ((*pbVar2 == 0x16) && (pbVar2[1] == 9)) {
				pbVar2[1] = 0xf;
			}
			if ((*pbVar2 == 0x12) && (pbVar2[1] == 0x1e)) {
				pbVar2[1] = 0x12;
			}
			if ((*pbVar2 == 0x18) && (pbVar2[-0x28] == 0x1e)) {
				pbVar2[-0x28] = 0x13;
			}
			if ((*pbVar2 == 0x15) && (pbVar2[1] == 2)) {
				pbVar2[1] = 0xf;
			}
			if ((*pbVar2 == 0x15) && (pbVar2[1] == 9)) {
				pbVar2[1] = 10;
			}
			if ((*pbVar2 == 0x16) && (pbVar2[1] == 0x1e)) {
				pbVar2[1] = 0x12;
			}
			if ((*pbVar2 == 0x15) && (pbVar2[1] == 0x1e)) {
				pbVar2[1] = 0x12;
			}
			if ((*pbVar2 == 0x10) && (pbVar2[1] == 2)) {
				pbVar2[1] = 0xf;
			}
			if ((*pbVar2 == 0xd) && (pbVar2[1] == 2)) {
				pbVar2[1] = 0xf;
			}
			if ((*pbVar2 == 0x16) && (pbVar2[1] == 2)) {
				pbVar2[1] = 0xf;
			}
			if (((*pbVar2 == 0x15) && (pbVar2[0x28] == 0x12)) && (pbVar2[0x50] == 0x1e)) {
				pbVar2[0x28] = 0x18;
			}
			if (((*pbVar2 == 0x15) && (pbVar2[0x28] == 9)) && (pbVar2[0x29] == 1)) {
				pbVar2[0x28] = 0x10;
			}
			if (((*pbVar2 == 2) && (pbVar2[0x28] == 0x1b)) && (pbVar2[0x29] == 2)) {
				pbVar2[0x28] = 0x1d;
			}
			if ((*pbVar2 == 0x17) && (pbVar2[1] == 2)) {
				pbVar2[1] = 0xf;
			}
			if ((*pbVar2 == 0x17) && (pbVar2[1] == 9)) {
				pbVar2[1] = 0xf;
			}
			if ((*pbVar2 == 0x19) && (pbVar2[1] == 2)) {
				pbVar2[1] = 0xf;
			}
			if ((*pbVar2 == 0x16) && (pbVar2[0x28] == 9)) {
				pbVar2[0x28] = 0xb;
			}
			if ((*pbVar2 == 0x17) && (pbVar2[0x28] == 9)) {
				pbVar2[0x28] = 0xb;
			}
			if ((*pbVar2 == 0xf) && (pbVar2[0x28] == 1)) {
				pbVar2[0x28] = 0x10;
			}
			if ((*pbVar2 == 0xb) && (pbVar2[0x28] == 0xf)) {
				pbVar2[0x28] = 0xe;
			}
			if ((*pbVar2 == 0x17) && (pbVar2[0x28] == 1)) {
				pbVar2[0x28] = 0x10;
			}
			if ((*pbVar2 == 0x15) && (pbVar2[0x28] == 0x1b)) {
				pbVar2[0x28] = 0x1a;
			}
			if ((*pbVar2 == 0x15) && (pbVar2[0x28] == 0x12)) {
				pbVar2[0x28] = 0x18;
			}
			if ((*pbVar2 == 0x1a) && (pbVar2[0x28] == 1)) {
				pbVar2[0x28] = 0x10;
			}
			if ((*pbVar2 == 0x1d) && (pbVar2[0x28] == 1)) {
				pbVar2[0x28] = 0x10;
			}
			if ((*pbVar2 == 0x1d) && (pbVar2[1] == 2)) {
				pbVar2[1] = 0xf;
			}
			if ((*pbVar2 == 1) && (pbVar2[-1] == 0xf)) {
				pbVar2[-1] = 10;
			}
			if ((*pbVar2 == 0x12) && (pbVar2[1] == 2)) {
				pbVar2[1] = 0xf;
			}
			if ((*pbVar2 == 0x17) && (pbVar2[1] == 0x1e)) {
				pbVar2[1] = 0x12;
			}
			if ((*pbVar2 == 0x12) && (pbVar2[1] == 9)) {
				pbVar2[1] = 10;
			}
			if (((*pbVar2 == 0xe) && (pbVar2[0x28] == 0x1e)) && (pbVar2[0x29] == 0x1e)) {
				pbVar2[0x28] = 0x17;
			}
			if (((*pbVar2 == 2) && (pbVar2[0x28] == 0x1c)) && (pbVar2[0x27] == 6)) {
				pbVar2[0x28] = 0x17;
			}
			if (((*pbVar2 == 0x17) && (pbVar2[0x28] == 0x12)) && (pbVar2[-1] == 6)) {
				pbVar2[0x28] = 0x18;
			}
			if (((*pbVar2 == 0xe) && (pbVar2[0x28] == 0x17)) && (pbVar2[0x50] == 0x1e)) {
				pbVar2[0x28] = 0x1c;
			}
			if (((*pbVar2 == 0xe) && (pbVar2[0x28] == 0x1c)) && ((pbVar2[0x50] == 0x1e && (pbVar2[0x27] == 6)))) {
				pbVar2[0x28] = 0x17;
			}
			if ((*pbVar2 == 0x17) && (pbVar2[0x28] == 0x1e)) {
				pbVar2[0x28] = 0x13;
			}
			if ((*pbVar2 == 0x1d) && (pbVar2[0x28] == 0x1e)) {
				pbVar2[0x28] = 0x13;
			}
			if ((*pbVar2 == 0x1d) && (pbVar2[1] == 0x1e)) {
				pbVar2[1] = 0x12;
			}
			if ((*pbVar2 == 0x13) && (pbVar2[0x28] == 0x1e)) {
				pbVar2[0x28] = 0x13;
			}
			if ((*pbVar2 == 0x15) && (pbVar2[0x28] == 0x1e)) {
				pbVar2[0x28] = 0x13;
			}
			if ((*pbVar2 == 0x1a) && (pbVar2[0x28] == 0x1e)) {
				pbVar2[0x28] = 0x13;
			}
			if ((*pbVar2 == 0x10) && (pbVar2[1] == 0x1e)) {
				pbVar2[1] = 0x12;
			}
			if ((*pbVar2 == 0xd) && (pbVar2[1] == 9)) {
				pbVar2[1] = 10;
			}
			if ((*pbVar2 == 0x19) && (pbVar2[1] == 0x1e)) {
				pbVar2[1] = 0x12;
			}
			if ((*pbVar2 == 0x12) && (pbVar2[1] == 2)) {
				pbVar2[1] = 0xf;
			}
			if ((*pbVar2 == 0xb) && (pbVar2[0x28] == 3)) {
				pbVar2[0x28] = 5;
			}
			if ((*pbVar2 == 0x13) && (pbVar2[0x28] == 9)) {
				pbVar2[0x28] = 0xb;
			}
			if ((*pbVar2 == 0x13) && (pbVar2[0x28] == 1)) {
				pbVar2[0x28] = 0xd;
			}
			if (((*pbVar2 == 0x13) && (pbVar2[0x28] == 0xd)) && (pbVar2[0x27] == 6)) {
				pbVar2[0x28] = 0x10;
			}
			pbVar2 = pbVar2 + 0x28;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
		iVar5 = iVar5 + 1;
		pbVar3 = pbVar3 + 1;
	} while (iVar5 < 0x28);
	iVar5 = 0;
	pbVar3 = pbVar4;
	do {
		lVar6 = 0x28;
		pbVar2 = pbVar3;
		do {
			if (((*pbVar2 == 0x15) && (pbVar2[1] == 0x18)) && (pbVar2[2] == 1)) {
				pbVar2[1] = 0x11;
			}
			if (((*pbVar2 == 0xf) && (pbVar2[0x29] == 9)) && ((pbVar2[0x27] == 1 && (pbVar2[0x50] == 0x10)))) {
				pbVar2[0x28] = 0x1d;
			}
			if ((*pbVar2 == 2) && (pbVar2[-0x28] == 6)) {
				pbVar2[-0x28] = 8;
			}
			if ((*pbVar2 == 1) && (pbVar2[-1] == 6)) {
				pbVar2[-1] = 7;
			}
			if (((*pbVar2 == 6) && (pbVar2[0x28] == 0xf)) && (pbVar2[0x29] == 4)) {
				pbVar2[0x28] = 10;
			}
			if ((*pbVar2 == 1) && (pbVar2[1] == 3)) {
				pbVar2[1] = 4;
			}
			if ((*pbVar2 == 1) && (pbVar2[1] == 6)) {
				pbVar2[1] = 4;
			}
			if ((*pbVar2 == 9) && (pbVar2[1] == 3)) {
				pbVar2[1] = 4;
			}
			if ((*pbVar2 == 10) && (pbVar2[1] == 3)) {
				pbVar2[1] = 4;
			}
			if ((*pbVar2 == 0xd) && (pbVar2[1] == 3)) {
				pbVar2[1] = 4;
			}
			if ((*pbVar2 == 1) && (pbVar2[1] == 5)) {
				pbVar2[1] = 0xc;
			}
			if ((*pbVar2 == 1) && (pbVar2[1] == 0x10)) {
				pbVar2[1] = 0xd;
			}
			if ((*pbVar2 == 6) && (pbVar2[1] == 0xd)) {
				pbVar2[1] = 0x10;
			}
			if ((*pbVar2 == 0x19) && (pbVar2[1] == 9)) {
				pbVar2[1] = 10;
			}
			if ((*pbVar2 == 0xd) && (pbVar2[1] == 5)) {
				pbVar2[1] = 0xc;
			}
			if (((*pbVar2 == 0x1c) && (pbVar2[-1] == 6)) && (pbVar2[0x28] == 1)) {
				pbVar2[0x28] = 0x17;
			}
			if ((*pbVar2 == 0x13) && (pbVar2[0x28] == 10)) {
				pbVar2[0x28] = 0x11;
			}
			if ((*pbVar2 == 0x15) && (pbVar2[0x28] == 9)) {
				pbVar2[0x28] = 0xb;
			}
			if ((*pbVar2 == 0xb) && (pbVar2[0x28] == 3)) {
				pbVar2[0x28] = 5;
			}
			if ((*pbVar2 == 10) && (pbVar2[0x28] == 4)) {
				pbVar2[0x28] = 0xc;
			}
			if ((*pbVar2 == 0xe) && (pbVar2[0x28] == 4)) {
				pbVar2[0x28] = 0xc;
			}
			if ((*pbVar2 == 0x1b) && (pbVar2[0x28] == 9)) {
				pbVar2[0x28] = 0xb;
			}
			if ((*pbVar2 == 0xf) && (pbVar2[0x28] == 4)) {
				pbVar2[0x28] = 0xc;
			}
			if ((*pbVar2 == 0x15) && (pbVar2[0x28] == 1)) {
				pbVar2[0x28] = 0x10;
			}
			if ((*pbVar2 == 0xb) && (pbVar2[0x28] == 4)) {
				pbVar2[0x28] = 0xc;
			}
			if ((*pbVar2 == 2) && (pbVar2[0x28] == 3)) {
				pbVar2[0x28] = 5;
			}
			if ((*pbVar2 == 9) && (pbVar2[0x28] == 3)) {
				pbVar2[0x28] = 5;
			}
			if ((*pbVar2 == 0xe) && (pbVar2[0x28] == 3)) {
				pbVar2[0x28] = 5;
			}
			if ((*pbVar2 == 0xf) && (pbVar2[0x28] == 3)) {
				pbVar2[0x28] = 5;
			}
			if (((*pbVar2 == 2) && (pbVar2[0x28] == 5)) && (pbVar2[0x27] == 0x10)) {
				pbVar2[0x28] = 0xc;
			}
			if ((*pbVar2 == 2) && (pbVar2[0x28] == 4)) {
				pbVar2[0x28] = 0xc;
			}
			if ((*pbVar2 == 9) && (pbVar2[0x28] == 4)) {
				pbVar2[0x28] = 0xc;
			}
			if ((*pbVar2 == 1) && (pbVar2[-1] == 8)) {
				pbVar2[-1] = 9;
			}
			if (((*pbVar2 == 0x1c) && (pbVar2[0x28] == 0x17)) && (pbVar2[0x29] == 3)) {
				pbVar2[0x28] = 0x10;
			}
			pbVar2 = pbVar2 + 0x28;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
		iVar5 = iVar5 + 1;
		pbVar3 = pbVar3 + 1;
	} while (iVar5 < 0x28);
	iVar5 = 0;
	pbVar3 = pbVar4;
	do {
		lVar6 = 0x28;
		pbVar2 = pbVar3;
		do {
			if ((*pbVar2 == 0x15) && (pbVar2[0x28] == 10)) {
				pbVar2[0x28] = 0x11;
			}
			if ((*pbVar2 == 0x11) && (pbVar2[0x28] == 4)) {
				pbVar2[0x28] = 0xc;
			}
			if ((*pbVar2 == 10) && (pbVar2[0x28] == 4)) {
				pbVar2[0x28] = 0xc;
			}
			if ((*pbVar2 == 0x11) && (pbVar2[1] == 5)) {
				pbVar2[1] = 0xc;
			}
			if ((*pbVar2 == 0x1d) && (pbVar2[1] == 9)) {
				pbVar2[1] = 10;
			}
			if ((*pbVar2 == 0xd) && (pbVar2[1] == 5)) {
				pbVar2[1] = 0xc;
			}
			if ((*pbVar2 == 9) && (pbVar2[1] == 0x10)) {
				pbVar2[1] = 0xd;
			}
			if ((*pbVar2 == 10) && (pbVar2[1] == 0x10)) {
				pbVar2[1] = 0xd;
			}
			if ((*pbVar2 == 0x10) && (pbVar2[1] == 3)) {
				pbVar2[1] = 4;
			}
			if ((*pbVar2 == 0xb) && (pbVar2[1] == 5)) {
				pbVar2[1] = 0xc;
			}
			if (((*pbVar2 == 10) && (pbVar2[0x28] == 3)) && (pbVar2[0x27] == 0x10)) {
				pbVar2[0x28] = 0xc;
			}
			if ((*pbVar2 == 0x10) && (pbVar2[1] == 5)) {
				pbVar2[1] = 0xc;
			}
			if ((*pbVar2 == 1) && (pbVar2[1] == 6)) {
				pbVar2[1] = 4;
			}
			if (((*pbVar2 == 0x15) && (pbVar2[0x28] == 0xd)) && (pbVar2[1] == 10)) {
				pbVar2[0x29] = 0xc;
			}
			if ((*pbVar2 == 0xf) && (pbVar2[0x28] == 10)) {
				pbVar2[0x28] = 0x11;
			}
			if ((*pbVar2 == 0x16) && (pbVar2[1] == 0xb)) {
				pbVar2[1] = 0x11;
			}
			if (((*pbVar2 == 0xf) && (pbVar2[0x28] == 0x1c)) && (pbVar2[0x50] == 0x10)) {
				pbVar2[0x28] = 0x17;
			}
			if (((*pbVar2 == 0x1c) && (pbVar2[0x28] == 0x17)) && ((pbVar2[0x29] == 1 && (pbVar2[0x50] == 6)))) {
				pbVar2[0x28] = 0x10;
			}
			pbVar2 = pbVar2 + 0x28;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
		iVar5 = iVar5 + 1;
		pbVar3 = pbVar3 + 1;
	} while (iVar5 < 0x28);
	iVar5 = 0;
	do {
		lVar6 = 0x14;
		pbVar3 = pbVar4;
		do {
			if (((*pbVar3 == 0xf) && (pbVar3[0x28] == 0x1c)) && (pbVar3[0x50] == 0x10)) {
				pbVar3[0x28] = 0x17;
			}
			if ((((*pbVar3 == 0x15) && (pbVar3[0x27] == 0x15)) && (pbVar3[0x29] == 0xd)) && (pbVar3[0x50] == 2)) {
				pbVar3[0x28] = 0x11;
			}
			if (((*pbVar3 == 0x13) && (pbVar3[0x28] == 0xf)) && (pbVar3[0x29] == 0xc)) {
				pbVar3[0x28] = 0x11;
			}
			pbVar2 = pbVar3 + 0x28;
			if (((*pbVar2 == 0xf) && (pbVar3[0x50] == 0x1c)) && (pbVar3[0x78] == 0x10)) {
				pbVar3[0x50] = 0x17;
			}
			if ((((*pbVar2 == 0x15) && (pbVar3[0x4f] == 0x15)) && (pbVar3[0x51] == 0xd)) && (pbVar3[0x78] == 2)) {
				pbVar3[0x50] = 0x11;
			}
			if (((*pbVar2 == 0x13) && (pbVar3[0x50] == 0xf)) && (pbVar3[0x51] == 0xc)) {
				pbVar3[0x50] = 0x11;
			}
			pbVar3 = pbVar3 + 0x50;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
		iVar5 = iVar5 + 1;
		pbVar4 = pbVar4 + 1;
	} while (iVar5 < 0x28);
	return;
}

void DRLG_L4Subs(void)

{
	char cVar1;
	int iVar2;
	longlong lVar3;
	int iVar4;
	int iVar5;
	char *pcVar6;
	byte *pbVar7;
	byte *pbVar8;
	char *pcVar9;
	char *pcVar10;
	byte *pbVar11;

	pbVar7 = dungeon;
	iVar4 = 0;
	pcVar6 = &DAT_1013b370;
	pcVar9 = pcVar6;
	pbVar8 = pbVar7;
	do {
		iVar5 = 0;
		pcVar10 = pcVar9;
		pbVar11 = pbVar8;
		do {
			iVar2 = random('\0', 3);
			if (((iVar2 == 0) && (cVar1 = (&DAT_100f8dc3)[(uint)*pbVar11], cVar1 != '\0')) && (*pcVar10 == '\0')) {
				iVar2 = random('\0', 0x10);
				lVar3 = -1;
				while (-1 < iVar2) {
					lVar3 = lVar3 + 1;
					if ((int)lVar3 == 0x8c) {
						lVar3 = 0;
					}
					if (cVar1 == (&DAT_100f8dc3)[(int)lVar3]) {
						iVar2 = iVar2 + -1;
					}
				}
				*pbVar11 = (byte)lVar3;
			}
			iVar5 = iVar5 + 1;
			pcVar10 = pcVar10 + 0x28;
			pbVar11 = pbVar11 + 0x28;
		} while (iVar5 < 0x28);
		iVar4 = iVar4 + 1;
		pcVar9 = pcVar9 + 1;
		pbVar8 = pbVar8 + 1;
	} while (iVar4 < 0x28);
	iVar4 = 0;
	do {
		iVar5 = 0;
		pcVar9 = pcVar6;
		pbVar8 = pbVar7;
		do {
			iVar2 = random('\0', 10);
			if (((iVar2 == 0) && ((&DAT_100f8dc3)[(uint)*pbVar8] == '\x06')) && (*pcVar9 == '\0')) {
				iVar2 = random('\0', 3);
				*pbVar8 = (char)iVar2 + 0x5f;
			}
			iVar5 = iVar5 + 1;
			pcVar9 = pcVar9 + 0x28;
			pbVar8 = pbVar8 + 0x28;
		} while (iVar5 < 0x28);
		iVar4 = iVar4 + 1;
		pcVar6 = pcVar6 + 1;
		pbVar7 = pbVar7 + 1;
	} while (iVar4 < 0x28);
	return;
}

void L4makeDungeon(void)

{
	undefined *puVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	int iVar5;
	int iVar6;
	undefined *puVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	longlong lVar13;

	puVar7 = &DAT_1012d76c;
	iVar8 = 0;
	iVar5 = 0;
	puVar4 = puVar7;
	do {
		lVar13 = 4;
		iVar2 = 0;
		puVar3 = puVar4;
		do {
			iVar6 = iVar2 + iVar5;
			(&DAT_1012be1c)[iVar6] = *puVar3;
			*(undefined *)(iVar6 + 0x1012be1d) = *puVar3;
			*(undefined *)(iVar6 + 0x1012be6c) = *puVar3;
			*(undefined *)(iVar6 + 0x1012be6d) = *puVar3;
			iVar6 = iVar2 + iVar5;
			*(undefined *)(iVar6 + 0x1012bebc) = puVar3[0x14];
			*(undefined *)(iVar6 + 0x1012bebd) = puVar3[0x14];
			*(undefined *)(iVar6 + 0x1012bf0c) = puVar3[0x14];
			*(undefined *)(iVar6 + 0x1012bf0d) = puVar3[0x14];
			iVar6 = iVar2 + iVar5;
			*(undefined *)(iVar6 + 0x1012bf5c) = puVar3[0x28];
			*(undefined *)(iVar6 + 0x1012bf5d) = puVar3[0x28];
			*(undefined *)(iVar6 + 0x1012bfac) = puVar3[0x28];
			*(undefined *)(iVar6 + 0x1012bfad) = puVar3[0x28];
			iVar6 = iVar2 + iVar5;
			*(undefined *)(iVar6 + 0x1012bffc) = puVar3[0x3c];
			*(undefined *)(iVar6 + 0x1012bffd) = puVar3[0x3c];
			*(undefined *)(iVar6 + 0x1012c04c) = puVar3[0x3c];
			*(undefined *)(iVar6 + 0x1012c04d) = puVar3[0x3c];
			iVar6 = iVar2 + iVar5;
			iVar2 = iVar2 + 800;
			*(undefined *)(iVar6 + 0x1012c09c) = puVar3[0x50];
			*(undefined *)(iVar6 + 0x1012c09d) = puVar3[0x50];
			*(undefined *)(iVar6 + 0x1012c0ec) = puVar3[0x50];
			puVar1 = puVar3 + 0x50;
			puVar3 = puVar3 + 100;
			*(undefined *)(iVar6 + 0x1012c0ed) = *puVar1;
			lVar13 = lVar13 + -1;
		} while (lVar13 != 0);
		iVar8 = iVar8 + 1;
		iVar5 = iVar5 + 2;
		puVar4 = puVar4 + 1;
	} while (iVar8 < 0x14);
	iVar8 = 0;
	iVar5 = 0;
	do {
		lVar13 = 4;
		puVar4 = (undefined *)(0x1012d77f - iVar8);
		iVar2 = 0;
		do {
			iVar6 = iVar2 + iVar5;
			*(undefined *)(iVar6 + 0x1012be44) = *puVar4;
			*(undefined *)(iVar6 + 0x1012be45) = *puVar4;
			*(undefined *)(iVar6 + 0x1012be94) = *puVar4;
			*(undefined *)(iVar6 + 0x1012be95) = *puVar4;
			iVar6 = iVar2 + iVar5;
			*(undefined *)(iVar6 + 0x1012bee4) = puVar4[0x14];
			*(undefined *)(iVar6 + 0x1012bee5) = puVar4[0x14];
			*(undefined *)(iVar6 + 0x1012bf34) = puVar4[0x14];
			*(undefined *)(iVar6 + 0x1012bf35) = puVar4[0x14];
			iVar6 = iVar2 + iVar5;
			*(undefined *)(iVar6 + 0x1012bf84) = puVar4[0x28];
			*(undefined *)(iVar6 + 0x1012bf85) = puVar4[0x28];
			*(undefined *)(iVar6 + 0x1012bfd4) = puVar4[0x28];
			*(undefined *)(iVar6 + 0x1012bfd5) = puVar4[0x28];
			iVar6 = iVar2 + iVar5;
			*(undefined *)(iVar6 + 0x1012c024) = puVar4[0x3c];
			*(undefined *)(iVar6 + 0x1012c025) = puVar4[0x3c];
			*(undefined *)(iVar6 + 0x1012c074) = puVar4[0x3c];
			*(undefined *)(iVar6 + 0x1012c075) = puVar4[0x3c];
			iVar6 = iVar2 + iVar5;
			iVar2 = iVar2 + 800;
			*(undefined *)(iVar6 + 0x1012c0c4) = puVar4[0x50];
			*(undefined *)(iVar6 + 0x1012c0c5) = puVar4[0x50];
			*(undefined *)(iVar6 + 0x1012c114) = puVar4[0x50];
			puVar3 = puVar4 + 0x50;
			puVar4 = puVar4 + 100;
			*(undefined *)(iVar6 + 0x1012c115) = *puVar3;
			lVar13 = lVar13 + -1;
		} while (lVar13 != 0);
		iVar8 = iVar8 + 1;
		iVar5 = iVar5 + 2;
	} while (iVar8 < 0x14);
	iVar8 = 0;
	iVar5 = 0;
	do {
		lVar13 = 4;
		iVar6 = 0;
		iVar2 = 0;
		do {
			iVar11 = iVar2 + iVar5;
			puVar4 = puVar7 + (0x13 - iVar6) * 0x14;
			*(undefined *)(iVar11 + 0x1012ca9c) = *puVar4;
			iVar9 = iVar6 + 3;
			*(undefined *)(iVar11 + 0x1012ca9d) = *puVar4;
			*(undefined *)(iVar11 + 0x1012caec) = *puVar4;
			puVar3 = puVar7 + (0x13 - (iVar6 + 1)) * 0x14;
			*(undefined *)(iVar11 + 0x1012caed) = *puVar4;
			iVar11 = iVar2 + iVar5;
			*(undefined *)(iVar11 + 0x1012cb3c) = *puVar3;
			iVar10 = iVar6 + 4;
			*(undefined *)(iVar11 + 0x1012cb3d) = *puVar3;
			*(undefined *)(iVar11 + 0x1012cb8c) = *puVar3;
			puVar4 = puVar7 + (0x13 - (iVar6 + 2)) * 0x14;
			*(undefined *)(iVar11 + 0x1012cb8d) = *puVar3;
			iVar11 = iVar2 + iVar5;
			*(undefined *)(iVar11 + 0x1012cbdc) = *puVar4;
			iVar6 = iVar6 + 5;
			*(undefined *)(iVar11 + 0x1012cbdd) = *puVar4;
			*(undefined *)(iVar11 + 0x1012cc2c) = *puVar4;
			puVar3 = puVar7 + (0x13 - iVar9) * 0x14;
			*(undefined *)(iVar11 + 0x1012cc2d) = *puVar4;
			iVar11 = iVar2 + iVar5;
			*(undefined *)(iVar11 + 0x1012cc7c) = *puVar3;
			*(undefined *)(iVar11 + 0x1012cc7d) = *puVar3;
			*(undefined *)(iVar11 + 0x1012cccc) = *puVar3;
			puVar4 = puVar7 + (0x13 - iVar10) * 0x14;
			*(undefined *)(iVar11 + 0x1012cccd) = *puVar3;
			iVar11 = iVar2 + iVar5;
			iVar2 = iVar2 + 800;
			*(undefined *)(iVar11 + 0x1012cd1c) = *puVar4;
			*(undefined *)(iVar11 + 0x1012cd1d) = *puVar4;
			*(undefined *)(iVar11 + 0x1012cd6c) = *puVar4;
			*(undefined *)(iVar11 + 0x1012cd6d) = *puVar4;
			lVar13 = lVar13 + -1;
		} while (lVar13 != 0);
		iVar8 = iVar8 + 1;
		puVar7 = puVar7 + 1;
		iVar5 = iVar5 + 2;
	} while (iVar8 < 0x14);
	iVar8 = 0;
	iVar5 = 0;
	do {
		lVar13 = 4;
		iVar6 = 0x1012d77f - iVar8;
		iVar11 = 0;
		iVar2 = 0;
		do {
			iVar9 = iVar2 + iVar5;
			puVar7 = (undefined *)(iVar6 + (0x13 - iVar11) * 0x14);
			*(undefined *)(iVar9 + 0x1012cac4) = *puVar7;
			iVar10 = iVar11 + 3;
			*(undefined *)(iVar9 + 0x1012cac5) = *puVar7;
			*(undefined *)(iVar9 + 0x1012cb14) = *puVar7;
			puVar4 = (undefined *)(iVar6 + (0x13 - (iVar11 + 1)) * 0x14);
			*(undefined *)(iVar9 + 0x1012cb15) = *puVar7;
			iVar9 = iVar2 + iVar5;
			*(undefined *)(iVar9 + 0x1012cb64) = *puVar4;
			iVar12 = iVar11 + 4;
			*(undefined *)(iVar9 + 0x1012cb65) = *puVar4;
			*(undefined *)(iVar9 + 0x1012cbb4) = *puVar4;
			puVar7 = (undefined *)(iVar6 + (0x13 - (iVar11 + 2)) * 0x14);
			*(undefined *)(iVar9 + 0x1012cbb5) = *puVar4;
			iVar9 = iVar2 + iVar5;
			*(undefined *)(iVar9 + 0x1012cc04) = *puVar7;
			iVar11 = iVar11 + 5;
			*(undefined *)(iVar9 + 0x1012cc05) = *puVar7;
			*(undefined *)(iVar9 + 0x1012cc54) = *puVar7;
			puVar4 = (undefined *)(iVar6 + (0x13 - iVar10) * 0x14);
			*(undefined *)(iVar9 + 0x1012cc55) = *puVar7;
			iVar9 = iVar2 + iVar5;
			*(undefined *)(iVar9 + 0x1012cca4) = *puVar4;
			*(undefined *)(iVar9 + 0x1012cca5) = *puVar4;
			*(undefined *)(iVar9 + 0x1012ccf4) = *puVar4;
			puVar7 = (undefined *)(iVar6 + (0x13 - iVar12) * 0x14);
			*(undefined *)(iVar9 + 0x1012ccf5) = *puVar4;
			iVar9 = iVar2 + iVar5;
			iVar2 = iVar2 + 800;
			*(undefined *)(iVar9 + 0x1012cd44) = *puVar7;
			*(undefined *)(iVar9 + 0x1012cd45) = *puVar7;
			*(undefined *)(iVar9 + 0x1012cd94) = *puVar7;
			*(undefined *)(iVar9 + 0x1012cd95) = *puVar7;
			lVar13 = lVar13 + -1;
		} while (lVar13 != 0);
		iVar8 = iVar8 + 1;
		iVar5 = iVar5 + 2;
	} while (iVar8 < 0x14);
	return;
}

void uShape(void)

{
	int iVar1;
	int iVar2;
	undefined4 *puVar3;
	undefined4 *puVar4;
	char *pcVar5;
	int iVar6;
	undefined4 *puVar7;
	longlong lVar8;

	iVar1 = 0x1012d77f;
	puVar7 = (undefined4 *)0x1012d768;
	lVar8 = 10;
	puVar3 = puVar7;
	do {
		iVar6 = 0x13;
		while (-1 < iVar6) {
			pcVar5 = (char *)(iVar1 + iVar6 * 0x14);
			if (*pcVar5 != '\x01') {
				*puVar3 = 0;
			}
			if (*pcVar5 == '\x01') {
				if ((pcVar5[1] == '\x01') && (pcVar5[0x15] == '\0')) {
					*puVar3 = 1;
				} else {
					*puVar3 = 0;
				}
				iVar6 = 0;
			}
			iVar6 = iVar6 + -1;
		}
		iVar6 = 0x13;
		puVar4 = puVar3 + -1;
		while (-1 < iVar6) {
			pcVar5 = (char *)(iVar1 + -1 + iVar6 * 0x14);
			if (*pcVar5 != '\x01') {
				*puVar4 = 0;
			}
			if (*pcVar5 == '\x01') {
				if ((pcVar5[1] == '\x01') && (pcVar5[0x15] == '\0')) {
					*puVar4 = 1;
				} else {
					*puVar4 = 0;
				}
				iVar6 = 0;
			}
			iVar6 = iVar6 + -1;
		}
		iVar1 = iVar1 + -2;
		puVar3 = puVar3 + -2;
		lVar8 = lVar8 + -1;
	} while (lVar8 != 0);
	iVar1 = random('\0', 0x13);
	iVar1 = iVar1 + 1;
	do {
		if (*(int *)(&DAT_1012d71c + iVar1 * 4) == 0) {
			iVar1 = iVar1 + 1;
			if (iVar1 == 0x14) {
				iVar1 = 1;
			}
		} else {
			iVar6 = 0x13;
			while (-1 < iVar6) {
				iVar2 = iVar6 * 0x14 + iVar1;
				if ((&DAT_1012d76c)[iVar2] == '\x01') {
					iVar6 = -1;
					iVar1 = 0;
				} else {
					(&DAT_1012d76c)[iVar2] = '\x01';
					*(undefined *)(iVar2 + 0x1012d76d) = 1;
				}
				iVar6 = iVar6 + -1;
			}
		}
	} while (iVar1 != 0);
	iVar1 = 0x1012d8e8;
	lVar8 = 10;
	do {
		iVar6 = 0x13;
		while (-1 < iVar6) {
			pcVar5 = (char *)(iVar1 + iVar6);
			if (*pcVar5 != '\x01') {
				*puVar7 = 0;
			}
			if (*pcVar5 == '\x01') {
				if ((pcVar5[0x14] == '\x01') && (pcVar5[0x15] == '\0')) {
					*puVar7 = 1;
				} else {
					*puVar7 = 0;
				}
				iVar6 = 0;
			}
			iVar6 = iVar6 + -1;
		}
		iVar6 = 0x13;
		puVar3 = puVar7 + -1;
		while (-1 < iVar6) {
			pcVar5 = (char *)(iVar1 + -0x14 + iVar6);
			if (*pcVar5 != '\x01') {
				*puVar3 = 0;
			}
			if (*pcVar5 == '\x01') {
				if ((pcVar5[0x14] == '\x01') && (pcVar5[0x15] == '\0')) {
					*puVar3 = 1;
				} else {
					*puVar3 = 0;
				}
				iVar6 = 0;
			}
			iVar6 = iVar6 + -1;
		}
		iVar1 = iVar1 + -0x28;
		puVar7 = puVar7 + -2;
		lVar8 = lVar8 + -1;
	} while (lVar8 != 0);
	iVar1 = random('\0', 0x13);
	iVar1 = iVar1 + 1;
	do {
		if (*(int *)(&DAT_1012d71c + iVar1 * 4) == 0) {
			iVar1 = iVar1 + 1;
			if (iVar1 == 0x14) {
				iVar1 = 1;
			}
		} else {
			iVar6 = 0x13;
			while (-1 < iVar6) {
				iVar2 = iVar1 * 0x14 + iVar6;
				if ((&DAT_1012d76c)[iVar2] == '\x01') {
					iVar6 = -1;
					iVar1 = 0;
				} else {
					(&DAT_1012d76c)[iVar2] = '\x01';
					*(undefined *)(iVar2 + 0x1012d780) = 1;
				}
				iVar6 = iVar6 + -1;
			}
		}
	} while (iVar1 != 0);
	return;
}

long GetArea(void)

{
	int iVar1;
	char *pcVar2;
	char *pcVar3;
	int iVar4;
	longlong lVar5;

	pcVar3 = &DAT_1012d76c;
	iVar1 = 0;
	iVar4 = 0;
	do {
		lVar5 = 2;
		pcVar2 = pcVar3;
		do {
			if (*pcVar2 == '\x01') {
				iVar1 = iVar1 + 1;
			}
			if (pcVar2[0x14] == '\x01') {
				iVar1 = iVar1 + 1;
			}
			if (pcVar2[0x28] == '\x01') {
				iVar1 = iVar1 + 1;
			}
			if (pcVar2[0x3c] == '\x01') {
				iVar1 = iVar1 + 1;
			}
			if (pcVar2[0x50] == '\x01') {
				iVar1 = iVar1 + 1;
			}
			if (pcVar2[100] == '\x01') {
				iVar1 = iVar1 + 1;
			}
			if (pcVar2[0x78] == '\x01') {
				iVar1 = iVar1 + 1;
			}
			if (pcVar2[0x8c] == '\x01') {
				iVar1 = iVar1 + 1;
			}
			if (pcVar2[0xa0] == '\x01') {
				iVar1 = iVar1 + 1;
			}
			if (pcVar2[0xb4] == '\x01') {
				iVar1 = iVar1 + 1;
			}
			pcVar2 = pcVar2 + 200;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		pcVar3 = pcVar3 + 1;
	} while (iVar4 < 0x14);
	return (long)iVar1;
}

void L4drawRoom(int x, int y, int width, int height)

{
	int iVar1;
	ulonglong uVar2;
	longlong lVar3;
	int iVar4;
	longlong lVar5;
	undefined *puVar6;

	iVar4 = 0;
	puVar6 = &DAT_1012d76c + y;
	while (iVar4 < height) {
		lVar5 = 0;
		if (0 < width) {
			if ((8 < width) && (uVar2 = (ulonglong)(width - 1U >> 3), 0 < width + -8)) {
				do {
					iVar1 = x + (int)lVar5;
					lVar5 = lVar5 + 8;
					puVar6[iVar1 * 0x14] = 1;
					puVar6[(iVar1 + 1) * 0x14] = 1;
					puVar6[(iVar1 + 2) * 0x14] = 1;
					puVar6[(iVar1 + 3) * 0x14] = 1;
					puVar6[(iVar1 + 4) * 0x14] = 1;
					puVar6[(iVar1 + 5) * 0x14] = 1;
					puVar6[(iVar1 + 6) * 0x14] = 1;
					puVar6[(iVar1 + 7) * 0x14] = 1;
					uVar2 = uVar2 - 1;
				} while (uVar2 != 0);
			}
			lVar3 = (longlong)width - lVar5;
			if ((int)lVar5 < width) {
				do {
					iVar1 = (int)lVar5;
					lVar5 = lVar5 + 1;
					puVar6[(x + iVar1) * 0x14] = 1;
					lVar3 = lVar3 + -1;
				} while (lVar3 != 0);
			}
		}
		puVar6 = puVar6 + 1;
		iVar4 = iVar4 + 1;
	}
	return;
}

BOOL L4checkRoom(int x, int y, int width, int height)

{
	int iVar1;
	undefined *puVar2;
	longlong lVar3;
	int iVar4;
	longlong lVar5;

	if ((x < 1) || (y < 1)) {
		return 0;
	}
	iVar4 = 0;
	puVar2 = &DAT_1012d76c + y;
	do {
		if (height <= iVar4) {
			return 1;
		}
		lVar3 = 0;
		lVar5 = (longlong)width;
		if (0 < width) {
			do {
				if (((((longlong)x + lVar3 < 0) || (iVar1 = (int)((longlong)x + lVar3), 0x13 < iVar1)) || (y + iVar4 < 0)) || (0x13 < y + iVar4)) {
					return 0;
				}
				if (puVar2[iVar1 * 0x14] != '\0') {
					return 0;
				}
				lVar3 = lVar3 + 1;
				lVar5 = lVar5 + -1;
			} while (lVar5 != 0);
		}
		puVar2 = puVar2 + 1;
		iVar4 = iVar4 + 1;
	} while (true);
}

// WARNING: Removing unreachable block (ram,0x100391f0)

void L4roomGen(int x, int y, int w, int h, int dir)

{
	int x_00;
	int y_00;
	bool bVar1;
	int iVar2;
	int width;
	int height;
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
			width = random('\0', 5);
			width = (width + 2 >> 1) * 2;
			height = random('\0', 5);
			x_00 = height + 2 >> 1;
			height = x_00 * 2;
			y_00 = y + x_00 * -2;
			x_00 = (x + (w >> 1) + (uint)(w < 0 && (w & 1U) != 0)) - (width >> 1);
			BVar3 = L4checkRoom(x_00 + -1, y_00 + -1, width + 2, height + 1);
			iVar2 = iVar2 + 1;
			if (BVar3 != 0)
				break;
		} while (iVar2 < 0x14);
		if (BVar3 == 1) {
			L4drawRoom(x_00, y_00, width, height);
		}
		y = y + h;
		BVar4 = L4checkRoom(x_00 + -1, y, width + 2, height + 1);
		if (BVar4 == 1) {
			L4drawRoom(x_00, y, width, height);
		}
		if (BVar3 == 1) {
			L4roomGen(x_00, y_00, width, height, 0);
		}
		if (BVar4 == 1) {
			L4roomGen(x_00, y, width, height, 0);
		}
	} else {
		if (!bVar1) {
			iVar2 = 0;
			do {
				width = random('\0', 5);
				x_00 = width + 2 >> 1;
				width = x_00 * 2;
				height = random('\0', 5);
				height = (height + 2 >> 1) * 2;
				y_00 = (y + (h >> 1) + (uint)(h < 0 && (h & 1U) != 0)) - (height >> 1);
				x_00 = x + x_00 * -2;
				BVar3 = L4checkRoom(x_00 + -1, y_00 + -1, height + 2, width + 1);
				iVar2 = iVar2 + 1;
				if (BVar3 != 0)
					break;
			} while (iVar2 < 0x14);
			if (BVar3 == 1) {
				L4drawRoom(x_00, y_00, width, height);
			}
			x = x + w;
			BVar4 = L4checkRoom(x, y_00 + -1, width + 1, height + 2);
			if (BVar4 == 1) {
				L4drawRoom(x, y_00, width, height);
			}
			if (BVar3 == 1) {
				L4roomGen(x_00, y_00, width, height, 1);
			}
			if (BVar4 == 1) {
				L4roomGen(x, y_00, width, height, 1);
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void L4firstRoom(void)

{
	int *piVar1;
	int width;
	int height;
	int y;
	int iVar2;
	BOOL BVar3;
	int dir;
	int x;

	dir = 0x100f8fd0;
	if (currlevel == 0x10) {
		width = 0xe;
		height = 0xe;
	} else {
		if ((currlevel == quests[11]._qlevel) && (quests[11]._qactive != '\0')) {
			width = 0xb;
			height = 0xb;
		} else {
			if ((currlevel == quests[15]._qlevel) && (gbMaxPlayers != '\x01')) {
				width = 0xb;
				height = 0xb;
			} else {
				dir = 0x100f8fd0;
				width = random('\0', 5);
				width = width + 2;
				height = random('\0', 5);
				height = height + 2;
			}
		}
	}
	x = 0x14 - width >> 1;
	y = random('\0', (-x - width) + 0x14);
	x = x + y;
	if (0x13 < width + x) {
		x = (x - (width + x + -0x13)) + 1;
	}
	y = 0x14 - height >> 1;
	iVar2 = random('\0', (-y - height) + 0x14);
	y = y + iVar2;
	if (0x13 < height + y) {
		y = (y - (height + y + -0x13)) + 1;
	}
	if (currlevel == 0x10) {
		piVar1 = *(int **)(dir + -0x72d8);
		**(int **)(dir + -0x72d4) = x;
		*piVar1 = y;
	}
	BVar3 = QuestStatus(0xb);
	if ((BVar3 == 0) && ((currlevel != quests[15]._qlevel || (gbMaxPlayers == '\x01')))) {
		_DAT_1012be18 = 0;
		_DAT_1012be14 = 0;
		_DAT_1012be10 = 0;
		_DAT_1012be0c = 0;
	} else {
		_DAT_1012be18 = x + 1;
		_DAT_1012be14 = y + 1;
		_DAT_1012be10 = _DAT_1012be18 + width;
		_DAT_1012be0c = _DAT_1012be14 + height;
	}
	L4drawRoom(x, y, width, height);
	dir = random('\0', 2);
	L4roomGen(x, y, width, height, dir);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void L4SaveQuads(void)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	undefined *puVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;

	iVar2 = _DAT_1012be08;
	iVar15 = 0;
	iVar1 = -_DAT_1012be08;
	puVar3 = &DAT_1013b370 + _DAT_1012be04;
	iVar26 = (_DAT_1012be08 + 3) * 0x28;
	iVar25 = (iVar1 + 0x24) * 0x28;
	iVar24 = (_DAT_1012be08 + 4) * 0x28;
	iVar23 = (iVar1 + 0x23) * 0x28;
	iVar22 = (_DAT_1012be08 + 5) * 0x28;
	iVar21 = (iVar1 + 0x22) * 0x28;
	iVar20 = (_DAT_1012be08 + 6) * 0x28;
	iVar5 = _DAT_1012be08 * 0x28;
	iVar6 = (iVar1 + 0x27) * 0x28;
	iVar7 = (_DAT_1012be08 + 1) * 0x28;
	iVar8 = (iVar1 + 0x26) * 0x28;
	iVar9 = (_DAT_1012be08 + 2) * 0x28;
	iVar10 = (iVar1 + 0x25) * 0x28;
	iVar19 = (iVar1 + 0x21) * 0x28;
	iVar18 = (_DAT_1012be08 + 7) * 0x28;
	iVar17 = (iVar1 + 0x20) * 0x28;
	iVar4 = 0x27 - _DAT_1012be04;
	do {
		puVar3[iVar5] = 1;
		puVar12 = &DAT_1013b370 + (iVar4 - iVar15);
		puVar3[iVar6] = 1;
		iVar16 = 8;
		puVar12[iVar5] = 1;
		puVar12[iVar6] = 1;
		puVar3[iVar7] = 1;
		puVar3[iVar8] = 1;
		puVar12[iVar7] = 1;
		puVar12[iVar8] = 1;
		puVar3[iVar9] = 1;
		puVar3[iVar10] = 1;
		puVar12[iVar9] = 1;
		puVar12[iVar10] = 1;
		puVar3[iVar26] = 1;
		puVar3[iVar25] = 1;
		puVar12[iVar26] = 1;
		puVar12[iVar25] = 1;
		puVar3[iVar24] = 1;
		puVar3[iVar23] = 1;
		puVar12[iVar24] = 1;
		puVar12[iVar23] = 1;
		puVar3[iVar22] = 1;
		puVar3[iVar21] = 1;
		puVar12[iVar22] = 1;
		puVar12[iVar21] = 1;
		puVar3[iVar20] = 1;
		puVar3[iVar19] = 1;
		puVar12[iVar20] = 1;
		puVar12[iVar19] = 1;
		puVar3[iVar18] = 1;
		puVar3[iVar17] = 1;
		puVar12[iVar18] = 1;
		puVar12[iVar17] = 1;
		iVar13 = 6;
		do {
			iVar11 = (iVar2 + iVar16) * 0x28;
			puVar3[iVar11] = 1;
			iVar14 = ((iVar1 + 0x27) - iVar16) * 0x28;
			iVar16 = iVar16 + 1;
			puVar3[iVar14] = 1;
			(&DAT_1013b370 + (iVar4 - iVar15))[iVar11] = 1;
			(&DAT_1013b370 + (iVar4 - iVar15))[iVar14] = 1;
			iVar13 = iVar13 + -1;
		} while (iVar13 != 0);
		iVar15 = iVar15 + 1;
		puVar3 = puVar3 + 1;
	} while (iVar15 < 0xe);
	return;
}

void DRLG_L4SetRoom(BYTE *pSetPiece, int rx1, int ry1)

{
	byte bVar1;
	byte bVar2;
	int iVar3;
	char cVar4;
	int iVar5;
	undefined in_r6;
	undefined in_r7;
	int iVar6;
	undefined in_r8;
	char *pcVar7;
	undefined in_r9;
	undefined in_r10;
	int iVar8;
	ulonglong uVar9;
	undefined in_stack_ffffffbb;

	iVar3 = 0x100f8fd0;
	cVar4 = LockMemFile(
	    (longlong)(int)pSetPiece, (char)rx1, (char)ry1, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb);
	iVar8 = 0;
	pcVar7 = (char *)(*(int *)(pSetPiece + 0x88) + 4);
	bVar1 = *(byte *)(int)cVar4;
	iVar5 = *(int *)(iVar3 + -0x77cc) + ry1;
	bVar2 = *(byte *)((int)cVar4 + 2);
	ry1 = *(int *)(iVar3 + -0x7514) + ry1;
	while (iVar8 < (int)(uint)bVar2) {
		iVar3 = 0;
		uVar9 = (ulonglong)bVar1;
		if (bVar1 != 0) {
			do {
				if (*pcVar7 == '\0') {
					*(undefined *)(iVar5 + (rx1 + iVar3) * 0x28) = 6;
				} else {
					iVar6 = (rx1 + iVar3) * 0x28;
					*(char *)(iVar5 + iVar6) = *pcVar7;
					*(byte *)(ry1 + iVar6) = *(byte *)(ry1 + iVar6) | 0x80;
				}
				pcVar7 = pcVar7 + 2;
				iVar3 = iVar3 + 1;
				uVar9 = uVar9 - 1;
			} while (uVar9 != 0);
		}
		iVar5 = iVar5 + 1;
		ry1 = ry1 + 1;
		iVar8 = iVar8 + 1;
	}
	UnlockMemFile((char)pSetPiece);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_LoadDiabQuads(BOOL preflag)

{
	int iVar1;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int *local_38[3];
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

	iVar1 = 0x100f8fd0;
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
	local_38[0] = (int *)LoadFileInMem("Levels\\L4Data\\diab1.DUN", (DWORD *)0x0);
	_DAT_1012be00 = _DAT_1012be08 + 4;
	_DAT_1012bdf0 = _DAT_1012be04 + 4;
	DRLG_L4SetRoom((BYTE *)local_38[0], _DAT_1012be00, _DAT_1012bdf0);
	MemFreeDbg(local_38);
	if (preflag == 0) {
		local_38[0] = (int *)LoadFileInMem(*(char **)(iVar1 + -0x62e0), (DWORD *)0x0);
	} else {
		local_38[0] = (int *)LoadFileInMem(*(char **)(iVar1 + -0x62dc), (DWORD *)0x0);
	}
	_DAT_1012bdfc = 0x1b - _DAT_1012be08;
	_DAT_1012bdec = _DAT_1012be04 + 1;
	DRLG_L4SetRoom((BYTE *)local_38[0], _DAT_1012bdfc, _DAT_1012bdec);
	MemFreeDbg(local_38);
	if (preflag == 0) {
		local_38[0] = (int *)LoadFileInMem(*(char **)(iVar1 + -0x62e8), (DWORD *)0x0);
	} else {
		local_38[0] = (int *)LoadFileInMem(*(char **)(iVar1 + -0x62e4), (DWORD *)0x0);
	}
	_DAT_1012bdf8 = _DAT_1012be08 + 1;
	_DAT_1012bde8 = 0x1b - _DAT_1012be04;
	DRLG_L4SetRoom((BYTE *)local_38[0], _DAT_1012bdf8, _DAT_1012bde8);
	MemFreeDbg(local_38);
	if (preflag == 0) {
		local_38[0] = (int *)LoadFileInMem(*(char **)(iVar1 + -0x62f0), (DWORD *)0x0);
	} else {
		local_38[0] = (int *)LoadFileInMem(*(char **)(iVar1 + -0x62ec), (DWORD *)0x0);
	}
	_DAT_1012bdf4 = 0x1c - _DAT_1012be08;
	_DAT_1012bde4 = 0x1c - _DAT_1012be04;
	DRLG_L4SetRoom((BYTE *)local_38[0], _DAT_1012bdf4, _DAT_1012bde4);
	MemFreeDbg(local_38);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL DRLG_L4PlaceMiniSet(BYTE *miniset, int tmin, int tmax, int cx, int cy, BOOL setview, int ldir)

{
	byte bVar1;
	byte bVar2;
	int *piVar3;
	int iVar4;
	bool bVar5;
	undefined8 uVar6;
	byte *pbVar7;
	int iVar8;
	int v;
	int v_00;
	undefined *puVar9;
	int iVar10;
	byte *pbVar11;
	int iVar12;
	ulonglong uVar13;
	int unaff_r29;
	int unaff_r31;
	ulonglong uVar14;
	BOOL BStack0000002c;
	int iStack00000030;
	int local_68;
	int local_64;

	uVar6 = 0x100f8fd0;
	uVar13 = ZEXT48(&DAT_1012be14);
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
			v = (int)uVar6;
			if (**(char **)(v + -0x77e4) == '\x0f') {
				*(int *)(*(int *)(v + -0x7604) + 0x16c) = unaff_r31 + 1;
				*(int *)(*(int *)(v + -0x7604) + 0x170) = unaff_r29 + 1;
			}
			if (BStack0000002c == 1) {
				piVar3 = *(int **)(v + -0x77b4);
				**(int **)(v + -0x77b0) = unaff_r31 * 2 + 0x15;
				*piVar3 = unaff_r29 * 2 + 0x16;
			}
			if (iStack00000030 == 0) {
				piVar3 = *(int **)(v + -0x7520);
				**(int **)(v + -0x751c) = unaff_r31 * 2 + 0x15;
				*piVar3 = unaff_r29 * 2 + 0x16;
			}
			return 1;
		}
		unaff_r31 = random('\0', v);
		unaff_r29 = random('\0', v_00);
		bVar5 = false;
		iVar8 = 0;
		while ((!bVar5 && (iVar8 < 200))) {
			bVar5 = true;
			if ((**(int **)((int)uVar6 + -0x72dc) <= unaff_r31) && (((unaff_r31 <= _DAT_1012be10 && (*(int *)uVar13 <= unaff_r29)) && (unaff_r29 <= _DAT_1012be0c)))) {
				bVar5 = false;
			}
			if (((cx != -1) && ((int)(cx - (uint)bVar1) <= unaff_r31)) && (unaff_r31 <= cx + 0xc)) {
				unaff_r31 = random('\0', v);
				unaff_r29 = random('\0', v_00);
				bVar5 = false;
			}
			if (((cy != -1) && ((int)(cy - (uint)bVar2) <= unaff_r29)) && (unaff_r29 <= cy + 0xc)) {
				unaff_r31 = random('\0', v);
				unaff_r29 = random('\0', v_00);
				bVar5 = false;
			}
			pbVar7 = dungeon + unaff_r29;
			puVar9 = &DAT_1013b370 + unaff_r29;
			pbVar11 = miniset + 2;
			iVar12 = 0;
			while ((iVar12 < (int)(uint)bVar2 && (bVar5))) {
				iVar10 = 0;
				while ((iVar10 < (int)(uint)bVar1 && (bVar5))) {
					if ((*pbVar11 != 0) && (*pbVar11 != pbVar7[(unaff_r31 + iVar10) * 0x28])) {
						bVar5 = false;
					}
					if (puVar9[(unaff_r31 + iVar10) * 0x28] != '\0') {
						bVar5 = false;
					}
					pbVar11 = pbVar11 + 1;
					iVar10 = iVar10 + 1;
				}
				pbVar7 = pbVar7 + 1;
				puVar9 = puVar9 + 1;
				iVar12 = iVar12 + 1;
			}
			if ((!bVar5) && (unaff_r31 = unaff_r31 + 1, unaff_r31 == v)) {
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
		pbVar7 = dungeon + unaff_r29;
		puVar9 = &DAT_1013b370 + unaff_r29;
		iVar12 = 0;
		iVar8 = (uint)bVar2 * (uint)bVar1 + 2;
		while (iVar12 < (int)(uint)bVar2) {
			pbVar11 = miniset + iVar8;
			iVar10 = 0;
			uVar14 = (ulonglong)bVar1;
			if (bVar1 != 0) {
				do {
					if (*pbVar11 != 0) {
						iVar4 = (unaff_r31 + iVar10) * 0x28;
						pbVar7[iVar4] = *pbVar11;
						puVar9[iVar4] = puVar9[iVar4] | 8;
					}
					iVar8 = iVar8 + 1;
					pbVar11 = pbVar11 + 1;
					iVar10 = iVar10 + 1;
					uVar14 = uVar14 - 1;
				} while (uVar14 != 0);
			}
			pbVar7 = pbVar7 + 1;
			puVar9 = puVar9 + 1;
			iVar12 = iVar12 + 1;
		}
		local_64 = local_64 + 1;
	}
	return 0;
}

BOOL IsDURWall(char d)

{
	if (d == '\x19') {
		return 1;
	}
	if (d == '\x1c') {
		return 1;
	}
	if (d == '\x17') {
		return 1;
	}
	return 0;
}

BOOL IsDLLWall(char dd)

{
	if (dd == '\x1b') {
		return 1;
	}
	if (dd == '\x1a') {
		return 1;
	}
	if (dd == '\x16') {
		return 1;
	}
	return 0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_L4TransFix(void)

{
	BOOL BVar1;
	undefined *puVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	byte *pbVar7;
	int iVar8;
	byte *pbVar9;

	pbVar7 = dungeon;
	iVar4 = 0x10;
	iVar5 = 0;
	do {
		iVar6 = 0;
		iVar8 = 0x700;
		pbVar9 = pbVar7;
		do {
			BVar1 = IsDURWall(*pbVar9);
			if ((BVar1 != 0) && (pbVar9[-1] == 0x12)) {
				puVar2 = (undefined *)(iVar4 + _DAT_1012f1c8 + iVar8);
				puVar2[0x70] = *puVar2;
				puVar2 = (undefined *)(iVar4 + _DAT_1012f1c8 + iVar8);
				puVar2[0x71] = *puVar2;
			}
			BVar1 = IsDLLWall(*pbVar9);
			if ((BVar1 != 0) && (pbVar9[0x28] == 0x13)) {
				puVar2 = (undefined *)(iVar4 + _DAT_1012f1c8 + iVar8);
				puVar2[1] = *puVar2;
				puVar2 = (undefined *)(iVar4 + _DAT_1012f1c8 + iVar8);
				puVar2[0x71] = *puVar2;
			}
			if (*pbVar9 == 0x12) {
				puVar2 = (undefined *)(iVar4 + _DAT_1012f1c8 + iVar8);
				puVar2[0x70] = *puVar2;
				puVar2 = (undefined *)(iVar4 + _DAT_1012f1c8 + iVar8);
				puVar2[0x71] = *puVar2;
			}
			if (*pbVar9 == 0x13) {
				puVar2 = (undefined *)(iVar4 + _DAT_1012f1c8 + iVar8);
				puVar2[1] = *puVar2;
				puVar2 = (undefined *)(iVar4 + _DAT_1012f1c8 + iVar8);
				puVar2[0x71] = *puVar2;
			}
			if (*pbVar9 == 0x18) {
				puVar2 = (undefined *)(iVar4 + _DAT_1012f1c8 + iVar8);
				puVar2[0x70] = *puVar2;
				puVar2 = (undefined *)(iVar4 + _DAT_1012f1c8 + iVar8);
				puVar2[1] = *puVar2;
				puVar2 = (undefined *)(iVar4 + _DAT_1012f1c8 + iVar8);
				puVar2[0x71] = *puVar2;
			}
			if (*pbVar9 == 0x39) {
				iVar3 = iVar4 + _DAT_1012f1c8 + iVar8;
				*(undefined *)(iVar3 + -0x70) = *(undefined *)(iVar3 + 1);
				puVar2 = (undefined *)(iVar4 + _DAT_1012f1c8 + iVar8);
				*puVar2 = puVar2[1];
			}
			if (*pbVar9 == 0x35) {
				iVar3 = iVar4 + _DAT_1012f1c8 + iVar8;
				*(undefined *)(iVar3 + -1) = *(undefined *)(iVar3 + 0x70);
				puVar2 = (undefined *)(iVar4 + _DAT_1012f1c8 + iVar8);
				*puVar2 = puVar2[0x70];
			}
			iVar6 = iVar6 + 1;
			pbVar9 = pbVar9 + 0x28;
			iVar8 = iVar8 + 0xe0;
		} while (iVar6 < 0x28);
		iVar5 = iVar5 + 1;
		pbVar7 = pbVar7 + 1;
		iVar4 = iVar4 + 2;
	} while (iVar5 < 0x28);
	return;
}

void DRLG_L4Corners(void)

{
	byte *pbVar1;
	byte bVar2;
	byte *pbVar3;
	byte *pbVar4;
	int iVar5;
	longlong lVar6;

	iVar5 = 1;
	pbVar3 = dungeon;
	do {
		pbVar4 = pbVar3 + 0x29;
		lVar6 = 0x13;
		do {
			bVar2 = *pbVar4;
			if ((0x11 < bVar2) && (bVar2 < 0x1f)) {
				if (pbVar4[0x28] < 0x12) {
					*pbVar4 = bVar2 + 0x62;
				} else {
					if (pbVar4[1] < 0x12) {
						*pbVar4 = bVar2 + 0x62;
					}
				}
			}
			pbVar1 = pbVar4 + 0x28;
			bVar2 = *pbVar1;
			if ((0x11 < bVar2) && (bVar2 < 0x1f)) {
				if (pbVar4[0x50] < 0x12) {
					*pbVar1 = bVar2 + 0x62;
				} else {
					if (pbVar4[0x29] < 0x12) {
						*pbVar1 = bVar2 + 0x62;
					}
				}
			}
			pbVar4 = pbVar4 + 0x50;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
		iVar5 = iVar5 + 1;
		pbVar3 = pbVar3 + 1;
	} while (iVar5 < 0x27);
	return;
}

// WARNING: Removing unreachable block (ram,0x1003a1cc)

void L4FixRim(void)

{
	longlong lVar1;
	undefined *puVar2;

	uRam1012d780 = 0;
	uRam1012d794 = 0;
	uRam1012d7a8 = 0;
	uRam1012d7bc = 0;
	uRam1012d7d0 = 0;
	uRam1012d7e4 = 0;
	uRam1012d7f8 = 0;
	uRam1012d80c = 0;
	uRam1012d820 = 0;
	uRam1012d834 = 0;
	uRam1012d848 = 0;
	uRam1012d85c = 0;
	uRam1012d870 = 0;
	uRam1012d884 = 0;
	uRam1012d898 = 0;
	puVar2 = (undefined *)0x1012d8ac;
	lVar1 = 4;
	do {
		*puVar2 = 0;
		puVar2 = puVar2 + 0x14;
		lVar1 = lVar1 + -1;
	} while (lVar1 != 0);
	DAT_1012d76c = 0;
	uRam1012d76d = 0;
	uRam1012d76e = 0;
	uRam1012d76f = 0;
	uRam1012d770 = 0;
	uRam1012d771 = 0;
	uRam1012d772 = 0;
	uRam1012d773 = 0;
	uRam1012d774 = 0;
	uRam1012d775 = 0;
	uRam1012d776 = 0;
	uRam1012d777 = 0;
	uRam1012d778 = 0;
	uRam1012d779 = 0;
	uRam1012d77a = 0;
	uRam1012d77b = 0;
	puVar2 = (undefined *)0x1012d77c;
	lVar1 = 4;
	do {
		*puVar2 = 0;
		puVar2 = puVar2 + 1;
		lVar1 = lVar1 + -1;
	} while (lVar1 != 0);
	return;
}

void DRLG_L4GeneralFix(void)

{
	byte bVar1;
	byte *pbVar2;
	byte *pbVar3;
	int iVar4;
	longlong lVar5;

	iVar4 = 0;
	pbVar3 = dungeon;
	do {
		lVar5 = 0xd;
		pbVar2 = pbVar3;
		do {
			if ((((*pbVar2 == 0x18) || (*pbVar2 == 0x7a)) && (pbVar2[0x28] == 2)) && (pbVar2[1] == 5)) {
				*pbVar2 = 0x11;
			}
			bVar1 = pbVar2[0x28];
			if (((bVar1 == 0x18) || (bVar1 == 0x7a)) && ((pbVar2[0x50] == 2 && (pbVar2[0x29] == 5)))) {
				pbVar2[0x28] = 0x11;
			}
			bVar1 = pbVar2[0x50];
			if (((bVar1 == 0x18) || (bVar1 == 0x7a)) && ((pbVar2[0x78] == 2 && (pbVar2[0x51] == 5)))) {
				pbVar2[0x50] = 0x11;
			}
			pbVar2 = pbVar2 + 0x78;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		pbVar3 = pbVar3 + 1;
	} while (iVar4 < 0x27);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_L4(int entry)

{
	byte *pbVar1;
	ulonglong uVar2;
	undefined8 uVar3;
	long lVar4;
	undefined *puVar5;
	int iVar6;
	BOOL BVar7;
	byte *pbVar8;
	uint uVar9;
	ulonglong uVar10;
	byte *pbVar11;
	byte *pbVar12;
	byte *pbVar13;
	int iVar14;
	longlong lVar15;

	uVar3 = 0x100f8fd0;
	pbVar11 = &DAT_1013b9b0;
	iVar6 = 0;
	uVar10 = ZEXT48(&DAT_1013b368);
	pbVar12 = dungeon;
	do {
		if (iVar6 != 0) {
			DRLG_L4GeneralFix();
			if (currlevel != 0x10) {
				DRLG_PlaceThemeRooms(7, 10, 6, 8, 1);
			}
			DRLG_L4Shadows();
			DRLG_L4Corners();
			DRLG_L4Subs();
			DRLG_Init_Globals();
			BVar7 = QuestStatus(0xb);
			if (BVar7 != 0) {
				lVar15 = 0x14;
				pbVar8 = pbVar12;
				pbVar13 = pbVar11;
				do {
					*pbVar13 = *pbVar8;
					pbVar13[0x28] = pbVar8[0x28];
					pbVar13[0x50] = pbVar8[0x50];
					pbVar13[0x78] = pbVar8[0x78];
					pbVar13[0xa0] = pbVar8[0xa0];
					pbVar13[200] = pbVar8[200];
					pbVar13[0xf0] = pbVar8[0xf0];
					pbVar13[0x118] = pbVar8[0x118];
					pbVar13[0x140] = pbVar8[0x140];
					pbVar13[0x168] = pbVar8[0x168];
					pbVar13[400] = pbVar8[400];
					pbVar13[0x1b8] = pbVar8[0x1b8];
					pbVar13[0x1e0] = pbVar8[0x1e0];
					pbVar13[0x208] = pbVar8[0x208];
					pbVar13[0x230] = pbVar8[0x230];
					pbVar13[600] = pbVar8[600];
					pbVar13[0x280] = pbVar8[0x280];
					pbVar13[0x2a8] = pbVar8[0x2a8];
					pbVar13[0x2d0] = pbVar8[0x2d0];
					pbVar13[0x2f8] = pbVar8[0x2f8];
					pbVar13[800] = pbVar8[800];
					pbVar13[0x348] = pbVar8[0x348];
					pbVar13[0x370] = pbVar8[0x370];
					pbVar13[0x398] = pbVar8[0x398];
					pbVar13[0x3c0] = pbVar8[0x3c0];
					pbVar13[1000] = pbVar8[1000];
					pbVar13[0x410] = pbVar8[0x410];
					pbVar13[0x438] = pbVar8[0x438];
					pbVar13[0x460] = pbVar8[0x460];
					pbVar13[0x488] = pbVar8[0x488];
					pbVar13[0x4b0] = pbVar8[0x4b0];
					pbVar13[0x4d8] = pbVar8[0x4d8];
					pbVar13[0x500] = pbVar8[0x500];
					pbVar13[0x528] = pbVar8[0x528];
					pbVar13[0x550] = pbVar8[0x550];
					pbVar13[0x578] = pbVar8[0x578];
					pbVar13[0x5a0] = pbVar8[0x5a0];
					pbVar13[0x5c8] = pbVar8[0x5c8];
					pbVar13[0x5f0] = pbVar8[0x5f0];
					pbVar13[0x618] = pbVar8[0x618];
					pbVar13[1] = pbVar8[1];
					pbVar13[0x29] = pbVar8[0x29];
					pbVar13[0x51] = pbVar8[0x51];
					pbVar13[0x79] = pbVar8[0x79];
					pbVar13[0xa1] = pbVar8[0xa1];
					pbVar13[0xc9] = pbVar8[0xc9];
					pbVar13[0xf1] = pbVar8[0xf1];
					pbVar13[0x119] = pbVar8[0x119];
					pbVar13[0x141] = pbVar8[0x141];
					pbVar13[0x169] = pbVar8[0x169];
					pbVar13[0x191] = pbVar8[0x191];
					pbVar13[0x1b9] = pbVar8[0x1b9];
					pbVar13[0x1e1] = pbVar8[0x1e1];
					pbVar13[0x209] = pbVar8[0x209];
					pbVar13[0x231] = pbVar8[0x231];
					pbVar13[0x259] = pbVar8[0x259];
					pbVar13[0x281] = pbVar8[0x281];
					pbVar13[0x2a9] = pbVar8[0x2a9];
					pbVar13[0x2d1] = pbVar8[0x2d1];
					pbVar13[0x2f9] = pbVar8[0x2f9];
					pbVar13[0x321] = pbVar8[0x321];
					pbVar13[0x349] = pbVar8[0x349];
					pbVar13[0x371] = pbVar8[0x371];
					pbVar13[0x399] = pbVar8[0x399];
					pbVar13[0x3c1] = pbVar8[0x3c1];
					pbVar13[0x3e9] = pbVar8[0x3e9];
					pbVar13[0x411] = pbVar8[0x411];
					pbVar13[0x439] = pbVar8[0x439];
					pbVar13[0x461] = pbVar8[0x461];
					pbVar13[0x489] = pbVar8[0x489];
					pbVar13[0x4b1] = pbVar8[0x4b1];
					pbVar13[0x4d9] = pbVar8[0x4d9];
					pbVar13[0x501] = pbVar8[0x501];
					pbVar13[0x529] = pbVar8[0x529];
					pbVar13[0x551] = pbVar8[0x551];
					pbVar13[0x579] = pbVar8[0x579];
					pbVar13[0x5a1] = pbVar8[0x5a1];
					pbVar13[0x5c9] = pbVar8[0x5c9];
					pbVar13[0x5f1] = pbVar8[0x5f1];
					pbVar1 = pbVar8 + 0x619;
					pbVar8 = pbVar8 + 2;
					pbVar13[0x619] = *pbVar1;
					pbVar13 = pbVar13 + 2;
					lVar15 = lVar15 + -1;
				} while (lVar15 != 0);
			}
			DRLG_CheckQuests(_DAT_1012be18, _DAT_1012be14);
			if (currlevel == 0xf) {
				iVar6 = 0;
				pbVar8 = pbVar12;
				do {
					iVar14 = 0;
					pbVar13 = pbVar8;
					do {
						if (*pbVar13 == 0x62) {
							Make_SetPC(iVar14 + -1, iVar6 + -1, 5, 5);
						}
						if (*pbVar13 == 0x6b) {
							Make_SetPC(iVar14 + -1, iVar6 + -1, 5, 5);
						}
						iVar14 = iVar14 + 1;
						pbVar13 = pbVar13 + 0x28;
					} while (iVar14 < 0x28);
					iVar6 = iVar6 + 1;
					pbVar8 = pbVar8 + 1;
				} while (iVar6 < 0x28);
			}
			if (currlevel == 0x10) {
				lVar15 = 0x14;
				do {
					*pbVar11 = *pbVar12;
					pbVar11[0x28] = pbVar12[0x28];
					pbVar11[0x50] = pbVar12[0x50];
					pbVar11[0x78] = pbVar12[0x78];
					pbVar11[0xa0] = pbVar12[0xa0];
					pbVar11[200] = pbVar12[200];
					pbVar11[0xf0] = pbVar12[0xf0];
					pbVar11[0x118] = pbVar12[0x118];
					pbVar11[0x140] = pbVar12[0x140];
					pbVar11[0x168] = pbVar12[0x168];
					pbVar11[400] = pbVar12[400];
					pbVar11[0x1b8] = pbVar12[0x1b8];
					pbVar11[0x1e0] = pbVar12[0x1e0];
					pbVar11[0x208] = pbVar12[0x208];
					pbVar11[0x230] = pbVar12[0x230];
					pbVar11[600] = pbVar12[600];
					pbVar11[0x280] = pbVar12[0x280];
					pbVar11[0x2a8] = pbVar12[0x2a8];
					pbVar11[0x2d0] = pbVar12[0x2d0];
					pbVar11[0x2f8] = pbVar12[0x2f8];
					pbVar11[800] = pbVar12[800];
					pbVar11[0x348] = pbVar12[0x348];
					pbVar11[0x370] = pbVar12[0x370];
					pbVar11[0x398] = pbVar12[0x398];
					pbVar11[0x3c0] = pbVar12[0x3c0];
					pbVar11[1000] = pbVar12[1000];
					pbVar11[0x410] = pbVar12[0x410];
					pbVar11[0x438] = pbVar12[0x438];
					pbVar11[0x460] = pbVar12[0x460];
					pbVar11[0x488] = pbVar12[0x488];
					pbVar11[0x4b0] = pbVar12[0x4b0];
					pbVar11[0x4d8] = pbVar12[0x4d8];
					pbVar11[0x500] = pbVar12[0x500];
					pbVar11[0x528] = pbVar12[0x528];
					pbVar11[0x550] = pbVar12[0x550];
					pbVar11[0x578] = pbVar12[0x578];
					pbVar11[0x5a0] = pbVar12[0x5a0];
					pbVar11[0x5c8] = pbVar12[0x5c8];
					pbVar11[0x5f0] = pbVar12[0x5f0];
					pbVar11[0x618] = pbVar12[0x618];
					pbVar11[1] = pbVar12[1];
					pbVar11[0x29] = pbVar12[0x29];
					pbVar11[0x51] = pbVar12[0x51];
					pbVar11[0x79] = pbVar12[0x79];
					pbVar11[0xa1] = pbVar12[0xa1];
					pbVar11[0xc9] = pbVar12[0xc9];
					pbVar11[0xf1] = pbVar12[0xf1];
					pbVar11[0x119] = pbVar12[0x119];
					pbVar11[0x141] = pbVar12[0x141];
					pbVar11[0x169] = pbVar12[0x169];
					pbVar11[0x191] = pbVar12[0x191];
					pbVar11[0x1b9] = pbVar12[0x1b9];
					pbVar11[0x1e1] = pbVar12[0x1e1];
					pbVar11[0x209] = pbVar12[0x209];
					pbVar11[0x231] = pbVar12[0x231];
					pbVar11[0x259] = pbVar12[0x259];
					pbVar11[0x281] = pbVar12[0x281];
					pbVar11[0x2a9] = pbVar12[0x2a9];
					pbVar11[0x2d1] = pbVar12[0x2d1];
					pbVar11[0x2f9] = pbVar12[0x2f9];
					pbVar11[0x321] = pbVar12[0x321];
					pbVar11[0x349] = pbVar12[0x349];
					pbVar11[0x371] = pbVar12[0x371];
					pbVar11[0x399] = pbVar12[0x399];
					pbVar11[0x3c1] = pbVar12[0x3c1];
					pbVar11[0x3e9] = pbVar12[0x3e9];
					pbVar11[0x411] = pbVar12[0x411];
					pbVar11[0x439] = pbVar12[0x439];
					pbVar11[0x461] = pbVar12[0x461];
					pbVar11[0x489] = pbVar12[0x489];
					pbVar11[0x4b1] = pbVar12[0x4b1];
					pbVar11[0x4d9] = pbVar12[0x4d9];
					pbVar11[0x501] = pbVar12[0x501];
					pbVar11[0x529] = pbVar12[0x529];
					pbVar11[0x551] = pbVar12[0x551];
					pbVar11[0x579] = pbVar12[0x579];
					pbVar11[0x5a1] = pbVar12[0x5a1];
					pbVar11[0x5c9] = pbVar12[0x5c9];
					pbVar11[0x5f1] = pbVar12[0x5f1];
					pbVar8 = pbVar12 + 0x619;
					pbVar12 = pbVar12 + 2;
					pbVar11[0x619] = *pbVar8;
					pbVar11 = pbVar11 + 2;
					lVar15 = lVar15 + -1;
				} while (lVar15 != 0);
				DRLG_LoadDiabQuads(0);
			}
			return;
		}
		DRLG_InitTrans();
		do {
			InitL4Dungeon();
			L4firstRoom();
			L4FixRim();
			lVar4 = GetArea();
		} while (lVar4 < 0xad);
		uShape();
		L4makeDungeon();
		L4makeDmt();
		L4tileFix();
		if (currlevel == 0x10) {
			L4SaveQuads();
		}
		BVar7 = QuestStatus(0xb);
		if ((BVar7 != 0) || ((currlevel == quests[15]._qlevel && (gbMaxPlayers != '\x01')))) {
			iVar14 = *(int *)((int)uVar3 + -0x7514) + _DAT_1012be18 * 0x28;
			iVar6 = _DAT_1012be18;
			while (iVar6 < _DAT_1012be10) {
				puVar5 = (undefined *)(iVar14 + _DAT_1012be14);
				uVar9 = _DAT_1012be0c - _DAT_1012be14;
				if (_DAT_1012be14 < _DAT_1012be0c) {
					uVar2 = (ulonglong)(uVar9 >> 3);
					if (uVar9 >> 3 != 0) {
						do {
							*puVar5 = 1;
							puVar5[1] = 1;
							puVar5[2] = 1;
							puVar5[3] = 1;
							puVar5[4] = 1;
							puVar5[5] = 1;
							puVar5[6] = 1;
							puVar5[7] = 1;
							puVar5 = puVar5 + 8;
							uVar2 = uVar2 - 1;
						} while (uVar2 != 0);
						uVar9 = uVar9 & 7;
						if (uVar9 == 0)
							goto LAB_1003a41c;
					}
					do {
						*puVar5 = 1;
						puVar5 = puVar5 + 1;
						uVar9 = uVar9 - 1;
					} while (uVar9 != 0);
				}
			LAB_1003a41c:
				iVar14 = iVar14 + 0x28;
				iVar6 = iVar6 + 1;
			}
		}
		L4AddWall();
		DRLG_L5FloodTVal();
		DRLG_L4TransFix();
		if (**(int **)((int)uVar3 + -0x7524) != 0) {
			DRLG_L4SetSPRoom(_DAT_1012be18, _DAT_1012be14);
		}
		if (currlevel == 0x10) {
			DRLG_LoadDiabQuads(1);
		}
		BVar7 = QuestStatus(0xb);
		if (BVar7 == 0) {
			if (currlevel == 0xf) {
				if (entry == 0) {
					iVar6 = DRLG_L4PlaceMiniSet(&DAT_100f8cd3, 1, 1, -1, -1, 1, 0);
					if (iVar6 != 0) {
						if ((gbMaxPlayers == '\x01') && (quests[5]._qactive != '\x02')) {
							iVar6 = DRLG_L4PlaceMiniSet(&DAT_100f8d5b, 1, 1, -1, -1, 0, 1);
						} else {
							iVar6 = DRLG_L4PlaceMiniSet(&DAT_100f8d8f, 1, 1, -1, -1, 0, 1);
						}
					}
					_DAT_1012f310 = _DAT_1012f310 + 1;
				} else {
					iVar6 = DRLG_L4PlaceMiniSet(&DAT_100f8cd3, 1, 1, -1, -1, 0, 0);
					if (iVar6 != 0) {
						if ((gbMaxPlayers == '\x01') && (quests[5]._qactive != '\x02')) {
							iVar6 = DRLG_L4PlaceMiniSet(&DAT_100f8d5b, 1, 1, -1, -1, 1, 1);
						} else {
							iVar6 = DRLG_L4PlaceMiniSet(&DAT_100f8d8f, 1, 1, -1, -1, 1, 1);
						}
					}
					_DAT_1012f30c = _DAT_1012f30c + 1;
				}
			} else {
				if (entry == 0) {
					iVar6 = DRLG_L4PlaceMiniSet(&DAT_100f8cd3, 1, 1, -1, -1, 1, 0);
					if ((iVar6 != 0) && (currlevel != 0x10)) {
						iVar6 = DRLG_L4PlaceMiniSet(&DAT_100f8d27, 1, 1, -1, -1, 0, 1);
					}
					if ((iVar6 != 0) && (currlevel == 0xd)) {
						iVar6 = DRLG_L4PlaceMiniSet(&DAT_100f8cfd, 1, 1, -1, -1, 0, 6);
					}
					_DAT_1012f310 = _DAT_1012f310 + 1;
				} else {
					if (entry == 1) {
						iVar6 = DRLG_L4PlaceMiniSet(&DAT_100f8cd3, 1, 1, -1, -1, 0, 0);
						if ((iVar6 != 0) && (currlevel != 0x10)) {
							iVar6 = DRLG_L4PlaceMiniSet(&DAT_100f8d27, 1, 1, -1, -1, 1, 1);
						}
						if ((iVar6 != 0) && (currlevel == 0xd)) {
							iVar6 = DRLG_L4PlaceMiniSet(&DAT_100f8cfd, 1, 1, -1, -1, 0, 6);
						}
						_DAT_1012f30c = _DAT_1012f30c + 1;
					} else {
						iVar6 = DRLG_L4PlaceMiniSet(&DAT_100f8cd3, 1, 1, -1, -1, 0, 0);
						if ((iVar6 != 0) && (currlevel != 0x10)) {
							iVar6 = DRLG_L4PlaceMiniSet(&DAT_100f8d27, 1, 1, -1, -1, 0, 1);
						}
						if ((iVar6 != 0) && (currlevel == 0xd)) {
							iVar6 = DRLG_L4PlaceMiniSet(&DAT_100f8cfd, 1, 1, -1, -1, 1, 6);
						}
						_DAT_1012f310 = _DAT_1012f310 + 1;
					}
				}
			}
		} else {
			if (entry == 0) {
				iVar6 = DRLG_L4PlaceMiniSet(&DAT_100f8cd3, 1, 1, -1, -1, 1, 0);
				if ((iVar6 != 0) && (currlevel == 0xd)) {
					iVar6 = DRLG_L4PlaceMiniSet(&DAT_100f8cfd, 1, 1, -1, -1, 0, 6);
				}
				_DAT_1012f310 = _DAT_1012f310 + 1;
			} else {
				if (entry == 1) {
					iVar6 = DRLG_L4PlaceMiniSet(&DAT_100f8cd3, 1, 1, -1, -1, 0, 0);
					if ((iVar6 != 0) && (currlevel == 0xd)) {
						iVar6 = DRLG_L4PlaceMiniSet(&DAT_100f8cfd, 1, 1, -1, -1, 0, 6);
					}
					_DAT_1012f310 = **(int **)((int)uVar3 + -0x754c) * 2 + 0x16;
					_DAT_1012f30c = *(int *)uVar10 * 2 + 0x16;
				} else {
					iVar6 = DRLG_L4PlaceMiniSet(&DAT_100f8cd3, 1, 1, -1, -1, 0, 0);
					if ((iVar6 != 0) && (currlevel == 0xd)) {
						iVar6 = DRLG_L4PlaceMiniSet(&DAT_100f8cfd, 1, 1, -1, -1, 1, 6);
					}
					_DAT_1012f310 = _DAT_1012f310 + 1;
				}
			}
		}
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_L4Pass3(void)

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
	sVar6 = CONCAT11(*(undefined *)(iVar13 + 0xe9), *(undefined *)(iVar13 + 0xe8)) + 1;
	sVar8 = CONCAT11(*(undefined *)(iVar13 + 0xeb), *(undefined *)(iVar13 + 0xea)) + 1;
	sVar12 = CONCAT11(*(undefined *)(iVar13 + 0xed), *(undefined *)(iVar13 + 0xec)) + 1;
	iVar14 = 0;
	sVar2 = CONCAT11(*(undefined *)(iVar13 + 0xef), *(undefined *)(iVar13 + 0xee)) + 1;
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
		lVar15 = 0x28;
		iVar14 = 0xe00;
		pbVar5 = pbVar7;
		do {
			if ((longlong)((ulonglong)*pbVar5 - 1) < 0) {
				sVar2 = 0;
				sVar6 = 0;
				sVar12 = 0;
				sVar8 = 0;
			} else {
				puVar1 = (undefined *)((int)cVar4 + (int)((ulonglong)*pbVar5 - 1) * 8);
				sVar2 = CONCAT11(puVar1[1], *puVar1) + 1;
				sVar6 = CONCAT11(puVar1[3], puVar1[2]) + 1;
				sVar12 = CONCAT11(puVar1[5], puVar1[4]) + 1;
				sVar8 = CONCAT11(puVar1[7], puVar1[6]) + 1;
			}
			pbVar5 = pbVar5 + 0x28;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar14) = sVar2;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar14 + 0xe0) = sVar6;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar14 + 2) = sVar12;
			iVar9 = _DAT_1012f1d4 + iVar14;
			iVar14 = iVar14 + 0x1c0;
			*(short *)(iVar13 + iVar9 + 0xe2) = sVar8;
			lVar15 = lVar15 + -1;
		} while (lVar15 != 0);
		iVar3 = iVar3 + 1;
		pbVar7 = pbVar7 + 1;
		iVar13 = iVar13 + 4;
	} while (iVar3 < 0x28);
	UnlockMemFile((char)_DAT_1013b350);
	return;
}

void CreateL4Dungeon(DWORD rseed, int entry)

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
	puVar2 = *(undefined4 **)(iVar3 + -0x77b0);
	*puVar1 = 0x60;
	puVar1 = *(undefined4 **)(iVar3 + -0x77b4);
	*puVar2 = 0x28;
	*puVar1 = 0x28;
	DRLG_InitSetPC();
	DRLG_LoadL4SP();
	DRLG_L4(entry);
	DRLG_L4Pass3();
	DRLG_FreeL4SP();
	DRLG_SetPC();
	return;
}