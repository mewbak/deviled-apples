
void gmenu_print_text(int x, int y, char *pszStr)

{
	byte bVar1;
	undefined8 uVar2;
	longlong lVar3;

	lVar3 = (longlong)x;
	uVar2 = 0x100f8fd0;
	while (*pszStr != 0) {
		bVar1 = *pszStr;
		pszStr = (char *)((byte *)pszStr + 1);
		bVar1 = (&DAT_100fb828)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]];
		if (bVar1 != 0) {
			CelDecodeLightOnly((int)lVar3, y, *(BYTE **)((int)uVar2 + -0x4e64), (uint)bVar1, 0x2e);
		}
		lVar3 = (ulonglong)(byte)(&DAT_100fb8a8)[(uint)bVar1] + lVar3 + 2;
	}
	return;
}

// WARNING: Unknown calling convention yet parameter storage is locked

void gmenu_draw_pause(void)

{
	char *pszStr;
	int iVar1;

	iVar1 = 0x100f8fd0;
	if (currlevel != 0) {
		iVar1 = 0x100f8fd0;
		RedBack();
	}
	if (*(int *)(iVar1 + -0x4e70) == 0) {
		pszStr = *(char **)(iVar1 + -0x621c);
		**(undefined4 **)(iVar1 + -0x7290) = 0;
		gmenu_print_text(0x13c, 0x150, pszStr);
	}
	return;
}

void FreeGMenu(void)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	MemFreeDbg((int **)&DAT_100f4174);
	MemFreeDbg((int **)(iVar1 + -0x4e64));
	MemFreeDbg((int **)(iVar1 + -0x4e60));
	MemFreeDbg((int **)(iVar1 + -0x4e68));
	MemFreeDbg((int **)(iVar1 + -0x4e6c));
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void gmenu_init_menu(void)

