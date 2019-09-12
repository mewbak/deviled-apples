
int FindPath(PosOk *PosOk, int PosOkArg, int sx, int sy, int dx, int dy, char *path)

{
	undefined4 *puVar1;
	PATHNODE *pPVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	ulonglong uVar7;
	int iVar8;
	int iVar9;
	PATHNODE *pPath;
	int iVar10;
	BOOL BVar11;
	int iVar12;
	char *pcVar13;

	iVar10 = 0x100f8fd0;
	_DAT_10183010 = 0;
	_DAT_10186d6c = path_new_step();
	pPath = path_new_step();
	puVar1 = *(undefined4 **)(iVar10 + -0x6fb8);
	*(PATHNODE **)*(PATHNODE **)(iVar10 + -0x6fb4) = pPath;
	*puVar1 = 0;
	pPath = path_new_step();
	pPath->g = '\0';
	iVar10 = path_get_h_cost(sx, sy, dx, dy);
	pPath->h = (char)iVar10;
	pPath->f = pPath->g + pPath->h;
	pPath->x = sx;
	pPath->y = sy;
	_DAT_10186d6c->NextNode = pPath;
	while (true) {
		pPath = GetNextPath();
		if (pPath == (PATHNODE *)0x0) {
			return 0;
		}
		if ((pPath->x == dx) && (pPath->y == dy))
			break;
		BVar11 = path_get_path(PosOk, PosOkArg, pPath, dx, dy);
		if (BVar11 == 0) {
			return 0;
		}
	}
	iVar10 = 0;
	while ((pPVar2 = pPath->Parent, pPVar2 != (PATHNODE *)0x0 && (iVar10 < 0x19))) {
		iVar12 = iVar10 * 4;
		iVar10 = iVar10 + 1;
		*(int *)(&DAT_10186d04 + iVar12) = (int)*(char *)((pPath->x - pPVar2->x) + (pPath->y - pPVar2->y) * 3 + 0x1010e8db);
		pPath = pPath->Parent;
	}
	if (iVar10 == 0x19) {
		return 0;
	}
	iVar12 = 0;
	if (iVar10 < 1) {
		return 0;
	}
	if ((8 < iVar10) && (uVar7 = (ulonglong)(iVar10 - 1U >> 3), 0 < iVar10 + -8)) {
		do {
			iVar9 = iVar12 + 3;
			iVar3 = iVar12 + 4;
			pcVar13 = path + iVar12;
			*pcVar13 = (char)*(undefined4 *)((iVar10 - iVar12) * 4 + 0x10186d00);
			iVar8 = iVar12 + 2;
			iVar4 = iVar12 + 5;
			iVar5 = iVar12 + 6;
			iVar6 = iVar12 + 7;
			pcVar13[1] = (char)*(undefined4 *)((iVar10 - (iVar12 + 1)) * 4 + 0x10186d00);
			iVar12 = iVar12 + 8;
			pcVar13[2] = (char)*(undefined4 *)((iVar10 - iVar8) * 4 + 0x10186d00);
			pcVar13[3] = (char)*(undefined4 *)((iVar10 - iVar9) * 4 + 0x10186d00);
			pcVar13[4] = (char)*(undefined4 *)((iVar10 - iVar3) * 4 + 0x10186d00);
			pcVar13[5] = (char)*(undefined4 *)((iVar10 - iVar4) * 4 + 0x10186d00);
			pcVar13[6] = (char)*(undefined4 *)((iVar10 - iVar5) * 4 + 0x10186d00);
			pcVar13[7] = (char)*(undefined4 *)((iVar10 - iVar6) * 4 + 0x10186d00);
			uVar7 = uVar7 - 1;
		} while (uVar7 != 0);
	}
	iVar8 = iVar10 - iVar12;
	path = path + iVar12;
	if (iVar10 <= iVar12) {
		return iVar12;
	}
	do {
		iVar9 = iVar10 - iVar12;
		iVar12 = iVar12 + 1;
		*path = (char)*(undefined4 *)(iVar9 * 4 + 0x10186d00);
		path = path + 1;
		iVar8 = iVar8 + -1;
	} while (iVar8 != 0);
	return iVar12;
}

int path_get_h_cost(int sx, int sy, int dx, int dy)

