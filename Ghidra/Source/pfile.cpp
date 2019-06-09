
void pfile_check_available_space(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined8 uParm5, undefined4 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	int iVar1;
	char cVar2;
	ulonglong uVar3;
	int iVar4;
	short sVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	undefined7 uVar9;
	undefined uVar10;
	undefined uVar11;

	uVar10 = (undefined)uParm5;
	uVar9 = (undefined7)((ulonglong)uParm5 >> 8);
	uVar3 = ZEXT48(register0x0000000c);
	uVar11 = 0;
	iVar1 = (int)(uVar3 - 400);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	iVar4 = IsFilepath(param_1, param_2, param_3, param_4, uVar10, (char)uParm6, (char)uParm7, (char)uParm8,
	    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf),
	    *(undefined4 *)(iVar1 + 0x14));
	cVar2 = (char)(uVar3 - 400);
	if (iVar4 != 0) {
		FilepathToFSSpec(cVar2 + '8', param_1, 0, param_4, uVar10, (char)uParm6, (char)uParm7, (char)uParm8,
		    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf),
		    *(undefined4 *)(iVar1 + 0x14));
		uVar11 = (undefined) * (undefined2 *)(iVar1 + 0x38);
	}
	lVar6 = uVar3 - 0x10a;
	lVar7 = uVar3 - 0x10c;
	lVar8 = uVar3 - 0x110;
	sVar5 = GetVInfo(uVar11, (char)lVar6, (char)lVar7, (char)lVar8, uVar10, (char)uParm6, (char)uParm7,
	    (char)uParm8, *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf),
	    *(undefined4 *)(iVar1 + 0x14));
	if ((sVar5 != 0) || (*(int *)(iVar1 + 0x80) < 0xa00000)) {
		p2cstr(cVar2 + -0x7a, (char)lVar6, (char)lVar7, (char)lVar8, uVar10, (char)uParm6, (char)uParm7,
		    (char)uParm8, *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf),
		    *(undefined4 *)(iVar1 + 0x14));
		DiskFreeDlg(iVar1 + 0x86, lVar6, lVar7, lVar8, CONCAT71(uVar9, uVar10), uParm6, uParm7, uParm8,
		    *(undefined4 *)(iVar1 + 8));
	}
	return;
}

