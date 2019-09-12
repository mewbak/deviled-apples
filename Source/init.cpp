
void init_cleanup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined **ppuVar2;
	int *piVar3;
	undefined **ppuVar4;
	undefined uVar6;
	undefined8 uVar5;
	undefined7 uVar7;
	undefined uVar8;
	undefined7 uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined uVar14;
	undefined uVar15;
	undefined4 in_stack_ffffffc8;
	undefined uVar16;
	undefined in_stack_ffffffcf;
	undefined **local_2c;

	piVar3 = _DAT_100f1dcc;
	uVar9 = (undefined7)((ulonglong)param_3 >> 8);
	uVar10 = (undefined)param_3;
	uVar7 = (undefined7)((ulonglong)param_2 >> 8);
	uVar8 = (undefined)param_2;
	ppuVar4 = &toc;
	pfile_flush_W(param_1, param_2, param_3, (int)param_4, (int)param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	iVar1 = *piVar3;
	if (iVar1 != 0) {
		ppuVar4 = local_2c;
		SFileCloseArchive((char)iVar1, uVar8, uVar10, (char)param_4, (char)param_5, (char)param_6,
		    (char)param_7, (char)param_8, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
		*piVar3 = 0;
		local_2c = ppuVar4;
	}
	ppuVar2 = ppuVar4 + -0x1390;
	if (*ppuVar2 != (undefined *)0x0) {
		ppuVar4 = local_2c;
		SFileCloseArchive((char)*ppuVar2, uVar8, uVar10, (char)param_4, (char)param_5, (char)param_6,
		    (char)param_7, (char)param_8, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
		ppuVar4[-0x1390] = (undefined *)0x0;
		local_2c = ppuVar4;
	}
	uVar6 = SUB41(ppuVar4[-0x1391], 0);
	if (ppuVar4[-0x1391] != (undefined *)0x0) {
		uVar6 = SFileCloseArchive(uVar6, uVar8, uVar10, (char)param_4, (char)param_5, (char)param_6,
		    (char)param_7, (char)param_8, (char)in_stack_ffffffc8, in_stack_ffffffcf,
		    local_2c);
		local_2c[-0x1391] = (undefined *)0x0;
	}
	uVar6 = UiDestroy(uVar6, uVar8, uVar10, (char)param_4, (char)param_5, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffffc8);
	uVar6 = effects_cleanup_sfx(uVar6, uVar8, uVar10, (char)param_4, (char)param_5, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffffc8);
	uVar5 = sound_cleanup(uVar6, uVar8, uVar10, (char)param_4, (char)param_5, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffffc8);
	uVar15 = (undefined)param_8;
	uVar14 = (undefined)param_7;
	uVar13 = (undefined)param_6;
	uVar12 = (undefined)param_5;
	uVar11 = (undefined)param_4;
	uVar6 = NetClose(uVar5, CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10), param_4, param_5, param_6,
	    param_7, param_8, in_stack_ffffffc8);
	uVar16 = (undefined)in_stack_ffffffc8;
	dx_cleanup(uVar6, uVar8, uVar10, uVar11, uVar12, uVar13, uVar14, uVar15, in_stack_ffffffc8);
	uVar6 = StormDestroy();
	InitCursor(uVar6, uVar8, uVar10, uVar11, uVar12, uVar13, uVar14, uVar15, uVar16, in_stack_ffffffcf, local_2c);
	return;
}

void init_strip_trailing_slash(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	char *pcVar1;

	pcVar1 = strrchr(param_1, '\\');
	if ((pcVar1 != (char *)0x0) && (pcVar1[1] == '\0')) {
		*pcVar1 = '\0';
	}
	return;
}

undefined8
init_read_test_file(undefined8 param_1, char *param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	longlong lVar1;
	undefined4 uVar2;
	undefined *puVar3;
	char cVar4;
	char *pcVar6;
	short sVar8;
	undefined8 uVar5;
	int iVar7;
	undefined4 *puVar9;
	undefined uVar10;
	longlong lVar11;
	undefined uVar12;
	undefined uVar13;
	undefined uVar14;
	longlong lVar15;

	uVar13 = 0x2a;
	lVar15 = 0x20;
	lVar1 = ZEXT48(register0x0000000c) - 400;
	puVar3 = (undefined *)lVar1;
	*(BADSPACEBASE **)puVar3 = register0x0000000c;
	lVar11 = ZEXT48(register0x0000000c) - 0x160;
	puVar9 = (undefined4 *)0x100fc422;
	do {
		uVar2 = puVar9[3];
		lVar11 = lVar11 + 8;
		uVar14 = (undefined)lVar11;
		*(undefined4 *)lVar11 = puVar9[2];
		((undefined4 *)lVar11)[1] = uVar2;
		lVar15 = lVar15 + -1;
		puVar9 = puVar9 + 2;
	} while (lVar15 != 0);
	uVar12 = param_4;
	pcVar6 = strrchr(param_2, 0x5c, *puVar3);
	lVar11 = (longlong)(int)pcVar6;
	if ((longlong)(int)pcVar6 == 0) {
		lVar11 = (longlong)(int)param_2;
	}
	uVar10 = (undefined)(lVar11 + 1);
	strcat(puVar3 + 0x38, (int)(lVar11 + 1), *puVar3);
	cVar4 = (char)lVar1;
	c2pstr(cVar4 + '8', uVar10, uVar14, uVar12, uVar13, param_6, param_7, param_8, puVar3[0xb], puVar3[0xf],
	    *(undefined4 *)(puVar3 + 0x14));
	sVar8 = FSMakeFSSpec(0, 0, cVar4 + '8', cVar4 + '8', uVar13, param_6, param_7, param_8, puVar3[0xb],
	    puVar3[0xf], *(undefined4 *)(puVar3 + 0x14));
	if (sVar8 == 0) {
		uVar14 = 0x3f;
		uVar13 = uVar14;
		MakeFilepath((undefined)param_1, cVar4 + '>', (char)*(undefined2 *)(puVar3 + 0x138),
		    (char)*(undefined4 *)(puVar3 + 0x13a), 0x3f, 0x3f, param_7, param_8, puVar3[0xb],
		    puVar3[0xf], *(undefined4 *)(puVar3 + 0x14));
		iVar7 = SFileOpenArchive((undefined)param_1, param_3, 1, param_4, uVar14, uVar13, param_7, param_8,
		    puVar3[0xb], puVar3[0xf], *(undefined4 *)(puVar3 + 0x14));
		if (iVar7 == 0) {
			uVar5 = 0;
		} else {
			uVar5 = 1;
		}
	} else {
		uVar5 = 0;
	}
	return uVar5;
}

ulonglong init_test_access(int param_1, char *param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9, undefined param_10, undefined4 param_11)

{
	undefined *puVar1;
	char cVar2;
	ulonglong uVar3;
	int iVar5;
	char *pcVar6;
	int iVar7;
	ulonglong uVar4;
	longlong lVar8;
	undefined uVar9;
	undefined8 uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined7 uVar14;
	undefined uVar15;
	undefined uVar16;
	undefined uVar17;
	undefined uVar18;
	undefined uVar19;

	uVar14 = (undefined7)((ulonglong)param_5 >> 8);
	uVar15 = (undefined)param_5;
	uVar4 = ZEXT48(register0x0000000c);
	puVar1 = (undefined *)(uVar4 - 0x360);
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	*(int *)(puVar1 + 0x380) = (int)param_3;
	lVar8 = uVar4 - 0x120;
	uVar12 = (undefined)param_4;
	uVar16 = uVar15;
	uVar3 = GetCurrentDirectory(4, (char)lVar8, (char)param_3, uVar12, uVar15, (char)param_6, (char)param_7,
	    (char)param_8, puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
	if ((uVar3 & 0xffffffff) == 0) {
		app_fatal(*(int *)(*(int *)(puVar1 + 0x14) + -0x61c0), lVar8, param_3, param_4,
		    CONCAT71(uVar14, uVar16), param_6, param_7, param_8, *(undefined4 *)(puVar1 + 8),
		    puVar1[0xf], *(undefined4 *)(puVar1 + 0x18), *(undefined4 *)(puVar1 + 0x1c),
		    *(undefined4 *)(puVar1 + 0x20), *(undefined4 *)(puVar1 + 0x24),
		    *(undefined4 *)(puVar1 + 0x28), *(undefined4 *)(puVar1 + 0x2c),
		    *(undefined4 *)(puVar1 + 0x30), *(undefined4 *)(puVar1 + 0x34));
	}
	init_strip_trailing_slash((int)(puVar1 + 0x240), (char)lVar8, (char)param_3, (char)param_4, uVar16, (char)param_6,
	    (char)param_7, (char)param_8, *(undefined4 *)(puVar1 + 8));
	cVar2 = (char)(uVar4 - 0x360);
	iVar5 = FUN_100dad5c(cVar2 + '@', (char)lVar8, (char)param_3, (char)param_4, uVar16, (char)param_6,
	    (char)param_7, (char)param_8, puVar1[0xb], puVar1[0xf],
	    *(undefined4 *)(puVar1 + 0x14));
	iVar7 = *(int *)(puVar1 + 0x14);
	if (iVar5 == 0) {
		app_fatal(*(int *)(iVar7 + -0x61c4), lVar8, param_3, param_4, CONCAT71(uVar14, uVar16), param_6,
		    param_7, param_8, *(undefined4 *)(puVar1 + 8), puVar1[0xf],
		    *(undefined4 *)(puVar1 + 0x18), *(undefined4 *)(puVar1 + 0x1c),
		    *(undefined4 *)(puVar1 + 0x20), *(undefined4 *)(puVar1 + 0x24),
		    *(undefined4 *)(puVar1 + 0x28), *(undefined4 *)(puVar1 + 0x2c),
		    *(undefined4 *)(puVar1 + 0x30), *(undefined4 *)(puVar1 + 0x34));
	}
	lVar8 = uVar4 - 0x224;
	uVar10 = 0x104;
	uVar3 = GetModuleFileName((char)**(undefined4 **)(iVar7 + -0x75c4), (char)lVar8, 4, (char)param_4,
	    uVar16, (char)param_6, (char)param_7, (char)param_8, puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
	uVar19 = (undefined)param_8;
	uVar18 = (undefined)param_7;
	uVar17 = (undefined)param_6;
	uVar13 = (undefined)param_4;
	uVar11 = (undefined)uVar10;
	if ((uVar3 & 0xffffffff) == 0) {
		app_fatal(*(int *)(*(int *)(puVar1 + 0x14) + -0x61c8), lVar8, uVar10, param_4,
		    CONCAT71(uVar14, uVar16), param_6, param_7, param_8, *(undefined4 *)(puVar1 + 8),
		    puVar1[0xf], *(undefined4 *)(puVar1 + 0x18), *(undefined4 *)(puVar1 + 0x1c),
		    *(undefined4 *)(puVar1 + 0x20), *(undefined4 *)(puVar1 + 0x24),
		    *(undefined4 *)(puVar1 + 0x28), *(undefined4 *)(puVar1 + 0x2c),
		    *(undefined4 *)(puVar1 + 0x30), *(undefined4 *)(puVar1 + 0x34));
	}
	uVar9 = 0x5c;
	pcVar6 = strrchr(puVar1 + 0x13c, 0x5c, *puVar1);
	if (pcVar6 != (char *)0x0) {
		*pcVar6 = '\0';
	}
	init_strip_trailing_slash((int)(puVar1 + 0x13c), uVar9, uVar11, uVar13, uVar16, uVar17, uVar18, uVar19,
	    *(undefined4 *)(puVar1 + 8));
	strcpy(param_1, puVar1 + 0x240, *puVar1);
	strcat(param_1, param_2, *puVar1);
	iVar7 = SFileOpenArchive((char)param_1, uVar12, uVar15, cVar2 + 'D', uVar16, uVar17, uVar18, uVar19,
	    puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
	if (iVar7 == 0) {
		uVar3 = strcmp(puVar1 + 0x13c, puVar1 + 0x240, *puVar1);
		if ((int)uVar3 != 0) {
			strcpy(param_1, puVar1 + 0x13c, *puVar1);
			strcat(param_1, param_2, *puVar1);
			iVar7 = SFileOpenArchive((char)param_1, uVar12, uVar15, cVar2 + 'D', uVar16, uVar17, uVar18, uVar19,
			    puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
			if (iVar7 != 0) {
				return (ulonglong) * (uint *)(puVar1 + 0x344);
			}
		}
		puVar1[0x38] = 0;
		if (((int)param_5 == 0) || (uVar10 = init_read_test_file(uVar4 - 0x328, param_2, uVar12, cVar2 + 'D', uVar16, uVar17, uVar18, uVar19, *(undefined4 *)(puVar1 + 8)), (int)uVar10 == 0)) {
			uVar4 = 0;
		} else {
			strcpy(param_1, puVar1 + 0x38, *puVar1);
			uVar4 = (ulonglong) * (uint *)(puVar1 + 0x344);
		}
	} else {
		uVar4 = (ulonglong) * (uint *)(puVar1 + 0x344);
	}
	return uVar4;
}

void init_get_file_info(void)

{
	uint uVar1;
	uint uVar2;
	undefined4 uVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	ulonglong uVar7;
	longlong lVar8;
	int iVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined param_4;
	undefined uVar13;
	undefined uVar14;
	undefined param_5;
	longlong lVar15;
	undefined param_6;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined uVar16;

	puVar6 = PTR_DAT_100f2e04;
	puVar5 = PTR_DAT_100f1a0c;
	uVar12 = 4;
	iVar4 = (int)(ZEXT48(register0x0000000c) - 0x60);
	*(BADSPACEBASE **)iVar4 = register0x0000000c;
	uVar10 = SUB41(puVar6, 0);
	uVar7 = GetModuleFileName((char)*(undefined4 *)puVar5, uVar10, 4, param_4, param_5, param_6, (char)in_r9, (char)in_r10, *(undefined *)(iVar4 + 0xb), *(undefined *)(iVar4 + 0xf),
	    *(undefined4 *)(iVar4 + 0x14));
	if ((uVar7 & 0xffffffff) != 0) {
		lVar8 = GetFileVersionInfoSize(uVar10, (char)(ZEXT48(register0x0000000c) - 0x60) + '@', uVar12, param_4, param_5, param_6, (char)in_r9, (char)in_r10, *(undefined *)(iVar4 + 0xb),
		    *(undefined *)(iVar4 + 0xf), *(undefined4 *)(iVar4 + 0x14));
		uVar12 = (undefined)lVar8;
		if (lVar8 != 0) {
			lVar8 = DiabloAllocPtr(lVar8);
			uVar11 = 0;
			uVar13 = (undefined)lVar8;
			uVar14 = uVar13;
			iVar9 = GetFileVersionInfo(uVar10, 0, uVar12, uVar13, param_5, param_6, (char)in_r9, (char)in_r10,
			    *(undefined *)(iVar4 + 0xb), *(undefined *)(iVar4 + 0xf),
			    *(undefined4 *)(iVar4 + 0x14));
			uVar16 = (undefined)in_r10;
			uVar10 = (undefined)in_r9;
			if (iVar9 != 0) {
				uVar11 = (undefined) * (undefined4 *)(*(int *)(iVar4 + 0x14) + -0x61d0);
				uVar12 = 0xd8;
				uVar14 = 0xdc;
				iVar9 = VerQueryValue(uVar13, uVar11, 0xd8, 0xdc, param_5, param_6, uVar10, uVar16,
				    *(undefined *)(iVar4 + 0xb), *(undefined *)(iVar4 + 0xf),
				    *(undefined4 *)(iVar4 + 0x14));
				uVar16 = (undefined)in_r10;
				uVar10 = (undefined)in_r9;
				if (iVar9 != 0) {
					uVar1 = *(uint *)(*(int *)(iVar4 + 0x38) + 0x14);
					uVar2 = *(uint *)(*(int *)(iVar4 + 0x38) + 0x10);
					uVar3 = *(undefined4 *)(*(int *)(iVar4 + 0x14) + -0x61d4);
					uVar11 = (undefined)uVar3;
					uVar12 = (undefined)(uVar2 >> 0x10);
					lVar15 = (ulonglong)(uVar1 & 0xffff) + 0x40;
					param_5 = (undefined)lVar15;
					uVar14 = (undefined)(uVar2 & 0xffff);
					param_6 = (undefined)(uVar1 >> 0x10);
					sprintf(*(int *)(iVar4 + 0x14) + 0x3252, uVar3, uVar2 >> 0x10, uVar2 & 0xffff,
					    (int)lVar15, uVar1 >> 0x10, in_r9, in_r10, *(undefined4 *)(iVar4 + 8),
					    *(undefined *)(iVar4 + 0xf), *(undefined4 *)(iVar4 + 0x1c),
					    *(undefined4 *)(iVar4 + 0x20), *(undefined4 *)(iVar4 + 0x24),
					    *(undefined4 *)(iVar4 + 0x28), *(undefined4 *)(iVar4 + 0x2c),
					    *(undefined4 *)(iVar4 + 0x30), *(undefined4 *)(iVar4 + 0x34));
				}
			}
			mem_free_dbg(lVar8, uVar11, uVar12, uVar14, param_5, param_6, uVar10, uVar16,
			    *(undefined4 *)(iVar4 + 8));
		}
	}
	return;
}

void init_archives(undefined8 uParm1, undefined8 uParm2, undefined param_3, undefined param_4,
    undefined param_5, undefined4 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	undefined4 uVar1;
	undefined *puVar2;
	int *piVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	ulonglong uVar8;
	int iVar9;
	ulonglong uVar10;
	undefined8 uVar11;
	ulonglong uVar12;
	longlong lVar13;
	undefined uVar14;
	ulonglong uVar15;
	undefined8 uVar16;
	undefined uVar17;
	undefined8 uVar18;
	undefined uVar19;
	undefined8 uVar20;
	undefined uVar21;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	ulonglong uVar22;
	undefined8 unaff_r27;
	ulonglong uVar23;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	uint local_4c;
	undefined4 in_stack_ffffffc0;
	undefined uStack37;
	int local_24[2];
	undefined4 local_1c;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	puVar7 = PTR_DAT_100f2df8;
	puVar6 = PTR_DAT_100f2df4;
	puVar5 = PTR_s__diabdat_mpq_100f2df0;
	puVar4 = PTR_s_diabdat_mpq_100f2de8;
	piVar3 = _DAT_100f1dcc;
	puVar2 = PTR_DAT_100f1dc8;
	local_1c = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar22 = ZEXT48(PTR_s_DiabloCD_100f2dec);
	uVar23 = ZEXT48(PTR_s__diabdat_mpq_100f2df0);
	memset((char)PTR_DAT_100f1dc8, 0x14, param_3, param_4, param_5, (char)uParm6, (char)uParm7,
	    (char)uParm8, (char)in_stack_ffffffa8, in_stack_ffffffaf, local_4c);
	uVar8 = (ulonglong)local_4c;
	*(undefined4 *)puVar2 = 0x14;
	uVar1 = *(undefined4 *)(local_4c - 0x61cc);
	*(uint *)(puVar2 + 4) = local_4c + 0x3252;
	*(undefined4 *)(puVar2 + 8) = uVar1;
	*(undefined **)(puVar2 + 0xc) = puVar7;
	*(undefined **)(puVar2 + 0x10) = puVar6;
	init_get_file_info();
	while (true) {
		uVar18 = 1000;
		uVar20 = 1;
		uVar12 = uVar23;
		uVar15 = uVar22;
		uVar10 = init_test_access((int)puVar7, puVar5, uVar22, 1000, 1, uParm6, uParm7, uParm8, in_stack_ffffffa8,
		    in_stack_ffffffaf, in_stack_ffffffc0);
		iVar9 = (int)uVar8;
		*piVar3 = (int)uVar10;
		if (*piVar3 != 0)
			break;
		UiCopyProtError(local_24, (char)uVar12, (char)uVar15, (char)uVar18, (char)uVar20, (char)uParm6,
		    (char)uParm7, (char)uParm8, in_stack_ffffffa8);
		if (local_24[0] == 2) {
			FileErrDlg(puVar4, uVar12, uVar15, uVar18, uVar20, uParm6, uParm7, uParm8, in_stack_ffffffa8);
		}
	}
	lVar13 = ZEXT48(register0x0000000c) - 0x28;
	uVar16 = 1;
	uVar11 = WOpenFile((ulonglong) * (uint *)(iVar9 + -0x61ec), lVar13, 1, uVar18, uVar20, uParm6, uParm7,
	    uParm8, in_stack_ffffffa8);
	uVar21 = (undefined)uVar20;
	uVar19 = (undefined)uVar18;
	uVar17 = (undefined)uVar16;
	uVar14 = (undefined)lVar13;
	if ((int)uVar11 == 0) {
		FileErrDlg(puVar4, lVar13, uVar16, uVar18, uVar20, uParm6, uParm7, uParm8, in_stack_ffffffa8);
	}
	WCloseFile(uStack37, uVar14, uVar17, uVar19, uVar21, (char)uParm6, (char)uParm7, (char)uParm8,
	    in_stack_ffffffa8);
	uVar22 = ZEXT48(*(char **)(iVar9 + -0x61f0));
	uVar23 = (ulonglong) * (uint *)(iVar9 + -0x61f4);
	uVar18 = 2000;
	uVar20 = 0;
	uVar8 = init_test_access((int)puVar6, *(char **)(iVar9 + -0x61f0), uVar23, 2000, 0, uParm6, uParm7, uParm8,
	    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffc0);
	*(undefined4 *)(iVar9 + -0x4e40) = (int)uVar8;
	if (*(int *)(iVar9 + -0x4e40) == 0) {
		FileErrDlg(*(undefined **)(iVar9 + -0x61f8), uVar22, uVar23, uVar18, uVar20, uParm6, uParm7, uParm8,
		    in_stack_ffffffa8);
	}
	return;
}

void init_create_window(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int iVar1;
	char cVar2;
	undefined *puVar3;
	undefined4 uVar4;
	uint uVar5;
	undefined uVar6;
	longlong lVar7;
	ulonglong uVar8;
	undefined uVar9;
	undefined8 uVar10;
	undefined uVar11;
	undefined8 uVar12;
	undefined uVar13;
	undefined8 uVar14;
	undefined uVar15;
	undefined uVar16;
	undefined4 uVar17;
	undefined uVar18;
	undefined4 uVar19;
	undefined uVar20;

	puVar3 = PTR_DAT_100f1a0c;
	uVar8 = ZEXT48(s_DIABLO_100fc21b);
	iVar1 = (int)(ZEXT48(register0x0000000c) - 0x90);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	pfile_init_save_directory(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    *(undefined4 *)(iVar1 + 8));
	cVar2 = (char)(ZEXT48(register0x0000000c) - 0x90);
	lVar7 = 0x30;
	memset(cVar2 + 'H', 0x30, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7,
	    (char)param_8, *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf),
	    *(undefined4 *)(iVar1 + 0x14));
	uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x14) + -0x61fc);
	*(undefined4 *)(iVar1 + 0x48) = 0x30;
	*(undefined4 *)(iVar1 + 0x4c) = 3;
	*(undefined4 *)(iVar1 + 0x50) = uVar4;
	*(undefined4 *)(iVar1 + 0x5c) = *(undefined4 *)puVar3;
	*(undefined4 *)(iVar1 + 0x60) = 0;
	*(undefined4 *)(iVar1 + 100) = 0;
	uVar4 = GetStockObject(4, (char)lVar7, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
	    (char)param_7, (char)param_8, *(undefined *)(iVar1 + 0xb),
	    *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	*(undefined4 *)(iVar1 + 0x68) = uVar4;
	*(undefined4 *)(iVar1 + 0x6c) = 0x100fc21b;
	*(undefined4 *)(iVar1 + 0x70) = 0x100fc21b;
	*(undefined4 *)(iVar1 + 0x74) = 0;
	uVar5 = RegisterClassEx(cVar2 + 'H', (char)lVar7, (char)param_3, (char)param_4, (char)param_5,
	    (char)param_6, (char)param_7, (char)param_8, *(undefined *)(iVar1 + 0xb),
	    *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	if ((uVar5 & 0xffff) == 0) {
		app_fatal(*(int *)(*(int *)(iVar1 + 0x14) + -0x6200), lVar7, param_3, param_4, param_5, param_6,
		    param_7, param_8, *(undefined4 *)(iVar1 + 8), *(undefined *)(iVar1 + 0xf),
		    *(undefined4 *)(iVar1 + 0x18), *(undefined4 *)(iVar1 + 0x1c),
		    *(undefined4 *)(iVar1 + 0x20), *(undefined4 *)(iVar1 + 0x24),
		    *(undefined4 *)(iVar1 + 0x28), *(undefined4 *)(iVar1 + 0x2c),
		    *(undefined4 *)(iVar1 + 0x30), *(undefined4 *)(iVar1 + 0x34));
	}
	*(undefined4 *)(iVar1 + 0x38) = 0;
	uVar10 = 0;
	uVar12 = 0;
	*(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)puVar3;
	uVar14 = 0;
	uVar4 = 0x280;
	*(undefined4 *)(iVar1 + 0x40) = 0;
	uVar17 = 0x1e0;
	uVar19 = 0;
	lVar7 = CreateWindow(0x1b, 0x1b, 0, 0, 0, 0x80, 0xe0, 0, *(undefined *)(iVar1 + 0xb),
	    *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	uVar20 = (undefined)uVar19;
	uVar18 = (undefined)uVar17;
	uVar16 = (undefined)uVar4;
	uVar15 = (undefined)uVar14;
	uVar13 = (undefined)uVar12;
	uVar11 = (undefined)uVar10;
	if (lVar7 == 0) {
		app_fatal(*(int *)(*(int *)(iVar1 + 0x14) + -0x6204), uVar8, uVar10, uVar12, uVar14, uVar4, uVar17,
		    uVar19, *(undefined4 *)(iVar1 + 8), *(undefined *)(iVar1 + 0xf),
		    *(undefined4 *)(iVar1 + 0x18), *(undefined4 *)(iVar1 + 0x1c),
		    *(undefined4 *)(iVar1 + 0x20), *(undefined4 *)(iVar1 + 0x24),
		    *(undefined4 *)(iVar1 + 0x28), *(undefined4 *)(iVar1 + 0x2c),
		    *(undefined4 *)(iVar1 + 0x30), *(undefined4 *)(iVar1 + 0x34));
	}
	uVar9 = 1;
	uVar6 = (undefined)lVar7;
	ShowWindow(uVar6, 1, uVar11, uVar13, uVar15, uVar16, uVar18, uVar20, *(undefined *)(iVar1 + 0xb),
	    *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	UpdateWindow(uVar6, uVar9, uVar11, uVar13, uVar15, uVar16, uVar18, uVar20, *(undefined *)(iVar1 + 0xb),
	    *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	uVar6 = dx_init(uVar6, uVar9, uVar11, uVar13, uVar15, uVar16, uVar18, uVar20,
	    *(undefined4 *)(iVar1 + 8));
	BlackPalette(uVar6, uVar9, uVar11, uVar13, uVar15, uVar16, uVar18, uVar20, *(undefined4 *)(iVar1 + 8));
	snd_init(lVar7);
	init_archives();
	return;
}

void init_activate_window(undefined4 param_1, undefined4 param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9, undefined param_10, undefined4 param_11)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined uVar4;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_DAT_100f1dc0;
	uVar4 = (undefined)param_2;
	ppuVar3 = &toc;
	*(undefined4 *)PTR_DAT_100f1dc0 = param_2;
	UiAppActivate(param_2);
	if (*(int *)puVar2 != 0) {
		puVar1 = (undefined4 *)ppuVar3[-0x1daf];
		*puVar1 = 0xff;
		ResetPal((char)puVar1, uVar4, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
	}
	return;
}

undefined8
MainWndProc(uint param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined uVar3;
	undefined8 uVar2;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	int iVar14;
	undefined4 in_stack_ffffffb8;
	undefined uVar15;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;
	undefined4 in_stack_ffffffc8;

	puVar1 = PTR_DAT_100f17c4;
	uVar15 = (undefined)in_stack_ffffffb8;
	uVar8 = (undefined)param_4;
	uVar6 = (undefined)param_3;
	uVar4 = (undefined)param_2;
	uVar10 = (undefined)param_5;
	uVar13 = (undefined)param_8;
	uVar12 = (undefined)param_7;
	uVar11 = (undefined)param_6;
	iVar14 = (int)param_2;
	if (iVar14 == 0x14) {
		uVar2 = 0;
	} else {
		uVar3 = (undefined)param_1;
		if (iVar14 < 0x14) {
			if (iVar14 == 0xf) {
				*(undefined4 *)PTR_DAT_100f1914 = 0xff;
			} else {
				if (iVar14 < 0xf) {
					if (iVar14 == 2) {
						uVar5 = uVar4;
						uVar7 = uVar6;
						uVar9 = uVar8;
						init_cleanup(1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
						*(undefined4 *)puVar1 = 0;
						PostQuitMessage(0, uVar5, uVar7, uVar9, uVar10, uVar11, uVar12, uVar13, uVar15, in_stack_ffffffbf, local_3c);
					} else {
						if ((iVar14 < 2) && (0 < iVar14)) {
							*(uint *)PTR_DAT_100f17c4 = param_1;
						}
					}
				} else {
					if (iVar14 < 0x11) {
						return 0;
					}
				}
			}
		} else {
			if (iVar14 == 0x30f) {
				SDrawRealizePalette(uVar3, uVar4, uVar6, uVar8, uVar10, uVar11, uVar12, uVar13, uVar15,
				    in_stack_ffffffbf, local_3c);
				return 1;
			}
			if (iVar14 < 0x30f) {
				if (iVar14 == 0x1c) {
					init_activate_window(param_1, (int)param_3, uVar6, uVar8, uVar10, uVar11, uVar12, uVar13,
					    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8);
				}
			} else {
				if ((iVar14 == 0x311) && ((param_3 & 0xffffffff) != ((longlong)(int)param_1 & 0xffffffffU))) {
					SDrawRealizePalette(uVar3, uVar4, uVar6, uVar8, uVar10, uVar11, uVar12, uVar13, uVar15,
					    in_stack_ffffffbf, local_3c);
				}
			}
		}
		uVar2 = DefWindowProc(uVar3, uVar4, uVar6, uVar8, uVar10, uVar11, uVar12, uVar13, uVar15,
		    in_stack_ffffffbf, local_3c);
	}
	return uVar2;
}

ulonglong SetWindowProc(undefined *param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	int iVar2;
	undefined *puVar3;
	ulonglong uVar4;

	puVar3 = PTR_PTR_LAB_100f1a30;
	iVar2 = (int)(ZEXT48(register0x0000000c) - 0x50);
	*(BADSPACEBASE **)iVar2 = register0x0000000c;
	uVar4 = ZEXT48(_DAT_100f4194);
	_DAT_100f4194 = param_1;
	if (param_1 == puVar3) {
		_DAT_100f4194 = param_1;
		GetCursorPos((char)(ZEXT48(register0x0000000c) - 0x50) + '8', param_2, param_3, param_4, param_5,
		    param_6, param_7, param_8, *(undefined *)(iVar2 + 0xb), *(undefined *)(iVar2 + 0xf),
		    *(undefined4 *)(iVar2 + 0x14));
		puVar1 = *(undefined4 **)(*(int *)(iVar2 + 0x14) + -0x76ac);
		**(undefined4 **)(*(int *)(iVar2 + 0x14) + -0x76a8) = *(undefined4 *)(iVar2 + 0x38);
		*puVar1 = *(undefined4 *)(iVar2 + 0x3c);
	}
	return uVar4;
}
