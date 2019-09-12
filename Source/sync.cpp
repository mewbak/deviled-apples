
ulonglong sync_one_monster(char param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	ushort uVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	int iVar7;
	int iVar8;
	longlong lVar9;
	longlong lVar10;
	ulonglong uVar11;
	ushort *puVar12;
	int iVar13;
	undefined *puVar14;
	int *piVar15;

	iVar8 = _DAT_100f392c;
	iVar7 = _DAT_100f3928;
	puVar6 = PTR_DAT_100f19a4;
	puVar5 = PTR_DAT_100f187c;
	puVar4 = PTR_DAT_100f1828;
	puVar3 = PTR_DAT_100f1824;
	uVar11 = SEXT18(param_1);
	iVar13 = 0;
	piVar15 = (int *)PTR_DAT_100f19a8;
	while (iVar13 < *(int *)puVar6) {
		iVar2 = *piVar15;
		puVar14 = puVar5 + iVar2 * 0xe8;
		lVar9 = abs((ulonglong) * (uint *)(puVar4 + *(int *)puVar3 * 0x55ec + 0x3c) - (ulonglong) * (uint *)(puVar14 + 0x24));
		lVar10 = abs((ulonglong) * (uint *)(puVar4 + *(int *)puVar3 * 0x55ec + 0x38) - (ulonglong) * (uint *)(puVar14 + 0x20));
		iVar2 = iVar2 * 2;
		puVar12 = (ushort *)(iVar8 + iVar2);
		*puVar12 = (short)lVar10 + (short)lVar9;
		if (puVar14[0xa4] == '\0') {
			uVar11 = (ulonglong)*puVar12;
			*puVar12 = *puVar12 + 0x1000;
		} else {
			puVar12 = (ushort *)(iVar7 + iVar2);
			uVar1 = *puVar12;
			uVar11 = (ulonglong)uVar1;
			if (uVar1 != 0) {
				*puVar12 = uVar1 - 1;
			}
		}
		piVar15 = piVar15 + 1;
		iVar13 = iVar13 + 1;
	}
	return uVar11;
}

void sync_monster_pos(undefined *param_1, undefined8 param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	ushort uVar1;
	undefined *puVar2;
	int iVar3;
	undefined *puVar4;
	undefined uVar5;
	undefined **ppuVar6;
	ulonglong uVar7;
	undefined2 uVar8;

	puVar4 = PTR_DAT_100f187c;
	ppuVar6 = &toc;
	iVar3 = (int)param_2;
	puVar2 = PTR_DAT_100f187c + iVar3 * 0xe8;
	*param_1 = (char)param_2;
	param_1[1] = (char)*(undefined4 *)(puVar2 + 0x20);
	param_1[2] = (char)*(undefined4 *)(puVar2 + 0x24);
	uVar7 = encode_enemy(iVar3);
	puVar2 = ppuVar6[-0x15a9];
	param_1[3] = (char)uVar7;
	uVar1 = *(ushort *)(puVar2 + iVar3 * 2);
	uVar5 = (undefined)uVar1;
	if (0xff < uVar1) {
		uVar5 = 0xff;
	}
	param_1[4] = uVar5;
	uVar8 = 0xffff;
	*(ushort *)(puVar2 + iVar3 * 2) = 0xffff;
	if (puVar4[iVar3 * 0xe8 + 0xa4] != '\0') {
		uVar8 = 0xfffe;
	}
	*(undefined2 *)(ppuVar6[-0x15aa] + iVar3 * 2) = uVar8;
	return;
}

