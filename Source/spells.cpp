
int GetManaAmount(int id, int sn)

{
	ulonglong uVar1;
	int iVar2;
	uint uVar3;
	longlong lVar4;
	int iVar5;
	ulonglong uVar6;
	int iVar7;
	ulonglong uVar8;

	id = id * 0x55ec;
	lVar4 = 0;
	iVar5 = 0;
	uVar1 = (longlong) * (char *)((int)plr + id + sn + 0xc1) + (longlong) * (char *)((int)plr + id + 0x5570) + -1;
	if ((longlong)uVar1 < 0) {
		uVar1 = 0;
	}
	iVar2 = sn * 0x38;
	uVar3 = (uint)uVar1;
	if (0 < (int)uVar3) {
		uVar6 = (ulonglong)(uVar3 >> 3);
		uVar8 = uVar1;
		if (uVar3 >> 3 != 0) {
			do {
				lVar4 = lVar4 + (ulonglong) * (byte *)(iVar2 + 0x1010efc4) * 8;
				iVar5 = (int)lVar4;
				uVar6 = uVar6 - 1;
			} while (uVar6 != 0);
			uVar8 = uVar1 & 7;
			if (uVar8 == 0)
				goto LAB_100a50e4;
		}
		do {
			lVar4 = lVar4 + (ulonglong) * (byte *)(iVar2 + 0x1010efc4);
			iVar5 = (int)lVar4;
			uVar8 = uVar8 - 1;
		} while (uVar8 != 0);
	}
LAB_100a50e4:
	if (sn == 1) {
		iVar5 = iVar5 >> 1;
	}
	if ((sn == 0x20) && (0 < (int)uVar3)) {
		iVar7 = (int)(uint) * (byte *)(iVar2 + 0x1010efa1) >> 3;
		iVar5 = 0;
		if (0 < (int)uVar3) {
			uVar6 = (ulonglong)(uVar3 >> 3);
			uVar8 = uVar1;
			iVar5 = 0;
			if (uVar3 >> 3 != 0) {
				do {
					iVar5 = iVar5 + iVar7 * 8;
					uVar6 = uVar6 - 1;
				} while (uVar6 != 0);
				uVar8 = uVar1 & 7;
				if (uVar8 == 0)
					goto LAB_100a5158;
			}
			do {
				iVar5 = iVar5 + iVar7;
				uVar8 = uVar8 - 1;
			} while (uVar8 != 0);
		}
	}
LAB_100a5158:
	if (*(byte *)(iVar2 + 0x1010efa1) == 0xff) {
		iVar7 = (*(uint *)((int)plr + id + 0x1a4) & 0xff) - iVar5;
	} else {
		iVar7 = (uint) * (byte *)(iVar2 + 0x1010efa1) - iVar5;
	}
	if (sn == 2) {
		iVar7 = ((uint)bRam1010f011 + (int)*(char *)((int)plr + id + 0x1b4) * 2) - iVar5;
	}
	if (sn == 0x22) {
		iVar7 = ((uint)bRam1010f011 + (int)*(char *)((int)plr + id + 0x1b4) * 2) - iVar5;
	}
	iVar7 = iVar7 * 0x40;
	if ((sn == 0x20) && (0 < (longlong)uVar1)) {
		uVar8 = (ulonglong)(uVar3 >> 3);
		if (uVar3 >> 3 != 0) {
			do {
				uVar8 = uVar8 - 1;
			} while (uVar8 != 0);
			uVar1 = uVar1 & 7;
			if (uVar1 == 0)
				goto LAB_100a5238;
		}
		do {
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
	}
LAB_100a5238:
	if (*(char *)((int)plr + id + 0x15c) == '\x01') {
		iVar7 = iVar7 - (iVar7 >> 2);
	}
	if (iVar7 >> 6 < (int)(uint) * (byte *)(iVar2 + 0x1010efc5)) {
		iVar7 = (uint) * (byte *)(iVar2 + 0x1010efc5) << 6;
	}
	iVar7 = iVar7 * (100 - (int)*(char *)((int)plr + id + 0x5571));
	uVar3 = iVar7 / 100 + (iVar7 >> 0x1f);
	return (int)(uVar3 + (uVar3 >> 0x1f));
}

void UseMana(int id, int sn)

{
	char cVar1;
	undefined4 *puVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar4 = 0x100f8fd0;
	if (id == myplr) {
		iVar3 = id * 0x55ec;
		cVar1 = *(char *)((int)plr + iVar3 + 0xa8);
		if (cVar1 == '\x02') {
			RemoveScroll(id);
		} else {
			if (cVar1 < '\x02') {
				if ((cVar1 != '\0') && (-1 < cVar1)) {
					iVar5 = GetManaAmount(id, sn);
					puVar2 = *(undefined4 **)(iVar4 + -0x76f4);
					*(int *)((int)plr + iVar3 + 0x1a8) = *(int *)((int)plr + iVar3 + 0x1a8) - iVar5;
					*(int *)((int)plr + iVar3 + 0x1a0) = *(int *)((int)plr + iVar3 + 0x1a0) - iVar5;
					*puVar2 = 1;
				}
			} else {
				if ((cVar1 != '\x04') && (cVar1 < '\x04')) {
					UseStaffCharge(id);
				}
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL CheckSpell(int id, int sn, char st, BOOL manaonly)

{
	int iVar1;
	BOOL BVar2;
	int iVar3;

	iVar1 = 0x100f8fd0;
	if ((manaonly == 0) && (_DAT_1012861c != 1)) {
		return 0;
	}
	if (st == '\0') {
		BVar2 = 1;
	} else {
		iVar3 = GetSpellLevel(id, sn);
		if (iVar3 < 1) {
			BVar2 = 0;
		} else {
			iVar3 = GetManaAmount(id, sn);
			if (*(int *)(*(int *)(iVar1 + -0x77a8) + id * 0x55ec + 0x1a8) < iVar3) {
				BVar2 = 0;
			} else {
				BVar2 = 1;
			}
		}
	}
	return BVar2;
}

void CastSpell(int id, int spl, int sx, int sy, int dx, int dy, int caster, int spllvl)

{
	char *pcVar1;
	char micaster;
	int iVar2;
	undefined *puVar3;
	int midir;
	int midam;
	int spllvl_00;

	micaster = (char)caster;
	if (caster == 1) {
		midir = *(int *)(id * 0xe8 + 0x10151a78);
	} else {
		if ((caster < 1) && (-1 < caster)) {
			midir = *(int *)((int)plr + id * 0x55ec + 0x70);
			micaster = '\0';
			if (spl == 6) {
				midir = *(int *)((int)plr + id * 0x55ec + 0x1d8);
			}
		}
	}
	puVar3 = &DAT_1010efa0 + spl * 0x38;
	iVar2 = 0;
	while ((puVar3[0x21] != 0 && (iVar2 < 3))) {
		AddMissile(sx, sy, dx, dy, midir, (uint)(byte)puVar3[0x21], micaster, id, midam, spllvl_00);
		puVar3 = puVar3 + 1;
		iVar2 = iVar2 + 1;
	}
	pcVar1 = (char *)(spl * 0x38 + 0x1010efc1);
	if (*pcVar1 == '\n') {
		UseMana(id, 7);
	}
	if (*pcVar1 == '4') {
		UseMana(id, 0x1e);
		iVar2 = (spllvl >> 1) + 3;
		while (0 < iVar2) {
			AddMissile(sx, sy, dx, dy, midir, 0x34, micaster, id, midam, spllvl_00);
			iVar2 = iVar2 + -1;
		}
	}
	return;
}

void PlacePlayer(int pnum)

{
	bool bVar1;
	undefined8 uVar2;
	int iVar3;
	BOOL BVar4;
	int iVar5;
	uint uVar6;
	int *piVar7;
	int *piVar8;
	int iVar9;
	int y;
	int x;
	int iVar10;

	uVar2 = 0x100f8fd0;
	iVar10 = pnum * 0x55ec;
	if ((uint)currlevel == *(uint *)((int)plr + iVar10 + 0x34)) {
		piVar8 = (int *)&DAT_1010e9ac;
		uVar6 = 0;
		piVar7 = (int *)&DAT_1010e9d0;
		do {
			x = *(int *)((int)plr + iVar10 + 0x38) + *piVar8;
			y = *(int *)((int)plr + iVar10 + 0x3c) + *piVar7;
			BVar4 = PosOkPlayer(pnum, x, y);
			if (BVar4 != 0)
				break;
			uVar6 = uVar6 + 1;
			piVar7 = piVar7 + 1;
			piVar8 = piVar8 + 1;
		} while (uVar6 < 8);
		BVar4 = PosOkPlayer(pnum, x, y);
		iVar3 = (int)uVar2;
		if (BVar4 == 0) {
			bVar1 = false;
			iVar9 = 1;
			while ((iVar3 = (int)uVar2, iVar9 < 0x32 && (!bVar1))) {
				iVar3 = -iVar9;
				while ((iVar3 <= iVar9 && (!bVar1))) {
					y = iVar3 + *(int *)((int)plr + iVar10 + 0x3c);
					iVar5 = -iVar9;
					while ((iVar5 <= iVar9 && (!bVar1))) {
						x = iVar5 + *(int *)((int)plr + iVar10 + 0x38);
						BVar4 = PosOkPlayer(pnum, x, y);
						if (BVar4 != 0) {
							bVar1 = true;
						}
						iVar5 = iVar5 + 1;
					}
					iVar3 = iVar3 + 1;
				}
				iVar9 = iVar9 + 1;
			}
		}
		piVar8 = *(int **)(iVar3 + -0x7680);
		*(int *)((int)plr + iVar10 + 0x38) = x;
		piVar7 = *(int **)(iVar3 + -0x77ac);
		*(int *)((int)plr + iVar10 + 0x3c) = y;
		*(char *)(*piVar8 + x * 0x70 + y) = (char)pnum + '\x01';
		if (pnum == *piVar7) {
			piVar8 = *(int **)(iVar3 + -0x77b4);
			**(int **)(iVar3 + -0x77b0) = x;
			*piVar8 = y;
		}
	}
	return;
}

void DoResurrect(int pnum, int rid)

{
	int *piVar1;
	int sx;
	undefined4 *puVar2;
	int iVar3;
	int val;
	int sy;
	int midam;
	int spllvl;

	iVar3 = 0x100f8fd0;
	if ((char)rid != -1) {
		sy = *(int *)((int)plr + rid * 0x55ec + 0x3c);
		sx = *(int *)((int)plr + rid * 0x55ec + 0x38);
		iVar3 = 0x100f8fd0;
		AddMissile(sx, sy, sx, sy, 0, 0x3e, '\0', pnum, midam, spllvl);
	}
	if (pnum == myplr) {
		NewCursor(1);
	}
	if ((char)rid != -1) {
		sy = rid * 0x55ec;
		piVar1 = (int *)((int)plr + sy + 0x194);
		if (*piVar1 == 0) {
			if (rid == myplr) {
				**(undefined4 **)(iVar3 + -0x75cc) = 0;
				gamemenu_off();
				puVar2 = *(undefined4 **)(iVar3 + -0x76f4);
				**(undefined4 **)(iVar3 + -0x76f0) = 1;
				*puVar2 = 1;
			}
			ClrPlrPath(rid);
			*(undefined4 *)((int)plr + sy + 0x20) = 0xffffffff;
			*(undefined *)((int)plr + sy + 0x139) = 0;
			PlacePlayer(rid);
			sx = *(int *)((int)plr + sy + 400);
			val = 0x280;
			if (sx < 0x280) {
				val = sx;
			}
			SetPlayerHitPoints(rid, val);
			*(int *)((int)plr + sy + 0x18c) = *piVar1 - (*(int *)((int)plr + sy + 0x198) - *(int *)((int)plr + sy + 400));
			*(undefined4 *)((int)plr + sy + 0x1a8) = 0;
			*(int *)((int)plr + sy + 0x1a0) = *(int *)((int)plr + sy + 0x1a8) - (*(int *)((int)plr + sy + 0x1ac) - *(int *)((int)plr + sy + 0x1a4));
			CalcPlrInv(rid, 1);
			if ((uint) * *(byte **)(iVar3 + -0x77e4) == *(uint *)((int)plr + sy + 0x34)) {
				StartStand(rid, *(int *)((int)plr + sy + 0x70));
			} else {
				((PlayerStruct *)((int)plr + sy))->_pmode = 0;
			}
		}
	}
	return;
}

void DoHealOther(int pnum, int rid)

{
	char cVar1;
	undefined8 uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int *piVar6;

	uVar2 = 0x100f8fd0;
	if (pnum == myplr) {
		NewCursor(1);
	}
	if ((char)rid != -1) {
		rid = rid * 0x55ec;
		piVar6 = (int *)((int)plr + rid + 0x194);
		if (*(int *)((int)plr + rid + 0x194) >> 6 != 0) {
			iVar3 = random('9', 10);
			iVar3 = (iVar3 + 1) * 0x40;
			iVar5 = 0;
			while (iVar5 < (int)*(char *)((int)plr + pnum * 0x55ec + 0x1b4)) {
				iVar4 = random('9', 4);
				iVar5 = iVar5 + 1;
				iVar3 = iVar3 + (iVar4 + 1) * 0x40;
			}
			iVar5 = 0;
			while (true) {
				iVar4 = GetSpellLevel(pnum, 0x22);
				if (iVar4 <= iVar5)
					break;
				iVar4 = random('9', 6);
				iVar5 = iVar5 + 1;
				iVar3 = iVar3 + (iVar4 + 1) * 0x40;
			}
			cVar1 = *(char *)((int)plr + pnum * 0x55ec + 0x15c);
			if (cVar1 == '\0') {
				iVar3 = iVar3 << 1;
			}
			if (cVar1 == '\x01') {
				iVar3 = iVar3 + (iVar3 >> 1);
			}
			*piVar6 = *piVar6 + iVar3;
			iVar5 = *(int *)((int)plr + rid + 0x198);
			if (iVar5 < *piVar6) {
				*piVar6 = iVar5;
			}
			*(int *)((int)plr + rid + 0x18c) = *(int *)((int)plr + rid + 0x18c) + iVar3;
			piVar6 = (int *)((int)plr + rid + 0x18c);
			iVar3 = *(int *)((int)plr + rid + 400);
			if (iVar3 < *piVar6) {
				*piVar6 = iVar3;
			}
			**(undefined4 **)((int)uVar2 + -0x76f0) = 1;
		}
	}
	return;
}
