
void mainmenu_refresh_music(void)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	if (DAT_100f41e4 == '\0') {
		menu_music_track_id = 5;
		DAT_100f41e4 = '\x01';
	}
	music_start(menu_music_track_id);
	do {
		*(int *)(iVar1 + -0x4de8) = *(int *)(iVar1 + -0x4de8) + 1;
		if (*(int *)(iVar1 + -0x4de8) == 6) {
			*(undefined4 *)(iVar1 + -0x4de8) = 0;
		}
	} while (*(uint *)(iVar1 + -0x4de8) < 2);
	return;
}

BOOL mainmenu_init_menu(int type)

{
	ulonglong uVar1;
	longlong lVar2;
	longlong lVar3;
	BOOL BVar4;

	uVar1 = SEXT48(type);
	if ((uVar1 & 0xffffffff) == 4) {
		BVar4 = 1;
	} else {
		music_stop();
		lVar2 = -uVar1 + 2;
		lVar3 = -uVar1 + 3;
		BVar4 = StartGame((int)lVar2 - ((uint)(lVar2 == 0) + (int)-uVar1 + 1) & 0xff,
		    (int)lVar3 - ((uint)(lVar3 == 0) + (int)-uVar1 + 2) & 0xff);
		if (BVar4 != 0) {
			mainmenu_refresh_music();
		}
	}
	return BVar4;
}

void mainmenu_change_name(int arg1, int arg2, int arg3, int arg4, char *name_1, char *name_2)

{
	ulonglong uVar1;
	undefined in_r9;
	undefined in_r10;
	int iStack00000018;
	int iStack0000001c;
	int iStack00000020;
	int iStack00000024;
	undefined4 in_stack_ffffffc8;

	iStack00000018 = arg1;
	iStack0000001c = arg2;
	iStack00000020 = arg3;
	iStack00000024 = arg4;
	uVar1 = UiValidPlayerName((byte *)name_2, (char)arg2, (char)arg3, (char)arg4, (char)name_1, (char)name_2, in_r9,
	    in_r10, in_stack_ffffffc8);
	if ((int)uVar1 != 0) {
		pfile_rename_hero(name_1, name_2);
	}
	return;
}

// WARNING: Removing unreachable block (ram,0x1005b9e8)
// WARNING: Removing unreachable block (ram,0x1005ba08)
// WARNING: Removing unreachable block (ram,0x1005b960)
// WARNING: Removing unreachable block (ram,0x1005b9a4)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int mainmenu_select_hero_dialog(_SNETPROGRAMDATA *client_info,
    _SNETPLAYERDATA *user_info,
    _SNETUIDATA *ui_info,
    _SNETVERSIONDATA *fileinfo,
    DWORD mode,
    char *cname,
    DWORD clen,
    char *cdesc,
    DWORD cdlen,
    BOOL *multi)

