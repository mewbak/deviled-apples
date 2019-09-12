
void InitDead(void)

{
	undefined4 uVar1;
	char cVar2;
	int iVar3;
	undefined4 uVar4;
	ulonglong uVar5;
	int *piVar6;
	byte *pbVar7;
	undefined4 *puVar8;
	int iVar9;
	longlong lVar10;
	longlong lVar11;
	int local_358[214];

	lVar11 = 5;
	puVar8 = (undefined4 *)&DAT_10128628;
	piVar6 = local_358;
	do {
		*piVar6 = 0;
		piVar6[1] = 0;
		piVar6[2] = 0;
		piVar6[3] = 0;
		piVar6[4] = 0;
		piVar6[5] = 0;
		piVar6[6] = 0;
		piVar6[7] = 0;
		piVar6[8] = 0;
		piVar6[9] = 0;
		piVar6[10] = 0;
		piVar6[0xb] = 0;
		piVar6[0xc] = 0;
		piVar6[0xd] = 0;
		piVar6[0xe] = 0;
		piVar6[0xf] = 0;
		piVar6[0x10] = 0;
		piVar6[0x11] = 0;
		piVar6[0x12] = 0;
		piVar6[0x13] = 0;
		piVar6[0x14] = 0;
		piVar6[0x15] = 0;
		piVar6[0x16] = 0;
		piVar6[0x17] = 0;
		piVar6[0x18] = 0;
		piVar6[0x19] = 0;
		piVar6[0x1a] = 0;
		piVar6[0x1b] = 0;
		piVar6[0x1c] = 0;
		piVar6[0x1d] = 0;
		piVar6[0x1e] = 0;
		piVar6[0x1f] = 0;
		piVar6[0x20] = 0;
		piVar6[0x21] = 0;
		piVar6[0x22] = 0;
		piVar6[0x23] = 0;
		piVar6[0x24] = 0;
		piVar6[0x25] = 0;
		piVar6[0x26] = 0;
		piVar6[0x27] = 0;
		piVar6 = piVar6 + 0x28;
		lVar11 = lVar11 + -1;
	} while (lVar11 != 0);
	pbVar7 = (byte *)((int)&Monsters[0].trans_file + 3);
	uVar5 = (ulonglong)(uint)nummtypes;
	lVar11 = 0;
	if (0 < nummtypes) {
		do {
			if (local_358[(uint)*pbVar7] == 0) {
				lVar10 = lVar11 + 1;
				uVar1 = *(undefined4 *)(pbVar7 + 0x13c);
				lVar11 = lVar11 + 1;
				*puVar8 = *(undefined4 *)(pbVar7 + 0x138);
				puVar8[1] = uVar1;
				uVar1 = *(undefined4 *)(pbVar7 + 0x144);
				puVar8[2] = *(undefined4 *)(pbVar7 + 0x140);
				puVar8[3] = uVar1;
				uVar1 = *(undefined4 *)(pbVar7 + 0x14c);
				puVar8[4] = *(undefined4 *)(pbVar7 + 0x148);
				puVar8[5] = uVar1;
				uVar1 = *(undefined4 *)(pbVar7 + 0x154);
				puVar8[6] = *(undefined4 *)(pbVar7 + 0x150);
				puVar8[7] = uVar1;
				uVar1 = *(undefined4 *)(pbVar7 + 0x15c);
				puVar8[8] = *(undefined4 *)(pbVar7 + 0x158);
				puVar8[9] = uVar1;
				uVar1 = *(undefined4 *)(pbVar7 + 0x164);
				puVar8[10] = *(undefined4 *)(pbVar7 + 0x160);
				puVar8[0xb] = uVar1;
				uVar1 = *(undefined4 *)(pbVar7 + 0x16c);
				puVar8[0xc] = *(undefined4 *)(pbVar7 + 0x168);
				puVar8[0xd] = uVar1;
				uVar1 = *(undefined4 *)(pbVar7 + 0x174);
				puVar8[0xe] = *(undefined4 *)(pbVar7 + 0x170);
				puVar8[0xf] = uVar1;
				puVar8[0x10] = *(undefined4 *)(pbVar7 + 0x178);
				puVar8[0x11] = *(undefined4 *)(pbVar7 + 0x1ec);
				puVar8[0x12] = *(undefined4 *)(pbVar7 + 0x1f0);
				*(undefined *)(puVar8 + 0x13) = 0;
				puVar8 = puVar8 + 0x14;
				pbVar7[0x1fd] = (byte)lVar10;
				local_358[(uint)*pbVar7] = (int)lVar10;
			}
			pbVar7 = pbVar7 + 0x208;
			uVar5 = uVar5 - 1;
		} while (uVar5 != 0);
	}
	uVar4 = uRam101057cc;
	uVar1 = uRam101057c8;
	_DAT_10128620 = (int)lVar11;
	iVar9 = _DAT_10128620 * 0x50;
	_DAT_10128624 = _DAT_10128620 + 1;
	iVar3 = _DAT_10128624 * 0x50;
	*(undefined4 *)(&DAT_10128628 + iVar9) = uRam101057c8;
	*(undefined4 *)(iVar9 + 0x1012862c) = uVar4;
	_DAT_10128620 = _DAT_10128620 + 2;
	*(undefined4 *)(iVar9 + 0x10128630) = uVar1;
	*(undefined4 *)(iVar9 + 0x10128634) = uVar4;
	*(undefined4 *)(iVar9 + 0x10128638) = uVar1;
	*(undefined4 *)(iVar9 + 0x1012863c) = uVar4;
	*(undefined4 *)(iVar9 + 0x10128640) = uVar1;
	*(undefined4 *)(iVar9 + 0x10128644) = uVar4;
	*(undefined4 *)(iVar9 + 0x10128648) = uVar1;
	*(undefined4 *)(iVar9 + 0x1012864c) = uVar4;
	*(undefined4 *)(iVar9 + 0x10128650) = uVar1;
	*(undefined4 *)(iVar9 + 0x10128654) = uVar4;
	*(undefined4 *)(iVar9 + 0x10128658) = uVar1;
	*(undefined4 *)(iVar9 + 0x1012865c) = uVar4;
	*(undefined4 *)(iVar9 + 0x10128660) = uVar1;
	*(undefined4 *)(iVar9 + 0x10128664) = uVar4;
	*(undefined4 *)(iVar9 + 0x10128668) = 8;
	*(undefined4 *)(iVar9 + 0x1012866c) = 0x80;
	*(undefined4 *)(iVar9 + 0x10128670) = 0x20;
	*(undefined *)(iVar9 + 0x10128674) = 0;
	uVar4 = uRam10105a24;
	uVar1 = uRam10105a20;
	*(undefined4 *)(&DAT_10128628 + iVar3) = uRam10105a20;
	*(undefined4 *)(iVar3 + 0x1012862c) = uVar4;
	*(undefined4 *)(iVar3 + 0x10128630) = uVar1;
	*(undefined4 *)(iVar3 + 0x10128634) = uVar4;
	*(undefined4 *)(iVar3 + 0x10128638) = uVar1;
	*(undefined4 *)(iVar3 + 0x1012863c) = uVar4;
	*(undefined4 *)(iVar3 + 0x10128640) = uVar1;
	*(undefined4 *)(iVar3 + 0x10128644) = uVar4;
	*(undefined4 *)(iVar3 + 0x10128648) = uVar1;
	*(undefined4 *)(iVar3 + 0x1012864c) = uVar4;
	*(undefined4 *)(iVar3 + 0x10128650) = uVar1;
	*(undefined4 *)(iVar3 + 0x10128654) = uVar4;
	*(undefined4 *)(iVar3 + 0x10128658) = uVar1;
	*(undefined4 *)(iVar3 + 0x1012865c) = uVar4;
	*(undefined4 *)(iVar3 + 0x10128660) = uVar1;
	*(undefined4 *)(iVar3 + 0x10128664) = uVar4;
	*(undefined4 *)(iVar3 + 0x10128668) = 0xc;
	*(undefined4 *)(iVar3 + 0x1012866c) = 0x80;
	*(undefined4 *)(iVar3 + 0x10128670) = 0x20;
	*(undefined *)(iVar3 + 0x10128674) = 0;
	lVar11 = lVar11 + 2;
	piVar6 = (int *)&DAT_10151708;
	uVar5 = (ulonglong)(uint)nummonsters;
	lVar10 = ZEXT48(&DAT_10128628) + lVar11 * 0x50;
	if (0 < nummonsters) {
		do {
			iVar9 = *piVar6 * 0xe8;
			if (*(char *)(iVar9 + 0x10151af0) != '\0') {
				cVar2 = (char)lVar11;
				lVar11 = lVar11 + 1;
				uVar1 = *(undefined4 *)(*(int *)(iVar9 + 0x10151b10) + 0x13c);
				puVar8 = (undefined4 *)lVar10;
				*puVar8 = *(undefined4 *)(*(int *)(iVar9 + 0x10151b10) + 0x138);
				puVar8[1] = uVar1;
				uVar1 = *(undefined4 *)(*(int *)(iVar9 + 0x10151b10) + 0x144);
				puVar8[2] = *(undefined4 *)(*(int *)(iVar9 + 0x10151b10) + 0x140);
				puVar8[3] = uVar1;
				uVar1 = *(undefined4 *)(*(int *)(iVar9 + 0x10151b10) + 0x14c);
				puVar8[4] = *(undefined4 *)(*(int *)(iVar9 + 0x10151b10) + 0x148);
				puVar8[5] = uVar1;
				uVar1 = *(undefined4 *)(*(int *)(iVar9 + 0x10151b10) + 0x154);
				puVar8[6] = *(undefined4 *)(*(int *)(iVar9 + 0x10151b10) + 0x150);
				puVar8[7] = uVar1;
				uVar1 = *(undefined4 *)(*(int *)(iVar9 + 0x10151b10) + 0x15c);
				puVar8[8] = *(undefined4 *)(*(int *)(iVar9 + 0x10151b10) + 0x158);
				puVar8[9] = uVar1;
				uVar1 = *(undefined4 *)(*(int *)(iVar9 + 0x10151b10) + 0x164);
				puVar8[10] = *(undefined4 *)(*(int *)(iVar9 + 0x10151b10) + 0x160);
				puVar8[0xb] = uVar1;
				uVar1 = *(undefined4 *)(*(int *)(iVar9 + 0x10151b10) + 0x16c);
				puVar8[0xc] = *(undefined4 *)(*(int *)(iVar9 + 0x10151b10) + 0x168);
				puVar8[0xd] = uVar1;
				uVar1 = *(undefined4 *)(*(int *)(iVar9 + 0x10151b10) + 0x174);
				puVar8[0xe] = *(undefined4 *)(*(int *)(iVar9 + 0x10151b10) + 0x170);
				puVar8[0xf] = uVar1;
				puVar8[0x10] = *(undefined4 *)(*(int *)(iVar9 + 0x10151b10) + 0x178);
				puVar8[0x11] = *(undefined4 *)(*(int *)(iVar9 + 0x10151b10) + 0x1ec);
				puVar8[0x12] = *(undefined4 *)(*(int *)(iVar9 + 0x10151b10) + 0x1f0);
				*(char *)(puVar8 + 0x13) = *(char *)(iVar9 + 0x10151af1) + '\x04';
				lVar10 = lVar10 + 0x50;
				*(char *)(iVar9 + 0x10151af2) = cVar2 + '\x01';
			}
			piVar6 = piVar6 + 1;
			uVar5 = uVar5 - 1;
		} while (uVar5 != 0);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddDead(int dx, int dy, char dv, int ddir)

{
	*(char *)(_DAT_1012f1b0 + dx * 0x70 + dy) = (dv & 0x1fU) + (char)(ddir << 5);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SetDead(void)

{
	int iVar1;
	int y;
	int x;
	int *piVar2;
	int iVar3;
	int iVar4;

	iVar4 = 0;
	piVar2 = (int *)&DAT_10151708;
	while (iVar4 < nummonsters) {
		iVar1 = *piVar2 * 0xe8;
		if (*(char *)(iVar1 + 0x10151af0) != '\0') {
			x = 0;
			iVar3 = 0;
			do {
				y = 0;
				do {
					if (((uint) * (byte *)(iVar3 + _DAT_1012f1b0 + y) & 0x1f) == (int)*(char *)(iVar1 + 0x10151af2)) {
						ChangeLightXY((uint) * (byte *)(iVar1 + 0x10151b0b), x, y);
					}
					y = y + 1;
				} while (y < 0x70);
				x = x + 1;
				iVar3 = iVar3 + 0x70;
			} while (x < 0x70);
		}
		piVar2 = piVar2 + 1;
		iVar4 = iVar4 + 1;
	}
	return;
}