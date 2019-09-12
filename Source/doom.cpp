
int doom_get_frame_from_time(void)

{
	uint uVar1;

	if (_DAT_101291ec == 0x8ca1) {
		return 0x1f;
	}
	uVar1 = _DAT_101291ec / 0x4b0 + (_DAT_101291ec >> 0x1f);
	return (int)(uVar1 + (uVar1 >> 0x1f));
}

// WARNING: Unknown calling convention yet parameter storage is locked

void doom_alloc_cel(void)

{
	int iVar1;
	void *pvVar2;

	iVar1 = 0x100f8fd0;
	pvVar2 = AllocateMemFile(0, (MEMFILE *)0x38000, 0x444f4f4d);
	*(void **)(iVar1 + -0x4f40) = pvVar2;
	return;
}

void doom_cleanup(void)

{
	MemFreeDbg((int **)&DAT_100f4090);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void doom_load_graphics(void)

{
	int iVar1;
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

	iVar1 = 0x100f8fd0;
	if (_DAT_100f408c == 0x1f) {
		strcpy(&DAT_101282d4, "Items\\Map\\MapZDoom.CEL");
	} else {
		if (_DAT_100f408c < 10) {
			wsprintf((int)&DAT_101282d4, "Items\\Map\\MapZ000%i.CEL", _DAT_100f408c, in_r6, in_r7, in_r8, in_r9, in_r10,
			    in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4,
			    in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
		} else {
			wsprintf((int)&DAT_101282d4, "Items\\Map\\MapZ00%i.CEL", _DAT_100f408c, in_r6, in_r7, in_r8, in_r9, in_r10,
			    in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4,
			    in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
		}
	}
	LoadFileWithMemLock(&DAT_101282d4, *(void **)(iVar1 + -0x4f40));
	FUN_100b8f64(*(int *)(iVar1 + -0x4f40));
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void doom_init(void)

{
	int iVar1;
	int iVar2;

	iVar1 = 0x100f8fd0;
	_DAT_101291f0 = 1;
	doom_alloc_cel();
	iVar2 = doom_get_frame_from_time();
	if (iVar2 == 0x1f) {
		*(undefined4 *)(iVar1 + -0x4f44) = 0x1f;
	} else {
		*(undefined4 *)(iVar1 + -0x4f44) = 0;
	}
	doom_load_graphics();
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void doom_close(void)

{
	if (_DAT_101291f0 != 0) {
		_DAT_101291f0 = 0;
		doom_cleanup();
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void doom_draw(void)

{
	int iVar1;
	int iVar2;

	iVar1 = 0x100f8fd0;
	if (_DAT_101291f0 != 0) {
		if ((_DAT_100f408c != 0x1f) && (_DAT_100f4088 = _DAT_100f4088 + 1, 4 < _DAT_100f4088)) {
			_DAT_100f408c = _DAT_100f408c + 1;
			_DAT_100f4088 = 0;
			iVar1 = 0x100f8fd0;
			iVar2 = doom_get_frame_from_time();
			if (iVar2 < *(int *)(iVar1 + -0x4f44)) {
				*(undefined4 *)(iVar1 + -0x4f44) = 0;
			}
			doom_load_graphics();
		}
		CelDecodeOnly(0x40, 0x1ff, *(BYTE **)(iVar1 + -0x4f40), 1, 0x280);
	}
	return;
}
