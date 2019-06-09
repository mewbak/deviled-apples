
void GetDamageAmt(uint param_1)

{
	if (0x24 < param_1) {
		return;
	}
	// WARNING: Could not recover jumptable at 0x1005c238. Too many branches
	// WARNING: Treating indirect jump as call
	(**(code **)(_DAT_100f30ec + param_1 * 4))();
	return;
}

undefined8
CheckBlock(longlong param_1, int param_2, longlong param_3, int param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	int iVar3;
	undefined *puVar4;
	undefined *puVar5;
	ulonglong uVar6;
	undefined8 uVar7;

	puVar5 = PTR_DAT_100f1ef8;
	puVar4 = PTR_DAT_100f1ef4;
	iVar3 = _DAT_100f1da4;
	puVar2 = PTR_DAT_100f1a54;
	uVar7 = 0;
	while (((int)param_1 != (int)param_3 || (param_2 != param_4))) {
		uVar6 = GetDirection(param_1, param_2, param_3, param_4);
		iVar1 = (int)uVar6 * 4;
		param_1 = param_1 + (ulonglong) * (uint *)(puVar5 + iVar1);
		param_2 = param_2 + *(int *)(puVar4 + iVar1);
		if (*(char *)(iVar3 + (int)*(short *)(*(int *)puVar2 + (int)param_1 * 0xe0 + param_2 * 2)) != '\0') {
			uVar7 = 1;
		}
	}
	return uVar7;
}

longlong FindClosest(longlong param_1, int param_2, int param_3, undefined param_4, undefined param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	short sVar1;
	undefined4 uVar2;
	undefined4 *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined4 *puVar6;
	undefined8 uVar7;
	longlong lVar8;
	undefined4 *puVar9;
	int iVar10;
	ulonglong uVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	int *piVar15;
	undefined8 unaff_r24;
	char *pcVar16;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	ulonglong uVar17;
	undefined8 unaff_r29;
	int iVar18;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	longlong lVar19;
	undefined4 in_stack_ffffff58;
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

	puVar5 = PTR_DAT_100f1ef0;
	puVar4 = PTR_DAT_100f1954;
	lVar14 = (longlong)param_8;
	lVar13 = (longlong)param_7;
	lVar12 = (longlong)param_6;
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
	uVar11 = ZEXT48(PTR_DAT_100f30e8);
	lVar8 = uVar11 - 8;
	lVar19 = 9;
	puVar6 = auStack128;
	do {
		puVar9 = puVar6;
		lVar8 = lVar8 + 8;
		puVar3 = (undefined4 *)lVar8;
		uVar2 = puVar3[1];
		puVar9[2] = *puVar3;
		puVar9[3] = uVar2;
		lVar19 = lVar19 + -1;
		puVar6 = puVar9 + 2;
	} while (lVar19 != 0);
	puVar9[4] = puVar3[2];
	if (0x13 < param_3) {
		param_3 = 0x13;
	}
	piVar15 = local_74;
	iVar18 = 1;
	do {
		if (param_3 <= iVar18) {
			return -1;
		}
		uVar17 = (ulonglong)(byte)puVar5[*piVar15];
		pcVar16 = puVar5 + *piVar15 + 1;
		while (0 < (int)uVar17) {
			lVar8 = param_1 + (longlong)*pcVar16;
			iVar10 = param_2 + (int)pcVar16[1];
			if ((((0 < lVar8) && ((int)lVar8 < 0x70)) && (0 < iVar10)) && (((iVar10 < 0x70 && (sVar1 = *(short *)(*(int *)puVar4 + (int)lVar8 * 0xe0 + iVar10 * 2), 0 < sVar1)) && (uVar7 = CheckBlock(param_1, param_2, lVar8, iVar10, (char)uVar11, (char)lVar12, (char)lVar13, (char)lVar14, in_stack_ffffff58), (int)uVar7 == 0)))) {
				return (longlong)sVar1 + -1;
			}
			pcVar16 = pcVar16 + 2;
			uVar17 = uVar17 - 1;
		}
		piVar15 = piVar15 + 1;
		iVar18 = iVar18 + 1;
	} while (true);
}

longlong GetSpellLevel(int param_1, int param_2)

{
	longlong lVar1;

	if (param_1 == *(int *)PTR_DAT_100f1824) {
		lVar1 = (longlong)(char)(PTR_DAT_100f1828 + param_1 * 0x55ec)[param_2 + 0xc1] + (longlong)(char)(PTR_DAT_100f1828 + param_1 * 0x55ec)[0x5570];
	} else {
		lVar1 = 1;
	}
	if (-1 < (int)lVar1) {
		return lVar1;
	}
	return 0;
}

ulonglong GetDirection8(longlong param_1, longlong param_2, longlong param_3, longlong param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	byte bVar1;
	undefined4 uVar2;
	int iVar4;
	ulonglong uVar3;
	undefined4 *puVar5;
	undefined4 *puVar6;
	undefined8 unaff_r27;
	int iVar7;
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
	puVar6 = (undefined4 *)((int)&local_125 + 1);
	puVar5 = (undefined4 *)(PTR_DAT_100f30e4 + -8);
	do {
		uVar2 = puVar5[3];
		puVar6[2] = puVar5[2];
		puVar6[3] = uVar2;
		lVar8 = lVar8 + -1;
		puVar6 = puVar6 + 2;
		puVar5 = puVar5 + 2;
	} while (lVar8 != 0);
	local_11f = _DAT_100f4218;
	local_122 = _DAT_100f421b;
	local_125 = _DAT_100f421e;
	local_128 = _DAT_100f4221;
	local_11d = DAT_100f421a;
	local_120 = DAT_100f421d;
	local_123 = DAT_100f4220;
	local_126 = DAT_100f4223;
	lVar8 = abs(param_3 - param_1);
	iVar7 = (int)lVar8;
	if (0xf < iVar7) {
		iVar7 = 0xf;
	}
	lVar8 = abs(param_4 - param_2);
	iVar4 = (int)lVar8;
	if (0xf < iVar4) {
		iVar4 = 0xf;
	}
	bVar1 = local_11c[iVar4 * 0x10 + iVar7];
	if ((int)param_3 < (int)param_1) {
		if ((int)param_4 < (int)param_2) {
			uVar3 = (ulonglong) * (byte *)((int)&local_11f + (uint)bVar1);
		} else {
			uVar3 = (ulonglong) * (byte *)((int)&local_125 + (uint)bVar1 + 3);
		}
	} else {
		if ((int)param_4 < (int)param_2) {
			uVar3 = (ulonglong) * (byte *)((int)&local_125 + (uint)bVar1);
		} else {
			uVar3 = (ulonglong) * (byte *)((int)&local_128 + (uint)bVar1);
		}
	}
	return uVar3;
}

ulonglong GetDirection16(longlong param_1, longlong param_2, longlong param_3, longlong param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	byte bVar1;
	undefined4 uVar2;
	int iVar4;
	ulonglong uVar3;
	undefined4 *puVar5;
	undefined4 *puVar6;
	undefined8 unaff_r27;
	int iVar7;
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
	puVar6 = (undefined4 *)((int)&local_12e + 2);
	puVar5 = (undefined4 *)(PTR_DAT_100f30e0 + -8);
	do {
		uVar2 = puVar5[3];
		puVar6[2] = puVar5[2];
		puVar6[3] = uVar2;
		lVar8 = lVar8 + -1;
		puVar6 = puVar6 + 2;
		puVar5 = puVar5 + 2;
	} while (lVar8 != 0);
	local_129 = *(undefined4 *)PTR_DAT_100f30dc;
	local_125 = PTR_DAT_100f30dc[4];
	local_12e = *(undefined4 *)PTR_DAT_100f30d8;
	local_12a = PTR_DAT_100f30d8[4];
	local_133 = *(undefined4 *)PTR_DAT_100f30d4;
	local_12f = PTR_DAT_100f30d4[4];
	local_138 = *(undefined4 *)PTR_DAT_100f30d0;
	local_134 = PTR_DAT_100f30d0[4];
	lVar8 = abs(param_3 - param_1);
	iVar7 = (int)lVar8;
	if (0xf < iVar7) {
		iVar7 = 0xf;
	}
	lVar8 = abs(param_4 - param_2);
	iVar4 = (int)lVar8;
	if (0xf < iVar4) {
		iVar4 = 0xf;
	}
	bVar1 = local_124[iVar4 * 0x10 + iVar7];
	if ((int)param_3 < (int)param_1) {
		if ((int)param_4 < (int)param_2) {
			uVar3 = (ulonglong) * (byte *)((int)&local_12e + (uint)bVar1 + 5);
		} else {
			uVar3 = (ulonglong) * (byte *)((int)&local_12e + (uint)bVar1);
		}
	} else {
		if ((int)param_4 < (int)param_2) {
			uVar3 = (ulonglong) * (byte *)((int)&local_133 + (uint)bVar1);
		} else {
			uVar3 = (ulonglong) * (byte *)((int)&local_138 + (uint)bVar1);
		}
	}
	return uVar3;
}

void DeleteMissile(longlong param_1, int param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f1970;
	puVar2 = PTR_DAT_100f1968;
	ppuVar4 = &toc;
	iVar1 = (int)(param_1 * 0xb4);
	if (*(int *)(PTR_DAT_100f196c + iVar1) == 0xd) {
		iVar1 = *(int *)(PTR_DAT_100f196c + iVar1 + 0x78);
		ppuVar4 = &toc;
		if (iVar1 == *(int *)PTR_DAT_100f1824) {
			ppuVar4 = &toc;
			NetSendCmd(1, 0x5d, ZEXT48(PTR_DAT_100f196c), param_1 * 0xb4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffb8);
		}
		ppuVar4[-0x1dea][iVar1 * 0x55ec + 0x5594] = 0;
	}
	*(int *)(ppuVar4[-0x1c54] + (0x7d - *(int *)puVar2) * 4) = (int)param_1;
	*(int *)puVar2 = *(int *)puVar2 + -1;
	iVar1 = *(int *)puVar2;
	if ((0 < iVar1) && (param_2 != iVar1)) {
		*(undefined4 *)(puVar3 + param_2 * 4) = *(undefined4 *)(puVar3 + iVar1 * 4);
	}
	return;
}

void GetMissileVel(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
    undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined *puVar1;
	double dVar2;
	double dVar3;
	double dVar4;
	double dVar5;

	puVar1 = PTR_DAT_100f196c;
	if ((param_4 == param_2) && (param_5 == param_3)) {
		puVar1 = PTR_DAT_100f196c + param_1 * 0xb4;
		*(undefined4 *)(puVar1 + 0x14) = 0;
		*(undefined4 *)(puVar1 + 0x18) = 0;
	} else {
		dVar3 = (double)CONCAT44(0x43300000,
		            ((param_4 - param_2) + (param_5 - param_3)) * 0x200000 ^ 0x80000000)
		    - _DAT_100f4230;
		dVar4 = (double)CONCAT44(0x43300000,
		            ((param_4 - param_2) - (param_5 - param_3)) * 0x200000 ^ 0x80000000)
		    - _DAT_100f4230;
		dVar5 = _DAT_100f4230;
		dVar2 = sqrt(dVar4 * dVar4 + dVar3 * dVar3);
		*(int *)(puVar1 + param_1 * 0xb4 + 0x14) = (int)((((double)CONCAT44(0x43300000, param_6 << 0x10 ^ 0x80000000) - dVar5) * dVar4) / dVar2);
		*(int *)(puVar1 + param_1 * 0xb4 + 0x18) = (int)((((double)CONCAT44(0x43300000, param_6 << 0xf ^ 0x80000000) - dVar5) * dVar3) / dVar2);
	}
	return;
}

void PutMissile(undefined8 param_1)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	char *pcVar5;
	int iVar6;

	puVar3 = PTR_DAT_100f196c;
	iVar2 = (int)param_1 * 0xb4;
	iVar1 = *(int *)(PTR_DAT_100f196c + iVar2 + 4);
	iVar6 = *(int *)(PTR_DAT_100f196c + iVar2 + 8);
	if ((((iVar1 < 1) || (iVar6 < 1)) || (0x6f < iVar1)) || (0x6f < iVar6)) {
		*(undefined4 *)(PTR_DAT_100f196c + iVar2 + 0x34) = 1;
	}
	puVar4 = PTR_DAT_100f1a3c;
	if (*(int *)(puVar3 + iVar2 + 0x34) != 0) {
		return;
	}
	iVar6 = iVar1 * 0x70 + iVar6;
	*(byte *)(*(int *)PTR_DAT_100f1834 + iVar6) = *(byte *)(*(int *)PTR_DAT_100f1834 + iVar6) | 1;
	pcVar5 = (char *)(*(int *)puVar4 + iVar6);
	if (*pcVar5 == '\0') {
		*pcVar5 = (char)param_1 + '\x01';
	} else {
		*pcVar5 = -1;
	}
	if (*(int *)(puVar3 + iVar2 + 0x6c) == 0) {
		return;
	}
	*(undefined4 *)PTR_DAT_100f1eec = 1;
	return;
}

void GetMissilePos(int iParm1)

