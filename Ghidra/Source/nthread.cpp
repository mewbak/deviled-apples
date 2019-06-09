
void nthread_terminate_game(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	ulonglong uVar2;
	longlong lVar3;
	uint uVar4;
	undefined7 uVar5;
	undefined uVar6;
	undefined7 uVar7;
	undefined uVar8;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	int local_2c;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	puVar1 = _DAT_100f1f6c;
	uVar7 = (undefined7)((ulonglong)param_5 >> 8);
	uVar8 = (undefined)param_5;
	uVar5 = (undefined7)((ulonglong)param_4 >> 8);
	uVar6 = (undefined)param_4;
	lVar3 = SErrGetLastError((char)param_1, (char)param_2, (char)param_3, uVar6, uVar8, (char)param_6,
	    (char)param_7, (char)param_8, (char)in_stack_ffffffc8, in_stack_ffffffcf,
	    local_2c);
	uVar2 = lVar3 + 0x7af00000;
	if ((uVar2 & 0xffffffff) != 0x6a) {
		if ((uVar2 & 0xffffffff) == 0x69) {
			*puVar1 = 1;
		} else {
			if ((uVar2 & 0xffffffff) == 0x70) {
				*puVar1 = 1;
			} else {
				uVar4 = TraceLastError(lVar3, param_2, param_3, CONCAT71(uVar5, uVar6), CONCAT71(uVar7, uVar8),
				    param_6, param_7, param_8, in_stack_ffffffc8);
				app_fatal(*(int *)(local_2c + -0x5be0), param_1, (longlong)(int)uVar4, CONCAT71(uVar5, uVar6), CONCAT71(uVar7, uVar8), param_6, param_7, param_8, in_stack_ffffffc8,
				    in_stack_ffffffcf, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0,
				    in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0,
				    in_stack_fffffff4);
			}
		}
	}
	return;
}

ulonglong nthread_send_and_recv_turn(ulonglong param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	int iVar3;
	byte *pbVar4;
	undefined *puVar5;
	int iVar6;
	int iVar7;
	longlong lVar8;
	undefined8 uVar9;
	undefined7 uVar10;
	undefined uVar11;
	undefined7 uVar12;
	undefined uVar13;
	undefined7 uVar14;
	undefined uVar15;
	longlong lVar16;
	longlong lVar17;
	longlong lVar18;
	longlong lVar19;

	puVar5 = PTR_DAT_100f1f70;
	uVar14 = (undefined7)((ulonglong)param_5 >> 8);
	uVar15 = (undefined)param_5;
	uVar12 = (undefined7)((ulonglong)param_4 >> 8);
	uVar13 = (undefined)param_4;
	uVar10 = (undefined7)((ulonglong)param_3 >> 8);
	uVar11 = (undefined)param_3;
	lVar18 = (longlong)param_8;
	lVar17 = (longlong)param_7;
	lVar16 = (longlong)param_6;
	lVar19 = ZEXT48(register0x0000000c) - 0x60;
	iVar3 = (int)lVar19;
	*(BADSPACEBASE **)iVar3 = register0x0000000c;
	lVar8 = param_2;
	iVar7 = SNetGetTurnsInTransit((char)lVar19 + '<', (char)param_2, uVar11, uVar13, uVar15, (char)param_6,
	    (char)param_7, (char)param_8, *(undefined *)(iVar3 + 0xb),
	    *(undefined *)(iVar3 + 0xf), *(undefined4 *)(iVar3 + 0x14));
	iVar6 = *(int *)(iVar3 + 0x14);
	if (iVar7 == 0) {
		nthread_terminate_game((ulonglong) * (uint *)(iVar6 + -0x5be4), lVar8, CONCAT71(uVar10, uVar11),
		    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), (int)lVar16, (int)lVar17, (int)lVar18, *(undefined4 *)(iVar3 + 8));
		param_1 = 0;
	} else {
		lVar19 = ZEXT48(register0x0000000c) - 0x28;
		while (uVar2 = *(uint *)(iVar3 + 0x3c), *(int *)(iVar3 + 0x3c) = uVar2 + 1,
		    uVar2 < *(uint *)puVar5) {
			uVar2 = *(uint *)(iVar6 + -0x4cdc);
			*(uint *)(iVar3 + 0x38) = (uint)param_1 & 0x7fffffff;
			uVar1 = *(uint *)(iVar3 + 0x38);
			*(undefined4 *)(iVar6 + -0x4cdc) = 0;
			*(uint *)(iVar3 + 0x38) = uVar1 | uVar2;
			pbVar4 = (byte *)lVar19;
			uVar9 = 4;
			*(uint *)(iVar3 + 0x38) = (uint)pbVar4[3] << 0x18 | (uint)pbVar4[2] << 0x10 | (uint)pbVar4[1] << 8 | (uint)*pbVar4;
			iVar7 = SNetSendTurn((char)lVar19, 4, uVar11, uVar13, uVar15, (char)lVar16, (char)lVar17,
			    (char)lVar18, *(undefined *)(iVar3 + 0xb), *(undefined *)(iVar3 + 0xf),
			    *(undefined4 *)(iVar3 + 0x14));
			iVar6 = *(int *)(iVar3 + 0x14);
			if (iVar7 == 0) {
				nthread_terminate_game((ulonglong) * (uint *)(iVar6 + -0x5be8), uVar9, CONCAT71(uVar10, uVar11),
				    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), (int)lVar16, (int)lVar17,
				    (int)lVar18, *(undefined4 *)(iVar3 + 8));
				return 0;
			}
			param_1 = param_1 + param_2;
			if (0x7ffffffe < (param_1 & 0xffffffff)) {
				param_1 = (ulonglong)((uint)param_1 & 0xffff);
			}
		}
	}
	return param_1;
}

