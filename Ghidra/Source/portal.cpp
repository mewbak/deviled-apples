
void InitPortals(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined8 uVar1;
	int iVar2;
	undefined4 *puVar3;

	iVar2 = 0;
	puVar3 = _DAT_100f1e88;
	do {
		uVar1 = delta_portal_inited(iVar2);
		if ((int)uVar1 != 0) {
			*puVar3 = 0;
		}
		iVar2 = iVar2 + 1;
		puVar3 = puVar3 + 6;
	} while (iVar2 < 4);
	return;
}

void SetPortalStats(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
    undefined4 param_5, undefined4 param_6)

{
	int iVar1;

	iVar1 = _DAT_100f1e88;
	*(undefined4 *)(_DAT_100f1e88 + param_1 * 0x18) = param_2;
	iVar1 = iVar1 + param_1 * 0x18;
	*(undefined4 *)(iVar1 + 4) = param_3;
	*(undefined4 *)(iVar1 + 8) = param_4;
	*(undefined4 *)(iVar1 + 0xc) = param_5;
	*(undefined4 *)(iVar1 + 0x10) = param_6;
	*(undefined4 *)(iVar1 + 0x14) = 0;
	return;
}

void AddWarpMissile(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined uVar5;
	ulonglong uVar4;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	int iVar11;
	undefined4 *puVar12;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;

	puVar2 = PTR_DAT_100f1a3c;
	puVar1 = PTR_DAT_100f196c;
	uVar5 = (undefined)param_1;
	uVar7 = (undefined)param_3;
	uVar6 = (undefined)param_2;
	ppuVar3 = &toc;
	uVar9 = 10;
	puVar12 = (undefined4 *)(PTR_DAT_100f1ee8 + 300);
	uVar10 = 0;
	*(undefined4 *)(PTR_DAT_100f1ee8 + 300) = 0xffffffff;
	*(undefined *)(*(int *)puVar2 + (int)param_2 * 0x70 + (int)param_3) = 0;
	uVar8 = 0;
	uVar4 = AddMissile(0, 0, param_2, param_3, 0, 10, 0, param_1, in_stack_ffffffb8, in_stack_ffffffbf, 0, 0);
	iVar11 = (int)uVar4;
	if (iVar11 != -1) {
		SetMissDir(iVar11, 1, uVar6, uVar7, uVar8, uVar9, uVar10, uVar5, in_stack_ffffffb8);
		if (*ppuVar3[-0x1df9] != '\0') {
			puVar1 = puVar1 + iVar11 * 0xb4;
			uVar4 = AddLight(*(undefined4 *)(puVar1 + 4), *(undefined4 *)(puVar1 + 8), 0xf);
			*(int *)(puVar1 + 0x8c) = (int)uVar4;
		}
		*puVar12 = 0x81;
	}
	return;
}

void SyncPortals(undefined param_1, undefined param_2, undefined param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	longlong lVar4;
	undefined uVar5;
	longlong lVar6;
	undefined uVar7;
	longlong lVar8;
	undefined uVar9;
	longlong lVar10;
	undefined uVar11;
	longlong lVar12;
	undefined uVar13;
	longlong lVar14;
	uint *puVar15;
	uint *puVar16;
	int *piVar17;
	undefined4 in_stack_ffffffa8;

	puVar3 = PTR_DAT_100f17f8;
	puVar2 = PTR_DAT_100f17f0;
	puVar1 = PTR_DAT_100f17ec;
	lVar12 = (longlong)param_8;
	lVar10 = (longlong)param_7;
	lVar8 = (longlong)param_6;
	lVar6 = (longlong)param_5;
	lVar4 = (longlong)param_4;
	lVar14 = 0;
	puVar16 = (uint *)PTR_DAT_100f2058;
	puVar15 = (uint *)PTR_DAT_100f2054;
	piVar17 = _DAT_100f1e88;
	do {
		if (*piVar17 != 0) {
			uVar5 = (undefined)lVar4;
			uVar7 = (undefined)lVar6;
			uVar9 = (undefined)lVar8;
			uVar11 = (undefined)lVar10;
			uVar13 = (undefined)lVar12;
			if (*puVar1 == 0) {
				AddWarpMissile(lVar14, (ulonglong)*puVar15, (ulonglong)*puVar16, uVar5, uVar7, uVar9, uVar11, uVar13,
				    in_stack_ffffffa8);
			} else {
				if (*puVar3 == '\0') {
					if ((uint)(byte)*puVar1 == piVar17[3]) {
						AddWarpMissile(lVar14, (ulonglong)(uint)piVar17[1], (ulonglong)(uint)piVar17[2], uVar5, uVar7,
						    uVar9, uVar11, uVar13, in_stack_ffffffa8);
					}
				} else {
					if ((uint)(byte)*puVar2 == piVar17[3]) {
						AddWarpMissile(lVar14, (ulonglong)(uint)piVar17[1], (ulonglong)(uint)piVar17[2], uVar5, uVar7,
						    uVar9, uVar11, uVar13, in_stack_ffffffa8);
					}
				}
			}
		}
		lVar14 = lVar14 + 1;
		puVar16 = puVar16 + 1;
		puVar15 = puVar15 + 1;
		piVar17 = piVar17 + 6;
	} while ((int)lVar14 < 4);
	return;
}