{
	uint uVar1;
	uint uVar2;
	int iVar3;
	undefined *puVar4;
	ulonglong in_r9;
	longlong lVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	uVar2 = *(int *)(PTR_DAT_100f196c + iParm1 * 0xb4 + 0x24) >> 0x10;
	iVar3 = *(int *)(PTR_DAT_100f196c + iParm1 * 0xb4 + 0x28) >> 0x10;
	uVar1 = iVar3 * 2;
	lVar5 = (in_r9 & 0xffffffff00000000 | (ulonglong)uVar2) + (ulonglong)uVar1;
	iVar7 = uVar1 - uVar2;
	iVar6 = (int)lVar5;
	if (lVar5 < 0) {
		iVar8 = -(-iVar6 >> 3);
		iVar6 = -(-iVar6 >> 6);
	} else {
		iVar8 = iVar6 >> 3;
		iVar6 = iVar6 >> 6;
	}
	if (iVar7 < 0) {
		iVar9 = -(-iVar7 >> 3);
		iVar7 = -(-iVar7 >> 6);
	} else {
		iVar9 = iVar7 >> 3;
		iVar7 = iVar7 >> 6;
	}
	puVar4 = PTR_DAT_100f196c + iParm1 * 0xb4;
	*(int *)(puVar4 + 4) = iVar6 + *(int *)(puVar4 + 0x1c);
	*(int *)(puVar4 + 8) = iVar7 + *(int *)(puVar4 + 0x20);
	*(uint *)(puVar4 + 0xc) = uVar2 + (iVar6 - iVar7) * -0x20;
	*(int *)(puVar4 + 0x10) = iVar3 + (iVar6 + iVar7) * -0x10;
	ChangeLightOff(*(int *)(puVar4 + 0x8c), iVar8 + iVar6 * -8, iVar9 + iVar7 * -8);
	return;
}