{
	ulonglong uVar1;
	int iVar2;
	undefined8 uVar3;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	_SNETPROGRAMDATA *p_Stack00000018;
	_SNETPLAYERDATA *p_Stack0000001c;
	_SNETUIDATA *p_Stack00000020;
	_SNETVERSIONDATA *p_Stack00000024;
	DWORD len;
	undefined4 *in_stack_0000003c;
	undefined4 in_stack_ffffffa8;
	undefined uVar9;
	undefined in_stack_ffffffaf;
	undefined4 local_4c;

	uVar9 = (undefined)in_stack_ffffffa8;
	uVar8 = SUB41(cdesc, 0);
	uVar1 = ZEXT48(register0x0000000c);
	iVar2 = 0x100f8fd0;
	iVar2 = 0x100f8fd0;
	uVar7 = 0x88;
	uVar4 = 0x30;
	if (gbMaxPlayers == '\x01') {
		uVar5 = (undefined)(uVar1 - 0x28);
		uVar6 = uVar7;
		uVar7 = 0x1c;
		p_Stack00000018 = client_info;
		p_Stack0000001c = user_info;
		p_Stack00000020 = ui_info;
		p_Stack00000024 = fileinfo;
		uVar3 = UiSelHeroSingDialog((undefined *)&PTR_pfile_ui_set_hero_infos_100f4e38,
		    (undefined *)&PTR_pfile_ui_save_create_100f4e20, (undefined *)&PTR_pfile_delete_save_100f4e18,
		    (undefined *)&PTR_pfile_ui_set_class_stats_100f4e30, (undefined4 *)(uVar1 - 0x28), (int)&gszHero,
		    (undefined4 *)&DAT_1012f31c, uVar8, in_stack_ffffffa8);
		if ((int)uVar3 == 0) {
			app_fatal(*(char **)(iVar2 + -0x5f58));
		}
		_DAT_101290f0 = 0;
	} else {
		uVar5 = (undefined)(uVar1 - 0x28);
		uVar6 = (undefined)(uVar1 - 0x24);
		p_Stack00000018 = client_info;
		p_Stack0000001c = user_info;
		p_Stack00000020 = ui_info;
		p_Stack00000024 = fileinfo;
		uVar3 = FUN_100104d0((undefined *)&PTR_pfile_ui_set_hero_infos_100f4e38,
		    (undefined *)&PTR_pfile_ui_save_create_100f4e20, (undefined *)&PTR_pfile_delete_save_100f4e18,
		    (undefined *)&PTR_pfile_ui_set_class_stats_100f4e30, (undefined4 *)(uVar1 - 0x28),
		    (undefined4 *)(uVar1 - 0x24), (int)&gszHero, uVar8, in_stack_ffffffa8);
		if ((int)uVar3 == 0) {
			app_fatal(*(char **)(iVar2 + -0x5f5c));
		}
	}
	pfile_create_player_description(cdesc, len);
	if (in_stack_0000003c != (undefined4 *)0x0) {
		if (mode == 0x424e4554) {
			*in_stack_0000003c = 1;
		} else {
			*in_stack_0000003c = 1;
		}
	}
	if ((cname != (char *)0x0) && (clen != 0)) {
		SStrCopy__FPcPCcUl(
		    (char)cname, 0x88, (char)clen, uVar4, uVar5, uVar6, uVar7, uVar8, uVar9, in_stack_ffffffaf, local_4c);
	}
	return 1;
}

BOOL mainmenu_single_player(void)

{
	BOOL BVar1;

	gbMaxPlayers = '\x01';
	BVar1 = mainmenu_init_menu(1);
	return BVar1;
}

BOOL mainmenu_multi_player(void)

{
	BOOL BVar1;

	gbMaxPlayers = '\x04';
	BVar1 = mainmenu_init_menu(3);
	return BVar1;
}

void mainmenu_play_intro(void)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	music_stop();
	play_movie(*(char **)(iVar1 + -0x5f60), 1);
	mainmenu_refresh_music();
	return;
}

// WARNING: Removing unreachable block (ram,0x1005bb90)
// WARNING: Removing unreachable block (ram,0x1005bb9c)
// WARNING: Removing unreachable block (ram,0x1005bb6c)
// WARNING: Removing unreachable block (ram,0x1005bba4)
// WARNING: Removing unreachable block (ram,0x1005bbb0)
// WARNING: Removing unreachable block (ram,0x1005bb74)
// WARNING: Removing unreachable block (ram,0x1005bb78)
// WARNING: Removing unreachable block (ram,0x1005bbb8)
// WARNING: Removing unreachable block (ram,0x1005bb7c)
// WARNING: Removing unreachable block (ram,0x1005bb88)
// WARNING: Removing unreachable block (ram,0x1005bbd0)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void mainmenu_loop(void)

{
	undefined8 uVar1;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined4 in_stack_ffffffa8;
	undefined4 local_28[10];

	mainmenu_refresh_music();
	do {
		do {
			uVar1 = FUN_100099f0((int)s_Diablo_v1_09_100fc326, local_28, &PTR_effects_play_sound_100f4900, 0x1e, in_r7,
			    in_r8, in_r9, in_r10, in_stack_ffffffa8);
		} while ((int)uVar1 != 0);
		app_fatal("Unable to display mainmenu");
	} while (true);
}
