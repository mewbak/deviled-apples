
void msgcmd_add_server_cmd(char *command)

{
	int iVar1;
	size_t sVar4;
	ulonglong uVar2;
	void *pvVar5;
	longlong lVar3;
	undefined uVar6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined4 in_stack_ffffffb8;
	undefined uVar7;
	undefined in_stack_ffffffbf;
	int local_3c;

	iVar1 = 0x100f8fd0;
	sVar4 = strlen(command);
	if ((longlong)(int)sVar4 != 0) {
		if (((longlong)(int)sVar4 + 1U & 0xffffffff) < 0x81) {
			uVar2 = FUN_100be958(*(uint **)(iVar1 + -0x54cc));
			pvVar5 = SMemAlloc(0x88, (char *)uVar2, -2, 8);
			iVar1 = local_3c;
			lVar3 = FUN_100bec88(0x88, (longlong)(int)pvVar5);
			lVar3._4_4_ = (int **)lVar3;
			if (lVar3 != 0) {
				lVar3._4_4_ = (int **)FUN_100bf468(lVar3._4_4_);
			}
			uVar7 = (undefined)in_stack_ffffffb8;
			uVar6 = 0;
			FUN_100bf338(*(int ***)(local_3c + -0x54d0), lVar3._4_4_, 2, (int **)0x0, in_r7, in_r8, in_r9, in_r10,
			    in_stack_ffffffb8);
			CopyMemory((char)lVar3._4_4_ + '\b', (char)command, (char)sVar4 + '\x01', uVar6, in_r7, in_r8, in_r9,
			    in_r10, uVar7, in_stack_ffffffbf, iVar1);
		}
	}
	return;
}

void FUN_100bf338(int **param_1,
    int **param_2,
    int param_3,
    int **param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

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
			FUN_100bec54(0x51, 0x65, (char)param_3, (char)param_4, param_5, uVar3, (char)ppiVar4, param_8,
			    in_stack_ffffffab, in_stack_ffffffaf, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
			    in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
		}
	}
	return;
}

void FUN_100bf468(undefined4 *param_1)

{
	*param_1 = 0;
	param_1[1] = 0;
	return;
}

void msgcmd_cmd_cleanup(void)

{
	ulonglong uVar1;
	ulonglong uVar2;
	undefined8 in_r5;
	undefined uVar3;
	undefined8 in_r6;
	undefined uVar4;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined4 in_stack_ffffffb8;

	while (true) {
		uVar4 = (undefined)in_r6;
		uVar3 = (undefined)in_r5;
		uVar2 = DeleteAll((int)&DAT_101b2044);
		if (uVar2 == 0)
			break;
		FUN_100bf508((int *)uVar2, -1, uVar3, uVar4, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffb8);
		uVar1 = FUN_100be958((uint *)&PTR_s_EXTERNMESSAGE_10121500);
		in_r5 = 0xfffffffffffffffe;
		in_r6 = 0;
		SMemFree((int *)uVar2, (char *)uVar1, -2, '\0');
	}
	return;
}

ulonglong DeleteAll(int param_1)

{
	if (0 < (int)*(uint *)(param_1 + 8)) {
		return (ulonglong) * (uint *)(param_1 + 8);
	}
	return 0;
}

int *FUN_100bf508(int *param_1,
    short param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

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
			__dl__FPv((char)param_1, (char)param_2, param_3, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
		}
	}
	return param_1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void msgcmd_send_chat(void)

{
	int *location;
	DWORD DVar2;
	ulonglong uVar1;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined4 in_stack_ffffffb8;
	int local_3c;

	location = piRam101b204c;
	if ((int)piRam101b204c < 1) {
		location = (int *)0x0;
	}
	if (location != (int *)0x0) {
		if (DAT_100f4638 == '\0') {
			_DAT_100f463c = 0;
			DAT_100f4638 = '\x01';
		}
		DVar2 = GetTickCount();
		if (1999 < DVar2 - *(int *)(local_3c + -0x4994)) {
			*(DWORD *)(local_3c + -0x4994) = DVar2;
			SNetSendServerChatCommand((char *)(location + 2));
			FUN_100bf6b0((int)&DAT_101b2044, (int)location);
			FUN_100bf508(location, -1, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffb8);
			uVar1 = FUN_100be958(*(uint **)(local_3c + -0x54cc));
			SMemFree(location, (char *)uVar1, -2, '\0');
		}
	}
	return;
}

ulonglong FUN_100bf6b0(int param_1, int param_2)

{
	if (param_2 == 0) {
		param_2 = param_1 + 4;
	}
	if ((int)*(uint *)(param_2 + 4) < 1) {
		return 0;
	}
	return (ulonglong) * (uint *)(param_2 + 4);
}

BOOL msgcmd_add_server_cmd_W(char *chat_message)

{
	byte bVar1;
	BOOL BVar2;
	size_t sVar3;
	undefined8 unaff_r27;
	uint uVar4;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	char *pcVar5;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	byte *pbVar6;
	char local_98[132];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	if (*chat_message == '/') {
		pcVar5 = local_98;
		uVar4 = 0;
		pbVar6 = (byte *)chat_message;
		while (sVar3 = strlen(chat_message), uVar4 < sVar3 + 1) {
			bVar1 = *pbVar6;
			uVar4 = uVar4 + 1;
			pbVar6 = pbVar6 + 1;
			*pcVar5 = (&DAT_100f64e8)[(uint)bVar1];
			pcVar5 = pcVar5 + 1;
		}
		msgcmd_add_server_cmd(local_98);
		BVar2 = 1;
	} else {
		BVar2 = 0;
	}
	return BVar2;
}