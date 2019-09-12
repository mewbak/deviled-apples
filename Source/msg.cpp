
TMegaPkt *msg_get_next_packet(void)

{
	TMegaPkt *pTVar1;
	uint uVar2;
	int iVar3;
	longlong lVar4;
	BYTE *pBVar5;
	ulonglong uVar6;
	uint *puVar7;

	lVar4 = 0x100f8fd0;
	pBVar5 = DiabloAllocPtr(0x7d08);
	iVar3 = (int)lVar4;
	*(BYTE **)(iVar3 + -0x4d3c) = pBVar5;
	uVar6 = lVar4 - 0x4d38;
	**(undefined4 **)(iVar3 + -0x4d3c) = 0;
	pTVar1 = *(TMegaPkt **)(iVar3 + -0x4d3c);
	pTVar1->dwSpaceLeft = 32000;
	do {
		puVar7 = (uint *)uVar6;
		uVar2 = *puVar7;
		uVar6 = (ulonglong)uVar2;
	} while (uVar2 != 0);
	*puVar7 = *(uint *)(iVar3 + -0x4d3c);
	return pTVar1;
}

void msg_free_packets(void)

{
	undefined4 *p;
	int iVar1;
	undefined8 uVar2;

	uVar2 = 0x100f8fd0;
	while (iVar1 = (int)uVar2, *(int *)(iVar1 + -0x4d38) != 0) {
		p = *(undefined4 **)(iVar1 + -0x4d38);
		*(undefined4 *)(iVar1 + -0x4d3c) = *p;
		*(undefined4 *)(iVar1 + -0x4d38) = 0;
		mem_free_dbg(p);
		*(undefined4 *)((int)uVar2 + -0x4d38) = *(undefined4 *)((int)uVar2 + -0x4d3c);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void msg_pre_packet(void)

{
	undefined4 *puVar1;
	byte *pbVar2;
	int *piVar3;
	DWORD DVar4;
	int iVar5;
	undefined4 *pCmd;
	ulonglong uVar6;

	uVar6 = 0xffffffffffffffff;
	puVar1 = _DAT_100f4298;
	while (puVar1 != (undefined4 *)0x0) {
		pCmd = puVar1 + 2;
		iVar5 = 32000;
		while (iVar5 != puVar1[1]) {
			if (*(char *)pCmd == '^') {
				uVar6 = (ulonglong) * (byte *)((int)pCmd + 1);
				iVar5 = iVar5 + -2;
				pCmd = (undefined4 *)((int)pCmd + 2);
			} else {
				if (*(char *)pCmd == '_') {
					iVar5 = iVar5 + -6;
					*(uint *)((int)pCmd + 2) = (uint) * (byte *)((int)pCmd + 5) << 0x18 | (uint) * (byte *)(pCmd + 1) << 0x10 | (uint) * (byte *)((int)pCmd + 3) << 8 | (uint) * (byte *)((int)pCmd + 2);
					pbVar2 = (byte *)((int)pCmd + 1);
					piVar3 = (int *)((int)pCmd + 2);
					pCmd = (undefined4 *)((int)pCmd + 6);
					multi_player_left((uint)*pbVar2, *piVar3);
				} else {
					DVar4 = ParseCmd((int)uVar6, (TCmd *)pCmd);
					pCmd = (undefined4 *)((int)pCmd + DVar4);
					iVar5 = iVar5 - DVar4;
				}
			}
		}
		puVar1 = (undefined4 *)*puVar1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void msg_send_packet(int pnum, void *packet, DWORD dwSize)

{
	char cVar1;
	int iVar2;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	int local_3c;
	undefined local_18;
	undefined local_17;

	iVar2 = 0x100f8fd0;
	if (pnum != _DAT_100f4290) {
		local_18 = 0x5e;
		local_17 = (undefined)pnum;
		iVar2 = 0x100f8fd0;
		_DAT_100f4290 = pnum;
		msg_send_packet(pnum, &local_18, 2);
	}
	if (*(uint *)(*(int *)(iVar2 + -0x4d3c) + 4) < dwSize) {
		msg_get_next_packet();
	}
	cVar1 = (char)*(int *)(iVar2 + -0x4d3c);
	CopyMemory((cVar1 + '\b') - (char)*(undefined4 *)(*(int *)(iVar2 + -0x4d3c) + 4), (char)packet, (char)dwSize, cVar1,
	    in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	*(int *)(*(int *)(local_3c + -0x4d3c) + 4) = *(int *)(*(int *)(local_3c + -0x4d3c) + 4) - dwSize;
	return;
}

void msg_send_drop_pkt(int pnum, int reason)

{
	TFakeDropPlr cmd;

	cmd.bCmd = '_';
	cmd.bPlr = (BYTE)pnum;
	cmd.dwReason = reason;
	msg_send_packet(pnum, &cmd, 6);
	return;
}

int msg_wait_for_turns(void)

{
	uint uVar1;
	int iVar2;
	BOOL BVar3;
	DWORD DVar4;
	DWORD DVar5;
	int local_3c;
	BOOL BStack24;
	uint local_14[5];

	iVar2 = 0x100f8fd0;
	if (DAT_100f42a1 == '\0') {
		nthread_send_and_recv_turn(0, 0);
		BVar3 = SNetGetOwnerTurnsWaiting(local_14);
		if ((BVar3 == 0) && (DVar4 = SErrGetLastError(), DVar4 == 0x85100070)) {
			return 100;
		}
		DVar5 = GetTickCount();
		if ((DVar5 - *(int *)(local_3c + -0x4d34) < 0x7d1) && (local_14[0] < **(uint **)(local_3c + -0x7060))) {
			return 0;
		}
		*(char *)(local_3c + -0x4d2f) = *(char *)(local_3c + -0x4d2f) + '\x01';
		iVar2 = local_3c;
	}
	multi_process_network_packets();
	nthread_send_and_recv_turn(0, 0);
	BVar3 = nthread_has_500ms_passed(0);
	if (BVar3 != 0) {
		nthread_recv_turns(&BStack24);
	}
	if (**(char **)(iVar2 + -0x7064) == '\0') {
		if (3 < DAT_1017de91) {
			*(undefined *)(iVar2 + -0x4d28) = 0x4c;
			*(undefined *)(iVar2 + -0x4d2f) = 0;
			DAT_1017de91 = (byte) * *(undefined4 **)(iVar2 + -0x77ac);
			nthread_set_turn_upper_bit();
		}
		if (*(byte *)(iVar2 + -0x4d2f) == 0x14) {
			*(undefined *)(iVar2 + -0x4d2f) = 0x15;
			iVar2 = 99;
		} else {
			uVar1 = (int)((uint) * (byte *)(iVar2 + -0x4d2f) * 100) / 0x15;
			iVar2 = uVar1 + (uVar1 >> 0x1f);
		}
	} else {
		iVar2 = 100;
	}
	return iVar2;
}

// WARNING: Type propagation algorithm not settling
// WARNING: Unknown calling convention yet parameter storage is locked

BOOL msg_wait_resync(void)

{
	int iVar1;
	DWORD DVar2;
	BOOL BVar3;
	int local_2c;

	iVar1 = 0x100f8fd0;
	msg_get_next_packet();
	*(undefined *)(iVar1 + -0x4d28) = 0x4c;
	*(undefined *)(iVar1 + -0x4d2f) = 0;
	gbBufferMsgs = 1;
	*(undefined4 *)(iVar1 + -0x4d40) = 0xffffffff;
	DVar2 = GetTickCount();
	*(DWORD *)(local_2c + -0x4d34) = DVar2;
	BVar3 = UiProgressDialog((HWND)(*(HWND *)(local_2c + -0x780c))->unused, *(char **)(local_2c + -0x5c6c), 1,
	    *(void **)(local_2c + -0x5c70), 0x14);
	gbBufferMsgs = 0;
	if (BVar3 == 0) {
		msg_free_packets();
		BVar3 = 0;
	} else {
		if (**(char **)(local_2c + -0x7064) == '\0') {
			if (*(char *)(local_2c + -0x4d2f) == '\x15') {
				BVar3 = 1;
			} else {
				DrawDlg(*(char **)(local_2c + -0x5c78));
				msg_free_packets();
				BVar3 = 0;
			}
		} else {
			DrawDlg(*(char **)(local_2c + -0x5c74));
			msg_free_packets();
			BVar3 = 0;
		}
	}
	return BVar3;
}

void msg_process_net_packets(void)

{
	if (gbMaxPlayers != '\x01') {
		gbBufferMsgs = 2;
		msg_pre_packet();
		gbBufferMsgs = 0;
		msg_free_packets();
	}
	return;
}

BYTE *DeltaExportItem(BYTE *dst, TCmdPItem *src)

{
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined *puVar2;
	longlong lVar1;
	longlong lVar3;
	int iVar4;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	lVar3 = (longlong)(int)src;
	lVar1 = (longlong)(int)dst;
	iVar4 = 0;
	do {
		puVar2 = (undefined *)lVar1;
		if (*(char *)lVar3 == -1) {
			*puVar2 = 0xff;
			lVar1 = lVar1 + 1;
		} else {
			CopyMemory((char)lVar1, (char)lVar3, 0x16, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb,
			    in_stack_ffffffbf, local_3c);
			*(ushort *)(puVar2 + 3) = CONCAT11(puVar2[4], puVar2[3]);
			*(ushort *)(puVar2 + 5) = CONCAT11(puVar2[6], puVar2[5]);
			*(uint *)(puVar2 + 7) = (uint)(byte)puVar2[10] << 0x18 | (uint)(byte)puVar2[9] << 0x10 | (uint)(byte)puVar2[8] << 8 | (uint)(byte)puVar2[7];
			*(ushort *)(puVar2 + 0x10) = CONCAT11(puVar2[0x11], puVar2[0x10]);
			*(uint *)(puVar2 + 0x12) = (uint)(byte)puVar2[0x15] << 0x18 | (uint)(byte)puVar2[0x14] << 0x10 | (uint)(byte)puVar2[0x13] << 8 | (uint)(byte)puVar2[0x12];
			lVar1 = lVar1 + 0x16;
		}
		iVar4 = iVar4 + 1;
		lVar3 = lVar3 + 0x16;
	} while (iVar4 < 0x7f);
	return (BYTE *)lVar1;
}

BYTE *DeltaImportItem(BYTE *src, TCmdPItem *dst)

{
	int iVar1;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	longlong lVar2;
	longlong lVar3;
	int iVar4;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	lVar3 = (longlong)(int)dst;
	lVar2 = (longlong)(int)src;
	iVar4 = 0;
	do {
		if (*(char *)lVar2 == -1) {
			FillMemory((char)lVar3, 0x16, 0xff, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb,
			    in_stack_ffffffbf, local_3c);
			lVar2 = lVar2 + 1;
		} else {
			CopyMemory((char)lVar3, (char)lVar2, 0x16, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb,
			    in_stack_ffffffbf, local_3c);
			iVar1 = (int)lVar3;
			*(undefined2 *)(iVar1 + 3) = CONCAT11(*(undefined *)(iVar1 + 4), *(undefined *)(iVar1 + 3));
			*(undefined2 *)(iVar1 + 5) = CONCAT11(*(undefined *)(iVar1 + 6), *(undefined *)(iVar1 + 5));
			*(uint *)(iVar1 + 7) = (uint) * (byte *)(iVar1 + 10) << 0x18 | (uint) * (byte *)(iVar1 + 9) << 0x10 | (uint) * (byte *)(iVar1 + 8) << 8 | (uint) * (byte *)(iVar1 + 7);
			*(undefined2 *)(iVar1 + 0x10) = CONCAT11(*(undefined *)(iVar1 + 0x11), *(undefined *)(iVar1 + 0x10));
			lVar2 = lVar2 + 0x16;
			*(uint *)(iVar1 + 0x12) = (uint) * (byte *)(iVar1 + 0x15) << 0x18 | (uint) * (byte *)(iVar1 + 0x14) << 0x10 | (uint) * (byte *)(iVar1 + 0x13) << 8 | (uint) * (byte *)(iVar1 + 0x12);
		}
		iVar4 = iVar4 + 1;
		lVar3 = lVar3 + 0x16;
	} while (iVar4 < 0x7f);
	return (BYTE *)lVar2;
}

BYTE *DeltaExportObject(BYTE *dst, DObjectStr *src)

{
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	CopyMemory(
	    (char)dst, (char)src, 0x7f, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	return dst + 0x7f;
}

BYTE *DeltaImportObject(BYTE *src, DObjectStr *dst)

{
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	CopyMemory(
	    (char)dst, (char)src, 0x7f, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	return src + 0x7f;
}

BYTE *DeltaExportMonster(BYTE *dst, DMonsterStr *src)

{
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined *puVar2;
	longlong lVar1;
	longlong lVar3;
	int iVar4;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	lVar3 = (longlong)(int)src;
	lVar1 = (longlong)(int)dst;
	iVar4 = 0;
	do {
		puVar2 = (undefined *)lVar1;
		if (*(char *)lVar3 == -1) {
			*puVar2 = 0xff;
			lVar1 = lVar1 + 1;
		} else {
			CopyMemory((char)lVar1, (char)lVar3, 9, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb,
			    in_stack_ffffffbf, local_3c);
			*(uint *)(puVar2 + 5) = (uint)(byte)puVar2[8] << 0x18 | (uint)(byte)puVar2[7] << 0x10 | (uint)(byte)puVar2[6] << 8 | (uint)(byte)puVar2[5];
			lVar1 = lVar1 + 9;
		}
		iVar4 = iVar4 + 1;
		lVar3 = lVar3 + 9;
	} while (iVar4 < 200);
	return (BYTE *)lVar1;
}

BYTE *DeltaImportMonster(BYTE *src, DMonsterStr *dst)

{
	int iVar1;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	longlong lVar2;
	longlong lVar3;
	int iVar4;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	lVar3 = (longlong)(int)dst;
	lVar2 = (longlong)(int)src;
	iVar4 = 0;
	do {
		if (*(char *)lVar2 == -1) {
			FillMemory((char)lVar3, 9, 0xff, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb, in_stack_ffffffbf,
			    local_3c);
			lVar2 = lVar2 + 1;
		} else {
			CopyMemory((char)lVar3, (char)lVar2, 9, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb,
			    in_stack_ffffffbf, local_3c);
			iVar1 = (int)lVar3;
			lVar2 = lVar2 + 9;
			*(uint *)(iVar1 + 5) = (uint) * (byte *)(iVar1 + 8) << 0x18 | (uint) * (byte *)(iVar1 + 7) << 0x10 | (uint) * (byte *)(iVar1 + 6) << 8 | (uint) * (byte *)(iVar1 + 5);
		}
		iVar4 = iVar4 + 1;
		lVar3 = lVar3 + 9;
	} while (iVar4 < 200);
	return (BYTE *)lVar2;
}

BYTE *DeltaExportJunk(BYTE *dst)

{
	int iVar1;
	int iVar2;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	longlong lVar3;
	int iVar4;
	int iVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	int local_3c;

	lVar3 = (longlong)(int)dst;
	iVar2 = 0x100f8fd0;
	uVar6 = ZEXT48(&DAT_101795ad);
	iVar4 = 0;
	uVar7 = uVar6;
	do {
		if (*(char *)uVar7 == -1) {
			*(undefined *)lVar3 = 0xff;
			lVar3 = lVar3 + 1;
		} else {
			iVar2 = local_3c;
			CopyMemory((char)lVar3, (char)uVar7, 5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb,
			    in_stack_ffffffbf, local_3c);
			lVar3 = lVar3 + 5;
			local_3c = iVar2;
		}
		iVar4 = iVar4 + 1;
		uVar7 = uVar7 + 5;
	} while (iVar4 < 4);
	iVar4 = *(int *)(iVar2 + -0x706c);
	iVar5 = 0;
	iVar2 = *(int *)(iVar2 + -0x7604);
	do {
		if ((*(uint *)(iVar4 + 8) & 1) != 0) {
			iVar1 = (int)uVar6;
			*(undefined *)(iVar1 + 0x15) = (char)*(undefined4 *)(iVar2 + 0x14);
			*(undefined *)(iVar1 + 0x14) = *(undefined *)(iVar2 + 2);
			*(undefined *)(iVar1 + 0x16) = *(undefined *)(iVar2 + 0xf);
			CopyMemory((char)lVar3, (char)uVar6 + '\x14', 3, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb,
			    in_stack_ffffffbf, local_3c);
			lVar3 = lVar3 + 3;
			uVar6 = uVar6 + 3;
		}
		iVar5 = iVar5 + 1;
		iVar2 = iVar2 + 0x18;
		iVar4 = iVar4 + 0x14;
	} while (iVar5 < 0x10);
	return (BYTE *)lVar3;
}

void DeltaImportJunk(BYTE *src)

{
	int iVar1;
	int iVar2;
	ulonglong in_r6;
	ulonglong in_r7;
	ulonglong in_r8;
	undefined in_r9;
	undefined in_r10;
	longlong lVar3;
	int iVar4;
	byte *pbVar6;
	ulonglong uVar5;
	int i;
	ulonglong uVar7;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	int local_3c;

	lVar3 = (longlong)(int)src;
	i = 0;
	uVar7 = ZEXT48(&DAT_101795ad);
	uVar5 = uVar7;
	do {
		iVar2 = local_3c;
		if (*(char *)lVar3 == -1) {
			FillMemory((char)uVar5, 5, 0xff, (char)in_r6, (char)in_r7, (char)in_r8, in_r9, in_r10, in_stack_ffffffbb,
			    in_stack_ffffffbf, iVar2);
			lVar3 = lVar3 + 1;
			in_r6 = 0;
			in_r7 = 0;
			in_r8 = 0;
			local_3c = iVar2;
			SetPortalStats(i, 0, 0, 0, 0, 0);
		} else {
			CopyMemory((char)uVar5, (char)lVar3, 5, (char)in_r6, (char)in_r7, (char)in_r8, in_r9, in_r10,
			    in_stack_ffffffbb, in_stack_ffffffbf, iVar2);
			pbVar6 = (byte *)uVar5;
			in_r6 = (ulonglong)pbVar6[1];
			in_r7 = (ulonglong)pbVar6[2];
			in_r8 = (ulonglong)pbVar6[3];
			lVar3 = lVar3 + 5;
			local_3c = iVar2;
			SetPortalStats(i, 1, (uint)*pbVar6, (uint)pbVar6[1], (uint)pbVar6[2], (uint)pbVar6[3]);
		}
		i = i + 1;
		uVar5 = uVar5 + 5;
	} while (i < 4);
	i = *(int *)(iVar2 + -0x706c);
	iVar2 = *(int *)(iVar2 + -0x7604);
	iVar4 = 0;
	do {
		if ((*(uint *)(i + 8) & 1) != 0) {
			CopyMemory((char)uVar7 + '\x14', (char)lVar3, 3, (char)in_r6, (char)in_r7, (char)in_r8, in_r9, in_r10,
			    in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
			iVar1 = (int)uVar7;
			lVar3 = lVar3 + 3;
			*(uint *)(iVar2 + 0x14) = (uint) * (byte *)(iVar1 + 0x15);
			*(undefined *)(iVar2 + 2) = *(undefined *)(iVar1 + 0x14);
			uVar7 = uVar7 + 3;
			*(undefined *)(iVar2 + 0xf) = *(undefined *)(iVar1 + 0x16);
		}
		iVar4 = iVar4 + 1;
		iVar2 = iVar2 + 0x18;
		i = i + 0x14;
	} while (iVar4 < 0x10);
	return;
}

int msg_comp_level(BYTE *buffer, BYTE *end)

{
	int iVar1;
	longlong lVar2;

	lVar2 = ((longlong)(int)end - (longlong)(int)buffer) + -1;
	iVar1 = PkwareCompress(buffer + 1, (int)lVar2);
	*buffer = '\x01' - ((longlong)iVar1 == lVar2);
	return iVar1 + 1;
}

void DeltaExportData(int pnum)

{
	BYTE *buffer;
	BYTE *dst;
	int dwLen;
	undefined8 unaff_r27;
	longlong lVar1;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	TCmdPItem *src;
	undefined8 unaff_r31;
	undefined local_28[20];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	dwLen = 0x100f8fd0;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	if (sgbDeltaChanged != '\0') {
		buffer = DiabloAllocPtr(0x1272);
		lVar1 = 0;
		src = *(TCmdPItem **)(dwLen + -0x5c80);
		do {
			dst = DeltaExportItem(buffer + 1, src);
			dst = DeltaExportObject(dst, (DObjectStr *)(src + 0x7f));
			dst = DeltaExportMonster(dst, (DMonsterStr *)((int)&src[0x84].wValue + 1));
			dwLen = msg_comp_level(buffer, dst);
			dthread_send_delta(pnum, (char)lVar1 + ':', buffer, dwLen);
			lVar1 = lVar1 + 1;
			src = (TCmdPItem *)&src[0xd6].bMDur;
		} while ((int)lVar1 < 0x11);
		dst = DeltaExportJunk(buffer + 1);
		dwLen = msg_comp_level(buffer, dst);
		dthread_send_delta(pnum, 'K', buffer, dwLen);
		mem_free_dbg(buffer);
	}
	local_28[0] = 0;
	dthread_send_delta(pnum, 'L', local_28, 1);
	return;
}

void DeltaImportData(BYTE cmd, DWORD recv_offset)

{
	int iVar1;
	BYTE *src;
	TCmdPItem *dst;

	iVar1 = 0x100f8fd0;
	if (DAT_1015df78 != '\0') {
		iVar1 = 0x100f8fd0;
		PkwareDecompress((void *)0x1015df79, recv_offset, 0x1271);
	}
	if (cmd == 'K') {
		DeltaImportJunk((BYTE *)0x1015df79);
	} else {
		if ((cmd < 0x3a) || (0x4a < cmd)) {
			app_fatal(*(char **)(iVar1 + -0x5c88));
		} else {
			dst = (TCmdPItem *)(*(int *)(iVar1 + -0x5c80) + ((int)(char)cmd - 0x3aU & 0xff) * 0x1271);
			src = DeltaImportItem((BYTE *)0x1015df79, dst);
			src = DeltaImportObject(src, (DObjectStr *)(dst + 0x7f));
			DeltaImportMonster(src, (DMonsterStr *)((int)&dst[0x84].wValue + 1));
		}
	}
	*(undefined *)(iVar1 + -0x4d30) = 1;
	*(char *)(iVar1 + -0x4d2f) = *(char *)(iVar1 + -0x4d2f) + '\x01';
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

DWORD On_DLEVEL(int pnum, TCmd *pCmd)

{
	int iVar1;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	iVar1 = 0x100f8fd0;
	if ((uint)DAT_1017de91 != pnum) {
		if ((pCmd->bCmd != 'L') && ((pCmd->bCmd != ':' || (*(short *)(pCmd + 1) != 0)))) {
			return (uint) * (ushort *)(pCmd + 3) + 5;
		}
		DAT_1017de91 = (byte)pnum;
		DAT_100f42a8 = 'L';
	}
	if (DAT_100f42a8 == 'L') {
		if (pCmd->bCmd == 'L') {
			DAT_100f42a1 = 0x14;
			return (uint) * (ushort *)(pCmd + 3) + 5;
		}
		if ((pCmd->bCmd != ':') || (*(short *)(pCmd + 1) != 0)) {
			return (uint) * (ushort *)(pCmd + 3) + 5;
		}
		_DAT_100f42a4 = 0;
		DAT_100f42a8 = pCmd->bCmd;
	} else {
		if (DAT_100f42a8 != pCmd->bCmd) {
			iVar1 = 0x100f8fd0;
			DeltaImportData(DAT_100f42a8, _DAT_100f42a4);
			if (pCmd->bCmd == 'L') {
				*(undefined *)(iVar1 + -0x4d2f) = 0x14;
				*(undefined *)(iVar1 + -0x4d28) = 0x4c;
				return (uint) * (ushort *)(pCmd + 3) + 5;
			}
			*(undefined4 *)(iVar1 + -0x4d2c) = 0;
			*(BYTE *)(iVar1 + -0x4d28) = pCmd->bCmd;
		}
	}
	CopyMemory((char)*(undefined4 *)(iVar1 + -0x5c84) + (char)*(undefined2 *)(pCmd + 1), (char)pCmd + '\x05',
	    (char)*(undefined2 *)(pCmd + 3), in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffcb, in_stack_ffffffcf,
	    local_2c);
	*(int *)(local_2c + -0x4d2c) = *(int *)(local_2c + -0x4d2c) + (uint) * (ushort *)(pCmd + 3);
	return (DWORD)((uint) * (ushort *)(pCmd + 3) + 5);
}

void delta_init(void)

{
	undefined uVar1;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	sgbDeltaChanged = 0;
	FillMemory(0xad, 0x20, 0xff, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	uVar1 = 0xff;
	FillMemory((char)*(undefined4 *)(local_2c + -0x5c80), 0x81, 0xff, in_r6, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	ZeroMemory((char)*(undefined4 *)(local_2c + -0x5c8c), 0x40, uVar1, in_r6, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	**(undefined4 **)(local_2c + -0x7070) = 0;
	return;
}

void delta_kill_monster(int mi, BYTE x, BYTE y, BYTE bLevel)

{
	int iVar1;

	if (gbMaxPlayers == '\x01') {
		return;
	}
	iVar1 = ((int)(char)bLevel & 0xffU) * 0x1271 + mi * 9;
	sgbDeltaChanged = 1;
	*(BYTE *)(iVar1 + 0x10166795) = x;
	*(BYTE *)(iVar1 + 0x10166796) = y;
	*(undefined *)(iVar1 + 0x10166797) = (char)*(undefined4 *)(mi * 0xe8 + 0x10151a78);
	*(undefined4 *)(iVar1 + 0x1016679a) = 0;
	return;
}

void delta_monster_hp(int mi, int hp, BYTE bLevel)

{
	int iVar1;

	if (gbMaxPlayers == '\x01') {
		return;
	}
	iVar1 = ((int)(char)bLevel & 0xffU) * 0x1271 + mi * 9;
	sgbDeltaChanged = 1;
	if (*(int *)(iVar1 + 0x1016679a) <= hp) {
		sgbDeltaChanged = 1;
		return;
	}
	*(int *)(iVar1 + 0x1016679a) = hp;
	return;
}

void delta_sync_monster(TSyncMonster *pSync, BYTE bLevel)

{
	DMonsterStr *temp_27f31b927bb;

	if (gbMaxPlayers == '\x01') {
		return;
	}
	sgbDeltaChanged = 1;
	temp_27f31b927bb = (DMonsterStr *)(((int)(char)bLevel & 0xffU) * 0x1271 + (uint)pSync->_mndx * 9);
	if (*(int *)((int)&temp_27f31b927bb[0x1c999bb]._mhitpoints + 2) == 0) {
		sgbDeltaChanged = 1;
		return;
	}
	temp_27f31b927bb[0x1c999bb]._mdir = pSync->_mx;
	temp_27f31b927bb[0x1c999bb]._menemy = pSync->_my;
	*(undefined *)((int)&temp_27f31b927bb[0x1c999bb]._mhitpoints + 1) = 0xff;
	*(BYTE *)&temp_27f31b927bb[0x1c999bb]._mhitpoints = pSync->_menemy;
	return;
}

void delta_sync_golem(TCmdGolem *pG, int pnum, BYTE bLevel)

{
	int iVar1;

	if (gbMaxPlayers == '\x01') {
		return;
	}
	iVar1 = ((int)(char)bLevel & 0xffU) * 0x1271 + pnum * 9;
	sgbDeltaChanged = 1;
	*(BYTE *)(iVar1 + 0x10166795) = pG->_mx;
	*(BYTE *)(iVar1 + 0x10166796) = pG->_my;
	*(undefined *)(iVar1 + 0x10166799) = 0xff;
	*(char *)(iVar1 + 0x10166798) = pG->_menemy;
	*(BYTE *)(iVar1 + 0x10166797) = pG->_mdir;
	*(int *)(iVar1 + 0x1016679a) = pG->_mhitpoints;
	return;
}

void delta_leave_sync(BYTE bLevel)

{
	int m;
	undefined8 uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined *puVar5;
	int iVar6;
	int *piVar7;
	undefined in_stack_ffffffab;
	undefined in_stack_ffffffaf;
	undefined4 local_4c;

	uVar1 = 0x100f8fd0;
	if (gbMaxPlayers != '\x01') {
		if (currlevel == 0) {
			iVar2 = GetRndSeed();
			**(int **)((int)uVar1 + -0x75ec) = iVar2;
		}
		if (currlevel != 0) {
			iVar2 = *(int *)((int)uVar1 + -0x5c80);
			piVar7 = *(int **)((int)uVar1 + -0x7628);
			iVar6 = 0;
			while (iVar3 = (int)uVar1, iVar6 < nummonsters) {
				m = *piVar7;
				iVar4 = m * 0xe8;
				if (*(int *)(iVar4 + 0x10151ac8) != 0) {
					*(undefined *)(iVar3 + -0x4d30) = 1;
					puVar5 = (undefined *)(iVar2 + ((int)(char)bLevel & 0xffU) * 0x1271 + m * 9 + 0xb69);
					*puVar5 = (char)*(undefined4 *)(iVar4 + 0x10151a50);
					puVar5[1] = (char)*(undefined4 *)(iVar4 + 0x10151a54);
					puVar5[2] = (char)*(undefined4 *)(iVar4 + 0x10151a78);
					iVar3 = encode_enemy(m);
					puVar5[3] = (char)iVar3;
					*(undefined4 *)(puVar5 + 5) = *(undefined4 *)(iVar4 + 0x10151ac8);
					puVar5[4] = *(undefined *)(iVar4 + 0x10151ad4);
				}
				piVar7 = piVar7 + 1;
				iVar6 = iVar6 + 1;
			}
			CopyMemory((char)*(undefined4 *)(iVar3 + -0x5c8c) + (char)((int)(char)bLevel & 0xffU) * '@',
			    (char)*(undefined4 *)(iVar3 + -0x7798), 0x40, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffab,
			    in_stack_ffffffaf, local_4c);
		}
	}
	return;
}

void delta_sync_object(int oi, BYTE bCmd, BYTE bLevel)

{
	if (gbMaxPlayers == '\x01') {
		return;
	}
	sgbDeltaChanged = 1;
	*(BYTE *)(((int)(char)bLevel & 0xffU) * 0x1271 + oi + 0x10166716) = bCmd;
	return;
}

BOOL delta_get_item(TCmdGItem *pI, BYTE bLevel)

{
	char cVar1;
	int iVar2;
	BOOL BVar3;
	char *pcVar4;
	char *pcVar5;
	longlong lVar6;

	iVar2 = 0x100f8fd0;
	if (gbMaxPlayers == '\x01') {
		BVar3 = 1;
	} else {
		pcVar5 = &DAT_10165c2c + ((int)(char)bLevel & 0xffU) * 0x1271;
		lVar6 = 0x7f;
		pcVar4 = pcVar5;
		do {
			cVar1 = *pcVar4;
			if ((((cVar1 != -1) && (*(WORD *)(pcVar4 + 3) == pI->wIndx)) && (*(WORD *)(pcVar4 + 5) == pI->wCI)) && (*(int *)(pcVar4 + 7) == pI->dwSeed)) {
				if (cVar1 == '\x01') {
					return 1;
				}
				if (cVar1 == '\0') {
					sgbDeltaChanged = 1;
					*pcVar4 = '\x01';
					return 1;
				}
				if (cVar1 == '\x02') {
					sgbDeltaChanged = 1;
					*pcVar4 = -1;
					return 1;
				}
				iVar2 = 0x100f8fd0;
				app_fatal("delta:1");
				break;
			}
			pcVar4 = pcVar4 + 0x16;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
		if ((pI->wCI & 0x8000) == 0) {
			BVar3 = 0;
		} else {
			lVar6 = 0x7f;
			do {
				if (*pcVar5 == -1) {
					*(undefined *)(iVar2 + -0x4d30) = 1;
					*pcVar5 = '\x01';
					pcVar5[1] = pI->x;
					pcVar5[2] = pI->y;
					*(WORD *)(pcVar5 + 3) = pI->wIndx;
					*(WORD *)(pcVar5 + 5) = pI->wCI;
					*(int *)(pcVar5 + 7) = pI->dwSeed;
					pcVar5[0xb] = pI->bId;
					pcVar5[0xc] = pI->bDur;
					pcVar5[0xd] = pI->bMDur;
					pcVar5[0xe] = pI->bCh;
					pcVar5[0xf] = pI->bMCh;
					*(WORD *)(pcVar5 + 0x10) = pI->wValue;
					*(DWORD *)(pcVar5 + 0x12) = pI->dwBuff;
					return 1;
				}
				pcVar5 = pcVar5 + 0x16;
				lVar6 = lVar6 + -1;
			} while (lVar6 != 0);
			BVar3 = 1;
		}
	}
	return BVar3;
}

void delta_put_item(TCmdPItem *pI, int x, int y, BYTE bLevel)

{
	char cVar1;
	undefined8 uVar2;
	longlong lVar3;
	ulonglong uVar4;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	int iVar5;
	char *pcVar7;
	longlong lVar6;
	longlong lVar8;
	undefined in_stack_ffffffab;
	undefined in_stack_ffffffaf;
	undefined4 local_4c;

	lVar3 = (longlong)(char)bLevel;
	uVar2 = 0x100f8fd0;
	uVar4 = ZEXT48(&gbMaxPlayers);
	if (gbMaxPlayers != '\x01') {
		lVar8 = ZEXT48(&DAT_10165c2c) + (ulonglong)((int)(char)bLevel & 0xff) * 0x1271;
		iVar5 = 0;
		lVar6 = lVar8;
		do {
			pcVar7 = (char *)lVar6;
			cVar1 = *pcVar7;
			if ((((cVar1 != '\x01') && (cVar1 != -1)) && (*(WORD *)(pcVar7 + 3) == pI->wIndx)) && ((*(WORD *)(pcVar7 + 5) == pI->wCI && (*(int *)(pcVar7 + 7) == pI->dwSeed)))) {
				if (cVar1 == '\x02') {
					return;
				}
				app_fatal("Trying to drop a floor item?");
			}
			iVar5 = iVar5 + 1;
			lVar6 = lVar6 + 0x16;
		} while (iVar5 < 0x7f);
		lVar6 = 0x7f;
		do {
			pcVar7 = (char *)lVar8;
			if (*pcVar7 == -1) {
				*(undefined *)((int)uVar2 + -0x4d30) = 1;
				CopyMemory((char)lVar8, (char)pI, 0x16, (char)lVar3, (char)uVar4, in_r8, in_r9, in_r10,
				    in_stack_ffffffab, in_stack_ffffffaf, local_4c);
				*pcVar7 = '\x02';
				pcVar7[1] = (char)x;
				pcVar7[2] = (char)y;
				return;
			}
			lVar8 = lVar8 + 0x16;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
	}
	return;
}

BOOL delta_portal_inited(int i)

{
	if ((&DAT_101795ad)[i * 5] == -1) {
		return 1;
	}
	return 0;
}

BOOL delta_quest_inited(int i)

{
	if (*(char *)(i * 3 + 0x101795c1) == -1) {
		return 0;
	}
	return 1;
}

void DeltaAddItem(int ii)

{
	char cVar1;
	longlong lVar2;
	char *pcVar4;
	longlong lVar3;
	longlong lVar5;

	if (gbMaxPlayers == '\x01') {
		return;
	}
	ii = ii * 0x170;
	lVar2 = ZEXT48(&DAT_10165c2c) + (ulonglong)currlevel * 0x1271;
	lVar5 = 0x7f;
	lVar3 = lVar2;
	do {
		pcVar4 = (char *)lVar3;
		cVar1 = *pcVar4;
		if ((((cVar1 != -1) && ((uint) * (ushort *)(pcVar4 + 3) == *(uint *)(ii + 0x1013daf0))) && (*(short *)(pcVar4 + 5) == *(short *)(ii + 0x1013d98c))) && (*(int *)(pcVar4 + 7) == *(int *)(&DAT_1013d988 + ii))) {
			if (cVar1 == '\x01') {
				return;
			}
			if (cVar1 == '\0') {
				return;
			}
		}
		lVar3 = lVar3 + 0x16;
		lVar5 = lVar5 + -1;
		if (lVar5 == 0) {
			lVar3 = 0x7f;
			do {
				pcVar4 = (char *)lVar2;
				if (*pcVar4 == -1) {
					sgbDeltaChanged = 1;
					*pcVar4 = '\0';
					pcVar4[1] = (char)*(undefined4 *)(ii + 0x1013d994);
					pcVar4[2] = (char)*(undefined4 *)(ii + 0x1013d998);
					*(short *)(pcVar4 + 3) = (short)*(undefined4 *)(ii + 0x1013daf0);
					*(undefined2 *)(pcVar4 + 5) = *(undefined2 *)(ii + 0x1013d98c);
					*(int *)(pcVar4 + 7) = *(int *)(&DAT_1013d988 + ii);
					pcVar4[0xb] = (char)*(undefined4 *)(ii + 0x1013d9c0);
					pcVar4[0xc] = (char)*(undefined4 *)(ii + 0x1013da74);
					pcVar4[0xd] = (char)*(undefined4 *)(ii + 0x1013da78);
					pcVar4[0xe] = (char)*(undefined4 *)(ii + 0x1013da6c);
					pcVar4[0xf] = (char)*(undefined4 *)(ii + 0x1013da70);
					*(short *)(pcVar4 + 0x10) = (short)*(undefined4 *)(ii + 0x1013da4c);
					return;
				}
				lVar2 = lVar2 + 0x16;
				lVar3 = lVar3 + -1;
			} while (lVar3 != 0);
			return;
		}
	} while (true);
}

void DeltaSaveLevel(void)

{
	byte bLevel;

	bLevel = currlevel;
	if (gbMaxPlayers != '\x01') {
		if (myplr != 0) {
			plr[0]._pGFXLoad = 0;
		}
		if (myplr != 1) {
			plr[1]._pDAnim[2] = (uchar *)0x0;
		}
		if (myplr != 2) {
			plr[2].InvBody[0]._iAC = 0;
		}
		if (myplr != 3) {
			plr[3].InvBody[1]._iIName._3_4_ = 0;
		}
		*(undefined *)((int)plr + myplr * 0x55ec + (uint)currlevel + 0x1f0) = 1;
		delta_leave_sync(bLevel);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DeltaLoadLevel(void)

{
	byte bVar1;
	byte bVar2;
	bool bVar3;
	int ii;
	ulonglong uVar4;
	int ii_00;
	BOOL BVar5;
	char *pcVar6;
	int iVar7;
	ulonglong in_r6;
	undefined8 in_r7;
	undefined8 in_r8;
	undefined8 in_r9;
	undefined8 in_r10;
	ulonglong uVar8;
	int *piVar9;
	int i;
	undefined *puVar10;
	longlong lVar11;
	int i_00;
	longlong lVar12;
	ulonglong uVar13;
	ulonglong uVar14;
	ulonglong uVar15;
	longlong lVar16;
	int ivalue;
	int ibuff;
	uint local_7c;

	uVar4 = 0x100f8fd0;
	uVar8 = ZEXT48(&DAT_1013d788);
	if (gbMaxPlayers != '\x01') {
		_DAT_101795d0 = 1;
		if (currlevel != 0) {
			puVar10 = &DAT_10151a30;
			lVar11 = 0;
			i = 0;
			while (i_00 = (int)lVar11, i_00 < nummonsters) {
				if (*(char *)((uint)currlevel * 0x1271 + i + 0x10166795) != -1) {
					M_ClearSquares(i_00);
					*(uint *)(puVar10 + 0x20) = (uint) * (byte *)((uint)currlevel * 0x1271 + i + 0x10166795);
					*(uint *)(puVar10 + 0x24) = (uint) * (byte *)((uint)currlevel * 0x1271 + i + 0x10166796);
					*(undefined4 *)(puVar10 + 0x30) = *(undefined4 *)(puVar10 + 0x20);
					*(undefined4 *)(puVar10 + 0x34) = *(undefined4 *)(puVar10 + 0x24);
					*(undefined4 *)(puVar10 + 0x28) = *(undefined4 *)(puVar10 + 0x20);
					*(undefined4 *)(puVar10 + 0x2c) = *(undefined4 *)(puVar10 + 0x24);
					ii_00 = *(int *)((uint)currlevel * 0x1271 + i + 0x1016679a);
					if (ii_00 != -1) {
						*(int *)(puVar10 + 0x98) = ii_00;
					}
					ii_00 = (uint)currlevel * 0x1271 + i;
					if (*(int *)(ii_00 + 0x1016679a) == 0) {
						*(uint *)(puVar10 + 0x30) = (uint) * (byte *)(ii_00 + 0x10166795);
						*(uint *)(puVar10 + 0x34) = (uint) * (byte *)((uint)currlevel * 0x1271 + i + 0x10166796);
						M_ClearSquares(i_00);
						if (puVar10[0x9c] != '\x1b') {
							if (puVar10[0xc0] == '\0') {
								in_r6 = (ulonglong) * (uint *)(puVar10 + 0x48);
								AddDead(*(int *)(puVar10 + 0x20), *(int *)(puVar10 + 0x24),
								    *(char *)(*(int *)(puVar10 + 0xe0) + 0x1fd), *(uint *)(puVar10 + 0x48));
							} else {
								in_r6 = (ulonglong) * (uint *)(puVar10 + 0x48);
								AddDead(*(int *)(puVar10 + 0x20), *(int *)(puVar10 + 0x24), puVar10[0xc2],
								    *(uint *)(puVar10 + 0x48));
							}
						}
						*(undefined4 *)(puVar10 + 0x70) = 1;
						M_UpdateLeader(i_00);
					} else {
						decode_enemy(i_00, (uint) * (byte *)(ii_00 + 0x10166798));
						ii_00 = *(int *)(puVar10 + 0x20);
						if (((ii_00 != 0) && (ii_00 != 1)) || (*(int *)(puVar10 + 0x24) != 0)) {
							*(short *)(_DAT_1012f1b4 + ii_00 * 0xe0 + *(int *)(puVar10 + 0x24) * 2) = (short)lVar11 + 1;
						}
						if (i_00 < 4) {
							MAI_Golum(i_00);
							*(uint *)(puVar10 + 0xa0) = *(uint *)(puVar10 + 0xa0) | 0x10;
							*(uint *)(puVar10 + 0xa0) = *(uint *)(puVar10 + 0xa0) | 0x20;
						} else {
							M_StartStand(i_00, *(int *)(puVar10 + 0x48));
						}
						puVar10[0xa4] = *(undefined *)((uint)currlevel * 0x1271 + i + 0x10166799);
					}
				}
				i = i + 9;
				puVar10 = puVar10 + 0xe8;
				lVar11 = lVar11 + 1;
			}
			CopyMemory((char)*(undefined4 *)((int)uVar4 + -0x7798),
			    (char)*(undefined4 *)((int)uVar4 + -0x5c8c) + currlevel * '@', 0x40, (char)in_r6, (char)in_r7,
			    (char)in_r8, (char)in_r9, (char)in_r10, (char)ivalue, (char)ibuff, local_7c);
			uVar4 = (ulonglong)local_7c;
		}
		i = 0;
		i_00 = 0;
		do {
			ii_00 = (uint)currlevel * 0x1271 + i_00;
			if ((&DAT_10165c2c)[ii_00] != -1) {
				if (((&DAT_10165c2c)[ii_00] == '\x01') && (ii_00 = FindGetItem((uint) * (ushort *)(ii_00 + 0x10165c2f), *(WORD *)(ii_00 + 0x10165c31), *(int *)(ii_00 + 0x10165c33)), ii_00 != -1)) {
					pcVar6 = (char *)(_DAT_1012f1a8 + *(int *)(ii_00 * 0x170 + 0x1013d994) * 0x70 + *(int *)(ii_00 * 0x170 + 0x1013d998));
					if (ii_00 + 1 == (int)*pcVar6) {
						*pcVar6 = '\0';
					}
					DeleteItem(ii_00, i);
				}
				ii = _DAT_1013d58c;
				ii_00 = (uint)currlevel * 0x1271 + i_00;
				if ((&DAT_10165c2c)[ii_00] == '\x02') {
					iVar7 = *(int *)(&DAT_1013d58c + (0x7e - _DAT_1013d984) * 4);
					*(int *)((int)uVar8 + _DAT_1013d984 * 4) = _DAT_1013d58c;
					_DAT_1013d58c = iVar7;
					if (*(ushort *)(ii_00 + 0x10165c2f) == 0x17) {
						RecreateEar(ii, *(WORD *)(ii_00 + 0x10165c31), *(int *)(ii_00 + 0x10165c33),
						    (uint) * (byte *)(ii_00 + 0x10165c37), (uint) * (byte *)(ii_00 + 0x10165c38),
						    (uint) * (byte *)(ii_00 + 0x10165c39), (uint) * (byte *)(ii_00 + 0x10165c3a),
						    (uint) * (byte *)(ii_00 + 0x10165c3b), ivalue, ibuff);
					} else {
						RecreateItem(ii, (uint) * (ushort *)(ii_00 + 0x10165c2f), *(WORD *)(ii_00 + 0x10165c31),
						    *(int *)(ii_00 + 0x10165c33), (uint) * (ushort *)(ii_00 + 0x10165c3c));
						ii_00 = (uint)currlevel * 0x1271 + i_00;
						if (*(char *)(ii_00 + 0x10165c37) != '\0') {
							*(undefined4 *)(ii * 0x170 + 0x1013d9c0) = 1;
						}
						iVar7 = ii * 0x170;
						*(uint *)(iVar7 + 0x1013da74) = (uint) * (byte *)(ii_00 + 0x10165c38);
						*(uint *)(iVar7 + 0x1013da78) = (uint) * (byte *)(ii_00 + 0x10165c39);
						*(uint *)(iVar7 + 0x1013da6c) = (uint) * (byte *)(ii_00 + 0x10165c3a);
						*(uint *)(iVar7 + 0x1013da70) = (uint) * (byte *)(ii_00 + 0x10165c3b);
					}
					ii_00 = (uint)currlevel * 0x1271 + i_00;
					bVar1 = *(byte *)(ii_00 + 0x10165c2d);
					uVar14 = (ulonglong)bVar1;
					uVar14._4_4_ = (uint)bVar1;
					bVar2 = *(byte *)(ii_00 + 0x10165c2e);
					uVar13 = (ulonglong)bVar2;
					uVar13._4_4_ = (uint)bVar2;
					BVar5 = CanPut((uint)bVar1, (uint)bVar2);
					if (BVar5 == 0) {
						bVar3 = false;
						lVar11 = 1;
						while (true) {
							uVar13._4_4_ = (uint)uVar13;
							uVar14._4_4_ = (uint)uVar14;
							ii_00 = (int)lVar11;
							if ((0x31 < ii_00) || (bVar3))
								break;
							lVar12 = -lVar11;
							while (((int)lVar12 <= ii_00 && (!bVar3))) {
								uVar15 = uVar13 + lVar12;
								lVar16 = -lVar11;
								while (((int)lVar16 <= ii_00 && (!bVar3))) {
									BVar5 = CanPut((int)(uVar14 + lVar16), (int)uVar15);
									if (BVar5 != 0) {
										bVar3 = true;
										uVar13 = uVar15;
										uVar14 = uVar14 + lVar16;
									}
									lVar16 = lVar16 + 1;
								}
								lVar12 = lVar12 + 1;
							}
							lVar11 = lVar11 + 1;
						}
					}
					ii_00 = ii * 0x170;
					*(uint *)(ii_00 + 0x1013d994) = uVar14._4_4_;
					*(uint *)(ii_00 + 0x1013d998) = uVar13._4_4_;
					*(char *)(_DAT_1012f1a8 + *(int *)(ii_00 + 0x1013d994) * 0x70 + *(uint *)(ii_00 + 0x1013d998)) = (char)ii + '\x01';
					RespawnItem(ii, 0);
					_DAT_1013d984 = _DAT_1013d984 + 1;
				}
			}
			ii_00 = (int)uVar4;
			i = i + 1;
			i_00 = i_00 + 0x16;
		} while (i < 0x7f);
		if (currlevel != 0) {
			i = 0;
			do {
				bVar1 = *(byte *)((uint)currlevel * 0x1271 + i + 0x10166716);
				if (bVar1 == 0x2f) {
					SyncBreakObj(-1, i);
				} else {
					if ((bVar1 < 0x2f) && (0x2a < bVar1)) {
						SyncOpObject(-1, (uint)bVar1, i);
					}
				}
				i = i + 1;
			} while (i < 0x7f);
			piVar9 = *(int **)((int)uVar4 + -0x7190);
			i = 0;
			while (ii_00 = (int)uVar4, i < **(int **)(ii_00 + -0x7194)) {
				i_00 = *(int *)(*(int *)(ii_00 + -0x7688) + *piVar9 * 0x78);
				if ((i_00 == 0x35) || (i_00 == 0x36)) {
					Obj_Trap(*piVar9);
				}
				piVar9 = piVar9 + 1;
				i = i + 1;
			}
		}
		**(undefined4 **)(ii_00 + -0x7070) = 0;
	}
	return;
}

void NetSendCmd(BOOL bHiPri, BYTE bCmd)

{
	BYTE local_8[8];

	if (bHiPri == 0) {
		local_8[0] = bCmd;
		NetSendLoPri(local_8, '\x01');
	} else {
		local_8[0] = bCmd;
		NetSendHiPri(local_8, '\x01');
	}
	return;
}

void NetSendCmdGolem(BYTE mx, BYTE my, BYTE dir, BYTE menemy, int hp, BYTE cl)

{
	BYTE local_18;
	BYTE local_17;
	BYTE local_16;
	BYTE local_15;
	BYTE local_14;
	uint local_13;
	BYTE local_f;

	local_18 = 'Z';
	local_13 = hp << 0x18 | ((uint)hp >> 8 & 0xff) << 0x10 | ((uint)hp >> 0x10 & 0xff) << 8 | (uint)hp >> 0x18;
	local_17 = mx;
	local_16 = my;
	local_15 = dir;
	local_14 = menemy;
	local_f = cl;
	NetSendLoPri(&local_18, '\n');
	return;
}

void NetSendCmdLoc(BOOL bHiPri, BYTE bCmd, BYTE x, BYTE y)

{
	BYTE local_8;
	BYTE local_7;
	BYTE local_6;

	if (bHiPri == 0) {
		local_8 = bCmd;
		local_7 = x;
		local_6 = y;
		NetSendLoPri(&local_8, '\x03');
	} else {
		local_8 = bCmd;
		local_7 = x;
		local_6 = y;
		NetSendHiPri(&local_8, '\x03');
	}
	return;
}

void NetSendCmdLocParam1(BOOL bHiPri, BYTE bCmd, BYTE x, BYTE y, WORD wParam1)

{
	TCmdLocParam1 cmd;

	cmd.wParam1._1_1_ = (undefined)wParam1;
	cmd.wParam1._0_1_ = (undefined)(wParam1 >> 8);
	cmd.wParam1 = CONCAT11((undefined)cmd.wParam1, cmd.wParam1._0_1_);
	if (bHiPri == 0) {
		cmd.bCmd = bCmd;
		cmd.x = x;
		cmd.y = y;
		NetSendLoPri((BYTE *)&cmd, '\x05');
	} else {
		cmd.bCmd = bCmd;
		cmd.x = x;
		cmd.y = y;
		NetSendHiPri((BYTE *)&cmd, '\x05');
	}
	return;
}

// WARNING: Could not reconcile some variable overlaps

void NetSendCmdParam3(BOOL bHiPri, BYTE bCmd, WORD wParam1, WORD wParam2, WORD wParam3)

{
	undefined2 in_r8;
	BYTE local_8;
	undefined local_7;
	undefined local_6;
	undefined2 local_5;
	undefined2 local_3;

	local_7 = (undefined)wParam1;
	local_6 = (undefined)wParam2;
	local_5._1_1_ = (undefined)wParam3;
	local_5._0_1_ = (undefined)(wParam3 >> 8);
	local_5 = CONCAT11((undefined)local_5, local_5._0_1_);
	local_3._1_1_ = (undefined)in_r8;
	local_3._0_1_ = (undefined)((ushort)in_r8 >> 8);
	local_3 = CONCAT11((undefined)local_3, local_3._0_1_);
	if (bHiPri == 0) {
		local_8 = bCmd;
		NetSendLoPri(&local_8, '\a');
	} else {
		local_8 = bCmd;
		NetSendHiPri(&local_8, '\a');
	}
	return;
}

// WARNING: Could not reconcile some variable overlaps

void NetSendCmdLocParam3(BOOL bHiPri, BYTE bCmd, BYTE x, BYTE y, WORD wParam1, WORD wParam2, WORD wParam3)

{
	BYTE local_18;
	BYTE local_17;
	BYTE local_16;
	undefined2 local_15;
	undefined2 local_13;
	undefined2 local_11;

	local_15._1_1_ = (undefined)wParam1;
	local_15._0_1_ = (undefined)(wParam1 >> 8);
	local_15 = CONCAT11((undefined)local_15, local_15._0_1_);
	local_13._1_1_ = (undefined)wParam2;
	local_13._0_1_ = (undefined)(wParam2 >> 8);
	local_13 = CONCAT11((undefined)local_13, local_13._0_1_);
	local_11._1_1_ = (undefined)wParam3;
	local_11._0_1_ = (undefined)(wParam3 >> 8);
	local_11 = CONCAT11((undefined)local_11, local_11._0_1_);
	if (bHiPri == 0) {
		local_18 = bCmd;
		local_17 = x;
		local_16 = y;
		NetSendLoPri(&local_18, '\t');
	} else {
		local_18 = bCmd;
		local_17 = x;
		local_16 = y;
		NetSendHiPri(&local_18, '\t');
	}
	return;
}

// WARNING: Could not reconcile some variable overlaps

void NetSendCmdParam1(BOOL bHiPri, BYTE bCmd, WORD wParam1)

{
	BYTE local_8;
	undefined2 local_7;

	local_7._1_1_ = (undefined)wParam1;
	local_7._0_1_ = (undefined)(wParam1 >> 8);
	local_7 = CONCAT11((undefined)local_7, local_7._0_1_);
	if (bHiPri == 0) {
		local_8 = bCmd;
		NetSendLoPri(&local_8, '\x03');
	} else {
		local_8 = bCmd;
		NetSendHiPri(&local_8, '\x03');
	}
	return;
}

// WARNING: Could not reconcile some variable overlaps

void NetSendCmdParam2(BOOL bHiPri, BYTE bCmd, WORD wParam1, WORD wParam2)

{
	BYTE local_8;
	undefined2 local_7;
	undefined2 local_5;

	local_7._1_1_ = (undefined)wParam1;
	local_7._0_1_ = (undefined)(wParam1 >> 8);
	local_7 = CONCAT11((undefined)local_7, local_7._0_1_);
	local_5._1_1_ = (undefined)wParam2;
	local_5._0_1_ = (undefined)(wParam2 >> 8);
	local_5 = CONCAT11((undefined)local_5, local_5._0_1_);
	if (bHiPri == 0) {
		local_8 = bCmd;
		NetSendLoPri(&local_8, '\x05');
	} else {
		local_8 = bCmd;
		NetSendHiPri(&local_8, '\x05');
	}
	return;
}

// WARNING: Could not reconcile some variable overlaps

void NetSendCmdLocParam2(BOOL bHiPri, BYTE bCmd, BYTE x, BYTE y, WORD wParam1, WORD wParam2)

{
	BYTE local_8;
	undefined2 local_7;
	undefined2 local_5;
	undefined2 local_3;

	local_7._0_1_ = (char)x >> 7;
	local_7 = CONCAT11(x, local_7._0_1_);
	local_5._0_1_ = (char)y >> 7;
	local_5 = CONCAT11(y, local_5._0_1_);
	local_3._1_1_ = (undefined)wParam1;
	local_3._0_1_ = (undefined)(wParam1 >> 8);
	local_3 = CONCAT11((undefined)local_3, local_3._0_1_);
	if (bHiPri == 0) {
		local_8 = bCmd;
		NetSendLoPri(&local_8, '\a');
	} else {
		local_8 = bCmd;
		NetSendHiPri(&local_8, '\a');
	}
	return;
}

void NetSendCmdQuest(BOOL bHiPri, BYTE q)

{
	uint uVar1;
	BYTE local_8;
	BYTE local_7;
	uchar local_6;
	undefined local_5;
	uchar local_4;

	uVar1 = (int)(char)q & 0xff;
	local_8 = 'X';
	local_6 = quests[uVar1]._qactive;
	local_5 = (undefined)quests[uVar1]._qlog;
	local_4 = quests[uVar1]._qvar1;
	if (bHiPri == 0) {
		local_7 = q;
		NetSendLoPri(&local_8, '\x05');
	} else {
		local_7 = q;
		NetSendHiPri(&local_8, '\x05');
	}
	return;
}

// WARNING: Could not reconcile some variable overlaps

void NetSendCmdGItem(BOOL bHiPri, BYTE bCmd, BYTE mast, BYTE pnum, BYTE ii)

{
	int iVar1;
	int iVar2;
	BYTE local_28;
	BYTE local_27;
	BYTE local_26;
	BYTE local_25;
	byte local_24;
	undefined local_23;
	undefined local_22;
	undefined2 local_21;
	undefined2 local_1f;
	uint local_1d;
	undefined local_19;
	undefined local_18;
	undefined local_17;
	undefined local_16;
	undefined local_15;
	undefined2 local_14;
	uint local_12;
	undefined4 local_e;

	iVar2 = ((int)(char)ii & 0xffU) * 0x170;
	local_24 = currlevel;
	local_23 = (undefined) * (undefined4 *)(iVar2 + 0x1013d994);
	local_22 = (undefined) * (undefined4 *)(iVar2 + 0x1013d998);
	iVar1 = *(int *)(iVar2 + 0x1013daf0);
	if (iVar1 == 0x17) {
		local_1f = (ushort)((int)*(char *)(iVar2 + 0x1013d9cc) << 8) | (short)*(char *)(iVar2 + 0x1013d9cd);
		local_1d = (int)*(char *)(iVar2 + 0x1013d9d1) | (int)*(char *)(iVar2 + 0x1013d9d0) << 8 | (int)*(char *)(iVar2 + 0x1013d9ce) << 0x18 | (int)*(char *)(iVar2 + 0x1013d9cf) << 0x10;
		local_19 = *(undefined *)(iVar2 + 0x1013d9d2);
		local_18 = *(undefined *)(iVar2 + 0x1013d9d3);
		local_17 = *(undefined *)(iVar2 + 0x1013d9d4);
		local_16 = *(undefined *)(iVar2 + 0x1013d9d5);
		local_15 = *(undefined *)(iVar2 + 0x1013d9d6);
		local_14 = (ushort) * (undefined4 *)(iVar2 + 0x1013da4c) | (ushort)((int)*(char *)(iVar2 + 0x1013d9d7) << 8) | ((short)*(undefined4 *)(iVar2 + 0x1013da48) + -0x13) * 0x40;
		local_12 = (int)*(char *)(iVar2 + 0x1013d9db) | (int)*(char *)(iVar2 + 0x1013d9da) << 8 | (int)*(char *)(iVar2 + 0x1013d9d8) << 0x18 | (int)*(char *)(iVar2 + 0x1013d9d9) << 0x10;
	} else {
		local_1f = *(ushort *)(iVar2 + 0x1013d98c);
		local_1d = *(uint *)(&DAT_1013d988 + iVar2);
		local_19 = (undefined) * (undefined4 *)(iVar2 + 0x1013d9c0);
		local_18 = (undefined) * (undefined4 *)(iVar2 + 0x1013da74);
		local_17 = (undefined) * (undefined4 *)(iVar2 + 0x1013da78);
		local_16 = (undefined) * (undefined4 *)(iVar2 + 0x1013da6c);
		local_15 = (undefined) * (undefined4 *)(iVar2 + 0x1013da70);
		local_14 = (ushort) * (undefined4 *)(iVar2 + 0x1013da4c);
	}
	local_21._1_1_ = (undefined)iVar1;
	local_21._0_1_ = (undefined)((uint)iVar1 >> 8);
	local_21 = CONCAT11((undefined)local_21, local_21._0_1_);
	local_1f = CONCAT11((undefined)local_1f, local_1f._0_1_);
	local_1d = local_1d << 0x18 | (local_1d >> 8 & 0xff) << 0x10 | (local_1d >> 0x10 & 0xff) << 8 | local_1d >> 0x18;
	local_14 = CONCAT11((undefined)local_14, local_14._0_1_);
	local_12 = local_12 << 0x18 | (local_12 >> 8 & 0xff) << 0x10 | (local_12 >> 0x10 & 0xff) << 8 | local_12 >> 0x18;
	local_e = 0;
	if (bHiPri == 0) {
		local_28 = bCmd;
		local_27 = mast;
		local_26 = pnum;
		local_25 = ii;
		NetSendLoPri(&local_28, '\x1e');
	} else {
		local_28 = bCmd;
		local_27 = mast;
		local_26 = pnum;
		local_25 = ii;
		NetSendHiPri(&local_28, '\x1e');
	}
	return;
}

void NetSendCmdGItem2(BOOL usonly, BYTE bCmd, BYTE mast, BYTE pnum, TCmdGItem *p)

{
	undefined *puVar1;
	DWORD DVar2;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined local_31;
	undefined uStack48;
	undefined local_2f;
	undefined uStack46;
	byte local_2d;
	byte bStack44;
	byte bStack43;
	byte bStack42;
	undefined local_24;
	undefined uStack35;
	byte local_22;
	byte bStack33;
	byte bStack32;
	byte bStack31;
	byte local_1e;
	byte bStack29;
	byte bStack28;
	byte bStack27;

	puVar1 = (undefined *)(ZEXT48(register0x0000000c) - 0x70);
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	CopyMemory((char)(ZEXT48(register0x0000000c) - 0x70) + '8', (char)p, 0x1e, pnum, (char)p, in_r8, in_r9, in_r10,
	    puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
	puVar1[0x38] = bCmd;
	puVar1[0x3a] = pnum;
	puVar1[0x39] = mast;
	*(ushort *)(puVar1 + 0x3f) = CONCAT11(uStack48, local_31);
	*(ushort *)(puVar1 + 0x41) = CONCAT11(uStack46, local_2f);
	*(uint *)(puVar1 + 0x43) = (uint)bStack42 << 0x18 | (uint)bStack43 << 0x10 | (uint)bStack44 << 8 | (uint)local_2d;
	*(ushort *)(puVar1 + 0x4c) = CONCAT11(uStack35, local_24);
	*(uint *)(puVar1 + 0x4e) = (uint)bStack31 << 0x18 | (uint)bStack32 << 0x10 | (uint)bStack33 << 8 | (uint)local_22;
	if (usonly == 0) {
		*(undefined4 *)(puVar1 + 0x52) = 0;
		*(uint *)(puVar1 + 0x52) = (uint)bStack27 << 0x18 | (uint)bStack28 << 0x10 | (uint)bStack29 << 8 | (uint)local_1e;
		NetSendHiPri(puVar1 + 0x38, 0x1e, *puVar1);
	} else {
		DVar2 = GetTickCount(*puVar1);
		if (*(int *)(puVar1 + 0x52) == 0) {
			*(DWORD *)(puVar1 + 0x52) = DVar2;
		} else {
			if (5000 < (int)(DVar2 - *(int *)(puVar1 + 0x52))) {
				return;
			}
		}
		*(uint *)(puVar1 + 0x52) = (uint)bStack27 << 0x18 | (uint)bStack28 << 0x10 | (uint)bStack29 << 8 | (uint)local_1e;
		multi_msg_add(puVar1 + 0x38, 0x1e, *puVar1);
	}
	return;
}

BOOL NetSendCmdReq2(BYTE bCmd, BYTE mast, BYTE pnum, TCmdGItem *p)

{
	undefined *puVar1;
	DWORD DVar2;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined local_31;
	undefined uStack48;
	undefined local_2f;
	undefined uStack46;
	byte local_2d;
	byte bStack44;
	byte bStack43;
	byte bStack42;
	undefined local_24;
	undefined uStack35;
	byte local_22;
	byte bStack33;
	byte bStack32;
	byte bStack31;
	byte local_1e;
	byte bStack29;
	byte bStack28;
	byte bStack27;

	puVar1 = (undefined *)(ZEXT48(register0x0000000c) - 0x70);
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	CopyMemory((char)(ZEXT48(register0x0000000c) - 0x70) + '8', (char)p, 0x1e, (char)p, in_r7, in_r8, in_r9, in_r10,
	    puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
	puVar1[0x38] = bCmd;
	puVar1[0x3a] = pnum;
	puVar1[0x39] = mast;
	DVar2 = GetTickCount(*puVar1);
	if (*(int *)(puVar1 + 0x52) == 0) {
		*(DWORD *)(puVar1 + 0x52) = DVar2;
	} else {
		if (5000 < (int)(DVar2 - *(int *)(puVar1 + 0x52))) {
			return 0;
		}
	}
	*(ushort *)(puVar1 + 0x3f) = CONCAT11(uStack48, local_31);
	*(ushort *)(puVar1 + 0x41) = CONCAT11(uStack46, local_2f);
	*(uint *)(puVar1 + 0x43) = (uint)bStack42 << 0x18 | (uint)bStack43 << 0x10 | (uint)bStack44 << 8 | (uint)local_2d;
	*(ushort *)(puVar1 + 0x4c) = CONCAT11(uStack35, local_24);
	*(uint *)(puVar1 + 0x4e) = (uint)bStack31 << 0x18 | (uint)bStack32 << 0x10 | (uint)bStack33 << 8 | (uint)local_22;
	*(uint *)(puVar1 + 0x52) = (uint)bStack27 << 0x18 | (uint)bStack28 << 0x10 | (uint)bStack29 << 8 | (uint)local_1e;
	multi_msg_add(puVar1 + 0x38, 0x1e, *puVar1);
	return 1;
}

void NetSendCmdExtra(TCmdGItem *p)

{
	undefined *puVar1;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined local_21;
	undefined uStack32;
	undefined local_1f;
	undefined uStack30;
	byte local_1d;
	byte bStack28;
	byte bStack27;
	byte bStack26;
	undefined local_14;
	undefined uStack19;
	byte local_12;
	byte bStack17;
	byte bStack16;
	byte bStack15;
	byte local_e;
	byte bStack13;
	byte bStack12;
	byte bStack11;

	puVar1 = (undefined *)(ZEXT48(register0x0000000c) - 0x60);
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	CopyMemory((char)(ZEXT48(register0x0000000c) - 0x60) + '8', (char)p, 0x1e, in_r6, in_r7, in_r8, in_r9, in_r10,
	    puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
	puVar1[0x38] = 0x55;
	*(undefined4 *)(puVar1 + 0x52) = 0;
	*(ushort *)(puVar1 + 0x3f) = CONCAT11(uStack32, local_21);
	*(ushort *)(puVar1 + 0x41) = CONCAT11(uStack30, local_1f);
	*(uint *)(puVar1 + 0x43) = (uint)bStack26 << 0x18 | (uint)bStack27 << 0x10 | (uint)bStack28 << 8 | (uint)local_1d;
	*(ushort *)(puVar1 + 0x4c) = CONCAT11(uStack19, local_14);
	*(uint *)(puVar1 + 0x4e) = (uint)bStack15 << 0x18 | (uint)bStack16 << 0x10 | (uint)bStack17 << 8 | (uint)local_12;
	*(uint *)(puVar1 + 0x52) = (uint)bStack11 << 0x18 | (uint)bStack12 << 0x10 | (uint)bStack13 << 8 | (uint)local_e;
	NetSendHiPri(puVar1 + 0x38, 0x1e, *puVar1);
	return;
}

// WARNING: Could not reconcile some variable overlaps

void NetSendCmdPItem(BOOL bHiPri, BYTE bCmd, BYTE x, BYTE y)

{
	int iVar1;
	int iVar2;
	BYTE local_18;
	BYTE local_17;
	BYTE local_16;
	undefined2 local_15;
	undefined2 local_13;
	uint local_11;
	undefined local_d;
	undefined local_c;
	undefined local_b;
	undefined local_a;
	undefined local_9;
	undefined2 local_8;
	uint local_6;

	iVar2 = myplr * 0x55ec;
	iVar1 = *(int *)((int)plr + iVar2 + 0x553c);
	if (iVar1 == 0x17) {
		local_13 = (ushort)((int)*(char *)((int)plr + iVar2 + 0x5418) << 8) | (short)*(char *)((int)plr + iVar2 + 0x5419);
		local_11 = (int)*(char *)((int)plr + iVar2 + 0x541d) | (int)*(char *)((int)plr + iVar2 + 0x541c) << 8 | (int)*(char *)((int)plr + iVar2 + 0x541a) << 0x18 | (int)*(char *)((int)plr + iVar2 + 0x541b) << 0x10;
		local_d = *(undefined *)((int)plr + iVar2 + 0x541e);
		local_c = *(undefined *)((int)plr + iVar2 + 0x541f);
		local_b = *(undefined *)((int)plr + iVar2 + 0x5420);
		local_a = *(undefined *)((int)plr + iVar2 + 0x5421);
		local_9 = *(undefined *)((int)plr + iVar2 + 0x5422);
		local_8 = (ushort) * (undefined4 *)((int)plr + iVar2 + 0x5498) | (ushort)((int)*(char *)((int)plr + iVar2 + 0x5423) << 8) | ((short)*(undefined4 *)((int)plr + iVar2 + 0x5494) + -0x13) * 0x40;
		local_6 = (int)*(char *)((int)plr + iVar2 + 0x5427) | (int)*(char *)((int)plr + iVar2 + 0x5426) << 8 | (int)*(char *)((int)plr + iVar2 + 0x5424) << 0x18 | (int)*(char *)((int)plr + iVar2 + 0x5425) << 0x10;
	} else {
		local_13 = *(ushort *)((int)plr + iVar2 + 0x53d8);
		local_11 = *(uint *)((int)plr + iVar2 + 0x53d4);
		local_d = (undefined) * (undefined4 *)((int)plr + iVar2 + 0x540c);
		local_c = (undefined) * (undefined4 *)((int)plr + iVar2 + 0x54c0);
		local_b = (undefined) * (undefined4 *)((int)plr + iVar2 + 0x54c4);
		local_a = (undefined) * (undefined4 *)((int)plr + iVar2 + 0x54b8);
		local_9 = (undefined) * (undefined4 *)((int)plr + iVar2 + 0x54bc);
		local_8 = (ushort) * (undefined4 *)((int)plr + iVar2 + 0x5498);
	}
	local_15._1_1_ = (undefined)iVar1;
	local_15._0_1_ = (undefined)((uint)iVar1 >> 8);
	local_15 = CONCAT11((undefined)local_15, local_15._0_1_);
	local_13 = CONCAT11((undefined)local_13, local_13._0_1_);
	local_11 = local_11 << 0x18 | (local_11 >> 8 & 0xff) << 0x10 | (local_11 >> 0x10 & 0xff) << 8 | local_11 >> 0x18;
	local_8 = CONCAT11((undefined)local_8, local_8._0_1_);
	local_6 = local_6 << 0x18 | (local_6 >> 8 & 0xff) << 0x10 | (local_6 >> 0x10 & 0xff) << 8 | local_6 >> 0x18;
	if (bHiPri == 0) {
		local_18 = bCmd;
		local_17 = x;
		local_16 = y;
		NetSendLoPri(&local_18, '\x16');
	} else {
		local_18 = bCmd;
		local_17 = x;
		local_16 = y;
		NetSendHiPri(&local_18, '\x16');
	}
	return;
}

// WARNING: Could not reconcile some variable overlaps

void NetSendCmdChItem(BOOL bHiPri, BYTE bLoc)

{
	undefined2 uVar1;
	undefined4 uVar2;
	uint uVar3;
	int iVar4;
	BYTE local_18;
	BYTE local_17;
	undefined2 local_16;
	undefined2 local_14;
	uint local_12;
	undefined local_e;

	local_18 = '0';
	iVar4 = myplr * 0x55ec;
	uVar2 = *(undefined4 *)((int)plr + iVar4 + 0x553c);
	uVar1 = *(undefined2 *)((int)plr + iVar4 + 0x53d8);
	uVar3 = *(uint *)((int)plr + iVar4 + 0x53d4);
	local_e = (undefined) * (undefined4 *)((int)plr + iVar4 + 0x540c);
	local_16._1_1_ = (undefined)uVar2;
	local_16._0_1_ = (undefined)((uint)uVar2 >> 8);
	local_16 = CONCAT11((undefined)local_16, local_16._0_1_);
	local_14._1_1_ = (undefined)uVar1;
	local_14._0_1_ = (undefined)((ushort)uVar1 >> 8);
	local_14 = CONCAT11((undefined)local_14, local_14._0_1_);
	local_12 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
	if (bHiPri == 0) {
		local_17 = bLoc;
		NetSendLoPri(&local_18, '\v');
	} else {
		local_17 = bLoc;
		NetSendHiPri(&local_18, '\v');
	}
	return;
}

void NetSendCmdDelItem(BOOL bHiPri, BYTE bLoc)

{
	BYTE local_8;
	BYTE local_7;

	local_8 = '1';
	if (bHiPri == 0) {
		local_7 = bLoc;
		NetSendLoPri(&local_8, '\x02');
	} else {
		local_7 = bLoc;
		NetSendHiPri(&local_8, '\x02');
	}
	return;
}

// WARNING: Could not reconcile some variable overlaps

void NetSendCmdDItem(BOOL bHiPri, int ii)

{
	int iVar1;
	BYTE local_18;
	undefined local_17;
	undefined local_16;
	undefined2 local_15;
	undefined2 local_13;
	uint local_11;
	undefined local_d;
	undefined local_c;
	undefined local_b;
	undefined local_a;
	undefined local_9;
	undefined2 local_8;
	uint local_6;

	ii = ii * 0x170;
	local_18 = '4';
	local_17 = (undefined) * (undefined4 *)(ii + 0x1013d994);
	local_16 = (undefined) * (undefined4 *)(ii + 0x1013d998);
	iVar1 = *(int *)(ii + 0x1013daf0);
	if (iVar1 == 0x17) {
		local_13 = (ushort)((int)*(char *)(ii + 0x1013d9cc) << 8) | (short)*(char *)(ii + 0x1013d9cd);
		local_11 = (int)*(char *)(ii + 0x1013d9d1) | (int)*(char *)(ii + 0x1013d9d0) << 8 | (int)*(char *)(ii + 0x1013d9ce) << 0x18 | (int)*(char *)(ii + 0x1013d9cf) << 0x10;
		local_d = *(undefined *)(ii + 0x1013d9d2);
		local_c = *(undefined *)(ii + 0x1013d9d3);
		local_b = *(undefined *)(ii + 0x1013d9d4);
		local_a = *(undefined *)(ii + 0x1013d9d5);
		local_9 = *(undefined *)(ii + 0x1013d9d6);
		local_8 = (ushort) * (undefined4 *)(ii + 0x1013da4c) | (ushort)((int)*(char *)(ii + 0x1013d9d7) << 8) | ((short)*(undefined4 *)(ii + 0x1013da48) + -0x13) * 0x40;
		local_6 = (int)*(char *)(ii + 0x1013d9db) | (int)*(char *)(ii + 0x1013d9da) << 8 | (int)*(char *)(ii + 0x1013d9d8) << 0x18 | (int)*(char *)(ii + 0x1013d9d9) << 0x10;
	} else {
		local_13 = *(ushort *)(ii + 0x1013d98c);
		local_11 = *(uint *)(&DAT_1013d988 + ii);
		local_d = (undefined) * (undefined4 *)(ii + 0x1013d9c0);
		local_c = (undefined) * (undefined4 *)(ii + 0x1013da74);
		local_b = (undefined) * (undefined4 *)(ii + 0x1013da78);
		local_a = (undefined) * (undefined4 *)(ii + 0x1013da6c);
		local_9 = (undefined) * (undefined4 *)(ii + 0x1013da70);
		local_8 = (ushort) * (undefined4 *)(ii + 0x1013da4c);
	}
	local_15._1_1_ = (undefined)iVar1;
	local_15._0_1_ = (undefined)((uint)iVar1 >> 8);
	local_15 = CONCAT11((undefined)local_15, local_15._0_1_);
	local_13 = CONCAT11((undefined)local_13, local_13._0_1_);
	local_11 = local_11 << 0x18 | (local_11 >> 8 & 0xff) << 0x10 | (local_11 >> 0x10 & 0xff) << 8 | local_11 >> 0x18;
	local_8 = CONCAT11((undefined)local_8, local_8._0_1_);
	local_6 = local_6 << 0x18 | (local_6 >> 8 & 0xff) << 0x10 | (local_6 >> 0x10 & 0xff) << 8 | local_6 >> 0x18;
	if (bHiPri == 0) {
		NetSendLoPri(&local_18, '\x16');
	} else {
		NetSendHiPri(&local_18, '\x16');
	}
	return;
}

BOOL i_own_level(int nReqLevel)

{
	undefined8 uVar1;
	int iVar2;

	iVar2 = 0;
	if ((((((plr[0].plractive == false) || (plr[0]._pLvlChanging != false)) || (nReqLevel != plr[0].plrlevel)) || ((myplr == 0 && (gbBufferMsgs != 0)))) && ((((iVar2 = 1, plr[1]._pInvincible == false || (((char)plr[1]._pWAnim[5] != '\0' || (nReqLevel != plr[1]._pName._20_4_)))) || ((myplr == 1 && (gbBufferMsgs != 0)))) && ((((iVar2 = 2, plr[2]._pWAnim[5]._1_1_ == '\0' || ((char)plr[2]._pBFrames != '\0')) || ((uchar *)nReqLevel != plr[2]._pAAnim[1])) || ((myplr == 2 && (gbBufferMsgs != 0)))))))) && (((iVar2 = 3, plr[3]._pBFrames._1_1_ == '\0' || (((char)plr[3].InvBody[0]._iPLLR != '\0' || (nReqLevel != plr[3].InvBody[0]._iy)))) || ((myplr == 3 && (gbBufferMsgs != 0)))))) {
		iVar2 = 4;
	}
	uVar1 = countLeadingZeros(myplr - iVar2);
	return (BOOL)((uint)uVar1 >> 5 & 0xff);
}

void NetSendCmdDamage(BOOL bHiPri, BYTE bPlr, DWORD dwDam)

{
	BYTE local_8;
	BYTE local_7;
	uint local_6;

	local_8 = '2';
	local_6 = dwDam << 0x18 | (dwDam >> 8 & 0xff) << 0x10 | (dwDam >> 0x10 & 0xff) << 8 | dwDam >> 0x18;
	if (bHiPri == 0) {
		local_7 = bPlr;
		NetSendLoPri(&local_8, '\x06');
	} else {
		local_7 = bPlr;
		NetSendHiPri(&local_8, '\x06');
	}
	return;
}

void NetSendCmdString(int pmask, char *pszStr)

{
	size_t sVar1;
	BYTE local_68;
	char acStack103[103];

	sVar1 = strlen(pszStr);
	local_68 = 'N';
	strcpy(acStack103, pszStr);
	multi_send_msg_packet(pmask, &local_68, (char)sVar1 + '\x02');
	return;
}

DWORD On_STRING2(int pnum, TCmd *pCmd)

{
	int iVar1;
	size_t sVar2;

	iVar1 = 0x100f8fd0;
	sVar2 = strlen((char *)(pCmd + 1));
	if (**(char **)(iVar1 + -0x72bc) == '\0') {
		SendPlrMsg(pnum, (char *)(pCmd + 1));
	}
	return (DWORD)(sVar2 + 2);
}

void delta_open_portal(int pnum, BYTE x, BYTE y, BYTE bLevel, BYTE bLType, BYTE bSetLvl)

{
	pnum = pnum * 5;
	(&DAT_101795ad)[pnum] = x;
	*(BYTE *)(pnum + 0x101795ae) = y;
	*(BYTE *)(pnum + 0x101795af) = bLevel;
	*(BYTE *)(pnum + 0x101795b0) = bLType;
	*(BYTE *)(pnum + 0x101795b1) = bSetLvl;
	sgbDeltaChanged = 1;
	return;
}

void RemovePlrPortal(int pnum)

{
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	FillMemory((char)pnum * '\x05' + -0x53, 5, 0xff, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffcb,
	    in_stack_ffffffcf, local_2c);
	*(undefined *)(local_2c + -0x4d30) = 1;
	return;
}

void check_update_plr(int pnum)

{
	if ((gbMaxPlayers != '\x01') && (pnum == myplr)) {
		pfile_update(1);
	}
	return;
}

void msg_errorf(char *pszFmt, ...)

{
	undefined *puVar1;
	DWORD DVar2;
	undefined4 in_r4;
	undefined4 in_r5;
	undefined4 in_r6;
	undefined uVar3;
	undefined4 in_r7;
	undefined uVar4;
	undefined4 in_r8;
	undefined uVar5;
	undefined4 in_r9;
	undefined uVar6;
	undefined4 in_r10;
	undefined uVar7;

	uVar7 = (undefined)in_r10;
	uVar6 = (undefined)in_r9;
	uVar5 = (undefined)in_r8;
	uVar4 = (undefined)in_r7;
	uVar3 = (undefined)in_r6;
	puVar1 = (undefined *)(ZEXT48(register0x0000000c) - 0x140);
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	*(undefined4 *)(puVar1 + 0x15c) = in_r4;
	*(undefined4 *)(puVar1 + 0x160) = in_r5;
	*(undefined4 *)(puVar1 + 0x164) = in_r6;
	*(undefined4 *)(puVar1 + 0x168) = in_r7;
	*(undefined4 *)(puVar1 + 0x16c) = in_r8;
	*(undefined4 *)(puVar1 + 0x170) = in_r9;
	*(undefined4 *)(puVar1 + 0x174) = in_r10;
	*(char **)(puVar1 + 0x158) = pszFmt;
	DVar2 = GetTickCount(*puVar1);
	if (4999 < DVar2 - *(int *)(*(int *)(puVar1 + 0x14) + -0x4d44)) {
		*(DWORD *)(*(int *)(puVar1 + 0x14) + -0x4d44) = DVar2;
		FUN_100d58d8((int)(puVar1 + 0x38), (char)*(undefined4 *)(puVar1 + 0x158),
		    (char)(ZEXT48(register0x0000000c) - 0x140) + '\\', uVar3, uVar4, uVar5, uVar6, uVar7,
		    *(undefined4 *)(puVar1 + 8));
		ErrorPlrMsg(puVar1 + 0x38, *puVar1);
	}
	return;
}

DWORD On_SYNCDATA(TCmd *pCmd, int pnum)

{
	DWORD DVar1;

	DVar1 = sync_update(pnum, (BYTE *)pCmd);
	return DVar1;
}

DWORD On_WALKXY(TCmd *pCmd, int pnum)

{
	if ((gbBufferMsgs != 1) && ((uint)currlevel == *(uint *)((int)plr + pnum * 0x55ec + 0x34))) {
		ClrPlrPath(pnum);
		MakePlrPath(pnum, (uint)pCmd[1].bCmd, (uint)pCmd[2].bCmd, 1);
		*(undefined4 *)((int)plr + pnum * 0x55ec + 0x20) = 0xffffffff;
	}
	return 3;
}

DWORD On_ADDSTR(TCmd *pCmd, int pnum)

{
	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 3);
	} else {
		*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
		if (*(ushort *)(pCmd + 1) < 0x101) {
			ModifyPlrStr(pnum, (uint) * (ushort *)(pCmd + 1));
		}
	}
	return 3;
}

DWORD On_ADDMAG(TCmd *pCmd, int pnum)

{
	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 3);
	} else {
		*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
		if (*(ushort *)(pCmd + 1) < 0x101) {
			ModifyPlrMag(pnum, (uint) * (ushort *)(pCmd + 1));
		}
	}
	return 3;
}

DWORD On_ADDDEX(TCmd *pCmd, int pnum)

{
	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 3);
	} else {
		*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
		if (*(ushort *)(pCmd + 1) < 0x101) {
			ModifyPlrDex(pnum, (uint) * (ushort *)(pCmd + 1));
		}
	}
	return 3;
}

DWORD On_ADDVIT(TCmd *pCmd, int pnum)

{
	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 3);
	} else {
		*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
		if (*(ushort *)(pCmd + 1) < 0x101) {
			ModifyPlrVit(pnum, (uint) * (ushort *)(pCmd + 1));
		}
	}
	return 3;
}

DWORD On_SBSPELL(TCmd *pCmd, int pnum)

{
	if (gbBufferMsgs != 1) {
		*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
		if ((currlevel == 0) && (*(int *)((uint) * (ushort *)(pCmd + 1) * 0x38 + 0x1010efb8) == 0)) {
			msg_errorf("%s has cast an illegal spell.", pnum * 0x55ec + 0x10186ffc);
		} else {
			pnum = pnum * 0x55ec;
			*(uint *)((int)plr + pnum + 0xa4) = (uint) * (ushort *)(pCmd + 1);
			*(undefined *)((int)plr + pnum + 0xa8) = *(undefined *)((int)plr + pnum + 0xc0);
			*(undefined *)((int)plr + pnum + 0xa9) = 1;
			*(undefined4 *)((int)plr + pnum + 0x20) = 0xc;
		}
	}
	return 3;
}

DWORD On_GOTOGETITEM(TCmd *pCmd, int pnum)

{
	int iVar1;

	if ((gbBufferMsgs != 1) && (iVar1 = pnum * 0x55ec, (uint)currlevel == *(uint *)((int)plr + iVar1 + 0x34))) {
		*(ushort *)(pCmd + 3) = CONCAT11(pCmd[4].bCmd, pCmd[3].bCmd);
		MakePlrPath(pnum, (uint)pCmd[1].bCmd, (uint)pCmd[2].bCmd, 0);
		*(undefined4 *)((int)plr + iVar1 + 0x20) = 0xf;
		*(uint *)((int)plr + iVar1 + 0x24) = (uint) * (ushort *)(pCmd + 3);
	}
	return 5;
}

DWORD On_REQUESTGITEM(TCmd *pCmd, int pnum)

{
	BOOL BVar1;
	int ii;

	if (gbBufferMsgs != 1) {
		*(ushort *)(pCmd + 7) = CONCAT11(pCmd[8].bCmd, pCmd[7].bCmd);
		*(ushort *)(pCmd + 9) = CONCAT11(pCmd[10].bCmd, pCmd[9].bCmd);
		*(uint *)(pCmd + 0xb) = (uint)pCmd[0xe].bCmd << 0x18 | (uint)pCmd[0xd].bCmd << 0x10 | (uint)pCmd[0xc].bCmd << 8 | (uint)pCmd[0xb].bCmd;
		*(ushort *)(pCmd + 0x14) = CONCAT11(pCmd[0x15].bCmd, pCmd[0x14].bCmd);
		*(uint *)(pCmd + 0x16) = (uint)pCmd[0x19].bCmd << 0x18 | (uint)pCmd[0x18].bCmd << 0x10 | (uint)pCmd[0x17].bCmd << 8 | (uint)pCmd[0x16].bCmd;
		*(uint *)(pCmd + 0x1a) = (uint)pCmd[0x1d].bCmd << 0x18 | (uint)pCmd[0x1c].bCmd << 0x10 | (uint)pCmd[0x1b].bCmd << 8 | (uint)pCmd[0x1a].bCmd;
		BVar1 = i_own_level(*(int *)((int)plr + pnum * 0x55ec + 0x34));
		if ((BVar1 != 0) && (BVar1 = GetItemRecord(*(int *)(pCmd + 0xb), *(WORD *)(pCmd + 9), (uint) * (ushort *)(pCmd + 7)), BVar1 != 0)) {
			ii = FindGetItem((uint) * (ushort *)(pCmd + 7), *(WORD *)(pCmd + 9), *(int *)(pCmd + 0xb));
			if (ii == -1) {
				if ((ii == -1) && (BVar1 = NetSendCmdReq2('\'', (BYTE)myplr, pCmd[2].bCmd, (TCmdGItem *)pCmd), BVar1 == 0)) {
					NetSendCmdExtra((TCmdGItem *)pCmd);
				}
			} else {
				NetSendCmdGItem2(0, '\b', (BYTE)myplr, pCmd[2].bCmd, (TCmdGItem *)pCmd);
				if ((uint)pCmd[2].bCmd == myplr) {
					InvGetItem(myplr, ii);
				} else {
					SyncGetItem((uint)pCmd[5].bCmd, (uint)pCmd[6].bCmd, (uint) * (ushort *)(pCmd + 7),
					    *(WORD *)(pCmd + 9), *(int *)(pCmd + 0xb));
				}
				SetItemRecord(*(int *)(pCmd + 0xb), *(WORD *)(pCmd + 9), (uint) * (ushort *)(pCmd + 7));
			}
		}
	}
	return 0x1e;
}

DWORD On_GETITEM(TCmd *pCmd, int pnum)

{
	int ii;
	BOOL BVar1;
	int ii_00;
	int mdur;
	int ch;
	int mch;
	int ivalue;
	DWORD ibuff;

	ii_00 = 0x100f8fd0;
	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 0x1e);
	} else {
		*(ushort *)(pCmd + 7) = CONCAT11(pCmd[8].bCmd, pCmd[7].bCmd);
		*(ushort *)(pCmd + 9) = CONCAT11(pCmd[10].bCmd, pCmd[9].bCmd);
		*(uint *)(pCmd + 0xb) = (uint)pCmd[0xe].bCmd << 0x18 | (uint)pCmd[0xd].bCmd << 0x10 | (uint)pCmd[0xc].bCmd << 8 | (uint)pCmd[0xb].bCmd;
		*(ushort *)(pCmd + 0x14) = CONCAT11(pCmd[0x15].bCmd, pCmd[0x14].bCmd);
		*(uint *)(pCmd + 0x16) = (uint)pCmd[0x19].bCmd << 0x18 | (uint)pCmd[0x18].bCmd << 0x10 | (uint)pCmd[0x17].bCmd << 8 | (uint)pCmd[0x16].bCmd;
		*(uint *)(pCmd + 0x1a) = (uint)pCmd[0x1d].bCmd << 0x18 | (uint)pCmd[0x1c].bCmd << 0x10 | (uint)pCmd[0x1b].bCmd << 8 | (uint)pCmd[0x1a].bCmd;
		ii = FindGetItem((uint) * (ushort *)(pCmd + 7), *(WORD *)(pCmd + 9), *(int *)(pCmd + 0xb));
		BVar1 = delta_get_item((TCmdGItem *)pCmd, pCmd[4].bCmd);
		if (BVar1 == 0) {
			NetSendCmdGItem2(1, '\b', pCmd[1].bCmd, pCmd[2].bCmd, (TCmdGItem *)pCmd);
		} else {
			if (((**(BYTE **)(ii_00 + -0x77e4) == pCmd[4].bCmd) || ((uint)pCmd[2].bCmd == myplr)) && ((uint)pCmd[1].bCmd != myplr)) {
				if ((uint)pCmd[2].bCmd == myplr) {
					if (**(BYTE **)(ii_00 + -0x77e4) == pCmd[4].bCmd) {
						InvGetItem(myplr, ii);
					} else {
						ii_00 = SyncPutItem(myplr, *(int *)((int)plr + myplr * 0x55ec + 0x38),
						    *(int *)((int)plr + myplr * 0x55ec + 0x3c), (uint) * (ushort *)(pCmd + 7), *(WORD *)(pCmd + 9),
						    *(int *)(pCmd + 0xb), (uint)pCmd[0xf].bCmd, (uint)pCmd[0x10].bCmd, mdur, ch, mch, ivalue,
						    ibuff);
						if (ii_00 != -1) {
							InvGetItem(myplr, ii_00);
						}
					}
				} else {
					SyncGetItem((uint)pCmd[5].bCmd, (uint)pCmd[6].bCmd, (uint) * (ushort *)(pCmd + 7),
					    *(WORD *)(pCmd + 9), *(int *)(pCmd + 0xb));
				}
			}
		}
	}
	return 0x1e;
}

DWORD On_GOTOAGETITEM(TCmd *pCmd, int pnum)

{
	int iVar1;

	if ((gbBufferMsgs != 1) && (iVar1 = pnum * 0x55ec, (uint)currlevel == *(uint *)((int)plr + iVar1 + 0x34))) {
		*(ushort *)(pCmd + 3) = CONCAT11(pCmd[4].bCmd, pCmd[3].bCmd);
		MakePlrPath(pnum, (uint)pCmd[1].bCmd, (uint)pCmd[2].bCmd, 0);
		*(undefined4 *)((int)plr + iVar1 + 0x20) = 0x10;
		*(uint *)((int)plr + iVar1 + 0x24) = (uint) * (ushort *)(pCmd + 3);
	}
	return 5;
}

DWORD On_REQUESTAGITEM(TCmd *pCmd, int pnum)

{
	BOOL BVar1;
	int iVar2;

	if (gbBufferMsgs != 1) {
		*(ushort *)(pCmd + 7) = CONCAT11(pCmd[8].bCmd, pCmd[7].bCmd);
		*(ushort *)(pCmd + 9) = CONCAT11(pCmd[10].bCmd, pCmd[9].bCmd);
		*(uint *)(pCmd + 0xb) = (uint)pCmd[0xe].bCmd << 0x18 | (uint)pCmd[0xd].bCmd << 0x10 | (uint)pCmd[0xc].bCmd << 8 | (uint)pCmd[0xb].bCmd;
		*(ushort *)(pCmd + 0x14) = CONCAT11(pCmd[0x15].bCmd, pCmd[0x14].bCmd);
		*(uint *)(pCmd + 0x16) = (uint)pCmd[0x19].bCmd << 0x18 | (uint)pCmd[0x18].bCmd << 0x10 | (uint)pCmd[0x17].bCmd << 8 | (uint)pCmd[0x16].bCmd;
		*(uint *)(pCmd + 0x1a) = (uint)pCmd[0x1d].bCmd << 0x18 | (uint)pCmd[0x1c].bCmd << 0x10 | (uint)pCmd[0x1b].bCmd << 8 | (uint)pCmd[0x1a].bCmd;
		BVar1 = i_own_level(*(int *)((int)plr + pnum * 0x55ec + 0x34));
		if ((BVar1 != 0) && (BVar1 = GetItemRecord(*(int *)(pCmd + 0xb), *(WORD *)(pCmd + 9), (uint) * (ushort *)(pCmd + 7)), BVar1 != 0)) {
			iVar2 = FindGetItem((uint) * (ushort *)(pCmd + 7), *(WORD *)(pCmd + 9), *(int *)(pCmd + 0xb));
			if (iVar2 == -1) {
				if ((iVar2 == -1) && (BVar1 = NetSendCmdReq2('(', (BYTE)myplr, pCmd[2].bCmd, (TCmdGItem *)pCmd), BVar1 == 0)) {
					NetSendCmdExtra((TCmdGItem *)pCmd);
				}
			} else {
				NetSendCmdGItem2(0, '\t', (BYTE)myplr, pCmd[2].bCmd, (TCmdGItem *)pCmd);
				if ((uint)pCmd[2].bCmd == myplr) {
					AutoGetItem(myplr, (uint)pCmd[3].bCmd);
				} else {
					SyncGetItem((uint)pCmd[5].bCmd, (uint)pCmd[6].bCmd, (uint) * (ushort *)(pCmd + 7),
					    *(WORD *)(pCmd + 9), *(int *)(pCmd + 0xb));
				}
				SetItemRecord(*(int *)(pCmd + 0xb), *(WORD *)(pCmd + 9), (uint) * (ushort *)(pCmd + 7));
			}
		}
	}
	return 0x1e;
}

DWORD On_AGETITEM(TCmd *pCmd, int pnum)

{
	BOOL BVar1;
	int ii;
	int mdur;
	int ch;
	int mch;
	int ivalue;
	DWORD ibuff;

	ii = 0x100f8fd0;
	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 0x1e);
	} else {
		*(ushort *)(pCmd + 7) = CONCAT11(pCmd[8].bCmd, pCmd[7].bCmd);
		*(ushort *)(pCmd + 9) = CONCAT11(pCmd[10].bCmd, pCmd[9].bCmd);
		*(uint *)(pCmd + 0xb) = (uint)pCmd[0xe].bCmd << 0x18 | (uint)pCmd[0xd].bCmd << 0x10 | (uint)pCmd[0xc].bCmd << 8 | (uint)pCmd[0xb].bCmd;
		*(ushort *)(pCmd + 0x14) = CONCAT11(pCmd[0x15].bCmd, pCmd[0x14].bCmd);
		*(uint *)(pCmd + 0x16) = (uint)pCmd[0x19].bCmd << 0x18 | (uint)pCmd[0x18].bCmd << 0x10 | (uint)pCmd[0x17].bCmd << 8 | (uint)pCmd[0x16].bCmd;
		*(uint *)(pCmd + 0x1a) = (uint)pCmd[0x1d].bCmd << 0x18 | (uint)pCmd[0x1c].bCmd << 0x10 | (uint)pCmd[0x1b].bCmd << 8 | (uint)pCmd[0x1a].bCmd;
		FindGetItem((uint) * (ushort *)(pCmd + 7), *(WORD *)(pCmd + 9), *(int *)(pCmd + 0xb));
		BVar1 = delta_get_item((TCmdGItem *)pCmd, pCmd[4].bCmd);
		if (BVar1 == 0) {
			NetSendCmdGItem2(1, '\t', pCmd[1].bCmd, pCmd[2].bCmd, (TCmdGItem *)pCmd);
		} else {
			if (((**(BYTE **)(ii + -0x77e4) == pCmd[4].bCmd) || ((uint)pCmd[2].bCmd == myplr)) && ((uint)pCmd[1].bCmd != myplr)) {
				if ((uint)pCmd[2].bCmd == myplr) {
					if (**(BYTE **)(ii + -0x77e4) == pCmd[4].bCmd) {
						AutoGetItem(myplr, (uint)pCmd[3].bCmd);
					} else {
						ii = SyncPutItem(myplr, *(int *)((int)plr + myplr * 0x55ec + 0x38),
						    *(int *)((int)plr + myplr * 0x55ec + 0x3c), (uint) * (ushort *)(pCmd + 7), *(WORD *)(pCmd + 9),
						    *(int *)(pCmd + 0xb), (uint)pCmd[0xf].bCmd, (uint)pCmd[0x10].bCmd, mdur, ch, mch, ivalue,
						    ibuff);
						if (ii != -1) {
							AutoGetItem(myplr, ii);
						}
					}
				} else {
					SyncGetItem((uint)pCmd[5].bCmd, (uint)pCmd[6].bCmd, (uint) * (ushort *)(pCmd + 7),
					    *(WORD *)(pCmd + 9), *(int *)(pCmd + 0xb));
				}
			}
		}
	}
	return 0x1e;
}

DWORD On_ITEMEXTRA(TCmd *pCmd, int pnum)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 0x1e);
	} else {
		*(ushort *)(pCmd + 7) = CONCAT11(pCmd[8].bCmd, pCmd[7].bCmd);
		*(ushort *)(pCmd + 9) = CONCAT11(pCmd[10].bCmd, pCmd[9].bCmd);
		*(uint *)(pCmd + 0xb) = (uint)pCmd[0xe].bCmd << 0x18 | (uint)pCmd[0xd].bCmd << 0x10 | (uint)pCmd[0xc].bCmd << 8 | (uint)pCmd[0xb].bCmd;
		*(ushort *)(pCmd + 0x14) = CONCAT11(pCmd[0x15].bCmd, pCmd[0x14].bCmd);
		*(uint *)(pCmd + 0x16) = (uint)pCmd[0x19].bCmd << 0x18 | (uint)pCmd[0x18].bCmd << 0x10 | (uint)pCmd[0x17].bCmd << 8 | (uint)pCmd[0x16].bCmd;
		*(uint *)(pCmd + 0x1a) = (uint)pCmd[0x1d].bCmd << 0x18 | (uint)pCmd[0x1c].bCmd << 0x10 | (uint)pCmd[0x1b].bCmd << 8 | (uint)pCmd[0x1a].bCmd;
		delta_get_item((TCmdGItem *)pCmd, pCmd[4].bCmd);
		if ((uint) * *(byte **)(iVar1 + -0x77e4) == *(uint *)(*(int *)(iVar1 + -0x77a8) + pnum * 0x55ec + 0x34)) {
			SyncGetItem((uint)pCmd[5].bCmd, (uint)pCmd[6].bCmd, (uint) * (ushort *)(pCmd + 7), *(WORD *)(pCmd + 9),
			    *(int *)(pCmd + 0xb));
		}
	}
	return 0x1e;
}

DWORD On_PUTITEM(TCmd *pCmd, int pnum)

{
	uint *puVar1;
	int iVar2;
	int mdur;
	int ch;
	int mch;
	int ivalue;
	DWORD ibuff;

	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 0x16);
	} else {
		*(ushort *)(pCmd + 3) = CONCAT11(pCmd[4].bCmd, pCmd[3].bCmd);
		*(ushort *)(pCmd + 5) = CONCAT11(pCmd[6].bCmd, pCmd[5].bCmd);
		*(uint *)(pCmd + 7) = (uint)pCmd[10].bCmd << 0x18 | (uint)pCmd[9].bCmd << 0x10 | (uint)pCmd[8].bCmd << 8 | (uint)pCmd[7].bCmd;
		*(ushort *)(pCmd + 0x10) = CONCAT11(pCmd[0x11].bCmd, pCmd[0x10].bCmd);
		*(uint *)(pCmd + 0x12) = (uint)pCmd[0x15].bCmd << 0x18 | (uint)pCmd[0x14].bCmd << 0x10 | (uint)pCmd[0x13].bCmd << 8 | (uint)pCmd[0x12].bCmd;
		puVar1 = (uint *)((int)plr + pnum * 0x55ec + 0x34);
		if ((uint)currlevel == *puVar1) {
			if (pnum == myplr) {
				iVar2 = InvPutItem(pnum, (uint)pCmd[1].bCmd, (uint)pCmd[2].bCmd);
			} else {
				iVar2 = SyncPutItem(pnum, (uint)pCmd[1].bCmd, (uint)pCmd[2].bCmd, (uint) * (ushort *)(pCmd + 3),
				    *(WORD *)(pCmd + 5), *(int *)(pCmd + 7), (uint)pCmd[0xb].bCmd, (uint)pCmd[0xc].bCmd, mdur, ch, mch,
				    ivalue, ibuff);
			}
			if (iVar2 != -1) {
				PutItemRecord(*(int *)(pCmd + 7), *(WORD *)(pCmd + 5), (uint) * (ushort *)(pCmd + 3));
				delta_put_item((TCmdPItem *)pCmd, *(int *)(iVar2 * 0x170 + 0x1013d994),
				    *(int *)(iVar2 * 0x170 + 0x1013d998), (BYTE)*puVar1);
				check_update_plr(pnum);
			}
		} else {
			PutItemRecord(*(int *)(pCmd + 7), *(WORD *)(pCmd + 5), (uint) * (ushort *)(pCmd + 3));
			delta_put_item((TCmdPItem *)pCmd, (uint)pCmd[1].bCmd, (uint)pCmd[2].bCmd, (BYTE)*puVar1);
			check_update_plr(pnum);
		}
	}
	return 0x16;
}

DWORD On_SYNCPUTITEM(TCmd *pCmd, int pnum)

{
	uint *puVar1;
	int iVar2;
	int mdur;
	int ch;
	int mch;
	int ivalue;
	DWORD ibuff;

	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 0x16);
	} else {
		*(ushort *)(pCmd + 3) = CONCAT11(pCmd[4].bCmd, pCmd[3].bCmd);
		*(ushort *)(pCmd + 5) = CONCAT11(pCmd[6].bCmd, pCmd[5].bCmd);
		*(uint *)(pCmd + 7) = (uint)pCmd[10].bCmd << 0x18 | (uint)pCmd[9].bCmd << 0x10 | (uint)pCmd[8].bCmd << 8 | (uint)pCmd[7].bCmd;
		*(ushort *)(pCmd + 0x10) = CONCAT11(pCmd[0x11].bCmd, pCmd[0x10].bCmd);
		*(uint *)(pCmd + 0x12) = (uint)pCmd[0x15].bCmd << 0x18 | (uint)pCmd[0x14].bCmd << 0x10 | (uint)pCmd[0x13].bCmd << 8 | (uint)pCmd[0x12].bCmd;
		puVar1 = (uint *)((int)plr + pnum * 0x55ec + 0x34);
		if ((uint)currlevel == *puVar1) {
			iVar2 = SyncPutItem(pnum, (uint)pCmd[1].bCmd, (uint)pCmd[2].bCmd, (uint) * (ushort *)(pCmd + 3),
			    *(WORD *)(pCmd + 5), *(int *)(pCmd + 7), (uint)pCmd[0xb].bCmd, (uint)pCmd[0xc].bCmd, mdur, ch, mch,
			    ivalue, ibuff);
			if (iVar2 != -1) {
				PutItemRecord(*(int *)(pCmd + 7), *(WORD *)(pCmd + 5), (uint) * (ushort *)(pCmd + 3));
				delta_put_item((TCmdPItem *)pCmd, *(int *)(iVar2 * 0x170 + 0x1013d994),
				    *(int *)(iVar2 * 0x170 + 0x1013d998), (BYTE)*puVar1);
				check_update_plr(pnum);
			}
		} else {
			PutItemRecord(*(int *)(pCmd + 7), *(WORD *)(pCmd + 5), (uint) * (ushort *)(pCmd + 3));
			delta_put_item((TCmdPItem *)pCmd, (uint)pCmd[1].bCmd, (uint)pCmd[2].bCmd, (BYTE)*puVar1);
			check_update_plr(pnum);
		}
	}
	return 0x16;
}

