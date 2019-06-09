
void plrmsg_delay(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int *piVar1;
	int iVar2;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	if (param_1 == 0) {
		iVar2 = GetTickCount((char)param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
		piVar1 = *(int **)(local_2c + -0x58dc);
		*(int *)(local_2c + -0x4bec) = *(int *)(local_2c + -0x4bec) + iVar2;
		*piVar1 = *piVar1 + *(int *)(local_2c + -0x4bec);
		piVar1[0x26] = piVar1[0x26] + *(int *)(local_2c + -0x4bec);
		piVar1[0x4c] = piVar1[0x4c] + *(int *)(local_2c + -0x4bec);
		piVar1[0x72] = piVar1[0x72] + *(int *)(local_2c + -0x4bec);
		piVar1[0x98] = piVar1[0x98] + *(int *)(local_2c + -0x4bec);
		piVar1[0xbe] = piVar1[0xbe] + *(int *)(local_2c + -0x4bec);
		piVar1[0xe4] = piVar1[0xe4] + *(int *)(local_2c + -0x4bec);
		piVar1[0x10a] = piVar1[0x10a] + *(int *)(local_2c + -0x4bec);
	} else {
		iVar2 = GetTickCount((char)param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
		*(int *)(local_2c + -0x4bec) = -iVar2;
	}
	return;
}

void ErrorPlrMsg(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	byte bVar2;
	int iVar3;
	undefined4 uVar4;
	ulonglong uVar5;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	iVar3 = _DAT_100f36f4;
	uVar5 = (ulonglong)DAT_100f43e8;
	puVar1 = (undefined4 *)(_DAT_100f36f4 + (int)(uVar5 * 0x98));
	bVar2 = DAT_100f43e8 + 1 & 7;
	DAT_100f43e8 = bVar2;
	*(undefined *)(puVar1 + 1) = 4;
	uVar4 = GetTickCount(bVar2, (char)(uVar5 * 0x98), (char)iVar3, param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	*puVar1 = uVar4;
	strncpy((int)puVar1 + 5, param_1, 0x90);
	*(undefined *)(puVar1 + 0x25) = 0;
	return;
}

void EventPlrMsg(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
    undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9, undefined param_10, undefined4 param_11, undefined4 param_12,
    undefined4 param_13, undefined4 param_14, undefined4 param_15, undefined4 param_16,
    undefined4 param_17, undefined4 param_18)

{
	int iVar1;
	undefined4 *puVar2;
	byte bVar3;
	int iVar4;
	undefined4 uVar5;
	ulonglong uVar6;
	byte bVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;

	uVar12 = (undefined)param_8;
	uVar11 = (undefined)param_7;
	uVar10 = (undefined)param_6;
	uVar9 = (undefined)param_5;
	iVar1 = (int)(ZEXT48(register0x0000000c) - 0x40);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	*(undefined4 *)(iVar1 + 0x5c) = param_2;
	*(undefined4 *)(iVar1 + 0x60) = param_3;
	*(undefined4 *)(iVar1 + 100) = param_4;
	iVar4 = _DAT_100f36f4;
	uVar8 = (undefined)_DAT_100f36f4;
	*(undefined4 *)(iVar1 + 0x68) = param_5;
	*(undefined4 *)(iVar1 + 0x6c) = param_6;
	*(undefined4 *)(iVar1 + 0x70) = param_7;
	*(undefined4 *)(iVar1 + 0x74) = param_8;
	uVar6 = (ulonglong)DAT_100f43e8;
	*(undefined4 *)(iVar1 + 0x58) = param_1;
	bVar7 = DAT_100f43e8 + 1;
	puVar2 = (undefined4 *)(iVar4 + (int)(uVar6 * 0x98));
	bVar3 = bVar7 & 7;
	DAT_100f43e8 = bVar3;
	*(undefined *)(puVar2 + 1) = 4;
	uVar5 = GetTickCount(bVar3, (char)(uVar6 * 0x98), bVar7, uVar8, uVar9, uVar10, uVar11, uVar12,
	    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf),
	    *(undefined4 *)(iVar1 + 0x14));
	*puVar2 = uVar5;
	wvsprintf((int)puVar2 + 5, (char)*(undefined4 *)(iVar1 + 0x58),
	    (char)(ZEXT48(register0x0000000c) - 0x40) + '\\', uVar8, uVar9, uVar10, uVar11, uVar12,
	    *(undefined4 *)(iVar1 + 8));
	return;
}

void SendPlrMsg(undefined8 uParm1, undefined8 uParm2, undefined8 uParm3, undefined8 uParm4,
    undefined param_5, undefined4 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	undefined4 *puVar1;
	int iVar2;
	undefined *puVar3;
	byte bVar4;
	undefined4 uVar5;
	ulonglong uVar6;
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

	bVar4 = DAT_100f43e8;
	iVar2 = _DAT_100f36f4;
	puVar3 = PTR_DAT_100f1828;
	uVar6 = (ulonglong)DAT_100f43e8;
	puVar1 = (undefined4 *)(_DAT_100f36f4 + (int)(uVar6 * 0x98));
	DAT_100f43e8 = DAT_100f43e8 + 1 & 7;
	*(char *)(puVar1 + 1) = (char)uParm1;
	uVar5 = GetTickCount((char)(uVar6 * 0x98), (char)uParm2, bVar4, (char)iVar2, param_5, (char)uParm6,
	    (char)uParm7, (char)uParm8, (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
	iVar2 = (int)uParm1 * 0x55ec;
	*puVar1 = uVar5;
	sprintf((int)puVar1 + 5, *(undefined4 *)(local_3c + -0x58e0), puVar3 + iVar2 + 0x13c,
	    (int)(char)puVar3[iVar2 + 0x1b4], (int)uParm2, uParm6, uParm7, uParm8, in_stack_ffffffb8,
	    in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
	    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	return;
}

void ClearPlrMsg(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int *piVar1;
	int iVar2;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	piVar1 = _DAT_100f36f4;
	iVar2 = GetTickCount(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	if (10000 < iVar2 - *piVar1) {
		*(undefined *)((int)piVar1 + 5) = 0;
	}
	if (10000 < iVar2 - piVar1[0x26]) {
		*(undefined *)((int)piVar1 + 0x9d) = 0;
	}
	if (10000 < iVar2 - piVar1[0x4c]) {
		*(undefined *)((int)piVar1 + 0x135) = 0;
	}
	if (10000 < iVar2 - piVar1[0x72]) {
		*(undefined *)((int)piVar1 + 0x1cd) = 0;
	}
	if (10000 < iVar2 - piVar1[0x98]) {
		*(undefined *)((int)piVar1 + 0x265) = 0;
	}
	if (10000 < iVar2 - piVar1[0xbe]) {
		*(undefined *)((int)piVar1 + 0x2fd) = 0;
	}
	if (10000 < iVar2 - piVar1[0xe4]) {
		*(undefined *)((int)piVar1 + 0x395) = 0;
	}
	if (10000 < iVar2 - piVar1[0x10a]) {
		*(undefined *)((int)piVar1 + 0x42d) = 0;
	}
	return;
}

void InitPlrMsg(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	memset((char)_DAT_100f36f4, 0xc0, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	*(undefined *)(local_2c + -0x4be8) = 0;
	return;
}

void PrintPlrMsg(longlong param_1, int param_2, ulonglong param_3, ulonglong param_4,
    undefined8 param_5, undefined8 param_6, int param_7, int param_8, undefined4 param_9)

{
	byte bVar1;
	ulonglong uVar2;
	ulonglong uVar3;
	undefined8 uVar4;
	ulonglong uVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	ulonglong uVar10;
	byte *pbVar11;
	ulonglong uVar12;
	ulonglong uVar13;
	int iVar14;
	undefined4 in_stack_ffffff98;

	lVar7 = (longlong)param_8;
	lVar6 = (longlong)param_7;
	uVar5 = ZEXT48(PTR_DAT_100f1938);
	iVar14 = 0;
	lVar9 = uVar5 + (ulonglong)(uint)(param_2 << 2);
	uVar4 = param_5;
	uVar10 = param_4;
	do {
		if (*(char *)uVar10 == '\0') {
			return;
		}
		lVar8 = param_1 + (ulonglong) * (uint *)lVar9;
		uVar2 = 0;
		uVar3 = uVar10;
		uVar13 = uVar10;
		do {
			uVar12 = uVar13;
			pbVar11 = (byte *)uVar3;
			uVar13 = uVar3;
			if (*pbVar11 == 0)
				break;
			uVar3 = uVar3 + 1;
			uVar2 = (ulonglong)(byte)(&DAT_100f6230)
			            [(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar11]]]
			    + uVar2 + 1;
			uVar13 = uVar3;
		} while (((&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar11]] == 0) || (uVar13 = uVar12, (uVar2 & 0xffffffff) < (param_3 & 0xffffffff)));
		while (pbVar11 = (byte *)uVar10, (uVar10 & 0xffffffff) < (uVar13 & 0xffffffff)) {
			uVar10 = uVar10 + 1;
			bVar1 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar11]];
			if (bVar1 != 0) {
				CPrintString(lVar8, (ulonglong)bVar1, param_5, param_4, uVar4, (int)uVar5, (int)lVar6, (int)lVar7,
				    in_stack_ffffff98);
			}
			lVar8 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + lVar8 + 1;
		}
		iVar14 = iVar14 + 1;
		lVar9 = lVar9 + 0x28;
		if (iVar14 == 3) {
			return;
		}
	} while (true);
}

void DrawPlrMsg(void)

{
	bool bVar1;
	int iVar2;
	undefined8 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int iVar3;
	ulonglong uVar4;
	ulonglong uVar5;
	int iVar6;
	longlong lVar7;
	undefined4 in_stack_ffffffb8;

	iVar2 = _DAT_100f36ec;
	lVar7 = 0x4a;
	iVar6 = 0xe6;
	uVar5 = 0x26c;
	if ((*(int *)PTR_DAT_100f180c == 0) && (*(int *)PTR_DAT_100f1808 == 0)) {
		if ((*(int *)PTR_DAT_100f1814 != 0) || (*(int *)PTR_DAT_100f1810 != 0)) {
			uVar5 = 300;
		}
	} else {
		if (*(int *)PTR_DAT_100f1814 != 0) {
			return;
		}
		if (*(int *)PTR_DAT_100f1810 != 0) {
			return;
		}
		lVar7 = 0x18a;
		uVar5 = 300;
	}
	uVar4 = (ulonglong)_DAT_100f36f4;
	iVar3 = 7;
	do {
		if (*(char *)((int)uVar4 + 5) != '\0') {
			PrintPlrMsg(lVar7, iVar6, uVar5, uVar4 + 5,
			    (ulonglong) * (byte *)(iVar2 + (uint) * (byte *)((int)uVar4 + 4)), in_r8, in_r9, in_r10,
			    in_stack_ffffffb8);
		}
		bVar1 = iVar3 != 0;
		uVar4 = uVar4 + 0x98;
		iVar6 = iVar6 + 0x23;
		iVar3 = iVar3 + -1;
	} while (bVar1);
	return;
}
