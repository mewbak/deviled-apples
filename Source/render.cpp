
undefined8 FUN_100bf990(uint *param_1, int *param_2, int *param_3, int param_4)

{
	uint uVar1;
	int iVar2;
	longlong lVar3;

	lVar3 = (ulonglong)*param_1 - (ulonglong) * (uint *)PTR_DAT_100f17c8;
	if (-1 < lVar3) {
		iVar2 = (int)lVar3 + 0x3ff >> 8;
		if (0x2a < iVar2) {
			*param_1 = *param_1 - 0x2d00;
			*param_2 = *param_2 + 0x100;
			return 0;
		}
		uVar1 = *(uint *)(PTR_DAT_100f215c + iVar2 * 4);
		*param_2 = *param_2 + *(int *)(PTR_DAT_100f2158 + (((int)uVar1 >> 2) + (uint)((int)uVar1 < 0 && (uVar1 & 3) != 0)) * 4);
		*param_1 = *param_1 + uVar1 * -0xc0;
		*param_3 = *param_3 + ((int)uVar1 >> 1);
		if (param_4 != 0) {
			*(uint *)PTR_DAT_100f2154 = *(uint *)PTR_DAT_100f2154 ^ (uint)(((int)uVar1 >> 1 & 2U) != 0);
		}
	}
	return 1;
}

undefined8 FUN_100bfa58(uint *param_1, int *param_2, int *param_3, int param_4)

{
	uint uVar1;
	int iVar2;
	longlong lVar3;

	lVar3 = (ulonglong)*param_1 - (ulonglong) * (uint *)PTR_DAT_100f17c8;
	if (-1 < lVar3) {
		iVar2 = (int)lVar3 + 0x3ff >> 8;
		if (0x2d < iVar2) {
			*param_1 = *param_1 - 0x3000;
			*param_2 = *param_2 + 0x120;
			return 0;
		}
		uVar1 = *(uint *)(PTR_DAT_100f215c + iVar2 * 4);
		*param_2 = *param_2 + *(int *)(PTR_DAT_100f2150 + (((int)uVar1 >> 2) + (uint)((int)uVar1 < 0 && (uVar1 & 3) != 0)) * 4);
		*param_1 = *param_1 + uVar1 * -0xc0;
		*param_3 = *param_3 - ((int)uVar1 >> 1);
		if (param_4 != 0) {
			*(uint *)PTR_DAT_100f2154 = *(uint *)PTR_DAT_100f2154 ^ (uint)(((int)uVar1 >> 1 & 2U) != 0);
		}
	}
	return 1;
}

// WARNING: Removing unreachable block (ram,0x100bfb48)
// WARNING: Removing unreachable block (ram,0x100bfbfc)
// WARNING: Removing unreachable block (ram,0x100bfb5c)
// WARNING: Removing unreachable block (ram,0x100bfc10)

void world_draw_black_tile_part(longlong param_1, undefined4 param_2)

{
	ulonglong uVar1;
	longlong lVar2;
	uint uVar4;
	ulonglong uVar3;
	undefined4 *puVar5;
	longlong lVar6;
	longlong lVar7;

	lVar7 = 0x1e;
	lVar6 = 0x3c;
	do {
		param_1 = param_1 + lVar7;
		uVar4 = (uint)(0x40 - lVar6);
		lVar2 = param_1 + (0x40 - lVar6);
		uVar3 = (ulonglong)(uVar4 >> 2);
		if (3 < (int)uVar4) {
			uVar1 = (ulonglong)(uVar4 >> 5);
			if (uVar4 >> 5 != 0) {
				do {
					puVar5 = (undefined4 *)param_1;
					*puVar5 = param_2;
					puVar5[1] = param_2;
					puVar5[2] = param_2;
					puVar5[3] = param_2;
					puVar5[4] = param_2;
					puVar5[5] = param_2;
					puVar5[6] = param_2;
					puVar5[7] = param_2;
					param_1 = param_1 + 0x20;
					uVar1 = uVar1 - 1;
				} while (uVar1 != 0);
				uVar3 = uVar3 & 7;
				if ((uVar4 >> 2 & 7) == 0)
					goto LAB_100bfbc0;
			}
			do {
				*(undefined4 *)param_1 = param_2;
				param_1 = param_1 + 4;
				uVar3 = uVar3 - 1;
			} while (uVar3 != 0);
		}
	LAB_100bfbc0:
		param_1 = 0x340 - lVar7;
		lVar6 = lVar6 + -4;
		lVar7 = lVar7 + -2;
		param_1 = lVar2 - param_1;
	} while (-1 < lVar7);
	lVar7 = 2;
	lVar6 = 4;
	do {
		param_1 = param_1 + lVar7;
		uVar4 = (uint)(0x40 - lVar6);
		lVar2 = param_1 + (0x40 - lVar6);
		uVar3 = (ulonglong)(uVar4 >> 2);
		if (3 < (int)uVar4) {
			uVar1 = (ulonglong)(uVar4 >> 5);
			if (uVar4 >> 5 != 0) {
				do {
					puVar5 = (undefined4 *)param_1;
					*puVar5 = param_2;
					puVar5[1] = param_2;
					puVar5[2] = param_2;
					puVar5[3] = param_2;
					puVar5[4] = param_2;
					puVar5[5] = param_2;
					puVar5[6] = param_2;
					puVar5[7] = param_2;
					param_1 = param_1 + 0x20;
					uVar1 = uVar1 - 1;
				} while (uVar1 != 0);
				uVar3 = uVar3 & 7;
				if ((uVar4 >> 2 & 7) == 0)
					goto LAB_100bfc74;
			}
			do {
				*(undefined4 *)param_1 = param_2;
				param_1 = param_1 + 4;
				uVar3 = uVar3 - 1;
			} while (uVar3 != 0);
		}
	LAB_100bfc74:
		param_1 = 0x340 - lVar7;
		lVar7 = lVar7 + 2;
		lVar6 = lVar6 + 4;
		param_1 = lVar2 - param_1;
		if (0x1e < (int)lVar7) {
			return;
		}
	} while (true);
}