DWORD On_RESPAWNITEM(TCmd *pCmd, int pnum)

{
	uint *puVar1;
	int mdur;
	int ch;
	int mch;
	int ivalue;
	DWORD ibuff;

	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 0x16);
	} else {
		*(ushort *)(pCmd + 3) = CONCAT11(pCmd[4].bCmd, pCmd[3].bCmd);
		*(ushort *)(pCmd + 5) = CONCAT11(pCmd[6].bCmd, pCmd[5].bCmd);
		*(uint *)(pCmd + 7) = (uint)pCmd[10].bCmd << 0x18 | (uint)pCmd[9].bCmd << 0x10 | (uint)pCmd[8].bCmd << 8 | (uint)pCmd[7].bCmd;
		*(ushort *)(pCmd + 0x10) = CONCAT11(pCmd[0x11].bCmd, pCmd[0x10].bCmd);
		*(uint *)(pCmd + 0x12) = (uint)pCmd[0x15].bCmd << 0x18 | (uint)pCmd[0x14].bCmd << 0x10 | (uint)pCmd[0x13].bCmd << 8 | (uint)pCmd[0x12].bCmd;
		puVar1 = (uint *)((int)plr + pnum * 0x55ec + 0x34);
		if (((uint)currlevel == *puVar1) && (pnum != myplr)) {
			SyncPutItem(pnum, (uint)pCmd[1].bCmd, (uint)pCmd[2].bCmd, (uint) * (ushort *)(pCmd + 3), *(WORD *)(pCmd + 5),
			    *(int *)(pCmd + 7), (uint)pCmd[0xb].bCmd, (uint)pCmd[0xc].bCmd, mdur, ch, mch, ivalue, ibuff);
		}
		PutItemRecord(*(int *)(pCmd + 7), *(WORD *)(pCmd + 5), (uint) * (ushort *)(pCmd + 3));
		delta_put_item((TCmdPItem *)pCmd, (uint)pCmd[1].bCmd, (uint)pCmd[2].bCmd, (BYTE)*puVar1);
	}
	return 0x16;
}