void MoveMissilePos(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int *piVar1;
	int *piVar2;
	ulonglong uVar3;
	int unaff_r27;
	undefined *puVar4;
	int unaff_r31;
	undefined4 in_stack_ffffffb8;

	param_1 = param_1 * 0xb4;
	if (*(uint *)(PTR_DAT_100f196c + param_1 + 0x2c) < 8) {
		// WARNING: Could not recover jumptable at 0x1005d80c. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(PTR_PTR_LAB_100f30cc + *(uint *)(PTR_DAT_100f196c + param_1 + 0x2c) * 4))();
		return;
	}
	piVar1 = (int *)(PTR_DAT_100f196c + param_1 + 4);
	puVar4 = PTR_DAT_100f196c + param_1;
	piVar2 = (int *)(PTR_DAT_100f196c + param_1 + 8);
	uVar3 = PosOkMonst(*(int *)(puVar4 + 0x78), unaff_r27 + *piVar1, unaff_r31 + *piVar2, param_4,
	    param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	if ((int)uVar3 != 0) {
		*piVar1 = *piVar1 + unaff_r27;
		*piVar2 = *piVar2 + unaff_r31;
		*(int *)(puVar4 + 0xc) = *(int *)(puVar4 + 0xc) + (unaff_r27 - unaff_r31) * -0x20;
		*(int *)(puVar4 + 0x10) = *(int *)(puVar4 + 0x10) + (unaff_r27 + unaff_r31) * -0x10;
	}
	return;
}

ulonglong MonsterTrapHit(ulonglong param_1, longlong param_2, longlong param_3, int param_4,
    ulonglong param_5, uint param_6, undefined8 param_7, undefined4 param_8,
    undefined4 param_9)

{
	char cVar1;
	ushort uVar2;
	bool bVar3;
	undefined *puVar4;
	ulonglong uVar5;
	undefined8 uVar6;
	int iVar7;
	undefined uVar8;
	ulonglong uVar9;
	undefined7 uVar10;
	undefined uVar11;
	uint uVar12;
	longlong lVar13;
	int iVar14;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	int *piVar15;
	undefined8 unaff_r29;
	int *piVar16;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;
	uint local_38[4];
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

	puVar4 = PTR_DAT_100f187c;
	uVar10 = (undefined7)(param_5 >> 8);
	uVar11 = (undefined)param_5;
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
	lVar13 = ZEXT48(PTR_DAT_100f187c) + param_1 * 0xe8;
	bVar3 = false;
	iVar14 = (int)lVar13;
	if (*(int *)(iVar14 + 0xd4) == 0) {
		piVar15 = (int *)(iVar14 + 0x98);
		if (*(int *)(iVar14 + 0x98) >> 6 == 0) {
			uVar5 = 0;
		} else {
			if ((**(char **)(iVar14 + 0xe0) == ' ') && (*(char *)(iVar14 + 8) == '\x02')) {
				uVar5 = 0;
			} else {
				iVar7 = (int)(param_1 * 0xe8);
				piVar16 = (int *)(PTR_DAT_100f187c + iVar7 + 4);
				if (*(int *)(PTR_DAT_100f187c + iVar7 + 4) == 0xe) {
					uVar5 = 0;
				} else {
					uVar5 = ZEXT48(PTR_DAT_100f1ee8);
					uVar2 = *(ushort *)(PTR_DAT_100f187c + iVar7 + 0xd0);
					uVar9 = (ulonglong)uVar2;
					cVar1 = PTR_DAT_100f1ee8[(int)param_5 * 0x1c + 0x11];
					if (((((uVar2 & 8) == 0) || (cVar1 != '\x03')) && (((uVar2 & 0x10) == 0 || (cVar1 != '\x01')))) && (((uVar2 & 0x20) == 0 || (cVar1 != '\x02')))) {
						if (((((uVar2 & 1) != 0) && (cVar1 == '\x03')) || (((uVar2 & 2) != 0 && (cVar1 == '\x01')))) || (((uVar2 & 4) != 0 && (cVar1 == '\x02')))) {
							bVar3 = true;
						}
						uVar12 = param_6;
						lVar13 = random(0x44, 100, (char)PTR_DAT_100f1ee8, (char)uVar2, uVar11, (char)param_6,
						    (char)lVar13, (char)param_8, in_stack_ffffff98, in_stack_ffffff9f,
						    in_stack_ffffffab);
						uVar8 = (undefined)uVar5;
						param_4 = (0x5a - (uint)(byte)puVar4[iVar7 + 0xce]) - param_4;
						if (param_4 < 5) {
							param_4 = 5;
						}
						if (0x5f < param_4) {
							param_4 = 0x5f;
						}
						uVar6 = CheckMonsterHit(param_1, local_38, uVar5, uVar9, CONCAT71(uVar10, uVar11), uVar12, iVar14,
						    param_8, in_stack_ffffff98);
						if ((int)uVar6 == 0) {
							if ((param_4 <= (int)lVar13) && (*piVar16 != 0xf)) {
								return 0;
							}
							lVar13 = random(0x44, (param_3 - param_2) + 1, uVar8, (char)uVar9, uVar11,
							    (char)uVar12, (char)iVar14, (char)param_8, in_stack_ffffff98,
							    in_stack_ffffff9f, in_stack_ffffffab);
							uVar5 = param_2 + lVar13;
							if ((param_6 & 0xff) == 0) {
								uVar5 = (ulonglong)(uint)((int)uVar5 << 6);
							}
							if (bVar3) {
								*piVar15 = *piVar15 - ((int)uVar5 >> 2);
							} else {
								*piVar15 = *piVar15 - (int)uVar5;
							}
							if (*piVar15 >> 6 == 0) {
								if (*piVar16 == 0xf) {
									M_StartKill(param_1, 0xffffffffffffffff, uVar5, uVar9, CONCAT71(uVar10, uVar11), uVar12, iVar14, param_8, in_stack_ffffff98);
									*piVar16 = 0xf;
								} else {
									M_StartKill(param_1, 0xffffffffffffffff, uVar5, uVar9, CONCAT71(uVar10, uVar11), uVar12, iVar14, param_8, in_stack_ffffff98);
								}
							} else {
								iVar7 = (int)param_1;
								if (bVar3) {
									PlayEffect(iVar7, 1, (char)uVar5, (char)uVar9, uVar11, (char)uVar12, (char)iVar14,
									    (char)param_8, in_stack_ffffff98);
								} else {
									if (*piVar16 == 0xf) {
										if (3 < iVar7) {
											M_StartHit(param_1, -1, uVar5, uVar9, CONCAT71(uVar10, uVar11), uVar12, iVar14,
											    param_8, in_stack_ffffff98);
										}
										*piVar16 = 0xf;
									} else {
										if (3 < iVar7) {
											M_StartHit(param_1, -1, uVar5, uVar9, CONCAT71(uVar10, uVar11), uVar12, iVar14,
											    param_8, in_stack_ffffff98);
										}
									}
								}
							}
							uVar5 = 1;
						} else {
							uVar5 = (ulonglong)local_38[0];
						}
					} else {
						uVar5 = 0;
					}
				}
			}
		}
	} else {
		uVar5 = 0;
	}
	return uVar5;
}

ulonglong MonsterMHit(ulonglong param_1, ulonglong param_2, ulonglong param_3, ulonglong param_4,
    ulonglong param_5, uint param_6, uint param_7, undefined4 param_8,
    undefined4 param_9)

{
	char cVar1;
	byte bVar2;
	ushort uVar3;
	uint uVar4;
	undefined *puVar5;
	bool bVar6;
	int iVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined **ppuVar11;
	ulonglong uVar12;
	undefined8 uVar13;
	ulonglong uVar14;
	ulonglong uVar15;
	undefined uVar17;
	int iVar16;
	ulonglong uVar18;
	ulonglong uVar19;
	uint uVar20;
	uint uVar21;
	int *piVar22;
	int *piVar23;
	longlong lVar24;
	ulonglong uVar25;
	ulonglong uVar26;
	int iVar27;
	int iVar28;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined in_stack_ffffff9b;
	uint local_48;

	puVar10 = PTR_DAT_100f1ee8;
	puVar9 = PTR_DAT_100f187c;
	puVar8 = PTR_DAT_100f1828;
	ppuVar11 = &toc;
	uVar25 = ZEXT48(PTR_DAT_100f187c);
	uVar26 = ZEXT48(PTR_DAT_100f1828);
	iVar7 = (int)(param_2 * 0xe8);
	puVar5 = PTR_DAT_100f187c + iVar7;
	bVar6 = false;
	if (*(int *)(puVar5 + 0xd4) == 0) {
		piVar22 = (int *)(puVar5 + 0x98);
		if (*(int *)(puVar5 + 0x98) >> 6 == 0) {
			uVar25 = 0;
		} else {
			if (((param_6 == 0x35) && (**(char **)(puVar5 + 0xe0) != 'n')) && (*(char *)(*(int *)(puVar5 + 0xe4) + 0x72) != '\0')) {
				return 0;
			}
			if ((**(char **)(PTR_DAT_100f187c + iVar7 + 0xe0) == ' ') && ((PTR_DAT_100f187c + iVar7)[8] == '\x02')) {
				uVar25 = 0;
			} else {
				piVar23 = (int *)(PTR_DAT_100f187c + iVar7 + 4);
				if (*(int *)(PTR_DAT_100f187c + iVar7 + 4) == 0xe) {
					uVar25 = 0;
				} else {
					uVar3 = *(ushort *)(PTR_DAT_100f187c + iVar7 + 0xd0);
					cVar1 = PTR_DAT_100f1ee8[param_6 * 0x1c + 0x11];
					if ((((((uVar3 & 8) == 0) || (cVar1 != '\x03')) && (((uVar3 & 0x10) == 0 || (cVar1 != '\x01')))) && (((uVar3 & 0x20) == 0 || (cVar1 != '\x02')))) && (((uVar3 & 0x80) == 0 || (cVar1 != '\x04')))) {
						if (((((uVar3 & 1) != 0) && (cVar1 == '\x03')) || (((uVar3 & 2) != 0 && (cVar1 == '\x01')))) || (((uVar3 & 4) != 0 && (cVar1 == '\x02')))) {
							bVar6 = true;
						}
						uVar15 = param_3;
						uVar18 = param_4;
						uVar19 = param_5;
						uVar20 = param_6;
						uVar21 = param_7;
						uVar12 = random(0x45, 100, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
						    (char)param_7, (char)param_8, in_stack_ffffff88, in_stack_ffffff8f,
						    in_stack_ffffff9b);
						iVar28 = (int)param_5;
						iVar27 = (int)param_1;
						if ((puVar10 + param_6 * 0x1c)[0x10] == '\0') {
							puVar5 = puVar8 + iVar27 * 0x55ec;
							uVar20 = *(uint *)(puVar5 + 0x5578);
							bVar2 = puVar5[0x15c];
							uVar21 = (uint)bVar2;
							uVar15 = (ulonglong) * (uint *)(puVar5 + 0x170);
							uVar18 = (longlong)(char)puVar5[0x1b4] + 0x32;
							uVar19 = (ulonglong)(byte)puVar9[iVar7 + 0xce] - (ulonglong)uVar20;
							iVar28 = (*(uint *)(puVar5 + 0x170) + *(int *)(puVar5 + 0x5554) + ((int)uVar18 - (int)uVar19)) - (iVar28 * iVar28 >> 1);
							if (bVar2 == 1) {
								iVar28 = iVar28 + 0x14;
							}
							if (bVar2 == 0) {
								iVar28 = iVar28 + 10;
							}
						} else {
							iVar28 = (*(int *)(puVar8 + iVar27 * 0x55ec + 0x168) + 0x32 + (int)(char)puVar9[iVar7 + 0xc4] * -2) - iVar28;
							if ((puVar8 + iVar27 * 0x55ec)[0x15c] == '\x02') {
								iVar28 = iVar28 + 0x14;
							}
						}
						uVar17 = (undefined)uVar15;
						if (iVar28 < 5) {
							iVar28 = 5;
						}
						if (0x5f < iVar28) {
							iVar28 = 0x5f;
						}
						if (*piVar23 == 0xf) {
							uVar12 = 0;
						}
						uVar14 = ZEXT48(register0x0000000c) - 0x48;
						uVar13 = CheckMonsterHit(param_2, (undefined4 *)uVar14, uVar15, uVar18, uVar19, uVar20, uVar21,
						    param_8, in_stack_ffffff88);
						if ((int)uVar13 == 0) {
							if ((int)uVar12 < iVar28) {
								if (param_6 == 0x3f) {
									uVar4 = *piVar22 / 3 + (*piVar22 >> 0x1f);
									param_3 = uVar12 & 0xffffffff00000000 | (ulonglong)(uint)((int)(uVar4 + (uVar4 >> 0x1f)) >> 6);
								} else {
									uVar14 = (param_4 - param_3) + 1;
									lVar24 = random(0x46, uVar14, uVar17, (char)uVar18, (char)uVar19, (char)uVar20,
									    (char)uVar21, (char)param_8, in_stack_ffffff88,
									    in_stack_ffffff8f, in_stack_ffffff9b);
									param_3 = param_3 + lVar24;
								}
								cVar1 = (puVar10 + param_6 * 0x1c)[0x10];
								if (cVar1 == '\0') {
									uVar18 = uVar26 + param_1 * 0x55ec;
									iVar28 = (int)uVar18;
									iVar16 = (int)param_3 * *(int *)(iVar28 + 0x5550);
									uVar14 = (ulonglong) * (uint *)(iVar28 + 0x555c);
									uVar4 = iVar16 / 100 + (iVar16 >> 0x1f);
									uVar19 = (ulonglong)(uVar4 >> 0x1f);
									lVar24 = param_3 + ((longlong)(int)((ulonglong)((longlong)iVar16 * 0x51eb851f) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar4) + uVar19 + uVar14;
									if (*(char *)(iVar28 + 0x15c) == '\x01') {
										param_3 = lVar24 + (ulonglong) * (uint *)(iVar28 + 0x184);
									} else {
										param_3 = lVar24 + (ulonglong)(uint)(*(int *)(iVar28 + 0x184) >> 1);
									}
								}
								if ((param_7 & 0xff) == 0) {
									param_3 = (ulonglong)(uint)((int)param_3 << 6);
								}
								if (bVar6) {
									param_3 = param_3 & 0xffffffff00000000 | (ulonglong)(uint)((int)param_3 >> 2);
								}
								if (iVar27 == *(int *)ppuVar11[-0x1deb]) {
									*piVar22 = *piVar22 - (int)param_3;
								}
								uVar4 = *(uint *)(puVar8 + iVar27 * 0x55ec + 0x5568);
								uVar26 = (ulonglong)uVar4;
								if ((uVar4 & 8) != 0) {
									uVar14 = uVar25 + param_2 * 0xe8;
									*(uint *)((int)uVar14 + 0xa0) = *(uint *)((int)uVar14 + 0xa0) | 8;
								}
								if (*piVar22 >> 6 == 0) {
									if (*piVar23 == 0xf) {
										M_StartKill(param_2, param_1, uVar26, uVar18, uVar19, uVar20, uVar21, param_8,
										    in_stack_ffffff88);
										*piVar23 = 0xf;
									} else {
										M_StartKill(param_2, param_1, uVar26, uVar18, uVar19, uVar20, uVar21, param_8,
										    in_stack_ffffff88);
									}
								} else {
									iVar28 = (int)param_2;
									if (bVar6) {
										PlayEffect(iVar28, 1, (char)uVar4, (char)uVar18, (char)uVar19, (char)uVar20,
										    (char)uVar21, (char)param_8, in_stack_ffffff88);
									} else {
										if (*piVar23 == 0xf) {
											if (3 < iVar28) {
												M_StartHit(param_2, param_1, param_3, uVar18, uVar19, uVar20, uVar21, param_8,
												    in_stack_ffffff88);
											}
											*piVar23 = 0xf;
										} else {
											if ((cVar1 == '\0') && ((uVar4 & 0x800) != 0)) {
												M_GetKnockback(param_2, uVar14, uVar26, uVar18, uVar19, uVar20, uVar21, param_8,
												    in_stack_ffffff88);
											}
											if (3 < iVar28) {
												M_StartHit(param_2, param_1, param_3, uVar18, uVar19, uVar20, uVar21, param_8,
												    in_stack_ffffff88);
											}
										}
									}
								}
								if (puVar9[iVar7 + 0xa4] == '\0') {
									puVar9[iVar7 + 0xa4] = -1;
									*(undefined4 *)(puVar9 + iVar7 + 0xac) = *(undefined4 *)(puVar8 + iVar27 * 0x55ec + 0x38);
									*(undefined4 *)(puVar9 + iVar7 + 0xb0) = *(undefined4 *)(puVar8 + iVar27 * 0x55ec + 0x3c);
								}
								uVar25 = 1;
							} else {
								uVar25 = 0;
							}
						} else {
							uVar25 = (ulonglong)local_48;
						}
					} else {
						uVar25 = 0;
					}
				}
			}
		}
	} else {
		uVar25 = 0;
	}
	return uVar25;
}

undefined8
PlayerMHit(ulonglong param_1, int param_2, ulonglong param_3, ulonglong param_4, longlong param_5,
    undefined8 param_6, ulonglong param_7, undefined8 param_8, undefined4 param_9)

{
	char cVar1;
	byte bVar2;
	uint uVar3;
	uint *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	int iVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined **ppuVar10;
	longlong lVar11;
	longlong lVar12;
	undefined8 uVar13;
	int iVar14;
	ulonglong uVar15;
	ulonglong uVar16;
	undefined7 uVar17;
	undefined uVar18;
	undefined4 uVar19;
	ulonglong uVar20;
	undefined4 uVar21;
	undefined4 uVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	longlong lVar27;
	ulonglong uVar28;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined in_stack_ffffff9b;

	puVar9 = PTR_DAT_100f1ee8;
	puVar8 = PTR_DAT_100f187c;
	puVar6 = PTR_DAT_100f1828;
	puVar5 = PTR_DAT_100f1824;
	uVar17 = (undefined7)((ulonglong)param_5 >> 8);
	uVar18 = (undefined)param_5;
	ppuVar10 = &toc;
	uVar28 = ZEXT48(PTR_DAT_100f1828);
	lVar27 = param_1 * 0x55ec;
	iVar7 = (int)lVar27;
	puVar4 = (uint *)(PTR_DAT_100f1828 + iVar7 + 0x194);
	if ((int)*puVar4 >> 6 == 0) {
		return 0;
	}
	if ((PTR_DAT_100f1828 + iVar7)[0x139] != '\0') {
		return 0;
	}
	iVar14 = (int)param_6;
	if ((((PTR_DAT_100f1828 + iVar7)[0x11c] & 1) != 0) && (PTR_DAT_100f1ee8[iVar14 * 0x1c + 0x10] == '\0')) {
		return 0;
	}
	uVar15 = param_3;
	uVar16 = param_4;
	uVar20 = param_7;
	uVar13 = param_8;
	lVar11 = random(0x48, 100, (char)param_3, (char)param_4, uVar18, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b);
	iVar26 = (int)param_3;
	if (puVar9[iVar14 * 0x1c + 0x10] == '\0') {
		uVar15 = uVar28 + lVar27;
		iVar25 = (int)uVar15;
		uVar3 = *(int *)(iVar25 + 0x170) / 5 + (*(int *)(iVar25 + 0x170) >> 0x1f);
		iVar24 = *(int *)(iVar25 + 0x554c) + *(int *)(iVar25 + 0x5558) + uVar3 + (uVar3 >> 0x1f);
		if (param_2 == -1) {
			iVar26 = (100 - (iVar24 >> 1)) + iVar26 * -2;
		} else {
			uVar16 = (ulonglong)(uint)(iVar26 * 2);
			uVar15 = (ulonglong)(byte)(puVar8 + param_2 * 0xe8)[200] + 0x1e;
			iVar26 = ((int)uVar15 - iVar24) + ((int)(char)(puVar8 + param_2 * 0xe8)[0xc4] - (int)*(char *)(iVar25 + 0x1b4)) * 2 + iVar26 * -2;
		}
	} else {
		if (param_2 == -1) {
			iVar26 = 0x28;
		} else {
			iVar26 = (int)(char)puVar8[param_2 * 0xe8 + 0xc4] * 2 + 0x28 + (int)(char)puVar6[iVar7 + 0x1b4] * -2 + iVar26 * -2;
		}
	}
	if (iVar26 < 10) {
		iVar26 = 10;
	}
	cVar1 = *ppuVar10[-0x1df9];
	if ((cVar1 == '\x0e') && (iVar26 < 0x14)) {
		iVar26 = 0x14;
	}
	if ((cVar1 == '\x0f') && (iVar26 < 0x19)) {
		iVar26 = 0x19;
	}
	if ((cVar1 == '\x10') && (iVar26 < 0x1e)) {
		iVar26 = 0x1e;
	}
	if (((*(int *)(puVar6 + iVar7) == 0) || (*(int *)(puVar6 + iVar7) == 4)) && (puVar6[iVar7 + 0x138] != '\0')) {
		lVar12 = random(0x49, 100, (char)uVar15, (char)uVar16, uVar18, (char)param_6, (char)uVar20,
		    (char)uVar13, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b);
		iVar25 = (int)lVar12;
	} else {
		iVar25 = 100;
	}
	if (((uint)param_7 & 0xff) == 1) {
		iVar25 = 100;
	}
	if (iVar14 == 0x3b) {
		iVar25 = 100;
	}
	if (param_2 == -1) {
		iVar24 = *(int *)(puVar6 + iVar7 + 0x188) + *(int *)(puVar6 + iVar7 + 0x170);
	} else {
		uVar16 = uVar28 + lVar27;
		iVar24 = (int)uVar16;
		uVar15 = SEXT18(*(char *)(iVar24 + 0x1b4));
		iVar24 = *(int *)(iVar24 + 0x188) + *(int *)(iVar24 + 0x170) + ((int)(char)puVar8[param_2 * 0xe8 + 0xc4] - (int)*(char *)(iVar24 + 0x1b4)) * -2;
	}
	if (iVar24 < 0) {
		iVar24 = 0;
	}
	if (100 < iVar24) {
		iVar24 = 100;
	}
	bVar2 = puVar9[iVar14 * 0x1c + 0x11];
	if (bVar2 == 2) {
		iVar23 = (int)(char)puVar6[iVar7 + 0x1c7];
	} else {
		if (bVar2 < 2) {
			if (bVar2 != 0) {
				iVar23 = (int)(char)puVar6[iVar7 + 0x1c6];
				goto LAB_1005e300;
			}
		} else {
			if (bVar2 < 5) {
				iVar23 = (int)(char)puVar6[iVar7 + 0x1c5];
				goto LAB_1005e300;
			}
		}
		iVar23 = 0;
	}
LAB_1005e300:
	if ((int)lVar11 < iVar26) {
		if (iVar14 == 0x3f) {
			uVar3 = (int)*puVar4 / 3 + ((int)*puVar4 >> 0x1f);
			iVar14 = uVar3 + (uVar3 >> 0x1f);
		} else {
			iVar14 = (int)param_4;
			if ((param_7 & 0xff) == 0) {
				lVar27 = random(0x4b, (ulonglong)(uint)((((int)param_5 - iVar14) + 1) * 0x40),
				    (char)uVar15, (char)uVar16, uVar18, (char)param_6, (char)uVar20,
				    (char)uVar13, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b);
				iVar14 = iVar14 * 0x40 + (int)lVar27;
				if ((param_2 == -1) && ((*(uint *)(puVar6 + iVar7 + 0x5568) & 0x10000000) != 0)) {
					iVar14 = iVar14 >> 1;
				}
				iVar14 = iVar14 + *(int *)(puVar6 + iVar7 + 0x556c) * 0x40;
				if (iVar14 < 0x40) {
					iVar14 = 0x40;
				}
			} else {
				lVar27 = random(0x4b, (param_5 - param_4) + 1, (char)uVar15, (char)uVar16, uVar18,
				    (char)param_6, (char)uVar20, (char)uVar13, in_stack_ffffff88,
				    in_stack_ffffff8f, in_stack_ffffff9b);
				iVar14 = iVar14 + (int)lVar27;
				if ((param_2 == -1) && ((*(uint *)(puVar6 + iVar7 + 0x5568) & 0x10000000) != 0)) {
					iVar14 = iVar14 >> 1;
				}
				iVar14 = iVar14 + *(int *)(puVar6 + iVar7 + 0x556c);
				if (iVar14 < 0x40) {
					iVar14 = 0x40;
				}
			}
		}
		uVar22 = (undefined4)uVar13;
		uVar21 = (undefined4)uVar20;
		uVar19 = (undefined4)param_6;
		if (iVar23 < 1) {
			if (iVar25 < iVar24) {
				if (param_2 == -1) {
					uVar28 = (ulonglong) * (uint *)(puVar6 + iVar7 + 0x70);
				} else {
					uVar15 = (ulonglong) * (uint *)(puVar8 + param_2 * 0xe8 + 0x20);
					uVar3 = *(uint *)(puVar8 + param_2 * 0xe8 + 0x24);
					uVar16 = (ulonglong)uVar3;
					uVar28 = GetDirection((ulonglong) * (uint *)(puVar6 + iVar7 + 0x38),
					    *(int *)(puVar6 + iVar7 + 0x3c), uVar15, uVar3);
				}
				StartPlrBlock(param_1, uVar28, uVar15, uVar16, CONCAT71(uVar17, uVar18), param_6, uVar20, uVar13,
				    in_stack_ffffff88);
				uVar13 = 1;
			} else {
				if ((int)param_1 == *(int *)puVar5) {
					*puVar4 = *puVar4 - iVar14;
					*(int *)(puVar6 + iVar7 + 0x18c) = *(int *)(puVar6 + iVar7 + 0x18c) - iVar14;
				}
				puVar6 = puVar6 + iVar7;
				uVar3 = *(uint *)(puVar6 + 0x198);
				if ((int)uVar3 < (int)*puVar4) {
					*puVar4 = uVar3;
					*(undefined4 *)(puVar6 + 0x18c) = *(undefined4 *)(puVar6 + 400);
				}
				if ((int)*puVar4 >> 6 == 0) {
					SyncPlrKill(param_1, (uint)param_8, (ulonglong)uVar3, uVar16, CONCAT71(uVar17, uVar18), param_6, uVar20, uVar13, in_stack_ffffff88);
				} else {
					StartPlrHit(param_1, (char)iVar14, 0, uVar16, CONCAT71(uVar17, uVar18), param_6, uVar20, uVar13,
					    in_stack_ffffff88);
				}
				uVar13 = 1;
			}
		} else {
			iVar26 = (int)((longlong)iVar14 * (longlong)iVar23);
			uVar3 = iVar26 / 100 + (iVar26 >> 0x1f);
			iVar26 = iVar14 - (uVar3 + (uVar3 >> 0x1f));
			if ((int)param_1 == *(int *)puVar5) {
				*puVar4 = *puVar4 - iVar26;
				*(int *)(puVar6 + iVar7 + 0x18c) = *(int *)(puVar6 + iVar7 + 0x18c) - iVar26;
			}
			puVar5 = puVar6 + iVar7;
			if ((int)*(uint *)(puVar5 + 0x198) < (int)*puVar4) {
				*puVar4 = *(uint *)(puVar5 + 0x198);
				*(undefined4 *)(puVar5 + 0x18c) = *(undefined4 *)(puVar5 + 400);
			}
			if ((int)*puVar4 >> 6 == 0) {
				SyncPlrKill(param_1, (uint)param_8, (longlong)iVar14 * (longlong)iVar23, uVar16,
				    CONCAT71(uVar17, uVar18), param_6, uVar20, uVar13, in_stack_ffffff88);
			} else {
				puVar6 = puVar6 + iVar7;
				cVar1 = puVar6[0x15c];
				if (cVar1 == '\0') {
					PlaySfxLoc(0x314, (ulonglong) * (uint *)(puVar6 + 0x38), (ulonglong) * (uint *)(puVar6 + 0x3c), uVar16, CONCAT71(uVar17, uVar18), uVar19, uVar21, uVar22, in_stack_ffffff88);
				} else {
					if (cVar1 == '\x01') {
						PlaySfxLoc(0x2a7, (ulonglong) * (uint *)(puVar6 + 0x38),
						    (ulonglong) * (uint *)(puVar6 + 0x3c), uVar16, CONCAT71(uVar17, uVar18), uVar19,
						    uVar21, uVar22, in_stack_ffffff88);
					} else {
						if (cVar1 == '\x02') {
							PlaySfxLoc(0x240, (ulonglong) * (uint *)(puVar6 + 0x38),
							    (ulonglong) * (uint *)(puVar6 + 0x3c), uVar16, CONCAT71(uVar17, uVar18), uVar19, uVar21, uVar22, in_stack_ffffff88);
						}
					}
				}
				*(undefined4 *)ppuVar10[-0x1dbc] = 1;
			}
			uVar13 = 1;
		}
	} else {
		uVar13 = 0;
	}
	return uVar13;
}

undefined8
Plr2PlrMHit(int param_1, ulonglong param_2, longlong param_3, longlong param_4, longlong param_5,
    ulonglong param_6, ulonglong param_7, longlong param_8, undefined4 param_9)

{
	byte bVar1;
	char cVar2;
	char cVar3;
	uint uVar4;
	uint uVar5;
	uint uVar6;
	undefined *puVar7;
	int iVar8;
	undefined *puVar9;
	longlong lVar10;
	undefined8 uVar11;
	int iVar12;
	int iVar13;
	undefined uVar17;
	undefined *puVar15;
	undefined *puVar16;
	ulonglong uVar14;
	undefined uVar20;
	longlong lVar18;
	ulonglong uVar19;
	undefined4 uVar21;
	ulonglong uVar22;
	undefined4 uVar23;
	undefined4 uVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	ulonglong uVar28;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;

	puVar7 = PTR_DAT_100f1ee8;
	puVar16 = PTR_DAT_100f1828;
	puVar9 = PTR_DAT_100f1824;
	uVar20 = (undefined)param_4;
	uVar28 = ZEXT48(PTR_DAT_100f1828);
	uVar5 = (uint)param_2;
	iVar8 = uVar5 * 0x55ec;
	if ((PTR_DAT_100f1828 + iVar8)[0x139] != '\0') {
		return 0;
	}
	iVar12 = (int)param_6;
	if (iVar12 == 0x35) {
		return 0;
	}
	if ((((PTR_DAT_100f1828 + iVar8)[0x11c] & 1) != 0) && (PTR_DAT_100f1ee8[iVar12 * 0x1c + 0x10] == '\0')) {
		return 0;
	}
	bVar1 = PTR_DAT_100f1ee8[iVar12 * 0x1c + 0x11];
	if (bVar1 == 2) {
		iVar13 = (int)(char)PTR_DAT_100f1828[iVar8 + 0x1c7];
	} else {
		if (bVar1 < 2) {
			if (bVar1 != 0) {
				iVar13 = (int)(char)PTR_DAT_100f1828[iVar8 + 0x1c6];
				goto LAB_1005e6a0;
			}
		} else {
			if (bVar1 < 5) {
				iVar13 = (int)(char)PTR_DAT_100f1828[iVar8 + 0x1c5];
				goto LAB_1005e6a0;
			}
		}
		iVar13 = 0;
	}
LAB_1005e6a0:
	uVar22 = param_7;
	lVar10 = random(0x45, 100, (char)param_3, uVar20, (char)param_5, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
	puVar7 = puVar7 + iVar12 * 0x1c;
	if (puVar7[0x10] == '\0') {
		iVar26 = *(int *)(puVar16 + 0x170 + iVar8);
		puVar15 = puVar16 + param_1 * 0x55ec;
		uVar4 = *(uint *)(puVar16 + 0x170 + param_1 * 0x55ec);
		uVar20 = (undefined)uVar4;
		uVar6 = iVar26 / 5 + (iVar26 >> 0x1f);
		param_6 = (ulonglong)(uVar6 >> 0x1f);
		bVar1 = puVar15[0x15c];
		uVar22 = (ulonglong)bVar1;
		param_8 = (ulonglong) * (uint *)(puVar16 + iVar8 + 0x554c) + (ulonglong) * (uint *)(puVar16 + iVar8 + 0x5558) + (uVar28 + 0x170 & 0xffffffff00000000 | (ulonglong)uVar6) + param_6;
		uVar17 = (undefined) * (uint *)(puVar15 + 0x5554);
		param_5 = ((ulonglong)uVar4 + (ulonglong) * (uint *)(puVar15 + 0x5554) + (((longlong)(char)puVar15[0x1b4] + 0x32) - param_8)) - ((longlong)(char)bVar1 & 0xffffffff00000000U | (ulonglong)(uint)((int)param_5 * (int)param_5 >> 1));
		if (bVar1 == 1) {
			param_5 = param_5 + 0x14;
		}
		if (bVar1 == 0) {
			param_5 = param_5 + 10;
		}
	} else {
		uVar17 = (undefined)((int)(char)puVar16[iVar8 + 0x1b4] << 1);
		param_5 = (((ulonglong) * (uint *)(puVar16 + param_1 * 0x55ec + 0x168) + 0x32) - (ulonglong)(uint)((int)(char)puVar16[iVar8 + 0x1b4] << 1)) - param_5;
		if ((puVar16 + param_1 * 0x55ec)[0x15c] == '\x02') {
			param_5 = param_5 + 0x14;
		}
	}
	if ((int)param_5 < 5) {
		param_5 = 5;
	}
	if (0x5f < (int)param_5) {
		param_5 = 0x5f;
	}
	if ((int)lVar10 < (int)param_5) {
		if (((*(int *)(puVar16 + iVar8) == 0) || (*(int *)(puVar16 + iVar8) == 4)) && (puVar16[iVar8 + 0x138] != '\0')) {
			lVar10 = random(0x49, 100, uVar17, uVar20, (char)param_5, (char)param_6, (char)uVar22,
			    (char)param_8, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
			iVar26 = (int)lVar10;
		} else {
			iVar26 = 100;
		}
		if (((uint)param_7 & 0xff) == 1) {
			iVar26 = 100;
		}
		iVar27 = param_1 * 0x55ec;
		cVar2 = (puVar16 + 0x1b4)[iVar8];
		cVar3 = (puVar16 + 0x1b4)[iVar27];
		lVar18 = (longlong)cVar2;
		lVar10 = ((ulonglong) * (uint *)(puVar16 + iVar8 + 0x188) + (ulonglong) * (uint *)(puVar16 + iVar8 + 0x170)) - (ulonglong)(uint)(((int)cVar3 - (int)cVar2) * 2);
		iVar25 = (int)lVar10;
		if (lVar10 < 0) {
			iVar25 = 0;
		}
		if (100 < iVar25) {
			iVar25 = 100;
		}
		if (iVar12 == 0x3f) {
			uVar4 = *(int *)(puVar16 + iVar8 + 0x194) / 3 + (*(int *)(puVar16 + iVar8 + 0x194) >> 0x1f);
			uVar28 = (longlong)(int)uVar4 + (ulonglong)(uVar4 >> 0x1f);
		} else {
			lVar10 = random(0x46, (param_4 - param_3) + 1, cVar3, cVar2, (char)param_5, (char)param_6,
			    (char)uVar22, (char)param_8, in_stack_ffffff98, in_stack_ffffff9f,
			    in_stack_ffffffab);
			uVar28 = param_3 + lVar10;
			if (puVar7[0x10] == '\0') {
				puVar15 = puVar16 + iVar27;
				lVar18 = 0x51eb851f;
				iVar12 = (int)uVar28 * *(int *)(puVar15 + 0x5550);
				uVar4 = iVar12 / 100 + (iVar12 >> 0x1f);
				uVar28 = (ulonglong) * (uint *)(puVar15 + 0x555c) + (ulonglong) * (uint *)(puVar15 + 0x184) + uVar28 + ((longlong)(int)((ulonglong)((longlong)iVar12 * 0x51eb851f) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar4) + (ulonglong)(uVar4 >> 0x1f);
			}
			if ((param_7 & 0xff) == 0) {
				uVar28 = (ulonglong)(uint)((int)uVar28 << 6);
			}
		}
		uVar24 = (undefined4)param_8;
		uVar23 = (undefined4)uVar22;
		uVar21 = (undefined4)param_6;
		if (puVar7[0x10] != '\0') {
			uVar28 = uVar28 & 0xffffffff00000000 | (ulonglong)(uint)((int)uVar28 >> 1);
		}
		if (iVar13 < 1) {
			if (iVar26 < iVar25) {
				uVar14 = (ulonglong) * (uint *)(puVar16 + 0x38 + iVar27);
				uVar5 = *(uint *)(puVar16 + 0x3c + iVar27);
				uVar19 = (ulonglong)uVar5;
				uVar28 = GetDirection((ulonglong) * (uint *)(puVar16 + 0x38 + iVar8),
				    *(int *)(puVar16 + 0x3c + iVar8), uVar14, uVar5);
				StartPlrBlock(param_2, uVar28, uVar14, uVar19, param_5, param_6, uVar22, param_8, in_stack_ffffff98);
				uVar11 = 1;
			} else {
				if (param_1 == *(int *)puVar9) {
					NetSendCmdDamage(1, (ulonglong)(uVar5 & 0xff), uVar28, lVar18, param_5, uVar21, uVar23, uVar24,
					    in_stack_ffffff98);
				}
				StartPlrHit(param_2, (char)uVar28, 0, lVar18, param_5, param_6, uVar22, param_8, in_stack_ffffff98);
				uVar11 = 1;
			}
		} else {
			iVar13 = (int)uVar28 * iVar13;
			uVar4 = iVar13 / 100 + (iVar13 >> 0x1f);
			if (param_1 == *(int *)puVar9) {
				NetSendCmdDamage(1, (ulonglong)(uVar5 & 0xff),
				    uVar28 - (((longlong)(int)((ulonglong)((longlong)iVar13 * 0x51eb851f) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar4) + (ulonglong)(uVar4 >> 0x1f)), lVar18, param_5, uVar21, uVar23, uVar24,
				    in_stack_ffffff98);
			}
			puVar16 = puVar16 + iVar27;
			cVar2 = puVar16[0x15c];
			if (cVar2 == '\0') {
				PlaySfxLoc(0x314, (ulonglong) * (uint *)(puVar16 + 0x38), (ulonglong) * (uint *)(puVar16 + 0x3c), lVar18, param_5, uVar21, uVar23, uVar24, in_stack_ffffff98);
			} else {
				if (cVar2 == '\x01') {
					PlaySfxLoc(0x2a7, (ulonglong) * (uint *)(puVar16 + 0x38),
					    (ulonglong) * (uint *)(puVar16 + 0x3c), lVar18, param_5, uVar21, uVar23, uVar24,
					    in_stack_ffffff98);
				} else {
					if (cVar2 == '\x02') {
						PlaySfxLoc(0x240, (ulonglong) * (uint *)(puVar16 + 0x38),
						    (ulonglong) * (uint *)(puVar16 + 0x3c), lVar18, param_5, uVar21, uVar23, uVar24,
						    in_stack_ffffff98);
					}
				}
			}
			uVar11 = 1;
		}
	} else {
		uVar11 = 0;
	}
	return uVar11;
}

void CheckMissileCol(int param_1, ulonglong param_2, ulonglong param_3, ulonglong param_4,
    ulonglong param_5, uint param_6, ulonglong param_7, undefined param_8,
    undefined4 param_9)

{
	bool bVar1;
	byte bVar2;
	char cVar3;
	short sVar4;
	uint uVar5;
	int iVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined **ppuVar9;
	ulonglong uVar10;
	undefined8 uVar11;
	int iVar12;
	undefined *puVar13;
	uint uVar15;
	ulonglong uVar14;
	uint uVar16;
	uint uVar17;
	uint uVar19;
	longlong lVar18;
	uint uVar20;
	undefined *puVar21;
	undefined *puVar22;
	undefined4 in_stack_ffffff98;

	puVar8 = PTR_DAT_100f196c;
	puVar7 = PTR_DAT_100f1950;
	puVar13 = PTR_DAT_100f1948;
	uVar15 = (uint)param_4;
	uVar17 = (uint)param_7;
	ppuVar9 = &toc;
	param_1 = param_1 * 0xb4;
	puVar22 = PTR_DAT_100f196c + param_1;
	bVar2 = puVar22[0x38];
	uVar19 = (uint)bVar2;
	uVar20 = (uint)bVar2;
	iVar6 = (int)param_5;
	if (bVar2 != 4) {
		puVar21 = PTR_DAT_100f196c + param_1;
		uVar5 = *(uint *)(puVar21 + 0x78);
		if (uVar5 != 0xffffffff) {
			puVar22 = PTR_DAT_100f196c + param_1;
			if (*(int *)(puVar22 + 0x7c) == 0) {
				uVar14 = (ulonglong) * (uint *)PTR_DAT_100f1954;
				sVar4 = *(short *)(*(uint *)PTR_DAT_100f1954 + iVar6 * 0xe0 + param_6 * 2);
				lVar18 = (longlong)sVar4;
				if (sVar4 < 1) {
					uVar16 = param_6;
					if ((sVar4 < 0) && (uVar16 = param_6, *(int *)(PTR_DAT_100f187c + (int)(lVar18 + 1) * -0xe8 + 4) == 0xf)) {
						param_5 = (ulonglong) * (uint *)(puVar22 + 0x88);
						uVar16 = *(uint *)(PTR_DAT_100f196c + param_1);
						uVar14 = param_3;
						uVar17 = uVar15;
						ppuVar9 = &toc;
						uVar10 = MonsterMHit((ulonglong)uVar5, -(lVar18 + 1), param_2, param_3, param_5, uVar16,
						    uVar15, (int)sVar4, in_stack_ffffff98);
						if ((int)uVar10 != 0) {
							if ((param_7 & 0xff) == 0) {
								*(undefined4 *)(puVar22 + 0x74) = 0;
							}
							*(undefined4 *)(puVar8 + param_1 + 0x84) = 1;
						}
					}
				} else {
					param_5 = (ulonglong) * (uint *)(puVar22 + 0x88);
					uVar16 = *(uint *)(PTR_DAT_100f196c + param_1);
					uVar14 = param_3;
					uVar17 = uVar15;
					ppuVar9 = &toc;
					uVar10 = MonsterMHit((ulonglong)uVar5, lVar18 - 1, param_2, param_3, param_5, uVar16, uVar15,
					    (int)sVar4, in_stack_ffffff98);
					if ((int)uVar10 != 0) {
						if ((param_7 & 0xff) == 0) {
							*(undefined4 *)(puVar22 + 0x74) = 0;
						}
						*(undefined4 *)(puVar8 + param_1 + 0x84) = 1;
					}
				}
				uVar20 = (uint)lVar18;
				cVar3 = *(char *)(*(int *)puVar7 + iVar6 * 0x70 + param_6);
				if ('\0' < cVar3) {
					iVar12 = *(int *)(puVar21 + 0x78);
					uVar10 = (longlong)cVar3 - 1;
					if ((int)uVar10 != iVar12) {
						uVar16 = *(uint *)(puVar8 + param_1);
						param_5 = (ulonglong) * (uint *)(puVar8 + param_1 + 0x88);
						uVar17 = uVar15;
						uVar11 = Plr2PlrMHit(iVar12, uVar10, param_2, param_3, param_5, (ulonglong)uVar16, param_4,
						    lVar18, in_stack_ffffff98);
						uVar14 = param_3;
						if ((int)uVar11 != 0) {
							if ((param_7 & 0xff) == 0) {
								*(undefined4 *)(puVar8 + param_1 + 0x74) = 0;
							}
							*(undefined4 *)(puVar8 + param_1 + 0x84) = 1;
							uVar14 = param_3;
						}
					}
				}
			} else {
				uVar14 = param_4;
				uVar16 = param_6;
				if ((*(uint *)(PTR_DAT_100f187c + uVar5 * 0xe8 + 0xa0) & 0x10) != 0) {
					sVar4 = *(short *)(*(int *)PTR_DAT_100f1954 + iVar6 * 0xe0 + param_6 * 2);
					uVar17 = SEXT24(sVar4);
					uVar14 = param_4;
					uVar16 = param_6;
					if ((0 < sVar4) && (uVar14 = param_4, uVar16 = param_6, (*(uint *)(PTR_DAT_100f187c + (int)sVar4 * 0xe8 + -0x48) & 0x20) != 0)) {
						uVar14 = (ulonglong) * (uint *)(puVar22 + 0x88);
						param_5 = (ulonglong) * (uint *)(PTR_DAT_100f196c + param_1);
						uVar16 = uVar15;
						uVar17 = (int)sVar4;
						uVar20 = uVar19;
						ppuVar9 = &toc;
						uVar10 = MonsterTrapHit((longlong)sVar4 - 1, param_2, param_3, *(uint *)(puVar22 + 0x88),
						    param_5, uVar15, (longlong)sVar4, (uint)bVar2, in_stack_ffffff98);
						if ((int)uVar10 != 0) {
							if ((param_7 & 0xff) == 0) {
								*(undefined4 *)(puVar22 + 0x74) = 0;
							}
							*(undefined4 *)(puVar8 + param_1 + 0x84) = 1;
						}
					}
				}
				cVar3 = *(char *)(*(int *)puVar7 + iVar6 * 0x70 + param_6);
				if ('\0' < cVar3) {
					uVar16 = *(uint *)(puVar8 + param_1);
					uVar20 = 0;
					uVar17 = uVar15;
					uVar11 = PlayerMHit((longlong)cVar3 - 1, *(int *)(puVar21 + 0x78),
					    (ulonglong) * (uint *)(puVar8 + param_1 + 0x88), param_2, param_3,
					    (ulonglong)uVar16, param_4, 0, in_stack_ffffff98);
					uVar14 = param_2;
					param_5 = param_3;
					if ((int)uVar11 != 0) {
						if ((param_7 & 0xff) == 0) {
							*(undefined4 *)(puVar8 + param_1 + 0x74) = 0;
						}
						*(undefined4 *)(puVar8 + param_1 + 0x84) = 1;
						uVar14 = param_2;
						param_5 = param_3;
					}
				}
			}
			goto LAB_1005edd0;
		}
	}
	sVar4 = *(short *)(*(int *)PTR_DAT_100f1954 + iVar6 * 0xe0 + param_6 * 2);
	uVar14 = param_4;
	uVar16 = param_6;
	if (0 < sVar4) {
		if (bVar2 == 4) {
			puVar21 = PTR_DAT_100f196c + param_1;
			uVar16 = *(uint *)(PTR_DAT_100f196c + param_1);
			param_5 = (ulonglong) * (uint *)(puVar21 + 0x88);
			uVar14 = param_3;
			uVar17 = uVar15;
			uVar20 = uVar19;
			ppuVar9 = &toc;
			uVar10 = MonsterMHit((ulonglong) * (uint *)(puVar21 + 0x78), (longlong)sVar4 - 1, param_2, param_3, param_5, uVar16, uVar15, 4, in_stack_ffffff98);
			if ((int)uVar10 != 0) {
				if ((param_7 & 0xff) == 0) {
					*(undefined4 *)(puVar21 + 0x74) = 0;
				}
				*(undefined4 *)(puVar8 + param_1 + 0x84) = 1;
			}
		} else {
			puVar21 = PTR_DAT_100f196c + param_1;
			param_5 = (ulonglong) * (uint *)(PTR_DAT_100f196c + param_1);
			uVar5 = *(uint *)(puVar21 + 0x88);
			uVar14 = (ulonglong)uVar5;
			uVar16 = uVar15;
			uVar20 = uVar19;
			ppuVar9 = &toc;
			uVar10 = MonsterTrapHit((longlong)sVar4 - 1, param_2, param_3, uVar5, param_5, uVar15, param_7,
			    (uint)bVar2, in_stack_ffffff98);
			if ((int)uVar10 != 0) {
				if ((param_7 & 0xff) == 0) {
					*(undefined4 *)(puVar21 + 0x74) = 0;
				}
				*(undefined4 *)(puVar8 + param_1 + 0x84) = 1;
			}
		}
	}
	cVar3 = *(char *)(*(int *)puVar7 + iVar6 * 0x70 + param_6);
	if ('\0' < cVar3) {
		bVar1 = puVar22[0x38] == '\x04';
		uVar20 = (uint)bVar1;
		uVar16 = *(uint *)(puVar8 + param_1);
		uVar17 = uVar15;
		uVar11 = PlayerMHit((longlong)cVar3 - 1, -1, (ulonglong) * (uint *)(puVar8 + param_1 + 0x88),
		    param_2, param_3, (ulonglong)uVar16, param_4, (ulonglong)bVar1,
		    in_stack_ffffff98);
		uVar14 = param_2;
		param_5 = param_3;
		if ((int)uVar11 != 0) {
			if ((param_7 & 0xff) == 0) {
				*(undefined4 *)(puVar8 + param_1 + 0x74) = 0;
			}
			*(undefined4 *)(puVar8 + param_1 + 0x84) = 1;
			uVar14 = param_2;
			param_5 = param_3;
		}
	}
LAB_1005edd0:
	cVar3 = *(char *)(*(int *)ppuVar9[-0x1da1] + iVar6 * 0x70 + param_6);
	if (cVar3 != '\0') {
		if (cVar3 < '\x01') {
			iVar12 = -((int)cVar3 + 1);
		} else {
			iVar12 = (int)cVar3 + -1;
		}
		if (*(int *)(puVar13 + iVar12 * 0x78 + 0x3c) == 0) {
			if ((puVar13 + iVar12 * 0x78)[0x34] == '\x01') {
				BreakObject(0xffffffffffffffff);
			}
			if ((param_7 & 0xff) == 0) {
				*(undefined4 *)(puVar8 + param_1 + 0x74) = 0;
			}
			*(undefined4 *)(puVar8 + param_1 + 0x84) = 0;
		}
	}
	if (ppuVar9[-0x1c8d][(int)*(short *)(*(int *)ppuVar9[-0x1d5f] + iVar6 * 0xe0 + param_6 * 2)] != '\0') {
		if ((param_7 & 0xff) == 0) {
			*(undefined4 *)(puVar8 + param_1 + 0x74) = 0;
		}
		*(undefined4 *)(puVar8 + param_1 + 0x84) = 0;
	}
	puVar13 = puVar8 + param_1;
	if ((*(int *)(puVar13 + 0x74) == 0) && (*(uint *)(ppuVar9[-0x1c3a] + *(int *)(puVar8 + param_1) * 0x1c + 0x18) != 0xffffffff)) {
		PlaySfxLoc((ulonglong) * (uint *)(ppuVar9[-0x1c3a] + *(int *)(puVar8 + param_1) * 0x1c + 0x18),
		    (ulonglong) * (uint *)(puVar13 + 4), (ulonglong) * (uint *)(puVar13 + 8), uVar14, param_5,
		    uVar16, uVar17, uVar20, in_stack_ffffff98);
	}
	return;
}

void SetMissAnim(int param_1, undefined8 param_2)

{
	int iVar1;
	undefined4 uVar2;
	undefined *puVar3;
	undefined *puVar4;

	puVar3 = PTR_DAT_100f19b4;
	puVar4 = PTR_DAT_100f196c + param_1 * 0xb4;
	iVar1 = *(int *)(puVar4 + 0x2c);
	puVar4[0x38] = (char)param_2;
	puVar3 = puVar3 + (int)param_2 * 300;
	*(undefined4 *)(puVar4 + 0x3c) = *(undefined4 *)(puVar3 + 8);
	uVar2 = *(undefined4 *)(puVar3 + iVar1 * 8 + 0x10);
	*(undefined4 *)(puVar4 + 0x40) = *(undefined4 *)(puVar3 + iVar1 * 8 + 0xc);
	*(undefined4 *)(puVar4 + 0x44) = uVar2;
	*(uint *)(puVar4 + 0x48) = (uint)(byte)(puVar3 + iVar1)[0x8c];
	*(uint *)(puVar4 + 0x4c) = (uint)(byte)(puVar3 + iVar1)[0x9c];
	*(undefined4 *)(puVar4 + 0x50) = *(undefined4 *)(puVar3 + iVar1 * 4 + 0xac);
	*(undefined4 *)(puVar4 + 0x54) = *(undefined4 *)(puVar3 + iVar1 * 4 + 0xec);
	*(undefined4 *)(puVar4 + 0x58) = 0;
	*(undefined4 *)(puVar4 + 0x60) = 1;
	return;
}

void SetMissDir(int param_1, undefined4 param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f196c + param_1 * 0xb4;
	*(undefined4 *)(puVar1 + 0x2c) = param_2;
	SetMissAnim(param_1, (ulonglong)(byte)puVar1[0x38]);
	return;
}

void LoadMissileGFX(uint param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	undefined *puVar5;
	longlong lVar1;
	ulonglong uVar2;
	ulonglong uVar3;
	longlong lVar4;
	longlong lVar6;
	ulonglong uVar7;
	undefined4 uVar8;
	longlong lVar9;
	longlong lVar10;
	undefined8 unaff_r27;
	longlong lVar11;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined *puVar12;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_fffffeb8;
	undefined in_stack_fffffebf;
	undefined4 in_stack_fffffecc;
	undefined4 in_stack_fffffed0;
	undefined4 in_stack_fffffed4;
	undefined4 in_stack_fffffed8;
	undefined4 in_stack_fffffedc;
	undefined4 in_stack_fffffee0;
	undefined4 in_stack_fffffee4;
	undefined auStack280[260];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	uVar8 = _DAT_100f30c4;
	lVar10 = (longlong)param_8;
	lVar9 = (longlong)param_7;
	lVar4 = (longlong)param_6;
	uVar2 = ZEXT48(register0x0000000c);
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	puVar5 = PTR_DAT_100f19b4 + (param_1 & 0xff) * 300;
	if ((*(uint *)(puVar5 + 8) & 4) == 0) {
		if (puVar5[1] == '\x01') {
			uVar7 = (ulonglong) * (uint *)(puVar5 + 4);
			sprintf((int)auStack280, PTR_s_Missiles__s_CL2_100f30c8, *(uint *)(puVar5 + 4), (int)param_4, (int)param_5, param_6, param_7, param_8, in_stack_fffffeb8, in_stack_fffffebf,
			    in_stack_fffffecc, in_stack_fffffed0, in_stack_fffffed4, in_stack_fffffed8,
			    in_stack_fffffedc, in_stack_fffffee0, in_stack_fffffee4);
			if (*(int *)(puVar5 + 0xc) == 0) {
				lVar4 = LoadFileInMem(uVar2 - 0x118, (undefined4 *)0x0, uVar7, param_4, param_5, param_6, param_7,
				    param_8, in_stack_fffffeb8);
				*(int *)(puVar5 + 0xc) = (int)lVar4;
				*(undefined4 *)(puVar5 + 0x10) = 0;
			}
		} else {
			lVar6 = 0;
			puVar12 = puVar5;
			while ((int)lVar6 < (int)(uint)(byte)puVar5[1]) {
				uVar7 = (ulonglong) * (uint *)(puVar5 + 4);
				lVar1 = lVar6 + 1;
				sprintf((int)auStack280, uVar8, *(uint *)(puVar5 + 4), (int)lVar1, (int)param_5, (int)lVar4,
				    (int)lVar9, (int)lVar10, in_stack_fffffeb8, in_stack_fffffebf, in_stack_fffffecc,
				    in_stack_fffffed0, in_stack_fffffed4, in_stack_fffffed8, in_stack_fffffedc,
				    in_stack_fffffee0, in_stack_fffffee4);
				if (*(int *)(puVar12 + 0xc) == 0) {
					lVar1 = LoadFileInMem(uVar2 - 0x118, (undefined4 *)0x0, uVar7, lVar1, param_5, (int)lVar4,
					    (int)lVar9, (int)lVar10, in_stack_fffffeb8);
					*(int *)(puVar12 + 0xc) = (int)lVar1;
					*(undefined4 *)(puVar12 + 0x10) = 0;
				}
				puVar12 = puVar12 + 8;
				lVar6 = lVar6 + 1;
			}
		}
	} else {
		uVar7 = (ulonglong) * (uint *)(puVar5 + 4);
		sprintf((int)auStack280, PTR_s_Missiles__s_CL2_100f30c8, *(uint *)(puVar5 + 4), (int)param_4,
		    (int)param_5, param_6, param_7, param_8, in_stack_fffffeb8, in_stack_fffffebf,
		    in_stack_fffffecc, in_stack_fffffed0, in_stack_fffffed4, in_stack_fffffed8,
		    in_stack_fffffedc, in_stack_fffffee0, in_stack_fffffee4);
		lVar6 = 0;
		lVar1 = LoadFileInMem(uVar2 - 0x118, (undefined4 *)0x0, uVar7, param_4, param_5, (int)lVar4, (int)lVar9, (int)lVar10, in_stack_fffffeb8);
		uVar8 = (undefined4)param_5;
		uVar2 = FUN_100b8f7c(lVar1, lVar6, uVar7, param_4, param_5, (int)lVar4, (int)lVar9, (int)lVar10,
		    in_stack_fffffeb8);
		lVar11 = 0;
		puVar12 = puVar5;
		while (true) {
			if ((int)(uint)(byte)puVar5[1] <= (int)lVar11)
				break;
			*(int *)(puVar12 + 0xc) = (int)lVar1;
			lVar6 = lVar11;
			uVar3 = FUN_1003cdd0((int)uVar2, (int)lVar11);
			*(int *)(puVar12 + 0x10) = (int)uVar3;
			puVar12 = puVar12 + 8;
			lVar11 = lVar11 + 1;
		}
		FUN_100b9100((int)lVar1, (char)lVar6, (char)uVar7, (char)param_4, (char)uVar8, (char)lVar4,
		    (char)lVar9, (char)lVar10, in_stack_fffffeb8);
	}
	return;
}

void InitMissileGFX(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	longlong lVar1;
	longlong lVar2;
	longlong lVar3;
	uint uVar4;
	undefined *puVar5;
	undefined4 in_stack_ffffffc8;

	lVar3 = (longlong)param_8;
	lVar2 = (longlong)param_7;
	lVar1 = (longlong)param_6;
	uVar4 = 0;
	puVar5 = PTR_DAT_100f19b4;
	while (true) {
		if (puVar5[1] == '\0')
			break;
		if ((*(uint *)(puVar5 + 8) & 1) == 0) {
			LoadMissileGFX(uVar4 & 0xff, param_2, param_3, param_4, param_5, (int)lVar1, (int)lVar2, (int)lVar3,
			    in_stack_ffffffc8);
		}
		puVar5 = puVar5 + 300;
		uVar4 = uVar4 + 1;
	}
	return;
}

void FreeMissileGFX(int param_1, undefined param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	int iVar2;
	ulonglong uVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	int iVar10;
	longlong lVar11;
	undefined4 in_stack_ffffffb8;

	lVar9 = (longlong)param_8;
	lVar8 = (longlong)param_7;
	lVar7 = (longlong)param_6;
	lVar6 = (longlong)param_5;
	lVar5 = (longlong)param_4;
	lVar4 = (longlong)param_3;
	uVar3 = ZEXT48(PTR_DAT_100f19b4);
	lVar11 = uVar3 + (longlong)param_1 * 300;
	iVar1 = (int)lVar11;
	if ((*(uint *)(iVar1 + 8) & 4) == 0) {
		iVar10 = 0;
		while (iVar10 < (int)(uint) * (byte *)(iVar1 + 1)) {
			iVar2 = (int)lVar11;
			if (*(int *)(iVar2 + 0xc) != 0) {
				mem_free_dbg((int **)(iVar2 + 0xc), (char)uVar3, (char)lVar4, (char)lVar5, (char)lVar6,
				    (char)lVar7, (char)lVar8, (char)lVar9, in_stack_ffffffb8);
				*(undefined4 *)(iVar2 + 0xc) = 0;
				*(undefined4 *)(iVar2 + 0x10) = 0;
			}
			lVar11 = lVar11 + 8;
			iVar10 = iVar10 + 1;
		}
	} else {
		if (*(int *)(iVar1 + 0xc) != 0) {
			mem_free_dbg((int **)(PTR_DAT_100f19b4 + (int)((longlong)param_1 * 300) + 0xc),
			    (char)PTR_DAT_100f19b4, param_3, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffb8);
			*(undefined4 *)(iVar1 + 0xc) = 0;
			*(undefined4 *)(iVar1 + 0x10) = 0;
		}
	}
	return;
}

undefined FreeMissiles(undefined param_1, char param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	longlong lVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	int iVar8;
	undefined *puVar9;
	undefined4 in_stack_ffffffc8;

	lVar7 = (longlong)param_8;
	lVar6 = (longlong)param_7;
	lVar5 = (longlong)param_6;
	lVar4 = (longlong)param_5;
	lVar3 = (longlong)param_4;
	lVar2 = (longlong)param_3;
	lVar1 = (longlong)param_2;
	iVar8 = 0;
	puVar9 = PTR_DAT_100f19b4;
	while (true) {
		if (puVar9[1] == '\0')
			break;
		if ((*(uint *)(puVar9 + 8) & 1) == 0) {
			param_1 = FreeMissileGFX(iVar8, (char)lVar1, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5,
			    (char)lVar6, (char)lVar7, in_stack_ffffffc8);
		}
		puVar9 = puVar9 + 300;
		iVar8 = iVar8 + 1;
	}
	return param_1;
}

undefined FreeMissiles2(undefined param_1, char param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	longlong lVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	int iVar8;
	undefined *puVar9;
	undefined4 in_stack_ffffffc8;

	lVar7 = (longlong)param_8;
	lVar6 = (longlong)param_7;
	lVar5 = (longlong)param_6;
	lVar4 = (longlong)param_5;
	lVar3 = (longlong)param_4;
	lVar2 = (longlong)param_3;
	lVar1 = (longlong)param_2;
	iVar8 = 0;
	puVar9 = PTR_DAT_100f19b4;
	while (true) {
		if (puVar9[1] == '\0')
			break;
		if ((*(uint *)(puVar9 + 8) & 1) != 0) {
			param_1 = FreeMissileGFX(iVar8, (char)lVar1, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5,
			    (char)lVar6, (char)lVar7, in_stack_ffffffc8);
		}
		puVar9 = puVar9 + 300;
		iVar8 = iVar8 + 1;
	}
	return param_1;
}

void InitMissiles(undefined8 param_1, undefined8 param_2, ulonglong param_3, ulonglong param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	int iVar9;
	ulonglong uVar10;
	undefined **ppuVar11;
	undefined *puVar12;
	undefined4 *puVar13;
	undefined4 *puVar14;
	byte *pbVar15;
	int iVar16;
	int *piVar17;
	longlong lVar18;
	int iVar19;
	longlong lVar20;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined4 in_stack_ffffff9c;

	puVar8 = PTR_DAT_100f1ee0;
	puVar7 = PTR_DAT_100f1e80;
	puVar6 = PTR_DAT_100f1970;
	puVar5 = PTR_DAT_100f196c;
	puVar4 = PTR_DAT_100f1968;
	puVar3 = PTR_DAT_100f1834;
	puVar2 = PTR_DAT_100f1824;
	uVar10 = ZEXT48(&toc);
	ppuVar11 = &toc;
	puVar12 = PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec;
	puVar12[0x11c] = puVar12[0x11c] & 0xfe;
	if (*(int *)(puVar12 + 0x1cc) == 1) {
		iVar19 = 0;
		piVar17 = (int *)puVar6;
		while (ppuVar11 = (undefined **)uVar10, iVar19 < *(int *)puVar4) {
			if ((*(int *)(puVar5 + *piVar17 * 0xb4) == 0x27) && (uVar1 = *(uint *)(puVar5 + *piVar17 * 0xb4 + 0x78), *(uint *)puVar2 == uVar1)) {
				CalcPlrItemVals((ulonglong)uVar1, 1, param_3, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9c);
			}
			piVar17 = piVar17 + 1;
			iVar19 = iVar19 + 1;
		}
	}
	lVar18 = 0;
	*(undefined4 *)puVar4 = 0;
	lVar20 = 0xf;
	piVar17 = (int *)puVar7;
	puVar13 = (undefined4 *)puVar6;
	do {
		iVar19 = (int)lVar18;
		*piVar17 = iVar19;
		*puVar13 = 0;
		piVar17[1] = iVar19 + 1;
		puVar13[1] = 0;
		lVar18 = lVar18 + 8;
		piVar17[2] = iVar19 + 2;
		puVar13[2] = 0;
		piVar17[3] = iVar19 + 3;
		puVar13[3] = 0;
		piVar17[4] = iVar19 + 4;
		puVar13[4] = 0;
		piVar17[5] = iVar19 + 5;
		puVar13[5] = 0;
		piVar17[6] = iVar19 + 6;
		puVar13[6] = 0;
		piVar17[7] = iVar19 + 7;
		piVar17 = piVar17 + 8;
		puVar13[7] = 0;
		puVar13 = puVar13 + 8;
		lVar20 = lVar20 + -1;
	} while (lVar20 != 0);
	iVar19 = (int)lVar18 * 4;
	puVar13 = (undefined4 *)(puVar7 + iVar19);
	puVar14 = (undefined4 *)(puVar6 + iVar19);
	lVar20 = 0x7d - lVar18;
	if ((int)lVar18 < 0x7d) {
		do {
			*puVar13 = (int)lVar18;
			puVar13 = puVar13 + 1;
			lVar18 = lVar18 + 1;
			*puVar14 = 0;
			puVar14 = puVar14 + 1;
			lVar20 = lVar20 + -1;
		} while (lVar20 != 0);
	}
	iVar19 = 0;
	*(undefined4 *)ppuVar11[-0x1c3b] = 0;
	lVar18 = 0xf;
	puVar13 = (undefined4 *)puVar8;
	do {
		iVar19 = iVar19 + 8;
		*puVar13 = 0xffffffff;
		puVar13[1] = 0;
		puVar13[2] = 0;
		puVar13[3] = 0xffffffff;
		puVar13[4] = 0;
		puVar13[5] = 0;
		puVar13[6] = 0xffffffff;
		puVar13[7] = 0;
		puVar13[8] = 0;
		puVar13[9] = 0xffffffff;
		puVar13[10] = 0;
		puVar13[0xb] = 0;
		puVar13[0xc] = 0xffffffff;
		puVar13[0xd] = 0;
		puVar13[0xe] = 0;
		puVar13[0xf] = 0xffffffff;
		puVar13[0x10] = 0;
		puVar13[0x11] = 0;
		puVar13[0x12] = 0xffffffff;
		puVar13[0x13] = 0;
		puVar13[0x14] = 0;
		puVar13[0x15] = 0xffffffff;
		puVar13[0x16] = 0;
		puVar13[0x17] = 0;
		puVar13 = puVar13 + 0x18;
		lVar18 = lVar18 + -1;
	} while (lVar18 != 0);
	puVar13 = (undefined4 *)(puVar8 + iVar19 * 0xc);
	iVar9 = 0x7d - iVar19;
	if (iVar19 < 0x7d) {
		do {
			*puVar13 = 0xffffffff;
			puVar13[1] = 0;
			puVar13[2] = 0;
			puVar13 = puVar13 + 3;
			iVar9 = iVar9 + -1;
		} while (iVar9 != 0);
	}
	iVar19 = 0;
	do {
		lVar18 = 0xe;
		iVar9 = 0;
		do {
			pbVar15 = (byte *)(iVar19 + *(int *)puVar3 + iVar9);
			*pbVar15 = *pbVar15 & 0xfe;
			pbVar15 = (byte *)(iVar19 + *(int *)puVar3 + iVar9 + 0x70);
			*pbVar15 = *pbVar15 & 0xfe;
			pbVar15 = (byte *)(iVar19 + *(int *)puVar3 + iVar9 + 0xe0);
			*pbVar15 = *pbVar15 & 0xfe;
			pbVar15 = (byte *)(iVar19 + *(int *)puVar3 + iVar9 + 0x150);
			*pbVar15 = *pbVar15 & 0xfe;
			pbVar15 = (byte *)(iVar19 + *(int *)puVar3 + iVar9 + 0x1c0);
			*pbVar15 = *pbVar15 & 0xfe;
			pbVar15 = (byte *)(iVar19 + *(int *)puVar3 + iVar9 + 0x230);
			*pbVar15 = *pbVar15 & 0xfe;
			pbVar15 = (byte *)(iVar19 + *(int *)puVar3 + iVar9 + 0x2a0);
			*pbVar15 = *pbVar15 & 0xfe;
			iVar16 = *(int *)puVar3 + iVar9;
			iVar9 = iVar9 + 0x380;
			pbVar15 = (byte *)(iVar19 + iVar16 + 0x310);
			*pbVar15 = *pbVar15 & 0xfe;
			lVar18 = lVar18 + -1;
		} while (lVar18 != 0);
		iVar19 = iVar19 + 1;
	} while (iVar19 < 0x70);
	return;
}

void GetVileMissPos(int param_1, longlong param_2, int param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined8 uVar2;
	undefined *puVar3;
	int iVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	undefined4 in_stack_ffffff98;

	puVar3 = PTR_DAT_100f196c;
	puVar1 = PTR_DAT_100f1824;
	lVar9 = (longlong)param_8;
	lVar8 = (longlong)param_7;
	lVar7 = (longlong)param_6;
	lVar6 = (longlong)param_5;
	lVar5 = (longlong)param_4;
	lVar12 = 1;
	do {
		lVar11 = -lVar12;
		while (true) {
			if ((int)lVar12 < (int)lVar11)
				break;
			iVar4 = param_3 + (int)lVar11;
			lVar10 = -lVar12;
			while ((int)lVar10 <= (int)lVar12) {
				uVar2 = PosOkPlayer(*(int *)puVar1, param_2 + lVar10, iVar4, (char)lVar5, (char)lVar6,
				    (char)lVar7, (char)lVar8, (char)lVar9, in_stack_ffffff98);
				if ((int)uVar2 != 0) {
					puVar3 = puVar3 + param_1 * 0xb4;
					*(int *)(puVar3 + 4) = (int)(param_2 + lVar10);
					*(int *)(puVar3 + 8) = iVar4;
					return;
				}
				lVar10 = lVar10 + 1;
			}
			lVar11 = lVar11 + 1;
		}
		lVar12 = lVar12 + 1;
	} while ((int)lVar12 < 0x32);
	puVar3 = puVar3 + param_1 * 0xb4;
	*(int *)(puVar3 + 4) = (int)param_2;
	*(int *)(puVar3 + 8) = param_3;
	return;
}

undefined8
CheckIfTrig(longlong param_1, longlong param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined *puVar1;
	longlong lVar2;
	int iVar3;
	uint *puVar4;

	puVar1 = PTR_DAT_100f1ed8;
	iVar3 = 0;
	puVar4 = (uint *)PTR_DAT_100f1edc;
	while (true) {
		if (*(int *)puVar1 <= iVar3) {
			return 0;
		}
		if ((((uint)param_1 == *puVar4) && ((uint)param_2 == puVar4[1])) || ((lVar2 = abs((ulonglong)*puVar4 - param_1), (int)lVar2 < 2 && (lVar2 = abs((ulonglong)puVar4[1] - param_2), (int)lVar2 < 2))))
			break;
		puVar4 = puVar4 + 4;
		iVar3 = iVar3 + 1;
	}
	return 1;
}

ulonglong AddMissile(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, int param_6, undefined8 param_7, longlong param_8,
    undefined4 param_9, undefined param_10, undefined4 param_11, undefined4 param_12)

{
	uint uVar1;
	uint uVar2;
	int iVar3;
	int iVar4;
	uint *puVar5;
	uint *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	ulonglong uVar10;
	undefined *puVar11;
	ulonglong uVar12;
	undefined uVar13;
	byte bVar14;
	longlong lVar15;
	undefined uVar16;
	undefined4 uVar17;
	int iVar18;
	longlong lVar19;
	ulonglong uVar20;
	char cVar21;
	undefined4 in_stack_ffffff88;

	puVar9 = PTR_DAT_100f1ee8;
	puVar11 = PTR_DAT_100f1970;
	puVar7 = PTR_DAT_100f196c;
	puVar8 = PTR_DAT_100f1968;
	iVar18 = (int)param_8;
	uVar17 = (undefined4)param_7;
	bVar14 = (byte)param_4;
	uVar12 = ZEXT48(PTR_DAT_100f1970);
	uVar20 = ZEXT48(PTR_DAT_100f196c);
	uVar1 = *(uint *)PTR_DAT_100f1968;
	uVar10 = (ulonglong)uVar1;
	if ((int)uVar1 < 0x7d) {
		uVar16 = (char)param_5;
		if (param_6 == 0xd) {
			bVar14 = (byte)(param_8 * 0x55ec);
			lVar15 = ZEXT48(PTR_DAT_100f1828) + param_8 * 0x55ec;
			iVar3 = (int)lVar15;
			uVar16 = (char)lVar15;
			if (*(char *)(iVar3 + 0x5594) == '\x01') {
				bVar14 = *PTR_DAT_100f17ec;
				if ((uint)bVar14 != *(uint *)(iVar3 + 0x34)) {
					return 0xffffffffffffffff;
				}
				uVar16 = (char)PTR_DAT_100f1970;
				if (0 < (int)uVar1) {
					do {
						lVar15 = (ulonglong) * (uint *)uVar12 * 0xb4;
						bVar14 = (byte)lVar15;
						iVar3 = (int)lVar15;
						if ((*(int *)(PTR_DAT_100f196c + iVar3) == 0xd) && (iVar18 == *(int *)(PTR_DAT_100f196c + iVar3 + 0x78))) {
							return 0xffffffffffffffff;
						}
						uVar12 = uVar12 + 4;
						uVar16 = (undefined)uVar12;
						uVar10 = uVar10 - 1;
					} while (uVar10 != 0);
				}
			}
		}
		uVar2 = *(uint *)PTR_DAT_100f1e80;
		uVar10 = (ulonglong)uVar2;
		lVar19 = uVar10 * 0xb4;
		*(undefined4 *)PTR_DAT_100f1e80 = *(undefined4 *)(PTR_DAT_100f1e80 + (0x7c - uVar1) * 4);
		*(uint *)(puVar11 + uVar1 * 4) = uVar2;
		lVar15 = uVar20 + lVar19;
		cVar21 = (char)param_7;
		puVar11 = puVar9 + param_6 * 0x1c;
		*(int *)puVar8 = *(int *)puVar8 + 1;
		iVar3 = (int)lVar19;
		*(int *)(puVar7 + iVar3) = param_6;
		iVar4 = (int)lVar15;
		*(int *)(iVar4 + 0x7c) = (int)cVar21;
		*(int *)(iVar4 + 0x78) = iVar18;
		*(undefined *)(iVar4 + 0x38) = puVar11[0x12];
		*(undefined4 *)(iVar4 + 100) = *(undefined4 *)(puVar11 + 0xc);
		*(undefined4 *)(iVar4 + 0x30) = param_12;
		*(undefined4 *)(iVar4 + 0x2c) = (int)param_5;
		uVar13 = (undefined)lVar15;
		if ((*(byte *)(iVar4 + 0x38) == 0xff) || ((byte)PTR_DAT_100f19b4[(uint) * (byte *)(iVar4 + 0x38) * 300 + 1] < 8)) {
			SetMissDir(uVar2, 0, uVar13, bVar14, uVar16, (char)param_6, cVar21, (char)param_8, in_stack_ffffff88);
		} else {
			SetMissDir(uVar2, (int)param_5, uVar13, bVar14, uVar16, (char)param_6, cVar21, (char)param_8,
			    in_stack_ffffff88);
		}
		puVar5 = (uint *)(puVar7 + iVar3 + 4);
		*puVar5 = (uint)param_1;
		puVar7 = puVar7 + iVar3;
		lVar15 = uVar20 + lVar19 + 8;
		puVar6 = (uint *)lVar15;
		*puVar6 = (uint)param_2;
		*(undefined4 *)(puVar7 + 0xc) = 0;
		*(undefined4 *)(puVar7 + 0x10) = 0;
		*(uint *)(puVar7 + 0x1c) = (uint)param_1;
		*(uint *)(puVar7 + 0x20) = (uint)param_2;
		*(undefined4 *)(puVar7 + 0x24) = 0;
		*(undefined4 *)(puVar7 + 0x28) = 0;
		*(undefined4 *)(puVar7 + 0x34) = 0;
		*(undefined4 *)(puVar7 + 0x5c) = 1;
		*(undefined4 *)(puVar7 + 0x68) = 0;
		*(undefined4 *)(puVar7 + 0x6c) = 0;
		*(undefined4 *)(puVar7 + 0x70) = 0;
		*(undefined4 *)(puVar7 + 0x80) = param_11;
		*(undefined4 *)(puVar7 + 0x84) = 0;
		*(undefined4 *)(puVar7 + 0x88) = 0;
		*(undefined4 *)(puVar7 + 0x8c) = 0xffffffff;
		*(undefined4 *)(puVar7 + 0x90) = 0;
		uVar1 = *(uint *)(puVar9 + param_6 * 0x1c + 0x14);
		if (uVar1 != 0xffffffff) {
			PlaySfxLoc((ulonglong)uVar1, (ulonglong)*puVar5, (ulonglong)*puVar6, 0, lVar15, puVar5, uVar17,
			    iVar18, in_stack_ffffff88);
		}
		FUN_100dbf44(uVar10, param_1, param_2, param_3, param_4, param_5, param_7, param_8);
	} else {
		uVar10 = 0xffffffffffffffff;
	}
	return uVar10;
}

undefined8
Sentfire(int param_1, longlong param_2, longlong param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	uint *puVar1;
	short sVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	int iVar7;
	ulonglong uVar5;
	longlong lVar6;
	undefined uVar8;
	undefined uVar9;
	undefined8 uVar10;
	undefined *puVar11;
	undefined *puVar12;
	int iVar13;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;

	puVar3 = PTR_DAT_100f196c;
	ppuVar4 = &toc;
	iVar13 = param_1 * 0xb4;
	puVar12 = PTR_DAT_100f196c + iVar13;
	uVar10 = 0;
	puVar1 = (uint *)(PTR_DAT_100f196c + iVar13 + 4);
	uVar8 = (char)param_2;
	uVar9 = (char)param_3;
	iVar7 = LineClear((ulonglong)*puVar1, (ulonglong) * (uint *)(puVar12 + 8), param_2, param_3, param_5,
	    param_6, param_7, param_8, in_stack_ffffff98);
	if (iVar7 != 0) {
		sVar2 = *(short *)(*(int *)ppuVar4[-0x1d9f] + (int)param_2 * 0xe0 + (int)param_3 * 2);
		if (((0 < sVar2) && (*(int *)(ppuVar4[-0x1dd5] + (int)sVar2 * 0xe8 + -0x50) >> 6 != 0)) && (3 < (int)sVar2 + -1)) {
			uVar5 = GetDirection((ulonglong)*puVar1, *(uint *)(puVar12 + 8), param_2, (int)param_3);
			param_5 = (undefined)uVar5;
			puVar11 = puVar3 + iVar13;
			*(undefined4 *)(puVar11 + 0x9c) = *(undefined4 *)ppuVar4[-0x1c54];
			lVar6 = GetSpellLevel(*(int *)(puVar11 + 0x78), 1);
			param_6 = 1;
			param_7 = 0;
			param_8 = (undefined) * (uint *)(puVar11 + 0x78);
			uVar8 = (char)param_2;
			uVar9 = (char)param_3;
			AddMissile((ulonglong)*puVar1, (ulonglong) * (uint *)(puVar12 + 8), param_2, param_3, uVar5, 1, 0,
			    (ulonglong) * (uint *)(puVar11 + 0x78), in_stack_ffffff98, in_stack_ffffff9f,
			    *(undefined4 *)(puVar11 + 0x80), (int)lVar6);
			uVar10 = 0xffffffffffffffff;
		}
	}
	if ((int)uVar10 == -1) {
		SetMissDir(param_1, 2, uVar8, uVar9, param_5, param_6, param_7, param_8, in_stack_ffffff98);
		*(undefined4 *)(puVar3 + iVar13 + 0x98) = 3;
	}
	return uVar10;
}

void MI_Manashield(longlong lParm1)

{
	uint uVar1;
	uint uVar2;
	undefined4 *puVar3;
	uint uVar4;
	int *piVar5;
	uint *puVar6;
	uint *puVar7;
	int iVar8;
	int iVar9;
	undefined *puVar10;
	undefined *puVar11;
	int iVar12;
	int iVar13;
	undefined *puVar14;
	undefined *puVar15;
	int iVar16;
	undefined **ppuVar17;
	ulonglong uVar18;
	ulonglong uVar19;
	longlong in_r7;
	ulonglong in_r8;
	undefined4 uVar20;
	undefined8 in_r9;
	undefined4 uVar21;
	undefined4 uVar22;
	undefined8 in_r10;
	undefined4 uVar23;
	ulonglong uVar24;
	longlong lVar25;
	ulonglong uVar26;
	ulonglong uVar27;
	undefined4 in_stack_ffffffa8;

	puVar10 = PTR_DAT_100f196c;
	puVar15 = PTR_DAT_100f1828;
	puVar14 = PTR_DAT_100f1824;
	uVar23 = (undefined4)in_r10;
	uVar22 = (undefined4)((ulonglong)in_r10 >> 0x20);
	ppuVar17 = &toc;
	uVar26 = ZEXT48(PTR_DAT_100f196c);
	uVar27 = ZEXT48(PTR_DAT_100f1828);
	iVar12 = (int)(lParm1 * 0xb4);
	puVar11 = PTR_DAT_100f196c + iVar12;
	uVar1 = *(uint *)(puVar11 + 0x78);
	uVar24 = (ulonglong)uVar1;
	lVar25 = uVar24 * 0x55ec;
	iVar13 = (int)lVar25;
	piVar5 = (int *)(PTR_DAT_100f1828 + iVar13);
	iVar16 = piVar5[0xe];
	*(int *)(puVar11 + 4) = iVar16;
	uVar2 = piVar5[0xf];
	uVar18 = (ulonglong)uVar2;
	*(uint *)(puVar11 + 8) = uVar2;
	*(int *)(puVar11 + 0x24) = piVar5[0x18] << 0x10;
	*(int *)(puVar11 + 0x28) = piVar5[0x19] << 0x10;
	if (*piVar5 == 3) {
		*(int *)(puVar11 + 0x1c) = piVar5[0x10];
		*(int *)(puVar11 + 0x20) = piVar5[0x11];
	} else {
		*(int *)(puVar11 + 0x1c) = iVar16;
		*(uint *)(puVar11 + 0x20) = uVar2;
	}
	GetMissilePos(lParm1);
	if (*piVar5 == 3) {
		if (*(int *)(puVar15 + iVar13 + 0x70) == 2) {
			*(int *)(puVar11 + 4) = *(int *)(puVar11 + 4) + 1;
		} else {
			*(int *)(puVar11 + 8) = *(int *)(puVar11 + 8) + 1;
		}
	}
	if (uVar1 == *(uint *)puVar14) {
		puVar6 = (uint *)(puVar15 + iVar13 + 0x1a8);
		if (((int)*puVar6 < 1) || (puVar15[iVar13 + 0x1d] == '\0')) {
			*(undefined4 *)(puVar10 + iVar12 + 0x74) = 0;
		}
		puVar11 = puVar10 + iVar12;
		uVar2 = *(uint *)(puVar11 + 0x94);
		uVar19 = (ulonglong)uVar2;
		puVar7 = (uint *)(puVar15 + iVar13 + 0x194);
		if ((int)*puVar7 < (int)uVar2) {
			iVar16 = uVar2 - *puVar7;
			if (0 < *(int *)(puVar10 + iVar12 + 0x30)) {
				uVar4 = iVar16 / 3 + (iVar16 >> 0x1f);
				iVar16 = iVar16 - (uVar4 + (uVar4 >> 0x1f));
			}
			if (iVar16 < 0) {
				iVar16 = 0;
			}
			in_r9 = 1;
			puVar3 = (undefined4 *)ppuVar17[-0x1dbc];
			*(undefined4 *)ppuVar17[-0x1dbd] = 1;
			*puVar3 = 1;
			if ((int)*puVar6 < iVar16) {
				in_r7 = uVar26 + lParm1 * 0xb4;
				uVar18 = uVar27 + lVar25;
				*puVar7 = uVar2 - (iVar16 - *puVar6);
				uVar2 = *puVar6;
				in_r8 = (ulonglong)uVar2;
				iVar8 = (int)in_r7;
				uVar19 = (ulonglong) * (uint *)(iVar8 + 0x98);
				iVar9 = (int)uVar18;
				*(int *)(iVar9 + 0x18c) = *(uint *)(iVar8 + 0x98) - (iVar16 - uVar2);
				*puVar6 = 0;
				*(int *)(iVar9 + 0x1a0) = -(*(int *)(iVar9 + 0x1ac) - *(int *)(iVar9 + 0x1a4));
				*(undefined4 *)(iVar8 + 0x74) = 0;
				*(undefined4 *)(iVar8 + 0x34) = 1;
				if ((int)*puVar7 < 0) {
					SetPlayerHitPoints(uVar24, 0, uVar18, uVar19, in_r7, uVar2, 1, uVar23, in_stack_ffffffa8);
				}
				if (((int)*puVar7 >> 6 == 0) && (uVar1 == *(uint *)puVar14)) {
					SyncPlrKill(uVar24, *(uint *)(puVar10 + iVar12 + 0xb0), uVar18, uVar19, in_r7, in_r8, in_r9,
					    CONCAT44(uVar22, uVar23), in_stack_ffffffa8);
				}
			} else {
				*puVar7 = uVar2;
				uVar18 = uVar27 + lVar25;
				iVar8 = (int)uVar18;
				*(undefined4 *)(iVar8 + 0x18c) = *(undefined4 *)(puVar10 + iVar12 + 0x98);
				*puVar6 = *puVar6 - iVar16;
				*(int *)(iVar8 + 0x1a0) = *(int *)(iVar8 + 0x1a0) - iVar16;
			}
		}
		uVar21 = (undefined4)in_r9;
		uVar20 = (undefined4)in_r8;
		if ((((uVar1 == *(uint *)puVar14) && (*puVar7 == 0)) && (*(uint *)(puVar11 + 0x94) == 0)) && (*piVar5 != 8)) {
			*(undefined4 *)(puVar10 + iVar12 + 0x74) = 0;
			*(undefined4 *)(puVar10 + iVar12 + 0x34) = 1;
			SyncPlrKill(uVar24, 0xffffffff, uVar18, uVar19, in_r7, in_r8, in_r9, CONCAT44(uVar22, uVar23),
			    in_stack_ffffffa8);
		}
		puVar10 = puVar10 + iVar12;
		*(uint *)(puVar11 + 0x94) = *puVar7;
		*(undefined4 *)(puVar10 + 0x98) = *(undefined4 *)(puVar15 + iVar13 + 0x18c);
		if (*(int *)(puVar10 + 0x74) == 0) {
			*(undefined4 *)(puVar10 + 0x34) = 1;
			NetSendCmd(1, 0x59, uVar18, uVar19, in_r7, uVar20, uVar21, uVar23, in_stack_ffffffa8);
		}
		PutMissile(lParm1);
	} else {
		if ((uint)(byte)*ppuVar17[-0x1df9] != *(uint *)(puVar15 + iVar13 + 0x34)) {
			*(undefined4 *)(puVar10 + iVar12 + 0x34) = 1;
		}
		PutMissile(lParm1);
	}
	return;
}

void ProcessMissiles(void)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	int iVar9;
	ulonglong uVar8;
	int iVar10;
	longlong lVar11;
	undefined8 uVar12;
	ulonglong uVar13;
	ulonglong uVar14;
	uint *puVar16;
	ulonglong uVar15;
	longlong in_r10;
	int *piVar17;
	ulonglong uVar18;
	ulonglong uVar19;
	undefined4 in_stack_ffffffa8;

	puVar7 = PTR_DAT_100f1ed4;
	puVar6 = PTR_DAT_100f1a3c;
	puVar5 = PTR_DAT_100f1970;
	puVar4 = PTR_DAT_100f196c;
	puVar3 = PTR_DAT_100f1968;
	puVar2 = PTR_DAT_100f1834;
	uVar8 = ZEXT48(&toc);
	uVar18 = ZEXT48(PTR_DAT_100f1970);
	iVar9 = 0;
	uVar12 = 0;
	uVar14 = ZEXT48(PTR_DAT_100f1a3c);
	uVar13 = ZEXT48(PTR_DAT_100f1834);
	uVar19 = ZEXT48(PTR_DAT_100f196c);
	uVar15 = uVar18;
	while (iVar9 < *(int *)puVar3) {
		puVar16 = (uint *)uVar15;
		uVar15 = uVar15 + 4;
		iVar9 = iVar9 + 1;
		in_r10 = uVar19 + (ulonglong)*puVar16 * 0xb4;
		iVar10 = (int)in_r10;
		piVar17 = (int *)(iVar10 + 8);
		in_r10 = in_r10 + 4;
		iVar10 = *(int *)(iVar10 + 4) * 0x70 + *piVar17;
		*(byte *)(*(int *)puVar2 + iVar10) = *(byte *)(*(int *)puVar2 + iVar10) & 0xfe;
		*(undefined *)(*(int *)puVar6 + *(int *)in_r10 * 0x70 + *piVar17) = 0;
	}
	iVar9 = 0;
	while (iVar9 < *(int *)puVar3) {
		uVar1 = *(uint *)(puVar5 + iVar9 * 4);
		if (*(int *)(puVar4 + uVar1 * 0xb4 + 0x34) == 0) {
			iVar9 = iVar9 + 1;
		} else {
			DeleteMissile((ulonglong)uVar1, iVar9, (ulonglong)uVar1, uVar12, uVar13, (int)uVar14, (int)uVar15,
			    (int)in_r10, in_stack_ffffffa8);
			iVar9 = 0;
		}
	}
	iVar9 = 0;
	**(undefined4 **)((int)uVar8 + -0x70e4) = 0;
	*(undefined4 *)puVar7 = 0;
	uVar8 = uVar18;
	while (true) {
		if (*(int *)puVar3 <= iVar9)
			break;
		puVar2 = puVar4 + *(int *)uVar8 * 0xb4;
		FUN_100dbf44();
		if ((*(uint *)(puVar2 + 0x3c) & 2) == 0) {
			*(int *)(puVar2 + 0x58) = *(int *)(puVar2 + 0x58) + 1;
			if (*(int *)(puVar2 + 0x48) <= *(int *)(puVar2 + 0x58)) {
				piVar17 = (int *)(puVar2 + 0x60);
				*(undefined4 *)(puVar2 + 0x58) = 0;
				*(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + *(int *)(puVar2 + 0x5c);
				if (*(int *)(puVar2 + 0x4c) < *(int *)(puVar2 + 0x60)) {
					*piVar17 = 1;
				}
				if (*piVar17 < 1) {
					*piVar17 = *(int *)(puVar2 + 0x4c);
				}
			}
		}
		uVar8 = uVar8 + 4;
		iVar9 = iVar9 + 1;
	}
	if (*(int *)puVar7 != 0) {
		iVar9 = 0;
		while (iVar9 < *(int *)puVar3) {
			if (*(int *)(puVar4 + *(int *)uVar18 * 0xb4) == 0xd) {
				MI_Manashield();
			}
			uVar18 = uVar18 + 4;
			iVar9 = iVar9 + 1;
		}
	}
	iVar9 = 0;
	while (iVar9 < *(int *)puVar3) {
		uVar8 = (ulonglong) * (uint *)(puVar5 + iVar9 * 4);
		lVar11 = uVar8 * 0xb4;
		if (*(int *)(puVar4 + (int)lVar11 + 0x34) == 0) {
			iVar9 = iVar9 + 1;
		} else {
			DeleteMissile(uVar8, iVar9, lVar11, uVar12, uVar13, (int)uVar14, (int)uVar15, (int)in_r10,
			    in_stack_ffffffa8);
			iVar9 = 0;
		}
	}
	return;
}

void missiles_process_charge(void)

{
	byte bVar1;
	int iVar2;
	int iVar3;
	undefined4 uVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	int *piVar9;
	int iVar10;
	undefined4 *puVar11;
	int *piVar12;
	byte *pbVar13;

	puVar8 = PTR_DAT_100f19b4;
	puVar7 = PTR_DAT_100f196c;
	puVar6 = PTR_DAT_100f1968;
	puVar5 = PTR_DAT_100f187c;
	iVar10 = 0;
	piVar9 = (int *)PTR_DAT_100f1970;
	while (iVar10 < *(int *)puVar6) {
		iVar2 = *piVar9;
		piVar12 = (int *)(puVar7 + iVar2 * 0xb4);
		iVar3 = *(int *)(puVar8 + (uint) * (byte *)(piVar12 + 0xe) * 300 + piVar12[0xb] * 8 + 0xc + 1);
		piVar12[0x10] = *(int *)(puVar8 + (uint) * (byte *)(piVar12 + 0xe) * 300 + piVar12[0xb] * 8 + 0xc);
		piVar12[0x11] = iVar3;
		if (*piVar12 == 0x14) {
			pbVar13 = *(byte **)(puVar5 + piVar12[0x1e] * 0xe8 + 0xe0);
			bVar1 = *pbVar13;
			if ((bVar1 < 0x40) || (0x43 < bVar1)) {
				if ((bVar1 < 0x59) || (0x5c < bVar1)) {
					pbVar13 = pbVar13 + 0x50;
				} else {
					pbVar13 = pbVar13 + 0x9c;
				}
			} else {
				pbVar13 = pbVar13 + 0x180;
			}
			puVar11 = (undefined4 *)(puVar7 + iVar2 * 0xb4 + 0x40);
			uVar4 = *(undefined4 *)(pbVar13 + piVar12[0xb] * 8 + 4 + 1);
			*puVar11 = *(undefined4 *)(pbVar13 + piVar12[0xb] * 8 + 4);
			puVar11[1] = uVar4;
		}
		piVar9 = piVar9 + 1;
		iVar10 = iVar10 + 1;
	}
	return;
}

void ClearMissileSpot(int param_1)

{
	undefined *puVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;

	puVar1 = PTR_DAT_100f1a3c;
	puVar4 = PTR_DAT_100f196c + param_1 * 0xb4;
	puVar3 = PTR_DAT_100f196c + param_1 * 0xb4;
	iVar2 = *(int *)(puVar4 + 4) * 0x70 + *(int *)(puVar3 + 8);
	*(byte *)(*(int *)PTR_DAT_100f1834 + iVar2) = *(byte *)(*(int *)PTR_DAT_100f1834 + iVar2) & 0xfe;
	*(undefined *)(*(int *)puVar1 + *(int *)(puVar4 + 4) * 0x70 + *(int *)(puVar3 + 8)) = 0;
	return;
}