{
	int iVar1;
	BYTE *pBVar2;

	iVar1 = 0x100f8fd0;
	_DAT_100f4160 = 0;
	DAT_100f4178 = 1;
	_DAT_100f4158 = 0;
	_DAT_100f415c = 0;
	_DAT_100f4154 = 0;
	mouseNavigation = 0;
	pBVar2 = LoadFileInMem("Data\\Diabsmal.CEL", (DWORD *)0x0);
	*(BYTE **)(iVar1 + -0x4e5c) = pBVar2;
	pBVar2 = LoadFileInMem(*(char **)(iVar1 + -0x6224), (DWORD *)0x0);
	*(BYTE **)(iVar1 + -0x4e64) = pBVar2;
	pBVar2 = LoadFileInMem(*(char **)(iVar1 + -0x6228), (DWORD *)0x0);
	*(BYTE **)(iVar1 + -0x4e60) = pBVar2;
	pBVar2 = LoadFileInMem(*(char **)(iVar1 + -0x622c), (DWORD *)0x0);
	*(BYTE **)(iVar1 + -0x4e68) = pBVar2;
	pBVar2 = LoadFileInMem(*(char **)(iVar1 + -0x6230), (DWORD *)0x0);
	*(BYTE **)(iVar1 + -0x4e6c) = pBVar2;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL gmenu_exception(void)

{
	return (BOOL)(uint)(_DAT_100f4160 != 0);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void gmenu_up_down(BOOL isDown)

{
	bool bVar1;
	uint *puVar2;
	int iVar3;

	if (_DAT_100f4158 != (uint *)0x0) {
		mouseNavigation = 0;
		iVar3 = _DAT_100f4154;
		do {
			bVar1 = iVar3 == 0;
			iVar3 = iVar3 + -1;
			if (bVar1) {
				mouseNavigation = 0;
				return;
			}
			if (isDown == 0) {
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

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void gmenu_call_proc(TMenuItem *pItem, gmFunc *gmFunc)

{
	int iVar1;
	TMenuItem *pTVar2;
	int in_r5;
	int local_2c;

	_DAT_10129104 = 0;
	mouseNavigation = 0;
	_DAT_100f4154 = 0;
	_DAT_100f4158 = pItem;
	_DAT_100f415c = gmFunc;
	_DAT_100f4160 = pItem;
	if (pItem != (TMenuItem *)0x0) {
		_DAT_100f4158 = pItem;
		_DAT_100f415c = gmFunc;
		_DAT_100f4160 = pItem;
		pTVar2 = pItem;
		iVar1 = 0x100f8fd0;
		if (gmFunc != (gmFunc *)0x0) {
			_DAT_100f4158 = pItem;
			_DAT_100f415c = gmFunc;
			_DAT_100f4160 = pItem;
			fnMenu((BOOL)pItem);
			pTVar2 = pItem;
			iVar1 = local_2c;
		}
		while (pTVar2->fnMenu != (_func_62 *)0x0) {
			*(int *)(iVar1 + -0x4e7c) = *(int *)(iVar1 + -0x4e7c) + 1;
			pTVar2 = pTVar2 + 1;
		}
		*(TMenuItem **)(iVar1 + -0x4e78) = pItem + in_r5;
		gmenu_up_down(0);
		gmenu_up_down(1);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void gmenu_clear_buffer(int x, int y, int width, int height)

{
	ulonglong uVar1;
	ulonglong uVar2;
	ulonglong uVar3;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	ulonglong uVar4;
	longlong lVar5;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	uVar2 = SEXT48(height);
	uVar3 = ZEXT48(&DAT_1019ed80);
	lVar5 = (ulonglong)_DAT_101271e4 + (ulonglong) * (uint *)(&DAT_1019ed80 + y * 4) + (longlong)x;
	uVar4 = uVar2;
	while (uVar1 = uVar4 & 0xffffffff, uVar4 = uVar4 - 1, uVar1 != 0) {
		FillMemory((char)lVar5, (char)width, 0xcd, (char)uVar2, (char)uVar3, in_r8, in_r9, in_r10, in_stack_ffffffbb,
		    in_stack_ffffffbf, local_3c);
		lVar5 = lVar5 + -0x300;
	}
	return;
}

int gmenu_get_lfont(TMenuItem *pItem)

{
	byte bVar1;
	longlong lVar2;
	byte *pbVar3;

	if ((pItem->dwFlags & 0x40000000) != 0) {
		return 0x1ea;
	}
	pbVar3 = (byte *)pItem->pszStr;
	lVar2 = 0;
	while (true) {
		if (*pbVar3 == 0)
			break;
		bVar1 = *pbVar3;
		pbVar3 = pbVar3 + 1;
		lVar2 = (ulonglong)(byte)(&DAT_100fb8a8)[(uint)(byte)(&DAT_100fb828)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]]] + lVar2 + 2;
	}
	return (int)lVar2 + -2;
}

void gmenu_draw_menu_item(TMenuItem *pItem, int y)

{
	undefined4 uVar1;
	int iVar2;
	uint uVar3;
	uint uVar4;
	int sx;

	iVar2 = 0x100f8fd0;
	uVar3 = gmenu_get_lfont(pItem);
	if ((pItem->dwFlags & 0x40000000) != 0) {
		sx = (uVar3 >> 1) + 0x50;
		CelDecodeOnly(sx, y + -10, *(BYTE **)(iVar2 + -0x4e6c), 1, 0x11f);
		uVar4 = pItem->dwFlags >> 0xc & 0xfff;
		if (uVar4 < 2) {
			uVar4 = 2;
		}
		uVar4 = ((pItem->dwFlags & 0xfff) << 8) / uVar4;
		gmenu_clear_buffer((uVar3 >> 1) + 0x52, y + -0xc, uVar4 + 0xd, 0x1c);
		CelDecodeOnly(sx + uVar4 + 2, y + -0xc, *(BYTE **)(iVar2 + -0x4e68), 1, 0x1b);
	}
	sx = -(uVar3 >> 1) + 0x180;
	if ((pItem->dwFlags & 0x80000000) == 0) {
		uVar1 = 0xf;
	} else {
		uVar1 = 0;
	}
	**(undefined4 **)(iVar2 + -0x7290) = uVar1;
	gmenu_print_text(sx, y, pItem->pszStr);
	if (pItem == *(TMenuItem **)(iVar2 + -0x4e78)) {
		CelDecodeOnly(
		    -(uVar3 >> 1) + 0x14a, y + 1, *(BYTE **)(iVar2 + -0x4e60), (uint) * (byte *)(iVar2 + -0x4e58), 0x30);
		CelDecodeOnly(sx + uVar3 + 4, y + 1, *(BYTE **)(iVar2 + -0x4e60), (uint) * (byte *)(iVar2 + -0x4e58), 0x30);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void gmenu_draw(void)

{
	int y;
	DWORD DVar1;
	TMenuItem *pItem;
	int local_2c;

	if (_DAT_100f4160 != 0) {
		y = 0x100f8fd0;
		if (_DAT_100f415c != 0) {
			fnMenu(_DAT_100f4160);
			y = local_2c;
		}
		CelDecodeOnly(0xec, 0x106, *(BYTE **)(y + -0x4e5c), 1, 0x128);
		pItem = *(TMenuItem **)(y + -0x4e70);
		y = 0x140;
		while (pItem->fnMenu != (_func_62 *)0x0) {
			gmenu_draw_menu_item(pItem, y);
			y = y + 0x2d;
			pItem = pItem + 1;
		}
		DVar1 = GetTickCount();
		if (0x19 < (int)(DVar1 - *(int *)(local_2c + -0x4e80))) {
			*(char *)(local_2c + -0x4e58) = *(char *)(local_2c + -0x4e58) + '\x01';
			if (*(char *)(local_2c + -0x4e58) == '\t') {
				*(undefined *)(local_2c + -0x4e58) = 1;
			}
			*(DWORD *)(local_2c + -0x4e80) = DVar1;
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void gmenu_left_right(BOOL isRight)

{
	uint uVar1;
	uint uVar2;

	uVar1 = *_DAT_100f4158;
	if ((uVar1 & 0x40000000) != 0) {
		uVar2 = uVar1 & 0xfff;
		if (isRight == 0) {
			if (uVar2 == 0) {
				return;
			}
			uVar2 = uVar2 - 1;
		} else {
			if (uVar2 == (uVar1 >> 0xc & 0xfff)) {
				return;
			}
			uVar2 = uVar2 + 1;
		}
		*_DAT_100f4158 = *_DAT_100f4158 & 0xfffff000;
		*_DAT_100f4158 = *_DAT_100f4158 | uVar2;
		fnMenu(0);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL gmenu_presskeys(int vkey)

{
	BOOL BVar1;

	if (_DAT_100f4160 == 0) {
		BVar1 = 0;
	} else {
		switch (vkey) {
		case 0xd:
			if ((*_DAT_100f4158 & 0x80000000) != 0) {
				PlaySFX(0x45);
				fnMenu(1);
			}
			break;
		case 0x1b:
			PlaySFX(0x45);
			gmenu_call_proc((TMenuItem *)0x0, (gmFunc *)0x0);
			break;
		case 0x20:
			return 0;
		case 0x25:
			gmenu_left_right(0);
			break;
		case 0x26:
			gmenu_up_down(0);
			break;
		case 0x27:
			gmenu_left_right(1);
			break;
		case 0x28:
			gmenu_up_down(1);
		}
		BVar1 = 1;
	}
	return BVar1;
}

BOOLEAN gmenu_valid_mouse_pos(int *plOffset)

{
	int iVar1;

	*plOffset = 0x11a;
	iVar1 = *plOffset;
	if (MouseX < iVar1) {
		*plOffset = 0;
		return false;
	}
	if (iVar1 + 0x100 < MouseX) {
		*plOffset = 0x100;
		return false;
	}
	*plOffset = MouseX - iVar1;
	return true;
}

BOOL gmenu_on_mouse_move(void)

{
	TMenuItem *pTVar1;
	uint uVar2;
	TMenuItem **local_r2_36;
	int step;
	bool _mouseNavigation;

	local_r2_36 = (TMenuItem **)(sgSFX + 0x20);
	_mouseNavigation = mouseNavigation != '\0';
	if (_mouseNavigation) {
		gmenu_valid_mouse_pos(&step);
		pTVar1 = local_r2_36[-0x139e];
		uVar2 = step * (pTVar1->dwFlags >> 0xc & 0xfff);
		step = ((int)uVar2 >> 8) + (uint)((int)uVar2 < 0 && (uVar2 & 0xff) != 0);
		pTVar1->dwFlags = pTVar1->dwFlags & 0xfffff000;
		local_r2_36[-0x139e]->dwFlags = local_r2_36[-0x139e]->dwFlags | step;
		fnMenu(0);
	}
	return (BOOL)(uint)_mouseNavigation;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL gmenu_left_mouse(BOOL isDown)

{
	int iVar1;
	BOOL BVar2;
	uint uVar3;
	BOOLEAN BVar4;
	int iVar5;
	TMenuItem *pItem;
	int aiStack24[6];

	iVar1 = 0x100f8fd0;
	if (isDown == 0) {
		if (mouseNavigation == '\0') {
			BVar2 = 0;
		} else {
			mouseNavigation = '\0';
			BVar2 = 1;
		}
	} else {
		if (_DAT_100f4160 == 0) {
			BVar2 = 0;
		} else {
			if ((int)_MouseY < 0x160) {
				if ((longlong)((ulonglong)_MouseY - 0x75) < 0) {
					BVar2 = 1;
				} else {
					iVar5 = (int)((ulonglong)_MouseY - 0x75);
					uVar3 = iVar5 / 0x2d + (iVar5 >> 0x1f);
					uVar3 = uVar3 + (uVar3 >> 0x1f);
					if (uVar3 < _DAT_100f4154) {
						pItem = (TMenuItem *)(_DAT_100f4160 + uVar3 * 0xc);
						if ((pItem->dwFlags & 0x80000000) == 0) {
							BVar2 = 1;
						} else {
							uVar3 = gmenu_get_lfont(pItem);
							if (**(uint **)(iVar1 + -0x76a8) < 0x140 - (uVar3 >> 1)) {
								BVar2 = 1;
							} else {
								if ((uVar3 >> 1) + 0x140 < **(uint **)(iVar1 + -0x76a8)) {
									BVar2 = 1;
								} else {
									*(TMenuItem **)(iVar1 + -0x4e78) = pItem;
									PlaySFX(0x45);
									if ((pItem->dwFlags & 0x40000000) == 0) {
										fnMenu(1);
									} else {
										BVar4 = gmenu_valid_mouse_pos(aiStack24);
										*(BOOLEAN *)(iVar1 + -0x4e84) = BVar4;
										gmenu_on_mouse_move();
									}
									BVar2 = 1;
								}
							}
						}
					} else {
						BVar2 = 1;
					}
				}
			} else {
				BVar2 = 0;
			}
		}
	}
	return BVar2;
}

void gmenu_enable(TMenuItem *pMenuItem, BOOL enable)

{
	if (enable != 0) {
		pMenuItem->dwFlags = pMenuItem->dwFlags | 0x80000000;
		return;
	}
	pMenuItem->dwFlags = pMenuItem->dwFlags & 0x7fffffff;
	return;
}

void gmenu_slider_set(TMenuItem *pItem, int min, int max, int gamma)

{
	uint uVar1;
	uint uVar2;

	uVar2 = pItem->dwFlags >> 0xc & 0xfff;
	if (uVar2 < 2) {
		uVar2 = 2;
	}
	uVar1 = (max - min) - 1;
	pItem->dwFlags = pItem->dwFlags & 0xfffff000;
	pItem->dwFlags = pItem->dwFlags | (int)((gamma - min) * uVar2 + ((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0)) / (max - min);
	return;
}

int gmenu_slider_get(TMenuItem *pItem, int min, int max)

{
	uint uVar1;
	uint uVar2;

	uVar2 = pItem->dwFlags >> 0xc & 0xfff;
	if (uVar2 < 2) {
		uVar2 = 2;
	}
	uVar1 = uVar2 - 1;
	return (int)((pItem->dwFlags & 0xfff) * (max - min) + ((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0)) / (int)uVar2 + min;
}

void gmenu_slider_steps(TMenuItem *pItem, int dwTicks)

{
	pItem->dwFlags = pItem->dwFlags & 0xff000fff;
	pItem->dwFlags = pItem->dwFlags | (dwTicks & 0xfffU) << 0xc;
	return;
}
