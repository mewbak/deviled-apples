
void PackItem(uint *param_1, uint *param_2)

{
	if (param_2[2] == 0xffffffff) {
		*(undefined2 *)((int)param_1 + 6) = 0xffff;
		return;
	}
	*(undefined2 *)((int)param_1 + 6) = (short)param_2[0x5a];
	if (param_2[0x5a] == 0x17) {
		*(ushort *)(param_1 + 1) = (ushort)((int)*(char *)(param_2 + 0x11) << 8) | (short)*(char *)((int)param_2 + 0x45);
		*param_1 = (int)*(char *)((int)param_2 + 0x49) | (int)*(char *)(param_2 + 0x12) << 8 | (int)*(char *)((int)param_2 + 0x46) << 0x18 | (int)*(char *)((int)param_2 + 0x47) << 0x10;
		*(undefined *)(param_1 + 2) = *(undefined *)((int)param_2 + 0x4a);
		*(undefined *)((int)param_1 + 9) = *(undefined *)((int)param_2 + 0x4b);
		*(undefined *)((int)param_1 + 10) = *(undefined *)(param_2 + 0x13);
		*(undefined *)((int)param_1 + 0xb) = *(undefined *)((int)param_2 + 0x4d);
		*(undefined *)(param_1 + 3) = *(undefined *)((int)param_2 + 0x4e);
		*(ushort *)((int)param_1 + 0xd) = (ushort)param_2[0x31] | (ushort)((int)*(char *)((int)param_2 + 0x4f) << 8) | ((short)param_2[0x30] + -0x13) * 0x40;
		*(uint *)((int)param_1 + 0xf) = (int)*(char *)((int)param_2 + 0x53) | (int)*(char *)((int)param_2 + 0x52) << 8 | (int)*(char *)(param_2 + 0x14) << 0x18 | (int)*(char *)((int)param_2 + 0x51) << 0x10;
		return;
	}
	*param_1 = *param_2;
	*(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
	*(char *)(param_1 + 2) = (char)param_2[0xe] + (char)((int)*(char *)(param_2 + 0xf) << 1);
	*(undefined *)((int)param_1 + 9) = (char)param_2[0x3b];
	*(undefined *)((int)param_1 + 10) = (char)param_2[0x3c];
	*(undefined *)((int)param_1 + 0xb) = (char)param_2[0x39];
	*(char *)(param_1 + 3) = (char)param_2[0x3a];
	if (param_2[0x5a] != 0) {
		return;
	}
	*(undefined2 *)((int)param_1 + 0xd) = (short)param_2[0x31];
	return;
}

void PackPlayer(int param_1, int param_2, int param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	bool bVar1;
	undefined4 uVar2;
	char *pcVar3;
	int iVar4;
	int iVar5;
	longlong lVar6;
	ulonglong uVar7;
	undefined *puVar8;
	undefined *puVar9;
	uint *puVar10;
	uint *puVar11;
	int iVar12;
	int iVar13;
	undefined in_stack_ffffffab;
	undefined in_stack_ffffffaf;
	uint local_4c;

	memset((char)param_1, 0xf2, (char)param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffab, in_stack_ffffffaf, local_4c);
	uVar7 = (ulonglong)local_4c;
	iVar13 = *(int *)(local_4c - 0x77a8) + param_2 * 0x55ec;
	*(undefined *)(param_1 + 8) = (char)*(undefined4 *)(iVar13 + 0x20);
	*(undefined *)(param_1 + 9) = (char)*(undefined4 *)(iVar13 + 0x24);
	*(undefined *)(param_1 + 10) = (char)*(undefined4 *)(iVar13 + 0x28);
	*(undefined *)(param_1 + 0xb) = (char)*(undefined4 *)(iVar13 + 0x34);
	*(undefined *)(param_1 + 0xc) = (char)*(undefined4 *)(iVar13 + 0x38);
	*(undefined *)(param_1 + 0xd) = (char)*(undefined4 *)(iVar13 + 0x3c);
	*(undefined *)(param_1 + 0xe) = (char)*(undefined4 *)(iVar13 + 0x48);
	*(undefined *)(param_1 + 0xf) = (char)*(undefined4 *)(iVar13 + 0x4c);
	strcpy(param_1 + 0x10, iVar13 + 0x13c);
	*(undefined *)(param_1 + 0x30) = *(undefined *)(iVar13 + 0x15c);
	*(undefined *)(param_1 + 0x31) = (char)*(undefined4 *)(iVar13 + 0x164);
	*(undefined *)(param_1 + 0x32) = (char)*(undefined4 *)(iVar13 + 0x16c);
	*(undefined *)(param_1 + 0x33) = (char)*(undefined4 *)(iVar13 + 0x174);
	*(undefined *)(param_1 + 0x34) = (char)*(undefined4 *)(iVar13 + 0x17c);
	*(undefined *)(param_1 + 0x35) = *(undefined *)(iVar13 + 0x1b4);
	*(undefined *)(param_1 + 0x36) = (char)*(undefined4 *)(iVar13 + 0x180);
	*(undefined4 *)(param_1 + 0x37) = *(undefined4 *)(iVar13 + 0x1b8);
	*(undefined4 *)(param_1 + 0x3b) = *(undefined4 *)(iVar13 + 0x1c8);
	*(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)(iVar13 + 0x18c);
	*(undefined4 *)(param_1 + 0x43) = *(undefined4 *)(iVar13 + 400);
	*(undefined4 *)(param_1 + 0x47) = *(undefined4 *)(iVar13 + 0x1a0);
	*(undefined4 *)(param_1 + 0x4b) = *(undefined4 *)(iVar13 + 0x1a4);
	uVar2 = *(undefined4 *)(iVar13 + 0x104);
	*(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar13 + 0x108);
	*(undefined4 *)(param_1 + 0x74) = uVar2;
	iVar12 = 0x20;
	lVar6 = 5;
	*(undefined *)(param_1 + 0x4f) = *(undefined *)(iVar13 + 0xc1);
	*(undefined *)(param_1 + 0x50) = *(undefined *)(iVar13 + 0xc2);
	*(undefined *)(param_1 + 0x51) = *(undefined *)(iVar13 + 0xc3);
	*(undefined *)(param_1 + 0x52) = *(undefined *)(iVar13 + 0xc4);
	*(undefined *)(param_1 + 0x53) = *(undefined *)(iVar13 + 0xc5);
	*(undefined *)(param_1 + 0x54) = *(undefined *)(iVar13 + 0xc6);
	*(undefined *)(param_1 + 0x55) = *(undefined *)(iVar13 + 199);
	*(undefined *)(param_1 + 0x56) = *(undefined *)(iVar13 + 200);
	*(undefined *)(param_1 + 0x57) = *(undefined *)(iVar13 + 0xc9);
	*(undefined *)(param_1 + 0x58) = *(undefined *)(iVar13 + 0xca);
	*(undefined *)(param_1 + 0x59) = *(undefined *)(iVar13 + 0xcb);
	*(undefined *)(param_1 + 0x5a) = *(undefined *)(iVar13 + 0xcc);
	*(undefined *)(param_1 + 0x5b) = *(undefined *)(iVar13 + 0xcd);
	*(undefined *)(param_1 + 0x5c) = *(undefined *)(iVar13 + 0xce);
	*(undefined *)(param_1 + 0x5d) = *(undefined *)(iVar13 + 0xcf);
	*(undefined *)(param_1 + 0x5e) = *(undefined *)(iVar13 + 0xd0);
	*(undefined *)(param_1 + 0x5f) = *(undefined *)(iVar13 + 0xd1);
	*(undefined *)(param_1 + 0x60) = *(undefined *)(iVar13 + 0xd2);
	*(undefined *)(param_1 + 0x61) = *(undefined *)(iVar13 + 0xd3);
	*(undefined *)(param_1 + 0x62) = *(undefined *)(iVar13 + 0xd4);
	*(undefined *)(param_1 + 99) = *(undefined *)(iVar13 + 0xd5);
	*(undefined *)(param_1 + 100) = *(undefined *)(iVar13 + 0xd6);
	*(undefined *)(param_1 + 0x65) = *(undefined *)(iVar13 + 0xd7);
	*(undefined *)(param_1 + 0x66) = *(undefined *)(iVar13 + 0xd8);
	*(undefined *)(param_1 + 0x67) = *(undefined *)(iVar13 + 0xd9);
	*(undefined *)(param_1 + 0x68) = *(undefined *)(iVar13 + 0xda);
	*(undefined *)(param_1 + 0x69) = *(undefined *)(iVar13 + 0xdb);
	*(undefined *)(param_1 + 0x6a) = *(undefined *)(iVar13 + 0xdc);
	*(undefined *)(param_1 + 0x6b) = *(undefined *)(iVar13 + 0xdd);
	*(undefined *)(param_1 + 0x6c) = *(undefined *)(iVar13 + 0xde);
	*(undefined *)(param_1 + 0x6d) = *(undefined *)(iVar13 + 0xdf);
	*(undefined *)(param_1 + 0x6e) = *(undefined *)(iVar13 + 0xe0);
	do {
		iVar4 = iVar12 + 0xc1;
		iVar5 = iVar12 + 0x4f;
		iVar12 = iVar12 + 1;
		*(undefined *)(param_1 + iVar5) = *(undefined *)(iVar13 + iVar4);
		lVar6 = lVar6 + -1;
	} while (lVar6 != 0);
	puVar10 = (uint *)(param_1 + 0x7c);
	puVar11 = (uint *)(iVar13 + 0x498);
	iVar12 = 6;
	do {
		PackItem(puVar10, puVar11);
		bVar1 = iVar12 != 0;
		puVar10 = (uint *)((int)puVar10 + 0x13);
		puVar11 = puVar11 + 0x5c;
		iVar12 = iVar12 + -1;
	} while (bVar1);
	puVar11 = (uint *)(param_1 + 0x101);
	puVar10 = (uint *)(iVar13 + 0xea8);
	iVar12 = 0x27;
	do {
		PackItem(puVar11, puVar10);
		bVar1 = iVar12 != 0;
		puVar11 = (uint *)((int)puVar11 + 0x13);
		puVar10 = puVar10 + 0x5c;
		iVar12 = iVar12 + -1;
	} while (bVar1);
	lVar6 = 5;
	iVar12 = 0;
	do {
		puVar8 = (undefined *)(iVar13 + iVar12 + 0x482c);
		puVar9 = (undefined *)(param_1 + iVar12 + 0x3f9);
		iVar12 = iVar12 + 8;
		*puVar9 = *puVar8;
		puVar9[1] = puVar8[1];
		puVar9[2] = puVar8[2];
		puVar9[3] = puVar8[3];
		puVar9[4] = puVar8[4];
		puVar9[5] = puVar8[5];
		puVar9[6] = puVar8[6];
		puVar9[7] = puVar8[7];
		lVar6 = lVar6 + -1;
	} while (lVar6 != 0);
	puVar11 = (uint *)(param_1 + 0x422);
	puVar10 = (uint *)(iVar13 + 0x4854);
	*(undefined *)(param_1 + 0x421) = (char)*(undefined4 *)(iVar13 + 0x4828);
	iVar12 = 7;
	do {
		PackItem(puVar11, puVar10);
		bVar1 = iVar12 != 0;
		puVar11 = (uint *)((int)puVar11 + 0x13);
		puVar10 = puVar10 + 0x5c;
		iVar12 = iVar12 + -1;
	} while (bVar1);
	pcVar3 = *(char **)((int)uVar7 + -0x77f0);
	*(undefined4 *)(param_1 + 0x4d2) = *(undefined4 *)(iVar13 + 0x55a8);
	if ((*pcVar3 == '\x01') || (param_3 != 0)) {
		*(undefined *)(param_1 + 0x4be) = *(undefined *)(iVar13 + 0x5594);
	} else {
		*(undefined *)(param_1 + 0x4be) = 0;
	}
	return;
}

void UnPackItem(uint *param_1, int param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	ushort uVar1;
	undefined4 uVar2;
	undefined *puVar3;
	undefined4 *puVar4;
	undefined4 *puVar5;
	longlong lVar6;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;

	puVar3 = PTR_DAT_100f1940;
	uVar1 = *(ushort *)((int)param_1 + 6);
	if (uVar1 == 0xffff) {
		*(undefined4 *)(param_2 + 8) = 0xffffffff;
	} else {
		if (uVar1 == 0x17) {
			RecreateEar(0x7f, (ulonglong) * (ushort *)(param_1 + 1), *param_1, (uint) * (byte *)(param_1 + 2),
			    (uint) * (byte *)((int)param_1 + 9), (uint) * (byte *)((int)param_1 + 10),
			    (uint) * (byte *)((int)param_1 + 0xb), (uint) * (byte *)(param_1 + 3),
			    in_stack_ffffffb8, in_stack_ffffffbf, (uint) * (ushort *)((int)param_1 + 0xd),
			    *(undefined4 *)((int)param_1 + 0xf));
		} else {
			RecreateItem(0x7f, (uint)uVar1, (ulonglong) * (ushort *)(param_1 + 1), (ulonglong)*param_1,
			    (uint) * (ushort *)((int)param_1 + 0xd), param_6, param_7, param_8, in_stack_ffffffb8);
			puVar3[0xb6cc] = (char)((int)(uint) * (byte *)(param_1 + 2) >> 1);
			*(uint *)(puVar3 + 0xb6c8) = (uint) * (byte *)(param_1 + 2) & 1;
			*(uint *)(puVar3 + 0xb77c) = (uint) * (byte *)((int)param_1 + 9);
			*(uint *)(puVar3 + 0xb780) = (uint) * (byte *)((int)param_1 + 10);
			*(uint *)(puVar3 + 0xb774) = (uint) * (byte *)((int)param_1 + 0xb);
			*(uint *)(puVar3 + 0xb778) = (uint) * (byte *)(param_1 + 3);
		}
		lVar6 = 0x2e;
		puVar4 = (undefined4 *)(puVar3 + 0xb688);
		puVar5 = (undefined4 *)(param_2 + -8);
		do {
			uVar2 = puVar4[3];
			puVar5[2] = puVar4[2];
			puVar5[3] = uVar2;
			lVar6 = lVar6 + -1;
			puVar4 = puVar4 + 2;
			puVar5 = puVar5 + 2;
		} while (lVar6 != 0);
	}
	return;
}

void VerifyGoldSeeds(int param_1, undefined param_2, undefined param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	int iVar2;
	undefined4 uVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	int iVar11;
	longlong lVar12;
	undefined4 in_stack_ffffffb8;

	lVar10 = (longlong)param_8;
	lVar9 = (longlong)param_7;
	lVar8 = (longlong)param_6;
	lVar7 = (longlong)param_5;
	lVar6 = (longlong)param_4;
	iVar11 = 0;
	lVar12 = (longlong)param_1;
	while (iVar11 < *(int *)(param_1 + 0x4828)) {
		iVar1 = (int)lVar12;
		if (*(int *)(iVar1 + 0x1010) == 0) {
			lVar5 = 0;
			while ((int)lVar5 < *(int *)(param_1 + 0x4828)) {
				if (((iVar11 != (int)lVar5) && (lVar4 = (longlong)param_1 + lVar5 * 0x170, iVar2 = (int)lVar4, *(int *)(iVar2 + 0x1010) == 0)) && (*(int *)(iVar1 + 0xea8) == *(int *)(iVar2 + 0xea8))) {
					uVar3 = GetRndSeed((char)*(int *)(iVar1 + 0xea8), (char)lVar4, (char)lVar5, (char)lVar6,
					    (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffb8);
					*(undefined4 *)(iVar1 + 0xea8) = uVar3;
					lVar5 = -1;
				}
				lVar5 = lVar5 + 1;
			}
		}
		lVar12 = lVar12 + 0x170;
		iVar11 = iVar11 + 1;
	}
	return;
}

void UnPackPlayer(int param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	bool bVar1;
	undefined4 uVar2;
	longlong lVar3;
	ulonglong uVar4;
	int iVar5;
	undefined *puVar6;
	ulonglong uVar7;
	longlong lVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined8 uVar11;
	ulonglong uVar12;
	undefined7 uVar13;
	undefined uVar14;
	uint *puVar15;
	int iVar16;
	longlong lVar17;
	undefined4 in_stack_ffffff98;

	puVar10 = PTR_DAT_100f1e58;
	uVar13 = (undefined7)(param_5 >> 8);
	uVar14 = (undefined)param_5;
	uVar4 = ZEXT48(&toc);
	uVar7 = ZEXT48(PTR_DAT_100f1828);
	lVar17 = uVar7 + param_2 * 0x55ec;
	iVar5 = (int)lVar17;
	uVar11 = param_3;
	ClearPlrRVars(iVar5);
	*(uint *)(iVar5 + 0x38) = (uint) * (byte *)(param_1 + 0xc);
	*(uint *)(iVar5 + 0x3c) = (uint) * (byte *)(param_1 + 0xd);
	*(uint *)(iVar5 + 0x40) = (uint) * (byte *)(param_1 + 0xc);
	*(uint *)(iVar5 + 0x44) = (uint) * (byte *)(param_1 + 0xd);
	*(uint *)(iVar5 + 0x48) = (uint) * (byte *)(param_1 + 0xe);
	*(uint *)(iVar5 + 0x4c) = (uint) * (byte *)(param_1 + 0xf);
	*(uint *)(iVar5 + 0x34) = (uint) * (byte *)(param_1 + 0xb);
	ClrPlrPath(param_2, uVar7, uVar11, param_4, CONCAT71(uVar13, uVar14), (int)param_6, (int)param_7,
	    (int)param_8, in_stack_ffffff98);
	*(undefined4 *)(iVar5 + 0x20) = 0xffffffff;
	strcpy(iVar5 + 0x13c, param_1 + 0x10);
	*(undefined *)(iVar5 + 0x15c) = *(undefined *)(param_1 + 0x30);
	InitPlayer(param_2, 1, uVar11, param_4, CONCAT71(uVar13, uVar14), (int)param_6, (int)param_7,
	    (int)param_8, in_stack_ffffff98);
	*(uint *)(iVar5 + 0x164) = (uint) * (byte *)(param_1 + 0x31);
	*(uint *)(iVar5 + 0x160) = (uint) * (byte *)(param_1 + 0x31);
	*(uint *)(iVar5 + 0x16c) = (uint) * (byte *)(param_1 + 0x32);
	*(uint *)(iVar5 + 0x168) = (uint) * (byte *)(param_1 + 0x32);
	*(uint *)(iVar5 + 0x174) = (uint) * (byte *)(param_1 + 0x33);
	*(uint *)(iVar5 + 0x170) = (uint) * (byte *)(param_1 + 0x33);
	*(uint *)(iVar5 + 0x17c) = (uint) * (byte *)(param_1 + 0x34);
	*(uint *)(iVar5 + 0x178) = (uint) * (byte *)(param_1 + 0x34);
	*(undefined *)(iVar5 + 0x1b4) = *(undefined *)(param_1 + 0x35);
	*(uint *)(iVar5 + 0x180) = (uint) * (byte *)(param_1 + 0x36);
	*(undefined4 *)(iVar5 + 0x1b8) = *(undefined4 *)(param_1 + 0x37);
	*(undefined4 *)(iVar5 + 0x1c8) = *(undefined4 *)(param_1 + 0x3b);
	*(undefined4 *)(iVar5 + 400) = *(undefined4 *)(param_1 + 0x43);
	*(undefined4 *)(iVar5 + 0x18c) = *(undefined4 *)(param_1 + 0x3f);
	if (((int)param_3 == 0) && (*(int *)(iVar5 + 0x18c) >> 6 < 1)) {
		*(undefined4 *)(iVar5 + 0x18c) = 0x40;
	}
	uVar7 = 0x20;
	lVar3 = 5;
	*(undefined4 *)(iVar5 + 0x1a4) = *(undefined4 *)(param_1 + 0x4b);
	*(undefined4 *)(iVar5 + 0x1a0) = *(undefined4 *)(param_1 + 0x47);
	uVar2 = *(undefined4 *)(param_1 + 0x74);
	*(undefined4 *)(iVar5 + 0x108) = *(undefined4 *)(param_1 + 0x78);
	*(undefined4 *)(iVar5 + 0x104) = uVar2;
	*(undefined *)(iVar5 + 0xc1) = *(undefined *)(param_1 + 0x4f);
	*(undefined *)(iVar5 + 0xc2) = *(undefined *)(param_1 + 0x50);
	*(undefined *)(iVar5 + 0xc3) = *(undefined *)(param_1 + 0x51);
	*(undefined *)(iVar5 + 0xc4) = *(undefined *)(param_1 + 0x52);
	*(undefined *)(iVar5 + 0xc5) = *(undefined *)(param_1 + 0x53);
	*(undefined *)(iVar5 + 0xc6) = *(undefined *)(param_1 + 0x54);
	*(undefined *)(iVar5 + 199) = *(undefined *)(param_1 + 0x55);
	*(undefined *)(iVar5 + 200) = *(undefined *)(param_1 + 0x56);
	*(undefined *)(iVar5 + 0xc9) = *(undefined *)(param_1 + 0x57);
	*(undefined *)(iVar5 + 0xca) = *(undefined *)(param_1 + 0x58);
	*(undefined *)(iVar5 + 0xcb) = *(undefined *)(param_1 + 0x59);
	*(undefined *)(iVar5 + 0xcc) = *(undefined *)(param_1 + 0x5a);
	*(undefined *)(iVar5 + 0xcd) = *(undefined *)(param_1 + 0x5b);
	*(undefined *)(iVar5 + 0xce) = *(undefined *)(param_1 + 0x5c);
	*(undefined *)(iVar5 + 0xcf) = *(undefined *)(param_1 + 0x5d);
	*(undefined *)(iVar5 + 0xd0) = *(undefined *)(param_1 + 0x5e);
	*(undefined *)(iVar5 + 0xd1) = *(undefined *)(param_1 + 0x5f);
	*(undefined *)(iVar5 + 0xd2) = *(undefined *)(param_1 + 0x60);
	*(undefined *)(iVar5 + 0xd3) = *(undefined *)(param_1 + 0x61);
	*(undefined *)(iVar5 + 0xd4) = *(undefined *)(param_1 + 0x62);
	*(undefined *)(iVar5 + 0xd5) = *(undefined *)(param_1 + 99);
	*(undefined *)(iVar5 + 0xd6) = *(undefined *)(param_1 + 100);
	*(undefined *)(iVar5 + 0xd7) = *(undefined *)(param_1 + 0x65);
	*(undefined *)(iVar5 + 0xd8) = *(undefined *)(param_1 + 0x66);
	*(undefined *)(iVar5 + 0xd9) = *(undefined *)(param_1 + 0x67);
	*(undefined *)(iVar5 + 0xda) = *(undefined *)(param_1 + 0x68);
	*(undefined *)(iVar5 + 0xdb) = *(undefined *)(param_1 + 0x69);
	*(undefined *)(iVar5 + 0xdc) = *(undefined *)(param_1 + 0x6a);
	*(undefined *)(iVar5 + 0xdd) = *(undefined *)(param_1 + 0x6b);
	*(undefined *)(iVar5 + 0xde) = *(undefined *)(param_1 + 0x6c);
	*(undefined *)(iVar5 + 0xdf) = *(undefined *)(param_1 + 0x6d);
	*(undefined *)(iVar5 + 0xe0) = *(undefined *)(param_1 + 0x6e);
	do {
		iVar16 = (int)uVar7;
		uVar7 = uVar7 + 1;
		*(undefined *)(iVar5 + iVar16 + 0xc1) = *(undefined *)(param_1 + iVar16 + 0x4f);
		lVar3 = lVar3 + -1;
	} while (lVar3 != 0);
	puVar15 = (uint *)(param_1 + 0x7c);
	lVar3 = lVar17 + 0x498;
	iVar16 = 6;
	do {
		UnPackItem(puVar15, (int)lVar3, (char)uVar11, (char)uVar7, uVar14, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffff98);
		bVar1 = iVar16 != 0;
		puVar15 = (uint *)((int)puVar15 + 0x13);
		lVar3 = lVar3 + 0x170;
		iVar16 = iVar16 + -1;
	} while (bVar1);
	puVar15 = (uint *)(param_1 + 0x101);
	lVar3 = lVar17 + 0xea8;
	iVar16 = 0x27;
	do {
		UnPackItem(puVar15, (int)lVar3, (char)uVar11, (char)uVar7, uVar14, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffff98);
		bVar1 = iVar16 != 0;
		puVar15 = (uint *)((int)puVar15 + 0x13);
		lVar3 = lVar3 + 0x170;
		iVar16 = iVar16 + -1;
	} while (bVar1);
	lVar3 = 5;
	uVar12 = 0;
	do {
		puVar6 = (undefined *)(param_1 + (int)uVar12 + 0x3f9);
		lVar8 = lVar17 + uVar12 + 0x482c;
		uVar12 = uVar12 + 8;
		puVar9 = (undefined *)lVar8;
		*puVar9 = *puVar6;
		puVar9[1] = puVar6[1];
		puVar9[2] = puVar6[2];
		puVar9[3] = puVar6[3];
		puVar9[4] = puVar6[4];
		puVar9[5] = puVar6[5];
		puVar9[6] = puVar6[6];
		puVar9[7] = puVar6[7];
		lVar3 = lVar3 + -1;
	} while (lVar3 != 0);
	*(uint *)(iVar5 + 0x4828) = (uint) * (byte *)(param_1 + 0x421);
	VerifyGoldSeeds(iVar5, (char)lVar8, (char)uVar12, (char)uVar7, uVar14, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffff98);
	puVar15 = (uint *)(param_1 + 0x422);
	lVar17 = lVar17 + 0x4854;
	iVar16 = 7;
	do {
		UnPackItem(puVar15, (int)lVar17, (char)uVar12, (char)uVar7, uVar14, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffff98);
		bVar1 = iVar16 != 0;
		puVar15 = (uint *)((int)puVar15 + 0x13);
		lVar17 = lVar17 + 0x170;
		iVar16 = iVar16 + -1;
	} while (bVar1);
	if ((int)param_2 == **(int **)((int)uVar4 + -0x77ac)) {
		*(undefined4 *)(puVar10 + 8) = 0xffffffff;
		uVar12 = 0x10;
		*(undefined4 *)(puVar10 + 0x178) = 0xffffffff;
		*(undefined4 *)(puVar10 + 0x2e8) = 0xffffffff;
		*(undefined4 *)(puVar10 + 0x458) = 0xffffffff;
		*(undefined4 *)(puVar10 + 0x5c8) = 0xffffffff;
		*(undefined4 *)(puVar10 + 0x738) = 0xffffffff;
		*(undefined4 *)(puVar10 + 0x8a8) = 0xffffffff;
		*(undefined4 *)(puVar10 + 0xa18) = 0xffffffff;
		*(undefined4 *)(puVar10 + 0xb88) = 0xffffffff;
		*(undefined4 *)(puVar10 + 0xcf8) = 0xffffffff;
		*(undefined4 *)(puVar10 + 0xe68) = 0xffffffff;
		*(undefined4 *)(puVar10 + 0xfd8) = 0xffffffff;
		*(undefined4 *)(puVar10 + 0x1148) = 0xffffffff;
		*(undefined4 *)(puVar10 + 0x12b8) = 0xffffffff;
		*(undefined4 *)(puVar10 + 0x1428) = 0xffffffff;
		*(undefined4 *)(puVar10 + 0x1598) = 0xffffffff;
		puVar10 = puVar10 + 0x1700;
		lVar17 = 4;
		do {
			*(undefined4 *)(puVar10 + 8) = 0xffffffff;
			puVar10 = puVar10 + 0x170;
			lVar17 = lVar17 + -1;
		} while (lVar17 != 0);
	}
	CalcPlrInv(param_2, 0, uVar12, uVar7, CONCAT71(uVar13, uVar14), param_6, param_7, param_8,
	    in_stack_ffffff98);
	*(undefined *)(iVar5 + 0x5590) = 0;
	*(undefined *)(iVar5 + 0x5591) = 0;
	*(undefined *)(iVar5 + 0x5592) = 0;
	*(undefined4 *)(iVar5 + 0x55a8) = *(undefined4 *)(param_1 + 0x4d2);
	*(undefined *)(iVar5 + 0x5593) = *(undefined *)(param_1 + 0x4bd);
	*(undefined *)(iVar5 + 0x5594) = *(undefined *)(param_1 + 0x4be);
	return;
}