undefined8 nthread_recv_turns(undefined4 *puParm1)

{
	undefined **ppuVar1;
	int iVar3;
	undefined uVar5;
	longlong lVar2;
	undefined *puVar4;
	undefined8 uVar6;
	undefined uVar7;
	ulonglong uVar8;
	undefined uVar9;
	ulonglong uVar10;
	undefined uVar11;
	ulonglong uVar12;
	undefined uVar13;
	undefined4 in_r8;
	undefined uVar14;
	undefined4 in_r9;
	undefined uVar15;
	undefined4 in_r10;
	undefined uVar16;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined **local_2c;

	ppuVar1 = &toc;
	*puParm1 = 0;
	DAT_100f42e5 = DAT_100f42e5 + -1;
	if (DAT_100f42e5 == '\0') {
		DAT_100f42e4 = DAT_100f42e4 + -1;
		DAT_100f42e5 = *PTR_DAT_100f1fc4;
		if (DAT_100f42e4 == '\0') {
			uVar8 = ZEXT48(PTR_DAT_100f1fbc);
			uVar10 = ZEXT48(PTR_DAT_100f1fc0);
			uVar6 = 4;
			uVar12 = ZEXT48(PTR_DAT_100f1fc8);
			ppuVar1 = local_2c;
			iVar3 = SNetReceiveTurns(0, 4, (char)PTR_DAT_100f1fbc, (char)PTR_DAT_100f1fc0,
			    (char)PTR_DAT_100f1fc8, (char)in_r8, (char)in_r9, (char)in_r10,
			    (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
			uVar5 = (undefined)iVar3;
			uVar7 = (undefined)uVar6;
			uVar9 = (undefined)uVar8;
			uVar11 = (undefined)uVar10;
			uVar13 = (undefined)uVar12;
			uVar14 = (undefined)in_r8;
			uVar15 = (undefined)in_r9;
			uVar16 = (undefined)in_r10;
			if (iVar3 == 0) {
				lVar2 = SErrGetLastError(uVar5, uVar7, uVar9, uVar11, uVar13, uVar14, uVar15, uVar16,
				    (char)in_stack_ffffffc8, in_stack_ffffffcf, ppuVar1);
				if ((lVar2 + 0x7af00000U & 0xffffffff) != 0x6b) {
					nthread_terminate_game(ZEXT48(ppuVar1[-0x16fb]), uVar6, uVar8, uVar10, uVar12, in_r8, in_r9, in_r10,
					    in_stack_ffffffc8);
				}
				*(undefined *)(ppuVar1 + -0x133b) = 1;
				*(undefined *)((int)ppuVar1 + -0x4ceb) = 1;
				*(undefined *)((int)ppuVar1 + -0x4cea) = 0;
				return 0;
			}
			if (*(char *)((int)ppuVar1 + -0x4cea) == '\0') {
				*(undefined *)((int)ppuVar1 + -0x4cea) = 1;
				puVar4 = (undefined *)
				    GetTickCount(uVar5, uVar7, uVar9, uVar11, uVar13, uVar14, uVar15, uVar16,
				        (char)in_stack_ffffffc8, in_stack_ffffffcf, ppuVar1);
				uVar5 = SUB41(puVar4, 0);
				ppuVar1[-0x133c] = puVar4;
			}
			*(undefined *)(ppuVar1 + -0x133b) = 4;
			FUN_1007fd9c(uVar5, uVar7, uVar9, uVar11, uVar13, uVar14, uVar15, uVar16, in_stack_ffffffc8);
		}
		*puParm1 = 1;
		ppuVar1[-0x133c] = ppuVar1[-0x133c] + 0x32;
	} else {
		_DAT_100f42e0 = _DAT_100f42e0 + 0x32;
	}
	return 1;
}

void nthread_set_turn_upper_bit(void)

{
	_DAT_100f42f4 = 0x80000000;
	return;
}

void nthread_start(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint *puVar1;
	uint uVar2;
	uint uVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	int iVar8;
	undefined4 uVar10;
	undefined8 uVar9;
	uint uVar11;
	undefined8 uVar12;
	ulonglong uVar13;
	undefined8 uVar14;
	undefined8 uVar15;
	undefined uVar16;
	undefined uVar18;
	undefined uVar19;
	undefined4 uVar17;
	undefined uVar20;
	undefined uVar21;
	undefined uVar22;

	puVar7 = PTR_DAT_100f1fcc;
	puVar6 = PTR_DAT_100f1fc4;
	puVar5 = PTR_DAT_100f1f70;
	puVar4 = (undefined *)(ZEXT48(register0x0000000c) - 0x70);
	*(BADSPACEBASE **)puVar4 = register0x0000000c;
	uVar10 = GetTickCount((char)param_1, (char)param_2, (char)param_3, (char)param_4, (char)param_5,
	    (char)param_6, (char)param_7, (char)param_8, puVar4[0xb], puVar4[0xf],
	    *(undefined4 *)(puVar4 + 0x14));
	iVar8 = *(int *)(puVar4 + 0x14);
	*(undefined4 *)(iVar8 + -0x4cf0) = uVar10;
	*(undefined *)(iVar8 + -0x4ceb) = 1;
	*(undefined *)(iVar8 + -0x4cec) = 1;
	*(undefined *)(iVar8 + -0x4cea) = 1;
	if (param_1 == 0) {
		*(undefined4 *)(iVar8 + -0x4cdc) = 0;
	} else {
		nthread_set_turn_upper_bit(*puVar4);
	}
	*(undefined4 *)(puVar4 + 0x38) = 0x24;
	uVar9 = SNetGetProviderCaps((char)(ZEXT48(register0x0000000c) - 0x70) + '8', (char)param_2,
	    (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7,
	    (char)param_8, puVar4[0xb], puVar4[0xf], *(undefined4 *)(puVar4 + 0x14));
	uVar20 = (undefined)param_7;
	uVar18 = (undefined)param_6;
	iVar8 = *(int *)(puVar4 + 0x14);
	if ((int)uVar9 == 0) {
		uVar11 = TraceLastError(uVar9, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    *(undefined4 *)(puVar4 + 8));
		uVar20 = (undefined)param_7;
		uVar18 = (undefined)param_6;
		app_fatal(*(int *)(iVar8 + -0x5bf4), (longlong)(int)uVar11, param_3, param_4, param_5, param_6,
		    param_7, param_8, *(undefined4 *)(puVar4 + 8), puVar4[0xf],
		    *(undefined4 *)(puVar4 + 0x18), *(undefined4 *)(puVar4 + 0x1c),
		    *(undefined4 *)(puVar4 + 0x20), *(undefined4 *)(puVar4 + 0x24),
		    *(undefined4 *)(puVar4 + 0x28), *(undefined4 *)(puVar4 + 0x2c),
		    *(undefined4 *)(puVar4 + 0x30), *(undefined4 *)(puVar4 + 0x34));
	}
	if (*(int *)(puVar4 + 0x58) == 0) {
		*(undefined4 *)puVar5 = 1;
	} else {
		*(int *)puVar5 = *(int *)(puVar4 + 0x58);
	}
	uVar11 = *(uint *)(puVar4 + 0x54);
	if ((uVar11 < 0x15) && (uVar11 != 0)) {
		*puVar6 = (char)(0x14 / (ulonglong)uVar11);
	} else {
		*puVar6 = 1;
	}
	uVar11 = *(uint *)(puVar4 + 0x40);
	if (0x1ff < uVar11) {
		uVar11 = 0x200;
	}
	puVar1 = *(uint **)(iVar8 + -0x72c0);
	**(uint **)(iVar8 + -0x701c) = uVar11;
	uVar2 = *(uint *)(puVar4 + 0x4c);
	uVar3 = (uint)(((longlong)(int)uVar2 * (longlong)(int)(uint)(byte)*puVar6 & 0xffffffffU) * 0xcccccccd >> 0x24);
	*(uint *)puVar7 = uVar3;
	*puVar1 = uVar2 >> 2;
	*(int *)puVar7 = *(int *)puVar7 * 3;
	*(uint *)puVar7 = *(uint *)puVar7 >> 2;
	if (4 < *(uint *)(puVar4 + 0x48)) {
		*(undefined4 *)(puVar4 + 0x48) = 4;
	}
	*(uint *)puVar7 = *(uint *)puVar7 / *(uint *)(puVar4 + 0x48);
	while (*(uint *)puVar7 < 0x80) {
		*(int *)puVar7 = *(int *)puVar7 << 1;
		*puVar6 = *puVar6 << 1;
	}
	if (uVar11 < *(uint *)puVar7) {
		*(uint *)puVar7 = uVar11;
	}
	if (1 < **(byte **)(iVar8 + -0x77f0)) {
		*(undefined *)(iVar8 + -0x4ce0) = 0;
		EnterCriticalSection((char)*(undefined4 *)(iVar8 + -0x5bf0), (char)uVar3, 0xcd, (char)uVar11, (char)uVar2,
		    uVar18, uVar20, (char)param_8, puVar4[0xb], puVar4[0xf], *(undefined4 *)(puVar4 + 0x14));
		uVar11 = *(uint *)(puVar4 + 0x14);
		uVar2 = *(uint *)(uVar11 - 0x5bf8);
		uVar13 = (ulonglong)uVar2;
		*(undefined *)(uVar11 - 0x4cdf) = 1;
		uVar17 = (undefined4)((ulonglong)uVar11 - 0x4ce8);
		uVar10 = *(undefined4 *)(uVar11 - 0x5bfc);
		uVar12 = 0;
		uVar14 = 0;
		uVar15 = 0;
		uVar9 = FUN_100dbaac(0, 0, (char)uVar2, 0, 0, (char)((ulonglong)uVar11 - 0x4ce8), (char)uVar10,
		    (char)param_8, puVar4[0xb], puVar4[0xf], *(undefined4 *)(puVar4 + 0x14));
		uVar22 = (undefined)param_8;
		uVar21 = (undefined)uVar10;
		uVar19 = (undefined)uVar17;
		uVar16 = (undefined)uVar15;
		uVar20 = (undefined)uVar14;
		uVar18 = (undefined)uVar13;
		iVar8 = *(int *)(puVar4 + 0x14);
		*(undefined4 *)(iVar8 + -0x4ce4) = (int)uVar9;
		if (*(int *)(iVar8 + -0x4ce4) == 0) {
			uVar11 = TraceLastError(uVar9, uVar12, uVar13, uVar14, uVar15, uVar17, uVar10, param_8,
			    *(undefined4 *)(puVar4 + 8));
			uVar22 = (undefined)param_8;
			uVar21 = (undefined)uVar10;
			uVar19 = (undefined)uVar17;
			uVar16 = (undefined)uVar15;
			uVar20 = (undefined)uVar14;
			uVar18 = (undefined)uVar13;
			app_fatal(*(int *)(iVar8 + -0x5c00), (longlong)(int)uVar11, uVar13, uVar14, uVar15, uVar17,
			    uVar10, param_8, *(undefined4 *)(puVar4 + 8), puVar4[0xf],
			    *(undefined4 *)(puVar4 + 0x18), *(undefined4 *)(puVar4 + 0x1c),
			    *(undefined4 *)(puVar4 + 0x20), *(undefined4 *)(puVar4 + 0x24),
			    *(undefined4 *)(puVar4 + 0x28), *(undefined4 *)(puVar4 + 0x2c),
			    *(undefined4 *)(puVar4 + 0x30), *(undefined4 *)(puVar4 + 0x34));
		}
		SetThreadPriority((char)*(undefined4 *)(iVar8 + -0x4ce4), 2, uVar18, uVar20, uVar16, uVar19, uVar21,
		    uVar22, puVar4[0xb], puVar4[0xf], *(undefined4 *)(puVar4 + 0x14));
	}
	return;
}

void nthread_cleanup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	ulonglong uVar3;
	longlong lVar4;
	uint uVar5;
	undefined uVar7;
	undefined8 uVar6;
	undefined7 uVar8;
	undefined uVar9;
	undefined7 uVar10;
	undefined uVar11;
	undefined7 uVar12;
	undefined uVar13;
	undefined uVar14;
	undefined uVar15;
	undefined uVar16;
	undefined4 in_stack_ffffffc8;
	undefined uVar17;
	undefined in_stack_ffffffcf;
	int local_2c;
	int iVar18;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	puVar2 = PTR_DAT_100f1fcc;
	uVar12 = (undefined7)((ulonglong)param_5 >> 8);
	uVar13 = (undefined)param_5;
	uVar10 = (undefined7)((ulonglong)param_4 >> 8);
	uVar11 = (undefined)param_4;
	uVar8 = (undefined7)((ulonglong)param_3 >> 8);
	uVar9 = (undefined)param_3;
	uVar7 = SUB41(PTR_DAT_100f1fcc, 0);
	DAT_100f42f1 = 0;
	*(undefined4 *)PTR_DAT_100f1f70 = 0;
	puVar1 = PTR_DAT_100f1fb4;
	*(undefined4 *)puVar2 = 0;
	*(undefined4 *)puVar1 = 0;
	if (_DAT_100f42ec != 0) {
		uVar3 = GetCurrentThreadId((char)puVar1, uVar7, uVar9, uVar11, uVar13, (char)param_6, (char)param_7,
		    (char)param_8, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
		if ((ulonglong) * (uint *)(local_2c + -0x4ce8) != (uVar3 & 0xffffffff)) {
			if (*(char *)(local_2c + -0x4ce0) == '\0') {
				LeaveCriticalSection((char)*(undefined4 *)(local_2c + -0x5bf0), uVar7, uVar9, uVar11, uVar13, (char)param_6, (char)param_7, (char)param_8, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
			}
			uVar6 = 0xffffffffffffffff;
			lVar4 = WaitForSingleObject((char)*(undefined4 *)(local_2c + -0x4ce4), 0xff, uVar9, uVar11, uVar13, (char)param_6, (char)param_7, (char)param_8, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
			uVar17 = (undefined)in_stack_ffffffc8;
			uVar16 = (undefined)param_8;
			uVar15 = (undefined)param_7;
			uVar14 = (undefined)param_6;
			uVar7 = (undefined)uVar6;
			iVar18 = local_2c;
			if ((lVar4 + 0x10000U & 0xffffffff) == 0xffff) {
				iVar18 = local_2c;
				uVar5 = TraceLastError(lVar4, uVar6, CONCAT71(uVar8, uVar9), CONCAT71(uVar10, uVar11),
				    CONCAT71(uVar12, uVar13), param_6, param_7, param_8, in_stack_ffffffc8);
				uVar17 = (undefined)in_stack_ffffffc8;
				uVar16 = (undefined)param_8;
				uVar15 = (undefined)param_7;
				uVar14 = (undefined)param_6;
				uVar7 = (undefined)uVar5;
				app_fatal(*(int *)(local_2c + -0x5c04), (longlong)(int)uVar5, CONCAT71(uVar8, uVar9),
				    CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13), param_6, param_7, param_8,
				    in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffd8, in_stack_ffffffdc,
				    in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec,
				    in_stack_fffffff0, in_stack_fffffff4);
			}
			CloseHandle((char)*(undefined4 *)(local_2c + -0x4ce4), uVar7, uVar9, uVar11, uVar13, uVar14, uVar15,
			    uVar16, uVar17, in_stack_ffffffcf, iVar18);
			*(undefined4 *)(iVar18 + -0x4ce4) = 0;
		}
	}
	return;
}

ulonglong nthread_ignore_mutex(undefined8 param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	uVar1 = (ulonglong)_DAT_100f33e0;
	if (_DAT_100f42ec != 0) {
		if ((int)param_1 == 0) {
			uVar1 = EnterCriticalSection((char)_DAT_100f33e0, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
		} else {
			uVar1 = LeaveCriticalSection((char)_DAT_100f33e0, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
		}
		*(undefined *)(local_2c + -0x4ce0) = (char)param_1;
	}
	return uVar1;
}

ulonglong nthread_has_500ms_passed(undefined4 param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9, undefined param_10, undefined4 param_11)

{
	int iVar1;
	int iVar2;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	iVar1 = GetTickCount((undefined)param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	iVar2 = iVar1 - *(int *)(local_2c + -0x4cf0);
	if ((**(char **)(local_2c + -0x77f0) == '\x01') && (500 < iVar2)) {
		*(int *)(local_2c + -0x4cf0) = iVar1;
		iVar2 = 0;
	}
	return (ulonglong)((iVar2 >> 0x1f) + 1U & 0xff);
}