void drawUpperScreen(undefined8 param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	char cVar1;
	byte bVar2;
	int iVar3;
	uint uVar4;
	undefined *puVar5;
	int *piVar6;
	uint *puVar7;
	int *piVar8;
	undefined **ppuVar9;
	ulonglong uVar10;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	longlong lVar11;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 local_24[2];
	undefined4 local_1c;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	piVar8 = _DAT_100f2144;
	puVar7 = _DAT_100f2080;
	piVar6 = _DAT_100f1d40;
	puVar5 = PTR_DAT_100f19e8;
	ppuVar9 = &toc;
	local_1c = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	lVar11 = 0;
	if (*_DAT_100f1d3c != 0) {
		cVar1 = *_DAT_100f2084;
		if (cVar1 == '\x01') {
			bVar2 = PTR_DAT_100f1d94[*_DAT_100f2088];
			if (bVar2 != 2) {
				if (bVar2 < 2) {
					if (bVar2 == 0)
						goto LAB_100c82a8;
				} else {
					if (3 < bVar2)
						goto LAB_100c82a8;
				}
				lVar11 = ZEXT48(PTR_DAT_100f214c) + 0x7c;
			}
		} else {
			if (((('\0' < cVar1) && (cVar1 < '\x03')) && ((byte)PTR_DAT_100f1d94[*_DAT_100f2088] < 4)) && (1 < (byte)PTR_DAT_100f1d94[*_DAT_100f2088])) {
				lVar11 = (ulonglong)_DAT_100f2148 + 0x7c;
			}
		}
	}
LAB_100c82a8:
	*(undefined **)_DAT_100f2144 = PTR_DAT_100f1d84;
	iVar3 = *piVar6;
	if (iVar3 == 0) {
		uVar4 = *puVar7;
		if ((uVar4 & 0x8000) != 0) {
			*puVar7 = (uVar4 & 0xf000) + *(int *)(*piVar8 + (uVar4 & 0xfff) * 0x40);
		}
		local_24[0] = *(undefined4 *)(*(int *)puVar5 + (*puVar7 & 0xfff) * 4);
		uVar10 = FUN_100c8484((byte *)local_24);
		FUN_100dbf44(param_1, (ulonglong) * (uint *)puVar5 + uVar10, 0, lVar11);
	} else {
		if (iVar3 == (int)(char)*PTR_DAT_100f1f04) {
			uVar4 = *puVar7;
			if ((uVar4 & 0x8000) != 0) {
				*puVar7 = (uVar4 & 0xf000) + *(int *)(*piVar8 + (uVar4 & 0xfff) * 0x40);
			}
			local_24[0] = *(undefined4 *)(*(int *)puVar5 + (*puVar7 & 0xfff) * 4);
			uVar10 = FUN_100c8484((byte *)local_24);
			FUN_100dbf44(param_1, (ulonglong) * (uint *)puVar5 + uVar10, 0, lVar11);
		} else {
			uVar4 = *puVar7;
			if ((uVar4 & 0x8000) == 0) {
				local_24[0] = *(undefined4 *)(*(int *)puVar5 + (uVar4 & 0xfff) * 4);
				uVar10 = FUN_100c8484((byte *)local_24);
				FUN_100dbf44(param_1, (ulonglong) * (uint *)puVar5 + uVar10,
				    (ulonglong) * (uint *)ppuVar9[-0x1ddc] + (ulonglong)(uint)(*piVar6 << 8), lVar11);
			} else {
				FUN_100dbf44(param_1, (ulonglong) * (uint *)PTR_DAT_100f1a58 + (ulonglong) * (uint *)(*piVar8 + ((uVar4 & 0xfff) * 0x10 + iVar3) * 4), 0,
				    lVar11, (ulonglong)uVar4, param_6, param_7, param_8);
			}
		}
	}
	return;
}

