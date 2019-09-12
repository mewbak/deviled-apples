
void InitDead(void)

{
	undefined4 uVar1;
	undefined4 uVar2;
	char cVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	ulonglong uVar11;
	int *piVar12;
	byte *pbVar13;
	ulonglong uVar14;
	undefined *puVar15;
	undefined4 *puVar17;
	ulonglong uVar16;
	longlong lVar18;
	undefined4 *puVar19;
	longlong lVar20;
	int local_358[214];

	puVar10 = PTR_DAT_100f19bc;
	puVar15 = PTR_DAT_100f19b4;
	puVar7 = PTR_DAT_100f187c;
	lVar20 = 5;
	uVar14 = ZEXT48(PTR_DAT_100f19bc);
	piVar12 = local_358;
	do {
		*piVar12 = 0;
		piVar12[1] = 0;
		piVar12[2] = 0;
		piVar12[3] = 0;
		piVar12[4] = 0;
		piVar12[5] = 0;
		piVar12[6] = 0;
		piVar12[7] = 0;
		piVar12[8] = 0;
		piVar12[9] = 0;
		piVar12[10] = 0;
		piVar12[0xb] = 0;
		piVar12[0xc] = 0;
		piVar12[0xd] = 0;
		piVar12[0xe] = 0;
		piVar12[0xf] = 0;
		piVar12[0x10] = 0;
		piVar12[0x11] = 0;
		piVar12[0x12] = 0;
		piVar12[0x13] = 0;
		piVar12[0x14] = 0;
		piVar12[0x15] = 0;
		piVar12[0x16] = 0;
		piVar12[0x17] = 0;
		piVar12[0x18] = 0;
		piVar12[0x19] = 0;
		piVar12[0x1a] = 0;
		piVar12[0x1b] = 0;
		piVar12[0x1c] = 0;
		piVar12[0x1d] = 0;
		piVar12[0x1e] = 0;
		piVar12[0x1f] = 0;
		piVar12[0x20] = 0;
		piVar12[0x21] = 0;
		piVar12[0x22] = 0;
		piVar12[0x23] = 0;
		piVar12[0x24] = 0;
		piVar12[0x25] = 0;
		piVar12[0x26] = 0;
		piVar12[0x27] = 0;
		piVar12 = piVar12 + 0x28;
		lVar20 = lVar20 + -1;
	} while (lVar20 != 0);
	uVar11 = (ulonglong) * (uint *)PTR_DAT_100f19b8;
	lVar20 = 0;
	uVar16 = uVar14;
	pbVar13 = PTR_DAT_100f19c0;
	if (0 < (int)*(uint *)PTR_DAT_100f19b8) {
		do {
			if (local_358[(uint)*pbVar13] == 0) {
				lVar18 = lVar20 + 1;
				uVar1 = *(undefined4 *)(pbVar13 + 0x13c);
				lVar20 = lVar20 + 1;
				puVar17 = (undefined4 *)uVar16;
				*puVar17 = *(undefined4 *)(pbVar13 + 0x138);
				puVar17[1] = uVar1;
				uVar1 = *(undefined4 *)(pbVar13 + 0x144);
				puVar17[2] = *(undefined4 *)(pbVar13 + 0x140);
				puVar17[3] = uVar1;
				uVar1 = *(undefined4 *)(pbVar13 + 0x14c);
				puVar17[4] = *(undefined4 *)(pbVar13 + 0x148);
				puVar17[5] = uVar1;
				uVar1 = *(undefined4 *)(pbVar13 + 0x154);
				puVar17[6] = *(undefined4 *)(pbVar13 + 0x150);
				puVar17[7] = uVar1;
				uVar1 = *(undefined4 *)(pbVar13 + 0x15c);
				puVar17[8] = *(undefined4 *)(pbVar13 + 0x158);
				puVar17[9] = uVar1;
				uVar1 = *(undefined4 *)(pbVar13 + 0x164);
				puVar17[10] = *(undefined4 *)(pbVar13 + 0x160);
				puVar17[0xb] = uVar1;
				uVar1 = *(undefined4 *)(pbVar13 + 0x16c);
				puVar17[0xc] = *(undefined4 *)(pbVar13 + 0x168);
				puVar17[0xd] = uVar1;
				uVar1 = *(undefined4 *)(pbVar13 + 0x174);
				puVar17[0xe] = *(undefined4 *)(pbVar13 + 0x170);
				puVar17[0xf] = uVar1;
				puVar17[0x10] = *(undefined4 *)(pbVar13 + 0x178);
				puVar17[0x11] = *(undefined4 *)(pbVar13 + 0x1ec);
				puVar17[0x12] = *(undefined4 *)(pbVar13 + 0x1f0);
				*(undefined *)(puVar17 + 0x13) = 0;
				uVar16 = uVar16 + 0x50;
				pbVar13[0x1fd] = (byte)lVar18;
				local_358[(uint)*pbVar13] = (int)lVar18;
			}
			pbVar13 = pbVar13 + 0x208;
			uVar11 = uVar11 - 1;
		} while (uVar11 != 0);
	}
	uVar1 = *(undefined4 *)(puVar15 + 0x12cc);
	iVar6 = (int)lVar20;
	iVar4 = iVar6 * 0x50;
	uVar2 = *(undefined4 *)(puVar15 + 0x12d0);
	iVar5 = (iVar6 + 1) * 0x50;
	puVar17 = (undefined4 *)(puVar10 + iVar4);
	*puVar17 = uVar1;
	puVar9 = PTR_DAT_100f19b0;
	puVar17[1] = uVar2;
	puVar8 = PTR_DAT_100f19ac;
	puVar19 = (undefined4 *)(puVar10 + iVar5);
	puVar17[2] = uVar1;
	puVar17[3] = uVar2;
	puVar17[4] = uVar1;
	puVar17[5] = uVar2;
	puVar17[6] = uVar1;
	puVar17[7] = uVar2;
	puVar17[8] = uVar1;
	puVar17[9] = uVar2;
	puVar17[10] = uVar1;
	puVar17[0xb] = uVar2;
	puVar17[0xc] = uVar1;
	puVar17[0xd] = uVar2;
	puVar17[0xe] = uVar1;
	puVar17[0xf] = uVar2;
	*(undefined4 *)(puVar10 + 0x40 + iVar4) = 8;
	*(undefined4 *)(puVar10 + 0x44 + iVar4) = 0x80;
	*(undefined4 *)(puVar10 + 0x48 + iVar4) = 0x20;
	(puVar10 + 0x4c)[iVar4] = 0;
	*(int *)puVar9 = iVar6 + 1;
	uVar1 = *(undefined4 *)(puVar15 + 0x1524);
	uVar2 = *(undefined4 *)(puVar15 + 0x1528);
	*puVar19 = uVar1;
	puVar19[1] = uVar2;
	puVar19[2] = uVar1;
	puVar19[3] = uVar2;
	puVar19[4] = uVar1;
	puVar19[5] = uVar2;
	puVar19[6] = uVar1;
	puVar19[7] = uVar2;
	puVar19[8] = uVar1;
	puVar19[9] = uVar2;
	puVar19[10] = uVar1;
	puVar19[0xb] = uVar2;
	puVar19[0xc] = uVar1;
	puVar19[0xd] = uVar2;
	puVar19[0xe] = uVar1;
	puVar19[0xf] = uVar2;
	*(undefined4 *)(puVar10 + 0x40 + iVar5) = 0xc;
	*(undefined4 *)(puVar10 + 0x44 + iVar5) = 0x80;
	*(undefined4 *)(puVar10 + 0x48 + iVar5) = 0x20;
	(puVar10 + 0x4c)[iVar5] = 0;
	*(int *)puVar8 = iVar6 + 2;
	lVar20 = lVar20 + 2;
	uVar16 = (ulonglong) * (uint *)PTR_DAT_100f19a4;
	lVar18 = uVar14 + lVar20 * 0x50;
	piVar12 = (int *)PTR_DAT_100f19a8;
	if (0 < (int)*(uint *)PTR_DAT_100f19a4) {
		do {
			if (puVar7[*piVar12 * 0xe8 + 0xc0] != '\0') {
				puVar15 = puVar7 + *piVar12 * 0xe8;
				cVar3 = (char)lVar20;
				lVar20 = lVar20 + 1;
				uVar1 = *(undefined4 *)(*(int *)(puVar15 + 0xe0) + 0x13c);
				puVar17 = (undefined4 *)lVar18;
				*puVar17 = *(undefined4 *)(*(int *)(puVar15 + 0xe0) + 0x138);
				puVar17[1] = uVar1;
				uVar1 = *(undefined4 *)(*(int *)(puVar15 + 0xe0) + 0x144);
				puVar17[2] = *(undefined4 *)(*(int *)(puVar15 + 0xe0) + 0x140);
				puVar17[3] = uVar1;
				uVar1 = *(undefined4 *)(*(int *)(puVar15 + 0xe0) + 0x14c);
				puVar17[4] = *(undefined4 *)(*(int *)(puVar15 + 0xe0) + 0x148);
				puVar17[5] = uVar1;
				uVar1 = *(undefined4 *)(*(int *)(puVar15 + 0xe0) + 0x154);
				puVar17[6] = *(undefined4 *)(*(int *)(puVar15 + 0xe0) + 0x150);
				puVar17[7] = uVar1;
				uVar1 = *(undefined4 *)(*(int *)(puVar15 + 0xe0) + 0x15c);
				puVar17[8] = *(undefined4 *)(*(int *)(puVar15 + 0xe0) + 0x158);
				puVar17[9] = uVar1;
				uVar1 = *(undefined4 *)(*(int *)(puVar15 + 0xe0) + 0x164);
				puVar17[10] = *(undefined4 *)(*(int *)(puVar15 + 0xe0) + 0x160);
				puVar17[0xb] = uVar1;
				uVar1 = *(undefined4 *)(*(int *)(puVar15 + 0xe0) + 0x16c);
				puVar17[0xc] = *(undefined4 *)(*(int *)(puVar15 + 0xe0) + 0x168);
				puVar17[0xd] = uVar1;
				uVar1 = *(undefined4 *)(*(int *)(puVar15 + 0xe0) + 0x174);
				puVar17[0xe] = *(undefined4 *)(*(int *)(puVar15 + 0xe0) + 0x170);
				puVar17[0xf] = uVar1;
				puVar17[0x10] = *(undefined4 *)(*(int *)(puVar15 + 0xe0) + 0x178);
				puVar17[0x11] = *(undefined4 *)(*(int *)(puVar15 + 0xe0) + 0x1ec);
				puVar17[0x12] = *(undefined4 *)(*(int *)(puVar15 + 0xe0) + 0x1f0);
				*(char *)(puVar17 + 0x13) = puVar15[0xc1] + '\x04';
				lVar18 = lVar18 + 0x50;
				puVar15[0xc2] = cVar3 + '\x01';
			}
			piVar12 = piVar12 + 1;
			uVar16 = uVar16 - 1;
		} while (uVar16 != 0);
	}
	return;
}

