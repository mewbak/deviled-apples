
void InitObjectGFX(void)

{
	char cVar1;
	undefined *puVar2;
	int iVar3;
	ulonglong uVar4;
	ulonglong uVar5;
	ulonglong uVar6;
	BOOL BVar7;
	BYTE *pBVar8;
	undefined in_r5;
	char *pcVar9;
	longlong in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined8 unaff_r24;
	char *pcVar11;
	longlong lVar10;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined4 *puVar12;
	undefined8 unaff_r29;
	longlong lVar13;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined local_58[56];
	undefined4 local_20;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	uVar4 = ZEXT48(register0x0000000c);
	local_20 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	puVar2 = (undefined *)(uVar4 - 0xb0);
	*(BADSPACEBASE **)puVar2 = register0x0000000c;
	ZeroMemory((char)(uVar4 - 0xb0) + 'X', 0x38, in_r5, (char)in_r6, (char)in_r7, (char)in_r8, (char)in_r9,
	    (char)in_r10, puVar2[0xb], puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
	uVar5 = (ulonglong) * (uint *)(puVar2 + 0x14);
	pcVar11 = *(char **)(*(uint *)(puVar2 + 0x14) - 0x6fc8);
	while (*pcVar11 != -1) {
		if (((*pcVar11 == '\x01') && ((int)pcVar11[2] <= (int)(uint)currlevel)) && ((int)(uint)currlevel <= (int)pcVar11[3])) {
			local_58[(int)pcVar11[1]] = 1;
		}
		cVar1 = pcVar11[5];
		if (cVar1 != -1) {
			uVar6 = (ulonglong)_DAT_101ab820;
			in_r6 = (uVar4 - 0x58) + (longlong)pcVar11[1];
			pcVar9 = &DAT_101ab824;
			if (0 < (int)_DAT_101ab820) {
				do {
					if (*pcVar9 == cVar1) {
						*(undefined *)in_r6 = 1;
					}
					pcVar9 = pcVar9 + 8;
					uVar6 = uVar6 - 1;
				} while (uVar6 != 0);
			}
		}
		if ((pcVar11[6] != -1) && (BVar7 = QuestStatus((int)pcVar11[6], *puVar2), BVar7 != 0)) {
			local_58[(int)pcVar11[1]] = 1;
		}
		pcVar11 = pcVar11 + 0x2c;
	}
	lVar13 = 0;
	puVar12 = *(undefined4 **)((int)uVar5 + -0x6fd4);
	lVar10 = uVar4 - 0x58;
	do {
		if (*(char *)lVar10 != '\0') {
			(&DAT_1017e3a8)[*(int *)((int)uVar5 + -0x4cc8)] = (char)lVar13;
			wsprintf((int)(puVar2 + 0x38), "Objects\\%s.CEL", *puVar12, (int)in_r6, in_r7, in_r8, in_r9, in_r10,
			    *(undefined4 *)(puVar2 + 8), puVar2[0xf], *(undefined4 *)(puVar2 + 0x1c), *(undefined4 *)(puVar2 + 0x20),
			    *(undefined4 *)(puVar2 + 0x24), *(undefined4 *)(puVar2 + 0x28), *(undefined4 *)(puVar2 + 0x2c),
			    *(undefined4 *)(puVar2 + 0x30), *(undefined4 *)(puVar2 + 0x34));
			pBVar8 = LoadFileInMem(puVar2 + 0x38, 0, *puVar2);
			iVar3 = (int)uVar5;
			*(BYTE **)(&DAT_1017e308 + *(int *)(iVar3 + -0x4cc8) * 4) = pBVar8;
			*(int *)(iVar3 + -0x4cc8) = *(int *)(iVar3 + -0x4cc8) + 1;
		}
		lVar13 = lVar13 + 1;
		puVar12 = puVar12 + 1;
		lVar10 = lVar10 + 1;
	} while ((int)lVar13 < 0x38);
	return;
}

void FreeObjectGFX(void)

{
	undefined8 uVar1;
	int iVar2;
	int **ppiVar3;

	uVar1 = 0x100f8fd0;
	ppiVar3 = (int **)&DAT_1017e308;
	iVar2 = 0;
	while (iVar2 < *(int *)((int)uVar1 + -0x4cc8)) {
		MemFreeDbg(ppiVar3);
		ppiVar3 = ppiVar3 + 1;
		iVar2 = iVar2 + 1;
	}
	*(undefined4 *)((int)uVar1 + -0x4cc8) = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL RndLocOk(int xp, int yp)

{
	short sVar1;
	int iVar2;

	iVar2 = xp * 0xe0 + yp * 2;
	if (*(short *)(_DAT_1012f1b4 + iVar2) != 0) {
		return 0;
	}
	yp = xp * 0x70 + yp;
	if (*(char *)(_DAT_1012f1b8 + yp) != '\0') {
		return 0;
	}
	if (*(char *)(_DAT_1012f1ac + yp) != '\0') {
		return 0;
	}
	if ((*(byte *)(_DAT_1012f1bc + yp) & 8) != 0) {
		return 0;
	}
	sVar1 = *(short *)(_DAT_1012f1d4 + iVar2);
	if ((&DAT_10130b33)[(int)sVar1] != '\0') {
		return 0;
	}
	if (((leveltype == '\x01') && (0x7e < sVar1)) && (sVar1 < 0x90)) {
		return 0;
	}
	return 1;
}

void InitRndLocObj(int min, int max, int objtype)

{
	int iVar1;
	int iVar2;
	int iVar3;
	BOOL BVar4;
	int iVar5;
	int yp;
	int xp;

	iVar1 = random(-0x75, max - min);
	iVar5 = 0;
	while (iVar5 < min + iVar1) {
		do {
			do {
				iVar2 = random(-0x75, 0x50);
				xp = iVar2 + 0x10;
				iVar3 = random(-0x75, 0x50);
				yp = iVar3 + 0x10;
				BVar4 = RndLocOk(iVar2 + 0xf, iVar3 + 0xf);
			} while (BVar4 == 0);
			BVar4 = RndLocOk(xp, iVar3 + 0xf);
		} while (((((BVar4 == 0) || (BVar4 = RndLocOk(iVar2 + 0x11, iVar3 + 0xf), BVar4 == 0)) || (BVar4 = RndLocOk(iVar2 + 0xf, yp), BVar4 == 0)) || ((BVar4 = RndLocOk(xp, yp), BVar4 == 0 || (BVar4 = RndLocOk(iVar2 + 0x11, yp), BVar4 == 0)))) || ((BVar4 = RndLocOk(iVar2 + 0xf, iVar3 + 0x11), BVar4 == 0 || ((BVar4 = RndLocOk(xp, iVar3 + 0x11), BVar4 == 0 || (BVar4 = RndLocOk(iVar2 + 0x11, iVar3 + 0x11), BVar4 == 0))))));
		AddObject(objtype, xp, yp);
		iVar5 = iVar5 + 1;
	}
	return;
}

void InitRndLocBigObj(int min, int max, int objtype)

{
	int iVar1;
	int iVar2;
	int iVar3;
	BOOL BVar4;
	int iVar5;
	int yp;
	int xp;

	iVar1 = random(-0x74, max - min);
	iVar5 = 0;
	while (iVar5 < min + iVar1) {
		do {
			do {
				iVar2 = random(-0x74, 0x50);
				xp = iVar2 + 0x10;
				iVar3 = random(-0x74, 0x50);
				yp = iVar3 + 0x10;
				BVar4 = RndLocOk(iVar2 + 0xf, iVar3 + 0xe);
			} while (BVar4 == 0);
			BVar4 = RndLocOk(xp, iVar3 + 0xe);
		} while ((((((BVar4 == 0) || (BVar4 = RndLocOk(iVar2 + 0x11, iVar3 + 0xe), BVar4 == 0)) || (BVar4 = RndLocOk(iVar2 + 0xf, iVar3 + 0xf), BVar4 == 0)) || ((BVar4 = RndLocOk(xp, iVar3 + 0xf), BVar4 == 0 || (BVar4 = RndLocOk(iVar2 + 0x11, iVar3 + 0xf), BVar4 == 0)))) || ((BVar4 = RndLocOk(iVar2 + 0xf, yp), BVar4 == 0 || ((BVar4 = RndLocOk(xp, yp), BVar4 == 0 || (BVar4 = RndLocOk(iVar2 + 0x11, yp), BVar4 == 0)))))) || ((BVar4 = RndLocOk(iVar2 + 0xf, iVar3 + 0x11), BVar4 == 0 || ((BVar4 = RndLocOk(xp, iVar3 + 0x11), BVar4 == 0 || (BVar4 = RndLocOk(iVar2 + 0x11, iVar3 + 0x11), BVar4 == 0))))));
		AddObject(objtype, xp, yp);
		iVar5 = iVar5 + 1;
	}
	return;
}

void InitRndLocObj5x5(int min, int max, int objtype)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	BOOL BVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int oy;
	int ox;

	iVar2 = random(-0x75, max - min);
	iVar5 = 0;
	do {
		if (min + iVar2 <= iVar5) {
			return;
		}
		iVar6 = 0;
		bVar1 = false;
		while (!bVar1) {
			bVar1 = true;
			iVar3 = random(-0x75, 0x50);
			ox = iVar3 + 0x10;
			iVar3 = random(-0x75, 0x50);
			oy = iVar3 + 0x10;
			iVar3 = -2;
			do {
				iVar7 = -2;
				do {
					BVar4 = RndLocOk(ox + iVar7, oy + iVar3);
					if (BVar4 == 0) {
						bVar1 = false;
					}
					iVar7 = iVar7 + 1;
				} while (iVar7 < 3);
				iVar3 = iVar3 + 1;
			} while (iVar3 < 3);
			if ((!bVar1) && (iVar6 = iVar6 + 1, 20000 < iVar6)) {
				return;
			}
		}
		AddObject(objtype, ox, oy);
		iVar5 = iVar5 + 1;
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ClrAllObjects(void)

{
	undefined *puVar1;
	undefined4 *puVar2;
	undefined4 *puVar3;
	int *piVar4;
	longlong lVar5;
	int iVar6;
	longlong lVar7;

	puVar2 = (undefined4 *)&DAT_1017e10c;
	lVar7 = 0x7f;
	piVar4 = (int *)&DAT_1017df10;
	lVar5 = 0;
	puVar1 = &DAT_1017e3d4;
	do {
		*(undefined4 *)(puVar1 + 4) = 0;
		*(undefined4 *)(puVar1 + 8) = 0;
		*(undefined4 *)(puVar1 + 0x14) = 0;
		*(undefined4 *)(puVar1 + 0x18) = 0;
		*(undefined4 *)(puVar1 + 0x1c) = 0;
		*(undefined4 *)(puVar1 + 0x20) = 0;
		*(undefined4 *)(puVar1 + 0x24) = 0;
		*(undefined4 *)(puVar1 + 0x30) = 0;
		*(undefined4 *)(puVar1 + 0x58) = 0;
		*(undefined4 *)(puVar1 + 0x5c) = 0;
		*(undefined4 *)(puVar1 + 0x60) = 0;
		*(undefined4 *)(puVar1 + 100) = 0;
		puVar1 = puVar1 + 0x78;
		lVar7 = lVar7 + -1;
	} while (lVar7 != 0);
	lVar7 = 0xf;
	_DAT_1017e3d0 = 0;
	do {
		iVar6 = (int)lVar5;
		*piVar4 = iVar6;
		*puVar2 = 0;
		piVar4[1] = iVar6 + 1;
		puVar2[1] = 0;
		lVar5 = lVar5 + 8;
		piVar4[2] = iVar6 + 2;
		puVar2[2] = 0;
		piVar4[3] = iVar6 + 3;
		puVar2[3] = 0;
		piVar4[4] = iVar6 + 4;
		puVar2[4] = 0;
		piVar4[5] = iVar6 + 5;
		puVar2[5] = 0;
		piVar4[6] = iVar6 + 6;
		puVar2[6] = 0;
		piVar4[7] = iVar6 + 7;
		piVar4 = piVar4 + 8;
		puVar2[7] = 0;
		puVar2 = puVar2 + 8;
		lVar7 = lVar7 + -1;
	} while (lVar7 != 0);
	iVar6 = (int)lVar5 * 4;
	puVar2 = (undefined4 *)(&DAT_1017df10 + iVar6);
	puVar3 = (undefined4 *)(&DAT_1017e10c + iVar6);
	lVar7 = 0x7f - lVar5;
	if ((int)lVar5 < 0x7f) {
		do {
			*puVar2 = (int)lVar5;
			puVar2 = puVar2 + 1;
			lVar5 = lVar5 + 1;
			*puVar3 = 0;
			puVar3 = puVar3 + 1;
			lVar7 = lVar7 + -1;
		} while (lVar7 != 0);
	}
	_DAT_1017df04 = 1;
	_DAT_1017df08 = 0;
	_DAT_1017df0c = 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddTortures(void)

{
	int ox;
	int oy;
	int iVar1;
	int iVar2;

	oy = 0;
	iVar1 = 0;
	do {
		ox = 0;
		iVar2 = 0;
		do {
			if (*(short *)(iVar1 + _DAT_1012f1d4 + iVar2) == 0x16f) {
				AddObject(0x24, ox, oy + 1);
				AddObject(0x26, ox + 2, oy + -1);
				AddObject(0x25, ox, oy + 3);
				AddObject(0x27, ox + 4, oy + -1);
				AddObject(0x28, ox, oy + 5);
				AddObject(0x1d, ox + 1, oy + 3);
				AddObject(0x1e, ox + 4, oy + 5);
				AddObject(0x1f, ox + 2, oy);
				AddObject(0x20, ox + 3, oy + 2);
				AddObject(0x21, ox + 2, oy + 4);
				AddObject(0x22, ox + 2, oy + 1);
				AddObject(0x23, ox + 4, oy + 2);
			}
			ox = ox + 1;
			iVar2 = iVar2 + 0xe0;
		} while (ox < 0x70);
		oy = oy + 1;
		iVar1 = iVar1 + 2;
	} while (oy < 0x70);
	return;
}

void AddCandles(void)

{
	int iVar1;
	int iVar2;

	iVar2 = quests[13]._qty;
	iVar1 = quests[13]._qtx;
	AddObject(0x57, quests[13]._qtx + -2, quests[13]._qty + 1);
	AddObject(0x57, iVar1 + 3, iVar2 + 1);
	AddObject(0x57, iVar1 + -1, iVar2 + 2);
	AddObject(0x57, iVar1 + 2, iVar2 + 2);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddBookLever(int lx1, int ly1, int lx2, int ly2, int x1, int y1, int x2, int y2, int msg)

{
	bool bVar1;
	undefined8 uVar2;
	int iVar3;
	BOOL BVar4;
	int i;
	int iVar5;
	int oy;
	int ox;
	int iStack00000018;
	int iStack0000001c;
	int iStack00000020;
	int iStack00000024;
	int msg_00;

	uVar2 = 0x100f8fd0;
	i = 0;
	bVar1 = false;
	iStack00000018 = lx1;
	iStack0000001c = ly1;
	iStack00000020 = lx2;
	iStack00000024 = ly2;
	do {
		iVar3 = (int)uVar2;
		if (bVar1) {
			BVar4 = QuestStatus(8);
			if (BVar4 != 0) {
				AddObject(0x47, ox, oy);
			}
			BVar4 = QuestStatus(0xb);
			if (BVar4 != 0) {
				AddObject(0x58, ox, oy);
			}
			BVar4 = QuestStatus(9);
			if (BVar4 != 0) {
				ox = **(int **)(iVar3 + -0x754c) * 2 + 0x19;
				oy = **(int **)(iVar3 + -0x7550) * 2 + 0x28;
				AddObject(0x48, ox, oy);
			}
			i = (int)*(char *)(**(int **)(iVar3 + -0x7684) + ox * 0x70 + oy) + -1;
			SetObjMapRange(i, x1, y1, x2, y2, _DAT_1017df04);
			SetBookMsg(i, msg_00);
			_DAT_1017df04 = _DAT_1017df04 + 1;
			*(int *)(i * 0x78 + 0x1017e440) = *(int *)(i * 0x78 + 0x1017e3f8) + 1;
			return;
		}
		bVar1 = true;
		iVar3 = random(-0x75, 0x50);
		ox = iVar3 + 0x10;
		iVar3 = random(-0x75, 0x50);
		oy = iVar3 + 0x10;
		iVar3 = -2;
		do {
			iVar5 = -2;
			do {
				BVar4 = RndLocOk(ox + iVar5, oy + iVar3);
				if (BVar4 == 0) {
					bVar1 = false;
				}
				iVar5 = iVar5 + 1;
			} while (iVar5 < 3);
			iVar3 = iVar3 + 1;
		} while (iVar3 < 3);
	} while ((bVar1) || (i = i + 1, i < 0x4e21));
	return;
}

void InitRndBarrels(void)

{
	int iVar1;
	int xp;
	int yp;
	BOOL BVar2;
	int ot;
	int iVar3;
	int ot_00;
	int iVar4;

	iVar1 = random(-0x71, 5);
	iVar4 = 0;
	while (iVar4 < iVar1 + 3) {
		do {
			xp = random(-0x71, 0x50);
			xp = xp + 0x10;
			yp = random(-0x71, 0x50);
			yp = yp + 0x10;
			BVar2 = RndLocOk(xp, yp);
		} while (BVar2 == 0);
		ot = random(-0x71, 4);
		if (ot == 0) {
			ot = 0x3a;
		} else {
			ot = 0x39;
		}
		AddObject(ot, xp, yp);
		ot = 1;
		BVar2 = 1;
		while ((ot_00 = random(-0x71, ot >> 1), ot_00 == 0 && (BVar2 != 0))) {
			ot_00 = 0;
			BVar2 = 0;
			while ((BVar2 == 0 && (ot_00 < 3))) {
				iVar3 = random(-0x71, 8);
				xp = xp + *(int *)(&DAT_1010df84 + iVar3 * 4);
				yp = yp + *(int *)(&DAT_1010dfa4 + iVar3 * 4);
				BVar2 = RndLocOk(xp, yp);
				ot_00 = ot_00 + 1;
			}
			if (BVar2 != 0) {
				ot_00 = random(-0x71, 5);
				if (ot_00 == 0) {
					ot_00 = 0x3a;
				} else {
					ot_00 = 0x39;
				}
				AddObject(ot_00, xp, yp);
				ot = ot + 1;
			}
		}
		iVar4 = iVar4 + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddL1Objs(int x1, int y1, int x2, int y2)

{
	short sVar1;
	int ox;
	int iVar2;
	int iVar3;

	iVar2 = y1 << 1;
	while (y1 < y2) {
		iVar3 = x1 * 0xe0;
		ox = x1;
		while (ox < x2) {
			sVar1 = *(short *)(iVar2 + _DAT_1012f1d4 + iVar3);
			if (sVar1 == 0x10e) {
				AddObject(0, ox, y1);
			}
			if (((sVar1 == 0x2c) || (sVar1 == 0x33)) || (sVar1 == 0xd6)) {
				AddObject(1, ox, y1);
			}
			if ((sVar1 == 0x2e) || (sVar1 == 0x38)) {
				AddObject(2, ox, y1);
			}
			iVar3 = iVar3 + 0xe0;
			ox = ox + 1;
		}
		iVar2 = iVar2 + 2;
		y1 = y1 + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddL2Objs(int x1, int y1, int x2, int y2)

{
	short sVar1;
	int ox;
	int iVar2;
	int iVar3;

	iVar2 = y1 << 1;
	while (y1 < y2) {
		iVar3 = x1 * 0xe0;
		ox = x1;
		while (ox < x2) {
			sVar1 = *(short *)(iVar2 + _DAT_1012f1d4 + iVar3);
			if ((sVar1 == 0xd) || (sVar1 == 0x21d)) {
				AddObject(0x2a, ox, y1);
			}
			if ((sVar1 == 0x11) || (sVar1 == 0x21e)) {
				AddObject(0x2b, ox, y1);
			}
			iVar3 = iVar3 + 0xe0;
			ox = ox + 1;
		}
		iVar2 = iVar2 + 2;
		y1 = y1 + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddL3Objs(int x1, int y1, int x2, int y2)

{
	short sVar1;
	int ox;
	int iVar2;
	int iVar3;

	iVar2 = y1 << 1;
	while (y1 < y2) {
		iVar3 = x1 * 0xe0;
		ox = x1;
		while (ox < x2) {
			sVar1 = *(short *)(iVar2 + _DAT_1012f1d4 + iVar3);
			if (sVar1 == 0x213) {
				AddObject(0x4a, ox, y1);
			}
			if (sVar1 == 0x216) {
				AddObject(0x4b, ox, y1);
			}
			iVar3 = iVar3 + 0xe0;
			ox = ox + 1;
		}
		iVar2 = iVar2 + 2;
		y1 = y1 + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL WallTrapLocOk(int xp, int yp)

{
	if ((*(byte *)(_DAT_1012f1bc + xp * 0x70 + yp) & 8) != 0) {
		return 0;
	}
	return 1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddL2Torches(void)

{
	short sVar1;
	BOOL BVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int yp;
	int xp;

	yp = 0;
	iVar4 = 0;
	do {
		iVar6 = 0;
		iVar5 = 0;
		xp = 0;
		do {
			BVar2 = WallTrapLocOk(xp, yp);
			if (BVar2 != 0) {
				sVar1 = *(short *)(iVar4 + _DAT_1012f1d4 + iVar6);
				if ((sVar1 == 1) && (iVar3 = random(-0x6f, 3), iVar3 == 0)) {
					AddObject(0x2e, xp, yp);
				}
				if ((sVar1 == 5) && (iVar3 = random(-0x6f, 3), iVar3 == 0)) {
					AddObject(0x2f, xp, yp);
				}
				if (sVar1 == 0x25) {
					iVar3 = random(-0x6f, 10);
					if ((iVar3 == 0) && (*(char *)(yp + _DAT_1012f1ac + iVar5 + -0x70) == '\0')) {
						AddObject(0x2c, xp + -1, yp);
					}
				}
				if (sVar1 == 0x29) {
					iVar3 = random(-0x6f, 10);
					if ((iVar3 == 0) && (*(char *)(yp + _DAT_1012f1ac + iVar5 + -1) == '\0')) {
						AddObject(0x2d, xp, yp + -1);
					}
				}
			}
			xp = xp + 1;
			iVar5 = iVar5 + 0x70;
			iVar6 = iVar6 + 0xe0;
		} while (xp < 0x70);
		yp = yp + 1;
		iVar4 = iVar4 + 2;
	} while (yp < 0x70);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL TorchLocOK(int xp, int yp)

{
	if ((*(byte *)(_DAT_1012f1bc + xp * 0x70 + yp) & 8) != 0) {
		return 0;
	}
	if ((&DAT_1012f330)[(int)*(short *)(_DAT_1012f1d4 + xp * 0xe0 + yp * 2)] == '\0') {
		return 0;
	}
	return 1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddObjTraps(void)

{
	char cVar1;
	int yp;
	BOOL BVar2;
	short *psVar3;
	int unaff_r19;
	int yp_00;
	int xp;
	int iVar4;
	int iVar5;
	int iVar6;

	if (currlevel == 1) {
		unaff_r19 = 10;
	}
	if (1 < currlevel) {
		unaff_r19 = 0xf;
	}
	if (4 < currlevel) {
		unaff_r19 = 0x14;
	}
	if (6 < currlevel) {
		unaff_r19 = 0x19;
	}
	yp_00 = 0;
	iVar4 = 0;
	do {
		iVar6 = 0;
		iVar5 = 0;
		xp = 0;
		do {
			if ((('\0' < *(char *)(yp_00 + _DAT_1012f1ac + iVar6)) && (yp = random(-0x70, 100), yp < unaff_r19)) && (cVar1 = *(char *)(yp_00 + _DAT_1012f1ac + iVar6) + -1, *(int *)(*(int *)(&DAT_1017e3d4 + (int)cVar1 * 0x78) * 0x2c + 0x1010cdc8) != 0)) {
				yp = random(-0x70, 2);
				if (yp == 0) {
					yp = xp + -1;
					psVar3 = (short *)(_DAT_1012f1d4 + iVar4 + yp * 0xe0);
					while ((&DAT_10130b33)[(int)*psVar3] == '\0') {
						psVar3 = psVar3 + -0x70;
						yp = yp + -1;
					}
					BVar2 = TorchLocOK(yp, yp_00);
					if ((BVar2 != 0) && (1 < xp - yp)) {
						AddObject(0x35, yp, yp_00);
						yp = (int)(char)(*(char *)(yp_00 + _DAT_1012f1ac + yp * 0x70) + -1) * 0x78;
						*(int *)(yp + 0x1017e42c) = xp;
						*(int *)(yp + 0x1017e430) = yp_00;
						*(undefined4 *)((int)cVar1 * 0x78 + 0x1017e41c) = 1;
					}
				} else {
					yp = yp_00 + -1;
					psVar3 = (short *)(_DAT_1012f1d4 + iVar5 + yp * 2);
					while ((&DAT_10130b33)[(int)*psVar3] == '\0') {
						psVar3 = psVar3 + -1;
						yp = yp + -1;
					}
					BVar2 = TorchLocOK(xp, yp);
					if ((BVar2 != 0) && (1 < yp_00 - yp)) {
						AddObject(0x36, xp, yp);
						yp = (int)(char)(*(char *)(_DAT_1012f1ac + iVar6 + yp) + -1) * 0x78;
						*(int *)(yp + 0x1017e42c) = xp;
						*(int *)(yp + 0x1017e430) = yp_00;
						*(undefined4 *)((int)cVar1 * 0x78 + 0x1017e41c) = 1;
					}
				}
			}
			xp = xp + 1;
			iVar5 = iVar5 + 0xe0;
			iVar6 = iVar6 + 0x70;
		} while (xp < 0x70);
		yp_00 = yp_00 + 1;
		iVar4 = iVar4 + 2;
	} while (yp_00 < 0x70);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddChestTraps(void)

{
	char cVar1;
	int iVar2;
	int iVar3;
	int *piVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar6 = 0;
	do {
		iVar7 = 0;
		iVar5 = 0;
		do {
			cVar1 = *(char *)(iVar6 + _DAT_1012f1ac + iVar5);
			if (((('\0' < cVar1) && (iVar2 = (int)(char)(cVar1 + -1) * 0x78, 4 < *(int *)(&DAT_1017e3d4 + iVar2))) && (piVar4 = (int *)(&DAT_1017e3d4 + iVar2), *piVar4 < 8)) && ((*(int *)(iVar2 + 0x1017e41c) == 0 && (iVar3 = random('\0', 100), iVar3 < 10)))) {
				*piVar4 = *piVar4 + 0x3f;
				*(undefined4 *)(iVar2 + 0x1017e41c) = 1;
				if (leveltype == '\x02') {
					iVar3 = random('\0', 2);
					*(int *)(iVar2 + 0x1017e438) = iVar3;
				} else {
					iVar3 = random('\0', 3);
					*(int *)(iVar2 + 0x1017e438) = iVar3;
				}
			}
			iVar7 = iVar7 + 1;
			iVar5 = iVar5 + 0x70;
		} while (iVar7 < 0x70);
		iVar6 = iVar6 + 1;
	} while (iVar6 < 0x70);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void LoadMapObjects(BYTE *pMap, int startx, int starty, int x1, int y1, int w, int h, int leveridx)

{
	int iVar1;
	int iVar2;
	char cVar3;
	int oy;
	int ox;
	longlong lVar4;
	int iVar5;
	int iVar6;
	undefined in_stack_ffffff8b;

	_DAT_1017df00 = 1;
	cVar3 = LockMemFile((longlong)(int)pMap, (char)startx, (char)starty, (char)x1, (char)y1, (char)w, (char)h,
	    (char)leveridx, in_stack_ffffff8b);
	iVar1 = (uint) * (byte *)(int)cVar3 * 2;
	iVar2 = (uint) * (byte *)((int)cVar3 + 2) * 2;
	lVar4 = (longlong)cVar3 + (ulonglong)((uint) * (byte *)(int)cVar3 * (uint) * (byte *)((int)cVar3 + 2) * 2) + 4 + (ulonglong)(uint)(iVar1 * iVar2 * 4);
	iVar5 = 0;
	while (iVar5 < iVar2) {
		oy = iVar5 + starty + 0x10;
		iVar6 = 0;
		while (iVar6 < iVar1) {
			if (*(byte *)lVar4 != 0) {
				ox = iVar6 + startx + 0x10;
				AddObject(*(int *)(&DAT_1010cbdc + (uint) * (byte *)lVar4 * 4), ox, oy);
				ox = ObjIndex(ox, oy);
				SetObjMapRange(ox, x1, y1, x1 + w, y1 + h, leveridx);
			}
			lVar4 = lVar4 + 2;
			iVar6 = iVar6 + 1;
		}
		iVar5 = iVar5 + 1;
	}
	UnlockMemFile((char)pMap);
	_DAT_1017df00 = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void LoadMapObjs(BYTE *pMap, int startx, int starty)

{
	int iVar1;
	int iVar2;
	char cVar3;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	longlong lVar4;
	int iVar5;
	int iVar6;
	undefined in_stack_ffffff9b;

	_DAT_1017df00 = 1;
	cVar3 = LockMemFile(
	    (longlong)(int)pMap, (char)startx, (char)starty, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff9b);
	iVar5 = 0;
	iVar1 = (uint) * (byte *)(int)cVar3 * 2;
	iVar2 = (uint) * (byte *)((int)cVar3 + 2) * 2;
	lVar4 = (longlong)cVar3 + (ulonglong)((uint) * (byte *)(int)cVar3 * (uint) * (byte *)((int)cVar3 + 2) * 2) + 4 + (ulonglong)(uint)(iVar1 * iVar2 * 4);
	while (iVar5 < iVar2) {
		iVar6 = 0;
		while (iVar6 < iVar1) {
			if (*(byte *)lVar4 != 0) {
				AddObject(
				    *(int *)(&DAT_1010cbdc + (uint) * (byte *)lVar4 * 4), iVar6 + startx + 0x10, iVar5 + starty + 0x10);
			}
			lVar4 = lVar4 + 2;
			iVar6 = iVar6 + 1;
		}
		iVar5 = iVar5 + 1;
	}
	UnlockMemFile((char)pMap);
	_DAT_1017df00 = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddDiabObjs(void)

{
	int iVar1;
	int *local_18[6];

	iVar1 = 0x100f8fd0;
	local_18[0] = (int *)LoadFileInMem("Levels\\L4Data\\diab1.DUN", (DWORD *)0x0);
	LoadMapObjects((BYTE *)local_18[0], **(int **)(iVar1 + -0x72ec) << 1, **(int **)(iVar1 + -0x72f0) << 1, _DAT_1012bdfc,
	    _DAT_1012bdec, 0xb, 0xc, 1);
	MemFreeDbg(local_18);
	local_18[0] = (int *)LoadFileInMem(*(char **)(iVar1 + -0x5b14), (DWORD *)0x0);
	LoadMapObjects(
	    (BYTE *)local_18[0], _DAT_1012bdfc << 1, _DAT_1012bdec << 1, _DAT_1012bdf8, _DAT_1012bde8, 0xb, 0xb, 2);
	MemFreeDbg(local_18);
	local_18[0] = (int *)LoadFileInMem(*(char **)(iVar1 + -0x5b18), (DWORD *)0x0);
	LoadMapObjects((BYTE *)local_18[0], _DAT_1012bdf8 << 1, _DAT_1012bde8 << 1, **(int **)(iVar1 + -0x7304),
	    **(int **)(iVar1 + -0x7308), 9, 9, 3);
	MemFreeDbg(local_18);
	return;
}

void AddStoryBooks(void)

{
	bool bVar1;
	int iVar2;
	BOOL BVar3;
	int iVar4;
	int iVar5;
	int oy;
	int ox;

	iVar4 = 0;
	bVar1 = false;
	do {
		if (bVar1) {
			AddObject(0x56, ox, oy);
			AddObject(0x57, ox + -2, oy + 1);
			AddObject(0x57, ox + -2, oy);
			AddObject(0x57, ox + -1, oy + -1);
			AddObject(0x57, ox + 1, oy + -1);
			AddObject(0x57, ox + 2, oy);
			AddObject(0x57, ox + 2, oy + 1);
			return;
		}
		bVar1 = true;
		iVar2 = random(-0x75, 0x50);
		ox = iVar2 + 0x10;
		iVar2 = random(-0x75, 0x50);
		oy = iVar2 + 0x10;
		iVar2 = -2;
		do {
			iVar5 = -3;
			do {
				BVar3 = RndLocOk(ox + iVar5, oy + iVar2);
				if (BVar3 == 0) {
					bVar1 = false;
				}
				iVar5 = iVar5 + 1;
			} while (iVar5 < 4);
			iVar2 = iVar2 + 1;
		} while (iVar2 < 3);
	} while ((bVar1) || (iVar4 = iVar4 + 1, iVar4 < 0x4e21));
	return;
}

void AddHookedBodies(int freq)

{
	int iVar1;
	BOOL BVar2;
	int y;
	int x;
	int oy;
	byte *pbVar3;
	int ox;
	byte *pbVar4;

	pbVar3 = dungeon;
	y = 0;
	oy = 0x10;
	do {
		x = 0;
		ox = 0x10;
		pbVar4 = pbVar3;
		do {
			if ((((*pbVar4 == 1) || (*pbVar4 == 2)) && (iVar1 = random('\0', freq), iVar1 == 0)) && (BVar2 = SkipThemeRoom(x, y), BVar2 != 0)) {
				if ((*pbVar4 == 1) && (pbVar4[0x28] == 6)) {
					iVar1 = random('\0', 3);
					if (iVar1 == 1) {
						AddObject(0x25, ox + 1, oy);
					} else {
						if (iVar1 < 1) {
							if (-1 < iVar1) {
								AddObject(0x24, ox + 1, oy);
							}
						} else {
							if (iVar1 < 3) {
								AddObject(0x28, ox + 1, oy);
							}
						}
					}
				} else {
					if ((*pbVar4 == 2) && (pbVar4[1] == 6)) {
						iVar1 = random('\0', 2);
						if (iVar1 == 1) {
							AddObject(0x27, ox, oy);
						} else {
							if ((iVar1 < 1) && (-1 < iVar1)) {
								AddObject(0x26, ox, oy);
							}
						}
					}
				}
			}
			x = x + 1;
			ox = ox + 2;
			pbVar4 = pbVar4 + 0x28;
		} while (x < 0x28);
		y = y + 1;
		oy = oy + 2;
		pbVar3 = pbVar3 + 1;
	} while (y < 0x28);
	return;
}

void AddL4Goodies(void)

{
	AddHookedBodies(6);
	InitRndLocObj(2, 6, 0x1d);
	InitRndLocObj(2, 6, 0x1e);
	InitRndLocObj(2, 6, 0x1f);
	InitRndLocObj(2, 6, 0x20);
	InitRndLocObj(2, 6, 0x21);
	InitRndLocObj(2, 6, 0x22);
	InitRndLocObj(2, 6, 0x23);
	InitRndLocObj(2, 6, 0x43);
	InitRndLocObj(1, 3, 0x50);
	return;
}

void AddLazStand(void)

{
	bool bVar1;
	int iVar2;
	BOOL BVar3;
	int iVar4;
	int iVar5;
	int oy;
	int ox;

	iVar4 = 0;
	bVar1 = false;
	do {
		if (bVar1) {
			AddObject(0x5f, ox, oy);
			AddObject(0x1e, ox, oy + 2);
			AddObject(0x57, ox + 1, oy + 2);
			AddObject(0x1f, ox + 2, oy + 2);
			AddObject(0x21, ox, oy + -2);
			AddObject(0x57, ox + 1, oy + -2);
			AddObject(0x22, ox + 2, oy + -2);
			AddObject(0x57, ox + -1, oy + -1);
			AddObject(0x23, ox + -1, oy);
			AddObject(0x57, ox + -1, oy + 1);
			return;
		}
		bVar1 = true;
		iVar2 = random(-0x75, 0x50);
		ox = iVar2 + 0x10;
		iVar2 = random(-0x75, 0x50);
		oy = iVar2 + 0x10;
		iVar2 = -3;
		do {
			iVar5 = -2;
			do {
				BVar3 = RndLocOk(ox + iVar5, oy + iVar2);
				if (BVar3 == 0) {
					bVar1 = false;
				}
				iVar5 = iVar5 + 1;
			} while (iVar5 < 4);
			iVar2 = iVar2 + 1;
		} while (iVar2 < 4);
	} while ((bVar1) || (iVar4 = iVar4 + 1, iVar4 < 0x2711));
	InitRndLocObj(1, 1, 0x5f);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void InitObjects(void)

{
	char cVar1;
	int iVar2;
	BOOL BVar3;
	undefined8 unaff_r20;
	uchar uVar4;
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
	int msg;
	int *local_3c[3];
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

	uVar4 = (uchar)unaff_r20;
	iVar2 = 0x100f8fd0;
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
	ClrAllObjects();
	if (currlevel == 0x10) {
		AddDiabObjs();
	} else {
		_DAT_1017df00 = 1;
		GetRndSeed();
		if ((currlevel == 9) && (gbMaxPlayers == '\x01')) {
			AddSlainHero();
		}
		if ((currlevel == quests[1]._qlevel) && (quests[1]._qactive == '\x01')) {
			AddMushPatch();
		}
		if (currlevel == 4) {
			AddStoryBooks();
		}
		if (currlevel == 8) {
			AddStoryBooks();
		}
		if (currlevel == 0xc) {
			AddStoryBooks();
		}
		if (leveltype == 1) {
			BVar3 = QuestStatus(6);
			if (BVar3 != 0) {
				AddTortures();
			}
			BVar3 = QuestStatus(0xd);
			if (BVar3 != 0) {
				AddCandles();
			}
			BVar3 = QuestStatus(7);
			if (BVar3 != 0) {
				AddObject(0x61, _DAT_1013b36c * 2 + 0x1a, _DAT_1013b368 * 2 + 0x13);
			}
			InitRndLocBigObj(10, 0xf, 0x30);
			AddL1Objs(0, 0, 0x70, 0x70);
			InitRndBarrels();
		}
		if (leveltype == 2) {
			BVar3 = QuestStatus(0);
			if (BVar3 != 0) {
				InitRndLocObj5x5(1, 1, 0x17);
			}
			BVar3 = QuestStatus(0xe);
			if (BVar3 != 0) {
				InitRndLocObj5x5(1, 1, 0x29);
			}
			AddL2Objs(0, 0, 0x70, 0x70);
			AddL2Torches();
			BVar3 = QuestStatus(8);
			if (BVar3 != 0) {
				cVar1 = *(char *)((int)plr + myplr * 0x55ec + 0x15c);
				if (cVar1 == '\0') {
					uVar4 = -0x13;
				} else {
					if (cVar1 == '\x01') {
						uVar4 = -0xb;
					} else {
						if (cVar1 == '\x02') {
							uVar4 = -0xf;
						}
					}
				}
				quests[8]._qmsg = uVar4;
				AddBookLever(0, 0, 0x70, 0x70, _DAT_1013b36c, _DAT_1013b368, _DAT_1013b36c + _DAT_1013b364 + 1,
				    _DAT_1013b368 + _DAT_1013b360 + 1, msg);
				local_3c[0] = (int *)LoadFileInMem(*(char **)(iVar2 + -0x5b1c), (DWORD *)0x0);
				LoadMapObjs((BYTE *)local_3c[0], _DAT_1013b36c << 1, _DAT_1013b368 << 1);
				MemFreeDbg(local_3c);
			}
			BVar3 = QuestStatus(9);
			if (BVar3 != 0) {
				cVar1 = *(char *)((int)plr + myplr * 0x55ec + 0x15c);
				if (cVar1 == '\0') {
					uVar4 = -0x14;
				} else {
					if (cVar1 == '\x01') {
						uVar4 = -0xc;
					} else {
						if (cVar1 == '\x02') {
							uVar4 = -0x10;
						}
					}
				}
				quests[9]._qmsg = uVar4;
				AddBookLever(
				    0, 0, 0x70, 0x70, _DAT_1013b36c, _DAT_1013b368 + 3, _DAT_1013b36c + 2, _DAT_1013b368 + 7, msg);
				AddObject(0x49, _DAT_1013b36c * 2 + 0x19, _DAT_1013b368 * 2 + 0x20);
			}
			InitRndBarrels();
		}
		if (leveltype == 3) {
			AddL3Objs(0, 0, 0x70, 0x70);
			InitRndBarrels();
		}
		if (leveltype == 4) {
			BVar3 = QuestStatus(0xb);
			if (BVar3 != 0) {
				cVar1 = *(char *)((int)plr + myplr * 0x55ec + 0x15c);
				if (cVar1 == '\0') {
					uVar4 = -0x12;
				} else {
					if (cVar1 == '\x01') {
						uVar4 = -10;
					} else {
						if (cVar1 == '\x02') {
							uVar4 = -0xe;
						}
					}
				}
				quests[11]._qmsg = uVar4;
				AddBookLever(0, 0, 0x70, 0x70, _DAT_1013b36c, _DAT_1013b368, _DAT_1013b36c + _DAT_1013b364,
				    _DAT_1013b368 + _DAT_1013b360, msg);
				local_3c[0] = (int *)LoadFileInMem(*(char **)(iVar2 + -0x5b20), (DWORD *)0x0);
				LoadMapObjs((BYTE *)local_3c[0], _DAT_1013b36c << 1, _DAT_1013b368 << 1);
				MemFreeDbg(local_3c);
			}
			BVar3 = QuestStatus(0xf);
			if ((BVar3 != 0) && (gbMaxPlayers == '\x01')) {
				AddLazStand();
			}
			InitRndBarrels();
			AddL4Goodies();
		}
		InitRndLocObj(5, 10, 5);
		InitRndLocObj(3, 6, 6);
		InitRndLocObj(1, 5, 7);
		if (leveltype != 4) {
			AddObjTraps();
		}
		if (1 < leveltype) {
			AddChestTraps();
		}
		_DAT_1017df00 = 0;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SetMapObjects(BYTE *pMap, int startx, int starty)

{
	byte bVar1;
	uint uVar2;
	int iVar3;
	undefined8 uVar4;
	char cVar7;
	int iVar5;
	BYTE *pBVar6;
	longlong lVar8;
	undefined in_r6;
	char *pcVar10;
	longlong lVar9;
	undefined in_r7;
	undefined8 uVar11;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined8 unaff_r18;
	longlong lVar12;
	int iVar13;
	undefined8 unaff_r19;
	int *piVar14;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined4 *puVar15;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	ulonglong uVar16;
	undefined4 in_stack_fffffe88;
	undefined in_stack_fffffe8f;
	undefined4 in_stack_fffffe9c;
	undefined4 in_stack_fffffea0;
	undefined4 in_stack_fffffea4;
	undefined4 in_stack_fffffea8;
	undefined4 in_stack_fffffeac;
	undefined4 in_stack_fffffeb0;
	undefined4 in_stack_fffffeb4;
	char acStack320[32];
	int local_120[4];
	undefined4 local_110;
	undefined4 local_10c;
	undefined4 local_108;
	undefined4 local_104;
	undefined4 local_100;
	undefined4 local_fc;
	undefined4 local_f8;
	undefined4 local_f4;
	undefined4 local_f0;
	undefined4 local_ec;
	undefined4 local_e8;
	undefined4 local_e4;
	undefined4 local_e0;
	undefined4 local_dc;
	undefined4 local_d8;
	undefined4 local_d4;
	undefined4 local_d0;
	undefined4 local_cc;
	undefined4 local_c8;
	undefined4 local_c4;
	undefined4 local_c0;
	undefined4 local_bc;
	undefined4 local_b8;
	undefined4 local_b4;
	undefined4 local_b0;
	undefined4 local_ac;
	undefined4 local_a8;
	undefined4 local_a4;
	undefined4 local_a0;
	undefined4 local_9c;
	undefined4 local_98;
	undefined4 local_94;
	undefined4 local_90;
	undefined4 local_8c;
	undefined4 local_88;
	undefined4 local_84;
	undefined4 local_80;
	undefined4 local_7c;
	undefined4 local_78;
	undefined4 local_74;
	undefined4 local_70;
	undefined4 local_6c;
	undefined4 local_68;
	undefined4 local_64;
	undefined4 local_60;
	undefined4 local_5c;
	undefined4 local_58;
	undefined4 local_54;
	undefined4 local_50;
	undefined4 local_4c;
	undefined4 local_48;
	undefined4 local_44;
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

	uVar4 = 0x100f8fd0;
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
	pcVar10 = &DAT_1010cda0;
	cVar7 = LockMemFile((longlong)(int)pMap, (char)startx, (char)starty, in_r6, in_r7, (char)in_r8, (char)in_r9,
	    (char)in_r10, (char)in_stack_fffffe88);
	ClrAllObjects();
	_DAT_1017df00 = 1;
	piVar14 = local_120;
	local_120[0] = 0;
	local_120[1] = 0;
	local_120[2] = 0;
	local_120[3] = 0;
	local_110 = 0;
	local_10c = 0;
	local_108 = 0;
	local_104 = 0;
	local_100 = 0;
	local_fc = 0;
	local_f8 = 0;
	local_f4 = 0;
	local_f0 = 0;
	local_ec = 0;
	local_e8 = 0;
	local_e4 = 0;
	local_e0 = 0;
	local_dc = 0;
	local_d8 = 0;
	local_d4 = 0;
	local_d0 = 0;
	local_cc = 0;
	local_c8 = 0;
	local_c4 = 0;
	local_c0 = 0;
	local_bc = 0;
	local_b8 = 0;
	local_b4 = 0;
	local_b0 = 0;
	local_ac = 0;
	local_a8 = 0;
	local_a4 = 0;
	local_a0 = 0;
	local_9c = 0;
	local_98 = 0;
	local_94 = 0;
	local_90 = 0;
	local_8c = 0;
	local_88 = 0;
	local_84 = 0;
	local_80 = 0;
	local_7c = 0;
	local_78 = 0;
	local_74 = 0;
	local_70 = 0;
	local_6c = 0;
	local_68 = 0;
	local_64 = 0;
	local_60 = 0;
	local_5c = 0;
	local_58 = 0;
	local_54 = 0;
	local_50 = 0;
	local_4c = 0;
	local_48 = 0;
	local_44 = 0;
	bVar1 = **(byte **)((int)uVar4 + -0x7794);
	while (*pcVar10 != -1) {
		if ((*pcVar10 == '\x01') && ((uint)bVar1 == (int)pcVar10[4])) {
			piVar14[(int)pcVar10[1]] = 1;
		}
		pcVar10 = pcVar10 + 0x2c;
	}
	bVar1 = *(byte *)(int)cVar7;
	iVar5 = 0;
	uVar2 = (uint)bVar1 * 2;
	iVar3 = (uint) * (byte *)((int)cVar7 + 2) * 2;
	lVar9 = (ulonglong)((uint)bVar1 * (uint) * (byte *)((int)cVar7 + 2) * 2) + 2 + (ulonglong)(uVar2 * iVar3 * 4);
	lVar8 = (longlong)cVar7 + 2 + lVar9;
	uVar11 = 1;
	lVar12 = lVar8;
	while (iVar5 < iVar3) {
		uVar16 = (ulonglong)uVar2;
		if (bVar1 != 0) {
			do {
				if (*(byte *)lVar12 != 0) {
					lVar9 = (ulonglong) * (uint *)(&DAT_1010cbdc + (uint) * (byte *)lVar12 * 4) * 0x2c;
					local_120[(int)*(char *)((int)lVar9 + 0x1010cda1)] = 1;
				}
				lVar12 = lVar12 + 2;
				uVar16 = uVar16 - 1;
			} while (uVar16 != 0);
		}
		iVar5 = iVar5 + 1;
	}
	lVar12 = 0;
	puVar15 = *(undefined4 **)((int)uVar4 + -0x6fd4);
	do {
		if (*piVar14 != 0) {
			(&DAT_1017e3a8)[*(int *)((int)uVar4 + -0x4cc8)] = (char)lVar12;
			wsprintf((int)acStack320, "Objects\\%s.CEL", *puVar15, (int)lVar9, (int)uVar11, in_r8, in_r9, in_r10,
			    in_stack_fffffe88, in_stack_fffffe8f, in_stack_fffffe9c, in_stack_fffffea0, in_stack_fffffea4,
			    in_stack_fffffea8, in_stack_fffffeac, in_stack_fffffeb0, in_stack_fffffeb4);
			pBVar6 = LoadFileInMem(acStack320, (DWORD *)0x0);
			iVar5 = (int)uVar4;
			*(BYTE **)(&DAT_1017e308 + *(int *)(iVar5 + -0x4cc8) * 4) = pBVar6;
			*(int *)(iVar5 + -0x4cc8) = *(int *)(iVar5 + -0x4cc8) + 1;
		}
		lVar12 = lVar12 + 1;
		puVar15 = puVar15 + 1;
		piVar14 = piVar14 + 1;
	} while ((int)lVar12 < 0x38);
	iVar5 = 0;
	while (iVar5 < iVar3) {
		iVar13 = 0;
		while (iVar13 < (int)uVar2) {
			if (*(byte *)lVar8 != 0) {
				AddObject(
				    *(int *)(&DAT_1010cbdc + (uint) * (byte *)lVar8 * 4), iVar13 + startx + 0x10, iVar5 + starty + 0x10);
			}
			lVar8 = lVar8 + 2;
			iVar13 = iVar13 + 1;
		}
		iVar5 = iVar5 + 1;
	}
	UnlockMemFile((char)pMap);
	_DAT_1017df00 = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DeleteObject_(int oi, int i)

{
	*(undefined *)(_DAT_1012f1ac + *(int *)(oi * 0x78 + 0x1017e3d8) * 0x70 + *(int *)(oi * 0x78 + 0x1017e3dc)) = 0;
	*(int *)(&DAT_1017df10 + (0x7f - _DAT_1017e3d0) * 4) = oi;
	_DAT_1017e3d0 = _DAT_1017e3d0 + -1;
	if (_DAT_1017e3d0 < 1) {
		return;
	}
	if (i == _DAT_1017e3d0) {
		return;
	}
	*(undefined4 *)(&DAT_1017e10c + i * 4) = *(undefined4 *)(&DAT_1017e10c + _DAT_1017e3d0 * 4);
	return;
}

void SetupObject(int i, int x, int y, int ot)

{
	int v;
	char *pcVar1;
	int iVar2;

	i = i * 0x78;
	pcVar1 = &DAT_1017e3a8;
	iVar2 = ot * 0x2c;
	*(int *)(&DAT_1017e3d4 + i) = ot;
	*(int *)(i + 0x1017e3d8) = x;
	v = 0;
	*(int *)(i + 0x1017e3dc) = y;
	while (*pcVar1 != *(char *)(iVar2 + 0x1010cda1)) {
		pcVar1 = pcVar1 + 1;
		v = v + 1;
	}
	*(undefined4 *)(i + 0x1017e3e8) = *(undefined4 *)(&DAT_1017e308 + v * 4);
	*(undefined4 *)(i + 0x1017e3e4) = *(undefined4 *)(iVar2 + 0x1010cda8);
	if (*(int *)(i + 0x1017e3e4) == 0) {
		*(undefined4 *)(i + 0x1017e3ec) = 1000;
		*(undefined4 *)(i + 0x1017e3f0) = 0;
		*(undefined4 *)(i + 0x1017e3f4) = *(undefined4 *)(iVar2 + 0x1010cdb0);
		*(undefined4 *)(i + 0x1017e3f8) = *(undefined4 *)(iVar2 + 0x1010cdac);
	} else {
		v = *(int *)(iVar2 + 0x1010cdac);
		*(int *)(i + 0x1017e3ec) = v;
		v = random(-0x6e, v);
		*(int *)(i + 0x1017e3f0) = v;
		v = *(int *)(iVar2 + 0x1010cdb0);
		*(int *)(i + 0x1017e3f4) = v;
		v = random(-0x6e, v + -1);
		*(int *)(i + 0x1017e3f8) = v + 1;
	}
	*(undefined4 *)(i + 0x1017e3fc) = *(undefined4 *)(iVar2 + 0x1010cdb4);
	*(undefined4 *)(i + 0x1017e40c) = *(undefined4 *)(iVar2 + 0x1010cdb8);
	*(undefined4 *)(i + 0x1017e410) = *(undefined4 *)(iVar2 + 0x1010cdbc);
	*(undefined4 *)(i + 0x1017e3e0) = *(undefined4 *)(iVar2 + 0x1010cdc0);
	*(undefined4 *)(i + 0x1017e404) = 0;
	*(undefined *)(i + 0x1017e408) = *(undefined *)(iVar2 + 0x1010cdc4);
	*(undefined *)(i + 0x1017e414) = *(undefined *)(iVar2 + 0x1010cdc5);
	*(undefined4 *)(i + 0x1017e418) = 0;
	*(undefined4 *)(i + 0x1017e41c) = 0;
	*(undefined4 *)(i + 0x1017e420) = 0;
	return;
}

void SetObjMapRange(int i, int x1, int y1, int x2, int y2, int v)

{
	i = i * 0x78;
	*(int *)(i + 0x1017e42c) = x1;
	*(int *)(i + 0x1017e430) = y1;
	*(int *)(i + 0x1017e434) = x2;
	*(int *)(i + 0x1017e438) = y2;
	*(int *)(i + 0x1017e448) = v;
	return;
}

void SetBookMsg(int i, int msg)

{
	*(int *)(i * 0x78 + 0x1017e444) = msg;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddL1Door(int i, int x, int y, int ot)

{
	int iVar1;

	i = i * 0x78;
	*(undefined4 *)(i + 0x1017e420) = 1;
	if (ot == 1) {
		iVar1 = _DAT_1012f1d4 + x * 0xe0;
		*(int *)(i + 0x1017e42c) = (int)*(short *)(_DAT_1012f1d4 + x * 0xe0 + y * 2);
		*(int *)(i + 0x1017e430) = (int)*(short *)(iVar1 + y * 2 + -2);
	} else {
		iVar1 = _DAT_1012f1d4 + x * 0xe0;
		*(int *)(i + 0x1017e42c) = (int)*(short *)(_DAT_1012f1d4 + x * 0xe0 + y * 2);
		*(int *)(i + 0x1017e430) = (int)*(short *)(iVar1 + y * 2 + -0xe0);
	}
	*(undefined4 *)(i + 0x1017e438) = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddSCambBook(int i)

{
	int iVar1;
	int iVar2;

	iVar2 = _DAT_1013b36c;
	i = i * 0x78;
	*(int *)(i + 0x1017e42c) = _DAT_1013b36c;
	iVar1 = _DAT_1013b368;
	*(int *)(i + 0x1017e430) = _DAT_1013b368;
	*(int *)(i + 0x1017e434) = iVar2 + _DAT_1013b364 + 1;
	*(int *)(i + 0x1017e438) = iVar1 + _DAT_1013b360 + 1;
	*(int *)(i + 0x1017e440) = *(int *)(i + 0x1017e3f8) + 1;
	return;
}

void AddChest(int i, int t)

{
	int iVar1;

	iVar1 = random(-0x6d, 2);
	if (iVar1 == 0) {
		*(int *)(i * 0x78 + 0x1017e3f8) = *(int *)(i * 0x78 + 0x1017e3f8) + 3;
	}
	iVar1 = GetRndSeed();
	i = i * 0x78;
	*(int *)(i + 0x1017e428) = iVar1;
	if (t == 0x44) {
	LAB_1008431c:
		if (DAT_1012f316 == '\0') {
			iVar1 = random(-0x6d, 2);
			*(int *)(i + 0x1017e42c) = iVar1;
		} else {
			*(undefined4 *)(i + 0x1017e42c) = 1;
		}
	} else {
		if (t < 0x44) {
			if (t != 6) {
				if (5 < t) {
					if (7 < t)
						goto LAB_100843b4;
					goto LAB_10084384;
				}
				if (t < 5)
					goto LAB_100843b4;
				goto LAB_1008431c;
			}
		} else {
			if (t == 0x46) {
			LAB_10084384:
				if (DAT_1012f316 == '\0') {
					iVar1 = random(-0x6d, 4);
					*(int *)(i + 0x1017e42c) = iVar1;
				} else {
					*(undefined4 *)(i + 0x1017e42c) = 3;
				}
				goto LAB_100843b4;
			}
			if (0x45 < t)
				goto LAB_100843b4;
		}
		if (DAT_1012f316 == '\0') {
			iVar1 = random(-0x6d, 3);
			*(int *)(i + 0x1017e42c) = iVar1;
		} else {
			*(undefined4 *)(i + 0x1017e42c) = 2;
		}
	}
LAB_100843b4:
	iVar1 = random(-0x6d, 8);
	*(int *)(i + 0x1017e430) = iVar1;
	return;
}

void AddL2Door(int i, int x, int y, int ot)

{
	*(undefined4 *)(i * 0x78 + 0x1017e420) = 1;
	if (ot == 0x2a) {
		ObjSetMicro(x, y, 0x21a);
	} else {
		ObjSetMicro(x, y, 0x21c);
	}
	*(undefined4 *)(i * 0x78 + 0x1017e438) = 0;
	return;
}

void AddL3Door(int i, int x, int y, int ot)

{
	*(undefined4 *)(i * 0x78 + 0x1017e420) = 1;
	if (ot == 0x4a) {
		ObjSetMicro(x, y, 0x213);
	} else {
		ObjSetMicro(x, y, 0x216);
	}
	*(undefined4 *)(i * 0x78 + 0x1017e438) = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddSarc(int i)

{
	int iVar1;
	int iVar2;

	iVar2 = i * 0x78;
	*(char *)(_DAT_1012f1ac + *(int *)(iVar2 + 0x1017e3d8) * 0x70 + *(int *)(iVar2 + 0x1017e3dc) + -1) = -1 - (char)i;
	iVar1 = random(-0x67, 10);
	*(int *)(iVar2 + 0x1017e42c) = iVar1;
	iVar1 = GetRndSeed();
	*(int *)(iVar2 + 0x1017e428) = iVar1;
	if (7 < *(int *)(iVar2 + 0x1017e42c)) {
		iVar1 = PreSpawnSkeleton();
		*(int *)(iVar2 + 0x1017e430) = iVar1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddFlameTrap(int i)

{
	i = i * 0x78;
	*(undefined4 *)(i + 0x1017e42c) = _DAT_1017df0c;
	*(undefined4 *)(i + 0x1017e430) = 0;
	*(undefined4 *)(i + 0x1017e434) = _DAT_1017df08;
	*(undefined4 *)(i + 0x1017e438) = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddFlameLvr(int i)

{
	*(undefined4 *)(i * 0x78 + 0x1017e42c) = _DAT_1017df0c;
	*(undefined4 *)(i * 0x78 + 0x1017e430) = 0x31;
	return;
}

void AddTrap(int i, int ot)

{
	int iVar1;
	int iStack0000001c;

	iStack0000001c = ot;
	iVar1 = random(-0x6c, (int)(uint)currlevel / 3 + ((uint)((int)(uint)currlevel / 3) >> 0x1f) + 1);
	if (iVar1 == 0) {
		*(undefined4 *)(i * 0x78 + 0x1017e434) = 0;
	}
	if (iVar1 == 1) {
		*(undefined4 *)(i * 0x78 + 0x1017e434) = 1;
	}
	if (iVar1 == 2) {
		*(undefined4 *)(i * 0x78 + 0x1017e434) = 7;
	}
	*(undefined4 *)(i * 0x78 + 0x1017e438) = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddObjLight(int i, int r)

{
	if (_DAT_1017df00 == 0) {
		*(undefined4 *)(i * 0x78 + 0x1017e42c) = 0;
	} else {
		i = i * 0x78;
		DoLighting(*(int *)(i + 0x1017e3d8), *(int *)(i + 0x1017e3dc), r, -1);
		*(undefined4 *)(i + 0x1017e42c) = 0xffffffff;
	}
	return;
}

void AddBarrel(int i, int t)

{
	int iVar1;
	int iStack0000001c;

	i = i * 0x78;
	*(undefined4 *)(i + 0x1017e42c) = 0;
	iStack0000001c = t;
	iVar1 = GetRndSeed();
	*(int *)(i + 0x1017e428) = iVar1;
	iVar1 = random(-0x6b, 10);
	*(int *)(i + 0x1017e430) = iVar1;
	iVar1 = random(-0x6b, 3);
	*(int *)(i + 0x1017e434) = iVar1;
	if (7 < *(int *)(i + 0x1017e430)) {
		iVar1 = PreSpawnSkeleton();
		*(int *)(i + 0x1017e438) = iVar1;
	}
	return;
}

void AddShrine(int i)

{
	byte bVar1;
	char cVar2;
	int iVar3;
	char *pcVar4;
	char *pcVar5;
	char *pcVar6;
	int *piVar7;
	int *piVar8;
	longlong lVar9;
	int local_78[30];

	i = i * 0x78;
	pcVar5 = &DAT_1010e02c;
	pcVar6 = &DAT_1010e046;
	*(undefined4 *)(i + 0x1017e418) = 1;
	cVar2 = gbMaxPlayers;
	bVar1 = currlevel;
	lVar9 = 0xd;
	pcVar4 = &DAT_1010e060;
	piVar7 = local_78;
	do {
		if (((int)(uint)bVar1 < (int)*pcVar5) || ((int)*pcVar6 < (int)(uint)bVar1)) {
			*piVar7 = 0;
		} else {
			*piVar7 = 1;
		}
		if ((cVar2 != '\x01') && (*pcVar4 == '\x01')) {
			*piVar7 = 0;
		}
		if ((cVar2 == '\x01') && (*pcVar4 == '\x02')) {
			*piVar7 = 0;
		}
		piVar8 = piVar7 + 1;
		if (((int)(uint)bVar1 < (int)pcVar5[1]) || ((int)pcVar6[1] < (int)(uint)bVar1)) {
			*piVar8 = 0;
		} else {
			*piVar8 = 1;
		}
		if ((cVar2 != '\x01') && (pcVar4[1] == '\x01')) {
			*piVar8 = 0;
		}
		if ((cVar2 == '\x01') && (pcVar4[1] == '\x02')) {
			*piVar8 = 0;
		}
		pcVar5 = pcVar5 + 2;
		pcVar6 = pcVar6 + 2;
		piVar7 = piVar7 + 2;
		pcVar4 = pcVar4 + 2;
		lVar9 = lVar9 + -1;
	} while (lVar9 != 0);
	do {
		iVar3 = random(-0x6a, 0x1a);
	} while (local_78[iVar3] == 0);
	*(int *)(i + 0x1017e42c) = iVar3;
	iVar3 = random(-0x6a, 2);
	if (iVar3 != 0) {
		*(undefined4 *)(i + 0x1017e3f8) = 0xc;
		*(undefined4 *)(i + 0x1017e3f4) = 0x16;
	}
	return;
}

void AddBookcase(int i)

{
	int iVar1;

	iVar1 = GetRndSeed();
	*(int *)(i * 0x78 + 0x1017e428) = iVar1;
	*(undefined4 *)(i * 0x78 + 0x1017e418) = 1;
	return;
}

void AddBookstand(int i)

{
	int iVar1;
	int iVar2;

	iVar1 = 0x100f8fd0;
	iVar2 = GetRndSeed();
	*(int *)(*(int *)(iVar1 + -0x7688) + i * 0x78 + 0x54) = iVar2;
	return;
}

void AddBloodFtn(int i)

{
	int iVar1;
	int iVar2;

	iVar1 = 0x100f8fd0;
	iVar2 = GetRndSeed();
	*(int *)(*(int *)(iVar1 + -0x7688) + i * 0x78 + 0x54) = iVar2;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddPurifyingFountain(int i)

{
	char cVar2;
	int iVar1;
	int iVar3;
	int iVar4;

	iVar3 = i * 0x78;
	cVar2 = -1 - (char)i;
	iVar4 = *(int *)(iVar3 + 0x1017e3d8) * 0x70;
	iVar1 = *(int *)(iVar3 + 0x1017e3dc);
	*(char *)(_DAT_1012f1ac + iVar4 + iVar1 + -1) = cVar2;
	*(char *)(_DAT_1012f1ac + iVar4 + iVar1 + -0x70) = cVar2;
	*(char *)(_DAT_1012f1ac + iVar4 + iVar1 + -0x71) = cVar2;
	iVar1 = GetRndSeed();
	*(int *)(iVar3 + 0x1017e428) = iVar1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddArmorStand(int i)

{
	int iVar1;

	if (_DAT_101ab80c == 0) {
		*(undefined4 *)(i * 0x78 + 0x1017e3e4) = 2;
		*(undefined *)(i * 0x78 + 0x1017e414) = 0;
	}
	iVar1 = GetRndSeed();
	*(int *)(i * 0x78 + 0x1017e428) = iVar1;
	return;
}

void AddGoatShrine(int i)

{
	int iVar1;
	int iVar2;

	iVar1 = 0x100f8fd0;
	iVar2 = GetRndSeed();
	*(int *)(*(int *)(iVar1 + -0x7688) + i * 0x78 + 0x54) = iVar2;
	return;
}

void AddCauldron(int i)

{
	int iVar1;
	int iVar2;

	iVar1 = 0x100f8fd0;
	iVar2 = GetRndSeed();
	*(int *)(*(int *)(iVar1 + -0x7688) + i * 0x78 + 0x54) = iVar2;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddMurkyFountain(int i)

{
	char cVar2;
	int iVar1;
	int iVar3;
	int iVar4;

	iVar3 = i * 0x78;
	cVar2 = -1 - (char)i;
	iVar4 = *(int *)(iVar3 + 0x1017e3d8) * 0x70;
	iVar1 = *(int *)(iVar3 + 0x1017e3dc);
	*(char *)(_DAT_1012f1ac + iVar4 + iVar1 + -1) = cVar2;
	*(char *)(_DAT_1012f1ac + iVar4 + iVar1 + -0x70) = cVar2;
	*(char *)(_DAT_1012f1ac + iVar4 + iVar1 + -0x71) = cVar2;
	iVar1 = GetRndSeed();
	*(int *)(iVar3 + 0x1017e428) = iVar1;
	return;
}

void AddTearFountain(int i)

{
	int iVar1;
	int iVar2;

	iVar1 = 0x100f8fd0;
	iVar2 = GetRndSeed();
	*(int *)(*(int *)(iVar1 + -0x7688) + i * 0x78 + 0x54) = iVar2;
	return;
}

void AddDecap(int i)

{
	int iVar1;

	iVar1 = GetRndSeed();
	i = i * 0x78;
	*(int *)(i + 0x1017e428) = iVar1;
	iVar1 = random(-0x69, 8);
	*(int *)(i + 0x1017e3f8) = iVar1 + 1;
	*(undefined4 *)(i + 0x1017e418) = 1;
	return;
}

void AddVilebook(int i)

{
	if (DAT_1012f316 == '\0') {
		return;
	}
	if (DAT_1012f315 != '\x05') {
		return;
	}
	*(undefined4 *)(i * 0x78 + 0x1017e3f8) = 4;
	return;
}

void AddMagicCircle(int i)

{
	int iVar1;

	iVar1 = GetRndSeed();
	i = i * 0x78;
	*(int *)(i + 0x1017e428) = iVar1;
	*(undefined4 *)(i + 0x1017e418) = 1;
	*(undefined4 *)(i + 0x1017e440) = 0;
	*(undefined4 *)(i + 0x1017e43c) = 1;
	return;
}

void AddBrnCross(int i)

{
	int iVar1;
	int iVar2;

	iVar1 = 0x100f8fd0;
	iVar2 = GetRndSeed();
	*(int *)(*(int *)(iVar1 + -0x7688) + i * 0x78 + 0x54) = iVar2;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddPedistal(int i)

{
	int iVar1;
	int iVar2;

	iVar2 = _DAT_1013b36c;
	i = i * 0x78;
	*(int *)(i + 0x1017e42c) = _DAT_1013b36c;
	iVar1 = _DAT_1013b368;
	*(int *)(i + 0x1017e430) = _DAT_1013b368;
	*(int *)(i + 0x1017e434) = iVar2 + _DAT_1013b364;
	*(int *)(i + 0x1017e438) = iVar1 + _DAT_1013b360;
	return;
}

void AddStoryBook(int i)

{
	int *piVar1;
	byte bVar2;
	byte *pbVar3;
	int iVar4;
	int iVar5;

	iVar4 = 0x100f8fd0;
	SetRndSeed(iRam101291e4);
	iVar5 = random('\0', 3);
	i = i * 0x78;
	pbVar3 = *(byte **)(iVar4 + -0x77e4);
	piVar1 = (int *)(i + 0x1017e42c);
	*piVar1 = iVar5;
	bVar2 = *pbVar3;
	if (bVar2 == 4) {
		*(undefined4 *)(i + 0x1017e430) = *(undefined4 *)(&DAT_1010e0a0 + *piVar1 * 0xc);
	}
	if (bVar2 == 8) {
		*(undefined4 *)(i + 0x1017e430) = *(undefined4 *)(*piVar1 * 0xc + 0x1010e0a4);
	}
	if (bVar2 == 0xc) {
		*(undefined4 *)(i + 0x1017e430) = *(undefined4 *)(*piVar1 * 0xc + 0x1010e0a8);
	}
	*(int *)(i + 0x1017e434) = ((int)(uint)bVar2 >> 2) + *piVar1 * 3 + -1;
	*(int *)(i + 0x1017e3f8) = *piVar1 * -2 + 5;
	*(int *)(i + 0x1017e438) = *(int *)(i + 0x1017e3f8) + 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddWeaponRack(int i)

{
	int iVar1;

	if (_DAT_101ab7ec == 0) {
		*(undefined4 *)(i * 0x78 + 0x1017e3e4) = 2;
		*(undefined *)(i * 0x78 + 0x1017e414) = 0;
	}
	iVar1 = GetRndSeed();
	*(int *)(i * 0x78 + 0x1017e428) = iVar1;
	return;
}

void AddTorturedBody(int i)

{
	int iVar1;

	iVar1 = GetRndSeed();
	i = i * 0x78;
	*(int *)(i + 0x1017e428) = iVar1;
	iVar1 = random('\0', 4);
	*(int *)(i + 0x1017e3f8) = iVar1 + 1;
	*(undefined4 *)(i + 0x1017e418) = 1;
	return;
}

void GetRndObjLoc(int randarea, int *xx, int *yy)

{
	undefined8 uVar1;
	uint uVar2;
	int iVar3;
	BOOL BVar4;
	longlong lVar5;
	int iVar6;
	int iVar7;

	lVar5 = (longlong)randarea;
	if (lVar5 != 0) {
		iVar6 = 0;
		do {
			iVar6 = iVar6 + 1;
			if ((1000 < iVar6) && (1 < (int)lVar5)) {
				lVar5 = lVar5 + -1;
			}
			iVar3 = random('\0', 0x70);
			*xx = iVar3;
			iVar3 = random('\0', 0x70);
			*yy = iVar3;
			uVar2 = 0;
			iVar3 = 0;
			while ((iVar3 < (int)lVar5 && (uVar2 == 0))) {
				iVar7 = 0;
				while ((iVar7 < (int)lVar5 && (uVar2 == 0))) {
					BVar4 = RndLocOk(*xx + iVar3, *yy + iVar7);
					uVar1 = countLeadingZeros(BVar4);
					iVar7 = iVar7 + 1;
					uVar2 = (uint)uVar1 >> 5 & 0xff;
				}
				iVar3 = iVar3 + 1;
			}
		} while (uVar2 != 0);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddMushPatch(void)

{
	undefined4 uVar1;
	char cVar2;
	int local_18;
	int local_14[5];

	uVar1 = _DAT_1017df10;
	if (_DAT_1017e3d0 < 0x7f) {
		GetRndObjLoc(5, local_14, &local_18);
		cVar2 = -1 - (char)uVar1;
		*(char *)(_DAT_1012f1ac + local_14[0] * 0x70 + local_18 + 0x71) = cVar2;
		*(char *)(_DAT_1012f1ac + local_14[0] * 0x70 + local_18 + 0xe1) = cVar2;
		*(char *)(_DAT_1012f1ac + local_14[0] * 0x70 + local_18 + 0x72) = cVar2;
		AddObject(0x5e, local_14[0] + 2, local_18 + 2);
	}
	return;
}

void AddSlainHero(void)

{
	int local_8;
	int local_4;

	GetRndObjLoc(5, &local_4, &local_8);
	AddObject(0x60, local_4 + 2, local_8 + 2);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddObject(int ot, int ox, int oy)

{
	int i;
	int iVar1;
	int iVar2;

	i = _DAT_1017df10;
	iVar2 = 0x100f8fd0;
	if (_DAT_1017e3d0 < 0x7f) {
		iVar1 = *(int *)(&DAT_1017df10 + (0x7e - _DAT_1017e3d0) * 4);
		*(int *)(&DAT_1017e10c + _DAT_1017e3d0 * 4) = _DAT_1017df10;
		_DAT_1017df10 = iVar1;
		*(char *)(_DAT_1012f1ac + ox * 0x70 + oy) = (char)i + '\x01';
		SetupObject(i, ox, oy, ot);
		if ((uint)ot < 0x5d) {
			// WARNING: Could not recover jumptable at 0x100851d4. Too many branches
			// WARNING: Treating indirect jump as call
			(**(code **)(*(int *)(iVar2 + -0x5b30) + ot * 4))();
			return;
		}
		*(int *)(i * 0x78 + 0x1017e400) = *(int *)(i * 0x78 + 0x1017e3fc) + -0x40 >> 1;
		_DAT_1017e3d0 = _DAT_1017e3d0 + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Obj_Light(int i, int lr)

{
	int *piVar1;
	int y;
	bool bVar2;
	int iVar3;
	int iVar4;
	int x;
	int iVar5;
	PlayerStruct *pPVar6;

	i = i * 0x78;
	piVar1 = (int *)(i + 0x1017e42c);
	if (*piVar1 != -1) {
		x = *(int *)(i + 0x1017e3d8);
		y = *(int *)(i + 0x1017e3dc);
		bVar2 = false;
		if (_DAT_101b2020 == 0) {
			pPVar6 = plr;
			iVar5 = 0;
			while ((iVar5 < 4 && (!bVar2))) {
				if ((pPVar6->plractive != false) && ((uint)currlevel == pPVar6->plrlevel)) {
					iVar3 = abs(pPVar6->WorldX - x);
					iVar4 = abs(pPVar6->WorldY - y);
					if ((iVar3 < lr + 10) && (iVar4 < lr + 10)) {
						bVar2 = true;
					}
				}
				pPVar6 = (PlayerStruct *)&pPVar6[1]._pSpellFlags;
				iVar5 = iVar5 + 1;
			}
		}
		if (bVar2) {
			if (*piVar1 == 0) {
				x = AddLight(x, y, lr);
				*(int *)(i + 0x1017e424) = x;
			}
			*piVar1 = 1;
		} else {
			if (*piVar1 == 1) {
				AddUnLight(*(int *)(i + 0x1017e424));
			}
			*piVar1 = 0;
		}
	}
	return;
}

void Obj_Circle(int i)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int midam;
	int spllvl;

	iVar3 = 0x100f8fd0;
	i = i * 0x78;
	iVar2 = *(int *)(i + 0x1017e3d8);
	iVar1 = *(int *)(i + 0x1017e3dc);
	if ((*(int *)((int)plr + myplr * 0x55ec + 0x38) == iVar2) && (*(int *)((int)plr + myplr * 0x55ec + 0x3c) == iVar1)) {
		if (*(int *)(&DAT_1017e3d4 + i) == 0x54) {
			*(undefined4 *)(i + 0x1017e3f8) = 2;
		}
		if (*(int *)(&DAT_1017e3d4 + i) == 0x55) {
			*(undefined4 *)(i + 0x1017e3f8) = 4;
		}
		if ((iVar2 == 0x2d) && (iVar1 == 0x2f)) {
			*(undefined4 *)(i + 0x1017e440) = 2;
		} else {
			if ((iVar2 == 0x1a) && (iVar1 == 0x2e)) {
				*(undefined4 *)(i + 0x1017e440) = 1;
			} else {
				*(undefined4 *)(i + 0x1017e440) = 0;
			}
		}
		if (((iVar2 == 0x23) && (iVar1 == 0x24)) && (*(int *)(i + 0x1017e43c) == 3)) {
			*(undefined4 *)(i + 0x1017e440) = 4;
			ObjChangeMapResync(
			    *(int *)(i + 0x1017e42c), *(int *)(i + 0x1017e430), *(int *)(i + 0x1017e434), *(int *)(i + 0x1017e438));
			if (quests[15]._qactive == '\x02') {
				quests[15]._qvar1 = '\x04';
			}
			iVar2 = myplr * 0x55ec;
			AddMissile(*(int *)((int)plr + iVar2 + 0x38), *(int *)((int)plr + iVar2 + 0x3c), 0x23, 0x2e,
			    *(int *)((int)plr + iVar2 + 0x70), 3, '\0', myplr, midam, spllvl);
			track_repeat_walk(0);
			**(undefined **)(iVar3 + -0x7560) = 0;
			ReleaseCapture();
			ClrPlrPath(myplr);
			StartStand(myplr, 0);
		}
	} else {
		if (*(int *)(&DAT_1017e3d4 + i) == 0x54) {
			*(undefined4 *)(i + 0x1017e3f8) = 1;
		}
		if (*(int *)(&DAT_1017e3d4 + i) == 0x55) {
			*(undefined4 *)(i + 0x1017e3f8) = 3;
		}
		*(undefined4 *)(i + 0x1017e440) = 0;
	}
	return;
}

void Obj_StopAnim(int i)

{
	i = i * 0x78;
	if (*(int *)(i + 0x1017e3f8) != *(int *)(i + 0x1017e3f4)) {
		return;
	}
	*(undefined4 *)(i + 0x1017e3f0) = 0;
	*(undefined4 *)(i + 0x1017e3ec) = 1000;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Obj_Door(int i)

{
	int *piVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	short sVar5;
	undefined8 uVar6;
	undefined8 uVar7;
	undefined8 uVar8;
	int iVar10;
	undefined8 uVar9;

	i = i * 0x78;
	piVar1 = (int *)(i + 0x1017e438);
	if (*piVar1 == 0) {
		*(undefined *)(i + 0x1017e414) = 3;
		*(undefined4 *)(i + 0x1017e410) = 0;
	} else {
		iVar10 = *(int *)(i + 0x1017e3d8) * 0x70 + *(int *)(i + 0x1017e3dc);
		cVar2 = *(char *)(_DAT_1012f1a8 + iVar10);
		cVar3 = *(char *)(_DAT_1012f1b0 + iVar10);
		cVar4 = *(char *)(_DAT_1012f1b8 + iVar10);
		sVar5 = *(short *)(_DAT_1012f1b4 + *(int *)(i + 0x1017e3d8) * 0xe0 + *(int *)(i + 0x1017e3dc) * 2);
		*(undefined *)(i + 0x1017e414) = 2;
		uVar9 = countLeadingZeros(-(int)sVar5);
		uVar8 = countLeadingZeros(-(int)cVar2);
		uVar7 = countLeadingZeros(-(int)cVar3);
		uVar6 = countLeadingZeros(-(int)cVar4);
		if (((uint)uVar8 >> 5 & 0xff & (uint)uVar9 >> 5 & 0xff & (uint)uVar7 >> 5 & 0xff & (uint)uVar6 >> 5 & 0xff) == 0) {
			*piVar1 = 2;
		} else {
			*piVar1 = 1;
		}
		*(undefined4 *)(i + 0x1017e410) = 1;
	}
	return;
}

void Obj_Sarc(int i)

{
	i = i * 0x78;
	if (*(int *)(i + 0x1017e3f8) != *(int *)(i + 0x1017e3f4)) {
		return;
	}
	*(undefined4 *)(i + 0x1017e3e4) = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ActivateTrapLine(int ttype, int tid)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int *piVar4;

	piVar4 = (int *)&DAT_1017e10c;
	iVar3 = 0;
	while (iVar3 < _DAT_1017e3d0) {
		iVar1 = *piVar4 * 0x78;
		if ((ttype == *(int *)(&DAT_1017e3d4 + iVar1)) && (tid == *(int *)(iVar1 + 0x1017e42c))) {
			*(undefined4 *)(iVar1 + 0x1017e438) = 1;
			*(undefined4 *)(iVar1 + 0x1017e3e4) = 1;
			*(undefined4 *)(iVar1 + 0x1017e3ec) = 1;
			iVar2 = AddLight(*(int *)(iVar1 + 0x1017e3d8), *(int *)(iVar1 + 0x1017e3dc), 1);
			*(int *)(iVar1 + 0x1017e424) = iVar2;
		}
		piVar4 = piVar4 + 1;
		iVar3 = iVar3 + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Obj_FlameTrap(int i)

{
	int *piVar1;
	short *psVar2;
	char *pcVar3;
	int r;

	i = i * 0x78;
	if (*(int *)(i + 0x1017e430) != 0) {
		if (*(int *)(i + 0x1017e438) == 0) {
			return;
		}
		*(int *)(i + 0x1017e3f8) = *(int *)(i + 0x1017e3f8) + -1;
		r = *(int *)(i + 0x1017e3f8);
		if (r == 1) {
			*(undefined4 *)(i + 0x1017e438) = 0;
			AddUnLight(*(int *)(i + 0x1017e424));
			return;
		}
		if (4 < r) {
			return;
		}
		ChangeLightRadius(*(int *)(i + 0x1017e424), r);
		return;
	}
	if (*(int *)(i + 0x1017e438) == 0) {
		if (*(int *)(i + 0x1017e434) == 2) {
			r = *(int *)(i + 0x1017e3d8) + -2;
			pcVar3 = (char *)(_DAT_1012f1b8 + *(int *)(i + 0x1017e3dc) + r * 0x70);
			psVar2 = (short *)(_DAT_1012f1b4 + *(int *)(i + 0x1017e3dc) * 2 + r * 0xe0);
			if ((*pcVar3 != '\0') || (*psVar2 != 0)) {
				*(undefined4 *)(i + 0x1017e438) = 1;
			}
			if ((pcVar3[0x70] != '\0') || (psVar2[0x70] != 0)) {
				*(undefined4 *)(i + 0x1017e438) = 1;
			}
			if ((pcVar3[0xe0] != '\0') || (psVar2[0xe0] != 0)) {
				*(undefined4 *)(i + 0x1017e438) = 1;
			}
			if ((pcVar3[0x150] != '\0') || (psVar2[0x150] != 0)) {
				*(undefined4 *)(i + 0x1017e438) = 1;
			}
			if ((pcVar3[0x1c0] != '\0') || (psVar2[0x1c0] != 0)) {
				*(undefined4 *)(i + 0x1017e438) = 1;
			}
		} else {
			r = *(int *)(i + 0x1017e3dc) + -2;
			pcVar3 = (char *)(_DAT_1012f1b8 + *(int *)(i + 0x1017e3d8) * 0x70 + r);
			psVar2 = (short *)(_DAT_1012f1b4 + *(int *)(i + 0x1017e3d8) * 0xe0 + r * 2);
			if ((*pcVar3 != '\0') || (*psVar2 != 0)) {
				*(undefined4 *)(i + 0x1017e438) = 1;
			}
			if ((pcVar3[1] != '\0') || (psVar2[1] != 0)) {
				*(undefined4 *)(i + 0x1017e438) = 1;
			}
			if ((pcVar3[2] != '\0') || (psVar2[2] != 0)) {
				*(undefined4 *)(i + 0x1017e438) = 1;
			}
			if ((pcVar3[3] != '\0') || (psVar2[3] != 0)) {
				*(undefined4 *)(i + 0x1017e438) = 1;
			}
			if ((pcVar3[4] != '\0') || (psVar2[4] != 0)) {
				*(undefined4 *)(i + 0x1017e438) = 1;
			}
		}
		if (*(int *)(i + 0x1017e438) != 0) {
			ActivateTrapLine(*(int *)(&DAT_1017e3d4 + i), *(int *)(i + 0x1017e42c));
		}
		return;
	}
	piVar1 = (int *)(i + 0x1017e3f8);
	if (*piVar1 == *(int *)(i + 0x1017e3f4)) {
		*piVar1 = 0xb;
	}
	if (5 < *piVar1) {
		return;
	}
	ChangeLightRadius(*(int *)(i + 0x1017e424), *piVar1);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Obj_Trap(int i)

{
	int x1;
	int y1;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int midir;
	char *pcVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int y2;
	int x2;
	int midam;
	int spllvl;

	i = i * 0x78;
	bVar2 = false;
	if (*(int *)(i + 0x1017e438) != 0) {
		return;
	}
	iVar1 = (int)*(char *)(_DAT_1012f1ac + *(int *)(i + 0x1017e42c) * 0x70 + *(int *)(i + 0x1017e430)) + -1;
	y2 = *(int *)(&DAT_1017e3d4 + iVar1 * 0x78);
	if (y2 < 0x2a) {
		if (y2 < 8) {
			if (y2 == 3)
				goto LAB_10085c90;
			if (y2 < 3) {
				if (y2 < 1)
					goto LAB_10085c90;
				goto LAB_10085c7c;
			}
		} else {
			if (y2 != 0x1c)
				goto LAB_10085c90;
		}
	} else {
		if (y2 != 0x30) {
			if (y2 < 0x30) {
				if (0x2b < y2)
					goto LAB_10085c90;
			} else {
				if ((0x4b < y2) || (y2 < 0x4a))
					goto LAB_10085c90;
			}
		LAB_10085c7c:
			if (*(int *)(iVar1 * 0x78 + 0x1017e438) != 0) {
				bVar2 = true;
			}
			goto LAB_10085c90;
		}
	}
	if (*(char *)(iVar1 * 0x78 + 0x1017e414) == '\0') {
		bVar2 = true;
	}
LAB_10085c90:
	if (bVar2) {
		iVar1 = iVar1 * 0x78;
		*(int *)(i + 0x1017e438) = 1;
		y2 = *(int *)(iVar1 + 0x1017e3dc);
		midir = *(int *)(iVar1 + 0x1017e3d8);
		iVar8 = y2 + -1;
		x1 = *(int *)(i + 0x1017e3d8);
		y1 = *(int *)(i + 0x1017e3dc);
		iVar6 = y2 + _DAT_1012f1b8 + -1;
		iVar4 = y2 + 1;
		x2 = midir;
		while (iVar8 <= iVar4) {
			iVar7 = midir + -1;
			iVar3 = (midir + 2) - iVar7;
			pcVar5 = (char *)(iVar6 + iVar7 * 0x70);
			if (iVar7 <= midir + 1) {
				do {
					if (*pcVar5 != '\0') {
						x2 = iVar7;
						y2 = iVar8;
					}
					pcVar5 = pcVar5 + 0x70;
					iVar7 = iVar7 + 1;
					iVar3 = iVar3 + -1;
				} while (iVar3 != 0);
			}
			iVar6 = iVar6 + 1;
			iVar8 = iVar8 + 1;
		}
		if (_DAT_101795d0 == 0) {
			midir = GetDirection(x1, y1, x2, y2);
			AddMissile(x1, y1, x2, y2, midir, *(int *)(i + 0x1017e434), '\x01', -1, midam, spllvl);
			PlaySfxLoc(0x48, *(int *)(iVar1 + 0x1017e3d8), *(int *)(iVar1 + 0x1017e3dc));
		}
		*(undefined4 *)(iVar1 + 0x1017e41c) = 0;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Obj_BCrossDamage(int i)

{
	int *piVar1;
	int *piVar2;
	char cVar3;
	int iVar4;
	uint uVar5;
	int pnum;
	int iVar6;
	int iVar7;
	int iVar8;
	int aiStack28[4];
	undefined4 local_c;

	pnum = myplr;
	iVar7 = 0x100f8fd0;
	iVar7 = 0x100f8fd0;
	aiStack28[1] = _DAT_1010e238;
	aiStack28[2] = uRam1010e23c;
	aiStack28[3] = uRam1010e240;
	local_c = uRam1010e244;
	iVar6 = myplr * 0x55ec;
	if (((PlayerStruct *)((int)plr + iVar6))->_pmode != 8) {
		cVar3 = *(char *)((int)plr + iVar6 + 0x1c6);
		if ('\0' < cVar3) {
			iVar4 = aiStack28[(uint)leveltype];
			iVar8 = (int)cVar3 * iVar4;
			uVar5 = iVar8 / 100 + (iVar8 >> 0x1f);
			aiStack28[(uint)leveltype] = iVar4 - (uVar5 + (uVar5 >> 0x1f));
		}
		piVar1 = (int *)((int)plr + iVar6 + 0x38);
		if (*piVar1 == *(int *)(i * 0x78 + 0x1017e3d8)) {
			piVar2 = (int *)((int)plr + iVar6 + 0x3c);
			if (*piVar2 == *(int *)(i * 0x78 + 0x1017e3dc) + -1) {
				iVar4 = aiStack28[(uint)leveltype];
				*(int *)((int)plr + iVar6 + 0x194) = *(int *)((int)plr + iVar6 + 0x194) - iVar4;
				*(int *)((int)plr + iVar6 + 0x18c) = *(int *)((int)plr + iVar6 + 0x18c) - iVar4;
				if (*(int *)((int)plr + iVar6 + 0x194) >> 6 == 0) {
					iVar7 = iVar7;
					SyncPlrKill(pnum, 0);
				} else {
					cVar3 = *(char *)((int)plr + iVar6 + 0x15c);
					if (cVar3 == '\0') {
						iVar7 = iVar7;
						PlaySfxLoc(0x313, *piVar1, *piVar2);
					} else {
						if (cVar3 == '\x01') {
							iVar7 = iVar7;
							PlaySfxLoc(0x2a6, *piVar1, *piVar2);
						} else {
							if (cVar3 == '\x02') {
								iVar7 = iVar7;
								PlaySfxLoc(0x23f, *piVar1, *piVar2);
							}
						}
					}
				}
				**(undefined4 **)(iVar7 + -0x76f0) = 1;
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ProcessObjects(void)

{
	int i;
	undefined8 uVar1;
	int i_00;
	int *piVar2;

	uVar1 = 0x100f8fd0;
	piVar2 = (int *)&DAT_1017e10c;
	i_00 = 0;
	while (i_00 < _DAT_1017e3d0) {
		i = *piVar2;
		if (*(uint *)(&DAT_1017e3d4 + i * 0x78) < 0x5c) {
			switch (*(undefined4 *)(*(int *)((int)uVar1 + -0x5b38) + *(uint *)(&DAT_1017e3d4 + i * 0x78) * 4)) {
			case 0x10085fa4:
				Obj_Light(i, 10);
				break;
			case 0x10085fb4:
				Obj_Light(i, 5);
				break;
			case 0x10085fc4:
				Obj_Light(i, 3);
				break;
			case 0x10085fd4:
				Obj_StopAnim(i);
				break;
			case 0x10085fe0:
				Obj_Door(i);
				break;
			case 0x10085fec:
				Obj_Light(i, 8);
				break;
			case 0x10085ffc:
				Obj_Sarc(i);
				break;
			case 0x10086008:
				Obj_FlameTrap(i);
				break;
			case 0x10086014:
				Obj_Trap(i);
				break;
			case 0x10086020:
				Obj_Circle(i);
				break;
			case 0x1008602c:
				Obj_Light(i, 10);
				Obj_BCrossDamage(i);
			}
		}
		i = i * 0x78;
		if (*(int *)(i + 0x1017e3e4) != 0) {
			*(int *)(i + 0x1017e3f0) = *(int *)(i + 0x1017e3f0) + 1;
			if (*(int *)(i + 0x1017e3ec) <= *(int *)(i + 0x1017e3f0)) {
				*(undefined4 *)(i + 0x1017e3f0) = 0;
				*(int *)(i + 0x1017e3f8) = *(int *)(i + 0x1017e3f8) + 1;
				if (*(int *)(i + 0x1017e3f4) < *(int *)(i + 0x1017e3f8)) {
					*(undefined4 *)(i + 0x1017e3f8) = 1;
				}
			}
		}
		piVar2 = piVar2 + 1;
		i_00 = i_00 + 1;
	}
	i_00 = 0;
	while (i_00 < _DAT_1017e3d0) {
		if (*(int *)(*(int *)(&DAT_1017e10c + i_00 * 4) * 0x78 + 0x1017e404) == 0) {
			i_00 = i_00 + 1;
		} else {
			DeleteObject_(*(int *)(&DAT_1017e10c + i_00 * 4), i_00);
			i_00 = 0;
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ObjSetMicro(int dx, int dy, int pn)

{
	undefined *puVar1;
	int iVar2;
	int iVar3;
	char cVar4;
	undefined2 *puVar5;
	undefined uVar7;
	uint uVar6;
	undefined uVar8;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	longlong lVar9;
	undefined in_stack_ffffffbb;

	iVar2 = 0x100f8fd0;
	uVar7 = (undefined)((longlong)dx * 0xe0);
	uVar8 = (undefined)_DAT_1012f1d4;
	*(undefined2 *)(_DAT_1012f1d4 + (int)((longlong)dx * 0xe0) + dy * 2) = (short)pn;
	iVar3 = IsometricCoord(dx, dy);
	puVar5 = (undefined2 *)(**(int **)(iVar2 + -0x7584) + iVar3 * 0x20);
	cVar4 = LockMemFile((ulonglong)_DAT_1013b34c, (char)*(int **)(iVar2 + -0x7584), (char)(iVar3 * 0x20), uVar7, uVar8,
	    in_r8, in_r9, in_r10, in_stack_ffffffbb);
	if (**(char **)(iVar2 + -0x7794) == '\x04') {
		lVar9 = 2;
		iVar2 = (int)cVar4 + (pn + -1) * 0x20;
		uVar6 = 0;
		do {
			puVar1 = (undefined *)(iVar2 + (0xe - (uVar6 & 0xe)) * 2);
			*puVar5 = CONCAT11(puVar1[1], *puVar1);
			puVar1 = (undefined *)(iVar2 + ((0xe - (uVar6 + 1 & 0xe)) + (uVar6 + 1 & 1)) * 2);
			puVar5[1] = CONCAT11(puVar1[1], *puVar1);
			puVar1 = (undefined *)(iVar2 + (0xe - (uVar6 + 2 & 0xe)) * 2);
			puVar5[2] = CONCAT11(puVar1[1], *puVar1);
			puVar1 = (undefined *)(iVar2 + ((0xe - (uVar6 + 3 & 0xe)) + (uVar6 + 3 & 1)) * 2);
			puVar5[3] = CONCAT11(puVar1[1], *puVar1);
			puVar1 = (undefined *)(iVar2 + (0xe - (uVar6 + 4 & 0xe)) * 2);
			puVar5[4] = CONCAT11(puVar1[1], *puVar1);
			puVar1 = (undefined *)(iVar2 + ((0xe - (uVar6 + 5 & 0xe)) + (uVar6 + 5 & 1)) * 2);
			puVar5[5] = CONCAT11(puVar1[1], *puVar1);
			puVar1 = (undefined *)(iVar2 + (0xe - (uVar6 + 6 & 0xe)) * 2);
			puVar5[6] = CONCAT11(puVar1[1], *puVar1);
			puVar1 = (undefined *)(iVar2 + ((0xe - (uVar6 + 7 & 0xe)) + (uVar6 + 7 & 1)) * 2);
			uVar6 = uVar6 + 8;
			puVar5[7] = CONCAT11(puVar1[1], *puVar1);
			puVar5 = puVar5 + 8;
			lVar9 = lVar9 + -1;
		} while (lVar9 != 0);
	} else {
		puVar1 = (undefined *)((int)cVar4 + (pn + -1) * 0x14);
		*puVar5 = CONCAT11(puVar1[0x11], puVar1[0x10]);
		puVar5[1] = CONCAT11(puVar1[0x13], puVar1[0x12]);
		puVar5[2] = CONCAT11(puVar1[0xd], puVar1[0xc]);
		puVar5[3] = CONCAT11(puVar1[0xf], puVar1[0xe]);
		puVar5[4] = CONCAT11(puVar1[9], puVar1[8]);
		puVar5[5] = CONCAT11(puVar1[0xb], puVar1[10]);
		puVar5[6] = CONCAT11(puVar1[5], puVar1[4]);
		puVar5[7] = CONCAT11(puVar1[7], puVar1[6]);
		puVar5[8] = CONCAT11(puVar1[1], *puVar1);
		puVar5[9] = CONCAT11(puVar1[3], puVar1[2]);
	}
	UnlockMemFile((char)_DAT_1013b34c);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void objects_set_door_piece(int x, int y)

{
	undefined uVar1;
	undefined uVar2;
	undefined *puVar3;
	char cVar5;
	int iVar4;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffab;

	iVar4 = 0x100f8fd0;
	cVar5 = LockMemFile((ulonglong)_DAT_1013b34c, (char)y, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffab);
	puVar3 = (undefined *)((int)cVar5 + ((int)*(short *)(**(int **)(iVar4 + -0x757c) + x * 0xe0 + y * 2) + -1) * 0x14 + 0x10);
	uVar1 = puVar3[1];
	uVar2 = *puVar3;
	iVar4 = IsometricCoord(x, y);
	*(undefined2 *)(_DAT_1012f1cc + iVar4 * 0x20) = CONCAT11(uVar1, uVar2);
	uVar1 = puVar3[3];
	uVar2 = puVar3[2];
	iVar4 = IsometricCoord(x, y);
	*(undefined2 *)(_DAT_1012f1cc + iVar4 * 0x20 + 2) = CONCAT11(uVar1, uVar2);
	UnlockMemFile((char)_DAT_1013b34c);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ObjSetMini(int x, int y, int v)

{
	undefined uVar1;
	undefined uVar2;
	undefined uVar3;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined *puVar7;
	char cVar8;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffbb;

	cVar8 = LockMemFile((ulonglong)_DAT_1013b350, (char)y, (char)v, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb);
	puVar7 = (undefined *)((int)cVar8 + (v + -1) * 8);
	uVar1 = puVar7[3];
	uVar4 = puVar7[2];
	uVar2 = puVar7[5];
	uVar5 = puVar7[4];
	uVar3 = puVar7[7];
	uVar6 = puVar7[6];
	y = y * 2;
	x = x * 2;
	ObjSetMicro(x + 0x10, y + 0x10, (int)CONCAT11(puVar7[1], *puVar7) + 1);
	ObjSetMicro(x + 0x11, y + 0x10, (int)CONCAT11(uVar1, uVar4) + 1);
	ObjSetMicro(x + 0x10, y + 0x11, (int)CONCAT11(uVar2, uVar5) + 1);
	ObjSetMicro(x + 0x11, y + 0x11, (int)CONCAT11(uVar3, uVar6) + 1);
	UnlockMemFile((char)_DAT_1013b350);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ObjL1Special(int x1, int y1, int x2, int y2)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar4 = y1 << 1;
	while (y1 <= y2) {
		iVar1 = (x2 + 1) - x1;
		iVar2 = x1 * 0x70;
		iVar3 = x1 * 0xe0;
		if (x1 <= x2) {
			do {
				*(undefined *)(y1 + _DAT_1012f1a0 + iVar2) = 0;
				if (*(short *)(iVar4 + _DAT_1012f1d4 + iVar3) == 0xc) {
					*(undefined *)(y1 + _DAT_1012f1a0 + iVar2) = 1;
				}
				if (*(short *)(iVar4 + _DAT_1012f1d4 + iVar3) == 0xb) {
					*(undefined *)(y1 + _DAT_1012f1a0 + iVar2) = 2;
				}
				if (*(short *)(iVar4 + _DAT_1012f1d4 + iVar3) == 0x47) {
					*(undefined *)(y1 + _DAT_1012f1a0 + iVar2) = 1;
				}
				if (*(short *)(iVar4 + _DAT_1012f1d4 + iVar3) == 0x103) {
					*(undefined *)(y1 + _DAT_1012f1a0 + iVar2) = 5;
				}
				if (*(short *)(iVar4 + _DAT_1012f1d4 + iVar3) == 0xf9) {
					*(undefined *)(y1 + _DAT_1012f1a0 + iVar2) = 2;
				}
				if (*(short *)(iVar4 + _DAT_1012f1d4 + iVar3) == 0x145) {
					*(undefined *)(y1 + _DAT_1012f1a0 + iVar2) = 2;
				}
				if (*(short *)(iVar4 + _DAT_1012f1d4 + iVar3) == 0x141) {
					*(undefined *)(y1 + _DAT_1012f1a0 + iVar2) = 1;
				}
				if (*(short *)(iVar4 + _DAT_1012f1d4 + iVar3) == 0xff) {
					*(undefined *)(y1 + _DAT_1012f1a0 + iVar2) = 4;
				}
				if (*(short *)(iVar4 + _DAT_1012f1d4 + iVar3) == 0xd3) {
					*(undefined *)(y1 + _DAT_1012f1a0 + iVar2) = 1;
				}
				if (*(short *)(iVar4 + _DAT_1012f1d4 + iVar3) == 0x158) {
					*(undefined *)(y1 + _DAT_1012f1a0 + iVar2) = 2;
				}
				if (*(short *)(iVar4 + _DAT_1012f1d4 + iVar3) == 0x155) {
					*(undefined *)(y1 + _DAT_1012f1a0 + iVar2) = 1;
				}
				if (*(short *)(iVar4 + _DAT_1012f1d4 + iVar3) == 0x14b) {
					*(undefined *)(y1 + _DAT_1012f1a0 + iVar2) = 2;
				}
				if (*(short *)(iVar4 + _DAT_1012f1d4 + iVar3) == 0x1a2) {
					*(undefined *)(y1 + _DAT_1012f1a0 + iVar2) = 1;
				}
				if (*(short *)(iVar4 + _DAT_1012f1d4 + iVar3) == 0x1a5) {
					*(undefined *)(y1 + _DAT_1012f1a0 + iVar2) = 2;
				}
				iVar2 = iVar2 + 0x70;
				iVar3 = iVar3 + 0xe0;
				iVar1 = iVar1 + -1;
			} while (iVar1 != 0);
		}
		iVar4 = iVar4 + 2;
		y1 = y1 + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ObjL2Special(int x1, int y1, int x2, int y2)

{
	short sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar6 = y1 << 1;
	iVar7 = y1;
	iVar5 = iVar6;
	while (iVar7 <= y2) {
		iVar4 = (x2 + 1) - x1;
		iVar2 = x1 * 0x70;
		iVar3 = x1 * 0xe0;
		if (x1 <= x2) {
			do {
				*(undefined *)(iVar7 + _DAT_1012f1a0 + iVar2) = 0;
				if (*(short *)(iVar5 + _DAT_1012f1d4 + iVar3) == 0x21d) {
					*(undefined *)(iVar7 + _DAT_1012f1a0 + iVar2) = 5;
				}
				if (*(short *)(iVar5 + _DAT_1012f1d4 + iVar3) == 0xb2) {
					*(undefined *)(iVar7 + _DAT_1012f1a0 + iVar2) = 5;
				}
				if (*(short *)(iVar5 + _DAT_1012f1d4 + iVar3) == 0x227) {
					*(undefined *)(iVar7 + _DAT_1012f1a0 + iVar2) = 5;
				}
				if (*(short *)(iVar5 + _DAT_1012f1d4 + iVar3) == 0x21e) {
					*(undefined *)(iVar7 + _DAT_1012f1a0 + iVar2) = 6;
				}
				if (*(short *)(iVar5 + _DAT_1012f1d4 + iVar3) == 0x229) {
					*(undefined *)(iVar7 + _DAT_1012f1a0 + iVar2) = 6;
				}
				if (*(short *)(iVar5 + _DAT_1012f1d4 + iVar3) == 0xd) {
					*(undefined *)(iVar7 + _DAT_1012f1a0 + iVar2) = 5;
				}
				if (*(short *)(iVar5 + _DAT_1012f1d4 + iVar3) == 0x11) {
					*(undefined *)(iVar7 + _DAT_1012f1a0 + iVar2) = 6;
				}
				iVar2 = iVar2 + 0x70;
				iVar3 = iVar3 + 0xe0;
				iVar4 = iVar4 + -1;
			} while (iVar4 != 0);
		}
		iVar5 = iVar5 + 2;
		iVar7 = iVar7 + 1;
	}
	while (y1 <= y2) {
		iVar7 = (x2 + 1) - x1;
		iVar5 = x1 * 0xe0;
		iVar4 = x1 * 0x70;
		if (x1 <= x2) {
			do {
				if (*(short *)(iVar6 + _DAT_1012f1d4 + iVar5) == 0x84) {
					*(undefined *)(y1 + _DAT_1012f1a0 + iVar4 + 1) = 2;
					*(undefined *)(y1 + _DAT_1012f1a0 + iVar4 + 2) = 1;
				}
				sVar1 = *(short *)(iVar6 + _DAT_1012f1d4 + iVar5);
				if ((sVar1 == 0x87) || (sVar1 == 0x8b)) {
					*(undefined *)(y1 + _DAT_1012f1a0 + iVar4 + 0x70) = 3;
					*(undefined *)(y1 + _DAT_1012f1a0 + iVar4 + 0xe0) = 4;
				}
				iVar5 = iVar5 + 0xe0;
				iVar4 = iVar4 + 0x70;
				iVar7 = iVar7 + -1;
			} while (iVar7 != 0);
		}
		iVar6 = iVar6 + 2;
		y1 = y1 + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DoorSet(int oi, int dx, int dy)

{
	short sVar1;

	sVar1 = *(short *)(_DAT_1012f1d4 + dx * 0xe0 + dy * 2);
	if (sVar1 == 0x2b) {
		ObjSetMicro(dx, dy, 0x188);
	}
	if (sVar1 == 0x2d) {
		ObjSetMicro(dx, dy, 0x18a);
	}
	if ((sVar1 == 0x32) && (*(int *)(&DAT_1017e3d4 + oi * 0x78) == 1)) {
		ObjSetMicro(dx, dy, 0x19b);
	}
	if ((sVar1 == 0x32) && (*(int *)(&DAT_1017e3d4 + oi * 0x78) == 2)) {
		ObjSetMicro(dx, dy, 0x19c);
	}
	if (sVar1 == 0x36) {
		ObjSetMicro(dx, dy, 0x18d);
	}
	if (sVar1 == 0x37) {
		ObjSetMicro(dx, dy, 0x18e);
	}
	if (sVar1 == 0x3d) {
		ObjSetMicro(dx, dy, 399);
	}
	if (sVar1 == 0x43) {
		ObjSetMicro(dx, dy, 400);
	}
	if (sVar1 == 0x44) {
		ObjSetMicro(dx, dy, 0x191);
	}
	if (sVar1 == 0x45) {
		ObjSetMicro(dx, dy, 0x193);
	}
	if (sVar1 == 0x46) {
		ObjSetMicro(dx, dy, 0x194);
	}
	if (sVar1 == 0x48) {
		ObjSetMicro(dx, dy, 0x196);
	}
	if (sVar1 == 0xd4) {
		ObjSetMicro(dx, dy, 0x197);
	}
	if (sVar1 == 0x162) {
		ObjSetMicro(dx, dy, 0x199);
	}
	if (sVar1 == 0x163) {
		ObjSetMicro(dx, dy, 0x19a);
	}
	if (sVar1 == 0x19b) {
		ObjSetMicro(dx, dy, 0x18c);
	}
	if (sVar1 == 0x19c) {
		ObjSetMicro(dx, dy, 0x18c);
	}
	return;
}

void RedoPlayerVision(void)

{
	int iVar1;
	PlayerStruct *pPVar2;

	pPVar2 = plr;
	iVar1 = 0;
	do {
		if ((pPVar2->plractive != false) && ((uint)currlevel == pPVar2->plrlevel)) {
			ChangeVisionXY(pPVar2->_pvid, pPVar2->WorldX, pPVar2->WorldY);
		}
		iVar1 = iVar1 + 1;
		pPVar2 = (PlayerStruct *)&pPVar2[1]._pSpellFlags;
	} while (iVar1 < 4);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void OperateL1RDoor(int pnum, int oi, BOOL sendflag)

{
	int *piVar1;
	int y;
	int x;
	int iVar3;
	undefined8 uVar2;
	int iVar4;
	undefined8 uVar5;
	undefined8 uVar6;
	int iVar7;

	iVar4 = 0x100f8fd0;
	iVar7 = oi * 0x78;
	piVar1 = (int *)(iVar7 + 0x1017e438);
	if (*piVar1 == 2) {
		if (_DAT_101795d0 == 0) {
			PlaySfxLoc(0x13, *(int *)(iVar7 + 0x1017e3d8), *(int *)(iVar7 + 0x1017e3dc));
		}
	} else {
		y = *(int *)(iVar7 + 0x1017e3dc);
		x = *(int *)(iVar7 + 0x1017e3d8);
		if (*piVar1 == 0) {
			if ((pnum == myplr) && (sendflag != 0)) {
				iVar4 = 0x100f8fd0;
				NetSendCmdParam1(1, '+', (WORD)oi);
			}
			if (_DAT_101795d0 == 0) {
				PlaySfxLoc(0x14, *(int *)(iVar7 + 0x1017e3d8), *(int *)(iVar7 + 0x1017e3dc));
			}
			ObjSetMicro(x, y, 0x18b);
			*(undefined *)(**(int **)(iVar4 + -0x7598) + x * 0x70 + y) = 8;
			objects_set_door_piece(x, y + -1);
			*(int *)(iVar7 + 0x1017e3f8) = *(int *)(iVar7 + 0x1017e3f8) + 2;
			*(undefined4 *)(iVar7 + 0x1017e418) = 1;
			DoorSet(oi, x + -1, y);
			*piVar1 = 1;
			*(undefined *)(iVar7 + 0x1017e414) = 2;
			RedoPlayerVision();
		} else {
			if (_DAT_101795d0 == 0) {
				iVar4 = 0x100f8fd0;
				PlaySfxLoc(0x13, x, y);
			}
			iVar3 = x * 0x70 + y;
			uVar5 = countLeadingZeros(-(int)*(char *)(**(int **)(iVar4 + -0x768c) + iVar3));
			uVar6 = countLeadingZeros(-(int)*(short *)(**(int **)(iVar4 + -0x767c) + x * 0xe0 + y * 2));
			uVar2 = countLeadingZeros(-(int)*(char *)(**(int **)(iVar4 + -0x7630) + iVar3));
			if (((uint)uVar5 >> 5 & 0xff & (uint)uVar6 >> 5 & 0xff & (uint)uVar2 >> 5 & 0xff) == 0) {
				*piVar1 = 2;
			} else {
				if ((pnum == myplr) && (sendflag != 0)) {
					NetSendCmdParam1(1, ',', (WORD)oi);
				}
				*piVar1 = 0;
				*(undefined *)(iVar7 + 0x1017e414) = 3;
				ObjSetMicro(x, y, *(int *)(iVar7 + 0x1017e42c));
				if (*(int *)(iVar7 + 0x1017e430) == 0x32) {
					if (*(short *)(**(int **)(iVar4 + -0x757c) + x * 0xe0 + y * 2 + -0xe0) == 0x18c) {
						ObjSetMicro(x + -1, y, 0x19b);
					} else {
						ObjSetMicro(x + -1, y, 0x32);
					}
				} else {
					ObjSetMicro(x + -1, y, *(int *)(iVar7 + 0x1017e430));
				}
				*(int *)(iVar7 + 0x1017e3f8) = *(int *)(iVar7 + 0x1017e3f8) + -2;
				*(undefined4 *)(iVar7 + 0x1017e418) = 0;
				RedoPlayerVision();
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void OperateL1LDoor(int pnum, int oi, BOOL sendflag)

{
	int *piVar1;
	int y;
	int x;
	undefined8 uVar2;
	int iVar3;
	int iVar4;
	undefined8 uVar5;
	undefined8 uVar6;
	int iVar7;

	iVar3 = 0x100f8fd0;
	iVar4 = 0x100f8fd0;
	iVar7 = oi * 0x78;
	piVar1 = (int *)(iVar7 + 0x1017e438);
	if (*piVar1 == 2) {
		if (_DAT_101795d0 == 0) {
			PlaySfxLoc(0x13, *(int *)(iVar7 + 0x1017e3d8), *(int *)(iVar7 + 0x1017e3dc));
		}
	} else {
		y = *(int *)(iVar7 + 0x1017e3dc);
		x = *(int *)(iVar7 + 0x1017e3d8);
		if (*piVar1 == 0) {
			if ((pnum == myplr) && (sendflag != 0)) {
				iVar3 = 0x100f8fd0;
				NetSendCmdParam1(1, '+', (WORD)oi);
			}
			if (_DAT_101795d0 == 0) {
				PlaySfxLoc(0x14, *(int *)(iVar7 + 0x1017e3d8), *(int *)(iVar7 + 0x1017e3dc));
			}
			if (*(int *)(iVar7 + 0x1017e42c) == 0xd6) {
				ObjSetMicro(x, y, 0x198);
			} else {
				ObjSetMicro(x, y, 0x189);
			}
			*(undefined *)(**(int **)(iVar3 + -0x7598) + x * 0x70 + y) = 7;
			objects_set_door_piece(x + -1, y);
			*(int *)(iVar7 + 0x1017e3f8) = *(int *)(iVar7 + 0x1017e3f8) + 2;
			*(undefined4 *)(iVar7 + 0x1017e418) = 1;
			DoorSet(oi, x, y + -1);
			*piVar1 = 1;
			*(undefined *)(iVar7 + 0x1017e414) = 2;
			RedoPlayerVision();
		} else {
			if (_DAT_101795d0 == 0) {
				iVar4 = iVar3;
				PlaySfxLoc(0x13, x, y);
			}
			iVar3 = x * 0x70 + y;
			uVar5 = countLeadingZeros(-(int)*(char *)(**(int **)(iVar4 + -0x768c) + iVar3));
			uVar6 = countLeadingZeros(-(int)*(short *)(**(int **)(iVar4 + -0x767c) + x * 0xe0 + y * 2));
			uVar2 = countLeadingZeros(-(int)*(char *)(**(int **)(iVar4 + -0x7630) + iVar3));
			if (((uint)uVar5 >> 5 & 0xff & (uint)uVar6 >> 5 & 0xff & (uint)uVar2 >> 5 & 0xff) == 0) {
				*piVar1 = 2;
			} else {
				if ((pnum == myplr) && (sendflag != 0)) {
					NetSendCmdParam1(1, ',', (WORD)oi);
				}
				*piVar1 = 0;
				*(undefined *)(iVar7 + 0x1017e414) = 3;
				ObjSetMicro(x, y, *(int *)(iVar7 + 0x1017e42c));
				if (*(int *)(iVar7 + 0x1017e430) == 0x32) {
					if (*(short *)(**(int **)(iVar4 + -0x757c) + x * 0xe0 + y * 2 + -2) == 0x18c) {
						ObjSetMicro(x, y + -1, 0x19c);
					} else {
						ObjSetMicro(x, y + -1, 0x32);
					}
				} else {
					ObjSetMicro(x, y + -1, *(int *)(iVar7 + 0x1017e430));
				}
				*(int *)(iVar7 + 0x1017e3f8) = *(int *)(iVar7 + 0x1017e3f8) + -2;
				*(undefined4 *)(iVar7 + 0x1017e418) = 0;
				RedoPlayerVision();
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void OperateL2RDoor(int pnum, int oi, BOOL sendflag)

{
	int *piVar1;
	int y;
	int x;
	int iVar3;
	undefined8 uVar2;
	int iVar4;
	undefined8 uVar5;
	undefined8 uVar6;
	int iVar7;

	iVar4 = 0x100f8fd0;
	iVar7 = oi * 0x78;
	piVar1 = (int *)(iVar7 + 0x1017e438);
	if (*piVar1 == 2) {
		if (_DAT_101795d0 == 0) {
			PlaySfxLoc(0x13, *(int *)(iVar7 + 0x1017e3d8), *(int *)(iVar7 + 0x1017e3dc));
		}
	} else {
		y = *(int *)(iVar7 + 0x1017e3dc);
		x = *(int *)(iVar7 + 0x1017e3d8);
		if (*piVar1 == 0) {
			if ((pnum == myplr) && (sendflag != 0)) {
				NetSendCmdParam1(1, '+', (WORD)oi);
			}
			if (_DAT_101795d0 == 0) {
				PlaySfxLoc(0x14, *(int *)(iVar7 + 0x1017e3d8), *(int *)(iVar7 + 0x1017e3dc));
			}
			ObjSetMicro(x, y, 0x11);
			*(int *)(iVar7 + 0x1017e3f8) = *(int *)(iVar7 + 0x1017e3f8) + 2;
			*(undefined4 *)(iVar7 + 0x1017e418) = 1;
			*piVar1 = 1;
			*(undefined *)(iVar7 + 0x1017e414) = 2;
			RedoPlayerVision();
		} else {
			if (_DAT_101795d0 == 0) {
				iVar4 = 0x100f8fd0;
				PlaySfxLoc(0x13, x, y);
			}
			iVar3 = x * 0x70 + y;
			uVar5 = countLeadingZeros(-(int)*(char *)(**(int **)(iVar4 + -0x768c) + iVar3));
			uVar6 = countLeadingZeros(-(int)*(short *)(**(int **)(iVar4 + -0x767c) + x * 0xe0 + y * 2));
			uVar2 = countLeadingZeros(-(int)*(char *)(**(int **)(iVar4 + -0x7630) + iVar3));
			if (((uint)uVar5 >> 5 & 0xff & (uint)uVar6 >> 5 & 0xff & (uint)uVar2 >> 5 & 0xff) == 0) {
				*piVar1 = 2;
			} else {
				if ((pnum == myplr) && (sendflag != 0)) {
					NetSendCmdParam1(1, ',', (WORD)oi);
				}
				*piVar1 = 0;
				*(undefined *)(iVar7 + 0x1017e414) = 3;
				ObjSetMicro(x, y, 0x21c);
				*(int *)(iVar7 + 0x1017e3f8) = *(int *)(iVar7 + 0x1017e3f8) + -2;
				*(undefined4 *)(iVar7 + 0x1017e418) = 0;
				RedoPlayerVision();
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void OperateL2LDoor(int pnum, int oi, BOOL sendflag)

{
	int *piVar1;
	int y;
	int x;
	int iVar3;
	undefined8 uVar2;
	int iVar4;
	undefined8 uVar5;
	undefined8 uVar6;
	int iVar7;

	iVar4 = 0x100f8fd0;
	iVar7 = oi * 0x78;
	piVar1 = (int *)(iVar7 + 0x1017e438);
	if (*piVar1 == 2) {
		if (_DAT_101795d0 == 0) {
			PlaySfxLoc(0x13, *(int *)(iVar7 + 0x1017e3d8), *(int *)(iVar7 + 0x1017e3dc));
		}
	} else {
		y = *(int *)(iVar7 + 0x1017e3dc);
		x = *(int *)(iVar7 + 0x1017e3d8);
		if (*piVar1 == 0) {
			if ((pnum == myplr) && (sendflag != 0)) {
				NetSendCmdParam1(1, '+', (WORD)oi);
			}
			if (_DAT_101795d0 == 0) {
				PlaySfxLoc(0x14, *(int *)(iVar7 + 0x1017e3d8), *(int *)(iVar7 + 0x1017e3dc));
			}
			ObjSetMicro(x, y, 0xd);
			*(int *)(iVar7 + 0x1017e3f8) = *(int *)(iVar7 + 0x1017e3f8) + 2;
			*(undefined4 *)(iVar7 + 0x1017e418) = 1;
			*piVar1 = 1;
			*(undefined *)(iVar7 + 0x1017e414) = 2;
			RedoPlayerVision();
		} else {
			if (_DAT_101795d0 == 0) {
				iVar4 = 0x100f8fd0;
				PlaySfxLoc(0x13, x, y);
			}
			iVar3 = x * 0x70 + y;
			uVar5 = countLeadingZeros(-(int)*(char *)(**(int **)(iVar4 + -0x768c) + iVar3));
			uVar6 = countLeadingZeros(-(int)*(short *)(**(int **)(iVar4 + -0x767c) + x * 0xe0 + y * 2));
			uVar2 = countLeadingZeros(-(int)*(char *)(**(int **)(iVar4 + -0x7630) + iVar3));
			if (((uint)uVar5 >> 5 & 0xff & (uint)uVar6 >> 5 & 0xff & (uint)uVar2 >> 5 & 0xff) == 0) {
				*piVar1 = 2;
			} else {
				if ((pnum == myplr) && (sendflag != 0)) {
					NetSendCmdParam1(1, ',', (WORD)oi);
				}
				*piVar1 = 0;
				*(undefined *)(iVar7 + 0x1017e414) = 3;
				ObjSetMicro(x, y, 0x21a);
				*(int *)(iVar7 + 0x1017e3f8) = *(int *)(iVar7 + 0x1017e3f8) + -2;
				*(undefined4 *)(iVar7 + 0x1017e418) = 0;
				RedoPlayerVision();
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void OperateL3RDoor(int pnum, int oi, BOOL sendflag)

{
	int *piVar1;
	int y;
	int x;
	int iVar3;
	undefined8 uVar2;
	int iVar4;
	undefined8 uVar5;
	undefined8 uVar6;
	int iVar7;

	iVar4 = 0x100f8fd0;
	iVar7 = oi * 0x78;
	piVar1 = (int *)(iVar7 + 0x1017e438);
	if (*piVar1 == 2) {
		if (_DAT_101795d0 == 0) {
			PlaySfxLoc(0x13, *(int *)(iVar7 + 0x1017e3d8), *(int *)(iVar7 + 0x1017e3dc));
		}
	} else {
		y = *(int *)(iVar7 + 0x1017e3dc);
		x = *(int *)(iVar7 + 0x1017e3d8);
		if (*piVar1 == 0) {
			if ((pnum == myplr) && (sendflag != 0)) {
				NetSendCmdParam1(1, '+', (WORD)oi);
			}
			if (_DAT_101795d0 == 0) {
				PlaySfxLoc(0x14, *(int *)(iVar7 + 0x1017e3d8), *(int *)(iVar7 + 0x1017e3dc));
			}
			ObjSetMicro(x, y, 0x21d);
			*(int *)(iVar7 + 0x1017e3f8) = *(int *)(iVar7 + 0x1017e3f8) + 2;
			*(undefined4 *)(iVar7 + 0x1017e418) = 1;
			*piVar1 = 1;
			*(undefined *)(iVar7 + 0x1017e414) = 2;
			RedoPlayerVision();
		} else {
			if (_DAT_101795d0 == 0) {
				iVar4 = 0x100f8fd0;
				PlaySfxLoc(0x13, x, y);
			}
			iVar3 = x * 0x70 + y;
			uVar5 = countLeadingZeros(-(int)*(char *)(**(int **)(iVar4 + -0x768c) + iVar3));
			uVar6 = countLeadingZeros(-(int)*(short *)(**(int **)(iVar4 + -0x767c) + x * 0xe0 + y * 2));
			uVar2 = countLeadingZeros(-(int)*(char *)(**(int **)(iVar4 + -0x7630) + iVar3));
			if (((uint)uVar5 >> 5 & 0xff & (uint)uVar6 >> 5 & 0xff & (uint)uVar2 >> 5 & 0xff) == 0) {
				*piVar1 = 2;
			} else {
				if ((pnum == myplr) && (sendflag != 0)) {
					NetSendCmdParam1(1, ',', (WORD)oi);
				}
				*piVar1 = 0;
				*(undefined *)(iVar7 + 0x1017e414) = 3;
				ObjSetMicro(x, y, 0x216);
				*(int *)(iVar7 + 0x1017e3f8) = *(int *)(iVar7 + 0x1017e3f8) + -2;
				*(undefined4 *)(iVar7 + 0x1017e418) = 0;
				RedoPlayerVision();
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void OperateL3LDoor(int pnum, int oi, BOOL sendflag)

{
	int *piVar1;
	int y;
	int x;
	int iVar3;
	undefined8 uVar2;
	int iVar4;
	undefined8 uVar5;
	undefined8 uVar6;
	int iVar7;

	iVar4 = 0x100f8fd0;
	iVar7 = oi * 0x78;
	piVar1 = (int *)(iVar7 + 0x1017e438);
	if (*piVar1 == 2) {
		if (_DAT_101795d0 == 0) {
			PlaySfxLoc(0x13, *(int *)(iVar7 + 0x1017e3d8), *(int *)(iVar7 + 0x1017e3dc));
		}
	} else {
		y = *(int *)(iVar7 + 0x1017e3dc);
		x = *(int *)(iVar7 + 0x1017e3d8);
		if (*piVar1 == 0) {
			if ((pnum == myplr) && (sendflag != 0)) {
				NetSendCmdParam1(1, '+', (WORD)oi);
			}
			if (_DAT_101795d0 == 0) {
				PlaySfxLoc(0x14, *(int *)(iVar7 + 0x1017e3d8), *(int *)(iVar7 + 0x1017e3dc));
			}
			ObjSetMicro(x, y, 0x21a);
			*(int *)(iVar7 + 0x1017e3f8) = *(int *)(iVar7 + 0x1017e3f8) + 2;
			*(undefined4 *)(iVar7 + 0x1017e418) = 1;
			*piVar1 = 1;
			*(undefined *)(iVar7 + 0x1017e414) = 2;
			RedoPlayerVision();
		} else {
			if (_DAT_101795d0 == 0) {
				iVar4 = 0x100f8fd0;
				PlaySfxLoc(0x13, x, y);
			}
			iVar3 = x * 0x70 + y;
			uVar5 = countLeadingZeros(-(int)*(char *)(**(int **)(iVar4 + -0x768c) + iVar3));
			uVar6 = countLeadingZeros(-(int)*(short *)(**(int **)(iVar4 + -0x767c) + x * 0xe0 + y * 2));
			uVar2 = countLeadingZeros(-(int)*(char *)(**(int **)(iVar4 + -0x7630) + iVar3));
			if (((uint)uVar5 >> 5 & 0xff & (uint)uVar6 >> 5 & 0xff & (uint)uVar2 >> 5 & 0xff) == 0) {
				*piVar1 = 2;
			} else {
				if ((pnum == myplr) && (sendflag != 0)) {
					NetSendCmdParam1(1, ',', (WORD)oi);
				}
				*piVar1 = 0;
				*(undefined *)(iVar7 + 0x1017e414) = 3;
				ObjSetMicro(x, y, 0x213);
				*(int *)(iVar7 + 0x1017e3f8) = *(int *)(iVar7 + 0x1017e3f8) + -2;
				*(undefined4 *)(iVar7 + 0x1017e418) = 0;
				RedoPlayerVision();
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void MonstCheckDoors(int m)

{
	int iVar1;
	int iVar2;
	int oi;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int *piVar7;
	int *piVar8;

	iVar1 = *(int *)(m * 0xe8 + 0x10151a50);
	iVar2 = *(int *)(m * 0xe8 + 0x10151a54);
	iVar6 = _DAT_1012f1ac + iVar1 * 0x70 + iVar2;
	if ((((*(char *)(iVar6 + -0x71) == '\0') && (*(char *)(iVar6 + -1) == '\0')) && (*(char *)(iVar6 + 0x6f) == '\0')) && (((*(char *)(iVar6 + -0x70) == '\0' && (*(char *)(iVar6 + 0x70) == '\0')) && ((*(char *)(iVar6 + -0x6f) == '\0' && ((*(char *)(iVar6 + 1) == '\0' && (*(char *)(iVar6 + 0x71) == '\0')))))))) {
		return;
	}
	piVar8 = (int *)&DAT_1017e10c;
	iVar6 = 0;
	while (iVar6 < _DAT_1017e3d0) {
		oi = *piVar8;
		if ((*(int *)(&DAT_1017e3d4 + oi * 0x78) == 1) || (*(int *)(&DAT_1017e3d4 + oi * 0x78) == 2)) {
			iVar5 = oi * 0x78;
			if (*(int *)(iVar5 + 0x1017e438) == 0) {
				iVar3 = abs(*(int *)(iVar5 + 0x1017e3d8) - iVar1);
				iVar4 = abs(*(int *)(iVar5 + 0x1017e3dc) - iVar2);
				if (((iVar3 == 1) && (iVar4 < 2)) && (*(int *)(&DAT_1017e3d4 + iVar5) == 1)) {
					OperateL1LDoor(myplr, oi, 1);
				}
				if (((iVar3 < 2) && (iVar4 == 1)) && (*(int *)(&DAT_1017e3d4 + iVar5) == 2)) {
					OperateL1RDoor(myplr, oi, 1);
				}
			}
		}
		iVar5 = oi * 0x78;
		piVar7 = (int *)(&DAT_1017e3d4 + iVar5);
		if (((*piVar7 == 0x2a) || (*piVar7 == 0x2b)) && (*(int *)(iVar5 + 0x1017e438) == 0)) {
			iVar3 = abs(*(int *)(iVar5 + 0x1017e3d8) - iVar1);
			iVar4 = abs(*(int *)(iVar5 + 0x1017e3dc) - iVar2);
			if (((iVar3 == 1) && (iVar4 < 2)) && (*piVar7 == 0x2a)) {
				OperateL2LDoor(myplr, oi, 1);
			}
			if (((iVar3 < 2) && (iVar4 == 1)) && (*piVar7 == 0x2b)) {
				OperateL2RDoor(myplr, oi, 1);
			}
		}
		if (((*piVar7 == 0x4a) || (*piVar7 == 0x4b)) && (*(int *)(iVar5 + 0x1017e438) == 0)) {
			iVar3 = abs(*(int *)(iVar5 + 0x1017e3d8) - iVar1);
			iVar5 = abs(*(int *)(iVar5 + 0x1017e3dc) - iVar2);
			if (((iVar3 == 1) && (iVar5 < 2)) && (*piVar7 == 0x4b)) {
				OperateL3RDoor(myplr, oi, 1);
			}
			if (((iVar3 < 2) && (iVar5 == 1)) && (*piVar7 == 0x4a)) {
				OperateL3LDoor(myplr, oi, 1);
			}
		}
		piVar8 = piVar8 + 1;
		iVar6 = iVar6 + 1;
	}
	return;
}

void ObjChangeMap(int x1, int y1, int x2, int y2)

{
	byte bVar1;
	int y;
	int x;
	byte *pbVar2;
	undefined *puVar3;
	byte *pbVar4;
	int y1_00;
	byte *pbVar5;
	int x1_00;

	puVar3 = &DAT_1013b9b0 + y1;
	pbVar2 = dungeon + y1;
	y = y1;
	while (y <= y2) {
		pbVar5 = puVar3 + x1 * 0x28;
		pbVar4 = pbVar2 + x1 * 0x28;
		x = x1;
		while (x <= x2) {
			ObjSetMini(x, y, (uint)*pbVar5);
			bVar1 = *pbVar5;
			pbVar5 = pbVar5 + 0x28;
			x = x + 1;
			*pbVar4 = bVar1;
			pbVar4 = pbVar4 + 0x28;
		}
		puVar3 = puVar3 + 1;
		pbVar2 = pbVar2 + 1;
		y = y + 1;
	}
	if (leveltype == '\x01') {
		x1_00 = x1 * 2 + 0x10;
		y1_00 = y1 * 2 + 0x10;
		x = x2 * 2 + 0x11;
		y = y2 * 2 + 0x11;
		ObjL1Special(x1_00, y1_00, x, y);
		AddL1Objs(x1_00, y1_00, x, y);
	}
	if (leveltype == '\x02') {
		x1_00 = x1 * 2 + 0x10;
		y1_00 = y1 * 2 + 0x10;
		x = x2 * 2 + 0x11;
		y = y2 * 2 + 0x11;
		ObjL2Special(x1_00, y1_00, x, y);
		AddL2Objs(x1_00, y1_00, x, y);
	}
	return;
}

void ObjChangeMapResync(int x1, int y1, int x2, int y2)

{
	byte bVar1;
	int y;
	int x;
	byte *pbVar2;
	undefined *puVar3;
	byte *pbVar4;
	byte *pbVar5;

	puVar3 = &DAT_1013b9b0 + y1;
	pbVar2 = dungeon + y1;
	y = y1;
	while (y <= y2) {
		pbVar5 = puVar3 + x1 * 0x28;
		pbVar4 = pbVar2 + x1 * 0x28;
		x = x1;
		while (x <= x2) {
			ObjSetMini(x, y, (uint)*pbVar5);
			bVar1 = *pbVar5;
			pbVar5 = pbVar5 + 0x28;
			x = x + 1;
			*pbVar4 = bVar1;
			pbVar4 = pbVar4 + 0x28;
		}
		puVar3 = puVar3 + 1;
		pbVar2 = pbVar2 + 1;
		y = y + 1;
	}
	if (leveltype == '\x01') {
		ObjL1Special(x1 * 2 + 0x10, y1 * 2 + 0x10, x2 * 2 + 0x11, y2 * 2 + 0x11);
	}
	if (leveltype == '\x02') {
		ObjL2Special(x1 * 2 + 0x10, y1 * 2 + 0x10, x2 * 2 + 0x11, y2 * 2 + 0x11);
	}
	return;
}

void OperateL1Door(int pnum, int i, BOOL sendflag)

{
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = i * 0x78;
	iVar1 = abs(*(int *)(iVar3 + 0x1017e3d8) - *(int *)((int)plr + pnum * 0x55ec + 0x38));
	iVar2 = abs(*(int *)(iVar3 + 0x1017e3dc) - *(int *)((int)plr + pnum * 0x55ec + 0x3c));
	if (((iVar1 == 1) && (iVar2 < 2)) && (*(int *)(&DAT_1017e3d4 + iVar3) == 1)) {
		OperateL1LDoor(pnum, i, sendflag);
	}
	if (((iVar1 < 2) && (iVar2 == 1)) && (*(int *)(&DAT_1017e3d4 + iVar3) == 2)) {
		OperateL1RDoor(pnum, i, sendflag);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void OperateLever(int pnum, int i)

{
	char *pcVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	ulonglong uVar5;
	int iVar6;
	int *piVar7;
	int iVar8;

	iVar4 = 0x100f8fd0;
	iVar8 = i * 0x78;
	if (*(char *)(iVar8 + 0x1017e414) != '\0') {
		if (_DAT_101795d0 == 0) {
			iVar4 = 0x100f8fd0;
			PlaySfxLoc(0x3e, *(int *)(iVar8 + 0x1017e3d8), *(int *)(iVar8 + 0x1017e3dc));
		}
		*(char *)(iVar8 + 0x1017e414) = '\0';
		bVar2 = true;
		pcVar1 = *(char **)(iVar4 + -0x77e4);
		*(int *)(iVar8 + 0x1017e3f8) = *(int *)(iVar8 + 0x1017e3f8) + 1;
		if (*pcVar1 == '\x10') {
			piVar7 = *(int **)(iVar4 + -0x7190);
			uVar5 = (ulonglong) * *(uint **)(iVar4 + -0x7194);
			bVar3 = true;
			if (0 < (int)**(uint **)(iVar4 + -0x7194)) {
				do {
					bVar2 = bVar3;
					iVar6 = *piVar7 * 0x78;
					if (*(int *)(&DAT_1017e3d4 + iVar6) == 0x1c) {
						if ((*(int *)(iVar8 + 0x1017e448) == *(int *)(iVar6 + 0x1017e448)) && (*(char *)(iVar6 + 0x1017e414) != '\0')) {
							bVar2 = false;
						}
					}
					piVar7 = piVar7 + 1;
					uVar5 = uVar5 - 1;
					bVar3 = bVar2;
				} while (uVar5 != 0);
			}
		}
		if (bVar2) {
			ObjChangeMap(*(int *)(iVar8 + 0x1017e42c), *(int *)(iVar8 + 0x1017e430), *(int *)(iVar8 + 0x1017e434),
			    *(int *)(iVar8 + 0x1017e438));
		}
		if (pnum == **(int **)(iVar4 + -0x77ac)) {
			NetSendCmdParam1(0, '-', (WORD)i);
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void OperateBook(int pnum, int i)

{
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	undefined8 uVar5;
	int iVar6;
	int *piVar7;
	int *piVar8;
	int iVar9;
	int dy;
	int dx;
	int *piVar10;
	int midam;
	int spllvl;

	uVar5 = 0x100f8fd0;
	uVar5._4_4_ = 0x100f8fd0;
	i = i * 0x78;
	piVar8 = (int *)&DAT_1017e10c;
	if (*(char *)(i + 0x1017e414) != '\0') {
		if ((DAT_1012f316 != '\0') && (DAT_1012f315 == '\x05')) {
			iVar4 = pnum * 0x55ec;
			bVar3 = false;
			bVar2 = false;
			iVar9 = 0;
			piVar10 = piVar8;
			while (uVar5._4_4_ = (int)uVar5, iVar9 < _DAT_1017e3d0) {
				uVar5._4_4_ = *piVar10;
				iVar6 = uVar5._4_4_ * 0x78;
				iVar1 = *(int *)(&DAT_1017e3d4 + iVar6);
				if ((iVar1 == 0x55) && (piVar7 = (int *)(iVar6 + 0x1017e440), *piVar7 == 1)) {
					*piVar7 = 4;
					dx = 0x1b;
					dy = 0x1d;
					bVar2 = true;
				}
				if ((iVar1 == 0x55) && (piVar7 = (int *)(uVar5._4_4_ * 0x78 + 0x1017e440), *piVar7 == 2)) {
					*piVar7 = 4;
					dx = 0x2b;
					dy = 0x1d;
					bVar2 = true;
				}
				if (bVar2) {
					uVar5._4_4_ = (int)*(char *)(_DAT_1012f1ac + 0xf74) * 0x78;
					*(int *)(uVar5._4_4_ + 0x1017e3c4) = *(int *)(uVar5._4_4_ + 0x1017e3c4) + 1;
					AddMissile(*(int *)((int)plr + iVar4 + 0x38), *(int *)((int)plr + iVar4 + 0x3c), dx, dy,
					    *(int *)((int)plr + iVar4 + 0x70), 3, '\0', pnum, midam, spllvl);
					bVar3 = true;
					bVar2 = false;
				}
				piVar10 = piVar10 + 1;
				iVar9 = iVar9 + 1;
			}
			if (!bVar3) {
				return;
			}
		}
		*(char *)(i + 0x1017e414) = '\0';
		*(int *)(i + 0x1017e3f8) = *(int *)(i + 0x1017e3f8) + 1;
		if ((DAT_1012f316 != '\0') && (DAT_1012f315 == '\x02')) {
			iVar4 = myplr * 0x55ec;
			*(uint *)((int)plr + iVar4 + 0x108) = *(uint *)((int)plr + iVar4 + 0x108) | 0x1000;
			if (*(char *)((int)plr + pnum * 0x55ec + 0xce) < '\x0f') {
				*(char *)((int)plr + iVar4 + 0xce) = *(char *)((int)plr + iVar4 + 0xce) + '\x01';
			}
			piVar10 = *(int **)(uVar5._4_4_ + -0x7070);
			*(undefined *)(*(int *)(uVar5._4_4_ + -0x7604) + 0x152) = 3;
			if (*piVar10 == 0) {
				PlaySfxLoc(0xc, *(int *)(i + 0x1017e3d8), *(int *)(i + 0x1017e3dc));
			}
			InitDiabloMsg('+');
			uVar5._4_4_ = myplr * 0x55ec;
			AddMissile(*(int *)((int)plr + uVar5._4_4_ + 0x38), *(int *)((int)plr + uVar5._4_4_ + 0x3c),
			    *(int *)(i + 0x1017e3d8) + -2, *(int *)(i + 0x1017e3dc) + -4, *(int *)((int)plr + uVar5._4_4_ + 0x70), 2,
			    '\0', myplr, midam, spllvl);
		}
		if ((DAT_1012f316 != '\0') && (DAT_1012f315 == '\x05')) {
			ObjChangeMapResync(
			    *(int *)(i + 0x1017e42c), *(int *)(i + 0x1017e430), *(int *)(i + 0x1017e434), *(int *)(i + 0x1017e438));
			uVar5._4_4_ = 0;
			while (uVar5._4_4_ < _DAT_1017e3d0) {
				SyncObjectAnim(*piVar8);
				piVar8 = piVar8 + 1;
				uVar5._4_4_ = uVar5._4_4_ + 1;
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void OperateBookLever(int pnum, int i)

{
	int iVar1;
	int iVar2;
	undefined uVar3;
	int iVar4;
	int iVar5;
	int *piVar6;

	iVar4 = 0x100f8fd0;
	iVar5 = i * 0x78;
	piVar6 = (int *)(&DAT_1017e3d4 + iVar5);
	iVar1 = _DAT_1013b368 * 2;
	iVar2 = _DAT_1013b36c * 2;
	if ((*(char *)(iVar5 + 0x1017e414) != '\0') && (DAT_1014919d == '\0')) {
		if ((*piVar6 == 0x47) && (quests[8]._qvar1 == '\0')) {
			quests[8]._qactive = '\x02';
			quests[8]._qlog = 1;
			quests[8]._qvar1 = '\x01';
		}
		if ((*piVar6 == 0x48) && (quests[9]._qvar1 == '\0')) {
			quests[9]._qactive = '\x02';
			quests[9]._qlog = 1;
			quests[9]._qvar1 = '\x01';
			iVar4 = 0x100f8fd0;
			SpawnQuestItem(0x15, iVar2 + 0x13, iVar1 + 0x1a, 0, 1);
			SpawnQuestItem(0x15, _DAT_1013b36c * 2 + 0x1f, _DAT_1013b368 * 2 + 0x1a, 0, 1);
			SpawnQuestItem(0x15, _DAT_1013b36c * 2 + 0x19, _DAT_1013b368 * 2 + 0x21, 0, 1);
		}
		if ((*piVar6 == 0x58) && (quests[11]._qvar1 == '\0')) {
			quests[11]._qactive = '\x02';
			quests[11]._qlog = 1;
			quests[11]._qvar1 = '\x01';
		}
		if (*(int *)(iVar5 + 0x1017e3f8) != *(int *)(iVar5 + 0x1017e440)) {
			if (*piVar6 != 0x48) {
				ObjChangeMap(*(int *)(iVar5 + 0x1017e42c), *(int *)(iVar5 + 0x1017e430), *(int *)(iVar5 + 0x1017e434),
				    *(int *)(iVar5 + 0x1017e438));
			}
			if (*piVar6 == 0x47) {
				CreateItem(3, iVar2 + 0x15, iVar1 + 0x15);
				uVar3 = DAT_1012f2d8;
				DAT_1012f2d8 = 9;
				DRLG_MRectTrans(*(int *)(iVar5 + 0x1017e42c), *(int *)(iVar5 + 0x1017e430), *(int *)(iVar5 + 0x1017e434),
				    *(int *)(iVar5 + 0x1017e438));
				DAT_1012f2d8 = uVar3;
			}
		}
		*(int *)(iVar5 + 0x1017e3f8) = *(int *)(iVar5 + 0x1017e440);
		InitQTextMsg(*(int *)(iVar5 + 0x1017e444));
		if (pnum == **(int **)(iVar4 + -0x77ac)) {
			NetSendCmdParam1(0, '-', (WORD)i);
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void OperateSChambBk(int pnum, int i)

{
	char cVar1;
	undefined8 uVar2;
	int iVar3;
	int *piVar4;
	int m;
	int iStack00000018;

	uVar2 = 0x100f8fd0;
	uVar2._4_4_ = 0x100f8fd0;
	i = i * 0x78;
	if ((*(char *)(i + 0x1017e414) != '\0') && (DAT_1014919d == '\0')) {
		iStack00000018 = pnum;
		if (*(int *)(i + 0x1017e3f8) != *(int *)(i + 0x1017e440)) {
			iStack00000018 = pnum;
			ObjChangeMapResync(
			    *(int *)(i + 0x1017e42c), *(int *)(i + 0x1017e430), *(int *)(i + 0x1017e434), *(int *)(i + 0x1017e438));
			iVar3 = 0;
			piVar4 = *(int **)((int)uVar2 + -0x7190);
			while (uVar2._4_4_ = (int)uVar2, iVar3 < _DAT_1017e3d0) {
				SyncObjectAnim(*piVar4);
				piVar4 = piVar4 + 1;
				iVar3 = iVar3 + 1;
			}
		}
		*(undefined4 *)(i + 0x1017e3f8) = *(undefined4 *)(i + 0x1017e440);
		if (quests[14]._qactive == '\x01') {
			quests[14]._qactive = '\x02';
			quests[14]._qlog = 1;
		}
		cVar1 = *(char *)(*(int *)(uVar2._4_4_ + -0x77a8) + **(int **)(uVar2._4_4_ + -0x77ac) * 0x55ec + 0x15c);
		if (cVar1 == '\0') {
			m = 0xeb;
		} else {
			if (cVar1 == '\x01') {
				m = 0xf3;
			} else {
				if (cVar1 == '\x02') {
					m = 0xef;
				}
			}
		}
		quests[14]._qmsg = (uchar)m;
		InitQTextMsg(m);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void OperateChest(int pnum, int i, BOOL sendmsg)

{
	int *piVar1;
	int *piVar2;
	undefined8 uVar3;
	int iVar4;
	int midir;
	int iVar5;
	int mitype;
	int iVar6;
	int midam;
	int spllvl;

	uVar3 = 0x100f8fd0;
	iVar6 = i * 0x78;
	if (*(char *)(iVar6 + 0x1017e414) != '\0') {
		if (_DAT_101795d0 == 0) {
			PlaySfxLoc(0x12, *(int *)(iVar6 + 0x1017e3d8), *(int *)(iVar6 + 0x1017e3dc));
		}
		iVar5 = 0;
		*(char *)(iVar6 + 0x1017e414) = '\0';
		*(int *)(iVar6 + 0x1017e3f8) = *(int *)(iVar6 + 0x1017e3f8) + 2;
		if (_DAT_101795d0 == 0) {
			SetRndSeed(*(int *)(iVar6 + 0x1017e428));
			if (**(char **)((int)uVar3 + -0x77d8) == '\0') {
				while (iVar4 = (int)uVar3, iVar5 < *(int *)(iVar6 + 0x1017e42c)) {
					if (*(int *)(iVar6 + 0x1017e430) == 0) {
						CreateRndUseful(pnum, *(int *)(iVar6 + 0x1017e3d8), *(int *)(iVar6 + 0x1017e3dc), sendmsg);
					} else {
						CreateRndItem(*(int *)(iVar6 + 0x1017e3d8), *(int *)(iVar6 + 0x1017e3dc), 0, sendmsg, 0);
					}
					iVar5 = iVar5 + 1;
				}
			} else {
				iVar5 = 0;
				while (iVar4 = (int)uVar3, iVar5 < *(int *)(iVar6 + 0x1017e42c)) {
					CreateRndItem(*(int *)(iVar6 + 0x1017e3d8), *(int *)(iVar6 + 0x1017e3dc), 1, sendmsg, 0);
					iVar5 = iVar5 + 1;
				}
			}
			if (((*(int *)(iVar6 + 0x1017e41c) != 0) && (0x43 < *(int *)(&DAT_1017e3d4 + iVar6))) && (*(int *)(&DAT_1017e3d4 + iVar6) < 0x47)) {
				piVar1 = (int *)((int)plr + pnum * 0x55ec + 0x38);
				piVar2 = (int *)((int)plr + pnum * 0x55ec + 0x3c);
				midir = GetDirection(*(int *)(iVar6 + 0x1017e3d8), *(int *)(iVar6 + 0x1017e3dc), *piVar1, *piVar2);
				iVar5 = *(int *)(iVar6 + 0x1017e438);
				if (iVar5 == 1) {
					mitype = 0x1b;
				} else {
					if (iVar5 < 1) {
						if (-1 < iVar5) {
							mitype = 0;
						}
					} else {
						if (iVar5 < 3) {
							mitype = 0x2a;
						}
					}
				}
				AddMissile(*(int *)(iVar6 + 0x1017e3d8), *(int *)(iVar6 + 0x1017e3dc), *piVar1, *piVar2, midir, mitype,
				    '\x01', -1, midam, spllvl);
				*(int *)(iVar6 + 0x1017e41c) = 0;
			}
			if (pnum == **(int **)(iVar4 + -0x77ac)) {
				NetSendCmdParam2(0, '.', (WORD)pnum, (WORD)i);
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void OperateMushPatch(int pnum, int i)

{
	char cVar1;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int local_28;
	int local_24[4];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	if ((quests[1]._qactive != '\x02') || (quests[1]._qvar1 < 2)) {
		if ((_DAT_101795d0 == 0) && (pnum == myplr)) {
			cVar1 = *(char *)((int)plr + myplr * 0x55ec + 0x15c);
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
		}
		return;
	}
	i = i * 0x78;
	if (*(char *)(i + 0x1017e414) == '\0') {
		return;
	}
	if (_DAT_101795d0 == 0) {
		PlaySfxLoc(0x12, *(int *)(i + 0x1017e3d8), *(int *)(i + 0x1017e3dc));
	}
	*(char *)(i + 0x1017e414) = '\0';
	*(int *)(i + 0x1017e3f8) = *(int *)(i + 0x1017e3f8) + 1;
	if (_DAT_101795d0 != 0) {
		return;
	}
	GetSuperItemLoc(*(int *)(i + 0x1017e3d8), *(int *)(i + 0x1017e3dc), local_24, &local_28);
	SpawnQuestItem(0x11, local_24[0], local_28, 0, 0);
	quests[1]._qvar1 = '\x03';
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void OperateInnSignChest(int pnum, int i)

{
	char cVar1;
	int local_18;
	int local_14[5];

	if (quests[7]._qvar1 == '\x02') {
		i = i * 0x78;
		if (*(char *)(i + 0x1017e414) != '\0') {
			if (_DAT_101795d0 == 0) {
				PlaySfxLoc(0x12, *(int *)(i + 0x1017e3d8), *(int *)(i + 0x1017e3dc));
			}
			*(char *)(i + 0x1017e414) = '\0';
			*(int *)(i + 0x1017e3f8) = *(int *)(i + 0x1017e3f8) + 2;
			if (_DAT_101795d0 == 0) {
				GetSuperItemLoc(*(int *)(i + 0x1017e3d8), *(int *)(i + 0x1017e3dc), local_14, &local_18);
				SpawnQuestItem(0xc, local_14[0], local_18, 0, 0);
			}
		}
	} else {
		if (_DAT_101795d0 == 0) {
			if (pnum == myplr) {
				cVar1 = *(char *)((int)plr + myplr * 0x55ec + 0x15c);
				if (cVar1 == '\0') {
					PlaySFX(0x2e7);
				} else {
					if (cVar1 == '\x01') {
						PlaySFX(0x27a);
					} else {
						if (cVar1 == '\x02') {
							PlaySFX(0x213);
						}
					}
				}
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void OperateSlainHero(int pnum, int i, BOOL sendmsg)

{
	char cVar1;
	int iVar2;
	BOOL BStack00000020;

	iVar2 = i * 0x78;
	if (*(char *)(iVar2 + 0x1017e414) != '\0') {
		*(char *)(iVar2 + 0x1017e414) = '\0';
		if (_DAT_101795d0 == 0) {
			cVar1 = *(char *)((int)plr + pnum * 0x55ec + 0x15c);
			if (cVar1 == '\0') {
				BStack00000020 = sendmsg;
				CreateMagicArmor(*(int *)(iVar2 + 0x1017e3d8), *(int *)(iVar2 + 0x1017e3dc), 9, 0x99, 0, 1);
				PlaySfxLoc(0x2d2, *(int *)((int)plr + myplr * 0x55ec + 0x38), *(int *)((int)plr + myplr * 0x55ec + 0x3c));
			} else {
				if (cVar1 == '\x01') {
					BStack00000020 = sendmsg;
					CreateMagicWeapon(*(int *)(iVar2 + 0x1017e3d8), *(int *)(iVar2 + 0x1017e3dc), 3, 0x77, 0, 1);
					PlaySfxLoc(
					    0x26b, *(int *)((int)plr + myplr * 0x55ec + 0x38), *(int *)((int)plr + myplr * 0x55ec + 0x3c));
				} else {
					BStack00000020 = sendmsg;
					if (cVar1 == '\x02') {
						BStack00000020 = sendmsg;
						CreateSpellBook(*(int *)(iVar2 + 0x1017e3d8), *(int *)(iVar2 + 0x1017e3dc), 3, 0, 1);
						PlaySfxLoc(0x204, *(int *)((int)plr + myplr * 0x55ec + 0x38),
						    *(int *)((int)plr + myplr * 0x55ec + 0x3c));
					}
				}
			}
			if (pnum == myplr) {
				NetSendCmdParam1(0, '-', (WORD)i);
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void OperateTrapLvr(int i)

{
	int *piVar1;
	ulonglong uVar2;
	int iVar3;
	int *piVar4;

	i = i * 0x78;
	piVar4 = (int *)&DAT_1017e10c;
	piVar1 = (int *)(i + 0x1017e3f8);
	if (*piVar1 != 1) {
		*piVar1 = *piVar1 + -1;
		uVar2 = (ulonglong)_DAT_1017e3d0;
		if ((int)_DAT_1017e3d0 < 1) {
			return;
		}
		do {
			iVar3 = *piVar4 * 0x78;
			if (((*(int *)(&DAT_1017e3d4 + iVar3) == *(int *)(i + 0x1017e430)) && (*(int *)(iVar3 + 0x1017e42c) == *(int *)(i + 0x1017e42c))) && (*(undefined4 *)(iVar3 + 0x1017e430) = 0, *(int *)(iVar3 + 0x1017e438) != 0)) {
				*(undefined4 *)(iVar3 + 0x1017e3e4) = 1;
			}
			piVar4 = piVar4 + 1;
			uVar2 = uVar2 - 1;
		} while (uVar2 != 0);
		return;
	}
	*piVar1 = 2;
	uVar2 = (ulonglong)_DAT_1017e3d0;
	if ((int)_DAT_1017e3d0 < 1) {
		return;
	}
	do {
		iVar3 = *piVar4 * 0x78;
		if ((*(int *)(&DAT_1017e3d4 + iVar3) == *(int *)(i + 0x1017e430)) && (*(int *)(iVar3 + 0x1017e42c) == *(int *)(i + 0x1017e42c))) {
			*(undefined4 *)(iVar3 + 0x1017e430) = 1;
			*(undefined4 *)(iVar3 + 0x1017e3e4) = 0;
		}
		piVar4 = piVar4 + 1;
		uVar2 = uVar2 - 1;
	} while (uVar2 != 0);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void OperateSarc(int pnum, int i, BOOL sendmsg)

{
	int iVar1;
	int iVar2;

	iVar1 = 0x100f8fd0;
	iVar2 = i * 0x78;
	if (*(char *)(iVar2 + 0x1017e414) != '\0') {
		if (_DAT_101795d0 == 0) {
			iVar1 = 0x100f8fd0;
			PlaySfxLoc(0x42, *(int *)(iVar2 + 0x1017e3d8), *(int *)(iVar2 + 0x1017e3dc));
		}
		*(char *)(iVar2 + 0x1017e414) = '\0';
		if (_DAT_101795d0 == 0) {
			*(undefined4 *)(iVar2 + 0x1017e3e4) = 1;
			*(undefined4 *)(iVar2 + 0x1017e3ec) = 3;
			SetRndSeed(*(int *)(iVar2 + 0x1017e428));
			if (*(int *)(iVar2 + 0x1017e42c) < 3) {
				CreateRndItem(*(int *)(iVar2 + 0x1017e3d8), *(int *)(iVar2 + 0x1017e3dc), 0, sendmsg, 0);
			}
			if (7 < *(int *)(iVar2 + 0x1017e42c)) {
				SpawnSkeleton(*(int *)(iVar2 + 0x1017e430), *(int *)(iVar2 + 0x1017e3d8), *(int *)(iVar2 + 0x1017e3dc));
			}
			if (pnum == **(int **)(iVar1 + -0x77ac)) {
				NetSendCmdParam1(0, '-', (WORD)i);
			}
		} else {
			*(undefined4 *)(iVar2 + 0x1017e3f8) = *(undefined4 *)(iVar2 + 0x1017e3f4);
		}
	}
	return;
}

void OperateL2Door(int pnum, int i, BOOL sendflag)

{
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = i * 0x78;
	iVar1 = abs(*(int *)(iVar3 + 0x1017e3d8) - *(int *)((int)plr + pnum * 0x55ec + 0x38));
	iVar2 = abs(*(int *)(iVar3 + 0x1017e3dc) - *(int *)((int)plr + pnum * 0x55ec + 0x3c));
	if (((iVar1 == 1) && (iVar2 < 2)) && (*(int *)(&DAT_1017e3d4 + iVar3) == 0x2a)) {
		OperateL2LDoor(pnum, i, sendflag);
	}
	if (((iVar1 < 2) && (iVar2 == 1)) && (*(int *)(&DAT_1017e3d4 + iVar3) == 0x2b)) {
		OperateL2RDoor(pnum, i, sendflag);
	}
	return;
}

void OperateL3Door(int pnum, int i, BOOL sendflag)

{
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = i * 0x78;
	iVar1 = abs(*(int *)(iVar3 + 0x1017e3d8) - *(int *)((int)plr + pnum * 0x55ec + 0x38));
	iVar2 = abs(*(int *)(iVar3 + 0x1017e3dc) - *(int *)((int)plr + pnum * 0x55ec + 0x3c));
	if (((iVar1 == 1) && (iVar2 < 2)) && (*(int *)(&DAT_1017e3d4 + iVar3) == 0x4b)) {
		OperateL3RDoor(pnum, i, sendflag);
	}
	if (((iVar1 < 2) && (iVar2 == 1)) && (*(int *)(&DAT_1017e3d4 + iVar3) == 0x4a)) {
		OperateL3LDoor(pnum, i, sendflag);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void OperatePedistal(int pnum, int i)

{
	int *piVar1;
	int iVar2;
	ItemStruct *pIVar3;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int *local_28;
	int local_24[2];
	undefined4 local_1c;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar2 = 0x100f8fd0;
	local_1c = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	i = i * 0x78;
	piVar1 = (int *)(i + 0x1017e440);
	if (*piVar1 != 3) {
		pIVar3 = PlrHasItem(pnum, 0x15, local_24);
		if (pIVar3 != (ItemStruct *)0x0) {
			RemoveInvItem(pnum, local_24[0]);
			*(int *)(i + 0x1017e3f8) = *(int *)(i + 0x1017e3f8) + 1;
			*piVar1 = *piVar1 + 1;
		}
		if (*piVar1 == 1) {
			if (_DAT_101795d0 == 0) {
				PlaySfxLoc(0x7d, *(int *)(i + 0x1017e3d8), *(int *)(i + 0x1017e3dc));
			}
			ObjChangeMap(_DAT_1013b36c, _DAT_1013b368 + 3, _DAT_1013b36c + 2, _DAT_1013b368 + 7);
		}
		if (*piVar1 == 2) {
			if (_DAT_101795d0 == 0) {
				PlaySfxLoc(0x7d, *(int *)(i + 0x1017e3d8), *(int *)(i + 0x1017e3dc));
			}
			ObjChangeMap(
			    _DAT_1013b36c + 6, _DAT_1013b368 + 3, _DAT_1013b36c + **(int **)(iVar2 + -0x7554), _DAT_1013b368 + 7);
		}
		if (*piVar1 == 3) {
			if (_DAT_101795d0 == 0) {
				PlaySfxLoc(0x5b, *(int *)(i + 0x1017e3d8), *(int *)(i + 0x1017e3dc));
			}
			ObjChangeMap(
			    *(int *)(i + 0x1017e42c), *(int *)(i + 0x1017e430), *(int *)(i + 0x1017e434), *(int *)(i + 0x1017e438));
			local_28 = (int *)LoadFileInMem(*(char **)(iVar2 + -0x5b3c), (DWORD *)0x0);
			LoadMapObjs((BYTE *)local_28, _DAT_1013b36c << 1, _DAT_1013b368 << 1);
			MemFreeDbg(&local_28);
			CreateItem(7, _DAT_1013b36c * 2 + 0x19, _DAT_1013b368 * 2 + 0x13);
			*(undefined *)(i + 0x1017e414) = 0;
		}
	}
	return;
}

void TryDisarm(int pnum, int i)

{
	byte bVar1;
	int iVar2;
	ulonglong uVar3;
	int iVar4;
	int iVar5;
	int *piVar6;
	int iVar7;

	iVar4 = 0x100f8fd0;
	if (pnum == myplr) {
		iVar4 = 0x100f8fd0;
		NewCursor(1);
	}
	iVar7 = i * 0x78;
	if ((*(int *)(iVar7 + 0x1017e41c) != 0) && (bVar1 = **(byte **)(iVar4 + -0x77e4), iVar2 = *(int *)(*(int *)(iVar4 + -0x77a8) + pnum * 0x55ec + 0x170), iVar5 = random(-0x66, 100), iVar5 <= (int)(iVar2 * 2 + (uint)bVar1 * -5))) {
		uVar3 = (ulonglong) * *(uint **)(iVar4 + -0x7194);
		piVar6 = *(int **)(iVar4 + -0x7190);
		iVar2 = **(int **)(iVar4 + -0x7684);
		if (0 < (int)**(uint **)(iVar4 + -0x7194)) {
			do {
				iVar4 = *piVar6 * 0x78;
				if ((*(int *)(&DAT_1017e3d4 + iVar4) == 0x36 || *(int *)(&DAT_1017e3d4 + *piVar6 * 0x78) == 0x35) && ((int)*(char *)(iVar2 + *(int *)(iVar4 + 0x1017e42c) * 0x70 + *(int *)(iVar4 + 0x1017e430)) + -1 == i)) {
					*(undefined4 *)(iVar4 + 0x1017e438) = 1;
					*(undefined4 *)(iVar7 + 0x1017e41c) = 0;
				}
				piVar6 = piVar6 + 1;
				uVar3 = uVar3 - 1;
			} while (uVar3 != 0);
		}
		if ((0x43 < *(int *)(&DAT_1017e3d4 + iVar7)) && (*(int *)(&DAT_1017e3d4 + iVar7) < 0x47)) {
			*(undefined4 *)(iVar7 + 0x1017e41c) = 0;
		}
	}
	return;
}

int ItemMiscIdIdx(int imiscid)

{
	ItemDataStruct *pIVar1;
	int iVar2;

	pIVar1 = AllItemsList;
	iVar2 = 0;
	while ((pIVar1->iRnd == 0 || (imiscid != pIVar1->iMiscId))) {
		pIVar1 = pIVar1 + 1;
		iVar2 = iVar2 + 1;
	}
	return iVar2;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void OperateShrine(int pnum, int i, int sType)

{
	int iVar1;
	int iVar2;

	iVar1 = 0x100f8fd0;
	if (_DAT_10128178 != 0) {
		_DAT_10128178 = 0;
		_DAT_101282cc = 0;
	}
	iVar2 = i * 0x78;
	if (*(char *)(iVar2 + 0x1017e414) != '\0') {
		SetRndSeed(*(int *)(iVar2 + 0x1017e428));
		*(char *)(iVar2 + 0x1017e414) = '\0';
		if (_DAT_101795d0 == 0) {
			PlaySfxLoc(sType, *(int *)(iVar2 + 0x1017e3d8), *(int *)(iVar2 + 0x1017e3dc));
			*(undefined4 *)(iVar2 + 0x1017e3e4) = 1;
			*(undefined4 *)(iVar2 + 0x1017e3ec) = 1;
		} else {
			*(undefined4 *)(iVar2 + 0x1017e3f8) = *(undefined4 *)(iVar2 + 0x1017e3f4);
			*(undefined4 *)(iVar2 + 0x1017e3e4) = 0;
		}
		if (*(uint *)(iVar2 + 0x1017e42c) < 0x1a) {
			// WARNING: Could not recover jumptable at 0x1008951c. Too many branches
			// WARNING: Treating indirect jump as call
			(**(code **)(*(int *)(iVar1 + -0x5b40) + *(uint *)(iVar2 + 0x1017e42c) * 4))();
			return;
		}
		CalcPlrInv(pnum, 1);
		**(undefined4 **)(iVar1 + -0x76bc) = 0xff;
		if (pnum == myplr) {
			NetSendCmdParam2(0, '.', (WORD)pnum, (WORD)i);
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void OperateSkelBook(int pnum, int i, BOOL sendmsg)

{
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 0x100f8fd0;
	iVar3 = i * 0x78;
	if (*(char *)(iVar3 + 0x1017e414) != '\0') {
		if (_DAT_101795d0 == 0) {
			iVar1 = 0x100f8fd0;
			PlaySfxLoc(0x39, *(int *)(iVar3 + 0x1017e3d8), *(int *)(iVar3 + 0x1017e3dc));
		}
		*(char *)(iVar3 + 0x1017e414) = '\0';
		*(int *)(iVar3 + 0x1017e3f8) = *(int *)(iVar3 + 0x1017e3f8) + 2;
		if (_DAT_101795d0 == 0) {
			SetRndSeed(*(int *)(iVar3 + 0x1017e428));
			iVar2 = random(-0x5f, 5);
			if (iVar2 == 0) {
				CreateTypeItem(*(int *)(iVar3 + 0x1017e3d8), *(int *)(iVar3 + 0x1017e3dc), 0, 0, 0x18, sendmsg, 0);
			} else {
				CreateTypeItem(*(int *)(iVar3 + 0x1017e3d8), *(int *)(iVar3 + 0x1017e3dc), 0, 0, 0x15, sendmsg, 0);
			}
			if (pnum == **(int **)(iVar1 + -0x77ac)) {
				NetSendCmdParam1(0, '-', (WORD)i);
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void OperateBookCase(int pnum, int i, BOOL sendmsg)

{
	int iVar1;
	BOOL BVar2;
	int iVar3;

	iVar1 = 0x100f8fd0;
	iVar3 = i * 0x78;
	if (*(char *)(iVar3 + 0x1017e414) != '\0') {
		if (_DAT_101795d0 == 0) {
			iVar1 = 0x100f8fd0;
			PlaySfxLoc(0x39, *(int *)(iVar3 + 0x1017e3d8), *(int *)(iVar3 + 0x1017e3dc));
		}
		*(char *)(iVar3 + 0x1017e414) = '\0';
		*(int *)(iVar3 + 0x1017e3f8) = *(int *)(iVar3 + 0x1017e3f8) + -2;
		if (_DAT_101795d0 == 0) {
			SetRndSeed(*(int *)(iVar3 + 0x1017e428));
			CreateTypeItem(*(int *)(iVar3 + 0x1017e3d8), *(int *)(iVar3 + 0x1017e3dc), 0, 0, 0x18, sendmsg, 0);
			BVar2 = QuestStatus(3);
			if ((((BVar2 != 0) && (iRam10151eac == *(int *)(*(int *)(iVar1 + -0x708c) + 0x44))) && (cRam10151e74 == -1)) && (iRam10151e68 != 0)) {
				uRam10151ea4 = 0x95;
				M_StartStand(0, iRam10151e18);
				uRam10151dd8 = 5;
				uRam10151dd4 = 0x11;
			}
			if (pnum == **(int **)(iVar1 + -0x77ac)) {
				NetSendCmdParam1(0, '-', (WORD)i);
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void OperateDecap(int pnum, int i, BOOL sendmsg)

{
	int iVar1;
	int iVar2;

	iVar1 = 0x100f8fd0;
	iVar2 = i * 0x78;
	if ((*(char *)(iVar2 + 0x1017e414) != '\0') && (*(char *)(iVar2 + 0x1017e414) = '\0', _DAT_101795d0 == 0)) {
		SetRndSeed(*(int *)(iVar2 + 0x1017e428));
		CreateRndItem(*(int *)(iVar2 + 0x1017e3d8), *(int *)(iVar2 + 0x1017e3dc), 0, sendmsg, 0);
		if (pnum == **(int **)(iVar1 + -0x77ac)) {
			NetSendCmdParam1(0, '-', (WORD)i);
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void OperateArmorStand(int pnum, int i, BOOL sendmsg)

{
	byte bVar1;
	int iVar2;
	int onlygood;
	int iVar3;

	iVar2 = 0x100f8fd0;
	iVar3 = i * 0x78;
	if (*(char *)(iVar3 + 0x1017e414) != '\0') {
		*(char *)(iVar3 + 0x1017e414) = '\0';
		*(int *)(iVar3 + 0x1017e3f8) = *(int *)(iVar3 + 0x1017e3f8) + 1;
		if (_DAT_101795d0 == 0) {
			SetRndSeed(*(int *)(iVar3 + 0x1017e428));
			onlygood = random('\0', 2);
			bVar1 = **(byte **)(iVar2 + -0x77e4);
			if (bVar1 < 6) {
				CreateTypeItem(*(int *)(iVar3 + 0x1017e3d8), *(int *)(iVar3 + 0x1017e3dc), 1, 6, 0, sendmsg, 0);
			} else {
				if ((bVar1 < 6) || (9 < bVar1)) {
					if ((bVar1 < 10) || (0xc < bVar1)) {
						if ((0xc < bVar1) && (bVar1 < 0x11)) {
							CreateTypeItem(
							    *(int *)(iVar3 + 0x1017e3d8), *(int *)(iVar3 + 0x1017e3dc), 1, 9, 0, sendmsg, 0);
						}
					} else {
						CreateTypeItem(*(int *)(iVar3 + 0x1017e3d8), *(int *)(iVar3 + 0x1017e3dc), 0, 9, 0, sendmsg, 0);
					}
				} else {
					CreateTypeItem(
					    *(int *)(iVar3 + 0x1017e3d8), *(int *)(iVar3 + 0x1017e3dc), onlygood, 8, 0, sendmsg, 0);
				}
			}
			if (pnum == **(int **)(iVar2 + -0x77ac)) {
				NetSendCmdParam1(0, '-', (WORD)i);
			}
		}
	}
	return;
}

int FindValidShrine(int i)

{
	bool bVar1;
	int iVar2;
	int iStack00000018;

	bVar1 = false;
	iStack00000018 = i;
	do {
		iVar2 = random('\0', 0x1a);
		if ((((int)(char)(&DAT_1010e02c)[iVar2] <= (int)(uint)currlevel) && ((int)(uint)currlevel <= (int)(char)(&DAT_1010e046)[iVar2])) && (iVar2 != 8)) {
			bVar1 = true;
		}
		if (bVar1) {
			if ((gbMaxPlayers == '\x01') || ((&DAT_1010e060)[iVar2] != '\x01')) {
				if ((gbMaxPlayers == '\x01') && ((&DAT_1010e060)[iVar2] == '\x02')) {
					bVar1 = false;
				} else {
					bVar1 = true;
				}
			} else {
				bVar1 = false;
			}
		}
	} while (!bVar1);
	return iVar2;
}

void OperateGoatShrine(int pnum, int i, int sType)

{
	undefined4 *puVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar2 = 0x100f8fd0;
	iVar4 = i * 0x78;
	SetRndSeed(*(int *)(iVar4 + 0x1017e428));
	iVar3 = FindValidShrine(i);
	*(int *)(iVar4 + 0x1017e42c) = iVar3;
	OperateShrine(pnum, i, sType);
	puVar1 = *(undefined4 **)(iVar2 + -0x76bc);
	*(undefined4 *)(iVar4 + 0x1017e3ec) = 2;
	*puVar1 = 0xff;
	return;
}

void OperateCauldron(int pnum, int i, int sType)

{
	undefined4 *puVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar2 = 0x100f8fd0;
	iVar4 = i * 0x78;
	SetRndSeed(*(int *)(iVar4 + 0x1017e428));
	iVar3 = FindValidShrine(i);
	*(int *)(iVar4 + 0x1017e42c) = iVar3;
	OperateShrine(pnum, i, sType);
	puVar1 = *(undefined4 **)(iVar2 + -0x76bc);
	*(undefined4 *)(iVar4 + 0x1017e3f8) = 3;
	*(undefined4 *)(iVar4 + 0x1017e3e4) = 0;
	*puVar1 = 0xff;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL OperateFountains(int pnum, int i)

{
	int *piVar1;
	int *piVar2;
	int *piVar3;
	bool bVar4;
	undefined8 uVar5;
	int iVar6;
	int sx;
	int iVar7;
	int l;
	BOOL BVar8;
	int sy;
	int midam;
	int spllvl;

	uVar5 = 0x100f8fd0;
	sx = i * 0x78;
	BVar8 = 0;
	SetRndSeed(*(int *)(sx + 0x1017e428));
	iVar6 = (int)uVar5;
	sy = *(int *)(&DAT_1017e3d4 + sx);
	if (sy == 0x4c) {
		if (_DAT_101795d0 != 0) {
			return 0;
		}
		if (pnum != myplr) {
			return 0;
		}
		pnum = pnum * 0x55ec;
		piVar1 = (int *)((int)plr + pnum + 0x1a8);
		piVar2 = (int *)((int)plr + pnum + 0x1ac);
		if (*piVar1 < *piVar2) {
			PlaySfxLoc(0x6d, *(int *)(sx + 0x1017e3d8), *(int *)(sx + 0x1017e3dc));
			*piVar1 = *piVar1 + 0x40;
			piVar3 = (int *)((int)plr + pnum + 0x1a0);
			*piVar3 = *(int *)((int)plr + pnum + 0x1a0) + 0x40;
			sy = *piVar2;
			if (sy < *piVar1) {
				*piVar1 = sy;
				*piVar3 = *(int *)((int)plr + pnum + 0x1a4);
			}
			BVar8 = 1;
		} else {
			PlaySfxLoc(0x6d, *(int *)(sx + 0x1017e3d8), *(int *)(sx + 0x1017e3dc));
		}
	} else {
		if (sy < 0x4c) {
			if (sy == 0x42) {
				if (_DAT_101795d0 != 0) {
					return 0;
				}
				if (pnum != myplr) {
					return 0;
				}
				pnum = pnum * 0x55ec;
				piVar1 = (int *)((int)plr + pnum + 0x194);
				piVar2 = (int *)((int)plr + pnum + 0x198);
				if (*piVar1 < *piVar2) {
					PlaySfxLoc(0x6d, *(int *)(sx + 0x1017e3d8), *(int *)(sx + 0x1017e3dc));
					*piVar1 = *piVar1 + 0x40;
					piVar3 = (int *)((int)plr + pnum + 0x18c);
					*piVar3 = *(int *)((int)plr + pnum + 0x18c) + 0x40;
					sy = *piVar2;
					if (sy < *piVar1) {
						*piVar1 = sy;
						*piVar3 = *(int *)((int)plr + pnum + 400);
					}
					BVar8 = 1;
				} else {
					PlaySfxLoc(0x6d, *(int *)(sx + 0x1017e3d8), *(int *)(sx + 0x1017e3dc));
				}
			}
		} else {
			if (sy == 0x52) {
				if (*(char *)(sx + 0x1017e414) != '\0') {
					l = -1;
					sy = -1;
					bVar4 = false;
					iVar7 = 0;
					if (_DAT_101795d0 == 0) {
						PlaySfxLoc(0x6d, *(int *)(sx + 0x1017e3d8), *(int *)(sx + 0x1017e3dc));
					}
					*(undefined *)(sx + 0x1017e414) = 0;
					if (_DAT_101795d0 != 0) {
						return 0;
					}
					if (pnum != myplr) {
						return 0;
					}
					do {
						iVar6 = random('\0', 4);
						if (sy != iVar6) {
							if (iVar6 == 2) {
								ModifyPlrDex(pnum, l);
							} else {
								if (iVar6 < 2) {
									if (iVar6 == 0) {
										ModifyPlrStr(pnum, l);
									} else {
										if (-1 < iVar6) {
											ModifyPlrMag(pnum, l);
										}
									}
								} else {
									if (iVar6 < 4) {
										ModifyPlrVit(pnum, l);
									}
								}
							}
							iVar7 = iVar7 + 1;
							l = 1;
							sy = iVar6;
						}
						iVar6 = (int)uVar5;
						if (1 < iVar7) {
							bVar4 = true;
						}
					} while (!bVar4);
					CheckStats(pnum);
					BVar8 = 1;
					if (pnum == myplr) {
						NetSendCmdParam1(0, '-', (WORD)i);
					}
				}
			} else {
				if (((sy < 0x52) && (0x50 < sy)) && (*(char *)(sx + 0x1017e414) != '\0')) {
					if (_DAT_101795d0 == 0) {
						PlaySfxLoc(0x6d, *(int *)(sx + 0x1017e3d8), *(int *)(sx + 0x1017e3dc));
					}
					*(undefined *)(sx + 0x1017e414) = 0;
					if (_DAT_101795d0 != 0) {
						return 0;
					}
					iVar7 = pnum * 0x55ec;
					sy = *(int *)((int)plr + iVar7 + 0x3c);
					sx = *(int *)((int)plr + iVar7 + 0x38);
					AddMissile(sx, sy, sx, sy, *(int *)((int)plr + iVar7 + 0x70), 0x27, -1, pnum, midam, spllvl);
					BVar8 = 1;
					if (pnum == myplr) {
						NetSendCmdParam1(0, '-', (WORD)i);
					}
				}
			}
		}
	}
	**(undefined4 **)(iVar6 + -0x76bc) = 0xff;
	return BVar8;
}

void OperateWeaponRack(int pnum, int i, BOOL sendmsg)

{
	int *piVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int itype;

	iVar2 = 0x100f8fd0;
	iVar4 = i * 0x78;
	if (*(char *)(iVar4 + 0x1017e414) != '\0') {
		SetRndSeed(*(int *)(iVar4 + 0x1017e428));
		iVar3 = random('\0', 4);
		iVar3 = iVar3 + 1;
		if (iVar3 == 3) {
			itype = 3;
		} else {
			if (iVar3 < 3) {
				if (iVar3 == 1) {
					itype = 1;
				} else {
					if (0 < iVar3) {
						itype = 2;
					}
				}
			} else {
				if (iVar3 < 5) {
					itype = 4;
				}
			}
		}
		*(char *)(iVar4 + 0x1017e414) = '\0';
		piVar1 = *(int **)(iVar2 + -0x7070);
		*(int *)(iVar4 + 0x1017e3f8) = *(int *)(iVar4 + 0x1017e3f8) + 1;
		if (*piVar1 == 0) {
			if (**(byte **)(iVar2 + -0x7794) < 2) {
				CreateTypeItem(*(int *)(iVar4 + 0x1017e3d8), *(int *)(iVar4 + 0x1017e3dc), 0, itype, 0, sendmsg, 0);
			} else {
				CreateTypeItem(*(int *)(iVar4 + 0x1017e3d8), *(int *)(iVar4 + 0x1017e3dc), 1, itype, 0, sendmsg, 0);
			}
			if (pnum == **(int **)(iVar2 + -0x77ac)) {
				NetSendCmdParam1(0, '-', (WORD)i);
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void OperateStoryBook(int pnum, int i)

{
	int iVar1;

	iVar1 = i * 0x78;
	if ((((*(char *)(iVar1 + 0x1017e414) != '\0') && (_DAT_101795d0 == 0)) && (DAT_1014919d == '\0')) && (pnum == myplr)) {
		*(undefined4 *)(iVar1 + 0x1017e3f8) = *(undefined4 *)(iVar1 + 0x1017e438);
		PlaySfxLoc(0x39, *(int *)(iVar1 + 0x1017e3d8), *(int *)(iVar1 + 0x1017e3dc));
		InitQTextMsg(*(int *)(iVar1 + 0x1017e430));
		NetSendCmdParam1(0, '-', (WORD)i);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void OperateLazStand(int pnum, int i)

{
	int local_8;
	int local_4;

	i = i * 0x78;
	if ((((*(char *)(i + 0x1017e414) != '\0') && (_DAT_101795d0 == 0)) && (DAT_1014919d == '\0')) && (pnum == myplr)) {
		*(int *)(i + 0x1017e3f8) = *(int *)(i + 0x1017e3f8) + 1;
		*(char *)(i + 0x1017e414) = '\0';
		GetSuperItemLoc(*(int *)(i + 0x1017e3d8), *(int *)(i + 0x1017e3dc), &local_4, &local_8);
		SpawnQuestItem(0x21, local_4, local_8, 0, 0);
	}
	return;
}

void OperateObject(int pnum, int i, BOOL TeleFlag)

{
	bool bVar1;
	int iVar2;
	int *piVar3;

	bVar1 = pnum == myplr;
	piVar3 = (int *)(&DAT_1017e3d4 + i * 0x78);
	iVar2 = *piVar3;
	switch (iVar2) {
	case 1:
	case 2:
		if (TeleFlag == 0) {
			if (pnum == myplr) {
				OperateL1Door(pnum, i, 1);
			}
		} else {
			if (iVar2 == 1) {
				OperateL1LDoor(pnum, i, 1);
			}
			if (*piVar3 == 2) {
				OperateL1RDoor(pnum, i, 1);
			}
		}
		break;
	case 4:
	case 0x1c:
		OperateLever(pnum, i);
		break;
	case 5:
	case 6:
	case 7:
	case 0x44:
	case 0x45:
	case 0x46:
		OperateChest(pnum, i, (uint)bVar1);
		break;
	case 0x19:
		OperateBook(pnum, i);
		break;
	case 0x29:
		OperateSChambBk(pnum, i);
		break;
	case 0x2a:
	case 0x2b:
		if (TeleFlag == 0) {
			if (pnum == myplr) {
				OperateL2Door(pnum, i, 1);
			}
		} else {
			if (iVar2 == 0x2a) {
				OperateL2LDoor(pnum, i, 1);
			}
			if (*piVar3 == 0x2b) {
				OperateL2RDoor(pnum, i, 1);
			}
		}
		break;
	case 0x30:
		OperateSarc(pnum, i, (uint)bVar1);
		break;
	case 0x32:
		OperateTrapLvr(i);
		break;
	case 0x3b:
	case 0x3c:
		OperateShrine(pnum, i, 0x3f);
		break;
	case 0x3d:
	case 0x40:
		OperateSkelBook(pnum, i, (uint)bVar1);
		break;
	case 0x3e:
	case 0x3f:
		OperateBookCase(pnum, i, (uint)bVar1);
		break;
	case 0x42:
	case 0x4c:
	case 0x51:
	case 0x52:
		OperateFountains(pnum, i);
		break;
	case 0x43:
		OperateDecap(pnum, i, (uint)bVar1);
		break;
	case 0x47:
	case 0x48:
	case 0x58:
		OperateBookLever(pnum, i);
		break;
	case 0x49:
		OperatePedistal(pnum, i);
		break;
	case 0x4a:
	case 0x4b:
		if (TeleFlag == 0) {
			if (pnum == myplr) {
				OperateL3Door(pnum, i, 1);
			}
		} else {
			if (iVar2 == 0x4a) {
				OperateL3LDoor(pnum, i, 1);
			}
			if (*piVar3 == 0x4b) {
				OperateL3RDoor(pnum, i, 1);
			}
		}
		break;
	case 0x4d:
	case 0x59:
		OperateArmorStand(pnum, i, (uint)bVar1);
		break;
	case 0x4f:
		OperateGoatShrine(pnum, i, 0x70);
		break;
	case 0x50:
		OperateCauldron(pnum, i, 0x5f);
		break;
	case 0x56:
		OperateStoryBook(pnum, i);
		break;
	case 0x5a:
	case 0x5c:
		OperateWeaponRack(pnum, i, (uint)bVar1);
		break;
	case 0x5e:
		OperateMushPatch(pnum, i);
		break;
	case 0x5f:
		OperateLazStand(pnum, i);
		break;
	case 0x60:
		OperateSlainHero(pnum, i, (uint)bVar1);
		break;
	case 0x61:
		OperateInnSignChest(pnum, i);
	}
	return;
}

void SyncOpL1Door(int pnum, int cmd, int i)

{
	bool bVar1;

	if (pnum != myplr) {
		bVar1 = false;
		if ((cmd == 0x2b) && (*(int *)(i * 0x78 + 0x1017e438) == 0)) {
			bVar1 = true;
		}
		if ((cmd == 0x2c) && (*(int *)(i * 0x78 + 0x1017e438) == 1)) {
			bVar1 = true;
		}
		if (bVar1) {
			if (*(int *)(&DAT_1017e3d4 + i * 0x78) == 1) {
				OperateL1LDoor(-1, i, 0);
			}
			if (*(int *)(&DAT_1017e3d4 + i * 0x78) == 2) {
				OperateL1RDoor(-1, i, 0);
			}
		}
	}
	return;
}

void SyncOpL2Door(int pnum, int cmd, int i)

{
	bool bVar1;

	if (pnum != myplr) {
		bVar1 = false;
		if ((cmd == 0x2b) && (*(int *)(i * 0x78 + 0x1017e438) == 0)) {
			bVar1 = true;
		}
		if ((cmd == 0x2c) && (*(int *)(i * 0x78 + 0x1017e438) == 1)) {
			bVar1 = true;
		}
		if (bVar1) {
			if (*(int *)(&DAT_1017e3d4 + i * 0x78) == 0x2a) {
				OperateL2LDoor(-1, i, 0);
			}
			if (*(int *)(&DAT_1017e3d4 + i * 0x78) == 0x2b) {
				OperateL2RDoor(-1, i, 0);
			}
		}
	}
	return;
}

void SyncOpL3Door(int pnum, int cmd, int i)

{
	bool bVar1;

	if (pnum != myplr) {
		bVar1 = false;
		if ((cmd == 0x2b) && (*(int *)(i * 0x78 + 0x1017e438) == 0)) {
			bVar1 = true;
		}
		if ((cmd == 0x2c) && (*(int *)(i * 0x78 + 0x1017e438) == 1)) {
			bVar1 = true;
		}
		if (bVar1) {
			if (*(int *)(&DAT_1017e3d4 + i * 0x78) == 0x4a) {
				OperateL3LDoor(-1, i, 0);
			}
			if (*(int *)(&DAT_1017e3d4 + i * 0x78) == 0x4b) {
				OperateL3RDoor(-1, i, 0);
			}
		}
	}
	return;
}

void SyncOpObject(int pnum, int cmd, int i)

{
	switch (*(undefined4 *)(&DAT_1017e3d4 + i * 0x78)) {
	case 1:
	case 2:
		SyncOpL1Door(pnum, cmd, i);
		break;
	case 4:
	case 0x1c:
		OperateLever(pnum, i);
		break;
	case 5:
	case 6:
	case 7:
	case 0x44:
	case 0x45:
	case 0x46:
		OperateChest(pnum, i, 0);
		break;
	case 0x2a:
	case 0x2b:
		SyncOpL2Door(pnum, cmd, i);
		break;
	case 0x30:
		OperateSarc(pnum, i, 0);
		break;
	case 0x3b:
	case 0x3c:
		OperateShrine(pnum, i, 0x3f);
		break;
	case 0x3d:
	case 0x40:
		OperateSkelBook(pnum, i, 0);
		break;
	case 0x3e:
	case 0x3f:
		OperateBookCase(pnum, i, 0);
		break;
	case 0x43:
		OperateDecap(pnum, i, 0);
		break;
	case 0x47:
	case 0x48:
	case 0x58:
		OperateBookLever(pnum, i);
		break;
	case 0x49:
		OperatePedistal(pnum, i);
		break;
	case 0x4a:
	case 0x4b:
		SyncOpL3Door(pnum, cmd, i);
		break;
	case 0x4d:
	case 0x59:
		OperateArmorStand(pnum, i, 0);
		break;
	case 0x4f:
		OperateGoatShrine(pnum, i, 0x70);
		break;
	case 0x50:
		OperateCauldron(pnum, i, 0x5f);
		break;
	case 0x51:
	case 0x52:
		OperateFountains(pnum, i);
		break;
	case 0x56:
		OperateStoryBook(pnum, i);
		break;
	case 0x5a:
	case 0x5c:
		OperateWeaponRack(pnum, i, 0);
		break;
	case 0x5e:
		OperateMushPatch(pnum, i);
		break;
	case 0x60:
		OperateSlainHero(pnum, i, 0);
		break;
	case 0x61:
		OperateInnSignChest(pnum, i);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void BreakCrux(int i)

{
	bool bVar1;
	bool bVar2;
	int iVar3;
	ulonglong uVar4;
	int *piVar5;

	i = i * 0x78;
	piVar5 = (int *)&DAT_1017e10c;
	*(undefined4 *)(i + 0x1017e3e4) = 1;
	bVar1 = true;
	*(undefined4 *)(i + 0x1017e3f8) = 1;
	*(undefined4 *)(i + 0x1017e3ec) = 1;
	*(undefined4 *)(i + 0x1017e40c) = 1;
	*(undefined4 *)(i + 0x1017e410) = 1;
	*(undefined *)(i + 0x1017e408) = 0xff;
	*(undefined *)(i + 0x1017e414) = 0;
	uVar4 = (ulonglong)_DAT_1017e3d0;
	bVar2 = true;
	if (0 < (int)_DAT_1017e3d0) {
		do {
			bVar1 = bVar2;
			if ((((*(int *)(&DAT_1017e3d4 + *piVar5 * 0x78) == 0x14) || (*(int *)(&DAT_1017e3d4 + *piVar5 * 0x78) - 0x15U < 2)) && (iVar3 = *piVar5 * 0x78, *(int *)(i + 0x1017e448) == *(int *)(iVar3 + 0x1017e448))) && (*(char *)(iVar3 + 0x1017e408) != -1)) {
				bVar1 = false;
			}
			piVar5 = piVar5 + 1;
			uVar4 = uVar4 - 1;
			bVar2 = bVar1;
		} while (uVar4 != 0);
	}
	if (bVar1) {
		if (_DAT_101795d0 == 0) {
			PlaySfxLoc(0x3e, *(int *)(i + 0x1017e3d8), *(int *)(i + 0x1017e3dc));
		}
		ObjChangeMap(
		    *(int *)(i + 0x1017e42c), *(int *)(i + 0x1017e430), *(int *)(i + 0x1017e434), *(int *)(i + 0x1017e438));
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void BreakBarrel(int pnum, int i, int dam, BOOL forcebreak, int sendmsg)

{
	char cVar1;
	short sVar2;
	int iVar3;
	int i_00;
	int *piVar4;
	int iVar5;
	int *piVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar8 = i * 0x78;
	if (*(char *)(iVar8 + 0x1017e414) != '\0') {
		if (forcebreak == 0) {
			piVar4 = (int *)(iVar8 + 0x1017e42c);
			*piVar4 = *(int *)(iVar8 + 0x1017e42c) - dam;
			if ((pnum != myplr) && (*piVar4 < 1)) {
				*piVar4 = 1;
			}
		} else {
			*(undefined4 *)(iVar8 + 0x1017e42c) = 0;
		}
		if (*(int *)(iVar8 + 0x1017e42c) < 1) {
			*(int *)(iVar8 + 0x1017e42c) = 0;
			*(undefined4 *)(iVar8 + 0x1017e3e4) = 1;
			*(undefined4 *)(iVar8 + 0x1017e3f8) = 1;
			*(undefined4 *)(iVar8 + 0x1017e3ec) = 1;
			*(undefined4 *)(iVar8 + 0x1017e40c) = 0;
			*(undefined4 *)(iVar8 + 0x1017e410) = 1;
			*(undefined *)(iVar8 + 0x1017e408) = 0xff;
			*(char *)(iVar8 + 0x1017e414) = '\0';
			*(undefined4 *)(iVar8 + 0x1017e418) = 1;
			if (_DAT_101795d0 == 0) {
				if (*(int *)(&DAT_1017e3d4 + iVar8) == 0x3a) {
					PlaySfxLoc(0xe, *(int *)(iVar8 + 0x1017e3d8), *(int *)(iVar8 + 0x1017e3dc));
					iVar5 = *(int *)(iVar8 + 0x1017e3dc) + -1;
					iVar9 = iVar5 * 2;
					while (iVar5 <= *(int *)(iVar8 + 0x1017e3dc) + 1) {
						iVar7 = *(int *)(iVar8 + 0x1017e3d8) + -1;
						iVar11 = iVar7 * 0xe0;
						iVar10 = iVar7 * 0x70;
						while (iVar7 <= *(int *)(iVar8 + 0x1017e3d8) + 1) {
							sVar2 = *(short *)(iVar9 + _DAT_1012f1b4 + iVar11);
							if (0 < sVar2) {
								MonsterTrapHit((int)sVar2 + -1, 1, 4, 0, 1, false);
							}
							cVar1 = *(char *)(iVar5 + _DAT_1012f1b8 + iVar10);
							if ('\0' < cVar1) {
								PlayerMHit((int)cVar1 + -1, -1, 0, 8, 0x10, 1, false, 0);
							}
							cVar1 = *(char *)(iVar5 + _DAT_1012f1ac + iVar10);
							if ('\0' < cVar1) {
								i_00 = (int)cVar1 + -1;
								iVar3 = i_00 * 0x78;
								if ((*(int *)(&DAT_1017e3d4 + iVar3) == 0x3a) && (*(char *)(iVar3 + 0x1017e408) != -1)) {
									BreakBarrel(pnum, i_00, dam, 1, sendmsg);
								}
							}
							iVar11 = iVar11 + 0xe0;
							iVar10 = iVar10 + 0x70;
							iVar7 = iVar7 + 1;
						}
						iVar9 = iVar9 + 2;
						iVar5 = iVar5 + 1;
					}
				} else {
					piVar6 = (int *)(iVar8 + 0x1017e3d8);
					piVar4 = (int *)(iVar8 + 0x1017e3dc);
					PlaySfxLoc(0xf, *(int *)(iVar8 + 0x1017e3d8), *(int *)(iVar8 + 0x1017e3dc));
					SetRndSeed(*(int *)(iVar8 + 0x1017e428));
					if (*(int *)(iVar8 + 0x1017e430) < 2) {
						if (*(int *)(iVar8 + 0x1017e434) == 0) {
							CreateRndUseful(pnum, *piVar6, *piVar4, sendmsg);
						} else {
							CreateRndItem(*piVar6, *piVar4, 0, sendmsg, 0);
						}
					}
					if (7 < *(int *)(iVar8 + 0x1017e430)) {
						SpawnSkeleton(*(int *)(iVar8 + 0x1017e438), *piVar6, *piVar4);
					}
				}
				if (pnum == myplr) {
					NetSendCmdParam2(0, '/', (WORD)pnum, (WORD)i);
				}
			} else {
				*(undefined4 *)(iVar8 + 0x1017e3f8) = *(undefined4 *)(iVar8 + 0x1017e3f4);
				*(undefined4 *)(iVar8 + 0x1017e3f0) = 0;
				*(undefined4 *)(iVar8 + 0x1017e3ec) = 1000;
			}
		} else {
			if (_DAT_101795d0 == 0) {
				PlaySfxLoc(0x30, *(int *)(iVar8 + 0x1017e3d8), *(int *)(iVar8 + 0x1017e3dc));
			}
		}
	}
	return;
}

void BreakObject(int pnum, int oi)

{
	uint uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int dam;

	iVar2 = 0x100f8fd0;
	if (pnum == -1) {
		dam = 10;
	} else {
		iVar3 = pnum * 0x55ec;
		dam = *(int *)((int)plr + iVar3 + 0x5544);
		iVar2 = 0x100f8fd0;
		iVar4 = random(-0x5d, (*(int *)((int)plr + iVar3 + 0x5548) - dam) + 1);
		dam = dam + iVar4;
		iVar4 = dam * *(int *)((int)plr + iVar3 + 0x5550);
		uVar1 = iVar4 / 100 + (iVar4 >> 0x1f);
		dam = *(int *)((int)plr + iVar3 + 0x555c) + *(int *)((int)plr + iVar3 + 0x184) + dam + uVar1 + (uVar1 >> 0x1f);
	}
	iVar2 = *(int *)(*(int *)(iVar2 + -0x7688) + oi * 0x78);
	if (iVar2 < 0x39) {
		if ((iVar2 < 0x17) && (0x13 < iVar2)) {
			BreakCrux(oi);
		}
	} else {
		if (iVar2 < 0x3b) {
			BreakBarrel(pnum, oi, dam, 0, 1);
		}
	}
	return;
}

void SyncBreakObj(int pnum, int oi)

{
	if ((*(int *)(&DAT_1017e3d4 + oi * 0x78) < 0x3b) && (0x38 < *(int *)(&DAT_1017e3d4 + oi * 0x78))) {
		BreakBarrel(pnum, oi, 0, 1, 0);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SyncL1Doors(int i)

{
	int iVar1;
	int dy;
	int dx;

	iVar1 = i * 0x78;
	if (*(int *)(iVar1 + 0x1017e438) == 0) {
		*(undefined4 *)(iVar1 + 0x1017e410) = 0;
	} else {
		*(undefined4 *)(iVar1 + 0x1017e410) = 1;
		dx = *(int *)(iVar1 + 0x1017e3d8);
		dy = *(int *)(iVar1 + 0x1017e3dc);
		*(undefined *)(iVar1 + 0x1017e414) = 2;
		if (*(int *)(&DAT_1017e3d4 + iVar1) == 1) {
			if (*(int *)(iVar1 + 0x1017e42c) == 0xd6) {
				ObjSetMicro(dx, dy, 0x198);
			} else {
				ObjSetMicro(dx, dy, 0x189);
			}
			*(undefined *)(_DAT_1012f1a0 + dx * 0x70 + dy) = 7;
			objects_set_door_piece(dx + -1, dy);
			dy = dy + -1;
		} else {
			ObjSetMicro(dx, dy, 0x18b);
			*(undefined *)(_DAT_1012f1a0 + dx * 0x70 + dy) = 8;
			objects_set_door_piece(dx, dy + -1);
			dx = dx + -1;
		}
		DoorSet(i, dx, dy);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SyncCrux(int i)

{
	bool bVar1;
	bool bVar2;
	int iVar3;
	int *piVar4;
	ulonglong uVar5;

	i = i * 0x78;
	bVar1 = true;
	uVar5 = (ulonglong)_DAT_1017e3d0;
	piVar4 = (int *)&DAT_1017e10c;
	bVar2 = true;
	if (0 < (int)_DAT_1017e3d0) {
		do {
			bVar1 = bVar2;
			if ((((*(int *)(&DAT_1017e3d4 + *piVar4 * 0x78) == 0x14) || (*(int *)(&DAT_1017e3d4 + *piVar4 * 0x78) - 0x15U < 2)) && (iVar3 = *piVar4 * 0x78, *(int *)(i + 0x1017e448) == *(int *)(iVar3 + 0x1017e448))) && (*(char *)(iVar3 + 0x1017e408) != -1)) {
				bVar1 = false;
			}
			piVar4 = piVar4 + 1;
			uVar5 = uVar5 - 1;
			bVar2 = bVar1;
		} while (uVar5 != 0);
	}
	if (bVar1) {
		ObjChangeMap(
		    *(int *)(i + 0x1017e42c), *(int *)(i + 0x1017e430), *(int *)(i + 0x1017e434), *(int *)(i + 0x1017e438));
	}
	return;
}

void SyncLever(int i)

{
	i = i * 0x78;
	if (*(char *)(i + 0x1017e414) == '\0') {
		ObjChangeMap(
		    *(int *)(i + 0x1017e42c), *(int *)(i + 0x1017e430), *(int *)(i + 0x1017e434), *(int *)(i + 0x1017e438));
	}
	return;
}

void SyncQSTLever(int i)

{
	undefined uVar1;

	i = i * 0x78;
	if (*(int *)(i + 0x1017e3f8) == *(int *)(i + 0x1017e440)) {
		ObjChangeMapResync(
		    *(int *)(i + 0x1017e42c), *(int *)(i + 0x1017e430), *(int *)(i + 0x1017e434), *(int *)(i + 0x1017e438));
		uVar1 = DAT_1012f2d8;
		DAT_1012f2d8 = uVar1;
		if (*(int *)(&DAT_1017e3d4 + i) == 0x47) {
			DAT_1012f2d8 = 9;
			DRLG_MRectTrans(
			    *(int *)(i + 0x1017e42c), *(int *)(i + 0x1017e430), *(int *)(i + 0x1017e434), *(int *)(i + 0x1017e438));
			DAT_1012f2d8 = uVar1;
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SyncPedistal(int i)

{
	int *piVar1;
	int iVar2;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int *local_28[5];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar2 = 0x100f8fd0;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	i = i * 0x78;
	piVar1 = (int *)(i + 0x1017e440);
	if (*piVar1 == 1) {
		iVar2 = 0x100f8fd0;
		ObjChangeMapResync(_DAT_1013b36c, _DAT_1013b368 + 3, _DAT_1013b36c + 2, _DAT_1013b368 + 7);
	}
	if (*piVar1 == 2) {
		ObjChangeMapResync(_DAT_1013b36c, _DAT_1013b368 + 3, _DAT_1013b36c + 2, _DAT_1013b368 + 7);
		ObjChangeMapResync(
		    _DAT_1013b36c + 6, _DAT_1013b368 + 3, _DAT_1013b36c + **(int **)(iVar2 + -0x7554), _DAT_1013b368 + 7);
	}
	if (*piVar1 == 3) {
		ObjChangeMapResync(
		    *(int *)(i + 0x1017e42c), *(int *)(i + 0x1017e430), *(int *)(i + 0x1017e434), *(int *)(i + 0x1017e438));
		local_28[0] = (int *)LoadFileInMem(*(char **)(iVar2 + -0x5b3c), (DWORD *)0x0);
		LoadMapObjs((BYTE *)local_28[0], _DAT_1013b36c << 1, _DAT_1013b368 << 1);
		MemFreeDbg(local_28);
	}
	return;
}

void SyncL2Doors(int i)

{
	int *piVar1;
	int dx;
	int dy;
	int iVar2;

	i = i * 0x78;
	piVar1 = (int *)(i + 0x1017e438);
	if (*piVar1 == 0) {
		*(undefined4 *)(i + 0x1017e410) = 0;
	} else {
		*(undefined4 *)(i + 0x1017e410) = 1;
	}
	dx = *(int *)(i + 0x1017e3d8);
	dy = *(int *)(i + 0x1017e3dc);
	*(undefined *)(i + 0x1017e414) = 2;
	iVar2 = *(int *)(&DAT_1017e3d4 + i);
	if ((iVar2 == 0x2a) && (*piVar1 == 0)) {
		ObjSetMicro(dx, dy, 0x21a);
	} else {
		if ((iVar2 == 0x2a) && ((*piVar1 == 1 || (*piVar1 == 2)))) {
			ObjSetMicro(dx, dy, 0xd);
		} else {
			if ((iVar2 == 0x2b) && (*piVar1 == 0)) {
				ObjSetMicro(dx, dy, 0x21c);
			} else {
				if ((iVar2 == 0x2b) && ((*piVar1 == 1 || (*piVar1 == 2)))) {
					ObjSetMicro(dx, dy, 0x11);
				}
			}
		}
	}
	return;
}

void SyncL3Doors(int i)

{
	int dx;
	int dy;
	int iVar1;

	i = i * 0x78;
	*(undefined4 *)(i + 0x1017e410) = 1;
	dx = *(int *)(i + 0x1017e3d8);
	dy = *(int *)(i + 0x1017e3dc);
	*(undefined *)(i + 0x1017e414) = 2;
	iVar1 = *(int *)(&DAT_1017e3d4 + i);
	if ((iVar1 == 0x4a) && (*(int *)(i + 0x1017e438) == 0)) {
		ObjSetMicro(dx, dy, 0x213);
	} else {
		if ((iVar1 == 0x4a) && ((*(int *)(i + 0x1017e438) == 1 || (*(int *)(i + 0x1017e438) == 2)))) {
			ObjSetMicro(dx, dy, 0x21a);
		} else {
			if ((iVar1 == 0x4b) && (*(int *)(i + 0x1017e438) == 0)) {
				ObjSetMicro(dx, dy, 0x216);
			} else {
				if ((iVar1 == 0x4b) && ((*(int *)(i + 0x1017e438) == 1 || (*(int *)(i + 0x1017e438) == 2)))) {
					ObjSetMicro(dx, dy, 0x21d);
				}
			}
		}
	}
	return;
}

void SyncObjectAnim(int o)

{
	char *pcVar1;
	int iVar2;

	iVar2 = 0;
	pcVar1 = &DAT_1017e3a8;
	while (*pcVar1 != *(char *)(*(int *)(&DAT_1017e3d4 + o * 0x78) * 0x2c + 0x1010cda1)) {
		pcVar1 = pcVar1 + 1;
		iVar2 = iVar2 + 1;
	}
	*(undefined4 *)(o * 0x78 + 0x1017e3e8) = *(undefined4 *)(&DAT_1017e308 + iVar2 * 4);
	iVar2 = *(int *)(&DAT_1017e3d4 + o * 0x78);
	if (iVar2 != 0x29) {
		if (iVar2 < 0x29) {
			if (iVar2 < 0x17) {
				if (iVar2 != 4) {
					if (3 < iVar2) {
						if (iVar2 < 0x14) {
							return;
						}
						SyncCrux(o);
						return;
					}
					if (2 < iVar2) {
						return;
					}
					if (iVar2 < 1) {
						return;
					}
					SyncL1Doors(o);
					return;
				}
			} else {
				if (iVar2 != 0x1c) {
					if (0x1b < iVar2) {
						return;
					}
					if (iVar2 != 0x19) {
						return;
					}
				}
			}
			SyncLever(o);
			return;
		}
		if (iVar2 == 0x49) {
			SyncPedistal(o);
			return;
		}
		if (iVar2 < 0x49) {
			if (iVar2 != 0x47) {
				if (0x46 < iVar2) {
					return;
				}
				if (0x2b < iVar2) {
					return;
				}
				SyncL2Doors(o);
				return;
			}
		} else {
			if (iVar2 != 0x58) {
				if (0x57 < iVar2) {
					return;
				}
				if (0x4b < iVar2) {
					return;
				}
				SyncL3Doors(o);
				return;
			}
		}
	}
	SyncQSTLever(o);
	return;
}

void GetObjectStr(int i)

{
	int *piVar1;
	int iVar2;
	int iVar3;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	iVar2 = 0x100f8fd0;
	iVar3 = 0x100f8fd0;
	i = i * 0x78;
	switch (*(undefined4 *)(&DAT_1017e3d4 + i)) {
	case 1:
	case 2:
	case 0x2a:
	case 0x2b:
	case 0x4a:
	case 0x4b:
		piVar1 = (int *)(i + 0x1017e438);
		iVar3 = 0x100f8fd0;
		if (*piVar1 == 1) {
			iVar3 = 0x100f8fd0;
			strcpy(&DAT_101283d5, "Open Door");
		}
		if (*piVar1 == 0) {
			strcpy(&DAT_101283d5, *(char **)(iVar3 + -0x5b58));
		}
		if (*piVar1 == 2) {
			strcpy(&DAT_101283d5, *(char **)(iVar3 + -0x5b5c));
		}
		break;
	case 4:
	case 0x32:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Lever");
		break;
	case 5:
	case 0x44:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Small Chest");
		break;
	case 6:
	case 0x45:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Chest");
		break;
	case 7:
	case 0x46:
	case 0x61:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Large Chest");
		break;
	case 0x14:
	case 0x15:
	case 0x16:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Crucified Skeleton");
		break;
	case 0x19:
		if (DAT_1012f316 != '\0') {
			if (DAT_1012f315 == '\x02') {
				iVar3 = iVar2;
				strcpy(&DAT_101283d5, "Ancient Tome");
			} else {
				if (DAT_1012f315 == '\x05') {
					iVar3 = iVar2;
					strcpy(&DAT_101283d5, "Book of Vileness");
				}
			}
		}
		break;
	case 0x1c:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Skull Lever");
		break;
	case 0x29:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Mythical Book");
		break;
	case 0x30:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Sarcophagus");
		break;
	case 0x37:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Bookshelf");
		break;
	case 0x39:
	case 0x3a:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Barrel");
		break;
	case 0x3b:
	case 0x3c:
		iVar3 = 0x100f8fd0;
		wsprintf((int)&DAT_101282d4, "%s Shrine", (&PTR_s_Mysterious_1010dfc4)[*(int *)(i + 0x1017e42c)], in_r6, in_r7,
		    in_r8, in_r9, in_r10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0,
		    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
		strcpy(&DAT_101283d5, &DAT_101282d4);
		break;
	case 0x3d:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Skeleton Tome");
		break;
	case 0x3e:
	case 0x3f:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Bookcase");
		break;
	case 0x40:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Library Book");
		break;
	case 0x42:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Blood Fountain");
		break;
	case 0x43:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Decapitated Body");
		break;
	case 0x47:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Book of the Blind");
		break;
	case 0x48:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Book of Blood");
		break;
	case 0x49:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Pedestal of Blood");
		break;
	case 0x4c:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Purifying Spring");
		break;
	case 0x4d:
	case 0x59:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Armor");
		break;
	case 0x4f:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Goat Shrine");
		break;
	case 0x50:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Cauldron");
		break;
	case 0x51:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Murky Pool");
		break;
	case 0x52:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Fountain of Tears");
		break;
	case 0x56:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, (&PTR_s_The_Great_Conflict_1010e07c)[*(int *)(i + 0x1017e434)]);
		break;
	case 0x58:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Steel Tome");
		break;
	case 0x5a:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Weapon Rack");
		break;
	case 0x5c:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Weapon Rack");
		break;
	case 0x5e:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Mushroom Patch");
		break;
	case 0x5f:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Vile Stand");
		break;
	case 0x60:
		iVar3 = iVar2;
		strcpy(&DAT_101283d5, "Slain Hero");
	}
	if ((*(char *)(*(int *)(iVar3 + -0x77a8) + **(int **)(iVar3 + -0x77ac) * 0x55ec + 0x15c) == '\x01') && (*(int *)(i + 0x1017e41c) != 0)) {
		wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar3 + -0x5bd8), &DAT_101283d5, in_r6, in_r7, in_r8, in_r9, in_r10,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
		strcpy(&DAT_101283d5, &DAT_101282d4);
		**(undefined **)(iVar3 + -0x7728) = 2;
	}
	return;
}
