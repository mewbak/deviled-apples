
void LoadDebugGFX(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	longlong lVar2;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	if (*(int *)PTR_DAT_100f19c8 != 0) {
		lVar2 = LoadFileInMem(ZEXT48(PTR_s_Data_Square_CEL_100f2b7c), (undefined4 *)0x0, param_3, param_4,
		    param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		*(int *)ppuVar1[-0x1d83] = (int)lVar2;
	}
	return;
}

void FreeDebugGFX(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	mem_free_dbg((int **)PTR_DAT_100f19c4, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	return;
}