DWORD On_ATTACKXY(TCmd *pCmd, int pnum)

{
	int iVar1;

	if ((gbBufferMsgs != 1) && (iVar1 = pnum * 0x55ec, (uint)currlevel == *(uint *)((int)plr + iVar1 + 0x34))) {
		MakePlrPath(pnum, (uint)pCmd[1].bCmd, (uint)pCmd[2].bCmd, 0);
		*(undefined4 *)((int)plr + iVar1 + 0x20) = 9;
		*(uint *)((int)plr + iVar1 + 0x24) = (uint)pCmd[1].bCmd;
		*(uint *)((int)plr + iVar1 + 0x28) = (uint)pCmd[2].bCmd;
	}
	return 3;
}

DWORD On_SATTACKXY(TCmd *pCmd, int pnum)

{
	int iVar1;

	if ((gbBufferMsgs != 1) && (iVar1 = pnum * 0x55ec, (uint)currlevel == *(uint *)((int)plr + iVar1 + 0x34))) {
		ClrPlrPath(pnum);
		*(undefined4 *)((int)plr + iVar1 + 0x20) = 9;
		*(uint *)((int)plr + iVar1 + 0x24) = (uint)pCmd[1].bCmd;
		*(uint *)((int)plr + iVar1 + 0x28) = (uint)pCmd[2].bCmd;
	}
	return 3;
}

