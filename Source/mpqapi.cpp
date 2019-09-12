
void mpqapi_xor_buf(char *pbData)

{
	*pbData = *pbData ^ 0xab;
	pbData[1] = pbData[1] ^ 0x56;
	pbData[2] = pbData[2] ^ 0xac;
	pbData[3] = pbData[3] ^ 0x58;
	pbData[4] = pbData[4] ^ 0xb0;
	pbData[5] = pbData[5] ^ 0x61;
	pbData[6] = pbData[6] ^ 0xc3;
	pbData[7] = pbData[7] ^ 0x87;
	return;
}

BOOL mpqapi_reg_load_modification_time(char *dst, int size)

{
	BOOL BVar1;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	int local_3c;
	DWORD local_18[6];

	ZeroMemory((char)dst, (BYTE)size, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb, in_stack_ffffffbf,
	    local_3c);
	BVar1 = SRegLoadData(
	    *(char **)(local_3c + -0x75c8), *(char **)(local_3c + -0x5ca4), 0, (LPBYTE)dst, (BYTE)size, local_18);
	if (BVar1 == 0) {
		BVar1 = 0;
	} else {
		if (local_18[0] == size) {
			while (7 < (uint)size) {
				mpqapi_xor_buf(dst);
				size = size - 8;
				dst = dst + 8;
			}
			BVar1 = 1;
		} else {
			BVar1 = 0;
		}
	}
	return BVar1;
}

BOOLEAN mpqapi_reg_store_modification_time(char *pbData, DWORD dwLen)

{
	undefined8 uVar1;
	BOOL BVar2;
	DWORD DVar3;
	char *pbData_00;

	uVar1 = 0x100f8fd0;
	pbData_00 = pbData;
	DVar3 = dwLen;
	while (7 < DVar3) {
		mpqapi_xor_buf(pbData_00);
		DVar3 = DVar3 - 8;
		pbData_00 = pbData_00 + 8;
	}
	BVar2 = SRegSaveData(*(char **)((int)uVar1 + -0x75c8), *(char **)((int)uVar1 + -0x5ca4), 0, (BYTE *)pbData, dwLen);
	return SUB41(BVar2, 0);
}

BOOL mpqapi_set_hidden(char *pszArchive, BOOL hidden)

{
	return 1;
}

void mpqapi_store_default_time(DWORD dwChar)

{
	return;
}

void mpqapi_store_modified_time(char *pszArchive, DWORD dwChar)