void AddInTownPortal(undefined8 param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined4 in_stack_ffffffc8;

	iVar1 = (int)param_1 * 4;
	AddWarpMissile(param_1, (ulonglong) * (uint *)(PTR_DAT_100f2054 + iVar1),
	    (ulonglong) * (uint *)(PTR_DAT_100f2058 + iVar1), param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffffc8);
	return;
}

void ActivatePortal(int param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined4 param_5,
    undefined4 param_6)

{
	int iVar1;

	iVar1 = _DAT_100f1e88;
	*(undefined4 *)(_DAT_100f1e88 + param_1 * 0x18) = 1;
	if (param_4 == 0) {
		return;
	}
	iVar1 = iVar1 + param_1 * 0x18;
	*(undefined4 *)(iVar1 + 4) = param_2;
	*(undefined4 *)(iVar1 + 8) = param_3;
	*(int *)(iVar1 + 0xc) = param_4;
	*(undefined4 *)(iVar1 + 0x10) = param_5;
	*(undefined4 *)(iVar1 + 0x14) = param_6;
	return;
}

void DeactivatePortal(int param_1)

{
	*(undefined4 *)(_DAT_100f1e88 + param_1 * 0x18) = 0;
	return;
}

undefined8 PortalOnLevel(int param_1)

{
	if ((uint)(byte)*PTR_DAT_100f17ec == *(uint *)(_DAT_100f1e88 + param_1 * 0x18 + 0xc)) {
		return 1;
	}
	if (*PTR_DAT_100f17ec == 0) {
		return 1;
	}
	return 0;
}

void RemovePortalMissile(int iParm1)

{
	uint uVar1;
	int iVar2;
	int iVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	longlong lVar8;
	int iVar9;
	undefined8 uVar10;
	undefined8 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int iVar11;
	uint *puVar12;
	ulonglong uVar13;
	undefined4 in_stack_ffffffa8;

	puVar7 = PTR_DAT_100f1a3c;
	puVar6 = PTR_DAT_100f196c;
	puVar5 = PTR_DAT_100f1968;
	puVar4 = PTR_DAT_100f1834;
	iVar11 = 0;
	uVar13 = ZEXT48(PTR_DAT_100f196c);
	iVar3 = _DAT_100f1e88 + iParm1 * 0x18;
	puVar12 = (uint *)PTR_DAT_100f1970;
	while (iVar11 < *(int *)puVar5) {
		uVar1 = *puVar12;
		lVar8 = (ulonglong)uVar1 * 0xb4;
		if ((*(int *)(puVar6 + (int)lVar8) == 10) && (lVar8 = uVar13 + lVar8, iVar2 = (int)lVar8, iParm1 == *(int *)(iVar2 + 0x78))) {
			uVar10 = 0;
			iVar9 = *(int *)(iVar2 + 4) * 0x70 + *(int *)(iVar2 + 8);
			*(byte *)(*(int *)puVar4 + iVar9) = *(byte *)(*(int *)puVar4 + iVar9) & 0xfe;
			*(undefined *)(*(int *)puVar7 + *(int *)(iVar2 + 4) * 0x70 + *(int *)(iVar2 + 8)) = 0;
			if (*(int *)(iVar3 + 0xc) != 0) {
				AddUnLight(*(int *)(iVar2 + 0x8c));
			}
			DeleteMissile((ulonglong)uVar1, iVar11, uVar10, lVar8, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffa8);
		}
		puVar12 = puVar12 + 1;
		iVar11 = iVar11 + 1;
	}
	return;
}

void SetCurrentPortal(undefined4 param_1)

{
	*(undefined4 *)PTR_DAT_100f2050 = param_1;
	return;
}