DWORD On_RATTACKXY(TCmd *pCmd, int pnum)

{
	int iVar1;

	if ((gbBufferMsgs != 1) && (iVar1 = pnum * 0x55ec, (uint)currlevel == *(uint *)((int)plr + iVar1 + 0x34))) {
		ClrPlrPath(pnum);
		*(undefined4 *)((int)plr + iVar1 + 0x20) = 10;
		*(uint *)((int)plr + iVar1 + 0x24) = (uint)pCmd[1].bCmd;
		*(uint *)((int)plr + iVar1 + 0x28) = (uint)pCmd[2].bCmd;
	}
	return 3;
}

DWORD On_SPELLXYD(TCmd *pCmd, int pnum)

{
	int iVar1;

	if ((gbBufferMsgs != 1) && (iVar1 = pnum * 0x55ec, (uint)currlevel == *(uint *)((int)plr + iVar1 + 0x34))) {
		*(ushort *)(pCmd + 3) = CONCAT11(pCmd[4].bCmd, pCmd[3].bCmd);
		*(ushort *)(pCmd + 5) = CONCAT11(pCmd[6].bCmd, pCmd[5].bCmd);
		*(ushort *)(pCmd + 7) = CONCAT11(pCmd[8].bCmd, pCmd[7].bCmd);
		if ((currlevel == 0) && (*(int *)((uint) * (ushort *)(pCmd + 3) * 0x38 + 0x1010efb8) == 0)) {
			msg_errorf("%s has cast an illegal spell.", iVar1 + 0x10186ffc);
		} else {
			ClrPlrPath(pnum);
			*(undefined4 *)((int)plr + iVar1 + 0x20) = 0x1a;
			*(uint *)((int)plr + iVar1 + 0x24) = (uint)pCmd[1].bCmd;
			*(uint *)((int)plr + iVar1 + 0x28) = (uint)pCmd[2].bCmd;
			*(uint *)((int)plr + iVar1 + 0x2c) = (uint) * (ushort *)(pCmd + 5);
			*(uint *)((int)plr + iVar1 + 0x30) = (uint) * (ushort *)(pCmd + 7);
			*(uint *)((int)plr + iVar1 + 0xa4) = (uint) * (ushort *)(pCmd + 3);
			*(undefined *)((int)plr + iVar1 + 0xa8) = *(undefined *)((int)plr + iVar1 + 0xb8);
			*(undefined *)((int)plr + iVar1 + 0xa9) = 0;
		}
	}
	return 9;
}

