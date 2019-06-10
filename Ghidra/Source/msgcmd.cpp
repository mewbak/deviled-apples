
ulonglong sgChat_Cmd_New(uint *param_1)

{
	return (ulonglong)*param_1;
}

undefined8 sgChat_Cmd_SNew(undefined8 param_1, undefined8 param_2)

{
	return param_2;
}

void msgcmd_add_server_cmd(uint param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	int iVar5;
	ulonglong uVar2;
	undefined8 uVar3;
	longlong lVar4;
	undefined uVar6;
	undefined4 in_stack_ffffffb8;
	undefined uVar7;
	undefined in_stack_ffffffbf;
	int local_3c;
	int iVar8;

	ppuVar1 = &toc;
	iVar5 = strlen(param_1);
	if ((longlong)iVar5 != 0) {
		if (((longlong)iVar5 + 1U & 0xffffffff) < 0x81) {
			uVar2 = FUN_100be958((uint *)ppuVar1[-0x1533]);
			uVar3 = SMemAlloc(0x88, (char)uVar2, 0xfe, 8, param_5, param_6, param_7, param_8,
			    (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
			iVar8 = local_3c;
			lVar4 = sgChat_Cmd_SNew(0x88, uVar3);
			lVar4._4_4_ = (int **)lVar4;
			if (lVar4 != 0) {
				lVar4._4_4_ = (int **)sgChat_Cmd_Insert(lVar4._4_4_);
			}
			uVar7 = (undefined)in_stack_ffffffb8;
			uVar6 = 0;
			sgChat_Cmd_Create(*(int ***)(local_3c + -0x54d0), lVar4._4_4_, 2, (int **)0x0, param_5, param_6, param_7,
			    param_8, in_stack_ffffffb8);
			memcpy((char)lVar4._4_4_ + '\b', (char)param_1, (char)iVar5 + '\x01', uVar6, param_5, param_6,
			    param_7, param_8, uVar7, in_stack_ffffffbf, iVar8);
		}
	}
	return;
}

void sgChat_Cmd_Create(int **param_1, int **param_2, int param_3, int **param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	int *piVar1;
	int *piVar2;
	undefined uVar3;
	int **ppiVar4;
	undefined in_stack_ffffffab;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	ppiVar4 = param_2;
	if (param_2 == (int **)0x0) {
		ppiVar4 = param_1 + 1;
	}
	piVar1 = *ppiVar4;
	uVar3 = SUB41(piVar1, 0);
	if ((piVar1 != (int *)0x0) && (piVar1 != (int *)0x0)) {
		piVar2 = ppiVar4[1];
		if ((int)piVar2 < 1) {
			piVar2 = (int *)~(uint)piVar2;
		} else {
			piVar2 = (int *)((int)((int)ppiVar4 - piVar1[1]) + (int)piVar2);
		}
		*(int **)piVar2 = piVar1;
		uVar3 = SUB41(ppiVar4[1], 0);
		param_5 = SUB41(*ppiVar4, 0);
		*(int **)(*ppiVar4 + 1) = ppiVar4[1];
		*ppiVar4 = (int *)0x0;
		ppiVar4[1] = (int *)0x0;
	}
	if (param_4 == (int **)0x0) {
		param_4 = param_1 + 1;
	} else {
		if (param_4 == (int **)0x0) {
			param_4 = param_1 + 1;
		}
	}
	if (param_3 == 2) {
		piVar1 = *param_4;
		*ppiVar4 = piVar1;
		ppiVar4[1] = (int *)piVar1[1];
		*(int ***)(piVar1 + 1) = param_2;
		*(int ***)param_4 = ppiVar4;
	} else {
		if ((param_3 < 2) && (0 < param_3)) {
			*(int ***)ppiVar4 = param_4;
			ppiVar4[1] = param_4[1];
			piVar1 = param_4[1];
			param_1 = (int **)*param_1;
			if ((int)piVar1 < 1) {
				param_1 = (int **)~(uint)piVar1;
			} else {
				if ((int)param_1 < 0) {
					param_1 = (int **)((int)param_4 - (*param_4)[1]);
				}
				param_1 = (int **)((int)param_1 + (int)piVar1);
			}
			*(int ***)param_1 = ppiVar4;
			*(int ***)(param_4 + 1) = param_2;
		} else {
			FUN_100bec54((char)_DAT_100f3afc, (char)_DAT_100f3af8, (char)param_3, (char)param_4, param_5, uVar3, (char)ppiVar4, param_8, in_stack_ffffffab, in_stack_ffffffaf, in_stack_ffffffb8,
			    in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8,
			    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
		}
	}
	return;
}

void sgChat_Cmd_Insert(undefined4 *param_1)

{
	*param_1 = 0;
	param_1[1] = 0;
	return;
}

void msgcmd_cmd_cleanup(undefined param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	uint *puVar2;
	ulonglong uVar3;
	ulonglong uVar4;
	longlong lVar5;
	undefined uVar6;
	longlong lVar7;
	undefined uVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	puVar2 = _DAT_100f3b04;
	iVar1 = _DAT_100f3b00;
	lVar12 = (longlong)param_8;
	lVar11 = (longlong)param_7;
	lVar10 = (longlong)param_6;
	lVar9 = (longlong)param_5;
	lVar7 = (longlong)param_4;
	lVar5 = (longlong)param_3;
	while (true) {
		uVar8 = (undefined)lVar7;
		uVar6 = (undefined)lVar5;
		uVar4 = sgChat_Cmd_Next(iVar1);
		if (uVar4 == 0)
			break;
		sgChat_Cmd_SDelete((int *)uVar4, -1, uVar6, uVar8, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12,
		    in_stack_ffffffb8);
		uVar3 = sgChat_Cmd_New(puVar2);
		lVar5 = -2;
		lVar7 = 0;
		SMemFree((char)uVar4, (char)uVar3, 0xfe, 0, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12,
		    (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
	}
	return;
}

ulonglong sgChat_Cmd_Next(int param_1)

{
	if (0 < (int)*(uint *)(param_1 + 8)) {
		return (ulonglong) * (uint *)(param_1 + 8);
	}
	return 0;
}

int *sgChat_Cmd_SDelete(int *param_1, short param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	int iVar1;
	uint uVar2;
	ulonglong uVar3;
	int *piVar4;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	uVar3 = SEXT48((int)param_1);
	if (uVar3 != 0) {
		if (uVar3 != 0) {
			iVar1 = *param_1;
			param_3 = (undefined)iVar1;
			if (iVar1 != 0) {
				uVar2 = param_1[1];
				if ((int)uVar2 < 1) {
					piVar4 = (int *)~uVar2;
				} else {
					piVar4 = (int *)((int)param_1 + (uVar2 - *(int *)(iVar1 + 4)));
				}
				*piVar4 = iVar1;
				param_3 = (undefined)param_1[1];
				*(int *)(*param_1 + 4) = param_1[1];
				*param_1 = 0;
				param_1[1] = 0;
			}
			if ((uVar3 & 0xffffffff) != 0) {
				iVar1 = *param_1;
				param_3 = (undefined)iVar1;
				if (iVar1 != 0) {
					uVar2 = param_1[1];
					if ((int)uVar2 < 1) {
						piVar4 = (int *)~uVar2;
					} else {
						piVar4 = (int *)((int)param_1 + (uVar2 - *(int *)(iVar1 + 4)));
					}
					*piVar4 = iVar1;
					param_3 = (undefined)param_1[1];
					*(int *)(*param_1 + 4) = param_1[1];
					*param_1 = 0;
					param_1[1] = 0;
				}
			}
		}
		if (0 < param_2) {
			__dl((char)param_1, (char)param_2, param_3, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
		}
	}
	return param_1;
}

void msgcmd_send_chat(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	ulonglong uVar2;
	longlong lVar3;
	ulonglong uVar4;
	undefined4 in_stack_ffffffb8;
	undefined uVar5;
	undefined in_stack_ffffffbf;
	int local_3c;
	int iVar6;

	iVar1 = _DAT_100f3b00;
	uVar2 = (ulonglong) * (uint *)(_DAT_100f3b00 + 8);
	if ((int)*(uint *)(_DAT_100f3b00 + 8) < 1) {
		uVar2 = 0;
	}
	if (uVar2 != 0) {
		if (DAT_100f4638 == '\0') {
			param_1 = 0;
			_DAT_100f463c = 0;
			DAT_100f4638 = '\x01';
		}
		lVar3 = GetTickCount(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
		if (1999 < (lVar3 - (ulonglong) * (uint *)(local_3c + -0x4994) & 0xffffffff)) {
			*(undefined4 *)(local_3c + -0x4994) = (int)lVar3;
			SNetSendServerChatCommand((char)uVar2 + '\b', param_2, param_3, param_4, param_5, param_6, param_7, param_8,
			    (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
			iVar6 = local_3c;
			sgChat_Cmd_Next(iVar1, (int)(int *)uVar2);
			uVar5 = (undefined)in_stack_ffffffb8;
			sgChat_Cmd_SDelete((int *)uVar2, -1, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
			uVar4 = sgChat_Cmd_New(*(uint **)(local_3c + -0x54cc));
			SMemFree((char)uVar2, (char)uVar4, 0xfe, 0, param_5, param_6, param_7, param_8, uVar5,
			    in_stack_ffffffbf, iVar6);
		}
	}
	return;
}

ulonglong sgChat_Cmd_Next(int param_1, int param_2)

{
	if (param_2 == 0) {
		param_2 = param_1 + 4;
	}
	if ((int)*(uint *)(param_2 + 4) < 1) {
		return 0;
	}
	return (ulonglong) * (uint *)(param_2 + 4);
}

undefined8
msgcmd_add_server_cmd_W(byte *param_1, char param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	byte bVar1;
	undefined8 uVar2;
	int iVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	undefined8 unaff_r27;
	uint uVar11;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined *puVar12;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	byte *pbVar13;
	undefined4 in_stack_ffffff38;
	undefined local_98[132];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	lVar10 = (longlong)param_8;
	lVar9 = (longlong)param_7;
	lVar8 = (longlong)param_6;
	lVar7 = (longlong)param_5;
	lVar6 = (longlong)param_4;
	lVar5 = (longlong)param_3;
	lVar4 = (longlong)param_2;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	if (*param_1 == 0x2f) {
		puVar12 = local_98;
		uVar11 = 0;
		pbVar13 = param_1;
		while (iVar3 = strlen((uint)param_1), uVar11 < iVar3 + 1U) {
			bVar1 = *pbVar13;
			uVar11 = uVar11 + 1;
			pbVar13 = pbVar13 + 1;
			*puVar12 = (&DAT_100f64e8)[(uint)bVar1];
			puVar12 = puVar12 + 1;
		}
		msgcmd_add_server_cmd((uint)local_98, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8,
		    (char)lVar9, (char)lVar10, in_stack_ffffff38);
		uVar2 = 1;
	} else {
		uVar2 = 0;
	}
	return uVar2;
}
