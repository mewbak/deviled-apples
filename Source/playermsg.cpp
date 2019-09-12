
void plrmsg_delay(BOOL delay)

{
	int *piVar1;
	DWORD DVar2;
	int local_2c;

	if (delay == 0) {
		DVar2 = GetTickCount();
		piVar1 = *(int **)(local_2c + -0x58dc);
		*(int *)(local_2c + -0x4bec) = *(int *)(local_2c + -0x4bec) + DVar2;
		*piVar1 = *piVar1 + *(int *)(local_2c + -0x4bec);
		piVar1[0x26] = piVar1[0x26] + *(int *)(local_2c + -0x4bec);
		piVar1[0x4c] = piVar1[0x4c] + *(int *)(local_2c + -0x4bec);
		piVar1[0x72] = piVar1[0x72] + *(int *)(local_2c + -0x4bec);
		piVar1[0x98] = piVar1[0x98] + *(int *)(local_2c + -0x4bec);
		piVar1[0xbe] = piVar1[0xbe] + *(int *)(local_2c + -0x4bec);
		piVar1[0xe4] = piVar1[0xe4] + *(int *)(local_2c + -0x4bec);
		piVar1[0x10a] = piVar1[0x10a] + *(int *)(local_2c + -0x4bec);
	} else {
		DVar2 = GetTickCount();
		*(int *)(local_2c + -0x4bec) = -DVar2;
	}
	return;
}

char *ErrorPlrMsg(char *pszMsg)

{
	int iVar1;
	DWORD DVar2;
	char *pcVar3;

	iVar1 = (uint)DAT_100f43e8 * 0x98;
	DAT_100f43e8 = DAT_100f43e8 + 1 & 7;
	*(undefined *)(iVar1 + 0x1019c674) = 4;
	DVar2 = GetTickCount();
	*(DWORD *)(&DAT_1019c670 + iVar1) = DVar2;
	pcVar3 = strncpy((char *)(iVar1 + 0x1019c675), pszMsg, 0x90);
	*(undefined *)(iVar1 + 0x1019c704) = 0;
	return pcVar3;
}

void EventPlrMsg(undefined4 param_1,
    undefined4 param_2,
    undefined4 param_3,
    undefined4 param_4,
    undefined4 param_5,
    undefined4 param_6,
    undefined4 param_7,
    undefined4 param_8,
    undefined4 param_9,
    undefined param_10,
    undefined4 param_11,
    undefined4 param_12,
    undefined4 param_13,
    undefined4 param_14,
    undefined4 param_15,
    undefined4 param_16,
    undefined4 param_17,
    undefined4 param_18)

{
	undefined *puVar1;
	int iVar2;
	DWORD DVar3;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;

	uVar8 = (undefined)param_8;
	uVar7 = (undefined)param_7;
	uVar6 = (undefined)param_6;
	uVar5 = (undefined)param_5;
	puVar1 = (undefined *)(ZEXT48(register0x0000000c) - 0x40);
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	*(undefined4 *)(puVar1 + 0x5c) = param_2;
	*(undefined4 *)(puVar1 + 0x60) = param_3;
	*(undefined4 *)(puVar1 + 100) = param_4;
	uVar4 = 0x70;
	*(undefined4 *)(puVar1 + 0x68) = param_5;
	*(undefined4 *)(puVar1 + 0x6c) = param_6;
	*(undefined4 *)(puVar1 + 0x70) = param_7;
	*(undefined4 *)(puVar1 + 0x74) = param_8;
	*(undefined4 *)(puVar1 + 0x58) = param_1;
	iVar2 = (uint)DAT_100f43e8 * 0x98;
	DAT_100f43e8 = DAT_100f43e8 + 1 & 7;
	*(undefined *)(iVar2 + 0x1019c674) = 4;
	DVar3 = GetTickCount(*puVar1);
	*(DWORD *)(&DAT_1019c670 + iVar2) = DVar3;
	FUN_100d58d8(iVar2 + 0x1019c675, (char)*(undefined4 *)(puVar1 + 0x58),
	    (char)(ZEXT48(register0x0000000c) - 0x40) + '\\', uVar4, uVar5, uVar6, uVar7, uVar8,
	    *(undefined4 *)(puVar1 + 8));
	return;
}

void SendPlrMsg(int pnum, char *pszStr)