DWORD On_SPELLXY(TCmd *pCmd, int pnum)

{
	int iVar1;

	if ((gbBufferMsgs != 1) && (iVar1 = pnum * 0x55ec, (uint)currlevel == *(uint *)((int)plr + iVar1 + 0x34))) {
		*(ushort *)(pCmd + 3) = CONCAT11(pCmd[4].bCmd, pCmd[3].bCmd);
		*(ushort *)(pCmd + 5) = CONCAT11(pCmd[6].bCmd, pCmd[5].bCmd);
		if ((currlevel == 0) && (*(int *)((uint) * (ushort *)(pCmd + 3) * 0x38 + 0x1010efb8) == 0)) {
			msg_errorf("%s has cast an illegal spell.", iVar1 + 0x10186ffc);
		} else {
			ClrPlrPath(pnum);
			*(undefined4 *)((int)plr + iVar1 + 0x20) = 0xc;
			*(uint *)((int)plr + iVar1 + 0x24) = (uint)pCmd[1].bCmd;
			*(uint *)((int)plr + iVar1 + 0x28) = (uint)pCmd[2].bCmd;
			*(uint *)((int)plr + iVar1 + 0x2c) = (uint) * (ushort *)(pCmd + 5);
			*(uint *)((int)plr + iVar1 + 0xa4) = (uint) * (ushort *)(pCmd + 3);
			*(undefined *)((int)plr + iVar1 + 0xa8) = *(undefined *)((int)plr + iVar1 + 0xb8);
			*(undefined *)((int)plr + iVar1 + 0xa9) = 0;
		}
	}
	return 7;
}