void AddDead(int param_1, int param_2, undefined4 param_3, int param_4)

{
	*(char *)(*(int *)PTR_DAT_100f19a0 + param_1 * 0x70 + param_2) = ((byte)param_3 & 0x1f) + (char)(param_4 << 5);
	return;
}

ulonglong SetDead(char param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	ulonglong uVar6;
	int iVar7;
	int iVar8;
	uint *puVar9;
	int iVar10;
	int iVar11;

	puVar5 = PTR_DAT_100f19a4;
	puVar4 = PTR_DAT_100f19a0;
	puVar3 = PTR_DAT_100f187c;
	uVar6 = SEXT18(param_1);
	iVar11 = 0;
	puVar9 = (uint *)PTR_DAT_100f19a8;
	while (iVar11 < *(int *)puVar5) {
		uVar6 = (ulonglong)*puVar9 * 0xe8;
		if (puVar3[(int)uVar6 + 0xc0] != '\0') {
			puVar2 = puVar3 + (int)uVar6;
			iVar8 = 0;
			iVar10 = 0;
			do {
				iVar7 = 0;
				do {
					uVar1 = (uint) * (byte *)(iVar10 + *(int *)puVar4 + iVar7) & 0x1f;
					uVar6 = (ulonglong)uVar1;
					if (uVar1 == (int)(char)puVar2[0xc2]) {
						uVar6 = ChangeLightXY((uint)(byte)puVar2[0xdb], iVar8, iVar7);
					}
					iVar7 = iVar7 + 1;
				} while (iVar7 < 0x70);
				iVar8 = iVar8 + 1;
				iVar10 = iVar10 + 0x70;
			} while (iVar8 < 0x70);
		}
		puVar9 = puVar9 + 1;
		iVar11 = iVar11 + 1;
	}
	return uVar6;
}