void GetPortalLevel(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined uVar9;
	longlong lVar10;
	ulonglong uVar11;
	ulonglong uVar12;
	undefined4 in_stack_ffffffc8;

	puVar8 = PTR_DAT_100f2050;
	puVar7 = PTR_DAT_100f183c;
	puVar6 = PTR_DAT_100f1828;
	puVar5 = PTR_DAT_100f1824;
	puVar4 = PTR_DAT_100f17f0;
	puVar3 = PTR_DAT_100f17ec;
	uVar12 = ZEXT48(PTR_DAT_100f1828);
	uVar11 = ZEXT48(PTR_DAT_100f17f8);
	if (*PTR_DAT_100f17ec == '\0') {
		uVar1 = *(uint *)PTR_DAT_100f2050;
		lVar10 = (ulonglong)_DAT_100f1e88 + (ulonglong)uVar1 * 0x18;
		iVar2 = (int)lVar10;
		if (*(int *)(iVar2 + 0x14) == 0) {
			*PTR_DAT_100f17f8 = 0;
			*puVar3 = (char)*(undefined4 *)(iVar2 + 0xc);
			*(uint *)(puVar6 + *(int *)puVar5 * 0x55ec + 0x34) = (uint)(byte)*puVar3;
			*puVar7 = (char)*(undefined4 *)(iVar2 + 0x10);
		} else {
			*PTR_DAT_100f17f8 = 1;
			uVar9 = (undefined) * (undefined4 *)(iVar2 + 0xc);
			*puVar4 = uVar9;
			*puVar3 = uVar9;
			*(uint *)(puVar6 + *(int *)puVar5 * 0x55ec + 0x34) = (uint)(byte)*puVar4;
			*puVar7 = (char)*(undefined4 *)(iVar2 + 0x10);
		}
		if (uVar1 == *(uint *)puVar5) {
			NetSendCmd(1, 0x39, lVar10, uVar11, uVar12, puVar5, puVar7, uVar1, in_stack_ffffffc8);
			DeactivatePortal(*(int *)puVar8);
		}
	} else {
		*PTR_DAT_100f17f8 = 0;
		*puVar3 = 0;
		*(undefined4 *)(puVar6 + *(int *)puVar5 * 0x55ec + 0x34) = 0;
		*puVar7 = 0;
	}
	return;
}

void GetPortalLvlPos(void)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	int iVar6;

	puVar5 = PTR_DAT_100f2058;
	puVar4 = PTR_DAT_100f1824;
	puVar3 = PTR_DAT_100f1820;
	puVar2 = PTR_DAT_100f181c;
	if (*PTR_DAT_100f17ec == '\0') {
		iVar1 = *(int *)PTR_DAT_100f2050;
		*(int *)PTR_DAT_100f1820 = *(int *)(PTR_DAT_100f2054 + iVar1 * 4) + 1;
		*(int *)puVar2 = *(int *)(puVar5 + iVar1 * 4) + 1;
		return;
	}
	iVar1 = *(int *)PTR_DAT_100f2050;
	iVar6 = _DAT_100f1e88 + iVar1 * 0x18;
	*(undefined4 *)PTR_DAT_100f1820 = *(undefined4 *)(iVar6 + 4);
	*(undefined4 *)puVar2 = *(undefined4 *)(iVar6 + 8);
	if (iVar1 == *(int *)puVar4) {
		return;
	}
	*(int *)puVar3 = *(int *)puVar3 + 1;
	*(int *)puVar2 = *(int *)puVar2 + 1;
	return;
}

undefined8 PosOkPortal(int param_1, int param_2, int param_3)

{
	int iVar1;
	int iVar2;

	iVar2 = param_2 + -1;
	iVar1 = param_3 + -1;
	if ((*_DAT_100f1e88 != 0) && (param_1 == _DAT_100f1e88[3])) {
		if ((param_2 == _DAT_100f1e88[1]) && (param_3 == _DAT_100f1e88[2])) {
			return 1;
		}
		if ((iVar2 == _DAT_100f1e88[1]) && (iVar1 == _DAT_100f1e88[2])) {
			return 1;
		}
	}
	if ((_DAT_100f1e88[6] != 0) && (param_1 == _DAT_100f1e88[9])) {
		if ((param_2 == _DAT_100f1e88[7]) && (param_3 == _DAT_100f1e88[8])) {
			return 1;
		}
		if ((iVar2 == _DAT_100f1e88[7]) && (iVar1 == _DAT_100f1e88[8])) {
			return 1;
		}
	}
	if ((_DAT_100f1e88[0xc] != 0) && (param_1 == _DAT_100f1e88[0xf])) {
		if ((param_2 == _DAT_100f1e88[0xd]) && (param_3 == _DAT_100f1e88[0xe])) {
			return 1;
		}
		if ((iVar2 == _DAT_100f1e88[0xd]) && (iVar1 == _DAT_100f1e88[0xe])) {
			return 1;
		}
	}
	if ((_DAT_100f1e88[0x12] != 0) && (param_1 == _DAT_100f1e88[0x15])) {
		if ((param_2 == _DAT_100f1e88[0x13]) && (param_3 == _DAT_100f1e88[0x14])) {
			return 1;
		}
		if ((iVar2 == _DAT_100f1e88[0x13]) && (iVar1 == _DAT_100f1e88[0x14])) {
			return 1;
		}
	}
	return 0;
}
