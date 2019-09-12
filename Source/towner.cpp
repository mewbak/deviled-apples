
longlong GetActiveTowner(int param_1)

{
	ulonglong uVar1;
	undefined *puVar2;
	longlong lVar3;

	lVar3 = 0;
	uVar1 = (ulonglong) * (uint *)PTR_DAT_100f2120;
	puVar2 = PTR_DAT_100f1878;
	if (0 < (int)*(uint *)PTR_DAT_100f2120) {
		do {
			if (param_1 == *(int *)(puVar2 + 4)) {
				return lVar3;
			}
			puVar2 = puVar2 + 0x10c;
			lVar3 = lVar3 + 1;
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
	}
	return -1;
}

void SetTownerGPtrs(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int *piVar1;
	byte *pbVar2;
	ulonglong uVar3;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	int iVar10;
	undefined4 in_stack_ffffffc8;

	uVar6 = (undefined)param_5;
	uVar5 = (undefined)param_4;
	uVar4 = (undefined)param_2;
	uVar9 = (undefined)param_8;
	uVar8 = (undefined)param_7;
	uVar7 = (undefined)param_6;
	uVar3 = FUN_100b8f7c(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	iVar10 = (int)param_1;
	piVar1 = (int *)param_2;
	*piVar1 = iVar10;
	pbVar2 = (byte *)uVar3;
	piVar1[1] = (uint)pbVar2[3] << 0x18 | (uint)pbVar2[2] << 0x10 | (uint)pbVar2[1] << 8 | (uint)*pbVar2;
	piVar1[2] = iVar10;
	piVar1[3] = (uint)pbVar2[7] << 0x18 | (uint)pbVar2[6] << 0x10 | (uint)pbVar2[5] << 8 | (uint)pbVar2[4];
	piVar1[4] = iVar10;
	piVar1[5] = (uint)pbVar2[0xb] << 0x18 | (uint)pbVar2[10] << 0x10 | (uint)pbVar2[9] << 8 | (uint)pbVar2[8];
	piVar1[6] = iVar10;
	piVar1[7] = (uint)pbVar2[0xf] << 0x18 | (uint)pbVar2[0xe] << 0x10 | (uint)pbVar2[0xd] << 8 | (uint)pbVar2[0xc];
	piVar1[8] = iVar10;
	piVar1[9] = (uint)pbVar2[0x13] << 0x18 | (uint)pbVar2[0x12] << 0x10 | (uint)pbVar2[0x11] << 8 | (uint)pbVar2[0x10];
	piVar1[10] = iVar10;
	piVar1[0xb] = (uint)pbVar2[0x17] << 0x18 | (uint)pbVar2[0x16] << 0x10 | (uint)pbVar2[0x15] << 8 | (uint)pbVar2[0x14];
	piVar1[0xc] = iVar10;
	piVar1[0xd] = (uint)pbVar2[0x1b] << 0x18 | (uint)pbVar2[0x1a] << 0x10 | (uint)pbVar2[0x19] << 8 | (uint)pbVar2[0x18];
	piVar1[0xe] = iVar10;
	piVar1[0xf] = (uint)pbVar2[0x1f] << 0x18 | (uint)pbVar2[0x1e] << 0x10 | (uint)pbVar2[0x1d] << 8 | (uint)pbVar2[0x1c];
	FUN_100b9100(iVar10, uVar4, 0x1c, uVar5, uVar6, uVar7, uVar8, uVar9, in_stack_ffffffc8);
	return;
}

void NewTownerAnim(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f1878 + param_1 * 0x10c;
	*(undefined4 *)(puVar1 + 0x24) = param_2;
	*(undefined4 *)(puVar1 + 0x30) = param_3;
	*(undefined4 *)(puVar1 + 0x34) = 1;
	*(undefined4 *)(puVar1 + 0x2c) = 0;
	*(undefined4 *)(puVar1 + 0x28) = param_4;
	return;
}

void InitTownerInfo(longlong param_1, int param_2, undefined4 param_3, undefined4 param_4, int param_5,
    int param_6, undefined param_7, undefined4 param_8, undefined4 param_9)

{
	int *piVar1;
	int iVar2;
	int iVar3;
	undefined *puVar4;
	undefined4 uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	int local_4c;

	puVar4 = PTR_DAT_100f1878;
	uVar9 = (undefined)param_8;
	uVar7 = (undefined)param_6;
	uVar6 = (undefined)param_5;
	uVar8 = param_7;
	memset((char)PTR_DAT_100f1878 + (char)(param_1 * 0x10c), 0xc, (char)param_3, (char)param_4, uVar6,
	    uVar7, param_7, uVar9, (char)in_stack_ffffffa8, in_stack_ffffffaf, local_4c);
	puVar4 = puVar4 + (int)(param_1 * 0x10c);
	*(undefined4 *)(puVar4 + 0x54) = param_3;
	iVar3 = param_2 + -0x40 >> 1;
	piVar1 = *(int **)(local_4c + -0x767c);
	*(int *)(puVar4 + 0x40) = param_2;
	*(int *)(puVar4 + 0x44) = iVar3;
	*(undefined4 *)(puVar4 + 0x58) = 0;
	*(undefined4 *)(puVar4 + 4) = param_4;
	*(int *)(puVar4 + 8) = param_5;
	*(int *)(puVar4 + 0xc) = param_6;
	iVar2 = *piVar1;
	*(undefined2 *)(iVar2 + param_5 * 0xe0 + param_6 * 2) = (short)(param_1 + 1);
	puVar4[0x3c] = param_7;
	*(undefined4 *)(puVar4 + 0x48) = param_8;
	uVar5 = GetRndSeed((char)iVar2, (char)piVar1, (char)(param_1 + 1), (char)iVar3, uVar6, uVar7, uVar8,
	    uVar9, in_stack_ffffffa8);
	*(undefined4 *)(puVar4 + 0x8c) = uVar5;
	return;
}

void InitQstSnds(int param_1)

{
	undefined *puVar1;
	int *piVar2;
	undefined *puVar3;
	int iVar4;
	longlong lVar5;

	iVar4 = param_1;
	if (*(int *)PTR_DAT_100f211c != 0) {
		iVar4 = param_1 + 1;
	}
	lVar5 = 4;
	puVar1 = PTR_DAT_100f1878 + param_1 * 0x10c;
	piVar2 = (int *)(PTR_DAT_100f206c + iVar4 * 0x40);
	puVar3 = PTR_DAT_100f19cc;
	do {
		puVar1[0x5c] = puVar3[1];
		puVar1[0x5d] = (char)*piVar2;
		if (*piVar2 == -1) {
			puVar1[0x5e] = 0;
		} else {
			puVar1[0x5e] = 1;
		}
		puVar1[0x5f] = puVar3[0x19];
		puVar1[0x60] = (char)piVar2[1];
		if (piVar2[1] == -1) {
			puVar1[0x61] = 0;
		} else {
			puVar1[0x61] = 1;
		}
		puVar1[0x62] = puVar3[0x31];
		puVar1[99] = (char)piVar2[2];
		if (piVar2[2] == -1) {
			puVar1[100] = 0;
		} else {
			puVar1[100] = 1;
		}
		puVar1[0x65] = puVar3[0x49];
		puVar1[0x66] = (char)piVar2[3];
		if (piVar2[3] == -1) {
			puVar1[0x67] = 0;
		} else {
			puVar1[0x67] = 1;
		}
		puVar3 = puVar3 + 0x60;
		puVar1 = puVar1 + 0xc;
		piVar2 = piVar2 + 4;
		lVar5 = lVar5 + -1;
	} while (lVar5 != 0);
	return;
}

void InitSmith(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	longlong lVar5;
	int iVar6;
	undefined8 uVar7;
	undefined *puVar8;
	undefined8 uVar9;
	undefined8 uVar10;
	undefined4 uVar11;
	undefined *puVar12;
	undefined4 uVar13;
	undefined4 uVar14;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f2120;
	puVar2 = PTR_DAT_100f1878;
	ppuVar4 = &toc;
	uVar7 = 1;
	uVar9 = 0;
	uVar10 = 0x3e;
	uVar11 = 0x3f;
	uVar13 = 0;
	uVar14 = 10;
	InitTownerInfo((ulonglong) * (uint *)PTR_DAT_100f2120, 0x60, 1, 0, 0x3e, 0x3f, 0, 10, in_stack_ffffffb8);
	InitQstSnds(*(int *)puVar3);
	lVar5 = LoadFileInMem(ZEXT48(ppuVar4[-0x157d]), (undefined4 *)0x0, uVar7, uVar9, uVar10, uVar11, uVar13,
	    uVar14, in_stack_ffffffb8);
	iVar1 = *(int *)puVar3;
	iVar6 = iVar1 * 0x10c;
	puVar12 = puVar2 + iVar6;
	puVar8 = puVar2 + iVar6;
	*(int *)(puVar12 + 0x104) = (int)lVar5;
	*(undefined4 *)(puVar8 + 0x108) = 0;
	*(undefined4 *)(puVar8 + 0xc0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xc4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 200) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xcc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xd4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xdc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xe4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xec) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xf4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xfc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0x100) = 0x10;
	NewTownerAnim(iVar1, puVar2 + iVar6 + 200, *(undefined4 *)(puVar8 + 0x100), 3);
	strcpy((int)(puVar2 + *(int *)puVar3 * 0x10c + 0xa0), (int)ppuVar4[-0x157e]);
	*(int *)puVar3 = *(int *)puVar3 + 1;
	return;
}