{
	undefined4 uVar1;
	undefined *puVar2;
	ulonglong uVar3;
	undefined uVar4;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined4 auStack160[40];

	uVar4 = 0x95;
	puVar2 = (undefined *)(ZEXT48(register0x0000000c) - 0x220);
	*(BADSPACEBASE **)puVar2 = register0x0000000c;
	if (gbMaxPlayers != '\x01') {
		mpqapi_reg_load_modification_time(puVar2 + 0x178, 0xa0, *puVar2);
		uVar3 = FindFirstFile((char)pszArchive, (char)(ZEXT48(register0x0000000c) - 0x220) + '8', uVar4, in_r6, in_r7,
		    in_r8, in_r9, in_r10, puVar2[0xb], puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
		if ((uVar3 & 0xffffffff) != 0) {
			FindClose((int)uVar3, *puVar2);
			uVar1 = *(undefined4 *)(puVar2 + 0x50);
			auStack160[dwChar * 4] = *(undefined4 *)(puVar2 + 0x4c);
			auStack160[dwChar * 4 + 1] = uVar1;
			mpqapi_reg_store_modification_time(puVar2 + 0x178, 0xa0, *puVar2);
		}
	}
	return;
}

void mpqapi_store_creation_time(char *pszArchive, DWORD dwChar)

{
	undefined4 uVar1;
	undefined *puVar2;
	ulonglong uVar3;
	undefined uVar4;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined4 auStack168[42];

	uVar4 = 0x95;
	puVar2 = (undefined *)(ZEXT48(register0x0000000c) - 0x220);
	*(BADSPACEBASE **)puVar2 = register0x0000000c;
	if (gbMaxPlayers != '\x01') {
		mpqapi_reg_load_modification_time(puVar2 + 0x178, 0xa0, *puVar2);
		uVar3 = FindFirstFile((char)pszArchive, (char)(ZEXT48(register0x0000000c) - 0x220) + '8', uVar4, in_r6, in_r7,
		    in_r8, in_r9, in_r10, puVar2[0xb], puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
		if ((uVar3 & 0xffffffff) != 0) {
			FindClose((int)uVar3, *puVar2);
			uVar1 = *(undefined4 *)(puVar2 + 0x40);
			auStack168[dwChar * 4] = *(undefined4 *)(puVar2 + 0x3c);
			auStack168[dwChar * 4 + 1] = uVar1;
			mpqapi_reg_store_modification_time(auStack168, 0xa0, *puVar2);
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

_BLOCKENTRY *mpqapi_new_block(int *block_index)

{
	_BLOCKENTRY *p_Var1;
	_BLOCKENTRY *p_Var2;
	int iVar3;
	longlong lVar4;

	iVar3 = 0;
	lVar4 = 0x200;
	p_Var2 = _DAT_100f4274;
	while (true) {
		if ((((p_Var2->offset == 0) && (p_Var2->sizealloc == 0)) && (p_Var2->flags == 0)) && (p_Var2->sizefile == 0)) {
			if (block_index == (int *)0x0) {
				return p_Var2;
			}
			*block_index = iVar3;
			return p_Var2;
		}
		p_Var1 = p_Var2 + 1;
		if (((p_Var1->offset == 0) && (p_Var2[1].sizealloc == 0)) && ((p_Var2[1].flags == 0 && (p_Var2[1].sizefile == 0)))) {
			if (block_index == (int *)0x0) {
				return p_Var1;
			}
			*block_index = iVar3 + 1;
			return p_Var1;
		}
		p_Var1 = p_Var2 + 2;
		if (((p_Var1->offset == 0) && (p_Var2[2].sizealloc == 0)) && ((p_Var2[2].flags == 0 && (p_Var2[2].sizefile == 0))))
			break;
		p_Var1 = p_Var2 + 3;
		if ((((p_Var1->offset == 0) && (p_Var2[3].sizealloc == 0)) && (p_Var2[3].flags == 0)) && (p_Var2[3].sizefile == 0)) {
			if (block_index == (int *)0x0) {
				return p_Var1;
			}
			*block_index = iVar3 + 3;
			return p_Var1;
		}
		iVar3 = iVar3 + 4;
		p_Var2 = p_Var2 + 4;
		lVar4 = lVar4 + -1;
		if (lVar4 == 0) {
			app_fatal("Out of free block entries");
			return (_BLOCKENTRY *)0x0;
		}
	}
	if (block_index == (int *)0x0) {
		return p_Var1;
	}
	*block_index = iVar3 + 2;
	return p_Var1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void mpqapi_alloc_block(int block_offset, int block_size)

{
	bool bVar1;
	uint uVar2;
	int iVar3;
	_BLOCKENTRY *p_Var4;
	ulonglong uVar5;
	uint *puVar6;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	uint block_offset_00;
	uint uVar7;
	longlong lVar8;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	iVar3 = 0x100f8fd0;
	uVar7 = block_offset + block_size;
	lVar8 = 0x800;
	uVar5 = (ulonglong)_DAT_100f4274;
	while (true) {
		puVar6 = (uint *)uVar5;
		block_offset_00 = *puVar6;
		if ((((block_offset_00 != 0) && (puVar6[3] == 0)) && (puVar6[2] == 0)) && ((uVar2 = puVar6[1], block_offset == block_offset_00 + uVar2 || (bVar1 = block_offset_00 == uVar7, block_offset_00 = block_offset, bVar1))))
			break;
		uVar5 = uVar5 + 0x10;
		lVar8 = lVar8 + -1;
		if (lVar8 == 0) {
			if (_DAT_100f426c < uVar7) {
				iVar3 = 0x100f8fd0;
				app_fatal("MPQ free list error");
			}
			if (*(uint *)(iVar3 + -0x4d64) == uVar7) {
				*(int *)(iVar3 + -0x4d64) = block_offset;
			} else {
				p_Var4 = mpqapi_new_block((int *)0x0);
				p_Var4->offset = block_offset;
				p_Var4->sizealloc = block_size;
				p_Var4->sizefile = 0;
				p_Var4->flags = 0;
			}
			return;
		}
	}
	ZeroMemory((char)uVar5, 0x10, (char)uVar5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb, in_stack_ffffffbf,
	    local_3c);
	mpqapi_alloc_block(block_offset_00, block_size + uVar2);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int mpqapi_find_free_block(int size, int *block_size)

{
	int iVar1;
	ulonglong uVar2;
	int *piVar3;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	longlong lVar4;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	lVar4 = 0x800;
	uVar2 = (ulonglong)_DAT_100f4274;
	while (true) {
		piVar3 = (int *)uVar2;
		iVar1 = *piVar3;
		if ((((iVar1 != 0) && (piVar3[3] == 0)) && (piVar3[2] == 0)) && ((uint)size <= (uint)piVar3[1]))
			break;
		uVar2 = uVar2 + 0x10;
		lVar4 = lVar4 + -1;
		if (lVar4 == 0) {
			*block_size = size;
			iVar1 = _DAT_100f426c;
			_DAT_100f426c = _DAT_100f426c + size;
			return iVar1;
		}
	}
	*block_size = size;
	*piVar3 = *piVar3 + size;
	piVar3[1] = piVar3[1] - size;
	if (piVar3[1] != 0) {
		return iVar1;
	}
	ZeroMemory((char)uVar2, 0x10, (char)uVar2, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffcb, in_stack_ffffffcf,
	    local_2c);
	return iVar1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int mpqapi_get_hash_index(short index, int hash_a, int hash_b, int locale)

{
	bool bVar1;
	int iVar2;
	uint uVar3;
	int iVar4;

	uVar3 = SEXT24(index);
	iVar4 = 0x800;
	while (true) {
		uVar3 = uVar3 & 0x7ff;
		iVar2 = uVar3 * 0x10;
		if ((*(int *)(_DAT_100f4270 + iVar2 + 0xc) == -1) || (bVar1 = iVar4 == 0, iVar4 = iVar4 + -1, bVar1)) {
			return -1;
		}
		if ((hash_a == *(int *)(_DAT_100f4270 + iVar2)) && (((hash_b == *(int *)(_DAT_100f4270 + iVar2 + 4) && (locale == *(int *)(_DAT_100f4270 + iVar2 + 8))) && (*(int *)(_DAT_100f4270 + iVar2 + 0xc) != -2))))
			break;
		uVar3 = uVar3 + 1;
	}
	return (int)uVar3;
}

BOOL WriteMPQHeader(void)

{
	undefined *puVar1;
	undefined8 uVar2;
	DWORD DVar3;
	BOOL BVar4;
	uint uVar5;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
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

	puVar1 = (undefined *)(ZEXT48(register0x0000000c) - 0xd0);
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	ZeroMemory((char)(ZEXT48(register0x0000000c) - 0xd0) + '<', 0x68, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10,
	    puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
	*(undefined4 *)(puVar1 + 0x3c) = 0x4d50511a;
	*(undefined4 *)(puVar1 + 0x40) = 0x20;
	DVar3 = GetFileSize(*(undefined4 *)(*(int *)(puVar1 + 0x14) + -0x4d54), 0, *puVar1);
	*(DWORD *)(puVar1 + 0x44) = DVar3;
	*(undefined2 *)(puVar1 + 0x48) = 0;
	*(undefined2 *)(puVar1 + 0x4a) = 3;
	*(undefined4 *)(puVar1 + 0x4c) = 0x8068;
	*(undefined4 *)(puVar1 + 0x50) = 0x68;
	*(undefined4 *)(puVar1 + 0x54) = 0x800;
	*(undefined4 *)(puVar1 + 0x58) = 0x800;
	DVar3 = SetFilePointer(*(undefined4 *)(*(int *)(puVar1 + 0x14) + -0x4d54), 0, 0, 0, *puVar1);
	if (DVar3 == 0xffffffff) {
		uVar5 = 0;
	} else {
		*(uint *)(puVar1 + 0x40) = (uint)bStack141 << 0x18 | (uint)bStack142 << 0x10 | (uint)bStack143 << 8 | (uint)local_90;
		*(uint *)(puVar1 + 0x44) = (uint)bStack137 << 0x18 | (uint)bStack138 << 0x10 | (uint)bStack139 << 8 | (uint)local_8c;
		*(ushort *)(puVar1 + 0x48) = CONCAT11(uStack135, local_88);
		*(ushort *)(puVar1 + 0x4a) = CONCAT11(uStack133, local_86);
		*(uint *)(puVar1 + 0x4c) = (uint)bStack129 << 0x18 | (uint)bStack130 << 0x10 | (uint)bStack131 << 8 | (uint)local_84;
		*(uint *)(puVar1 + 0x50) = (uint)bStack125 << 0x18 | (uint)bStack126 << 0x10 | (uint)bStack127 << 8 | (uint)local_80;
		*(uint *)(puVar1 + 0x54) = (uint)bStack121 << 0x18 | (uint)bStack122 << 0x10 | (uint)bStack123 << 8 | (uint)local_7c;
		*(uint *)(puVar1 + 0x58) = (uint)bStack117 << 0x18 | (uint)bStack118 << 0x10 | (uint)bStack119 << 8 | (uint)local_78;
		BVar4 = WriteFile(*(undefined4 *)(*(int *)(puVar1 + 0x14) + -0x4d54), puVar1 + 0x3c, 0x68, puVar1 + 0x38, 0, *puVar1);
		if (BVar4 == 0) {
			uVar5 = 0;
		} else {
			*(uint *)(puVar1 + 0x40) = (uint)bStack141 << 0x18 | (uint)bStack142 << 0x10 | (uint)bStack143 << 8 | (uint)local_90;
			*(uint *)(puVar1 + 0x44) = (uint)bStack137 << 0x18 | (uint)bStack138 << 0x10 | (uint)bStack139 << 8 | (uint)local_8c;
			*(ushort *)(puVar1 + 0x48) = CONCAT11(uStack135, local_88);
			*(ushort *)(puVar1 + 0x4a) = CONCAT11(uStack133, local_86);
			*(uint *)(puVar1 + 0x4c) = (uint)bStack129 << 0x18 | (uint)bStack130 << 0x10 | (uint)bStack131 << 8 | (uint)local_84;
			*(uint *)(puVar1 + 0x50) = (uint)bStack125 << 0x18 | (uint)bStack126 << 0x10 | (uint)bStack127 << 8 | (uint)local_80;
			*(uint *)(puVar1 + 0x54) = (uint)bStack121 << 0x18 | (uint)bStack122 << 0x10 | (uint)bStack123 << 8 | (uint)local_7c;
			*(uint *)(puVar1 + 0x58) = (uint)bStack117 << 0x18 | (uint)bStack118 << 0x10 | (uint)bStack119 << 8 | (uint)local_78;
			uVar2 = countLeadingZeros(0x68 - *(int *)(puVar1 + 0x38));
			uVar5 = (uint)uVar2 >> 5 & 0xff;
		}
	}
	return (BOOL)uVar5;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL mpqapi_write_block_table(void)

{
	int iVar1;
	DWORD DVar2;
	uint *puVar3;
	DWORD key;
	BOOL BVar4;
	BOOL BVar5;
	longlong lVar6;
	int local_3c;
	DWORD local_18[6];

	DVar2 = SetFilePointer(_DAT_100f427c, 0x68, (PLONG)0x0, 0);
	if (DVar2 == 0xffffffff) {
		BVar5 = 0;
	} else {
		puVar3 = *(uint **)(local_3c + -0x4d5c);
		lVar6 = 0x400;
		do {
			*puVar3 = (uint) * (byte *)((int)puVar3 + 3) << 0x18 | (uint) * (byte *)((int)puVar3 + 2) << 0x10 | (uint) * (byte *)((int)puVar3 + 1) << 8 | (uint) * (byte *)puVar3;
			puVar3[1] = (uint) * (byte *)((int)puVar3 + 7) << 0x18 | (uint) * (byte *)((int)puVar3 + 6) << 0x10 | (uint) * (byte *)((int)puVar3 + 5) << 8 | (uint) * (byte *)(puVar3 + 1);
			puVar3[2] = (uint) * (byte *)((int)puVar3 + 0xb) << 0x18 | (uint) * (byte *)((int)puVar3 + 10) << 0x10 | (uint) * (byte *)((int)puVar3 + 9) << 8 | (uint) * (byte *)(puVar3 + 2);
			puVar3[3] = (uint) * (byte *)((int)puVar3 + 0xf) << 0x18 | (uint) * (byte *)((int)puVar3 + 0xe) << 0x10 | (uint) * (byte *)((int)puVar3 + 0xd) << 8 | (uint) * (byte *)(puVar3 + 3);
			puVar3[4] = (uint) * (byte *)((int)puVar3 + 0x13) << 0x18 | (uint) * (byte *)((int)puVar3 + 0x12) << 0x10 | (uint) * (byte *)((int)puVar3 + 0x11) << 8 | (uint) * (byte *)(puVar3 + 4);
			puVar3[5] = (uint) * (byte *)((int)puVar3 + 0x17) << 0x18 | (uint) * (byte *)((int)puVar3 + 0x16) << 0x10 | (uint) * (byte *)((int)puVar3 + 0x15) << 8 | (uint) * (byte *)(puVar3 + 5);
			puVar3[6] = (uint) * (byte *)((int)puVar3 + 0x1b) << 0x18 | (uint) * (byte *)((int)puVar3 + 0x1a) << 0x10 | (uint) * (byte *)((int)puVar3 + 0x19) << 8 | (uint) * (byte *)(puVar3 + 6);
			puVar3[7] = (uint) * (byte *)((int)puVar3 + 0x1f) << 0x18 | (uint) * (byte *)((int)puVar3 + 0x1e) << 0x10 | (uint) * (byte *)((int)puVar3 + 0x1d) << 8 | (uint) * (byte *)(puVar3 + 7);
			puVar3 = puVar3 + 8;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
		iVar1 = local_3c;
		key = Hash("(block table)", 3);
		Encrypt(*(void **)(iVar1 + -0x4d5c), 0x8000, key);
		BVar4 = WriteFile(*(HANDLE *)(iVar1 + -0x4d54), *(LPCVOID *)(iVar1 + -0x4d5c), 0x8000, local_18, (LPOVERLAPPED)0x0);
		key = Hash("(block table)", 3);
		Decrypt(*(void **)(local_3c + -0x4d5c), 0x8000, key);
		puVar3 = *(uint **)(local_3c + -0x4d5c);
		lVar6 = 0x400;
		do {
			*puVar3 = (uint) * (byte *)((int)puVar3 + 3) << 0x18 | (uint) * (byte *)((int)puVar3 + 2) << 0x10 | (uint) * (byte *)((int)puVar3 + 1) << 8 | (uint) * (byte *)puVar3;
			puVar3[1] = (uint) * (byte *)((int)puVar3 + 7) << 0x18 | (uint) * (byte *)((int)puVar3 + 6) << 0x10 | (uint) * (byte *)((int)puVar3 + 5) << 8 | (uint) * (byte *)(puVar3 + 1);
			puVar3[2] = (uint) * (byte *)((int)puVar3 + 0xb) << 0x18 | (uint) * (byte *)((int)puVar3 + 10) << 0x10 | (uint) * (byte *)((int)puVar3 + 9) << 8 | (uint) * (byte *)(puVar3 + 2);
			puVar3[3] = (uint) * (byte *)((int)puVar3 + 0xf) << 0x18 | (uint) * (byte *)((int)puVar3 + 0xe) << 0x10 | (uint) * (byte *)((int)puVar3 + 0xd) << 8 | (uint) * (byte *)(puVar3 + 3);
			puVar3[4] = (uint) * (byte *)((int)puVar3 + 0x13) << 0x18 | (uint) * (byte *)((int)puVar3 + 0x12) << 0x10 | (uint) * (byte *)((int)puVar3 + 0x11) << 8 | (uint) * (byte *)(puVar3 + 4);
			puVar3[5] = (uint) * (byte *)((int)puVar3 + 0x17) << 0x18 | (uint) * (byte *)((int)puVar3 + 0x16) << 0x10 | (uint) * (byte *)((int)puVar3 + 0x15) << 8 | (uint) * (byte *)(puVar3 + 5);
			puVar3[6] = (uint) * (byte *)((int)puVar3 + 0x1b) << 0x18 | (uint) * (byte *)((int)puVar3 + 0x1a) << 0x10 | (uint) * (byte *)((int)puVar3 + 0x19) << 8 | (uint) * (byte *)(puVar3 + 6);
			puVar3[7] = (uint) * (byte *)((int)puVar3 + 0x1f) << 0x18 | (uint) * (byte *)((int)puVar3 + 0x1e) << 0x10 | (uint) * (byte *)((int)puVar3 + 0x1d) << 8 | (uint) * (byte *)(puVar3 + 7);
			puVar3 = puVar3 + 8;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
		BVar5 = 0;
		if ((BVar4 != 0) && (local_18[0] == 0x8000)) {
			BVar5 = 1;
		}
	}
	return BVar5;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL mpqapi_write_hash_table(void)

{
	int iVar1;
	DWORD DVar2;
	uint *puVar3;
	DWORD key;
	BOOL BVar4;
	BOOL BVar5;
	longlong lVar6;
	int local_3c;
	DWORD local_18[6];

	DVar2 = SetFilePointer(_DAT_100f427c, 0x8068, (PLONG)0x0, 0);
	if (DVar2 == 0xffffffff) {
		BVar5 = 0;
	} else {
		puVar3 = *(uint **)(local_3c + -0x4d60);
		lVar6 = 0x400;
		do {
			*puVar3 = (uint) * (byte *)((int)puVar3 + 3) << 0x18 | (uint) * (byte *)((int)puVar3 + 2) << 0x10 | (uint) * (byte *)((int)puVar3 + 1) << 8 | (uint) * (byte *)puVar3;
			puVar3[1] = (uint) * (byte *)((int)puVar3 + 7) << 0x18 | (uint) * (byte *)((int)puVar3 + 6) << 0x10 | (uint) * (byte *)((int)puVar3 + 5) << 8 | (uint) * (byte *)(puVar3 + 1);
			puVar3[2] = (uint) * (byte *)((int)puVar3 + 0xb) << 0x18 | (uint) * (byte *)((int)puVar3 + 10) << 0x10 | (uint) * (byte *)((int)puVar3 + 9) << 8 | (uint) * (byte *)(puVar3 + 2);
			puVar3[3] = (uint) * (byte *)((int)puVar3 + 0xf) << 0x18 | (uint) * (byte *)((int)puVar3 + 0xe) << 0x10 | (uint) * (byte *)((int)puVar3 + 0xd) << 8 | (uint) * (byte *)(puVar3 + 3);
			puVar3[4] = (uint) * (byte *)((int)puVar3 + 0x13) << 0x18 | (uint) * (byte *)((int)puVar3 + 0x12) << 0x10 | (uint) * (byte *)((int)puVar3 + 0x11) << 8 | (uint) * (byte *)(puVar3 + 4);
			puVar3[5] = (uint) * (byte *)((int)puVar3 + 0x17) << 0x18 | (uint) * (byte *)((int)puVar3 + 0x16) << 0x10 | (uint) * (byte *)((int)puVar3 + 0x15) << 8 | (uint) * (byte *)(puVar3 + 5);
			puVar3[6] = (uint) * (byte *)((int)puVar3 + 0x1b) << 0x18 | (uint) * (byte *)((int)puVar3 + 0x1a) << 0x10 | (uint) * (byte *)((int)puVar3 + 0x19) << 8 | (uint) * (byte *)(puVar3 + 6);
			puVar3[7] = (uint) * (byte *)((int)puVar3 + 0x1f) << 0x18 | (uint) * (byte *)((int)puVar3 + 0x1e) << 0x10 | (uint) * (byte *)((int)puVar3 + 0x1d) << 8 | (uint) * (byte *)(puVar3 + 7);
			puVar3 = puVar3 + 8;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
		iVar1 = local_3c;
		key = Hash("(hash table)", 3);
		Encrypt(*(void **)(iVar1 + -0x4d60), 0x8000, key);
		BVar4 = WriteFile(*(HANDLE *)(iVar1 + -0x4d54), *(LPCVOID *)(iVar1 + -0x4d60), 0x8000, local_18, (LPOVERLAPPED)0x0);
		key = Hash("(hash table)", 3);
		Decrypt(*(void **)(local_3c + -0x4d60), 0x8000, key);
		puVar3 = *(uint **)(local_3c + -0x4d60);
		lVar6 = 0x400;
		do {
			*puVar3 = (uint) * (byte *)((int)puVar3 + 3) << 0x18 | (uint) * (byte *)((int)puVar3 + 2) << 0x10 | (uint) * (byte *)((int)puVar3 + 1) << 8 | (uint) * (byte *)puVar3;
			puVar3[1] = (uint) * (byte *)((int)puVar3 + 7) << 0x18 | (uint) * (byte *)((int)puVar3 + 6) << 0x10 | (uint) * (byte *)((int)puVar3 + 5) << 8 | (uint) * (byte *)(puVar3 + 1);
			puVar3[2] = (uint) * (byte *)((int)puVar3 + 0xb) << 0x18 | (uint) * (byte *)((int)puVar3 + 10) << 0x10 | (uint) * (byte *)((int)puVar3 + 9) << 8 | (uint) * (byte *)(puVar3 + 2);
			puVar3[3] = (uint) * (byte *)((int)puVar3 + 0xf) << 0x18 | (uint) * (byte *)((int)puVar3 + 0xe) << 0x10 | (uint) * (byte *)((int)puVar3 + 0xd) << 8 | (uint) * (byte *)(puVar3 + 3);
			puVar3[4] = (uint) * (byte *)((int)puVar3 + 0x13) << 0x18 | (uint) * (byte *)((int)puVar3 + 0x12) << 0x10 | (uint) * (byte *)((int)puVar3 + 0x11) << 8 | (uint) * (byte *)(puVar3 + 4);
			puVar3[5] = (uint) * (byte *)((int)puVar3 + 0x17) << 0x18 | (uint) * (byte *)((int)puVar3 + 0x16) << 0x10 | (uint) * (byte *)((int)puVar3 + 0x15) << 8 | (uint) * (byte *)(puVar3 + 5);
			puVar3[6] = (uint) * (byte *)((int)puVar3 + 0x1b) << 0x18 | (uint) * (byte *)((int)puVar3 + 0x1a) << 0x10 | (uint) * (byte *)((int)puVar3 + 0x19) << 8 | (uint) * (byte *)(puVar3 + 6);
			puVar3[7] = (uint) * (byte *)((int)puVar3 + 0x1f) << 0x18 | (uint) * (byte *)((int)puVar3 + 0x1e) << 0x10 | (uint) * (byte *)((int)puVar3 + 0x1d) << 8 | (uint) * (byte *)(puVar3 + 7);
			puVar3 = puVar3 + 8;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
		BVar5 = 0;
		if ((BVar4 != 0) && (local_18[0] == 0x8000)) {
			BVar5 = 1;
		}
	}
	return BVar5;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL mpqapi_can_seek(void)

{
	DWORD DVar1;
	BOOL BVar2;
	int local_2c;

	DVar1 = SetFilePointer(_DAT_100f427c, _DAT_100f426c, (PLONG)0x0, 0);
	if (DVar1 == 0xffffffff) {
		BVar2 = 0;
	} else {
		BVar2 = SetEndOfFile(*(HANDLE *)(local_2c + -0x4d54));
	}
	return BVar2;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL ParseMPQHeader(_FILEHEADER *pHdr, DWORD *pdwNextFileStart)

{
	bool bVar1;
	DWORD DVar2;
	BOOL BVar3;
	undefined uVar4;
	undefined uVar5;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	int local_3c;
	DWORD local_18[6];

	DVar2 = GetFileSize(_DAT_100f427c, (LPDWORD)0x0);
	*pdwNextFileStart = DVar2;
	if (DVar2 == 0xffffffff) {
		bVar1 = true;
	} else {
		if (DVar2 < 0x68) {
			bVar1 = true;
		} else {
			in_r7 = 0;
			BVar3 = ReadFile(*(HANDLE *)(local_3c + -0x4d54), pHdr, 0x68, local_18, (LPOVERLAPPED)0x0);
			if (BVar3 == 0) {
				bVar1 = true;
			} else {
				if (local_18[0] == 0x68) {
					pHdr->headersize = (uint) * (byte *)((int)&pHdr->headersize + 3) << 0x18 | (uint) * (byte *)((int)&pHdr->headersize + 2) << 0x10 | (uint) * (byte *)((int)&pHdr->headersize + 1) << 8 | (uint) * (byte *)&pHdr->headersize;
					pHdr->filesize = (uint) * (byte *)((int)&pHdr->filesize + 3) << 0x18 | (uint) * (byte *)((int)&pHdr->filesize + 2) << 0x10 | (uint) * (byte *)((int)&pHdr->filesize + 1) << 8 | (uint) * (byte *)&pHdr->filesize;
					pHdr->version = CONCAT11(*(undefined *)((int)&pHdr->version + 1), *(undefined *)&pHdr->version);
					pHdr->sectorsizeid = CONCAT11(*(undefined *)((int)&pHdr->sectorsizeid + 1), *(undefined *)&pHdr->sectorsizeid);
					pHdr->hashoffset = (uint) * (byte *)((int)&pHdr->hashoffset + 3) << 0x18 | (uint) * (byte *)((int)&pHdr->hashoffset + 2) << 0x10 | (uint) * (byte *)((int)&pHdr->hashoffset + 1) << 8 | (uint) * (byte *)&pHdr->hashoffset;
					pHdr->blockoffset = (uint) * (byte *)((int)&pHdr->blockoffset + 3) << 0x18 | (uint) * (byte *)((int)&pHdr->blockoffset + 2) << 0x10 | (uint) * (byte *)((int)&pHdr->blockoffset + 1) << 8 | (uint) * (byte *)&pHdr->blockoffset;
					pHdr->hashcount = (uint) * (byte *)((int)&pHdr->hashcount + 3) << 0x18 | (uint) * (byte *)((int)&pHdr->hashcount + 2) << 0x10 | (uint) * (byte *)((int)&pHdr->hashcount + 1) << 8 | (uint) * (byte *)&pHdr->hashcount;
					pHdr->blockcount = (uint) * (byte *)((int)&pHdr->blockcount + 3) << 0x18 | (uint) * (byte *)((int)&pHdr->blockcount + 2) << 0x10 | (uint) * (byte *)((int)&pHdr->blockcount + 1) << 8 | (uint) * (byte *)&pHdr->blockcount;
					if (pHdr->signature == 0x4d50511a) {
						if (pHdr->headersize == 0x20) {
							if (pHdr->version == 0) {
								if (pHdr->sectorsizeid == 3) {
									if (pHdr->filesize == DVar2) {
										if (pHdr->hashoffset == 0x8068) {
											if (pHdr->blockoffset == 0x68) {
												if (pHdr->hashcount == 0x800) {
													if (pHdr->blockcount == 0x800) {
														bVar1 = false;
													} else {
														bVar1 = true;
													}
												} else {
													bVar1 = true;
												}
											} else {
												bVar1 = true;
											}
										} else {
											bVar1 = true;
										}
									} else {
										bVar1 = true;
									}
								} else {
									bVar1 = true;
								}
							} else {
								bVar1 = true;
							}
						} else {
							bVar1 = true;
						}
					} else {
						bVar1 = true;
					}
				} else {
					bVar1 = true;
				}
			}
		}
	}
	if (bVar1) {
		uVar4 = 0;
		uVar5 = 0;
		DVar2 = SetFilePointer(*(HANDLE *)(local_3c + -0x4d54), 0, (PLONG)0x0, 0);
		if (DVar2 == 0xffffffff) {
			return 0;
		}
		BVar3 = SetEndOfFile(*(HANDLE *)(local_3c + -0x4d54));
		if (BVar3 == 0) {
			return 0;
		}
		ZeroMemory((char)pHdr, 0x68, uVar4, uVar5, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb, in_stack_ffffffbf,
		    local_3c);
		pHdr->signature = 0x4d50511a;
		pHdr->headersize = 0x20;
		pHdr->sectorsizeid = 3;
		pHdr->version = 0;
		*pdwNextFileStart = 0x10068;
		*(undefined4 *)(local_3c + -0x4d58) = 1;
		*(undefined *)(local_3c + -0x4d68) = 1;
	}
	return 1;
}

int FetchHandle(char *pszName)

{
	DWORD hash_b;
	DWORD hash_a;
	DWORD DVar1;
	int iVar2;

	hash_b = Hash(pszName, 2);
	hash_a = Hash(pszName, 1);
	DVar1 = Hash(pszName, 0);
	iVar2 = mpqapi_get_hash_index((short)DVar1, hash_a, hash_b, 0);
	return iVar2;
}

void mpqapi_remove_hash_entry(char *pszName)

{
	uint uVar1;
	int block_offset;
	int block_size;
	longlong lVar2;
	int *piVar3;
	longlong lVar4;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	block_offset = 0x100f8fd0;
	block_size = FetchHandle(pszName);
	if (block_size != -1) {
		uVar1 = *(uint *)(block_offset + -0x4d5c);
		lVar4 = (ulonglong) * (uint *)(block_offset + -0x4d60) + (ulonglong)(uint)(block_size << 4);
		block_size = (int)lVar4;
		block_offset = *(int *)(block_size + 0xc);
		*(undefined4 *)(block_size + 0xc) = 0xfffffffe;
		lVar2 = (ulonglong)uVar1 + (ulonglong)(uint)(block_offset << 4);
		piVar3 = (int *)lVar2;
		block_offset = *piVar3;
		block_size = piVar3[1];
		ZeroMemory((char)lVar2, 0x10, (char)uVar1, (char)lVar4, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffcb,
		    in_stack_ffffffcf, local_2c);
		mpqapi_alloc_block(block_offset, block_size);
		*(undefined4 *)(local_2c + -0x4d58) = 1;
	}
	return;
}

void thunk_mpqapi_remove_hash_entry(char *pszName)

{
	mpqapi_remove_hash_entry(pszName);
	return;
}

void mpqapi_remove_hash_entries(fnGetName *fnGetName)

{
	int bActivate;
	int iVar1;
	char acStack280[280];

	bActivate = 0;
	while (true) {
		iVar1 = bActivate + 1;
		fnMenu(bActivate);
		if (bActivate == 0)
			break;
		mpqapi_remove_hash_entry(acStack280);
		bActivate = iVar1;
	}
	return;
}

_BLOCKENTRY *mpqapi_add_file(char *pszName, _BLOCKENTRY *pBlk, int block_index)

{
	int iVar1;
	uint uVar2;
	int iVar3;
	DWORD DVar4;
	DWORD hash_a;
	DWORD hash_b;
	int iVar5;
	int iVar6;
	int iVar7;
	uint uVar8;
	longlong lVar9;
	int iStack00000020;

	iVar3 = 0x100f8fd0;
	iStack00000020 = block_index;
	DVar4 = Hash(pszName, 0);
	hash_a = Hash(pszName, 1);
	hash_b = Hash(pszName, 2);
	iVar5 = mpqapi_get_hash_index((short)DVar4, hash_a, hash_b, 0);
	if (iVar5 != -1) {
		app_fatal(*(char **)(iVar3 + -0x5cb8), pszName);
	}
	iVar5 = *(int *)(iVar3 + -0x4d60);
	lVar9 = 0x100;
	uVar8 = DVar4 & 0x7ff;
	iVar6 = 0x7ff;
	while ((iVar1 = *(int *)(iVar5 + uVar8 * 0x10 + 0xc), iVar7 = iVar6, iVar1 != -1 && (iVar7 = iVar6, iVar1 != -2))) {
		uVar2 = uVar8 + 1;
		uVar8 = uVar2 & 0x7ff;
		iVar1 = *(int *)(iVar5 + (uVar2 * 0x10 & 0x7ff0) + 0xc);
		iVar7 = iVar6;
		if ((iVar1 == -1) || (iVar7 = iVar6, iVar1 == -2))
			break;
		uVar2 = uVar8 + 1;
		iVar7 = iVar6 + -1;
		uVar8 = uVar2 & 0x7ff;
		iVar1 = *(int *)(iVar5 + (uVar2 * 0x10 & 0x7ff0) + 0xc);
		if ((iVar1 == -1) || (iVar1 == -2))
			break;
		uVar2 = uVar8 + 1;
		iVar7 = iVar6 + -2;
		uVar8 = uVar2 & 0x7ff;
		iVar1 = *(int *)(iVar5 + (uVar2 * 0x10 & 0x7ff0) + 0xc);
		if ((iVar1 == -1) || (iVar1 == -2))
			break;
		uVar2 = uVar8 + 1;
		iVar7 = iVar6 + -3;
		uVar8 = uVar2 & 0x7ff;
		iVar1 = *(int *)(iVar5 + (uVar2 * 0x10 & 0x7ff0) + 0xc);
		if ((iVar1 == -1) || (iVar1 == -2))
			break;
		uVar2 = uVar8 + 1;
		iVar7 = iVar6 + -4;
		uVar8 = uVar2 & 0x7ff;
		iVar1 = *(int *)(iVar5 + (uVar2 * 0x10 & 0x7ff0) + 0xc);
		if ((iVar1 == -1) || (iVar1 == -2))
			break;
		uVar2 = uVar8 + 1;
		iVar7 = iVar6 + -5;
		uVar8 = uVar2 & 0x7ff;
		iVar1 = *(int *)(iVar5 + (uVar2 * 0x10 & 0x7ff0) + 0xc);
		if ((iVar1 == -1) || (iVar1 == -2))
			break;
		uVar2 = uVar8 + 1;
		iVar7 = iVar6 + -6;
		uVar8 = uVar2 & 0x7ff;
		iVar1 = *(int *)(iVar5 + (uVar2 * 0x10 & 0x7ff0) + 0xc);
		if ((iVar1 == -1) || (iVar1 == -2))
			break;
		iVar7 = iVar6 + -8;
		uVar8 = uVar8 + 1 & 0x7ff;
		lVar9 = lVar9 + -1;
		iVar6 = iVar7;
		if (lVar9 == 0)
			break;
	}
	if (iVar7 < 0) {
		app_fatal(*(char **)(iVar3 + -0x5cbc));
	}
	if (pBlk == (_BLOCKENTRY *)0x0) {
		pBlk = mpqapi_new_block((int *)&stack0x00000020);
	}
	iVar5 = uVar8 * 0x10;
	*(DWORD *)(*(int *)(iVar3 + -0x4d60) + iVar5) = hash_a;
	*(DWORD *)(*(int *)(iVar3 + -0x4d60) + iVar5 + 4) = hash_b;
	*(undefined4 *)(*(int *)(iVar3 + -0x4d60) + iVar5 + 8) = 0;
	*(int *)(*(int *)(iVar3 + -0x4d60) + iVar5 + 0xc) = iStack00000020;
	return pBlk;
}

BOOL mpqapi_write_file_contents(char *pszName, BYTE *pbData, DWORD dwLen, _BLOCKENTRY *pBlk)

{
	DWORD dwBytes;
	uint size;
	ulonglong uVar1;
	undefined8 uVar2;
	int iVar3;
	char *pcVar4;
	int iVar5;
	DWORD nNumberOfBytesToWrite;
	BOOL BVar6;
	uint *puVar7;
	undefined uVar9;
	ulonglong uVar8;
	longlong lVar10;
	undefined uVar11;
	undefined8 in_r7;
	undefined uVar12;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined8 unaff_r23;
	longlong lVar13;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	uint *lpBuffer;
	undefined8 unaff_r27;
	uint uVar14;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined in_stack_ffffff8b;
	undefined in_stack_ffffff8f;
	int local_6c;
	int iVar15;
	DWORD local_30[3];
	undefined4 local_24;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	lVar13 = (longlong)(int)pbData;
	uVar2 = 0x100f8fd0;
	local_24 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	while (pcVar4 = strchr(pszName, 0x3a), pcVar4 != (char *)0x0) {
		pszName = pcVar4 + 1;
	}
	while (true) {
		pcVar4 = strchr(pszName, 0x5c);
		iVar3 = (int)uVar2;
		if (pcVar4 == (char *)0x0)
			break;
		pszName = pcVar4 + 1;
	}
	Hash(pszName, 3);
	dwBytes = ((dwLen + 0xfff >> 0xc) + 1) * 4;
	local_30[0] = dwBytes;
	iVar5 = mpqapi_find_free_block(dwLen + dwBytes, &pBlk->sizealloc);
	pBlk->offset = iVar5;
	pBlk->sizefile = dwLen;
	lVar10 = 0;
	pBlk->flags = -0x7fffff00;
	nNumberOfBytesToWrite = SetFilePointer(*(HANDLE *)(iVar3 + -0x4d54), pBlk->offset, (PLONG)0x0, 0);
	if (nNumberOfBytesToWrite == 0xffffffff) {
		return 0;
	}
	iVar3 = 0;
	uVar14 = 0;
	lpBuffer = (uint *)0x0;
	iVar5 = 0;
	while (true) {
		uVar12 = (undefined)in_r7;
		uVar11 = (undefined)lVar10;
		if (dwLen == 0)
			break;
		lVar10 = 0x100;
		pcVar4 = &DAT_1015cf74;
		do {
			*pcVar4 = *pcVar4 + -0x56;
			pcVar4[1] = pcVar4[1] + -0x56;
			pcVar4[2] = pcVar4[2] + -0x56;
			pcVar4[3] = pcVar4[3] + -0x56;
			pcVar4[4] = pcVar4[4] + -0x56;
			pcVar4[5] = pcVar4[5] + -0x56;
			pcVar4[6] = pcVar4[6] + -0x56;
			pcVar4[7] = pcVar4[7] + -0x56;
			pcVar4[8] = pcVar4[8] + -0x56;
			pcVar4[9] = pcVar4[9] + -0x56;
			pcVar4[10] = pcVar4[10] + -0x56;
			pcVar4[0xb] = pcVar4[0xb] + -0x56;
			pcVar4[0xc] = pcVar4[0xc] + -0x56;
			pcVar4[0xd] = pcVar4[0xd] + -0x56;
			pcVar4[0xe] = pcVar4[0xe] + -0x56;
			pcVar4[0xf] = pcVar4[0xf] + -0x56;
			pcVar4 = pcVar4 + 0x10;
			lVar10 = lVar10 + -1;
		} while (lVar10 != 0);
		size = dwLen;
		if (0xfff < dwLen) {
			size = 0x1000;
		}
		uVar9 = (undefined)size;
		CopyMemory(0x74, (char)lVar13, uVar9, uVar11, uVar12, in_r8, in_r9, in_r10, in_stack_ffffff8b,
		    in_stack_ffffff8f, local_6c);
		lVar13 = lVar13 + (ulonglong)size;
		iVar15 = local_6c;
		nNumberOfBytesToWrite = PkwareCompress(&DAT_1015cf74, size);
		if (iVar3 == 0) {
			local_30[0] = dwBytes;
			lpBuffer = (uint *)DiabloAllocPtr(dwBytes);
			ZeroMemory((char)lpBuffer, (char)local_30[0], uVar9, uVar11, uVar12, in_r8, in_r9, in_r10,
			    in_stack_ffffff8b, in_stack_ffffff8f, iVar15);
			local_6c = iVar15;
			BVar6 = WriteFile(*(HANDLE *)(iVar15 + -0x4d54), lpBuffer, local_30[0], local_30, (LPOVERLAPPED)0x0);
			if (BVar6 == 0)
				goto LAB_10078608;
			uVar14 = uVar14 + local_30[0];
			iVar15 = local_6c;
		}
		*(uint *)((int)lpBuffer + iVar5) = uVar14;
		lVar10 = ZEXT48(register0x0000000c) - 0x34;
		in_r7 = 0;
		BVar6 = WriteFile(
		    *(HANDLE *)(local_6c + -0x4d54), &DAT_1015cf74, nNumberOfBytesToWrite, (LPDWORD)lVar10, (LPOVERLAPPED)0x0);
		if (BVar6 == 0)
			goto LAB_10078608;
		iVar5 = iVar5 + 4;
		iVar3 = iVar3 + 1;
		if (dwLen < 0x1001) {
			dwLen = 0;
		} else {
			dwLen = dwLen - 0x1000;
		}
		uVar14 = uVar14 + nNumberOfBytesToWrite;
		local_6c = iVar15;
	}
	lpBuffer[iVar3] = uVar14;
	nNumberOfBytesToWrite = SetFilePointer(*(HANDLE *)(local_6c + -0x4d54), -uVar14, (PLONG)0x0, 1);
	if (nNumberOfBytesToWrite == 0xffffffff)
		goto LAB_10078608;
	size = local_30[0] >> 2;
	uVar8 = (ulonglong)size;
	if (size != 0) {
		uVar1 = (ulonglong)(local_30[0] >> 5);
		puVar7 = lpBuffer;
		if (local_30[0] >> 5 != 0) {
			do {
				*puVar7 = (uint) * (byte *)((int)puVar7 + 3) << 0x18 | (uint) * (byte *)((int)puVar7 + 2) << 0x10 | (uint) * (byte *)((int)puVar7 + 1) << 8 | (uint) * (byte *)puVar7;
				puVar7[1] = (uint) * (byte *)((int)puVar7 + 7) << 0x18 | (uint) * (byte *)((int)puVar7 + 6) << 0x10 | (uint) * (byte *)((int)puVar7 + 5) << 8 | (uint) * (byte *)(puVar7 + 1);
				puVar7[2] = (uint) * (byte *)((int)puVar7 + 0xb) << 0x18 | (uint) * (byte *)((int)puVar7 + 10) << 0x10 | (uint) * (byte *)((int)puVar7 + 9) << 8 | (uint) * (byte *)(puVar7 + 2);
				puVar7[3] = (uint) * (byte *)((int)puVar7 + 0xf) << 0x18 | (uint) * (byte *)((int)puVar7 + 0xe) << 0x10 | (uint) * (byte *)((int)puVar7 + 0xd) << 8 | (uint) * (byte *)(puVar7 + 3);
				puVar7[4] = (uint) * (byte *)((int)puVar7 + 0x13) << 0x18 | (uint) * (byte *)((int)puVar7 + 0x12) << 0x10 | (uint) * (byte *)((int)puVar7 + 0x11) << 8 | (uint) * (byte *)(puVar7 + 4);
				puVar7[5] = (uint) * (byte *)((int)puVar7 + 0x17) << 0x18 | (uint) * (byte *)((int)puVar7 + 0x16) << 0x10 | (uint) * (byte *)((int)puVar7 + 0x15) << 8 | (uint) * (byte *)(puVar7 + 5);
				puVar7[6] = (uint) * (byte *)((int)puVar7 + 0x1b) << 0x18 | (uint) * (byte *)((int)puVar7 + 0x1a) << 0x10 | (uint) * (byte *)((int)puVar7 + 0x19) << 8 | (uint) * (byte *)(puVar7 + 6);
				puVar7[7] = (uint) * (byte *)((int)puVar7 + 0x1f) << 0x18 | (uint) * (byte *)((int)puVar7 + 0x1e) << 0x10 | (uint) * (byte *)((int)puVar7 + 0x1d) << 8 | (uint) * (byte *)(puVar7 + 7);
				puVar7 = puVar7 + 8;
				uVar1 = uVar1 - 1;
			} while (uVar1 != 0);
			uVar8 = uVar8 & 7;
			if ((size & 7) == 0)
				goto LAB_10078580;
		}
		do {
			*puVar7 = (uint) * (byte *)((int)puVar7 + 3) << 0x18 | (uint) * (byte *)((int)puVar7 + 2) << 0x10 | (uint) * (byte *)((int)puVar7 + 1) << 8 | (uint) * (byte *)puVar7;
			uVar8 = uVar8 - 1;
			puVar7 = puVar7 + 1;
		} while (uVar8 != 0);
	}
LAB_10078580:
	BVar6 = WriteFile(*(HANDLE *)(local_6c + -0x4d54), lpBuffer, local_30[0], local_30, (LPOVERLAPPED)0x0);
	if ((BVar6 != 0) && (nNumberOfBytesToWrite = SetFilePointer(*(HANDLE *)(local_6c + -0x4d54), uVar14 - local_30[0], (PLONG)0x0, 1), nNumberOfBytesToWrite != 0xffffffff)) {
		mem_free_dbg(lpBuffer);
		if ((uVar14 < (uint)pBlk->sizealloc) && (size = pBlk->sizealloc - uVar14, 0x3ff < size)) {
			pBlk->sizealloc = uVar14;
			mpqapi_alloc_block(pBlk->offset + uVar14, size);
		}
		return 1;
	}
LAB_10078608:
	if (lpBuffer != (uint *)0x0) {
		mem_free_dbg(lpBuffer);
	}
	return 0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL mpqapi_write_file(char *pszName, BYTE *pbData, DWORD dwLen)

{
	_BLOCKENTRY *pBlk;
	BOOL BVar1;

	_DAT_100f4278 = 1;
	mpqapi_remove_hash_entry(pszName);
	pBlk = mpqapi_add_file(pszName, (_BLOCKENTRY *)0x0, 0);
	BVar1 = mpqapi_write_file_contents(pszName, pbData, dwLen, pBlk);
	if (BVar1 == 0) {
		mpqapi_remove_hash_entry(pszName);
	}
	return (BOOL)(uint)(BVar1 != 0);
}

void mpqapi_rename(char *pszOld, char *pszNew)

{
	int iVar1;
	int iVar2;
	int block_index;
	int iVar3;

	iVar2 = 0x100f8fd0;
	block_index = FetchHandle(pszOld);
	if (block_index != -1) {
		iVar1 = *(int *)(iVar2 + -0x4d5c);
		iVar3 = *(int *)(iVar2 + -0x4d60) + block_index * 0x10;
		block_index = *(int *)(iVar3 + 0xc);
		*(undefined4 *)(iVar3 + 0xc) = 0xfffffffe;
		mpqapi_add_file(pszNew, (_BLOCKENTRY *)(iVar1 + block_index * 0x10), block_index);
		*(undefined4 *)(iVar2 + -0x4d58) = 1;
	}
	return;
}

BOOL mpqapi_has_file(char *pszName)

{
	int iVar2;
	longlong lVar1;

	iVar2 = FetchHandle(pszName);
	lVar1 = -(longlong)iVar2 + -1;
	return (BOOL)((int)lVar1 - ((uint)(lVar1 == 0) + (int)-(longlong)iVar2 + -2) & 0xff);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CloseMPQ(char *pszArchive, BOOL bFree, DWORD dwChar)

{
	void *p;
	int iVar1;
	char *pszArchive_00;
	DWORD dwChar_00;
	int local_2c;

	p = _DAT_100f4274;
	iVar1 = 0x100f8fd0;
	pszArchive_00 = pszArchive;
	dwChar_00 = dwChar;
	if (bFree != 0) {
		_DAT_100f4274 = (void *)0x0;
		iVar1 = 0x100f8fd0;
		pszArchive_00 = pszArchive;
		dwChar_00 = dwChar;
		mem_free_dbg(p);
		p = *(void **)(iVar1 + -0x4d60);
		*(undefined4 *)(iVar1 + -0x4d60) = 0;
		mem_free_dbg(p);
	}
	if (*(HANDLE *)(iVar1 + -0x4d54) != (HANDLE)0x0) {
		CloseHandle(*(HANDLE *)(iVar1 + -0x4d54));
		*(undefined4 *)(local_2c + -0x4d54) = 0;
		iVar1 = local_2c;
	}
	if (*(int *)(iVar1 + -0x4d58) != 0) {
		*(undefined4 *)(iVar1 + -0x4d58) = 0;
		mpqapi_store_modified_time(pszArchive_00, dwChar_00);
	}
	if (*(char *)(iVar1 + -0x4d68) != '\0') {
		*(undefined *)(iVar1 + -0x4d68) = 0;
		mpqapi_store_creation_time(pszArchive_00, dwChar_00);
	}
	return;
}

// WARNING: Unable to use type for symbol pcVar2

BOOL OpenMPQ(char *pszArchive, BOOL hidden, DWORD dwChar)

{
	undefined *puVar2;
	ulonglong uVar3;
	undefined **ppuVar4;
	int iVar5;
	int iVar3;
	BOOL BVar4;
	undefined4 uVar8;
	ulonglong uVar7;
	BOOL BVar9;
	BYTE *pBVar10;
	DWORD DVar11;
	DWORD key;
	uint *puVar12;
	BYTE *pBVar5;
	DWORD DVar6;
	DWORD key_00;
	uint *puVar7;
	undefined uVar14;
	undefined uVar15;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined in_r10;
	longlong lVar18;
	longlong lVar12;
	undefined *puVar1;
	code *pcVar2;

	uVar3 = ZEXT48(register0x0000000c);
	ppuVar4 = (undefined **)(sgSFX + 0x20);
	puVar2 = (undefined *)(uVar3 - 0xc0);
	*(BADSPACEBASE **)puVar2 = register0x0000000c;
	InitHash(*puVar2);
	BVar4 = mpqapi_set_hidden(pszArchive, hidden, *puVar2);
	if (BVar4 == 0) {
		return 0;
	}
	uVar10 = 0;
	*(undefined *)(ppuVar4 + -0x135a) = 0;
	uVar14 = 0;
	uVar15 = 0;
	uVar9 = 3;
	uVar11 = 0;
	uVar8 = CreateFile((char)pszArchive, 0, 0, 0, 3, 0, 0, in_r10, puVar2[0xb], puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
	iVar3 = *(int *)(puVar2 + 0x14);
	*(undefined4 *)(iVar3 + -0x4d54) = uVar8;
	pcVar2 = CreateFile_fileType_exref;
	if (hidden == 0) {
		CreateFile_fileType_exref = (code *)0x44537631;
	} else {
		CreateFile_fileType_exref = (code *)0x4453764d;
	}
	if (*(int *)(iVar3 + -0x4d54) == 0) {
		if (hidden == 0) {
			uVar10 = 0;
		} else {
			uVar10 = 6;
		}
		uVar14 = 0;
		uVar15 = 0;
		uVar9 = 2;
		uVar11 = 0;
		uVar7 = CreateFile(
		    (char)pszArchive, 0, 0, 0, 2, uVar10, 0, in_r10, puVar2[0xb], puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
		iVar3 = *(int *)(puVar2 + 0x14);
		*(undefined4 *)(iVar3 + -0x4d54) = (int)uVar7;
		if ((uVar7 & 0xffffffff) == 0) {
			return 0;
		}
		*(undefined *)(iVar3 + -0x4d68) = 1;
		*(undefined4 *)(iVar3 + -0x4d58) = 1;
	}
	if ((*(int *)(iVar3 + -0x4d5c) != 0) && (*(int *)(iVar3 + -0x4d60) != 0)) {
		CreateFile_fileType_exref = pcVar2;
		return 1;
	}
	CreateFile_fileType_exref = pcVar2;
	ZeroMemory((char)(uVar3 - 0xc0) + '8', 0x68, uVar14, uVar15, uVar9, uVar10, uVar11, in_r10, puVar2[0xb],
	    puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
	iVar5 = *(int *)(puVar2 + 0x14);
	BVar9 = (BOOL)(puVar2 + 0x38);
	BVar9 = ParseMPQHeader(BVar9, iVar5 + -0x4d64, *puVar2);
	if (BVar9 == 0)
		goto LAB_10078b70;
	pBVar10 = DiabloAllocPtr(0x8000, *puVar2);
	*(BYTE **)(iVar5 + -0x4d5c) = pBVar10;
	ZeroMemory((char)*(undefined4 *)(iVar5 + -0x4d5c), 0, uVar14, uVar15, uVar9, uVar10, uVar11, in_r10, puVar2[0xb],
	    puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
	iVar3 = *(int *)(puVar2 + 0x14);
	if (*(int *)(puVar2 + 0x54) != 0) {
		DVar11 = SetFilePointer(*(undefined4 *)(iVar3 + -0x4d54), 0x68, 0, 0, *puVar2);
		if (DVar11 == 0xffffffff)
			goto LAB_10078b70;
		uVar15 = (undefined)(uVar3 - 0x20);
		uVar9 = 0;
		BVar4 = ReadFile(*(undefined4 *)(*(int *)(puVar2 + 0x14) + -0x4d54),
		    *(undefined4 *)(*(int *)(puVar2 + 0x14) + -0x4d5c), 0x8000, (int)(uVar3 - 0x20), 0, *puVar2);
		iVar3 = *(int *)(puVar2 + 0x14);
		if (BVar4 == 0)
			goto LAB_10078b70;
		key = Hash(*(undefined4 *)(iVar3 + -0x5cb0), 3, *puVar2);
		Decrypt(*(undefined4 *)(iVar3 + -0x4d5c), 0x8000, key, *puVar2);
		puVar12 = *(uint **)(iVar3 + -0x4d5c);
		lVar18 = 0x400;
		do {
			*puVar12 = (uint) * (byte *)((int)puVar12 + 3) << 0x18 | (uint) * (byte *)((int)puVar12 + 2) << 0x10 | (uint) * (byte *)((int)puVar12 + 1) << 8 | (uint) * (byte *)puVar12;
			puVar12[1] = (uint) * (byte *)((int)puVar12 + 7) << 0x18 | (uint) * (byte *)((int)puVar12 + 6) << 0x10 | (uint) * (byte *)((int)puVar12 + 5) << 8 | (uint) * (byte *)(puVar12 + 1);
			puVar12[2] = (uint) * (byte *)((int)puVar12 + 0xb) << 0x18 | (uint) * (byte *)((int)puVar12 + 10) << 0x10 | (uint) * (byte *)((int)puVar12 + 9) << 8 | (uint) * (byte *)(puVar12 + 2);
			puVar12[3] = (uint) * (byte *)((int)puVar12 + 0xf) << 0x18 | (uint) * (byte *)((int)puVar12 + 0xe) << 0x10 | (uint) * (byte *)((int)puVar12 + 0xd) << 8 | (uint) * (byte *)(puVar12 + 3);
			puVar12[4] = (uint) * (byte *)((int)puVar12 + 0x13) << 0x18 | (uint) * (byte *)((int)puVar12 + 0x12) << 0x10 | (uint) * (byte *)((int)puVar12 + 0x11) << 8 | (uint) * (byte *)(puVar12 + 4);
			puVar12[5] = (uint) * (byte *)((int)puVar12 + 0x17) << 0x18 | (uint) * (byte *)((int)puVar12 + 0x16) << 0x10 | (uint) * (byte *)((int)puVar12 + 0x15) << 8 | (uint) * (byte *)(puVar12 + 5);
			puVar12[6] = (uint) * (byte *)((int)puVar12 + 0x1b) << 0x18 | (uint) * (byte *)((int)puVar12 + 0x1a) << 0x10 | (uint) * (byte *)((int)puVar12 + 0x19) << 8 | (uint) * (byte *)(puVar12 + 6);
			puVar12[7] = (uint) * (byte *)((int)puVar12 + 0x1f) << 0x18 | (uint) * (byte *)((int)puVar12 + 0x1e) << 0x10 | (uint) * (byte *)((int)puVar12 + 0x1d) << 8 | (uint) * (byte *)(puVar12 + 7);
			puVar12 = puVar12 + 8;
			lVar18 = lVar18 + -1;
		} while (lVar18 != 0);
	}
	pBVar5 = DiabloAllocPtr(0x8000, *puVar2);
	*(BYTE **)(iVar3 + -0x4d60) = pBVar5;
	FillMemory((char)*(undefined4 *)(iVar3 + -0x4d60), 0, 0xff, uVar15, uVar9, uVar10, uVar11, in_r10, puVar2[0xb],
	    puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
	if (*(int *)(puVar2 + 0x50) == 0) {
		return 1;
	}
	DVar6 = SetFilePointer(*(undefined4 *)(*(int *)(puVar2 + 0x14) + -0x4d54), 0x8068, 0, 0, *puVar2);
	if (DVar6 != 0xffffffff) {
		BVar4 = ReadFile(*(undefined4 *)(*(int *)(puVar2 + 0x14) + -0x4d54),
		    *(undefined4 *)(*(int *)(puVar2 + 0x14) + -0x4d60), 0x8000, puVar2 + 0xa0, 0, *puVar2);
		iVar3 = *(int *)(puVar2 + 0x14);
		if (BVar4 != 0) {
			key_00 = Hash(*(undefined4 *)(iVar3 + -0x5cb4), 3, *puVar2);
			Decrypt(*(undefined4 *)(iVar3 + -0x4d60), 0x8000, key_00, *puVar2);
			puVar7 = *(uint **)(iVar3 + -0x4d60);
			lVar12 = 0x400;
			do {
				*puVar7 = (uint) * (byte *)((int)puVar7 + 3) << 0x18 | (uint) * (byte *)((int)puVar7 + 2) << 0x10 | (uint) * (byte *)((int)puVar7 + 1) << 8 | (uint) * (byte *)puVar7;
				puVar7[1] = (uint) * (byte *)((int)puVar7 + 7) << 0x18 | (uint) * (byte *)((int)puVar7 + 6) << 0x10 | (uint) * (byte *)((int)puVar7 + 5) << 8 | (uint) * (byte *)(puVar7 + 1);
				puVar7[2] = (uint) * (byte *)((int)puVar7 + 0xb) << 0x18 | (uint) * (byte *)((int)puVar7 + 10) << 0x10 | (uint) * (byte *)((int)puVar7 + 9) << 8 | (uint) * (byte *)(puVar7 + 2);
				puVar7[3] = (uint) * (byte *)((int)puVar7 + 0xf) << 0x18 | (uint) * (byte *)((int)puVar7 + 0xe) << 0x10 | (uint) * (byte *)((int)puVar7 + 0xd) << 8 | (uint) * (byte *)(puVar7 + 3);
				puVar7[4] = (uint) * (byte *)((int)puVar7 + 0x13) << 0x18 | (uint) * (byte *)((int)puVar7 + 0x12) << 0x10 | (uint) * (byte *)((int)puVar7 + 0x11) << 8 | (uint) * (byte *)(puVar7 + 4);
				puVar7[5] = (uint) * (byte *)((int)puVar7 + 0x17) << 0x18 | (uint) * (byte *)((int)puVar7 + 0x16) << 0x10 | (uint) * (byte *)((int)puVar7 + 0x15) << 8 | (uint) * (byte *)(puVar7 + 5);
				puVar7[6] = (uint) * (byte *)((int)puVar7 + 0x1b) << 0x18 | (uint) * (byte *)((int)puVar7 + 0x1a) << 0x10 | (uint) * (byte *)((int)puVar7 + 0x19) << 8 | (uint) * (byte *)(puVar7 + 6);
				puVar7[7] = (uint) * (byte *)((int)puVar7 + 0x1f) << 0x18 | (uint) * (byte *)((int)puVar7 + 0x1e) << 0x10 | (uint) * (byte *)((int)puVar7 + 0x1d) << 8 | (uint) * (byte *)(puVar7 + 7);
				puVar7 = puVar7 + 8;
				lVar12 = lVar12 + -1;
			} while (lVar12 != 0);
			return 1;
		}
	}
LAB_10078b70:
	CloseMPQ(pszArchive, 1, dwChar, *puVar2);
	return 0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL mpqapi_flush_and_close(char *pszArchive, BOOL bFree, DWORD dwChar)

{
	BOOL BVar1;

	if (_DAT_100f427c == 0) {
		BVar1 = 1;
	} else {
		if (_DAT_100f4278 == 0) {
			BVar1 = 1;
		} else {
			BVar1 = mpqapi_can_seek();
			if (BVar1 == 0) {
				BVar1 = 0;
			} else {
				BVar1 = WriteMPQHeader();
				if (BVar1 == 0) {
					BVar1 = 0;
				} else {
					BVar1 = mpqapi_write_block_table();
					if (BVar1 == 0) {
						BVar1 = 0;
					} else {
						BVar1 = mpqapi_write_hash_table();
						if (BVar1 == 0) {
							BVar1 = 0;
						} else {
							BVar1 = 1;
						}
					}
				}
			}
		}
	}
	CloseMPQ(pszArchive, bFree, dwChar);
	return BVar1;
}