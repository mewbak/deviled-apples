
void gmenu_print_text(longlong param_1, undefined8 param_2, byte *param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	byte bVar1;
	ulonglong uVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	undefined4 in_stack_ffffffa8;

	lVar5 = (longlong)param_8;
	lVar4 = (longlong)param_7;
	lVar3 = (longlong)param_6;
	uVar2 = ZEXT48(&toc);
	while (*param_3 != 0) {
		bVar1 = *param_3;
		param_3 = param_3 + 1;
		bVar1 = (&DAT_100fb828)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]];
		if (bVar1 != 0) {
			CelDecodeLightOnly((int)param_1, param_2, (ulonglong) * (uint *)((int)uVar2 + -0x4e64), (ulonglong)bVar1,
			    0x2e, (int)lVar3, (int)lVar4, (int)lVar5, in_stack_ffffffa8);
		}
		param_1 = (ulonglong)(byte)(&DAT_100fb8a8)[(uint)bVar1] + param_1 + 2;
	}
	return;
}

void gmenu_draw_pause(undefined8 uParm1, undefined param_2, undefined param_3, undefined8 uParm4,
    undefined8 uParm5, undefined4 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	byte *pbVar1;
	undefined **ppuVar2;
	undefined7 uVar3;
	undefined uVar4;
	undefined7 uVar5;
	undefined uVar6;
	undefined4 in_stack_ffffffc8;

	uVar6 = (undefined)uParm5;
	uVar5 = (undefined7)((ulonglong)uParm5 >> 8);
	uVar4 = (undefined)uParm4;
	uVar3 = (undefined7)((ulonglong)uParm4 >> 8);
	ppuVar2 = &toc;
	if (*PTR_DAT_100f17ec != '\0') {
		ppuVar2 = &toc;
		RedBack((char)PTR_DAT_100f17ec, param_2, param_3, uVar4, uVar6, (char)uParm6, (char)uParm7,
		    (char)uParm8, in_stack_ffffffc8);
	}
	if (ppuVar2[-0x139c] == (undefined *)0x0) {
		pbVar1 = ppuVar2[-0x1887];
		*(undefined4 *)ppuVar2[-0x1ca4] = 0;
		gmenu_print_text(0x13c, 0x150, pbVar1, CONCAT71(uVar3, uVar4), CONCAT71(uVar5, uVar6), uParm6, uParm7, uParm8, in_stack_ffffffc8);
	}
	return;
}

