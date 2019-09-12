
void nthread_terminate_game(char *pszFcn)

{
	DWORD DVar1;
	char *pcVar2;
	int local_2c;

	DVar1 = SErrGetLastError();
	if (DVar1 != 0x8510006a) {
		if (DVar1 == 0x85100069) {
			DAT_1017de93 = 1;
		} else {
			if (DVar1 == 0x85100070) {
				DAT_1017de93 = 1;
			} else {
				pcVar2 = TraceLastError();
				app_fatal(*(char **)(local_2c + -0x5be0), pszFcn, pcVar2);
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

DWORD nthread_send_and_recv_turn(DWORD cur_turn, int turn_delta)

{
	uint uVar1;
	BOOL BVar2;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int local_4c;
	uint local_28;
	uint local_24[4];
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
	BVar2 = SNetGetTurnsInTransit((int *)local_24);
	if (BVar2 == 0) {
		nthread_terminate_game(*(char **)(local_4c + -0x5be4));
		cur_turn = 0;
	} else {
		while (local_24[0] < _DAT_1017def8) {
			uVar1 = *(uint *)(local_4c + -0x4cdc);
			*(undefined4 *)(local_4c + -0x4cdc) = 0;
			uVar1 = cur_turn & 0x7fffffff | uVar1;
			local_28 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
			local_24[0] = local_24[0] + 1;
			BVar2 = SNetSendTurn((char *)&local_28, 4);
			if (BVar2 == 0) {
				nthread_terminate_game(*(char **)(local_4c + -0x5be8));
				return 0;
			}
			cur_turn = cur_turn + turn_delta;
			if (0x7ffffffe < cur_turn) {
				cur_turn = cur_turn & 0xffff;
			}
		}
	}
	return cur_turn;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL nthread_recv_turns(BOOL *pfSendAsync)

{
	int iVar1;
	BOOL BVar2;
	DWORD DVar3;
	DWORD DVar4;
	int local_2c;

	iVar1 = 0x100f8fd0;
	*pfSendAsync = 0;
	DAT_100f42e5 = DAT_100f42e5 + -1;
	if (DAT_100f42e5 == '\0') {
		DAT_100f42e4 = DAT_100f42e4 + -1;
		DAT_100f42e5 = DAT_1017defc;
		if (DAT_100f42e4 == '\0') {
			BVar2 = SNetReceiveTurns(0, 4, (char **)&DAT_1017debc, (DWORD *)&DAT_1017dedc, (DWORD *)&DAT_1017decc);
			if (BVar2 == 0) {
				DVar3 = SErrGetLastError();
				if (DVar3 != 0x8510006b) {
					nthread_terminate_game(*(char **)(local_2c + -0x5bec));
				}
				*(undefined *)(local_2c + -0x4cec) = 1;
				*(undefined *)(local_2c + -0x4ceb) = 1;
				*(undefined *)(local_2c + -0x4cea) = 0;
				return 0;
			}
			if (*(char *)(local_2c + -0x4cea) == '\0') {
				*(undefined *)(local_2c + -0x4cea) = 1;
				DVar4 = GetTickCount();
				*(DWORD *)(local_2c + -0x4cf0) = DVar4;
			}
			*(undefined *)(local_2c + -0x4cec) = 4;
			iVar1 = local_2c;
			multi_msg_countdown();
		}
		*pfSendAsync = 1;
		*(int *)(iVar1 + -0x4cf0) = *(int *)(iVar1 + -0x4cf0) + 0x32;
	} else {
		_DAT_100f42e0 = _DAT_100f42e0 + 0x32;
	}
	return 1;
}

uint nthread_handler(void *param_1)

{
	int iVar1;
	BOOL BVar2;
	DWORD dwMilliseconds;
	int local_3c;
	BOOL aBStack24[6];

	iVar1 = 0x100f8fd0;
	while (true) {
		if (*(char *)(iVar1 + -0x4cdf) == '\0') {
			return 0;
		}
		EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1017de98);
		if (*(char *)(local_3c + -0x4cdf) == '\0')
			break;
		nthread_send_and_recv_turn(0, 0);
		BVar2 = nthread_recv_turns(aBStack24);
		if (BVar2 == 0) {
			dwMilliseconds = 0x32;
		} else {
			dwMilliseconds = GetTickCount();
			dwMilliseconds = *(int *)(local_3c + -0x4cf0) - dwMilliseconds;
		}
		LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1017de98);
		iVar1 = local_3c;
		if (0 < (int)dwMilliseconds) {
			Sleep(dwMilliseconds);
			iVar1 = local_3c;
		}
	}
	LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1017de98);
	return 0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void nthread_set_turn_upper_bit(void)

{
	_DAT_100f42f4 = 0x80000000;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void nthread_start(BOOL set_turn_upper_bit)

{
	uint *puVar1;
	int iVar2;
	DWORD DVar3;
	int iVar4;
	char *pcVar5;
	uintptr_t uVar6;
	int local_5c;
	_SNETCAPS local_38;

	DVar3 = GetTickCount();
	*(DWORD *)(local_5c + -0x4cf0) = DVar3;
	*(undefined *)(local_5c + -0x4ceb) = 1;
	*(undefined *)(local_5c + -0x4cec) = 1;
	*(undefined *)(local_5c + -0x4cea) = 1;
	if (set_turn_upper_bit == 0) {
		*(undefined4 *)(local_5c + -0x4cdc) = 0;
	} else {
		nthread_set_turn_upper_bit();
	}
	local_38.size = 0x24;
	iVar4 = SNetGetProviderCaps(&local_38);
	iVar2 = local_5c;
	if (iVar4 == 0) {
		iVar2 = local_5c;
		pcVar5 = TraceLastError();
		app_fatal(*(char **)(iVar2 + -0x5bf4), pcVar5);
	}
	if (local_38.defaultturnsintransit == 0) {
		_DAT_1017def8 = 1;
	} else {
		_DAT_1017def8 = local_38.defaultturnsintransit;
	}
	if ((local_38.defaultturnssec < 0x15) && (local_38.defaultturnssec != 0)) {
		DAT_1017defc = (byte)(0x14 / (ulonglong)local_38.defaultturnssec);
	} else {
		DAT_1017defc = 1;
	}
	if (0x1ff < local_38.maxmessagesize) {
		local_38.maxmessagesize = 0x200;
	}
	puVar1 = *(uint **)(iVar2 + -0x72c0);
	**(uint **)(iVar2 + -0x701c) = local_38.maxmessagesize;
	_DAT_1017def4 = (uint)(
	    ((longlong)(int)local_38.bytessec * (longlong)(int)(uint)DAT_1017defc & 0xffffffffU) * 0xcccccccd >> 0x24);
	*puVar1 = local_38.bytessec >> 2;
	if (4 < local_38.maxplayers) {
		local_38.maxplayers = 4;
	}
	_DAT_1017def4 = (_DAT_1017def4 * 3 >> 2) / local_38.maxplayers;
	while (_DAT_1017def4 < 0x80) {
		_DAT_1017def4 = _DAT_1017def4 << 1;
		DAT_1017defc = DAT_1017defc << 1;
	}
	if (local_38.maxmessagesize < _DAT_1017def4) {
		_DAT_1017def4 = local_38.maxmessagesize;
	}
	if (1 < **(byte **)(iVar2 + -0x77f0)) {
		*(undefined *)(iVar2 + -0x4ce0) = 0;
		EnterCriticalSection(*(LPCRITICAL_SECTION *)(iVar2 + -0x5bf0));
		*(undefined *)(local_5c + -0x4cdf) = 1;
		uVar6 = _beginthreadex(
		    (void *)0x0, 0, *(_StartAddress **)(local_5c + -0x5bf8), (void *)0x0, 0, (uint *)(local_5c + -0x4ce8));
		*(uintptr_t *)(local_5c + -0x4ce4) = uVar6;
		if (*(int *)(local_5c + -0x4ce4) == 0) {
			pcVar5 = TraceLastError();
			app_fatal(*(char **)(local_5c + -0x5c00), pcVar5);
		}
		SetThreadPriority(*(HANDLE *)(local_5c + -0x4ce4), 2);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void nthread_cleanup(void)

{
	int iVar1;
	DWORD DVar2;
	char *pcVar3;
	int local_2c;

	DAT_100f42f1 = 0;
	_DAT_1017def8 = 0;
	_DAT_1017def4 = 0;
	_DAT_1017def0 = 0;
	if (_DAT_100f42ec != 0) {
		DVar2 = GetCurrentThreadId();
		if (*(DWORD *)(local_2c + -0x4ce8) != DVar2) {
			if (*(char *)(local_2c + -0x4ce0) == '\0') {
				LeaveCriticalSection(*(LPCRITICAL_SECTION *)(local_2c + -0x5bf0));
			}
			DVar2 = WaitForSingleObject(*(HANDLE *)(local_2c + -0x4ce4), 0xffffffff);
			iVar1 = local_2c;
			if (DVar2 == 0xffffffff) {
				iVar1 = local_2c;
				pcVar3 = TraceLastError();
				app_fatal(*(char **)(iVar1 + -0x5c04), pcVar3);
			}
			CloseHandle(*(HANDLE *)(iVar1 + -0x4ce4));
			*(undefined4 *)(local_2c + -0x4ce4) = 0;
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void nthread_ignore_mutex(BOOL bStart)

{
	int local_2c;

	if (_DAT_100f42ec != 0) {
		if (bStart == 0) {
			EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1017de98);
		} else {
			LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1017de98);
		}
		*(undefined *)(local_2c + -0x4ce0) = (char)bStart;
	}
	return;
}

BOOL nthread_has_500ms_passed(BOOL unused)

{
	DWORD DVar1;
	int iVar2;
	BOOL BStack00000018;
	int local_2c;

	BStack00000018 = unused;
	DVar1 = GetTickCount();
	iVar2 = DVar1 - *(int *)(local_2c + -0x4cf0);
	if ((**(char **)(local_2c + -0x77f0) == '\x01') && (500 < iVar2)) {
		*(DWORD *)(local_2c + -0x4cf0) = DVar1;
		iVar2 = 0;
	}
	return (BOOL)((iVar2 >> 0x1f) + 1U & 0xff);
}
