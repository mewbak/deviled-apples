
longlong doom_get_frame_from_time(void)

{
	int iVar1;
	uint uVar2;

	iVar1 = *(int *)PTR_DAT_100f1a74;
	if (iVar1 == 0x8ca1) {
		return 0x1f;
	}
	uVar2 = iVar1 / 0x4b0 + (iVar1 >> 0x1f);
	return ((longlong)(int)((ulonglong)((longlong)iVar1 * 0x1b4e81b5) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar2) + (ulonglong)(uVar2 >> 0x1f);
}

void doom_alloc_cel(void)

{
	undefined **ppuVar1;
	undefined *puVar2;
	undefined8 in_r6;
	undefined8 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffe0;

	ppuVar1 = &toc;
	puVar2 = (undefined *)
	    DiabloAllocPtr(0, 0x38000, 0x444f4f4d, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffc8,
	        in_stack_ffffffcf, in_stack_ffffffe0);
	ppuVar1[-0x13d0] = puVar2;
	return;
}

void doom_cleanup(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	mem_free_dbg((int **)&DAT_100f4090, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	return;
}

void doom_load_graphics(void)

{
	undefined **ppuVar1;
	ulonglong uVar2;
	undefined4 uVar3;
	undefined8 in_r6;
	undefined4 uVar4;
	undefined4 uVar5;
	undefined8 in_r7;
	undefined4 uVar6;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	ulonglong uVar7;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	uVar6 = (undefined4)in_r7;
	uVar5 = (undefined4)((ulonglong)in_r7 >> 0x20);
	uVar4 = (undefined4)in_r6;
	uVar3 = (undefined4)((ulonglong)in_r6 >> 0x20);
	ppuVar1 = &toc;
	uVar7 = ZEXT48(PTR_DAT_100f191c);
	uVar2 = (ulonglong)_DAT_100f408c;
	if (_DAT_100f408c == 0x1f) {
		strcpy((int)PTR_DAT_100f191c, (int)PTR_s_Items_Map_MapZDoom_CEL_100f2bfc);
	} else {
		if ((int)_DAT_100f408c < 10) {
			sprintf((int)PTR_DAT_100f191c, _DAT_100f2bf8, _DAT_100f408c, uVar4, uVar6, in_r8, in_r9, in_r10,
			    in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc, in_stack_ffffffe0,
			    in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0,
			    in_stack_fffffff4);
		} else {
			sprintf((int)PTR_DAT_100f191c, _DAT_100f2bf4, _DAT_100f408c, uVar4, uVar6, in_r8, in_r9, in_r10,
			    in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc, in_stack_ffffffe0,
			    in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0,
			    in_stack_fffffff4);
		}
	}
	LoadFileWithMem(uVar7, ZEXT48(ppuVar1[-0x13d0]), uVar2, CONCAT44(uVar3, uVar4), CONCAT44(uVar5, uVar6),
	    in_r8, in_r9, in_r10, in_stack_ffffffc8);
	FUN_100b8f64((int)ppuVar1[-0x13d0]);
	return;
}

void doom_init(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined **ppuVar2;
	longlong lVar3;

	puVar1 = PTR_DAT_100f1958;
	ppuVar2 = &toc;
	*(undefined4 *)PTR_DAT_100f1958 = 1;
	doom_alloc_cel(puVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
	lVar3 = doom_get_frame_from_time();
	if ((int)lVar3 == 0x1f) {
		ppuVar2[-0x13d1] = (undefined *)0x1f;
	} else {
		ppuVar2[-0x13d1] = (undefined *)0x0;
	}
	doom_load_graphics();
	return;
}

void doom_close(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined4 in_stack_ffffffc8;

	puVar1 = PTR_DAT_100f1958;
	if (*(int *)PTR_DAT_100f1958 != 0) {
		*(undefined4 *)PTR_DAT_100f1958 = 0;
		doom_cleanup((char)puVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
	}
	return;
}

void doom_draw(void)

{
	undefined **ppuVar1;
	longlong lVar2;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	if (*(int *)PTR_DAT_100f1958 != 0) {
		if ((_DAT_100f408c != 0x1f) && (_DAT_100f4088 = _DAT_100f4088 + 1, 4 < _DAT_100f4088)) {
			_DAT_100f408c = _DAT_100f408c + 1;
			_DAT_100f4088 = 0;
			ppuVar1 = &toc;
			lVar2 = doom_get_frame_from_time();
			if ((int)lVar2 < (int)ppuVar1[-0x13d1]) {
				ppuVar1[-0x13d1] = (undefined *)0x0;
			}
			doom_load_graphics();
		}
		CelDecodeOnly(0x40, 0x1ff, ZEXT48(ppuVar1[-0x13d0]), 1, 0x280, in_r8, in_r9, in_r10, in_stack_ffffffc8);
	}
	return;
}