{
	int iVar1;
	DWORD DVar2;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	int local_3c;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	iVar1 = (uint)DAT_100f43e8 * 0x98;
	DAT_100f43e8 = DAT_100f43e8 + 1 & 7;
	*(undefined *)(iVar1 + 0x1019c674) = (char)pnum;
	DVar2 = GetTickCount();
	*(DWORD *)(&DAT_1019c670 + iVar1) = DVar2;
	wsprintf(iVar1 + 0x1019c675, *(undefined4 *)(local_3c + -0x58e0), pnum * 0x55ec + 0x10186ffc,
	    (int)*(char *)((int)plr + pnum * 0x55ec + 0x1b4), pszStr, in_r8, in_r9, in_r10, in_stack_ffffffb8,
	    in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
	    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ClearPlrMsg(void)

{
	DWORD DVar1;

	DVar1 = GetTickCount();
	if (10000 < (int)(DVar1 - _DAT_1019c670)) {
		uRam1019c675 = 0;
	}
	if (10000 < (int)(DVar1 - iRam1019c708)) {
		uRam1019c70d = 0;
	}
	if (10000 < (int)(DVar1 - iRam1019c7a0)) {
		uRam1019c7a5 = 0;
	}
	if (10000 < (int)(DVar1 - iRam1019c838)) {
		uRam1019c83d = 0;
	}
	if (10000 < (int)(DVar1 - iRam1019c8d0)) {
		uRam1019c8d5 = 0;
	}
	if (10000 < (int)(DVar1 - iRam1019c968)) {
		uRam1019c96d = 0;
	}
	if (10000 < (int)(DVar1 - iRam1019ca00)) {
		uRam1019ca05 = 0;
	}
	if (10000 < (int)(DVar1 - iRam1019ca98)) {
		uRam1019ca9d = 0;
	}
	return;
}

void InitPlrMsg(void)

{
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	ZeroMemory(0x70, 0xc0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	*(undefined *)(local_2c + -0x4be8) = 0;
	return;
}

void PrintPlrMsg(DWORD x, DWORD y, DWORD width, char *str, BYTE col)

{
	byte bVar1;
	ulonglong uVar2;
	byte *pbVar3;
	longlong lVar4;
	uint *puVar5;
	byte *pbVar6;
	byte *pbVar7;
	int iVar8;

	iVar8 = 0;
	puVar5 = (uint *)(&DAT_1019ed80 + y * 4);
	do {
		if (*str == 0) {
			return;
		}
		lVar4 = (longlong)(int)x + (ulonglong)*puVar5;
		uVar2 = 0;
		pbVar3 = (byte *)str;
		pbVar7 = (byte *)str;
		do {
			pbVar6 = pbVar7;
			bVar1 = *pbVar3;
			pbVar7 = pbVar3;
			if (bVar1 == 0)
				break;
			pbVar3 = pbVar3 + 1;
			uVar2 = (ulonglong)(byte)(
			            &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]]]
			    + uVar2 + 1;
			pbVar7 = pbVar3;
		} while (((&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]] == 0) || (pbVar7 = pbVar6, (uVar2 & 0xffffffff) < ((longlong)(int)width & 0xffffffffU)));
		while (str < pbVar7) {
			bVar1 = *str;
			str = (char *)((byte *)str + 1);
			bVar1 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]];
			if (bVar1 != 0) {
				CPrintString((int)lVar4, (uint)bVar1, col);
			}
			lVar4 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + lVar4 + 1;
		}
		iVar8 = iVar8 + 1;
		puVar5 = puVar5 + 10;
		if (iVar8 == 3) {
			return;
		}
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void DrawPlrMsg(void)

{
	bool bVar1;
	int iVar2;
	undefined *puVar3;
	DWORD width;
	DWORD y;
	DWORD x;

	x = 0x4a;
	y = 0xe6;
	width = 0x26c;
	if ((_DAT_101282b8 == 0) && (_DAT_1019cbec == 0)) {
		if ((_DAT_1013c970 != 0) || (_DAT_10128158 != 0)) {
			width = 300;
		}
	} else {
		if (_DAT_1013c970 != 0) {
			return;
		}
		if (_DAT_10128158 != 0) {
			return;
		}
		x = 0x18a;
		width = 300;
	}
	puVar3 = &DAT_1019c670;
	iVar2 = 7;
	do {
		if (puVar3[5] != '\0') {
			PrintPlrMsg(x, y, width, puVar3 + 5, (&DAT_1010eca4)[(uint)(byte)puVar3[4]]);
		}
		bVar1 = iVar2 != 0;
		puVar3 = puVar3 + 0x98;
		y = y + 0x23;
		iVar2 = iVar2 + -1;
	} while (bVar1);
	return;
}