ulonglong sync_monster_active(undefined *param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	bool bVar1;
	ushort uVar2;
	uint uVar3;
	ulonglong uVar4;
	ulonglong uVar5;
	undefined uVar6;
	ulonglong uVar7;
	ulonglong uVar8;
	undefined4 in_stack_ffffffc8;

	uVar6 = SUB41(PTR_DAT_100f19a4, 0);
	uVar5 = 0xffffffffffffffff;
	uVar8 = 0xffffffffffffffff;
	uVar8._7_1_ = 0xff;
	uVar4 = (ulonglong) * (uint *)PTR_DAT_100f19a4;
	uVar7 = ZEXT48(PTR_DAT_100f19a8);
	uVar7._7_1_ = SUB41(PTR_DAT_100f19a8, 0);
	if (0 < (int)*(uint *)PTR_DAT_100f19a4) {
		do {
			uVar3 = *(uint *)uVar7;
			param_7 = (undefined)uVar3;
			uVar2 = *(ushort *)(_DAT_100f392c + uVar3 * 2);
			uVar6 = (undefined)uVar2;
			if (((ulonglong)uVar2 < (uVar8 & 0xffffffff)) && (*(ushort *)(_DAT_100f3928 + uVar3 * 2) < 0xfffe)) {
				uVar5 = (ulonglong)uVar3;
				uVar8 = (ulonglong)uVar2;
			}
			uVar8._7_1_ = (undefined)uVar8;
			uVar7 = uVar7 + 4;
			uVar7._7_1_ = (undefined)uVar7;
			uVar4 = uVar4 - 1;
		} while (uVar4 != 0);
	}
	bVar1 = (int)uVar5 != -1;
	if (bVar1) {
		sync_monster_pos(param_1, uVar5, uVar6, (char)_DAT_100f392c, (char)_DAT_100f3928, (undefined)uVar7,
		    param_7, (undefined)uVar8, in_stack_ffffffc8);
	}
	return (ulonglong)bVar1;
}

ulonglong sync_monster_active2(undefined *param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	bool bVar1;
	int iVar2;
	ulonglong uVar3;
	ulonglong uVar4;
	ulonglong uVar5;
	int iVar6;
	undefined4 in_stack_ffffffc8;

	uVar5 = 0xfffe;
	uVar4 = 0xffffffffffffffff;
	iVar6 = 0;
	while (iVar2 = *(int *)PTR_DAT_100f19a4, iVar6 < iVar2) {
		if (iVar2 <= _DAT_100f4490) {
			_DAT_100f4490 = 0;
		}
		uVar3 = (ulonglong)
		    * (ushort *)(_DAT_100f3928 + *(uint *)(PTR_DAT_100f19a8 + _DAT_100f4490 * 4) * 2);
		if (uVar3 < uVar5) {
			uVar4 = (ulonglong) * (uint *)(PTR_DAT_100f19a8 + _DAT_100f4490 * 4);
			uVar5 = uVar3;
		}
		iVar6 = iVar6 + 1;
		_DAT_100f4490 = _DAT_100f4490 + 1;
	}
	bVar1 = (int)uVar4 != -1;
	if (bVar1) {
		sync_monster_pos(param_1, uVar4, (char)iVar2, 0, (char)PTR_DAT_100f19a8, (char)_DAT_100f3928,
		    (char)PTR_DAT_100f19a4, (char)uVar5, in_stack_ffffffc8);
	}
	return (ulonglong)bVar1;
}