DWORD On_TSPELLXY(TCmd *pCmd, int pnum)

{
	int iVar1;

	if ((gbBufferMsgs != 1) && (iVar1 = pnum * 0x55ec, (uint)currlevel == *(uint *)((int)plr + iVar1 + 0x34))) {
		*(ushort *)(pCmd + 3) = CONCAT11(pCmd[4].bCmd, pCmd[3].bCmd);
		*(ushort *)(pCmd + 5) = CONCAT11(pCmd[6].bCmd, pCmd[5].bCmd);
		if ((currlevel == 0) && (*(int *)((uint) * (ushort *)(pCmd + 3) * 0x38 + 0x1010efb8) == 0)) {
			msg_errorf("%s has cast an illegal spell.", iVar1 + 0x10186ffc);
		} else {
			ClrPlrPath(pnum);
			*(undefined4 *)((int)plr + iVar1 + 0x20) = 0xc;
			*(uint *)((int)plr + iVar1 + 0x24) = (uint)pCmd[1].bCmd;
			*(uint *)((int)plr + iVar1 + 0x28) = (uint)pCmd[2].bCmd;
			*(uint *)((int)plr + iVar1 + 0x2c) = (uint) * (ushort *)(pCmd + 5);
			*(uint *)((int)plr + iVar1 + 0xa4) = (uint) * (ushort *)(pCmd + 3);
			*(undefined *)((int)plr + iVar1 + 0xa8) = *(undefined *)((int)plr + iVar1 + 0xb0);
			*(undefined *)((int)plr + iVar1 + 0xa9) = 2;
		}
	}
	return 7;
}

DWORD On_OPOBJXY(TCmd *pCmd, int pnum)

{
	int iVar1;

	if ((gbBufferMsgs != 1) && (iVar1 = pnum * 0x55ec, (uint)currlevel == *(uint *)((int)plr + iVar1 + 0x34))) {
		*(ushort *)(pCmd + 3) = CONCAT11(pCmd[4].bCmd, pCmd[3].bCmd);
		if ((*(int *)((uint) * (ushort *)(pCmd + 3) * 0x78 + 0x1017e40c) == 0) && (*(int *)((uint) * (ushort *)(pCmd + 3) * 0x78 + 0x1017e420) == 0)) {
			MakePlrPath(pnum, (uint)pCmd[1].bCmd, (uint)pCmd[2].bCmd, 1);
		} else {
			MakePlrPath(pnum, (uint)pCmd[1].bCmd, (uint)pCmd[2].bCmd, 0);
		}
		*(undefined4 *)((int)plr + iVar1 + 0x20) = 0xd;
		*(uint *)((int)plr + iVar1 + 0x24) = (uint) * (ushort *)(pCmd + 3);
	}
	return 5;
}

DWORD On_DISARMXY(TCmd *pCmd, int pnum)

{
	int iVar1;

	if ((gbBufferMsgs != 1) && (iVar1 = pnum * 0x55ec, (uint)currlevel == *(uint *)((int)plr + iVar1 + 0x34))) {
		*(ushort *)(pCmd + 3) = CONCAT11(pCmd[4].bCmd, pCmd[3].bCmd);
		if ((*(int *)((uint) * (ushort *)(pCmd + 3) * 0x78 + 0x1017e40c) == 0) && (*(int *)((uint) * (ushort *)(pCmd + 3) * 0x78 + 0x1017e420) == 0)) {
			MakePlrPath(pnum, (uint)pCmd[1].bCmd, (uint)pCmd[2].bCmd, 1);
		} else {
			MakePlrPath(pnum, (uint)pCmd[1].bCmd, (uint)pCmd[2].bCmd, 0);
		}
		*(undefined4 *)((int)plr + iVar1 + 0x20) = 0xe;
		*(uint *)((int)plr + iVar1 + 0x24) = (uint) * (ushort *)(pCmd + 3);
	}
	return 5;
}

DWORD On_OPOBJT(TCmd *pCmd, int pnum)

{
	if ((gbBufferMsgs != 1) && (pnum = pnum * 0x55ec, (uint)currlevel == *(uint *)((int)plr + pnum + 0x34))) {
		*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
		*(undefined4 *)((int)plr + pnum + 0x20) = 0x12;
		*(uint *)((int)plr + pnum + 0x24) = (uint) * (ushort *)(pCmd + 1);
	}
	return 3;
}

DWORD On_ATTACKID(TCmd *pCmd, int pnum)

{
	int iVar1;
	int iVar2;
	int iVar3;

	if (gbBufferMsgs != 1) {
		iVar3 = pnum * 0x55ec;
		if ((uint)currlevel == *(uint *)((int)plr + iVar3 + 0x34)) {
			*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
			iVar1 = abs(*(int *)((int)plr + iVar3 + 0x38) - *(int *)((uint) * (ushort *)(pCmd + 1) * 0xe8 + 0x10151a58));
			iVar2 = abs(*(int *)((int)plr + iVar3 + 0x3c) - *(int *)((uint) * (ushort *)(pCmd + 1) * 0xe8 + 0x10151a5c));
			if ((1 < iVar1) || (1 < iVar2)) {
				MakePlrPath(pnum, *(int *)((uint) * (ushort *)(pCmd + 1) * 0xe8 + 0x10151a58),
				    *(int *)((uint) * (ushort *)(pCmd + 1) * 0xe8 + 0x10151a5c), 0);
			}
			*(undefined4 *)((int)plr + iVar3 + 0x20) = 0x14;
			*(uint *)((int)plr + iVar3 + 0x24) = (uint) * (ushort *)(pCmd + 1);
		}
	}
	return 3;
}

DWORD On_ATTACKPID(TCmd *pCmd, int pnum)

{
	int iVar1;

	if ((gbBufferMsgs != 1) && (iVar1 = pnum * 0x55ec, (uint)currlevel == *(uint *)((int)plr + iVar1 + 0x34))) {
		*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
		MakePlrPath(pnum, *(int *)((int)plr + (uint) * (ushort *)(pCmd + 1) * 0x55ec + 0x40),
		    *(int *)((int)plr + (uint) * (ushort *)(pCmd + 1) * 0x55ec + 0x44), 0);
		*(undefined4 *)((int)plr + iVar1 + 0x20) = 0x15;
		*(uint *)((int)plr + iVar1 + 0x24) = (uint) * (ushort *)(pCmd + 1);
	}
	return 3;
}

DWORD On_RATTACKID(TCmd *pCmd, int pnum)

{
	int iVar1;

	if ((gbBufferMsgs != 1) && (iVar1 = pnum * 0x55ec, (uint)currlevel == *(uint *)((int)plr + iVar1 + 0x34))) {
		*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
		ClrPlrPath(pnum);
		*(undefined4 *)((int)plr + iVar1 + 0x20) = 0x16;
		*(uint *)((int)plr + iVar1 + 0x24) = (uint) * (ushort *)(pCmd + 1);
	}
	return 3;
}

DWORD On_RATTACKPID(TCmd *pCmd, int pnum)

{
	int iVar1;

	if ((gbBufferMsgs != 1) && (iVar1 = pnum * 0x55ec, (uint)currlevel == *(uint *)((int)plr + iVar1 + 0x34))) {
		*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
		ClrPlrPath(pnum);
		*(undefined4 *)((int)plr + iVar1 + 0x20) = 0x17;
		*(uint *)((int)plr + iVar1 + 0x24) = (uint) * (ushort *)(pCmd + 1);
	}
	return 3;
}

DWORD On_SPELLID(TCmd *pCmd, int pnum)

{
	int iVar1;

	if ((gbBufferMsgs != 1) && (iVar1 = pnum * 0x55ec, (uint)currlevel == *(uint *)((int)plr + iVar1 + 0x34))) {
		*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
		*(ushort *)(pCmd + 3) = CONCAT11(pCmd[4].bCmd, pCmd[3].bCmd);
		*(ushort *)(pCmd + 5) = CONCAT11(pCmd[6].bCmd, pCmd[5].bCmd);
		if ((currlevel == 0) && (*(int *)((uint) * (ushort *)(pCmd + 3) * 0x38 + 0x1010efb8) == 0)) {
			msg_errorf("%s has cast an illegal spell.", iVar1 + 0x10186ffc);
		} else {
			ClrPlrPath(pnum);
			*(undefined4 *)((int)plr + iVar1 + 0x20) = 0x18;
			*(uint *)((int)plr + iVar1 + 0x24) = (uint) * (ushort *)(pCmd + 1);
			*(uint *)((int)plr + iVar1 + 0x28) = (uint) * (ushort *)(pCmd + 5);
			*(uint *)((int)plr + iVar1 + 0xa4) = (uint) * (ushort *)(pCmd + 3);
			*(undefined *)((int)plr + iVar1 + 0xa8) = *(undefined *)((int)plr + iVar1 + 0xb8);
			*(undefined *)((int)plr + iVar1 + 0xa9) = 0;
		}
	}
	return 7;
}

