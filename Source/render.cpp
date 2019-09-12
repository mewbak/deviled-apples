
longlong FUN_100bf8d4(undefined8 param_1,
    undefined8 param_2,
    undefined4 *param_3,
    undefined4 *param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	undefined4 uVar1;
	undefined *puVar2;
	char cVar3;
	HANDLE pvVar5;
	longlong lVar4;
	undefined uVar6;
	undefined uVar7;

	uVar7 = SUB41(param_4, 0);
	uVar6 = SUB41(param_3, 0);
	puVar2 = (undefined *)(ZEXT48(register0x0000000c) - 0x90);
	*(BADSPACEBASE **)puVar2 = register0x0000000c;
	pvVar5 = GetCurrentProcess(*puVar2);
	lVar4 = (longlong)(int)pvVar5;
	if ((short)pvVar5 == 0) {
		cVar3 = (char)(ZEXT48(register0x0000000c) - 0x90);
		*(undefined4 *)(puVar2 + 0x40) = 0x3c;
		*(undefined4 *)(puVar2 + 0x44) = param_1._4_4_;
		*(undefined4 *)(puVar2 + 0x78) = param_2._4_4_;
		lVar4 = GetProcessInformation(cVar3 + '8', cVar3 + '@', uVar6, uVar7, param_5, param_6, param_7, param_8,
		    puVar2[0xb], puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
		if ((short)lVar4 == 0) {
			if (param_3 != (undefined4 *)0x0) {
				*param_3 = *(undefined4 *)(puVar2 + 0x54);
			}
			if (param_4 != (undefined4 *)0x0) {
				uVar1 = *(undefined4 *)(puVar2 + 0x3c);
				*param_4 = *(undefined4 *)(puVar2 + 0x38);
				param_4[1] = uVar1;
			}
			lVar4 = 0;
		}
	}
	return lVar4;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_100bf990(uint *param_1, int *param_2, int *param_3, int param_4)

{
	uint uVar1;
	int iVar2;
	longlong lVar3;

	lVar3 = (ulonglong)*param_1 - (ulonglong)_DAT_1019fd84;
	if (-1 < lVar3) {
		iVar2 = (int)lVar3 + 0x3ff >> 8;
		if (0x2a < iVar2) {
			*param_1 = *param_1 - 0x2d00;
			*param_2 = *param_2 + 0x100;
			return 0;
		}
		uVar1 = *(uint *)(&DAT_10121608 + iVar2 * 4);
		*param_2 = *param_2 + *(int *)(&DAT_1012170c + (((int)uVar1 >> 2) + (uint)((int)uVar1 < 0 && (uVar1 & 3) != 0)) * 4);
		*param_1 = *param_1 + uVar1 * -0xc0;
		*param_3 = *param_3 + ((int)uVar1 >> 1);
		if (param_4 != 0) {
			_DAT_101b2060 = _DAT_101b2060 ^ (uint)(((int)uVar1 >> 1 & 2U) != 0);
		}
	}
	return 1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_100bfa58(uint *param_1, int *param_2, int *param_3, int param_4)

{
	uint uVar1;
	int iVar2;
	longlong lVar3;

	lVar3 = (ulonglong)*param_1 - (ulonglong)_DAT_1019fd84;
	if (-1 < lVar3) {
		iVar2 = (int)lVar3 + 0x3ff >> 8;
		if (0x2d < iVar2) {
			*param_1 = *param_1 - 0x3000;
			*param_2 = *param_2 + 0x120;
			return 0;
		}
		uVar1 = *(uint *)(&DAT_10121608 + iVar2 * 4);
		*param_2 = *param_2 + *(int *)(&DAT_101216c8 + (((int)uVar1 >> 2) + (uint)((int)uVar1 < 0 && (uVar1 & 3) != 0)) * 4);
		*param_1 = *param_1 + uVar1 * -0xc0;
		*param_3 = *param_3 - ((int)uVar1 >> 1);
		if (param_4 != 0) {
			_DAT_101b2060 = _DAT_101b2060 ^ (uint)(((int)uVar1 >> 1 & 2U) != 0);
		}
	}
	return 1;
}

// WARNING: Removing unreachable block (ram,0x100bfb48)
// WARNING: Removing unreachable block (ram,0x100bfbfc)
// WARNING: Removing unreachable block (ram,0x100bfb5c)
// WARNING: Removing unreachable block (ram,0x100bfc10)

void world_draw_black_tile(BYTE *pBuff)

{
	ulonglong uVar1;
	longlong lVar2;
	longlong lVar3;
	undefined4 in_r4;
	uint uVar5;
	ulonglong uVar4;
	undefined4 *puVar6;
	longlong lVar7;
	longlong lVar8;

	lVar2 = (longlong)(int)pBuff;
	lVar8 = 0x1e;
	lVar7 = 0x3c;
	do {
		lVar2 = lVar2 + lVar8;
		uVar5 = (uint)(0x40 - lVar7);
		lVar3 = lVar2 + (0x40 - lVar7);
		uVar4 = (ulonglong)(uVar5 >> 2);
		if (3 < (int)uVar5) {
			uVar1 = (ulonglong)(uVar5 >> 5);
			if (uVar5 >> 5 != 0) {
				do {
					puVar6 = (undefined4 *)lVar2;
					*puVar6 = in_r4;
					puVar6[1] = in_r4;
					puVar6[2] = in_r4;
					puVar6[3] = in_r4;
					puVar6[4] = in_r4;
					puVar6[5] = in_r4;
					puVar6[6] = in_r4;
					puVar6[7] = in_r4;
					lVar2 = lVar2 + 0x20;
					uVar1 = uVar1 - 1;
				} while (uVar1 != 0);
				uVar4 = uVar4 & 7;
				if ((uVar5 >> 2 & 7) == 0)
					goto LAB_100bfbc0;
			}
			do {
				*(undefined4 *)lVar2 = in_r4;
				lVar2 = lVar2 + 4;
				uVar4 = uVar4 - 1;
			} while (uVar4 != 0);
		}
	LAB_100bfbc0:
		lVar2 = 0x340 - lVar8;
		lVar7 = lVar7 + -4;
		lVar8 = lVar8 + -2;
		lVar2 = lVar3 - lVar2;
	} while (-1 < lVar8);
	lVar8 = 2;
	lVar7 = 4;
	do {
		lVar2 = lVar2 + lVar8;
		uVar5 = (uint)(0x40 - lVar7);
		lVar3 = lVar2 + (0x40 - lVar7);
		uVar4 = (ulonglong)(uVar5 >> 2);
		if (3 < (int)uVar5) {
			uVar1 = (ulonglong)(uVar5 >> 5);
			if (uVar5 >> 5 != 0) {
				do {
					puVar6 = (undefined4 *)lVar2;
					*puVar6 = in_r4;
					puVar6[1] = in_r4;
					puVar6[2] = in_r4;
					puVar6[3] = in_r4;
					puVar6[4] = in_r4;
					puVar6[5] = in_r4;
					puVar6[6] = in_r4;
					puVar6[7] = in_r4;
					lVar2 = lVar2 + 0x20;
					uVar1 = uVar1 - 1;
				} while (uVar1 != 0);
				uVar4 = uVar4 & 7;
				if ((uVar5 >> 2 & 7) == 0)
					goto LAB_100bfc74;
			}
			do {
				*(undefined4 *)lVar2 = in_r4;
				lVar2 = lVar2 + 4;
				uVar4 = uVar4 - 1;
			} while (uVar4 != 0);
		}
	LAB_100bfc74:
		lVar2 = 0x340 - lVar8;
		lVar8 = lVar8 + 2;
		lVar7 = lVar7 + 4;
		lVar2 = lVar3 - lVar2;
		if (0x1e < (int)lVar8) {
			return;
		}
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void drawUpperScreen(BYTE *pBuff)

{
	undefined **ppuVar1;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
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

	ppuVar1 = PTR_DAT_100f2144;
	local_1c = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	*PTR_DAT_100f2144 = &DAT_10139340;
	if (_DAT_1019fd94 == 0) {
		if ((_level_cel_block & 0x8000) != 0) {
			_level_cel_block = (_level_cel_block & 0xf000) + *(int *)(*ppuVar1 + (_level_cel_block & 0xfff) * 0x40);
		}
		local_24[0] = *(undefined4 *)(_DAT_1013b344 + (_level_cel_block & 0xfff) * 4);
		BESwap_100c8484((byte *)local_24);
		fnMenu((BOOL)pBuff);
	} else {
		if (_DAT_1019fd94 == (int)DAT_101b2024) {
			if ((_level_cel_block & 0x8000) != 0) {
				_level_cel_block = (_level_cel_block & 0xf000) + *(int *)(*ppuVar1 + (_level_cel_block & 0xfff) * 0x40);
			}
			local_24[0] = *(undefined4 *)(_DAT_1013b344 + (_level_cel_block & 0xfff) * 4);
			BESwap_100c8484((byte *)local_24);
			fnMenu((BOOL)pBuff);
		} else {
			if ((_level_cel_block & 0x8000) == 0) {
				local_24[0] = *(undefined4 *)(_DAT_1013b344 + (_level_cel_block & 0xfff) * 4);
				BESwap_100c8484((byte *)local_24);
				fnMenu((BOOL)pBuff);
			} else {
				fnMenu((BOOL)pBuff);
			}
		}
	}
	return;
}

ulonglong BESwap_100c8484(byte *param_1)

{
	return (ulonglong)param_1[3] << 0x18 | (ulonglong)param_1[2] << 0x10 | (ulonglong)param_1[1] << 8 | (ulonglong)*param_1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void drawLowerScreen(BYTE *pBuff)

{
	undefined **ppuVar1;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
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

	ppuVar1 = PTR_DAT_100f2144;
	local_1c = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	*PTR_DAT_100f2144 = &DAT_10139340;
	if (_DAT_1019fd94 == 0) {
		if ((_level_cel_block & 0x8000) != 0) {
			_level_cel_block = (_level_cel_block & 0xf000) + *(int *)(*ppuVar1 + (_level_cel_block & 0xfff) * 0x40);
		}
		local_24[0] = *(undefined4 *)(_DAT_1013b344 + (_level_cel_block & 0xfff) * 4);
		BESwap_100c8484((byte *)local_24);
		fnMenu((BOOL)pBuff);
	} else {
		if (_DAT_1019fd94 == (int)DAT_101b2024) {
			if ((_level_cel_block & 0x8000) != 0) {
				_level_cel_block = (_level_cel_block & 0xf000) + *(int *)(*ppuVar1 + (_level_cel_block & 0xfff) * 0x40);
			}
			local_24[0] = *(undefined4 *)(_DAT_1013b344 + (_level_cel_block & 0xfff) * 4);
			BESwap_100c8484((byte *)local_24);
			fnMenu((BOOL)pBuff);
		} else {
			if ((_level_cel_block & 0x8000) == 0) {
				local_24[0] = *(undefined4 *)(_DAT_1013b344 + (_level_cel_block & 0xfff) * 4);
				BESwap_100c8484((byte *)local_24);
				fnMenu((BOOL)pBuff);
			} else {
				fnMenu((BOOL)pBuff);
			}
		}
	}
	return;
}

void thunk_world_draw_black_tile(BYTE *pBuff)

{
	world_draw_black_tile(pBuff);
	return;
}