void SyncPlrInv(int param_1)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined4 *puVar4;
	int iVar5;

	puVar2 = PTR_DAT_100f1940;
	if (*_DAT_100f1dec < 1) {
		*(undefined *)(param_1 + 6) = 0xff;
	} else {
		if (*_DAT_100f1dec <= _DAT_100f448c) {
			_DAT_100f448c = 0;
		}
		iVar1 = *(int *)(_DAT_100f1df0 + _DAT_100f448c * 4);
		iVar5 = iVar1 * 0x170;
		_DAT_100f448c = _DAT_100f448c + 1;
		*(undefined *)(param_1 + 6) = (char)iVar1;
		puVar3 = puVar2 + iVar5;
		*(undefined *)(param_1 + 7) = (char)*(undefined4 *)(puVar3 + 0xc);
		*(undefined *)(param_1 + 8) = (char)*(undefined4 *)(puVar3 + 0x10);
		*(undefined2 *)(param_1 + 9) = (short)*(undefined4 *)(puVar3 + 0x168);
		if (*(int *)(puVar3 + 0x168) == 0x17) {
			*(ushort *)(param_1 + 0xb) = (ushort)((int)(char)puVar3[0x44] << 8) | (short)(char)puVar3[0x45];
			*(uint *)(param_1 + 0xd) = (int)(char)puVar3[0x49] | (int)(char)puVar3[0x48] << 8 | (int)(char)puVar3[0x46] << 0x18 | (int)(char)puVar3[0x47] << 0x10;
			*(undefined *)(param_1 + 0x11) = puVar3[0x4a];
			*(undefined *)(param_1 + 0x12) = puVar3[0x4b];
			*(undefined *)(param_1 + 0x13) = puVar3[0x4c];
			*(undefined *)(param_1 + 0x14) = puVar3[0x4d];
			*(undefined *)(param_1 + 0x15) = puVar3[0x4e];
			*(ushort *)(param_1 + 0x16) = (ushort) * (undefined4 *)(puVar3 + 0xc4) | (ushort)((int)(char)puVar3[0x4f] << 8) | ((short)*(undefined4 *)(puVar3 + 0xc0) + -0x13) * 0x40;
			*(uint *)(param_1 + 0x18) = (int)(char)puVar3[0x53] | (int)(char)puVar3[0x52] << 8 | (int)(char)puVar3[0x50] << 0x18 | (int)(char)puVar3[0x51] << 0x10;
		} else {
			*(undefined2 *)(param_1 + 0xb) = *(undefined2 *)(puVar3 + 4);
			*(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(puVar2 + iVar5);
			*(undefined *)(param_1 + 0x11) = (char)*(undefined4 *)(puVar3 + 0x38);
			*(undefined *)(param_1 + 0x12) = (char)*(undefined4 *)(puVar3 + 0xec);
			*(undefined *)(param_1 + 0x13) = (char)*(undefined4 *)(puVar3 + 0xf0);
			*(undefined *)(param_1 + 0x14) = (char)*(undefined4 *)(puVar3 + 0xe4);
			*(undefined *)(param_1 + 0x15) = (char)*(undefined4 *)(puVar3 + 0xe8);
			if (*(int *)(puVar3 + 0x168) == 0) {
				*(undefined2 *)(param_1 + 0x16) = (short)*(undefined4 *)(puVar3 + 0xc4);
			}
		}
	}
	puVar4 = (undefined4 *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + _DAT_100f4488 * 0x170 + 0x498);
	if (puVar4[2] == -1) {
		*(undefined *)(param_1 + 0x1c) = 0xff;
	} else {
		*(undefined *)(param_1 + 0x1c) = (char)_DAT_100f4488;
		*(undefined2 *)(param_1 + 0x1d) = (short)puVar4[0x5a];
		*(undefined2 *)(param_1 + 0x1f) = *(undefined2 *)(puVar4 + 1);
		*(undefined4 *)(param_1 + 0x21) = *puVar4;
		*(undefined *)(param_1 + 0x25) = (char)puVar4[0xe];
	}
	*(undefined2 *)(param_1 + 2) = CONCAT11(*(undefined *)(param_1 + 3), *(undefined *)(param_1 + 2));
	*(undefined2 *)(param_1 + 9) = CONCAT11(*(undefined *)(param_1 + 10), *(undefined *)(param_1 + 9));
	*(undefined2 *)(param_1 + 0xb) = CONCAT11(*(undefined *)(param_1 + 0xc), *(undefined *)(param_1 + 0xb));
	*(uint *)(param_1 + 0xd) = (uint) * (byte *)(param_1 + 0x10) << 0x18 | (uint) * (byte *)(param_1 + 0xf) << 0x10 | (uint) * (byte *)(param_1 + 0xe) << 8 | (uint) * (byte *)(param_1 + 0xd);
	*(undefined2 *)(param_1 + 0x16) = CONCAT11(*(undefined *)(param_1 + 0x17), *(undefined *)(param_1 + 0x16));
	*(uint *)(param_1 + 0x18) = (uint) * (byte *)(param_1 + 0x1b) << 0x18 | (uint) * (byte *)(param_1 + 0x1a) << 0x10 | (uint) * (byte *)(param_1 + 0x19) << 8 | (uint) * (byte *)(param_1 + 0x18);
	*(undefined2 *)(param_1 + 0x1d) = CONCAT11(*(undefined *)(param_1 + 0x1e), *(undefined *)(param_1 + 0x1d));
	*(undefined2 *)(param_1 + 0x1f) = CONCAT11(*(undefined *)(param_1 + 0x20), *(undefined *)(param_1 + 0x1f));
	*(uint *)(param_1 + 0x21) = (uint) * (byte *)(param_1 + 0x24) << 0x18 | (uint) * (byte *)(param_1 + 0x23) << 0x10 | (uint) * (byte *)(param_1 + 0x22) << 8 | (uint) * (byte *)(param_1 + 0x21);
	if (_DAT_100f4488 + 1 < 7) {
		_DAT_100f4488 = _DAT_100f4488 + 1;
		return;
	}
	_DAT_100f4488 = 0;
	return;
}