void InitBarOwner(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	longlong lVar5;
	int iVar6;
	undefined8 uVar7;
	undefined *puVar8;
	undefined8 uVar9;
	undefined8 uVar10;
	undefined4 uVar11;
	undefined *puVar12;
	undefined4 uVar13;
	undefined4 uVar14;
	undefined4 in_stack_ffffffa8;

	puVar3 = PTR_DAT_100f2120;
	puVar2 = PTR_DAT_100f1878;
	ppuVar4 = &toc;
	uVar7 = 1;
	uVar9 = 3;
	uVar10 = 0x37;
	uVar11 = 0x3e;
	uVar13 = 3;
	*(undefined4 *)PTR_DAT_100f2118 = 0;
	uVar14 = 10;
	InitTownerInfo((ulonglong) * (uint *)puVar3, 0x60, 1, 3, 0x37, 0x3e, 3, 10, in_stack_ffffffa8);
	InitQstSnds(*(int *)puVar3);
	lVar5 = LoadFileInMem(ZEXT48(ppuVar4[-0x157f]), (undefined4 *)0x0, uVar7, uVar9, uVar10, uVar11, uVar13,
	    uVar14, in_stack_ffffffa8);
	iVar1 = *(int *)puVar3;
	iVar6 = iVar1 * 0x10c;
	puVar12 = puVar2 + iVar6;
	puVar8 = puVar2 + iVar6;
	*(int *)(puVar12 + 0x104) = (int)lVar5;
	*(undefined4 *)(puVar8 + 0x108) = 0;
	*(undefined4 *)(puVar8 + 0xc0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xc4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 200) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xcc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xd4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xdc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xe4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xec) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xf4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xfc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0x100) = 0x10;
	NewTownerAnim(iVar1, puVar2 + iVar6 + 200, *(undefined4 *)(puVar8 + 0x100), 3);
	strcpy((int)(puVar2 + *(int *)puVar3 * 0x10c + 0xa0), (int)ppuVar4[-0x1580]);
	*(int *)puVar3 = *(int *)puVar3 + 1;
	return;
}

void InitTownDead(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	longlong lVar5;
	int iVar6;
	undefined8 uVar7;
	undefined *puVar8;
	undefined8 uVar9;
	undefined8 uVar10;
	undefined4 uVar11;
	undefined *puVar12;
	undefined4 uVar13;
	undefined4 uVar14;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f2120;
	puVar2 = PTR_DAT_100f1878;
	ppuVar4 = &toc;
	uVar7 = 1;
	uVar9 = 2;
	uVar10 = 0x18;
	uVar11 = 0x20;
	uVar13 = 0xffffffff;
	uVar14 = 10;
	InitTownerInfo((ulonglong) * (uint *)PTR_DAT_100f2120, 0x60, 1, 2, 0x18, 0x20, 0xff, 10, in_stack_ffffffb8);
	InitQstSnds(*(int *)puVar3);
	lVar5 = LoadFileInMem(ZEXT48(ppuVar4[-0x1581]), (undefined4 *)0x0, uVar7, uVar9, uVar10, uVar11, uVar13,
	    uVar14, in_stack_ffffffb8);
	iVar1 = *(int *)puVar3;
	iVar6 = iVar1 * 0x10c;
	puVar12 = puVar2 + iVar6;
	puVar8 = puVar2 + iVar6;
	*(int *)(puVar12 + 0x104) = (int)lVar5;
	*(undefined4 *)(puVar8 + 0x108) = 0;
	*(undefined4 *)(puVar8 + 0xc0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xc4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 200) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xcc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xd4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xdc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xe4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xec) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xf4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xfc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0x100) = 8;
	NewTownerAnim(iVar1, puVar2 + iVar6 + 0xe0, *(undefined4 *)(puVar8 + 0x100), 6);
	strcpy((int)(puVar2 + *(int *)puVar3 * 0x10c + 0xa0), (int)ppuVar4[-0x1582]);
	*(int *)puVar3 = *(int *)puVar3 + 1;
	return;
}

void InitWitch(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	longlong lVar5;
	int iVar6;
	undefined8 uVar7;
	undefined *puVar8;
	undefined8 uVar9;
	undefined8 uVar10;
	undefined4 uVar11;
	undefined *puVar12;
	undefined4 uVar13;
	undefined4 uVar14;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f2120;
	puVar2 = PTR_DAT_100f1878;
	ppuVar4 = &toc;
	uVar7 = 1;
	uVar9 = 6;
	uVar10 = 0x50;
	uVar11 = 0x14;
	uVar13 = 5;
	uVar14 = 10;
	InitTownerInfo((ulonglong) * (uint *)PTR_DAT_100f2120, 0x60, 1, 6, 0x50, 0x14, 5, 10, in_stack_ffffffb8);
	InitQstSnds(*(int *)puVar3);
	lVar5 = LoadFileInMem(ZEXT48(ppuVar4[-0x1583]), (undefined4 *)0x0, uVar7, uVar9, uVar10, uVar11, uVar13,
	    uVar14, in_stack_ffffffb8);
	iVar1 = *(int *)puVar3;
	iVar6 = iVar1 * 0x10c;
	puVar12 = puVar2 + iVar6;
	puVar8 = puVar2 + iVar6;
	*(int *)(puVar12 + 0x104) = (int)lVar5;
	*(undefined4 *)(puVar8 + 0x108) = 0;
	*(undefined4 *)(puVar8 + 0xc0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xc4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 200) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xcc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xd4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xdc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xe4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xec) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xf4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xfc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0x100) = 0x13;
	NewTownerAnim(iVar1, puVar2 + iVar6 + 0xc0, *(undefined4 *)(puVar8 + 0x100), 6);
	strcpy((int)(puVar2 + *(int *)puVar3 * 0x10c + 0xa0), (int)ppuVar4[-0x1584]);
	*(int *)puVar3 = *(int *)puVar3 + 1;
	return;
}

void InitBarmaid(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	longlong lVar5;
	int iVar6;
	undefined8 uVar7;
	undefined *puVar8;
	undefined8 uVar9;
	undefined8 uVar10;
	undefined4 uVar11;
	undefined *puVar12;
	undefined4 uVar13;
	undefined4 uVar14;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f2120;
	puVar2 = PTR_DAT_100f1878;
	ppuVar4 = &toc;
	uVar7 = 1;
	uVar9 = 7;
	uVar10 = 0x2b;
	uVar11 = 0x42;
	uVar13 = 0xffffffff;
	uVar14 = 10;
	InitTownerInfo((ulonglong) * (uint *)PTR_DAT_100f2120, 0x60, 1, 7, 0x2b, 0x42, 0xff, 10, in_stack_ffffffb8);
	InitQstSnds(*(int *)puVar3);
	lVar5 = LoadFileInMem(ZEXT48(ppuVar4[-0x1585]), (undefined4 *)0x0, uVar7, uVar9, uVar10, uVar11, uVar13,
	    uVar14, in_stack_ffffffb8);
	iVar1 = *(int *)puVar3;
	iVar6 = iVar1 * 0x10c;
	puVar12 = puVar2 + iVar6;
	puVar8 = puVar2 + iVar6;
	*(int *)(puVar12 + 0x104) = (int)lVar5;
	*(undefined4 *)(puVar8 + 0x108) = 0;
	*(undefined4 *)(puVar8 + 0xc0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xc4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 200) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xcc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xd4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xdc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xe4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xec) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xf4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xfc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0x100) = 0x12;
	NewTownerAnim(iVar1, puVar2 + iVar6 + 0xc0, *(undefined4 *)(puVar8 + 0x100), 6);
	strcpy((int)(puVar2 + *(int *)puVar3 * 0x10c + 0xa0), (int)ppuVar4[-0x1586]);
	*(int *)puVar3 = *(int *)puVar3 + 1;
	return;
}

void InitBoy(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	longlong lVar5;
	int iVar6;
	undefined8 uVar7;
	undefined *puVar8;
	undefined8 uVar9;
	undefined8 uVar10;
	undefined4 uVar11;
	undefined *puVar12;
	undefined4 uVar13;
	undefined4 uVar14;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f2120;
	puVar2 = PTR_DAT_100f1878;
	ppuVar4 = &toc;
	uVar7 = 1;
	uVar9 = 8;
	uVar10 = 0xb;
	*(undefined4 *)PTR_DAT_100f211c = 1;
	uVar11 = 0x35;
	uVar13 = 0xffffffff;
	uVar14 = 10;
	InitTownerInfo((ulonglong) * (uint *)puVar3, 0x60, 1, 8, 0xb, 0x35, 0xff, 10, in_stack_ffffffb8);
	InitQstSnds(*(int *)puVar3);
	lVar5 = LoadFileInMem(ZEXT48(ppuVar4[-0x1587]), (undefined4 *)0x0, uVar7, uVar9, uVar10, uVar11, uVar13,
	    uVar14, in_stack_ffffffb8);
	iVar1 = *(int *)puVar3;
	iVar6 = iVar1 * 0x10c;
	puVar12 = puVar2 + iVar6;
	puVar8 = puVar2 + iVar6;
	*(int *)(puVar12 + 0x104) = (int)lVar5;
	*(undefined4 *)(puVar8 + 0x108) = 0;
	*(undefined4 *)(puVar8 + 0xc0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xc4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 200) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xcc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xd4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xdc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xe4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xec) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xf4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xfc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0x100) = 0x14;
	NewTownerAnim(iVar1, puVar2 + iVar6 + 0xc0, *(undefined4 *)(puVar8 + 0x100), 6);
	strcpy((int)(puVar2 + *(int *)puVar3 * 0x10c + 0xa0), (int)ppuVar4[-0x1588]);
	*(int *)puVar3 = *(int *)puVar3 + 1;
	return;
}