ulonglong FUN_100c8484(byte *param_1)

{
	return (ulonglong)param_1[3] << 0x18 | (ulonglong)param_1[2] << 0x10 | (ulonglong)param_1[1] << 8
	    | (ulonglong)*param_1;
}

void drawLowerScreen(undefined8 param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	char cVar1;
	byte bVar2;
	int iVar3;
	uint uVar4;
	undefined *puVar5;
	int *piVar6;
	uint *puVar7;
	int *piVar8;
	undefined **ppuVar9;
	ulonglong uVar10;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	longlong lVar11;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 local_24[2];
	undefined4 local_1c;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	piVar8 = _DAT_100f2144;
	puVar7 = _DAT_100f2080;
	piVar6 = _DAT_100f1d40;
	puVar5 = PTR_DAT_100f19e8;
	ppuVar9 = &toc;
	local_1c = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	lVar11 = 0;
	if (*_DAT_100f1d3c != 0) {
		cVar1 = *_DAT_100f2084;
		if (cVar1 == '\x01') {
			bVar2 = PTR_DAT_100f1d94[*_DAT_100f2088];
			if (bVar2 != 2) {
				if (bVar2 < 2) {
					if (bVar2 == 0)
						goto LAB_100c856c;
				} else {
					if (3 < bVar2)
						goto LAB_100c856c;
				}
				lVar11 = ZEXT48(PTR_DAT_100f214c) + 0x7c;
			}
		} else {
			if (((('\0' < cVar1) && (cVar1 < '\x03')) && ((byte)PTR_DAT_100f1d94[*_DAT_100f2088] < 4)) && (1 < (byte)PTR_DAT_100f1d94[*_DAT_100f2088])) {
				lVar11 = (ulonglong)_DAT_100f2148 + 0x7c;
			}
		}
	}
LAB_100c856c:
	*(undefined **)_DAT_100f2144 = PTR_DAT_100f1d84;
	iVar3 = *piVar6;
	if (iVar3 == 0) {
		uVar4 = *puVar7;
		if ((uVar4 & 0x8000) != 0) {
			*puVar7 = (uVar4 & 0xf000) + *(int *)(*piVar8 + (uVar4 & 0xfff) * 0x40);
		}
		local_24[0] = *(undefined4 *)(*(int *)puVar5 + (*puVar7 & 0xfff) * 4);
		uVar10 = FUN_100c8484((byte *)local_24);
		FUN_100dbf44(param_1, (ulonglong) * (uint *)puVar5 + uVar10, 0, lVar11);
	} else {
		if (iVar3 == (int)(char)*PTR_DAT_100f1f04) {
			uVar4 = *puVar7;
			if ((uVar4 & 0x8000) != 0) {
				*puVar7 = (uVar4 & 0xf000) + *(int *)(*piVar8 + (uVar4 & 0xfff) * 0x40);
			}
			local_24[0] = *(undefined4 *)(*(int *)puVar5 + (*puVar7 & 0xfff) * 4);
			uVar10 = FUN_100c8484((byte *)local_24);
			FUN_100dbf44(param_1, (ulonglong) * (uint *)puVar5 + uVar10, 0, lVar11);
		} else {
			uVar4 = *puVar7;
			if ((uVar4 & 0x8000) == 0) {
				local_24[0] = *(undefined4 *)(*(int *)puVar5 + (uVar4 & 0xfff) * 4);
				uVar10 = FUN_100c8484((byte *)local_24);
				FUN_100dbf44(param_1, (ulonglong) * (uint *)puVar5 + uVar10,
				    (ulonglong) * (uint *)ppuVar9[-0x1ddc] + (ulonglong)(uint)(*piVar6 << 8), lVar11);
			} else {
				FUN_100dbf44(param_1, (ulonglong) * (uint *)PTR_DAT_100f1a58 + (ulonglong) * (uint *)(*piVar8 + ((uVar4 & 0xfff) * 0x10 + iVar3) * 4), 0,
				    lVar11, (ulonglong)uVar4, param_6, param_7, param_8);
			}
		}
	}
	return;
}

void world_draw_black_tile(longlong param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	world_draw_black_tile_part(param_1, 0);
	return;
}
