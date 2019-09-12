
void sync_one_monster(void)

{
	short sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	short *psVar6;
	int iVar7;
	int *piVar8;

	iVar7 = 0;
	piVar8 = (int *)&DAT_10151708;
	while (iVar7 < nummonsters) {
		iVar2 = *piVar8;
		iVar5 = iVar2 * 0xe8;
		iVar3 = abs(*(int *)((int)plr + myplr * 0x55ec + 0x3c) - *(int *)(iVar5 + 0x10151a54));
		iVar4 = abs(*(int *)((int)plr + myplr * 0x55ec + 0x38) - *(int *)(iVar5 + 0x10151a50));
		iVar2 = iVar2 * 2;
		psVar6 = (short *)(&DAT_101ab64c + iVar2);
		*psVar6 = (short)iVar4 + (short)iVar3;
		if (*(char *)(iVar5 + 0x10151ad4) == '\0') {
			*psVar6 = *psVar6 + 0x1000;
		} else {
			sVar1 = *(short *)(&DAT_101ab4bc + iVar2);
			if (sVar1 != 0) {
				*(short *)(&DAT_101ab4bc + iVar2) = sVar1 + -1;
			}
		}
		piVar8 = piVar8 + 1;
		iVar7 = iVar7 + 1;
	}
	return;
}

void sync_monster_pos(TSyncMonster *p, int ndx)

{
	ushort uVar1;
	int iVar2;
	BYTE BVar3;
	int iVar4;
	int iVar5;
	undefined2 uVar6;
	ushort *puVar7;
	int iVar8;

	iVar4 = 0x100f8fd0;
	iVar8 = ndx * 0xe8;
	p->_mndx = (BYTE)ndx;
	p->_mx = (BYTE) * (undefined4 *)(iVar8 + 0x10151a50);
	p->_my = (BYTE) * (undefined4 *)(iVar8 + 0x10151a54);
	iVar5 = encode_enemy(ndx);
	iVar2 = *(int *)(iVar4 + -0x56a4);
	p->_menemy = (BYTE)iVar5;
	puVar7 = (ushort *)(iVar2 + ndx * 2);
	uVar1 = *puVar7;
	BVar3 = (BYTE)uVar1;
	if (0xff < uVar1) {
		BVar3 = -1;
	}
	p->_mdelta = BVar3;
	uVar6 = 0xffff;
	*puVar7 = 0xffff;
	if (*(char *)(iVar8 + 0x10151ad4) != '\0') {
		uVar6 = 0xfffe;
	}
	*(undefined2 *)(*(int *)(iVar4 + -0x56a8) + ndx * 2) = uVar6;
	return;
}

BOOL sync_monster_active(TSyncMonster *p)