ulonglong sync_all_monsters(undefined *param_1, ulonglong param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined uVar4;
	ulonglong uVar2;
	int iVar3;
	ulonglong uVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	int iVar12;
	undefined *puVar13;
	undefined4 in_stack_ffffffb8;

	puVar1 = PTR_DAT_100f19a4;
	puVar13 = PTR_DAT_100f17ec;
	lVar11 = (longlong)param_8;
	lVar10 = (longlong)param_7;
	lVar9 = (longlong)param_6;
	lVar8 = (longlong)param_5;
	lVar7 = (longlong)param_4;
	lVar6 = (longlong)param_3;
	if ((0 < *(int *)PTR_DAT_100f19a4) && (0x2a < (param_2 & 0xffffffff))) {
		*param_1 = 0x23;
		uVar5 = (ulonglong)(byte)*puVar13;
		param_2 = param_2 - 0x26;
		param_1[1] = *puVar13;
		*(undefined2 *)(param_1 + 2) = 0;
		puVar13 = param_1 + 0x26;
		uVar4 = SyncPlrInv((int)param_1);
		sync_one_monster(uVar4, (char)uVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10,
		    (char)lVar11, in_stack_ffffffb8);
		iVar12 = 0;
		while ((iVar12 < *(int *)puVar1 && (4 < (param_2 & 0xffffffff)))) {
			iVar3 = 0;
			if (iVar12 < 2) {
				uVar2 = sync_monster_active2(puVar13, (char)uVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9,
				    (char)lVar10, (char)lVar11, in_stack_ffffffb8);
				iVar3 = (int)uVar2;
			}
			if (iVar3 == 0) {
				uVar2 = sync_monster_active(puVar13, (char)uVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9,
				    (char)lVar10, (char)lVar11, in_stack_ffffffb8);
				iVar3 = (int)uVar2;
			}
			if (iVar3 == 0) {
				return param_2;
			}
			*(ushort *)(param_1 + 2) = CONCAT11(param_1[3], param_1[2]);
			*(short *)(param_1 + 2) = *(short *)(param_1 + 2) + 5;
			puVar13 = puVar13 + 5;
			param_2 = param_2 - 5;
			iVar12 = iVar12 + 1;
			*(ushort *)(param_1 + 2) = CONCAT11(param_1[3], param_1[2]);
		}
	}
	return param_2;
}