DWORD On_SPELLPID(TCmd *pCmd, int pnum)

{
	int iVar1;

	if ((gbBufferMsgs != 1) && (iVar1 = pnum * 0x55ec, (uint)currlevel == *(uint *)((int)plr + iVar1 + 0x34))) {
		*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
		*(ushort *)(pCmd + 3) = CONCAT11(pCmd[4].bCmd, pCmd[3].bCmd);
		*(ushort *)(pCmd + 5) = CONCAT11(pCmd[6].bCmd, pCmd[5].bCmd);
		if ((currlevel == 0) && (*(int *)((uint) * (ushort *)(pCmd + 3) * 0x38 + 0x1010efb8) == 0)) {
			msg_errorf("%s has cast an illegal spell.", iVar1 + 0x10186ffc);
		} else {
			ClrPlrPath(pnum);
			*(undefined4 *)((int)plr + iVar1 + 0x20) = 0x19;
			*(uint *)((int)plr + iVar1 + 0x24) = (uint) * (ushort *)(pCmd + 1);
			*(uint *)((int)plr + iVar1 + 0x28) = (uint) * (ushort *)(pCmd + 5);
			*(uint *)((int)plr + iVar1 + 0xa4) = (uint) * (ushort *)(pCmd + 3);
			*(undefined *)((int)plr + iVar1 + 0xa8) = *(undefined *)((int)plr + iVar1 + 0xb8);
			*(undefined *)((int)plr + iVar1 + 0xa9) = 0;
		}
	}
	return 7;
}

DWORD On_TSPELLID(TCmd *pCmd, int pnum)

{
	int iVar1;

	if ((gbBufferMsgs != 1) && (iVar1 = pnum * 0x55ec, (uint)currlevel == *(uint *)((int)plr + iVar1 + 0x34))) {
		*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
		*(ushort *)(pCmd + 3) = CONCAT11(pCmd[4].bCmd, pCmd[3].bCmd);
		*(ushort *)(pCmd + 5) = CONCAT11(pCmd[6].bCmd, pCmd[5].bCmd);
		if ((currlevel == 0) && (*(int *)((uint) * (ushort *)(pCmd + 3) * 0x38 + 0x1010efb8) == 0)) {
			msg_errorf("%s has cast an illegal spell.", iVar1 + 0x10186ffc);
		} else {
			ClrPlrPath(pnum);
			*(undefined4 *)((int)plr + iVar1 + 0x20) = 0x18;
			*(uint *)((int)plr + iVar1 + 0x24) = (uint) * (ushort *)(pCmd + 1);
			*(uint *)((int)plr + iVar1 + 0x28) = (uint) * (ushort *)(pCmd + 5);
			*(uint *)((int)plr + iVar1 + 0xa4) = (uint) * (ushort *)(pCmd + 3);
			*(undefined *)((int)plr + iVar1 + 0xa8) = *(undefined *)((int)plr + iVar1 + 0xb0);
			*(undefined *)((int)plr + iVar1 + 0xa9) = 2;
		}
	}
	return 7;
}

DWORD On_TSPELLPID(TCmd *pCmd, int pnum)

{
	int iVar1;

	if ((gbBufferMsgs != 1) && (iVar1 = pnum * 0x55ec, (uint)currlevel == *(uint *)((int)plr + iVar1 + 0x34))) {
		*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
		*(ushort *)(pCmd + 3) = CONCAT11(pCmd[4].bCmd, pCmd[3].bCmd);
		*(ushort *)(pCmd + 5) = CONCAT11(pCmd[6].bCmd, pCmd[5].bCmd);
		if ((currlevel == 0) && (*(int *)((uint) * (ushort *)(pCmd + 3) * 0x38 + 0x1010efb8) == 0)) {
			msg_errorf("%s has cast an illegal spell.", iVar1 + 0x10186ffc);
		} else {
			ClrPlrPath(pnum);
			*(undefined4 *)((int)plr + iVar1 + 0x20) = 0x19;
			*(uint *)((int)plr + iVar1 + 0x24) = (uint) * (ushort *)(pCmd + 1);
			*(uint *)((int)plr + iVar1 + 0x28) = (uint) * (ushort *)(pCmd + 5);
			*(uint *)((int)plr + iVar1 + 0xa4) = (uint) * (ushort *)(pCmd + 3);
			*(undefined *)((int)plr + iVar1 + 0xa8) = *(undefined *)((int)plr + iVar1 + 0xb0);
			*(undefined *)((int)plr + iVar1 + 0xa9) = 2;
		}
	}
	return 7;
}

DWORD On_KNOCKBACK(TCmd *pCmd, int pnum)

{
	if ((gbBufferMsgs != 1) && (*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd), (uint)currlevel == *(uint *)((int)plr + pnum * 0x55ec + 0x34))) {
		M_GetKnockback((uint) * (ushort *)(pCmd + 1));
		M_StartHit((uint) * (ushort *)(pCmd + 1), pnum, 0);
	}
	return 3;
}

DWORD On_RESURRECT(TCmd *pCmd, int pnum)

{
	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 3);
	} else {
		*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
		DoResurrect(pnum, (uint) * (ushort *)(pCmd + 1));
		check_update_plr(pnum);
	}
	return 3;
}

DWORD On_HEALOTHER(TCmd *pCmd, int pnum)

{
	if ((gbBufferMsgs != 1) && ((uint)currlevel == *(uint *)((int)plr + pnum * 0x55ec + 0x34))) {
		*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
		DoHealOther(pnum, (uint) * (ushort *)(pCmd + 1));
	}
	return 3;
}

DWORD On_TALKXY(TCmd *pCmd, int pnum)

{
	int iVar1;

	if ((gbBufferMsgs != 1) && (iVar1 = pnum * 0x55ec, (uint)currlevel == *(uint *)((int)plr + iVar1 + 0x34))) {
		*(ushort *)(pCmd + 3) = CONCAT11(pCmd[4].bCmd, pCmd[3].bCmd);
		MakePlrPath(pnum, (uint)pCmd[1].bCmd, (uint)pCmd[2].bCmd, 0);
		*(undefined4 *)((int)plr + iVar1 + 0x20) = 0x11;
		*(uint *)((int)plr + iVar1 + 0x24) = (uint) * (ushort *)(pCmd + 3);
	}
	return 5;
}

DWORD On_NEWLVL(TCmd *pCmd, int pnum)

{
	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 5);
	} else {
		if (pnum != myplr) {
			*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
			*(ushort *)(pCmd + 3) = CONCAT11(pCmd[4].bCmd, pCmd[3].bCmd);
			StartNewLvl(pnum, (uint) * (ushort *)(pCmd + 1), (uint) * (ushort *)(pCmd + 3));
		}
	}
	return 5;
}

DWORD On_WARP(TCmd *pCmd, int pnum)

{
	int pnum_00;
	undefined4 uVar1;
	int iVar2;
	undefined4 *puVar3;
	undefined4 *puVar4;
	longlong lVar5;

	iVar2 = 0x100f8fd0;
	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 3);
	} else {
		*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
		StartWarpLvl(pnum, (uint) * (ushort *)(pCmd + 1));
		pnum_00 = **(int **)(iVar2 + -0x77ac);
		if ((pnum == pnum_00) && (0xb < **(int **)(iVar2 + -0x7744))) {
			lVar5 = 0x2e;
			puVar3 = (undefined4 *)(*(int *)(iVar2 + -0x77a8) + pnum_00 * 0x55ec + 0x53cc);
			puVar4 = (undefined4 *)(*(int *)(iVar2 + -0x7690) + 0xb688);
			do {
				uVar1 = puVar3[3];
				puVar4[2] = puVar3[2];
				puVar4[3] = uVar1;
				lVar5 = lVar5 + -1;
				puVar3 = puVar3 + 2;
				puVar4 = puVar4 + 2;
			} while (lVar5 != 0);
			AutoGetItem(pnum_00, 0x7f);
		}
	}
	return 3;
}

DWORD On_MONSTDEATH(TCmd *pCmd, int pnum)

{
	uint *puVar1;

	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 5);
	} else {
		if (pnum != myplr) {
			*(ushort *)(pCmd + 3) = CONCAT11(pCmd[4].bCmd, pCmd[3].bCmd);
			puVar1 = (uint *)((int)plr + pnum * 0x55ec + 0x34);
			if ((uint)currlevel == *puVar1) {
				M_SyncStartKill((uint) * (ushort *)(pCmd + 3), (uint)pCmd[1].bCmd, (uint)pCmd[2].bCmd, pnum);
			}
			delta_kill_monster((uint) * (ushort *)(pCmd + 3), pCmd[1].bCmd, pCmd[2].bCmd, (BYTE)*puVar1);
		}
	}
	return 5;
}

DWORD On_KILLGOLEM(TCmd *pCmd, int pnum)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 5);
	} else {
		if (pnum != myplr) {
			*(ushort *)(pCmd + 3) = CONCAT11(pCmd[4].bCmd, pCmd[3].bCmd);
			if ((uint)currlevel == (uint) * (ushort *)(pCmd + 3)) {
				iVar1 = 0x100f8fd0;
				M_SyncStartKill(pnum, (uint)pCmd[1].bCmd, (uint)pCmd[2].bCmd, pnum);
			}
			delta_kill_monster(pnum, pCmd[1].bCmd, pCmd[2].bCmd,
			    (BYTE) * (undefined4 *)(*(int *)(iVar1 + -0x77a8) + pnum * 0x55ec + 0x34));
		}
	}
	return 5;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

DWORD On_AWAKEGOLEM(TCmd *pCmd, int pnum)

{
	bool bVar1;
	bool bVar2;
	ulonglong uVar3;
	int *piVar4;
	int iVar5;
	int midam;
	int spllvl;

	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 10);
	} else {
		iVar5 = pnum * 0x55ec;
		*(uint *)(pCmd + 5) = (uint)pCmd[8].bCmd << 0x18 | (uint)pCmd[7].bCmd << 0x10 | (uint)pCmd[6].bCmd << 8 | (uint)pCmd[5].bCmd;
		if ((uint)currlevel == *(uint *)((int)plr + iVar5 + 0x34)) {
			if (pnum != myplr) {
				bVar1 = true;
				piVar4 = (int *)&DAT_1014939c;
				uVar3 = (ulonglong)_DAT_10149b70;
				bVar2 = true;
				if (0 < (int)_DAT_10149b70) {
					do {
						bVar1 = bVar2;
						if ((*(int *)(&DAT_10149b74 + *piVar4 * 0xb4) == 0x21) && (pnum == *(int *)(*piVar4 * 0xb4 + 0x10149bec))) {
							bVar1 = false;
						}
						piVar4 = piVar4 + 1;
						uVar3 = uVar3 - 1;
						bVar2 = bVar1;
					} while (uVar3 != 0);
				}
				if (bVar1) {
					AddMissile(*(int *)((int)plr + iVar5 + 0x38), *(int *)((int)plr + iVar5 + 0x3c), (uint)pCmd[1].bCmd,
					    (uint)pCmd[2].bCmd, (uint)pCmd[3].bCmd, 0x21, '\0', pnum, midam, spllvl);
				}
			}
		} else {
			delta_sync_golem((TCmdGolem *)pCmd, pnum, pCmd[9].bCmd);
		}
	}
	return 10;
}

DWORD On_MONSTDAMAGE(TCmd *pCmd, int pnum)

{
	uint uVar1;
	int iVar2;
	int *piVar3;

	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 5);
	} else {
		if (pnum != myplr) {
			*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
			*(ushort *)(pCmd + 3) = CONCAT11(pCmd[4].bCmd, pCmd[3].bCmd);
			uVar1 = *(uint *)((int)plr + pnum * 0x55ec + 0x34);
			if ((uint)currlevel == uVar1) {
				*(byte *)((uint) * (ushort *)(pCmd + 1) * 0xe8 + 0x10151af3) = *(byte *)((uint) * (ushort *)(pCmd + 1) * 0xe8 + 0x10151af3) | (byte)(1 << (longlong)pnum);
				piVar3 = (int *)((uint) * (ushort *)(pCmd + 1) * 0xe8 + 0x10151ac8);
				iVar2 = *piVar3;
				if (iVar2 != 0) {
					*piVar3 = iVar2 - (uint) * (ushort *)(pCmd + 3);
					piVar3 = (int *)((uint) * (ushort *)(pCmd + 1) * 0xe8 + 0x10151ac8);
					if (*piVar3 >> 6 < 1) {
						*piVar3 = 0x40;
					}
					delta_monster_hp((uint) * (ushort *)(pCmd + 1),
					    *(int *)((uint) * (ushort *)(pCmd + 1) * 0xe8 + 0x10151ac8), (BYTE)uVar1);
				}
			}
		}
	}
	return 5;
}

DWORD On_PLRDEAD(TCmd *pCmd, int pnum)

{
	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 3);
	} else {
		if (pnum == myplr) {
			check_update_plr(pnum);
		} else {
			*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
			thunk_StartPlayerKill(pnum, (uint) * (ushort *)(pCmd + 1));
		}
	}
	return 3;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

DWORD On_PLRDAMAGE(TCmd *pCmd, int pnum)

{
	int *piVar1;
	int *piVar2;
	int iVar3;
	int pnum_00;
	int iVar4;

	*(uint *)(pCmd + 2) = (uint)pCmd[5].bCmd << 0x18 | (uint)pCmd[4].bCmd << 0x10 | (uint)pCmd[3].bCmd << 8 | (uint)pCmd[2].bCmd;
	pnum_00 = myplr;
	if (((((uint)pCmd[1].bCmd == myplr) && (currlevel != 0)) && (gbBufferMsgs != 1)) && (((uint)currlevel == *(uint *)((int)plr + pnum * 0x55ec + 0x34) && (*(uint *)(pCmd + 2) < 0x2ee01)))) {
		iVar4 = myplr * 0x55ec;
		piVar1 = (int *)((int)plr + iVar4 + 0x194);
		if (*piVar1 >> 6 != 0) {
			_DAT_101282c0 = 1;
			*piVar1 = *piVar1 - *(int *)(pCmd + 2);
			piVar2 = (int *)((int)plr + iVar4 + 0x18c);
			*piVar2 = *(int *)((int)plr + iVar4 + 0x18c) - *(int *)(pCmd + 2);
			iVar3 = *(int *)((int)plr + iVar4 + 0x198);
			if (iVar3 < *piVar1) {
				*piVar1 = iVar3;
				*piVar2 = *(int *)((int)plr + iVar4 + 400);
			}
			if (*piVar1 >> 6 == 0) {
				SyncPlrKill(pnum_00, 1);
			}
		}
	}
	return 6;
}

DWORD On_OPENDOOR(TCmd *pCmd, int pnum)

{
	uint *puVar1;

	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 3);
	} else {
		*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
		puVar1 = (uint *)((int)plr + pnum * 0x55ec + 0x34);
		if ((uint)currlevel == *puVar1) {
			SyncOpObject(pnum, 0x2b, (uint) * (ushort *)(pCmd + 1));
		}
		delta_sync_object((uint) * (ushort *)(pCmd + 1), '+', (BYTE)*puVar1);
	}
	return 3;
}

DWORD On_CLOSEDOOR(TCmd *pCmd, int pnum)

{
	uint *puVar1;

	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 3);
	} else {
		*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
		puVar1 = (uint *)((int)plr + pnum * 0x55ec + 0x34);
		if ((uint)currlevel == *puVar1) {
			SyncOpObject(pnum, 0x2c, (uint) * (ushort *)(pCmd + 1));
		}
		delta_sync_object((uint) * (ushort *)(pCmd + 1), ',', (BYTE)*puVar1);
	}
	return 3;
}

DWORD On_OPERATEOBJ(TCmd *pCmd, int pnum)

{
	uint *puVar1;

	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 3);
	} else {
		*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
		puVar1 = (uint *)((int)plr + pnum * 0x55ec + 0x34);
		if ((uint)currlevel == *puVar1) {
			SyncOpObject(pnum, 0x2d, (uint) * (ushort *)(pCmd + 1));
		}
		delta_sync_object((uint) * (ushort *)(pCmd + 1), '-', (BYTE)*puVar1);
	}
	return 3;
}

DWORD On_PLROPOBJ(TCmd *pCmd, int pnum)

{
	uint *puVar1;

	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 5);
	} else {
		*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
		*(ushort *)(pCmd + 3) = CONCAT11(pCmd[4].bCmd, pCmd[3].bCmd);
		puVar1 = (uint *)((int)plr + pnum * 0x55ec + 0x34);
		if ((uint)currlevel == *puVar1) {
			SyncOpObject((uint) * (ushort *)(pCmd + 1), 0x2e, (uint) * (ushort *)(pCmd + 3));
		}
		delta_sync_object((uint) * (ushort *)(pCmd + 3), '.', (BYTE)*puVar1);
	}
	return 5;
}

DWORD On_BREAKOBJ(TCmd *pCmd, int pnum)

{
	uint *puVar1;

	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 5);
	} else {
		*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
		*(ushort *)(pCmd + 3) = CONCAT11(pCmd[4].bCmd, pCmd[3].bCmd);
		puVar1 = (uint *)((int)plr + pnum * 0x55ec + 0x34);
		if ((uint)currlevel == *puVar1) {
			SyncBreakObj((uint) * (ushort *)(pCmd + 1), (uint) * (ushort *)(pCmd + 3));
		}
		delta_sync_object((uint) * (ushort *)(pCmd + 3), '/', (BYTE)*puVar1);
	}
	return 5;
}

DWORD On_CHANGEPLRITEMS(TCmd *pCmd, int pnum)

{
	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 0xb);
	} else {
		*(ushort *)(pCmd + 2) = CONCAT11(pCmd[3].bCmd, pCmd[2].bCmd);
		*(ushort *)(pCmd + 4) = CONCAT11(pCmd[5].bCmd, pCmd[4].bCmd);
		*(uint *)(pCmd + 6) = (uint)pCmd[9].bCmd << 0x18 | (uint)pCmd[8].bCmd << 0x10 | (uint)pCmd[7].bCmd << 8 | (uint)pCmd[6].bCmd;
		if (pnum != myplr) {
			CheckInvSwap(pnum, pCmd[1].bCmd, (uint) * (ushort *)(pCmd + 2), *(WORD *)(pCmd + 4), *(int *)(pCmd + 6),
			    (uint)pCmd[10].bCmd);
		}
	}
	return 0xb;
}

DWORD On_DELPLRITEMS(TCmd *pCmd, int pnum)

{
	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 2);
	} else {
		if (pnum != myplr) {
			inv_update_rem_item(pnum, pCmd[1].bCmd);
		}
	}
	return 2;
}

DWORD On_PLRLEVEL(TCmd *pCmd, int pnum)

{
	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 3);
	} else {
		*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
		if ((*(ushort *)(pCmd + 1) < 0x34) && (pnum != myplr)) {
			*(undefined *)((int)plr + pnum * 0x55ec + 0x1b4) = (char)*(ushort *)(pCmd + 1);
		}
	}
	return 3;
}

DWORD On_DROPITEM(TCmd *pCmd, int pnum)

{
	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 0x16);
	} else {
		*(ushort *)(pCmd + 3) = CONCAT11(pCmd[4].bCmd, pCmd[3].bCmd);
		*(ushort *)(pCmd + 5) = CONCAT11(pCmd[6].bCmd, pCmd[5].bCmd);
		*(uint *)(pCmd + 7) = (uint)pCmd[10].bCmd << 0x18 | (uint)pCmd[9].bCmd << 0x10 | (uint)pCmd[8].bCmd << 8 | (uint)pCmd[7].bCmd;
		*(ushort *)(pCmd + 0x10) = CONCAT11(pCmd[0x11].bCmd, pCmd[0x10].bCmd);
		*(uint *)(pCmd + 0x12) = (uint)pCmd[0x15].bCmd << 0x18 | (uint)pCmd[0x14].bCmd << 0x10 | (uint)pCmd[0x13].bCmd << 8 | (uint)pCmd[0x12].bCmd;
		delta_put_item((TCmdPItem *)pCmd, (uint)pCmd[1].bCmd, (uint)pCmd[2].bCmd,
		    (BYTE) * (undefined4 *)((int)plr + pnum * 0x55ec + 0x34));
	}
	return 0x16;
}

DWORD On_SEND_PLRINFO(TCmd *pCmd, int pnum)

