
void dx_init(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined uVar2;
	ulonglong uVar1;
	undefined uVar3;
	undefined4 in_stack_ffffffb8;
	undefined uVar4;
	undefined in_stack_ffffffbf;
	int local_3c;

	SetFocus(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, (char)in_stack_ffffffb8,
	    in_stack_ffffffbf, local_3c);
	ShowWindow(param_1, 1, param_3, param_4, param_5, param_6, param_7, param_8, (char)in_stack_ffffffb8,
	    in_stack_ffffffbf, local_3c);
	*(undefined4 *)(local_3c + -0x2448) = 1;
	uVar3 = 1;
	uVar2 = SDrawVidDriverInitialize(param_1, 1, param_3, param_4, param_5, param_6, param_7, param_8,
	    (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
	uVar4 = (undefined)in_stack_ffffffb8;
	uVar1 = palette_init(uVar2, uVar3, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	SDrawUpdatePalette(0, 0, (char)uVar1, 1, param_5, param_6, param_7, param_8, uVar4, in_stack_ffffffbf,
	    local_3c);
	**(undefined4 **)(local_3c + -0x7800) = 1;
	return;
}

void lock_buf_priv(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	int *piVar2;
	undefined4 uVar3;
	int iVar4;
	int iVar5;

	uVar3 = _DAT_100f2808;
	iVar1 = (int)(ZEXT48(register0x0000000c) - 0x40);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	EnterCriticalSection((char)uVar3, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	iVar4 = *(int *)(iVar1 + 0x14);
	if (*(int *)(iVar4 + -0x5044) == 0) {
		iVar5 = SDrawLockSurface(3, 0, (char)(ZEXT48(register0x0000000c) - 0x40) + '8', 0, 0, param_6, param_7, param_8, *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf),
		    *(undefined4 *)(iVar1 + 0x14));
		iVar4 = *(int *)(iVar1 + 0x14);
		if (iVar5 != 0) {
			iVar1 = *(int *)(iVar1 + 0x38);
			piVar2 = *(int **)(iVar4 + -0x7808);
			**(int **)(iVar4 + -0x7804) = iVar1;
			*piVar2 = *piVar2 + iVar1;
		}
	}
	*(int *)(iVar4 + -0x5044) = *(int *)(iVar4 + -0x5044) + 1;
	return;
}

void lock_buf(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	lock_buf_priv(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void unlock_buf_priv(undefined8 param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int iVar1;
	int *piVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined4 in_stack_ffffffb8;
	undefined uVar12;
	undefined in_stack_ffffffbf;
	undefined **local_3c;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar3 = PTR_DAT_100f17cc;
	ppuVar4 = &toc;
	if (_DAT_100f3f8c == 0) {
		ppuVar4 = &toc;
		app_fatal(_DAT_100f2804, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4);
	}
	uVar12 = (undefined)in_stack_ffffffb8;
	uVar11 = (undefined)param_8;
	uVar10 = (undefined)param_7;
	uVar9 = (undefined)param_6;
	uVar8 = (undefined)param_5;
	uVar7 = (undefined)param_4;
	uVar6 = (undefined)param_3;
	uVar5 = (undefined)param_2;
	if (*(int *)puVar3 == 0) {
		app_fatal((int)ppuVar4[-0x19f4], param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4);
	}
	ppuVar4[-0x1411] = ppuVar4[-0x1411] + -1;
	if (ppuVar4[-0x1411] == (undefined *)0x0) {
		iVar1 = *(int *)puVar3;
		uVar5 = (undefined)iVar1;
		if (iVar1 != 0) {
			piVar2 = (int *)ppuVar4[-0x1e02];
			uVar8 = SUB41(piVar2, 0);
			uVar6 = 0;
			uVar7 = 0;
			*piVar2 = *piVar2 - iVar1;
			ppuVar4 = local_3c;
			SDrawUnlockSurface(3, uVar5, 0, 0, uVar8, uVar9, uVar10, uVar11, uVar12, in_stack_ffffffbf, local_3c);
			*(undefined4 *)puVar3 = 0;
			local_3c = ppuVar4;
		}
	}
	LeaveCriticalSection((char)ppuVar4[-0x19f2], uVar5, uVar6, uVar7, uVar8, uVar9, uVar10, uVar11, uVar12,
	    in_stack_ffffffbf, local_3c);
	return;
}

void unlock_buf(undefined8 param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	unlock_buf_priv(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void dx_cleanup(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined4 uVar3;
	undefined uVar4;
	undefined uVar5;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	uVar3 = _DAT_100f2808;
	puVar2 = PTR_DAT_100f17c4;
	uVar5 = SUB41(PTR_DAT_100f17d0, 0);
	*(undefined4 *)PTR_DAT_100f17d0 = 0;
	uVar4 = (undefined) * (int *)puVar2;
	if (*(int *)puVar2 != 0) {
		uVar5 = 0;
		uVar4 = ShowWindow(uVar4, 0, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
		    in_stack_ffffffcf, local_2c);
	}
	SDrawDestroy(uVar4, uVar5, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
	    in_stack_ffffffcf, local_2c);
	EnterCriticalSection((char)uVar3, uVar5, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
	    in_stack_ffffffcf, local_2c);
	puVar1 = *(undefined4 **)(local_2c + -0x7804);
	*(undefined4 *)(local_2c + -0x5044) = 0;
	*puVar1 = 0;
	LeaveCriticalSection((char)uVar3, (char)puVar1, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	return;
}
