
ulonglong FUN_100b854c(undefined param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	char cVar2;

	iVar1 = (int)(ZEXT48(register0x0000000c) - 0x50);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	cVar2 = (char)(ZEXT48(register0x0000000c) - 0x50);
	GetDialogItem(param_1, param_2, cVar2 + 'D', cVar2 + '@', cVar2 + '8', param_6, param_7, param_8,
	    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	return (ulonglong) * (uint *)(iVar1 + 0x40);
}

void FUN_100b8580(undefined8 param_1,
    undefined8 param_2,
    longlong param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	char cVar2;

	iVar1 = (int)(ZEXT48(register0x0000000c) - 0x40);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	if (param_3 != 0) {
		cVar2 = (char)(ZEXT48(register0x0000000c) - 0x40);
		GetDialogItem((undefined)param_1, (undefined)param_2, cVar2 + '<', cVar2 + '8', (char)param_3, param_6, param_7,
		    param_8, *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	}
	return;
}

void FUN_100b85b4(undefined param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	undefined uVar1;
	undefined uVar2;
	undefined uVar3;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;
	undefined uStack13;
	ushort local_c;

	uVar2 = 0xf0;
	uVar3 = 0xe8;
	uVar1 = 0xf4;
	GetDialogItem(
	    param_1, param_2, 0xf4, 0xf0, 0xe8, param_6, param_7, param_8, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	if (((local_c & 0xff7f) != 8) && ((local_c & 0xff7f) != 0x10)) {
		if ((local_c & 4) == 0) {
			return;
		}
		GetControlTitle(uStack13, param_3, uVar1, uVar2, uVar3, param_6, param_7, param_8, in_stack_ffffffbb,
		    in_stack_ffffffbf, local_3c);
		return;
	}
	GetDialogItemText(uStack13, param_3, uVar1, uVar2, uVar3, param_6, param_7, param_8, in_stack_ffffffbb,
	    in_stack_ffffffbf, local_3c);
	return;
}

void FUN_100b863c(undefined param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	undefined uVar1;
	undefined uVar2;
	undefined uVar3;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;
	undefined uStack13;
	ushort local_c;

	uVar2 = 0xf0;
	uVar3 = 0xe8;
	uVar1 = 0xf4;
	GetDialogItem(
	    param_1, param_2, 0xf4, 0xf0, 0xe8, param_6, param_7, param_8, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	if (((local_c & 0xff7f) != 8) && ((local_c & 0xff7f) != 0x10)) {
		if ((local_c & 4) == 0) {
			return;
		}
		SetControlTitle(uStack13, param_3, uVar1, uVar2, uVar3, param_6, param_7, param_8, in_stack_ffffffbb,
		    in_stack_ffffffbf, local_3c);
		return;
	}
	SetDialogItemText(uStack13, param_3, uVar1, uVar2, uVar3, param_6, param_7, param_8, in_stack_ffffffbb,
	    in_stack_ffffffbf, local_3c);
	return;
}

void FUN_100b86c4(undefined param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	char cVar2;
	undefined uVar3;
	undefined uVar4;
	undefined uVar5;

	iVar1 = (int)(ZEXT48(register0x0000000c) - 0x50);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	cVar2 = (char)(ZEXT48(register0x0000000c) - 0x50);
	GetDialogItem(param_1, param_2, cVar2 + 'D', cVar2 + '@', cVar2 + '8', param_6, param_7, param_8,
	    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	uVar4 = (undefined) * (undefined4 *)(iVar1 + 0x40);
	*(ushort *)(iVar1 + 0x44) = *(ushort *)(iVar1 + 0x44) & 0xff7f;
	uVar5 = 0xe8;
	uVar3 = (undefined) * (undefined2 *)(iVar1 + 0x44);
	SetDialogItem(param_1, param_2, uVar3, uVar4, 0xe8, param_6, param_7, param_8, *(undefined *)(iVar1 + 0xb),
	    *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	if ((*(ushort *)(iVar1 + 0x44) & 4) != 0) {
		HiliteControl((char)*(undefined4 *)(iVar1 + 0x40), 0, uVar3, uVar4, uVar5, param_6, param_7, param_8,
		    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	}
	return;
}

void FUN_100b8750(undefined param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	char cVar2;
	undefined uVar3;
	undefined uVar4;
	undefined uVar5;

	iVar1 = (int)(ZEXT48(register0x0000000c) - 0x50);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	cVar2 = (char)(ZEXT48(register0x0000000c) - 0x50);
	GetDialogItem(param_1, param_2, cVar2 + 'D', cVar2 + '@', cVar2 + '8', param_6, param_7, param_8,
	    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	uVar4 = (undefined) * (undefined4 *)(iVar1 + 0x40);
	*(ushort *)(iVar1 + 0x44) = *(ushort *)(iVar1 + 0x44) | 0x80;
	uVar5 = 0xe8;
	uVar3 = (undefined) * (undefined2 *)(iVar1 + 0x44);
	SetDialogItem(param_1, param_2, uVar3, uVar4, 0xe8, param_6, param_7, param_8, *(undefined *)(iVar1 + 0xb),
	    *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	if ((*(ushort *)(iVar1 + 0x44) & 4) != 0) {
		HiliteControl((char)*(undefined4 *)(iVar1 + 0x40), 0xff, uVar3, uVar4, uVar5, param_6, param_7, param_8,
		    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	}
	return;
}

undefined8 FUN_100b87dc(undefined param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	undefined uVar1;
	undefined uVar2;
	undefined uVar3;
	undefined8 uVar4;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;
	undefined uStack13;
	ushort local_c;

	uVar4 = 0;
	uVar1 = 0xf4;
	uVar2 = 0xf0;
	uVar3 = 0xe8;
	GetDialogItem(
	    param_1, param_2, 0xf4, 0xf0, 0xe8, param_6, param_7, param_8, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	if ((local_c & 4) != 0) {
		uVar4 = GetControlValue(uStack13, param_2, uVar1, uVar2, uVar3, param_6, param_7, param_8, in_stack_ffffffbb,
		    in_stack_ffffffbf, local_3c);
	}
	return uVar4;
}

void FUN_100b8838(undefined param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	undefined uVar1;
	undefined uVar2;
	undefined uVar3;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;
	undefined uStack13;
	ushort local_c;

	uVar2 = 0xf0;
	uVar3 = 0xe8;
	uVar1 = 0xf4;
	GetDialogItem(
	    param_1, param_2, 0xf4, 0xf0, 0xe8, param_6, param_7, param_8, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	if ((local_c & 4) != 0) {
		SetControlValue(uStack13, param_3, uVar1, uVar2, uVar3, param_6, param_7, param_8, in_stack_ffffffbb,
		    in_stack_ffffffbf, local_3c);
	}
	return;
}

void FUN_100b8890(undefined param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	undefined uVar1;
	undefined uVar2;
	undefined uVar3;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;
	undefined uStack13;
	ushort local_c;

	uVar1 = 0xf4;
	uVar2 = 0xf0;
	uVar3 = 0xe8;
	GetDialogItem(
	    param_1, param_2, 0xf4, 0xf0, 0xe8, param_6, param_7, param_8, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	ShowDialogItem(param_1, param_2, uVar1, uVar2, uVar3, param_6, param_7, param_8, in_stack_ffffffbb,
	    in_stack_ffffffbf, local_3c);
	if ((local_c & 4) != 0) {
		ShowControl(uStack13, param_2, uVar1, uVar2, uVar3, param_6, param_7, param_8, in_stack_ffffffbb,
		    in_stack_ffffffbf, local_3c);
	}
	return;
}

void FUN_100b8900(undefined param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	undefined uVar1;
	undefined uVar2;
	undefined uVar3;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;
	undefined uStack13;
	ushort local_c;

	uVar1 = 0xf4;
	uVar2 = 0xf0;
	uVar3 = 0xe8;
	GetDialogItem(
	    param_1, param_2, 0xf4, 0xf0, 0xe8, param_6, param_7, param_8, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	HideDialogItem(param_1, param_2, uVar1, uVar2, uVar3, param_6, param_7, param_8, in_stack_ffffffbb,
	    in_stack_ffffffbf, local_3c);
	if ((local_c & 4) != 0) {
		HideControl(uStack13, param_2, uVar1, uVar2, uVar3, param_6, param_7, param_8, in_stack_ffffffbb,
		    in_stack_ffffffbf, local_3c);
	}
	return;
}

ulonglong FUN_100b8970(undefined param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	undefined8 uVar1;
	short sVar2;
	undefined uVar3;
	undefined uVar4;
	undefined uVar5;
	ulonglong uVar6;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;
	undefined uStack13;
	ushort local_c;

	uVar6 = 0;
	uVar3 = 0xf4;
	uVar4 = 0xf0;
	uVar5 = 0xe8;
	GetDialogItem(
	    param_1, param_2, 0xf4, 0xf0, 0xe8, param_6, param_7, param_8, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	if ((local_c & 4) != 0) {
		sVar2 = GetControlValue(uStack13, param_2, uVar3, uVar4, uVar5, param_6, param_7, param_8, in_stack_ffffffbb,
		    in_stack_ffffffbf, local_3c);
		uVar1 = countLeadingZeros(1 - (int)sVar2);
		uVar6 = (ulonglong)((uint)uVar1 >> 5 & 0xff);
	}
	return uVar6;
}

void FUN_100b89d8(undefined param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	undefined uVar1;
	undefined uVar2;
	undefined uVar3;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;
	undefined uStack13;
	ushort local_c;

	uVar1 = 0xf4;
	uVar2 = 0xf0;
	uVar3 = 0xe8;
	GetDialogItem(
	    param_1, param_2, 0xf4, 0xf0, 0xe8, param_6, param_7, param_8, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	if ((local_c & 4) != 0) {
		SetControlValue(uStack13, 0, uVar1, uVar2, uVar3, param_6, param_7, param_8, in_stack_ffffffbb,
		    in_stack_ffffffbf, local_3c);
	}
	return;
}

ulonglong FUN_100b8a24(undefined param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	undefined8 uVar1;
	short sVar2;
	undefined uVar3;
	undefined uVar4;
	undefined uVar5;
	ulonglong uVar6;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;
	undefined uStack13;
	ushort local_c;

	uVar6 = 0;
	uVar3 = 0xf4;
	uVar4 = 0xf0;
	uVar5 = 0xe8;
	GetDialogItem(
	    param_1, param_2, 0xf4, 0xf0, 0xe8, param_6, param_7, param_8, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	if ((local_c & 4) != 0) {
		sVar2 = GetControlValue(uStack13, param_2, uVar3, uVar4, uVar5, param_6, param_7, param_8, in_stack_ffffffbb,
		    in_stack_ffffffbf, local_3c);
		uVar1 = countLeadingZeros(1 - (int)sVar2);
		uVar6 = (ulonglong)((uint)uVar1 >> 5 & 0xff);
	}
	return uVar6;
}

void FUN_100b8a8c(undefined param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined uVar2;
	undefined uVar3;
	undefined uVar4;
	undefined uVar5;

	iVar1 = (int)(ZEXT48(register0x0000000c) - 0x60);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	uVar3 = 0xe8;
	uVar4 = 0xe4;
	uVar5 = 0xdc;
	GetDialogItem(param_1, param_2, 0xe8, 0xe4, 0xdc, param_6, param_7, param_8, *(undefined *)(iVar1 + 0xb),
	    *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	if (*(short *)(iVar1 + 0x48) == 4) {
		uVar2 = (undefined) * (undefined4 *)(iVar1 + 0x44);
		HiliteControl(uVar2, 10, uVar3, uVar4, uVar5, param_6, param_7, param_8, *(undefined *)(iVar1 + 0xb),
		    *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
		Delay(8, (char)(ZEXT48(register0x0000000c) - 0x60) + '8', uVar3, uVar4, uVar5, param_6, param_7, param_8,
		    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
		HiliteControl(uVar2, 0, uVar3, uVar4, uVar5, param_6, param_7, param_8, *(undefined *)(iVar1 + 0xb),
		    *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	}
	return;
}

void FUN_100b8b04(int param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	undefined4 time;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	time = MemFileGetTime((char)param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	*(undefined4 *)(param_1 + 0x94) = time;
	if (*(int *)(local_2c + -0x4a4c) == 0) {
		*(int *)(local_2c + -0x4a50) = param_1;
		*(int *)(local_2c + -0x4a4c) = param_1;
	} else {
		*(undefined4 *)(param_1 + 4) = *(undefined4 *)(local_2c + -0x4a50);
		**(int **)(local_2c + -0x4a50) = param_1;
		*(int *)(local_2c + -0x4a50) = param_1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_100b8b64(int **param_1)

{
	if ((param_1 == _DAT_100f4584) && (param_1 == _DAT_100f4580)) {
		_DAT_100f4580 = (int **)0x0;
		_DAT_100f4584 = (int **)0x0;
	} else {
		if (param_1 == _DAT_100f4584) {
			_DAT_100f4584 = (int **)*param_1;
			_DAT_100f4584[1] = (int *)0x0;
		} else {
			if (param_1 == _DAT_100f4580) {
				_DAT_100f4580 = (int **)param_1[1];
				*_DAT_100f4580 = (int *)0x0;
			} else {
				*(int **)param_1[1] = *param_1;
				*(int **)(*param_1 + 1) = param_1[1];
			}
		}
	}
	*param_1 = (int *)0x0;
	param_1[1] = (int *)0x0;
	return;
}

void *AllocateMemFile(ulong hsFile, MEMFILE *pMemFile, DWORD dwPos)

{
	int iVar1;
	int iVar2;
	longlong lVar3;
	undefined4 uVar4;
	undefined uVar5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	void *pvVar6;
	DWORD DStack00000020;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	int local_3c;

	uVar5 = (undefined)dwPos;
	pvVar6 = (void *)0x0;
	if (pMemFile != (MEMFILE *)0x0) {
		DStack00000020 = dwPos;
		lVar3 = MemAlloc(
		    0x9c, 0, uVar5, in_r6, in_r7, in_r8, in_r9, in_r10, (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
		pvVar6 = (void *)lVar3;
		if (lVar3 == 0) {
			app_fatal("Out of memory: AllocateMemFile");
		} else {
			ZeroMemory((char)lVar3, 0x9c, uVar5, in_r6, in_r7, in_r8, in_r9, in_r10, (char)in_stack_ffffffb8,
			    in_stack_ffffffbf, local_3c);
			if (hsFile != 0) {
				strcpy((char *)((int)pvVar6 + 8), (char *)hsFile);
			}
			uVar4 = MemAlloc((char)pMemFile, 0, uVar5, in_r6, in_r7, in_r8, in_r9, in_r10, (char)in_stack_ffffffb8,
			    in_stack_ffffffbf, local_3c);
			*(undefined4 *)((int)pvVar6 + 0x88) = uVar4;
			if (*(int *)((int)pvVar6 + 0x88) == 0) {
				app_fatal("Out of memory: AllocateMemFile");
			}
			*(uint *)((int)pvVar6 + 0x98) = *(uint *)((int)pvVar6 + 0x98) | 1;
			*(MEMFILE **)((int)pvVar6 + 0x90) = pMemFile;
			iVar1 = *(int *)(local_3c + -0x4a54);
			iVar2 = *(int *)(local_3c + -0x4a58);
			*(int *)(local_3c + -0x4a54) = iVar1 + *(int *)((int)pvVar6 + 0x90);
			*(int *)(local_3c + -0x4a58) = iVar2 + *(int *)((int)pvVar6 + 0x90);
			FUN_100b8b04((int)pvVar6, (char)iVar2, (char)iVar1, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffb8);
		}
	}
	return pvVar6;
}

void MemFreeDbg(int **param_1)

{
	int *piVar1;
	int iVar2;
	longlong lVar3;
	undefined in_r4;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	iVar2 = 0x100f8fd0;
	piVar1 = *param_1;
	if ((piVar1 != (int *)0x0) && (piVar1[0x23] == 0)) {
		if (piVar1[0x22] != 0) {
			iVar2 = local_2c;
			Allocation_FreePtr((char)piVar1[0x22], in_r4, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffcb,
			    in_stack_ffffffcf, local_2c);
			*(int *)(iVar2 + -0x4a58) = *(int *)(iVar2 + -0x4a58) - (*param_1)[0x24];
			local_2c = iVar2;
		}
		lVar3 = ZEXT48(*param_1) + 0x48;
		if ((lVar3 != 0) && (*(char *)lVar3 != '\0')) {
			iVar2 = local_2c;
			DeleteFile((char)lVar3, in_r4, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffcb,
			    in_stack_ffffffcf, local_2c);
			local_2c = iVar2;
		}
		*(int *)(iVar2 + -0x4a54) = *(int *)(iVar2 + -0x4a54) - (*param_1)[0x24];
		FUN_100b8b64((int **)*param_1);
		Allocation_FreePtr((char)*param_1, in_r4, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffcb,
		    in_stack_ffffffcf, local_2c);
		*param_1 = (int *)0x0;
	}
	return;
}

undefined8 FUN_100b8db4(longlong param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	char cVar2;
	char cVar3;
	int iVar4;
	ulonglong uVar5;
	undefined uVar6;
	undefined uVar7;
	longlong lVar8;
	undefined uVar9;
	undefined uVar10;
	undefined8 uVar11;

	uVar11 = 0;
	lVar8 = ZEXT48(register0x0000000c) - 0x150;
	puVar1 = (undefined *)lVar8;
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	iVar4 = (int)param_1;
	if ((param_1 != 0) && (param_1 != -0x48)) {
		if (*(int *)(iVar4 + 0x88) != 0) {
			cVar3 = (char)param_1;
			if (*(char *)(iVar4 + 0x48) == '\0') {
				uVar5 = GetTempPathFreeSpace(cVar3, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
				    puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
				if ((uVar5 & 0xffffffff) < 0x500001) {
					uVar5 = 0;
				} else {
					cVar2 = (char)lVar8;
					GetTempPath(0x80, cVar2 + -0x48, param_3, param_4, param_5, param_6, param_7, param_8, puVar1[0xb],
					    puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
					GetTempFileName(cVar2 + -0x48, (char)*(undefined4 *)(*(int *)(puVar1 + 0x14) + -0x5588), 0,
					    cVar2 + '8', param_5, param_6, param_7, param_8, puVar1[0xb], puVar1[0xf],
					    *(undefined4 *)(puVar1 + 0x14));
					strcpy(iVar4 + 0x48, puVar1 + 0x38, *puVar1);
					param_6 = 0;
					param_7 = 0;
					uVar5 = CreateFile(cVar3 + 'H', 0, 3, 0, 2, 0, 0, param_8, puVar1[0xb], puVar1[0xf],
					    *(undefined4 *)(puVar1 + 0x14));
				}
			} else {
				param_6 = 0;
				param_7 = 0;
				uVar5 = CreateFile(
				    cVar3 + 'H', 0, 3, 0, 3, 0, 0, param_8, puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
			}
			if ((uVar5 & 0xffffffff) == 0) {
				*(undefined *)(iVar4 + 0x48) = 0;
			} else {
				uVar6 = (undefined) * (undefined4 *)(iVar4 + 0x88);
				uVar7 = (undefined) * (undefined4 *)(iVar4 + 0x90);
				lVar8 = ZEXT48(register0x0000000c) - 0x18;
				uVar9 = (undefined)lVar8;
				uVar10 = 0;
				WriteFile(
				    (int)uVar5, *(undefined4 *)(iVar4 + 0x88), *(undefined4 *)(iVar4 + 0x90), (int)lVar8, 0, *puVar1);
				CloseHandle((int)uVar5, *puVar1);
				YieldToThinThread(0, uVar6, uVar7, uVar9, uVar10, param_6, param_7, param_8, puVar1[0xb], puVar1[0xf],
				    *(undefined4 *)(puVar1 + 0x14));
				if (*(int *)(iVar4 + 0x90) == *(int *)(puVar1 + 0x138)) {
					uVar11 = 1;
					*(uint *)(iVar4 + 0x98) = *(uint *)(iVar4 + 0x98) & 0xfffffffe;
				} else {
					DeleteFile(cVar3 + 'H', uVar6, uVar7, uVar9, uVar10, param_6, param_7, param_8, puVar1[0xb],
					    puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
					*(undefined *)(iVar4 + 0x48) = 0;
				}
			}
		}
	}
	if ((int)uVar11 == 0) {
		if ((param_1 != -8) && (*(char *)(iVar4 + 8) != '\0')) {
			uVar11 = 1;
		}
	}
	return uVar11;
}

void FUN_100b8f64(int param_1)

{
	if (param_1 == 0) {
		return;
	}
	*(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined LockMemFile(longlong param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined param_9)

{
	int **ppiVar1;
	int *piVar3;
	longlong lVar2;
	BOOL BVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	int local_3c;
	ulong local_18;
	int *local_14;

	if (param_1 != 0) {
		ppiVar1 = (int **)param_1;
		piVar3 = ppiVar1[0x23];
		ppiVar1[0x23] = (int *)((int)piVar3 + 1);
		if (piVar3 == (int *)0x0) {
			_DAT_100f4574 = _DAT_100f4574 + (int)ppiVar1[0x24];
			FUN_100b8b64(ppiVar1);
			if (ppiVar1[0x22] == (int *)0x0) {
				piVar3 = (int *)MemAlloc((char)ppiVar1[0x24], 0, param_3, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
				ppiVar1[0x22] = piVar3;
				if (ppiVar1[0x22] == (int *)0x0) {
					app_fatal(*(char **)(local_3c + -0x5590));
				} else {
					*(int *)(local_3c + -0x4a58) = *(int *)(local_3c + -0x4a58) + (int)ppiVar1[0x24];
					if ((param_1 == -0x48) || (*(char *)(ppiVar1 + 0x12) == '\0')) {
						if (((param_1 != -8) && (*(char *)(ppiVar1 + 2) != '\0')) && (BVar4 = WOpenFile((char *)(ppiVar1 + 2), &local_18, 0), BVar4 != 0)) {
							WReadFile(local_18, ppiVar1[0x22], (DWORD)ppiVar1[0x24]);
							WCloseFile(local_18);
						}
					} else {
						uVar9 = 0;
						uVar10 = 0;
						lVar2 = CreateFile((char)param_1 + 'H', 0, 1, 0, 3, 0, 0, param_8, in_stack_ffffffbb,
						    in_stack_ffffffbf, local_3c);
						if (lVar2 != 0) {
							uVar5 = SUB41(ppiVar1[0x22], 0);
							uVar6 = SUB41(ppiVar1[0x24], 0);
							uVar7 = (undefined)(ZEXT48(register0x0000000c) - 0x14);
							uVar8 = 0;
							ReadFile((HANDLE)lVar2, ppiVar1[0x22], (DWORD)ppiVar1[0x24],
							    (LPDWORD)(ZEXT48(register0x0000000c) - 0x14), (LPOVERLAPPED)0x0);
							CloseHandle((HANDLE)lVar2);
							YieldToThinThread(0, uVar5, uVar6, uVar7, uVar8, uVar9, uVar10, param_8, in_stack_ffffffbb,
							    in_stack_ffffffbf, local_3c);
							if (ppiVar1[0x24] != local_14) {
								app_fatal(*(char **)(local_3c + -0x558c));
							}
						}
					}
				}
			}
		}
		return (char)ppiVar1[0x22];
	}
	return 0;
}

void UnlockMemFile(char param_1)

{
	longlong lVar1;
	int iVar2;
	undefined in_r4;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined4 in_stack_ffffffc8;

	iVar2 = 0x100f8fd0;
	if (param_1 != '\0') {
		if (*(uint *)((int)param_1 + 0x8c) != 0) {
			lVar1 = (ulonglong) * (uint *)((int)param_1 + 0x8c) - 1;
			*(undefined4 *)((int)param_1 + 0x8c) = (int)lVar1;
			if (lVar1 == 0) {
				FUN_100b8b04((int)param_1, in_r4, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffc8);
				*(int *)(iVar2 + -0x4a5c) = *(int *)(iVar2 + -0x4a5c) - *(int *)((int)param_1 + 0x90);
			}
		}
	}
	return;
}

ulonglong LockMemFileIf(uint *param_1)

{
	ulonglong uVar1;
	char cVar2;
	undefined in_r4;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffcb;

	uVar1 = 0;
	if (param_1 != (uint *)0x0) {
		cVar2 = LockMemFile((ulonglong)*param_1, in_r4, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffcb);
		uVar1 = SEXT18(cVar2);
		if ((uVar1 & 0xffffffff) != 0) {
			uVar1 = uVar1 + (ulonglong)param_1[1];
		}
	}
	return uVar1;
}

void UnlockMemFileIf(int *param_1)

{
	if (param_1 != (int *)0x0) {
		UnlockMemFile((char)*param_1);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_100b9294(void)

{
	undefined4 *puVar1;
	int iVar2;

	iVar2 = 0;
	puVar1 = _DAT_100f4584;
	while (true) {
		if (iVar2 != 0) {
			return;
		}
		if (puVar1 == (undefined4 *)0x0)
			break;
		if (puVar1[0x22] != 0) {
			iVar2 = puVar1[0x25];
		}
		puVar1 = (undefined4 *)*puVar1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_100b92c8(int param_1,
    char param_2,
    char param_3,
    char param_4,
    char param_5,
    char param_6,
    char param_7,
    char param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	ulonglong uVar2;
	ulonglong uVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	int local_3c;

	lVar9 = (longlong)param_8;
	lVar8 = (longlong)param_7;
	lVar7 = (longlong)param_6;
	lVar6 = (longlong)param_5;
	lVar5 = (longlong)param_4;
	lVar4 = (longlong)param_3;
	uVar3 = SEXT18(param_2);
	lVar10 = 0;
	puVar1 = _DAT_100f4584;
	while (true) {
		if (param_1 <= (int)lVar10) {
			return lVar10;
		}
		if (puVar1 == (undefined4 *)0x0)
			break;
		if (puVar1[0x22] != 0) {
			if (((puVar1[0x26] & 1) != 0) && (uVar2 = FUN_100b8db4(ZEXT48(puVar1), (char)uVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, in_stack_ffffffb8), (uVar2 & 0xff) == 0)) {
				return lVar10;
			}
			if (puVar1[0x22] != 0) {
				Allocation_FreePtr((char)puVar1[0x22], (char)uVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7,
				    (char)lVar8, (char)lVar9, (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
				uVar3 = (ulonglong)(uint)puVar1[0x24];
				*(int *)(local_3c + -0x4a58) = *(int *)(local_3c + -0x4a58) - puVar1[0x24];
				puVar1[0x22] = 0;
				lVar10 = lVar10 + (ulonglong)(uint)puVar1[0x24];
				puVar1[0x26] = puVar1[0x26] | 2;
			}
		}
		puVar1 = (undefined4 *)*puVar1;
	}
	return lVar10;
}