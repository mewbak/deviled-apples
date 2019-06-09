
void mainmenu_refresh_music(undefined8 param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	if (DAT_100f41e4 == '\0') {
		_DAT_100f41e8 = 5;
		DAT_100f41e4 = '\x01';
	}
	music_start(_DAT_100f41e8, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	do {
		ppuVar1[-0x137a] = ppuVar1[-0x137a] + 1;
		if (ppuVar1[-0x137a] == (undefined *)0x6) {
			ppuVar1[-0x137a] = (undefined *)0x0;
		}
	} while (ppuVar1[-0x137a] < (undefined *)0x2);
	return;
}

ulonglong mainmenu_init_menu(ulonglong param_1, undefined8 param_2, ulonglong param_3, ulonglong param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	longlong lVar2;
	longlong lVar3;
	ulonglong uVar4;
	undefined7 uVar5;
	undefined uVar6;
	undefined7 uVar7;
	undefined uVar8;
	undefined7 uVar9;
	undefined uVar10;
	undefined4 uVar11;
	undefined4 uVar12;
	undefined4 uVar13;
	undefined4 in_stack_ffffffc8;

	uVar9 = (undefined7)((ulonglong)param_5 >> 8);
	uVar10 = (undefined)param_5;
	uVar7 = (undefined7)(param_4 >> 8);
	uVar8 = (undefined)param_4;
	uVar5 = (undefined7)(param_3 >> 8);
	uVar6 = (undefined)param_3;
	if ((param_1 & 0xffffffff) == 4) {
		uVar1 = 1;
	} else {
		music_stop((char)param_1, (undefined)param_2, uVar6, uVar8, uVar10, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffc8);
		uVar13 = (undefined4)param_8;
		uVar12 = (undefined4)param_7;
		uVar11 = (undefined4)param_6;
		lVar2 = -param_1 + 2;
		lVar3 = -param_1 + 3;
		uVar4 = (ulonglong)((int)lVar3 - ((uint)(lVar3 == 0) + (int)-param_1 + 2) & 0xff);
		uVar1 = StartGame((int)lVar2 - ((uint)(lVar2 == 0) + (int)-param_1 + 1) & 0xff, uVar4,
		    CONCAT71(uVar5, uVar6), CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10), param_6,
		    param_7, param_8, in_stack_ffffffc8);
		if (uVar1 != 0) {
			mainmenu_refresh_music(uVar1, uVar4, CONCAT71(uVar5, uVar6), CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10),
			    uVar11, uVar12, uVar13, in_stack_ffffffc8);
		}
	}
	return uVar1;
}

void mainmenu_single_player(undefined8 param_1, undefined8 param_2, ulonglong param_3, ulonglong param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	undefined4 in_stack_ffffffc8;

	uVar1 = ZEXT48(PTR_DAT_100f17e0);
	*PTR_DAT_100f17e0 = 1;
	mainmenu_init_menu(1, uVar1, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void mainmenu_multi_player(undefined8 param_1, undefined8 param_2, ulonglong param_3, ulonglong param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	undefined4 in_stack_ffffffc8;

	uVar1 = ZEXT48(PTR_DAT_100f17e0);
	*PTR_DAT_100f17e0 = 4;
	mainmenu_init_menu(3, uVar1, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void mainmenu_play_intro(undefined8 param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined8 extraout_r3;
	undefined8 uVar2;
	undefined7 uVar3;
	undefined uVar4;
	undefined7 uVar5;
	undefined uVar6;
	undefined7 uVar7;
	undefined uVar8;
	undefined4 in_stack_ffffffc8;

	uVar7 = (undefined7)((ulonglong)param_5 >> 8);
	uVar8 = (undefined)param_5;
	uVar5 = (undefined7)((ulonglong)param_4 >> 8);
	uVar6 = (undefined)param_4;
	uVar3 = (undefined7)(param_3 >> 8);
	uVar4 = (undefined)param_3;
	ppuVar1 = &toc;
	music_stop((undefined)param_1, (undefined)param_2, uVar4, uVar6, uVar8, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffffc8);
	uVar2 = 1;
	play_movie(ZEXT48(ppuVar1[-0x17d8]), 1, CONCAT71(uVar3, uVar4), CONCAT71(uVar5, uVar6),
	    CONCAT71(uVar7, uVar8), param_6, param_7, param_8, in_stack_ffffffc8);
	mainmenu_refresh_music(extraout_r3, uVar2, CONCAT71(uVar3, uVar4), CONCAT71(uVar5, uVar6), CONCAT71(uVar7, uVar8),
	    param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void mainmenu_loop(undefined8 param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined8 uVar3;
	longlong lVar4;
	ulonglong uVar5;
	undefined8 uVar6;
	undefined7 uVar7;
	undefined uVar8;
	ulonglong uVar9;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar2 = PTR_s_Unable_to_display_mainmenu_100f306c;
	puVar1 = PTR_PTR_FUN_100f1ea4;
	uVar7 = (undefined7)((ulonglong)param_5 >> 8);
	uVar8 = (undefined)param_5;
	uVar9 = ZEXT48(PTR_PTR_FUN_100f1ea4);
	mainmenu_refresh_music(param_1, param_2, param_3, param_4, param_5, (int)param_6, (int)param_7, (int)param_8,
	    in_stack_ffffffa8);
	do {
		do {
			lVar4 = ZEXT48(register0x0000000c) - 0x28;
			uVar6 = 0x1e;
			uVar5 = uVar9;
			uVar3 = UiMainMenuDialog((int)s_Diablo_v1_09_100fc326, (undefined4 *)lVar4, puVar1, 0x1e, uVar8,
			    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffa8);
		} while ((int)uVar3 != 0);
		app_fatal((int)puVar2, lVar4, uVar5, uVar6, CONCAT71(uVar7, uVar8), (int)param_6, (int)param_7,
		    (int)param_8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffb8,
		    in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
	} while (true);
}
