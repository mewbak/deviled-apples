
void InitPortals(void)

{
	BOOL BVar1;
	int i;
	undefined4 *puVar2;

	puVar2 = (undefined4 *)&DAT_1019cb34;
	i = 0;
	do {
		BVar1 = delta_portal_inited(i);
		if (BVar1 != 0) {
			*puVar2 = 0;
		}
		i = i + 1;
		puVar2 = puVar2 + 6;
	} while (i < 4);
	return;
}

void SetPortalStats(int i, BOOL o, int x, int y, int lvl, int lvltype)

{
	i = i * 0x18;
	*(BOOL *)(&DAT_1019cb34 + i) = o;
	*(int *)(i + 0x1019cb38) = x;
	*(int *)(i + 0x1019cb3c) = y;
	*(int *)(i + 0x1019cb40) = lvl;
	*(int *)(i + 0x1019cb44) = lvltype;
	*(undefined4 *)(i + 0x1019cb48) = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddWarpMissile(int i, int x, int y)

{
	int mi;
	int iVar1;
	int midam;
	int spllvl;

	iVar1 = 0x100f8fd0;
	missiledata[10].mlSFX = -1;
	*(undefined *)(_DAT_1012f1a4 + x * 0x70 + y) = 0;
	mi = AddMissile(0, 0, x, y, 0, 10, '\0', i, midam, spllvl);
	if (mi != -1) {
		SetMissDir(mi, 1);
		if (**(char **)(iVar1 + -0x77e4) != '\0') {
			mi = mi * 0xb4;
			iVar1 = AddLight(*(int *)(mi + 0x10149b78), *(int *)(mi + 0x10149b7c), 0xf);
			*(int *)(mi + 0x10149c00) = iVar1;
		}
		missiledata[10].mlSFX = 0x81;
	}
	return;
}

void SyncPortals(void)

{
	int i;
	int *piVar1;
	int *piVar2;
	int *piVar3;

	i = 0;
	piVar2 = (int *)&DAT_1010ecbc;
	piVar3 = (int *)&DAT_1019cb34;
	piVar1 = (int *)&DAT_1010ecac;
	do {
		if (*piVar3 != 0) {
			if (currlevel == 0) {
				AddWarpMissile(i, *piVar1, *piVar2);
			} else {
				if (DAT_1012f316 == '\0') {
					if ((uint)currlevel == piVar3[3]) {
						AddWarpMissile(i, piVar3[1], piVar3[2]);
					}
				} else {
					if ((uint)DAT_1012f315 == piVar3[3]) {
						AddWarpMissile(i, piVar3[1], piVar3[2]);
					}
				}
			}
		}
		i = i + 1;
		piVar2 = piVar2 + 1;
		piVar1 = piVar1 + 1;
		piVar3 = piVar3 + 6;
	} while (i < 4);
	return;
}

void AddInTownPortal(int i)

{
	AddWarpMissile(i, *(int *)(&DAT_1010ecac + i * 4), *(int *)(&DAT_1010ecbc + i * 4));
	return;
}

void ActivatePortal(int i, int x, int y, int lvl, int lvltype, BOOL sp)

{
	i = i * 0x18;
	*(undefined4 *)(&DAT_1019cb34 + i) = 1;
	if (lvl == 0) {
		return;
	}
	*(int *)(i + 0x1019cb38) = x;
	*(int *)(i + 0x1019cb3c) = y;
	*(int *)(i + 0x1019cb40) = lvl;
	*(int *)(i + 0x1019cb44) = lvltype;
	*(BOOL *)(i + 0x1019cb48) = sp;
	return;
}

void DeactivatePortal(int i)

{
	*(undefined4 *)(&DAT_1019cb34 + i * 0x18) = 0;
	return;
}

BOOL PortalOnLevel(int i)

{
	if ((uint)currlevel == *(uint *)(i * 0x18 + 0x1019cb40)) {
		return 1;
	}
	if (currlevel == 0) {
		return 1;
	}
	return 0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void RemovePortalMissile(int id)

{
	int mi;
	int iVar1;
	int iVar2;
	int i;
	int *piVar3;

	i = 0;
	piVar3 = (int *)&DAT_1014939c;
	while (i < _DAT_10149b70) {
		mi = *piVar3;
		iVar1 = mi * 0xb4;
		if ((*(int *)(&DAT_10149b74 + iVar1) == 10) && (id == *(int *)(iVar1 + 0x10149bec))) {
			iVar2 = *(int *)(iVar1 + 0x10149b78) * 0x70 + *(int *)(iVar1 + 0x10149b7c);
			*(byte *)(_DAT_1012f1bc + iVar2) = *(byte *)(_DAT_1012f1bc + iVar2) & 0xfe;
			*(undefined *)(_DAT_1012f1a4 + *(int *)(iVar1 + 0x10149b78) * 0x70 + *(int *)(iVar1 + 0x10149b7c)) = 0;
			if (*(int *)(id * 0x18 + 0x1019cb40) != 0) {
				AddUnLight(*(int *)(iVar1 + 0x10149c00));
			}
			DeleteMissile(mi, i);
		}
		piVar3 = piVar3 + 1;
		i = i + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SetCurrentPortal(int p)

{
	_DAT_1019cb30 = p;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void GetPortalLevel(void)

{
	int iVar1;
	int iVar2;

	iVar1 = _DAT_1019cb30;
	if (currlevel == 0) {
		iVar2 = _DAT_1019cb30 * 0x18;
		if (*(int *)(iVar2 + 0x1019cb48) == 0) {
			DAT_1012f316 = 0;
			currlevel = (byte) * (uint *)(iVar2 + 0x1019cb40);
			*(uint *)((int)plr + myplr * 0x55ec + 0x34) = *(uint *)(iVar2 + 0x1019cb40) & 0xff;
			leveltype = (undefined) * (undefined4 *)(iVar2 + 0x1019cb44);
		} else {
			DAT_1012f316 = 1;
			DAT_1012f315 = (byte) * (uint *)(iVar2 + 0x1019cb40);
			currlevel = DAT_1012f315;
			*(uint *)((int)plr + myplr * 0x55ec + 0x34) = *(uint *)(iVar2 + 0x1019cb40) & 0xff;
			leveltype = (undefined) * (undefined4 *)(iVar2 + 0x1019cb44);
		}
		if (iVar1 == myplr) {
			NetSendCmd(1, '9');
			DeactivatePortal(_DAT_1019cb30);
		}
	} else {
		DAT_1012f316 = 0;
		currlevel = 0;
		*(undefined4 *)((int)plr + myplr * 0x55ec + 0x34) = 0;
		leveltype = 0;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void GetPortalLvlPos(void)

{
	if (currlevel == 0) {
		_DAT_1012f30c = *(int *)(&DAT_1010ecbc + _DAT_1019cb30 * 4) + 1;
		_DAT_1012f310 = *(int *)(&DAT_1010ecac + _DAT_1019cb30 * 4) + 1;
		return;
	}
	_DAT_1012f310 = *(int *)(_DAT_1019cb30 * 0x18 + 0x1019cb38);
	_DAT_1012f30c = *(int *)(_DAT_1019cb30 * 0x18 + 0x1019cb3c);
	if (_DAT_1019cb30 == myplr) {
		return;
	}
	_DAT_1012f30c = _DAT_1012f30c + 1;
	_DAT_1012f310 = _DAT_1012f310 + 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL PosOkPortal(int lvl, int x, int y)

{
	int iVar1;
	int iVar2;

	iVar2 = x + -1;
	iVar1 = y + -1;
	if ((_DAT_1019cb34 != 0) && (lvl == iRam1019cb40)) {
		if ((x == iRam1019cb38) && (y == iRam1019cb3c)) {
			return 1;
		}
		if ((iVar2 == iRam1019cb38) && (iVar1 == iRam1019cb3c)) {
			return 1;
		}
	}
	if ((iRam1019cb4c != 0) && (lvl == iRam1019cb58)) {
		if ((x == iRam1019cb50) && (y == iRam1019cb54)) {
			return 1;
		}
		if ((iVar2 == iRam1019cb50) && (iVar1 == iRam1019cb54)) {
			return 1;
		}
	}
	if ((iRam1019cb64 != 0) && (lvl == iRam1019cb70)) {
		if ((x == iRam1019cb68) && (y == iRam1019cb6c)) {
			return 1;
		}
		if ((iVar2 == iRam1019cb68) && (iVar1 == iRam1019cb6c)) {
			return 1;
		}
	}
	if ((iRam1019cb7c != 0) && (lvl == iRam1019cb88)) {
		if ((x == iRam1019cb80) && (y == iRam1019cb84)) {
			return 1;
		}
		if ((iVar2 == iRam1019cb80) && (iVar1 == iRam1019cb84)) {
			return 1;
		}
	}
	return 0;
}
