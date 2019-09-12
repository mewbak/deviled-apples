
void mpqapi_xor_buf(byte *param_1)

{
	*param_1 = *param_1 ^ 0xab;
	param_1[1] = param_1[1] ^ 0x56;
	param_1[2] = param_1[2] ^ 0xac;
	param_1[3] = param_1[3] ^ 0x58;
	param_1[4] = param_1[4] ^ 0xb0;
	param_1[5] = param_1[5] ^ 0x61;
	param_1[6] = param_1[6] ^ 0xc3;
	param_1[7] = param_1[7] ^ 0x87;
	return;
}

undefined8
mpqapi_reg_load_modification_time(byte *param_1, uint param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined *puVar1;
	int iVar3;
	undefined8 uVar2;

	puVar1 = (undefined *)(ZEXT48(register0x0000000c) - 0x50);
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	memset((char)param_1, (char)param_2, param_3, param_4, param_5, param_6, param_7, param_8, puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
	iVar3 = SRegLoadData((char)*(undefined4 *)(*(int *)(puVar1 + 0x14) + -0x75c8),
	    (char)*(undefined4 *)(*(int *)(puVar1 + 0x14) + -0x5ca4), 0, (char)param_1,
	    (char)param_2, (char)(ZEXT48(register0x0000000c) - 0x50) + '8', param_7, param_8, puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
	if (iVar3 == 0) {
		uVar2 = 0;
	} else {
		if (*(uint *)(puVar1 + 0x38) == param_2) {
			while (7 < param_2) {
				mpqapi_xor_buf(param_1, *puVar1);
				param_2 = param_2 - 8;
				param_1 = param_1 + 8;
			}
			uVar2 = 1;
		} else {
			uVar2 = 0;
		}
	}
	return uVar2;
}

void mpqapi_reg_store_modification_time(byte *param_1, uint param_2, undefined param_3, undefined param_4, undefined param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	ulonglong uVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	uint uVar5;
	byte *pbVar6;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	lVar4 = (longlong)param_8;
	lVar3 = (longlong)param_7;
	lVar2 = (longlong)param_6;
	uVar1 = ZEXT48(&toc);
	pbVar6 = param_1;
	uVar5 = param_2;
	while (7 < uVar5) {
		mpqapi_xor_buf(pbVar6);
		uVar5 = uVar5 - 8;
		pbVar6 = pbVar6 + 8;
	}
	SRegSaveData((char)*(undefined4 *)((int)uVar1 + -0x75c8),
	    (char)*(undefined4 *)((int)uVar1 + -0x5ca4), 0, (char)param_1, (char)param_2, (char)lVar2, (char)lVar3, (char)lVar4, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	return;
}

undefined8
mpqapi_set_hidden(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined param_9, undefined param_10, undefined4 param_11, undefined4 param_12)

{
	return 1;
}

void mpqapi_store_default_time(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined param_9, undefined param_10, undefined4 param_11)

{
	return;
}

void mpqapi_store_modified_time(undefined8 param_1, int param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	undefined uVar2;
	undefined uVar3;
	longlong lVar4;
	undefined4 *puVar5;
	undefined4 in_stack_fffffde8;
	undefined in_stack_fffffdef;
	undefined4 local_20c;
	undefined4 local_1d4;
	undefined4 local_1d0;
	byte abStack168[168];

	uVar3 = SUB41(PTR_DAT_100f17e0, 0);
	if (*PTR_DAT_100f17e0 != '\x01') {
		mpqapi_reg_load_modification_time(abStack168, 0xa0, uVar3, param_4, param_5, param_6, param_7, param_8, in_stack_fffffde8);
		uVar2 = 0x18;
		uVar1 = FindFirstFile((undefined)param_1, 0x18, uVar3, param_4, param_5, param_6, param_7, param_8,
		    (char)in_stack_fffffde8, in_stack_fffffdef, local_20c);
		if ((uVar1 & 0xffffffff) != 0) {
			FindClose((char)uVar1, uVar2, uVar3, param_4, param_5, param_6, param_7, param_8,
			    (char)in_stack_fffffde8, in_stack_fffffdef, local_20c);
			lVar4 = (ZEXT48(register0x0000000c) - 0xa0) + (ulonglong)(uint)(param_2 << 4);
			puVar5 = (undefined4 *)lVar4;
			*puVar5 = local_1d4;
			puVar5[1] = local_1d0;
			mpqapi_reg_store_modification_time(abStack168, 0xa0, (char)local_1d4, (char)lVar4, param_5, param_6, param_7, param_8,
			    in_stack_fffffde8);
		}
	}
	return;
}

void mpqapi_store_creation_time(undefined8 param_1, int param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	undefined uVar2;
	undefined uVar5;
	longlong lVar3;
	undefined4 *puVar4;
	undefined4 in_stack_fffffde8;
	undefined in_stack_fffffdef;
	undefined4 local_20c;
	undefined4 local_1e4;
	undefined4 local_1e0;
	byte abStack168[168];

	uVar5 = SUB41(PTR_DAT_100f17e0, 0);
	if (*PTR_DAT_100f17e0 != '\x01') {
		mpqapi_reg_load_modification_time(abStack168, 0xa0, uVar5, param_4, param_5, param_6, param_7, param_8, in_stack_fffffde8);
		uVar2 = 0x18;
		uVar1 = FindFirstFile((undefined)param_1, 0x18, uVar5, param_4, param_5, param_6, param_7, param_8,
		    (char)in_stack_fffffde8, in_stack_fffffdef, local_20c);
		if ((uVar1 & 0xffffffff) != 0) {
			FindClose((char)uVar1, uVar2, uVar5, param_4, param_5, param_6, param_7, param_8,
			    (char)in_stack_fffffde8, in_stack_fffffdef, local_20c);
			lVar3 = (ZEXT48(register0x0000000c) - 0xa8) + (ulonglong)(uint)(param_2 << 4);
			puVar4 = (undefined4 *)lVar3;
			*puVar4 = local_1e4;
			puVar4[1] = local_1e0;
			mpqapi_reg_store_modification_time((byte *)(ZEXT48(register0x0000000c) - 0xa8), 0xa0, (char)lVar3, param_4, param_5,
			    param_6, param_7, param_8, in_stack_fffffde8);
		}
	}
	return;
}

ulonglong mpqapi_new_block(int *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	ulonglong uVar2;
	int *piVar3;
	longlong lVar4;
	int iVar5;
	longlong lVar6;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	lVar4 = 0;
	lVar6 = 0x200;
	uVar2 = (ulonglong)_DAT_100f4274;
	while (true) {
		piVar3 = (int *)uVar2;
		iVar5 = (int)lVar4;
		if ((((*piVar3 == 0) && (piVar3[1] == 0)) && (piVar3[3] == 0)) && (piVar3[2] == 0)) {
			if (param_1 == (int *)0x0) {
				return uVar2;
			}
			*param_1 = iVar5;
			return uVar2;
		}
		uVar1 = uVar2 + 0x10;
		piVar3 = (int *)uVar1;
		if (((*piVar3 == 0) && (piVar3[1] == 0)) && ((piVar3[3] == 0 && (piVar3[2] == 0)))) {
			if (param_1 == (int *)0x0) {
				return uVar1;
			}
			*param_1 = iVar5 + 1;
			return uVar1;
		}
		uVar1 = uVar2 + 0x20;
		piVar3 = (int *)uVar1;
		if (((*piVar3 == 0) && (piVar3[1] == 0)) && ((piVar3[3] == 0 && (piVar3[2] == 0))))
			break;
		uVar1 = uVar2 + 0x30;
		piVar3 = (int *)uVar1;
		if ((((*piVar3 == 0) && (piVar3[1] == 0)) && (piVar3[3] == 0)) && (piVar3[2] == 0)) {
			if (param_1 == (int *)0x0) {
				return uVar1;
			}
			*param_1 = iVar5 + 3;
			return uVar1;
		}
		lVar4 = lVar4 + 4;
		uVar2 = uVar2 + 0x40;
		lVar6 = lVar6 + -1;
		if (lVar6 == 0) {
			app_fatal(_DAT_100f3328, uVar2, lVar4, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffd8, in_stack_ffffffdc,
			    in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec,
			    in_stack_fffffff0, in_stack_fffffff4);
			return 0;
		}
	}
	if (param_1 == (int *)0x0) {
		return uVar1;
	}
	*param_1 = iVar5 + 2;
	return uVar1;
}

void mpqapi_free_block(ulonglong param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	bool bVar1;
	undefined **ppuVar2;
	ulonglong param_1_00;
	undefined4 *puVar3;
	ulonglong uVar4;
	ulonglong param_3_00;
	uint *puVar5;
	undefined7 uVar6;
	undefined uVar7;
	undefined7 uVar8;
	undefined uVar9;
	ulonglong uVar10;
	longlong lVar11;
	undefined4 param_9_00;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	uVar8 = (undefined7)((ulonglong)param_5 >> 8);
	uVar9 = (undefined)param_5;
	uVar6 = (undefined7)((ulonglong)param_4 >> 8);
	uVar7 = (undefined)param_4;
	ppuVar2 = &toc;
	uVar10 = param_1 + param_2;
	lVar11 = 0x800;
	param_3_00 = (ulonglong)_DAT_100f4274;
	uVar4 = param_2;
	while (true) {
		puVar5 = (uint *)param_3_00;
		param_1_00 = (ulonglong)*puVar5;
		if ((((*puVar5 != 0) && (puVar5[3] == 0)) && (puVar5[2] == 0)) && ((uVar4 = (ulonglong)puVar5[1], (param_1 & 0xffffffff) == (param_1_00 + uVar4 & 0xffffffff) || (bVar1 = param_1_00 == (uVar10 & 0xffffffff), param_1_00 = param_1, bVar1))))
			break;
		param_3_00 = param_3_00 + 0x10;
		lVar11 = lVar11 + -1;
		if (lVar11 == 0) {
			if ((ulonglong)_DAT_100f426c < (uVar10 & 0xffffffff)) {
				ppuVar2 = &toc;
				app_fatal(_DAT_100f3324, uVar4, param_3_00, param_4, param_5, param_6, param_7, param_8,
				    param_9_00, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc,
				    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
				    in_stack_ffffffe0, in_stack_ffffffe4);
			}
			if (ZEXT48(ppuVar2[-0x1359]) == (uVar10 & 0xffffffff)) {
				ppuVar2[-0x1359] = (undefined *)param_1;
			} else {
				uVar4 = mpqapi_new_block((int *)0x0, uVar4, param_3_00, CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9), param_6, param_7, param_8, param_9_00);
				puVar3 = (undefined4 *)uVar4;
				*(undefined **)puVar3 = (undefined *)param_1;
				puVar3[1] = (int)param_2;
				puVar3[2] = 0;
				puVar3[3] = 0;
			}
			return;
		}
	}
	memset((char)param_3_00, 0x10, (char)param_3_00, uVar7, uVar9, (char)param_6, (char)param_7,
	    (char)param_8, (char)param_9_00, in_stack_ffffffbf, local_3c);
	mpqapi_free_block(param_1_00, param_2 + uVar4, param_3_00, CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9),
	    param_6, param_7, param_8, param_9_00);
	return;
}

ulonglong mpqapi_find_free_block(uint param_1, uint *param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	ulonglong uVar2;
	uint *puVar3;
	longlong lVar4;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	lVar4 = 0x800;
	uVar2 = (ulonglong)_DAT_100f4274;
	while (true) {
		puVar3 = (uint *)uVar2;
		uVar1 = *puVar3;
		if ((((uVar1 != 0) && (puVar3[3] == 0)) && (puVar3[2] == 0)) && (param_1 <= puVar3[1]))
			break;
		uVar2 = uVar2 + 0x10;
		lVar4 = lVar4 + -1;
		if (lVar4 == 0) {
			*param_2 = param_1;
			uVar1 = _DAT_100f426c;
			_DAT_100f426c = _DAT_100f426c + param_1;
		LAB_100775b8:
			return (ulonglong)uVar1;
		}
	}
	*param_2 = param_1;
	*puVar3 = *puVar3 + param_1;
	puVar3[1] = puVar3[1] - param_1;
	if (puVar3[1] == 0) {
		memset((char)uVar2, 0x10, (char)uVar2, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	}
	goto LAB_100775b8;
}

ulonglong mpqapi_get_hash_index(uint param_1, int param_2, int param_3, int param_4)

{
	bool bVar1;
	int iVar2;
	int iVar3;

	iVar3 = 0x800;
	while (true) {
		param_1 = param_1 & 0x7ff;
		iVar2 = param_1 * 0x10;
		if ((*(int *)(_DAT_100f4270 + iVar2 + 0xc) == -1) || (bVar1 = iVar3 == 0, iVar3 = iVar3 + -1, bVar1)) {
			return 0xffffffffffffffff;
		}
		if ((param_2 == *(int *)(_DAT_100f4270 + iVar2)) && (((param_3 == *(int *)(_DAT_100f4270 + iVar2 + 4) && (param_4 == *(int *)(_DAT_100f4270 + iVar2 + 8))) && (*(int *)(_DAT_100f4270 + iVar2 + 0xc) != -2))))
			break;
		param_1 = param_1 + 1;
	}
	return (ulonglong)param_1;
}

ulonglong WriteMPQHeader(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	char cVar2;
	undefined8 uVar3;
	undefined4 uVar6;
	longlong lVar4;
	ulonglong uVar5;
	int iVar7;
	byte local_90;
	byte bStack143;
	byte bStack142;
	byte bStack141;
	byte local_8c;
	byte bStack139;
	byte bStack138;
	byte bStack137;
	undefined local_88;
	undefined uStack135;
	undefined local_86;
	undefined uStack133;
	byte local_84;
	byte bStack131;
	byte bStack130;
	byte bStack129;
	byte local_80;
	byte bStack127;
	byte bStack126;
	byte bStack125;
	byte local_7c;
	byte bStack123;
	byte bStack122;
	byte bStack121;
	byte local_78;
	byte bStack119;
	byte bStack118;
	byte bStack117;

	iVar1 = (int)(ZEXT48(register0x0000000c) - 0xd0);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	cVar2 = (char)(ZEXT48(register0x0000000c) - 0xd0);
	memset(cVar2 + '<', 0x68, param_3, param_4, param_5, param_6, param_7, param_8,
	    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	*(undefined4 *)(iVar1 + 0x3c) = 0x4d50511a;
	*(undefined4 *)(iVar1 + 0x40) = 0x20;
	uVar6 = GetFileSize((char)*(undefined4 *)(*(int *)(iVar1 + 0x14) + -0x4d54), 0, param_3, param_4,
	    param_5, param_6, param_7, param_8, *(undefined *)(iVar1 + 0xb),
	    *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	*(undefined4 *)(iVar1 + 0x44) = uVar6;
	*(undefined2 *)(iVar1 + 0x48) = 0;
	*(undefined2 *)(iVar1 + 0x4a) = 3;
	*(undefined4 *)(iVar1 + 0x4c) = 0x8068;
	*(undefined4 *)(iVar1 + 0x50) = 0x68;
	*(undefined4 *)(iVar1 + 0x54) = 0x800;
	*(undefined4 *)(iVar1 + 0x58) = 0x800;
	lVar4 = SetFilePointer((char)*(undefined4 *)(*(int *)(iVar1 + 0x14) + -0x4d54), 0, 0, 0, param_5,
	    param_6, param_7, param_8, *(undefined *)(iVar1 + 0xb),
	    *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	if ((lVar4 + 0x10000U & 0xffffffff) == 0xffff) {
		uVar5 = 0;
	} else {
		*(uint *)(iVar1 + 0x40) = (uint)bStack141 << 0x18 | (uint)bStack142 << 0x10 | (uint)bStack143 << 8 | (uint)local_90;
		*(uint *)(iVar1 + 0x44) = (uint)bStack137 << 0x18 | (uint)bStack138 << 0x10 | (uint)bStack139 << 8 | (uint)local_8c;
		*(undefined2 *)(iVar1 + 0x48) = CONCAT11(uStack135, local_88);
		*(undefined2 *)(iVar1 + 0x4a) = CONCAT11(uStack133, local_86);
		*(uint *)(iVar1 + 0x4c) = (uint)bStack129 << 0x18 | (uint)bStack130 << 0x10 | (uint)bStack131 << 8 | (uint)local_84;
		*(uint *)(iVar1 + 0x50) = (uint)bStack125 << 0x18 | (uint)bStack126 << 0x10 | (uint)bStack127 << 8 | (uint)local_80;
		*(uint *)(iVar1 + 0x54) = (uint)bStack121 << 0x18 | (uint)bStack122 << 0x10 | (uint)bStack123 << 8 | (uint)local_7c;
		*(uint *)(iVar1 + 0x58) = (uint)bStack117 << 0x18 | (uint)bStack118 << 0x10 | (uint)bStack119 << 8 | (uint)local_78;
		iVar7 = WriteFile((char)*(undefined4 *)(*(int *)(iVar1 + 0x14) + -0x4d54), cVar2 + '<', 0x68,
		    cVar2 + '8', 0, param_6, param_7, param_8, *(undefined *)(iVar1 + 0xb),
		    *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
		if (iVar7 == 0) {
			uVar5 = 0;
		} else {
			*(uint *)(iVar1 + 0x40) = (uint)bStack141 << 0x18 | (uint)bStack142 << 0x10 | (uint)bStack143 << 8 | (uint)local_90;
			*(uint *)(iVar1 + 0x44) = (uint)bStack137 << 0x18 | (uint)bStack138 << 0x10 | (uint)bStack139 << 8 | (uint)local_8c;
			*(undefined2 *)(iVar1 + 0x48) = CONCAT11(uStack135, local_88);
			*(undefined2 *)(iVar1 + 0x4a) = CONCAT11(uStack133, local_86);
			*(uint *)(iVar1 + 0x4c) = (uint)bStack129 << 0x18 | (uint)bStack130 << 0x10 | (uint)bStack131 << 8 | (uint)local_84;
			*(uint *)(iVar1 + 0x50) = (uint)bStack125 << 0x18 | (uint)bStack126 << 0x10 | (uint)bStack127 << 8 | (uint)local_80;
			*(uint *)(iVar1 + 0x54) = (uint)bStack121 << 0x18 | (uint)bStack122 << 0x10 | (uint)bStack123 << 8 | (uint)local_7c;
			*(uint *)(iVar1 + 0x58) = (uint)bStack117 << 0x18 | (uint)bStack118 << 0x10 | (uint)bStack119 << 8 | (uint)local_78;
			uVar3 = countLeadingZeros(0x68 - *(int *)(iVar1 + 0x38));
			uVar5 = (ulonglong)((uint)uVar3 >> 5 & 0xff);
		}
	}
	return uVar5;
}

ulonglong mpqapi_write_block_table(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined4 uVar2;
	int iVar3;
	longlong lVar4;
	ulonglong uVar5;
	uint *puVar6;
	int iVar7;
	uint uVar8;

	uVar2 = _DAT_100f3320;
	puVar1 = (undefined *)(ZEXT48(register0x0000000c) - 0x50);
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	lVar4 = SetFilePointer((char)_DAT_100f427c, 0x68, 0, 0, param_5, param_6, param_7, param_8, puVar1[0xb],
	    puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
	iVar3 = *(int *)(puVar1 + 0x14);
	if ((lVar4 + 0x10000U & 0xffffffff) == 0xffff) {
		uVar5 = 0;
	} else {
		puVar6 = *(uint **)(iVar3 + -0x4d5c);
		lVar4 = 0x400;
		do {
			*puVar6 = (uint) * (byte *)((int)puVar6 + 3) << 0x18 | (uint) * (byte *)((int)puVar6 + 2) << 0x10
			    | (uint) * (byte *)((int)puVar6 + 1) << 8 | (uint) * (byte *)puVar6;
			puVar6[1] = (uint) * (byte *)((int)puVar6 + 7) << 0x18 | (uint) * (byte *)((int)puVar6 + 6) << 0x10 | (uint) * (byte *)((int)puVar6 + 5) << 8 | (uint) * (byte *)(puVar6 + 1);
			puVar6[2] = (uint) * (byte *)((int)puVar6 + 0xb) << 0x18 | (uint) * (byte *)((int)puVar6 + 10) << 0x10 | (uint) * (byte *)((int)puVar6 + 9) << 8
			    | (uint) * (byte *)(puVar6 + 2);
			puVar6[3] = (uint) * (byte *)((int)puVar6 + 0xf) << 0x18 | (uint) * (byte *)((int)puVar6 + 0xe) << 0x10 | (uint) * (byte *)((int)puVar6 + 0xd) << 8 | (uint) * (byte *)(puVar6 + 3);
			puVar6[4] = (uint) * (byte *)((int)puVar6 + 0x13) << 0x18 | (uint) * (byte *)((int)puVar6 + 0x12) << 0x10 | (uint) * (byte *)((int)puVar6 + 0x11) << 8 | (uint) * (byte *)(puVar6 + 4);
			puVar6[5] = (uint) * (byte *)((int)puVar6 + 0x17) << 0x18 | (uint) * (byte *)((int)puVar6 + 0x16) << 0x10 | (uint) * (byte *)((int)puVar6 + 0x15) << 8 | (uint) * (byte *)(puVar6 + 5);
			puVar6[6] = (uint) * (byte *)((int)puVar6 + 0x1b) << 0x18 | (uint) * (byte *)((int)puVar6 + 0x1a) << 0x10 | (uint) * (byte *)((int)puVar6 + 0x19) << 8 | (uint) * (byte *)(puVar6 + 6);
			puVar6[7] = (uint) * (byte *)((int)puVar6 + 0x1f) << 0x18 | (uint) * (byte *)((int)puVar6 + 0x1e) << 0x10 | (uint) * (byte *)((int)puVar6 + 0x1d) << 8 | (uint) * (byte *)(puVar6 + 7);
			puVar6 = puVar6 + 8;
			lVar4 = lVar4 + -1;
		} while (lVar4 != 0);
		uVar5 = Hash(uVar2, 3, *puVar1);
		Encrypt(*(undefined4 *)(iVar3 + -0x4d5c), 0x8000, (int)uVar5, *puVar1);
		iVar7 = WriteFile((char)*(undefined4 *)(iVar3 + -0x4d54), (char)*(undefined4 *)(iVar3 + -0x4d5c),
		    0, (char)(ZEXT48(register0x0000000c) - 0x50) + '8', 0, param_6, param_7, param_8,
		    puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
		iVar3 = *(int *)(puVar1 + 0x14);
		uVar5 = Hash(uVar2, 3, *puVar1);
		Decrypt(*(undefined4 *)(iVar3 + -0x4d5c), 0x8000, (int)uVar5, *puVar1);
		puVar6 = *(uint **)(iVar3 + -0x4d5c);
		lVar4 = 0x400;
		do {
			*puVar6 = (uint) * (byte *)((int)puVar6 + 3) << 0x18 | (uint) * (byte *)((int)puVar6 + 2) << 0x10
			    | (uint) * (byte *)((int)puVar6 + 1) << 8 | (uint) * (byte *)puVar6;
			puVar6[1] = (uint) * (byte *)((int)puVar6 + 7) << 0x18 | (uint) * (byte *)((int)puVar6 + 6) << 0x10 | (uint) * (byte *)((int)puVar6 + 5) << 8 | (uint) * (byte *)(puVar6 + 1);
			puVar6[2] = (uint) * (byte *)((int)puVar6 + 0xb) << 0x18 | (uint) * (byte *)((int)puVar6 + 10) << 0x10 | (uint) * (byte *)((int)puVar6 + 9) << 8
			    | (uint) * (byte *)(puVar6 + 2);
			puVar6[3] = (uint) * (byte *)((int)puVar6 + 0xf) << 0x18 | (uint) * (byte *)((int)puVar6 + 0xe) << 0x10 | (uint) * (byte *)((int)puVar6 + 0xd) << 8 | (uint) * (byte *)(puVar6 + 3);
			puVar6[4] = (uint) * (byte *)((int)puVar6 + 0x13) << 0x18 | (uint) * (byte *)((int)puVar6 + 0x12) << 0x10 | (uint) * (byte *)((int)puVar6 + 0x11) << 8 | (uint) * (byte *)(puVar6 + 4);
			puVar6[5] = (uint) * (byte *)((int)puVar6 + 0x17) << 0x18 | (uint) * (byte *)((int)puVar6 + 0x16) << 0x10 | (uint) * (byte *)((int)puVar6 + 0x15) << 8 | (uint) * (byte *)(puVar6 + 5);
			puVar6[6] = (uint) * (byte *)((int)puVar6 + 0x1b) << 0x18 | (uint) * (byte *)((int)puVar6 + 0x1a) << 0x10 | (uint) * (byte *)((int)puVar6 + 0x19) << 8 | (uint) * (byte *)(puVar6 + 6);
			puVar6[7] = (uint) * (byte *)((int)puVar6 + 0x1f) << 0x18 | (uint) * (byte *)((int)puVar6 + 0x1e) << 0x10 | (uint) * (byte *)((int)puVar6 + 0x1d) << 8 | (uint) * (byte *)(puVar6 + 7);
			puVar6 = puVar6 + 8;
			lVar4 = lVar4 + -1;
		} while (lVar4 != 0);
		uVar8 = 0;
		if ((iVar7 != 0) && (*(int *)(puVar1 + 0x38) == 0x8000)) {
			uVar8 = 1;
		}
		uVar5 = (ulonglong)uVar8;
	}
	return uVar5;
}

ulonglong mpqapi_write_hash_table(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined4 uVar2;
	int iVar3;
	longlong lVar4;
	ulonglong uVar5;
	uint *puVar6;
	int iVar7;
	uint uVar8;

	uVar2 = _DAT_100f331c;
	puVar1 = (undefined *)(ZEXT48(register0x0000000c) - 0x50);
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	lVar4 = SetFilePointer((char)_DAT_100f427c, 0x68, 0, 0, param_5, param_6, param_7, param_8, puVar1[0xb],
	    puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
	iVar3 = *(int *)(puVar1 + 0x14);
	if ((lVar4 + 0x10000U & 0xffffffff) == 0xffff) {
		uVar5 = 0;
	} else {
		puVar6 = *(uint **)(iVar3 + -0x4d60);
		lVar4 = 0x400;
		do {
			*puVar6 = (uint) * (byte *)((int)puVar6 + 3) << 0x18 | (uint) * (byte *)((int)puVar6 + 2) << 0x10
			    | (uint) * (byte *)((int)puVar6 + 1) << 8 | (uint) * (byte *)puVar6;
			puVar6[1] = (uint) * (byte *)((int)puVar6 + 7) << 0x18 | (uint) * (byte *)((int)puVar6 + 6) << 0x10 | (uint) * (byte *)((int)puVar6 + 5) << 8 | (uint) * (byte *)(puVar6 + 1);
			puVar6[2] = (uint) * (byte *)((int)puVar6 + 0xb) << 0x18 | (uint) * (byte *)((int)puVar6 + 10) << 0x10 | (uint) * (byte *)((int)puVar6 + 9) << 8
			    | (uint) * (byte *)(puVar6 + 2);
			puVar6[3] = (uint) * (byte *)((int)puVar6 + 0xf) << 0x18 | (uint) * (byte *)((int)puVar6 + 0xe) << 0x10 | (uint) * (byte *)((int)puVar6 + 0xd) << 8 | (uint) * (byte *)(puVar6 + 3);
			puVar6[4] = (uint) * (byte *)((int)puVar6 + 0x13) << 0x18 | (uint) * (byte *)((int)puVar6 + 0x12) << 0x10 | (uint) * (byte *)((int)puVar6 + 0x11) << 8 | (uint) * (byte *)(puVar6 + 4);
			puVar6[5] = (uint) * (byte *)((int)puVar6 + 0x17) << 0x18 | (uint) * (byte *)((int)puVar6 + 0x16) << 0x10 | (uint) * (byte *)((int)puVar6 + 0x15) << 8 | (uint) * (byte *)(puVar6 + 5);
			puVar6[6] = (uint) * (byte *)((int)puVar6 + 0x1b) << 0x18 | (uint) * (byte *)((int)puVar6 + 0x1a) << 0x10 | (uint) * (byte *)((int)puVar6 + 0x19) << 8 | (uint) * (byte *)(puVar6 + 6);
			puVar6[7] = (uint) * (byte *)((int)puVar6 + 0x1f) << 0x18 | (uint) * (byte *)((int)puVar6 + 0x1e) << 0x10 | (uint) * (byte *)((int)puVar6 + 0x1d) << 8 | (uint) * (byte *)(puVar6 + 7);
			puVar6 = puVar6 + 8;
			lVar4 = lVar4 + -1;
		} while (lVar4 != 0);
		uVar5 = Hash(uVar2, 3, *puVar1);
		Encrypt(*(undefined4 *)(iVar3 + -0x4d60), 0x8000, (int)uVar5, *puVar1);
		iVar7 = WriteFile((char)*(undefined4 *)(iVar3 + -0x4d54), (char)*(undefined4 *)(iVar3 + -0x4d60),
		    0, (char)(ZEXT48(register0x0000000c) - 0x50) + '8', 0, param_6, param_7, param_8,
		    puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
		iVar3 = *(int *)(puVar1 + 0x14);
		uVar5 = Hash(uVar2, 3, *puVar1);
		Decrypt(*(undefined4 *)(iVar3 + -0x4d60), 0x8000, (int)uVar5, *puVar1);
		puVar6 = *(uint **)(iVar3 + -0x4d60);
		lVar4 = 0x400;
		do {
			*puVar6 = (uint) * (byte *)((int)puVar6 + 3) << 0x18 | (uint) * (byte *)((int)puVar6 + 2) << 0x10
			    | (uint) * (byte *)((int)puVar6 + 1) << 8 | (uint) * (byte *)puVar6;
			puVar6[1] = (uint) * (byte *)((int)puVar6 + 7) << 0x18 | (uint) * (byte *)((int)puVar6 + 6) << 0x10 | (uint) * (byte *)((int)puVar6 + 5) << 8 | (uint) * (byte *)(puVar6 + 1);
			puVar6[2] = (uint) * (byte *)((int)puVar6 + 0xb) << 0x18 | (uint) * (byte *)((int)puVar6 + 10) << 0x10 | (uint) * (byte *)((int)puVar6 + 9) << 8
			    | (uint) * (byte *)(puVar6 + 2);
			puVar6[3] = (uint) * (byte *)((int)puVar6 + 0xf) << 0x18 | (uint) * (byte *)((int)puVar6 + 0xe) << 0x10 | (uint) * (byte *)((int)puVar6 + 0xd) << 8 | (uint) * (byte *)(puVar6 + 3);
			puVar6[4] = (uint) * (byte *)((int)puVar6 + 0x13) << 0x18 | (uint) * (byte *)((int)puVar6 + 0x12) << 0x10 | (uint) * (byte *)((int)puVar6 + 0x11) << 8 | (uint) * (byte *)(puVar6 + 4);
			puVar6[5] = (uint) * (byte *)((int)puVar6 + 0x17) << 0x18 | (uint) * (byte *)((int)puVar6 + 0x16) << 0x10 | (uint) * (byte *)((int)puVar6 + 0x15) << 8 | (uint) * (byte *)(puVar6 + 5);
			puVar6[6] = (uint) * (byte *)((int)puVar6 + 0x1b) << 0x18 | (uint) * (byte *)((int)puVar6 + 0x1a) << 0x10 | (uint) * (byte *)((int)puVar6 + 0x19) << 8 | (uint) * (byte *)(puVar6 + 6);
			puVar6[7] = (uint) * (byte *)((int)puVar6 + 0x1f) << 0x18 | (uint) * (byte *)((int)puVar6 + 0x1e) << 0x10 | (uint) * (byte *)((int)puVar6 + 0x1d) << 8 | (uint) * (byte *)(puVar6 + 7);
			puVar6 = puVar6 + 8;
			lVar4 = lVar4 + -1;
		} while (lVar4 != 0);
		uVar8 = 0;
		if ((iVar7 != 0) && (*(int *)(puVar1 + 0x38) == 0x8000)) {
			uVar8 = 1;
		}
		uVar5 = (ulonglong)uVar8;
	}
	return uVar5;
}

undefined8
mpqapi_can_seek(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	longlong lVar1;
	undefined8 uVar2;
	undefined uVar3;
	undefined uVar4;
	undefined uVar5;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	uVar4 = 0;
	uVar5 = 0;
	uVar3 = (undefined)_DAT_100f426c;
	lVar1 = SetFilePointer((char)_DAT_100f427c, uVar3, 0, 0, param_5, param_6, param_7, param_8,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	if ((lVar1 + 0x10000U & 0xffffffff) == 0xffff) {
		uVar2 = 0;
	} else {
		uVar2 = SetEndOfFile((char)*(undefined4 *)(local_2c + -0x4d54), uVar3, uVar4, uVar5, param_5, param_6, param_7, param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	}
	return uVar2;
}

undefined8
ParseMPQHeader(int *param_1, undefined4 *param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	int iVar1;
	bool bVar2;
	ulonglong uVar3;
	int iVar5;
	longlong lVar4;
	int iVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;

	iVar1 = (int)(ZEXT48(register0x0000000c) - 0x50);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	uVar3 = GetFileSize((char)_DAT_100f427c, 0, param_3, param_4, param_5, param_6, param_7, param_8,
	    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf),
	    *(undefined4 *)(iVar1 + 0x14));
	iVar6 = *(int *)(iVar1 + 0x14);
	*param_2 = (int)uVar3;
	if ((uVar3 + 0x10000 & 0xffffffff) == 0xffff) {
		bVar2 = true;
	} else {
		if ((uVar3 & 0xffffffff) < 0x68) {
			bVar2 = true;
		} else {
			param_5 = 0;
			iVar5 = ReadFile((char)*(undefined4 *)(iVar6 + -0x4d54), (char)param_1, 0x68,
			    (char)(ZEXT48(register0x0000000c) - 0x50) + '8', 0, param_6, param_7, param_8,
			    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf),
			    *(undefined4 *)(iVar1 + 0x14));
			iVar6 = *(int *)(iVar1 + 0x14);
			if (iVar5 == 0) {
				bVar2 = true;
			} else {
				if (*(int *)(iVar1 + 0x38) == 0x68) {
					param_1[1] = (uint) * (byte *)((int)param_1 + 7) << 0x18 | (uint) * (byte *)((int)param_1 + 6) << 0x10 | (uint) * (byte *)((int)param_1 + 5) << 8 | (uint) * (byte *)(param_1 + 1);
					param_1[2] = (uint) * (byte *)((int)param_1 + 0xb) << 0x18 | (uint) * (byte *)((int)param_1 + 10) << 0x10 | (uint) * (byte *)((int)param_1 + 9) << 8 | (uint) * (byte *)(param_1 + 2);
					*(ushort *)(param_1 + 3) = CONCAT11(*(undefined *)((int)param_1 + 0xd), *(undefined *)(param_1 + 3));
					*(undefined2 *)((int)param_1 + 0xe) = CONCAT11(*(undefined *)((int)param_1 + 0xf), *(undefined *)((int)param_1 + 0xe));
					param_1[4] = (uint) * (byte *)((int)param_1 + 0x13) << 0x18 | (uint) * (byte *)((int)param_1 + 0x12) << 0x10 | (uint) * (byte *)((int)param_1 + 0x11) << 8 | (uint) * (byte *)(param_1 + 4);
					param_1[5] = (uint) * (byte *)((int)param_1 + 0x17) << 0x18 | (uint) * (byte *)((int)param_1 + 0x16) << 0x10 | (uint) * (byte *)((int)param_1 + 0x15) << 8 | (uint) * (byte *)(param_1 + 5);
					param_1[6] = (uint) * (byte *)((int)param_1 + 0x1b) << 0x18 | (uint) * (byte *)((int)param_1 + 0x1a) << 0x10 | (uint) * (byte *)((int)param_1 + 0x19) << 8 | (uint) * (byte *)(param_1 + 6);
					param_1[7] = (uint) * (byte *)((int)param_1 + 0x1f) << 0x18 | (uint) * (byte *)((int)param_1 + 0x1e) << 0x10 | (uint) * (byte *)((int)param_1 + 0x1d) << 8 | (uint) * (byte *)(param_1 + 7);
					if (*param_1 == 0x4d50511a) {
						if (param_1[1] == 0x20) {
							if (*(short *)(param_1 + 3) == 0) {
								if (*(short *)((int)param_1 + 0xe) == 3) {
									if ((ulonglong)(uint)param_1[2] == (uVar3 & 0xffffffff)) {
										if (param_1[4] == 0x8068) {
											if (param_1[5] == 0x68) {
												if (param_1[6] == 0x800) {
													if (param_1[7] == 0x800) {
														bVar2 = false;
													} else {
														bVar2 = true;
													}
												} else {
													bVar2 = true;
												}
											} else {
												bVar2 = true;
											}
										} else {
											bVar2 = true;
										}
									} else {
										bVar2 = true;
									}
								} else {
									bVar2 = true;
								}
							} else {
								bVar2 = true;
							}
						} else {
							bVar2 = true;
						}
					} else {
						bVar2 = true;
					}
				} else {
					bVar2 = true;
				}
			}
		}
	}
	if (bVar2) {
		uVar7 = 0;
		uVar8 = 0;
		uVar9 = 0;
		lVar4 = SetFilePointer((char)*(undefined4 *)(iVar6 + -0x4d54), 0, 0, 0, param_5, param_6, param_7,
		    param_8, *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf),
		    *(undefined4 *)(iVar1 + 0x14));
		if ((lVar4 + 0x10000U & 0xffffffff) == 0xffff) {
			return 0;
		}
		iVar6 = SetEndOfFile((char)*(undefined4 *)(*(int *)(iVar1 + 0x14) + -0x4d54), uVar7, uVar8, uVar9,
		    param_5, param_6, param_7, param_8, *(undefined *)(iVar1 + 0xb),
		    *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
		if (iVar6 == 0) {
			return 0;
		}
		memset((char)param_1, 0x68, uVar8, uVar9, param_5, param_6, param_7, param_8,
		    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
		iVar6 = *(int *)(iVar1 + 0x14);
		*param_1 = 0x4d50511a;
		param_1[1] = 0x20;
		*(undefined2 *)((int)param_1 + 0xe) = 3;
		*(undefined2 *)(param_1 + 3) = 0;
		*param_2 = 0x10068;
		*(undefined4 *)(iVar6 + -0x4d58) = 1;
		*(undefined *)(iVar6 + -0x4d68) = 1;
	}
	return 1;
}

void FetchHandle(char *param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	ulonglong uVar2;
	ulonglong uVar3;

	uVar1 = Hash(param_1, 2);
	uVar2 = Hash(param_1, 1);
	uVar3 = Hash(param_1, 0);
	mpqapi_get_hash_index((uint)uVar3, (int)uVar2, (int)uVar1, 0);
	return;
}

void mpqapi_remove_hash_entry(char *pcParm1, undefined param_2, undefined param_3, undefined param_4,
    undefined8 uParm5, undefined4 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	undefined *puVar1;
	int iVar2;
	uint uVar3;
	uint uVar4;
	undefined **ppuVar5;
	longlong lVar6;
	uint *puVar7;
	ulonglong uVar8;
	longlong lVar9;
	undefined7 uVar10;
	undefined uVar11;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	int local_2c;

	uVar11 = (undefined)uParm5;
	uVar10 = (undefined7)((ulonglong)uParm5 >> 8);
	ppuVar5 = &toc;
	lVar6 = FetchHandle(pcParm1, param_2, param_3, param_4, uVar11, (char)uParm6, (char)uParm7, (char)uParm8, in_stack_ffffffc8);
	if ((lVar6 + 0x10000U & 0xffffffff) != 0xffff) {
		puVar1 = ppuVar5[-0x1357];
		uVar8 = ZEXT48(puVar1);
		lVar9 = ZEXT48(ppuVar5[-0x1358]) + (ulonglong)(uint)((int)lVar6 << 4);
		iVar2 = *(int *)((int)lVar9 + 0xc);
		*(undefined4 *)((int)lVar9 + 0xc) = 0xfffffffe;
		lVar6 = uVar8 + (ulonglong)(uint)(iVar2 << 4);
		puVar7 = (uint *)lVar6;
		uVar3 = *puVar7;
		uVar4 = puVar7[1];
		memset((char)lVar6, 0x10, (char)puVar1, (char)lVar9, uVar11, (char)uParm6, (char)uParm7,
		    (char)uParm8, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
		mpqapi_free_block((ulonglong)uVar3, (ulonglong)uVar4, uVar8, lVar9, CONCAT71(uVar10, uVar11), uParm6, uParm7, uParm8, in_stack_ffffffc8);
		*(undefined4 *)(local_2c + -0x4d58) = 1;
	}
	return;
}

void mpqapi_remove_hash_entries(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	longlong lVar2;
	undefined auStack280[280];

	lVar2 = 0;
	while (true) {
		iVar1 = FUN_100dbf44(lVar2, auStack280);
		if (iVar1 == 0)
			break;
		mpqapi_remove_hash_entry(auStack280);
		lVar2 = lVar2 + 1;
	}
	return;
}

ulonglong mpqapi_add_file(longlong param_1, ulonglong param_2, int param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9, undefined param_10, int param_11)

{
	undefined *puVar1;
	int iVar2;
	uint uVar3;
	undefined **ppuVar4;
	ulonglong uVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	ulonglong uVar8;
	int iVar11;
	longlong lVar9;
	longlong lVar10;
	undefined8 uVar12;
	uint uVar13;
	longlong lVar14;
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

	ppuVar4 = &toc;
	uVar5._4_4_ = (char *)param_1;
	param_11 = param_3;
	uVar5 = Hash(uVar5._4_4_, 0);
	uVar6 = Hash(uVar5._4_4_, 1);
	uVar7 = Hash(uVar5._4_4_, 2);
	uVar12 = 0;
	iVar11 = (int)uVar7;
	uVar8 = mpqapi_get_hash_index((uint)uVar5, (int)uVar6, iVar11, 0);
	if ((uVar8 + 0x10000 & 0xffffffff) != 0xffff) {
		app_fatal((int)ppuVar4[-0x172e], param_1, uVar7, uVar12, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4);
	}
	puVar1 = ppuVar4[-0x1358];
	uVar7 = ZEXT48(puVar1);
	lVar14 = 0x100;
	uVar13 = (uint)uVar5 & 0x7ff;
	lVar9 = 0x7ff;
	while ((lVar10 = lVar9, *(int *)(puVar1 + uVar13 * 0x10 + 0xc) != -1 && (lVar10 = lVar9, *(int *)(puVar1 + uVar13 * 0x10 + 0xc) != -2))) {
		uVar3 = uVar13 + 1;
		uVar13 = uVar3 & 0x7ff;
		lVar10 = lVar9;
		if ((*(int *)(puVar1 + (uVar3 * 0x10 & 0x7ff0) + 0xc) == -1) || (lVar10 = lVar9, *(int *)(puVar1 + (uVar3 * 0x10 & 0x7ff0) + 0xc) == -2))
			break;
		uVar3 = uVar13 + 1;
		uVar13 = uVar3 & 0x7ff;
		lVar10 = lVar9 + -1;
		if ((*(int *)(puVar1 + (uVar3 * 0x10 & 0x7ff0) + 0xc) == -1) || (lVar10 = lVar9 + -1, *(int *)(puVar1 + (uVar3 * 0x10 & 0x7ff0) + 0xc) == -2))
			break;
		uVar3 = uVar13 + 1;
		uVar13 = uVar3 & 0x7ff;
		lVar10 = lVar9 + -2;
		if ((*(int *)(puVar1 + (uVar3 * 0x10 & 0x7ff0) + 0xc) == -1) || (lVar10 = lVar9 + -2, *(int *)(puVar1 + (uVar3 * 0x10 & 0x7ff0) + 0xc) == -2))
			break;
		uVar3 = uVar13 + 1;
		uVar13 = uVar3 & 0x7ff;
		lVar10 = lVar9 + -3;
		if ((*(int *)(puVar1 + (uVar3 * 0x10 & 0x7ff0) + 0xc) == -1) || (lVar10 = lVar9 + -3, *(int *)(puVar1 + (uVar3 * 0x10 & 0x7ff0) + 0xc) == -2))
			break;
		uVar3 = uVar13 + 1;
		uVar13 = uVar3 & 0x7ff;
		lVar10 = lVar9 + -4;
		if ((*(int *)(puVar1 + (uVar3 * 0x10 & 0x7ff0) + 0xc) == -1) || (lVar10 = lVar9 + -4, *(int *)(puVar1 + (uVar3 * 0x10 & 0x7ff0) + 0xc) == -2))
			break;
		uVar3 = uVar13 + 1;
		uVar13 = uVar3 & 0x7ff;
		lVar10 = lVar9 + -5;
		if ((*(int *)(puVar1 + (uVar3 * 0x10 & 0x7ff0) + 0xc) == -1) || (lVar10 = lVar9 + -5, *(int *)(puVar1 + (uVar3 * 0x10 & 0x7ff0) + 0xc) == -2))
			break;
		uVar3 = uVar13 + 1;
		uVar13 = uVar3 & 0x7ff;
		lVar10 = lVar9 + -6;
		if ((*(int *)(puVar1 + (uVar3 * 0x10 & 0x7ff0) + 0xc) == -1) || (lVar10 = lVar9 + -6, *(int *)(puVar1 + (uVar3 * 0x10 & 0x7ff0) + 0xc) == -2))
			break;
		lVar9 = lVar9 + -8;
		uVar13 = uVar13 + 1 & 0x7ff;
		lVar14 = lVar14 + -1;
		lVar10 = lVar9;
		if (lVar14 == 0)
			break;
	}
	if ((int)lVar10 < 0) {
		app_fatal((int)ppuVar4[-0x172f], uVar7, lVar10, uVar12, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4);
	}
	if ((param_2 & 0xffffffff) == 0) {
		param_2 = mpqapi_new_block(&param_11, uVar7, lVar10, uVar12, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
	}
	iVar2 = uVar13 * 0x10;
	*(int *)(ppuVar4[-0x1358] + iVar2) = (int)uVar6;
	*(int *)(ppuVar4[-0x1358] + iVar2 + 4) = iVar11;
	*(undefined4 *)(ppuVar4[-0x1358] + iVar2 + 8) = 0;
	*(int *)(ppuVar4[-0x1358] + iVar2 + 0xc) = param_11;
	return param_2;
}

undefined8
mpqapi_write_file_contents(char *param_1, longlong param_2, uint param_3, uint *param_4, undefined8 param_5,
    int param_6, int param_7, int param_8, undefined4 param_9)

{
	uint uVar1;
	uint *puVar2;
	char *pcVar3;
	uint uVar5;
	uint uVar6;
	ulonglong uVar4;
	char *pcVar9;
	ulonglong uVar7;
	longlong lVar8;
	int iVar10;
	int iVar11;
	int iVar12;
	char cVar14;
	char cVar15;
	ulonglong uVar13;
	undefined uVar18;
	ulonglong uVar16;
	undefined8 uVar17;
	char cVar19;
	undefined uVar22;
	undefined8 uVar20;
	undefined uVar23;
	undefined8 uVar21;
	longlong lVar24;
	undefined4 uVar25;
	longlong lVar26;
	undefined uVar28;
	undefined4 uVar27;
	longlong lVar29;
	undefined uVar31;
	undefined4 uVar30;
	ulonglong uVar32;
	int iVar33;
	char cVar34;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	int local_6c;

	pcVar3 = _DAT_100f3310;
	lVar29 = (longlong)param_8;
	lVar26 = (longlong)param_7;
	lVar24 = (longlong)param_6;
	lVar8 = (longlong)(int)param_4;
	uVar16 = SEXT48((int)param_3);
	uVar7 = ZEXT48(&toc);
	cVar34 = (char)_DAT_100f3310;
	uVar32 = uVar16;
	while (pcVar9 = strchr((int)param_1, ':'), pcVar9 != (char *)0x0) {
		param_1 = pcVar9 + 1;
	}
	while (true) {
		pcVar9 = strchr((int)param_1, '\\');
		iVar12 = (int)uVar7;
		uVar22 = (undefined)lVar8;
		uVar23 = (undefined)uVar32;
		if (pcVar9 == (char *)0x0)
			break;
		param_1 = pcVar9 + 1;
	}
	Hash(param_1, 3);
	uVar5 = (param_3 + 0xfff >> 0xc) + 1;
	uVar1 = uVar5 * 4;
	uVar7 = mpqapi_find_free_block(param_3 + uVar1, param_4 + 1, uVar23, uVar22, (char)param_5, (char)lVar24,
	    (char)lVar26, (char)lVar29, in_stack_ffffff88);
	*param_4 = (uint)uVar7;
	param_4[2] = param_3;
	uVar20 = 0;
	param_4[3] = 0x80000100;
	lVar8 = SetFilePointer((char)*(undefined4 *)(iVar12 + -0x4d54), (char)*param_4, 0, 0, (char)param_5,
	    (char)lVar24, (char)lVar26, (char)lVar29, (char)in_stack_ffffff88,
	    in_stack_ffffff8f, local_6c);
	if ((lVar8 + 0x10000U & 0xffffffff) == 0xffff) {
		return 0;
	}
	iVar12 = 0;
	uVar32 = 0;
	uVar7 = 0;
	iVar33 = 0;
	while (true) {
		uVar30 = (undefined4)lVar29;
		uVar27 = (undefined4)lVar26;
		uVar25 = (undefined4)lVar24;
		uVar23 = (undefined)uVar20;
		uVar22 = (undefined)param_5;
		cVar14 = (char)uVar1;
		if ((uVar16 & 0xffffffff) == 0)
			break;
		lVar8 = 0x100;
		pcVar9 = pcVar3;
		do {
			*pcVar9 = *pcVar9 + -0x56;
			pcVar9[1] = pcVar9[1] + -0x56;
			pcVar9[2] = pcVar9[2] + -0x56;
			pcVar9[3] = pcVar9[3] + -0x56;
			pcVar9[4] = pcVar9[4] + -0x56;
			pcVar9[5] = pcVar9[5] + -0x56;
			pcVar9[6] = pcVar9[6] + -0x56;
			pcVar9[7] = pcVar9[7] + -0x56;
			pcVar9[8] = pcVar9[8] + -0x56;
			pcVar9[9] = pcVar9[9] + -0x56;
			pcVar9[10] = pcVar9[10] + -0x56;
			pcVar9[0xb] = pcVar9[0xb] + -0x56;
			pcVar9[0xc] = pcVar9[0xc] + -0x56;
			pcVar9[0xd] = pcVar9[0xd] + -0x56;
			pcVar9[0xe] = pcVar9[0xe] + -0x56;
			pcVar9[0xf] = pcVar9[0xf] + -0x56;
			pcVar9 = pcVar9 + 0x10;
			lVar8 = lVar8 + -1;
		} while (lVar8 != 0);
		if ((uVar16 & 0xffffffff) < 0x1000) {
			uVar6 = (uint)uVar16;
		} else {
			uVar6 = 0x1000;
		}
		uVar18 = (undefined)uVar6;
		memcpy(cVar34, (char)param_2, uVar18, uVar23, uVar22, (char)lVar24, (char)lVar26, (char)lVar29,
		    (char)in_stack_ffffff88, in_stack_ffffff8f, local_6c);
		param_2 = param_2 + (ulonglong)uVar6;
		iVar10 = local_6c;
		uVar13 = PkwareCompress(pcVar3, (ulonglong)uVar6, uVar18, uVar23, uVar22, (char)lVar24, (char)lVar26,
		    (char)lVar29, in_stack_ffffff88);
		if (iVar12 == 0) {
			uVar7 = DiabloAllocPtr((ulonglong)uVar1);
			cVar15 = (char)uVar7;
			memset(cVar15, cVar14, uVar18, uVar23, uVar22, (char)lVar24, (char)lVar26, (char)lVar29,
			    (char)in_stack_ffffff88, in_stack_ffffff8f, iVar10);
			uVar23 = 0xd0;
			uVar22 = 0;
			cVar19 = cVar14;
			local_6c = iVar10;
			iVar10 = WriteFile((char)*(undefined4 *)(iVar10 + -0x4d54), cVar15, cVar14, 0xd0, 0, (char)lVar24,
			    (char)lVar26, (char)lVar29, (char)in_stack_ffffff88, in_stack_ffffff8f, iVar10);
			uVar31 = (undefined)lVar29;
			uVar28 = (undefined)lVar26;
			uVar18 = (undefined)lVar24;
			if (iVar10 == 0)
				goto LAB_10078608;
			uVar32 = uVar32 + (ulonglong)uVar1;
			iVar10 = local_6c;
		}
		*(undefined4 *)((int)uVar7 + iVar33) = (int)uVar32;
		uVar20 = 0xffffffffffffffcc;
		param_5 = 0;
		cVar19 = (char)uVar13;
		cVar15 = cVar34;
		iVar11 = WriteFile((char)*(undefined4 *)(local_6c + -0x4d54), cVar34, cVar19, 0xcc, 0, (char)lVar24,
		    (char)lVar26, (char)lVar29, (char)in_stack_ffffff88, in_stack_ffffff8f, iVar10);
		uVar31 = (undefined)lVar29;
		uVar28 = (undefined)lVar26;
		uVar18 = (undefined)lVar24;
		uVar22 = (undefined)param_5;
		uVar23 = (undefined)uVar20;
		if (iVar11 == 0)
			goto LAB_10078608;
		iVar33 = iVar33 + 4;
		iVar12 = iVar12 + 1;
		if ((uVar16 & 0xffffffff) < 0x1001) {
			uVar16 = 0;
		} else {
			uVar16 = uVar16 - 0x1000;
		}
		uVar32 = uVar32 + (uVar13 & 0xffffffff);
		local_6c = iVar10;
	}
	*(uint *)((int)uVar7 + iVar12 * 4) = (uint)uVar32;
	cVar15 = -(char)uVar32;
	cVar19 = '\0';
	uVar23 = 1;
	lVar8 = SetFilePointer((char)*(undefined4 *)(local_6c + -0x4d54), cVar15, 0, 1, uVar22, (char)lVar24,
	    (char)lVar26, (char)lVar29, (char)in_stack_ffffff88, in_stack_ffffff8f,
	    local_6c);
	uVar31 = (undefined)uVar30;
	uVar28 = (undefined)uVar27;
	uVar18 = (undefined)uVar25;
	if ((lVar8 + 0x10000U & 0xffffffff) == 0xffff)
		goto LAB_10078608;
	uVar16 = (ulonglong)uVar5;
	if (uVar5 != 0) {
		uVar4 = (ulonglong)(uVar1 >> 5);
		uVar13 = uVar7;
		if (uVar1 >> 5 != 0) {
			do {
				puVar2 = (uint *)uVar13;
				*puVar2 = (uint) * (byte *)((int)puVar2 + 3) << 0x18 | (uint) * (byte *)((int)puVar2 + 2) << 0x10 | (uint) * (byte *)((int)puVar2 + 1) << 8 | (uint) * (byte *)puVar2;
				puVar2[1] = (uint) * (byte *)((int)puVar2 + 7) << 0x18 | (uint) * (byte *)((int)puVar2 + 6) << 0x10 | (uint) * (byte *)((int)puVar2 + 5) << 8
				    | (uint) * (byte *)(puVar2 + 1);
				puVar2[2] = (uint) * (byte *)((int)puVar2 + 0xb) << 0x18 | (uint) * (byte *)((int)puVar2 + 10) << 0x10 | (uint) * (byte *)((int)puVar2 + 9) << 8 | (uint) * (byte *)(puVar2 + 2);
				puVar2[3] = (uint) * (byte *)((int)puVar2 + 0xf) << 0x18 | (uint) * (byte *)((int)puVar2 + 0xe) << 0x10 | (uint) * (byte *)((int)puVar2 + 0xd) << 8 | (uint) * (byte *)(puVar2 + 3);
				puVar2[4] = (uint) * (byte *)((int)puVar2 + 0x13) << 0x18 | (uint) * (byte *)((int)puVar2 + 0x12) << 0x10 | (uint) * (byte *)((int)puVar2 + 0x11) << 8 | (uint) * (byte *)(puVar2 + 4);
				puVar2[5] = (uint) * (byte *)((int)puVar2 + 0x17) << 0x18 | (uint) * (byte *)((int)puVar2 + 0x16) << 0x10 | (uint) * (byte *)((int)puVar2 + 0x15) << 8 | (uint) * (byte *)(puVar2 + 5);
				puVar2[6] = (uint) * (byte *)((int)puVar2 + 0x1b) << 0x18 | (uint) * (byte *)((int)puVar2 + 0x1a) << 0x10 | (uint) * (byte *)((int)puVar2 + 0x19) << 8 | (uint) * (byte *)(puVar2 + 6);
				puVar2[7] = (uint) * (byte *)((int)puVar2 + 0x1f) << 0x18 | (uint) * (byte *)((int)puVar2 + 0x1e) << 0x10 | (uint) * (byte *)((int)puVar2 + 0x1d) << 8 | (uint) * (byte *)(puVar2 + 7);
				uVar13 = uVar13 + 0x20;
				uVar4 = uVar4 - 1;
			} while (uVar4 != 0);
			uVar16 = uVar16 & 7;
			if ((uVar5 & 7) == 0)
				goto LAB_10078580;
		}
		do {
			puVar2 = (uint *)uVar13;
			*puVar2 = (uint) * (byte *)((int)puVar2 + 3) << 0x18 | (uint) * (byte *)((int)puVar2 + 2) << 0x10
			    | (uint) * (byte *)((int)puVar2 + 1) << 8 | (uint) * (byte *)puVar2;
			uVar16 = uVar16 - 1;
			uVar13 = uVar13 + 4;
		} while (uVar16 != 0);
	}
LAB_10078580:
	uVar23 = 0xd0;
	uVar20 = 0;
	cVar15 = (char)uVar7;
	cVar19 = cVar14;
	iVar12 = WriteFile((char)*(undefined4 *)(local_6c + -0x4d54), (char)uVar7, cVar14, 0xd0, 0, uVar18,
	    uVar28, uVar31, (char)in_stack_ffffff88, in_stack_ffffff8f, local_6c);
	uVar31 = (undefined)uVar30;
	uVar28 = (undefined)uVar27;
	uVar18 = (undefined)uVar25;
	uVar22 = (undefined)uVar20;
	if (iVar12 != 0) {
		uVar17 = 0;
		uVar21 = 1;
		cVar15 = (char)uVar32 - cVar14;
		lVar8 = SetFilePointer((char)*(undefined4 *)(local_6c + -0x4d54), cVar15, 0, 1, uVar22, uVar18, uVar28, uVar31, (char)in_stack_ffffff88, in_stack_ffffff8f, local_6c);
		uVar31 = (undefined)uVar30;
		uVar28 = (undefined)uVar27;
		uVar18 = (undefined)uVar25;
		uVar22 = (undefined)uVar20;
		uVar23 = (undefined)uVar21;
		cVar19 = (char)uVar17;
		if ((lVar8 + 0x10000U & 0xffffffff) != 0xffff) {
			mem_free_dbg(uVar7, cVar15, cVar19, uVar23, uVar22, uVar18, uVar28, uVar31, in_stack_ffffff88);
			if (((uVar32 & 0xffffffff) < (ulonglong)param_4[1]) && (uVar7 = (ulonglong)param_4[1] - uVar32, 0x3ff < (uVar7 & 0xffffffff))) {
				param_4[1] = (uint)uVar32;
				mpqapi_free_block((ulonglong)*param_4 + uVar32, uVar7, uVar17, uVar21, uVar20, uVar25, uVar27, uVar30,
				    in_stack_ffffff88);
			}
			return 1;
		}
	}
LAB_10078608:
	if ((uVar7 & 0xffffffff) != 0) {
		mem_free_dbg(uVar7, cVar15, cVar19, uVar23, uVar22, uVar18, uVar28, uVar31, in_stack_ffffff88);
	}
	return 0;
}

ulonglong mpqapi_write_file(longlong param_1, undefined8 param_2, uint param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	bool bVar1;
	ulonglong uVar2;
	undefined8 uVar3;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffd0;

	_DAT_100f4278 = 1;
	mpqapi_remove_hash_entry();
	uVar2 = mpqapi_add_file(param_1, 0, 0, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8,
	    in_stack_ffffffbf, in_stack_ffffffd0);
	uVar3 = mpqapi_write_file_contents((char *)param_1, param_2, param_3, (uint *)uVar2, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	bVar1 = (int)uVar3 != 0;
	if (!bVar1) {
		mpqapi_remove_hash_entry(param_1);
	}
	return (ulonglong)bVar1;
}

void mpqapi_rename(char *pcParm1, longlong lParm2, undefined param_3, undefined param_4,
    undefined param_5, undefined4 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	undefined *puVar1;
	int iVar2;
	int iVar3;
	undefined **ppuVar4;
	longlong lVar5;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffe0;

	ppuVar4 = &toc;
	lVar5 = FetchHandle(pcParm1, (char)lParm2, param_3, param_4, param_5, (char)uParm6, (char)uParm7,
	    (char)uParm8, in_stack_ffffffc8);
	if ((lVar5 + 0x10000U & 0xffffffff) != 0xffff) {
		puVar1 = ppuVar4[-0x1357];
		lVar5 = ZEXT48(ppuVar4[-0x1358]) + (ulonglong)(uint)((int)lVar5 << 4);
		iVar3 = (int)lVar5;
		iVar2 = *(int *)(iVar3 + 0xc);
		*(undefined4 *)(iVar3 + 0xc) = 0xfffffffe;
		mpqapi_add_file(lParm2, ZEXT48(puVar1) + (ulonglong)(uint)(iVar2 << 4), iVar2, ZEXT48(puVar1), lVar5,
		    uParm6, uParm7, uParm8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffe0);
		ppuVar4[-0x1356] = (undefined *)0x1;
	}
	return;
}

ulonglong mpqapi_has_file(char *param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	longlong lVar1;
	longlong lVar2;
	undefined4 in_stack_ffffffc8;

	lVar1 = FetchHandle(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	lVar2 = -lVar1 + -1;
	return (ulonglong)((int)lVar2 - ((uint)(lVar2 == 0) + (int)-lVar1 + -2) & 0xff);
}

void CloseMPQ(uint param_1, int param_2, int param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9,
    undefined param_10, undefined4 param_11, undefined4 param_12)

{
	undefined *puVar1;
	undefined **ppuVar2;
	undefined **ppuVar3;
	ulonglong uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined **local_2c;

	uVar6 = (undefined)param_3;
	uVar5 = (undefined)param_2;
	ppuVar3 = &toc;
	if (param_2 != 0) {
		uVar4 = (ulonglong)_DAT_100f4274;
		_DAT_100f4274 = 0;
		ppuVar3 = &toc;
		mem_free_dbg(uVar4, uVar5, uVar6, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		puVar1 = ppuVar3[-0x1358];
		ppuVar3[-0x1358] = (undefined *)0x0;
		mem_free_dbg(ZEXT48(puVar1), uVar5, uVar6, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
	}
	ppuVar2 = ppuVar3 + -0x1355;
	if (*ppuVar2 != (undefined *)0x0) {
		ppuVar3 = local_2c;
		CloseHandle((char)*ppuVar2, uVar5, uVar6, param_4, param_5, param_6, param_7, param_8,
		    (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
		ppuVar3[-0x1355] = (undefined *)0x0;
	}
	if (ppuVar3[-0x1356] != (undefined *)0x0) {
		ppuVar3[-0x1356] = (undefined *)0x0;
		mpqapi_store_modified_time((ulonglong)param_1, param_3, uVar6, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
	}
	if (*(char *)(ppuVar3 + -0x135a) != '\0') {
		*(undefined *)(ppuVar3 + -0x135a) = 0;
		mpqapi_store_creation_time((ulonglong)param_1, param_3, uVar6, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
	}
	return;
}

undefined8
OpenMPQ(uint param_1, int param_2, int param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined4 uVar3;
	undefined **ppuVar4;
	int iVar5;
	undefined8 uVar6;
	undefined4 uVar9;
	ulonglong uVar7;
	longlong lVar8;
	int iVar10;
	uint *puVar11;
	undefined uVar12;
	undefined uVar13;
	undefined uVar14;
	undefined uVar15;
	undefined uVar16;

	puVar2 = PTR_CreateFile_fileType_100f1f58;
	uVar12 = (undefined)param_3;
	ppuVar4 = &toc;
	puVar1 = (undefined *)(ZEXT48(register0x0000000c) - 0xc0);
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	InitHash(*puVar1);
	uVar6._7_1_ = (undefined)param_1;
	uVar6 = mpqapi_set_hidden((undefined)uVar6, (char)param_2, uVar12, param_4, param_5, param_6, param_7, param_8, puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x18),
	    *(undefined4 *)(puVar1 + 0x1c));
	if ((int)uVar6 == 0) {
		return 0;
	}
	uVar12 = 0;
	*(undefined *)(ppuVar4 + -0x135a) = 0;
	uVar13 = 0;
	uVar14 = 0;
	uVar15 = 3;
	uVar16 = 0;
	uVar9 = CreateFile((undefined)uVar6, 0, 0, 0, 3, 0, 0, param_8, puVar1[0xb], puVar1[0xf],
	    *(undefined4 *)(puVar1 + 0x14));
	iVar5 = *(int *)(puVar1 + 0x14);
	*(undefined4 *)(iVar5 + -0x4d54) = uVar9;
	uVar9 = *(undefined4 *)puVar2;
	if (param_2 == 0) {
		uVar3 = 0x44537631;
	} else {
		uVar3 = 0x4453764d;
	}
	*(undefined4 *)puVar2 = uVar3;
	if (*(int *)(iVar5 + -0x4d54) == 0) {
		if (param_2 == 0) {
			uVar12 = 0;
		} else {
			uVar12 = 6;
		}
		uVar13 = 0;
		uVar14 = 0;
		uVar15 = 2;
		uVar16 = 0;
		uVar7 = CreateFile((undefined)uVar6, 0, 0, 0, 2, uVar12, 0, param_8, puVar1[0xb], puVar1[0xf],
		    *(undefined4 *)(puVar1 + 0x14));
		iVar5 = *(int *)(puVar1 + 0x14);
		*(undefined4 *)(iVar5 + -0x4d54) = (int)uVar7;
		if ((uVar7 & 0xffffffff) == 0) {
			return 0;
		}
		*(undefined *)(iVar5 + -0x4d68) = 1;
		*(undefined4 *)(iVar5 + -0x4d58) = 1;
	}
	*(undefined4 *)puVar2 = uVar9;
	if ((*(int *)(iVar5 + -0x4d5c) != 0) && (*(int *)(iVar5 + -0x4d60) != 0)) {
		return 1;
	}
	memset((char)(ZEXT48(register0x0000000c) - 0xc0) + '8', 0x68, uVar13, uVar14, uVar15, uVar12, uVar16, param_8, puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
	iVar5 = *(int *)(puVar1 + 0x14);
	uVar6 = ParseMPQHeader((int *)(puVar1 + 0x38), (undefined4 *)(iVar5 + -0x4d64), uVar13, uVar14, uVar15,
	    uVar12, uVar16, param_8, *(undefined4 *)(puVar1 + 8));
	if ((int)uVar6 == 0)
		goto LAB_10078b70;
	uVar9 = DiabloAllocPtr(0x8000);
	*(undefined4 *)(iVar5 + -0x4d5c) = uVar9;
	memset((char)*(undefined4 *)(iVar5 + -0x4d5c), 0, uVar13, uVar14, uVar15, uVar12, uVar16, param_8,
	    puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
	iVar5 = *(int *)(puVar1 + 0x14);
	if (*(int *)(puVar1 + 0x54) != 0) {
		uVar14 = 0;
		lVar8 = SetFilePointer((char)*(undefined4 *)(iVar5 + -0x4d54), 0x68, 0, 0, uVar15, uVar12, uVar16,
		    param_8, puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
		if ((lVar8 + 0x10000U & 0xffffffff) == 0xffff)
			goto LAB_10078b70;
		uVar14 = 0xe0;
		uVar15 = 0;
		iVar10 = ReadFile((char)*(undefined4 *)(*(int *)(puVar1 + 0x14) + -0x4d54),
		    (char)*(undefined4 *)(*(int *)(puVar1 + 0x14) + -0x4d5c), 0, 0xe0, 0, uVar12,
		    uVar16, param_8, puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
		iVar5 = *(int *)(puVar1 + 0x14);
		if (iVar10 == 0)
			goto LAB_10078b70;
		uVar7 = Hash(*(undefined4 *)(iVar5 + -0x5cb0), 3, *puVar1);
		Decrypt(*(undefined4 *)(iVar5 + -0x4d5c), 0x8000, (int)uVar7, *puVar1);
		puVar11 = *(uint **)(iVar5 + -0x4d5c);
		lVar8 = 0x400;
		do {
			*puVar11 = (uint) * (byte *)((int)puVar11 + 3) << 0x18 | (uint) * (byte *)((int)puVar11 + 2) << 0x10 | (uint) * (byte *)((int)puVar11 + 1) << 8
			    | (uint) * (byte *)puVar11;
			puVar11[1] = (uint) * (byte *)((int)puVar11 + 7) << 0x18 | (uint) * (byte *)((int)puVar11 + 6) << 0x10 | (uint) * (byte *)((int)puVar11 + 5) << 8 | (uint) * (byte *)(puVar11 + 1);
			puVar11[2] = (uint) * (byte *)((int)puVar11 + 0xb) << 0x18 | (uint) * (byte *)((int)puVar11 + 10) << 0x10 | (uint) * (byte *)((int)puVar11 + 9) << 8 | (uint) * (byte *)(puVar11 + 2);
			puVar11[3] = (uint) * (byte *)((int)puVar11 + 0xf) << 0x18 | (uint) * (byte *)((int)puVar11 + 0xe) << 0x10 | (uint) * (byte *)((int)puVar11 + 0xd) << 8 | (uint) * (byte *)(puVar11 + 3);
			puVar11[4] = (uint) * (byte *)((int)puVar11 + 0x13) << 0x18 | (uint) * (byte *)((int)puVar11 + 0x12) << 0x10 | (uint) * (byte *)((int)puVar11 + 0x11) << 8 | (uint) * (byte *)(puVar11 + 4);
			puVar11[5] = (uint) * (byte *)((int)puVar11 + 0x17) << 0x18 | (uint) * (byte *)((int)puVar11 + 0x16) << 0x10 | (uint) * (byte *)((int)puVar11 + 0x15) << 8 | (uint) * (byte *)(puVar11 + 5);
			puVar11[6] = (uint) * (byte *)((int)puVar11 + 0x1b) << 0x18 | (uint) * (byte *)((int)puVar11 + 0x1a) << 0x10 | (uint) * (byte *)((int)puVar11 + 0x19) << 8 | (uint) * (byte *)(puVar11 + 6);
			puVar11[7] = (uint) * (byte *)((int)puVar11 + 0x1f) << 0x18 | (uint) * (byte *)((int)puVar11 + 0x1e) << 0x10 | (uint) * (byte *)((int)puVar11 + 0x1d) << 8 | (uint) * (byte *)(puVar11 + 7);
			puVar11 = puVar11 + 8;
			lVar8 = lVar8 + -1;
		} while (lVar8 != 0);
	}
	uVar9 = DiabloAllocPtr(0x8000);
	*(undefined4 *)(iVar5 + -0x4d60) = uVar9;
	memset((char)*(undefined4 *)(iVar5 + -0x4d60), 0, 0xff, uVar14, uVar15, uVar12, uVar16, param_8,
	    puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
	if (*(int *)(puVar1 + 0x50) == 0) {
		return 1;
	}
	uVar14 = 0;
	lVar8 = SetFilePointer((char)*(undefined4 *)(*(int *)(puVar1 + 0x14) + -0x4d54), 0x68, 0, 0, uVar15,
	    uVar12, uVar16, param_8, puVar1[0xb], puVar1[0xf],
	    *(undefined4 *)(puVar1 + 0x14));
	if ((lVar8 + 0x10000U & 0xffffffff) != 0xffff) {
		uVar14 = 0xe0;
		uVar15 = 0;
		iVar10 = ReadFile((char)*(undefined4 *)(*(int *)(puVar1 + 0x14) + -0x4d54),
		    (char)*(undefined4 *)(*(int *)(puVar1 + 0x14) + -0x4d60), 0, 0xe0, 0, uVar12,
		    uVar16, param_8, puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
		iVar5 = *(int *)(puVar1 + 0x14);
		if (iVar10 != 0) {
			uVar7 = Hash(*(undefined4 *)(iVar5 + -0x5cb4), 3, *puVar1);
			Decrypt(*(undefined4 *)(iVar5 + -0x4d60), 0x8000, (int)uVar7, *puVar1);
			puVar11 = *(uint **)(iVar5 + -0x4d60);
			lVar8 = 0x400;
			do {
				*puVar11 = (uint) * (byte *)((int)puVar11 + 3) << 0x18 | (uint) * (byte *)((int)puVar11 + 2) << 0x10 | (uint) * (byte *)((int)puVar11 + 1) << 8 | (uint) * (byte *)puVar11;
				puVar11[1] = (uint) * (byte *)((int)puVar11 + 7) << 0x18 | (uint) * (byte *)((int)puVar11 + 6) << 0x10 | (uint) * (byte *)((int)puVar11 + 5) << 8 | (uint) * (byte *)(puVar11 + 1);
				puVar11[2] = (uint) * (byte *)((int)puVar11 + 0xb) << 0x18 | (uint) * (byte *)((int)puVar11 + 10) << 0x10 | (uint) * (byte *)((int)puVar11 + 9) << 8 | (uint) * (byte *)(puVar11 + 2);
				puVar11[3] = (uint) * (byte *)((int)puVar11 + 0xf) << 0x18 | (uint) * (byte *)((int)puVar11 + 0xe) << 0x10 | (uint) * (byte *)((int)puVar11 + 0xd) << 8 | (uint) * (byte *)(puVar11 + 3);
				puVar11[4] = (uint) * (byte *)((int)puVar11 + 0x13) << 0x18 | (uint) * (byte *)((int)puVar11 + 0x12) << 0x10 | (uint) * (byte *)((int)puVar11 + 0x11) << 8 | (uint) * (byte *)(puVar11 + 4);
				puVar11[5] = (uint) * (byte *)((int)puVar11 + 0x17) << 0x18 | (uint) * (byte *)((int)puVar11 + 0x16) << 0x10 | (uint) * (byte *)((int)puVar11 + 0x15) << 8 | (uint) * (byte *)(puVar11 + 5);
				puVar11[6] = (uint) * (byte *)((int)puVar11 + 0x1b) << 0x18 | (uint) * (byte *)((int)puVar11 + 0x1a) << 0x10 | (uint) * (byte *)((int)puVar11 + 0x19) << 8 | (uint) * (byte *)(puVar11 + 6);
				puVar11[7] = (uint) * (byte *)((int)puVar11 + 0x1f) << 0x18 | (uint) * (byte *)((int)puVar11 + 0x1e) << 0x10 | (uint) * (byte *)((int)puVar11 + 0x1d) << 8 | (uint) * (byte *)(puVar11 + 7);
				puVar11 = puVar11 + 8;
				lVar8 = lVar8 + -1;
			} while (lVar8 != 0);
			return 1;
		}
	}
LAB_10078b70:
	CloseMPQ(param_1, 1, param_3, uVar14, uVar15, uVar12, uVar16, param_8, *(undefined4 *)(puVar1 + 8),
	    puVar1[0xf], *(undefined4 *)(puVar1 + 0x18), *(undefined4 *)(puVar1 + 0x20));
	return 0;
}

undefined8
mpqapi_flush_and_close(uint param_1, int param_2, int param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	ulonglong uVar1;
	undefined uVar2;
	undefined uVar3;
	undefined8 uVar4;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffd0;

	uVar3 = (undefined)param_3;
	uVar2 = (undefined)param_2;
	if (_DAT_100f427c == 0) {
		uVar4 = 1;
	} else {
		if (_DAT_100f4278 == 0) {
			uVar4 = 1;
		} else {
			uVar4 = mpqapi_can_seek((char)param_1, uVar2, uVar3, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffb8);
			if ((int)uVar4 == 0) {
				uVar4 = 0;
			} else {
				uVar1 = WriteMPQHeader((char)uVar4, uVar2, uVar3, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffffb8);
				if ((int)uVar1 == 0) {
					uVar4 = 0;
				} else {
					uVar1 = mpqapi_write_block_table((char)uVar1, uVar2, uVar3, param_4, param_5, param_6, param_7, param_8,
					    in_stack_ffffffb8);
					if ((int)uVar1 == 0) {
						uVar4 = 0;
					} else {
						uVar1 = mpqapi_write_hash_table((char)uVar1, uVar2, uVar3, param_4, param_5, param_6, param_7, param_8,
						    in_stack_ffffffb8);
						if ((int)uVar1 == 0) {
							uVar4 = 0;
						} else {
							uVar4 = 1;
						}
					}
				}
			}
		}
	}
	CloseMPQ(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8,
	    in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffd0);
	return uVar4;
}