{
	int iVar1;
	ulonglong uVar2;
	int ndx;
	int *piVar3;
	ulonglong uVar4;

	ndx = -1;
	uVar4 = 0xffffffffffffffff;
	uVar2 = (ulonglong)(uint)nummonsters;
	piVar3 = (int *)&DAT_10151708;
	if (0 < nummonsters) {
		do {
			iVar1 = *piVar3 * 2;
			if (((ulonglong) * (ushort *)(&DAT_101ab64c + iVar1) < (uVar4 & 0xffffffff)) && (*(ushort *)(&DAT_101ab4bc + iVar1) < 0xfffe)) {
				uVar4 = (ulonglong) * (ushort *)(&DAT_101ab64c + iVar1);
				ndx = *piVar3;
			}
			piVar3 = piVar3 + 1;
			uVar2 = uVar2 - 1;
		} while (uVar2 != 0);
	}
	if (ndx != -1) {
		sync_monster_pos(p, ndx);
	}
	return (BOOL)(uint)(ndx != -1);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL sync_monster_active2(TSyncMonster *p)

{
	int ndx;
	ushort uVar1;
	int iVar2;

	uVar1 = 0xfffe;
	ndx = -1;
	iVar2 = 0;
	while (iVar2 < nummonsters) {
		if (nummonsters <= _DAT_100f4490) {
			_DAT_100f4490 = 0;
		}
		if (*(ushort *)(&DAT_101ab4bc + *(int *)(&DAT_10151708 + _DAT_100f4490 * 4) * 2) < uVar1) {
			ndx = *(int *)(&DAT_10151708 + _DAT_100f4490 * 4);
			uVar1 = *(ushort *)(&DAT_101ab4bc + *(int *)(&DAT_10151708 + _DAT_100f4490 * 4) * 2);
		}
		iVar2 = iVar2 + 1;
		_DAT_100f4490 = _DAT_100f4490 + 1;
	}
	if (ndx != -1) {
		sync_monster_pos(p, ndx);
	}
	return (BOOL)(uint)(ndx != -1);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SyncPlrInv(TSyncHeader *pHdr)

{
	int iVar1;
	int iVar2;

	if (_DAT_1013d984 < 1) {
		pHdr->bItemI = -1;
	} else {
		if (_DAT_1013d984 <= _DAT_100f448c) {
			_DAT_100f448c = 0;
		}
		iVar1 = _DAT_100f448c * 4;
		iVar2 = *(int *)(&DAT_1013d788 + iVar1) * 0x170;
		_DAT_100f448c = _DAT_100f448c + 1;
		pHdr->bItemI = (BYTE) * (int *)(&DAT_1013d788 + iVar1);
		pHdr->bItemX = (BYTE) * (undefined4 *)(iVar2 + 0x1013d994);
		pHdr->bItemY = (BYTE) * (undefined4 *)(iVar2 + 0x1013d998);
		pHdr->wItemIndx = (WORD) * (undefined4 *)(iVar2 + 0x1013daf0);
		if (*(int *)(iVar2 + 0x1013daf0) == 0x17) {
			pHdr->wItemCI = (ushort)((int)*(char *)(iVar2 + 0x1013d9cc) << 8) | (short)*(char *)(iVar2 + 0x1013d9cd);
			pHdr->dwItemSeed = (int)*(char *)(iVar2 + 0x1013d9d1) | (int)*(char *)(iVar2 + 0x1013d9d0) << 8 | (int)*(char *)(iVar2 + 0x1013d9ce) << 0x18 | (int)*(char *)(iVar2 + 0x1013d9cf) << 0x10;
			pHdr->bItemId = *(BYTE *)(iVar2 + 0x1013d9d2);
			pHdr->bItemDur = *(BYTE *)(iVar2 + 0x1013d9d3);
			pHdr->bItemMDur = *(BYTE *)(iVar2 + 0x1013d9d4);
			pHdr->bItemCh = *(BYTE *)(iVar2 + 0x1013d9d5);
			pHdr->bItemMCh = *(BYTE *)(iVar2 + 0x1013d9d6);
			pHdr->wItemVal = (ushort) * (undefined4 *)(iVar2 + 0x1013da4c) | (ushort)((int)*(char *)(iVar2 + 0x1013d9d7) << 8) | ((short)*(undefined4 *)(iVar2 + 0x1013da48) + -0x13) * 0x40;
			pHdr->dwItemBuff = (int)*(char *)(iVar2 + 0x1013d9db) | (int)*(char *)(iVar2 + 0x1013d9da) << 8 | (int)*(char *)(iVar2 + 0x1013d9d8) << 0x18 | (int)*(char *)(iVar2 + 0x1013d9d9) << 0x10;
		} else {
			pHdr->wItemCI = *(WORD *)(iVar2 + 0x1013d98c);
			pHdr->dwItemSeed = *(DWORD *)(&DAT_1013d988 + iVar2);
			pHdr->bItemId = (BYTE) * (undefined4 *)(iVar2 + 0x1013d9c0);
			pHdr->bItemDur = (BYTE) * (undefined4 *)(iVar2 + 0x1013da74);
			pHdr->bItemMDur = (BYTE) * (undefined4 *)(iVar2 + 0x1013da78);
			pHdr->bItemCh = (BYTE) * (undefined4 *)(iVar2 + 0x1013da6c);
			pHdr->bItemMCh = (BYTE) * (undefined4 *)(iVar2 + 0x1013da70);
			if (*(int *)(iVar2 + 0x1013daf0) == 0) {
				pHdr->wItemVal = (WORD) * (undefined4 *)(iVar2 + 0x1013da4c);
			}
		}
	}
	iVar1 = myplr * 0x55ec + _DAT_100f4488 * 0x170;
	if (*(int *)((int)plr + iVar1 + 0x4a0) == -1) {
		pHdr->bPInvLoc = -1;
	} else {
		pHdr->bPInvLoc = (BYTE)_DAT_100f4488;
		pHdr->wPInvIndx = (WORD) * (undefined4 *)((int)plr + iVar1 + 0x600);
		pHdr->wPInvCI = *(WORD *)((int)plr + iVar1 + 0x49c);
		pHdr->dwPInvSeed = *(DWORD *)((int)plr + iVar1 + 0x498);
		pHdr->bPInvId = (BYTE) * (undefined4 *)((int)plr + iVar1 + 0x4d0);
	}
	pHdr->wLen = CONCAT11(*(undefined *)((int)&pHdr->wLen + 1), *(undefined *)&pHdr->wLen);
	pHdr->wItemIndx = CONCAT11(*(undefined *)((int)&pHdr->wItemIndx + 1), *(undefined *)&pHdr->wItemIndx);
	pHdr->wItemCI = CONCAT11(*(undefined *)((int)&pHdr->wItemCI + 1), *(undefined *)&pHdr->wItemCI);
	pHdr->dwItemSeed = (uint) * (byte *)((int)&pHdr->dwItemSeed + 3) << 0x18 | (uint) * (byte *)((int)&pHdr->dwItemSeed + 2) << 0x10 | (uint) * (byte *)((int)&pHdr->dwItemSeed + 1) << 8 | (uint) * (byte *)&pHdr->dwItemSeed;
	pHdr->wItemVal = CONCAT11(*(undefined *)((int)&pHdr->wItemVal + 1), *(undefined *)&pHdr->wItemVal);
	pHdr->dwItemBuff = (uint) * (byte *)((int)&pHdr->dwItemBuff + 3) << 0x18 | (uint) * (byte *)((int)&pHdr->dwItemBuff + 2) << 0x10 | (uint) * (byte *)((int)&pHdr->dwItemBuff + 1) << 8 | (uint) * (byte *)&pHdr->dwItemBuff;
	pHdr->wPInvIndx = CONCAT11(*(undefined *)((int)&pHdr->wPInvIndx + 1), *(undefined *)&pHdr->wPInvIndx);
	pHdr->wPInvCI = CONCAT11(*(undefined *)((int)&pHdr->wPInvCI + 1), *(undefined *)&pHdr->wPInvCI);
	pHdr->dwPInvSeed = (uint) * (byte *)((int)&pHdr->dwPInvSeed + 3) << 0x18 | (uint) * (byte *)((int)&pHdr->dwPInvSeed + 2) << 0x10 | (uint) * (byte *)((int)&pHdr->dwPInvSeed + 1) << 8 | (uint) * (byte *)&pHdr->dwPInvSeed;
	if (_DAT_100f4488 + 1 < 7) {
		_DAT_100f4488 = _DAT_100f4488 + 1;
		return;
	}
	_DAT_100f4488 = 0;
	return;
}

DWORD sync_all_monsters(BYTE *pbBuf, DWORD dwMaxLen)

{
	int iVar1;
	int iVar2;
	TSyncMonster *p;

	if ((0 < nummonsters) && (0x2a < dwMaxLen)) {
		*pbBuf = '#';
		dwMaxLen = dwMaxLen - 0x26;
		pbBuf[1] = currlevel;
		*(undefined2 *)(pbBuf + 2) = 0;
		p = (TSyncMonster *)(pbBuf + 0x26);
		SyncPlrInv((TSyncHeader *)pbBuf);
		sync_one_monster();
		iVar2 = 0;
		while ((iVar2 < nummonsters && (4 < dwMaxLen))) {
			iVar1 = 0;
			if (iVar2 < 2) {
				iVar1 = sync_monster_active2(p);
			}
			if (iVar1 == 0) {
				iVar1 = sync_monster_active(p);
			}
			if (iVar1 == 0) {
				return dwMaxLen;
			}
			*(ushort *)(pbBuf + 2) = CONCAT11(pbBuf[3], pbBuf[2]);
			*(short *)(pbBuf + 2) = *(short *)(pbBuf + 2) + 5;
			p = p + 1;
			dwMaxLen = dwMaxLen - 5;
			iVar2 = iVar2 + 1;
			*(ushort *)(pbBuf + 2) = CONCAT11(pbBuf[3], pbBuf[2]);
		}
	}
	return dwMaxLen;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sync_monster(int pnum, TSyncMonster *p)

{
	byte bVar1;
	uint *puVar2;
	int mdir;
	int iVar4;
	ulonglong uVar3;
	BOOL BVar5;
	uint *puVar6;
	int iVar7;

	bVar1 = p->_mndx;
	if (*(int *)((uint)bVar1 * 0xe8 + 0x10151ac8) != 0) {
		iVar7 = 0;
		puVar6 = (uint *)&DAT_10151708;
		while ((iVar7 < nummonsters && ((uint)bVar1 != *puVar6))) {
			puVar6 = puVar6 + 1;
			iVar7 = iVar7 + 1;
		}
		iVar7 = (uint)bVar1 * 0xe8;
		puVar6 = (uint *)(iVar7 + 0x10151a54);
		mdir = abs(*(int *)((int)plr + myplr * 0x55ec + 0x3c) - *puVar6);
		puVar2 = (uint *)(iVar7 + 0x10151a50);
		iVar4 = abs(*(int *)((int)plr + myplr * 0x55ec + 0x38) - *puVar2);
		uVar3 = (longlong)iVar4 + (longlong)mdir;
		if (0xff < (uVar3 & 0xffffffff)) {
			uVar3 = 0xff;
		}
		if (((ulonglong)p->_mdelta <= (uVar3 & 0xffffffff)) && (((uVar3 & 0xffffffff) != (ulonglong)p->_mdelta || (pnum <= myplr)))) {
			if (((uint)p->_mx != *(uint *)(iVar7 + 0x10151a58)) || ((uint)p->_my != *(uint *)(iVar7 + 0x10151a5c))) {
				mdir = *(int *)(iVar7 + 0x10151a34);
				if ((mdir != 0xe) && (mdir != 0xf)) {
					mdir = abs(*puVar2 - (uint)p->_mx);
					iVar4 = abs(*puVar6 - (uint)p->_my);
					if ((mdir < 3) && (iVar4 < 3)) {
						mdir = *(int *)(iVar7 + 0x10151a34);
						if ((mdir < 1) || (3 < mdir)) {
							mdir = GetDirection(*puVar2, *puVar6, (uint)p->_mx, (uint)p->_my);
							BVar5 = DirOK((uint)bVar1, mdir);
							if (BVar5 != 0) {
								M_ClearSquares((uint)bVar1);
								*(short *)(_DAT_1012f1b4 + *puVar2 * 0xe0 + *puVar6 * 2) = (ushort)bVar1 + 1;
								M_WalkDir((uint)bVar1, mdir);
								*(undefined *)(iVar7 + 0x10151ad4) = 0xff;
							}
						}
					} else {
						if (*(short *)(_DAT_1012f1b4 + (uint)p->_mx * 0xe0 + (uint)p->_my * 2) == 0) {
							M_ClearSquares((uint)bVar1);
							*(short *)(_DAT_1012f1b4 + (uint)p->_mx * 0xe0 + (uint)p->_my * 2) = (ushort)bVar1 + 1;
							*puVar2 = (uint)p->_mx;
							*puVar6 = (uint)p->_my;
							decode_enemy((uint)bVar1, (uint)p->_menemy);
							mdir = GetDirection((uint)p->_mx, (uint)p->_my, (uint) * (byte *)(iVar7 + 0x10151a80),
							    (uint) * (byte *)(iVar7 + 0x10151a81));
							M_StartStand((uint)bVar1, mdir);
							*(undefined *)(iVar7 + 0x10151ad4) = 0xff;
						}
					}
					decode_enemy((uint)bVar1, (uint)p->_menemy);
				}
			}
		}
	}
	return;
}

DWORD sync_update(int pnum, BYTE *pbBuf)

{
	int iVar1;
	DWORD DVar2;
	ushort uVar3;
	TSyncMonster *p;

	iVar1 = 0x100f8fd0;
	p = (TSyncMonster *)(pbBuf + 0x26);
	*(ushort *)(pbBuf + 2) = CONCAT11(pbBuf[3], pbBuf[2]);
	*(ushort *)(pbBuf + 9) = CONCAT11(pbBuf[10], pbBuf[9]);
	*(ushort *)(pbBuf + 0xb) = CONCAT11(pbBuf[0xc], pbBuf[0xb]);
	*(uint *)(pbBuf + 0xd) = (uint)pbBuf[0x10] << 0x18 | (uint)pbBuf[0xf] << 0x10 | (uint)pbBuf[0xe] << 8 | (uint)pbBuf[0xd];
	*(ushort *)(pbBuf + 0x16) = CONCAT11(pbBuf[0x17], pbBuf[0x16]);
	*(uint *)(pbBuf + 0x18) = (uint)pbBuf[0x1b] << 0x18 | (uint)pbBuf[0x1a] << 0x10 | (uint)pbBuf[0x19] << 8 | (uint)pbBuf[0x18];
	*(ushort *)(pbBuf + 0x1d) = CONCAT11(pbBuf[0x1e], pbBuf[0x1d]);
	*(ushort *)(pbBuf + 0x1f) = CONCAT11(pbBuf[0x20], pbBuf[0x1f]);
	*(uint *)(pbBuf + 0x21) = (uint)pbBuf[0x24] << 0x18 | (uint)pbBuf[0x23] << 0x10 | (uint)pbBuf[0x22] << 8 | (uint)pbBuf[0x21];
	if (*pbBuf != '#') {
		iVar1 = 0x100f8fd0;
		app_fatal("bad sync command");
	}
	if (**(char **)(iVar1 + -0x72bc) == '\x01') {
		DVar2 = (uint) * (ushort *)(pbBuf + 2) + 0x26;
	} else {
		if (pnum == **(int **)(iVar1 + -0x77ac)) {
			DVar2 = (uint) * (ushort *)(pbBuf + 2) + 0x26;
		} else {
			uVar3 = *(ushort *)(pbBuf + 2);
			while (4 < uVar3) {
				if (currlevel == pbBuf[1]) {
					sync_monster(pnum, p);
				}
				delta_sync_monster(p, pbBuf[1]);
				p = p + 1;
				uVar3 = uVar3 - 5;
			}
			DVar2 = (uint) * (ushort *)(pbBuf + 2) + 0x26;
		}
	}
	return DVar2;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sync_init(void)

{
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	_DAT_100f4490 = myplr << 4;
	FillMemory(0xbc, 0x90, 0xff, 0xbc, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffcb, in_stack_ffffffcf,
	    local_2c);
	return;
}