{
	undefined8 uVar1;
	undefined local_8;
	undefined uStack7;

	uStack7 = (undefined) * (undefined2 *)(pCmd + 3);
	local_8 = (undefined)((ushort) * (undefined2 *)(pCmd + 3) >> 8);
	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, (uint)CONCAT11(uStack7, local_8) + 5);
	} else {
		*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
		*(ushort *)(pCmd + 3) = CONCAT11(pCmd[4].bCmd, pCmd[3].bCmd);
		uVar1 = countLeadingZeros(2 - (uint)pCmd->bCmd);
		recv_plrinfo(pnum, (TCmdPlrInfoHdr *)pCmd, (uint)uVar1 >> 5 & 0xff);
	}
	return (DWORD)((uint)CONCAT11(uStack7, local_8) + 5);
}

DWORD On_ACK_PLRINFO(TCmd *pCmd, int pnum)

{
	DWORD DVar1;

	DVar1 = On_SEND_PLRINFO(pCmd, pnum);
	return DVar1;
}

DWORD On_PLAYER_JOINLEVEL(TCmd *pCmd, int pnum)

{
	byte *pbVar1;
	int *piVar2;
	undefined8 uVar3;
	int iVar4;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int *piVar5;
	int *piVar6;
	int iVar7;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	iVar4 = 0x100f8fd0;
	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 5);
	} else {
		iVar7 = pnum * 0x55ec;
		*(ushort *)(pCmd + 3) = CONCAT11(pCmd[4].bCmd, pCmd[3].bCmd);
		*(undefined *)((int)plr + iVar7 + 0x13b) = 0;
		if ((*(char *)((int)plr + iVar7 + 0x13c) != '\0') && (*(char *)((int)plr + iVar7 + 0x1d) == '\0')) {
			*(undefined *)((int)plr + iVar7 + 0x1d) = 1;
			DAT_1017de94 = DAT_1017de94 + '\x01';
			iVar4 = 0x100f8fd0;
			EventPlrMsg("Player \'%s\' (level %d) just joined the game", iVar7 + 0x10186ffc,
			    (int)*(char *)((int)plr + iVar7 + 0x1b4), &DAT_1017de94, (PlayerStruct *)((int)plr + iVar7), in_r8, in_r9,
			    in_r10, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
			    in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
		}
		if ((*(char *)((int)plr + iVar7 + 0x1d) != '\0') && (myplr != pnum)) {
			pbVar1 = *(byte **)(iVar4 + -0x77e4);
			piVar5 = (int *)((int)plr + iVar7 + 0x38);
			*(uint *)((int)plr + iVar7 + 0x38) = (uint)pCmd[1].bCmd;
			piVar6 = (int *)((int)plr + iVar7 + 0x3c);
			*(uint *)((int)plr + iVar7 + 0x3c) = (uint)pCmd[2].bCmd;
			*(uint *)((int)plr + iVar7 + 0x34) = (uint) * (ushort *)(pCmd + 3);
			*(undefined4 *)((int)plr + iVar7 + 0x214) = 0;
			if ((uint)*pbVar1 == *(uint *)((int)plr + iVar7 + 0x34)) {
				LoadPlrGFX(pnum, (player_graphic)0x1);
				SyncInitPlr(pnum);
				if (*(int *)((int)plr + iVar7 + 0x194) >> 6 == 0) {
					*(undefined4 *)((int)plr + iVar7 + 0x78) = 0;
					LoadPlrGFX(pnum, (player_graphic)0x80);
					((PlayerStruct *)((int)plr + iVar7))->_pmode = 8;
					NewPlrAnim(pnum, (BYTE *)((int)plr + iVar7 + 0x408), *(int *)((int)plr + iVar7 + 0x448), 1,
					    *(int *)((int)plr + iVar7 + 0x44c));
					piVar2 = *(int **)(iVar4 + -0x779c);
					*(int *)((int)plr + iVar7 + 0x8c) = *(int *)((int)plr + iVar7 + 0x88) + -1;
					*(int *)((int)plr + iVar7 + 0x1ec) = *(int *)((int)plr + iVar7 + 0x88) << 1;
					iVar4 = *piVar5 * 0x70 + *piVar6;
					*(byte *)(*piVar2 + iVar4) = *(byte *)(*piVar2 + iVar4) | 4;
				} else {
					StartStand(pnum, 0);
				}
				uVar3 = countLeadingZeros(myplr - pnum);
				iVar4 = AddVision(*piVar5, *piVar6, (int)*(char *)((int)plr + iVar7 + 0x13a), (uint)uVar3 >> 5 & 0xff);
				*(int *)((int)plr + iVar7 + 0xa0) = iVar4;
				*(undefined4 *)((int)plr + iVar7 + 0x9c) = 0xffffffff;
			}
		}
	}
	return 5;
}

DWORD On_ACTIVATEPORTAL(TCmd *pCmd, int pnum)

{
	bool bVar1;
	bool bVar2;
	ulonglong uVar3;
	int iVar4;
	int *piVar5;

	iVar4 = 0x100f8fd0;
	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 9);
	} else {
		*(ushort *)(pCmd + 3) = CONCAT11(pCmd[4].bCmd, pCmd[3].bCmd);
		*(ushort *)(pCmd + 5) = CONCAT11(pCmd[6].bCmd, pCmd[5].bCmd);
		*(ushort *)(pCmd + 7) = CONCAT11(pCmd[8].bCmd, pCmd[7].bCmd);
		ActivatePortal(pnum, (uint)pCmd[1].bCmd, (uint)pCmd[2].bCmd, (uint) * (ushort *)(pCmd + 3),
		    (uint) * (ushort *)(pCmd + 5), (uint) * (ushort *)(pCmd + 7));
		if (pnum != **(int **)(iVar4 + -0x77ac)) {
			if (**(byte **)(iVar4 + -0x77e4) == 0) {
				AddInTownPortal(pnum);
			} else {
				if ((uint) * *(byte **)(iVar4 + -0x77e4) == *(uint *)(*(int *)(iVar4 + -0x77a8) + pnum * 0x55ec + 0x34)) {
					bVar1 = true;
					piVar5 = *(int **)(iVar4 + -0x7660);
					uVar3 = (ulonglong) * *(uint **)(iVar4 + -0x7668);
					bVar2 = true;
					if (0 < (int)**(uint **)(iVar4 + -0x7668)) {
						do {
							bVar1 = bVar2;
							if ((*(int *)(&DAT_10149b74 + *piVar5 * 0xb4) == 10) && (pnum == *(int *)(*piVar5 * 0xb4 + 0x10149bec))) {
								bVar1 = false;
							}
							piVar5 = piVar5 + 1;
							uVar3 = uVar3 - 1;
							bVar2 = bVar1;
						} while (uVar3 != 0);
					}
					if (bVar1) {
						AddWarpMissile(pnum, (uint)pCmd[1].bCmd, (uint)pCmd[2].bCmd);
					}
				} else {
					RemovePortalMissile(pnum);
				}
			}
		}
		delta_open_portal(pnum, pCmd[1].bCmd, pCmd[2].bCmd, (BYTE) * (undefined2 *)(pCmd + 3),
		    (BYTE) * (undefined2 *)(pCmd + 5), (BYTE) * (undefined2 *)(pCmd + 7));
	}
	return 9;
}

DWORD On_DEACTIVATEPORTAL(TCmd *pCmd, int pnum)

{
	BOOL BVar1;

	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 1);
	} else {
		BVar1 = PortalOnLevel(pnum);
		if (BVar1 != 0) {
			RemovePortalMissile(pnum);
		}
		DeactivatePortal(pnum);
		RemovePlrPortal(pnum);
	}
	return 1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

DWORD On_RETOWN(TCmd *pCmd, int pnum)

{
	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 1);
	} else {
		if (pnum == myplr) {
			_DAT_10186eb4 = 0;
			gamemenu_off();
		}
		RestartTownLvl(pnum);
	}
	return 1;
}

DWORD On_SETSTR(TCmd *pCmd, int pnum)

{
	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 3);
	} else {
		*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
		if ((*(ushort *)(pCmd + 1) < 0x2ef) && (pnum != myplr)) {
			SetPlrStr(pnum, (uint) * (ushort *)(pCmd + 1));
		}
	}
	return 3;
}

DWORD On_SETDEX(TCmd *pCmd, int pnum)

{
	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 3);
	} else {
		*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
		if ((*(ushort *)(pCmd + 1) < 0x2ef) && (pnum != myplr)) {
			SetPlrDex(pnum, (uint) * (ushort *)(pCmd + 1));
		}
	}
	return 3;
}

DWORD On_SETMAG(TCmd *pCmd, int pnum)

{
	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 3);
	} else {
		*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
		if ((*(ushort *)(pCmd + 1) < 0x2ef) && (pnum != myplr)) {
			SetPlrMag(pnum, (uint) * (ushort *)(pCmd + 1));
		}
	}
	return 3;
}

DWORD On_SETVIT(TCmd *pCmd, int pnum)

{
	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 3);
	} else {
		*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
		if ((*(ushort *)(pCmd + 1) < 0x2ef) && (pnum != myplr)) {
			SetPlrVit(pnum, (uint) * (ushort *)(pCmd + 1));
		}
	}
	return 3;
}

DWORD On_STRING(TCmd *pCmd, int pnum)

{
	DWORD DVar1;

	DVar1 = On_STRING2(pnum, pCmd);
	return DVar1;
}

DWORD On_SYNCQUEST(TCmd *pCmd, int pnum)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	if (gbBufferMsgs == 1) {
		msg_send_packet(pnum, pCmd, 5);
	} else {
		if (pnum != myplr) {
			iVar1 = 0x100f8fd0;
			SetMultiQuest((uint)pCmd[1].bCmd, (uint)pCmd[2].bCmd, (uint)pCmd[3].bCmd, (uint)pCmd[4].bCmd);
		}
		*(undefined *)(iVar1 + -0x4d30) = 1;
	}
	return 5;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

DWORD On_ENDSHIELD(TCmd *pCmd, int pnum)

{
	int mi;
	int i;
	int *piVar1;

	if (((gbBufferMsgs != 1) && (pnum != myplr)) && ((uint)currlevel == *(uint *)((int)plr + pnum * 0x55ec + 0x34))) {
		piVar1 = (int *)&DAT_1014939c;
		i = 0;
		while (i < _DAT_10149b70) {
			mi = *piVar1;
			if ((*(int *)(&DAT_10149b74 + mi * 0xb4) == 0xd) && (pnum == *(int *)(mi * 0xb4 + 0x10149bec))) {
				ClearMissileSpot(mi);
				DeleteMissile(mi, i);
			}
			piVar1 = piVar1 + 1;
			i = i + 1;
		}
	}
	return 1;
}

DWORD On_CHEAT_EXPERIENCE(TCmd *pCmd, int pnum)

{
	return 1;
}

DWORD On_CHEAT_SPELL_LEVEL(TCmd *pCmd, int pnum)

{
	return 1;
}

DWORD On_NOVA(TCmd *pCmd, int pnum)

{
	int iVar1;

	if (((gbBufferMsgs != 1) && (iVar1 = pnum * 0x55ec, (uint)currlevel == *(uint *)((int)plr + iVar1 + 0x34))) && (pnum != myplr)) {
		ClrPlrPath(pnum);
		*(undefined4 *)((int)plr + iVar1 + 0xa4) = 0x12;
		*(undefined *)((int)plr + iVar1 + 0xa8) = 4;
		*(undefined *)((int)plr + iVar1 + 0xa9) = 3;
		*(undefined4 *)((int)plr + iVar1 + 0x20) = 0xc;
		*(uint *)((int)plr + iVar1 + 0x24) = (uint)pCmd[1].bCmd;
		*(uint *)((int)plr + iVar1 + 0x28) = (uint)pCmd[2].bCmd;
	}
	return 3;
}

DWORD On_SETSHIELD(TCmd *pCmd, int pnum)

{
	if (gbBufferMsgs != 1) {
		*(undefined *)((int)plr + pnum * 0x55ec + 0x5594) = 1;
	}
	return 1;
}

DWORD On_REMSHIELD(TCmd *pCmd, int pnum)

{
	if (gbBufferMsgs != 1) {
		*(undefined *)((int)plr + pnum * 0x55ec + 0x5594) = 0;
	}
	return 1;
}

DWORD On_DEBUG(TCmd *pCmd, int pnum)

{
	return 1;
}

DWORD ParseCmd(int pnum, TCmd *pCmd)

{
	byte bVar1;
	DWORD DVar2;

	DAT_100f4288 = pCmd->bCmd;
	if (((*(short *)(&DAT_1017dd88 + pnum * 2) == 0) || (DAT_100f4288 == '\x02')) || (DAT_100f4288 == '6')) {
		bVar1 = pCmd->bCmd;
		switch (bVar1) {
		default:
			if ((bVar1 < 0x3a) || (0x4c < bVar1)) {
				SNetDropPlayer(pnum, 0x40000006);
				DVar2 = 0;
			} else {
				*(ushort *)(pCmd + 1) = CONCAT11(pCmd[2].bCmd, pCmd[1].bCmd);
				*(ushort *)(pCmd + 3) = CONCAT11(pCmd[4].bCmd, pCmd[3].bCmd);
				DVar2 = On_DLEVEL(pnum, pCmd);
			}
			break;
		case 1:
			DVar2 = On_WALKXY(pCmd, pnum);
			break;
		case 2:
			DVar2 = On_ACK_PLRINFO(pCmd, pnum);
			break;
		case 3:
			DVar2 = On_ADDSTR(pCmd, pnum);
			break;
		case 4:
			DVar2 = On_ADDMAG(pCmd, pnum);
			break;
		case 5:
			DVar2 = On_ADDDEX(pCmd, pnum);
			break;
		case 6:
			DVar2 = On_ADDVIT(pCmd, pnum);
			break;
		case 7:
			DVar2 = On_SBSPELL(pCmd, pnum);
			break;
		case 8:
			DVar2 = On_GETITEM(pCmd, pnum);
			break;
		case 9:
			DVar2 = On_AGETITEM(pCmd, pnum);
			break;
		case 10:
			DVar2 = On_PUTITEM(pCmd, pnum);
			break;
		case 0xb:
			DVar2 = On_RESPAWNITEM(pCmd, pnum);
			break;
		case 0xc:
			DVar2 = On_ATTACKXY(pCmd, pnum);
			break;
		case 0xd:
			DVar2 = On_RATTACKXY(pCmd, pnum);
			break;
		case 0xe:
			DVar2 = On_SPELLXY(pCmd, pnum);
			break;
		case 0xf:
			DVar2 = On_TSPELLXY(pCmd, pnum);
			break;
		case 0x10:
			DVar2 = On_OPOBJXY(pCmd, pnum);
			break;
		case 0x11:
			DVar2 = On_DISARMXY(pCmd, pnum);
			break;
		case 0x12:
			DVar2 = On_ATTACKID(pCmd, pnum);
			break;
		case 0x13:
			DVar2 = On_ATTACKPID(pCmd, pnum);
			break;
		case 0x14:
			DVar2 = On_RATTACKID(pCmd, pnum);
			break;
		case 0x15:
			DVar2 = On_RATTACKPID(pCmd, pnum);
			break;
		case 0x16:
			DVar2 = On_SPELLID(pCmd, pnum);
			break;
		case 0x17:
			DVar2 = On_SPELLPID(pCmd, pnum);
			break;
		case 0x18:
			DVar2 = On_TSPELLID(pCmd, pnum);
			break;
		case 0x19:
			DVar2 = On_TSPELLPID(pCmd, pnum);
			break;
		case 0x1a:
			DVar2 = On_RESURRECT(pCmd, pnum);
			break;
		case 0x1b:
			DVar2 = On_OPOBJT(pCmd, pnum);
			break;
		case 0x1c:
			DVar2 = On_KNOCKBACK(pCmd, pnum);
			break;
		case 0x1d:
			DVar2 = On_TALKXY(pCmd, pnum);
			break;
		case 0x1e:
			DVar2 = On_NEWLVL(pCmd, pnum);
			break;
		case 0x1f:
			DVar2 = On_WARP(pCmd, pnum);
			break;
		case 0x20:
			DVar2 = On_CHEAT_EXPERIENCE(pCmd, pnum);
			break;
		case 0x21:
			DVar2 = On_CHEAT_SPELL_LEVEL(pCmd, pnum);
			break;
		case 0x22:
			DVar2 = On_DEBUG(pCmd, pnum);
			break;
		case 0x23:
			DVar2 = On_SYNCDATA(pCmd, pnum);
			break;
		case 0x24:
			DVar2 = On_MONSTDEATH(pCmd, pnum);
			break;
		case 0x25:
			DVar2 = On_MONSTDAMAGE(pCmd, pnum);
			break;
		case 0x26:
			DVar2 = On_PLRDEAD(pCmd, pnum);
			break;
		case 0x27:
			DVar2 = On_REQUESTGITEM(pCmd, pnum);
			break;
		case 0x28:
			DVar2 = On_REQUESTAGITEM(pCmd, pnum);
			break;
		case 0x29:
			DVar2 = On_GOTOGETITEM(pCmd, pnum);
			break;
		case 0x2a:
			DVar2 = On_GOTOAGETITEM(pCmd, pnum);
			break;
		case 0x2b:
			DVar2 = On_OPENDOOR(pCmd, pnum);
			break;
		case 0x2c:
			DVar2 = On_CLOSEDOOR(pCmd, pnum);
			break;
		case 0x2d:
			DVar2 = On_OPERATEOBJ(pCmd, pnum);
			break;
		case 0x2e:
			DVar2 = On_PLROPOBJ(pCmd, pnum);
			break;
		case 0x2f:
			DVar2 = On_BREAKOBJ(pCmd, pnum);
			break;
		case 0x30:
			DVar2 = On_CHANGEPLRITEMS(pCmd, pnum);
			break;
		case 0x31:
			DVar2 = On_DELPLRITEMS(pCmd, pnum);
			break;
		case 0x32:
			DVar2 = On_PLRDAMAGE(pCmd, pnum);
			break;
		case 0x33:
			DVar2 = On_PLRLEVEL(pCmd, pnum);
			break;
		case 0x34:
			DVar2 = On_DROPITEM(pCmd, pnum);
			break;
		case 0x35:
			DVar2 = On_PLAYER_JOINLEVEL(pCmd, pnum);
			break;
		case 0x36:
			DVar2 = On_SEND_PLRINFO(pCmd, pnum);
			break;
		case 0x37:
			DVar2 = On_SATTACKXY(pCmd, pnum);
			break;
		case 0x38:
			DVar2 = On_ACTIVATEPORTAL(pCmd, pnum);
			break;
		case 0x39:
			DVar2 = On_DEACTIVATEPORTAL(pCmd, pnum);
			break;
		case 0x4d:
			DVar2 = On_HEALOTHER(pCmd, pnum);
			break;
		case 0x4e:
			DVar2 = On_STRING(pCmd, pnum);
			break;
		case 0x4f:
			DVar2 = On_SETSTR(pCmd, pnum);
			break;
		case 0x50:
			DVar2 = On_SETMAG(pCmd, pnum);
			break;
		case 0x51:
			DVar2 = On_SETDEX(pCmd, pnum);
			break;
		case 0x52:
			DVar2 = On_SETVIT(pCmd, pnum);
			break;
		case 0x53:
			DVar2 = On_RETOWN(pCmd, pnum);
			break;
		case 0x54:
			DVar2 = On_SPELLXYD(pCmd, pnum);
			break;
		case 0x55:
			DVar2 = On_ITEMEXTRA(pCmd, pnum);
			break;
		case 0x56:
			DVar2 = On_SYNCPUTITEM(pCmd, pnum);
			break;
		case 0x57:
			DVar2 = On_KILLGOLEM(pCmd, pnum);
			break;
		case 0x58:
			DVar2 = On_SYNCQUEST(pCmd, pnum);
			break;
		case 0x59:
			DVar2 = On_ENDSHIELD(pCmd, pnum);
			break;
		case 0x5a:
			DVar2 = On_AWAKEGOLEM(pCmd, pnum);
			break;
		case 0x5b:
			DVar2 = On_NOVA(pCmd, pnum);
			break;
		case 0x5c:
			DVar2 = On_SETSHIELD(pCmd, pnum);
			break;
		case 0x5d:
			DVar2 = On_REMSHIELD(pCmd, pnum);
		}
	} else {
		DVar2 = 0;
	}
	return DVar2;
}
