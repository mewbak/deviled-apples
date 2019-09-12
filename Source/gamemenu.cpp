
undefined8
gamemenu_previous(int param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined8 uVar2;
	ulonglong uVar3;
	undefined7 uVar4;
	undefined uVar5;
	undefined7 uVar6;
	undefined uVar7;
	undefined8 uVar8;
	undefined4 in_stack_ffffffc8;

	uVar6 = (undefined7)((ulonglong)param_5 >> 8);
	uVar7 = (undefined)param_5;
	uVar4 = (undefined7)((ulonglong)param_4 >> 8);
	uVar5 = (undefined)param_4;
	uVar8 = 1;
	if (*PTR_DAT_100f17e0 != '\x01') {
		puVar1 = &DAT_100fb788;
		uVar3 = (ulonglong)_DAT_100f2d6c;
		if (param_1 == 3) {
			param_3 = 1;
			goto LAB_100408b4;
		}
		if (param_1 < 3) {
			if (param_1 == 1) {
				uVar8 = 0;
				goto LAB_100408b4;
			}
		} else {
			if (param_1 == 5) {
				param_3 = 3;
				goto LAB_100408b4;
			}
			if (param_1 < 5) {
				param_3 = 2;
				goto LAB_100408b4;
			}
		}
		param_3 = 0;
		goto LAB_100408b4;
	}
	puVar1 = &DAT_100fb740;
	uVar3 = ZEXT48(PTR_PTR_LAB_100f2d70);
	if (param_1 == 3) {
		param_3 = 2;
		goto LAB_100408b4;
	}
	if (param_1 < 3) {
		if (param_1 == 1) {
			param_3 = 0;
			goto LAB_100408b4;
		}
	} else {
		if (param_1 == 5) {
			param_3 = 4;
			goto LAB_100408b4;
		}
		if (param_1 < 5) {
			param_3 = 3;
			goto LAB_100408b4;
		}
	}
	param_3 = 0;
LAB_100408b4:
	if ((int)uVar8 != 0) {
		uVar2 = gmenu_call_proc((int)puVar1, (int)uVar3, (int)param_3, uVar5, uVar7, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffc8);
		PressEscKey(uVar2, uVar3, param_3, CONCAT71(uVar4, uVar5), CONCAT71(uVar6, uVar7), param_6, param_7,
		    param_8, in_stack_ffffffc8);
	}
	return uVar8;
}

