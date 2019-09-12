
void InitAutomapOnce(void)

{
	_DAT_10127e5c = 2;
	_DAT_10127e60 = 4;
	_DAT_10127e64 = 8;
	_DAT_10127e68 = 0x10;
	_DAT_10127e6c = 0x20;
	_DAT_10127e70 = 0x32;
	_DAT_10127e74 = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void InitAutomap(void)

{
	byte bVar1;
	uint uVar2;
	byte *pbVar3;
	int iVar5;
	ulonglong uVar4;
	char cVar7;
	int iVar6;
	longlong lVar8;
	undefined uVar10;
	int iVar9;
	undefined uVar13;
	short *psVar11;
	int iVar12;
	longlong lVar14;
	undefined uVar15;
	char *pcVar17;
	ulonglong uVar16;
	undefined uVar18;
	longlong lVar19;
	undefined uVar20;
	undefined in_r9;
	undefined in_r10;
	longlong lVar21;
	undefined in_stack_ffffffab;
	undefined in_stack_ffffffaf;
	int local_4c;
	int *local_14;
	uint local_10;

	uVar4 = ZEXT48(register0x0000000c);
	uVar13 = 0x1f;
	lVar21 = 0x1f;
	lVar14 = 0xc80;
	uVar16 = ZEXT48(&DAT_10127e2a);
	lVar19 = 0x640;
	do {
		uVar2 = (int)lVar14 / 100 + ((int)lVar14 >> 0x1f);
		iVar5 = uVar2 + (uVar2 >> 0x1f);
		iVar9 = 0x140 / iVar5;
		lVar8 = 0x140 - (longlong)iVar9 * (longlong)iVar5;
		pcVar17 = (char *)uVar16;
		*pcVar17 = (char)(iVar9 << 1) + '\x01';
		if (lVar8 != 0) {
			*pcVar17 = *pcVar17 + '\x01';
		}
		uVar2 = (int)lVar19 / 100 + ((int)lVar19 >> 0x1f);
		if ((int)(uVar2 + (uVar2 >> 0x1f)) <= (int)lVar8) {
			*pcVar17 = *pcVar17 + '\x01';
		}
		lVar14 = lVar14 + 0x140;
		uVar15 = (undefined)lVar14;
		lVar19 = lVar19 + 0xa0;
		uVar20 = (undefined)lVar19;
		uVar16 = uVar16 + 1;
		uVar18 = (undefined)uVar16;
		lVar21 = lVar21 + -1;
	} while (lVar21 != 0);
	ZeroMemory(0x2a, 0, 0x1f, uVar15, uVar18, uVar20, in_r9, in_r10, in_stack_ffffffab, in_stack_ffffffaf, local_4c);
	bVar1 = **(byte **)(local_4c + -0x7794);
	if (bVar1 == 3) {
		uVar10 = (undefined)(uVar4 - 0x10);
		iVar9 = local_4c;
		local_14 = (int *)LoadFileInMem(*(char **)(local_4c + -0x658c), (DWORD *)(uVar4 - 0x10));
		local_10 = local_10 >> 1;
	} else {
		if (bVar1 < 3) {
			if (bVar1 == 1) {
				uVar10 = (undefined)(uVar4 - 0x10);
				iVar9 = local_4c;
				local_14 = (int *)LoadFileInMem(*(char **)(local_4c + -0x6584), (DWORD *)(uVar4 - 0x10));
				local_10 = local_10 >> 1;
			} else {
				if (bVar1 == 0) {
					return;
				}
				uVar10 = (undefined)(uVar4 - 0x10);
				iVar9 = local_4c;
				local_14 = (int *)LoadFileInMem(*(char **)(local_4c + -0x6588), (DWORD *)(uVar4 - 0x10));
				local_10 = local_10 >> 1;
			}
		} else {
			if (4 < bVar1) {
				return;
			}
			uVar10 = (undefined)(uVar4 - 0x10);
			iVar9 = local_4c;
			local_14 = (int *)LoadFileInMem(*(char **)(local_4c + -26000), (DWORD *)(uVar4 - 0x10));
			local_10 = local_10 >> 1;
		}
	}
	cVar7 = LockMemFile(ZEXT48(local_14), uVar10, uVar13, uVar15, uVar18, uVar20, in_r9, in_r10, in_stack_ffffffab);
	lVar14 = (longlong)cVar7;
	uVar10 = (undefined)local_10;
	uVar16 = 1;
	uVar13 = uVar10;
	if (local_10 != 0) {
		if (8 < local_10) {
			uVar4 = (ulonglong)(local_10 - 1 >> 3);
			psVar11 = (short *)0x10127a2c;
			if (local_10 != 8) {
				do {
					pbVar3 = (byte *)lVar14;
					uVar16 = uVar16 + 8;
					*psVar11 = (ushort)*pbVar3 + (ushort)pbVar3[1] * 0x100;
					psVar11[1] = (ushort)pbVar3[2] + (ushort)pbVar3[3] * 0x100;
					psVar11[2] = (ushort)pbVar3[4] + (ushort)pbVar3[5] * 0x100;
					psVar11[3] = (ushort)pbVar3[6] + (ushort)pbVar3[7] * 0x100;
					psVar11[4] = (ushort)pbVar3[8] + (ushort)pbVar3[9] * 0x100;
					psVar11[5] = (ushort)pbVar3[10] + (ushort)pbVar3[0xb] * 0x100;
					psVar11[6] = (ushort)pbVar3[0xc] + (ushort)pbVar3[0xd] * 0x100;
					lVar14 = lVar14 + 0x10;
					psVar11[7] = (ushort)pbVar3[0xe] + (ushort)pbVar3[0xf] * 0x100;
					psVar11 = psVar11 + 8;
					uVar4 = uVar4 - 1;
				} while (uVar4 != 0);
			}
		}
		lVar21 = ZEXT48(&DAT_10127a2a) + (ulonglong)(uint)((int)uVar16 << 1);
		uVar13 = (undefined)lVar21;
		lVar19 = ((ulonglong)local_10 + 1) - uVar16;
		uVar15 = uVar10;
		if ((uVar16 & 0xffffffff) <= (ulonglong)local_10) {
			do {
				pbVar3 = (byte *)lVar14;
				lVar14 = lVar14 + 2;
				*(short *)lVar21 = (ushort)*pbVar3 + (ushort)pbVar3[1] * 0x100;
				lVar21 = lVar21 + 2;
				uVar13 = (undefined)lVar21;
				lVar19 = lVar19 + -1;
				uVar15 = uVar10;
			} while (lVar19 != 0);
		}
	}
	UnlockMemFile((char)local_14);
	MemFreeDbg(&local_14);
	ZeroMemory((char)*(undefined4 *)(local_4c + -0x7798), 0x40, uVar13, uVar15, uVar18, uVar20, in_r9, in_r10,
	    in_stack_ffffffab, in_stack_ffffffaf, iVar9);
	iVar9 = 0;
	do {
		lVar14 = 7;
		iVar5 = 0;
		do {
			*(byte *)(iVar9 + _DAT_1012f1bc + iVar5) = *(byte *)(iVar9 + _DAT_1012f1bc + iVar5) & 0x7f;
			iVar6 = _DAT_1012f1bc + iVar5 + 0x70;
			*(byte *)(iVar9 + iVar6) = *(byte *)(iVar9 + iVar6) & 0x7f;
			iVar6 = _DAT_1012f1bc + iVar5 + 0xe0;
			*(byte *)(iVar9 + iVar6) = *(byte *)(iVar9 + iVar6) & 0x7f;
			iVar6 = _DAT_1012f1bc + iVar5 + 0x150;
			*(byte *)(iVar9 + iVar6) = *(byte *)(iVar9 + iVar6) & 0x7f;
			iVar6 = _DAT_1012f1bc + iVar5 + 0x1c0;
			*(byte *)(iVar9 + iVar6) = *(byte *)(iVar9 + iVar6) & 0x7f;
			iVar6 = _DAT_1012f1bc + iVar5 + 0x230;
			*(byte *)(iVar9 + iVar6) = *(byte *)(iVar9 + iVar6) & 0x7f;
			iVar6 = _DAT_1012f1bc + iVar5 + 0x2a0;
			*(byte *)(iVar9 + iVar6) = *(byte *)(iVar9 + iVar6) & 0x7f;
			iVar6 = iVar5 + 0x380;
			iVar12 = _DAT_1012f1bc + iVar5 + 0x310;
			*(byte *)(iVar9 + iVar12) = *(byte *)(iVar9 + iVar12) & 0x7f;
			*(byte *)(iVar9 + _DAT_1012f1bc + iVar6) = *(byte *)(iVar9 + _DAT_1012f1bc + iVar6) & 0x7f;
			iVar12 = _DAT_1012f1bc + iVar6 + 0x70;
			*(byte *)(iVar9 + iVar12) = *(byte *)(iVar9 + iVar12) & 0x7f;
			iVar12 = _DAT_1012f1bc + iVar6 + 0xe0;
			*(byte *)(iVar9 + iVar12) = *(byte *)(iVar9 + iVar12) & 0x7f;
			iVar12 = _DAT_1012f1bc + iVar6 + 0x150;
			*(byte *)(iVar9 + iVar12) = *(byte *)(iVar9 + iVar12) & 0x7f;
			iVar12 = _DAT_1012f1bc + iVar6 + 0x1c0;
			*(byte *)(iVar9 + iVar12) = *(byte *)(iVar9 + iVar12) & 0x7f;
			iVar12 = _DAT_1012f1bc + iVar6 + 0x230;
			*(byte *)(iVar9 + iVar12) = *(byte *)(iVar9 + iVar12) & 0x7f;
			iVar12 = _DAT_1012f1bc + iVar6 + 0x2a0;
			*(byte *)(iVar9 + iVar12) = *(byte *)(iVar9 + iVar12) & 0x7f;
			iVar5 = iVar5 + 0x700;
			iVar6 = _DAT_1012f1bc + iVar6 + 0x310;
			*(byte *)(iVar9 + iVar6) = *(byte *)(iVar9 + iVar6) & 0x7f;
			lVar14 = lVar14 + -1;
		} while (lVar14 != 0);
		iVar9 = iVar9 + 1;
	} while (iVar9 < 0x70);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void StartAutomap(void)

{
	_DAT_10127e4c = 0;
	_DAT_10127e50 = 0;
	_DAT_10127e74 = 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AutomapUp(void)

{
	_DAT_10127e4c = _DAT_10127e4c + -1;
	_DAT_10127e50 = _DAT_10127e50 + -1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AutomapDown(void)

{
	_DAT_10127e4c = _DAT_10127e4c + 1;
	_DAT_10127e50 = _DAT_10127e50 + 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AutomapLeft(void)

{
	_DAT_10127e4c = _DAT_10127e4c + 1;
	_DAT_10127e50 = _DAT_10127e50 + -1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AutomapRight(void)

{
	_DAT_10127e4c = _DAT_10127e4c + -1;
	_DAT_10127e50 = _DAT_10127e50 + 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AutomapZoomIn(void)

{
	int iVar1;
	uint uVar2;

	if (199 < _DAT_10127e70) {
		return;
	}
	iVar1 = (_DAT_10127e70 + 5) * 0x40;
	uVar2 = iVar1 / 100 + (iVar1 >> 0x1f);
	_DAT_10127e6c = uVar2 + (uVar2 >> 0x1f);
	_DAT_10127e68 = _DAT_10127e6c >> 1;
	_DAT_10127e64 = _DAT_10127e68 >> 1;
	_DAT_10127e60 = _DAT_10127e64 >> 1;
	_DAT_10127e5c = _DAT_10127e60 >> 1;
	_DAT_10127e70 = _DAT_10127e70 + 5;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AutomapZoomOut(void)

{
	int iVar1;
	uint uVar2;

	if (_DAT_10127e70 < 0x33) {
		return;
	}
	iVar1 = (_DAT_10127e70 + -5) * 0x40;
	uVar2 = iVar1 / 100 + (iVar1 >> 0x1f);
	_DAT_10127e6c = uVar2 + (uVar2 >> 0x1f);
	_DAT_10127e68 = _DAT_10127e6c >> 1;
	_DAT_10127e64 = _DAT_10127e68 >> 1;
	_DAT_10127e60 = _DAT_10127e64 >> 1;
	_DAT_10127e5c = _DAT_10127e60 >> 1;
	_DAT_10127e70 = _DAT_10127e70 + -5;
	return;
}

// WARNING: Removing unreachable block (ram,0x1001a1d4)
// WARNING: Removing unreachable block (ram,0x1001a298)
// WARNING: Removing unreachable block (ram,0x1001a1dc)
// WARNING: Removing unreachable block (ram,0x10019e80)
// WARNING: Removing unreachable block (ram,0x10019e88)
// WARNING: Removing unreachable block (ram,0x10019f40)
// WARNING: Removing unreachable block (ram,0x10019f48)
// WARNING: Removing unreachable block (ram,0x10019f70)
// WARNING: Removing unreachable block (ram,0x10019f7c)
// WARNING: Removing unreachable block (ram,0x10019ff8)
// WARNING: Removing unreachable block (ram,0x1001a000)
// WARNING: Removing unreachable block (ram,0x1001a028)
// WARNING: Removing unreachable block (ram,0x1001a034)
// WARNING: Removing unreachable block (ram,0x1001a0ec)
// WARNING: Removing unreachable block (ram,0x1001a0f4)
// WARNING: Removing unreachable block (ram,0x1001a11c)
// WARNING: Removing unreachable block (ram,0x1001a128)
// WARNING: Removing unreachable block (ram,0x1001a1a4)
// WARNING: Removing unreachable block (ram,0x1001a1ac)
// WARNING: Removing unreachable block (ram,0x1001a2c0)
// WARNING: Removing unreachable block (ram,0x1001a384)
// WARNING: Removing unreachable block (ram,0x1001a2c8)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DrawAutomapType(int screen_x, int screen_y, WORD automap_type)

{
	uint uVar1;
	int iVar2;

	iVar2 = 0x100f8fd0;
	if (((uint)(int)(short)automap_type >> 8 & 0x40) != 0) {
		iVar2 = 0x100f8fd0;
		ENG_set_pixel(screen_x, screen_y, -0x38);
		ENG_set_pixel(screen_x - _DAT_10127e60, screen_y - _DAT_10127e5c, -0x38);
		ENG_set_pixel(screen_x - _DAT_10127e60, screen_y + _DAT_10127e5c, -0x38);
		ENG_set_pixel(screen_x + _DAT_10127e60, screen_y - _DAT_10127e5c, -0x38);
		ENG_set_pixel(screen_x + _DAT_10127e60, screen_y + _DAT_10127e5c, -0x38);
		ENG_set_pixel(screen_x - _DAT_10127e64, screen_y, -0x38);
		ENG_set_pixel(screen_x + _DAT_10127e64, screen_y, -0x38);
		ENG_set_pixel(screen_x, screen_y - _DAT_10127e60, -0x38);
		ENG_set_pixel(screen_x, screen_y + _DAT_10127e60, -0x38);
		ENG_set_pixel(_DAT_10127e60 + (screen_x - _DAT_10127e68), screen_y + _DAT_10127e5c, -0x38);
		ENG_set_pixel((screen_x + _DAT_10127e68) - _DAT_10127e60, screen_y + _DAT_10127e5c, -0x38);
		ENG_set_pixel(screen_x - _DAT_10127e64, screen_y + _DAT_10127e60, -0x38);
		ENG_set_pixel(screen_x + _DAT_10127e64, screen_y + _DAT_10127e60, -0x38);
		ENG_set_pixel(screen_x - _DAT_10127e60, (screen_y + _DAT_10127e64) - _DAT_10127e5c, -0x38);
		ENG_set_pixel(screen_x + _DAT_10127e60, (screen_y + _DAT_10127e64) - _DAT_10127e5c, -0x38);
		ENG_set_pixel(screen_x, screen_y + _DAT_10127e64, -0x38);
	}
	if (((uint)(int)(short)automap_type >> 8 & 0x80) != 0) {
		DrawLine(screen_x - _DAT_10127e60, (screen_y - _DAT_10127e60) - _DAT_10127e5c,
		    screen_x + _DAT_10127e64 + _DAT_10127e60, screen_y + _DAT_10127e5c, -0x70);
		DrawLine(screen_x - _DAT_10127e64, screen_y - _DAT_10127e60, screen_x + _DAT_10127e64, screen_y + _DAT_10127e60,
		    -0x70);
		DrawLine((screen_x - _DAT_10127e64) - _DAT_10127e60, screen_y - _DAT_10127e5c, screen_x + _DAT_10127e60,
		    screen_y + _DAT_10127e60 + _DAT_10127e5c, -0x70);
		DrawLine(screen_x - _DAT_10127e68, screen_y, screen_x, screen_y + _DAT_10127e64, -0x70);
	}
	uVar1 = (int)(short)automap_type & 0xf;
	if (0xc < uVar1) {
		return;
	}
	// WARNING: Could not recover jumptable at 0x10019da8. Too many branches
	// WARNING: Treating indirect jump as call
	(**(code **)(iVar2 + -0x2e74 + uVar1 * 4))();
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DrawAutomapPlr(void)

{
	uint uVar1;
	uint uVar2;
	uint uVar3;
	uint uVar4;
	int y0;
	int iVar5;
	int iVar6;
	int iVar7;
	int x0;

	iVar5 = myplr * 0x55ec;
	if (((PlayerStruct *)((int)plr + iVar5))->_pmode == 3) {
		y0 = *(int *)((int)plr + iVar5 + 0x40);
		x0 = *(int *)((int)plr + iVar5 + 0x44);
		if (*(int *)((int)plr + iVar5 + 0x70) == 2) {
			y0 = y0 + 1;
		} else {
			x0 = x0 + 1;
		}
	} else {
		y0 = *(int *)((int)plr + iVar5 + 0x38);
		x0 = *(int *)((int)plr + iVar5 + 0x3c);
	}
	iVar6 = _DAT_10127e70 * *(int *)((int)plr + iVar5 + 0x60);
	iVar7 = _DAT_10127e70 * *(int *)((int)plr + iVar5 + 100);
	uVar1 = iVar6 / 100 + (iVar6 >> 0x1f);
	uVar2 = iVar7 / 100 + (iVar7 >> 0x1f);
	uVar3 = (ScrollStruct_1012f2e8._sxoff * _DAT_10127e70) / 100 + (ScrollStruct_1012f2e8._sxoff * _DAT_10127e70 >> 0x1f);
	iVar6 = (y0 - _DAT_1012f310) + _DAT_10127e50 * -2;
	y0 = (x0 - _DAT_1012f30c) + _DAT_10127e4c * -2;
	uVar4 = (ScrollStruct_1012f2e8._syoff * _DAT_10127e70) / 100 + (ScrollStruct_1012f2e8._syoff * _DAT_10127e70 >> 0x1f);
	x0 = ((iVar6 * _DAT_10127e64 + 0x180) - y0 * _DAT_10127e64) + ((int)(uVar1 + (uVar1 >> 0x1f)) >> 1) + ((int)(uVar3 + (uVar3 >> 0x1f)) >> 1);
	if ((_DAT_1013c970 != 0) || (_DAT_10128158 != 0)) {
		x0 = x0 + -0xa0;
	}
	if ((_DAT_101282b8 != 0) || (_DAT_1019cbec != 0)) {
		x0 = x0 + 0xa0;
	}
	y0 = (iVar6 * _DAT_10127e60 + y0 * _DAT_10127e60 + 0x150 + ((int)(uVar2 + (uVar2 >> 0x1f)) >> 1) + ((int)(uVar4 + (uVar4 >> 0x1f)) >> 1)) - _DAT_10127e60;
	switch (*(undefined4 *)((int)plr + iVar5 + 0x70)) {
	case 0:
		DrawLine(x0, y0, x0, y0 + _DAT_10127e64, -0x67);
		DrawLine(x0, y0 + _DAT_10127e64, x0 + _DAT_10127e5c, y0 + _DAT_10127e60, -0x67);
		DrawLine(x0, y0 + _DAT_10127e64, x0 - _DAT_10127e5c, y0 + _DAT_10127e60, -0x67);
		break;
	case 1:
		DrawLine(x0, y0, x0 - _DAT_10127e64, y0 + _DAT_10127e60, -0x67);
		DrawLine(x0 - _DAT_10127e64, y0 + _DAT_10127e60, (x0 - _DAT_10127e60) - _DAT_10127e5c, y0, -0x67);
		DrawLine(x0 - _DAT_10127e64, y0 + _DAT_10127e60, x0 - _DAT_10127e60, y0 + _DAT_10127e60, -0x67);
		break;
	case 2:
		DrawLine(x0, y0, x0 - _DAT_10127e64, y0, -0x67);
		DrawLine(x0 - _DAT_10127e64, y0, x0 - _DAT_10127e60, y0 - _DAT_10127e5c, -0x67);
		DrawLine(x0 - _DAT_10127e64, y0, x0 - _DAT_10127e60, y0 + _DAT_10127e5c, -0x67);
		break;
	case 3:
		DrawLine(x0, y0, x0 - _DAT_10127e64, y0 - _DAT_10127e60, -0x67);
		DrawLine(x0 - _DAT_10127e64, y0 - _DAT_10127e60, x0 - _DAT_10127e60, y0 - _DAT_10127e60, -0x67);
		DrawLine(x0 - _DAT_10127e64, y0 - _DAT_10127e60, (x0 - _DAT_10127e60) - _DAT_10127e5c, y0, -0x67);
		break;
	case 4:
		DrawLine(x0, y0, x0, y0 - _DAT_10127e64, -0x67);
		DrawLine(x0, y0 - _DAT_10127e64, x0 - _DAT_10127e5c, y0 - _DAT_10127e60, -0x67);
		DrawLine(x0, y0 - _DAT_10127e64, x0 + _DAT_10127e5c, y0 - _DAT_10127e60, -0x67);
		break;
	case 5:
		DrawLine(x0, y0, x0 + _DAT_10127e64, y0 - _DAT_10127e60, -0x67);
		DrawLine(x0 + _DAT_10127e64, y0 - _DAT_10127e60, x0 + _DAT_10127e60, y0 - _DAT_10127e60, -0x67);
		DrawLine(x0 + _DAT_10127e64, y0 - _DAT_10127e60, x0 + _DAT_10127e60 + _DAT_10127e5c, y0, -0x67);
		break;
	case 6:
		DrawLine(x0, y0, x0 + _DAT_10127e64, y0, -0x67);
		DrawLine(x0 + _DAT_10127e64, y0, x0 + _DAT_10127e60, y0 - _DAT_10127e5c, -0x67);
		DrawLine(x0 + _DAT_10127e64, y0, x0 + _DAT_10127e60, y0 + _DAT_10127e5c, -0x67);
		break;
	case 7:
		DrawLine(x0, y0, x0 + _DAT_10127e64, y0 + _DAT_10127e60, -0x67);
		DrawLine(x0 + _DAT_10127e64, y0 + _DAT_10127e60, x0 + _DAT_10127e60 + _DAT_10127e5c, y0, -0x67);
		DrawLine(x0 + _DAT_10127e64, y0 + _DAT_10127e60, x0 + _DAT_10127e60, y0 + _DAT_10127e60, -0x67);
	}
	return;
}

WORD GetAutomapType(int x, int y, BOOL view)

{
	WORD WVar1;
	WORD WVar2;

	if ((((view == 0) || (x != -1)) || (y < 0)) || ((0x27 < y || ((&DAT_101273ea)[y] == '\0')))) {
		if ((((view == 0) || ((y != -1 || (x < 0)))) || (0x27 < x)) || ((&DAT_101273ea)[x * 0x28] == '\0')) {
			if ((x < 0) || (0x27 < x)) {
				WVar1 = 0;
			} else {
				if ((y < 0) || (0x27 < y)) {
					WVar1 = 0;
				} else {
					if (((&DAT_101273ea)[x * 0x28 + y] == '\0') && (view != 0)) {
						WVar1 = 0;
					} else {
						WVar1 = *(WORD *)(&DAT_10127a2a + (uint)dungeon[x * 0x28 + y] * 2);
						if ((WVar1 == 7) && ((WVar2 = GetAutomapType(x + -1, y, 0), ((uint)(int)(short)WVar2 >> 8 & 8) != 0 && (WVar2 = GetAutomapType(x, y + -1, 0), ((uint)(int)(short)WVar2 >> 8 & 4) != 0)))) {
							WVar1 = 1;
						}
					}
				}
			}
		} else {
			WVar1 = GetAutomapType(x, 0, 0);
			if ((WVar1 & 0x4000) == 0) {
				WVar1 = 0x4000;
			} else {
				WVar1 = 0;
			}
		}
	} else {
		WVar1 = GetAutomapType(0, y, 0);
		if ((WVar1 & 0x4000) == 0) {
			WVar1 = 0x4000;
		} else {
			WVar1 = 0;
		}
	}
	return WVar1;
}

// WARNING: Unknown calling convention yet parameter storage is locked

void DrawAutomapGame(void)

{
	int iVar1;
	char *_Dest;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int y;
	undefined4 in_stack_fffffec8;
	undefined in_stack_fffffecf;
	undefined4 in_stack_fffffedc;
	undefined4 in_stack_fffffee0;
	undefined4 in_stack_fffffee4;
	undefined4 in_stack_fffffee8;
	undefined4 in_stack_fffffeec;
	undefined4 in_stack_fffffef0;
	undefined4 in_stack_fffffef4;
	byte desc[264];

	iVar1 = 0x100f8fd0;
	y = 0x14;
	if (1 < (byte)gbMaxPlayers) {
		iVar1 = 0x100f8fd0;
		_Dest = strcpy((char *)desc, "game: ");
		strcat(_Dest, *(char **)(iVar1 + -0x77d0));
		in_r6 = 3;
		PrintGameStr(8, 0x14, (char *)desc, 3);
		y = 0x23;
		if (DAT_1017dd90 != '\0') {
			_Dest = strcpy((char *)desc, *(char **)(iVar1 + -0x65a0));
			strcat(_Dest, &DAT_1017dd90);
			in_r6 = 3;
			PrintGameStr(8, 0x23, (char *)desc, 3);
			y = 0x32;
		}
	}
	if (**(char **)(iVar1 + -0x77d8) == '\0') {
		if (**(byte **)(iVar1 + -0x77e4) != 0) {
			wsprintf((int)desc, *(undefined4 *)(iVar1 + -0x65a4), (uint) * *(byte **)(iVar1 + -0x77e4), in_r6, in_r7,
			    in_r8, in_r9, in_r10, in_stack_fffffec8, in_stack_fffffecf, in_stack_fffffedc, in_stack_fffffee0,
			    in_stack_fffffee4, in_stack_fffffee8, in_stack_fffffeec, in_stack_fffffef0, in_stack_fffffef4);
			PrintGameStr(8, y, (char *)desc, 3);
		}
	} else {
		PrintGameStr(8, y, *(char **)(*(int *)(iVar1 + -0x77dc) + (uint) * *(byte **)(iVar1 + -0x77e0) * 4), 3);
	}
	return;
}

// WARNING: Removing unreachable block (ram,0x1001abf0)
// WARNING: Removing unreachable block (ram,0x1001abfc)
// WARNING: Removing unreachable block (ram,0x1001ac60)
// WARNING: Removing unreachable block (ram,0x1001ac68)
// WARNING: Removing unreachable block (ram,0x1001ac6c)
// WARNING: Removing unreachable block (ram,0x1001ad54)
// WARNING: Removing unreachable block (ram,0x1001ad60)
// WARNING: Removing unreachable block (ram,0x1001adc4)
// WARNING: Removing unreachable block (ram,0x1001adcc)
// WARNING: Removing unreachable block (ram,0x1001add0)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DrawAutomap(void)

{
	uint uVar1;
	uint uVar2;
	ulonglong uVar3;
	WORD automap_type;
	int screen_x;
	longlong lVar4;
	ulonglong uVar5;
	int iVar6;
	int screen_x_00;
	int iVar7;
	int iVar8;
	int iVar9;
	int screen_y;
	int iVar10;

	if (leveltype == '\0') {
		DrawAutomapGame();
		return;
	}
	_DAT_1019fd84 = _DAT_101271e4 + 0x60000;
	_DAT_10127e58 = (int)(_DAT_1012f310 - 0x10) >> 1;
	lVar4 = (ulonglong)_DAT_10127e58 + (ulonglong)_DAT_10127e50;
	uVar5 = lVar4 - 0x27;
	if (0x27 < (int)lVar4) {
		uVar1 = (uint)uVar5 >> 3;
		uVar3 = (ulonglong)uVar1;
		if (uVar1 != 0) {
			do {
				_DAT_10127e50 = _DAT_10127e50 - 8;
				uVar3 = uVar3 - 1;
			} while (uVar3 != 0);
			uVar5 = uVar5 & 7;
			if (uVar5 == 0)
				goto LAB_1001ad1c;
		}
		do {
			_DAT_10127e50 = _DAT_10127e50 - 1;
			uVar5 = uVar5 - 1;
		} while (uVar5 != 0);
	}
LAB_1001ad1c:
	_DAT_10127e58 = _DAT_10127e58 + _DAT_10127e50;
	uVar1 = (int)(_DAT_1012f30c - 0x10) >> 1;
	lVar4 = (ulonglong)uVar1 + (ulonglong)_DAT_10127e4c;
	uVar5 = lVar4 - 0x27;
	if (0x27 < (int)lVar4) {
		uVar2 = (uint)uVar5 >> 3;
		uVar3 = (ulonglong)uVar2;
		if (uVar2 != 0) {
			do {
				_DAT_10127e4c = _DAT_10127e4c - 8;
				uVar3 = uVar3 - 1;
			} while (uVar3 != 0);
			uVar5 = uVar5 & 7;
			if (uVar5 == 0)
				goto LAB_1001ae80;
		}
		do {
			_DAT_10127e4c = _DAT_10127e4c - 1;
			uVar5 = uVar5 - 1;
		} while (uVar5 != 0);
	}
LAB_1001ae80:
	_DAT_10127e54 = uVar1 + _DAT_10127e4c;
	uVar1 = (_DAT_10127e70 + -0x32) / 5 + (_DAT_10127e70 + -0x32 >> 0x1f);
	uVar5 = SEXT18((char)(&DAT_10127e2a)[uVar1 + (uVar1 >> 0x1f)]);
	if ((ulonglong)(uint)ScrollStruct_1012f2e8._sxoff + (ulonglong)(uint)ScrollStruct_1012f2e8._syoff != 0) {
		uVar5 = uVar5 + 1;
	}
	iVar8 = (int)uVar5;
	lVar4 = (ulonglong)_DAT_10127e58 - uVar5;
	iVar9 = _DAT_10127e54 + -1;
	if ((uVar5 & 1) == 0) {
		iVar10 = _DAT_10127e68 + (0x180 - _DAT_10127e6c * (iVar8 >> 1));
		screen_y = (0x150 - _DAT_10127e68 * (iVar8 >> 1)) - _DAT_10127e64;
	} else {
		iVar10 = 0x180 - _DAT_10127e6c * (iVar8 + -1 >> 1);
		screen_y = 0x150 - _DAT_10127e68 * (iVar8 + 1 >> 1);
	}
	if ((_DAT_1012f310 & 1) != 0) {
		iVar10 = iVar10 - _DAT_10127e64;
		screen_y = screen_y - _DAT_10127e60;
	}
	if ((_DAT_1012f30c & 1) != 0) {
		iVar10 = iVar10 + _DAT_10127e64;
		screen_y = screen_y - _DAT_10127e60;
	}
	uVar1 = (ScrollStruct_1012f2e8._sxoff * _DAT_10127e70) / 100 + (ScrollStruct_1012f2e8._sxoff * _DAT_10127e70 >> 0x1f);
	iVar10 = iVar10 + ((int)(uVar1 + (uVar1 >> 0x1f)) >> 1);
	uVar1 = (ScrollStruct_1012f2e8._syoff * _DAT_10127e70) / 100 + (ScrollStruct_1012f2e8._syoff * _DAT_10127e70 >> 0x1f);
	screen_y = screen_y + ((int)(uVar1 + (uVar1 >> 0x1f)) >> 1);
	if ((_DAT_1013c970 != 0) || (_DAT_10128158 != 0)) {
		iVar10 = iVar10 + -0xa0;
	}
	if ((_DAT_101282b8 != 0) || (_DAT_1019cbec != 0)) {
		iVar10 = iVar10 + 0xa0;
	}
	iVar7 = 0;
	while (iVar7 <= iVar8 + 1) {
		iVar6 = 0;
		screen_x = iVar10;
		while (iVar6 < iVar8) {
			automap_type = GetAutomapType((int)lVar4 + iVar6, iVar9 - iVar6, 1);
			if (automap_type != 0) {
				DrawAutomapType(screen_x, screen_y, automap_type);
			}
			iVar6 = iVar6 + 1;
			screen_x = screen_x + _DAT_10127e6c;
		}
		iVar6 = 0;
		iVar9 = iVar9 + 1;
		screen_x_00 = iVar10 - _DAT_10127e68;
		screen_x = screen_y + _DAT_10127e64;
		while (iVar6 <= iVar8) {
			automap_type = GetAutomapType((int)lVar4 + iVar6, iVar9 - iVar6, 1);
			if (automap_type != 0) {
				DrawAutomapType(screen_x_00, screen_x, automap_type);
			}
			iVar6 = iVar6 + 1;
			screen_x_00 = screen_x_00 + _DAT_10127e6c;
		}
		lVar4 = lVar4 + 1;
		iVar7 = iVar7 + 1;
		screen_y = screen_y + _DAT_10127e68;
	}
	DrawAutomapPlr();
	DrawAutomapGame();
	return;
}

void SetAutomapView(int x, int y)

{
	int y_00;
	uint x_00;
	int iVar1;
	ushort uVar2;
	ushort uVar3;
	WORD WVar4;

	x_00 = (int)((longlong)x - 0x10U) >> 1;
	y_00 = y + -0x10 >> 1;
	if ((((-1 < (longlong)((longlong)x - 0x10U & 0xffffffff00000000 | (ulonglong)x_00)) && ((int)x_00 < 0x28)) && (-1 < y_00)) && (y_00 < 0x28)) {
		iVar1 = x_00 * 0x28;
		(&DAT_101273ea)[iVar1 + y_00] = 1;
		WVar4 = GetAutomapType(x_00, y_00, 0);
		uVar2 = WVar4 & 0xf;
		uVar3 = WVar4 & 0x4000;
		if (uVar2 == 4) {
			if (uVar3 == 0) {
				WVar4 = GetAutomapType(x_00 - 1, y_00, 0);
				if ((WVar4 & 0x4000) != 0) {
					*(undefined *)(iVar1 + y_00 + 0x101273c2) = 1;
				}
				WVar4 = GetAutomapType(x_00, y_00 + -1, 0);
				if ((WVar4 & 0x4000) != 0) {
					*(undefined *)(iVar1 + y_00 + 0x101273e9) = 1;
				}
				WVar4 = GetAutomapType(x_00 - 1, y_00 + -1, 0);
				if ((WVar4 & 0x4000) != 0) {
					*(undefined *)(iVar1 + y_00 + 0x101273c1) = 1;
				}
			} else {
				WVar4 = GetAutomapType(x_00, y_00 + 1, 0);
				if (WVar4 == 0x4007) {
					*(undefined *)(iVar1 + y_00 + 0x101273eb) = 1;
				}
				WVar4 = GetAutomapType(x_00 + 1, y_00, 0);
				if (WVar4 == 0x4007) {
					*(undefined *)(iVar1 + y_00 + 0x10127412) = 1;
				}
			}
		} else {
			if (uVar2 < 4) {
				if (uVar2 == 2) {
					if (uVar3 == 0) {
						WVar4 = GetAutomapType(x_00 - 1, y_00, 0);
						if ((WVar4 & 0x4000) != 0) {
							*(undefined *)(iVar1 + y_00 + 0x101273c2) = 1;
						}
					} else {
						WVar4 = GetAutomapType(x_00, y_00 + 1, 0);
						if (WVar4 == 0x4007) {
							*(undefined *)(iVar1 + y_00 + 0x101273eb) = 1;
						}
					}
				} else {
					if (1 < uVar2) {
						if (uVar3 == 0) {
							WVar4 = GetAutomapType(x_00, y_00 + -1, 0);
							if ((WVar4 & 0x4000) != 0) {
								*(undefined *)(iVar1 + y_00 + 0x101273e9) = 1;
							}
						} else {
							WVar4 = GetAutomapType(x_00 + 1, y_00, 0);
							if (WVar4 == 0x4007) {
								*(undefined *)(iVar1 + y_00 + 0x10127412) = 1;
							}
						}
					}
				}
			} else {
				if (uVar2 == 6) {
					if (uVar3 == 0) {
						WVar4 = GetAutomapType(x_00, y_00 + -1, 0);
						if ((WVar4 & 0x4000) != 0) {
							*(undefined *)(iVar1 + y_00 + 0x101273e9) = 1;
						}
					} else {
						WVar4 = GetAutomapType(x_00 - 1, y_00, 0);
						if ((WVar4 & 0x4000) != 0) {
							*(undefined *)(iVar1 + y_00 + 0x101273c2) = 1;
						}
						WVar4 = GetAutomapType(x_00 + 1, y_00, 0);
						if (WVar4 == 0x4007) {
							*(undefined *)(iVar1 + y_00 + 0x10127412) = 1;
						}
					}
				} else {
					if (uVar2 < 6) {
						if (uVar3 == 0) {
							WVar4 = GetAutomapType(x_00 - 1, y_00, 0);
							if ((WVar4 & 0x4000) != 0) {
								*(undefined *)(iVar1 + y_00 + 0x101273c2) = 1;
							}
						} else {
							WVar4 = GetAutomapType(x_00, y_00 + -1, 0);
							if ((WVar4 & 0x4000) != 0) {
								*(undefined *)(iVar1 + y_00 + 0x101273e9) = 1;
							}
							WVar4 = GetAutomapType(x_00, y_00 + 1, 0);
							if (WVar4 == 0x4007) {
								*(undefined *)(iVar1 + y_00 + 0x101273eb) = 1;
							}
						}
					}
				}
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AutomapZoomReset(void)

{
	uint uVar1;

	uVar1 = (_DAT_10127e70 << 6) / 100 + ((_DAT_10127e70 << 6) >> 0x1f);
	_DAT_10127e6c = uVar1 + (uVar1 >> 0x1f);
	_DAT_10127e68 = _DAT_10127e6c >> 1;
	_DAT_10127e64 = _DAT_10127e68 >> 1;
	_DAT_10127e60 = _DAT_10127e64 >> 1;
	_DAT_10127e4c = 0;
	_DAT_10127e50 = 0;
	_DAT_10127e5c = _DAT_10127e60 >> 1;
	return;
}