{
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = abs(sx - dx);
	iVar3 = abs(sy - dy);
	iVar1 = iVar3;
	if (iVar2 < iVar3) {
		iVar1 = iVar2;
	}
	if (iVar3 < iVar2) {
		iVar3 = iVar2;
	}
	return (iVar1 + iVar3) * 2;
}

int path_check_equal(PATHNODE *pPath, int dx, int dy)

{
	if ((pPath->x != dx) && (pPath->y != dy)) {
		return 3;
	}
	return 2;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

PATHNODE *GetNextPath(void)

{
	PATHNODE *pPVar1;

	pPVar1 = *(PATHNODE **)(_DAT_10186d6c + 0x30);
	if (pPVar1 == (PATHNODE *)0x0) {
		return (PATHNODE *)0x0;
	}
	*(PATHNODE **)(_DAT_10186d6c + 0x30) = pPVar1->NextNode;
	pPVar1->NextNode = *(PATHNODE **)(_DAT_10186d68 + 0x30);
	*(PATHNODE **)(_DAT_10186d68 + 0x30) = pPVar1;
	return pPVar1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL path_solid_pieces(PATHNODE *pPath, int dx, int dy)

{
	char cVar1;
	undefined8 uVar2;
	int iVar3;
	undefined4 uVar4;
	uint uVar5;

	uVar5 = 1;
	cVar1 = *(char *)((dx - pPath->x) + (dy - pPath->y) * 3 + 0x1010e8db);
	if (cVar1 == '\a') {
		iVar3 = _DAT_1012f1d4 + dx * 0xe0 + dy * 2;
		uVar4 = 1;
		if (((&DAT_10130b33)[(int)*(short *)(iVar3 + -2)] == '\0') && ((&DAT_10130b33)[(int)*(short *)(iVar3 + -0xe0)] == '\0')) {
			uVar4 = 0;
		}
		uVar2 = countLeadingZeros(uVar4);
		uVar5 = (uint)uVar2 >> 5 & 0xff;
	} else {
		if (cVar1 < '\a') {
			if (cVar1 == '\x05') {
				iVar3 = _DAT_1012f1d4 + dx * 0xe0 + dy * 2;
				uVar4 = 1;
				if (((&DAT_10130b33)[(int)*(short *)(iVar3 + 2)] == '\0') && ((&DAT_10130b33)[(int)*(short *)(iVar3 + 0xe0)] == '\0')) {
					uVar4 = 0;
				}
				uVar2 = countLeadingZeros(uVar4);
				uVar5 = (uint)uVar2 >> 5 & 0xff;
			} else {
				if ('\x04' < cVar1) {
					iVar3 = _DAT_1012f1d4 + dx * 0xe0 + dy * 2;
					uVar4 = 1;
					if (((&DAT_10130b33)[(int)*(short *)(iVar3 + 2)] == '\0') && ((&DAT_10130b33)[(int)*(short *)(iVar3 + -0xe0)] == '\0')) {
						uVar4 = 0;
					}
					uVar2 = countLeadingZeros(uVar4);
					uVar5 = (uint)uVar2 >> 5 & 0xff;
				}
			}
		} else {
			if (cVar1 < '\t') {
				iVar3 = _DAT_1012f1d4 + dx * 0xe0 + dy * 2;
				uVar4 = 1;
				if (((&DAT_10130b33)[(int)*(short *)(iVar3 + 0xe0)] == '\0') && ((&DAT_10130b33)[(int)*(short *)(iVar3 + -2)] == '\0')) {
					uVar4 = 0;
				}
				uVar2 = countLeadingZeros(uVar4);
				uVar5 = (uint)uVar2 >> 5 & 0xff;
			}
		}
	}
	return (BOOL)uVar5;
}

BOOL path_get_path(PosOk *PosOk, int PosOkArg, PATHNODE *pPath, int x, int y)

{
	longlong lVar1;
	BOOL BVar2;
	int iVar3;
	int dy;
	int dx;
	char *pcVar4;
	char *pcVar5;

	pcVar5 = &DAT_1010e8e0;
	pcVar4 = &DAT_1010e8e8;
	iVar3 = 0;
	while (true) {
		dx = pPath->x + (int)*pcVar5;
		dy = pPath->y + (int)*pcVar4;
		lVar1 = (longlong)PosOkArg;
		fnMenu(PosOkArg);
		if ((((lVar1 != 0) && (BVar2 = path_solid_pieces(pPath, dx, dy), BVar2 != 0)) || (((int)lVar1 == 0 && ((dx == x && (dy == y)))))) && (BVar2 = path_parent_path(pPath, dx, dy, x, y), BVar2 == 0))
			break;
		iVar3 = iVar3 + 1;
		pcVar4 = pcVar4 + 1;
		pcVar5 = pcVar5 + 1;
		if (7 < iVar3) {
			return 1;
		}
	}
	return 0;
}

BOOL path_parent_path(PATHNODE *pPath, int dx, int dy, int sx, int sy)

{
	int iVar1;
	PATHNODE *pPath_00;
	BOOL BVar2;
	int iVar3;
	longlong lVar4;
	char cVar5;

	iVar1 = path_check_equal(pPath, dx, dy);
	lVar4 = (longlong)pPath->g + (longlong)iVar1;
	pPath_00 = path_get_node1(dx, dy);
	iVar1 = (int)lVar4;
	cVar5 = (char)lVar4;
	if (pPath_00 == (PATHNODE *)0x0) {
		pPath_00 = path_get_node2(dx, dy);
		if (pPath_00 == (PATHNODE *)0x0) {
			pPath_00 = path_new_step();
			if (pPath_00 == (PATHNODE *)0x0) {
				return 0;
			}
			pPath_00->Parent = pPath;
			pPath_00->g = cVar5;
			iVar1 = path_get_h_cost(dx, dy, sx, sy);
			pPath_00->h = (char)iVar1;
			pPath_00->f = cVar5 + pPath_00->h;
			pPath_00->x = dx;
			pPath_00->y = dy;
			path_next_node(pPath_00);
			iVar1 = 0;
			if ((((((pPath->Child[0] != (PATHNODE *)0x0) && (iVar1 = 1, pPath->Child[1] != (PATHNODE *)0x0)) && (iVar1 = 2, pPath->Child[2] != (PATHNODE *)0x0)) && ((iVar1 = 3, pPath->Child[3] != (PATHNODE *)0x0 && (iVar1 = 4, pPath->Child[4] != (PATHNODE *)0x0)))) && (iVar1 = 5, pPath->Child[5] != (PATHNODE *)0x0)) && ((iVar1 = 6, pPath->Child[6] != (PATHNODE *)0x0 && (iVar1 = 7, pPath->Child[7] != (PATHNODE *)0x0)))) {
				iVar1 = 8;
			}
			pPath->Child[iVar1] = pPath_00;
		} else {
			iVar3 = 0;
			if ((((pPath->Child[0] != (PATHNODE *)0x0) && (iVar3 = 1, pPath->Child[1] != (PATHNODE *)0x0)) && (iVar3 = 2, pPath->Child[2] != (PATHNODE *)0x0)) && (((iVar3 = 3, pPath->Child[3] != (PATHNODE *)0x0 && (iVar3 = 4, pPath->Child[4] != (PATHNODE *)0x0)) && ((iVar3 = 5, pPath->Child[5] != (PATHNODE *)0x0 && ((iVar3 = 6, pPath->Child[6] != (PATHNODE *)0x0 && (iVar3 = 7, pPath->Child[7] != (PATHNODE *)0x0)))))))) {
				iVar3 = 8;
			}
			pPath->Child[iVar3] = pPath_00;
			if ((iVar1 < (int)pPath_00->g) && (BVar2 = path_solid_pieces(pPath, dx, dy), BVar2 != 0)) {
				pPath_00->Parent = pPath;
				pPath_00->g = cVar5;
				pPath_00->f = cVar5 + pPath_00->h;
				path_set_coords(pPath_00);
			}
		}
	} else {
		iVar3 = 0;
		if ((((pPath->Child[0] != (PATHNODE *)0x0) && (iVar3 = 1, pPath->Child[1] != (PATHNODE *)0x0)) && (iVar3 = 2, pPath->Child[2] != (PATHNODE *)0x0)) && (((iVar3 = 3, pPath->Child[3] != (PATHNODE *)0x0 && (iVar3 = 4, pPath->Child[4] != (PATHNODE *)0x0)) && ((iVar3 = 5, pPath->Child[5] != (PATHNODE *)0x0 && ((iVar3 = 6, pPath->Child[6] != (PATHNODE *)0x0 && (iVar3 = 7, pPath->Child[7] != (PATHNODE *)0x0)))))))) {
			iVar3 = 8;
		}
		pPath->Child[iVar3] = pPath_00;
		if ((iVar1 < (int)pPath_00->g) && (BVar2 = path_solid_pieces(pPath, dx, dy), BVar2 != 0)) {
			pPath_00->Parent = pPath;
			pPath_00->g = cVar5;
			pPath_00->f = cVar5 + pPath_00->h;
		}
	}
	return 1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

PATHNODE *path_get_node1(int dx, int dy)

{
	PATHNODE *pPVar1;

	pPVar1 = *(PATHNODE **)(_DAT_10186d6c + 0x30);
	while (true) {
		if (pPVar1 == (PATHNODE *)0x0) {
			return (PATHNODE *)0x0;
		}
		if ((pPVar1->x == dx) && (pPVar1->y == dy))
			break;
		pPVar1 = pPVar1->NextNode;
	}
	return pPVar1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

PATHNODE *path_get_node2(int dx, int dy)

{
	PATHNODE *pPVar1;

	pPVar1 = *(PATHNODE **)(_DAT_10186d68 + 0x30);
	while (true) {
		if (pPVar1 == (PATHNODE *)0x0) {
			return (PATHNODE *)0x0;
		}
		if ((pPVar1->x == dx) && (pPVar1->y == dy))
			break;
		pPVar1 = pPVar1->NextNode;
	}
	return pPVar1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void path_next_node(PATHNODE *pPath)

{
	PATHNODE *pPVar1;
	PATHNODE *pPVar2;
	PATHNODE *pPVar3;

	if (_DAT_10186d6c->NextNode == (PATHNODE *)0x0) {
		_DAT_10186d6c->NextNode = pPath;
		return;
	}
	pPVar1 = _DAT_10186d6c->NextNode;
	pPVar2 = _DAT_10186d6c;
	while ((pPVar3 = pPVar1, pPVar3 != (PATHNODE *)0x0 && (pPVar3->f < pPath->f))) {
		pPVar1 = pPVar3->NextNode;
		pPVar2 = pPVar3;
	}
	pPath->NextNode = pPVar3;
	pPVar2->NextNode = pPath;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void path_set_coords(PATHNODE *pPath)

{
	PATHNODE *pPath_00;
	PATHNODE *pPath_01;
	int iVar1;
	BOOL BVar2;
	int iVar3;
	PATHNODE *pPVar4;

	path_push_active_step(pPath);
	do {
		if (_DAT_10182b5c == 0) {
			return;
		}
		pPath_01 = path_pop_active_step();
		iVar3 = 0;
		pPVar4 = pPath_01;
		do {
			pPath_00 = pPVar4->Child[0];
			if (pPath_00 == (PATHNODE *)0x0)
				break;
			iVar1 = path_check_equal(pPath_01, pPath_00->x, pPath_00->y);
			if (((int)pPath_01->g + iVar1 < (int)pPath_00->g) && (BVar2 = path_solid_pieces(pPath_01, pPath_00->x, pPath_00->y), BVar2 != 0)) {
				pPath_00->Parent = pPath_01;
				iVar1 = path_check_equal(pPath_01, pPath_00->x, pPath_00->y);
				pPath_00->g = pPath_01->g + (char)iVar1;
				pPath_00->f = pPath_00->g + pPath_00->h;
				path_push_active_step(pPath_00);
			}
			iVar3 = iVar3 + 1;
			pPVar4 = (PATHNODE *)&pPVar4->x;
		} while (iVar3 < 8);
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void path_push_active_step(PATHNODE *pPath)

{
	int iVar1;

	iVar1 = _DAT_10182b5c * 4;
	_DAT_10182b5c = _DAT_10182b5c + 1;
	*(PATHNODE **)(&DAT_10182b60 + iVar1) = pPath;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

PATHNODE *path_pop_active_step(void)

{
	_DAT_10182b5c = _DAT_10182b5c + -1;
	return *(PATHNODE **)(&DAT_10182b60 + _DAT_10182b5c * 4);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

PATHNODE *path_new_step(void)

{
	int iVar1;
	PATHNODE *_Dst;

	if (_DAT_10183010 == 300) {
		_Dst = (PATHNODE *)0x0;
	} else {
		iVar1 = _DAT_10183010 * 0x34;
		_DAT_10183010 = _DAT_10183010 + 1;
		_Dst = (PATHNODE *)(&DAT_10183014 + iVar1);
		memset(_Dst, 0, 0x34);
	}
	return _Dst;
}