void gamemenu_off(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	gmenu_call_proc(0, 0, 0, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void gamemenu_handle_previous(int param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	undefined7 uVar2;
	undefined uVar3;
	undefined7 uVar4;
	undefined uVar5;
	undefined7 uVar6;
	undefined uVar7;
	undefined7 uVar8;
	undefined uVar9;
	undefined4 in_stack_ffffffc8;

	uVar8 = (undefined7)((ulonglong)param_5 >> 8);
	uVar9 = (undefined)param_5;
	uVar6 = (undefined7)((ulonglong)param_4 >> 8);
	uVar7 = (undefined)param_4;
	uVar4 = (undefined7)(param_3 >> 8);
	uVar5 = (undefined)param_3;
	uVar2 = (undefined7)((ulonglong)param_2 >> 8);
	uVar3 = (undefined)param_2;
	uVar1 = gmenu_exception();
	if ((int)uVar1 == 0) {
		gamemenu_previous(param_1, CONCAT71(uVar2, uVar3), CONCAT71(uVar4, uVar5), CONCAT71(uVar6, uVar7),
		    CONCAT71(uVar8, uVar9), param_6, param_7, param_8, in_stack_ffffffc8);
	} else {
		gamemenu_off((char)uVar1, uVar3, uVar5, uVar7, uVar9, (char)param_6, (char)param_7, (char)param_8,
		    in_stack_ffffffc8);
	}
	return;
}

void gamemenu_new_game(void)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	longlong lVar8;
	undefined uVar9;
	undefined uVar10;
	ulonglong uVar11;
	undefined4 in_r10;
	undefined uVar12;
	undefined4 in_stack_ffffffb8;

	puVar4 = PTR_DAT_100f1a04;
	puVar2 = PTR_DAT_100f1828;
	uVar12 = (undefined)in_r10;
	ppuVar5 = &toc;
	uVar11 = ZEXT48(PTR_DAT_100f1828);
	uVar11._7_1_ = SUB41(PTR_DAT_100f1828, 0);
	uVar10 = 0xb;
	uVar9 = 1;
	lVar8 = uVar11 + 0x10000;
	lVar8._7_1_ = (undefined)lVar8;
	uVar7 = ZEXT48(PTR_DAT_100f1a04);
	uVar7._7_1_ = SUB41(PTR_DAT_100f1a04, 0);
	*(undefined4 *)PTR_DAT_100f1828 = 0xb;
	puVar3 = PTR_DAT_100f1914;
	uVar6 = ZEXT48(PTR_DAT_100f1914);
	uVar6._7_1_ = SUB41(PTR_DAT_100f1914, 0);
	puVar2[0x139] = 1;
	*(undefined4 *)(puVar2 + 0x55ec) = 0xb;
	puVar2[0x5725] = 1;
	*(undefined4 *)(puVar2 + 0xabd8) = 0xb;
	puVar2[0xad11] = 1;
	*(undefined4 *)(puVar2 + 0x101c4) = 0xb;
	puVar2[0x102fd] = 1;
	*(undefined4 *)puVar4 = 0;
	*(undefined4 *)puVar3 = 0xff;
	scrollrt_draw_game_screen(1, uVar6, uVar7, lVar8, 1, 0xb, uVar11, in_r10, in_stack_ffffffb8);
	puVar1 = (undefined4 *)ppuVar5[-0x1d69];
	*puVar1 = 0;
	gamemenu_off((char)puVar1, (undefined)uVar6, (undefined)uVar7, (undefined)lVar8, uVar9, uVar10,
	    (undefined)uVar11, uVar12, in_stack_ffffffb8);
	return;
}

void gamemenu_sound_music_toggle(uint *param_1, uint *param_2, int param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	if (*_DAT_100f1d20 == '\0') {
		*param_2 = *param_2 & 0x3fffffff;
		param_2[1] = param_1[1];
	} else {
		*param_2 = *param_2 | 0xc0000000;
		param_2[1] = *param_1;
		gmenu_slider_steps(param_2, 0x11);
		gmenu_slider_set(param_2, -0x640, 0, param_3);
	}
	return;
}

void gamemenu_slider_music_sound(uint *param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	gmenu_slider_get(param_1, -0x640, 0);
	return;
}

void gamemenu_get_music(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	ulonglong uVar2;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	uVar2 = sound_get_or_set_music_volume(&DAT_00000001, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	gamemenu_sound_music_toggle((uint *)(ppuVar1 + 0xa0f), (uint *)(ppuVar1 + 0x9fd), (int)uVar2, param_4, param_5,
	    param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void gamemenu_get_sound(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	ulonglong uVar2;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	uVar2 = sound_get_or_set_sound_volume(1);
	gamemenu_sound_music_toggle((uint *)(ppuVar1 + 0xa11), (uint *)(ppuVar1 + 0xa00), (int)uVar2, param_4, param_5,
	    param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void gamemenu_get_color_cycling(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	ulonglong uVar2;

	ppuVar1 = &toc;
	uVar2 = palette_get_colour_cycling();
	ppuVar1[0xa07] = ppuVar1[((uint)uVar2 & 1) + 0xa13];
	return;
}

void gamemenu_get_gamma(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	longlong lVar1;
	undefined uVar2;
	undefined4 in_stack_ffffffc8;

	uVar2 = 0xf;
	gmenu_slider_steps((uint *)0x100fb7dc, 0xf);
	lVar1 = UpdateGamma(0, uVar2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	gmenu_slider_set((uint *)0x100fb7dc, 0x1e, 100, (int)lVar1);
	return;
}

void gamemenu_slider_gamma(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	gmenu_slider_get((uint *)0x100fb7dc, 0x1e, 100);
	return;
}