void sync_monster(int param_1, byte *param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	byte bVar1;
	uint uVar2;
	int iVar3;
	uint *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	longlong lVar9;
	longlong lVar10;
	ulonglong uVar11;
	ulonglong uVar12;
	uint *puVar13;
	int iVar15;
	byte bVar16;
	ulonglong uVar14;
	byte bVar18;
	ulonglong uVar17;
	undefined7 uVar19;
	undefined uVar20;
	undefined uVar21;
	undefined uVar22;
	undefined uVar23;
	undefined4 in_stack_ffffffa8;

	puVar8 = PTR_DAT_100f1954;
	puVar5 = PTR_DAT_100f187c;
	puVar7 = PTR_DAT_100f1828;
	puVar6 = PTR_DAT_100f1824;
	uVar19 = (undefined7)((ulonglong)param_5 >> 8);
	uVar20 = (undefined)param_5;
	bVar1 = *param_2;
	uVar12 = (ulonglong)bVar1;
	if (*(int *)(PTR_DAT_100f187c + (uint)bVar1 * 0xe8 + 0x98) != 0) {
		iVar15 = 0;
		puVar13 = (uint *)PTR_DAT_100f19a8;
		while ((iVar15 < *(int *)PTR_DAT_100f19a4 && ((uint)bVar1 != *puVar13))) {
			puVar13 = puVar13 + 1;
			iVar15 = iVar15 + 1;
		}
		iVar15 = (uint)bVar1 * 0xe8;
		puVar13 = (uint *)(PTR_DAT_100f187c + iVar15 + 0x24);
		lVar9 = abs((ulonglong)
		        * (uint *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x3c)
		    - (ulonglong)*puVar13);
		puVar4 = (uint *)(puVar5 + iVar15 + 0x20);
		lVar10 = abs((ulonglong) * (uint *)(puVar7 + *(int *)puVar6 * 0x55ec + 0x38) - (ulonglong)*puVar4);
		uVar11 = lVar10 + lVar9;
		if (0xff < (uVar11 & 0xffffffff)) {
			uVar11 = 0xff;
		}
		if (((ulonglong)param_2[4] <= (uVar11 & 0xffffffff)) && (((uVar11 & 0xffffffff) != (ulonglong)param_2[4] || (param_1 <= *(int *)puVar6)))) {
			if (((uint)param_2[1] != *(uint *)(puVar5 + iVar15 + 0x28)) || ((uint)param_2[2] != *(uint *)(puVar5 + iVar15 + 0x2c))) {
				iVar3 = *(int *)(puVar5 + iVar15 + 4);
				if ((iVar3 != 0xe) && (iVar3 != 0xf)) {
					lVar9 = abs((ulonglong)*puVar4 - (ulonglong)param_2[1]);
					lVar10 = abs((ulonglong)*puVar13 - (ulonglong)param_2[2]);
					uVar23 = (undefined)param_8;
					uVar22 = (undefined)param_7;
					uVar21 = (undefined)param_6;
					if (((int)lVar9 < 3) && ((int)lVar10 < 3)) {
						iVar3 = *(int *)(puVar5 + iVar15 + 4);
						if ((iVar3 < 1) || (3 < iVar3)) {
							uVar14 = (ulonglong)param_2[1];
							uVar17 = (ulonglong)param_2[2];
							uVar11 = GetDirection((ulonglong)*puVar4, *puVar13, uVar14, (uint)param_2[2]);
							uVar14 = DirOK(uVar12, (uint)uVar11, uVar14, uVar17, CONCAT71(uVar19, uVar20),
							    param_6, param_7, param_8, in_stack_ffffffa8);
							if ((int)uVar14 != 0) {
								M_ClearSquares((uint)bVar1);
								uVar2 = *(uint *)puVar8;
								*(undefined2 *)(uVar2 + *puVar4 * 0xe0 + *puVar13 * 2) = (short)(uVar12 + 1);
								M_WalkDir(uVar12, (uint)uVar11, (ulonglong)uVar2, uVar12 + 1, CONCAT71(uVar19, uVar20), param_6, param_7, param_8, in_stack_ffffffa8);
								puVar5[iVar15 + 0xa4] = 0xff;
							}
						}
					} else {
						if (*(short *)(*(int *)puVar8 + (uint)param_2[1] * 0xe0 + (uint)param_2[2] * 2) == 0) {
							M_ClearSquares((uint)bVar1);
							*(short *)(*(int *)puVar8 + (uint)param_2[1] * 0xe0 + (uint)param_2[2] * 2) = (ushort)bVar1 + 1;
							*puVar4 = (uint)param_2[1];
							*puVar13 = (uint)param_2[2];
							decode_enemy((uint)bVar1, (uint)param_2[3]);
							puVar5 = puVar5 + iVar15;
							bVar16 = puVar5[0x50];
							bVar18 = puVar5[0x51];
							uVar12 = GetDirection((ulonglong)param_2[1], (uint)param_2[2], (ulonglong)bVar16,
							    (uint)bVar18);
							M_StartStand((uint)bVar1, (int)uVar12, bVar16, bVar18, uVar20, uVar21, uVar22, uVar23,
							    in_stack_ffffffa8);
							puVar5[0xa4] = 0xff;
						}
					}
					decode_enemy((uint)bVar1, (uint)param_2[3]);
				}
			}
		}
	}
	return;
}