void InitHealer(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	longlong lVar5;
	int iVar6;
	undefined8 uVar7;
	undefined *puVar8;
	undefined8 uVar9;
	undefined8 uVar10;
	undefined4 uVar11;
	undefined *puVar12;
	undefined4 uVar13;
	undefined4 uVar14;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f2120;
	puVar2 = PTR_DAT_100f1878;
	ppuVar4 = &toc;
	uVar7 = 1;
	uVar9 = 1;
	uVar10 = 0x37;
	uVar11 = 0x4f;
	uVar13 = 1;
	uVar14 = 10;
	InitTownerInfo((ulonglong) * (uint *)PTR_DAT_100f2120, 0x60, 1, 1, 0x37, 0x4f, 1, 10, in_stack_ffffffb8);
	InitQstSnds(*(int *)puVar3);
	lVar5 = LoadFileInMem(ZEXT48(ppuVar4[-0x1589]), (undefined4 *)0x0, uVar7, uVar9, uVar10, uVar11, uVar13,
	    uVar14, in_stack_ffffffb8);
	iVar1 = *(int *)puVar3;
	iVar6 = iVar1 * 0x10c;
	puVar12 = puVar2 + iVar6;
	puVar8 = puVar2 + iVar6;
	*(int *)(puVar12 + 0x104) = (int)lVar5;
	*(undefined4 *)(puVar8 + 0x108) = 0;
	*(undefined4 *)(puVar8 + 0xc0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xc4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 200) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xcc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xd4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xdc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xe4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xec) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xf4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xfc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0x100) = 0x14;
	NewTownerAnim(iVar1, puVar2 + iVar6 + 0xf8, *(undefined4 *)(puVar8 + 0x100), 6);
	strcpy((int)(puVar2 + *(int *)puVar3 * 0x10c + 0xa0), (int)ppuVar4[-0x158a]);
	*(int *)puVar3 = *(int *)puVar3 + 1;
	return;
}

void InitTeller(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	longlong lVar5;
	int iVar6;
	undefined8 uVar7;
	undefined *puVar8;
	undefined8 uVar9;
	undefined8 uVar10;
	undefined4 uVar11;
	undefined *puVar12;
	undefined4 uVar13;
	undefined4 uVar14;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f2120;
	puVar2 = PTR_DAT_100f1878;
	ppuVar4 = &toc;
	uVar7 = 1;
	uVar9 = 4;
	uVar10 = 0x3e;
	uVar11 = 0x47;
	uVar13 = 2;
	uVar14 = 10;
	InitTownerInfo((ulonglong) * (uint *)PTR_DAT_100f2120, 0x60, 1, 4, 0x3e, 0x47, 2, 10, in_stack_ffffffb8);
	InitQstSnds(*(int *)puVar3);
	lVar5 = LoadFileInMem(ZEXT48(ppuVar4[-0x158b]), (undefined4 *)0x0, uVar7, uVar9, uVar10, uVar11, uVar13,
	    uVar14, in_stack_ffffffb8);
	iVar1 = *(int *)puVar3;
	iVar6 = iVar1 * 0x10c;
	puVar12 = puVar2 + iVar6;
	puVar8 = puVar2 + iVar6;
	*(int *)(puVar12 + 0x104) = (int)lVar5;
	*(undefined4 *)(puVar8 + 0x108) = 0;
	*(undefined4 *)(puVar8 + 0xc0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xc4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 200) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xcc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xd4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xdc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xe4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xec) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xf4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xfc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0x100) = 0x19;
	NewTownerAnim(iVar1, puVar2 + iVar6 + 0xc0, *(undefined4 *)(puVar8 + 0x100), 3);
	strcpy((int)(puVar2 + *(int *)puVar3 * 0x10c + 0xa0), (int)ppuVar4[-0x158c]);
	*(int *)puVar3 = *(int *)puVar3 + 1;
	return;
}

void InitDrunk(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	longlong lVar5;
	int iVar6;
	undefined8 uVar7;
	undefined *puVar8;
	undefined8 uVar9;
	undefined8 uVar10;
	undefined4 uVar11;
	undefined *puVar12;
	undefined4 uVar13;
	undefined4 uVar14;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f2120;
	puVar2 = PTR_DAT_100f1878;
	ppuVar4 = &toc;
	uVar7 = 1;
	uVar9 = 5;
	uVar10 = 0x47;
	uVar11 = 0x54;
	uVar13 = 4;
	uVar14 = 10;
	InitTownerInfo((ulonglong) * (uint *)PTR_DAT_100f2120, 0x60, 1, 5, 0x47, 0x54, 4, 10, in_stack_ffffffb8);
	InitQstSnds(*(int *)puVar3);
	lVar5 = LoadFileInMem(ZEXT48(ppuVar4[-0x158d]), (undefined4 *)0x0, uVar7, uVar9, uVar10, uVar11, uVar13,
	    uVar14, in_stack_ffffffb8);
	iVar1 = *(int *)puVar3;
	iVar6 = iVar1 * 0x10c;
	puVar12 = puVar2 + iVar6;
	puVar8 = puVar2 + iVar6;
	*(int *)(puVar12 + 0x104) = (int)lVar5;
	*(undefined4 *)(puVar8 + 0x108) = 0;
	*(undefined4 *)(puVar8 + 0xc0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xc4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 200) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xcc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xd4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xdc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xe4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xec) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xf4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xfc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0x100) = 0x12;
	NewTownerAnim(iVar1, puVar2 + iVar6 + 0xc0, *(undefined4 *)(puVar8 + 0x100), 3);
	strcpy((int)(puVar2 + *(int *)puVar3 * 0x10c + 0xa0), (int)ppuVar4[-0x158e]);
	*(int *)puVar3 = *(int *)puVar3 + 1;
	return;
}

void InitCows(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	int iVar3;
	uint uVar4;
	int iVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	ulonglong uVar13;
	longlong lVar14;
	short *psVar15;
	undefined uVar16;
	undefined8 uVar17;
	undefined uVar19;
	int iVar18;
	undefined uVar20;
	int iVar21;
	undefined uVar22;
	undefined4 uVar23;
	undefined uVar24;
	undefined4 uVar25;
	undefined uVar26;
	ulonglong uVar27;
	int iVar28;
	int *piVar29;
	int *piVar30;
	uint *puVar31;
	ulonglong uVar32;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;

	iVar12 = _DAT_100f3984;
	iVar11 = _DAT_100f3980;
	iVar10 = _DAT_100f397c;
	puVar9 = PTR_DAT_100f2120;
	puVar8 = PTR_DAT_100f1954;
	puVar7 = PTR_DAT_100f1878;
	uVar13 = ZEXT48(&toc);
	uVar32 = ZEXT48(PTR_DAT_100f1878);
	lVar14 = LoadFileInMem((ulonglong)_DAT_100f3994, (undefined4 *)0x0, param_3, param_4, param_5, param_6,
	    param_7, param_8, in_stack_ffffff98);
	iVar2 = (int)uVar13;
	*(undefined4 *)(iVar2 + -0x4a8c) = (int)lVar14;
	iVar28 = 0;
	puVar31 = *(uint **)(iVar2 + -0x5640);
	piVar30 = *(int **)(iVar2 + -0x5644);
	piVar29 = *(int **)(iVar2 + -0x5648);
	do {
		uVar1 = *puVar31;
		uVar27 = (ulonglong)uVar1;
		iVar2 = *piVar30;
		iVar3 = *piVar29;
		uVar17 = 9;
		uVar23 = 0xffffffff;
		uVar25 = 10;
		iVar21 = iVar2;
		InitTownerInfo((ulonglong) * (uint *)puVar9, 0x80, 0, 9, uVar1, iVar2, 0xff, 10, in_stack_ffffff98);
		uVar26 = (undefined)uVar25;
		uVar24 = (undefined)uVar23;
		uVar22 = (undefined)iVar21;
		uVar4 = *(uint *)((int)uVar13 + -0x4a8c);
		lVar14 = uVar32 + (ulonglong) * (uint *)puVar9 * 0x10c;
		iVar5 = (int)lVar14;
		*(uint *)(iVar5 + 0x104) = uVar4;
		*(undefined4 *)(iVar5 + 0x108) = 0;
		SetTownerGPtrs((ulonglong) * (uint *)(iVar5 + 0x104), lVar14 + 0xc0, (ulonglong)uVar4, uVar17, uVar27,
		    iVar21, uVar23, uVar25, in_stack_ffffff98);
		uVar4 = *(uint *)puVar9;
		lVar14 = uVar32 + (ulonglong)uVar4 * 0x10c;
		iVar5 = (int)lVar14;
		*(undefined4 *)(iVar5 + 0x100) = 0xc;
		lVar14 = lVar14 + 0x100;
		uVar20 = (undefined)lVar14;
		uVar23 = *(undefined4 *)lVar14;
		uVar16 = (undefined)uVar23;
		uVar19 = 3;
		NewTownerAnim(uVar4, iVar5 + iVar3 * 8 + 0xc0, uVar23, 3);
		lVar14 = random(0, 0xb, uVar16, uVar19, uVar20, uVar22, uVar24, uVar26, in_stack_ffffff98,
		    in_stack_ffffff9f, in_stack_ffffffab);
		puVar6 = puVar7 + *(int *)puVar9 * 0x10c;
		*(int *)(puVar6 + 0x34) = (int)lVar14 + 1;
		*(undefined4 *)(puVar6 + 0x54) = 1;
		strcpy((int)(puVar6 + 0xa0), iVar12);
		iVar3 = iVar3 * 4;
		iVar5 = *(int *)(iVar11 + iVar3);
		iVar18 = iVar2 + *(int *)(iVar10 + iVar3);
		iVar21 = *(int *)puVar8 + uVar1 * 0xe0;
		iVar3 = iVar18 * 2;
		if (*(short *)(iVar21 + iVar3) == 0) {
			*(short *)(iVar21 + iVar3) = -((short)*(undefined4 *)puVar9 + 1);
		}
		iVar3 = (uVar1 + iVar5) * 0xe0;
		psVar15 = (short *)(*(int *)puVar8 + iVar3 + iVar2 * 2);
		if (*psVar15 == 0) {
			*psVar15 = -((short)*(undefined4 *)puVar9 + 1);
		}
		psVar15 = (short *)(*(int *)puVar8 + iVar3 + iVar18 * 2);
		if (*psVar15 == 0) {
			*psVar15 = -((short)*(undefined4 *)puVar9 + 1);
		}
		iVar28 = iVar28 + 1;
		piVar30 = piVar30 + 1;
		*(int *)puVar9 = *(int *)puVar9 + 1;
		piVar29 = piVar29 + 1;
		puVar31 = puVar31 + 1;
	} while (iVar28 < 3);
	return;
}

