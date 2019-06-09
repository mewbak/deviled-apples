
void dthread_remove_player(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined uVar2;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	uVar2 = (undefined)_DAT_100f2d20;
	EnterCriticalSection(uVar2, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
	    in_stack_ffffffcf, local_2c);
	puVar1 = *(undefined4 **)(local_2c + -0x4ed0);
	while (puVar1 != (undefined4 *)0x0) {
		if (puVar1[1] == param_1) {
			puVar1[1] = 4;
		}
		puVar1 = (undefined4 *)*puVar1;
	}
	LeaveCriticalSection(uVar2, 0, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
	    in_stack_ffffffcf, local_2c);
	return;
}

void dthread_send_delta(undefined4 param_1, undefined param_2, undefined8 param_3, longlong param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 uVar1;
	undefined4 *puVar2;
	undefined4 *puVar3;
	undefined4 *puVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	int local_3c;

	uVar1 = _DAT_100f2d20;
	uVar5 = (undefined)param_4;
	uVar7 = SUB41(PTR_DAT_100f17e0, 0);
	if (*PTR_DAT_100f17e0 != '\x01') {
		uVar6 = uVar5;
		puVar3 = (undefined4 *)DiabloAllocPtr(param_4 + 0x14);
		*puVar3 = 0;
		puVar3[1] = param_1;
		*(undefined *)(puVar3 + 2) = param_2;
		puVar3[3] = (int)param_4;
		memcpy((char)puVar3 + '\x10', (undefined)param_3, uVar5, uVar6, uVar7, param_6, param_7, param_8,
		    in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
		EnterCriticalSection((char)uVar1, (undefined)param_3, uVar5, uVar6, uVar7, param_6, param_7, param_8,
		    in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
		puVar2 = (undefined4 *)(local_3c + -0x4ed0);
		do {
			puVar4 = puVar2;
			puVar2 = (undefined4 *)*puVar4;
		} while (puVar2 != (undefined4 *)0x0);
		*(undefined4 **)puVar4 = puVar3;
		SetEvent((char)*(undefined4 *)(local_3c + -0x4edc), (undefined)param_3, uVar5, uVar6, uVar7, param_6,
		    param_7, param_8, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
		LeaveCriticalSection((char)uVar1, (undefined)param_3, uVar5, uVar6, uVar7, param_6, param_7, param_8,
		    in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	}
	return;
}

void dthread_start(void)

{
	int iVar1;
	ulonglong uVar2;
	ulonglong uVar3;
	uint uVar4;
	undefined8 uVar5;
	undefined8 uVar6;
	undefined8 uVar7;
	undefined8 in_r7;
	undefined8 in_r8;
	undefined4 uVar8;
	undefined8 in_r9;
	undefined4 uVar9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	uint local_2c;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	uVar9 = (undefined4)in_r9;
	uVar8 = (undefined4)in_r8;
	if (*PTR_DAT_100f17e0 != '\x01') {
		uVar5 = 1;
		uVar6 = 0;
		uVar7 = 0;
		uVar3 = CreateEvent(0, 1, 0, 0, (char)in_r7, (char)in_r8, (char)in_r9, (char)in_r10,
		    (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
		uVar2 = (ulonglong)local_2c;
		*(undefined4 *)(local_2c - 0x4edc) = (int)uVar3;
		if ((uVar3 & 0xffffffff) == 0) {
			uVar4 = TraceLastError(uVar3, uVar5, uVar6, uVar7, in_r7, uVar8, uVar9, in_r10, in_stack_ffffffc8);
			app_fatal(*(int *)((int)uVar2 + -0x62b4), (longlong)(int)uVar4, uVar6, uVar7, in_r7, uVar8, uVar9, in_r10, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffd8, in_stack_ffffffdc,
			    in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec,
			    in_stack_fffffff0, in_stack_fffffff4);
		}
		iVar1 = (int)uVar2;
		uVar3 = (ulonglong) * (uint *)(iVar1 + -0x72c4);
		*(undefined *)(iVar1 + -0x4ed4) = 1;
		uVar9 = (undefined4)(uVar2 - 0x4ee0);
		uVar8 = *(undefined4 *)(iVar1 + -0x62b8);
		uVar5 = 0;
		uVar6 = 0;
		uVar7 = 0;
		uVar2 = FUN_100dbaac(0, 0, (char)*(uint *)(iVar1 + -0x72c4), 0, 0, (char)(uVar2 - 0x4ee0), (char)uVar8, (char)in_r10, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
		*(undefined4 *)(local_2c - 0x4ed8) = (int)uVar2;
		if ((uVar2 & 0xffffffff) == 0) {
			uVar4 = TraceLastError(uVar2, uVar5, uVar3, uVar6, uVar7, uVar9, uVar8, in_r10, in_stack_ffffffc8);
			app_fatal(*(int *)(local_2c - 0x62bc), (longlong)(int)uVar4, uVar3, uVar6, uVar7, uVar9, uVar8,
			    in_r10, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffd8, in_stack_ffffffdc,
			    in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec,
			    in_stack_fffffff0, in_stack_fffffff4);
		}
	}
	return;
}

void dthread_cleanup(undefined8 param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	undefined4 *puVar1;
	undefined4 uVar2;
	int iVar3;
	undefined uVar7;
	ulonglong uVar4;
	longlong lVar5;
	uint uVar6;
	undefined7 uVar8;
	undefined uVar9;
	undefined7 uVar10;
	undefined uVar11;
	undefined7 uVar12;
	undefined uVar13;
	longlong lVar14;
	longlong lVar15;
	longlong lVar16;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	uint local_2c;
	uint uVar17;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	uVar12 = (undefined7)((ulonglong)param_5 >> 8);
	uVar13 = (undefined)param_5;
	uVar10 = (undefined7)((ulonglong)param_4 >> 8);
	uVar11 = (undefined)param_4;
	uVar8 = (undefined7)((ulonglong)param_3 >> 8);
	uVar9 = (undefined)param_3;
	lVar16 = (longlong)param_8;
	lVar15 = (longlong)param_7;
	lVar14 = (longlong)param_6;
	if (_DAT_100f40f4 != 0) {
		DAT_100f40fc = 0;
		uVar7 = SetEvent((char)_DAT_100f40f4, (char)param_2, uVar9, uVar11, uVar13, (char)param_6,
		    (char)param_7, (char)param_8, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
		uVar17 = local_2c;
		if (*(int *)(local_2c - 0x4ed8) != 0) {
			uVar4 = GetCurrentThreadId(uVar7, (char)param_2, uVar9, uVar11, uVar13, (char)lVar14, (char)lVar15,
			    (char)lVar16, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
			uVar17 = local_2c;
			if ((ulonglong) * (uint *)(local_2c - 0x4ee0) != (uVar4 & 0xffffffff)) {
				param_2 = -1;
				lVar5 = WaitForSingleObject((char)*(undefined4 *)(local_2c - 0x4ed8), 0xff, uVar9, uVar11,
				    uVar13, (char)lVar14, (char)lVar15, (char)lVar16,
				    (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
				uVar17 = local_2c;
				if ((lVar5 + 0x10000U & 0xffffffff) == 0xffff) {
					uVar17 = local_2c;
					uVar6 = TraceLastError(lVar5, param_2, CONCAT71(uVar8, uVar9), CONCAT71(uVar10, uVar11),
					    CONCAT71(uVar12, uVar13), (int)lVar14, (int)lVar15, (int)lVar16,
					    in_stack_ffffffc8);
					param_2 = (longlong)(int)uVar6;
					app_fatal(*(int *)(local_2c - 0x62c0), param_2, CONCAT71(uVar8, uVar9),
					    CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13), (int)lVar14, (int)lVar15,
					    (int)lVar16, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffd8,
					    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8,
					    in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
				}
				CloseHandle((char)*(undefined4 *)(local_2c - 0x4ed8), (char)param_2, uVar9, uVar11, uVar13,
				    (char)lVar14, (char)lVar15, (char)lVar16, (char)in_stack_ffffffc8, in_stack_ffffffcf, uVar17);
				*(undefined4 *)(uVar17 - 0x4ed8) = 0;
			}
		}
		CloseHandle((char)*(undefined4 *)(uVar17 - 0x4edc), (char)param_2, uVar9, uVar11, uVar13,
		    (char)lVar14, (char)lVar15, (char)lVar16, (char)in_stack_ffffffc8, in_stack_ffffffcf,
		    uVar17);
		uVar4 = (ulonglong)uVar17;
		*(undefined4 *)(uVar17 - 0x4edc) = 0;
		while (iVar3 = (int)uVar4, *(int *)(iVar3 + -0x4ed0) != 0) {
			puVar1 = *(undefined4 **)(iVar3 + -0x4ed0);
			uVar2 = *puVar1;
			*(undefined4 *)(iVar3 + -0x4ed0) = 0;
			mem_free_dbg(ZEXT48(puVar1), (char)param_2, uVar9, uVar11, uVar13, (char)lVar14, (char)lVar15,
			    (char)lVar16, in_stack_ffffffc8);
			*(undefined4 *)((int)uVar4 + -0x4ed0) = uVar2;
		}
	}
	return;
}