void FreeGMenu(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	mem_free_dbg((int **)&DAT_100f4174, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	mem_free_dbg((int **)(ppuVar1 + -0x1399), param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	mem_free_dbg((int **)(ppuVar1 + -0x1398), param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	mem_free_dbg((int **)(ppuVar1 + -0x139a), param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	mem_free_dbg((int **)(ppuVar1 + -0x139b), param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	return;
}

void gmenu_init_menu(void)

{
	undefined **ppuVar1;
	longlong lVar2;
	undefined8 uVar3;
	undefined8 in_r6;
	undefined8 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	uVar3 = 1;
	_DAT_100f4160 = 0;
	DAT_100f4178 = 1;
	_DAT_100f4158 = 0;
	_DAT_100f415c = 0;
	_DAT_100f4154 = 0;
	DAT_100f414c = 0;
	lVar2 = LoadFileInMem(ZEXT48(PTR_s_Data_Diabsmal_CEL_100f2db0), (undefined4 *)0x0, 1, in_r6, in_r7,
	    in_r8, in_r9, in_r10, in_stack_ffffffc8);
	ppuVar1[-0x1397] = (undefined *)lVar2;
	lVar2 = LoadFileInMem(ZEXT48(ppuVar1[-0x1889]), (undefined4 *)0x0, uVar3, in_r6, in_r7, in_r8, in_r9,
	    in_r10, in_stack_ffffffc8);
	ppuVar1[-0x1399] = (undefined *)lVar2;
	lVar2 = LoadFileInMem(ZEXT48(ppuVar1[-0x188a]), (undefined4 *)0x0, uVar3, in_r6, in_r7, in_r8, in_r9,
	    in_r10, in_stack_ffffffc8);
	ppuVar1[-0x1398] = (undefined *)lVar2;
	lVar2 = LoadFileInMem(ZEXT48(ppuVar1[-0x188b]), (undefined4 *)0x0, uVar3, in_r6, in_r7, in_r8, in_r9,
	    in_r10, in_stack_ffffffc8);
	ppuVar1[-0x139a] = (undefined *)lVar2;
	lVar2 = LoadFileInMem(ZEXT48(ppuVar1[-0x188c]), (undefined4 *)0x0, uVar3, in_r6, in_r7, in_r8, in_r9,
	    in_r10, in_stack_ffffffc8);
	ppuVar1[-0x139b] = (undefined *)lVar2;
	return;
}

ulonglong gmenu_exception(void)

{
	return (ulonglong)(_DAT_100f4160 != 0);
}

void gmenu_up_down(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	bool bVar1;
	uint *puVar2;
	int iVar3;

	if (_DAT_100f4158 != (uint *)0x0) {
		DAT_100f414c = 0;
		iVar3 = _DAT_100f4154;
		do {
			bVar1 = iVar3 == 0;
			iVar3 = iVar3 + -1;
			if (bVar1) {
				DAT_100f414c = 0;
				return;
			}
			if (param_1 == 0) {
				if (_DAT_100f4158 == _DAT_100f4160) {
					_DAT_100f4158 = _DAT_100f4160 + _DAT_100f4154 * 3;
				}
				_DAT_100f4158 = _DAT_100f4158 + -3;
			} else {
				puVar2 = _DAT_100f4158 + 5;
				_DAT_100f4158 = _DAT_100f4158 + 3;
				if (*puVar2 == 0) {
					_DAT_100f4158 = _DAT_100f4160;
				}
			}
		} while ((*_DAT_100f4158 & 0x80000000) == 0);
		if (iVar3 != 0) {
			PlaySFX(0x45);
		}
	}
	return;
}

void gmenu_call_proc(int param_1, int param_2, int param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined **ppuVar1;
	longlong lVar2;
	undefined uVar3;
	undefined uVar4;
	undefined uVar5;
	undefined4 in_stack_ffffffc8;
	undefined **local_2c;

	uVar4 = (undefined)param_3;
	lVar2 = (longlong)param_1;
	uVar5 = SUB41(PTR_DAT_100f1a00, 0);
	*(undefined4 *)PTR_DAT_100f1a00 = 0;
	DAT_100f414c = 0;
	_DAT_100f4154 = 0;
	_DAT_100f4158 = param_1;
	_DAT_100f415c = param_2;
	_DAT_100f4160 = param_1;
	if (lVar2 != 0) {
		_DAT_100f4158 = param_1;
		_DAT_100f415c = param_2;
		_DAT_100f4160 = param_1;
		ppuVar1 = &toc;
		if (param_2 != 0) {
			_DAT_100f4158 = param_1;
			_DAT_100f415c = param_2;
			_DAT_100f4160 = param_1;
			FUN_100dbf44(lVar2);
			ppuVar1 = local_2c;
		}
		while (uVar3 = (undefined)lVar2, *(int *)((int)lVar2 + 8) != 0) {
			lVar2 = lVar2 + 0xc;
			ppuVar1[-0x139f] = ppuVar1[-0x139f] + 1;
		}
		ppuVar1[-0x139e] = (undefined *)(param_1 + param_3 * 0xc);
		gmenu_up_down(0, uVar3, uVar4, uVar5, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		gmenu_up_down(1, uVar3, uVar4, uVar5, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	}
	return;
}

void gmenu_clear_buffer(longlong lParm1, int iParm2, undefined param_3, ulonglong uParm4, undefined8 uParm5,
    undefined param_6, undefined param_7, undefined param_8)

{
	ulonglong uVar1;
	undefined uVar2;
	ulonglong uVar3;
	longlong lVar4;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	uVar2 = (undefined)uParm4;
	uVar3 = ZEXT48(PTR_DAT_100f1938);
	lVar4 = (ulonglong) * (uint *)PTR_DAT_100f17cc + (ulonglong) * (uint *)(PTR_DAT_100f1938 + iParm2 * 4) + lParm1;
	while (uVar1 = uParm4 & 0xffffffff, uParm4 = uParm4 - 1, uVar1 != 0) {
		memset((char)lVar4, param_3, 0xcd, uVar2, (char)uVar3, param_6, param_7, param_8, in_stack_ffffffbb,
		    in_stack_ffffffbf, local_3c);
		lVar4 = lVar4 + -0x300;
	}
	return;
}

longlong gmenu_get_lfont(uint *param_1)

{
	byte bVar1;
	longlong lVar2;
	byte *pbVar3;

	if ((*param_1 & 0x40000000) != 0) {
		return 0x1ea;
	}
	pbVar3 = (byte *)param_1[1];
	lVar2 = 0;
	while (true) {
		if (*pbVar3 == 0)
			break;
		bVar1 = *pbVar3;
		pbVar3 = pbVar3 + 1;
		lVar2 = (ulonglong)(byte)(&DAT_100fb8a8)
		            [(uint)(byte)(&DAT_100fb828)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]]]
		    + lVar2 + 2;
	}
	return lVar2 + -2;
}

void gmenu_draw_menu_item(uint *param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 uVar1;
	undefined **ppuVar2;
	longlong lVar3;
	int iVar4;
	uint uVar5;
	ulonglong uVar6;
	uint uVar7;
	undefined4 in_stack_ffffffb8;

	ppuVar2 = &toc;
	lVar3 = gmenu_get_lfont(param_1);
	uVar7 = (uint)lVar3;
	if ((*param_1 & 0x40000000) != 0) {
		iVar4 = (uVar7 >> 1) + 0x50;
		CelDecodeOnly(iVar4, param_2 + -10, ZEXT48(ppuVar2[-0x139b]), 1, 0x11f, param_6, param_7, param_8,
		    in_stack_ffffffb8);
		uVar5 = *param_1 >> 0xc & 0xfff;
		if (uVar5 < 2) {
			uVar5 = 2;
		}
		uVar6 = (ulonglong)((*param_1 & 0xfff) << 8) / (ulonglong)uVar5;
		gmenu_clear_buffer((ulonglong)(uVar7 >> 1) + 0x52, param_2 + -0xc, uVar6 + 0xd, 0x1c);
		param_4 = 1;
		param_5 = 0x1b;
		CelDecodeOnly(iVar4 + (int)uVar6 + 2, param_2 + -0xc, ZEXT48(ppuVar2[-0x139a]), 1, 0x1b, param_6,
		    param_7, param_8, in_stack_ffffffb8);
	}
	lVar3 = -(ulonglong)(uVar7 >> 1) + 0x180;
	if ((*param_1 & 0x80000000) == 0) {
		uVar1 = 0xf;
	} else {
		uVar1 = 0;
	}
	*(undefined4 *)ppuVar2[-0x1ca4] = uVar1;
	gmenu_print_text(lVar3, param_2, (byte *)param_1[1], param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	if (param_1 == (uint *)ppuVar2[-0x139e]) {
		CelDecodeOnly((int)-(ulonglong)(uVar7 >> 1) + 0x14a, param_2 + 1, ZEXT48(ppuVar2[-0x1398]),
		    (ulonglong) * (byte *)(ppuVar2 + -0x1396), 0x30, param_6, param_7, param_8,
		    in_stack_ffffffb8);
		CelDecodeOnly((int)lVar3 + uVar7 + 4, param_2 + 1, ZEXT48(ppuVar2[-0x1398]),
		    (ulonglong) * (byte *)(ppuVar2 + -0x1396), 0x30, param_6, param_7, param_8,
		    in_stack_ffffffb8);
	}
	return;
}

void gmenu_draw(void)

{
	undefined **ppuVar1;
	undefined8 uVar2;
	undefined *puVar3;
	longlong lVar4;
	ulonglong uVar5;
	undefined8 uVar6;
	undefined8 uVar7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	longlong lVar8;
	uint *puVar9;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined **local_2c;

	ppuVar1 = &toc;
	if (_DAT_100f4160 != 0) {
		if (_DAT_100f415c != 0) {
			ppuVar1 = local_2c;
			FUN_100dbf44();
			local_2c = ppuVar1;
		}
		uVar5 = ZEXT48(ppuVar1[-0x1397]);
		lVar4 = 0x106;
		uVar6 = 1;
		uVar7 = 0x128;
		uVar2 = CelDecodeOnly(0xec, 0x106, uVar5, 1, 0x128, in_r8, in_r9, in_r10, in_stack_ffffffc8);
		puVar9 = (uint *)ppuVar1[-0x139c];
		lVar8 = 0x140;
		while (puVar9[2] != 0) {
			lVar4 = lVar8;
			uVar2 = gmenu_draw_menu_item(puVar9, lVar8, uVar5, uVar6, uVar7, in_r8, in_r9, in_r10, in_stack_ffffffc8);
			lVar8 = lVar8 + 0x2d;
			puVar9 = puVar9 + 3;
		}
		puVar3 = (undefined *)
		    GetTickCount((char)uVar2, (char)lVar4, (char)uVar5, (char)uVar6, (char)uVar7, (char)in_r8,
		        (char)in_r9, (char)in_r10, (char)in_stack_ffffffc8, in_stack_ffffffcf,
		        local_2c);
		if (0x19 < (int)(puVar3 + -(int)local_2c[-0x13a0])) {
			*(char *)(local_2c + -0x1396) = *(char *)(local_2c + -0x1396) + '\x01';
			if (*(char *)(local_2c + -0x1396) == '\t') {
				*(undefined *)(local_2c + -0x1396) = 1;
			}
			local_2c[-0x13a0] = puVar3;
		}
	}
	return;
}

void gmenu_left_right(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	longlong lVar3;

	uVar1 = *_DAT_100f4158;
	if ((uVar1 & 0x40000000) != 0) {
		uVar2 = uVar1 & 0xfff;
		if (param_1 == 0) {
			if (uVar2 == 0) {
				return;
			}
			lVar3 = (ulonglong)uVar2 - 1;
		} else {
			if (uVar2 == (uVar1 >> 0xc & 0xfff)) {
				return;
			}
			lVar3 = (ulonglong)uVar2 + 1;
		}
		*_DAT_100f4158 = *_DAT_100f4158 & 0xfffff000;
		*_DAT_100f4158 = *_DAT_100f4158 | (uint)lVar3;
		FUN_100dbf44(0, _DAT_100f4158, lVar3, param_4, param_5, param_6, param_7, param_8);
	}
	return;
}

undefined8
gmenu_presskeys(undefined4 param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined8 uVar1;
	undefined4 in_stack_ffffffc8;

	if (_DAT_100f4160 == 0) {
		uVar1 = 0;
	} else {
		switch (param_1) {
		case 0xd:
			if ((*_DAT_100f4158 & 0x80000000) != 0) {
				PlaySFX(0x45);
				FUN_100dbf44(1);
			}
			break;
		case 0x1b:
			PlaySFX(0x45);
			gmenu_call_proc(0, 0, 0, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
			break;
		case 0x20:
			return 0;
		case 0x25:
			gmenu_left_right(0, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
			break;
		case 0x26:
			gmenu_up_down(0, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
			break;
		case 0x27:
			gmenu_left_right(1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
			break;
		case 0x28:
			gmenu_up_down(1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		}
		uVar1 = 1;
	}
	return uVar1;
}

undefined8 gmenu_valid_mouse_pos(int *param_1)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;

	puVar3 = PTR_DAT_100f1928;
	*param_1 = 0x11a;
	iVar1 = *(int *)puVar3;
	iVar2 = *param_1;
	if (iVar1 < iVar2) {
		*param_1 = 0;
		return 0;
	}
	if (iVar2 + 0x100 < iVar1) {
		*param_1 = 0x100;
		return 0;
	}
	*param_1 = iVar1 - iVar2;
	return 1;
}

ulonglong gmenu_on_mouse_move(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	bool bVar1;
	uint *puVar2;
	undefined **ppuVar3;
	uint local_8[2];

	ppuVar3 = &toc;
	bVar1 = DAT_100f414c != '\0';
	if (bVar1) {
		gmenu_valid_mouse_pos((int *)local_8);
		puVar2 = (uint *)ppuVar3[-0x139e];
		local_8[0] = local_8[0] * (*puVar2 >> 0xc & 0xfff);
		local_8[0] = ((int)local_8[0] >> 8) + (uint)((int)local_8[0] < 0 && (local_8[0] & 0xff) != 0);
		*puVar2 = *puVar2 & 0xfffff000;
		*(uint *)ppuVar3[-0x139e] = *(uint *)ppuVar3[-0x139e] | local_8[0];
		FUN_100dbf44(0);
	}
	return (ulonglong)bVar1;
}

undefined8
gmenu_left_mouse(int param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	uint uVar1;
	undefined **ppuVar2;
	undefined8 uVar3;
	uint uVar4;
	longlong lVar5;
	int iVar6;
	undefined uVar7;
	undefined uVar8;
	uint *puVar9;
	undefined4 in_stack_ffffffb8;
	int aiStack24[6];

	ppuVar2 = &toc;
	if (param_1 == 0) {
		if (DAT_100f414c == '\0') {
			uVar3 = 0;
		} else {
			DAT_100f414c = '\0';
			uVar3 = 1;
		}
	} else {
		uVar8 = (undefined)_DAT_100f4160;
		if (_DAT_100f4160 == 0) {
			uVar3 = 0;
		} else {
			if ((int)*(uint *)PTR_DAT_100f1924 < 0x160) {
				lVar5 = (ulonglong) * (uint *)PTR_DAT_100f1924 - 0x75;
				if (lVar5 < 0) {
					uVar3 = 1;
				} else {
					iVar6 = (int)lVar5;
					uVar4 = iVar6 / 0x2d + (iVar6 >> 0x1f);
					uVar4 = uVar4 + (uVar4 >> 0x1f);
					if (uVar4 < _DAT_100f4154) {
						puVar9 = (uint *)(_DAT_100f4160 + uVar4 * 0xc);
						if ((*puVar9 & 0x80000000) == 0) {
							uVar3 = 1;
						} else {
							lVar5 = gmenu_get_lfont(puVar9);
							uVar1 = (uint)lVar5 >> 1;
							uVar4 = *(uint *)ppuVar2[-0x1daa];
							uVar7 = (undefined)uVar4;
							if (uVar4 < 0x140 - uVar1) {
								uVar3 = 1;
							} else {
								if (uVar1 + 0x140 < uVar4) {
									uVar3 = 1;
								} else {
									*(uint **)(ppuVar2 + -0x139e) = puVar9;
									PlaySFX(0x45);
									if ((*puVar9 & 0x40000000) == 0) {
										FUN_100dbf44(1);
									} else {
										uVar3 = gmenu_valid_mouse_pos(aiStack24);
										*(char *)(ppuVar2 + -0x13a1) = (char)uVar3;
										gmenu_on_mouse_move((char)uVar3, uVar7, uVar8, param_4, param_5, param_6, param_7, param_8,
										    in_stack_ffffffb8);
									}
									uVar3 = 1;
								}
							}
						}
					} else {
						uVar3 = 1;
					}
				}
			} else {
				uVar3 = 0;
			}
		}
	}
	return uVar3;
}

void gmenu_enable(uint *param_1, int param_2)

{
	if (param_2 != 0) {
		*param_1 = *param_1 | 0x80000000;
		return;
	}
	*param_1 = *param_1 & 0x7fffffff;
	return;
}

void gmenu_slider_set(uint *param_1, int param_2, int param_3, int param_4)

{
	uint uVar1;
	uint uVar2;

	uVar2 = *param_1 >> 0xc & 0xfff;
	if (uVar2 < 2) {
		uVar2 = 2;
	}
	uVar1 = (param_3 - param_2) - 1;
	*param_1 = *param_1 & 0xfffff000;
	*param_1 = *param_1 | (int)((param_4 - param_2) * uVar2 + ((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0)) / (param_3 - param_2);
	return;
}

longlong gmenu_slider_get(uint *param_1, longlong param_2, int param_3)

{
	uint uVar1;
	uint uVar2;

	uVar2 = *param_1 >> 0xc & 0xfff;
	if (uVar2 < 2) {
		uVar2 = 2;
	}
	uVar1 = uVar2 - 1;
	return (longlong)((int)((*param_1 & 0xfff) * (param_3 - (int)param_2) + ((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0)) / (int)uVar2) + param_2;
}

void gmenu_slider_steps(uint *param_1, uint param_2)

{
	*param_1 = *param_1 & 0xff000fff;
	*param_1 = *param_1 | (param_2 & 0xfff) << 0xc;
	return;
}
