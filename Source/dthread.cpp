
uint dthread_handler(void *param_1)

{
	undefined4 *p;
	int iVar1;
	ulonglong uVar2;
	ulonglong uVar3;
	DWORD DVar4;
	char *pcVar5;
	uint local_3c;

	uVar3 = 0x100f8fd0;
	while (iVar1 = (int)uVar3, *(char *)(iVar1 + -0x4ed4) != '\0') {
		if ((*(int *)(iVar1 + -0x4ed0) == 0) && (DVar4 = WaitForSingleObject(*(HANDLE *)(iVar1 + -0x4edc), 0xffffffff), DVar4 == 0xffffffff)) {
			pcVar5 = TraceLastError();
			app_fatal("dthread4:\n%s", pcVar5);
		}
		EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1012d8fc);
		p = *(undefined4 **)(local_3c - 0x4ed0);
		if (p == (undefined4 *)0x0) {
			ResetEvent(*(HANDLE *)(local_3c - 0x4edc));
		} else {
			*(undefined4 *)(local_3c - 0x4ed0) = *p;
		}
		LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1012d8fc);
		uVar3 = (ulonglong)local_3c;
		if (p != (undefined4 *)0x0) {
			if (p[1] != 4) {
				multi_send_zero_packet(p[1], *(char *)(p + 2), p + 4, p[3]);
			}
			uVar2 = (ulonglong)(uint)(p[3] * 1000) / (ulonglong)_DAT_1017deec;
			if (uVar2 != 0) {
				uVar2 = 1;
			}
			mem_free_dbg(p);
			if (uVar2 != 0) {
				Sleep((DWORD)uVar2);
				uVar3 = (ulonglong)local_3c;
			}
		}
	}
	return 0;
}

void dthread_remove_player(int pnum)

{
	undefined4 *puVar1;
	int local_2c;

	EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1012d8fc);
	puVar1 = *(undefined4 **)(local_2c + -0x4ed0);
	while (puVar1 != (undefined4 *)0x0) {
		if (puVar1[1] == pnum) {
			puVar1[1] = 4;
		}
		puVar1 = (undefined4 *)*puVar1;
	}
	LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1012d8fc);
	return;
}

void dthread_send_delta(int pnum, char cmd, void *pbSrc, int dwLen)

{
	undefined4 *puVar1;
	undefined4 *puVar2;
	undefined4 *puVar3;
	undefined uVar4;
	undefined uVar5;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	int local_3c;

	uVar5 = 0x95;
	if (gbMaxPlayers != '\x01') {
		uVar4 = (char)dwLen;
		puVar2 = (undefined4 *)DiabloAllocPtr(dwLen + 0x14);
		*puVar2 = 0;
		puVar2[1] = pnum;
		*(char *)(puVar2 + 2) = cmd;
		puVar2[3] = dwLen;
		CopyMemory((char)puVar2 + '\x10', (char)pbSrc, (char)dwLen, uVar4, uVar5, in_r8, in_r9, in_r10,
		    in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
		EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1012d8fc);
		puVar1 = (undefined4 *)(local_3c + -0x4ed0);
		do {
			puVar3 = puVar1;
			puVar1 = (undefined4 *)*puVar3;
		} while (puVar1 != (undefined4 *)0x0);
		*(undefined4 **)puVar3 = puVar2;
		SetEvent(*(HANDLE *)(local_3c + -0x4edc));
		LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1012d8fc);
	}
	return;
}

// WARNING: Unknown calling convention yet parameter storage is locked

void dthread_start(void)

{
	int iVar1;
	ulonglong uVar2;
	char *pcVar3;
	uintptr_t uVar4;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	if (gbMaxPlayers != '\x01') {
		uVar2 = CreateEvent__FP20_SECURITY_ATTRIBUTESiiPCc(
		    0, 1, 0, 0, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
		*(undefined4 *)(local_2c + -0x4edc) = (int)uVar2;
		iVar1 = local_2c;
		if ((uVar2 & 0xffffffff) == 0) {
			iVar1 = local_2c;
			pcVar3 = TraceLastError();
			app_fatal(*(char **)(local_2c + -0x62b4), pcVar3);
		}
		*(undefined *)(local_2c + -0x4ed4) = 1;
		uVar4 = _beginthreadex(
		    (void *)0x0, 0, *(_StartAddress **)(local_2c + -0x72c4), (void *)0x0, 0, (uint *)(local_2c + -0x4ee0));
		*(uintptr_t *)(iVar1 + -0x4ed8) = uVar4;
		if (uVar4 == 0) {
			pcVar3 = TraceLastError();
			app_fatal(*(char **)(iVar1 + -0x62bc), pcVar3);
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void dthread_cleanup(void)

{
	undefined4 *p;
	undefined4 uVar1;
	int iVar2;
	uint uVar4;
	ulonglong uVar3;
	DWORD DVar5;
	char *pcVar6;
	uint local_2c;

	if (_DAT_100f40f4 != (HANDLE)0x0) {
		DAT_100f40fc = 0;
		SetEvent(_DAT_100f40f4);
		if (*(int *)(local_2c - 0x4ed8) != 0) {
			DVar5 = GetCurrentThreadId();
			if (*(DWORD *)(local_2c - 0x4ee0) != DVar5) {
				DVar5 = WaitForSingleObject(*(HANDLE *)(local_2c - 0x4ed8), 0xffffffff);
				uVar4 = local_2c;
				if (DVar5 == 0xffffffff) {
					uVar4 = local_2c;
					pcVar6 = TraceLastError();
					app_fatal(*(char **)(uVar4 - 0x62c0), pcVar6);
				}
				CloseHandle(*(HANDLE *)(uVar4 - 0x4ed8));
				*(undefined4 *)(local_2c - 0x4ed8) = 0;
			}
		}
		CloseHandle(*(HANDLE *)(local_2c - 0x4edc));
		uVar3 = (ulonglong)local_2c;
		*(undefined4 *)(local_2c - 0x4edc) = 0;
		while (iVar2 = (int)uVar3, *(int *)(iVar2 + -0x4ed0) != 0) {
			p = *(undefined4 **)(iVar2 + -0x4ed0);
			uVar1 = *p;
			*(undefined4 *)(iVar2 + -0x4ed0) = 0;
			mem_free_dbg(p);
			*(undefined4 *)((int)uVar3 + -0x4ed0) = uVar1;
		}
	}
	return;
}