longlong sync_update(int param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	char *pcVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	ushort uVar7;
	longlong lVar8;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar2 = PTR_DAT_100f17ec;
	lVar6 = (longlong)param_8;
	lVar5 = (longlong)param_7;
	lVar4 = (longlong)param_6;
	ppuVar3 = &toc;
	lVar8 = param_2 + 0x26;
	pcVar1 = (char *)param_2;
	*(ushort *)(pcVar1 + 2) = CONCAT11(pcVar1[3], pcVar1[2]);
	*(ushort *)(pcVar1 + 9) = CONCAT11(pcVar1[10], pcVar1[9]);
	*(ushort *)(pcVar1 + 0xb) = CONCAT11(pcVar1[0xc], pcVar1[0xb]);
	*(uint *)(pcVar1 + 0xd) = (uint)(byte)pcVar1[0x10] << 0x18 | (uint)(byte)pcVar1[0xf] << 0x10 | (uint)(byte)pcVar1[0xe] << 8 | (uint)(byte)pcVar1[0xd];
	*(ushort *)(pcVar1 + 0x16) = CONCAT11(pcVar1[0x17], pcVar1[0x16]);
	*(uint *)(pcVar1 + 0x18) = (uint)(byte)pcVar1[0x1b] << 0x18 | (uint)(byte)pcVar1[0x1a] << 0x10 | (uint)(byte)pcVar1[0x19] << 8 | (uint)(byte)pcVar1[0x18];
	*(ushort *)(pcVar1 + 0x1d) = CONCAT11(pcVar1[0x1e], pcVar1[0x1d]);
	*(ushort *)(pcVar1 + 0x1f) = CONCAT11(pcVar1[0x20], pcVar1[0x1f]);
	*(uint *)(pcVar1 + 0x21) = (uint)(byte)pcVar1[0x24] << 0x18 | (uint)(byte)pcVar1[0x23] << 0x10 | (uint)(byte)pcVar1[0x22] << 8 | (uint)(byte)pcVar1[0x21];
	if (*pcVar1 != '#') {
		ppuVar3 = &toc;
		app_fatal(_DAT_100f3924, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4);
	}
	if (*ppuVar3[-0x1caf] == '\x01') {
		lVar4 = (ulonglong) * (ushort *)(pcVar1 + 2) + 0x26;
	} else {
		if (param_1 == *(int *)ppuVar3[-0x1deb]) {
			lVar4 = (ulonglong) * (ushort *)(pcVar1 + 2) + 0x26;
		} else {
			uVar7 = *(ushort *)(pcVar1 + 2);
			while (4 < uVar7) {
				if (*puVar2 == pcVar1[1]) {
					sync_monster(param_1, (byte *)lVar8, param_3, param_4, param_5, (int)lVar4, (int)lVar5,
					    (int)lVar6, in_stack_ffffffb8);
				}
				delta_sync_monster((byte *)lVar8, (uint)(byte)pcVar1[1]);
				lVar8 = lVar8 + 5;
				uVar7 = uVar7 - 5;
			}
			lVar4 = (ulonglong) * (ushort *)(pcVar1 + 2) + 0x26;
		}
	}
	return lVar4;
}

void sync_init(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	_DAT_100f4490 = *(int *)PTR_DAT_100f1824 << 4;
	memset((char)_DAT_100f3928, 0x90, 0xff, (char)PTR_DAT_100f1824, param_5, param_6, param_7, param_8,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	return;
}
