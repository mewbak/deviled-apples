
void pfile_check_available_space(char *pszDir)

{
	undefined *puVar1;
	char cVar2;
	int iVar3;
	short sVar4;
	undefined in_r4;
	undefined uVar5;
	undefined in_r5;
	undefined uVar6;
	undefined in_r6;
	undefined uVar7;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined uVar8;

	uVar8 = 0;
	puVar1 = (undefined *)(ZEXT48(register0x0000000c) - 400);
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	iVar3 = IsFilepath((char)pszDir, in_r4, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, puVar1[0xb], puVar1[0xf],
	    *(undefined4 *)(puVar1 + 0x14));
	cVar2 = (char)(ZEXT48(register0x0000000c) - 400);
	if (iVar3 != 0) {
		FilepathToFSSpec(cVar2 + '8', (char)pszDir, 0, in_r6, in_r7, in_r8, in_r9, in_r10, puVar1[0xb], puVar1[0xf],
		    *(undefined4 *)(puVar1 + 0x14));
		uVar8 = (undefined) * (undefined2 *)(puVar1 + 0x38);
	}
	uVar5 = 0xf6;
	uVar6 = 0xf4;
	uVar7 = 0xf0;
	sVar4 = GetVInfo(
	    uVar8, 0xf6, 0xf4, 0xf0, in_r7, in_r8, in_r9, in_r10, puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
	if ((sVar4 != 0) || (*(int *)(puVar1 + 0x80) < 0xa00000)) {
		p2cstr(cVar2 + -0x7a, uVar5, uVar6, uVar7, in_r7, in_r8, in_r9, in_r10, puVar1[0xb], puVar1[0xf],
		    *(undefined4 *)(puVar1 + 0x14));
		DiskFreeDlg(puVar1 + 0x86, *puVar1);
	}
	return;
}

void pfile_init_save_directory(void)

{
	undefined *puVar1;
	char cVar2;
	int iVar3;
	ulonglong uVar4;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;

	puVar1 = (undefined *)(ZEXT48(register0x0000000c) - 0x140);
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	cVar2 = (char)(ZEXT48(register0x0000000c) - 0x140);
	uVar4 = GetWindowsDirectory(cVar2 + '8', 4, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, puVar1[0xb], puVar1[0xf],
	    *(undefined4 *)(puVar1 + 0x14));
	iVar3 = *(int *)(puVar1 + 0x14);
	if ((uVar4 & 0xffffffff) != 0) {
		pfile_check_available_space(puVar1 + 0x38, *puVar1);
		uVar4 = GetModuleFileName((char)**(undefined4 **)(iVar3 + -0x75c4), cVar2 + '8', 4, in_r6, in_r7, in_r8, in_r9,
		    in_r10, puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
		iVar3 = *(int *)(puVar1 + 0x14);
		if ((uVar4 & 0xffffffff) != 0) {
			pfile_check_available_space(puVar1 + 0x38, *puVar1);
			return;
		}
	}
	app_fatal(*(char **)(iVar3 + -0x5a70));
	return;
}

void pfile_get_save_path(char *pszBuf, DWORD dwBufSize, DWORD save_num)

{
	char *pcVar1;
	ulonglong uVar2;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_fffffeb8;
	undefined in_stack_fffffebf;
	int local_13c;
	undefined4 in_stack_fffffecc;
	undefined4 in_stack_fffffed0;
	undefined4 in_stack_fffffed4;
	undefined4 in_stack_fffffed8;
	undefined4 in_stack_fffffedc;
	undefined4 in_stack_fffffee0;
	undefined4 in_stack_fffffee4;
	char acStack280[280];

	if ((byte)gbMaxPlayers < 2) {
		pcVar1 = "Diablo Single %d";
		uVar2 = GetWindowsDirectory((char)pszBuf, 4, (char)save_num, (char)in_r6, (char)in_r7, (char)in_r8, (char)in_r9,
		    (char)in_r10, (char)in_stack_fffffeb8, in_stack_fffffebf, local_13c);
	} else {
		pcVar1 = "Diablo Multi %d";
		uVar2 = GetWindowsDirectory((char)pszBuf, 4, (char)save_num, (char)in_r6, (char)in_r7, (char)in_r8, (char)in_r9,
		    (char)in_r10, (char)in_stack_fffffeb8, in_stack_fffffebf, local_13c);
	}
	if ((uVar2 & 0xffffffff) == 0) {
		app_fatal(*(char **)(local_13c + -0x5a7c));
	}
	wsprintf((int)acStack280, pcVar1, save_num, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_fffffeb8,
	    in_stack_fffffebf, in_stack_fffffecc, in_stack_fffffed0, in_stack_fffffed4, in_stack_fffffed8,
	    in_stack_fffffedc, in_stack_fffffee0, in_stack_fffffee4);
	strcat(pszBuf, acStack280);
	_strlwr(pszBuf);
	return;
}

DWORD pfile_get_save_num_from_name(char *name)

{
	int iVar1;
	DWORD DVar2;
	char *_Str1;

	_Str1 = &DAT_10186d70;
	DVar2 = 0;
	do {
		iVar1 = _stricmp(_Str1, name);
		if (iVar1 == 0) {
			return DVar2;
		}
		DVar2 = DVar2 + 1;
		_Str1 = _Str1 + 0x20;
	} while (DVar2 < 10);
	return DVar2;
}

BOOL pfile_get_file_name(DWORD lvl, char *dst)

{
	char *pcVar1;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	pcVar1 = &DAT_1010e8f5;
	if ((byte)gbMaxPlayers < 2) {
		if (lvl < 0x11) {
			pcVar1 = s_perml_02d_1010e8fa;
		} else {
			if (lvl < 0x22) {
				pcVar1 = s_perms_02d_1010e904;
				lvl = lvl - 0x11;
			} else {
				if (lvl == 0x22) {
					pcVar1 = &DAT_1010e8f0;
				} else {
					if (lvl != 0x23) {
						return 0;
					}
				}
			}
		}
	} else {
		if (lvl != 0) {
			return 0;
		}
	}
	wsprintf((int)dst, pcVar1, lvl, &gbMaxPlayers, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffc8, in_stack_ffffffcf,
	    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec,
	    in_stack_fffffff0, in_stack_fffffff4);
	return 1;
}

void memcpy_sub(uint *param_1, byte **param_2)

{
	byte *pbVar1;

	pbVar1 = *param_2;
	*param_1 = (uint)pbVar1[3] << 0x18 | (uint)pbVar1[2] << 0x10 | (uint)pbVar1[1] << 8 | (uint)*pbVar1;
	*param_2 = *param_2 + 4;
	*(ushort *)(param_1 + 1) = CONCAT11((*param_2)[1], **param_2);
	*param_2 = *param_2 + 2;
	*(undefined2 *)((int)param_1 + 6) = CONCAT11((*param_2)[1], **param_2);
	*param_2 = *param_2 + 2;
	*(byte *)(param_1 + 2) = **param_2;
	*param_2 = *param_2 + 1;
	*(byte *)((int)param_1 + 9) = **param_2;
	*param_2 = *param_2 + 1;
	*(byte *)((int)param_1 + 10) = **param_2;
	*param_2 = *param_2 + 1;
	*(byte *)((int)param_1 + 0xb) = **param_2;
	*param_2 = *param_2 + 1;
	*(byte *)(param_1 + 3) = **param_2;
	*param_2 = *param_2 + 1;
	*(undefined2 *)((int)param_1 + 0xd) = CONCAT11((*param_2)[1], **param_2);
	*param_2 = *param_2 + 2;
	pbVar1 = *param_2;
	*(uint *)((int)param_1 + 0xf) = (uint)pbVar1[3] << 0x18 | (uint)pbVar1[2] << 0x10 | (uint)pbVar1[1] << 8 | (uint)*pbVar1;
	*param_2 = *param_2 + 4;
	return;
}

void memcpy_sub(uint **param_1, uint *param_2)

{
	uint uVar1;

	uVar1 = *param_2;
	**param_1 = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00 | uVar1 >> 0x18;
	*param_1 = *param_1 + 1;
	*(ushort *)*param_1 = *(ushort *)(param_2 + 1) >> 8 | *(ushort *)(param_2 + 1) << 8;
	*param_1 = (uint *)((int)*param_1 + 2);
	*(ushort *)*param_1 = *(ushort *)((int)param_2 + 6) >> 8 | *(ushort *)((int)param_2 + 6) << 8;
	*param_1 = (uint *)((int)*param_1 + 2);
	*(undefined *)*param_1 = *(undefined *)(param_2 + 2);
	*param_1 = (uint *)((int)*param_1 + 1);
	*(undefined *)*param_1 = *(undefined *)((int)param_2 + 9);
	*param_1 = (uint *)((int)*param_1 + 1);
	*(undefined *)*param_1 = *(undefined *)((int)param_2 + 10);
	*param_1 = (uint *)((int)*param_1 + 1);
	*(undefined *)*param_1 = *(undefined *)((int)param_2 + 0xb);
	*param_1 = (uint *)((int)*param_1 + 1);
	*(undefined *)*param_1 = *(undefined *)(param_2 + 3);
	*param_1 = (uint *)((int)*param_1 + 1);
	*(ushort *)*param_1 = *(ushort *)((int)param_2 + 0xd) >> 8 | *(ushort *)((int)param_2 + 0xd) << 8;
	*param_1 = (uint *)((int)*param_1 + 2);
	uVar1 = *(uint *)((int)param_2 + 0xf);
	**param_1 = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00 | uVar1 >> 0x18;
	*param_1 = *param_1 + 1;
	return;
}

BOOL pfile_read_hero(ulong archive, PkPlayerStruct *pPack)

{
	BOOL BVar1;
	DWORD dwBytes;
	BYTE *pbSrcDst;
	BOOL BVar2;
	undefined4 *pszPassword;
	int local_5c;
	BYTE *local_38;
	DWORD local_34[2];
	undefined4 local_2c;
	undefined4 local_28;
	undefined4 local_24;
	undefined4 local_20;
	ulong local_1c[7];

	BVar1 = SFileOpenFileEx(archive, &DAT_1010e8f5, 0, local_1c);
	if (BVar1 == 0) {
		BVar1 = 0;
	} else {
		pszPassword = *(undefined4 **)(local_5c + -0x5a94);
		pbSrcDst = (BYTE *)0x0;
		BVar1 = 0;
		local_2c = *pszPassword;
		local_28 = pszPassword[1];
		local_24 = pszPassword[2];
		local_20 = pszPassword[3];
		if (1 < **(byte **)(local_5c + -0x77f0)) {
			strcpy((char *)&local_2c, *(char **)(local_5c + -0x5a98));
		}
		dwBytes = SFileGetFileSize(local_1c[0], (LPDWORD)0x0);
		if (dwBytes != 0) {
			pbSrcDst = DiabloAllocPtr(dwBytes);
			BVar2 = SFileReadFile(local_1c[0], pbSrcDst, dwBytes, local_34, (LONG *)0x0);
			if (BVar2 != 0) {
				pszPassword = &local_2c;
				local_34[0] = codec_decode(pbSrcDst, dwBytes, (char *)pszPassword);
				if (local_34[0] == 0x4f2) {
					local_38 = pbSrcDst;
					memcpy(pPack, &local_38, (size_t)pszPassword);
					BVar1 = 1;
				}
			}
		}
		if (pbSrcDst != (BYTE *)0x0) {
			mem_free_dbg(pbSrcDst);
		}
		SFileCloseFile(local_1c[0]);
	}
	return BVar1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pfile_encode_hero(PkPlayerStruct *pPack)

{
	int iVar1;
	DWORD dwBytes;
	BYTE *pbSrcDst;
	char *_Size;
	BYTE *local_28[2];
	undefined4 local_20;
	undefined4 local_1c;
	undefined4 local_18;
	undefined4 local_14;

	iVar1 = 0x100f8fd0;
	_Size = s_xrgyrkj1_1010e932;
	local_20 = s_xrgyrkj1_1010e932._0_4_;
	local_1c = s_xrgyrkj1_1010e932._4_4_;
	local_18 = ram0x1010e93a;
	local_14 = uRam1010e93e;
	if (1 < (byte)gbMaxPlayers) {
		iVar1 = 0x100f8fd0;
		strcpy((char *)&local_20, "szqnlsk1");
	}
	dwBytes = codec_get_encoded_len(0x4f2);
	pbSrcDst = DiabloAllocPtr(dwBytes);
	local_28[0] = pbSrcDst;
	memcpy(local_28, pPack, (size_t)_Size);
	codec_encode(pbSrcDst, 0x4f2, dwBytes, (char *)&local_20);
	mpqapi_write_file(*(char **)(iVar1 + -0x5a84), pbSrcDst, dwBytes);
	mem_free_dbg(pbSrcDst);
	return;
}

BOOL pfile_open_archive(BOOL update, DWORD save_num)

{
	BOOL BVar1;
	char acStack280[280];

	pfile_get_save_path(acStack280, 0x104, save_num);
	BVar1 = OpenMPQ(acStack280, 1 - (uint)(byte)gbMaxPlayers >> 0x1f, save_num);
	if (BVar1 == 0) {
		if ((update != 0) && (1 < (byte)gbMaxPlayers)) {
			mpqapi_store_default_time(save_num);
		}
		BVar1 = 0;
	} else {
		BVar1 = 1;
	}
	return BVar1;
}

void pfile_flush(BOOL is_single_player, DWORD save_num)

{
	char acStack280[280];

	pfile_get_save_path(acStack280, 0x104, save_num);
	mpqapi_flush_and_close(acStack280, is_single_player, save_num);
	return;
}

ulong pfile_open_save_archive(BOOL *showFixedMsg, DWORD save_num)

{
	BOOL BVar1;
	BOOL *pBStack00000018;
	char acStack264[260];
	ulong local_4;

	pBStack00000018 = showFixedMsg;
	pfile_get_save_path(acStack264, 0x104, save_num);
	BVar1 = SFileOpenArchive(acStack264, 0x7000, 0, &local_4);
	if (BVar1 == 0) {
		local_4 = 0;
	}
	return local_4;
}

void pfile_SFileCloseArchive(ulong hsArchive)

{
	SFileCloseArchive(hsArchive);
	return;
}

BOOL pfile_archive_contains_game(ulong hsArchive, DWORD save_num)

{
	BOOL BVar1;
	ulong local_8[2];

	if (gbMaxPlayers == '\x01') {
		BVar1 = SFileOpenFileEx(hsArchive, &DAT_1010e8f0, 0, local_8);
		if (BVar1 == 0) {
			BVar1 = 0;
		} else {
			SFileCloseFile(local_8[0]);
			BVar1 = 1;
		}
	} else {
		BVar1 = 0;
	}
	return BVar1;
}

void pfile_write_hero(void)

{
	undefined8 uVar1;
	DWORD save_num;
	BOOL BVar2;
	PkPlayerStruct PStack1288;

	save_num = pfile_get_save_num_from_name((char *)((int)plr + myplr * 0x55ec + 0x13c));
	BVar2 = pfile_open_archive(1, save_num);
	if (BVar2 != 0) {
		uVar1 = countLeadingZeros(1 - (uint)(byte)gbMaxPlayers);
		PackPlayer(&PStack1288, myplr, (uint)uVar1 >> 5 & 0xff);
		pfile_encode_hero(&PStack1288);
		uVar1 = countLeadingZeros(1 - (uint)(byte)gbMaxPlayers);
		pfile_flush((uint)uVar1 >> 5 & 0xff, save_num);
	}
	return;
}

BOOL pfile_create_player_description(char *dst, DWORD len)

{
	int iVar1;
	undefined8 uVar2;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined4 in_stack_ffffff08;
	undefined uVar3;
	undefined in_stack_ffffff0f;
	undefined4 local_ec;
	uint auStack200[32];
	_uiheroinfo _Stack72;

	iVar1 = 0x100f8fd0;
	myplr = 0;
	pfile_read_player_from_save();
	game_2_ui_player(*(PlayerStruct **)(iVar1 + -0x77a8), &_Stack72, **(BOOL **)(iVar1 + -0x75bc));
	UiSetupPlayerInfo((ulonglong) * (uint *)(iVar1 + -0x7128), ZEXT48(register0x0000000c) - 0x48, 0x4452544c, in_r6,
	    in_r7, in_r8, in_r9, in_r10, in_stack_ffffff08);
	uVar3 = (undefined)in_stack_ffffff08;
	if ((dst != (char *)0x0) && (len != 0)) {
		uVar2 = FUN_10002b28(ZEXT48(register0x0000000c) - 0x48, 0x4452544c, auStack200, in_r6, in_r7, in_r8, in_r9,
		    in_r10, in_stack_ffffff08);
		if ((int)uVar2 == 0) {
			return 0;
		}
		SStrCopy__FPcPCcUl(
		    (char)dst, 0x38, (char)len, in_r6, in_r7, in_r8, in_r9, in_r10, uVar3, in_stack_ffffff0f, local_ec);
	}
	return 1;
}

BOOL pfile_rename_hero(char *name_1, char *name_2)

{
	DWORD DVar1;
	int iVar2;
	int iVar3;
	undefined uVar4;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	longlong lVar5;
	undefined8 unaff_r29;
	PlayerStruct *pPVar6;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	int local_6c;
	_uiheroinfo _Stack72;
	undefined4 local_18;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	local_18 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	pPVar6 = plr;
	DVar1 = pfile_get_save_num_from_name(name_2);
	if (DVar1 == 10) {
		lVar5 = 0;
		while ((int)lVar5 != 4) {
			iVar2 = _stricmp(name_1, pPVar6->_pName);
			if (iVar2 == 0) {
				iVar2 = local_6c;
				DVar1 = pfile_get_save_num_from_name(name_1);
				if (DVar1 != 10) {
					uVar4 = SUB41(name_2, 0);
					SStrCopy__FPcPCcUl((char)*(undefined4 *)(local_6c + -0x5a80) + (char)(DVar1 << 5), uVar4, 0x20,
					    in_r6, in_r7, in_r8, in_r9, in_r10, (char)in_stack_ffffff88, in_stack_ffffff8f, iVar2);
					SStrCopy__FPcPCcUl((char)lVar5 * -0x14 + -4, uVar4, 0x20, in_r6, in_r7, in_r8, in_r9, in_r10,
					    (char)in_stack_ffffff88, in_stack_ffffff8f, iVar2);
					iVar3 = _stricmp(&gszHero, name_1);
					if (iVar3 == 0) {
						SStrCopy__FPcPCcUl(0x88, uVar4, 0x10, in_r6, in_r7, in_r8, in_r9, in_r10,
						    (char)in_stack_ffffff88, in_stack_ffffff8f, iVar2);
					}
					game_2_ui_player(plr, &_Stack72, **(BOOL **)(iVar2 + -0x75bc));
					UiSetupPlayerInfo(ZEXT48(&gszHero), ZEXT48(register0x0000000c) - 0x48, 0x4452544c, in_r6, in_r7,
					    in_r8, in_r9, in_r10, in_stack_ffffff88);
					pfile_write_hero();
					return 1;
				}
				return 0;
			}
			pPVar6 = (PlayerStruct *)&pPVar6[1]._pSpellFlags;
			lVar5 = lVar5 + 1;
		}
	}
	return 0;
}

void pfile_flush_W(void)

{
	DWORD save_num;

	save_num = pfile_get_save_num_from_name((char *)((int)plr + myplr * 0x55ec + 0x13c));
	pfile_flush(1, save_num);
	return;
}

char pfile_get_player_class(uint player_class_nr)

{
	if (player_class_nr == 0) {
		return '\0';
	}
	if (player_class_nr == 1) {
		return '\x01';
	}
	return '\x02';
}

BYTE game_2_ui_class(PlayerStruct *p)

{
	if (p->_pClass == '\0') {
		return '\0';
	}
	if (p->_pClass == '\x01') {
		return '\x01';
	}
	return '\x02';
}

void game_2_ui_player(PlayerStruct *p, _uiheroinfo *heroinfo, BOOL bHasSaveFile)

{
	BYTE BVar1;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	ZeroMemory((char)heroinfo, 0x2c, (char)bHasSaveFile, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb,
	    in_stack_ffffffbf, local_3c);
	strncpy(heroinfo->name, p->_pName, 0xf);
	heroinfo->name[0xf] = '\0';
	heroinfo->level = (short)p->_pLevel;
	BVar1 = game_2_ui_class(p);
	heroinfo->heroclass = BVar1;
	heroinfo->strength = (WORD)p->_pStrength;
	heroinfo->magic = (WORD)p->_pMagic;
	heroinfo->dexterity = (WORD)p->_pDexterity;
	heroinfo->vitality = (WORD)p->_pVitality;
	heroinfo->gold = p->_pGold;
	heroinfo->hassaved = bHasSaveFile;
	heroinfo->herorank = (BYTE) * (undefined4 *)(p[1]._pSplLvl + 0x17);
	heroinfo->spawned = 0;
	return;
}

BOOL pfile_ui_set_hero_infos(ui_add_hero_info *ui_add_hero_info)

{
	ulong archive;
	BOOL bHasSaveFile;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	DWORD save_num;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	char *_Dest;
	undefined in_stack_fffffa8b;
	undefined in_stack_fffffa8f;
	undefined4 local_56c;
	_uiheroinfo _Stack1352;
	PkPlayerStruct PStack1304;
	BOOL local_24[3];
	undefined4 local_18;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	local_18 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	_Dest = &DAT_10186d70;
	ZeroMemory(0x70, 0x40, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_fffffa8b, in_stack_fffffa8f, local_56c);
	save_num = 0;
	local_24[0] = 1;
	do {
		archive = pfile_open_save_archive(local_24, save_num);
		if (archive != 0) {
			bHasSaveFile = pfile_read_hero(archive, &PStack1304);
			if (bHasSaveFile != 0) {
				strcpy(_Dest, PStack1304.pName + 4);
				UnPackPlayer(&PStack1304, 0, 0);
				bHasSaveFile = pfile_archive_contains_game(archive, save_num);
				game_2_ui_player(plr, &_Stack1352, bHasSaveFile);
				fnMenu((BOOL)&_Stack1352);
			}
			pfile_SFileCloseArchive(archive);
		}
		save_num = save_num + 1;
		_Dest = _Dest + 0x20;
	} while (save_num < 10);
	return 1;
}

BOOL pfile_ui_set_class_stats(uint player_class_nr, _uidefaultstats *class_stats)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5;

	iVar4 = 0x100f8fd0;
	cVar5 = pfile_get_player_class(player_class_nr);
	iVar3 = (int)cVar5 * 4;
	iVar1 = *(int *)(iVar4 + -0x6fa0);
	iVar2 = *(int *)(iVar4 + -0x6fa4);
	class_stats->strength = (WORD) * (undefined4 *)(*(int *)(iVar4 + -0x6f9c) + iVar3);
	iVar4 = *(int *)(iVar4 + -0x6fa8);
	class_stats->magic = (WORD) * (undefined4 *)(iVar1 + iVar3);
	class_stats->dexterity = (WORD) * (undefined4 *)(iVar2 + iVar3);
	class_stats->vitality = (WORD) * (undefined4 *)(iVar4 + iVar3);
	return 1;
}

BOOL pfile_ui_save_create(_uiheroinfo *heroinfo)

{
	int iVar1;
	DWORD save_num;
	BOOL BVar2;
	char c;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	PkPlayerStruct PStack1304;
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar1 = 0x100f8fd0;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	save_num = pfile_get_save_num_from_name(heroinfo->name);
	if (save_num == 10) {
		save_num = 0;
		if (DAT_10186d70 != '\0') {
			save_num = 1;
			if (cRam10186d90 != '\0') {
				save_num = 2;
				if (cRam10186db0 != '\0') {
					save_num = 3;
					if (cRam10186dd0 != '\0') {
						save_num = 4;
						if (cRam10186df0 != '\0') {
							save_num = 5;
							if (cRam10186e10 != '\0') {
								save_num = 6;
								if (cRam10186e30 != '\0') {
									save_num = 7;
									if (cRam10186e50 != '\0') {
										save_num = 8;
										if (cRam10186e70 != '\0') {
											save_num = 9;
											if (cRam10186e90 != '\0') {
												save_num = 10;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (save_num == 10) {
		BVar2 = 0;
	} else {
		BVar2 = pfile_open_archive(0, save_num);
		if (BVar2 == 0) {
			BVar2 = 0;
		} else {
			mpqapi_remove_hash_entries(*(fnGetName **)(iVar1 + -0x5aa0));
			strncpy(&DAT_10186d70 + save_num * 0x20, heroinfo->name, 0x20);
			*(undefined *)(save_num * 0x20 + 0x10186d8f) = 0;
			c = pfile_get_player_class((uint)heroinfo->heroclass);
			CreatePlayer(0, c);
			strncpy(plr[0]._pName, heroinfo->name, 0x20);
			plr[0]._pName[31] = '\0';
			PackPlayer(&PStack1304, 0, 1);
			pfile_encode_hero(&PStack1304);
			game_2_ui_player(plr, heroinfo, 0);
			pfile_flush(1, save_num);
			BVar2 = 1;
		}
	}
	return BVar2;
}

BOOL pfile_delete_save(_uiheroinfo *hero_info)

{
	undefined *puVar1;
	int iVar2;
	DWORD save_num;
	undefined uVar3;
	undefined uVar4;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;

	iVar2 = 0x100f8fd0;
	puVar1 = (undefined *)(ZEXT48(register0x0000000c) - 0x140);
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	save_num = pfile_get_save_num_from_name(hero_info->name, *puVar1);
	save_num._3_1_ = (undefined)save_num;
	if (save_num < 10) {
		uVar4 = 0;
		*(undefined *)(*(int *)(iVar2 + -0x5a80) + save_num * 0x20) = 0;
		uVar3 = 4;
		pfile_get_save_path(puVar1 + 0x38, 0x104, save_num, *puVar1);
		DeleteFile((char)(ZEXT48(register0x0000000c) - 0x140) + '8', uVar3, (undefined)save_num, uVar4, in_r7, in_r8,
		    in_r9, in_r10, puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
	}
	return 1;
}

void pfile_read_player_from_save(void)

{
	int iVar1;
	DWORD save_num;
	HANDLE archive;
	BOOL rv;
	BOOL _gbValidSaveFile;
	PkPlayerStruct pkplr;

	iVar1 = 0x100f8fd0;
	save_num = pfile_get_save_num_from_name(&gszHero);
	archive = (HANDLE)pfile_open_save_archive((BOOL *)0x0, save_num);
	if (archive == (HANDLE)0x0) {
		app_fatal(*(char **)(iVar1 + -0x5aa4));
	}
	rv = pfile_read_hero((ulong)archive, &pkplr);
	if (rv == 0) {
		app_fatal(*(char **)(iVar1 + -0x5aa8));
	}
	UnPackPlayer(&pkplr, **(int **)(iVar1 + -0x77ac), 0);
	_gbValidSaveFile = pfile_archive_contains_game((ulong)archive, save_num);
	**(BOOL **)(iVar1 + -0x75bc) = _gbValidSaveFile;
	pfile_SFileCloseArchive((ulong)archive);
	return;
}

void GetTempLevelNames(char *szTemp)

{
	int iVar1;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	iVar1 = 0x100f8fd0;
	pfile_get_save_num_from_name((char *)((int)plr + myplr * 0x55ec + 0x13c));
	if (**(char **)(iVar1 + -0x77d8) == '\0') {
		wsprintf((int)szTemp, *(undefined4 *)(iVar1 + -0x5ab0), (uint) * *(byte **)(iVar1 + -0x77e4), in_r6, in_r7, in_r8,
		    in_r9, in_r10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0,
		    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	} else {
		wsprintf((int)szTemp, *(undefined4 *)(iVar1 + -0x5aac), (uint) * *(byte **)(iVar1 + -0x77e0), in_r6, in_r7, in_r8,
		    in_r9, in_r10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0,
		    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	return;
}

void GetPermLevelNames(char *szPerm)

{
	int iVar1;
	DWORD save_num;
	BOOL BVar2;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	iVar1 = 0x100f8fd0;
	save_num = pfile_get_save_num_from_name((char *)((int)plr + myplr * 0x55ec + 0x13c));
	GetTempLevelNames(szPerm);
	BVar2 = pfile_open_archive(0, save_num);
	if (BVar2 == 0) {
		app_fatal(*(char **)(iVar1 + -0x5ab4));
	}
	BVar2 = mpqapi_has_file(szPerm);
	pfile_flush(1, save_num);
	if (BVar2 == 0) {
		if (**(char **)(iVar1 + -0x77d8) == '\0') {
			wsprintf((int)szPerm, *(undefined4 *)(iVar1 + -0x5a88), (uint) * *(byte **)(iVar1 + -0x77e4), in_r6, in_r7,
			    in_r8, in_r9, in_r10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0,
			    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
		} else {
			wsprintf((int)szPerm, *(undefined4 *)(iVar1 + -0x5a8c), (uint) * *(byte **)(iVar1 + -0x77e0), in_r6, in_r7,
			    in_r8, in_r9, in_r10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0,
			    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
		}
	}
	return;
}

void pfile_get_game_name(char *dst)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	pfile_get_save_num_from_name((char *)((int)plr + myplr * 0x55ec + 0x13c));
	strcpy(dst, *(char **)(iVar1 + -0x5a90));
	return;
}

BOOL GetPermSaveNames(DWORD dwIndex, char *szPerm)

{
	char *pcVar1;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	if (dwIndex < 0x11) {
		pcVar1 = s_perml_02d_1010e8fa;
	} else {
		if (0x21 < dwIndex) {
			return 0;
		}
		pcVar1 = s_perms_02d_1010e904;
		dwIndex = dwIndex - 0x11;
	}
	wsprintf((int)szPerm, pcVar1, dwIndex, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffc8, in_stack_ffffffcf,
	    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec,
	    in_stack_fffffff0, in_stack_fffffff4);
	return 1;
}

BOOL GetTempSaveNames(DWORD dwIndex, char *szTemp)

{
	char *pcVar1;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	if (dwIndex < 0x11) {
		pcVar1 = s_templ_02d_1010e90e;
	} else {
		if (0x21 < dwIndex) {
			return 0;
		}
		pcVar1 = s_temps_02d_1010e918;
		dwIndex = dwIndex - 0x11;
	}
	wsprintf((int)szTemp, pcVar1, dwIndex, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffc8, in_stack_ffffffcf,
	    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec,
	    in_stack_fffffff0, in_stack_fffffff4);
	return 1;
}

void pfile_remove_temp_files(void)

{
	int iVar1;
	DWORD save_num;
	BOOL BVar2;

	iVar1 = 0x100f8fd0;
	if ((byte)gbMaxPlayers < 2) {
		save_num = pfile_get_save_num_from_name((char *)((int)plr + myplr * 0x55ec + 0x13c));
		BVar2 = pfile_open_archive(0, save_num);
		if (BVar2 == 0) {
			app_fatal(*(char **)(iVar1 + -0x5ab8));
		}
		mpqapi_remove_hash_entries(*(fnGetName **)(iVar1 + -0x5abc));
		pfile_flush(1, save_num);
	}
	return;
}

void pfile_rename_temp_to_perm(void)

{
	int iVar1;
	DWORD save_num;
	BOOL BVar2;
	DWORD dwIndex;
	char acStack532[260];
	char acStack272[272];

	iVar1 = 0x100f8fd0;
	save_num = pfile_get_save_num_from_name((char *)((int)plr + myplr * 0x55ec + 0x13c));
	BVar2 = pfile_open_archive(0, save_num);
	if (BVar2 == 0) {
		app_fatal(*(char **)(iVar1 + -0x5ab8));
	}
	dwIndex = 0;
	while (BVar2 = GetTempSaveNames(dwIndex, acStack272), BVar2 != 0) {
		GetPermSaveNames(dwIndex, acStack532);
		dwIndex = dwIndex + 1;
		BVar2 = mpqapi_has_file(acStack272);
		if (BVar2 != 0) {
			BVar2 = mpqapi_has_file(acStack532);
			if (BVar2 != 0) {
				thunk_mpqapi_remove_hash_entry(acStack532);
			}
			mpqapi_rename(acStack272, acStack532);
		}
	}
	pfile_flush(1, save_num);
	return;
}

void pfile_write_save_file(char *pszName, BYTE *pbData, DWORD dwLen, DWORD qwLen)

{
	undefined4 *puVar1;
	int iVar2;
	DWORD save_num;
	BOOL BVar3;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 local_34;
	undefined4 local_30;
	undefined4 local_2c;
	undefined4 local_28;
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar2 = 0x100f8fd0;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	save_num = pfile_get_save_num_from_name((char *)((int)plr + myplr * 0x55ec + 0x13c));
	puVar1 = *(undefined4 **)(iVar2 + -0x5ac0);
	local_34 = *puVar1;
	local_30 = puVar1[1];
	local_2c = puVar1[2];
	local_28 = puVar1[3];
	if (1 < **(byte **)(iVar2 + -0x77f0)) {
		strcpy((char *)&local_34, *(char **)(iVar2 + -0x5a98));
	}
	codec_encode(pbData, dwLen, qwLen, (char *)&local_34);
	BVar3 = pfile_open_archive(0, save_num);
	if (BVar3 == 0) {
		app_fatal(*(char **)(iVar2 + -0x5ab8));
	}
	mpqapi_write_file(pszName, pbData, qwLen);
	pfile_flush(1, save_num);
	return;
}

BYTE *pfile_read(char *pszName, DWORD *pdwLen)

{
	undefined4 *puVar1;
	int iVar2;
	DWORD save_num;
	ulong hMpq;
	BOOL BVar3;
	BYTE *pbSrcDst;
	int local_5c;
	undefined4 local_34;
	undefined4 local_30;
	undefined4 local_2c;
	undefined4 local_28;
	DWORD DStack36;
	ulong local_20[8];

	iVar2 = 0x100f8fd0;
	save_num = pfile_get_save_num_from_name((char *)((int)plr + myplr * 0x55ec + 0x13c));
	hMpq = pfile_open_save_archive((BOOL *)0x0, save_num);
	if (hMpq == 0) {
		app_fatal(*(char **)(iVar2 + -0x5ac4));
	}
	BVar3 = SFileOpenFileEx(hMpq, pszName, 0, local_20);
	if (BVar3 == 0) {
		app_fatal(*(char **)(local_5c + -0x5ac8));
	}
	save_num = SFileGetFileSize(local_20[0], (LPDWORD)0x0);
	*pdwLen = save_num;
	if (*pdwLen == 0) {
		app_fatal("Invalid save file");
	}
	pbSrcDst = DiabloAllocPtr(*pdwLen);
	BVar3 = SFileReadFile(local_20[0], pbSrcDst, *pdwLen, &DStack36, (LONG *)0x0);
	if (BVar3 == 0) {
		app_fatal(*(char **)(local_5c + -0x5ad0));
	}
	puVar1 = *(undefined4 **)(local_5c + -0x5ad4);
	local_34 = *puVar1;
	local_30 = puVar1[1];
	local_2c = puVar1[2];
	local_28 = puVar1[3];
	if (1 < **(byte **)(local_5c + -0x77f0)) {
		strcpy((char *)&local_34, *(char **)(local_5c + -0x5a98));
	}
	save_num = codec_decode(pbSrcDst, *pdwLen, (char *)&local_34);
	*pdwLen = save_num;
	SFileCloseFile(local_20[0]);
	pfile_SFileCloseArchive(hMpq);
	if (*pdwLen == 0) {
		app_fatal("Invalid save file");
	}
	return pbSrcDst;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pfile_update(BOOL force_save)

{
	DWORD DVar1;
	int local_2c;

	if (DAT_100f4364 == '\0') {
		_DAT_100f4368 = 0;
		DAT_100f4364 = '\x01';
	}
	if (gbMaxPlayers != '\x01') {
		DVar1 = GetTickCount();
		if ((force_save != 0) || (60000 < (int)(DVar1 - *(int *)(local_2c + -0x4c68)))) {
			*(DWORD *)(local_2c + -0x4c68) = DVar1;
			pfile_write_hero();
		}
	}
	return;
}