void pfile_init_save_directory(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int iVar1;
	ulonglong uVar2;
	int iVar3;
	ulonglong uVar4;
	longlong lVar5;
	undefined7 uVar6;
	undefined uVar7;
	undefined7 uVar8;
	undefined uVar9;

	uVar8 = (undefined7)((ulonglong)param_5 >> 8);
	uVar9 = (undefined)param_5;
	uVar6 = (undefined7)((ulonglong)param_4 >> 8);
	uVar7 = (undefined)param_4;
	uVar2 = ZEXT48(register0x0000000c);
	lVar5 = 0x104;
	iVar1 = (int)(uVar2 - 0x140);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	uVar4 = GetWindowsDirectory((char)(uVar2 - 0x140) + '8', 4, (char)param_3, uVar7, uVar9, (char)param_6,
	    (char)param_7, (char)param_8, *(undefined *)(iVar1 + 0xb),
	    *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	iVar3 = *(int *)(iVar1 + 0x14);
	if ((uVar4 & 0xffffffff) != 0) {
		pfile_check_available_space(uVar2 - 0x108);
		lVar5 = uVar2 - 0x108;
		param_3 = 0x104;
		uVar4 = GetModuleFileName((char)**(undefined4 **)(iVar3 + -0x75c4), (char)lVar5, 4, uVar7, uVar9,
		    (char)param_6, (char)param_7, (char)param_8, *(undefined *)(iVar1 + 0xb),
		    *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
		iVar3 = *(int *)(iVar1 + 0x14);
		if ((uVar4 & 0xffffffff) != 0) {
			pfile_check_available_space(uVar2 - 0x108);
			return;
		}
	}
	app_fatal(*(int *)(iVar3 + -0x5a70), lVar5, param_3, CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9),
	    param_6, param_7, param_8, *(undefined4 *)(iVar1 + 8), *(undefined *)(iVar1 + 0xf),
	    *(undefined4 *)(iVar1 + 0x18), *(undefined4 *)(iVar1 + 0x1c),
	    *(undefined4 *)(iVar1 + 0x20), *(undefined4 *)(iVar1 + 0x24),
	    *(undefined4 *)(iVar1 + 0x28), *(undefined4 *)(iVar1 + 0x2c),
	    *(undefined4 *)(iVar1 + 0x30), *(undefined4 *)(iVar1 + 0x34));
	return;
}

void pfile_get_save_path(int param_1, undefined8 param_2, int param_3, int param_4, int param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined4 uVar1;
	undefined uVar3;
	ulonglong uVar2;
	longlong lVar4;
	undefined uVar5;
	longlong lVar6;
	undefined uVar7;
	longlong lVar8;
	undefined4 uVar9;
	undefined uVar10;
	longlong lVar11;
	undefined4 uVar12;
	undefined uVar13;
	undefined uVar14;
	undefined uVar15;
	undefined uVar16;
	undefined4 in_stack_fffffeb8;
	undefined uVar17;
	undefined in_stack_fffffebf;
	int local_13c;
	undefined4 in_stack_fffffec8;
	undefined4 in_stack_fffffecc;
	undefined4 in_stack_fffffed0;
	undefined4 in_stack_fffffed4;
	undefined4 in_stack_fffffed8;
	undefined4 in_stack_fffffedc;
	undefined4 in_stack_fffffee0;
	undefined4 in_stack_fffffee4;
	undefined auStack280[280];

	uVar9 = _DAT_100f355c;
	uVar1 = _DAT_100f3558;
	lVar11 = (longlong)param_5;
	lVar8 = (longlong)param_4;
	lVar6 = (longlong)param_3;
	uVar7 = (undefined)param_3;
	uVar3 = (undefined)param_1;
	if ((byte)*PTR_DAT_100f17e0 < 2) {
		lVar4 = 0x104;
		uVar2 = GetWindowsDirectory(uVar3, 4, uVar7, (char)param_4, (char)param_5, (char)param_6,
		    (char)param_7, (char)param_8, (char)in_stack_fffffeb8,
		    in_stack_fffffebf, local_13c);
	} else {
		lVar4 = 0x104;
		uVar2 = GetWindowsDirectory(uVar3, 4, uVar7, (char)param_4, (char)param_5, (char)param_6,
		    (char)param_7, (char)param_8, (char)in_stack_fffffeb8,
		    in_stack_fffffebf, local_13c);
		uVar1 = uVar9;
	}
	uVar12 = (undefined4)lVar11;
	uVar9 = (undefined4)lVar8;
	if ((uVar2 & 0xffffffff) == 0) {
		app_fatal(*(int *)(local_13c + -0x5a7c), lVar4, lVar6, lVar8, lVar11, param_6, param_7, param_8,
		    in_stack_fffffeb8, in_stack_fffffebf, in_stack_fffffec8, in_stack_fffffecc,
		    in_stack_fffffed0, in_stack_fffffed4, in_stack_fffffed8, in_stack_fffffedc,
		    in_stack_fffffee0, in_stack_fffffee4);
	}
	uVar17 = (undefined)in_stack_fffffeb8;
	uVar16 = (undefined)param_8;
	uVar15 = (undefined)param_7;
	uVar14 = (undefined)param_6;
	uVar13 = (undefined)uVar12;
	uVar10 = (undefined)uVar9;
	sprintf((int)auStack280, uVar1, param_3, uVar9, uVar12, param_6, param_7, param_8, in_stack_fffffeb8,
	    in_stack_fffffebf, in_stack_fffffecc, in_stack_fffffed0, in_stack_fffffed4,
	    in_stack_fffffed8, in_stack_fffffedc, in_stack_fffffee0, in_stack_fffffee4);
	uVar5 = (undefined)(ZEXT48(register0x0000000c) - 0x118);
	strcat(param_1, (int)(ZEXT48(register0x0000000c) - 0x118));
	_strlwr(uVar3, uVar5, uVar7, uVar10, uVar13, uVar14, uVar15, uVar16, uVar17, in_stack_fffffebf, local_13c);
	return;
}

ulonglong pfile_get_save_num_from_name(undefined param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	ulonglong uVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	ulonglong uVar9;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	lVar8 = (longlong)param_8;
	lVar7 = (longlong)param_7;
	lVar6 = (longlong)param_6;
	lVar5 = (longlong)param_5;
	lVar4 = (longlong)param_4;
	lVar3 = (longlong)param_3;
	uVar2 = (ulonglong)_DAT_100f3550;
	uVar9 = 0;
	do {
		iVar1 = _stricmp((char)uVar2, param_1, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
		if (iVar1 == 0) {
			return uVar9;
		}
		uVar9 = uVar9 + 1;
		uVar2 = uVar2 + 0x20;
	} while ((uVar9 & 0xffffffff) < 10);
	return uVar9;
}

undefined8
pfile_read_hero(undefined8 param_1, uint *param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined4 *puVar1;
	int iVar4;
	undefined8 uVar2;
	ulonglong uVar3;
	undefined uVar5;
	longlong lVar6;
	undefined uVar7;
	undefined uVar8;
	ulonglong uVar9;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	int local_5c;
	undefined4 local_2c;
	undefined4 local_28;
	undefined4 local_24;
	undefined4 local_20;
	undefined uStack25;

	uVar8 = 0xe4;
	iVar4 = SFileOpenFileEx((undefined)param_1, (char)_DAT_100f354c, 0, 0xe4, param_5, param_6, param_7,
	    param_8, (char)in_stack_ffffff98, in_stack_ffffff9f, local_5c);
	if (iVar4 == 0) {
		uVar2 = 0;
	} else {
		puVar1 = *(undefined4 **)(local_5c + -0x5a94);
		uVar7 = SUB41(puVar1, 0);
		uVar9 = 0;
		uVar2 = 0;
		local_2c = *puVar1;
		local_28 = puVar1[1];
		local_24 = puVar1[2];
		local_20 = puVar1[3];
		if (1 < **(byte **)(local_5c + -0x77f0)) {
			strcpy((int)&local_2c, *(int *)(local_5c + -0x5a98));
		}
		uVar5 = 0;
		uVar3 = SFileGetFileSize(uStack25, 0, uVar7, uVar8, param_5, param_6, param_7, param_8,
		    (char)in_stack_ffffff98, in_stack_ffffff9f, local_5c);
		uVar3._7_1_ = (undefined)uVar3;
		if (uVar3 != 0) {
			uVar9 = DiabloAllocPtr(uVar3);
			uVar8 = 0xcc;
			param_5 = 0;
			uVar5 = (undefined)uVar9;
			uVar7 = (undefined)uVar3;
			iVar4 = SFileReadFile(uStack25, uVar5, (undefined)uVar3, 0xcc, 0, param_6, param_7, param_8,
			    (char)in_stack_ffffff98, in_stack_ffffff9f, local_5c);
			if (iVar4 != 0) {
				lVar6 = ZEXT48(register0x0000000c) - 0x2c;
				uVar7 = (undefined)lVar6;
				uVar5 = (undefined)uVar3;
				lVar6 = codec_decode((uint *)uVar9, uVar3, (int)lVar6, uVar8, param_5, param_6, param_7, param_8,
				    in_stack_ffffff98);
				if ((int)lVar6 == 0x4f2) {
					lVar6 = ZEXT48(register0x0000000c) - 0x38;
					uVar5 = (undefined)lVar6;
					memcpy(param_2, (byte **)lVar6, uVar7, uVar8, param_5, param_6, param_7, param_8,
					    in_stack_ffffff98);
					uVar2 = 1;
				}
			}
		}
		uVar3._7_1_ = (undefined)in_stack_ffffff98;
		if ((uVar9 & 0xffffffff) != 0) {
			mem_free_dbg(uVar9, uVar5, uVar7, uVar8, param_5, param_6, param_7, param_8, in_stack_ffffff98);
		}
		SFileCloseFile(uStack25, uVar5, uVar7, uVar8, param_5, param_6, param_7, param_8, (undefined)uVar3,
		    in_stack_ffffff9f, local_5c);
	}
	return uVar2;
}

void pfile_encode_hero(uint *puParm1, undefined8 uParm2, undefined8 uParm3, undefined param_4,
    undefined8 uParm5, undefined4 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	undefined **ppuVar1;
	ulonglong uVar2;
	longlong lVar3;
	undefined uVar4;
	longlong lVar5;
	undefined7 uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined4 in_stack_ffffffa8;
	uint *local_28[2];
	undefined4 local_20;
	undefined4 local_1c;
	undefined4 local_18;
	undefined4 local_14;

	uVar7 = (undefined)uParm5;
	uVar6 = (undefined7)((ulonglong)uParm5 >> 8);
	ppuVar1 = &toc;
	uVar4 = SUB41(_DAT_100f3534, 0);
	local_20 = *_DAT_100f3534;
	local_1c = _DAT_100f3534[1];
	local_18 = _DAT_100f3534[2];
	local_14 = _DAT_100f3534[3];
	if (1 < (byte)*PTR_DAT_100f17e0) {
		ppuVar1 = &toc;
		strcpy((int)&local_20, _DAT_100f3538);
	}
	uVar2 = codec_get_encoded_len(0x4f2);
	uVar2._7_1_ = (undefined)uVar2;
	lVar3 = DiabloAllocPtr();
	lVar3._7_1_ = (undefined)lVar3;
	local_28[0] = (uint *)lVar3;
	memcpy(local_28, puParm1, uVar4, param_4, uVar7, (char)uParm6, (char)uParm7, (char)uParm8,
	    in_stack_ffffffa8);
	lVar5 = ZEXT48(register0x0000000c) - 0x20;
	codec_encode((uint *)lVar3, 0x4f2, uVar2, lVar5, CONCAT71(uVar6, uVar7), uParm6, uParm7, uParm8,
	    in_stack_ffffffa8);
	uVar10 = (undefined)uParm8;
	uVar9 = (undefined)uParm7;
	uVar8 = (undefined)uParm6;
	uVar4 = (undefined)lVar5;
	mpqapi_write_file(ZEXT48(ppuVar1[-0x16a1]), lVar3, (uint)uVar2, lVar5, CONCAT71(uVar6, uVar7), uParm6, uParm7,
	    uParm8, in_stack_ffffffa8);
	mem_free_dbg(lVar3, (undefined)lVar3, (undefined)uVar2, uVar4, uVar7, uVar8, uVar9, uVar10,
	    in_stack_ffffffa8);
	return;
}

undefined8
pfile_open_archive(int param_1, int param_2, undefined8 param_3, undefined4 param_4, undefined4 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined *puVar1;
	uint uVar2;
	undefined8 uVar3;
	byte bVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined4 in_stack_fffffeb8;
	undefined uVar11;
	undefined in_stack_fffffebf;
	undefined4 in_stack_fffffec8;
	undefined auStack280[280];

	puVar1 = PTR_DAT_100f17e0;
	uVar10 = (undefined)param_8;
	uVar9 = (undefined)param_7;
	uVar8 = (undefined)param_6;
	uVar7 = (undefined)param_5;
	uVar6 = (undefined)param_4;
	pfile_get_save_path((int)auStack280, 0x104, param_2, param_4, param_5, param_6, param_7, param_8,
	    in_stack_fffffeb8);
	uVar11 = (undefined)in_stack_fffffeb8;
	uVar2 = 1 - (uint)(byte)*puVar1;
	bVar4 = (byte)(uVar2 >> 0x1f);
	uVar5 = (char)param_2;
	uVar3 = OpenMPQ((uint)auStack280, uVar2 >> 0x1f, param_2, uVar6, uVar7, uVar8, uVar9, uVar10,
	    in_stack_fffffeb8);
	if ((int)uVar3 == 0) {
		if ((param_1 != 0) && (1 < (byte)*puVar1)) {
			mpqapi_store_default_time((char)param_2, bVar4, uVar5, uVar6, uVar7, uVar8, uVar9, uVar10, uVar11, in_stack_fffffebf, in_stack_fffffec8);
		}
		uVar3 = 0;
	} else {
		uVar3 = 1;
	}
	return uVar3;
}

void pfile_flush(int param_1, int param_2, undefined8 param_3, undefined4 param_4, undefined4 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined uVar1;
	undefined uVar2;
	undefined uVar3;
	undefined uVar4;
	undefined uVar5;
	undefined4 in_stack_fffffeb8;
	undefined auStack280[280];

	uVar5 = (undefined)param_8;
	uVar4 = (undefined)param_7;
	uVar3 = (undefined)param_6;
	uVar2 = (undefined)param_5;
	uVar1 = (undefined)param_4;
	pfile_get_save_path((int)auStack280, 0x104, param_2, param_4, param_5, param_6, param_7, param_8,
	    in_stack_fffffeb8);
	mpqapi_flush_and_close((uint)auStack280, param_1, param_2, uVar1, uVar2, uVar3, uVar4, uVar5, in_stack_fffffeb8);
	return;
}

ulonglong pfile_open_save_archive(undefined4 param_1, undefined4 param_2, undefined8 param_3, undefined4 param_4,
    undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9, undefined param_10, undefined4 param_11)

{
	int iVar1;
	char cVar2;
	int iVar4;
	ulonglong uVar3;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;

	uVar8 = (undefined)param_8;
	uVar7 = (undefined)param_7;
	uVar6 = (undefined)param_6;
	uVar5 = (undefined)param_5;
	iVar1 = (int)(ZEXT48(register0x0000000c) - 0x140);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	*(undefined4 *)(iVar1 + 0x158) = param_1;
	pfile_get_save_path(iVar1 + 0x38, 0x104, param_2, param_4, param_5, param_6, param_7, param_8,
	    *(undefined4 *)(iVar1 + 8));
	cVar2 = (char)(ZEXT48(register0x0000000c) - 0x140);
	iVar4 = SFileOpenArchive(cVar2 + '8', 0, 0, cVar2 + '<', uVar5, uVar6, uVar7, uVar8,
	    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf),
	    *(undefined4 *)(iVar1 + 0x14));
	if (iVar4 == 0) {
		uVar3 = 0;
	} else {
		uVar3 = (ulonglong) * (uint *)(iVar1 + 0x13c);
	}
	return uVar3;
}

void pfile_SFileCloseArchive(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	SFileCloseArchive(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	return;
}

undefined8
pfile_archive_contains_game(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined8 uVar1;
	int iVar2;
	undefined uVar3;
	undefined uVar4;
	undefined uVar5;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;
	undefined uStack5;

	if (*PTR_DAT_100f17e0 == '\x01') {
		uVar3 = (undefined)_DAT_100f3540;
		uVar5 = 0xf8;
		uVar4 = 0;
		iVar2 = SFileOpenFileEx(param_1, uVar3, 0, 0xf8, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
		    in_stack_ffffffcf, local_2c);
		if (iVar2 == 0) {
			uVar1 = 0;
		} else {
			SFileCloseFile(uStack5, uVar3, uVar4, uVar5, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
			    in_stack_ffffffcf, local_2c);
			uVar1 = 1;
		}
	} else {
		uVar1 = 0;
	}
	return uVar1;
}

void pfile_write_hero(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4,
    undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	ulonglong uVar4;
	undefined8 uVar5;
	ulonglong uVar6;
	undefined4 in_stack_fffffac8;
	undefined auStack1288[1288];

	puVar3 = PTR_DAT_100f1824;
	puVar2 = PTR_DAT_100f17e0;
	uVar4 = pfile_get_save_num_from_name((char)PTR_DAT_100f1828 + (char)*(undefined4 *)PTR_DAT_100f1824 * -0x14 + '<',
	    (char)PTR_DAT_100f1828, (char)param_3, (char)param_4, (char)param_5,
	    (char)param_6, (char)param_7, (char)param_8, in_stack_fffffac8);
	uVar5 = pfile_open_archive(1, (int)uVar4, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_fffffac8);
	if ((int)uVar5 != 0) {
		uVar5 = countLeadingZeros(1 - (uint)(byte)*puVar2);
		uVar1 = (uint)uVar5 >> 5 & 0xff;
		uVar6 = (ulonglong)uVar1;
		PackPlayer((int)auStack1288, *(int *)puVar3, uVar1, (char)param_4, (char)param_5, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_fffffac8);
		pfile_encode_hero(auStack1288);
		uVar5 = countLeadingZeros(1 - (uint)(byte)*puVar2);
		pfile_flush((uint)uVar5 >> 5 & 0xff, (int)uVar4, uVar6, param_4, param_5, param_6, param_7, param_8,
		    in_stack_fffffac8);
	}
	return;
}

undefined8
pfile_create_player_description(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined8 uVar2;
	ulonglong uVar3;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined4 in_stack_ffffff08;
	undefined uVar9;
	undefined in_stack_ffffff0f;
	undefined4 local_ec;
	uint auStack200[32];
	undefined auStack72[72];

	uVar8 = (undefined)param_8;
	uVar7 = (undefined)param_7;
	uVar6 = (undefined)param_6;
	uVar5 = (undefined)param_5;
	uVar4 = (undefined)param_4;
	ppuVar1 = &toc;
	uVar3 = ZEXT48(PTR_DAT_100f1824);
	*(undefined4 *)PTR_DAT_100f1824 = 0;
	pfile_read_player_from_save(param_1, param_2, uVar3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff08);
	game_2_ui_player((int)ppuVar1[-0x1dea], (int)auStack72, *(undefined4 *)ppuVar1[-0x1d6f], uVar4, uVar5,
	    uVar6, uVar7, uVar8, in_stack_ffffff08);
	UiSetupPlayerInfo(ZEXT48(ppuVar1[-0x1c4a]), ZEXT48(register0x0000000c) - 0x48, 0x4452544c, uVar4, uVar5,
	    uVar6, uVar7, uVar8, in_stack_ffffff08);
	uVar9 = (undefined)in_stack_ffffff08;
	if (((param_1 & 0xffffffff) != 0) && ((int)param_2 != 0)) {
		uVar2 = UiCreatePlayerDescription(ZEXT48(register0x0000000c) - 0x48, 0x4452544c, auStack200, uVar4, uVar5, uVar6,
		    uVar7, uVar8, in_stack_ffffff08);
		if ((int)uVar2 == 0) {
			return 0;
		}
		SStrCopy((char)param_1, 0x38, (char)param_2, uVar4, uVar5, uVar6, uVar7, uVar8, uVar9,
		    in_stack_ffffff0f, local_ec);
	}
	return 1;
}

undefined8
pfile_create_save_file(undefined param_1, undefined param_2, undefined8 uParm3, undefined4 uParm4,
    undefined4 uParm5, undefined4 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	undefined *puVar1;
	undefined *puVar2;
	ulonglong uVar3;
	int iVar5;
	int iVar6;
	undefined8 uVar4;
	char cVar7;
	undefined uVar9;
	undefined8 uVar8;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	longlong lVar10;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	ulonglong uVar11;
	undefined8 unaff_r31;
	ulonglong uVar12;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	int local_6c;
	undefined auStack72[48];
	undefined4 local_18;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	puVar2 = PTR_DAT_100f1ea8;
	puVar1 = PTR_DAT_100f1828;
	local_18 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar11 = ZEXT48(PTR_DAT_100f1ea8);
	uVar12 = ZEXT48(PTR_DAT_100f1828);
	uVar3 = pfile_get_save_num_from_name(param_2, param_2, (char)uParm3, (char)uParm4, (char)uParm5, (char)uParm6,
	    (char)uParm7, (char)uParm8, in_stack_ffffff88);
	if ((uVar3 & 0xffffffff) == 10) {
		lVar10 = 0;
		while ((int)lVar10 != 4) {
			cVar7 = (char)uVar12 + '<';
			iVar5 = _stricmp(param_1, cVar7, (char)uParm3, (char)uParm4, (char)uParm5, (char)uParm6,
			    (char)uParm7, (char)uParm8, (char)in_stack_ffffff88, in_stack_ffffff8f, local_6c);
			if (iVar5 == 0) {
				iVar5 = local_6c;
				uVar3 = pfile_get_save_num_from_name(param_1, cVar7, (char)uParm3, (char)uParm4, (char)uParm5, (char)uParm6,
				    (char)uParm7, (char)uParm8, in_stack_ffffff88);
				if ((uVar3 & 0xffffffff) != 10) {
					SStrCopy((char)*(undefined4 *)(local_6c + -0x5a80) + (char)((int)uVar3 << 5),
					    param_2, 0x20, (char)uParm4, (char)uParm5, (char)uParm6, (char)uParm7,
					    (char)uParm8, (char)in_stack_ffffff88, in_stack_ffffff8f, iVar5);
					uVar9 = 0x20;
					SStrCopy((char)puVar1 + (char)lVar10 * -0x14 + '<', param_2, 0x20, (char)uParm4,
					    (char)uParm5, (char)uParm6, (char)uParm7, (char)uParm8,
					    (char)in_stack_ffffff88, in_stack_ffffff8f, iVar5);
					iVar6 = _stricmp((char)puVar2, param_1, uVar9, (char)uParm4, (char)uParm5, (char)uParm6,
					    (char)uParm7, (char)uParm8, (char)in_stack_ffffff88, in_stack_ffffff8f, iVar5);
					if (iVar6 == 0) {
						SStrCopy((char)puVar2, param_2, 0x10, (char)uParm4, (char)uParm5, (char)uParm6,
						    (char)uParm7, (char)uParm8, (char)in_stack_ffffff88, in_stack_ffffff8f,
						    iVar5);
					}
					game_2_ui_player((int)puVar1, (int)auStack72, **(undefined4 **)(iVar5 + -0x75bc), (char)uParm4,
					    (char)uParm5, (char)uParm6, (char)uParm7, (char)uParm8, in_stack_ffffff88);
					lVar10 = ZEXT48(register0x0000000c) - 0x48;
					uVar8 = 0x4452544c;
					uVar4 = UiSetupPlayerInfo(uVar11, lVar10, 0x4452544c, (char)uParm4, (char)uParm5, (char)uParm6,
					    (char)uParm7, (char)uParm8, in_stack_ffffff88);
					pfile_write_hero(uVar4, lVar10, uVar8, uParm4, uParm5, uParm6, uParm7, uParm8, in_stack_ffffff88);
					return 1;
				}
				return 0;
			}
			uVar12 = uVar12 + 0x55ec;
			lVar10 = lVar10 + 1;
		}
	}
	return 0;
}

void pfile_flush_W(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4,
    undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	undefined7 uVar2;
	undefined uVar3;
	undefined4 in_stack_ffffffc8;

	uVar2 = (undefined7)((ulonglong)param_3 >> 8);
	uVar3 = (undefined)param_3;
	uVar1 = pfile_get_save_num_from_name((char)PTR_DAT_100f1828 + (char)*(undefined4 *)PTR_DAT_100f1824 * -0x14 + '<',
	    (char)PTR_DAT_100f1828, uVar3, (char)param_4, (char)param_5, (char)param_6,
	    (char)param_7, (char)param_8, in_stack_ffffffc8);
	pfile_flush(1, (int)uVar1, CONCAT71(uVar2, uVar3), param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	return;
}

undefined8 pfile_get_player_class(int param_1)

{
	if (param_1 == 0) {
		return 0;
	}
	if (param_1 == 1) {
		return 1;
	}
	return 2;
}

undefined8 game_2_ui_class(int param_1)

{
	if (*(char *)(param_1 + 0x15c) == '\0') {
		return 0;
	}
	if (*(char *)(param_1 + 0x15c) == '\x01') {
		return 1;
	}
	return 2;
}

void game_2_ui_player(int param_1, int param_2, undefined4 param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined8 uVar1;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	memset((char)param_2, 0x2c, (char)param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	strncpy(param_2 + 4, param_1 + 0x13c, 0xf);
	*(undefined *)(param_2 + 0x13) = 0;
	*(short *)(param_2 + 0x14) = (short)*(char *)(param_1 + 0x1b4);
	uVar1 = game_2_ui_class(param_1);
	*(undefined *)(param_2 + 0x16) = (char)uVar1;
	*(undefined2 *)(param_2 + 0x18) = (short)*(undefined4 *)(param_1 + 0x160);
	*(undefined2 *)(param_2 + 0x1a) = (short)*(undefined4 *)(param_1 + 0x168);
	*(undefined2 *)(param_2 + 0x1c) = (short)*(undefined4 *)(param_1 + 0x170);
	*(undefined2 *)(param_2 + 0x1e) = (short)*(undefined4 *)(param_1 + 0x178);
	*(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x1c8);
	*(undefined4 *)(param_2 + 0x24) = param_3;
	*(undefined *)(param_2 + 0x17) = (char)*(undefined4 *)(param_1 + 0x55a8);
	*(undefined4 *)(param_2 + 0x28) = 0;
	return;
}

void pfile_read_player_from_save(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    ulonglong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined **ppuVar2;
	ulonglong uVar3;
	ulonglong uVar4;
	undefined8 uVar5;
	ulonglong uVar6;
	longlong lVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined4 in_stack_fffffac8;
	undefined in_stack_fffffacf;
	undefined4 in_stack_fffffad8;
	undefined4 in_stack_fffffadc;
	undefined4 in_stack_fffffae0;
	undefined4 in_stack_fffffae4;
	undefined4 in_stack_fffffae8;
	undefined4 in_stack_fffffaec;
	undefined4 in_stack_fffffaf0;
	undefined4 in_stack_fffffaf4;
	undefined auStack1288[1288];

	ppuVar2 = &toc;
	uVar3 = pfile_get_save_num_from_name((char)PTR_DAT_100f1ea8, (undefined)param_2, (char)param_3, (char)param_4,
	    (char)param_5, (char)param_6, (char)param_7, (char)param_8, in_stack_fffffac8);
	uVar6 = uVar3;
	uVar4 = pfile_open_save_archive(0, (int)uVar3, param_3, (int)param_4, (int)param_5, (int)param_6, (int)param_7,
	    (int)param_8, in_stack_fffffac8, in_stack_fffffacf, in_stack_fffffad8);
	if (uVar4 == 0) {
		app_fatal((int)ppuVar2[-0x16a9], uVar6, param_3, param_4, param_5, (int)param_6, (int)param_7,
		    (int)param_8, in_stack_fffffac8, in_stack_fffffacf, in_stack_fffffad8,
		    in_stack_fffffadc, in_stack_fffffae0, in_stack_fffffae4, in_stack_fffffae8,
		    in_stack_fffffaec, in_stack_fffffaf0, in_stack_fffffaf4);
	}
	lVar7 = ZEXT48(register0x0000000c) - 0x508;
	uVar5 = pfile_read_hero(uVar4, (uint *)lVar7, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
	    (char)param_7, (char)param_8, in_stack_fffffac8);
	if ((int)uVar5 == 0) {
		app_fatal((int)ppuVar2[-0x16aa], lVar7, param_3, param_4, param_5, (int)param_6, (int)param_7,
		    (int)param_8, in_stack_fffffac8, in_stack_fffffacf, in_stack_fffffad8,
		    in_stack_fffffadc, in_stack_fffffae0, in_stack_fffffae4, in_stack_fffffae8,
		    in_stack_fffffaec, in_stack_fffffaf0, in_stack_fffffaf4);
	}
	uVar13 = (undefined)param_8;
	uVar12 = (undefined)param_7;
	uVar11 = (undefined)param_6;
	uVar10 = (undefined)param_5;
	uVar9 = (undefined)param_4;
	uVar8 = 0;
	UnPackPlayer((int)auStack1288, (ulonglong) * (uint *)ppuVar2[-0x1deb], 0, param_4, param_5, param_6,
	    param_7, param_8, in_stack_fffffac8);
	uVar5 = pfile_archive_contains_game((char)uVar4, (char)uVar3, uVar8, uVar9, uVar10, uVar11, uVar12, uVar13,
	    in_stack_fffffac8);
	puVar1 = (undefined4 *)ppuVar2[-0x1d6f];
	*puVar1 = (int)uVar5;
	pfile_SFileCloseArchive((char)uVar4, (char)puVar1, uVar8, uVar9, uVar10, uVar11, uVar12, uVar13, in_stack_fffffac8);
	return;
}

void GetTempLevelNames(int param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4,
    undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	ppuVar1 = &toc;
	pfile_get_save_num_from_name((char)PTR_DAT_100f1828 + (char)*(undefined4 *)PTR_DAT_100f1824 * -0x14 + '<',
	    (char)PTR_DAT_100f1824, (char)PTR_DAT_100f1828, (char)param_4, (char)param_5,
	    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffb8);
	if (*ppuVar1[-0x1df6] == '\0') {
		sprintf(param_1, ppuVar1[-0x16ac], (uint)(byte)*ppuVar1[-0x1df9], param_4, param_5, param_6,
		    param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4);
	} else {
		sprintf(param_1, ppuVar1[-0x16ab], (uint)(byte)*ppuVar1[-0x1df8], param_4, param_5, param_6,
		    param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4);
	}
	return;
}

void GetPermLevelNames(char *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	ulonglong uVar2;
	undefined8 uVar3;
	ulonglong uVar4;
	int iVar5;
	ulonglong uVar6;
	undefined4 uVar7;
	undefined4 uVar8;
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

	ppuVar1 = &toc;
	uVar4 = ZEXT48(PTR_DAT_100f1824);
	uVar6 = ZEXT48(PTR_DAT_100f1828);
	uVar2 = pfile_get_save_num_from_name((char)PTR_DAT_100f1828 + (char)*(undefined4 *)PTR_DAT_100f1824 * -0x14 + '<',
	    (char)PTR_DAT_100f1824, (char)PTR_DAT_100f1828, (char)param_4, (char)param_5,
	    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffb8);
	GetTempLevelNames((int)param_1, uVar4, uVar6, (int)param_4, (int)param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	iVar5 = (int)uVar2;
	uVar3 = pfile_open_archive(0, iVar5, uVar6, (int)param_4, (int)param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	iVar5._3_1_ = (undefined)uVar2;
	uVar8 = (undefined4)param_5;
	uVar7 = (undefined4)param_4;
	if ((int)uVar3 == 0) {
		app_fatal((int)ppuVar1[-0x16ad], uVar2, uVar6, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4);
	}
	uVar2 = mpqapi_has_file(param_1, (undefined)iVar5, (char)uVar6, (char)uVar7, (char)uVar8, (char)param_6,
	    (char)param_7, (char)param_8, in_stack_ffffffb8);
	pfile_flush(1, iVar5, uVar6, uVar7, uVar8, param_6, param_7, param_8, in_stack_ffffffb8);
	if ((int)uVar2 == 0) {
		if (*ppuVar1[-0x1df6] == '\0') {
			sprintf((int)param_1, ppuVar1[-0x16a2], (uint)(byte)*ppuVar1[-0x1df9], uVar7, uVar8, param_6,
			    param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc,
			    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
			    in_stack_ffffffe0, in_stack_ffffffe4);
		} else {
			sprintf((int)param_1, ppuVar1[-0x16a3], (uint)(byte)*ppuVar1[-0x1df8], uVar7, uVar8, param_6,
			    param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc,
			    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
			    in_stack_ffffffe0, in_stack_ffffffe4);
		}
	}
	return;
}

void pfile_get_game_name(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 in_stack_ffffffb8;

	ppuVar1 = &toc;
	pfile_get_save_num_from_name((char)PTR_DAT_100f1828 + (char)*(undefined4 *)PTR_DAT_100f1824 * -0x14 + '<',
	    (char)PTR_DAT_100f1824, (char)PTR_DAT_100f1828, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	strcpy(param_1, (int)ppuVar1[-0x16a4]);
	return;
}

undefined8
GetPermSaveNames(uint param_1, int param_2, undefined8 param_3, undefined4 param_4, undefined4 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined4 uVar1;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	uVar1 = _DAT_100f3548;
	if (0x10 < param_1) {
		if (0x21 < param_1) {
			return 0;
		}
		param_1 = param_1 - 0x11;
		uVar1 = _DAT_100f3544;
	}
	sprintf(param_2, uVar1, param_1, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8,
	    in_stack_ffffffcf, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4,
	    in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
	return 1;
}

undefined8
GetTempSaveNames(uint param_1, int param_2, undefined8 param_3, undefined4 param_4, undefined4 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined4 uVar1;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	uVar1 = _DAT_100f3520;
	if (0x10 < param_1) {
		if (0x21 < param_1) {
			return 0;
		}
		param_1 = param_1 - 0x11;
		uVar1 = _DAT_100f3524;
	}
	sprintf(param_2, uVar1, param_1, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8,
	    in_stack_ffffffcf, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4,
	    in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
	return 1;
}

void pfile_remove_temp_files(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	ulonglong uVar2;
	undefined8 uVar3;
	int iVar4;
	undefined7 uVar5;
	undefined uVar6;
	undefined4 uVar7;
	undefined4 uVar8;
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

	uVar5 = (undefined7)((ulonglong)param_3 >> 8);
	uVar6 = (undefined)param_3;
	ppuVar1 = &toc;
	if ((byte)*PTR_DAT_100f17e0 < 2) {
		uVar2 = pfile_get_save_num_from_name((char)PTR_DAT_100f1828 + (char)*(undefined4 *)PTR_DAT_100f1824 * -0x14 + '<', (char)PTR_DAT_100f1828,
		    uVar6, (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffc8);
		iVar4 = (int)uVar2;
		uVar3 = pfile_open_archive(0, iVar4, CONCAT71(uVar5, uVar6), (int)param_4, (int)param_5, param_6, param_7,
		    param_8, in_stack_ffffffc8);
		iVar4._3_1_ = (undefined)uVar2;
		uVar8 = (undefined4)param_5;
		uVar7 = (undefined4)param_4;
		if ((int)uVar3 == 0) {
			app_fatal((int)ppuVar1[-0x16ae], uVar2, CONCAT71(uVar5, uVar6), param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffd8, in_stack_ffffffdc,
			    in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec,
			    in_stack_fffffff0, in_stack_fffffff4);
		}
		mpqapi_remove_hash_entries((char)ppuVar1[-0x16af], (undefined)iVar4, uVar6, (char)uVar7, (char)uVar8, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffc8);
		pfile_flush(1, iVar4, CONCAT71(uVar5, uVar6), uVar7, uVar8, param_6, param_7, param_8, in_stack_ffffffc8);
	}
	return;
}

void pfile_rename_temp_to_perm(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	ulonglong uVar4;
	undefined **ppuVar5;
	ulonglong uVar6;
	undefined8 uVar7;
	int iVar8;
	undefined uVar9;
	undefined7 uVar10;
	undefined uVar11;
	undefined4 uVar12;
	undefined4 uVar13;
	longlong lVar14;
	longlong lVar15;
	longlong lVar16;
	uint uVar17;

	puVar3 = PTR_DAT_100f1828;
	puVar2 = PTR_DAT_100f1824;
	uVar10 = (undefined7)((ulonglong)param_3 >> 8);
	uVar11 = (undefined)param_3;
	lVar16 = (longlong)param_8;
	lVar15 = (longlong)param_7;
	lVar14 = (longlong)param_6;
	uVar4 = ZEXT48(register0x0000000c);
	ppuVar5 = &toc;
	iVar1 = (int)(uVar4 - 0x250);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	uVar6 = pfile_get_save_num_from_name((char)puVar3 + (char)*(undefined4 *)puVar2 * -0x14 + '<', (char)puVar3, uVar11,
	    (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8,
	    *(undefined4 *)(iVar1 + 8));
	iVar8 = (int)uVar6;
	uVar7 = pfile_open_archive(0, iVar8, CONCAT71(uVar10, uVar11), (int)param_4, (int)param_5, (int)lVar14,
	    (int)lVar15, (int)lVar16, *(undefined4 *)(iVar1 + 8));
	uVar13 = (undefined4)param_5;
	uVar12 = (undefined4)param_4;
	if ((int)uVar7 == 0) {
		app_fatal((int)ppuVar5[-0x16ae], uVar6, CONCAT71(uVar10, uVar11), param_4, param_5, (int)lVar14,
		    (int)lVar15, (int)lVar16, *(undefined4 *)(iVar1 + 8), *(undefined *)(iVar1 + 0xf),
		    *(undefined4 *)(iVar1 + 0x18), *(undefined4 *)(iVar1 + 0x1c),
		    *(undefined4 *)(iVar1 + 0x20), *(undefined4 *)(iVar1 + 0x24),
		    *(undefined4 *)(iVar1 + 0x28), *(undefined4 *)(iVar1 + 0x2c),
		    *(undefined4 *)(iVar1 + 0x30), *(undefined4 *)(iVar1 + 0x34));
	}
	uVar17 = 0;
	while (true) {
		uVar7 = GetTempSaveNames(uVar17, iVar1 + 0x140, CONCAT71(uVar10, uVar11), uVar12, uVar13, (int)lVar14,
		    (int)lVar15, (int)lVar16, *(undefined4 *)(iVar1 + 8));
		if ((int)uVar7 == 0)
			break;
		uVar9 = (undefined)(uVar4 - 0x214);
		GetPermSaveNames(uVar17, (int)(uVar4 - 0x214), CONCAT71(uVar10, uVar11), uVar12, uVar13, (int)lVar14,
		    (int)lVar15, (int)lVar16, *(undefined4 *)(iVar1 + 8));
		uVar17 = uVar17 + 1;
		uVar6 = mpqapi_has_file((char *)(iVar1 + 0x140), uVar9, uVar11, (char)uVar12, (char)uVar13, (char)lVar14, (char)lVar15, (char)lVar16, *(undefined4 *)(iVar1 + 8));
		if ((int)uVar6 != 0) {
			uVar6 = mpqapi_has_file((char *)(iVar1 + 0x3c), uVar9, uVar11, (char)uVar12, (char)uVar13,
			    (char)lVar14, (char)lVar15, (char)lVar16, *(undefined4 *)(iVar1 + 8));
			if ((int)uVar6 != 0) {
				mpqapi_remove_hash_entry((char)(uVar4 - 0x250) + '<', uVar9, uVar11, (char)uVar12, (char)uVar13, (char)lVar14, (char)lVar15, (char)lVar16, *(undefined4 *)(iVar1 + 8));
			}
			mpqapi_rename(uVar4 - 0x110, uVar4 - 0x214);
		}
	}
	pfile_flush(1, iVar8, CONCAT71(uVar10, uVar11), uVar12, uVar13, (int)lVar14, (int)lVar15, (int)lVar16,
	    *(undefined4 *)(iVar1 + 8));
	return;
}

void pfile_write_save_file(longlong param_1, undefined8 param_2, ulonglong param_3, ulonglong param_4,
    undefined8 param_5, undefined8 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined **ppuVar2;
	ulonglong uVar3;
	undefined8 uVar4;
	int iVar5;
	ulonglong uVar6;
	longlong lVar7;
	undefined4 uVar8;
	ulonglong uVar9;
	undefined4 uVar10;
	undefined *puVar11;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffa8;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 local_34;
	undefined4 local_30;
	undefined4 local_2c;
	undefined4 local_28;
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	ppuVar2 = &toc;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar9 = ZEXT48(PTR_DAT_100f1824);
	puVar11 = PTR_DAT_100f1828;
	uVar3 = pfile_get_save_num_from_name((char)PTR_DAT_100f1828 + (char)*(undefined4 *)PTR_DAT_100f1824 * -0x14 + '<',
	    (char)param_2, (char)param_3, (char)param_4, (char)PTR_DAT_100f1824,
	    (char)PTR_DAT_100f1828, (char)param_7, (char)param_8, in_stack_ffffff98);
	puVar1 = (undefined4 *)ppuVar2[-0x16b0];
	local_34 = *puVar1;
	local_30 = puVar1[1];
	local_2c = puVar1[2];
	local_28 = puVar1[3];
	if (1 < (byte)*ppuVar2[-0x1dfc]) {
		strcpy((int)&local_34, (int)ppuVar2[-0x16a6]);
	}
	lVar7 = ZEXT48(register0x0000000c) - 0x34;
	uVar6 = param_4;
	codec_encode((uint *)param_2, param_3, param_4, lVar7, uVar9, puVar11, param_7, param_8, in_stack_ffffff98);
	iVar5 = (int)uVar3;
	uVar4 = pfile_open_archive(0, iVar5, uVar6, (int)lVar7, (int)uVar9, puVar11, param_7, param_8, in_stack_ffffff98);
	if ((int)uVar4 == 0) {
		app_fatal((int)ppuVar2[-0x16ae], uVar3, uVar6, lVar7, uVar9, puVar11, param_7, param_8,
		    in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffa8, in_stack_ffffffac,
		    in_stack_ffffffb0, in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc,
		    in_stack_ffffffc0, in_stack_ffffffc4);
	}
	uVar10 = (undefined4)uVar9;
	uVar8 = (undefined4)lVar7;
	mpqapi_write_file(param_1, param_2, (uint)param_4, lVar7, uVar9, puVar11, param_7, param_8, in_stack_ffffff98);
	pfile_flush(1, iVar5, param_4, uVar8, uVar10, puVar11, param_7, param_8, in_stack_ffffff98);
	return;
}

longlong pfile_read(longlong param_1, uint *param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	int iVar2;
	ulonglong uVar3;
	undefined **ppuVar4;
	ulonglong uVar5;
	ulonglong uVar6;
	int iVar7;
	uint uVar8;
	int iVar9;
	longlong lVar10;
	ulonglong uVar11;
	undefined8 uVar12;
	longlong lVar13;
	ulonglong uVar14;
	longlong lVar15;
	longlong lVar16;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	int local_5c;
	undefined4 in_stack_ffffffa8;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 local_34;
	undefined4 local_30;
	undefined4 local_2c;
	undefined4 local_28;
	undefined uStack29;

	iVar2 = _DAT_100f3504;
	uVar3 = ZEXT48(register0x0000000c);
	ppuVar4 = &toc;
	uVar11 = ZEXT48(PTR_DAT_100f1824);
	uVar14 = ZEXT48(PTR_DAT_100f1828);
	uVar5 = pfile_get_save_num_from_name((char)PTR_DAT_100f1828 + (char)*(undefined4 *)PTR_DAT_100f1824 * -0x14 + '<',
	    (char)param_2, (char)PTR_DAT_100f1824, (char)PTR_DAT_100f1828, (char)param_5,
	    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff98);
	uVar6 = pfile_open_save_archive(0, (int)uVar5, uVar11, (int)uVar14, (int)param_5, param_6, param_7, param_8,
	    in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffa8);
	if (uVar6 == 0) {
		app_fatal((int)ppuVar4[-0x16b1], uVar5, uVar11, uVar14, param_5, param_6, param_7, param_8,
		    in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffa8, in_stack_ffffffac,
		    in_stack_ffffffb0, in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc,
		    in_stack_ffffffc0, in_stack_ffffffc4);
	}
	lVar15 = uVar3 - 0x20;
	uVar12 = 0;
	iVar7 = SFileOpenFileEx((char)uVar6, (char)param_1, 0, (char)lVar15, (char)param_5, (char)param_6,
	    (char)param_7, (char)param_8, (char)in_stack_ffffff98, in_stack_ffffff9f,
	    local_5c);
	if (iVar7 == 0) {
		app_fatal(*(int *)(local_5c + -0x5ac8), param_1, uVar12, lVar15, param_5, param_6, param_7, param_8,
		    in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffa8, in_stack_ffffffac,
		    in_stack_ffffffb0, in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc,
		    in_stack_ffffffc0, in_stack_ffffffc4);
	}
	lVar10 = 0;
	uVar8 = SFileGetFileSize(uStack29, 0, (char)uVar12, (char)lVar15, (char)param_5, (char)param_6,
	    (char)param_7, (char)param_8, (char)in_stack_ffffff98, in_stack_ffffff9f,
	    local_5c);
	*param_2 = uVar8;
	if (*param_2 == 0) {
		app_fatal(iVar2, lVar10, uVar12, lVar15, param_5, param_6, param_7, param_8, in_stack_ffffff98,
		    in_stack_ffffff9f, in_stack_ffffffa8, in_stack_ffffffac, in_stack_ffffffb0,
		    in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
		    in_stack_ffffffc4);
	}
	lVar10 = DiabloAllocPtr((ulonglong)*param_2);
	uVar5 = (ulonglong)*param_2;
	lVar16 = uVar3 - 0x24;
	uVar12 = 0;
	lVar15 = lVar10;
	iVar9 = SFileReadFile(uStack29, (char)lVar10, (char)*param_2, (char)lVar16, 0, (char)param_6,
	    (char)param_7, (char)param_8, (char)in_stack_ffffff98, in_stack_ffffff9f,
	    local_5c);
	iVar7 = local_5c;
	if (iVar9 == 0) {
		iVar7 = local_5c;
		app_fatal(*(int *)(local_5c + -0x5ad0), lVar15, uVar5, lVar16, uVar12, param_6, param_7, param_8,
		    in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffa8, in_stack_ffffffac,
		    in_stack_ffffffb0, in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc,
		    in_stack_ffffffc0, in_stack_ffffffc4);
	}
	puVar1 = *(undefined4 **)(local_5c + -0x5ad4);
	local_34 = *puVar1;
	local_30 = puVar1[1];
	local_2c = puVar1[2];
	local_28 = puVar1[3];
	if (1 < **(byte **)(local_5c + -0x77f0)) {
		strcpy((int)&local_34, *(int *)(local_5c + -0x5a98));
	}
	uVar5 = (ulonglong)*param_2;
	lVar13 = uVar3 - 0x34;
	lVar15 = codec_decode((uint *)lVar10, uVar5, (int)lVar13, (char)lVar16, (char)uVar12, (char)param_6,
	    (char)param_7, (char)param_8, in_stack_ffffff98);
	*param_2 = (uint)lVar15;
	SFileCloseFile(uStack29, (char)uVar5, (char)lVar13, (char)lVar16, (char)uVar12, (char)param_6,
	    (char)param_7, (char)param_8, (char)in_stack_ffffff98, in_stack_ffffff9f, iVar7);
	pfile_SFileCloseArchive((char)uVar6, (char)uVar5, (char)lVar13, (char)lVar16, (char)uVar12, (char)param_6,
	    (char)param_7, (char)param_8, in_stack_ffffff98);
	if (*param_2 == 0) {
		app_fatal(iVar2, uVar5, lVar13, lVar16, uVar12, param_6, param_7, param_8, in_stack_ffffff98,
		    in_stack_ffffff9f, in_stack_ffffffa8, in_stack_ffffffac, in_stack_ffffffb0,
		    in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
		    in_stack_ffffffc4);
	}
	return lVar10;
}

void pfile_update(int param_1, longlong param_2, ulonglong param_3, undefined4 param_4,
    undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	longlong lVar1;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	int local_2c;

	if (DAT_100f4364 == '\0') {
		_DAT_100f4368 = 0;
		DAT_100f4364 = '\x01';
	}
	if (*PTR_DAT_100f17e0 != '\x01') {
		lVar1 = GetTickCount((char)PTR_DAT_100f17e0, (char)param_2, (char)param_3, (char)param_4,
		    (char)param_5, (char)param_6, (char)param_7, (char)param_8,
		    (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
		if (param_1 == 0) {
			param_3 = (ulonglong) * (uint *)(local_2c + -0x4c68);
			param_2 = lVar1 - param_3;
			if ((int)param_2 < 0xea61) {
				return;
			}
		}
		*(undefined4 *)(local_2c + -0x4c68) = (int)lVar1;
		pfile_write_hero(lVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	}
	return;
}