void InitTowners(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	char cVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	undefined uVar6;
	undefined8 uVar5;
	ulonglong uVar7;
	undefined7 uVar8;
	undefined uVar9;
	undefined7 uVar10;
	undefined uVar11;
	undefined7 uVar12;
	undefined uVar13;
	undefined4 in_stack_ffffffc8;

	puVar3 = PTR_DAT_100f2120;
	puVar2 = PTR_DAT_100f211c;
	uVar12 = (undefined7)((ulonglong)param_5 >> 8);
	uVar13 = (undefined)param_5;
	uVar10 = (undefined7)((ulonglong)param_4 >> 8);
	uVar11 = (undefined)param_4;
	uVar8 = (undefined7)((ulonglong)param_3 >> 8);
	uVar9 = (undefined)param_3;
	ppuVar4 = &toc;
	uVar7 = ZEXT48(PTR_DAT_100f2120);
	*(undefined4 *)PTR_DAT_100f2120 = 0;
	*(undefined4 *)puVar2 = 0;
	uVar6 = InitSmith((char)puVar2, (char)puVar3, uVar9, uVar11, uVar13, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffffc8);
	InitHealer(uVar6, (char)uVar7, uVar9, uVar11, uVar13, (char)param_6, (char)param_7, (char)param_8,
	    in_stack_ffffffc8);
	uVar6 = SUB41(ppuVar4[-0x1d81], 0);
	cVar1 = ppuVar4[-0x1d81][0x92];
	if ((cVar1 != '\0') && (cVar1 != '\x03')) {
		uVar6 = InitTownDead(uVar6, (char)uVar7, uVar9, uVar11, uVar13, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffc8);
	}
	uVar6 = InitBarOwner(uVar6, (char)uVar7, uVar9, uVar11, uVar13, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffffc8);
	uVar6 = InitTeller(uVar6, (char)uVar7, uVar9, uVar11, uVar13, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffffc8);
	uVar6 = InitDrunk(uVar6, (char)uVar7, uVar9, uVar11, uVar13, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffffc8);
	uVar6 = InitWitch(uVar6, (char)uVar7, uVar9, uVar11, uVar13, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffffc8);
	uVar6 = InitBarmaid(uVar6, (char)uVar7, uVar9, uVar11, uVar13, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffffc8);
	uVar5 = InitBoy(uVar6, (char)uVar7, uVar9, uVar11, uVar13, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffffc8);
	InitCows(uVar5, uVar7, CONCAT71(uVar8, uVar9), CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13),
	    param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void FreeTownerGFX(undefined param_1, char param_2, char param_3, char param_4, char param_5, char param_6, char param_7, char param_8, undefined4 param_9)

{
	ulonglong uVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	int iVar9;
	undefined *puVar10;
	undefined4 in_stack_ffffffb8;

	lVar8 = (longlong)param_8;
	lVar7 = (longlong)param_7;
	lVar6 = (longlong)param_6;
	lVar5 = (longlong)param_5;
	lVar4 = (longlong)param_4;
	lVar3 = (longlong)param_3;
	lVar2 = (longlong)param_2;
	uVar1 = ZEXT48(&toc);
	iVar9 = 0;
	puVar10 = PTR_DAT_100f1878;
	do {
		if (*(int *)(puVar10 + 0x104) == *(int *)((int)uVar1 + -0x4a8c)) {
			*(undefined4 *)(puVar10 + 0x104) = 0;
		} else {
			if (*(int *)(puVar10 + 0x104) != 0) {
				mem_free_dbg((int **)(puVar10 + 0x104), (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5,
				    (char)lVar6, (char)lVar7, (char)lVar8, in_stack_ffffffb8);
			}
		}
		iVar9 = iVar9 + 1;
		puVar10 = puVar10 + 0x10c;
	} while (iVar9 < 0x10);
	mem_free_dbg((int **)((int)uVar1 + -0x4a8c), (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5,
	    (char)lVar6, (char)lVar7, (char)lVar8, in_stack_ffffffb8);
	return;
}

void TownCtrlMsg(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int *piVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	longlong lVar4;
	longlong lVar5;
	undefined8 uVar6;
	ulonglong uVar7;
	ulonglong uVar8;
	undefined7 uVar9;
	undefined uVar10;
	undefined7 uVar11;
	undefined uVar12;
	undefined *puVar13;
	undefined4 in_stack_ffffffb8;

	uVar11 = (undefined7)((ulonglong)param_5 >> 8);
	uVar12 = (undefined)param_5;
	uVar9 = (undefined7)((ulonglong)param_4 >> 8);
	uVar10 = (undefined)param_4;
	ppuVar3 = &toc;
	uVar8 = param_1 * 0x10c;
	piVar1 = (int *)(PTR_DAT_100f1878 + (int)uVar8 + 0x50);
	if (*piVar1 != 0) {
		puVar2 = PTR_DAT_100f1878 + (int)uVar8;
		puVar13 = PTR_DAT_100f1828 + *(int *)(puVar2 + 0x90) * 0x55ec;
		lVar4 = abs((ulonglong) * (uint *)(puVar2 + 8) - (ulonglong) * (uint *)(puVar13 + 0x38));
		uVar7 = (ulonglong) * (uint *)(puVar13 + 0x3c);
		lVar5 = abs((ulonglong) * (uint *)(puVar2 + 0xc) - uVar7);
		if ((1 < (int)lVar4) || (1 < (int)lVar5)) {
			*piVar1 = 0;
		}
		if (*piVar1 == 0) {
			puVar2 = ppuVar3[-0x1dcc];
			*puVar2 = 0;
			uVar6 = sfx_stop((char)puVar2, (char)uVar7, (char)uVar8, uVar10, uVar12, (char)param_6,
			    (char)param_7, (char)param_8, in_stack_ffffffb8);
			music_stop2(uVar6, uVar7, uVar8, CONCAT71(uVar9, uVar10), CONCAT71(uVar11, uVar12), param_6, param_7,
			    param_8, in_stack_ffffffb8);
		}
	}
	return;
}

void TownBlackSmith(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	longlong lVar1;
	undefined4 in_stack_ffffffb8;

	lVar1 = GetActiveTowner(0);
	TownCtrlMsg(lVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	return;
}

void TownBarOwner(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	longlong lVar1;
	undefined4 in_stack_ffffffb8;

	lVar1 = GetActiveTowner(3);
	TownCtrlMsg(lVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	return;
}

void TownDead(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	longlong lVar6;
	undefined4 in_stack_ffffffb8;

	puVar4 = PTR_DAT_100f19cc;
	puVar3 = PTR_DAT_100f1878;
	ppuVar5 = &toc;
	lVar6 = GetActiveTowner(2);
	TownCtrlMsg(lVar6, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	if (*ppuVar5[-0x1dcc] == '\0') {
		if ((puVar4[0x92] == '\x02') && (*(int *)(puVar4 + 0xa4) == 0)) {
			return;
		}
		if (puVar4[0x92] != '\x01') {
			iVar2 = (int)lVar6 * 0x10c;
			puVar1 = ppuVar5[-0x1596];
			*(undefined4 *)(puVar3 + iVar2 + 0x28) = 1000;
			*(undefined4 *)(puVar3 + iVar2 + 0x34) = 1;
			strcpy((int)(puVar3 + iVar2 + 0xa0), (int)puVar1);
		}
	}
	if (puVar4[0x92] != '\x01') {
		*(undefined4 *)(puVar3 + (int)lVar6 * 0x10c + 0x2c) = 0;
	}
	return;
}

void TownHealer(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	longlong lVar1;
	undefined4 in_stack_ffffffc8;

	lVar1 = GetActiveTowner(1);
	TownCtrlMsg(lVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void TownStory(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	longlong lVar1;
	undefined4 in_stack_ffffffc8;

	lVar1 = GetActiveTowner(4);
	TownCtrlMsg(lVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void TownDrunk(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	longlong lVar1;
	undefined4 in_stack_ffffffc8;

	lVar1 = GetActiveTowner(5);
	TownCtrlMsg(lVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void TownBoy(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	longlong lVar1;
	undefined4 in_stack_ffffffc8;

	lVar1 = GetActiveTowner(8);
	TownCtrlMsg(lVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void TownWitch(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	longlong lVar1;
	undefined4 in_stack_ffffffc8;

	lVar1 = GetActiveTowner(6);
	TownCtrlMsg(lVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void TownBarMaid(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	longlong lVar1;
	undefined4 in_stack_ffffffc8;

	lVar1 = GetActiveTowner(7);
	TownCtrlMsg(lVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void TownCow(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	longlong lVar1;
	undefined4 in_stack_ffffffc8;

	lVar1 = GetActiveTowner(9);
	TownCtrlMsg(lVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void ProcessTowners(undefined param_1, undefined param_2, char param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	byte bVar1;
	undefined *puVar2;
	ulonglong uVar3;
	int iVar4;
	undefined *puVar5;

	puVar2 = PTR_DAT_100f3974;
	uVar3 = SEXT18(param_3);
	iVar4 = 0;
	puVar5 = PTR_DAT_100f1878;
	do {
		if (*(uint *)(puVar5 + 4) < 10) {
			// WARNING: Could not recover jumptable at 0x100b4b58. Too many branches
			// WARNING: Treating indirect jump as call
			(**(code **)(PTR_PTR_LAB_100f3970 + *(uint *)(puVar5 + 4) * 4))(*(code **)(PTR_PTR_LAB_100f3970 + *(uint *)(puVar5 + 4) * 4), param_2, uVar3, param_4,
			    param_5, param_6, param_7, param_8);
			return;
		}
		*(int *)(puVar5 + 0x2c) = *(int *)(puVar5 + 0x2c) + 1;
		if (*(int *)(puVar5 + 0x28) <= *(int *)(puVar5 + 0x2c)) {
			param_2 = 0;
			*(undefined4 *)(puVar5 + 0x2c) = 0;
			bVar1 = puVar5[0x3c];
			uVar3 = (ulonglong)bVar1;
			if ((char)bVar1 < '\0') {
				*(int *)(puVar5 + 0x34) = *(int *)(puVar5 + 0x34) + 1;
				if (*(int *)(puVar5 + 0x30) < *(int *)(puVar5 + 0x34)) {
					*(undefined4 *)(puVar5 + 0x34) = 1;
				}
			} else {
				*(int *)(puVar5 + 0x38) = *(int *)(puVar5 + 0x38) + 1;
				if ((puVar2 + (int)(char)bVar1 * 0x94)[*(int *)(puVar5 + 0x38)] == -1) {
					*(undefined4 *)(puVar5 + 0x38) = 0;
				}
				*(int *)(puVar5 + 0x34) = (int)(char)(puVar2 + (int)(char)bVar1 * 0x94)[*(int *)(puVar5 + 0x38)];
			}
		}
		iVar4 = iVar4 + 1;
		puVar5 = puVar5 + 0x10c;
	} while (iVar4 < 0x10);
	return;
}

undefined *PlrHasItem(int param_1, int param_2, int *param_3)

{
	int iVar1;
	undefined *puVar2;

	puVar2 = PTR_DAT_100f1828 + param_1 * 0x55ec;
	*param_3 = 0;
	while (true) {
		if (*(int *)(puVar2 + 0x4828) <= *param_3) {
			return (undefined *)0x0;
		}
		iVar1 = *param_3 * 0x170;
		if (param_2 == *(int *)(puVar2 + iVar1 + 0x1010))
			break;
		*param_3 = *param_3 + 1;
	}
	return puVar2 + iVar1 + 0xea8;
}

void CowSFX(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined **ppuVar2;
	ulonglong uVar3;
	undefined *puVar4;
	undefined7 uVar5;
	undefined uVar6;
	undefined7 uVar7;
	undefined uVar8;
	undefined *puVar9;
	undefined4 in_stack_ffffffb8;

	puVar4 = PTR_DAT_100f1828;
	uVar7 = (undefined7)((ulonglong)param_5 >> 8);
	uVar8 = (undefined)param_5;
	uVar5 = (undefined7)((ulonglong)param_4 >> 8);
	uVar6 = (undefined)param_4;
	ppuVar2 = &toc;
	if (DAT_100f4534 == '\0') {
		_DAT_100f4538 = -1;
		DAT_100f4534 = '\x01';
	}
	if ((_DAT_100f4538 == -1) || (ppuVar2 = &toc, uVar3 = effect_is_playing(_DAT_100f4538, (undefined)param_2, (undefined)param_3, uVar6, uVar8, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffb8), (int)uVar3 == 0)) {
		ppuVar2[-0x12a4] = ppuVar2[-0x12a4] + 1;
		if (ppuVar2[-0x12a4] < (undefined *)0x8) {
			if (ppuVar2[-0x12a4] == (undefined *)0x4) {
				ppuVar2[-0x12a6] = (undefined *)0xed;
			} else {
				ppuVar2[-0x12a6] = (undefined *)0xec;
			}
		} else {
			puVar9 = puVar4 + param_1 * 0x55ec;
			PlaySfxLoc(0xec, (ulonglong) * (uint *)(puVar9 + 0x38), (ulonglong) * (uint *)(puVar9 + 0x3c) + 5,
			    CONCAT71(uVar5, uVar6), CONCAT71(uVar7, uVar8), param_6, param_7, param_8,
			    in_stack_ffffffb8);
			ppuVar2[-0x12a4] = (undefined *)0x4;
			puVar1 = ppuVar2[-0x12a5] + 1;
			ppuVar2[-0x12a6] = *(undefined **)(ppuVar2[-0x1599] + (int)ppuVar2[-0x12a5] * 0xc + (int)(char)puVar9[0x15c] * 4);
			ppuVar2[-0x12a5] = puVar1;
			if (2 < (int)puVar1) {
				ppuVar2[-0x12a5] = (undefined *)0x0;
			}
		}
		puVar4 = puVar4 + param_1 * 0x55ec;
		PlaySfxLoc(ZEXT48(ppuVar2[-0x12a6]), (ulonglong) * (uint *)(puVar4 + 0x38),
		    (ulonglong) * (uint *)(puVar4 + 0x3c), CONCAT71(uVar5, uVar6), CONCAT71(uVar7, uVar8),
		    param_6, param_7, param_8, in_stack_ffffffb8);
	}
	return;
}

void TownerTalk(int param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9, undefined param_10, undefined4 param_11)

{
	ulonglong uVar1;
	undefined4 in_stack_ffffffc8;

	uVar1 = ZEXT48(PTR_DAT_100f2114);
	_DAT_100f4540 = 0;
	_DAT_100f453c = 0;
	*(undefined4 *)PTR_DAT_100f2114 = 1;
	InitQTextMsg(param_1, uVar1, 0, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void TalkToTowner(longlong param_1, longlong param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	char cVar1;
	int *piVar2;
	uint *puVar3;
	uint *puVar4;
	int *piVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined *puVar12;
	undefined *puVar13;
	undefined **ppuVar14;
	longlong lVar15;
	longlong lVar16;
	int iVar18;
	undefined *puVar19;
	ulonglong uVar17;
	undefined *puVar20;
	ulonglong uVar21;
	undefined uVar22;
	undefined uVar23;
	undefined uVar24;
	undefined uVar25;
	undefined uVar26;
	undefined uVar27;
	undefined uVar28;
	longlong lVar29;
	char *pcVar30;
	ulonglong uVar31;
	ulonglong uVar32;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined in_stack_ffffff9b;
	undefined4 in_stack_ffffff9c;
	uint local_3c;

	puVar13 = PTR_DAT_100f2114;
	puVar12 = PTR_DAT_100f206c;
	puVar11 = PTR_DAT_100f19cc;
	puVar10 = PTR_DAT_100f18a0;
	puVar9 = PTR_DAT_100f1878;
	puVar20 = PTR_DAT_100f1828;
	puVar19 = PTR_DAT_100f17e0;
	uVar22 = (undefined)param_2;
	uVar17 = ZEXT48(register0x0000000c);
	ppuVar14 = &toc;
	uVar31 = ZEXT48(PTR_DAT_100f19cc);
	uVar32 = ZEXT48(PTR_DAT_100f1878);
	random(6, 3, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b);
	random(6, 4, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b);
	random(6, 5, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b);
	iVar8 = (int)param_1;
	iVar7 = iVar8 * 0x55ec;
	lVar29 = param_2 * 0x10c;
	iVar6 = (int)lVar29;
	puVar3 = (uint *)(puVar9 + iVar6 + 8);
	lVar15 = abs((ulonglong) * (uint *)(puVar20 + iVar7 + 0x38) - (ulonglong)*puVar3);
	puVar4 = (uint *)(puVar9 + iVar6 + 0xc);
	uVar21 = (ulonglong)*puVar4;
	lVar16 = abs((ulonglong) * (uint *)(puVar20 + iVar7 + 0x3c) - uVar21);
	if (1 < (int)lVar15) {
		return;
	}
	if (1 < (int)lVar16) {
		return;
	}
	if (*puVar10 != '\0') {
		return;
	}
	piVar2 = (int *)ppuVar14[-0x1dd1];
	piVar5 = (int *)(puVar9 + iVar6 + 0x58);
	*piVar5 = 0;
	if ((0xb < *piVar2) && (iVar18 = DropItemBeforeTrig(), iVar18 == 0)) {
		return;
	}
	lVar15 = GetActiveTowner(3);
	iVar18 = (int)param_2;
	if (iVar18 == (int)lVar15) {
		if ((puVar20[iVar7 + 0x1f0] == '\0') && (*piVar5 == 0)) {
			iVar6 = (int)(uVar32 + lVar29);
			*(undefined4 *)(iVar6 + 0x50) = 0x96;
			*(int *)(iVar6 + 0x90) = iVar8;
			InitQTextMsg(0x102, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffff88);
			*piVar5 = 1;
		}
		if (((puVar20 + iVar7)[0x1f2] != '\0') || ((puVar20 + iVar7)[500] != '\0')) {
			pcVar30 = puVar11 + 0x122;
			if (puVar11[0x122] != '\0') {
				if (((puVar11[0x122] != '\0') && (puVar11[0x130] == '\0')) && (*piVar5 == 0)) {
					puVar11[0x130] = 1;
					*(undefined4 *)(puVar11 + 0x134) = 1;
					if (*pcVar30 == '\x01') {
						*pcVar30 = '\x02';
						puVar11[0x12f] = 1;
					}
					iVar6 = (int)(uVar32 + lVar29);
					*(undefined4 *)(iVar6 + 0x50) = 0x96;
					*(int *)(iVar6 + 0x90) = iVar8;
					InitQTextMsg(1, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
					    in_stack_ffffff88);
					*piVar5 = 1;
					NetSendCmdQuest(1, 0xc);
				}
				if (((*pcVar30 == '\x03') && (puVar11[0x130] == '\x01')) && (*piVar5 == 0)) {
					param_3 = 2;
					puVar11[0x130] = 2;
					puVar11[0x12f] = 2;
					iVar6 = (int)(uVar32 + lVar29);
					*(undefined4 *)(iVar6 + 0x50) = 0x96;
					*(int *)(iVar6 + 0x90) = iVar8;
					InitQTextMsg(3, uVar32 + lVar29, 2, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff88);
					*piVar5 = 1;
					NetSendCmdQuest(1, 0xc);
				}
			}
		}
		if ((*puVar19 == '\x01') && (puVar20[iVar7 + 499] != '\0')) {
			pcVar30 = puVar11 + 0xaa;
			if (puVar11[0xaa] != '\0') {
				if ((((byte)(puVar11[0xaa] - 1) < 2) && (puVar11[0xb8] == '\0')) && (*piVar5 == 0)) {
					puVar11[0xb8] = 1;
					if (*pcVar30 == '\x01') {
						puVar11[0xb7] = 1;
						*pcVar30 = '\x02';
					}
					*(undefined4 *)(puVar11 + 0xbc) = 1;
					iVar7 = (int)(uVar32 + lVar29);
					*(undefined4 *)(iVar7 + 0x50) = 0x96;
					*(int *)(iVar7 + 0x90) = iVar8;
					InitQTextMsg(0xc, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
					    in_stack_ffffff88);
					*piVar5 = 1;
				}
				if (puVar11[0xb8] == '\x01') {
					param_3 = uVar17 - 0x3c;
					puVar19 = PlrHasItem(iVar8, 0xc, (int *)param_3);
					if ((puVar19 != (undefined *)0x0) && (*piVar5 == 0)) {
						*pcVar30 = '\x03';
						puVar11[0xb7] = 3;
						RemoveInvItem(param_1, (ulonglong)local_3c, (char)param_3, (char)param_4, (char)param_5,
						    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff88);
						param_3 = (ulonglong)*puVar4 + 1;
						CreateItem(5, *puVar3, (int)param_3, (char)param_4, (char)param_5, (char)param_6,
						    (char)param_7, (char)param_8, in_stack_ffffff88);
						iVar7 = (int)(uVar32 + lVar29);
						*(undefined4 *)(iVar7 + 0x50) = 0x96;
						*(int *)(iVar7 + 0x90) = iVar8;
						InitQTextMsg(0xd, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
						    in_stack_ffffff88);
						*piVar5 = 1;
					}
				}
			}
		}
		uVar28 = (undefined)param_8;
		uVar27 = (undefined)param_7;
		uVar26 = (undefined)param_6;
		uVar25 = (undefined)param_5;
		uVar24 = (undefined)param_4;
		uVar23 = (undefined)param_3;
		if (*puVar10 != '\0') {
			return;
		}
		TownerTalk(0xa0, iVar18, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff88,
		    in_stack_ffffff8f, in_stack_ffffff9c);
		if (*(int *)puVar13 == 0) {
			return;
		}
		StartStore('\x15', uVar22, uVar23, uVar24, uVar25, uVar26, uVar27, uVar28, in_stack_ffffff88);
		return;
	}
	lVar15 = GetActiveTowner(2);
	uVar27 = (undefined)param_8;
	uVar26 = (undefined)param_7;
	uVar25 = (undefined)param_6;
	uVar24 = (undefined)param_5;
	uVar23 = (undefined)param_3;
	if (iVar18 == (int)lVar15) {
		lVar15 = uVar31 + 0x92;
		uVar22 = (undefined)lVar15;
		cVar1 = puVar11[0x92];
		if (cVar1 == '\x02') {
			uVar28 = (undefined)(uVar31 + 0x9f);
			if (puVar11[0x9f] == '\x01') {
				*(undefined4 *)(puVar9 + iVar6 + 0x50) = 0x96;
				*(int *)(puVar9 + iVar6 + 0x90) = iVar8;
				*(undefined *)(uVar31 + 0x9f) = 1;
				pcVar30 = puVar20 + iVar7 + 0x15c;
				if ((*pcVar30 == '\0') && (uVar17 = effect_is_playing(0x2d1, uVar28, uVar23, uVar22, uVar24, uVar25, uVar26, uVar27, in_stack_ffffff88), (int)uVar17 == 0)) {
					PlaySFX(0x2d1);
				} else {
					if ((*pcVar30 == '\x01') && (uVar17 = effect_is_playing(0x26a, uVar28, uVar23, uVar22, uVar24, uVar25, uVar26, uVar27, in_stack_ffffff88), (int)uVar17 == 0)) {
						PlaySFX(0x26a);
					} else {
						if ((*pcVar30 == '\x02') && (uVar17 = effect_is_playing(0x203, uVar28, uVar23, uVar22, uVar24, uVar25, uVar26, uVar27, in_stack_ffffff88), (int)uVar17 == 0)) {
							PlaySFX(0x203);
						}
					}
				}
				*piVar5 = 1;
				return;
			}
		}
		if ((cVar1 == '\x03') && (puVar11[0x9f] == '\x01')) {
			puVar11[0x9f] = 1;
			*(undefined4 *)(puVar9 + iVar6 + 0x50) = 0x96;
			*(int *)(puVar9 + iVar6 + 0x90) = iVar8;
			*piVar5 = 1;
			return;
		}
		if (cVar1 != '\x01') {
			if (cVar1 != '\x02') {
				return;
			}
			if (puVar11[0x9f] != '\0') {
				return;
			}
		}
		*(undefined *)lVar15 = 2;
		*(undefined4 *)(puVar11 + 0xa4) = 1;
		puVar11[0x9e] = 0x3f;
		puVar11[0x9f] = 1;
		iVar7 = (int)(uVar32 + lVar29);
		*(undefined4 *)(iVar7 + 0x50) = 0x32;
		*(int *)(iVar7 + 0x90) = iVar8;
		*(undefined4 *)(iVar7 + 0x94) = 3;
		InitQTextMsg(0x3f, uVar32 + lVar29, 0x32, lVar15, param_5, param_6, param_7, param_8, in_stack_ffffff88);
		*piVar5 = 1;
		NetSendCmdQuest(1, 6);
		return;
	}
	lVar15 = GetActiveTowner(0);
	if (iVar18 == (int)lVar15) {
		if (*puVar19 == '\x01') {
			if (puVar20[iVar7 + 500] != '\0') {
				pcVar30 = puVar11 + 2;
				if (puVar11[2] != '\0') {
					if ((puVar11[2] != '\0') && (puVar11[0x10] == '\0')) {
						puVar11[0x10] = 1;
						*(undefined4 *)(puVar11 + 0x14) = 1;
						if (*pcVar30 == '\x01') {
							*pcVar30 = '\x02';
							puVar11[0xf] = 1;
						}
						iVar6 = (int)(uVar32 + lVar29);
						*(undefined4 *)(iVar6 + 0x50) = 0x96;
						*(int *)(iVar6 + 0x90) = iVar8;
						InitQTextMsg(0x73, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
						    in_stack_ffffff88);
						*piVar5 = 1;
					}
					if (puVar11[0x10] == '\x01') {
						param_3 = uVar17 - 0x3c;
						puVar19 = PlrHasItem(iVar8, 9, (int *)param_3);
						if ((puVar19 != (undefined *)0x0) && (*piVar5 == 0)) {
							*pcVar30 = '\x03';
							puVar11[0x10] = 2;
							puVar11[0xf] = 2;
							RemoveInvItem(param_1, (ulonglong)local_3c, (char)param_3, (char)param_4, (char)param_5,
							    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff88);
							param_3 = (ulonglong)*puVar4 + 1;
							CreateItem(2, *puVar3, (int)param_3, (char)param_4, (char)param_5, (char)param_6,
							    (char)param_7, (char)param_8, in_stack_ffffff88);
							iVar6 = (int)(uVar32 + lVar29);
							*(undefined4 *)(iVar6 + 0x50) = 0x96;
							*(int *)(iVar6 + 0x90) = iVar8;
							InitQTextMsg(0x75, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
							    in_stack_ffffff88);
							*piVar5 = 1;
						}
					}
				}
			}
			if (puVar20[iVar7 + 0x1f9] != '\0') {
				pcVar30 = puVar11 + 0xf2;
				if (puVar11[0xf2] != '\0') {
					if (((((byte)(puVar11[0xf2] - 1) < 2) && (puVar11[0x100] == '\0')) && (*piVar5 == 0)) && ((puVar11[0x10] == '\x02' || ((puVar11[2] == '\x02' && (puVar11[0x10] == '\x01')))))) {
						puVar11[0x100] = 1;
						*(undefined4 *)(puVar11 + 0x104) = 1;
						if (*pcVar30 == '\x01') {
							*pcVar30 = '\x02';
							puVar11[0xff] = 1;
						}
						iVar7 = (int)(uVar32 + lVar29);
						*(undefined4 *)(iVar7 + 0x50) = 0x96;
						*(int *)(iVar7 + 0x90) = iVar8;
						InitQTextMsg(0x58, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
						    in_stack_ffffff88);
						*piVar5 = 1;
					}
					if (puVar11[0x100] == '\x01') {
						param_3 = uVar17 - 0x3c;
						puVar19 = PlrHasItem(iVar8, 0x10, (int *)param_3);
						if ((puVar19 != (undefined *)0x0) && (*piVar5 == 0)) {
							*pcVar30 = '\x03';
							puVar11[0x100] = 2;
							puVar11[0xff] = 2;
							RemoveInvItem(param_1, (ulonglong)local_3c, (char)param_3, (char)param_4, (char)param_5,
							    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff88);
							param_3 = (ulonglong)*puVar4 + 1;
							CreateItem(8, *puVar3, (int)param_3, (char)param_4, (char)param_5, (char)param_6,
							    (char)param_7, (char)param_8, in_stack_ffffff88);
							iVar7 = (int)(uVar32 + lVar29);
							*(undefined4 *)(iVar7 + 0x50) = 0x96;
							*(int *)(iVar7 + 0x90) = iVar8;
							InitQTextMsg(0x5a, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
							    in_stack_ffffff88);
							*piVar5 = 1;
						}
					}
				}
			}
		}
		uVar28 = (undefined)param_8;
		uVar27 = (undefined)param_7;
		uVar26 = (undefined)param_6;
		uVar25 = (undefined)param_5;
		uVar24 = (undefined)param_4;
		uVar23 = (undefined)param_3;
		if (*puVar10 != '\0') {
			return;
		}
		TownerTalk(0xbc, iVar18, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff88,
		    in_stack_ffffff8f, in_stack_ffffff9c);
		if (*(int *)puVar13 == 0) {
			return;
		}
		StartStore('\x01', uVar22, uVar23, uVar24, uVar25, uVar26, uVar27, uVar28, in_stack_ffffff88);
		return;
	}
	lVar15 = GetActiveTowner(6);
	if (iVar18 != (int)lVar15) {
		lVar15 = GetActiveTowner(7);
		uVar28 = (undefined)param_8;
		uVar27 = (undefined)param_7;
		uVar26 = (undefined)param_6;
		uVar25 = (undefined)param_5;
		uVar24 = (undefined)param_4;
		uVar23 = (undefined)param_3;
		if (iVar18 == (int)lVar15) {
			if (*puVar10 != '\0') {
				return;
			}
			TownerTalk(0xb3, iVar18, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff88,
			    in_stack_ffffff8f, in_stack_ffffff9c);
			if (*(int *)puVar13 == 0) {
				return;
			}
			StartStore('\x17', uVar22, uVar23, uVar24, uVar25, uVar26, uVar27, uVar28, in_stack_ffffff88);
			return;
		}
		lVar15 = GetActiveTowner(5);
		uVar28 = (undefined)param_8;
		uVar27 = (undefined)param_7;
		uVar26 = (undefined)param_6;
		uVar25 = (undefined)param_5;
		uVar24 = (undefined)param_4;
		uVar23 = (undefined)param_3;
		if (iVar18 == (int)lVar15) {
			if (*puVar10 != '\0') {
				return;
			}
			TownerTalk(200, iVar18, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff88,
			    in_stack_ffffff8f, in_stack_ffffff9c);
			if (*(int *)puVar13 == 0) {
				return;
			}
			StartStore('\x16', uVar22, uVar23, uVar24, uVar25, uVar26, uVar27, uVar28, in_stack_ffffff88);
			return;
		}
		lVar15 = GetActiveTowner(1);
		if (iVar18 == (int)lVar15) {
			if (*puVar19 == '\x01') {
				if ((puVar20[iVar7 + 0x1f1] != '\0') && (*piVar5 == 0)) {
					if (puVar11[0x13a] == '\x01') {
						puVar11[0x13a] = 2;
						param_3 = 0x27;
						*(undefined4 *)(puVar11 + 0x14c) = 1;
						puVar11[0x146] = 0x27;
						puVar11[0x147] = 1;
						iVar7 = (int)(uVar32 + lVar29);
						*(undefined4 *)(iVar7 + 0x50) = 0x96;
						*(int *)(iVar7 + 0x90) = iVar8;
						InitQTextMsg(0x27, uVar32 + lVar29, 0x27, param_4, param_5, param_6, param_7, param_8,
						    in_stack_ffffff88);
						*piVar5 = 1;
					} else {
						if ((puVar11[0x13a] == '\x03') && (puVar11[0x147] != '\x02')) {
							puVar11[0x147] = 2;
							iVar7 = (int)(uVar32 + lVar29);
							*(undefined4 *)(iVar7 + 0x50) = 0x96;
							*(int *)(iVar7 + 0x90) = iVar8;
							InitQTextMsg(0x29, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
							    in_stack_ffffff88);
							param_3 = (ulonglong)*puVar4 + 1;
							CreateItem(4, *puVar3, (int)param_3, (char)param_4, (char)param_5, (char)param_6,
							    (char)param_7, (char)param_8, in_stack_ffffff88);
							*piVar5 = 1;
						}
					}
				}
				if ((puVar11[0x1a] == '\x02') && (puVar11[0x26] == -0x7e)) {
					param_3 = uVar17 - 0x3c;
					puVar19 = PlrHasItem(iVar8, 0x12, (int *)param_3);
					if (puVar19 != (undefined *)0x0) {
						RemoveInvItem(param_1, (ulonglong)local_3c, (char)param_3, (char)param_4, (char)param_5,
						    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff88);
						uVar17 = (ulonglong)*puVar3;
						param_4 = 0;
						param_3 = (ulonglong)*puVar4 + 1;
						param_5 = 0;
						SpawnQuestItem(0x14, *puVar3, (int)param_3, 0, 0, (char)param_6, (char)param_7, (char)param_8,
						    in_stack_ffffff88);
						InitQTextMsg(0x7c, uVar17, param_3, param_4, param_5, param_6, param_7, param_8,
						    in_stack_ffffff88);
						puVar11[0x27] = 7;
						*(undefined4 *)(puVar12 + 0x44) = 0xffffffff;
					}
				}
			}
			uVar28 = (undefined)param_8;
			uVar27 = (undefined)param_7;
			uVar26 = (undefined)param_6;
			uVar25 = (undefined)param_5;
			uVar24 = (undefined)param_4;
			uVar23 = (undefined)param_3;
			if (*puVar10 != '\0') {
				return;
			}
			TownerTalk(0xa9, iVar18, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff88,
			    in_stack_ffffff8f, in_stack_ffffff9c);
			if (*(int *)puVar13 == 0) {
				return;
			}
			StartStore('\x0e', uVar22, uVar23, uVar24, uVar25, uVar26, uVar27, uVar28, in_stack_ffffff88);
			return;
		}
		lVar15 = GetActiveTowner(8);
		uVar28 = (undefined)param_8;
		uVar27 = (undefined)param_7;
		uVar26 = (undefined)param_6;
		uVar25 = (undefined)param_5;
		uVar24 = (undefined)param_4;
		uVar23 = (undefined)param_3;
		if (iVar18 == (int)lVar15) {
			if (*puVar10 != '\0') {
				return;
			}
			TownerTalk(0xe0, iVar18, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff88,
			    in_stack_ffffff8f, in_stack_ffffff9c);
			if (*(int *)puVar13 == 0) {
				return;
			}
			StartStore('\f', uVar22, uVar23, uVar24, uVar25, uVar26, uVar27, uVar28, in_stack_ffffff88);
			return;
		}
		lVar15 = GetActiveTowner(4);
		if (iVar18 != (int)lVar15) {
			if (*(int *)(puVar9 + iVar6 + 4) != 9) {
				return;
			}
			if (*puVar10 != '\0') {
				return;
			}
			CowSFX(iVar8, uVar21, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff88);
			return;
		}
		if (*puVar19 == '\x01') {
			if (puVar11[0x16a] == '\x01') {
				param_3 = uVar17 - 0x3c;
				puVar20 = PlrHasItem(iVar8, 0x21, (int *)param_3);
				if (puVar20 != (undefined *)0x0) {
					RemoveInvItem(param_1, (ulonglong)local_3c, (char)param_3, (char)param_4, (char)param_5,
					    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff88);
					puVar11[0x177] = 2;
					iVar7 = (int)(uVar32 + lVar29);
					*(undefined4 *)(iVar7 + 0x50) = 0x96;
					*(int *)(iVar7 + 0x90) = iVar8;
					InitQTextMsg(0x17, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
					    in_stack_ffffff88);
					*piVar5 = 1;
					puVar11[0x16a] = '\x02';
					*(undefined4 *)(puVar11 + 0x17c) = 1;
					goto LAB_100b5a9c;
				}
			}
			if ((puVar11[0x16a] == '\x03') && (puVar11[0x177] == '\a')) {
				puVar11[0x177] = 8;
				iVar7 = (int)(uVar32 + lVar29);
				*(undefined4 *)(iVar7 + 0x50) = 0x96;
				*(int *)(iVar7 + 0x90) = iVar8;
				InitQTextMsg(0x19, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffff88);
				*piVar5 = 1;
				*(undefined4 *)(puVar11 + 0x8c) = 1;
			}
		}
	LAB_100b5a9c:
		if (*puVar19 != '\x01') {
			if ((puVar11[0x16a] == '\x02') && (*(int *)(puVar11 + 0x17c) == 0)) {
				iVar7 = (int)(uVar32 + lVar29);
				*(undefined4 *)(iVar7 + 0x50) = 0x96;
				*(int *)(iVar7 + 0x90) = iVar8;
				InitQTextMsg(0x17, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffff88);
				*piVar5 = 1;
				*(undefined4 *)(puVar11 + 0x17c) = 1;
				NetSendCmdQuest(1, 0xf);
			} else {
				if ((puVar11[0x16a] == '\x03') && (puVar11[0x177] == '\a')) {
					puVar11[0x177] = 8;
					iVar7 = (int)(uVar32 + lVar29);
					*(undefined4 *)(iVar7 + 0x50) = 0x96;
					*(int *)(iVar7 + 0x90) = iVar8;
					InitQTextMsg(0x19, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
					    in_stack_ffffff88);
					*piVar5 = 1;
					NetSendCmdQuest(1, 0xf);
					*(undefined4 *)(puVar11 + 0x8c) = 1;
					NetSendCmdQuest(1, 5);
				}
			}
		}
		uVar28 = (undefined)param_8;
		uVar27 = (undefined)param_7;
		uVar26 = (undefined)param_6;
		uVar25 = (undefined)param_5;
		uVar24 = (undefined)param_4;
		uVar23 = (undefined)param_3;
		if (*puVar10 != '\0') {
			return;
		}
		TownerTalk(0x96, iVar18, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff88,
		    in_stack_ffffff8f, in_stack_ffffff9c);
		if (*(int *)puVar13 == 0) {
			return;
		}
		StartStore('\x0f', uVar22, uVar23, uVar24, uVar25, uVar26, uVar27, uVar28, in_stack_ffffff88);
		return;
	}
	pcVar30 = puVar11 + 0x1a;
	if (puVar11[0x1a] == '\x01') {
		param_3 = uVar17 - 0x3c;
		puVar19 = PlrHasItem(iVar8, 0x13, (int *)param_3);
		if (puVar19 != (undefined *)0x0) {
			RemoveInvItem(param_1, (ulonglong)local_3c, (char)param_3, (char)param_4, (char)param_5,
			    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff88);
			param_3 = 2;
			*pcVar30 = '\x02';
			*(undefined4 *)(puVar11 + 0x2c) = 1;
			puVar11[0x27] = 2;
			iVar7 = (int)(uVar32 + lVar29);
			*(undefined4 *)(iVar7 + 0x50) = 0x96;
			*(int *)(iVar7 + 0x90) = iVar8;
			InitQTextMsg(0x80, uVar32 + lVar29, 2, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff88);
			*piVar5 = 1;
			goto LAB_100b5768;
		}
	}
	if (*pcVar30 == '\x02') {
		if (((byte)puVar11[0x27] < 2) || (4 < (byte)puVar11[0x27])) {
			param_3 = uVar17 - 0x3c;
			puVar19 = PlrHasItem(iVar8, 0x14, (int *)param_3);
			if (puVar19 == (undefined *)0x0) {
				param_3 = uVar17 - 0x3c;
				puVar19 = PlrHasItem(iVar8, 0x12, (int *)param_3);
				if ((puVar19 != (undefined *)0x0) && (param_3 = uVar31 + 0x28, puVar11[0x28] != -0x7d)) {
					iVar7 = (int)(uVar32 + lVar29);
					*(undefined4 *)(iVar7 + 0x50) = 0x96;
					*(int *)(iVar7 + 0x90) = iVar8;
					*(undefined *)param_3 = 0x83;
					InitQTextMsg(0x83, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
					    in_stack_ffffff88);
					*piVar5 = 1;
				}
			} else {
				iVar7 = (int)(uVar32 + lVar29);
				*(undefined4 *)(iVar7 + 0x50) = 0x96;
				*(int *)(iVar7 + 0x90) = iVar8;
				InitQTextMsg(0x84, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffff88);
				*pcVar30 = '\x03';
				*piVar5 = 1;
				ppuVar14[*(int *)(puVar19 + 0x168) * 0x13 + 0xe26] = (undefined *)0x1;
			}
		} else {
			uVar23 = (undefined)(uVar17 - 0x3c);
			puVar19 = PlrHasItem(iVar8, 0x11, (int *)(uVar17 - 0x3c));
			if (puVar19 == (undefined *)0x0) {
				param_3 = uVar31 + 0x26;
				if (puVar11[0x26] != -0x7f) {
					iVar7 = (int)(uVar32 + lVar29);
					*(undefined4 *)(iVar7 + 0x50) = 0x96;
					*(int *)(iVar7 + 0x90) = iVar8;
					*(undefined *)param_3 = 0x81;
					InitQTextMsg(0x81, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
					    in_stack_ffffff88);
					*piVar5 = 1;
				}
			} else {
				RemoveInvItem(param_1, (ulonglong)local_3c, uVar23, (char)param_4, (char)param_5, (char)param_6,
				    (char)param_7, (char)param_8, in_stack_ffffff88);
				puVar11[0x27] = 5;
				*(undefined4 *)(puVar12 + 0x44) = 0x7b;
				param_3 = 0x96;
				*(undefined4 *)(puVar12 + 0x184) = 0xffffffff;
				iVar7 = (int)(uVar32 + lVar29);
				*(undefined4 *)(iVar7 + 0x50) = 0x96;
				*(int *)(iVar7 + 0x90) = iVar8;
				puVar11[0x26] = 0x82;
				InitQTextMsg(0x82, uVar32 + lVar29, 0x96, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffff88);
				*piVar5 = 1;
			}
		}
	}
LAB_100b5768:
	uVar28 = (undefined)param_8;
	uVar27 = (undefined)param_7;
	uVar26 = (undefined)param_6;
	uVar25 = (undefined)param_5;
	uVar24 = (undefined)param_4;
	uVar23 = (undefined)param_3;
	if ((*puVar10 == '\0') && (TownerTalk(0xd4, iVar18, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9c), *(int *)puVar13 != 0)) {
		StartStore('\x05', uVar22, uVar23, uVar24, uVar25, uVar26, uVar27, uVar28, in_stack_ffffff88);
	}
	return;
}
