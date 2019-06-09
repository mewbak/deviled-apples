
void WGetFileArchive(int param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int iVar1;
	uint *puVar2;
	undefined7 uVar3;
	undefined uVar4;
	undefined7 uVar5;
	undefined uVar6;
	undefined7 uVar7;
	undefined uVar8;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	int local_3c;
	uint local_18;

	uVar7 = (undefined7)((ulonglong)param_5 >> 8);
	uVar8 = (undefined)param_5;
	uVar5 = (undefined7)((ulonglong)param_4 >> 8);
	uVar6 = (undefined)param_4;
	uVar3 = (undefined7)((ulonglong)param_3 >> 8);
	uVar4 = (undefined)param_3;
	puVar2 = (uint *)param_2;
	if (4 < *puVar2) {
		FileErrDlg((undefined *)param_3, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
	}
	if (param_1 != 0) {
		param_2 = ZEXT48(register0x0000000c) - 0x18;
		iVar1 = SFileGetFileArchive((char)param_1, (char)param_2, uVar4, uVar6, uVar8, (char)param_6,
		    (char)param_7, (char)param_8, (char)in_stack_ffffffb8,
		    in_stack_ffffffbf, local_3c);
		if ((iVar1 != 0) && (param_2 = (ulonglong)local_18, param_2 != (ulonglong) * *(uint **)(local_3c + -0x7204))) {
			Sleep(0x14, (char)local_18, uVar4, uVar6, uVar8, (char)param_6, (char)param_7, (char)param_8,
			    (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
			*puVar2 = *puVar2 + 1;
			return;
		}
	}
	iVar1 = InsertCDDlg();
	if (iVar1 == 0) {
		FileErrDlg((undefined *)param_3, param_2, CONCAT71(uVar3, uVar4), CONCAT71(uVar5, uVar6),
		    CONCAT71(uVar7, uVar8), param_6, param_7, param_8, in_stack_ffffffb8);
	}
	return;
}

void WCloseFile(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	SFileCloseFile(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
	    in_stack_ffffffcf, local_2c);
	return;
}

void WGetFileSize(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	ulonglong uVar1;
	undefined7 uVar2;
	undefined uVar3;
	undefined7 uVar4;
	undefined uVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	uVar4 = (undefined7)((ulonglong)param_5 >> 8);
	uVar5 = (undefined)param_5;
	uVar2 = (undefined7)((ulonglong)param_4 >> 8);
	uVar3 = (undefined)param_4;
	lVar8 = (longlong)param_8;
	lVar7 = (longlong)param_7;
	lVar6 = (longlong)param_6;
	while (true) {
		uVar1 = SFileGetFileSize((char)param_1, (undefined)param_2, (char)param_3, uVar3, uVar5, (char)lVar6,
		    (char)lVar7, (char)lVar8, (char)in_stack_ffffffb8, in_stack_ffffffbf,
		    local_3c);
		if ((uVar1 & 0xffffffff) != 0)
			break;
		param_3 = 0;
		WGetFileArchive(param_1, ZEXT48(register0x0000000c) - 0x18, 0, CONCAT71(uVar2, uVar3),
		    CONCAT71(uVar4, uVar5), (int)lVar6, (int)lVar7, (int)lVar8, in_stack_ffffffb8);
	}
	return;
}

undefined8
WOpenFile(longlong param_1, undefined8 param_2, int param_3, undefined8 param_4, undefined8 param_5,
    int param_6, int param_7, int param_8, undefined4 param_9)

{
	int iVar2;
	ulonglong uVar1;
	undefined uVar3;
	longlong lVar4;
	undefined uVar5;
	undefined7 uVar6;
	undefined uVar7;
	undefined7 uVar8;
	undefined uVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	uVar8 = (undefined7)((ulonglong)param_5 >> 8);
	uVar9 = (undefined)param_5;
	uVar6 = (undefined7)((ulonglong)param_4 >> 8);
	uVar7 = (undefined)param_4;
	lVar12 = (longlong)param_8;
	lVar11 = (longlong)param_7;
	lVar10 = (longlong)param_6;
	lVar4 = (longlong)param_3;
	while (true) {
		uVar5 = (undefined)lVar4;
		uVar3 = (undefined)param_2;
		iVar2 = SFileOpenFile((char)param_1, (undefined)param_2, uVar5, uVar7, uVar9, (char)lVar10,
		    (char)lVar11, (char)lVar12, (char)in_stack_ffffffb8, in_stack_ffffffbf,
		    local_3c);
		if (iVar2 != 0) {
			return 1;
		}
		if ((param_3 != 0) && (uVar1 = SErrGetLastError(0, uVar3, uVar5, uVar7, uVar9, (char)lVar10, (char)lVar11, (char)lVar12, (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c), (uVar1 & 0xffffffff) == 2))
			break;
		lVar4 = param_1;
		WGetFileArchive(0, ZEXT48(register0x0000000c) - 0x18, param_1, CONCAT71(uVar6, uVar7),
		    CONCAT71(uVar8, uVar9), (int)lVar10, (int)lVar11, (int)lVar12, in_stack_ffffffb8);
	}
	return 0;
}

void WReadFile(undefined8 uParm1, undefined param_2, undefined param_3, undefined8 uParm4,
    undefined8 uParm5, undefined4 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	undefined8 uVar1;
	int iVar2;
	longlong lVar3;
	undefined8 uVar4;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	uVar1._4_4_ = (int)uParm1;
	uVar1 = WSetFilePointer(uVar1._4_4_, 0, 0, 1, uParm5, uParm6, uParm7, uParm8, in_stack_ffffffb8);
	while (true) {
		lVar3 = ZEXT48(register0x0000000c) - 0x14;
		uVar4 = 0;
		iVar2 = SFileReadFile((char)uParm1, param_2, param_3, (char)lVar3, 0, (char)uParm6, (char)uParm7,
		    (char)uParm8, (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
		if (iVar2 != 0)
			break;
		WGetFileArchive(uVar1._4_4_, ZEXT48(register0x0000000c) - 0x18, 0, lVar3, uVar4, uParm6, uParm7, uParm8,
		    in_stack_ffffffb8);
		WSetFilePointer(uVar1._4_4_, uVar1, 0, 0, uVar4, uParm6, uParm7, uParm8, in_stack_ffffffb8);
	}
	return;
}

void WSetFilePointer(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	longlong lVar1;
	undefined8 uVar2;
	undefined7 uVar3;
	undefined uVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	uVar3 = (undefined7)((ulonglong)param_5 >> 8);
	uVar4 = (undefined)param_5;
	lVar7 = (longlong)param_8;
	lVar6 = (longlong)param_7;
	lVar5 = (longlong)param_6;
	while (true) {
		uVar2 = param_4;
		lVar1 = SFileSetFilePointer((char)param_1, (undefined)param_2, (undefined)param_3, (char)param_4,
		    uVar4, (char)lVar5, (char)lVar6, (char)lVar7, (char)in_stack_ffffffb8,
		    in_stack_ffffffbf, local_3c);
		if ((lVar1 + 0x10000U & 0xffffffff) != 0xffff)
			break;
		WGetFileArchive(param_1, ZEXT48(register0x0000000c) - 0x18, 0, uVar2, CONCAT71(uVar3, uVar4), (int)lVar5,
		    (int)lVar6, (int)lVar7, in_stack_ffffffb8);
	}
	return;
}

void FillMemFile(uint *puParm1)

{
	ulonglong uVar1;
	undefined8 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;

	WSetFilePointer(puParm1[6], (ulonglong)puParm1[1], 0, 0, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffc8);
	uVar1 = (ulonglong)*puParm1 - (ulonglong)puParm1[1];
	if ((ulonglong)puParm1[2] < (uVar1 & 0xffffffff)) {
		uVar1 = (ulonglong)puParm1[2];
	}
	if ((uVar1 & 0xffffffff) != 0) {
		WReadFile((ulonglong)puParm1[6], (ulonglong)puParm1[5], uVar1);
	}
	puParm1[4] = (uint)uVar1;
	puParm1[3] = 0;
	return;
}

void AllocateMemFile(uint param_1, uint *param_2, ulonglong param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	uint uVar1;
	undefined7 uVar2;
	undefined uVar3;
	undefined7 uVar4;
	undefined uVar5;
	undefined7 uVar6;
	undefined uVar7;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	uVar6 = (undefined7)((ulonglong)param_5 >> 8);
	uVar7 = (undefined)param_5;
	uVar4 = (undefined7)((ulonglong)param_4 >> 8);
	uVar5 = (undefined)param_4;
	uVar2 = (undefined7)(param_3 >> 8);
	uVar3 = (undefined)param_3;
	memset((char)param_2, 0x1c, uVar3, uVar5, uVar7, (char)param_6, (char)param_7, (char)param_8,
	    (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
	uVar1 = WGetFileSize(param_1, 0, CONCAT71(uVar2, uVar3), CONCAT71(uVar4, uVar5), CONCAT71(uVar6, uVar7),
	    param_6, param_7, param_8, in_stack_ffffffb8);
	*param_2 = uVar1;
	if ((param_3 & 0xffffffff) < 0x1001) {
		uVar1 = 0x1000;
	} else {
		uVar1 = (uint)param_3;
	}
	param_2[2] = uVar1;
	uVar1 = *param_2;
	if (param_2[2] < uVar1) {
		uVar1 = param_2[2];
	}
	param_2[2] = uVar1;
	uVar1 = DiabloAllocPtr((ulonglong)param_2[2]);
	param_2[5] = uVar1;
	param_2[6] = param_1;
	return;
}

void FreeMemFile(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined4 in_stack_ffffffc8;

	uVar1 = *(uint *)(param_1 + 0x14);
	*(undefined4 *)(param_1 + 0x14) = 0;
	mem_free_dbg((ulonglong)uVar1, (char)uVar1, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	return;
}

undefined8
ReadMemFile(int param_1, undefined8 param_2, uint param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	ulonglong uVar7;
	ulonglong uVar8;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	lVar6 = (longlong)param_8;
	lVar5 = (longlong)param_7;
	lVar4 = (longlong)param_6;
	lVar3 = (longlong)param_5;
	lVar2 = (longlong)param_4;
	uVar7 = SEXT48((int)param_3);
	while (true) {
		if ((uVar7 & 0xffffffff) == 0) {
			return 1;
		}
		if (*(int *)(param_1 + 0x10) == 0) {
			FillMemFile(param_1);
		}
		uVar8 = (ulonglong) * (uint *)(param_1 + 0x10);
		if ((uVar7 & 0xffffffff) < (ulonglong) * (uint *)(param_1 + 0x10)) {
			uVar8 = uVar7;
		}
		if ((uVar8 & 0xffffffff) == 0)
			break;
		memcpy((undefined)param_2,
		    (char)*(undefined4 *)(param_1 + 0x14) + (char)*(undefined4 *)(param_1 + 0xc),
		    (char)uVar8, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6,
		    in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
		uVar7 = uVar7 - uVar8;
		iVar1 = (int)uVar8;
		*(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar1;
		*(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar1;
		*(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - iVar1;
	}
	return 0;
}

ulonglong SeekMemFile(int param_1, uint param_2)

{
	if (param_2 < *(uint *)(param_1 + 0x10)) {
		*(int *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) - param_2;
		*(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2;
	} else {
		*(undefined4 *)(param_1 + 0x10) = 0;
	}
	*(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_2;
	return (ulonglong) * (uint *)(param_1 + 4);
}

ulonglong ReadWaveSection(int param_1, int param_2, uint *param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	undefined8 uVar1;
	ulonglong uVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	undefined4 in_stack_ffffffb8;
	int local_18;
	uint local_14;

	lVar7 = (longlong)param_8;
	lVar6 = (longlong)param_7;
	lVar5 = (longlong)param_6;
	lVar4 = (longlong)param_5;
	lVar3 = (longlong)param_4;
	while (true) {
		uVar1 = ReadMemFile(param_1, ZEXT48(register0x0000000c) - 0x18, 8, (char)lVar3, (char)lVar4,
		    (char)lVar5, (char)lVar6, (char)lVar7, in_stack_ffffffb8);
		if ((int)uVar1 == 0) {
			return 0;
		}
		local_14 = local_14 << 0x18 | (local_14 >> 8 & 0xff) << 0x10 | (local_14 >> 0x10 & 0xff) << 8 | local_14 >> 0x18;
		if (local_18 == param_2)
			break;
		uVar2 = SeekMemFile(param_1, local_14);
		if ((uVar2 + 0x10000 & 0xffffffff) == 0xffff) {
			return 0;
		}
	}
	*param_3 = local_14;
	uVar2 = SeekMemFile(param_1, 0);
	param_3[1] = (uint)uVar2;
	lVar3 = -(ulonglong)param_3[1] + -1;
	return (ulonglong)((int)lVar3 - ((uint)(lVar3 == 0) + (int)-(ulonglong)param_3[1] + -2) & 0xff);
}

ulonglong ReadWaveFile(int param_1, undefined2 *param_2, uint *param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined8 uVar1;
	ulonglong uVar2;
	undefined4 in_stack_ffffff88;
	undefined2 local_48;
	undefined2 local_46;
	uint local_44;
	uint local_40;
	undefined2 local_3c;
	undefined2 local_3a;
	int local_38;
	int local_30;
	uint local_24[9];

	uVar1 = ReadMemFile(param_1, ZEXT48(register0x0000000c) - 0x38, 0xc, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff88);
	if ((int)uVar1 == 0) {
		uVar2 = 0;
	} else {
		if ((local_38 == 0x52494646) && (local_30 == 0x57415645)) {
			uVar2 = ReadWaveSection(param_1, 0x666d7420, local_24, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffff88);
			if ((int)uVar2 == 0) {
				uVar2 = 0;
			} else {
				if (local_24[0] < 0x10) {
					uVar2 = 0;
				} else {
					uVar1 = ReadMemFile(param_1, ZEXT48(register0x0000000c) - 0x48, 0x10, param_4, param_5,
					    param_6, param_7, param_8, in_stack_ffffff88);
					if ((int)uVar1 == 0) {
						uVar2 = 0;
					} else {
						uVar2 = SeekMemFile(param_1, local_24[0] - 0x10);
						if ((uVar2 + 0x10000 & 0xffffffff) == 0xffff) {
							uVar2 = 0;
						} else {
							*param_2 = CONCAT11((undefined)local_48, local_48._0_1_);
							param_2[1] = CONCAT11((undefined)local_46, local_46._0_1_);
							*(uint *)(param_2 + 2) = local_44 << 0x18 | (local_44 >> 8 & 0xff) << 0x10 | (local_44 >> 0x10 & 0xff) << 8 | local_44 >> 0x18;
							*(uint *)(param_2 + 4) = local_40 << 0x18 | (local_40 >> 8 & 0xff) << 0x10 | (local_40 >> 0x10 & 0xff) << 8 | local_40 >> 0x18;
							param_2[6] = CONCAT11((undefined)local_3c, local_3c._0_1_);
							param_2[7] = CONCAT11((undefined)local_3a, local_3a._0_1_);
							param_2[8] = 0;
							if (param_3 == (uint *)0x0) {
								uVar2 = 1;
							} else {
								uVar2 = ReadWaveSection(param_1, 0x64617461, param_3, param_4, param_5, param_6, param_7,
								    param_8, in_stack_ffffff88);
							}
						}
					}
				}
			}
		} else {
			uVar2 = 0;
		}
	}
	return uVar2;
}

ulonglong LoadWaveFormat(uint param_1, undefined2 *param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	undefined uVar2;
	undefined uVar3;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined4 in_stack_ffffffa8;
	uint auStack40[10];

	uVar5 = (undefined)param_5;
	uVar4 = (undefined)param_4;
	uVar8 = (undefined)param_8;
	uVar7 = (undefined)param_7;
	uVar6 = (undefined)param_6;
	uVar2 = SUB41(param_2, 0);
	AllocateMemFile(param_1, auStack40, 0, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	uVar3 = 0;
	uVar1 = ReadWaveFile((int)auStack40, param_2, (uint *)0x0, uVar4, uVar5, uVar6, uVar7, uVar8,
	    in_stack_ffffffa8);
	FreeMemFile((int)auStack40, uVar2, uVar3, uVar4, uVar5, uVar6, uVar7, uVar8, in_stack_ffffffa8);
	return uVar1;
}

ulonglong LoadWaveFile(uint param_1, undefined2 *param_2, uint *param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	undefined uVar2;
	undefined uVar3;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined4 in_stack_ffffffa8;
	uint auStack40[5];
	uint local_14;

	uVar5 = (undefined)param_5;
	uVar4 = (undefined)param_4;
	uVar8 = (undefined)param_8;
	uVar7 = (undefined)param_7;
	uVar6 = (undefined)param_6;
	uVar3 = SUB41(param_3, 0);
	uVar2 = SUB41(param_2, 0);
	AllocateMemFile(param_1, auStack40, 0xffffffffffffffff, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	uVar1 = ReadWaveFile((int)auStack40, param_2, param_3, uVar4, uVar5, uVar6, uVar7, uVar8,
	    in_stack_ffffffa8);
	if ((int)uVar1 == 0) {
		FreeMemFile((int)auStack40, uVar2, uVar3, uVar4, uVar5, uVar6, uVar7, uVar8, in_stack_ffffffa8);
		uVar1 = 0;
	} else {
		uVar1 = (ulonglong)local_14;
	}
	return uVar1;
}
