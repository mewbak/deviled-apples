
void GetDamageAmt(int i, int *mind, int *maxd)

{
	ulonglong uVar1;
	ulonglong uVar2;
	longlong lVar3;
	ulonglong uVar4;
	uint uVar5;
	longlong lVar6;
	int iVar7;

	iVar7 = myplr * 0x55ec;
	uVar4 = (longlong) * (char *)((int)plr + iVar7 + i + 0xc1) + (longlong) * (char *)((int)plr + iVar7 + 0x5570);
	if (0x24 < (uint)i) {
		return;
	}
	uVar5 = (uint)uVar4;
	switch (i) {
	case 0:
		return;
	case 1:
		*mind = (*(int *)((int)plr + iVar7 + 0x168) >> 3) + uVar5 + 1;
		*maxd = (*(int *)((int)plr + myplr * 0x55ec + 0x168) >> 3) + uVar5 + 10;
		return;
	case 2:
		*mind = (int)*(char *)((int)plr + iVar7 + 0x1b4) + uVar5 + 1;
		if (*(char *)((int)plr + myplr * 0x55ec + 0x15c) == '\0') {
			*mind = *mind << 1;
		}
		if (*(char *)((int)plr + myplr * 0x55ec + 0x15c) == '\x01') {
			*mind = *mind + (*mind >> 1);
		}
		*maxd = 10;
		iVar7 = 0;
		while (iVar7 < (int)*(char *)((int)plr + myplr * 0x55ec + 0x1b4)) {
			iVar7 = iVar7 + 1;
			*maxd = *maxd + 4;
		}
		lVar6 = 0;
		if (0 < (int)uVar5) {
			if ((8 < (int)uVar5) && (uVar2 = (ulonglong)(uVar5 - 1 >> 3), 0 < (int)(uVar5 - 8))) {
				do {
					lVar6 = lVar6 + 8;
					*maxd = *maxd + 6;
					*maxd = *maxd + 6;
					*maxd = *maxd + 6;
					*maxd = *maxd + 6;
					*maxd = *maxd + 6;
					*maxd = *maxd + 6;
					*maxd = *maxd + 6;
					*maxd = *maxd + 6;
					uVar2 = uVar2 - 1;
				} while (uVar2 != 0);
			}
			lVar3 = uVar4 - lVar6;
			if ((int)lVar6 < (int)uVar5) {
				do {
					*maxd = *maxd + 6;
					lVar3 = lVar3 + -1;
				} while (lVar3 != 0);
			}
		}
		if (*(char *)((int)plr + myplr * 0x55ec + 0x15c) == '\0') {
			*maxd = *maxd << 1;
		}
		if (*(char *)((int)plr + myplr * 0x55ec + 0x15c) == '\x01') {
			*maxd = *maxd + (*maxd >> 1);
		}
		*mind = -1;
		*maxd = -1;
		return;
	case 3:
		*mind = 2;
		*maxd = (int)*(char *)((int)plr + myplr * 0x55ec + 0x1b4) + 2;
		return;
	case 4:
		*mind = (int)*(char *)((int)plr + iVar7 + 0x1b4);
		if (0 < (longlong)uVar4) {
			uVar2 = (ulonglong)(uVar5 >> 3);
			if (uVar5 >> 3 != 0) {
				do {
					*mind = *mind + (*mind >> 3);
					*mind = *mind + (*mind >> 3);
					*mind = *mind + (*mind >> 3);
					*mind = *mind + (*mind >> 3);
					*mind = *mind + (*mind >> 3);
					*mind = *mind + (*mind >> 3);
					*mind = *mind + (*mind >> 3);
					*mind = *mind + (*mind >> 3);
					uVar2 = uVar2 - 1;
				} while (uVar2 != 0);
				uVar4 = uVar4 & 7;
				if (uVar4 == 0)
					goto LAB_1005c508;
			}
			do {
				*mind = *mind + (*mind >> 3);
				uVar4 = uVar4 - 1;
			} while (uVar4 != 0);
		}
	LAB_1005c508:
		*mind = *mind + (*mind >> 1);
		*maxd = *mind << 1;
		return;
	default:
		*mind = -1;
		*maxd = -1;
		return;
	case 6:
		*mind = ((int)*(char *)((int)plr + iVar7 + 0x1b4) + 2) * 4 >> 1;
		*maxd = ((int)*(char *)((int)plr + myplr * 0x55ec + 0x1b4) + 0x14) * 4 >> 1;
		return;
	case 0xc:
		*mind = ((int)*(char *)((int)plr + iVar7 + 0x1b4) + 2) * 2;
		if (0 < (longlong)uVar4) {
			uVar1 = (ulonglong)(uVar5 >> 3);
			uVar2 = uVar4;
			if (uVar5 >> 3 != 0) {
				do {
					*mind = *mind + (*mind >> 3);
					*mind = *mind + (*mind >> 3);
					*mind = *mind + (*mind >> 3);
					*mind = *mind + (*mind >> 3);
					*mind = *mind + (*mind >> 3);
					*mind = *mind + (*mind >> 3);
					*mind = *mind + (*mind >> 3);
					*mind = *mind + (*mind >> 3);
					uVar1 = uVar1 - 1;
				} while (uVar1 != 0);
				uVar2 = uVar4 & 7;
				if (uVar2 == 0)
					goto LAB_1005c64c;
			}
			do {
				*mind = *mind + (*mind >> 3);
				uVar2 = uVar2 - 1;
			} while (uVar2 != 0);
		}
	LAB_1005c64c:
		*maxd = ((int)*(char *)((int)plr + myplr * 0x55ec + 0x1b4) + 0x14) * 2;
		if ((longlong)uVar4 < 1) {
			return;
		}
		uVar2 = (ulonglong)(uVar5 >> 3);
		if (uVar5 >> 3 != 0) {
			do {
				*maxd = *maxd + (*maxd >> 3);
				*maxd = *maxd + (*maxd >> 3);
				*maxd = *maxd + (*maxd >> 3);
				*maxd = *maxd + (*maxd >> 3);
				*maxd = *maxd + (*maxd >> 3);
				*maxd = *maxd + (*maxd >> 3);
				*maxd = *maxd + (*maxd >> 3);
				*maxd = *maxd + (*maxd >> 3);
				uVar2 = uVar2 - 1;
			} while (uVar2 != 0);
			uVar4 = uVar4 & 7;
			if (uVar4 == 0) {
				return;
			}
		}
		do {
			*maxd = *maxd + (*maxd >> 3);
			uVar4 = uVar4 - 1;
		} while (uVar4 != 0);
		return;
	case 0xd:
		*mind = ((int)*(char *)((int)plr + iVar7 + 0x1b4) >> 1) + 1;
		if (0 < (longlong)uVar4) {
			uVar1 = (ulonglong)(uVar5 >> 3);
			uVar2 = uVar4;
			if (uVar5 >> 3 != 0) {
				do {
					*mind = *mind + (*mind >> 3);
					*mind = *mind + (*mind >> 3);
					*mind = *mind + (*mind >> 3);
					*mind = *mind + (*mind >> 3);
					*mind = *mind + (*mind >> 3);
					*mind = *mind + (*mind >> 3);
					*mind = *mind + (*mind >> 3);
					*mind = *mind + (*mind >> 3);
					uVar1 = uVar1 - 1;
				} while (uVar1 != 0);
				uVar2 = uVar4 & 7;
				if (uVar2 == 0)
					goto LAB_1005c7f8;
			}
			do {
				*mind = *mind + (*mind >> 3);
				uVar2 = uVar2 - 1;
			} while (uVar2 != 0);
		}
	LAB_1005c7f8:
		*maxd = ((int)*(char *)((int)plr + myplr * 0x55ec + 0x1b4) >> 1) + 10;
		if ((longlong)uVar4 < 1) {
			return;
		}
		uVar2 = (ulonglong)(uVar5 >> 3);
		if (uVar5 >> 3 != 0) {
			do {
				*maxd = *maxd + (*maxd >> 3);
				*maxd = *maxd + (*maxd >> 3);
				*maxd = *maxd + (*maxd >> 3);
				*maxd = *maxd + (*maxd >> 3);
				*maxd = *maxd + (*maxd >> 3);
				*maxd = *maxd + (*maxd >> 3);
				*maxd = *maxd + (*maxd >> 3);
				*maxd = *maxd + (*maxd >> 3);
				uVar2 = uVar2 - 1;
			} while (uVar2 != 0);
			uVar4 = uVar4 & 7;
			if (uVar4 == 0) {
				return;
			}
		}
		do {
			*maxd = *maxd + (*maxd >> 3);
			uVar4 = uVar4 - 1;
		} while (uVar4 != 0);
		return;
	case 0xe:
		*mind = 4;
		*maxd = ((int)*(char *)((int)plr + myplr * 0x55ec + 0x1b4) + 2) * 2;
		return;
	case 0xf:
		*mind = ((int)*(char *)((int)plr + iVar7 + 0x1b4) + 1) * 6;
		*maxd = ((int)*(char *)((int)plr + myplr * 0x55ec + 0x1b4) + 10) * 6;
		return;
	case 0x12:
		break;
	case 0x14:
		*mind = 2;
		*mind = *mind + (*mind >> 1);
		*maxd = (int)*(char *)((int)plr + myplr * 0x55ec + 0x1b4) + 4;
		*maxd = *maxd + (*maxd >> 1);
		return;
	case 0x15:
		*mind = 0xb;
		*maxd = 0x11;
		return;
	case 0x18:
		iVar7 = 0;
		*mind = 0;
		while (iVar7 < (int)*(char *)((int)plr + myplr * 0x55ec + 0x1b4)) {
			iVar7 = iVar7 + 1;
			*mind = *mind + 1;
		}
		iVar7 = 0;
		*maxd = 0;
		while (iVar7 < (int)*(char *)((int)plr + myplr * 0x55ec + 0x1b4)) {
			iVar7 = iVar7 + 1;
			*maxd = *maxd + 6;
		}
		return;
	case 0x1d:
		*mind = ((int)*(char *)((int)plr + iVar7 + 0x1b4) + 2) * 2;
		if (0 < (longlong)uVar4) {
			uVar1 = (ulonglong)(uVar5 >> 3);
			uVar2 = uVar4;
			if (uVar5 >> 3 != 0) {
				do {
					*mind = *mind + (*mind >> 3);
					*mind = *mind + (*mind >> 3);
					*mind = *mind + (*mind >> 3);
					*mind = *mind + (*mind >> 3);
					*mind = *mind + (*mind >> 3);
					*mind = *mind + (*mind >> 3);
					*mind = *mind + (*mind >> 3);
					*mind = *mind + (*mind >> 3);
					uVar1 = uVar1 - 1;
				} while (uVar1 != 0);
				uVar2 = uVar4 & 7;
				if (uVar2 == 0)
					goto LAB_1005ccb8;
			}
			do {
				*mind = *mind + (*mind >> 3);
				uVar2 = uVar2 - 1;
			} while (uVar2 != 0);
		}
	LAB_1005ccb8:
		*maxd = ((int)*(char *)((int)plr + myplr * 0x55ec + 0x1b4) + 0x14) * 2;
		if ((longlong)uVar4 < 1) {
			return;
		}
		uVar2 = (ulonglong)(uVar5 >> 3);
		if (uVar5 >> 3 != 0) {
			do {
				*maxd = *maxd + (*maxd >> 3);
				*maxd = *maxd + (*maxd >> 3);
				*maxd = *maxd + (*maxd >> 3);
				*maxd = *maxd + (*maxd >> 3);
				*maxd = *maxd + (*maxd >> 3);
				*maxd = *maxd + (*maxd >> 3);
				*maxd = *maxd + (*maxd >> 3);
				*maxd = *maxd + (*maxd >> 3);
				uVar2 = uVar2 - 1;
			} while (uVar2 != 0);
			uVar4 = uVar4 & 7;
			if (uVar4 == 0) {
				return;
			}
		}
		do {
			*maxd = *maxd + (*maxd >> 3);
			uVar4 = uVar4 - 1;
		} while (uVar4 != 0);
		return;
	case 0x1e:
		*mind = 1;
		*maxd = (*(int *)((int)plr + myplr * 0x55ec + 0x168) >> 2) + 1;
		return;
	case 0x1f:
		*mind = (int)*(char *)((int)plr + iVar7 + 0x1b4) + 9;
		*maxd = (int)*(char *)((int)plr + myplr * 0x55ec + 0x1b4) + 0x12;
		return;
	case 0x22:
		*mind = (int)*(char *)((int)plr + iVar7 + 0x1b4) + uVar5 + 1;
		if (*(char *)((int)plr + myplr * 0x55ec + 0x15c) == '\0') {
			*mind = *mind << 1;
		}
		if (*(char *)((int)plr + myplr * 0x55ec + 0x15c) == '\x01') {
			*mind = *mind + (*mind >> 1);
		}
		*maxd = 10;
		iVar7 = 0;
		while (iVar7 < (int)*(char *)((int)plr + myplr * 0x55ec + 0x1b4)) {
			iVar7 = iVar7 + 1;
			*maxd = *maxd + 4;
		}
		lVar6 = 0;
		if (0 < (int)uVar5) {
			if ((8 < (int)uVar5) && (uVar2 = (ulonglong)(uVar5 - 1 >> 3), 0 < (int)(uVar5 - 8))) {
				do {
					lVar6 = lVar6 + 8;
					*maxd = *maxd + 6;
					*maxd = *maxd + 6;
					*maxd = *maxd + 6;
					*maxd = *maxd + 6;
					*maxd = *maxd + 6;
					*maxd = *maxd + 6;
					*maxd = *maxd + 6;
					*maxd = *maxd + 6;
					uVar2 = uVar2 - 1;
				} while (uVar2 != 0);
			}
			lVar3 = uVar4 - lVar6;
			if ((int)lVar6 < (int)uVar5) {
				do {
					*maxd = *maxd + 6;
					lVar3 = lVar3 + -1;
				} while (lVar3 != 0);
			}
		}
		if (*(char *)((int)plr + myplr * 0x55ec + 0x15c) == '\0') {
			*maxd = *maxd << 1;
		}
		if (*(char *)((int)plr + myplr * 0x55ec + 0x15c) == '\x01') {
			*maxd = *maxd + (*maxd >> 1);
		}
		*mind = -1;
		*maxd = -1;
		return;
	case 0x23:
		iVar7 = *(int *)((int)plr + iVar7 + 0x168);
		*mind = ((iVar7 >> 1) - (iVar7 >> 3)) + uVar5 * 3;
		*maxd = *mind;
		return;
	}
	*mind = (int)*(char *)((int)plr + iVar7 + 0x1b4) + 5 >> 1;
	if (0 < (longlong)uVar4) {
		uVar1 = (ulonglong)(uVar5 >> 3);
		uVar2 = uVar4;
		if (uVar5 >> 3 != 0) {
			do {
				*mind = *mind + (*mind >> 3);
				*mind = *mind + (*mind >> 3);
				*mind = *mind + (*mind >> 3);
				*mind = *mind + (*mind >> 3);
				*mind = *mind + (*mind >> 3);
				*mind = *mind + (*mind >> 3);
				*mind = *mind + (*mind >> 3);
				*mind = *mind + (*mind >> 3);
				uVar1 = uVar1 - 1;
			} while (uVar1 != 0);
			uVar2 = uVar4 & 7;
			if (uVar2 == 0)
				goto LAB_1005ca18;
		}
		do {
			*mind = *mind + (*mind >> 3);
			uVar2 = uVar2 - 1;
		} while (uVar2 != 0);
	}
LAB_1005ca18:
	*mind = *mind * 5;
	*maxd = (int)*(char *)((int)plr + myplr * 0x55ec + 0x1b4) + 0x1e >> 1;
	if (0 < (longlong)uVar4) {
		uVar2 = (ulonglong)(uVar5 >> 3);
		if (uVar5 >> 3 != 0) {
			do {
				*maxd = *maxd + (*maxd >> 3);
				*maxd = *maxd + (*maxd >> 3);
				*maxd = *maxd + (*maxd >> 3);
				*maxd = *maxd + (*maxd >> 3);
				*maxd = *maxd + (*maxd >> 3);
				*maxd = *maxd + (*maxd >> 3);
				*maxd = *maxd + (*maxd >> 3);
				*maxd = *maxd + (*maxd >> 3);
				uVar2 = uVar2 - 1;
			} while (uVar2 != 0);
			uVar4 = uVar4 & 7;
			if (uVar4 == 0)
				goto LAB_1005cb00;
		}
		do {
			*maxd = *maxd + (*maxd >> 3);
			uVar4 = uVar4 - 1;
		} while (uVar4 != 0);
	}
LAB_1005cb00:
	*maxd = *maxd * 5;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL CheckBlock(int fx, int fy, int tx, int ty)

{
	int iVar1;
	BOOL BVar2;

	BVar2 = 0;
	while ((fx != tx || (fy != ty))) {
		iVar1 = GetDirection(fx, fy, tx, ty);
		fx = fx + *(int *)(&DAT_10107c10 + iVar1 * 4);
		fy = fy + *(int *)(&DAT_10107c30 + iVar1 * 4);
		if ((&DAT_10130b33)[(int)*(short *)(_DAT_1012f1d4 + fx * 0xe0 + fy * 2)] != '\0') {
			BVar2 = 1;
		}
	}
	return BVar2;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FindClosest(int sx, int sy, int rad)

{
	short sVar1;
	undefined *puVar2;
	undefined4 *puVar3;
	undefined **ppuVar4;
	BOOL BVar5;
	undefined **ppuVar6;
	int tx;
	undefined4 *puVar7;
	int ty;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	int *piVar8;
	undefined8 unaff_r24;
	char *pcVar9;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	ulonglong uVar10;
	undefined8 unaff_r29;
	int iVar11;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	longlong lVar12;
	undefined4 auStack128[3];
	int local_74[19];
	undefined4 local_28;
	undefined4 uStack36;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	local_28 = (undefined4)((ulonglong)unaff_r22 >> 0x20);
	uStack36 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	lVar12 = 9;
	puVar3 = auStack128;
	ppuVar4 = &PTR_LAB_10107cdc;
	do {
		ppuVar6 = ppuVar4;
		puVar7 = puVar3;
		puVar2 = ppuVar6[3];
		*(undefined **)(puVar7 + 2) = ppuVar6[2];
		*(undefined **)(puVar7 + 3) = puVar2;
		lVar12 = lVar12 + -1;
		puVar3 = puVar7 + 2;
		ppuVar4 = ppuVar6 + 2;
	} while (lVar12 != 0);
	*(undefined **)(puVar7 + 4) = ppuVar6[4];
	if (0x13 < rad) {
		rad = 0x13;
	}
	piVar8 = local_74;
	iVar11 = 1;
	do {
		if (rad <= iVar11) {
			return -1;
		}
		uVar10 = (ulonglong)(byte)(&DAT_1012054c)[*piVar8];
		pcVar9 = (char *)(*piVar8 + 0x1012054d);
		while (0 < (int)uVar10) {
			ty = sy + (int)pcVar9[1];
			if ((((0 < (longlong)sx + (longlong)*pcVar9) && (tx = (int)((longlong)sx + (longlong)*pcVar9), tx < 0x70)) && (0 < ty)) && (((ty < 0x70 && (sVar1 = *(short *)(_DAT_1012f1b4 + tx * 0xe0 + ty * 2), 0 < sVar1)) && (BVar5 = CheckBlock(sx, sy, tx, ty), BVar5 == 0)))) {
				return (int)sVar1 + -1;
			}
			pcVar9 = pcVar9 + 2;
			uVar10 = uVar10 - 1;
		}
		piVar8 = piVar8 + 1;
		iVar11 = iVar11 + 1;
	} while (true);
}

int GetSpellLevel(int id, int sn)

{
	int iVar1;

	if (id == myplr) {
		iVar1 = (int)*(char *)((int)plr + id * 0x55ec + sn + 0xc1) + (int)*(char *)((int)plr + id * 0x55ec + 0x5570);
	} else {
		iVar1 = 1;
	}
	if (-1 < iVar1) {
		return iVar1;
	}
	return 0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int GetDirection8(int x1, int y1, int x2, int y2)

{
	byte bVar1;
	undefined4 uVar2;
	int iVar3;
	int iVar4;
	uint uVar5;
	undefined4 *puVar6;
	undefined4 *puVar7;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	longlong lVar8;
	undefined2 local_128;
	undefined local_126;
	undefined2 local_125;
	undefined local_123;
	undefined2 local_122;
	undefined local_120;
	undefined2 local_11f;
	undefined local_11d;
	byte local_11c[264];
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
	lVar8 = 0x20;
	puVar7 = (undefined4 *)((int)&local_125 + 1);
	puVar6 = (undefined4 *)0x10107d28;
	do {
		uVar2 = puVar6[3];
		puVar7[2] = puVar6[2];
		puVar7[3] = uVar2;
		lVar8 = lVar8 + -1;
		puVar7 = puVar7 + 2;
		puVar6 = puVar6 + 2;
	} while (lVar8 != 0);
	local_11f = _DAT_100f4218;
	local_122 = _DAT_100f421b;
	local_125 = _DAT_100f421e;
	local_128 = _DAT_100f4221;
	local_11d = DAT_100f421a;
	local_120 = DAT_100f421d;
	local_123 = DAT_100f4220;
	local_126 = DAT_100f4223;
	iVar3 = abs(x2 - x1);
	if (0xf < iVar3) {
		iVar3 = 0xf;
	}
	iVar4 = abs(y2 - y1);
	if (0xf < iVar4) {
		iVar4 = 0xf;
	}
	bVar1 = local_11c[iVar4 * 0x10 + iVar3];
	if (x2 < x1) {
		if (y2 < y1) {
			uVar5 = (uint) * (byte *)((int)&local_11f + (uint)bVar1);
		} else {
			uVar5 = (uint) * (byte *)((int)&local_125 + (uint)bVar1 + 3);
		}
	} else {
		if (y2 < y1) {
			uVar5 = (uint) * (byte *)((int)&local_125 + (uint)bVar1);
		} else {
			uVar5 = (uint) * (byte *)((int)&local_128 + (uint)bVar1);
		}
	}
	return (int)uVar5;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int GetDirection16(int x1, int y1, int x2, int y2)

{
	byte bVar1;
	undefined4 uVar2;
	int iVar3;
	int iVar4;
	uint uVar5;
	undefined4 *puVar6;
	undefined4 *puVar7;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	longlong lVar8;
	undefined4 local_138;
	undefined local_134;
	undefined4 local_133;
	undefined local_12f;
	undefined4 local_12e;
	undefined local_12a;
	undefined4 local_129;
	undefined local_125;
	byte local_124[272];
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
	lVar8 = 0x20;
	puVar7 = (undefined4 *)((int)&local_12e + 2);
	puVar6 = (undefined4 *)0x10107e28;
	do {
		uVar2 = puVar6[3];
		puVar7[2] = puVar6[2];
		puVar7[3] = uVar2;
		lVar8 = lVar8 + -1;
		puVar7 = puVar7 + 2;
		puVar6 = puVar6 + 2;
	} while (lVar8 != 0);
	local_129 = _DAT_10107f30;
	local_125 = uRam10107f34;
	local_12e = _DAT_10107f35;
	local_12a = uRam10107f39;
	local_133 = _DAT_10107f3a;
	local_12f = uRam10107f3e;
	local_138 = _DAT_10107f3f;
	local_134 = uRam10107f43;
	iVar3 = abs(x2 - x1);
	if (0xf < iVar3) {
		iVar3 = 0xf;
	}
	iVar4 = abs(y2 - y1);
	if (0xf < iVar4) {
		iVar4 = 0xf;
	}
	bVar1 = local_124[iVar4 * 0x10 + iVar3];
	if (x2 < x1) {
		if (y2 < y1) {
			uVar5 = (uint) * (byte *)((int)&local_12e + (uint)bVar1 + 5);
		} else {
			uVar5 = (uint) * (byte *)((int)&local_12e + (uint)bVar1);
		}
	} else {
		if (y2 < y1) {
			uVar5 = (uint) * (byte *)((int)&local_133 + (uint)bVar1);
		} else {
			uVar5 = (uint) * (byte *)((int)&local_138 + (uint)bVar1);
		}
	}
	return (int)uVar5;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DeleteMissile(int mi, int i)

{
	int iVar1;
	int iVar2;

	iVar2 = 0x100f8fd0;
	if (*(int *)(&DAT_10149b74 + mi * 0xb4) == 0xd) {
		iVar1 = *(int *)(mi * 0xb4 + 0x10149bec);
		iVar2 = 0x100f8fd0;
		if (iVar1 == myplr) {
			iVar2 = 0x100f8fd0;
			NetSendCmd(1, ']');
		}
		*(undefined *)(*(int *)(iVar2 + -0x77a8) + iVar1 * 0x55ec + 0x5594) = 0;
	}
	*(int *)(*(int *)(iVar2 + -0x7150) + (0x7d - _DAT_10149b70) * 4) = mi;
	_DAT_10149b70 = _DAT_10149b70 + -1;
	if ((0 < _DAT_10149b70) && (i != _DAT_10149b70)) {
		*(undefined4 *)(&DAT_1014939c + i * 4) = *(undefined4 *)(&DAT_1014939c + _DAT_10149b70 * 4);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void GetMissileVel(int i, int sx, int sy, int dx, int dy, int v)

{
	double dVar1;
	double dVar2;
	double dVar3;
	double dVar4;

	if ((dx == sx) && (dy == sy)) {
		*(undefined4 *)(i * 0xb4 + 0x10149b88) = 0;
		*(undefined4 *)(i * 0xb4 + 0x10149b8c) = 0;
	} else {
		dVar2 = (double)CONCAT44(0x43300000, ((dx - sx) + (dy - sy)) * 0x200000 ^ 0x80000000) - _DAT_100f4230;
		dVar3 = (double)CONCAT44(0x43300000, ((dx - sx) - (dy - sy)) * 0x200000 ^ 0x80000000) - _DAT_100f4230;
		dVar4 = _DAT_100f4230;
		dVar1 = sqrt(dVar3 * dVar3 + dVar2 * dVar2);
		*(int *)(i * 0xb4 + 0x10149b88) = (int)((((double)CONCAT44(0x43300000, v << 0x10 ^ 0x80000000) - dVar4) * dVar3) / dVar1);
		*(int *)(i * 0xb4 + 0x10149b8c) = (int)((((double)CONCAT44(0x43300000, v << 0xf ^ 0x80000000) - dVar4) * dVar2) / dVar1);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void PutMissile(int i)

{
	int iVar1;
	char *pcVar2;
	int iVar3;
	int iVar4;

	iVar4 = i * 0xb4;
	iVar1 = *(int *)(iVar4 + 0x10149b78);
	iVar3 = *(int *)(iVar4 + 0x10149b7c);
	if ((((iVar1 < 1) || (iVar3 < 1)) || (0x6f < iVar1)) || (0x6f < iVar3)) {
		*(undefined4 *)(iVar4 + 0x10149ba8) = 1;
	}
	if (*(int *)(iVar4 + 0x10149ba8) != 0) {
		return;
	}
	iVar3 = iVar1 * 0x70 + iVar3;
	*(byte *)(_DAT_1012f1bc + iVar3) = *(byte *)(_DAT_1012f1bc + iVar3) | 1;
	pcVar2 = (char *)(_DAT_1012f1a4 + iVar3);
	if (*pcVar2 == '\0') {
		*pcVar2 = (char)i + '\x01';
	} else {
		*pcVar2 = -1;
	}
	if (*(int *)(iVar4 + 0x10149be0) == 0) {
		return;
	}
	_DAT_101491a0 = 1;
	return;
}

void GetMissilePos(int i)

{
	uint uVar1;
	uint uVar2;
	int iVar3;
	ulonglong in_r9;
	longlong lVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	i = i * 0xb4;
	uVar2 = *(int *)(i + 0x10149b98) >> 0x10;
	iVar3 = *(int *)(i + 0x10149b9c) >> 0x10;
	uVar1 = iVar3 * 2;
	lVar4 = (in_r9 & 0xffffffff00000000 | (ulonglong)uVar2) + (ulonglong)uVar1;
	iVar6 = uVar1 - uVar2;
	iVar5 = (int)lVar4;
	if (lVar4 < 0) {
		iVar7 = -(-iVar5 >> 3);
		iVar5 = -(-iVar5 >> 6);
	} else {
		iVar7 = iVar5 >> 3;
		iVar5 = iVar5 >> 6;
	}
	if (iVar6 < 0) {
		iVar8 = -(-iVar6 >> 3);
		iVar6 = -(-iVar6 >> 6);
	} else {
		iVar8 = iVar6 >> 3;
		iVar6 = iVar6 >> 6;
	}
	*(int *)(i + 0x10149b78) = iVar5 + *(int *)(i + 0x10149b90);
	*(int *)(i + 0x10149b7c) = iVar6 + *(int *)(i + 0x10149b94);
	*(int *)(i + 0x10149b80) = uVar2 + (iVar5 - iVar6) * -0x20;
	*(int *)(i + 0x10149b84) = iVar3 + (iVar5 + iVar6) * -0x10;
	ChangeLightOff(*(int *)(i + 0x10149c00), iVar7 + iVar5 * -8, iVar8 + iVar6 * -8);
	return;
}

void MoveMissilePos(int i)

{
	int *piVar1;
	int *piVar2;
	BOOL BVar3;
	int unaff_r27;
	int unaff_r31;

	i = i * 0xb4;
	switch (*(undefined4 *)(i + 0x10149ba0)) {
	case 0:
		unaff_r27 = 1;
		unaff_r31 = 1;
		break;
	case 1:
		unaff_r27 = 1;
		unaff_r31 = 1;
		break;
	case 2:
		unaff_r27 = 0;
		unaff_r31 = 1;
		break;
	case 3:
		unaff_r27 = 0;
		unaff_r31 = 0;
		break;
	case 4:
		unaff_r27 = 0;
		unaff_r31 = 0;
		break;
	case 5:
		unaff_r27 = 0;
		unaff_r31 = 0;
		break;
	case 6:
		unaff_r27 = 1;
		unaff_r31 = 0;
		break;
	case 7:
		unaff_r27 = 1;
		unaff_r31 = 1;
	}
	piVar1 = (int *)(i + 0x10149b78);
	piVar2 = (int *)(i + 0x10149b7c);
	BVar3 = PosOkMonst(*(int *)(i + 0x10149bec), unaff_r27 + *piVar1, unaff_r31 + *piVar2);
	if (BVar3 != 0) {
		*piVar1 = *piVar1 + unaff_r27;
		*piVar2 = *piVar2 + unaff_r31;
		*(int *)(i + 0x10149b80) = *(int *)(i + 0x10149b80) + (unaff_r27 - unaff_r31) * -0x20;
		*(int *)(i + 0x10149b84) = *(int *)(i + 0x10149b84) + (unaff_r27 + unaff_r31) * -0x10;
	}
	return;
}

BOOL MonsterTrapHit(int m, int mindam, int maxdam, int dist, int t, BOOLEAN shift)

{
	uchar uVar1;
	ushort uVar2;
	bool bVar3;
	int iVar4;
	BOOL BVar5;
	int iVar6;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	int *piVar7;
	undefined8 unaff_r29;
	int *piVar8;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	BOOL local_38[4];
	undefined4 local_28;
	undefined4 uStack36;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	local_28 = (undefined4)((ulonglong)unaff_r22 >> 0x20);
	uStack36 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	iVar6 = m * 0xe8;
	bVar3 = false;
	if (*(int *)(iVar6 + 0x10151b04) == 0) {
		piVar7 = (int *)(iVar6 + 0x10151ac8);
		if (*(int *)(iVar6 + 0x10151ac8) >> 6 == 0) {
			local_38[0] = 0;
		} else {
			if ((**(char **)(iVar6 + 0x10151b10) == ' ') && (*(char *)(iVar6 + 0x10151a38) == '\x02')) {
				local_38[0] = 0;
			} else {
				piVar8 = (int *)(iVar6 + 0x10151a34);
				if (*(int *)(iVar6 + 0x10151a34) == 0xe) {
					local_38[0] = 0;
				} else {
					uVar2 = *(ushort *)(iVar6 + 0x10151b00);
					uVar1 = missiledata[t].mResist;
					if (((((uVar2 & 8) == 0) || (uVar1 != '\x03')) && (((uVar2 & 0x10) == 0 || (uVar1 != '\x01')))) && (((uVar2 & 0x20) == 0 || (uVar1 != '\x02')))) {
						if (((((uVar2 & 1) != 0) && (uVar1 == '\x03')) || (((uVar2 & 2) != 0 && (uVar1 == '\x01')))) || (((uVar2 & 4) != 0 && (uVar1 == '\x02')))) {
							bVar3 = true;
						}
						iVar4 = random('D', 100);
						dist = (0x5a - (uint) * (byte *)(iVar6 + 0x10151afe)) - dist;
						if (dist < 5) {
							dist = 5;
						}
						if (0x5f < dist) {
							dist = 0x5f;
						}
						BVar5 = CheckMonsterHit(m, local_38);
						if (BVar5 == 0) {
							if ((iVar4 < dist) || (*piVar8 == 0xf)) {
								iVar6 = random('D', (maxdam - mindam) + 1);
								mindam = mindam + iVar6;
								if (shift == false) {
									mindam = mindam * 0x40;
								}
								if (bVar3) {
									*piVar7 = *piVar7 - (mindam >> 2);
								} else {
									*piVar7 = *piVar7 - mindam;
								}
								if (*piVar7 >> 6 == 0) {
									if (*piVar8 == 0xf) {
										M_StartKill(m, -1);
										*piVar8 = 0xf;
									} else {
										M_StartKill(m, -1);
									}
								} else {
									if (bVar3) {
										PlayEffect(m, 1);
									} else {
										if (*piVar8 == 0xf) {
											if (3 < m) {
												M_StartHit(m, -1, mindam);
											}
											*piVar8 = 0xf;
										} else {
											if (3 < m) {
												M_StartHit(m, -1, mindam);
											}
										}
									}
								}
								local_38[0] = 1;
							} else {
								local_38[0] = 0;
							}
						}
					} else {
						local_38[0] = 0;
					}
				}
			}
		}
	} else {
		local_38[0] = 0;
	}
	return local_38[0];
}

BOOL MonsterMHit(int pnum, int m, int mindam, int maxdam, int dist, int t, BOOLEAN shift)

{
	uchar uVar1;
	char cVar2;
	ushort uVar3;
	uint uVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	BOOL BVar8;
	int iVar9;
	undefined8 unaff_r17;
	int *piVar10;
	undefined8 unaff_r18;
	int *piVar11;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	int iVar12;
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
	BOOL local_48[3];
	undefined4 local_3c;
	undefined4 uStack56;
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

	iVar6 = 0x100f8fd0;
	local_3c = (undefined4)((ulonglong)unaff_r17 >> 0x20);
	uStack56 = (undefined4)((ulonglong)unaff_r18 >> 0x20);
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
	iVar12 = m * 0xe8;
	bVar5 = false;
	if (*(int *)(iVar12 + 0x10151b04) == 0) {
		piVar10 = (int *)(iVar12 + 0x10151ac8);
		if (*(int *)(iVar12 + 0x10151ac8) >> 6 == 0) {
			local_48[0] = 0;
		} else {
			if (((t == 0x35) && (**(char **)(iVar12 + 0x10151b10) != 'n')) && (*(char *)(*(int *)(iVar12 + 0x10151b14) + 0x72) != '\0')) {
				local_48[0] = 0;
			} else {
				if ((**(char **)(iVar12 + 0x10151b10) == ' ') && (*(char *)(iVar12 + 0x10151a38) == '\x02')) {
					local_48[0] = 0;
				} else {
					piVar11 = (int *)(iVar12 + 0x10151a34);
					if (*(int *)(iVar12 + 0x10151a34) == 0xe) {
						local_48[0] = 0;
					} else {
						uVar3 = *(ushort *)(iVar12 + 0x10151b00);
						uVar1 = missiledata[t].mResist;
						if ((((((uVar3 & 8) == 0) || (uVar1 != '\x03')) && (((uVar3 & 0x10) == 0 || (uVar1 != '\x01')))) && (((uVar3 & 0x20) == 0 || (uVar1 != '\x02')))) && (((uVar3 & 0x80) == 0 || (uVar1 != '\x04')))) {
							if (((((uVar3 & 1) != 0) && (uVar1 == '\x03')) || (((uVar3 & 2) != 0 && (uVar1 == '\x01')))) || (((uVar3 & 4) != 0 && (uVar1 == '\x02')))) {
								bVar5 = true;
							}
							iVar7 = random('E', 100);
							if (missiledata[t].mType == '\0') {
								iVar9 = pnum * 0x55ec;
								cVar2 = *(char *)((int)plr + iVar9 + 0x15c);
								dist = (*(int *)((int)plr + iVar9 + 0x170) + *(int *)((int)plr + iVar9 + 0x5554) + (((int)*(char *)((int)plr + iVar9 + 0x1b4) + 0x32) - ((uint) * (byte *)(iVar12 + 0x10151afe) - *(int *)((int)plr + iVar9 + 0x5578)))) - (dist * dist >> 1);
								if (cVar2 == '\x01') {
									dist = dist + 0x14;
								}
								if (cVar2 == '\0') {
									dist = dist + 10;
								}
							} else {
								dist = (*(int *)((int)plr + pnum * 0x55ec + 0x168) + 0x32 + (int)*(char *)(iVar12 + 0x10151af4) * -2) - dist;
								if (*(char *)((int)plr + pnum * 0x55ec + 0x15c) == '\x02') {
									dist = dist + 0x14;
								}
							}
							if (dist < 5) {
								dist = 5;
							}
							if (0x5f < dist) {
								dist = 0x5f;
							}
							if (*piVar11 == 0xf) {
								iVar7 = 0;
							}
							BVar8 = CheckMonsterHit(m, local_48);
							if (BVar8 == 0) {
								if (iVar7 < dist) {
									if (t == 0x3f) {
										uVar4 = *piVar10 / 3 + (*piVar10 >> 0x1f);
										mindam = (int)(uVar4 + (uVar4 >> 0x1f)) >> 6;
									} else {
										iVar7 = random('F', (maxdam - mindam) + 1);
										mindam = mindam + iVar7;
									}
									uVar1 = missiledata[t].mType;
									if (uVar1 == '\0') {
										iVar7 = pnum * 0x55ec;
										iVar9 = mindam * *(int *)((int)plr + iVar7 + 0x5550);
										uVar4 = iVar9 / 100 + (iVar9 >> 0x1f);
										mindam = mindam + uVar4 + (uVar4 >> 0x1f) + *(int *)((int)plr + iVar7 + 0x555c);
										if (*(char *)((int)plr + iVar7 + 0x15c) == '\x01') {
											mindam = mindam + *(int *)((int)plr + iVar7 + 0x184);
										} else {
											mindam = mindam + (*(int *)((int)plr + iVar7 + 0x184) >> 1);
										}
									}
									if (shift == false) {
										mindam = mindam << 6;
									}
									if (bVar5) {
										mindam = mindam >> 2;
									}
									if (pnum == **(int **)(iVar6 + -0x77ac)) {
										*piVar10 = *piVar10 - mindam;
									}
									iVar6 = pnum * 0x55ec;
									uVar4 = *(uint *)((int)plr + iVar6 + 0x5568);
									if ((uVar4 & 8) != 0) {
										*(uint *)(iVar12 + 0x10151ad0) = *(uint *)(iVar12 + 0x10151ad0) | 8;
									}
									if (*piVar10 >> 6 == 0) {
										if (*piVar11 == 0xf) {
											M_StartKill(m, pnum);
											*piVar11 = 0xf;
										} else {
											M_StartKill(m, pnum);
										}
									} else {
										if (bVar5) {
											PlayEffect(m, 1);
										} else {
											if (*piVar11 == 0xf) {
												if (3 < m) {
													M_StartHit(m, pnum, mindam);
												}
												*piVar11 = 0xf;
											} else {
												if ((uVar1 == '\0') && ((uVar4 & 0x800) != 0)) {
													M_GetKnockback(m);
												}
												if (3 < m) {
													M_StartHit(m, pnum, mindam);
												}
											}
										}
									}
									if (*(char *)(iVar12 + 0x10151ad4) == '\0') {
										*(char *)(iVar12 + 0x10151ad4) = -1;
										*(undefined4 *)(iVar12 + 0x10151adc) = *(undefined4 *)((int)plr + iVar6 + 0x38);
										*(undefined4 *)(iVar12 + 0x10151ae0) = *(undefined4 *)((int)plr + iVar6 + 0x3c);
									}
									local_48[0] = 1;
								} else {
									local_48[0] = 0;
								}
							}
						} else {
							local_48[0] = 0;
						}
					}
				}
			}
		}
	} else {
		local_48[0] = 0;
	}
	return local_48[0];
}

BOOL PlayerMHit(int pnum, int m, int dist, int mind, int maxd, int mtype, BOOLEAN shift, int earflag)

{
	int *piVar1;
	char cVar2;
	byte bVar3;
	uint uVar4;
	int iVar5;
	int iVar6;
	BOOL BVar7;
	int dir;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	dir = 0x100f8fd0;
	iVar11 = pnum * 0x55ec;
	piVar1 = (int *)((int)plr + iVar11 + 0x194);
	if (*piVar1 >> 6 == 0) {
		return 0;
	}
	if (*(char *)((int)plr + iVar11 + 0x139) != '\0') {
		return 0;
	}
	if (((*(byte *)((int)plr + iVar11 + 0x11c) & 1) != 0) && (missiledata[mtype].mType == '\0')) {
		return 0;
	}
	iVar5 = random('H', 100);
	if (missiledata[mtype].mType == '\0') {
		iVar10 = *(int *)((int)plr + iVar11 + 0x170);
		uVar4 = iVar10 / 5 + (iVar10 >> 0x1f);
		iVar10 = *(int *)((int)plr + iVar11 + 0x554c) + *(int *)((int)plr + iVar11 + 0x5558) + uVar4 + (uVar4 >> 0x1f);
		if (m == -1) {
			iVar10 = (100 - (iVar10 >> 1)) + dist * -2;
		} else {
			iVar10 = (((uint) * (byte *)(m * 0xe8 + 0x10151af8) + 0x1e) - iVar10) + ((int)*(char *)(m * 0xe8 + 0x10151af4) - (int)*(char *)((int)plr + iVar11 + 0x1b4)) * 2 + dist * -2;
		}
	} else {
		if (m == -1) {
			iVar10 = 0x28;
		} else {
			iVar10 = (int)*(char *)(m * 0xe8 + 0x10151af4) * 2 + 0x28 + (int)*(char *)((int)plr + iVar11 + 0x1b4) * -2 + dist * -2;
		}
	}
	if (iVar10 < 10) {
		iVar10 = 10;
	}
	cVar2 = **(char **)(dir + -0x77e4);
	if ((cVar2 == '\x0e') && (iVar10 < 0x14)) {
		iVar10 = 0x14;
	}
	if ((cVar2 == '\x0f') && (iVar10 < 0x19)) {
		iVar10 = 0x19;
	}
	if ((cVar2 == '\x10') && (iVar10 < 0x1e)) {
		iVar10 = 0x1e;
	}
	iVar6 = ((PlayerStruct *)((int)plr + iVar11))->_pmode;
	if (((iVar6 == 0) || (iVar6 == 4)) && (*(char *)((int)plr + iVar11 + 0x138) != '\0')) {
		iVar6 = random('I', 100);
	} else {
		iVar6 = 100;
	}
	if (shift == true) {
		iVar6 = 100;
	}
	if (mtype == 0x3b) {
		iVar6 = 100;
	}
	if (m == -1) {
		iVar9 = *(int *)((int)plr + iVar11 + 0x188) + *(int *)((int)plr + iVar11 + 0x170);
	} else {
		iVar9 = *(int *)((int)plr + iVar11 + 0x188) + *(int *)((int)plr + iVar11 + 0x170) + ((int)*(char *)(m * 0xe8 + 0x10151af4) - (int)*(char *)((int)plr + iVar11 + 0x1b4)) * -2;
	}
	if (iVar9 < 0) {
		iVar9 = 0;
	}
	if (100 < iVar9) {
		iVar9 = 100;
	}
	bVar3 = missiledata[mtype].mResist;
	if (bVar3 == 2) {
		iVar8 = (int)*(char *)((int)plr + iVar11 + 0x1c7);
	} else {
		if (bVar3 < 2) {
			if (bVar3 != 0) {
				iVar8 = (int)*(char *)((int)plr + iVar11 + 0x1c6);
				goto LAB_1005e300;
			}
		} else {
			if (bVar3 < 5) {
				iVar8 = (int)*(char *)((int)plr + iVar11 + 0x1c5);
				goto LAB_1005e300;
			}
		}
		iVar8 = 0;
	}
LAB_1005e300:
	if (iVar5 < iVar10) {
		if (mtype == 0x3f) {
			uVar4 = *piVar1 / 3 + (*piVar1 >> 0x1f);
			mind = uVar4 + (uVar4 >> 0x1f);
		} else {
			if (shift == false) {
				iVar5 = random('K', ((maxd - mind) + 1) * 0x40);
				mind = mind * 0x40 + iVar5;
				if ((m == -1) && ((*(uint *)((int)plr + iVar11 + 0x5568) & 0x10000000) != 0)) {
					mind = mind >> 1;
				}
				mind = mind + *(int *)((int)plr + iVar11 + 0x556c) * 0x40;
				if (mind < 0x40) {
					mind = 0x40;
				}
			} else {
				iVar5 = random('K', (maxd - mind) + 1);
				mind = mind + iVar5;
				if ((m == -1) && ((*(uint *)((int)plr + iVar11 + 0x5568) & 0x10000000) != 0)) {
					mind = mind >> 1;
				}
				mind = mind + *(int *)((int)plr + iVar11 + 0x556c);
				if (mind < 0x40) {
					mind = 0x40;
				}
			}
		}
		if (iVar8 < 1) {
			if (iVar6 < iVar9) {
				if (m == -1) {
					dir = *(int *)((int)plr + iVar11 + 0x70);
				} else {
					dir = GetDirection(*(int *)((int)plr + iVar11 + 0x38), *(int *)((int)plr + iVar11 + 0x3c),
					    *(int *)(m * 0xe8 + 0x10151a50), *(int *)(m * 0xe8 + 0x10151a54));
				}
				StartPlrBlock(pnum, dir);
				BVar7 = 1;
			} else {
				if (pnum == myplr) {
					*piVar1 = *piVar1 - mind;
					*(int *)((int)plr + iVar11 + 0x18c) = *(int *)((int)plr + iVar11 + 0x18c) - mind;
				}
				dir = *(int *)((int)plr + iVar11 + 0x198);
				if (dir < *piVar1) {
					*piVar1 = dir;
					*(undefined4 *)((int)plr + iVar11 + 0x18c) = *(undefined4 *)((int)plr + iVar11 + 400);
				}
				if (*piVar1 >> 6 == 0) {
					SyncPlrKill(pnum, earflag);
				} else {
					StartPlrHit(pnum, mind, 0);
				}
				BVar7 = 1;
			}
		} else {
			uVar4 = (mind * iVar8) / 100 + (mind * iVar8 >> 0x1f);
			mind = mind - (uVar4 + (uVar4 >> 0x1f));
			if (pnum == myplr) {
				*piVar1 = *piVar1 - mind;
				*(int *)((int)plr + iVar11 + 0x18c) = *(int *)((int)plr + iVar11 + 0x18c) - mind;
			}
			iVar5 = *(int *)((int)plr + iVar11 + 0x198);
			if (iVar5 < *piVar1) {
				*piVar1 = iVar5;
				*(undefined4 *)((int)plr + iVar11 + 0x18c) = *(undefined4 *)((int)plr + iVar11 + 400);
			}
			if (*piVar1 >> 6 == 0) {
				SyncPlrKill(pnum, earflag);
			} else {
				cVar2 = *(char *)((int)plr + iVar11 + 0x15c);
				if (cVar2 == '\0') {
					PlaySfxLoc(0x314, *(int *)((int)plr + iVar11 + 0x38), *(int *)((int)plr + iVar11 + 0x3c));
				} else {
					if (cVar2 == '\x01') {
						PlaySfxLoc(0x2a7, *(int *)((int)plr + iVar11 + 0x38), *(int *)((int)plr + iVar11 + 0x3c));
					} else {
						if (cVar2 == '\x02') {
							PlaySfxLoc(0x240, *(int *)((int)plr + iVar11 + 0x38), *(int *)((int)plr + iVar11 + 0x3c));
						}
					}
				}
				**(undefined4 **)(dir + -0x76f0) = 1;
			}
			BVar7 = 1;
		}
	} else {
		BVar7 = 0;
	}
	return BVar7;
}

BOOL Plr2PlrMHit(int pnum, int p, int mindam, int maxdam, int dist, int mtype, BOOLEAN shift)

{
	byte bVar1;
	char cVar2;
	uint uVar3;
	longlong lVar4;
	int iVar5;
	int iVar6;
	BOOL BVar7;
	int dir;
	int iVar8;
	int iVar9;
	DWORD dwDam;
	int iVar10;

	dir = p * 0x55ec;
	if (*(char *)((int)plr + dir + 0x139) != '\0') {
		return 0;
	}
	if (mtype == 0x35) {
		return 0;
	}
	if (((*(byte *)((int)plr + dir + 0x11c) & 1) != 0) && (missiledata[mtype].mType == '\0')) {
		return 0;
	}
	bVar1 = missiledata[mtype].mResist;
	if (bVar1 == 2) {
		iVar8 = (int)*(char *)((int)plr + dir + 0x1c7);
	} else {
		if (bVar1 < 2) {
			if (bVar1 != 0) {
				iVar8 = (int)*(char *)((int)plr + dir + 0x1c6);
				goto LAB_1005e6a0;
			}
		} else {
			if (bVar1 < 5) {
				iVar8 = (int)*(char *)((int)plr + dir + 0x1c5);
				goto LAB_1005e6a0;
			}
		}
		iVar8 = 0;
	}
LAB_1005e6a0:
	iVar5 = random('E', 100);
	if (missiledata[mtype].mType == '\0') {
		iVar9 = *(int *)((int)plr + dir + 0x170);
		iVar10 = pnum * 0x55ec;
		uVar3 = iVar9 / 5 + (iVar9 >> 0x1f);
		cVar2 = *(char *)((int)plr + iVar10 + 0x15c);
		dist = (*(int *)((int)plr + iVar10 + 0x170) + *(int *)((int)plr + iVar10 + 0x5554) + (((int)*(char *)((int)plr + iVar10 + 0x1b4) + 0x32) - (*(int *)((int)plr + dir + 0x554c) + *(int *)((int)plr + dir + 0x5558) + uVar3 + (uVar3 >> 0x1f)))) - (dist * dist >> 1);
		if (cVar2 == '\x01') {
			dist = dist + 0x14;
		}
		if (cVar2 == '\0') {
			dist = dist + 10;
		}
	} else {
		dist = (*(int *)((int)plr + pnum * 0x55ec + 0x168) + 0x32 + (int)*(char *)((int)plr + dir + 0x1b4) * -2) - dist;
		if (*(char *)((int)plr + pnum * 0x55ec + 0x15c) == '\x02') {
			dist = dist + 0x14;
		}
	}
	if (dist < 5) {
		dist = 5;
	}
	if (0x5f < dist) {
		dist = 0x5f;
	}
	if (iVar5 < dist) {
		iVar5 = ((PlayerStruct *)((int)plr + dir))->_pmode;
		if (((iVar5 == 0) || (iVar5 == 4)) && (*(char *)((int)plr + dir + 0x138) != '\0')) {
			iVar5 = random('I', 100);
		} else {
			iVar5 = 100;
		}
		if (shift == true) {
			iVar5 = 100;
		}
		iVar10 = pnum * 0x55ec;
		lVar4 = ((ulonglong) * (uint *)((int)plr + dir + 0x188) + (ulonglong) * (uint *)((int)plr + dir + 0x170)) - (ulonglong)(uint)(((int)*(char *)((int)plr + iVar10 + 0x1b4) - (int)*(char *)((int)plr + dir + 0x1b4)) * 2);
		iVar9 = (int)lVar4;
		if (lVar4 < 0) {
			iVar9 = 0;
		}
		if (100 < iVar9) {
			iVar9 = 100;
		}
		if (mtype == 0x3f) {
			iVar6 = *(int *)((int)plr + dir + 0x194);
			uVar3 = iVar6 / 3 + (iVar6 >> 0x1f);
			dwDam = uVar3 + (uVar3 >> 0x1f);
		} else {
			iVar6 = random('F', (maxdam - mindam) + 1);
			dwDam = mindam + iVar6;
			if (missiledata[mtype].mType == '\0') {
				iVar6 = dwDam * *(int *)((int)plr + iVar10 + 0x5550);
				uVar3 = iVar6 / 100 + (iVar6 >> 0x1f);
				dwDam = *(int *)((int)plr + iVar10 + 0x555c) + *(int *)((int)plr + iVar10 + 0x184) + dwDam + uVar3 + (uVar3 >> 0x1f);
			}
			if (shift == false) {
				dwDam = dwDam << 6;
			}
		}
		if (missiledata[mtype].mType != '\0') {
			dwDam = (int)dwDam >> 1;
		}
		if (iVar8 < 1) {
			if (iVar5 < iVar9) {
				dir = GetDirection(*(int *)((int)plr + dir + 0x38), *(int *)((int)plr + dir + 0x3c),
				    *(int *)((int)plr + iVar10 + 0x38), *(int *)((int)plr + iVar10 + 0x3c));
				StartPlrBlock(p, dir);
				BVar7 = 1;
			} else {
				if (pnum == myplr) {
					NetSendCmdDamage(1, (BYTE)p, dwDam);
				}
				StartPlrHit(p, dwDam, 0);
				BVar7 = 1;
			}
		} else {
			uVar3 = (int)(dwDam * iVar8) / 100 + ((int)(dwDam * iVar8) >> 0x1f);
			if (pnum == myplr) {
				NetSendCmdDamage(1, (BYTE)p, dwDam - (uVar3 + (uVar3 >> 0x1f)));
			}
			cVar2 = *(char *)((int)plr + iVar10 + 0x15c);
			if (cVar2 == '\0') {
				PlaySfxLoc(0x314, *(int *)((int)plr + iVar10 + 0x38), *(int *)((int)plr + iVar10 + 0x3c));
			} else {
				if (cVar2 == '\x01') {
					PlaySfxLoc(0x2a7, *(int *)((int)plr + iVar10 + 0x38), *(int *)((int)plr + iVar10 + 0x3c));
				} else {
					if (cVar2 == '\x02') {
						PlaySfxLoc(0x240, *(int *)((int)plr + iVar10 + 0x38), *(int *)((int)plr + iVar10 + 0x3c));
					}
				}
			}
			BVar7 = 1;
		}
	} else {
		BVar7 = 0;
	}
	return BVar7;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CheckMissileCol(int i, int mindam, int maxdam, BOOL shift, int mx, int my, BOOLEAN nodel)

{
	char cVar1;
	short sVar2;
	int psfx;
	BOOL BVar3;
	int pnum;
	int pnum_00;
	BOOLEAN shift_00;

	pnum_00 = 0x100f8fd0;
	psfx = 0x100f8fd0;
	i = i * 0xb4;
	shift_00 = SUB41(shift, 0);
	if (*(char *)(i + 0x10149bac) != '\x04') {
		pnum = *(int *)(i + 0x10149bec);
		if (pnum != -1) {
			if (*(int *)(i + 0x10149bf0) == 0) {
				sVar2 = *(short *)(_DAT_1012f1b4 + mx * 0xe0 + my * 2);
				if (sVar2 < 1) {
					if (((sVar2 < 0) && (*(int *)(((int)sVar2 + 1) * -0xe8 + 0x10151a34) == 0xf)) && (psfx = pnum_00, BVar3 = MonsterMHit(pnum, -((int)sVar2 + 1), mindam, maxdam, *(int *)(i + 0x10149bfc), *(int *)(&DAT_10149b74 + i), shift_00), BVar3 != 0)) {
						if (nodel == false) {
							*(undefined4 *)(i + 0x10149be8) = 0;
						}
						*(undefined4 *)(i + 0x10149bf8) = 1;
					}
				} else {
					psfx = pnum_00;
					BVar3 = MonsterMHit(pnum, (int)sVar2 + -1, mindam, maxdam, *(int *)(i + 0x10149bfc),
					    *(int *)(&DAT_10149b74 + i), shift_00);
					if (BVar3 != 0) {
						if (nodel == false) {
							*(undefined4 *)(i + 0x10149be8) = 0;
						}
						*(undefined4 *)(i + 0x10149bf8) = 1;
					}
				}
				cVar1 = *(char *)(_DAT_1012f1b8 + mx * 0x70 + my);
				if ('\0' < cVar1) {
					pnum_00 = *(int *)(i + 0x10149bec);
					pnum = (int)cVar1 + -1;
					if ((pnum != pnum_00) && (BVar3 = Plr2PlrMHit(pnum_00, pnum, mindam, maxdam, *(int *)(i + 0x10149bfc), *(int *)(&DAT_10149b74 + i), shift_00), BVar3 != 0)) {
						if (nodel == false) {
							*(undefined4 *)(i + 0x10149be8) = 0;
						}
						*(undefined4 *)(i + 0x10149bf8) = 1;
					}
				}
			} else {
				if (((((*(uint *)(pnum * 0xe8 + 0x10151ad0) & 0x10) != 0) && (sVar2 = *(short *)(_DAT_1012f1b4 + mx * 0xe0 + my * 2), 0 < sVar2)) && ((*(uint *)((int)sVar2 * 0xe8 + 0x101519e8) & 0x20) != 0)) && (psfx = pnum_00, BVar3 = MonsterTrapHit((int)sVar2 + -1, mindam, maxdam, *(int *)(i + 0x10149bfc), *(int *)(&DAT_10149b74 + i), shift_00), BVar3 != 0)) {
					if (nodel == false) {
						*(undefined4 *)(i + 0x10149be8) = 0;
					}
					*(undefined4 *)(i + 0x10149bf8) = 1;
				}
				cVar1 = *(char *)(_DAT_1012f1b8 + mx * 0x70 + my);
				if (('\0' < cVar1) && (BVar3 = PlayerMHit((int)cVar1 + -1, *(int *)(i + 0x10149bec), *(int *)(i + 0x10149bfc), mindam, maxdam, *(int *)(&DAT_10149b74 + i), shift_00, 0), BVar3 != 0)) {
					if (nodel == false) {
						*(undefined4 *)(i + 0x10149be8) = 0;
					}
					*(undefined4 *)(i + 0x10149bf8) = 1;
				}
			}
			goto LAB_1005edd0;
		}
	}
	sVar2 = *(short *)(_DAT_1012f1b4 + mx * 0xe0 + my * 2);
	if (0 < sVar2) {
		if (*(char *)(i + 0x10149bac) == '\x04') {
			psfx = pnum_00;
			BVar3 = MonsterMHit(*(int *)(i + 0x10149bec), (int)sVar2 + -1, mindam, maxdam, *(int *)(i + 0x10149bfc),
			    *(int *)(&DAT_10149b74 + i), shift_00);
			if (BVar3 != 0) {
				if (nodel == false) {
					*(undefined4 *)(i + 0x10149be8) = 0;
				}
				*(undefined4 *)(i + 0x10149bf8) = 1;
			}
		} else {
			psfx = pnum_00;
			BVar3 = MonsterTrapHit(
			    (int)sVar2 + -1, mindam, maxdam, *(int *)(i + 0x10149bfc), *(int *)(&DAT_10149b74 + i), shift_00);
			if (BVar3 != 0) {
				if (nodel == false) {
					*(undefined4 *)(i + 0x10149be8) = 0;
				}
				*(undefined4 *)(i + 0x10149bf8) = 1;
			}
		}
	}
	cVar1 = *(char *)(_DAT_1012f1b8 + mx * 0x70 + my);
	if (('\0' < cVar1) && (BVar3 = PlayerMHit((int)cVar1 + -1, -1, *(int *)(i + 0x10149bfc), mindam, maxdam, *(int *)(&DAT_10149b74 + i), shift_00, (uint)(*(char *)(i + 0x10149bac) == '\x04')), BVar3 != 0)) {
		if (nodel == false) {
			*(undefined4 *)(i + 0x10149be8) = 0;
		}
		*(undefined4 *)(i + 0x10149bf8) = 1;
	}
LAB_1005edd0:
	cVar1 = *(char *)(**(int **)(psfx + -0x7684) + mx * 0x70 + my);
	if (cVar1 != '\0') {
		if (cVar1 < '\x01') {
			pnum_00 = -((int)cVar1 + 1);
		} else {
			pnum_00 = (int)cVar1 + -1;
		}
		if (*(int *)(pnum_00 * 0x78 + 0x1017e410) == 0) {
			if (*(char *)(pnum_00 * 0x78 + 0x1017e408) == '\x01') {
				BreakObject(-1, pnum_00);
			}
			if (nodel == false) {
				*(undefined4 *)(i + 0x10149be8) = 0;
			}
			*(undefined4 *)(i + 0x10149bf8) = 0;
		}
	}
	if (*(char *)(*(int *)(psfx + -0x7234) + (int)*(short *)(**(int **)(psfx + -0x757c) + mx * 0xe0 + my * 2)) != '\0') {
		if (nodel == false) {
			*(undefined4 *)(i + 0x10149be8) = 0;
		}
		*(undefined4 *)(i + 0x10149bf8) = 0;
	}
	if ((*(int *)(i + 0x10149be8) == 0) && (psfx = *(int *)(*(int *)(psfx + -0x70e8) + *(int *)(&DAT_10149b74 + i) * 0x1c + 0x18), psfx != -1)) {
		PlaySfxLoc(psfx, *(int *)(i + 0x10149b78), *(int *)(i + 0x10149b7c));
	}
	return;
}

void SetMissAnim(int mi, int animtype)

{
	int iVar1;
	undefined4 uVar2;
	undefined *puVar3;

	mi = mi * 0xb4;
	iVar1 = *(int *)(mi + 0x10149ba0);
	*(undefined *)(mi + 0x10149bac) = (char)animtype;
	puVar3 = &DAT_101044fc + animtype * 300;
	*(undefined4 *)(mi + 0x10149bb0) = *(undefined4 *)(animtype * 300 + 0x10104504);
	uVar2 = *(undefined4 *)(puVar3 + iVar1 * 8 + 0x10);
	*(undefined4 *)(mi + 0x10149bb4) = *(undefined4 *)(puVar3 + iVar1 * 8 + 0xc);
	*(undefined4 *)(mi + 0x10149bb8) = uVar2;
	*(uint *)(mi + 0x10149bbc) = (uint)(byte)(puVar3 + iVar1)[0x8c];
	*(uint *)(mi + 0x10149bc0) = (uint)(byte)(puVar3 + iVar1)[0x9c];
	*(undefined4 *)(mi + 0x10149bc4) = *(undefined4 *)(puVar3 + iVar1 * 4 + 0xac);
	*(undefined4 *)(mi + 0x10149bc8) = *(undefined4 *)(puVar3 + iVar1 * 4 + 0xec);
	*(undefined4 *)(mi + 0x10149bcc) = 0;
	*(undefined4 *)(mi + 0x10149bd4) = 1;
	return;
}

void SetMissDir(int mi, int dir)

{
	*(int *)(mi * 0xb4 + 0x10149ba0) = dir;
	SetMissAnim(mi, (uint) * (byte *)(mi * 0xb4 + 0x10149bac));
	return;
}

void LoadMissileGFX(BYTE mi)

{
	int iVar1;
	undefined *puVar3;
	BYTE *pBVar4;
	char cVar5;
	ulonglong uVar2;
	undefined uVar6;
	undefined uVar7;
	undefined8 in_r6;
	undefined uVar8;
	undefined4 in_r7;
	undefined uVar9;
	undefined4 in_r8;
	undefined uVar10;
	undefined4 in_r9;
	undefined uVar11;
	undefined4 in_r10;
	undefined uVar12;
	undefined8 unaff_r27;
	int iVar13;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_fffffeb8;
	undefined uVar14;
	undefined in_stack_fffffebf;
	undefined4 in_stack_fffffecc;
	undefined4 in_stack_fffffed0;
	undefined4 in_stack_fffffed4;
	undefined4 in_stack_fffffed8;
	undefined4 in_stack_fffffedc;
	undefined4 in_stack_fffffee0;
	undefined4 in_stack_fffffee4;
	char acStack280[260];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	uVar14 = (undefined)in_stack_fffffeb8;
	uVar12 = (undefined)in_r10;
	uVar11 = (undefined)in_r9;
	uVar10 = (undefined)in_r8;
	uVar9 = (undefined)in_r7;
	uVar8 = (undefined)in_r6;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	iVar1 = ((int)(char)mi & 0xffU) * 300;
	puVar3 = &DAT_101044fc + iVar1;
	if ((*(uint *)(iVar1 + 0x10104504) & 4) == 0) {
		if (*(char *)(iVar1 + 0x101044fd) == '\x01') {
			wsprintf((int)acStack280, "Missiles\\%s.CL2", *(undefined4 *)(iVar1 + 0x10104500), (int)in_r6, in_r7, in_r8,
			    in_r9, in_r10, in_stack_fffffeb8, in_stack_fffffebf, in_stack_fffffecc, in_stack_fffffed0,
			    in_stack_fffffed4, in_stack_fffffed8, in_stack_fffffedc, in_stack_fffffee0, in_stack_fffffee4);
			if (*(int *)(iVar1 + 0x10104508) == 0) {
				pBVar4 = LoadFileInMem(acStack280, (DWORD *)0x0);
				*(BYTE **)(iVar1 + 0x10104508) = pBVar4;
				*(undefined4 *)(iVar1 + 0x1010450c) = 0;
			}
		} else {
			iVar13 = 0;
			while (iVar13 < (int)(uint) * (byte *)(iVar1 + 0x101044fd)) {
				wsprintf((int)acStack280, "Missiles\\%s%i.CL2", *(undefined4 *)(iVar1 + 0x10104500), iVar13 + 1, in_r7,
				    in_r8, in_r9, in_r10, in_stack_fffffeb8, in_stack_fffffebf, in_stack_fffffecc, in_stack_fffffed0,
				    in_stack_fffffed4, in_stack_fffffed8, in_stack_fffffedc, in_stack_fffffee0, in_stack_fffffee4);
				if (*(int *)(puVar3 + 0xc) == 0) {
					pBVar4 = LoadFileInMem(acStack280, (DWORD *)0x0);
					*(BYTE **)(puVar3 + 0xc) = pBVar4;
					*(undefined4 *)(puVar3 + 0x10) = 0;
				}
				puVar3 = puVar3 + 8;
				iVar13 = iVar13 + 1;
			}
		}
	} else {
		uVar7 = (undefined) * (undefined4 *)(iVar1 + 0x10104500);
		wsprintf((int)acStack280, "Missiles\\%s.CL2", *(undefined4 *)(iVar1 + 0x10104500), (int)in_r6, in_r7, in_r8,
		    in_r9, in_r10, in_stack_fffffeb8, in_stack_fffffebf, in_stack_fffffecc, in_stack_fffffed0,
		    in_stack_fffffed4, in_stack_fffffed8, in_stack_fffffedc, in_stack_fffffee0, in_stack_fffffee4);
		uVar6 = 0;
		pBVar4 = LoadFileInMem(acStack280, (DWORD *)0x0);
		cVar5 = LockMemFile((longlong)(int)pBVar4, uVar6, uVar7, uVar8, uVar9, uVar10, uVar11, uVar12, uVar14);
		iVar13 = 0;
		while (iVar13 < (int)(uint) * (byte *)(iVar1 + 0x101044fd)) {
			*(BYTE **)(puVar3 + 0xc) = pBVar4;
			uVar2 = BESwap_1003cdd0((int)cVar5, iVar13);
			*(int *)(puVar3 + 0x10) = (int)uVar2;
			puVar3 = puVar3 + 8;
			iVar13 = iVar13 + 1;
		}
		UnlockMemFile((char)pBVar4);
	}
	return;
}

void InitMissileGFX(void)

{
	BYTE mi;
	undefined *puVar1;

	puVar1 = &DAT_101044fc;
	mi = '\0';
	while (true) {
		if (puVar1[1] == '\0')
			break;
		if ((*(uint *)(puVar1 + 8) & 1) == 0) {
			LoadMissileGFX(mi);
		}
		puVar1 = puVar1 + 300;
		mi = mi + '\x01';
	}
	return;
}

void FreeMissileGFX(int mi)

{
	int iVar1;
	undefined *puVar2;

	mi = mi * 300;
	puVar2 = &DAT_101044fc + mi;
	if ((*(uint *)(mi + 0x10104504) & 4) == 0) {
		iVar1 = 0;
		while (iVar1 < (int)(uint) * (byte *)(mi + 0x101044fd)) {
			if (*(int *)(puVar2 + 0xc) != 0) {
				MemFreeDbg((int **)(puVar2 + 0xc));
				*(undefined4 *)(puVar2 + 0xc) = 0;
				*(undefined4 *)(puVar2 + 0x10) = 0;
			}
			puVar2 = puVar2 + 8;
			iVar1 = iVar1 + 1;
		}
	} else {
		if (*(int *)(mi + 0x10104508) != 0) {
			MemFreeDbg((int **)(mi + 0x10104508));
			*(undefined4 *)(mi + 0x10104508) = 0;
			*(undefined4 *)(mi + 0x1010450c) = 0;
		}
	}
	return;
}

void FreeMissiles(void)

{
	int mi;
	undefined *puVar1;

	puVar1 = &DAT_101044fc;
	mi = 0;
	while (true) {
		if (puVar1[1] == '\0')
			break;
		if ((*(uint *)(puVar1 + 8) & 1) == 0) {
			FreeMissileGFX(mi);
		}
		puVar1 = puVar1 + 300;
		mi = mi + 1;
	}
	return;
}

void FreeMissiles2(void)

{
	int mi;
	undefined *puVar1;

	puVar1 = &DAT_101044fc;
	mi = 0;
	while (true) {
		if (puVar1[1] == '\0')
			break;
		if ((*(uint *)(puVar1 + 8) & 1) != 0) {
			FreeMissileGFX(mi);
		}
		puVar1 = puVar1 + 300;
		mi = mi + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void InitMissiles(void)

{
	undefined8 p;
	undefined4 *puVar1;
	undefined4 *puVar2;
	undefined4 *puVar3;
	byte *pbVar4;
	int iVar5;
	int *piVar6;
	int *piVar7;
	longlong lVar8;
	int iVar9;
	int *piVar10;
	longlong lVar11;

	p = 0x100f8fd0;
	p._4_4_ = 0x100f8fd0;
	puVar3 = (undefined4 *)&DAT_10149594;
	piVar7 = (int *)&DAT_1014939c;
	piVar6 = (int *)&DAT_101491a8;
	iVar9 = myplr * 0x55ec;
	*(byte *)((int)plr + iVar9 + 0x11c) = *(byte *)((int)plr + iVar9 + 0x11c) & 0xfe;
	if (*(int *)((int)plr + iVar9 + 0x1cc) == 1) {
		iVar9 = 0;
		piVar10 = piVar7;
		while (p._4_4_ = (int)p, iVar9 < _DAT_10149b70) {
			if ((*(int *)(&DAT_10149b74 + *piVar10 * 0xb4) == 0x27) && (p._4_4_ = *(int *)(*piVar10 * 0xb4 + 0x10149bec), myplr == p._4_4_)) {
				CalcPlrItemVals(p._4_4_, 1);
			}
			piVar10 = piVar10 + 1;
			iVar9 = iVar9 + 1;
		}
	}
	lVar8 = 0;
	_DAT_10149b70 = 0;
	lVar11 = 0xf;
	do {
		iVar9 = (int)lVar8;
		*piVar6 = iVar9;
		*piVar7 = 0;
		piVar6[1] = iVar9 + 1;
		piVar7[1] = 0;
		lVar8 = lVar8 + 8;
		piVar6[2] = iVar9 + 2;
		piVar7[2] = 0;
		piVar6[3] = iVar9 + 3;
		piVar7[3] = 0;
		piVar6[4] = iVar9 + 4;
		piVar7[4] = 0;
		piVar6[5] = iVar9 + 5;
		piVar7[5] = 0;
		piVar6[6] = iVar9 + 6;
		piVar7[6] = 0;
		piVar6[7] = iVar9 + 7;
		piVar6 = piVar6 + 8;
		piVar7[7] = 0;
		piVar7 = piVar7 + 8;
		lVar11 = lVar11 + -1;
	} while (lVar11 != 0);
	iVar9 = (int)lVar8 * 4;
	puVar1 = (undefined4 *)(&DAT_101491a8 + iVar9);
	puVar2 = (undefined4 *)(&DAT_1014939c + iVar9);
	lVar11 = 0x7d - lVar8;
	if ((int)lVar8 < 0x7d) {
		do {
			*puVar1 = (int)lVar8;
			puVar1 = puVar1 + 1;
			lVar8 = lVar8 + 1;
			*puVar2 = 0;
			puVar2 = puVar2 + 1;
			lVar11 = lVar11 + -1;
		} while (lVar11 != 0);
	}
	iVar9 = 0;
	**(undefined4 **)(p._4_4_ + -0x70ec) = 0;
	lVar8 = 0xf;
	do {
		iVar9 = iVar9 + 8;
		*puVar3 = 0xffffffff;
		puVar3[1] = 0;
		puVar3[2] = 0;
		puVar3[3] = 0xffffffff;
		puVar3[4] = 0;
		puVar3[5] = 0;
		puVar3[6] = 0xffffffff;
		puVar3[7] = 0;
		puVar3[8] = 0;
		puVar3[9] = 0xffffffff;
		puVar3[10] = 0;
		puVar3[0xb] = 0;
		puVar3[0xc] = 0xffffffff;
		puVar3[0xd] = 0;
		puVar3[0xe] = 0;
		puVar3[0xf] = 0xffffffff;
		puVar3[0x10] = 0;
		puVar3[0x11] = 0;
		puVar3[0x12] = 0xffffffff;
		puVar3[0x13] = 0;
		puVar3[0x14] = 0;
		puVar3[0x15] = 0xffffffff;
		puVar3[0x16] = 0;
		puVar3[0x17] = 0;
		puVar3 = puVar3 + 0x18;
		lVar8 = lVar8 + -1;
	} while (lVar8 != 0);
	puVar3 = (undefined4 *)(&DAT_10149594 + iVar9 * 0xc);
	p._4_4_ = 0x7d - iVar9;
	if (iVar9 < 0x7d) {
		do {
			*puVar3 = 0xffffffff;
			puVar3[1] = 0;
			puVar3[2] = 0;
			puVar3 = puVar3 + 3;
			p._4_4_ = p._4_4_ + -1;
		} while (p._4_4_ != 0);
	}
	iVar9 = 0;
	do {
		lVar8 = 0xe;
		p._4_4_ = 0;
		do {
			pbVar4 = (byte *)(iVar9 + _DAT_1012f1bc + p._4_4_);
			*pbVar4 = *pbVar4 & 0xfe;
			pbVar4 = (byte *)(iVar9 + _DAT_1012f1bc + p._4_4_ + 0x70);
			*pbVar4 = *pbVar4 & 0xfe;
			pbVar4 = (byte *)(iVar9 + _DAT_1012f1bc + p._4_4_ + 0xe0);
			*pbVar4 = *pbVar4 & 0xfe;
			pbVar4 = (byte *)(iVar9 + _DAT_1012f1bc + p._4_4_ + 0x150);
			*pbVar4 = *pbVar4 & 0xfe;
			pbVar4 = (byte *)(iVar9 + _DAT_1012f1bc + p._4_4_ + 0x1c0);
			*pbVar4 = *pbVar4 & 0xfe;
			pbVar4 = (byte *)(iVar9 + _DAT_1012f1bc + p._4_4_ + 0x230);
			*pbVar4 = *pbVar4 & 0xfe;
			pbVar4 = (byte *)(iVar9 + _DAT_1012f1bc + p._4_4_ + 0x2a0);
			*pbVar4 = *pbVar4 & 0xfe;
			iVar5 = _DAT_1012f1bc + p._4_4_;
			p._4_4_ = p._4_4_ + 0x380;
			pbVar4 = (byte *)(iVar9 + iVar5 + 0x310);
			*pbVar4 = *pbVar4 & 0xfe;
			lVar8 = lVar8 + -1;
		} while (lVar8 != 0);
		iVar9 = iVar9 + 1;
	} while (iVar9 < 0x70);
	return;
}

void AddLArrow(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	char cVar1;
	int dir;

	if ((sx == dx) && (sy == dy)) {
		dx = dx + *(int *)(&DAT_10107c10 + midir * 4);
		dy = dy + *(int *)(&DAT_10107c30 + midir * 4);
	}
	if (mienemy == '\0') {
		id = id * 0x55ec;
		cVar1 = *(char *)((int)plr + id + 0x15c);
		if (cVar1 == '\x01') {
			GetMissileVel(mi, sx, sy, dx, dy, ((int)*(char *)((int)plr + id + 0x1b4) >> 2) + 0x1f);
		} else {
			if (cVar1 == '\0') {
				GetMissileVel(mi, sx, sy, dx, dy, ((int)*(char *)((int)plr + id + 0x1b4) >> 3) + 0x1f);
			} else {
				GetMissileVel(mi, sx, sy, dx, dy, 0x20);
			}
		}
	} else {
		GetMissileVel(mi, sx, sy, dx, dy, 0x20);
	}
	dir = GetDirection16(sx, sy, dx, dy);
	SetMissDir(mi, dir);
	mi = mi * 0xb4;
	*(undefined4 *)(mi + 0x10149be8) = 0x100;
	*(int *)(mi + 0x10149c08) = sx;
	*(int *)(mi + 0x10149c0c) = sy;
	dir = AddLight(sx, sy, 5);
	*(int *)(mi + 0x10149c00) = dir;
	return;
}

void AddArrow(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	char cVar1;
	int v;

	if ((sx == dx) && (sy == dy)) {
		dx = dx + *(int *)(&DAT_10107c10 + midir * 4);
		dy = dy + *(int *)(&DAT_10107c30 + midir * 4);
	}
	if (mienemy == '\0') {
		id = id * 0x55ec;
		v = 0x20;
		if ((*(uint *)((int)plr + id + 0x5568) & 4) != 0) {
			v = random('@', 0x20);
			v = v + 0x10;
		}
		cVar1 = *(char *)((int)plr + id + 0x15c);
		if (cVar1 == '\x01') {
			v = v + ((int)*(char *)((int)plr + id + 0x1b4) + -1 >> 2);
		}
		if (cVar1 == '\0') {
			v = v + ((int)*(char *)((int)plr + id + 0x1b4) + -1 >> 3);
		}
		GetMissileVel(mi, sx, sy, dx, dy, v);
	} else {
		GetMissileVel(mi, sx, sy, dx, dy, 0x20);
	}
	v = GetDirection16(sx, sy, dx, dy);
	*(int *)(mi * 0xb4 + 0x10149bd4) = v + 1;
	*(undefined4 *)(mi * 0xb4 + 0x10149be8) = 0x100;
	return;
}

void GetVileMissPos(int mi, int dx, int dy)

{
	BOOL BVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar4 = 1;
	do {
		iVar3 = -iVar4;
		while (iVar3 <= iVar4) {
			iVar2 = -iVar4;
			while (iVar2 <= iVar4) {
				BVar1 = PosOkPlayer(myplr, dx + iVar2, dy + iVar3);
				if (BVar1 != 0) {
					*(int *)(mi * 0xb4 + 0x10149b78) = dx + iVar2;
					*(int *)(mi * 0xb4 + 0x10149b7c) = dy + iVar3;
					return;
				}
				iVar2 = iVar2 + 1;
			}
			iVar3 = iVar3 + 1;
		}
		iVar4 = iVar4 + 1;
	} while (iVar4 < 0x32);
	*(int *)(mi * 0xb4 + 0x10149b78) = dx;
	*(int *)(mi * 0xb4 + 0x10149b7c) = dy;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddRndTeleport(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	char *pcVar1;
	int *piVar2;
	undefined8 uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	BOOL BVar8;
	int iVar9;

	uVar3 = 0x100f8fd0;
	iVar9 = 0;
	do {
		iVar6 = (int)uVar3;
		iVar9 = iVar9 + 1;
		if (500 < iVar9) {
			iVar4 = 0;
			iVar5 = 0;
			break;
		}
		iVar4 = random(':', 3);
		iVar4 = iVar4 + 4;
		iVar5 = random(':', 3);
		iVar5 = iVar5 + 4;
		iVar6 = random(':', 2);
		if (iVar6 == 1) {
			iVar4 = -iVar4;
		}
		iVar7 = random(':', 2);
		iVar6 = (int)uVar3;
		if (iVar7 == 1) {
			iVar5 = -iVar5;
		}
		iVar7 = (sx + iVar4) * 0xe0 + (sy + iVar5) * 2;
	} while ((((&DAT_10130b33)[(int)*(short *)(_DAT_1012f1d4 + iVar7)] != '\0') || (*(char *)(sy + _DAT_1012f1ac + (sx + iVar4) * 0x70 + iVar5) != '\0')) || (*(short *)(_DAT_1012f1b4 + iVar7) != 0));
	iVar9 = mi * 0xb4;
	pcVar1 = *(char **)(iVar6 + -0x77d8);
	*(undefined4 *)(iVar9 + 0x10149be8) = 2;
	*(undefined4 *)(iVar9 + 0x10149c08) = 0;
	if ((*pcVar1 == '\0') || (**(char **)(iVar6 + -0x77e0) != '\x05')) {
		*(int *)(iVar9 + 0x10149b78) = sx + iVar4;
		*(int *)(iVar9 + 0x10149b7c) = sy + iVar5;
		if (mienemy == '\0') {
			UseMana(id, 10);
		}
		return;
	}
	if ((*(int *)(&DAT_1017e3d4 + ((int)*(char *)(_DAT_1012f1ac + dx * 0x70 + dy) + -1) * 0x78) != 0x54) && (*(int *)(&DAT_1017e3d4 + ((int)*(char *)(_DAT_1012f1ac + dx * 0x70 + dy) + -1) * 0x78) != 0x55)) {
		return;
	}
	piVar2 = *(int **)(iVar6 + -0x77ac);
	*(int *)(iVar9 + 0x10149b78) = dx;
	*(int *)(iVar9 + 0x10149b7c) = dy;
	BVar8 = PosOkPlayer(*piVar2, dx, dy);
	if (BVar8 != 0) {
		return;
	}
	GetVileMissPos(mi, dx, dy);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddFirebolt(int mi, int sx, int sy, int dx, int dy, int midir, char micaster, int id, int dam)

{
	uint uVar1;
	int v;
	int *piVar2;
	ulonglong uVar3;
	uint uVar4;

	if ((sx == dx) && (sy == dy)) {
		dx = dx + *(int *)(&DAT_10107c10 + midir * 4);
		dy = dy + *(int *)(&DAT_10107c30 + midir * 4);
	}
	if (micaster == '\0') {
		uVar4 = 0;
		piVar2 = (int *)&DAT_1014939c;
		uVar3 = (ulonglong)_DAT_10149b70;
		uVar1 = 0;
		if (0 < (int)_DAT_10149b70) {
			do {
				uVar4 = uVar1;
				v = *piVar2 * 0xb4;
				if (((*(int *)(&DAT_10149b74 + v) == 2) && (id == *(int *)(v + 0x10149bec))) && (mi == *(int *)(v + 0x10149c10)))
					break;
				piVar2 = piVar2 + 1;
				uVar4 = uVar4 + 1;
				uVar3 = uVar3 - 1;
				uVar1 = uVar4;
			} while (uVar3 != 0);
		}
		if (uVar4 == _DAT_10149b70) {
			UseMana(id, 1);
		}
		if (id == -1) {
			v = 0x10;
		} else {
			v = *(int *)(mi * 0xb4 + 0x10149ba4) * 2 + 0x10;
			if (0x3e < v) {
				v = 0x3f;
			}
		}
	} else {
		v = 0x1a;
	}
	GetMissileVel(mi, sx, sy, dx, dy, v);
	v = GetDirection16(sx, sy, dx, dy);
	SetMissDir(mi, v);
	mi = mi * 0xb4;
	*(undefined4 *)(mi + 0x10149be8) = 0x100;
	*(int *)(mi + 0x10149c08) = sx;
	*(int *)(mi + 0x10149c0c) = sy;
	v = AddLight(sx, sy, 8);
	*(int *)(mi + 0x10149c00) = v;
	return;
}

void AddMagmaball(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	int iVar1;
	int iVar2;

	GetMissileVel(mi, sx, sy, dx, dy, 0x10);
	iVar1 = mi * 0xb4;
	*(int *)(iVar1 + 0x10149b98) = *(int *)(iVar1 + 0x10149b98) + *(int *)(iVar1 + 0x10149b88) * 3;
	*(int *)(iVar1 + 0x10149b9c) = *(int *)(iVar1 + 0x10149b9c) + *(int *)(iVar1 + 0x10149b8c) * 3;
	GetMissilePos(mi);
	*(undefined4 *)(iVar1 + 0x10149be8) = 0x100;
	*(int *)(iVar1 + 0x10149c08) = sx;
	*(int *)(iVar1 + 0x10149c0c) = sy;
	iVar2 = AddLight(sx, sy, 8);
	*(int *)(iVar1 + 0x10149c00) = iVar2;
	return;
}

void miss_null_33(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	int iVar1;

	GetMissileVel(mi, sx, sy, dx, dy, 0x10);
	iVar1 = mi * 0xb4;
	*(undefined4 *)(iVar1 + 0x10149be8) = 0x100;
	*(int *)(iVar1 + 0x10149c08) = sx;
	*(int *)(iVar1 + 0x10149c0c) = sy;
	PutMissile(mi);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddTeleport(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	ulonglong uVar7;
	int iVar8;
	char *pcVar9;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	int iVar10;
	undefined8 unaff_r26;
	int iVar11;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int local_58[4];
	undefined4 local_48;
	undefined4 local_44;
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
	mi = mi * 0xb4;
	iVar11 = 0;
	local_58[0] = _DAT_10107f64;
	local_58[1] = uRam10107f68;
	local_58[2] = uRam10107f6c;
	local_58[3] = uRam10107f70;
	local_48 = uRam10107f74;
	local_44 = uRam10107f78;
	*(int *)(mi + 0x10149ba8) = 1;
	iVar6 = _DAT_1012f1d4;
	iVar5 = _DAT_1012f1b8;
	iVar4 = _DAT_1012f1b4;
	iVar3 = _DAT_1012f1ac;
	do {
		if (5 < iVar11) {
			if (*(int *)(mi + 0x10149ba8) == 0) {
				UseMana(id, 0x17);
				*(undefined4 *)(mi + 0x10149be8) = 2;
			}
			return;
		}
		uVar7 = (ulonglong)(byte)(&DAT_1012054c)[local_58[iVar11]];
		pcVar9 = (char *)(local_58[iVar11] + 0x1012054d);
		if ((&DAT_1012054c)[local_58[iVar11]] != 0) {
			do {
				iVar10 = dy + (int)pcVar9[1];
				if (0 < (longlong)dx + (longlong)*pcVar9) {
					iVar8 = (int)((longlong)dx + (longlong)*pcVar9);
					if (iVar8 < 0x70) {
						if (0 < iVar10) {
							if (iVar10 < 0x70) {
								iVar1 = iVar8 * 0x70 + iVar10;
								iVar2 = iVar8 * 0xe0 + iVar10 * 2;
								if (((longlong) * (char *)(iVar5 + iVar1) | (longlong) * (char *)(iVar3 + iVar1) | (ulonglong)(byte)(&DAT_10130b33)[(int)*(short *)(iVar6 + iVar2)] | (longlong) * (short *)(iVar4 + iVar2)) == 0) {
									*(int *)(mi + 0x10149b78) = iVar8;
									iVar11 = 6;
									*(int *)(mi + 0x10149b7c) = iVar10;
									*(int *)(mi + 0x10149b90) = iVar8;
									*(int *)(mi + 0x10149b94) = iVar10;
									*(undefined4 *)(mi + 0x10149ba8) = 0;
									break;
								}
							}
						}
					}
				}
				pcVar9 = pcVar9 + 2;
				uVar7 = uVar7 - 1;
			} while (uVar7 != 0);
		}
		iVar11 = iVar11 + 1;
	} while (true);
}

void AddLightball(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	int iVar1;
	undefined4 in_stack_00000038;

	GetMissileVel(mi, sx, sy, dx, dy, 0x10);
	mi = mi * 0xb4;
	*(undefined4 *)(mi + 0x10149bf4) = in_stack_00000038;
	iVar1 = random('?', 8);
	*(int *)(mi + 0x10149bd4) = iVar1 + 1;
	*(undefined4 *)(mi + 0x10149be8) = 0xff;
	if (id < 0) {
		*(int *)(mi + 0x10149c08) = sx;
		*(int *)(mi + 0x10149c0c) = sy;
	} else {
		*(undefined4 *)(mi + 0x10149c08) = *(undefined4 *)((int)plr + id * 0x55ec + 0x38);
		*(undefined4 *)(mi + 0x10149c0c) = *(undefined4 *)((int)plr + id * 0x55ec + 0x3c);
	}
	return;
}

void AddFirewall(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	int *piVar1;
	uint uVar2;
	ulonglong uVar3;
	ulonglong uVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar5 = random('5', 10);
	iVar6 = random('5', 10);
	iVar7 = mi * 0xb4;
	*(int *)(iVar7 + 0x10149bf4) = (iVar6 + iVar5 + 2 + (int)*(char *)((int)plr + id * 0x55ec + 0x1b4)) * 0x10;
	*(int *)(iVar7 + 0x10149bf4) = *(int *)(iVar7 + 0x10149bf4) >> 1;
	GetMissileVel(mi, sx, sy, dx, dy, 0x10);
	piVar1 = (int *)(iVar7 + 0x10149be8);
	*piVar1 = 10;
	uVar2 = *(uint *)(iVar7 + 0x10149ba4);
	uVar3 = (ulonglong)uVar2;
	if (0 < (int)uVar2) {
		uVar4 = (ulonglong)(uVar2 >> 3);
		if (uVar2 >> 3 != 0) {
			do {
				*(int *)(iVar7 + 0x10149be8) = *(int *)(iVar7 + 0x10149be8) + 10;
				*(int *)(iVar7 + 0x10149be8) = *(int *)(iVar7 + 0x10149be8) + 10;
				*(int *)(iVar7 + 0x10149be8) = *(int *)(iVar7 + 0x10149be8) + 10;
				*(int *)(iVar7 + 0x10149be8) = *(int *)(iVar7 + 0x10149be8) + 10;
				*(int *)(iVar7 + 0x10149be8) = *(int *)(iVar7 + 0x10149be8) + 10;
				*(int *)(iVar7 + 0x10149be8) = *(int *)(iVar7 + 0x10149be8) + 10;
				*(int *)(iVar7 + 0x10149be8) = *(int *)(iVar7 + 0x10149be8) + 10;
				*(int *)(iVar7 + 0x10149be8) = *(int *)(iVar7 + 0x10149be8) + 10;
				uVar4 = uVar4 - 1;
			} while (uVar4 != 0);
			uVar3 = uVar3 & 7;
			if ((uVar2 & 7) == 0)
				goto LAB_10060170;
		}
		do {
			*(int *)(iVar7 + 0x10149be8) = *(int *)(iVar7 + 0x10149be8) + 10;
			uVar3 = uVar3 - 1;
		} while (uVar3 != 0);
	}
LAB_10060170:
	*piVar1 = *piVar1 + (*(int *)((int)plr + id * 0x55ec + 0x5574) * *piVar1 >> 7);
	*piVar1 = *piVar1 << 4;
	*(int *)(iVar7 + 0x10149c08) = *piVar1 - *(int *)(iVar7 + 0x10149bc0);
	*(undefined4 *)(iVar7 + 0x10149c0c) = 0;
	return;
}

void AddFireball(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	uint uVar1;
	ulonglong uVar2;
	ulonglong uVar3;
	int iVar4;
	int iVar5;
	int v;
	int iVar6;

	v = 0x100f8fd0;
	if ((sx == dx) && (sy == dy)) {
		dx = dx + *(int *)(&DAT_10107c10 + midir * 4);
		dy = dy + *(int *)(&DAT_10107c30 + midir * 4);
	}
	if (mienemy != '\0') {
		v = 0x10;
		goto LAB_10060364;
	}
	iVar4 = random('<', 10);
	iVar5 = random('<', 10);
	iVar6 = mi * 0xb4;
	*(int *)(iVar6 + 0x10149bf4) = (iVar5 + iVar4 + 2 + (int)*(char *)(*(int *)(v + -0x77a8) + id * 0x55ec + 0x1b4)) * 2;
	uVar1 = *(uint *)(iVar6 + 0x10149ba4);
	uVar2 = (ulonglong)uVar1;
	if (0 < (int)uVar1) {
		uVar3 = (ulonglong)(uVar1 >> 3);
		if (uVar1 >> 3 != 0) {
			do {
				*(int *)(iVar6 + 0x10149bf4) = *(int *)(iVar6 + 0x10149bf4) + (*(int *)(iVar6 + 0x10149bf4) >> 3);
				*(int *)(iVar6 + 0x10149bf4) = *(int *)(iVar6 + 0x10149bf4) + (*(int *)(iVar6 + 0x10149bf4) >> 3);
				*(int *)(iVar6 + 0x10149bf4) = *(int *)(iVar6 + 0x10149bf4) + (*(int *)(iVar6 + 0x10149bf4) >> 3);
				*(int *)(iVar6 + 0x10149bf4) = *(int *)(iVar6 + 0x10149bf4) + (*(int *)(iVar6 + 0x10149bf4) >> 3);
				*(int *)(iVar6 + 0x10149bf4) = *(int *)(iVar6 + 0x10149bf4) + (*(int *)(iVar6 + 0x10149bf4) >> 3);
				*(int *)(iVar6 + 0x10149bf4) = *(int *)(iVar6 + 0x10149bf4) + (*(int *)(iVar6 + 0x10149bf4) >> 3);
				*(int *)(iVar6 + 0x10149bf4) = *(int *)(iVar6 + 0x10149bf4) + (*(int *)(iVar6 + 0x10149bf4) >> 3);
				*(int *)(iVar6 + 0x10149bf4) = *(int *)(iVar6 + 0x10149bf4) + (*(int *)(iVar6 + 0x10149bf4) >> 3);
				uVar3 = uVar3 - 1;
			} while (uVar3 != 0);
			uVar2 = uVar2 & 7;
			if ((uVar1 & 7) == 0)
				goto LAB_10060338;
		}
		do {
			*(int *)(iVar6 + 0x10149bf4) = *(int *)(iVar6 + 0x10149bf4) + (*(int *)(iVar6 + 0x10149bf4) >> 3);
			uVar2 = uVar2 - 1;
		} while (uVar2 != 0);
	}
LAB_10060338:
	v = *(int *)(iVar6 + 0x10149ba4) * 2 + 0x10;
	if (0x32 < v) {
		v = 0x32;
	}
	UseMana(id, 0xc);
LAB_10060364:
	GetMissileVel(mi, sx, sy, dx, dy, v);
	v = GetDirection16(sx, sy, dx, dy);
	SetMissDir(mi, v);
	mi = mi * 0xb4;
	*(undefined4 *)(mi + 0x10149be8) = 0x100;
	*(int *)(mi + 0x10149c08) = sx;
	*(int *)(mi + 0x10149c0c) = sy;
	*(undefined4 *)(mi + 0x10149c10) = 0;
	*(int *)(mi + 0x10149c14) = sx;
	*(int *)(mi + 0x10149c18) = sy;
	v = AddLight(sx, sy, 8);
	*(int *)(mi + 0x10149c00) = v;
	return;
}

void AddLightctrl(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	int iVar1;
	int iVar2;
	int in_stack_00000038;

	if ((in_stack_00000038 == 0) && (mienemy == '\0')) {
		UseMana(id, 3);
	}
	iVar1 = mi * 0xb4;
	*(int *)(iVar1 + 0x10149c08) = sx;
	*(int *)(iVar1 + 0x10149c0c) = sy;
	GetMissileVel(mi, sx, sy, dx, dy, 0x20);
	iVar2 = random('4', 8);
	*(int *)(iVar1 + 0x10149bd4) = iVar2 + 1;
	*(undefined4 *)(iVar1 + 0x10149be8) = 0x100;
	return;
}

void AddLightning(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	int iVar1;

	mi = mi * 0xb4;
	*(int *)(mi + 0x10149b90) = dx;
	*(int *)(mi + 0x10149b94) = dy;
	if (-1 < midir) {
		iVar1 = midir * 0xb4;
		*(undefined4 *)(mi + 0x10149b80) = *(undefined4 *)(iVar1 + 0x10149b80);
		*(undefined4 *)(mi + 0x10149b84) = *(undefined4 *)(iVar1 + 0x10149b84);
		*(undefined4 *)(mi + 0x10149b98) = *(undefined4 *)(iVar1 + 0x10149b98);
		*(undefined4 *)(mi + 0x10149b9c) = *(undefined4 *)(iVar1 + 0x10149b9c);
	}
	iVar1 = random('4', 8);
	*(int *)(mi + 0x10149bd4) = iVar1 + 1;
	if (((midir < 0) || (mienemy == '\x01')) || (id == -1)) {
		if ((midir < 0) || (id == -1)) {
			*(undefined4 *)(mi + 0x10149be8) = 8;
		} else {
			*(undefined4 *)(mi + 0x10149be8) = 10;
		}
	} else {
		*(int *)(mi + 0x10149be8) = (*(int *)(mi + 0x10149ba4) >> 1) + 6;
	}
	iVar1 = AddLight(*(int *)(mi + 0x10149b78), *(int *)(mi + 0x10149b7c), 4);
	*(int *)(mi + 0x10149c00) = iVar1;
	return;
}

void AddMisexp(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	char **ppcVar1;

	if ((mienemy != '\0') && (0 < id)) {
		ppcVar1 = (char **)(id * 0xe8 + 0x10151b10);
		if (**ppcVar1 == 'e') {
			SetMissAnim(mi, 0x17);
		}
		if (**ppcVar1 == 'f') {
			SetMissAnim(mi, 0x29);
		}
		if (**ppcVar1 == 'g') {
			SetMissAnim(mi, 0x2d);
		}
		if (**ppcVar1 == 'h') {
			SetMissAnim(mi, 0x2b);
		}
	}
	dx = dx * 0xb4;
	mi = mi * 0xb4;
	*(undefined4 *)(mi + 0x10149b78) = *(undefined4 *)(dx + 0x10149b78);
	*(undefined4 *)(mi + 0x10149b7c) = *(undefined4 *)(dx + 0x10149b7c);
	*(undefined4 *)(mi + 0x10149b90) = *(undefined4 *)(dx + 0x10149b90);
	*(undefined4 *)(mi + 0x10149b94) = *(undefined4 *)(dx + 0x10149b94);
	*(undefined4 *)(mi + 0x10149b80) = *(undefined4 *)(dx + 0x10149b80);
	*(undefined4 *)(mi + 0x10149b84) = *(undefined4 *)(dx + 0x10149b84);
	*(undefined4 *)(mi + 0x10149b98) = *(undefined4 *)(dx + 0x10149b98);
	*(undefined4 *)(mi + 0x10149b9c) = *(undefined4 *)(dx + 0x10149b9c);
	*(undefined4 *)(mi + 0x10149b88) = 0;
	*(undefined4 *)(mi + 0x10149b8c) = 0;
	*(undefined4 *)(mi + 0x10149be8) = *(undefined4 *)(mi + 0x10149bc0);
	*(undefined4 *)(mi + 0x10149c08) = 0;
	return;
}

void AddWeapexp(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	int iVar1;

	iVar1 = mi * 0xb4;
	*(int *)(iVar1 + 0x10149b78) = sx;
	*(int *)(iVar1 + 0x10149b7c) = sy;
	*(int *)(iVar1 + 0x10149b90) = sx;
	*(int *)(iVar1 + 0x10149b94) = sy;
	*(undefined4 *)(iVar1 + 0x10149b88) = 0;
	*(undefined4 *)(iVar1 + 0x10149b8c) = 0;
	*(undefined4 *)(iVar1 + 0x10149c08) = 0;
	*(int *)(iVar1 + 0x10149c0c) = dx;
	*(undefined4 *)(iVar1 + 0x10149ba0) = 0;
	if (dx == 1) {
		SetMissAnim(mi, 5);
	} else {
		SetMissAnim(mi, 0x1a);
	}
	*(int *)(iVar1 + 0x10149be8) = *(int *)(iVar1 + 0x10149bc0) + -1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL CheckIfTrig(int x, int y)

{
	int iVar1;
	int iVar2;
	int *piVar3;

	piVar3 = (int *)&DAT_101aca9c;
	iVar2 = 0;
	while (true) {
		if (_numtrigs <= iVar2) {
			return 0;
		}
		if (((x == *piVar3) && (y == piVar3[1])) || ((iVar1 = abs(*piVar3 - x), iVar1 < 2 && (iVar1 = abs(piVar3[1] - y), iVar1 < 2))))
			break;
		piVar3 = piVar3 + 4;
		iVar2 = iVar2 + 1;
	}
	return 1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddTown(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	short sVar1;
	uint *puVar2;
	int iVar3;
	int iVar5;
	ulonglong uVar4;
	undefined8 uVar6;
	BOOL BVar7;
	int *piVar8;
	longlong lVar9;
	undefined8 in_r13;
	undefined8 unaff_r14;
	undefined8 unaff_r15;
	undefined8 unaff_r16;
	undefined8 unaff_r17;
	undefined8 unaff_r18;
	int iVar10;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	char *pcVar11;
	longlong unaff_r30;
	int x;
	BYTE x_00;
	longlong unaff_r31;
	int y;
	BYTE y_00;
	int local_68[4];
	undefined4 local_58;
	undefined4 local_54;
	undefined4 local_4c;
	undefined4 uStack72;
	undefined4 uStack68;
	undefined4 uStack64;
	undefined4 uStack60;
	undefined4 uStack56;
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

	y_00 = (BYTE)dy;
	x_00 = (BYTE)dx;
	lVar9 = (longlong)id;
	uVar6 = 0x100f8fd0;
	x = 0x100f8fd0;
	local_4c = (undefined4)((ulonglong)in_r13 >> 0x20);
	uStack72 = (undefined4)((ulonglong)unaff_r14 >> 0x20);
	uStack68 = (undefined4)((ulonglong)unaff_r15 >> 0x20);
	uStack64 = (undefined4)((ulonglong)unaff_r16 >> 0x20);
	uStack60 = (undefined4)((ulonglong)unaff_r17 >> 0x20);
	uStack56 = (undefined4)((ulonglong)unaff_r18 >> 0x20);
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
	local_68[0] = _DAT_10107f7c;
	local_68[1] = uRam10107f80;
	local_68[2] = uRam10107f84;
	local_68[3] = uRam10107f88;
	local_58 = uRam10107f8c;
	local_54 = uRam10107f90;
	if (currlevel == 0) {
		iVar5 = mi * 0xb4;
		*(int *)(iVar5 + 0x10149b78) = dx;
		*(int *)(iVar5 + 0x10149b7c) = dy;
		*(int *)(iVar5 + 0x10149b90) = dx;
		*(int *)(iVar5 + 0x10149b94) = dy;
		*(undefined4 *)(iVar5 + 0x10149ba8) = 0;
	} else {
		iVar5 = mi * 0xb4;
		*(undefined4 *)(iVar5 + 0x10149ba8) = 1;
		iVar10 = 0;
		while (true) {
			x = (int)uVar6;
			id = (int)lVar9;
			y_00 = (BYTE)unaff_r31;
			x_00 = (BYTE)unaff_r30;
			if (5 < iVar10)
				break;
			uVar4 = (ulonglong)(byte)(&DAT_1012054c)[local_68[iVar10]];
			pcVar11 = (char *)(local_68[iVar10] + 0x1012054d);
			while (0 < (int)uVar4) {
				unaff_r30 = (longlong)dx + (longlong)*pcVar11;
				unaff_r31 = (longlong)dy + (longlong)pcVar11[1];
				if (((0 < unaff_r30) && (x = (int)unaff_r30, x < 0x70)) && ((y = (int)unaff_r31, 0 < y && (((y < 0x70 && (iVar3 = x * 0x70 + y, sVar1 = *(short *)(_DAT_1012f1d4 + x * 0xe0 + y * 2), ((longlong) * (char *)(_DAT_1012f1a4 + iVar3) | (ulonglong)(byte)(&DAT_1012fb31)[(int)sVar1] | (ulonglong)(byte)(&DAT_10130b33)[(int)sVar1] | (longlong) * (char *)(_DAT_1012f1ac + iVar3) | (longlong) * (char *)(_DAT_1012f1b8 + iVar3)) == 0)) && (BVar7 = CheckIfTrig(x, y), BVar7 == 0)))))) {
					*(int *)(iVar5 + 0x10149b78) = x;
					iVar10 = 6;
					*(int *)(iVar5 + 0x10149b7c) = y;
					*(int *)(iVar5 + 0x10149b90) = x;
					*(int *)(iVar5 + 0x10149b94) = y;
					*(undefined4 *)(iVar5 + 0x10149ba8) = 0;
					break;
				}
				pcVar11 = pcVar11 + 2;
				uVar4 = uVar4 - 1;
			}
			iVar10 = iVar10 + 1;
		}
	}
	iVar5 = mi * 0xb4;
	puVar2 = *(uint **)(x + -0x7668);
	piVar8 = *(int **)(x + -0x7660);
	*(undefined4 *)(iVar5 + 0x10149be8) = 100;
	*(int *)(iVar5 + 0x10149c08) = *(int *)(iVar5 + 0x10149be8) - *(int *)(iVar5 + 0x10149bc0);
	*(undefined4 *)(iVar5 + 0x10149c0c) = 0;
	uVar4 = (ulonglong)*puVar2;
	if (0 < (int)*puVar2) {
		do {
			iVar10 = *piVar8 * 0xb4;
			if (((*(int *)(&DAT_10149b74 + iVar10) == 10) && (*piVar8 != mi)) && (id == *(int *)(iVar10 + 0x10149bec))) {
				*(undefined4 *)(iVar10 + 0x10149be8) = 0;
			}
			piVar8 = piVar8 + 1;
			uVar4 = uVar4 - 1;
		} while (uVar4 != 0);
	}
	PutMissile(mi);
	if (((id == **(int **)(x + -0x77ac)) && (*(int *)(iVar5 + 0x10149ba8) == 0)) && (**(byte **)(x + -0x77e4) != 0)) {
		if (**(char **)(x + -0x77d8) == '\0') {
			NetSendCmdLocParam3(
			    1, '8', x_00, y_00, (ushort) * *(byte **)(x + -0x77e4), (ushort) * *(byte **)(x + -0x7794), 0);
		} else {
			NetSendCmdLocParam3(
			    1, '8', x_00, y_00, (ushort) * *(byte **)(x + -0x77e0), (ushort) * *(byte **)(x + -0x7794), 1);
		}
	}
	return;
}

void AddFlash(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	int *piVar1;
	uint uVar2;
	ulonglong uVar3;
	int iVar4;
	ulonglong uVar5;
	int iVar6;
	int iVar7;

	if (mienemy != '\0') {
		*(int *)(mi * 0xb4 + 0x10149bf4) = (int)*(char *)(id * 0xe8 + 0x10151af4) << 1;
		goto LAB_10060ca8;
	}
	if (id == -1) {
		*(int *)(mi * 0xb4 + 0x10149bf4) = (int)(uint)currlevel >> 1;
		goto LAB_10060ca8;
	}
	iVar7 = mi * 0xb4;
	piVar1 = (int *)(iVar7 + 0x10149bf4);
	*piVar1 = 0;
	iVar6 = 0;
	while (iVar6 <= (int)*(char *)((int)plr + id * 0x55ec + 0x1b4)) {
		iVar4 = random('7', 0x14);
		iVar6 = iVar6 + 1;
		*(int *)(iVar7 + 0x10149bf4) = iVar4 + *(int *)(iVar7 + 0x10149bf4) + 1;
	}
	uVar2 = *(uint *)(iVar7 + 0x10149ba4);
	uVar5 = (ulonglong)uVar2;
	if (0 < (int)uVar2) {
		uVar3 = (ulonglong)(uVar2 >> 3);
		if (uVar2 >> 3 != 0) {
			do {
				*(int *)(iVar7 + 0x10149bf4) = *(int *)(iVar7 + 0x10149bf4) + (*(int *)(iVar7 + 0x10149bf4) >> 3);
				*(int *)(iVar7 + 0x10149bf4) = *(int *)(iVar7 + 0x10149bf4) + (*(int *)(iVar7 + 0x10149bf4) >> 3);
				*(int *)(iVar7 + 0x10149bf4) = *(int *)(iVar7 + 0x10149bf4) + (*(int *)(iVar7 + 0x10149bf4) >> 3);
				*(int *)(iVar7 + 0x10149bf4) = *(int *)(iVar7 + 0x10149bf4) + (*(int *)(iVar7 + 0x10149bf4) >> 3);
				*(int *)(iVar7 + 0x10149bf4) = *(int *)(iVar7 + 0x10149bf4) + (*(int *)(iVar7 + 0x10149bf4) >> 3);
				*(int *)(iVar7 + 0x10149bf4) = *(int *)(iVar7 + 0x10149bf4) + (*(int *)(iVar7 + 0x10149bf4) >> 3);
				*(int *)(iVar7 + 0x10149bf4) = *(int *)(iVar7 + 0x10149bf4) + (*(int *)(iVar7 + 0x10149bf4) >> 3);
				*(int *)(iVar7 + 0x10149bf4) = *(int *)(iVar7 + 0x10149bf4) + (*(int *)(iVar7 + 0x10149bf4) >> 3);
				uVar3 = uVar3 - 1;
			} while (uVar3 != 0);
			uVar5 = uVar5 & 7;
			if ((uVar2 & 7) == 0)
				goto LAB_10060c48;
		}
		do {
			*(int *)(iVar7 + 0x10149bf4) = *(int *)(iVar7 + 0x10149bf4) + (*(int *)(iVar7 + 0x10149bf4) >> 3);
			uVar5 = uVar5 - 1;
		} while (uVar5 != 0);
	}
LAB_10060c48:
	*piVar1 = *piVar1 + (*piVar1 >> 1);
	UseMana(id, 4);
LAB_10060ca8:
	*(undefined4 *)(mi * 0xb4 + 0x10149be8) = 0x13;
	return;
}

void AddFlash2(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	int *piVar1;
	uint uVar2;
	ulonglong uVar3;
	int iVar4;
	ulonglong uVar5;
	int iVar6;
	int iVar7;

	if (mienemy != '\0')
		goto LAB_10060e38;
	if (id == -1) {
		*(int *)(mi * 0xb4 + 0x10149bf4) = (int)(uint)currlevel >> 1;
		goto LAB_10060e38;
	}
	iVar7 = mi * 0xb4;
	piVar1 = (int *)(iVar7 + 0x10149bf4);
	*piVar1 = 0;
	iVar6 = 0;
	while (iVar6 <= (int)*(char *)((int)plr + id * 0x55ec + 0x1b4)) {
		iVar4 = random('8', 2);
		iVar6 = iVar6 + 1;
		*(int *)(iVar7 + 0x10149bf4) = iVar4 + *(int *)(iVar7 + 0x10149bf4) + 1;
	}
	uVar2 = *(uint *)(iVar7 + 0x10149ba4);
	uVar5 = (ulonglong)uVar2;
	if (0 < (int)uVar2) {
		uVar3 = (ulonglong)(uVar2 >> 3);
		if (uVar2 >> 3 != 0) {
			do {
				*(int *)(iVar7 + 0x10149bf4) = *(int *)(iVar7 + 0x10149bf4) + (*(int *)(iVar7 + 0x10149bf4) >> 3);
				*(int *)(iVar7 + 0x10149bf4) = *(int *)(iVar7 + 0x10149bf4) + (*(int *)(iVar7 + 0x10149bf4) >> 3);
				*(int *)(iVar7 + 0x10149bf4) = *(int *)(iVar7 + 0x10149bf4) + (*(int *)(iVar7 + 0x10149bf4) >> 3);
				*(int *)(iVar7 + 0x10149bf4) = *(int *)(iVar7 + 0x10149bf4) + (*(int *)(iVar7 + 0x10149bf4) >> 3);
				*(int *)(iVar7 + 0x10149bf4) = *(int *)(iVar7 + 0x10149bf4) + (*(int *)(iVar7 + 0x10149bf4) >> 3);
				*(int *)(iVar7 + 0x10149bf4) = *(int *)(iVar7 + 0x10149bf4) + (*(int *)(iVar7 + 0x10149bf4) >> 3);
				*(int *)(iVar7 + 0x10149bf4) = *(int *)(iVar7 + 0x10149bf4) + (*(int *)(iVar7 + 0x10149bf4) >> 3);
				*(int *)(iVar7 + 0x10149bf4) = *(int *)(iVar7 + 0x10149bf4) + (*(int *)(iVar7 + 0x10149bf4) >> 3);
				uVar3 = uVar3 - 1;
			} while (uVar3 != 0);
			uVar5 = uVar5 & 7;
			if ((uVar2 & 7) == 0)
				goto LAB_10060e0c;
		}
		do {
			*(int *)(iVar7 + 0x10149bf4) = *(int *)(iVar7 + 0x10149bf4) + (*(int *)(iVar7 + 0x10149bf4) >> 3);
			uVar5 = uVar5 - 1;
		} while (uVar5 != 0);
	}
LAB_10060e0c:
	*piVar1 = *piVar1 + (*piVar1 >> 1);
LAB_10060e38:
	*(undefined4 *)(mi * 0xb4 + 0x10149be0) = 1;
	*(undefined4 *)(mi * 0xb4 + 0x10149be8) = 0x13;
	return;
}

void AddManashield(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	int iVar1;
	int iVar2;

	iVar1 = 0x100f8fd0;
	mi = mi * 0xb4;
	iVar2 = id * 0x55ec;
	*(int *)(mi + 0x10149be8) = (int)*(char *)((int)plr + iVar2 + 0x1b4) * 0x30;
	*(undefined4 *)(mi + 0x10149c08) = *(undefined4 *)((int)plr + iVar2 + 0x194);
	*(undefined4 *)(mi + 0x10149c0c) = *(undefined4 *)((int)plr + iVar2 + 0x18c);
	*(undefined4 *)(mi + 0x10149c24) = 0xffffffff;
	if (mienemy == '\0') {
		iVar1 = 0x100f8fd0;
		UseMana(id, 0xb);
	}
	if (id == **(int **)(iVar1 + -0x77ac)) {
		NetSendCmd(1, '\\');
	}
	*(undefined *)((int)plr + iVar2 + 0x5594) = 1;
	return;
}

void AddFiremove(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 0x100f8fd0;
	iVar2 = random(';', 10);
	iVar3 = mi * 0xb4;
	*(int *)(iVar3 + 0x10149bf4) = iVar2 + (int)*(char *)(*(int *)(iVar1 + -0x77a8) + id * 0x55ec + 0x1b4) + 1;
	GetMissileVel(mi, sx, sy, dx, dy, 0x10);
	*(undefined4 *)(iVar3 + 0x10149be8) = 0xff;
	*(undefined4 *)(iVar3 + 0x10149c08) = 0;
	*(undefined4 *)(iVar3 + 0x10149c0c) = 0;
	*(int *)(iVar3 + 0x10149b78) = *(int *)(iVar3 + 0x10149b78) + 1;
	*(int *)(iVar3 + 0x10149b7c) = *(int *)(iVar3 + 0x10149b7c) + 1;
	*(int *)(iVar3 + 0x10149b84) = *(int *)(iVar3 + 0x10149b84) + -0x20;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddGuardian(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	short sVar1;
	uint uVar2;
	int iVar3;
	int iVar5;
	ulonglong uVar4;
	int iVar6;
	int y2;
	undefined8 uVar7;
	int x2;
	ulonglong uVar8;
	BOOL BVar9;
	int *piVar10;
	undefined8 in_r13;
	ulonglong uVar11;
	undefined8 unaff_r14;
	undefined8 unaff_r15;
	undefined8 unaff_r16;
	undefined8 unaff_r17;
	undefined8 unaff_r18;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	int iVar12;
	undefined8 unaff_r29;
	longlong lVar13;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	longlong lVar14;
	int id_00;
	undefined4 local_88;
	undefined4 local_84;
	undefined4 local_80;
	undefined4 local_7c;
	undefined4 local_78;
	undefined4 local_74;
	int local_70;
	char *local_6c;
	uint *local_68;
	int *local_64;
	int local_60;
	undefined4 *local_5c;
	undefined4 local_4c;
	undefined4 uStack72;
	undefined4 uStack68;
	undefined4 uStack64;
	undefined4 uStack60;
	undefined4 uStack56;
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

	uVar7 = 0x100f8fd0;
	local_4c = (undefined4)((ulonglong)in_r13 >> 0x20);
	uStack72 = (undefined4)((ulonglong)unaff_r14 >> 0x20);
	uStack68 = (undefined4)((ulonglong)unaff_r15 >> 0x20);
	uStack64 = (undefined4)((ulonglong)unaff_r16 >> 0x20);
	uStack60 = (undefined4)((ulonglong)unaff_r17 >> 0x20);
	uStack56 = (undefined4)((ulonglong)unaff_r18 >> 0x20);
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
	uVar11 = ZEXT48(&DAT_1012054c);
	local_88 = _DAT_10107f94;
	local_84 = uRam10107f98;
	local_80 = uRam10107f9c;
	local_7c = uRam10107fa0;
	local_78 = uRam10107fa4;
	local_74 = uRam10107fa8;
	id_00 = id;
	x2 = random('>', 10);
	iVar6 = (int)uVar7;
	local_70 = id_00 * 0x55ec;
	iVar5 = *(int *)(iVar6 + -0x77a8) + local_70;
	local_60 = mi * 0xb4;
	iVar12 = *(int *)(iVar6 + -0x7664) + local_60;
	local_68 = (uint *)(iVar12 + 0x30);
	*(int *)(iVar12 + 0x80) = x2 + ((int)*(char *)(iVar5 + 0x1b4) >> 1) + 1;
	uVar2 = *local_68;
	uVar4 = (ulonglong)uVar2;
	local_6c = (char *)(iVar5 + 0x1b4);
	if (0 < (int)uVar2) {
		uVar8 = (ulonglong)(uVar2 >> 3);
		if (uVar2 >> 3 != 0) {
			do {
				*(int *)(iVar12 + 0x80) = *(int *)(iVar12 + 0x80) + (*(int *)(iVar12 + 0x80) >> 3);
				*(int *)(iVar12 + 0x80) = *(int *)(iVar12 + 0x80) + (*(int *)(iVar12 + 0x80) >> 3);
				*(int *)(iVar12 + 0x80) = *(int *)(iVar12 + 0x80) + (*(int *)(iVar12 + 0x80) >> 3);
				*(int *)(iVar12 + 0x80) = *(int *)(iVar12 + 0x80) + (*(int *)(iVar12 + 0x80) >> 3);
				*(int *)(iVar12 + 0x80) = *(int *)(iVar12 + 0x80) + (*(int *)(iVar12 + 0x80) >> 3);
				*(int *)(iVar12 + 0x80) = *(int *)(iVar12 + 0x80) + (*(int *)(iVar12 + 0x80) >> 3);
				*(int *)(iVar12 + 0x80) = *(int *)(iVar12 + 0x80) + (*(int *)(iVar12 + 0x80) >> 3);
				*(int *)(iVar12 + 0x80) = *(int *)(iVar12 + 0x80) + (*(int *)(iVar12 + 0x80) >> 3);
				uVar8 = uVar8 - 1;
			} while (uVar8 != 0);
			uVar4 = uVar4 & 7;
			if ((uVar2 & 7) == 0)
				goto LAB_1006118c;
		}
		do {
			*(int *)(iVar12 + 0x80) = *(int *)(iVar12 + 0x80) + (*(int *)(iVar12 + 0x80) >> 3);
			uVar4 = uVar4 - 1;
		} while (uVar4 != 0);
	}
LAB_1006118c:
	iVar5 = 0;
	iVar6 = *(int *)(iVar6 + -0x7664) + local_60;
	local_5c = &local_88;
	*(undefined4 *)(iVar6 + 0x34) = 1;
	local_64 = (int *)(iVar6 + 0x34);
	do {
		iVar6 = (int)uVar7;
		if (5 < iVar5) {
			if (*local_64 != 1) {
				iVar12 = *(int *)(iVar6 + -0x7664) + local_60;
				*(int *)(iVar12 + 0x78) = id_00;
				x2 = AddLight(*(int *)(iVar12 + 4), *(int *)(iVar12 + 8), 1);
				iVar5 = *(int *)(iVar6 + -0x77a8);
				*(int *)(iVar12 + 0x8c) = x2;
				piVar10 = (int *)(iVar12 + 0x74);
				*(int *)(iVar12 + 0x74) = ((int)*local_6c >> 1) + *local_68;
				*(int *)(iVar12 + 0x74) = *(int *)(iVar12 + 0x74) + (*(int *)(iVar5 + local_70 + 0x5574) * *(int *)(iVar12 + 0x74) >> 7);
				if (0x1e < *(int *)(iVar12 + 0x74)) {
					*piVar10 = 0x1e;
				}
				*piVar10 = *piVar10 << 4;
				if (*piVar10 < 0x1e) {
					*piVar10 = 0x1e;
				}
				local_60 = *(int *)(iVar6 + -0x7664) + local_60;
				*(int *)(local_60 + 0x94) = *piVar10 - *(int *)(local_60 + 0x4c);
				*(undefined4 *)(local_60 + 0x98) = 0;
				*(undefined4 *)(local_60 + 0x9c) = 1;
			}
			return;
		}
		uVar4 = (ulonglong) * (byte *)((int)uVar11 + local_5c[iVar5]);
		lVar13 = (ulonglong)(uint)local_5c[iVar5] + uVar11 + 1;
		while (0 < (int)uVar4) {
			lVar14 = (longlong)dx + (longlong) * (char *)lVar13;
			y2 = dy + (int)((char *)lVar13)[1];
			x2 = (int)lVar14;
			iVar6 = x2 * 0xe0 + y2 * 2;
			sVar1 = *(short *)(_DAT_1012f1d4 + iVar6);
			if ((((0 < lVar14) && (x2 < 0x70)) && (0 < y2)) && (((y2 < 0x70 && (BVar9 = LineClear(sx, sy, x2, y2), BVar9 != 0)) && (iVar3 = x2 * 0x70 + y2, ((longlong) * (char *)(_DAT_1012f1a4 + iVar3) | (ulonglong)(byte)(&DAT_1012fb31)[(int)sVar1] | (longlong) * (char *)(_DAT_1012f1ac + iVar3) | (ulonglong)(byte)(&DAT_10130b33)[(int)sVar1] | (longlong) * (short *)(_DAT_1012f1b4 + iVar6)) == 0)))) {
				*(int *)(iVar12 + 4) = x2;
				*(int *)(iVar12 + 8) = y2;
				*(int *)(iVar12 + 0x1c) = x2;
				*(int *)(iVar12 + 0x20) = y2;
				*(undefined4 *)(iVar12 + 0x34) = 0;
				UseMana(id_00, 0xd);
				iVar5 = 6;
				break;
			}
			lVar13 = lVar13 + 2;
			uVar4 = uVar4 - 1;
		}
		iVar5 = iVar5 + 1;
	} while (true);
}

void AddChain(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	mi = mi * 0xb4;
	*(int *)(mi + 0x10149c08) = dx;
	*(int *)(mi + 0x10149c0c) = dy;
	*(undefined4 *)(mi + 0x10149be8) = 1;
	UseMana(id, 0xe);
	return;
}

void miss_null_11(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	SetMissDir(mi, dx);
	mi = mi * 0xb4;
	*(undefined4 *)(mi + 0x10149bf4) = 0;
	*(undefined4 *)(mi + 0x10149bdc) = 1;
	*(undefined4 *)(mi + 0x10149be8) = 0xfa;
	return;
}

void miss_null_12(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	if (3 < dx) {
		dx = 2;
	}
	SetMissDir(mi, dx);
	mi = mi * 0xb4;
	*(undefined4 *)(mi + 0x10149bf4) = 0;
	*(undefined4 *)(mi + 0x10149bdc) = 1;
	*(undefined4 *)(mi + 0x10149be8) = 0xfa;
	return;
}

void miss_null_13(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	if (3 < dx) {
		dx = 2;
	}
	SetMissDir(mi, dx);
	mi = mi * 0xb4;
	*(undefined4 *)(mi + 0x10149bf4) = 0;
	*(undefined4 *)(mi + 0x10149bdc) = 1;
	*(undefined4 *)(mi + 0x10149be8) = *(undefined4 *)(mi + 0x10149bc0);
	return;
}

void AddRhino(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	byte bVar1;
	undefined4 uVar2;
	int iVar3;
	byte *pbVar4;

	id = id * 0xe8;
	pbVar4 = *(byte **)(id + 0x10151b10);
	bVar1 = *pbVar4;
	if ((bVar1 < 0x40) || (0x43 < bVar1)) {
		if ((bVar1 < 0x59) || (0x5c < bVar1)) {
			pbVar4 = pbVar4 + 0x50;
		} else {
			pbVar4 = pbVar4 + 0x9c;
		}
	} else {
		pbVar4 = pbVar4 + 0x180;
	}
	GetMissileVel(mi, sx, sy, dx, dy, 0x12);
	iVar3 = mi * 0xb4;
	*(int *)(iVar3 + 0x10149ba0) = midir;
	*(undefined4 *)(iVar3 + 0x10149bb0) = 0;
	uVar2 = *(undefined4 *)(pbVar4 + midir * 8 + 8);
	*(undefined4 *)(iVar3 + 0x10149bb4) = *(undefined4 *)(pbVar4 + midir * 8 + 4);
	*(undefined4 *)(iVar3 + 0x10149bb8) = uVar2;
	*(undefined4 *)(iVar3 + 0x10149bbc) = *(undefined4 *)(pbVar4 + 0x48);
	*(undefined4 *)(iVar3 + 0x10149bc0) = *(undefined4 *)(pbVar4 + 0x44);
	pbVar4 = *(byte **)(id + 0x10151b10);
	*(undefined4 *)(iVar3 + 0x10149bc4) = *(undefined4 *)(pbVar4 + 0x1ec);
	*(undefined4 *)(iVar3 + 0x10149bc8) = *(undefined4 *)(pbVar4 + 0x1f0);
	*(undefined4 *)(iVar3 + 0x10149bd0) = 1;
	if ((0x58 < *pbVar4) && (*pbVar4 < 0x5d)) {
		*(undefined4 *)(iVar3 + 0x10149bd4) = 7;
	}
	*(undefined4 *)(iVar3 + 0x10149c08) = 0;
	*(undefined4 *)(iVar3 + 0x10149c0c) = 0;
	*(undefined4 *)(iVar3 + 0x10149bdc) = 1;
	if (*(char *)(id + 0x10151af0) != '\0') {
		*(int *)(iVar3 + 0x10149be4) = (uint) * (byte *)(id + 0x10151af1) + 1;
		*(uint *)(iVar3 + 0x10149c00) = (uint) * (byte *)(id + 0x10151b0b);
	}
	*(undefined4 *)(iVar3 + 0x10149be8) = 0x100;
	PutMissile(mi);
	return;
}

void miss_null_32(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	undefined4 uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar3 = 0x100f8fd0;
	id = id * 0xe8;
	iVar2 = *(int *)(id + 0x10151b10);
	GetMissileVel(mi, sx, sy, dx, dy, 0x10);
	iVar5 = mi * 0xb4;
	*(int *)(iVar5 + 0x10149ba0) = midir;
	*(undefined4 *)(iVar5 + 0x10149bb0) = 0;
	iVar4 = iVar2 + 0x50 + midir * 8;
	uVar1 = *(undefined4 *)(iVar4 + 8);
	*(undefined4 *)(iVar5 + 0x10149bb4) = *(undefined4 *)(iVar4 + 4);
	*(undefined4 *)(iVar5 + 0x10149bb8) = uVar1;
	*(undefined4 *)(iVar5 + 0x10149bbc) = *(undefined4 *)(iVar2 + 0x98);
	*(undefined4 *)(iVar5 + 0x10149bc0) = *(undefined4 *)(iVar2 + 0x94);
	iVar2 = *(int *)(id + 0x10151b10);
	*(undefined4 *)(iVar5 + 0x10149bc4) = *(undefined4 *)(iVar2 + 0x1ec);
	*(undefined4 *)(iVar5 + 0x10149bc8) = *(undefined4 *)(iVar2 + 0x1f0);
	*(undefined4 *)(iVar5 + 0x10149bd0) = 1;
	*(undefined4 *)(iVar5 + 0x10149c08) = 0;
	*(undefined4 *)(iVar5 + 0x10149c0c) = 0;
	*(undefined4 *)(iVar5 + 0x10149bdc) = 1;
	if (*(char *)(id + 0x10151af0) != '\0') {
		*(int *)(iVar5 + 0x10149be4) = (uint) * (byte *)(id + 0x10151af1) + 1;
	}
	*(undefined2 *)(**(int **)(iVar3 + -0x767c) + *(int *)(id + 0x10151a50) * 0xe0 + *(int *)(id + 0x10151a54) * 2) = 0;
	*(undefined4 *)(iVar5 + 0x10149be8) = 0x100;
	PutMissile(mi);
	return;
}

void AddFlare(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	char **ppcVar1;
	undefined4 *puVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar4 = 0x100f8fd0;
	if ((sx == dx) && (sy == dy)) {
		dx = dx + *(int *)(&DAT_10107c10 + midir * 4);
		dy = dy + *(int *)(&DAT_10107c30 + midir * 4);
	}
	GetMissileVel(mi, sx, sy, dx, dy, 0x10);
	iVar3 = mi * 0xb4;
	*(undefined4 *)(iVar3 + 0x10149be8) = 0x100;
	*(int *)(iVar3 + 0x10149c08) = sx;
	*(int *)(iVar3 + 0x10149c0c) = sy;
	iVar5 = AddLight(sx, sy, 8);
	*(int *)(iVar3 + 0x10149c00) = iVar5;
	if (mienemy == '\0') {
		UseMana(id, 0x23);
		iVar3 = id * 0x55ec;
		puVar2 = *(undefined4 **)(iVar4 + -0x76f0);
		*(int *)((int)plr + iVar3 + 0x194) = *(int *)((int)plr + iVar3 + 0x194) + -0x140;
		*(int *)((int)plr + iVar3 + 0x18c) = *(int *)((int)plr + iVar3 + 0x18c) + -0x140;
		*puVar2 = 1;
		if (*(int *)((int)plr + iVar3 + 0x194) < 1) {
			SyncPlrKill(id, 0);
		}
	} else {
		if (0 < id) {
			ppcVar1 = (char **)(*(int *)(iVar4 + -0x7754) + id * 0xe8 + 0xe0);
			if (**ppcVar1 == 'e') {
				SetMissAnim(mi, 0x16);
			}
			if (**ppcVar1 == 'f') {
				SetMissAnim(mi, 0x28);
			}
			if (**ppcVar1 == 'g') {
				SetMissAnim(mi, 0x2c);
			}
			if (**ppcVar1 == 'h') {
				SetMissAnim(mi, 0x2a);
			}
		}
	}
	return;
}

void AddAcid(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	int iVar1;
	int dir;

	iVar1 = 0x100f8fd0;
	GetMissileVel(mi, sx, sy, dx, dy, 0x10);
	dir = GetDirection16(sx, sy, dx, dy);
	SetMissDir(mi, dir);
	dir = mi * 0xb4;
	*(int *)(dir + 0x10149be8) = ((uint) * (byte *)(*(int *)(iVar1 + -0x7754) + id * 0xe8 + 0x9d) + 1) * 5 + 0xf;
	*(undefined4 *)(dir + 0x10149c00) = 0xffffffff;
	*(int *)(dir + 0x10149c08) = sx;
	*(int *)(dir + 0x10149c0c) = sy;
	PutMissile(mi);
	return;
}

void miss_null_1D(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	undefined4 in_stack_00000038;

	mi = mi * 0xb4;
	*(undefined4 *)(mi + 0x10149bf4) = in_stack_00000038;
	*(undefined4 *)(mi + 0x10149b88) = 0;
	*(undefined4 *)(mi + 0x10149b8c) = 0;
	*(undefined4 *)(mi + 0x10149be8) = 0x32;
	*(int *)(mi + 0x10149c08) = *(int *)(mi + 0x10149be8) - *(int *)(mi + 0x10149bc0);
	*(undefined4 *)(mi + 0x10149c0c) = 0;
	return;
}

void AddAcidpud(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = 0x100f8fd0;
	mi = mi * 0xb4;
	*(undefined4 *)(mi + 0x10149b88) = 0;
	*(undefined4 *)(mi + 0x10149b8c) = 0;
	*(undefined4 *)(mi + 0x10149b80) = 0;
	*(undefined4 *)(mi + 0x10149b84) = 0;
	*(undefined4 *)(mi + 0x10149bdc) = 1;
	iVar1 = *(int *)(mi + 0x10149bec);
	iVar3 = random('2', 0xf);
	*(int *)(mi + 0x10149be8) = ((uint) * (byte *)(*(int *)(iVar2 + -0x7754) + iVar1 * 0xe8 + 0x9d) + 1) * 0x28 + iVar3;
	*(undefined4 *)(mi + 0x10149be0) = 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddStone(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	short sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	ulonglong uVar5;
	int *piVar6;
	int iVar7;
	longlong in_r11;
	longlong in_r12;
	undefined8 unaff_r24;
	int iVar8;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	char *pcVar9;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	ulonglong uVar10;
	int local_38[4];
	undefined4 local_28;
	undefined4 local_24;
	undefined4 local_20;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	uVar5 = SEXT48(midir);
	local_20 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	mi = mi * 0xb4;
	iVar7 = 0;
	local_38[0] = _DAT_10107fac;
	local_38[1] = uRam10107fb0;
	local_38[2] = uRam10107fb4;
	local_38[3] = uRam10107fb8;
	local_28 = uRam10107fbc;
	local_24 = uRam10107fc0;
	*(int *)(mi + 0x10149bec) = id;
	iVar4 = _DAT_1012f1b4;
	do {
		if (5 < iVar7) {
			if ((int)uVar5 == -99) {
				*(undefined4 *)(mi + 0x10149b78) = (int)in_r11;
				*(undefined4 *)(mi + 0x10149b7c) = (int)in_r12;
				piVar6 = (int *)(mi + 0x10149be8);
				*(undefined4 *)(mi + 0x10149b90) = *(undefined4 *)(mi + 0x10149b78);
				*(undefined4 *)(mi + 0x10149b94) = *(undefined4 *)(mi + 0x10149b7c);
				*piVar6 = *(int *)(mi + 0x10149ba4) + 6;
				*piVar6 = *piVar6 + (*(int *)((int)plr + id * 0x55ec + 0x5574) * *piVar6 >> 7);
				if (0xf < *piVar6) {
					*piVar6 = 0xf;
				}
				*piVar6 = *piVar6 << 4;
				UseMana(id, 8);
			} else {
				*(undefined4 *)(mi + 0x10149ba8) = 1;
			}
			return;
		}
		uVar5 = (ulonglong)(byte)(&DAT_1012054c)[local_38[iVar7]];
		pcVar9 = (char *)(local_38[iVar7] + 0x1012054d);
		uVar10 = uVar5;
		if ((&DAT_1012054c)[local_38[iVar7]] != 0) {
			do {
				in_r11 = (longlong)dx + (longlong)*pcVar9;
				in_r12 = (longlong)dy + (longlong)pcVar9[1];
				if (0 < in_r11) {
					if ((int)in_r11 < 0x70) {
						iVar8 = (int)in_r12;
						if ((0 < iVar8) && (iVar8 < 0x70)) {
							sVar1 = *(short *)(iVar4 + (int)in_r11 * 0xe0 + iVar8 * 2);
							if (sVar1 < 1) {
								iVar8 = -((int)sVar1 + 1);
							} else {
								iVar8 = (int)sVar1 + -1;
							}
							if (3 < iVar8) {
								iVar3 = iVar8 * 0xe8;
								if (*(char *)(iVar3 + 0x10151acc) != '\x1b') {
									iVar2 = *(int *)(iVar3 + 0x10151a34);
									if (((iVar2 != 8) && (iVar2 != 9)) && (iVar2 != 0xe)) {
										*(int *)(mi + 0x10149c08) = iVar2;
										uVar5 = 0xffffffffffffff9d;
										*(int *)(mi + 0x10149c0c) = iVar8;
										iVar7 = 6;
										*(undefined4 *)(iVar3 + 0x10151a34) = 0xf;
										break;
									}
								}
							}
						}
					}
				}
				pcVar9 = pcVar9 + 2;
				uVar5 = uVar5 - 1;
				uVar10 = uVar10 - 1;
			} while (uVar10 != 0);
		}
		iVar7 = iVar7 + 1;
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddGolem(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	ulonglong uVar1;
	int iVar2;
	int *piVar3;
	int iVar4;

	iVar4 = mi * 0xb4;
	piVar3 = (int *)&DAT_1014939c;
	*(undefined4 *)(iVar4 + 0x10149ba8) = 0;
	uVar1 = (ulonglong)_DAT_10149b70;
	if (0 < (int)_DAT_10149b70) {
		do {
			iVar2 = *piVar3 * 0xb4;
			if (((*(int *)(&DAT_10149b74 + iVar2) == 0x21) && (*piVar3 != mi)) && (id == *(int *)(iVar2 + 0x10149bec))) {
				*(undefined4 *)(iVar4 + 0x10149ba8) = 1;
				return;
			}
			piVar3 = piVar3 + 1;
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
	}
	*(int *)(iVar4 + 0x10149c08) = sx;
	*(int *)(iVar4 + 0x10149c0c) = sy;
	*(int *)(iVar4 + 0x10149c14) = dx;
	*(int *)(iVar4 + 0x10149c18) = dy;
	if (((*(int *)(id * 0xe8 + 0x10151a50) != 1) || (*(int *)(id * 0xe8 + 0x10151a54) != 0)) && (id == myplr)) {
		M_StartKill(id, id);
	}
	UseMana(id, 0x15);
	return;
}

void AddEtherealize(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	int *piVar1;
	uint uVar2;
	ulonglong uVar3;
	ulonglong uVar4;
	int iVar5;

	iVar5 = id * 0x55ec;
	mi = mi * 0xb4;
	piVar1 = (int *)(mi + 0x10149be8);
	*piVar1 = ((int)*(char *)((int)plr + iVar5 + 0x1b4) << 4) >> 1;
	uVar2 = *(uint *)(mi + 0x10149ba4);
	uVar3 = (ulonglong)uVar2;
	if (0 < (int)uVar2) {
		uVar4 = (ulonglong)(uVar2 >> 3);
		if (uVar2 >> 3 != 0) {
			do {
				*(int *)(mi + 0x10149be8) = *(int *)(mi + 0x10149be8) + (*(int *)(mi + 0x10149be8) >> 3);
				*(int *)(mi + 0x10149be8) = *(int *)(mi + 0x10149be8) + (*(int *)(mi + 0x10149be8) >> 3);
				*(int *)(mi + 0x10149be8) = *(int *)(mi + 0x10149be8) + (*(int *)(mi + 0x10149be8) >> 3);
				*(int *)(mi + 0x10149be8) = *(int *)(mi + 0x10149be8) + (*(int *)(mi + 0x10149be8) >> 3);
				*(int *)(mi + 0x10149be8) = *(int *)(mi + 0x10149be8) + (*(int *)(mi + 0x10149be8) >> 3);
				*(int *)(mi + 0x10149be8) = *(int *)(mi + 0x10149be8) + (*(int *)(mi + 0x10149be8) >> 3);
				*(int *)(mi + 0x10149be8) = *(int *)(mi + 0x10149be8) + (*(int *)(mi + 0x10149be8) >> 3);
				*(int *)(mi + 0x10149be8) = *(int *)(mi + 0x10149be8) + (*(int *)(mi + 0x10149be8) >> 3);
				uVar4 = uVar4 - 1;
			} while (uVar4 != 0);
			uVar3 = uVar3 & 7;
			if ((uVar2 & 7) == 0)
				goto LAB_10061eac;
		}
		do {
			*(int *)(mi + 0x10149be8) = *(int *)(mi + 0x10149be8) + (*(int *)(mi + 0x10149be8) >> 3);
			uVar3 = uVar3 - 1;
		} while (uVar3 != 0);
	}
LAB_10061eac:
	*piVar1 = *piVar1 + (*(int *)((int)plr + iVar5 + 0x5574) * *piVar1 >> 7);
	*(undefined4 *)(mi + 0x10149c08) = *(undefined4 *)((int)plr + iVar5 + 0x194);
	*(undefined4 *)(mi + 0x10149c0c) = *(undefined4 *)((int)plr + iVar5 + 0x18c);
	if (mienemy == '\0') {
		UseMana(id, 0x19);
	}
	return;
}

void miss_null_1F(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	*(undefined4 *)(mi * 0xb4 + 0x10149ba8) = 1;
	return;
}

void miss_null_23(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	int iVar1;
	int in_stack_00000038;

	iVar1 = mi * 0xb4;
	*(int *)(iVar1 + 0x10149bf4) = in_stack_00000038;
	*(int *)(iVar1 + 0x10149b78) = sx;
	*(int *)(iVar1 + 0x10149b7c) = sy;
	*(int *)(iVar1 + 0x10149b90) = sx;
	*(int *)(iVar1 + 0x10149b94) = sy;
	*(int *)(iVar1 + 0x10149bec) = id;
	if (in_stack_00000038 == 1) {
		SetMissDir(mi, 0);
	} else {
		SetMissDir(mi, 1);
	}
	*(undefined4 *)(iVar1 + 0x10149bdc) = 1;
	*(undefined4 *)(iVar1 + 0x10149be8) = *(undefined4 *)(iVar1 + 0x10149bc0);
	return;
}

void AddBoom(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	undefined4 in_stack_00000038;

	mi = mi * 0xb4;
	*(int *)(mi + 0x10149b78) = dx;
	*(int *)(mi + 0x10149b7c) = dy;
	*(int *)(mi + 0x10149b90) = dx;
	*(int *)(mi + 0x10149b94) = dy;
	*(undefined4 *)(mi + 0x10149b88) = 0;
	*(undefined4 *)(mi + 0x10149b8c) = 0;
	*(undefined4 *)(mi + 0x10149bf4) = in_stack_00000038;
	*(undefined4 *)(mi + 0x10149be8) = *(undefined4 *)(mi + 0x10149bc0);
	*(undefined4 *)(mi + 0x10149c08) = 0;
	return;
}

void AddHeal(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	int *piVar1;
	char cVar2;
	undefined8 uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	uVar3 = 0x100f8fd0;
	iVar4 = random('9', 10);
	iVar7 = id * 0x55ec;
	iVar4 = (iVar4 + 1) * 0x40;
	iVar6 = 0;
	while (iVar6 < (int)*(char *)((int)plr + iVar7 + 0x1b4)) {
		iVar5 = random('9', 4);
		iVar6 = iVar6 + 1;
		iVar4 = iVar4 + (iVar5 + 1) * 0x40;
	}
	iVar6 = 0;
	while (true) {
		iVar5 = (int)uVar3;
		if (*(int *)(mi * 0xb4 + 0x10149ba4) <= iVar6)
			break;
		iVar5 = random('9', 6);
		iVar6 = iVar6 + 1;
		iVar4 = iVar4 + (iVar5 + 1) * 0x40;
	}
	cVar2 = *(char *)((int)plr + iVar7 + 0x15c);
	if (cVar2 == '\0') {
		iVar4 = iVar4 << 1;
	}
	if (cVar2 == '\x01') {
		iVar4 = iVar4 + (iVar4 >> 1);
	}
	*(int *)((int)plr + iVar7 + 0x194) = *(int *)((int)plr + iVar7 + 0x194) + iVar4;
	piVar1 = (int *)((int)plr + iVar7 + 0x194);
	iVar6 = *(int *)((int)plr + iVar7 + 0x198);
	if (iVar6 < *piVar1) {
		*piVar1 = iVar6;
	}
	*(int *)((int)plr + iVar7 + 0x18c) = *(int *)((int)plr + iVar7 + 0x18c) + iVar4;
	piVar1 = (int *)((int)plr + iVar7 + 0x18c);
	iVar4 = *(int *)((int)plr + iVar7 + 400);
	if (iVar4 < *piVar1) {
		*piVar1 = iVar4;
	}
	UseMana(id, 2);
	**(undefined4 **)(iVar5 + -0x76f0) = 1;
	*(undefined4 *)(mi * 0xb4 + 0x10149ba8) = 1;
	return;
}

void AddHealOther(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	*(undefined4 *)(mi * 0xb4 + 0x10149ba8) = 1;
	UseMana(id, 0x22);
	if (id == **(int **)(iVar1 + -0x77ac)) {
		NewCursor(10);
	}
	return;
}

void AddElement(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	int *piVar1;
	uint uVar2;
	ulonglong uVar3;
	ulonglong uVar4;
	int iVar5;
	int iVar6;
	int dir;
	int iVar7;

	dir = 0x100f8fd0;
	if ((sx == dx) && (sy == dy)) {
		dx = dx + *(int *)(&DAT_10107c10 + midir * 4);
		dy = dy + *(int *)(&DAT_10107c30 + midir * 4);
	}
	iVar5 = random('<', 10);
	iVar6 = random('<', 10);
	iVar7 = mi * 0xb4;
	piVar1 = (int *)(iVar7 + 0x10149bf4);
	*piVar1 = (iVar6 + iVar5 + 2 + (int)*(char *)(*(int *)(dir + -0x77a8) + id * 0x55ec + 0x1b4)) * 2;
	uVar2 = *(uint *)(iVar7 + 0x10149ba4);
	uVar3 = (ulonglong)uVar2;
	if (0 < (int)uVar2) {
		uVar4 = (ulonglong)(uVar2 >> 3);
		if (uVar2 >> 3 != 0) {
			do {
				*(int *)(iVar7 + 0x10149bf4) = *(int *)(iVar7 + 0x10149bf4) + (*(int *)(iVar7 + 0x10149bf4) >> 3);
				*(int *)(iVar7 + 0x10149bf4) = *(int *)(iVar7 + 0x10149bf4) + (*(int *)(iVar7 + 0x10149bf4) >> 3);
				*(int *)(iVar7 + 0x10149bf4) = *(int *)(iVar7 + 0x10149bf4) + (*(int *)(iVar7 + 0x10149bf4) >> 3);
				*(int *)(iVar7 + 0x10149bf4) = *(int *)(iVar7 + 0x10149bf4) + (*(int *)(iVar7 + 0x10149bf4) >> 3);
				*(int *)(iVar7 + 0x10149bf4) = *(int *)(iVar7 + 0x10149bf4) + (*(int *)(iVar7 + 0x10149bf4) >> 3);
				*(int *)(iVar7 + 0x10149bf4) = *(int *)(iVar7 + 0x10149bf4) + (*(int *)(iVar7 + 0x10149bf4) >> 3);
				*(int *)(iVar7 + 0x10149bf4) = *(int *)(iVar7 + 0x10149bf4) + (*(int *)(iVar7 + 0x10149bf4) >> 3);
				*(int *)(iVar7 + 0x10149bf4) = *(int *)(iVar7 + 0x10149bf4) + (*(int *)(iVar7 + 0x10149bf4) >> 3);
				uVar4 = uVar4 - 1;
			} while (uVar4 != 0);
			uVar3 = uVar3 & 7;
			if ((uVar2 & 7) == 0)
				goto LAB_100622f8;
		}
		do {
			*(int *)(iVar7 + 0x10149bf4) = *(int *)(iVar7 + 0x10149bf4) + (*(int *)(iVar7 + 0x10149bf4) >> 3);
			uVar3 = uVar3 - 1;
		} while (uVar3 != 0);
	}
LAB_100622f8:
	*piVar1 = *piVar1 >> 1;
	GetMissileVel(mi, sx, sy, dx, dy, 0x10);
	dir = GetDirection8(sx, sy, dx, dy);
	SetMissDir(mi, dir);
	*(undefined4 *)(iVar7 + 0x10149be8) = 0x100;
	*(int *)(iVar7 + 0x10149c08) = sx;
	*(int *)(iVar7 + 0x10149c0c) = sy;
	*(undefined4 *)(iVar7 + 0x10149c10) = 0;
	*(int *)(iVar7 + 0x10149c14) = dx;
	*(int *)(iVar7 + 0x10149c18) = dy;
	dir = AddLight(sx, sy, 8);
	*(int *)(iVar7 + 0x10149c00) = dir;
	UseMana(id, 0x1d);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddIdentify(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	*(undefined4 *)(mi * 0xb4 + 0x10149ba8) = 1;
	UseMana(id, 5);
	if (id == **(int **)(iVar1 + -0x77ac)) {
		if (_DAT_10128158 != 0) {
			_DAT_10128158 = 0;
		}
		if (_DAT_1013c970 == 0) {
			_DAT_1013c970 = 1;
		}
		NewCursor(2);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddFirewallC(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	short sVar1;
	undefined8 uVar2;
	BOOL BVar3;
	longlong lVar4;
	undefined8 in_r13;
	undefined8 unaff_r14;
	undefined8 unaff_r15;
	undefined8 unaff_r16;
	undefined8 unaff_r17;
	undefined8 unaff_r18;
	int iVar5;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	ulonglong uVar6;
	undefined8 unaff_r29;
	char *pcVar7;
	undefined8 unaff_r30;
	int x2;
	undefined8 unaff_r31;
	int y2;
	int id_00;
	int local_68[4];
	undefined4 local_58;
	undefined4 local_54;
	undefined4 local_4c;
	undefined4 uStack72;
	undefined4 uStack68;
	undefined4 uStack64;
	undefined4 uStack60;
	undefined4 uStack56;
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

	lVar4 = (longlong)midir;
	uVar2 = 0x100f8fd0;
	local_4c = (undefined4)((ulonglong)in_r13 >> 0x20);
	uStack72 = (undefined4)((ulonglong)unaff_r14 >> 0x20);
	uStack68 = (undefined4)((ulonglong)unaff_r15 >> 0x20);
	uStack64 = (undefined4)((ulonglong)unaff_r16 >> 0x20);
	uStack60 = (undefined4)((ulonglong)unaff_r17 >> 0x20);
	uStack56 = (undefined4)((ulonglong)unaff_r18 >> 0x20);
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
	mi = mi * 0xb4;
	iVar5 = 0;
	local_68[0] = _DAT_10107fc4;
	local_68[1] = uRam10107fc8;
	local_68[2] = uRam10107fcc;
	local_68[3] = uRam10107fd0;
	local_58 = uRam10107fd4;
	local_54 = uRam10107fd8;
	*(int *)(mi + 0x10149ba8) = 1;
	id_00 = id;
	do {
		if (5 < iVar5) {
			if (*(int *)(mi + 0x10149ba8) != 1) {
				mi = *(int *)((int)uVar2 + -0x7664) + mi;
				*(undefined4 *)(mi + 0xac) = 0;
				*(undefined4 *)(mi + 0xb0) = 0;
				*(uint *)(mi + 0x9c) = (int)lVar4 - 2U & 7;
				*(uint *)(mi + 0xa0) = (int)lVar4 + 2U & 7;
				*(undefined4 *)(mi + 0x74) = 7;
				UseMana(id_00, 6);
			}
			return;
		}
		uVar6 = (ulonglong)(byte)(&DAT_1012054c)[local_68[iVar5]];
		pcVar7 = (char *)(local_68[iVar5] + 0x1012054d);
		while (true) {
			if ((int)uVar6 < 1)
				break;
			y2 = dy + (int)pcVar7[1];
			if ((((0 < (longlong)dx + (longlong)*pcVar7) && (x2 = (int)((longlong)dx + (longlong)*pcVar7), x2 < 0x70)) && (0 < y2)) && (y2 < 0x70)) {
				sVar1 = *(short *)(_DAT_1012f1d4 + x2 * 0xe0 + y2 * 2);
				BVar3 = LineClear(sx, sy, x2, y2);
				if (((BVar3 != 0) && ((sx != x2 || (sy != y2)))) && (((ulonglong)(byte)(&DAT_10130b33)[(int)sVar1] | (longlong) * (char *)(_DAT_1012f1ac + x2 * 0x70 + y2)) == 0)) {
					*(int *)(mi + 0x10149c08) = x2;
					iVar5 = 6;
					*(int *)(mi + 0x10149c0c) = y2;
					*(int *)(mi + 0x10149c18) = x2;
					*(int *)(mi + 0x10149c1c) = y2;
					*(undefined4 *)(mi + 0x10149ba8) = 0;
					break;
				}
			}
			pcVar7 = pcVar7 + 2;
			uVar6 = uVar6 - 1;
		}
		iVar5 = iVar5 + 1;
	} while (true);
}

void AddInfra(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	uint uVar1;
	int iVar2;
	ulonglong uVar3;
	ulonglong uVar4;

	mi = mi * 0xb4;
	*(undefined4 *)(mi + 0x10149be8) = 0x630;
	uVar1 = *(uint *)(mi + 0x10149ba4);
	uVar3 = (ulonglong)uVar1;
	if (0 < (int)uVar1) {
		uVar4 = (ulonglong)(uVar1 >> 3);
		if (uVar1 >> 3 != 0) {
			do {
				*(int *)(mi + 0x10149be8) = *(int *)(mi + 0x10149be8) + (*(int *)(mi + 0x10149be8) >> 3);
				*(int *)(mi + 0x10149be8) = *(int *)(mi + 0x10149be8) + (*(int *)(mi + 0x10149be8) >> 3);
				*(int *)(mi + 0x10149be8) = *(int *)(mi + 0x10149be8) + (*(int *)(mi + 0x10149be8) >> 3);
				*(int *)(mi + 0x10149be8) = *(int *)(mi + 0x10149be8) + (*(int *)(mi + 0x10149be8) >> 3);
				*(int *)(mi + 0x10149be8) = *(int *)(mi + 0x10149be8) + (*(int *)(mi + 0x10149be8) >> 3);
				*(int *)(mi + 0x10149be8) = *(int *)(mi + 0x10149be8) + (*(int *)(mi + 0x10149be8) >> 3);
				*(int *)(mi + 0x10149be8) = *(int *)(mi + 0x10149be8) + (*(int *)(mi + 0x10149be8) >> 3);
				*(int *)(mi + 0x10149be8) = *(int *)(mi + 0x10149be8) + (*(int *)(mi + 0x10149be8) >> 3);
				uVar4 = uVar4 - 1;
			} while (uVar4 != 0);
			uVar3 = uVar3 & 7;
			if ((uVar1 & 7) == 0)
				goto LAB_10062700;
		}
		do {
			*(int *)(mi + 0x10149be8) = *(int *)(mi + 0x10149be8) + (*(int *)(mi + 0x10149be8) >> 3);
			uVar3 = uVar3 - 1;
		} while (uVar3 != 0);
	}
LAB_10062700:
	iVar2 = *(int *)(mi + 0x10149be8);
	*(int *)(mi + 0x10149be8) = iVar2 + (*(int *)((int)plr + id * 0x55ec + 0x5574) * iVar2 >> 7);
	if (mienemy == '\0') {
		UseMana(id, 9);
	}
	return;
}

void AddWave(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	mi = mi * 0xb4;
	*(int *)(mi + 0x10149c08) = dx;
	*(int *)(mi + 0x10149c0c) = dy;
	*(undefined4 *)(mi + 0x10149c10) = 0;
	*(undefined4 *)(mi + 0x10149c14) = 0;
	*(undefined4 *)(mi + 0x10149be8) = 1;
	*(undefined4 *)(mi + 0x10149bd4) = 4;
	UseMana(id, 0xf);
	return;
}

void AddNova(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	uint uVar1;
	byte *pbVar2;
	ulonglong uVar3;
	ulonglong uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar10 = 0x100f8fd0;
	iVar5 = 0x100f8fd0;
	mi = mi * 0xb4;
	*(int *)(mi + 0x10149c08) = dx;
	*(int *)(mi + 0x10149c0c) = dy;
	if (id == -1) {
		iVar10 = random('B', 3);
		iVar6 = random('B', 3);
		iVar7 = random('B', 3);
		pbVar2 = *(byte **)(iVar5 + -0x77e4);
		*(int *)(mi + 0x10149bf4) = iVar6 + iVar10 + iVar7;
		*(int *)(mi + 0x10149bf4) = *(int *)(mi + 0x10149bf4) + ((int)(uint)*pbVar2 >> 1);
		goto LAB_10062984;
	}
	iVar5 = random('B', 6);
	iVar6 = random('B', 6);
	iVar7 = random('B', 6);
	iVar8 = random('B', 6);
	iVar9 = random('B', 6);
	iVar10 = *(int *)(iVar10 + -0x77a8);
	*(int *)(mi + 0x10149bf4) = iVar6 + iVar5 + iVar7 + iVar8 + iVar9;
	*(int *)(mi + 0x10149bf4) = (int)*(char *)(iVar10 + id * 0x55ec + 0x1b4) + *(int *)(mi + 0x10149bf4) + 5;
	*(int *)(mi + 0x10149bf4) = *(int *)(mi + 0x10149bf4) >> 1;
	uVar1 = *(uint *)(mi + 0x10149ba4);
	uVar3 = (ulonglong)uVar1;
	if (0 < (int)uVar1) {
		uVar4 = (ulonglong)(uVar1 >> 3);
		if (uVar1 >> 3 != 0) {
			do {
				*(int *)(mi + 0x10149bf4) = *(int *)(mi + 0x10149bf4) + (*(int *)(mi + 0x10149bf4) >> 3);
				*(int *)(mi + 0x10149bf4) = *(int *)(mi + 0x10149bf4) + (*(int *)(mi + 0x10149bf4) >> 3);
				*(int *)(mi + 0x10149bf4) = *(int *)(mi + 0x10149bf4) + (*(int *)(mi + 0x10149bf4) >> 3);
				*(int *)(mi + 0x10149bf4) = *(int *)(mi + 0x10149bf4) + (*(int *)(mi + 0x10149bf4) >> 3);
				*(int *)(mi + 0x10149bf4) = *(int *)(mi + 0x10149bf4) + (*(int *)(mi + 0x10149bf4) >> 3);
				*(int *)(mi + 0x10149bf4) = *(int *)(mi + 0x10149bf4) + (*(int *)(mi + 0x10149bf4) >> 3);
				*(int *)(mi + 0x10149bf4) = *(int *)(mi + 0x10149bf4) + (*(int *)(mi + 0x10149bf4) >> 3);
				*(int *)(mi + 0x10149bf4) = *(int *)(mi + 0x10149bf4) + (*(int *)(mi + 0x10149bf4) >> 3);
				uVar4 = uVar4 - 1;
			} while (uVar4 != 0);
			uVar3 = uVar3 & 7;
			if ((uVar1 & 7) == 0)
				goto LAB_1006291c;
		}
		do {
			*(int *)(mi + 0x10149bf4) = *(int *)(mi + 0x10149bf4) + (*(int *)(mi + 0x10149bf4) >> 3);
			uVar3 = uVar3 - 1;
		} while (uVar3 != 0);
	}
LAB_1006291c:
	if (mienemy == '\0') {
		UseMana(id, 0x12);
	}
LAB_10062984:
	*(undefined4 *)(mi + 0x10149be8) = 1;
	return;
}

void miss_null_1F(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	*(undefined4 *)(mi * 0xb4 + 0x10149ba8) = 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddRepair(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	*(undefined4 *)(mi * 0xb4 + 0x10149ba8) = 1;
	UseMana(id, 0x1a);
	if (id == **(int **)(iVar1 + -0x77ac)) {
		if (_DAT_10128158 != 0) {
			_DAT_10128158 = 0;
		}
		if (_DAT_1013c970 == 0) {
			_DAT_1013c970 = 1;
		}
		NewCursor(3);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddRecharge(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	*(undefined4 *)(mi * 0xb4 + 0x10149ba8) = 1;
	UseMana(id, 0x1b);
	if (id == **(int **)(iVar1 + -0x77ac)) {
		if (_DAT_10128158 != 0) {
			_DAT_10128158 = 0;
		}
		if (_DAT_1013c970 == 0) {
			_DAT_1013c970 = 1;
		}
		NewCursor(4);
	}
	return;
}

void AddDisarm(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	*(undefined4 *)(mi * 0xb4 + 0x10149ba8) = 1;
	UseMana(id, 0x1c);
	if (id == **(int **)(iVar1 + -0x77ac)) {
		NewCursor(5);
	}
	return;
}

void AddApoca(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	int *piVar1;
	int *piVar2;
	int *piVar3;
	int iVar4;
	int iVar5;

	mi = mi * 0xb4;
	*(undefined4 *)(mi + 0x10149c08) = 8;
	*(int *)(mi + 0x10149c0c) = sy - *(int *)(mi + 0x10149c08);
	piVar1 = (int *)(mi + 0x10149c10);
	*piVar1 = sy + *(int *)(mi + 0x10149c08);
	*(int *)(mi + 0x10149c14) = sx - *(int *)(mi + 0x10149c08);
	piVar2 = (int *)(mi + 0x10149c18);
	*piVar2 = sx + *(int *)(mi + 0x10149c08);
	piVar3 = (int *)(mi + 0x10149c14);
	*(int *)(mi + 0x10149c1c) = *piVar3;
	if (*(int *)(mi + 0x10149c0c) < 1) {
		*(int *)(mi + 0x10149c0c) = 1;
	}
	if (0x6f < *piVar1) {
		*piVar1 = 0x6f;
	}
	if (*piVar3 < 1) {
		*piVar3 = 1;
	}
	if (0x6f < *piVar2) {
		*piVar2 = 0x6f;
	}
	iVar5 = 0;
	while (iVar5 < (int)*(char *)((int)plr + id * 0x55ec + 0x1b4)) {
		iVar4 = random('C', 6);
		iVar5 = iVar5 + 1;
		*(int *)(mi + 0x10149bf4) = iVar4 + *(int *)(mi + 0x10149bf4) + 1;
	}
	*(undefined4 *)(mi + 0x10149be8) = 0xff;
	*(undefined4 *)(mi + 0x10149ba8) = 0;
	UseMana(id, 0x18);
	return;
}

void AddFlame(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	byte *pbVar1;
	ulonglong uVar2;
	ulonglong uVar3;
	int iVar4;
	int iVar5;
	uint in_stack_00000038;

	iVar5 = 0x100f8fd0;
	mi = mi * 0xb4;
	uVar2 = (ulonglong)in_stack_00000038;
	*(undefined4 *)(mi + 0x10149c0c) = 0;
	if (in_stack_00000038 != 0) {
		uVar3 = (ulonglong)(in_stack_00000038 >> 3);
		if (in_stack_00000038 >> 3 != 0) {
			do {
				*(int *)(mi + 0x10149c0c) = *(int *)(mi + 0x10149c0c) + 5;
				*(int *)(mi + 0x10149c0c) = *(int *)(mi + 0x10149c0c) + 5;
				*(int *)(mi + 0x10149c0c) = *(int *)(mi + 0x10149c0c) + 5;
				*(int *)(mi + 0x10149c0c) = *(int *)(mi + 0x10149c0c) + 5;
				*(int *)(mi + 0x10149c0c) = *(int *)(mi + 0x10149c0c) + 5;
				*(int *)(mi + 0x10149c0c) = *(int *)(mi + 0x10149c0c) + 5;
				*(int *)(mi + 0x10149c0c) = *(int *)(mi + 0x10149c0c) + 5;
				*(int *)(mi + 0x10149c0c) = *(int *)(mi + 0x10149c0c) + 5;
				uVar3 = uVar3 - 1;
			} while (uVar3 != 0);
			uVar2 = uVar2 & 7;
			if ((in_stack_00000038 & 7) == 0)
				goto LAB_10062d6c;
		}
		do {
			*(int *)(mi + 0x10149c0c) = *(int *)(mi + 0x10149c0c) + 5;
			uVar2 = uVar2 - 1;
		} while (uVar2 != 0);
	}
LAB_10062d6c:
	*(int *)(mi + 0x10149b90) = dx;
	midir = midir * 0xb4;
	*(int *)(mi + 0x10149b94) = dy;
	*(undefined4 *)(mi + 0x10149b80) = *(undefined4 *)(midir + 0x10149b80);
	*(undefined4 *)(mi + 0x10149b84) = *(undefined4 *)(midir + 0x10149b84);
	*(undefined4 *)(mi + 0x10149b98) = *(undefined4 *)(midir + 0x10149b98);
	*(undefined4 *)(mi + 0x10149b9c) = *(undefined4 *)(midir + 0x10149b9c);
	*(int *)(mi + 0x10149be8) = *(int *)(mi + 0x10149c0c) + 0x14;
	iVar4 = AddLight(sx, sy, 1);
	*(int *)(mi + 0x10149c00) = iVar4;
	if (mienemy == '\0') {
		iVar4 = random('O', 2);
		iVar5 = random('O', (int)*(char *)(*(int *)(iVar5 + -0x77a8) + id * 0x55ec + 0x1b4));
		*(int *)(mi + 0x10149bf4) = (iVar5 + iVar4 + 2) * 8;
		*(int *)(mi + 0x10149bf4) = *(int *)(mi + 0x10149bf4) + (*(int *)(mi + 0x10149bf4) >> 1);
	} else {
		pbVar1 = (byte *)(id * 0xe8 + 0x10151af9);
		iVar5 = random('M', ((uint) * (byte *)(id * 0xe8 + 0x10151afa) - (uint)*pbVar1) + 1);
		*(int *)(mi + 0x10149bf4) = (uint)*pbVar1 + iVar5;
	}
	return;
}

void AddFlamec(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	if ((sx == dx) && (sy == dy)) {
		dx = dx + *(int *)(&DAT_10107c10 + midir * 4);
		dy = dy + *(int *)(&DAT_10107c30 + midir * 4);
	}
	GetMissileVel(mi, sx, sy, dx, dy, 0x20);
	if (mienemy == '\0') {
		UseMana(id, 0x14);
	}
	mi = mi * 0xb4;
	*(int *)(mi + 0x10149c08) = sx;
	*(int *)(mi + 0x10149c0c) = sy;
	*(undefined4 *)(mi + 0x10149c10) = 0;
	*(undefined4 *)(mi + 0x10149be8) = 0x100;
	return;
}

void AddCbolt(int mi, int sx, int sy, int dx, int dy, int midir, char micaster, int id, int dam)

{
	int iVar1;
	int iVar2;

	iVar2 = 0x100f8fd0;
	if (micaster == '\0') {
		if (id == myplr) {
			iVar2 = 0x100f8fd0;
			iVar1 = random('?', 0xf);
			*(int *)(mi * 0xb4 + 0x10149c04) = iVar1 + 1;
		} else {
			iVar2 = 0x100f8fd0;
			iVar1 = random('?', 0xf);
			*(int *)(mi * 0xb4 + 0x10149c04) = iVar1 + 1;
		}
		iVar1 = random('D', *(int *)(*(int *)(iVar2 + -0x77a8) + id * 0x55ec + 0x168) >> 2);
		*(int *)(mi * 0xb4 + 0x10149bf4) = iVar1 + 1;
	} else {
		iVar1 = random('?', 0xf);
		*(int *)(mi * 0xb4 + 0x10149c04) = iVar1 + 1;
		*(undefined4 *)(mi * 0xb4 + 0x10149bf4) = 0xf;
	}
	if ((sx == dx) && (sy == dy)) {
		dx = dx + *(int *)(*(int *)(iVar2 + -0x70d8) + midir * 4);
		dy = dy + *(int *)(*(int *)(iVar2 + -0x70dc) + midir * 4);
	}
	iVar2 = random('?', 8);
	iVar1 = mi * 0xb4;
	*(int *)(iVar1 + 0x10149bd4) = iVar2 + 1;
	iVar2 = AddLight(sx, sy, 5);
	*(int *)(iVar1 + 0x10149c00) = iVar2;
	GetMissileVel(mi, sx, sy, dx, dy, 8);
	*(undefined4 *)(iVar1 + 0x10149c08) = 5;
	*(int *)(iVar1 + 0x10149c0c) = midir;
	*(undefined4 *)(iVar1 + 0x10149c10) = 0;
	*(undefined4 *)(iVar1 + 0x10149be8) = 0x100;
	return;
}

void AddHbolt(int mi, int sx, int sy, int dx, int dy, int midir, char micaster, int id, int dam)

{
	int iVar1;
	int v;

	iVar1 = 0x100f8fd0;
	if ((sx == dx) && (sy == dy)) {
		dx = dx + *(int *)(&DAT_10107c10 + midir * 4);
		dy = dy + *(int *)(&DAT_10107c30 + midir * 4);
	}
	if (id == -1) {
		v = 0x10;
	} else {
		v = *(int *)(mi * 0xb4 + 0x10149ba4) * 2 + 0x10;
		if (0x3e < v) {
			v = 0x3f;
		}
	}
	GetMissileVel(mi, sx, sy, dx, dy, v);
	v = GetDirection16(sx, sy, dx, dy);
	SetMissDir(mi, v);
	mi = mi * 0xb4;
	*(undefined4 *)(mi + 0x10149be8) = 0x100;
	*(int *)(mi + 0x10149c08) = sx;
	*(int *)(mi + 0x10149c0c) = sy;
	v = AddLight(sx, sy, 8);
	*(int *)(mi + 0x10149c00) = v;
	v = random('E', 10);
	*(int *)(mi + 0x10149bf4) = v + (int)*(char *)(*(int *)(iVar1 + -0x77a8) + id * 0x55ec + 0x1b4) + 9;
	UseMana(id, 0x1f);
	return;
}

void AddResurrect(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	UseMana(id, 0x20);
	if (id == **(int **)(iVar1 + -0x77ac)) {
		NewCursor(8);
	}
	*(undefined4 *)(*(int *)(iVar1 + -0x7664) + mi * 0xb4 + 0x34) = 1;
	return;
}

void AddResurrectBeam(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	mi = mi * 0xb4;
	*(int *)(mi + 0x10149b78) = dx;
	*(int *)(mi + 0x10149b7c) = dy;
	*(undefined4 *)(mi + 0x10149b90) = *(undefined4 *)(mi + 0x10149b78);
	*(undefined4 *)(mi + 0x10149b94) = *(undefined4 *)(mi + 0x10149b7c);
	*(undefined4 *)(mi + 0x10149b88) = 0;
	*(undefined4 *)(mi + 0x10149b8c) = 0;
	*(uint *)(mi + 0x10149be8) = (uint)bRam10106fc8;
	return;
}

void AddTelekinesis(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	*(undefined4 *)(mi * 0xb4 + 0x10149ba8) = 1;
	UseMana(id, 0x21);
	if (id == **(int **)(iVar1 + -0x77ac)) {
		NewCursor(7);
	}
	return;
}

void AddBoneSpirit(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	undefined4 *puVar1;
	int iVar2;
	int iVar3;
	int dir;

	iVar3 = 0x100f8fd0;
	if ((sx == dx) && (sy == dy)) {
		dx = dx + *(int *)(&DAT_10107c10 + midir * 4);
		dy = dy + *(int *)(&DAT_10107c30 + midir * 4);
	}
	iVar2 = mi * 0xb4;
	*(undefined4 *)(iVar2 + 0x10149bf4) = 0;
	GetMissileVel(mi, sx, sy, dx, dy, 0x10);
	dir = GetDirection8(sx, sy, dx, dy);
	SetMissDir(mi, dir);
	*(undefined4 *)(iVar2 + 0x10149be8) = 0x100;
	*(int *)(iVar2 + 0x10149c08) = sx;
	*(int *)(iVar2 + 0x10149c0c) = sy;
	*(undefined4 *)(iVar2 + 0x10149c10) = 0;
	*(int *)(iVar2 + 0x10149c14) = dx;
	*(int *)(iVar2 + 0x10149c18) = dy;
	dir = AddLight(sx, sy, 8);
	*(int *)(iVar2 + 0x10149c00) = dir;
	if (mienemy == '\0') {
		UseMana(id, 0x24);
		iVar2 = id * 0x55ec;
		puVar1 = *(undefined4 **)(iVar3 + -0x76f0);
		*(int *)((int)plr + iVar2 + 0x194) = *(int *)((int)plr + iVar2 + 0x194) + -0x180;
		*(int *)((int)plr + iVar2 + 0x18c) = *(int *)((int)plr + iVar2 + 0x18c) + -0x180;
		*puVar1 = 1;
		if (*(int *)((int)plr + iVar2 + 0x194) < 1) {
			SyncPlrKill(id, 0);
		}
	}
	return;
}

void AddRportal(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	int iVar1;

	iVar1 = mi * 0xb4;
	*(int *)(iVar1 + 0x10149b78) = sx;
	*(int *)(iVar1 + 0x10149b7c) = sy;
	*(int *)(iVar1 + 0x10149b90) = sx;
	*(int *)(iVar1 + 0x10149b94) = sy;
	*(undefined4 *)(iVar1 + 0x10149be8) = 100;
	*(int *)(iVar1 + 0x10149c08) = *(int *)(iVar1 + 0x10149be8) - *(int *)(iVar1 + 0x10149bc0);
	*(undefined4 *)(iVar1 + 0x10149c0c) = 0;
	PutMissile(mi);
	return;
}

void AddDiabApoca(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam)

{
	undefined8 uVar1;
	BOOL BVar2;
	int iVar3;
	PlayerStruct *pPVar4;
	int midam;
	int spllvl;

	uVar1 = 0x100f8fd0;
	pPVar4 = plr;
	iVar3 = 0;
	while (iVar3 < (int)(uint)(byte)gbMaxPlayers) {
		if ((pPVar4->plractive != false) && (BVar2 = LineClear(sx, sy, pPVar4->_px, pPVar4->_py), BVar2 != 0)) {
			AddMissile(0, 0, pPVar4->_px, pPVar4->_py, 0, 0x42, mienemy, id, midam, spllvl);
		}
		pPVar4 = (PlayerStruct *)&pPVar4[1]._pSpellFlags;
		iVar3 = iVar3 + 1;
	}
	*(undefined4 *)(*(int *)((int)uVar1 + -0x7664) + mi * 0xb4 + 0x34) = 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int AddMissile(int sx, int sy, int dx, int dy, int midir, int mitype, char micaster, int id, int midam, int spllvl)

{
	int iVar1;
	ulonglong uVar2;
	int mi;
	int *piVar3;
	int iVar4;
	undefined4 in_stack_00000038;
	undefined4 in_stack_0000003c;

	mi = _DAT_101491a8;
	piVar3 = (int *)&DAT_1014939c;
	uVar2 = (ulonglong)_DAT_10149b70;
	if ((int)_DAT_10149b70 < 0x7d) {
		if ((mitype == 0xd) && (*(char *)((int)plr + id * 0x55ec + 0x5594) == '\x01')) {
			if ((uint)currlevel != *(uint *)((int)plr + id * 0x55ec + 0x34)) {
				return -1;
			}
			if (0 < (int)_DAT_10149b70) {
				do {
					if ((*(int *)(&DAT_10149b74 + *piVar3 * 0xb4) == 0xd) && (id == *(int *)(*piVar3 * 0xb4 + 0x10149bec))) {
						return -1;
					}
					piVar3 = piVar3 + 1;
					uVar2 = uVar2 - 1;
				} while (uVar2 != 0);
			}
		}
		iVar4 = _DAT_101491a8 * 0xb4;
		iVar1 = *(int *)(&DAT_101491a8 + (0x7c - _DAT_10149b70) * 4);
		*(int *)(&DAT_1014939c + _DAT_10149b70 * 4) = _DAT_101491a8;
		_DAT_101491a8 = iVar1;
		_DAT_10149b70 = _DAT_10149b70 + 1;
		*(int *)(&DAT_10149b74 + iVar4) = mitype;
		*(int *)(iVar4 + 0x10149bf0) = (int)micaster;
		*(int *)(iVar4 + 0x10149bec) = id;
		*(uchar *)(iVar4 + 0x10149bac) = missiledata[mitype].mFileNum;
		*(BOOL *)(iVar4 + 0x10149bd8) = missiledata[mitype].mDraw;
		*(undefined4 *)(iVar4 + 0x10149ba4) = in_stack_0000003c;
		*(int *)(iVar4 + 0x10149ba0) = midir;
		if ((*(byte *)(iVar4 + 0x10149bac) == 0xff) || (*(byte *)((uint) * (byte *)(iVar4 + 0x10149bac) * 300 + 0x101044fd) < 8)) {
			SetMissDir(mi, 0);
		} else {
			SetMissDir(mi, midir);
		}
		*(int *)(iVar4 + 0x10149b78) = sx;
		*(int *)(iVar4 + 0x10149b7c) = sy;
		*(undefined4 *)(iVar4 + 0x10149b80) = 0;
		*(undefined4 *)(iVar4 + 0x10149b84) = 0;
		*(int *)(iVar4 + 0x10149b90) = sx;
		*(int *)(iVar4 + 0x10149b94) = sy;
		*(undefined4 *)(iVar4 + 0x10149b98) = 0;
		*(undefined4 *)(iVar4 + 0x10149b9c) = 0;
		*(undefined4 *)(iVar4 + 0x10149ba8) = 0;
		*(undefined4 *)(iVar4 + 0x10149bd0) = 1;
		*(undefined4 *)(iVar4 + 0x10149bdc) = 0;
		*(undefined4 *)(iVar4 + 0x10149be0) = 0;
		*(undefined4 *)(iVar4 + 0x10149be4) = 0;
		*(undefined4 *)(iVar4 + 0x10149bf4) = in_stack_00000038;
		*(undefined4 *)(iVar4 + 0x10149bf8) = 0;
		*(undefined4 *)(iVar4 + 0x10149bfc) = 0;
		*(undefined4 *)(iVar4 + 0x10149c00) = 0xffffffff;
		*(undefined4 *)(iVar4 + 0x10149c04) = 0;
		if (missiledata[mitype].mlSFX != -1) {
			PlaySfxLoc(missiledata[mitype].mlSFX, *(int *)(iVar4 + 0x10149b78), *(int *)(iVar4 + 0x10149b7c));
		}
		fnMenu(mi);
	} else {
		mi = -1;
	}
	return mi;
}

int Sentfire(int i, int sx, int sy)

{
	int *piVar1;
	short sVar2;
	int iVar3;
	BOOL BVar4;
	int midir;
	int iVar5;
	int midam;
	int spllvl;

	iVar3 = 0x100f8fd0;
	iVar5 = i * 0xb4;
	midir = 0;
	piVar1 = (int *)(iVar5 + 0x10149b78);
	BVar4 = LineClear(*piVar1, *(int *)(iVar5 + 0x10149b7c), sx, sy);
	if (BVar4 != 0) {
		sVar2 = *(short *)(**(int **)(iVar3 + -0x767c) + sx * 0xe0 + sy * 2);
		if (((0 < sVar2) && (*(int *)(*(int *)(iVar3 + -0x7754) + (int)sVar2 * 0xe8 + -0x50) >> 6 != 0)) && (3 < (int)sVar2 + -1)) {
			midir = GetDirection(*piVar1, *(int *)(iVar5 + 0x10149b7c), sx, sy);
			*(undefined4 *)(iVar5 + 0x10149c10) = **(undefined4 **)(iVar3 + -0x7150);
			GetSpellLevel(*(int *)(iVar5 + 0x10149bec), 1);
			AddMissile(*piVar1, *(int *)(iVar5 + 0x10149b7c), sx, sy, midir, 1, '\0', *(int *)(iVar5 + 0x10149bec), midam,
			    spllvl);
			midir = -1;
		}
	}
	if (midir == -1) {
		SetMissDir(i, 2);
		*(undefined4 *)(iVar5 + 0x10149c0c) = 3;
	}
	return midir;
}

void MI_Dummy(int i)

{
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void MI_Golem(int i)

{
	short sVar1;
	int i_00;
	int iVar2;
	BOOL BVar3;
	longlong lVar4;
	undefined8 unaff_r14;
	int y2;
	undefined8 unaff_r15;
	int x2;
	undefined8 unaff_r16;
	ulonglong uVar5;
	undefined8 unaff_r17;
	int iVar6;
	undefined8 unaff_r18;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	int iVar7;
	undefined8 unaff_r21;
	char *pcVar8;
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
	int local_68[4];
	undefined4 local_58;
	undefined4 local_54;
	undefined4 local_48;
	undefined4 uStack68;
	undefined4 uStack64;
	undefined4 uStack60;
	undefined4 uStack56;
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

	local_48 = (undefined4)((ulonglong)unaff_r14 >> 0x20);
	uStack68 = (undefined4)((ulonglong)unaff_r15 >> 0x20);
	uStack64 = (undefined4)((ulonglong)unaff_r16 >> 0x20);
	uStack60 = (undefined4)((ulonglong)unaff_r17 >> 0x20);
	uStack56 = (undefined4)((ulonglong)unaff_r18 >> 0x20);
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
	iVar7 = i * 0xb4;
	local_68[0] = _DAT_10107fdc;
	local_68[1] = uRam10107fe0;
	local_68[2] = uRam10107fe4;
	local_68[3] = uRam10107fe8;
	local_58 = uRam10107fec;
	local_54 = uRam10107ff0;
	i_00 = *(int *)(iVar7 + 0x10149bec);
	iVar6 = i_00 * 0xe8;
	if ((*(int *)(iVar6 + 0x10151a50) == 1) && (*(int *)(iVar6 + 0x10151a54) == 0)) {
		iVar6 = 0;
		while (iVar6 < 6) {
			uVar5 = (ulonglong)(byte)(&DAT_1012054c)[local_68[iVar6]];
			pcVar8 = (char *)(local_68[iVar6] + 0x1012054d);
			while (true) {
				if ((int)uVar5 < 1)
					break;
				lVar4 = (longlong)*pcVar8 + (ulonglong) * (uint *)(iVar7 + 0x10149c14);
				y2 = (int)pcVar8[1] + *(int *)(iVar7 + 0x10149c18);
				if ((((0 < lVar4) && (x2 = (int)lVar4, x2 < 0x70)) && (0 < y2)) && (y2 < 0x70)) {
					iVar2 = x2 * 0xe0 + y2 * 2;
					sVar1 = *(short *)(_DAT_1012f1d4 + iVar2);
					BVar3 = LineClear(*(int *)(iVar7 + 0x10149c08), *(int *)(iVar7 + 0x10149c0c), x2, y2);
					if ((BVar3 != 0) && (((longlong) * (char *)(_DAT_1012f1ac + x2 * 0x70 + y2) | (ulonglong)(byte)(&DAT_10130b33)[(int)sVar1] | (longlong) * (short *)(_DAT_1012f1b4 + iVar2)) == 0)) {
						iVar6 = 6;
						SpawnGolum(i_00, x2, y2, i);
						break;
					}
				}
				pcVar8 = pcVar8 + 2;
				uVar5 = uVar5 - 1;
			}
			iVar6 = iVar6 + 1;
		}
	}
	*(undefined4 *)(iVar7 + 0x10149ba8) = 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void MI_SetManashield(int i)

{
	_DAT_101491a4 = 1;
	return;
}

void MI_LArrow(int i)

{
	int *piVar1;
	uchar uVar2;
	int maxdam;
	int maxdam_00;
	uint maxdam_01;
	int mindam;
	int iVar3;
	uint mindam_00;
	int *piVar4;

	iVar3 = i * 0xb4;
	piVar1 = (int *)(iVar3 + 0x10149be8);
	*piVar1 = *(int *)(iVar3 + 0x10149be8) + -1;
	maxdam = *(int *)(iVar3 + 0x10149bec);
	if ((*(char *)(iVar3 + 0x10149bac) == '\x1a') || (*(char *)(iVar3 + 0x10149bac) == '\x05')) {
		piVar4 = (int *)(&DAT_10149b74 + iVar3);
		ChangeLight(*(int *)(iVar3 + 0x10149c00), *(int *)(iVar3 + 0x10149b78), *(int *)(iVar3 + 0x10149b7c),
		    *(int *)(iVar3 + 0x10149bd4) + 5);
		uVar2 = missiledata[*piVar4].mResist;
		if (*piVar4 == 0x38) {
			if (maxdam == -1) {
				mindam = random('D', 10);
				mindam = (uint)currlevel + mindam + 1;
				maxdam_00 = random('D', 10);
				maxdam_00 = (uint)currlevel * 2 + maxdam_00 + 1;
			} else {
				mindam = *(int *)((int)plr + maxdam * 0x55ec + 0x5584);
				maxdam_00 = *(int *)((int)plr + maxdam * 0x55ec + 0x5588);
			}
			missiledata[56].mResist = '\x02';
			CheckMissileCol(i, mindam, maxdam_00, 0, *(int *)(iVar3 + 0x10149b78), *(int *)(iVar3 + 0x10149b7c), true);
		}
		if (*piVar4 == 0x1b) {
			if (maxdam == -1) {
				maxdam = random('D', 10);
				mindam = (uint)currlevel + maxdam + 1;
				maxdam = random('D', 10);
				maxdam = (uint)currlevel * 2 + maxdam + 1;
			} else {
				mindam = *(int *)((int)plr + maxdam * 0x55ec + 0x557c);
				maxdam = *(int *)((int)plr + maxdam * 0x55ec + 0x5580);
			}
			missiledata[27].mResist = '\x01';
			CheckMissileCol(i, mindam, maxdam, 0, *(int *)(iVar3 + 0x10149b78), *(int *)(iVar3 + 0x10149b7c), true);
		}
		missiledata[*piVar4].mResist = uVar2;
	} else {
		*(int *)(iVar3 + 0x10149bfc) = *(int *)(iVar3 + 0x10149bfc) + 1;
		*(int *)(iVar3 + 0x10149b98) = *(int *)(iVar3 + 0x10149b98) + *(int *)(iVar3 + 0x10149b88);
		*(int *)(iVar3 + 0x10149b9c) = *(int *)(iVar3 + 0x10149b9c) + *(int *)(iVar3 + 0x10149b8c);
		GetMissilePos(i);
		if (maxdam == -1) {
			maxdam = random('D', 10);
			mindam_00 = (uint)currlevel + maxdam + 1;
			maxdam = random('D', 10);
			maxdam_01 = (uint)currlevel * 2 + maxdam + 1;
		} else {
			if (*(int *)(iVar3 + 0x10149bf0) == 0) {
				mindam_00 = *(uint *)((int)plr + maxdam * 0x55ec + 0x5544);
				maxdam_01 = *(uint *)((int)plr + maxdam * 0x55ec + 0x5548);
			} else {
				mindam_00 = (uint) * (byte *)(maxdam * 0xe8 + 0x10151af9);
				maxdam_01 = (uint) * (byte *)(maxdam * 0xe8 + 0x10151afa);
			}
		}
		maxdam = *(int *)(iVar3 + 0x10149b78);
		if ((maxdam != *(int *)(iVar3 + 0x10149b90)) || (*(int *)(iVar3 + 0x10149b7c) != *(int *)(iVar3 + 0x10149b94))) {
			uVar2 = missiledata[*(int *)(&DAT_10149b74 + iVar3)].mResist;
			missiledata[*(int *)(&DAT_10149b74 + iVar3)].mResist = '\0';
			CheckMissileCol(i, mindam_00, maxdam_01, 0, maxdam, *(int *)(iVar3 + 0x10149b7c), false);
			missiledata[*(int *)(&DAT_10149b74 + iVar3)].mResist = uVar2;
		}
		if (*piVar1 == 0) {
			*(undefined4 *)(iVar3 + 0x10149ba0) = 0;
			*(int *)(iVar3 + 0x10149b98) = *(int *)(iVar3 + 0x10149b98) - *(int *)(iVar3 + 0x10149b88);
			*(int *)(iVar3 + 0x10149b9c) = *(int *)(iVar3 + 0x10149b9c) - *(int *)(iVar3 + 0x10149b8c);
			GetMissilePos(i);
			if (*(int *)(&DAT_10149b74 + iVar3) == 0x38) {
				SetMissAnim(i, 0x1a);
				*piVar1 = *(int *)(iVar3 + 0x10149bc0) + -1;
			} else {
				SetMissAnim(i, 5);
				*piVar1 = *(int *)(iVar3 + 0x10149bc0) + -1;
			}
		} else {
			piVar4 = (int *)(iVar3 + 0x10149c08);
			if ((*(int *)(iVar3 + 0x10149b78) != *piVar4) || (*(int *)(iVar3 + 0x10149b7c) != *(int *)(iVar3 + 0x10149c0c))) {
				*piVar4 = *(int *)(iVar3 + 0x10149b78);
				*(undefined4 *)(iVar3 + 0x10149c0c) = *(undefined4 *)(iVar3 + 0x10149b7c);
				ChangeLight(*(int *)(iVar3 + 0x10149c00), *piVar4, *(int *)(iVar3 + 0x10149c0c), 5);
			}
		}
	}
	if (*piVar1 == 0) {
		*(undefined4 *)(iVar3 + 0x10149ba8) = 1;
		AddUnLight(*(int *)(iVar3 + 0x10149c00));
	}
	PutMissile(i);
	return;
}

void MI_Arrow(int i)

{
	int iVar1;
	int iVar2;
	uint mindam;
	uint maxdam;
	int iVar3;

	iVar2 = 0x100f8fd0;
	iVar3 = i * 0xb4;
	*(int *)(iVar3 + 0x10149be8) = *(int *)(iVar3 + 0x10149be8) + -1;
	*(int *)(iVar3 + 0x10149bfc) = *(int *)(iVar3 + 0x10149bfc) + 1;
	*(int *)(iVar3 + 0x10149b98) = *(int *)(iVar3 + 0x10149b98) + *(int *)(iVar3 + 0x10149b88);
	*(int *)(iVar3 + 0x10149b9c) = *(int *)(iVar3 + 0x10149b9c) + *(int *)(iVar3 + 0x10149b8c);
	GetMissilePos(i);
	iVar1 = *(int *)(iVar3 + 0x10149bec);
	if (iVar1 == -1) {
		mindam = (uint) * *(byte **)(iVar2 + -0x77e4);
		maxdam = (uint) * *(byte **)(iVar2 + -0x77e4) << 1;
	} else {
		if (*(int *)(iVar3 + 0x10149bf0) == 0) {
			mindam = *(uint *)((int)plr + iVar1 * 0x55ec + 0x5544);
			maxdam = *(uint *)((int)plr + iVar1 * 0x55ec + 0x5548);
		} else {
			mindam = (uint) * (byte *)(iVar1 * 0xe8 + 0x10151af9);
			maxdam = (uint) * (byte *)(iVar1 * 0xe8 + 0x10151afa);
		}
	}
	if ((*(int *)(iVar3 + 0x10149b78) != *(int *)(iVar3 + 0x10149b90)) || (*(int *)(iVar3 + 0x10149b7c) != *(int *)(iVar3 + 0x10149b94))) {
		CheckMissileCol(i, mindam, maxdam, 0, *(int *)(iVar3 + 0x10149b78), *(int *)(iVar3 + 0x10149b7c), false);
	}
	if (*(int *)(iVar3 + 0x10149be8) == 0) {
		*(undefined4 *)(iVar3 + 0x10149ba8) = 1;
	}
	PutMissile(i);
	return;
}

void MI_Firebolt(int i)

{
	int *piVar1;
	byte *pbVar2;
	int *piVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int mindam;
	int *piVar8;
	int *piVar9;
	int iVar10;
	int midam;
	int spllvl;

	iVar10 = i * 0xb4;
	piVar9 = (int *)(&DAT_10149b74 + iVar10);
	piVar1 = (int *)(iVar10 + 0x10149be8);
	*piVar1 = *(int *)(iVar10 + 0x10149be8) + -1;
	if ((*piVar9 == 0x3f) && (*(int *)(iVar10 + 0x10149ba0) == 8)) {
		if (*piVar1 == 0) {
			if (-1 < *(int *)(iVar10 + 0x10149c00)) {
				AddUnLight(*(int *)(iVar10 + 0x10149c00));
			}
			*(undefined4 *)(iVar10 + 0x10149ba8) = 1;
			PlaySfxLoc(0x5e, *(int *)(iVar10 + 0x10149b78), *(int *)(iVar10 + 0x10149b7c));
		}
		PutMissile(i);
	} else {
		iVar4 = *(int *)(iVar10 + 0x10149b98);
		iVar5 = *(int *)(iVar10 + 0x10149b9c);
		*(int *)(iVar10 + 0x10149b98) = iVar4 + *(int *)(iVar10 + 0x10149b88);
		*(int *)(iVar10 + 0x10149b9c) = *(int *)(iVar10 + 0x10149b9c) + *(int *)(iVar10 + 0x10149b8c);
		GetMissilePos(i);
		piVar8 = (int *)(iVar10 + 0x10149bec);
		iVar7 = *(int *)(iVar10 + 0x10149bec);
		if (iVar7 == -1) {
			iVar7 = random('N', (uint)currlevel << 1);
			mindam = (uint)currlevel + iVar7;
		} else {
			if (*(int *)(iVar10 + 0x10149bf0) == 0) {
				iVar6 = *piVar9;
				if (iVar6 == 0x18) {
					iVar7 = *(int *)((int)plr + iVar7 * 0x55ec + 0x168);
					mindam = ((iVar7 >> 1) - (iVar7 >> 3)) + *(int *)(iVar10 + 0x10149ba4) * 3;
				} else {
					if (iVar6 < 0x18) {
						if (iVar6 == 1) {
							iVar6 = random('K', 10);
							mindam = iVar6 + (*(int *)((int)plr + iVar7 * 0x55ec + 0x168) >> 3) + *(int *)(iVar10 + 0x10149ba4) + 1;
						}
					} else {
						if (iVar6 == 0x3f) {
							mindam = 0;
						}
					}
				}
			} else {
				pbVar2 = (byte *)(iVar7 * 0xe8 + 0x10151af9);
				iVar7 = random('M', ((uint) * (byte *)(iVar7 * 0xe8 + 0x10151afa) - (uint)*pbVar2) + 1);
				mindam = (uint)*pbVar2 + iVar7;
			}
		}
		piVar3 = (int *)(iVar10 + 0x10149b78);
		if ((*piVar3 != *(int *)(iVar10 + 0x10149b90)) || (*(int *)(iVar10 + 0x10149b7c) != *(int *)(iVar10 + 0x10149b94))) {
			CheckMissileCol(i, mindam, mindam, 0, *piVar3, *(int *)(iVar10 + 0x10149b7c), false);
		}
		if (*piVar1 == 0) {
			*(undefined4 *)(iVar10 + 0x10149ba8) = 1;
			*(int *)(iVar10 + 0x10149b98) = iVar4;
			*(int *)(iVar10 + 0x10149b9c) = iVar5;
			GetMissilePos(i);
			iVar4 = *piVar9;
			if (iVar4 == 0x18) {
				AddMissile(*piVar3, *(int *)(iVar10 + 0x10149b7c), i, 0, *(int *)(iVar10 + 0x10149ba0), 0x19,
				    (char)*(undefined4 *)(iVar10 + 0x10149bf0), *piVar8, midam, spllvl);
			} else {
				if (iVar4 < 0x18) {
					if ((iVar4 == 0x15) || ((iVar4 < 0x15 && (iVar4 == 1)))) {
						AddMissile(*piVar3, *(int *)(iVar10 + 0x10149b7c), i, 0, *(int *)(iVar10 + 0x10149ba0), 9,
						    (char)*(undefined4 *)(iVar10 + 0x10149bf0), *piVar8, midam, spllvl);
					}
				} else {
					if (iVar4 == 0x3f) {
						SetMissDir(i, 8);
						*piVar1 = 7;
						*(undefined4 *)(iVar10 + 0x10149ba8) = 0;
						PutMissile(i);
						return;
					}
					if ((iVar4 < 0x3f) && (iVar4 == 0x39)) {
						AddMissile(*piVar3, *(int *)(iVar10 + 0x10149b7c), i, 0, *(int *)(iVar10 + 0x10149ba0), 0x3a,
						    (char)*(undefined4 *)(iVar10 + 0x10149bf0), *piVar8, midam, spllvl);
					}
				}
			}
			if (-1 < *(int *)(iVar10 + 0x10149c00)) {
				AddUnLight(*(int *)(iVar10 + 0x10149c00));
			}
		} else {
			piVar1 = (int *)(iVar10 + 0x10149c08);
			if ((*piVar3 != *piVar1) || (*(int *)(iVar10 + 0x10149b7c) != *(int *)(iVar10 + 0x10149c0c))) {
				*piVar1 = *piVar3;
				*(undefined4 *)(iVar10 + 0x10149c0c) = *(undefined4 *)(iVar10 + 0x10149b7c);
				if (-1 < *(int *)(iVar10 + 0x10149c00)) {
					ChangeLight(*(int *)(iVar10 + 0x10149c00), *piVar1, *(int *)(iVar10 + 0x10149c0c), 8);
				}
			}
		}
		PutMissile(i);
	}
	return;
}

void MI_Lightball(int i)

{
	char cVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int *piVar6;
	int iVar7;

	iVar5 = 0x100f8fd0;
	iVar7 = i * 0xb4;
	piVar6 = (int *)(iVar7 + 0x10149be8);
	iVar4 = *(int *)(iVar7 + 0x10149c08);
	iVar2 = *(int *)(iVar7 + 0x10149c0c);
	*(int *)(iVar7 + 0x10149be8) = *(int *)(iVar7 + 0x10149be8) + -1;
	*(int *)(iVar7 + 0x10149b98) = *(int *)(iVar7 + 0x10149b98) + *(int *)(iVar7 + 0x10149b88);
	*(int *)(iVar7 + 0x10149b9c) = *(int *)(iVar7 + 0x10149b9c) + *(int *)(iVar7 + 0x10149b8c);
	GetMissilePos(i);
	iVar3 = *piVar6;
	CheckMissileCol(i, *(int *)(iVar7 + 0x10149bf4), *(int *)(iVar7 + 0x10149bf4), 0, *(int *)(iVar7 + 0x10149b78),
	    *(int *)(iVar7 + 0x10149b7c), false);
	if (*(int *)(iVar7 + 0x10149bf8) == 1) {
		*piVar6 = iVar3;
	}
	cVar1 = *(char *)(**(int **)(iVar5 + -0x7684) + iVar4 * 0x70 + iVar2);
	if ((cVar1 != '\0') && (iVar4 == *(int *)(iVar7 + 0x10149b78))) {
		if (iVar2 == *(int *)(iVar7 + 0x10149b7c)) {
			if (cVar1 < '\x01') {
				iVar4 = -((int)cVar1 + 1);
			} else {
				iVar4 = (int)cVar1 + -1;
			}
			iVar4 = *(int *)(*(int *)(iVar5 + -0x7688) + iVar4 * 0x78);
			if ((iVar4 == 0x3b) || (iVar4 == 0x3c)) {
				*piVar6 = iVar3;
			}
		}
	}
	if (*piVar6 == 0) {
		*(undefined4 *)(iVar7 + 0x10149ba8) = 1;
	}
	PutMissile(i);
	return;
}

void mi_null_33(int i)

{
	int iVar1;

	iVar1 = i * 0xb4;
	*(int *)(iVar1 + 0x10149be8) = *(int *)(iVar1 + 0x10149be8) + -1;
	*(int *)(iVar1 + 0x10149b98) = *(int *)(iVar1 + 0x10149b98) + *(int *)(iVar1 + 0x10149b88);
	*(int *)(iVar1 + 0x10149b9c) = *(int *)(iVar1 + 0x10149b9c) + *(int *)(iVar1 + 0x10149b8c);
	GetMissilePos(i);
	CheckMissileCol(i, *(int *)(iVar1 + 0x10149bf4), *(int *)(iVar1 + 0x10149bf4), 0, *(int *)(iVar1 + 0x10149b78),
	    *(int *)(iVar1 + 0x10149b7c), false);
	if (*(int *)(iVar1 + 0x10149be8) == 0) {
		*(undefined4 *)(iVar1 + 0x10149ba8) = 1;
	}
	PutMissile(i);
	return;
}

void MI_Acidpud(int i)

{
	int *piVar1;
	int iVar2;
	int iVar3;

	iVar3 = i * 0xb4;
	*(int *)(iVar3 + 0x10149be8) = *(int *)(iVar3 + 0x10149be8) + -1;
	piVar1 = (int *)(iVar3 + 0x10149be8);
	iVar2 = *piVar1;
	CheckMissileCol(i, *(int *)(iVar3 + 0x10149bf4), *(int *)(iVar3 + 0x10149bf4), 1, *(int *)(iVar3 + 0x10149b78),
	    *(int *)(iVar3 + 0x10149b7c), false);
	*piVar1 = iVar2;
	if (*piVar1 == 0) {
		if (*(int *)(iVar3 + 0x10149ba0) == 0) {
			SetMissDir(i, 1);
			*piVar1 = *(int *)(iVar3 + 0x10149bc0);
		} else {
			*(undefined4 *)(iVar3 + 0x10149ba8) = 1;
		}
	}
	PutMissile(i);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: stack

void MI_Firewall(int i)

{
	int iVar1;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	int *piVar2;
	undefined8 unaff_r30;
	int iVar3;
	undefined8 unaff_r31;
	int local_58[4];
	undefined4 local_48;
	undefined4 local_44;
	undefined4 local_40;
	undefined4 local_3c;
	undefined4 local_38;
	undefined4 local_34;
	undefined4 local_30;
	undefined4 local_2c;
	undefined4 local_28;
	undefined4 local_24;
	undefined4 local_1c;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	local_1c = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	iVar3 = i * 0xb4;
	local_58[0] = _DAT_10107ff4;
	local_58[1] = uRam10107ff8;
	local_58[2] = uRam10107ffc;
	local_58[3] = uRam10108000;
	local_48 = uRam10108004;
	local_44 = uRam10108008;
	local_40 = uRam1010800c;
	local_3c = uRam10108010;
	local_38 = uRam10108014;
	local_34 = uRam10108018;
	local_30 = uRam1010801c;
	local_2c = uRam10108020;
	local_28 = uRam10108024;
	local_24 = uRam10108028;
	*(int *)(iVar3 + 0x10149be8) = *(int *)(iVar3 + 0x10149be8) + -1;
	piVar2 = (int *)(iVar3 + 0x10149be8);
	if (*piVar2 == *(int *)(iVar3 + 0x10149c08)) {
		SetMissDir(i, 1);
		iVar1 = random('S', 0xb);
		*(int *)(iVar3 + 0x10149bd4) = iVar1 + 1;
	}
	if (*piVar2 == *(int *)(iVar3 + 0x10149bc0) + -1) {
		SetMissDir(i, 0);
		*(undefined4 *)(iVar3 + 0x10149bd4) = 0xd;
		*(undefined4 *)(iVar3 + 0x10149bd0) = 0xffffffff;
	}
	CheckMissileCol(i, *(int *)(iVar3 + 0x10149bf4), *(int *)(iVar3 + 0x10149bf4), 1, *(int *)(iVar3 + 0x10149b78),
	    *(int *)(iVar3 + 0x10149b7c), true);
	if (*piVar2 == 0) {
		*(undefined4 *)(iVar3 + 0x10149ba8) = 1;
		AddUnLight(*(int *)(iVar3 + 0x10149c00));
	}
	if (((*(int *)(iVar3 + 0x10149ba0) != 0) && (*piVar2 != 0)) && (*(int *)(iVar3 + 0x10149bd0) != -1)) {
		piVar2 = (int *)(iVar3 + 0x10149c0c);
		if (*(int *)(iVar3 + 0x10149c0c) < 0xc) {
			if (*(int *)(iVar3 + 0x10149c0c) == 0) {
				iVar1 = AddLight(*(int *)(iVar3 + 0x10149b78), *(int *)(iVar3 + 0x10149b7c), local_58[0]);
				*(int *)(iVar3 + 0x10149c00) = iVar1;
			}
			ChangeLight(*(int *)(iVar3 + 0x10149c00), *(int *)(iVar3 + 0x10149b78), *(int *)(iVar3 + 0x10149b7c),
			    local_58[*piVar2]);
			*piVar2 = *piVar2 + 1;
		}
	}
	PutMissile(i);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void MI_Fireball(int i)

{
	int *piVar1;
	int mindam;
	int x;
	int y;
	int fy;
	int fx;
	int iVar2;
	BOOL BVar3;
	int *piVar4;
	int *piVar5;
	int iVar6;

	iVar2 = 0x100f8fd0;
	iVar6 = i * 0xb4;
	piVar5 = (int *)(iVar6 + 0x10149be8);
	mindam = *(int *)(iVar6 + 0x10149bf4);
	*(int *)(iVar6 + 0x10149be8) = *(int *)(iVar6 + 0x10149be8) + -1;
	if (*(int *)(iVar6 + 0x10149bf0) == 0) {
		fy = *(int *)(iVar6 + 0x10149bec) * 0x55ec;
		fx = *(int *)((int)plr + fy + 0x38);
		fy = *(int *)((int)plr + fy + 0x3c);
	} else {
		fy = *(int *)(iVar6 + 0x10149bec) * 0xe8;
		fx = *(int *)(fy + 0x10151a50);
		fy = *(int *)(fy + 0x10151a54);
	}
	if (*(char *)(iVar6 + 0x10149bac) == '\x13') {
		if (*piVar5 == 0) {
			*(undefined4 *)(iVar6 + 0x10149ba8) = 1;
			AddUnLight(*(int *)(iVar6 + 0x10149c00));
		}
		PutMissile(i);
	} else {
		*(int *)(iVar6 + 0x10149b98) = *(int *)(iVar6 + 0x10149b98) + *(int *)(iVar6 + 0x10149b88);
		*(int *)(iVar6 + 0x10149b9c) = *(int *)(iVar6 + 0x10149b9c) + *(int *)(iVar6 + 0x10149b8c);
		GetMissilePos(i);
		piVar4 = (int *)(iVar6 + 0x10149b78);
		if ((*(int *)(iVar6 + 0x10149b78) != *(int *)(iVar6 + 0x10149b90)) || (*(int *)(iVar6 + 0x10149b7c) != *(int *)(iVar6 + 0x10149b94))) {
			CheckMissileCol(i, mindam, mindam, 0, *(int *)(iVar6 + 0x10149b78), *(int *)(iVar6 + 0x10149b7c), false);
		}
		if (*piVar5 == 0) {
			x = *piVar4;
			piVar1 = (int *)(iVar6 + 0x10149b7c);
			y = *piVar1;
			ChangeLight(*(int *)(iVar6 + 0x10149c00), x, y, *(int *)(iVar6 + 0x10149bd4));
			BVar3 = CheckBlock(fx, fy, x, y);
			if (BVar3 == 0) {
				CheckMissileCol(i, mindam, mindam, 0, x, y, true);
			}
			BVar3 = CheckBlock(fx, fy, x, y + 1);
			if (BVar3 == 0) {
				CheckMissileCol(i, mindam, mindam, 0, x, y + 1, true);
			}
			BVar3 = CheckBlock(fx, fy, x, y + -1);
			if (BVar3 == 0) {
				CheckMissileCol(i, mindam, mindam, 0, x, y + -1, true);
			}
			BVar3 = CheckBlock(fx, fy, x + 1, y);
			if (BVar3 == 0) {
				CheckMissileCol(i, mindam, mindam, 0, x + 1, y, true);
			}
			BVar3 = CheckBlock(fx, fy, x + 1, y + -1);
			if (BVar3 == 0) {
				CheckMissileCol(i, mindam, mindam, 0, x + 1, y + -1, true);
			}
			BVar3 = CheckBlock(fx, fy, x + 1, y + 1);
			if (BVar3 == 0) {
				CheckMissileCol(i, mindam, mindam, 0, x + 1, y + 1, true);
			}
			BVar3 = CheckBlock(fx, fy, x + -1, y);
			if (BVar3 == 0) {
				CheckMissileCol(i, mindam, mindam, 0, x + -1, y, true);
			}
			BVar3 = CheckBlock(fx, fy, x + -1, y + 1);
			if (BVar3 == 0) {
				CheckMissileCol(i, mindam, mindam, 0, x + -1, y + 1, true);
			}
			BVar3 = CheckBlock(fx, fy, x + -1, y + -1);
			if (BVar3 == 0) {
				CheckMissileCol(i, mindam, mindam, 0, x + -1, y + -1, true);
			}
			fx = x * 0x70;
			mindam = **(int **)(iVar2 + -0x7588);
			if (((&DAT_1012f1d8)[(int)*(char *)(mindam + fx + y)] == '\0') || ((*(int *)(iVar6 + 0x10149b88) < 0 && ((((&DAT_1012f1d8)[(int)*(char *)(mindam + fx + y + 1)] != '\0' && ((&DAT_10130b33)[(int)*(short *)(_DAT_1012f1d4 + x * 0xe0 + y * 2 + 2)] != '\0')) || (((&DAT_1012f1d8)[(int)*(char *)(mindam + fx + y + -1)] != '\0' && ((&DAT_10130b33)[(int)*(short *)(_DAT_1012f1d4 + x * 0xe0 + y * 2 + -2)] != '\0')))))))) {
				*piVar4 = *piVar4 + 1;
				*piVar1 = *piVar1 + 1;
				*(int *)(iVar6 + 0x10149b84) = *(int *)(iVar6 + 0x10149b84) + -0x20;
			}
			if ((0 < *(int *)(iVar6 + 0x10149b8c)) && ((((&DAT_1012f1d8)[(int)*(char *)(mindam + fx + y + 0x70)] != '\0' && ((&DAT_10130b33)[(int)*(short *)(_DAT_1012f1d4 + x * 0xe0 + y * 2 + 0xe0)] != '\0')) || (((&DAT_1012f1d8)[(int)*(char *)(mindam + fx + y + -0x70)] != '\0' && ((&DAT_10130b33)[(int)*(short *)(_DAT_1012f1d4 + x * 0xe0 + y * 2 + -0xe0)] != '\0')))))) {
				*(int *)(iVar6 + 0x10149b84) = *(int *)(iVar6 + 0x10149b84) + -0x20;
			}
			if ((0 < *(int *)(iVar6 + 0x10149b88)) && ((((&DAT_1012f1d8)[(int)*(char *)(mindam + fx + y + 1)] != '\0' && ((&DAT_10130b33)[(int)*(short *)(_DAT_1012f1d4 + x * 0xe0 + y * 2 + 2)] != '\0')) || (((&DAT_1012f1d8)[(int)*(char *)(mindam + fx + y + -1)] != '\0' && ((&DAT_10130b33)[(int)*(short *)(_DAT_1012f1d4 + x * 0xe0 + y * 2 + -2)] != '\0')))))) {
				*(int *)(iVar6 + 0x10149b80) = *(int *)(iVar6 + 0x10149b80) + -0x20;
			}
			*(undefined4 *)(iVar6 + 0x10149ba0) = 0;
			SetMissAnim(i, 0x13);
			*piVar5 = *(int *)(iVar6 + 0x10149bc0) + -1;
		} else {
			piVar5 = (int *)(iVar6 + 0x10149c08);
			if ((*piVar4 != *piVar5) || (*(int *)(iVar6 + 0x10149b7c) != *(int *)(iVar6 + 0x10149c0c))) {
				*piVar5 = *piVar4;
				*(undefined4 *)(iVar6 + 0x10149c0c) = *(undefined4 *)(iVar6 + 0x10149b7c);
				ChangeLight(*(int *)(iVar6 + 0x10149c00), *piVar5, *(int *)(iVar6 + 0x10149c0c), 8);
			}
		}
		PutMissile(i);
	}
	return;
}

void MI_Lightctrl(int i)

{
	int *piVar1;
	byte bVar2;
	short sVar3;
	int iVar4;
	int iVar5;
	int id;
	char micaster;
	int *piVar6;
	int *piVar7;
	int iVar8;
	int midam;
	int spllvl;

	id = 0x100f8fd0;
	iVar8 = i * 0xb4;
	piVar1 = (int *)(iVar8 + 0x10149be8);
	*piVar1 = *(int *)(iVar8 + 0x10149be8) + -1;
	iVar4 = *(int *)(iVar8 + 0x10149bec);
	if (iVar4 == -1) {
		random('Q', (uint)currlevel);
	} else {
		if (*(int *)(iVar8 + 0x10149bf0) == 0) {
			id = 0x100f8fd0;
			random('O', 2);
			random('O', (int)*(char *)(*(int *)(id + -0x77a8) + iVar4 * 0x55ec + 0x1b4));
		} else {
			random(
			    'P', ((uint) * (byte *)(iVar4 * 0xe8 + 0x10151afa) - (uint) * (byte *)(iVar4 * 0xe8 + 0x10151af9)) + 1);
		}
	}
	*(int *)(iVar8 + 0x10149b98) = *(int *)(iVar8 + 0x10149b98) + *(int *)(iVar8 + 0x10149b88);
	*(int *)(iVar8 + 0x10149b9c) = *(int *)(iVar8 + 0x10149b9c) + *(int *)(iVar8 + 0x10149b8c);
	GetMissilePos(i);
	piVar6 = (int *)(iVar8 + 0x10149b78);
	piVar7 = (int *)(iVar8 + 0x10149b7c);
	iVar4 = *(int *)(iVar8 + 0x10149b78);
	iVar5 = *(int *)(iVar8 + 0x10149b7c);
	sVar3 = *(short *)(**(int **)(id + -0x757c) + iVar4 * 0xe0 + iVar5 * 2);
	if (*(int *)(iVar8 + 0x10149bec) == -1) {
		if (((iVar4 != *(int *)(iVar8 + 0x10149b90)) || (iVar5 != *(int *)(iVar8 + 0x10149b94))) && ((&DAT_1012fb31)[(int)sVar3] != '\0')) {
			*piVar1 = 0;
		}
	} else {
		if ((&DAT_1012fb31)[(int)sVar3] != '\0') {
			*piVar1 = 0;
		}
	}
	if (((((&DAT_1012fb31)[(int)sVar3] == '\0') && ((iVar4 != *(int *)(iVar8 + 0x10149c08) || (iVar5 != *(int *)(iVar8 + 0x10149c0c))))) && (0 < iVar4)) && (((0 < iVar5 && (iVar4 < 0x70)) && (iVar5 < 0x70)))) {
		id = *(int *)(iVar8 + 0x10149bec);
		if (id == -1) {
			AddMissile(*piVar6, *piVar7, *(int *)(iVar8 + 0x10149b90), *(int *)(iVar8 + 0x10149b94), i, 8,
			    (char)*(undefined4 *)(iVar8 + 0x10149bf0), -1, midam, spllvl);
		} else {
			micaster = (char)*(int *)(iVar8 + 0x10149bf0);
			if (((*(int *)(iVar8 + 0x10149bf0) == 1) && (bVar2 = **(byte **)(id * 0xe8 + 0x10151b10), 0x4b < bVar2)) && (bVar2 < 0x50)) {
				AddMissile(*piVar6, *piVar7, *(int *)(iVar8 + 0x10149b90), *(int *)(iVar8 + 0x10149b94), i, 0x17,
				    micaster, id, midam, spllvl);
			} else {
				AddMissile(*piVar6, *piVar7, *(int *)(iVar8 + 0x10149b90), *(int *)(iVar8 + 0x10149b94), i, 8, micaster,
				    id, midam, spllvl);
			}
		}
		*(int *)(iVar8 + 0x10149c08) = *piVar6;
		*(int *)(iVar8 + 0x10149c0c) = *piVar7;
	}
	if (((*piVar1 == 0) || (iVar4 < 1)) || ((iVar5 < 1 || ((0x6f < iVar4 || (0x70 < iVar5)))))) {
		*(undefined4 *)(iVar8 + 0x10149ba8) = 1;
	}
	return;
}

void MI_Lightning(int i)

{
	int *piVar1;
	int iVar2;
	int iVar3;

	iVar3 = i * 0xb4;
	*(int *)(iVar3 + 0x10149be8) = *(int *)(iVar3 + 0x10149be8) + -1;
	piVar1 = (int *)(iVar3 + 0x10149be8);
	iVar2 = *piVar1;
	if ((*(int *)(iVar3 + 0x10149b78) != *(int *)(iVar3 + 0x10149b90)) || (*(int *)(iVar3 + 0x10149b7c) != *(int *)(iVar3 + 0x10149b94))) {
		CheckMissileCol(i, *(int *)(iVar3 + 0x10149bf4), *(int *)(iVar3 + 0x10149bf4), 1, *(int *)(iVar3 + 0x10149b78),
		    *(int *)(iVar3 + 0x10149b7c), false);
	}
	if (*(int *)(iVar3 + 0x10149bf8) == 1) {
		*piVar1 = iVar2;
	}
	if (*piVar1 == 0) {
		*(undefined4 *)(iVar3 + 0x10149ba8) = 1;
		AddUnLight(*(int *)(iVar3 + 0x10149c00));
	}
	PutMissile(i);
	return;
}

void MI_Town(int i)

{
	int *piVar1;
	undefined4 uVar2;
	undefined4 *puVar3;
	undefined4 *puVar4;
	int pnum;
	int iVar5;
	undefined4 *puVar6;
	undefined4 *puVar7;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	int iVar8;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	int *piVar9;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	longlong lVar10;
	undefined4 auStack128[2];
	int local_78[21];
	undefined4 local_24;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	pnum = 0x100f8fd0;
	local_24 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	lVar10 = 8;
	puVar3 = auStack128;
	puVar4 = (undefined4 *)0x10108024;
	do {
		puVar6 = puVar4;
		puVar7 = puVar3;
		uVar2 = puVar6[3];
		puVar7[2] = puVar6[2];
		puVar7[3] = uVar2;
		lVar10 = lVar10 + -1;
		puVar3 = puVar7 + 2;
		puVar4 = puVar6 + 2;
	} while (lVar10 != 0);
	iVar8 = i * 0xb4;
	puVar7[4] = puVar6[4];
	piVar1 = (int *)(iVar8 + 0x10149be8);
	if (1 < *piVar1) {
		*piVar1 = *piVar1 + -1;
	}
	if (*piVar1 == *(int *)(iVar8 + 0x10149c08)) {
		pnum = 0x100f8fd0;
		SetMissDir(i, 1);
	}
	if (((currlevel != 0) && (*(int *)(iVar8 + 0x10149ba0) != 1)) && (*piVar1 != 0)) {
		piVar9 = (int *)(iVar8 + 0x10149c0c);
		if (*(int *)(iVar8 + 0x10149c0c) == 0) {
			iVar5 = AddLight(*(int *)(iVar8 + 0x10149b78), *(int *)(iVar8 + 0x10149b7c), local_78[0]);
			*(int *)(iVar8 + 0x10149c00) = iVar5;
		}
		ChangeLight(
		    *(int *)(iVar8 + 0x10149c00), *(int *)(iVar8 + 0x10149b78), *(int *)(iVar8 + 0x10149b7c), local_78[*piVar9]);
		*piVar9 = *piVar9 + 1;
	}
	piVar9 = *(int **)(pnum + -0x77a8);
	pnum = 0;
	do {
		if (((((*(char *)((int)piVar9 + 0x1d) != '\0') && ((uint)currlevel == piVar9[0xd])) && ((*(char *)((int)piVar9 + 0x13b) == '\0' && ((*piVar9 == 0 && (piVar9[0xe] == *(int *)(iVar8 + 0x10149b78))))))) && (piVar9[0xf] == *(int *)(iVar8 + 0x10149b7c))) && (ClrPlrPath(pnum), pnum == myplr)) {
			NetSendCmdParam1(1, '\x1f', (WORD) * (undefined4 *)(iVar8 + 0x10149bec));
			*piVar9 = 10;
		}
		pnum = pnum + 1;
		piVar9 = piVar9 + 0x157b;
	} while (pnum < 4);
	if (*piVar1 == 0) {
		*(undefined4 *)(iVar8 + 0x10149ba8) = 1;
		AddUnLight(*(int *)(iVar8 + 0x10149c00));
	}
	PutMissile(i);
	return;
}

void MI_Flash(int i)

{
	int *piVar1;
	int *piVar2;
	int *piVar3;
	int iVar4;

	iVar4 = i * 0xb4;
	if ((*(int *)(iVar4 + 0x10149bf0) == 0) && (*(int *)(iVar4 + 0x10149bec) != -1)) {
		*(undefined *)((int)plr + *(int *)(iVar4 + 0x10149bec) * 0x55ec + 0x139) = 1;
	}
	*(int *)(iVar4 + 0x10149be8) = *(int *)(iVar4 + 0x10149be8) + -1;
	piVar1 = (int *)(iVar4 + 0x10149b78);
	piVar2 = (int *)(iVar4 + 0x10149bf4);
	piVar3 = (int *)(iVar4 + 0x10149b7c);
	CheckMissileCol(i, *piVar2, *piVar2, 1, *piVar1 + -1, *piVar3, true);
	CheckMissileCol(i, *piVar2, *piVar2, 1, *piVar1, *piVar3, true);
	CheckMissileCol(i, *piVar2, *piVar2, 1, *piVar1 + 1, *piVar3, true);
	CheckMissileCol(i, *piVar2, *piVar2, 1, *piVar1 + -1, *piVar3 + 1, true);
	CheckMissileCol(i, *piVar2, *piVar2, 1, *piVar1, *piVar3 + 1, true);
	CheckMissileCol(i, *piVar2, *piVar2, 1, *piVar1 + 1, *piVar3 + 1, true);
	if (*(int *)(iVar4 + 0x10149be8) == 0) {
		*(undefined4 *)(iVar4 + 0x10149ba8) = 1;
		if ((*(int *)(iVar4 + 0x10149bf0) == 0) && (*(int *)(iVar4 + 0x10149bec) != -1)) {
			*(undefined *)((int)plr + *(int *)(iVar4 + 0x10149bec) * 0x55ec + 0x139) = 0;
		}
	}
	PutMissile(i);
	return;
}

void MI_Flash2(int i)

{
	int *piVar1;
	int *piVar2;
	int *piVar3;
	int iVar4;

	iVar4 = i * 0xb4;
	if ((*(int *)(iVar4 + 0x10149bf0) == 0) && (*(int *)(iVar4 + 0x10149bec) != -1)) {
		*(undefined *)((int)plr + *(int *)(iVar4 + 0x10149bec) * 0x55ec + 0x139) = 1;
	}
	*(int *)(iVar4 + 0x10149be8) = *(int *)(iVar4 + 0x10149be8) + -1;
	piVar1 = (int *)(iVar4 + 0x10149b78);
	piVar2 = (int *)(iVar4 + 0x10149b7c);
	piVar3 = (int *)(iVar4 + 0x10149bf4);
	CheckMissileCol(i, *piVar3, *piVar3, 1, *piVar1 + -1, *piVar2 + -1, true);
	CheckMissileCol(i, *piVar3, *piVar3, 1, *piVar1, *piVar2 + -1, true);
	CheckMissileCol(i, *piVar3, *piVar3, 1, *piVar1 + 1, *piVar2 + -1, true);
	if (*(int *)(iVar4 + 0x10149be8) == 0) {
		*(undefined4 *)(iVar4 + 0x10149ba8) = 1;
		if ((*(int *)(iVar4 + 0x10149bf0) == 0) && (*(int *)(iVar4 + 0x10149bec) != -1)) {
			*(undefined *)((int)plr + *(int *)(iVar4 + 0x10149bec) * 0x55ec + 0x139) = 0;
		}
	}
	PutMissile(i);
	return;
}

void MI_Manashield(int i)

{
	int *piVar1;
	int *piVar2;
	int pnum;
	undefined4 uVar3;
	undefined4 uVar4;
	int iVar5;
	undefined4 *puVar6;
	uint uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	PlayerStruct *pPVar12;

	iVar9 = 0x100f8fd0;
	iVar11 = i * 0xb4;
	pnum = *(int *)(iVar11 + 0x10149bec);
	iVar10 = pnum * 0x55ec;
	pPVar12 = (PlayerStruct *)((int)plr + iVar10);
	uVar3 = *(undefined4 *)((int)plr + iVar10 + 0x38);
	*(undefined4 *)(iVar11 + 0x10149b78) = uVar3;
	uVar4 = *(undefined4 *)((int)plr + iVar10 + 0x3c);
	*(undefined4 *)(iVar11 + 0x10149b7c) = uVar4;
	*(int *)(iVar11 + 0x10149b98) = *(int *)((int)plr + iVar10 + 0x60) << 0x10;
	*(int *)(iVar11 + 0x10149b9c) = *(int *)((int)plr + iVar10 + 100) << 0x10;
	if (pPVar12->_pmode == 3) {
		*(undefined4 *)(iVar11 + 0x10149b90) = *(undefined4 *)((int)plr + iVar10 + 0x40);
		*(undefined4 *)(iVar11 + 0x10149b94) = *(undefined4 *)((int)plr + iVar10 + 0x44);
	} else {
		*(undefined4 *)(iVar11 + 0x10149b90) = uVar3;
		*(undefined4 *)(iVar11 + 0x10149b94) = uVar4;
	}
	GetMissilePos(i);
	if (pPVar12->_pmode == 3) {
		if (*(int *)((int)plr + iVar10 + 0x70) == 2) {
			*(int *)(iVar11 + 0x10149b78) = *(int *)(iVar11 + 0x10149b78) + 1;
		} else {
			*(int *)(iVar11 + 0x10149b7c) = *(int *)(iVar11 + 0x10149b7c) + 1;
		}
	}
	if (pnum == myplr) {
		piVar1 = (int *)((int)plr + iVar10 + 0x1a8);
		if ((*piVar1 < 1) || (*(char *)((int)plr + iVar10 + 0x1d) == '\0')) {
			*(undefined4 *)(iVar11 + 0x10149be8) = 0;
		}
		iVar5 = *(int *)(iVar11 + 0x10149c08);
		piVar2 = (int *)((int)plr + iVar10 + 0x194);
		if (*piVar2 < iVar5) {
			iVar8 = iVar5 - *piVar2;
			if (0 < *(int *)(iVar11 + 0x10149ba4)) {
				uVar7 = iVar8 / 3 + (iVar8 >> 0x1f);
				iVar8 = iVar8 - (uVar7 + (uVar7 >> 0x1f));
			}
			if (iVar8 < 0) {
				iVar8 = 0;
			}
			puVar6 = *(undefined4 **)(iVar9 + -0x76f0);
			**(undefined4 **)(iVar9 + -0x76f4) = 1;
			*puVar6 = 1;
			if (*piVar1 < iVar8) {
				*piVar2 = iVar5 - (iVar8 - *piVar1);
				*(int *)((int)plr + iVar10 + 0x18c) = *(int *)(iVar11 + 0x10149c0c) - (iVar8 - *piVar1);
				*piVar1 = 0;
				*(int *)((int)plr + iVar10 + 0x1a0) = -(*(int *)((int)plr + iVar10 + 0x1ac) - *(int *)((int)plr + iVar10 + 0x1a4));
				*(undefined4 *)(iVar11 + 0x10149be8) = 0;
				*(undefined4 *)(iVar11 + 0x10149ba8) = 1;
				if (*piVar2 < 0) {
					SetPlayerHitPoints(pnum, 0);
				}
				if ((*piVar2 >> 6 == 0) && (pnum == myplr)) {
					SyncPlrKill(pnum, *(int *)(iVar11 + 0x10149c24));
				}
			} else {
				*piVar2 = iVar5;
				*(undefined4 *)((int)plr + iVar10 + 0x18c) = *(undefined4 *)(iVar11 + 0x10149c0c);
				*piVar1 = *piVar1 - iVar8;
				*(int *)((int)plr + iVar10 + 0x1a0) = *(int *)((int)plr + iVar10 + 0x1a0) - iVar8;
			}
		}
		if ((((pnum == myplr) && (*piVar2 == 0)) && (*(int *)(iVar11 + 0x10149c08) == 0)) && (pPVar12->_pmode != 8)) {
			*(undefined4 *)(iVar11 + 0x10149be8) = 0;
			*(undefined4 *)(iVar11 + 0x10149ba8) = 1;
			SyncPlrKill(pnum, -1);
		}
		*(int *)(iVar11 + 0x10149c08) = *piVar2;
		*(undefined4 *)(iVar11 + 0x10149c0c) = *(undefined4 *)((int)plr + iVar10 + 0x18c);
		if (*(int *)(iVar11 + 0x10149be8) == 0) {
			*(undefined4 *)(iVar11 + 0x10149ba8) = 1;
			NetSendCmd(1, 'Y');
		}
		PutMissile(i);
	} else {
		if ((uint) * *(byte **)(iVar9 + -0x77e4) != *(uint *)((int)plr + iVar10 + 0x34)) {
			*(undefined4 *)(iVar11 + 0x10149ba8) = 1;
		}
		PutMissile(i);
	}
	return;
}

void MI_Etherealize(int i)

{
	byte *pbVar1;
	undefined4 uVar2;
	undefined4 uVar3;
	int iVar4;
	int iVar5;

	iVar5 = i * 0xb4;
	*(int *)(iVar5 + 0x10149be8) = *(int *)(iVar5 + 0x10149be8) + -1;
	iVar4 = *(int *)(iVar5 + 0x10149bec) * 0x55ec;
	uVar2 = *(undefined4 *)((int)plr + iVar4 + 0x38);
	*(undefined4 *)(iVar5 + 0x10149b78) = uVar2;
	uVar3 = *(undefined4 *)((int)plr + iVar4 + 0x3c);
	*(undefined4 *)(iVar5 + 0x10149b7c) = uVar3;
	*(int *)(iVar5 + 0x10149b98) = *(int *)((int)plr + iVar4 + 0x60) << 0x10;
	*(int *)(iVar5 + 0x10149b9c) = *(int *)((int)plr + iVar4 + 100) << 0x10;
	if (((PlayerStruct *)((int)plr + iVar4))->_pmode == 3) {
		*(undefined4 *)(iVar5 + 0x10149b90) = *(undefined4 *)((int)plr + iVar4 + 0x40);
		*(undefined4 *)(iVar5 + 0x10149b94) = *(undefined4 *)((int)plr + iVar4 + 0x44);
	} else {
		*(undefined4 *)(iVar5 + 0x10149b90) = uVar2;
		*(undefined4 *)(iVar5 + 0x10149b94) = uVar3;
	}
	GetMissilePos(i);
	if (((PlayerStruct *)((int)plr + iVar4))->_pmode == 3) {
		if (*(int *)((int)plr + iVar4 + 0x70) == 2) {
			*(int *)(iVar5 + 0x10149b78) = *(int *)(iVar5 + 0x10149b78) + 1;
		} else {
			*(int *)(iVar5 + 0x10149b7c) = *(int *)(iVar5 + 0x10149b7c) + 1;
		}
	}
	pbVar1 = (byte *)((int)plr + iVar4 + 0x11c);
	*pbVar1 = *(byte *)((int)plr + iVar4 + 0x11c) | 1;
	if ((*(int *)(iVar5 + 0x10149be8) == 0) || (*(int *)((int)plr + iVar4 + 0x194) < 1)) {
		*(undefined4 *)(iVar5 + 0x10149ba8) = 1;
		*pbVar1 = *pbVar1 & 0xfe;
	}
	PutMissile(i);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: stack

void MI_Firemove(int i)

{
	int *piVar1;
	int *piVar2;
	int *piVar3;
	int iVar4;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	int *piVar5;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	int iVar6;
	undefined8 unaff_r31;
	int local_68[4];
	undefined4 local_58;
	undefined4 local_54;
	undefined4 local_50;
	undefined4 local_4c;
	undefined4 local_48;
	undefined4 local_44;
	undefined4 local_40;
	undefined4 local_3c;
	undefined4 local_38;
	undefined4 local_34;
	undefined4 local_24;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	local_24 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	iVar6 = i * 0xb4;
	local_68[0] = _DAT_10108070;
	local_68[1] = uRam10108074;
	local_68[2] = uRam10108078;
	local_68[3] = uRam1010807c;
	local_58 = uRam10108080;
	local_54 = uRam10108084;
	local_50 = uRam10108088;
	local_4c = uRam1010808c;
	local_48 = uRam10108090;
	local_44 = uRam10108094;
	local_40 = uRam10108098;
	local_3c = uRam1010809c;
	local_38 = uRam101080a0;
	local_34 = uRam101080a4;
	piVar1 = (int *)(iVar6 + 0x10149b78);
	*piVar1 = *(int *)(iVar6 + 0x10149b78) + -1;
	piVar2 = (int *)(iVar6 + 0x10149b7c);
	*piVar2 = *(int *)(iVar6 + 0x10149b7c) + -1;
	piVar3 = (int *)(iVar6 + 0x10149b84);
	*piVar3 = *(int *)(iVar6 + 0x10149b84) + 0x20;
	*(int *)(iVar6 + 0x10149c08) = *(int *)(iVar6 + 0x10149c08) + 1;
	if (*(int *)(iVar6 + 0x10149c08) == *(int *)(iVar6 + 0x10149bc0)) {
		SetMissDir(i, 1);
		iVar4 = random('R', 0xb);
		*(int *)(iVar6 + 0x10149bd4) = iVar4 + 1;
	}
	*(int *)(iVar6 + 0x10149b98) = *(int *)(iVar6 + 0x10149b98) + *(int *)(iVar6 + 0x10149b88);
	*(int *)(iVar6 + 0x10149b9c) = *(int *)(iVar6 + 0x10149b9c) + *(int *)(iVar6 + 0x10149b8c);
	GetMissilePos(i);
	piVar5 = (int *)(iVar6 + 0x10149be8);
	iVar4 = *(int *)(iVar6 + 0x10149be8);
	CheckMissileCol(i, *(int *)(iVar6 + 0x10149bf4), *(int *)(iVar6 + 0x10149bf4), 0, *piVar1, *piVar2, false);
	if (*(int *)(iVar6 + 0x10149bf8) == 1) {
		*piVar5 = iVar4;
	}
	if (*piVar5 == 0) {
		*(undefined4 *)(iVar6 + 0x10149ba8) = 1;
		AddUnLight(*(int *)(iVar6 + 0x10149c00));
	}
	if ((*(int *)(iVar6 + 0x10149ba0) == 0) && (*piVar5 != 0)) {
		piVar5 = (int *)(iVar6 + 0x10149c0c);
		if (*(int *)(iVar6 + 0x10149c0c) == 0) {
			iVar4 = AddLight(*piVar1, *piVar2, local_68[0]);
			*(int *)(iVar6 + 0x10149c00) = iVar4;
		}
		ChangeLight(*(int *)(iVar6 + 0x10149c00), *piVar1, *piVar2, local_68[*piVar5]);
		*piVar5 = *piVar5 + 1;
	} else {
		piVar5 = (int *)(iVar6 + 0x10149c10);
		if ((*piVar1 != *piVar5) || (*piVar2 != *(int *)(iVar6 + 0x10149c14))) {
			*piVar5 = *piVar1;
			*(int *)(iVar6 + 0x10149c14) = *piVar2;
			ChangeLight(*(int *)(iVar6 + 0x10149c00), *piVar5, *(int *)(iVar6 + 0x10149c14), 8);
		}
	}
	*piVar1 = *piVar1 + 1;
	*piVar2 = *piVar2 + 1;
	*piVar3 = *piVar3 + -0x20;
	PutMissile(i);
	return;
}

void MI_Guardian(int i)

{
	uint *puVar1;
	int *piVar2;
	byte bVar3;
	uint uVar4;
	int r;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	byte *pbVar9;
	byte bVar10;
	byte bVar11;

	r = 0x100f8fd0;
	iVar6 = i * 0xb4;
	bVar11 = 0;
	bVar10 = 0;
	puVar1 = (uint *)(iVar6 + 0x10149be8);
	*puVar1 = *(int *)(iVar6 + 0x10149be8) - 1;
	piVar2 = (int *)(iVar6 + 0x10149c0c);
	if (0 < *piVar2) {
		*piVar2 = *piVar2 + -1;
	}
	if (*puVar1 != *(uint *)(iVar6 + 0x10149c08)) {
		if (*(int *)(iVar6 + 0x10149ba0) != 2)
			goto LAB_10065e44;
		if (*piVar2 != 0)
			goto LAB_10065e44;
	}
	r = 0x100f8fd0;
	SetMissDir(i, 1);
LAB_10065e44:
	uVar4 = *puVar1;
	if (uVar4 != (((int)uVar4 >> 4) + (uint)((int)uVar4 < 0 && (uVar4 & 0xf) != 0)) * 0x10) {
	LAB_10065f7c:
		if (*puVar1 == 0xe) {
			SetMissDir(i, 0);
			*(undefined4 *)(iVar6 + 0x10149bd4) = 0xf;
			*(undefined4 *)(iVar6 + 0x10149bd0) = 0xffffffff;
		}
		*(int *)(iVar6 + 0x10149c10) = *(int *)(iVar6 + 0x10149c10) + *(int *)(iVar6 + 0x10149bd0);
		r = *(int *)(iVar6 + 0x10149c10);
		if (r < 0x10) {
			if (0 < r) {
				ChangeLight(*(int *)(iVar6 + 0x10149c00), *(int *)(iVar6 + 0x10149b78), *(int *)(iVar6 + 0x10149b7c), r);
			}
		} else {
			*(int *)(iVar6 + 0x10149c10) = 0xf;
		}
		if (*puVar1 == 0) {
			*(undefined4 *)(iVar6 + 0x10149ba8) = 1;
			AddUnLight(*(int *)(iVar6 + 0x10149c00));
		}
		PutMissile(i);
		return;
	}
	r = *(int *)(r + -0x7100);
	iVar5 = 0;
	iVar7 = 0;
LAB_10065f6c:
	if ((iVar7 < 0x17) && (iVar5 != -1)) {
		pbVar9 = (byte *)(r + 10);
		iVar8 = 10;
		do {
			if (((iVar8 < 0) || (iVar5 == -1)) || ((bVar3 = *pbVar9, bVar3 == 0 && (pbVar9[1] == 0))))
				goto LAB_10065f64;
			if ((bVar11 != bVar3) || (bVar10 != pbVar9[1])) {
				iVar5 = Sentfire(
				    i, *(int *)(iVar6 + 0x10149b78) + (uint)bVar3, *(int *)(iVar6 + 0x10149b7c) + (uint)pbVar9[1]);
				if (iVar5 == -1)
					goto LAB_10065f64;
				iVar5 = Sentfire(
				    i, *(int *)(iVar6 + 0x10149b78) - (uint)*pbVar9, *(int *)(iVar6 + 0x10149b7c) - (uint)pbVar9[1]);
				if (iVar5 == -1)
					goto LAB_10065f64;
				iVar5 = Sentfire(
				    i, *(int *)(iVar6 + 0x10149b78) + (uint)*pbVar9, *(int *)(iVar6 + 0x10149b7c) - (uint)pbVar9[1]);
				if (iVar5 == -1)
					goto LAB_10065f64;
				iVar5 = Sentfire(
				    i, *(int *)(iVar6 + 0x10149b78) - (uint)*pbVar9, *(int *)(iVar6 + 0x10149b7c) + (uint)pbVar9[1]);
				if (iVar5 == -1)
					goto LAB_10065f64;
				bVar11 = *pbVar9;
				bVar10 = pbVar9[1];
			}
			pbVar9 = pbVar9 + -2;
			iVar8 = iVar8 + -2;
		} while (true);
	}
	goto LAB_10065f7c;
LAB_10065f64:
	r = r + 0x1e;
	iVar7 = iVar7 + 1;
	goto LAB_10065f6c;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void MI_Chain(int i)

{
	undefined4 uVar1;
	uint x1;
	int y1;
	int id;
	undefined4 *puVar2;
	undefined4 *puVar3;
	int midir;
	int midir_00;
	undefined4 *puVar4;
	undefined4 *puVar5;
	undefined8 unaff_r17;
	int y2;
	undefined8 unaff_r18;
	int x2;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	ulonglong uVar6;
	undefined8 unaff_r21;
	int iVar7;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	int *piVar8;
	undefined8 unaff_r28;
	char *pcVar9;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	longlong lVar10;
	int midam;
	int spllvl;
	undefined4 local_98;
	int local_94;
	int local_8c[20];
	undefined4 local_3c;
	undefined4 uStack56;
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

	local_3c = (undefined4)((ulonglong)unaff_r17 >> 0x20);
	uStack56 = (undefined4)((ulonglong)unaff_r18 >> 0x20);
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
	lVar10 = 9;
	puVar2 = &local_98;
	puVar3 = (undefined4 *)0x101080a0;
	do {
		puVar4 = puVar3;
		puVar5 = puVar2;
		uVar1 = puVar4[3];
		puVar5[2] = puVar4[2];
		puVar5[3] = uVar1;
		lVar10 = lVar10 + -1;
		puVar2 = puVar5 + 2;
		puVar3 = puVar4 + 2;
	} while (lVar10 != 0);
	i = i * 0xb4;
	puVar5[4] = puVar4[4];
	x1 = *(uint *)(i + 0x10149b78);
	y1 = *(int *)(i + 0x10149b7c);
	id = *(int *)(i + 0x10149bec);
	midir = GetDirection(x1, y1, *(int *)(i + 0x10149c08), *(int *)(i + 0x10149c0c));
	local_98 = 1;
	local_94 = *(int *)(i + 0x10149ba4);
	AddMissile(x1, y1, *(int *)(i + 0x10149c08), *(int *)(i + 0x10149c0c), midir, 7, '\0', id, midam, spllvl);
	midir = *(int *)(i + 0x10149ba4) + 3;
	if (0x13 < midir) {
		midir = 0x13;
	}
	piVar8 = local_8c;
	iVar7 = 1;
	while (iVar7 < midir) {
		uVar6 = (ulonglong)(byte)(&DAT_1012054c)[*piVar8];
		pcVar9 = (char *)(*piVar8 + 0x1012054d);
		while (true) {
			if ((int)uVar6 < 1)
				break;
			y2 = y1 + (int)pcVar9[1];
			if ((((0 < (longlong)((ulonglong)x1 + (longlong)*pcVar9)) && (x2 = (int)((ulonglong)x1 + (longlong)*pcVar9), x2 < 0x70)) && (0 < y2)) && ((y2 < 0x70 && (0 < *(short *)(_DAT_1012f1b4 + x2 * 0xe0 + y2 * 2))))) {
				midir_00 = GetDirection(x1, y1, x2, y2);
				local_98 = 1;
				local_94 = *(int *)(i + 0x10149ba4);
				AddMissile(x1, y1, x2, y2, midir_00, 7, '\0', id, midam, spllvl);
			}
			pcVar9 = pcVar9 + 2;
			uVar6 = uVar6 - 1;
		}
		piVar8 = piVar8 + 1;
		iVar7 = iVar7 + 1;
	}
	*(int *)(i + 0x10149be8) = *(int *)(i + 0x10149be8) + -1;
	if (*(int *)(i + 0x10149be8) == 0) {
		*(undefined4 *)(i + 0x10149ba8) = 1;
	}
	return;
}

void mi_null_11(int i)

{
	int iVar1;

	iVar1 = i * 0xb4;
	*(int *)(iVar1 + 0x10149be8) = *(int *)(iVar1 + 0x10149be8) + -1;
	if (*(int *)(iVar1 + 0x10149be8) == 0) {
		*(undefined4 *)(iVar1 + 0x10149ba8) = 1;
	}
	if (*(int *)(iVar1 + 0x10149bd4) == *(int *)(iVar1 + 0x10149bc0)) {
		*(undefined4 *)(iVar1 + 0x10149be0) = 1;
	}
	PutMissile(i);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: stack

void MI_Weapexp(int i)

{
	int *piVar1;
	int *piVar2;
	int *piVar3;
	int *piVar4;
	int mindam;
	int maxdam;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	int iVar5;
	undefined8 unaff_r31;
	int local_48[4];
	undefined4 local_38;
	undefined4 local_34;
	undefined4 local_30;
	undefined4 local_2c;
	undefined4 local_28;
	undefined4 local_24;
	undefined4 local_1c;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	local_1c = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	iVar5 = i * 0xb4;
	local_48[0] = _DAT_101080f4;
	local_48[1] = uRam101080f8;
	local_48[2] = uRam101080fc;
	local_48[3] = uRam10108100;
	local_38 = uRam10108104;
	local_34 = uRam10108108;
	local_30 = uRam1010810c;
	local_2c = uRam10108110;
	local_28 = uRam10108114;
	local_24 = uRam10108118;
	piVar1 = (int *)(iVar5 + 0x10149be8);
	*piVar1 = *(int *)(iVar5 + 0x10149be8) + -1;
	if (*(int *)(iVar5 + 0x10149c0c) == 1) {
		maxdam = *(int *)(iVar5 + 0x10149bec) * 0x55ec;
		mindam = *(int *)((int)plr + maxdam + 0x557c);
		maxdam = *(int *)((int)plr + maxdam + 0x5580);
		missiledata[*(int *)(&DAT_10149b74 + iVar5)].mResist = '\x01';
	} else {
		maxdam = *(int *)(iVar5 + 0x10149bec) * 0x55ec;
		mindam = *(int *)((int)plr + maxdam + 0x5584);
		maxdam = *(int *)((int)plr + maxdam + 0x5588);
		missiledata[*(int *)(&DAT_10149b74 + iVar5)].mResist = '\x02';
	}
	piVar2 = (int *)(iVar5 + 0x10149b78);
	piVar3 = (int *)(iVar5 + 0x10149b7c);
	CheckMissileCol(i, mindam, maxdam, 0, *piVar2, *piVar3, false);
	piVar4 = (int *)(iVar5 + 0x10149c08);
	if (*piVar4 == 0) {
		mindam = AddLight(*piVar2, *piVar3, local_48[0]);
		*(int *)(iVar5 + 0x10149c00) = mindam;
	} else {
		if (*piVar1 != 0) {
			ChangeLight(*(int *)(iVar5 + 0x10149c00), *piVar2, *piVar3, local_48[*piVar4]);
		}
	}
	*piVar4 = *piVar4 + 1;
	if (*piVar1 == 0) {
		*(undefined4 *)(iVar5 + 0x10149ba8) = 1;
		AddUnLight(*(int *)(iVar5 + 0x10149c00));
	} else {
		PutMissile(i);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: stack

void MI_Misexp(int i)

{
	int *piVar1;
	int r;
	int iVar2;
	int local_38[4];
	undefined4 local_28;
	undefined4 local_24;
	undefined4 local_20;
	undefined4 local_1c;
	undefined4 local_18;
	undefined4 local_14;

	r = _DAT_1010811c;
	iVar2 = i * 0xb4;
	local_38[0] = _DAT_1010811c;
	local_38[1] = uRam10108120;
	local_38[2] = uRam10108124;
	local_38[3] = uRam10108128;
	local_28 = uRam1010812c;
	local_24 = uRam10108130;
	local_20 = uRam10108134;
	local_1c = uRam10108138;
	local_18 = uRam1010813c;
	local_14 = uRam10108140;
	*(int *)(iVar2 + 0x10149be8) = *(int *)(iVar2 + 0x10149be8) + -1;
	if (*(int *)(iVar2 + 0x10149be8) == 0) {
		*(undefined4 *)(iVar2 + 0x10149ba8) = 1;
		AddUnLight(*(int *)(iVar2 + 0x10149c00));
	} else {
		piVar1 = (int *)(iVar2 + 0x10149c08);
		if (*piVar1 == 0) {
			r = AddLight(*(int *)(iVar2 + 0x10149b78), *(int *)(iVar2 + 0x10149b7c), r);
			*(int *)(iVar2 + 0x10149c00) = r;
		} else {
			if (*(int *)(iVar2 + 0x10149be8) != 0) {
				ChangeLight(*(int *)(iVar2 + 0x10149c00), *(int *)(iVar2 + 0x10149b78), *(int *)(iVar2 + 0x10149b7c),
				    local_38[*piVar1]);
			}
		}
		*piVar1 = *piVar1 + 1;
		PutMissile(i);
	}
	return;
}

void MI_Acidsplat(int i)

{
	int *piVar1;
	int iVar2;
	int midam;
	int spllvl;

	iVar2 = i * 0xb4;
	piVar1 = (int *)(iVar2 + 0x10149be8);
	if (*piVar1 == *(int *)(iVar2 + 0x10149bc0)) {
		*(int *)(iVar2 + 0x10149b78) = *(int *)(iVar2 + 0x10149b78) + 1;
		*(int *)(iVar2 + 0x10149b7c) = *(int *)(iVar2 + 0x10149b7c) + 1;
		*(int *)(iVar2 + 0x10149b84) = *(int *)(iVar2 + 0x10149b84) + -0x20;
	}
	*piVar1 = *piVar1 + -1;
	if (*piVar1 == 0) {
		*(undefined4 *)(iVar2 + 0x10149ba8) = 1;
		AddMissile(*(int *)(iVar2 + 0x10149b78), *(int *)(iVar2 + 0x10149b7c), i, 0, *(int *)(iVar2 + 0x10149ba0), 0x3b,
		    '\x01', *(int *)(iVar2 + 0x10149bec), midam, spllvl);
	} else {
		PutMissile(i);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void MI_Teleport(int i)

{
	int *piVar1;
	int *piVar2;
	int iVar3;
	char *pcVar4;
	int *piVar5;
	int iVar6;
	int iVar7;

	iVar6 = 0x100f8fd0;
	i = i * 0xb4;
	iVar3 = *(int *)(i + 0x10149bec);
	*(int *)(i + 0x10149be8) = *(int *)(i + 0x10149be8) + -1;
	if (*(int *)(i + 0x10149be8) < 1) {
		*(undefined4 *)(i + 0x10149ba8) = 1;
	} else {
		iVar7 = iVar3 * 0x55ec;
		*(undefined *)(_DAT_1012f1b8 + *(int *)((int)plr + iVar7 + 0x38) * 0x70 + *(int *)((int)plr + iVar7 + 0x3c)) = 0;
		piVar1 = (int *)((int)plr + iVar7 + 0x38);
		piVar2 = (int *)((int)plr + iVar7 + 0x3c);
		PlrClrTrans(*piVar1, *piVar2);
		*piVar1 = *(int *)(i + 0x10149b78);
		*piVar2 = *(int *)(i + 0x10149b7c);
		*(int *)((int)plr + iVar7 + 0x40) = *piVar1;
		*(int *)((int)plr + iVar7 + 0x44) = *piVar2;
		*(int *)((int)plr + iVar7 + 0x58) = *piVar1;
		*(int *)((int)plr + iVar7 + 0x5c) = *piVar2;
		PlrDoTrans(*piVar1, *piVar2);
		pcVar4 = *(char **)(iVar6 + -0x7794);
		*(undefined4 *)(i + 0x10149c08) = 1;
		*(char *)(_DAT_1012f1b8 + *piVar1 * 0x70 + *piVar2) = (char)iVar3 + '\x01';
		if (*pcVar4 != '\0') {
			ChangeLightXY(*(int *)((int)plr + iVar7 + 0x9c), *piVar1, *piVar2);
			ChangeVisionXY(*(int *)((int)plr + iVar7 + 0xa0), *piVar1, *piVar2);
		}
		if (iVar3 == **(int **)(iVar6 + -0x77ac)) {
			piVar5 = *(int **)(iVar6 + -0x77b4);
			**(int **)(iVar6 + -0x77b0) = *piVar1 - ScrollStruct_1012f2e8._sdx;
			*piVar5 = *piVar2 - ScrollStruct_1012f2e8._sdy;
		}
	}
	return;
}

void MI_Stone(int i)

{
	int *piVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar2 = 0x100f8fd0;
	iVar4 = i * 0xb4;
	piVar1 = (int *)(iVar4 + 0x10149be8);
	*piVar1 = *(int *)(iVar4 + 0x10149be8) + -1;
	iVar3 = *(int *)(iVar4 + 0x10149c0c);
	if ((*(int *)(iVar3 * 0xe8 + 0x10151ac8) == 0) && (*(char *)(iVar4 + 0x10149bac) != '\x12')) {
		*(undefined4 *)(iVar4 + 0x10149ba0) = 0;
		*(undefined4 *)(iVar4 + 0x10149bd8) = 1;
		iVar2 = 0x100f8fd0;
		SetMissAnim(i, 0x12);
		*piVar1 = 0xb;
	}
	iVar3 = iVar3 * 0xe8;
	if (*(int *)(iVar3 + 0x10151a34) == 0xf) {
		if (*piVar1 == 0) {
			*(undefined4 *)(iVar4 + 0x10149ba8) = 1;
			if (*(int *)(iVar3 + 0x10151ac8) < 1) {
				AddDead(*(int *)(iVar3 + 0x10151a50), *(int *)(iVar3 + 0x10151a54),
				    (char)**(undefined4 **)(iVar2 + -0x7624), *(int *)(iVar3 + 0x10151a78));
			} else {
				*(int *)(iVar3 + 0x10151a34) = *(int *)(iVar4 + 0x10149c08);
			}
		}
		if (*(char *)(iVar4 + 0x10149bac) == '\x12') {
			PutMissile(i);
		}
	} else {
		*(undefined4 *)(iVar4 + 0x10149ba8) = 1;
	}
	return;
}

void MI_Boom(int i)

{
	int iVar1;

	iVar1 = i * 0xb4;
	*(int *)(iVar1 + 0x10149be8) = *(int *)(iVar1 + 0x10149be8) + -1;
	if (*(int *)(iVar1 + 0x10149c08) == 0) {
		CheckMissileCol(i, *(int *)(iVar1 + 0x10149bf4), *(int *)(iVar1 + 0x10149bf4), 0, *(int *)(iVar1 + 0x10149b78),
		    *(int *)(iVar1 + 0x10149b7c), true);
	}
	if (*(int *)(iVar1 + 0x10149bf8) == 1) {
		*(int *)(iVar1 + 0x10149c08) = 1;
	}
	if (*(int *)(iVar1 + 0x10149be8) == 0) {
		*(undefined4 *)(iVar1 + 0x10149ba8) = 1;
	}
	PutMissile(i);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void MI_Rhino(int i)

{
	int *piVar1;
	int i_00;
	int x;
	int y;
	int x_00;
	int y_00;
	BOOL BVar2;
	int iVar3;
	int iVar4;
	int y_01;
	int x_01;

	iVar3 = i * 0xb4;
	i_00 = *(int *)(iVar3 + 0x10149bec);
	iVar4 = i_00 * 0xe8;
	if (*(int *)(iVar4 + 0x10151a34) == 0xe) {
		GetMissilePos(i);
		x = *(int *)(iVar3 + 0x10149b78);
		y = *(int *)(iVar3 + 0x10149b7c);
		*(undefined2 *)(_DAT_1012f1b4 + x * 0xe0 + y * 2) = 0;
		if (*(char *)(iVar4 + 0x10151acc) == '\x18') {
			*(int *)(iVar3 + 0x10149b98) = *(int *)(iVar3 + 0x10149b98) + *(int *)(iVar3 + 0x10149b88) * 2;
			piVar1 = (int *)(iVar3 + 0x10149b9c);
			*piVar1 = *piVar1 + *(int *)(iVar3 + 0x10149b8c) * 2;
			GetMissilePos(i);
			x_01 = *(int *)(iVar3 + 0x10149b78);
			y_01 = *(int *)(iVar3 + 0x10149b7c);
			*(int *)(iVar3 + 0x10149b98) = *(int *)(iVar3 + 0x10149b98) - *(int *)(iVar3 + 0x10149b88);
			*piVar1 = *piVar1 - *(int *)(iVar3 + 0x10149b8c);
		} else {
			*(int *)(iVar3 + 0x10149b98) = *(int *)(iVar3 + 0x10149b98) + *(int *)(iVar3 + 0x10149b88);
			*(int *)(iVar3 + 0x10149b9c) = *(int *)(iVar3 + 0x10149b9c) + *(int *)(iVar3 + 0x10149b8c);
		}
		GetMissilePos(i);
		x_00 = *(int *)(iVar3 + 0x10149b78);
		y_00 = *(int *)(iVar3 + 0x10149b7c);
		BVar2 = PosOkMonst(i_00, x_00, y_00);
		if ((BVar2 == 0) || ((*(char *)(iVar4 + 0x10151acc) == '\x18' && (BVar2 = PosOkMonst(i_00, x_01, y_01), BVar2 == 0)))) {
			MissToMonst(i, x, y);
			*(undefined4 *)(iVar3 + 0x10149ba8) = 1;
		} else {
			*(short *)(_DAT_1012f1b4 + x_00 * 0xe0 + y_00 * 2) = -((short)i_00 + 1);
			*(int *)(iVar4 + 0x10151a58) = x_00;
			*(int *)(iVar4 + 0x10151a60) = x_00;
			*(int *)(iVar4 + 0x10151a50) = x_00;
			*(int *)(iVar4 + 0x10151a5c) = y_00;
			*(int *)(iVar4 + 0x10151a64) = y_00;
			*(int *)(iVar4 + 0x10151a54) = y_00;
			if (*(char *)(iVar4 + 0x10151af0) != '\0') {
				ChangeLightXY(*(int *)(iVar3 + 0x10149c00), x_00, y_00);
			}
			MoveMissilePos(i);
			PutMissile(i);
		}
	} else {
		*(undefined4 *)(iVar3 + 0x10149ba8) = 1;
	}
	return;
}

void mi_null_32(int i)

{
	int x;
	undefined4 uVar1;
	int x_00;
	int y;
	int iVar2;
	int iVar3;
	int iVar4;
	BOOL BVar5;
	int y_00;
	int unaff_r17;
	int iVar6;
	int iVar7;

	iVar2 = 0x100f8fd0;
	GetMissilePos(i);
	iVar7 = i * 0xb4;
	x_00 = *(int *)(iVar7 + 0x10149b78);
	y = *(int *)(iVar7 + 0x10149b7c);
	*(int *)(iVar7 + 0x10149b98) = *(int *)(iVar7 + 0x10149b98) + *(int *)(iVar7 + 0x10149b88);
	*(int *)(iVar7 + 0x10149b9c) = *(int *)(iVar7 + 0x10149b9c) + *(int *)(iVar7 + 0x10149b8c);
	GetMissilePos(i);
	y_00 = *(int *)(iVar7 + 0x10149b7c);
	iVar6 = *(int *)(iVar7 + 0x10149bec) * 0xe8;
	x = *(int *)(iVar7 + 0x10149b78);
	if ((*(uint *)(iVar6 + 0x10151ad0) & 0x10) == 0) {
		iVar4 = *(int *)(iVar6 + 0x10151a7c) * 0x55ec;
		iVar3 = *(int *)((int)plr + iVar4 + 0x38);
		iVar4 = *(int *)((int)plr + iVar4 + 0x3c);
	} else {
		iVar4 = *(int *)(iVar6 + 0x10151a7c) * 0xe8;
		iVar3 = *(int *)(iVar4 + 0x10151a50);
		iVar4 = *(int *)(iVar4 + 0x10151a54);
	}
	if ((((x == x_00) && (y_00 == y)) || ((((*(uint *)(iVar7 + 0x10149c08) & 1) == 0 || ((iVar3 = abs(x_00 - iVar3), iVar3 < 4 && (iVar4 = abs(y - iVar4), iVar4 < 4)))) && (*(int *)(iVar7 + 0x10149c0c) < 2)))) || (BVar5 = PosOkMonst(*(int *)(iVar7 + 0x10149bec), x_00, y), BVar5 == 0)) {
		if ((*(uint *)(iVar6 + 0x10151ad0) & 0x10) == 0) {
			unaff_r17 = (int)*(char *)(**(int **)(iVar2 + -0x7680) + x * 0x70 + y_00);
		} else {
			unaff_r17 = (int)*(short *)(**(int **)(iVar2 + -0x767c) + x * 0xe0 + y_00 * 2);
		}
	} else {
		MissToMonst(i, x_00, y);
		*(undefined4 *)(iVar7 + 0x10149ba8) = 1;
	}
	BVar5 = PosOkMissile(x, y_00);
	if ((BVar5 == 0) || ((0 < unaff_r17 && ((*(uint *)(iVar7 + 0x10149c08) & 1) == 0)))) {
		y_00 = *(int *)(iVar2 + -0x7104);
		*(int *)(iVar7 + 0x10149b88) = -*(int *)(iVar7 + 0x10149b88);
		*(int *)(iVar7 + 0x10149b8c) = -*(int *)(iVar7 + 0x10149b8c);
		*(undefined4 *)(iVar7 + 0x10149ba0) = *(undefined4 *)(y_00 + *(int *)(iVar7 + 0x10149ba0) * 4);
		y_00 = *(int *)(iVar6 + 0x10151b10) + *(int *)(iVar7 + 0x10149ba0) * 8;
		uVar1 = *(undefined4 *)(y_00 + 0x58);
		*(undefined4 *)(iVar7 + 0x10149bb4) = *(undefined4 *)(y_00 + 0x54);
		*(undefined4 *)(iVar7 + 0x10149bb8) = uVar1;
		*(int *)(iVar7 + 0x10149c0c) = *(int *)(iVar7 + 0x10149c0c) + 1;
		if (0 < unaff_r17) {
			*(uint *)(iVar7 + 0x10149c08) = *(uint *)(iVar7 + 0x10149c08) | 1;
		}
	}
	MoveMissilePos(i);
	PutMissile(i);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void MI_FirewallC(int i)

{
	int id;
	int sx;
	int sy;
	int iVar1;
	int iVar2;
	int midam;
	int spllvl;

	i = i * 0xb4;
	*(int *)(i + 0x10149be8) = *(int *)(i + 0x10149be8) + -1;
	id = *(int *)(i + 0x10149bec);
	if (*(int *)(i + 0x10149be8) == 0) {
		*(undefined4 *)(i + 0x10149ba8) = 1;
	} else {
		sx = *(int *)(i + 0x10149c08);
		sy = *(int *)(i + 0x10149c0c);
		iVar1 = *(int *)(i + 0x10149c10) * 4;
		iVar2 = sx + *(int *)(&DAT_10107c10 + iVar1);
		iVar1 = sy + *(int *)(&DAT_10107c30 + iVar1);
		if (((((&DAT_1012fb31)[(int)*(short *)(_DAT_1012f1d4 + sx * 0xe0 + sy * 2)] == '\0') && (*(int *)(i + 0x10149c24) == 0)) && (0 < iVar2)) && (((iVar2 < 0x70 && (0 < iVar1)) && (iVar1 < 0x70)))) {
			AddMissile(sx, sy, sx, sy, *(int *)((int)plr + id * 0x55ec + 0x70), 5, '\0', id, midam, spllvl);
			*(int *)(i + 0x10149c08) = iVar2;
			*(int *)(i + 0x10149c0c) = iVar1;
		} else {
			*(undefined4 *)(i + 0x10149c24) = 1;
		}
		sy = *(int *)(i + 0x10149c18);
		sx = *(int *)(i + 0x10149c1c);
		iVar1 = *(int *)(i + 0x10149c14) * 4;
		iVar2 = sy + *(int *)(&DAT_10107c10 + iVar1);
		iVar1 = sx + *(int *)(&DAT_10107c30 + iVar1);
		if ((((&DAT_1012fb31)[(int)*(short *)(_DAT_1012f1d4 + sy * 0xe0 + sx * 2)] == '\0') && (*(int *)(i + 0x10149c20) == 0)) && ((0 < iVar2 && (((iVar2 < 0x70 && (0 < iVar1)) && (iVar1 < 0x70)))))) {
			AddMissile(sy, sx, sy, sx, *(int *)((int)plr + id * 0x55ec + 0x70), 5, '\0', id, midam, spllvl);
			*(int *)(i + 0x10149c18) = iVar2;
			*(int *)(i + 0x10149c1c) = iVar1;
		} else {
			*(undefined4 *)(i + 0x10149c20) = 1;
		}
	}
	return;
}

void MI_Infra(int i)

{
	i = i * 0xb4;
	*(int *)(i + 0x10149be8) = *(int *)(i + 0x10149be8) + -1;
	*(undefined4 *)((int)plr + *(int *)(i + 0x10149bec) * 0x55ec + 0x1cc) = 1;
	if (*(int *)(i + 0x10149be8) == 0) {
		*(undefined4 *)(i + 0x10149ba8) = 1;
		CalcPlrItemVals(*(int *)(i + 0x10149bec), 1);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void MI_Apoca(int i)

{
	int id;
	bool bVar1;
	int sx;
	int sy;
	int iVar2;
	int iVar3;
	int midam;
	int spllvl;

	i = i * 0xb4;
	bVar1 = false;
	id = *(int *)(i + 0x10149bec);
	sy = *(int *)(i + 0x10149c0c);
	iVar2 = sy << 1;
	while ((sy < *(int *)(i + 0x10149c10) && (!bVar1))) {
		sx = *(int *)(i + 0x10149c14);
		iVar3 = sx * 0xe0;
		while ((sx < *(int *)(i + 0x10149c18) && (!bVar1))) {
			if ((3 < *(short *)(iVar2 + _DAT_1012f1b4 + iVar3)) && ((&DAT_10130b33)[(int)*(short *)(iVar2 + _DAT_1012f1d4 + iVar3)] == '\0')) {
				AddMissile(sx, sy, sx, sy, *(int *)((int)plr + id * 0x55ec + 0x70), 0x24, '\0', id, midam, spllvl);
				bVar1 = true;
			}
			iVar3 = iVar3 + 0xe0;
			sx = sx + 1;
		}
		if (!bVar1) {
			*(undefined4 *)(i + 0x10149c14) = *(undefined4 *)(i + 0x10149c1c);
		}
		iVar2 = iVar2 + 2;
		sy = sy + 1;
	}
	if (bVar1) {
		*(int *)(i + 0x10149c0c) = sy + -1;
		*(int *)(i + 0x10149c14) = sx;
	} else {
		*(undefined4 *)(i + 0x10149ba8) = 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void MI_Wave(int i)

{
	int id;
	bool bVar1;
	bool bVar2;
	int sx;
	int iVar3;
	undefined8 uVar4;
	int iVar6;
	longlong lVar5;
	int sy;
	int x1;
	ulonglong uVar7;
	int *piVar8;
	uint *puVar9;
	int iVar10;
	longlong lVar11;
	int sy_00;
	int midam;
	int spllvl;

	uVar4 = 0x100f8fd0;
	bVar1 = false;
	bVar2 = false;
	i = i * 0xb4;
	x1 = *(int *)(i + 0x10149b78);
	uVar7 = (ulonglong) * (uint *)(i + 0x10149b7c);
	id = *(int *)(i + 0x10149bec);
	iVar6 = GetDirection(x1, *(uint *)(i + 0x10149b7c), *(int *)(i + 0x10149c08), *(int *)(i + 0x10149c0c));
	sy_00 = (int)uVar4;
	piVar8 = (int *)(&DAT_10107c10 + iVar6 * 4);
	puVar9 = (uint *)(&DAT_10107c30 + iVar6 * 4);
	sx = x1 + *piVar8;
	lVar5 = uVar7 + (ulonglong)*puVar9;
	sy = (int)lVar5;
	if ((&DAT_1012fb31)[(int)*(short *)(_DAT_1012f1d4 + sx * 0xe0 + sy * 2)] == '\0') {
		iVar3 = id * 0x55ec;
		AddMissile(sx, sy, sx + *piVar8, sy + *puVar9, *(int *)((int)plr + iVar3 + 0x70), 0xe, '\0', id, midam, spllvl);
		sy = (iVar6 + 2U & 7) * 4;
		iVar6 = (iVar6 - 2U & 7) * 4;
		iVar10 = 0;
		sx = sx + *(int *)(&DAT_10107c10 + iVar6);
		lVar5 = lVar5 + (ulonglong) * (uint *)(&DAT_10107c30 + iVar6);
		x1 = x1 + *piVar8 + *(int *)(&DAT_10107c10 + sy);
		lVar11 = uVar7 + (ulonglong)*puVar9 + (ulonglong) * (uint *)(&DAT_10107c30 + sy);
		while (true) {
			sy_00 = (int)uVar4;
			if ((*(int *)(i + 0x10149ba4) >> 1) + 2 <= iVar10)
				break;
			sy_00 = (int)lVar5;
			if (((((&DAT_1012fb31)[(int)*(short *)(_DAT_1012f1d4 + sx * 0xe0 + sy_00 * 2)] != '\0') || (bVar1)) || (sx < 1)) || (((0x6f < sx || (sy_00 < 1)) || (0x6f < sy_00)))) {
				bVar1 = true;
			} else {
				AddMissile(sx, sy_00, sx + *piVar8, sy_00 + *puVar9, *(int *)((int)plr + iVar3 + 0x70), 0xe, '\0', id,
				    midam, spllvl);
				sx = sx + *(int *)(&DAT_10107c10 + iVar6);
				lVar5 = lVar5 + (ulonglong) * (uint *)(&DAT_10107c30 + iVar6);
			}
			sy_00 = (int)lVar11;
			if ((((&DAT_1012fb31)[(int)*(short *)(_DAT_1012f1d4 + x1 * 0xe0 + sy_00 * 2)] != '\0') || (bVar2)) || ((x1 < 1 || (((0x6f < x1 || (sy_00 < 1)) || (0x6f < sy_00)))))) {
				bVar2 = true;
			} else {
				AddMissile(x1, sy_00, x1 + *piVar8, sy_00 + *puVar9, *(int *)((int)plr + iVar3 + 0x70), 0xe, '\0', id,
				    midam, spllvl);
				x1 = x1 + *(int *)(&DAT_10107c10 + sy);
				lVar11 = lVar11 + (ulonglong) * (uint *)(&DAT_10107c30 + sy);
			}
			iVar10 = iVar10 + 1;
		}
	}
	x1 = *(int *)(sy_00 + -0x7664) + i;
	*(int *)(x1 + 0x74) = *(int *)(x1 + 0x74) + -1;
	if (*(int *)(x1 + 0x74) == 0) {
		*(undefined4 *)(*(int *)(sy_00 + -0x7664) + i + 0x34) = 1;
	}
	return;
}

void MI_Nova(int i)

{
	bool micaster;
	int id;
	int sx;
	int sy;
	byte bVar1;
	char cVar2;
	int iVar3;
	undefined *puVar4;
	int midir;
	int midam;
	int spllvl;

	i = i * 0xb4;
	cVar2 = '\0';
	bVar1 = 0;
	id = *(int *)(i + 0x10149bec);
	micaster = id == -1;
	sx = *(int *)(i + 0x10149b78);
	sy = *(int *)(i + 0x10149b7c);
	if (micaster) {
		midir = 0;
	} else {
		midir = *(int *)((int)plr + id * 0x55ec + 0x70);
	}
	puVar4 = &DAT_10121009;
	iVar3 = 0;
	do {
		if ((bVar1 != puVar4[6]) || (cVar2 != puVar4[7])) {
			AddMissile(
			    sx, sy, sx + (uint)(byte)puVar4[6], sy + (uint)(byte)puVar4[7], midir, 4, micaster, id, midam, spllvl);
			AddMissile(
			    sx, sy, sx - (uint)(byte)puVar4[6], sy - (uint)(byte)puVar4[7], midir, 4, micaster, id, midam, spllvl);
			AddMissile(
			    sx, sy, sx - (uint)(byte)puVar4[6], sy + (uint)(byte)puVar4[7], midir, 4, micaster, id, midam, spllvl);
			AddMissile(
			    sx, sy, sx + (uint)(byte)puVar4[6], sy - (uint)(byte)puVar4[7], midir, 4, micaster, id, midam, spllvl);
			bVar1 = puVar4[6];
			cVar2 = puVar4[7];
		}
		iVar3 = iVar3 + 1;
		puVar4 = puVar4 + 0x1e;
	} while (iVar3 < 0x17);
	*(int *)(i + 0x10149be8) = *(int *)(i + 0x10149be8) + -1;
	if (*(int *)(i + 0x10149be8) == 0) {
		*(undefined4 *)(i + 0x10149ba8) = 1;
	}
	return;
}

void MI_Blodboil(int i)

{
	*(undefined4 *)(i * 0xb4 + 0x10149ba8) = 1;
	return;
}

void MI_Flame(int i)

{
	int *piVar1;
	int *piVar2;
	int r;
	int iVar3;

	iVar3 = i * 0xb4;
	*(int *)(iVar3 + 0x10149be8) = *(int *)(iVar3 + 0x10149be8) + -1;
	piVar1 = (int *)(iVar3 + 0x10149c0c);
	*piVar1 = *(int *)(iVar3 + 0x10149c0c) + -1;
	piVar2 = (int *)(iVar3 + 0x10149be8);
	r = *piVar2;
	CheckMissileCol(i, *(int *)(iVar3 + 0x10149bf4), *(int *)(iVar3 + 0x10149bf4), 1, *(int *)(iVar3 + 0x10149b78),
	    *(int *)(iVar3 + 0x10149b7c), false);
	if ((*piVar2 == 0) && (*(int *)(iVar3 + 0x10149bf8) == 1)) {
		*piVar2 = r;
	}
	if (*piVar1 == 0) {
		*(undefined4 *)(iVar3 + 0x10149bd4) = 0x14;
	}
	if (*piVar1 < 1) {
		r = *(int *)(iVar3 + 0x10149bd4);
		if (0xb < r) {
			r = 0x18 - r;
		}
		ChangeLight(*(int *)(iVar3 + 0x10149c00), *(int *)(iVar3 + 0x10149b78), *(int *)(iVar3 + 0x10149b7c), r);
	}
	if (*piVar2 == 0) {
		*(undefined4 *)(iVar3 + 0x10149ba8) = 1;
		AddUnLight(*(int *)(iVar3 + 0x10149c00));
	}
	if (*piVar1 < 1) {
		PutMissile(i);
	}
	return;
}

void MI_Flamec(int i)

{
	int *piVar1;
	int id;
	int sx;
	int sy;
	int iVar2;
	int iVar3;
	int midam;
	int spllvl;

	iVar2 = 0x100f8fd0;
	iVar3 = i * 0xb4;
	piVar1 = (int *)(iVar3 + 0x10149be8);
	*piVar1 = *(int *)(iVar3 + 0x10149be8) + -1;
	id = *(int *)(iVar3 + 0x10149bec);
	*(int *)(iVar3 + 0x10149b98) = *(int *)(iVar3 + 0x10149b98) + *(int *)(iVar3 + 0x10149b88);
	*(int *)(iVar3 + 0x10149b9c) = *(int *)(iVar3 + 0x10149b9c) + *(int *)(iVar3 + 0x10149b8c);
	GetMissilePos(i);
	if ((*(int *)(iVar3 + 0x10149b78) != *(int *)(iVar3 + 0x10149c08)) || (*(int *)(iVar3 + 0x10149b7c) != *(int *)(iVar3 + 0x10149c0c))) {
		sx = *(int *)(iVar3 + 0x10149b78);
		sy = *(int *)(iVar3 + 0x10149b7c);
		if (*(char *)(*(int *)(iVar2 + -0x7234) + (int)*(short *)(**(int **)(iVar2 + -0x757c) + sx * 0xe0 + sy * 2)) == '\0') {
			AddMissile(sx, sy, *(int *)(iVar3 + 0x10149b90), *(int *)(iVar3 + 0x10149b94), i, 0x30,
			    (char)*(undefined4 *)(iVar3 + 0x10149bf0), id, midam, spllvl);
		} else {
			*piVar1 = 0;
		}
		*(int *)(iVar3 + 0x10149c08) = *(int *)(iVar3 + 0x10149b78);
		*(int *)(iVar3 + 0x10149c0c) = *(int *)(iVar3 + 0x10149b7c);
		*(int *)(iVar3 + 0x10149c10) = *(int *)(iVar3 + 0x10149c10) + 1;
	}
	if ((*piVar1 == 0) || (*(int *)(iVar3 + 0x10149c10) == 3)) {
		*(undefined4 *)(iVar3 + 0x10149ba8) = 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void MI_Cbolt(int i)

{
	int *piVar1;
	int iVar2;
	uint uVar3;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	int iVar4;
	undefined8 unaff_r31;
	int local_68[4];
	undefined4 local_58;
	undefined4 local_54;
	undefined4 local_50;
	undefined4 local_4c;
	undefined4 local_48;
	undefined4 local_44;
	undefined4 local_40;
	undefined4 local_3c;
	undefined4 local_38;
	undefined4 local_34;
	undefined4 local_30;
	undefined4 local_2c;
	undefined4 local_1c;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	local_1c = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	iVar4 = i * 0xb4;
	local_68[0] = _DAT_10108144;
	local_68[1] = uRam10108148;
	local_68[2] = uRam1010814c;
	local_68[3] = uRam10108150;
	local_58 = uRam10108154;
	local_54 = uRam10108158;
	local_50 = uRam1010815c;
	local_4c = uRam10108160;
	local_48 = uRam10108164;
	local_44 = uRam10108168;
	local_40 = uRam1010816c;
	local_3c = uRam10108170;
	local_38 = uRam10108174;
	local_34 = uRam10108178;
	local_30 = uRam1010817c;
	local_2c = uRam10108180;
	piVar1 = (int *)(iVar4 + 0x10149be8);
	*piVar1 = *(int *)(iVar4 + 0x10149be8) + -1;
	if (*(char *)(iVar4 + 0x10149bac) != '\x03') {
		if (*(int *)(iVar4 + 0x10149c10) == 0) {
			iVar2 = local_68[*(int *)(iVar4 + 0x10149c04)];
			*(uint *)(iVar4 + 0x10149c04) = *(int *)(iVar4 + 0x10149c04) + 1U & 0xf;
			uVar3 = (*(int *)(iVar4 + 0x10149c0c) + iVar2) * 4 & 0x1c;
			GetMissileVel(i, *(int *)(iVar4 + 0x10149b78), *(int *)(iVar4 + 0x10149b7c),
			    *(int *)(iVar4 + 0x10149b78) + *(int *)(&DAT_10107c10 + uVar3),
			    *(int *)(iVar4 + 0x10149b7c) + *(int *)(&DAT_10107c30 + uVar3), 8);
			*(int *)(iVar4 + 0x10149c10) = 0x10;
		} else {
			*(int *)(iVar4 + 0x10149c10) = *(int *)(iVar4 + 0x10149c10) + -1;
		}
		*(int *)(iVar4 + 0x10149b98) = *(int *)(iVar4 + 0x10149b98) + *(int *)(iVar4 + 0x10149b88);
		*(int *)(iVar4 + 0x10149b9c) = *(int *)(iVar4 + 0x10149b9c) + *(int *)(iVar4 + 0x10149b8c);
		GetMissilePos(i);
		CheckMissileCol(i, *(int *)(iVar4 + 0x10149bf4), *(int *)(iVar4 + 0x10149bf4), 0, *(int *)(iVar4 + 0x10149b78),
		    *(int *)(iVar4 + 0x10149b7c), false);
		if (*(int *)(iVar4 + 0x10149bf8) == 1) {
			*(undefined4 *)(iVar4 + 0x10149c08) = 8;
			*(undefined4 *)(iVar4 + 0x10149ba0) = 0;
			*(undefined4 *)(iVar4 + 0x10149b80) = 0;
			*(undefined4 *)(iVar4 + 0x10149b84) = 0;
			SetMissAnim(i, 3);
			*piVar1 = *(int *)(iVar4 + 0x10149bc0);
			GetMissilePos(i);
		}
		ChangeLight(*(int *)(iVar4 + 0x10149c00), *(int *)(iVar4 + 0x10149b78), *(int *)(iVar4 + 0x10149b7c),
		    *(int *)(iVar4 + 0x10149c08));
	}
	if (*piVar1 == 0) {
		*(undefined4 *)(iVar4 + 0x10149ba8) = 1;
		AddUnLight(*(int *)(iVar4 + 0x10149c00));
	}
	PutMissile(i);
	return;
}

void MI_Hbolt(int i)

{
	int *piVar1;
	int iVar2;

	iVar2 = i * 0xb4;
	piVar1 = (int *)(iVar2 + 0x10149be8);
	*piVar1 = *(int *)(iVar2 + 0x10149be8) + -1;
	if (*(char *)(iVar2 + 0x10149bac) == '\x1c') {
		ChangeLight(*(int *)(iVar2 + 0x10149c00), *(int *)(iVar2 + 0x10149b78), *(int *)(iVar2 + 0x10149b7c),
		    *(int *)(iVar2 + 0x10149bd4) + 7);
		if (*piVar1 == 0) {
			*(undefined4 *)(iVar2 + 0x10149ba8) = 1;
			AddUnLight(*(int *)(iVar2 + 0x10149c00));
		}
	} else {
		*(int *)(iVar2 + 0x10149b98) = *(int *)(iVar2 + 0x10149b98) + *(int *)(iVar2 + 0x10149b88);
		*(int *)(iVar2 + 0x10149b9c) = *(int *)(iVar2 + 0x10149b9c) + *(int *)(iVar2 + 0x10149b8c);
		GetMissilePos(i);
		if ((*(int *)(iVar2 + 0x10149b78) != *(int *)(iVar2 + 0x10149b90)) || (*(int *)(iVar2 + 0x10149b7c) != *(int *)(iVar2 + 0x10149b94))) {
			CheckMissileCol(i, *(int *)(iVar2 + 0x10149bf4), *(int *)(iVar2 + 0x10149bf4), 0, *(int *)(iVar2 + 0x10149b78),
			    *(int *)(iVar2 + 0x10149b7c), false);
		}
		if (*piVar1 == 0) {
			*(int *)(iVar2 + 0x10149b98) = *(int *)(iVar2 + 0x10149b98) - *(int *)(iVar2 + 0x10149b88);
			*(int *)(iVar2 + 0x10149b9c) = *(int *)(iVar2 + 0x10149b9c) - *(int *)(iVar2 + 0x10149b8c);
			GetMissilePos(i);
			*(undefined4 *)(iVar2 + 0x10149ba0) = 0;
			SetMissAnim(i, 0x1c);
			*piVar1 = *(int *)(iVar2 + 0x10149bc0) + -1;
		} else {
			piVar1 = (int *)(iVar2 + 0x10149c08);
			if ((*(int *)(iVar2 + 0x10149b78) != *piVar1) || (*(int *)(iVar2 + 0x10149b7c) != *(int *)(iVar2 + 0x10149c0c))) {
				*piVar1 = *(int *)(iVar2 + 0x10149b78);
				*(undefined4 *)(iVar2 + 0x10149c0c) = *(undefined4 *)(iVar2 + 0x10149b7c);
				ChangeLight(*(int *)(iVar2 + 0x10149c00), *piVar1, *(int *)(iVar2 + 0x10149c0c), 8);
			}
		}
	}
	PutMissile(i);
	return;
}

void MI_Element(int i)

{
	int *piVar1;
	int *piVar2;
	int mx;
	int my;
	int fy;
	int x;
	BOOL BVar3;
	int *piVar4;
	int mindam;
	int iVar5;

	x = 0x100f8fd0;
	iVar5 = i * 0xb4;
	piVar1 = (int *)(iVar5 + 0x10149be8);
	*piVar1 = *(int *)(iVar5 + 0x10149be8) + -1;
	mindam = *(int *)(iVar5 + 0x10149bf4);
	fy = *(int *)(iVar5 + 0x10149bec);
	if (*(char *)(iVar5 + 0x10149bac) == '\x13') {
		fy = fy * 0x55ec;
		x = *(int *)(iVar5 + 0x10149b78);
		mx = *(int *)(iVar5 + 0x10149b7c);
		my = *(int *)((int)plr + fy + 0x38);
		fy = *(int *)((int)plr + fy + 0x3c);
		ChangeLight(*(int *)(iVar5 + 0x10149c00), x, mx, *(int *)(iVar5 + 0x10149bd4));
		BVar3 = CheckBlock(my, fy, x, mx);
		if (BVar3 == 0) {
			CheckMissileCol(i, mindam, mindam, 1, x, mx, true);
		}
		BVar3 = CheckBlock(my, fy, x, mx + 1);
		if (BVar3 == 0) {
			CheckMissileCol(i, mindam, mindam, 1, x, mx + 1, true);
		}
		BVar3 = CheckBlock(my, fy, x, mx + -1);
		if (BVar3 == 0) {
			CheckMissileCol(i, mindam, mindam, 1, x, mx + -1, true);
		}
		BVar3 = CheckBlock(my, fy, x + 1, mx);
		if (BVar3 == 0) {
			CheckMissileCol(i, mindam, mindam, 1, x + 1, mx, true);
		}
		BVar3 = CheckBlock(my, fy, x + 1, mx + -1);
		if (BVar3 == 0) {
			CheckMissileCol(i, mindam, mindam, 1, x + 1, mx + -1, true);
		}
		BVar3 = CheckBlock(my, fy, x + 1, mx + 1);
		if (BVar3 == 0) {
			CheckMissileCol(i, mindam, mindam, 1, x + 1, mx + 1, true);
		}
		BVar3 = CheckBlock(my, fy, x + -1, mx);
		if (BVar3 == 0) {
			CheckMissileCol(i, mindam, mindam, 1, x + -1, mx, true);
		}
		BVar3 = CheckBlock(my, fy, x + -1, mx + 1);
		if (BVar3 == 0) {
			CheckMissileCol(i, mindam, mindam, 1, x + -1, mx + 1, true);
		}
		BVar3 = CheckBlock(my, fy, x + -1, mx + -1);
		if (BVar3 == 0) {
			CheckMissileCol(i, mindam, mindam, 1, x + -1, mx + -1, true);
		}
		if (*piVar1 == 0) {
			*(undefined4 *)(iVar5 + 0x10149ba8) = 1;
			AddUnLight(*(int *)(iVar5 + 0x10149c00));
		}
		PutMissile(i);
	} else {
		*(int *)(iVar5 + 0x10149b98) = *(int *)(iVar5 + 0x10149b98) + *(int *)(iVar5 + 0x10149b88);
		*(int *)(iVar5 + 0x10149b9c) = *(int *)(iVar5 + 0x10149b9c) + *(int *)(iVar5 + 0x10149b8c);
		GetMissilePos(i);
		mx = *(int *)(iVar5 + 0x10149b78);
		my = *(int *)(iVar5 + 0x10149b7c);
		CheckMissileCol(i, mindam, mindam, 0, mx, my, false);
		piVar4 = (int *)(iVar5 + 0x10149c10);
		if (((*(int *)(iVar5 + 0x10149c10) == 0) && (mx == *(int *)(iVar5 + 0x10149c14))) && (my == *(int *)(iVar5 + 0x10149c18))) {
			*piVar4 = 1;
		}
		if (*piVar4 == 1) {
			*piVar4 = 2;
			*piVar1 = 0xff;
			mindam = FindClosest(mx, my, 0x13);
			if (mindam < 1) {
				mindam = *(int *)((int)plr + fy * 0x55ec + 0x70);
				SetMissDir(i, mindam);
				mindam = mindam * 4;
				GetMissileVel(i, mx, my, mx + *(int *)(*(int *)(x + -0x70d8) + mindam),
				    my + *(int *)(*(int *)(x + -0x70dc) + mindam), 0x10);
			} else {
				piVar4 = (int *)(mindam * 0xe8 + 0x10151a50);
				piVar2 = (int *)(mindam * 0xe8 + 0x10151a54);
				mindam = GetDirection8(mx, my, *piVar4, *piVar2);
				SetMissDir(i, mindam);
				GetMissileVel(i, mx, my, *piVar4, *piVar2, 0x10);
			}
		}
		if ((mx != *(int *)(iVar5 + 0x10149c08)) || (my != *(int *)(iVar5 + 0x10149c0c))) {
			*(int *)(iVar5 + 0x10149c08) = mx;
			*(int *)(iVar5 + 0x10149c0c) = my;
			ChangeLight(*(int *)(iVar5 + 0x10149c00), mx, my, 8);
		}
		if (*piVar1 == 0) {
			*(undefined4 *)(iVar5 + 0x10149ba0) = 0;
			SetMissAnim(i, 0x13);
			*piVar1 = *(int *)(iVar5 + 0x10149bc0) + -1;
		}
		PutMissile(i);
	}
	return;
}

void MI_Bonespirit(int i)

{
	int *piVar1;
	int mx;
	int my;
	int iVar2;
	int *piVar3;
	int mindam;
	int dir;
	int iVar4;

	iVar2 = 0x100f8fd0;
	iVar4 = i * 0xb4;
	piVar1 = (int *)(iVar4 + 0x10149be8);
	*piVar1 = *(int *)(iVar4 + 0x10149be8) + -1;
	mindam = *(int *)(iVar4 + 0x10149bf4);
	dir = *(int *)(iVar4 + 0x10149bec);
	if (*(int *)(iVar4 + 0x10149ba0) == 8) {
		ChangeLight(*(int *)(iVar4 + 0x10149c00), *(int *)(iVar4 + 0x10149b78), *(int *)(iVar4 + 0x10149b7c),
		    *(int *)(iVar4 + 0x10149bd4));
		if (*piVar1 == 0) {
			*(undefined4 *)(iVar4 + 0x10149ba8) = 1;
			AddUnLight(*(int *)(iVar4 + 0x10149c00));
		}
		PutMissile(i);
	} else {
		*(int *)(iVar4 + 0x10149b98) = *(int *)(iVar4 + 0x10149b98) + *(int *)(iVar4 + 0x10149b88);
		*(int *)(iVar4 + 0x10149b9c) = *(int *)(iVar4 + 0x10149b9c) + *(int *)(iVar4 + 0x10149b8c);
		GetMissilePos(i);
		mx = *(int *)(iVar4 + 0x10149b78);
		my = *(int *)(iVar4 + 0x10149b7c);
		CheckMissileCol(i, mindam, mindam, 0, mx, my, false);
		piVar3 = (int *)(iVar4 + 0x10149c10);
		if (((*(int *)(iVar4 + 0x10149c10) == 0) && (mx == *(int *)(iVar4 + 0x10149c14))) && (my == *(int *)(iVar4 + 0x10149c18))) {
			*piVar3 = 1;
		}
		if (*piVar3 == 1) {
			*piVar3 = 2;
			*piVar1 = 0xff;
			mindam = FindClosest(mx, my, 0x13);
			if (mindam < 1) {
				dir = *(int *)(*(int *)(iVar2 + -0x77a8) + dir * 0x55ec + 0x70);
				SetMissDir(i, dir);
				dir = dir * 4;
				GetMissileVel(i, mx, my, mx + *(int *)(*(int *)(iVar2 + -0x70d8) + dir),
				    my + *(int *)(*(int *)(iVar2 + -0x70dc) + dir), 0x10);
			} else {
				mindam = mindam * 0xe8;
				*(int *)(iVar4 + 0x10149bf4) = *(int *)(mindam + 0x10151ac8) >> 7;
				dir = GetDirection8(mx, my, *(int *)(mindam + 0x10151a50), *(int *)(mindam + 0x10151a54));
				SetMissDir(i, dir);
				GetMissileVel(i, mx, my, *(int *)(mindam + 0x10151a50), *(int *)(mindam + 0x10151a54), 0x10);
			}
		}
		if ((mx != *(int *)(iVar4 + 0x10149c08)) || (my != *(int *)(iVar4 + 0x10149c0c))) {
			*(int *)(iVar4 + 0x10149c08) = mx;
			*(int *)(iVar4 + 0x10149c0c) = my;
			ChangeLight(*(int *)(iVar4 + 0x10149c00), mx, my, 8);
		}
		if (*piVar1 == 0) {
			SetMissDir(i, 8);
			*piVar1 = 7;
		}
		PutMissile(i);
	}
	return;
}

void MI_ResurrectBeam(int i)

{
	int iVar1;

	iVar1 = i * 0xb4;
	*(int *)(iVar1 + 0x10149be8) = *(int *)(iVar1 + 0x10149be8) + -1;
	if (*(int *)(iVar1 + 0x10149be8) == 0) {
		*(undefined4 *)(iVar1 + 0x10149ba8) = 1;
	}
	PutMissile(i);
	return;
}

void MI_Rportal(int i)

{
	int *piVar1;
	undefined4 uVar2;
	undefined4 *puVar3;
	undefined4 *puVar4;
	int iVar5;
	undefined4 *puVar6;
	undefined4 *puVar7;
	undefined8 unaff_r26;
	int *piVar8;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	int iVar9;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	longlong lVar10;
	undefined4 auStack112[2];
	int local_68[20];
	undefined4 local_18;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar5 = 0x100f8fd0;
	local_18 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	lVar10 = 8;
	puVar3 = auStack112;
	puVar4 = (undefined4 *)0x1010817c;
	do {
		puVar6 = puVar4;
		puVar7 = puVar3;
		uVar2 = puVar6[3];
		puVar7[2] = puVar6[2];
		puVar7[3] = uVar2;
		lVar10 = lVar10 + -1;
		puVar3 = puVar7 + 2;
		puVar4 = puVar6 + 2;
	} while (lVar10 != 0);
	iVar9 = i * 0xb4;
	puVar7[4] = puVar6[4];
	piVar1 = (int *)(iVar9 + 0x10149be8);
	if (1 < *piVar1) {
		*piVar1 = *piVar1 + -1;
	}
	if (*piVar1 == *(int *)(iVar9 + 0x10149c08)) {
		iVar5 = 0x100f8fd0;
		SetMissDir(i, 1);
	}
	if (((**(char **)(iVar5 + -0x77e4) != '\0') && (*(int *)(iVar9 + 0x10149ba0) != 1)) && (*piVar1 != 0)) {
		piVar8 = (int *)(iVar9 + 0x10149c0c);
		if (*(int *)(iVar9 + 0x10149c0c) == 0) {
			iVar5 = AddLight(*(int *)(iVar9 + 0x10149b78), *(int *)(iVar9 + 0x10149b7c), local_68[0]);
			*(int *)(iVar9 + 0x10149c00) = iVar5;
		}
		ChangeLight(
		    *(int *)(iVar9 + 0x10149c00), *(int *)(iVar9 + 0x10149b78), *(int *)(iVar9 + 0x10149b7c), local_68[*piVar8]);
		*piVar8 = *piVar8 + 1;
	}
	if (*piVar1 == 0) {
		*(undefined4 *)(iVar9 + 0x10149ba8) = 1;
		AddUnLight(*(int *)(iVar9 + 0x10149c00));
	}
	PutMissile(i);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void ProcessMissiles(void)

{
	int iVar1;
	undefined8 uVar2;
	int i;
	int iVar3;
	int *piVar4;
	int *piVar5;
	int *piVar6;

	uVar2 = 0x100f8fd0;
	piVar6 = (int *)&DAT_1014939c;
	i = 0;
	piVar5 = piVar6;
	while (i < _DAT_10149b70) {
		iVar1 = *piVar5;
		piVar5 = piVar5 + 1;
		i = i + 1;
		iVar1 = iVar1 * 0xb4;
		iVar3 = *(int *)(iVar1 + 0x10149b78) * 0x70 + *(int *)(iVar1 + 0x10149b7c);
		*(byte *)(_DAT_1012f1bc + iVar3) = *(byte *)(_DAT_1012f1bc + iVar3) & 0xfe;
		*(undefined *)(_DAT_1012f1a4 + *(int *)(iVar1 + 0x10149b78) * 0x70 + *(int *)(iVar1 + 0x10149b7c)) = 0;
	}
	i = 0;
	while (i < _DAT_10149b70) {
		if (*(int *)(*(int *)(&DAT_1014939c + i * 4) * 0xb4 + 0x10149ba8) == 0) {
			i = i + 1;
		} else {
			DeleteMissile(*(int *)(&DAT_1014939c + i * 4), i);
			i = 0;
		}
	}
	i = 0;
	**(undefined4 **)((int)uVar2 + -0x70e4) = 0;
	_DAT_101491a4 = 0;
	piVar5 = piVar6;
	while (true) {
		if (_DAT_10149b70 <= i)
			break;
		iVar1 = *piVar5 * 0xb4;
		fnMenu(*piVar5);
		if ((*(uint *)(iVar1 + 0x10149bb0) & 2) == 0) {
			*(int *)(iVar1 + 0x10149bcc) = *(int *)(iVar1 + 0x10149bcc) + 1;
			if (*(int *)(iVar1 + 0x10149bbc) <= *(int *)(iVar1 + 0x10149bcc)) {
				piVar4 = (int *)(iVar1 + 0x10149bd4);
				*(undefined4 *)(iVar1 + 0x10149bcc) = 0;
				*(int *)(iVar1 + 0x10149bd4) = *(int *)(iVar1 + 0x10149bd4) + *(int *)(iVar1 + 0x10149bd0);
				if (*(int *)(iVar1 + 0x10149bc0) < *(int *)(iVar1 + 0x10149bd4)) {
					*piVar4 = 1;
				}
				if (*piVar4 < 1) {
					*piVar4 = *(int *)(iVar1 + 0x10149bc0);
				}
			}
		}
		piVar5 = piVar5 + 1;
		i = i + 1;
	}
	if (_DAT_101491a4 != 0) {
		i = 0;
		while (i < _DAT_10149b70) {
			if (*(int *)(&DAT_10149b74 + *piVar6 * 0xb4) == 0xd) {
				MI_Manashield(*piVar6);
			}
			piVar6 = piVar6 + 1;
			i = i + 1;
		}
	}
	i = 0;
	while (i < _DAT_10149b70) {
		if (*(int *)(*(int *)(&DAT_1014939c + i * 4) * 0xb4 + 0x10149ba8) == 0) {
			i = i + 1;
		} else {
			DeleteMissile(*(int *)(&DAT_1014939c + i * 4), i);
			i = 0;
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void missiles_process_charge(void)

{
	byte bVar1;
	undefined4 uVar2;
	int iVar3;
	int *piVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	byte *pbVar8;

	iVar5 = 0;
	piVar4 = (int *)&DAT_1014939c;
	while (iVar5 < _DAT_10149b70) {
		iVar7 = *piVar4;
		iVar6 = iVar7 * 0xb4;
		iVar3 = (uint) * (byte *)(iVar6 + 0x10149bac) * 300 + *(int *)(iVar6 + 0x10149ba0) * 8;
		uVar2 = *(undefined4 *)(iVar3 + 0x1010450c);
		*(undefined4 *)(iVar6 + 0x10149bb4) = *(undefined4 *)(iVar3 + 0x10104508);
		*(undefined4 *)(iVar6 + 0x10149bb8) = uVar2;
		if (*(int *)(&DAT_10149b74 + iVar6) == 0x14) {
			pbVar8 = *(byte **)(*(int *)(iVar6 + 0x10149bec) * 0xe8 + 0x10151b10);
			bVar1 = *pbVar8;
			if ((bVar1 < 0x40) || (0x43 < bVar1)) {
				if ((bVar1 < 0x59) || (0x5c < bVar1)) {
					pbVar8 = pbVar8 + 0x50;
				} else {
					pbVar8 = pbVar8 + 0x9c;
				}
			} else {
				pbVar8 = pbVar8 + 0x180;
			}
			iVar7 = iVar7 * 0xb4;
			uVar2 = *(undefined4 *)(pbVar8 + *(int *)(iVar6 + 0x10149ba0) * 8 + 4 + 1);
			*(undefined4 *)(iVar7 + 0x10149bb4) = *(undefined4 *)(pbVar8 + *(int *)(iVar6 + 0x10149ba0) * 8 + 4);
			*(undefined4 *)(iVar7 + 0x10149bb8) = uVar2;
		}
		piVar4 = piVar4 + 1;
		iVar5 = iVar5 + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ClearMissileSpot(int mi)

{
	int iVar1;

	mi = mi * 0xb4;
	iVar1 = *(int *)(mi + 0x10149b78) * 0x70 + *(int *)(mi + 0x10149b7c);
	*(byte *)(_DAT_1012f1bc + iVar1) = *(byte *)(_DAT_1012f1bc + iVar1) & 0xfe;
	*(undefined *)(_DAT_1012f1a4 + *(int *)(mi + 0x10149b78) * 0x70 + *(int *)(mi + 0x10149b7c)) = 0;
	return;
}
