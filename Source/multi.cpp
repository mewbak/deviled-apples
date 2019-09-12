
void buffer_init(TBuffer *pBuf)

{
	pBuf->dwNextWriteOffset = 0;
	pBuf->bData[0] = '\0';
	return;
}

int multi_check_pkt_valid(TBuffer *pBuf)

{
	undefined8 uVar1;

	uVar1 = countLeadingZeros(-pBuf->dwNextWriteOffset);
	return (int)((uint)uVar1 >> 5 & 0xff);
}

void multi_copy_packet(TBuffer *pBuf, void *packet, BYTE size)

{
	uint uVar1;
	uint uVar2;
	longlong lVar3;
	ulonglong uVar4;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	longlong lVar5;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	uVar2 = (int)(char)size & 0xff;
	uVar1 = pBuf->dwNextWriteOffset;
	uVar4 = (ulonglong)uVar1;
	if ((uVar4 + (ulonglong)uVar2 + 2 & 0xffffffff) < 0x1001) {
		lVar3 = (ulonglong)uVar2 + uVar4;
		lVar5 = (longlong)(int)pBuf + uVar4 + 4;
		pBuf->dwNextWriteOffset = (int)lVar3 + 1;
		*(BYTE *)lVar5 = size;
		lVar5 = lVar5 + 1;
		CopyMemory((char)lVar5, (char)packet, (char)uVar2, (char)lVar3, (char)uVar1, in_r8, in_r9, in_r10,
		    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
		*(undefined *)((int)lVar5 + uVar2) = 0;
	}
	return;
}

BYTE *multi_recv_packet(TBuffer *pBuf, BYTE *body, int *size)

{
	byte bVar1;
	longlong lVar2;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	longlong lVar3;
	longlong lVar4;
	ulonglong uVar5;
	longlong lVar6;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	lVar3 = (longlong)(int)body;
	if (pBuf->dwNextWriteOffset != 0) {
		lVar4 = (longlong)(int)pBuf + 4;
		while (true) {
			bVar1 = *(byte *)lVar4;
			uVar5 = (ulonglong)bVar1;
			if ((bVar1 == 0) || ((ulonglong)(uint)*size < uVar5))
				break;
			CopyMemory((char)lVar3, (char)(lVar4 + 1), bVar1, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb,
			    in_stack_ffffffbf, local_3c);
			lVar4 = lVar4 + 1 + uVar5;
			lVar3 = lVar3 + uVar5;
			*size = *size - (uint)bVar1;
		}
		lVar2 = (longlong)(int)pBuf + 4;
		lVar6 = lVar4 - lVar2;
		MoveMemory((char)lVar2, (char)lVar4, ((char)pBuf->dwNextWriteOffset - (char)lVar6) + '\x01', in_r6, in_r7,
		    in_r8, in_r9, in_r10, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
		body = (BYTE *)lVar3;
		pBuf->dwNextWriteOffset = pBuf->dwNextWriteOffset - (int)lVar6;
	}
	return body;
}

void NetRecvPlrData(TPkt *pkt)

{
	(pkt->hdr).wCheck = 0x6970;
	(pkt->hdr).px = (BYTE) * (undefined4 *)((int)plr + myplr * 0x55ec + 0x38);
	(pkt->hdr).py = (BYTE) * (undefined4 *)((int)plr + myplr * 0x55ec + 0x3c);
	(pkt->hdr).targx = (BYTE) * (undefined4 *)((int)plr + myplr * 0x55ec + 0x48);
	(pkt->hdr).targy = (BYTE) * (undefined4 *)((int)plr + myplr * 0x55ec + 0x4c);
	(pkt->hdr).php = *(int *)((int)plr + myplr * 0x55ec + 0x194);
	(pkt->hdr).pmhp = *(int *)((int)plr + myplr * 0x55ec + 0x198);
	(pkt->hdr).bstr = (BYTE) * (undefined4 *)((int)plr + myplr * 0x55ec + 0x164);
	(pkt->hdr).bmag = (BYTE) * (undefined4 *)((int)plr + myplr * 0x55ec + 0x16c);
	(pkt->hdr).bdex = (BYTE) * (undefined4 *)((int)plr + myplr * 0x55ec + 0x174);
	return;
}

void multi_msg_add(BYTE *pbMsg, BYTE bLen)

{
	if ((pbMsg != (BYTE *)0x0) && (bLen != '\0')) {
		tmsg_add(pbMsg, bLen);
	}
	return;
}

void multi_send_packet(void *packet, BYTE dwSize)

{
	ushort uVar1;
	undefined *puVar2;
	BOOL BVar3;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	byte local_204;
	byte bStack515;
	byte bStack514;
	byte bStack513;
	byte local_200;
	byte bStack511;
	byte bStack510;
	byte bStack509;
	undefined local_1f9;
	undefined uStack504;
	undefined local_1f7;
	undefined uStack502;

	puVar2 = (undefined *)(ZEXT48(register0x0000000c) - 0x240);
	*(BADSPACEBASE **)puVar2 = register0x0000000c;
	NetRecvPlrData(puVar2 + 0x38, *puVar2);
	*(short *)(puVar2 + 0x49) = (short)((int)(char)dwSize & 0xffU) + 0x13;
	uVar1 = *(ushort *)(puVar2 + 0x49);
	*(uint *)(puVar2 + 0x3c) = (uint)bStack513 << 0x18 | (uint)bStack514 << 0x10 | (uint)bStack515 << 8 | (uint)local_204;
	*(uint *)(puVar2 + 0x40) = (uint)bStack509 << 0x18 | (uint)bStack510 << 0x10 | (uint)bStack511 << 8 | (uint)local_200;
	*(ushort *)(puVar2 + 0x47) = CONCAT11(uStack504, local_1f9);
	*(ushort *)(puVar2 + 0x49) = CONCAT11(uStack502, local_1f7);
	CopyMemory((char)(ZEXT48(register0x0000000c) - 0x240) + 'K', (char)packet, (char)((int)(char)dwSize & 0xffU), in_r6,
	    in_r7, in_r8, in_r9, in_r10, puVar2[0xb], puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
	BVar3 = SNetSendMessage(**(undefined4 **)(*(int *)(puVar2 + 0x14) + -0x77ac), puVar2 + 0x38, (uint)uVar1, *puVar2);
	if (BVar3 == 0) {
		nthread_terminate_game(*(undefined4 *)(*(int *)(puVar2 + 0x14) + -0x5c0c), *puVar2);
	}
	return;
}

void NetSendLoPri(BYTE *pbMsg, BYTE bLen)

{
	if ((pbMsg != (BYTE *)0x0) && (bLen != '\0')) {
		multi_copy_packet((TBuffer *)&DAT_1017a5d8, pbMsg, bLen);
		multi_send_packet(pbMsg, bLen);
	}
	return;
}

// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void NetSendHiPri(BYTE *pbMsg, BYTE bLen)

{
	int iVar1;
	BYTE *body;
	BOOL BVar2;
	longlong lVar3;
	int local_23c;
	DWORD local_218;
	undefined auStack532[4];
	uint local_210;
	uint local_20c;
	undefined2 local_205;
	undefined2 local_203;
	undefined auStack513[513];

	iVar1 = 0x100f8fd0;
	if ((pbMsg != (BYTE *)0x0) && (bLen != '\0')) {
		iVar1 = 0x100f8fd0;
		multi_copy_packet((TBuffer *)&DAT_101795d4, pbMsg, bLen);
		multi_send_packet(pbMsg, bLen);
	}
	if (*(int *)(iVar1 + -0x4d00) == 0) {
		*(undefined4 *)(iVar1 + -0x4d00) = 1;
		NetRecvPlrData((TPkt *)auStack532);
		local_218 = _DAT_1017def4 - 0x13;
		body = multi_recv_packet((TBuffer *)&DAT_101795d4, auStack532 + 0x13, (int *)&local_218);
		body = multi_recv_packet(*(TBuffer **)(iVar1 + -0x5c10), body, (int *)&local_218);
		local_218 = sync_all_monsters(body, local_218);
		lVar3 = (ulonglong)_DAT_1017def4 - (ulonglong)local_218;
		local_210 = local_210 << 0x18 | (local_210 >> 8 & 0xff) << 0x10 | (local_210 >> 0x10 & 0xff) << 8 | local_210 >> 0x18;
		local_20c = local_20c << 0x18 | (local_20c >> 8 & 0xff) << 0x10 | (local_20c >> 0x10 & 0xff) << 8 | local_20c >> 0x18;
		local_205 = CONCAT11((undefined)local_205, local_205._0_1_);
		local_203._1_1_ = (undefined)lVar3;
		local_203._0_1_ = (undefined)((ulonglong)lVar3 >> 8);
		local_203 = CONCAT11((undefined)local_203, local_203._0_1_);
		BVar2 = SNetSendMessage(-2, auStack532, (uint)lVar3);
		if (BVar2 == 0) {
			nthread_terminate_game(*(char **)(local_23c + -0x5c18));
		}
	}
	return;
}

void multi_send_msg_packet(int pmask, BYTE *src, BYTE len)

{
	undefined *puVar1;
	longlong lVar2;
	BOOL BVar3;
	DWORD DVar4;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	uint playerID;
	uint uVar5;
	byte local_214;
	byte bStack531;
	byte bStack530;
	byte bStack529;
	byte local_210;
	byte bStack527;
	byte bStack526;
	byte bStack525;
	undefined local_209;
	undefined uStack520;
	undefined local_207;
	undefined uStack518;

	puVar1 = (undefined *)(ZEXT48(register0x0000000c) - 0x250);
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	NetRecvPlrData(puVar1 + 0x38, *puVar1);
	lVar2 = (ulonglong)((int)(char)len & 0xffU) + 0x13;
	*(short *)(puVar1 + 0x49) = (short)lVar2;
	CopyMemory((char)(ZEXT48(register0x0000000c) - 0x250) + 'K', (char)src, (char)((int)(char)len & 0xffU), in_r6,
	    in_r7, in_r8, in_r9, in_r10, puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
	*(uint *)(puVar1 + 0x3c) = (uint)bStack529 << 0x18 | (uint)bStack530 << 0x10 | (uint)bStack531 << 8 | (uint)local_214;
	*(uint *)(puVar1 + 0x40) = (uint)bStack525 << 0x18 | (uint)bStack526 << 0x10 | (uint)bStack527 << 8 | (uint)local_210;
	*(ushort *)(puVar1 + 0x47) = CONCAT11(uStack520, local_209);
	uVar5 = 1;
	playerID = 0;
	*(ushort *)(puVar1 + 0x49) = CONCAT11(uStack518, local_207);
	do {
		if (((uVar5 & pmask) != 0) && (BVar3 = SNetSendMessage(playerID, puVar1 + 0x38, (int)lVar2, *puVar1), BVar3 == 0)) {
			DVar4 = SErrGetLastError(*puVar1);
			if (DVar4 != 0x8510006a) {
				nthread_terminate_game(*(undefined4 *)(*(int *)(puVar1 + 0x14) + -0x5c18), *puVar1);
				return;
			}
		}
		playerID = playerID + 1;
		uVar5 = uVar5 << 1;
	} while (playerID < 4);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void multi_mon_seeds(void)

{
	uint uVar1;
	int iVar2;
	int iVar3;
	undefined *puVar4;
	int iVar5;
	longlong lVar6;

	lVar6 = 5;
	puVar4 = &DAT_10151a30;
	_DAT_100f42c8 = _DAT_100f42c8 + 1;
	iVar5 = 0;
	uVar1 = _DAT_100f42c8 * 0x1000000 | _DAT_100f42c8 >> 8;
	do {
		iVar2 = iVar5 + uVar1;
		*(int *)(puVar4 + 0xb8) = iVar2;
		*(int *)(puVar4 + 0x1a0) = iVar2 + 1;
		*(int *)(puVar4 + 0x288) = iVar2 + 2;
		iVar3 = iVar5 + 8 + uVar1;
		*(int *)(puVar4 + 0x370) = iVar2 + 3;
		*(int *)(puVar4 + 0x458) = iVar2 + 4;
		*(int *)(puVar4 + 0x540) = iVar2 + 5;
		*(int *)(puVar4 + 0x628) = iVar2 + 6;
		*(int *)(puVar4 + 0x710) = iVar2 + 7;
		*(int *)(puVar4 + 0x7f8) = iVar3;
		iVar2 = iVar5 + 0x10 + uVar1;
		*(int *)(puVar4 + 0x8e0) = iVar3 + 1;
		*(int *)(puVar4 + 0x9c8) = iVar3 + 2;
		*(int *)(puVar4 + 0xab0) = iVar3 + 3;
		*(int *)(puVar4 + 0xb98) = iVar3 + 4;
		*(int *)(puVar4 + 0xc80) = iVar3 + 5;
		*(int *)(puVar4 + 0xd68) = iVar3 + 6;
		*(int *)(puVar4 + 0xe50) = iVar3 + 7;
		*(int *)(puVar4 + 0xf38) = iVar2;
		iVar3 = iVar5 + 0x18 + uVar1;
		*(int *)(puVar4 + 0x1020) = iVar2 + 1;
		*(int *)(puVar4 + 0x1108) = iVar2 + 2;
		*(int *)(puVar4 + 0x11f0) = iVar2 + 3;
		*(int *)(puVar4 + 0x12d8) = iVar2 + 4;
		*(int *)(puVar4 + 0x13c0) = iVar2 + 5;
		*(int *)(puVar4 + 0x14a8) = iVar2 + 6;
		*(int *)(puVar4 + 0x1590) = iVar2 + 7;
		*(int *)(puVar4 + 0x1678) = iVar3;
		iVar2 = iVar5 + 0x20 + uVar1;
		iVar5 = iVar5 + 0x28;
		*(int *)(puVar4 + 0x1760) = iVar3 + 1;
		*(int *)(puVar4 + 0x1848) = iVar3 + 2;
		*(int *)(puVar4 + 0x1930) = iVar3 + 3;
		*(int *)(puVar4 + 0x1a18) = iVar3 + 4;
		*(int *)(puVar4 + 0x1b00) = iVar3 + 5;
		*(int *)(puVar4 + 0x1be8) = iVar3 + 6;
		*(int *)(puVar4 + 0x1cd0) = iVar3 + 7;
		*(int *)(puVar4 + 0x1db8) = iVar2;
		*(int *)(puVar4 + 0x1ea0) = iVar2 + 1;
		*(int *)(puVar4 + 0x1f88) = iVar2 + 2;
		*(int *)(puVar4 + 0x2070) = iVar2 + 3;
		*(int *)(puVar4 + 0x2158) = iVar2 + 4;
		*(int *)(puVar4 + 0x2240) = iVar2 + 5;
		*(int *)(puVar4 + 9000) = iVar2 + 6;
		*(int *)(puVar4 + 0x2410) = iVar2 + 7;
		puVar4 = puVar4 + 0x2440;
		lVar6 = lVar6 + -1;
	} while (lVar6 != 0);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void multi_handle_turn_upper_bit(int pnum)

{
	int iVar1;

	iVar1 = 0;
	if (((_DAT_1017decc & 0x10000) == 0) || (pnum == 0)) {
		iVar1 = 1;
		if (((uRam1017ded0 & 0x10000) == 0) || (pnum == 1)) {
			iVar1 = 2;
			if ((((uRam1017ded4 & 0x10000) == 0) || (pnum == 2)) && ((iVar1 = 3, (uRam1017ded8 & 0x10000) == 0 || (pnum == 3)))) {
				iVar1 = 4;
			}
		}
	}
	if (myplr == iVar1) {
		*(undefined *)(pnum + 0x100f42bd) = 1;
		return;
	}
	if (myplr != pnum) {
		return;
	}
	DAT_1017de91 = (char)iVar1;
	return;
}

void multi_parse_turn(int pnum, int turn)

{
	int iVar1;
	uint uVar2;

	iVar1 = 0x100f8fd0;
	if ((turn & 0x80000000U) != 0) {
		iVar1 = 0x100f8fd0;
		multi_handle_turn_upper_bit(pnum);
	}
	uVar2 = turn & 0x7fffffff;
	if (*(uint *)(iVar1 + -0x4d04) < uVar2 + **(int **)(iVar1 + -0x7060)) {
		if (0x7ffffffe < uVar2) {
			uVar2 = turn & 0xffff;
		}
		*(int *)(iVar1 + -0x4d04) = uVar2 + **(int **)(iVar1 + -0x7060);
		*(int *)(iVar1 + -0x4d08) = uVar2 * 4 * (uint) * *(byte **)(iVar1 + -0x700c);
	}
	return;
}

void multi_msg_countdown(void)

{
	byte *pbVar1;
	int pnum;
	byte **ppbVar2;
	int *piVar3;
	uint *puVar4;

	puVar4 = (uint *)&DAT_1017decc;
	piVar3 = (int *)&DAT_1017dedc;
	ppbVar2 = (byte **)&DAT_1017debc;
	pnum = 0;
	do {
		if (((*puVar4 & 0x20000) != 0) && (*piVar3 == 4)) {
			pbVar1 = *ppbVar2;
			multi_parse_turn(
			    pnum, (uint)pbVar1[3] << 0x18 | (uint)pbVar1[2] << 0x10 | (uint)pbVar1[1] << 8 | (uint)*pbVar1);
		}
		pnum = pnum + 1;
		piVar3 = piVar3 + 1;
		ppbVar2 = ppbVar2 + 1;
		puVar4 = puVar4 + 1;
	} while (pnum < 4);
	return;
}

void multi_player_left_msg(int pnum, int left)

{
	char *pcVar1;
	int iVar2;
	int iVar3;
	undefined4 uVar4;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int iVar5;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	iVar3 = 0x100f8fd0;
	iVar5 = pnum * 0x55ec;
	pcVar1 = (char *)((int)plr + iVar5 + 0x1d);
	if (*pcVar1 != '\0') {
		RemovePlrFromMap(pnum);
		RemovePortalMissile(pnum);
		DeactivatePortal(pnum);
		RemovePlrPortal(pnum);
		RemovePlrMissiles(pnum);
		if (left != 0) {
			uVar4 = *(undefined4 *)(iVar3 + -0x5c1c);
			iVar2 = *(int *)(*(int *)(iVar3 + -0x5c20) + pnum * 4);
			if (iVar2 != 0x40000005) {
				if (iVar2 < 0x40000005) {
					if (0x40000003 < iVar2) {
						uVar4 = *(undefined4 *)(iVar3 + -0x5c28);
						**(undefined **)(iVar3 + -0x71fc) = 1;
					}
				} else {
					if (iVar2 < 0x40000007) {
						uVar4 = *(undefined4 *)(iVar3 + -0x5c24);
					}
				}
			}
			EventPlrMsg(uVar4, iVar5 + 0x10186ffc, iVar2, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffb8,
			    in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
			    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
		}
		*pcVar1 = '\0';
		pcVar1 = *(char **)(iVar3 + -0x70a4);
		*(undefined *)((int)plr + iVar5 + 0x13c) = 0;
		*pcVar1 = *pcVar1 + -1;
	}
	return;
}

void multi_clear_left_tbl(void)

{
	int pnum;
	int *piVar1;
	char *pcVar2;

	pnum = 0;
	piVar1 = (int *)&DAT_1017b5e4;
	pcVar2 = (char *)0x100f42c1;
	do {
		if (*pcVar2 != '\0') {
			if (gbBufferMsgs == 1) {
				msg_send_drop_pkt(pnum, *piVar1);
			} else {
				multi_player_left_msg(pnum, 1);
			}
			*pcVar2 = '\0';
			*piVar1 = 0;
		}
		pnum = pnum + 1;
		piVar1 = piVar1 + 1;
		pcVar2 = pcVar2 + 1;
	} while (pnum < 4);
	return;
}

void multi_player_left(int pnum, int reason)

{
	*(undefined *)(pnum + 0x100f42c1) = 1;
	*(int *)(&DAT_1017b5e4 + pnum * 4) = reason;
	multi_clear_left_tbl();
	return;
}

void multi_net_ping(void)

{
	DWORD DVar1;
	int local_2c;

	DAT_100f42b8 = 1;
	DVar1 = GetTickCount();
	*(DWORD *)(local_2c + -0x4d1c) = DVar1;
	return;
}

void multi_check_drop_player(void)

{
	int playerid;
	uint *puVar1;

	puVar1 = (uint *)&DAT_1017decc;
	playerid = 0;
	do {
		if (((*puVar1 & 0x40000) == 0) && ((*puVar1 & 0x10000) != 0)) {
			SNetDropPlayer(playerid, 0x40000006);
		}
		playerid = playerid + 1;
		puVar1 = puVar1 + 1;
	} while (playerid < 4);
	return;
}

void multi_begin_timeout(void)

{
	uint *puVar1;
	int nTicks;
	DWORD DVar2;
	int iVar3;
	int iVar4;
	uint uVar5;
	uint uVar6;
	int local_2c;

	if (DAT_100f42b8 != '\0') {
		DVar2 = GetTickCount();
		nTicks = DVar2 - *(int *)(local_2c + -0x4d1c);
		if (nTicks < 0x4e21) {
			if (9999 < nTicks) {
				puVar1 = *(uint **)(local_2c + -0x7008);
				iVar3 = -1;
				iVar4 = -1;
				uVar5 = 0;
				uVar6 = 0;
				if ((*puVar1 & 0x10000) != 0) {
					iVar4 = 0;
					if ((*puVar1 & 0x40000) == 0) {
						uVar6 = 1;
					} else {
						uVar5 = 1;
						iVar3 = 0;
					}
				}
				if ((puVar1[1] & 0x10000) != 0) {
					if (iVar4 == -1) {
						iVar4 = 1;
					}
					if ((puVar1[1] & 0x40000) == 0) {
						uVar6 = uVar6 + 1;
					} else {
						uVar5 = uVar5 + 1;
						if (iVar3 == -1) {
							iVar3 = 1;
						}
					}
				}
				if ((puVar1[2] & 0x10000) != 0) {
					if (iVar4 == -1) {
						iVar4 = 2;
					}
					if ((puVar1[2] & 0x40000) == 0) {
						uVar6 = uVar6 + 1;
					} else {
						uVar5 = uVar5 + 1;
						if (iVar3 == -1) {
							iVar3 = 2;
						}
					}
				}
				if ((puVar1[3] & 0x10000) != 0) {
					if (iVar4 == -1) {
						iVar4 = 3;
					}
					if ((puVar1[3] & 0x40000) == 0) {
						uVar6 = uVar6 + 1;
					} else {
						uVar5 = uVar5 + 1;
						if (iVar3 == -1) {
							iVar3 = 3;
						}
					}
				}
				if (uVar5 < uVar6) {
					DAT_1017de93 = 1;
				} else {
					if (uVar5 == uVar6) {
						if (iVar4 == iVar3) {
							if (iVar3 == myplr) {
								multi_check_drop_player();
							}
						} else {
							DAT_1017de93 = 1;
						}
					} else {
						if (iVar3 == myplr) {
							multi_check_drop_player();
						}
					}
				}
			}
		} else {
			**(undefined4 **)(local_2c + -0x75a4) = 0;
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int multi_handle_delta(void)

{
	undefined8 uVar1;
	int iVar2;
	DWORD DVar3;
	BOOL BVar4;
	int pnum;
	char *pcVar5;
	int local_18[6];

	uVar1 = 0x100f8fd0;
	if (DAT_1017de93 == '\0') {
		pcVar5 = (char *)0x100f42bd;
		pnum = 0;
		do {
			if (*pcVar5 != '\0') {
				*pcVar5 = '\0';
				DeltaExportData(pnum);
			}
			iVar2 = (int)uVar1;
			pnum = pnum + 1;
			pcVar5 = pcVar5 + 1;
		} while (pnum < 4);
		DVar3 = nthread_send_and_recv_turn(*(DWORD *)(iVar2 + -0x4d04), 1);
		*(DWORD *)(iVar2 + -0x4d04) = DVar3;
		BVar4 = nthread_recv_turns(local_18);
		if (BVar4 == 0) {
			multi_begin_timeout();
			pnum = 0;
		} else {
			*(undefined *)(iVar2 + -0x4d18) = 0;
			if (local_18[0] != 0) {
				if (*(int *)(iVar2 + -0x4d00) == 0) {
					NetSendHiPri((BYTE *)0x0, '\0');
					*(undefined4 *)(iVar2 + -0x4d00) = 0;
				} else {
					*(undefined4 *)(iVar2 + -0x4d00) = 0;
					pnum = multi_check_pkt_valid(*(TBuffer **)(iVar2 + -0x5c14));
					if (pnum == 0) {
						NetSendHiPri((BYTE *)0x0, '\0');
					}
				}
			}
			multi_mon_seeds();
			pnum = 1;
		}
	} else {
		pnum = 0;
		_gbRunGame = 0;
	}
	return pnum;
}

void multi_handle_all_packets(int pnum, BYTE *pData, int nSize)

{
	DWORD DVar1;

	while (true) {
		if (nSize == 0) {
			return;
		}
		DVar1 = ParseCmd(pnum, (TCmd *)pData);
		if (DVar1 == 0)
			break;
		pData = (BYTE *)((TCmd *)pData + DVar1);
		nSize = nSize - DVar1;
	}
	return;
}

void multi_process_tmsgs(void)

{
	int nSize;
	BYTE aBStack520[520];

	while (true) {
		nSize = tmsg_get(aBStack520, 0x200);
		if (nSize == 0)
			break;
		multi_handle_all_packets(myplr, aBStack520, nSize);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void multi_process_network_packets(void)

{
	byte *pbVar1;
	int iVar2;
	int iVar3;
	BOOL BVar4;
	DWORD DVar5;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int local_5c;
	uint local_38;
	byte *local_34;
	uint local_30[4];
	undefined4 local_20;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	local_20 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	multi_clear_left_tbl();
	multi_process_tmsgs();
	while (BVar4 = SNetReceiveMessage((int *)local_30, (char **)&local_34, (int *)&local_38), BVar4 != 0) {
		_DAT_1015df74 = _DAT_1015df74 + 1;
		multi_clear_left_tbl();
		pbVar1 = local_34;
		*(uint *)(local_34 + 4) = (uint)local_34[7] << 0x18 | (uint)local_34[6] << 0x10 | (uint)local_34[5] << 8 | (uint)local_34[4];
		*(uint *)(local_34 + 8) = (uint)local_34[0xb] << 0x18 | (uint)local_34[10] << 0x10 | (uint)local_34[9] << 8 | (uint)local_34[8];
		*(ushort *)(local_34 + 0xf) = CONCAT11(local_34[0x10], local_34[0xf]);
		*(ushort *)(local_34 + 0x11) = CONCAT11(local_34[0x12], local_34[0x11]);
		if ((((0x12 < local_38) && (local_30[0] < 4)) && (*(short *)(local_34 + 0xf) == 0x6970)) && ((ulonglong) * (ushort *)(local_34 + 0x11) == (ulonglong)local_38)) {
			iVar2 = local_30[0] * 0x55ec;
			*(uint *)((int)plr + iVar2 + 0x50) = (uint)*local_34;
			*(uint *)((int)plr + iVar2 + 0x54) = (uint)local_34[1];
			if (local_30[0] != myplr) {
				*(undefined4 *)((int)plr + iVar2 + 0x194) = *(undefined4 *)(local_34 + 4);
				*(undefined4 *)((int)plr + iVar2 + 0x198) = *(undefined4 *)(local_34 + 8);
				*(uint *)((int)plr + iVar2 + 0x164) = (uint)local_34[0xc];
				*(uint *)((int)plr + iVar2 + 0x16c) = (uint)local_34[0xd];
				*(uint *)((int)plr + iVar2 + 0x174) = (uint)local_34[0xe];
				if (((gbBufferMsgs != 1) && (*(char *)((int)plr + iVar2 + 0x1d) != '\0')) && (*(int *)((int)plr + iVar2 + 0x194) != 0)) {
					if (((uint)currlevel == *(uint *)((int)plr + iVar2 + 0x34)) && (*(char *)((int)plr + iVar2 + 0x13b) == '\0')) {
						iVar2 = abs(*(int *)((int)plr + iVar2 + 0x38) - (uint)*local_34);
						iVar3 = abs(*(int *)((int)plr + local_30[0] * 0x55ec + 0x3c) - (uint)pbVar1[1]);
						if (((3 < iVar2) || (3 < iVar3)) && (*(char *)(_DAT_1012f1b8 + (uint)*pbVar1 * 0x70 + (uint)pbVar1[1]) == '\0')) {
							FixPlrWalkTags(local_30[0]);
							iVar2 = local_30[0] * 0x55ec;
							*(undefined4 *)((int)plr + iVar2 + 0x58) = *(undefined4 *)((int)plr + iVar2 + 0x38);
							*(undefined4 *)((int)plr + iVar2 + 0x5c) = *(undefined4 *)((int)plr + iVar2 + 0x3c);
							FixPlrWalkTags(local_30[0]);
							iVar2 = local_30[0] * 0x55ec;
							*(uint *)((int)plr + iVar2 + 0x38) = (uint)*pbVar1;
							*(uint *)((int)plr + iVar2 + 0x3c) = (uint)pbVar1[1];
							*(uint *)((int)plr + iVar2 + 0x40) = (uint)*pbVar1;
							*(uint *)((int)plr + iVar2 + 0x44) = (uint)pbVar1[1];
							*(char *)(_DAT_1012f1b8 + *(int *)((int)plr + iVar2 + 0x38) * 0x70 + *(int *)((int)plr + iVar2 + 0x3c)) = (char)local_30[0] + '\x01';
						}
						iVar2 = abs(*(int *)((int)plr + local_30[0] * 0x55ec + 0x40) - *(int *)((int)plr + local_30[0] * 0x55ec + 0x38));
						iVar3 = abs(*(int *)((int)plr + local_30[0] * 0x55ec + 0x44) - *(int *)((int)plr + local_30[0] * 0x55ec + 0x3c));
						if ((1 < iVar2) || (1 < iVar3)) {
							iVar2 = local_30[0] * 0x55ec;
							*(undefined4 *)((int)plr + iVar2 + 0x40) = *(undefined4 *)((int)plr + iVar2 + 0x38);
							*(undefined4 *)((int)plr + iVar2 + 0x44) = *(undefined4 *)((int)plr + iVar2 + 0x3c);
						}
						MakePlrPath(local_30[0], (uint)pbVar1[2], (uint)pbVar1[3], 1);
					} else {
						*(uint *)((int)plr + iVar2 + 0x38) = (uint)*local_34;
						*(uint *)((int)plr + iVar2 + 0x3c) = (uint)local_34[1];
						*(uint *)((int)plr + iVar2 + 0x40) = (uint)*local_34;
						*(uint *)((int)plr + iVar2 + 0x44) = (uint)local_34[1];
						*(uint *)((int)plr + iVar2 + 0x48) = (uint)local_34[2];
						*(uint *)((int)plr + iVar2 + 0x4c) = (uint)local_34[3];
					}
				}
			}
			multi_handle_all_packets(local_30[0], pbVar1 + 0x13, local_38 - 0x13);
		}
	}
	DVar5 = SErrGetLastError();
	if (DVar5 != 0x8510006b) {
		nthread_terminate_game(*(char **)(local_5c + -0x5c2c));
	}
	return;
}

// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void multi_send_zero_packet(DWORD pnum, char identifier, void *pbSrc, DWORD dwLen)

{
	ulonglong uVar1;
	BOOL BVar2;
	longlong lVar3;
	ulonglong uVar4;
	undefined8 uVar5;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined8 unaff_r18;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	longlong lVar6;
	undefined8 unaff_r22;
	ulonglong uVar7;
	undefined8 unaff_r23;
	longlong lVar8;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined in_stack_fffffd9b;
	undefined in_stack_fffffd9f;
	int local_25c;
	undefined local_238;
	undefined local_237;
	undefined local_236;
	undefined local_235;
	uint local_234;
	uint local_230;
	undefined local_22c;
	undefined local_22b;
	undefined local_22a;
	undefined2 local_229;
	undefined2 local_227;
	char local_225;
	undefined2 local_224;
	undefined2 local_222;
	undefined4 local_38;
	undefined4 uStack52;
	undefined4 uStack48;
	undefined4 uStack44;
	undefined4 uStack40;
	undefined4 uStack36;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	uVar4 = SEXT48((int)dwLen);
	lVar6 = (longlong)(int)pbSrc;
	local_38 = (undefined4)((ulonglong)unaff_r18 >> 0x20);
	uStack52 = (undefined4)((ulonglong)unaff_r19 >> 0x20);
	uStack48 = (undefined4)((ulonglong)unaff_r20 >> 0x20);
	uStack44 = (undefined4)((ulonglong)unaff_r21 >> 0x20);
	uStack40 = (undefined4)((ulonglong)unaff_r22 >> 0x20);
	uStack36 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	lVar8 = 0;
	uVar5 = 0xfffffffffffffddb;
	uVar7 = uVar4;
	while (true) {
		if ((uVar7 & 0xffffffff) == 0) {
			return;
		}
		local_229 = 0x6970;
		local_238 = 0;
		local_237 = 0;
		local_236 = 0;
		local_235 = 0;
		local_234 = 0;
		local_230 = 0;
		local_22c = 0;
		local_22b = 0;
		local_22a = 0;
		local_224 = (undefined2)lVar8;
		uVar1 = (ulonglong)_DAT_1017def0 - 0x18;
		if ((uVar7 & 0xffffffff) < (uVar1 & 0xffffffff)) {
			uVar1 = uVar7;
		}
		local_222 = (ushort)uVar1;
		local_225 = identifier;
		CopyMemory(0xe0, (char)lVar6, (char)uVar1, (char)uVar4, (char)uVar5, in_r8, in_r9, in_r10, in_stack_fffffd9b,
		    in_stack_fffffd9f, local_25c);
		lVar3 = (ulonglong)local_222 + 0x18;
		local_234 = local_234 << 0x18 | (local_234 >> 8 & 0xff) << 0x10 | (local_234 >> 0x10 & 0xff) << 8 | local_234 >> 0x18;
		local_230 = local_230 << 0x18 | (local_230 >> 8 & 0xff) << 0x10 | (local_230 >> 0x10 & 0xff) << 8 | local_230 >> 0x18;
		local_229 = CONCAT11((undefined)local_229, local_229._0_1_);
		local_227._1_1_ = (undefined)lVar3;
		local_227._0_1_ = (undefined)((ulonglong)lVar3 >> 8);
		local_227 = CONCAT11((undefined)local_227, local_227._0_1_);
		local_224 = CONCAT11((undefined)local_224, local_224._0_1_);
		local_222 = CONCAT11((undefined)local_222, local_222._0_1_);
		BVar2 = SNetSendMessage(pnum, &local_238, (uint)lVar3);
		if (BVar2 == 0)
			break;
		lVar6 = lVar6 + uVar1;
		lVar8 = lVar8 + uVar1;
		uVar7 = uVar7 - uVar1;
	}
	nthread_terminate_game(*(char **)(local_25c + -0x5c30));
	return;
}

void multi_send_pinfo(int pnum, char cmd)

{
	BYTE *pbSrc;
	size_t _Size;
	BYTE *local_518[2];
	PkPlayerStruct PStack1296;

	_Size = 1;
	PackPlayer(&PStack1296, myplr, 1);
	pbSrc = DiabloAllocPtr(0x4f2);
	local_518[0] = pbSrc;
	memcpy(local_518, &PStack1296, _Size);
	dthread_send_delta(pnum, cmd, pbSrc, (int)(local_518[0] + -(int)pbSrc));
	mem_free_dbg(pbSrc);
	return;
}

int InitLevelType(int l)

{
	if (l == 0) {
		return 0;
	}
	if ((0 < l) && (l < 5)) {
		return 1;
	}
	if ((4 < l) && (l < 9)) {
		return 2;
	}
	if ((8 < l) && (l < 0xd)) {
		return 3;
	}
	return 4;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SetupLocalCoords(void)

{
	int iVar1;
	int iVar2;
	int iVar3;

	if ((_DAT_1012913c == 0) || (1 < (byte)gbMaxPlayers)) {
		currlevel = 0;
		leveltype = 0;
		DAT_1012f316 = 0;
	}
	iVar2 = myplr * 0x55ec;
	iVar1 = *(int *)(&DAT_1010e988 + myplr * 4);
	iVar3 = *(int *)(&DAT_1010e964 + myplr * 4) + 0x4b;
	*(int *)((int)plr + iVar2 + 0x38) = iVar3;
	iVar1 = iVar1 + 0x44;
	*(int *)((int)plr + iVar2 + 0x3c) = iVar1;
	*(int *)((int)plr + iVar2 + 0x40) = iVar3;
	*(int *)((int)plr + iVar2 + 0x44) = iVar1;
	*(int *)((int)plr + iVar2 + 0x48) = iVar3;
	*(int *)((int)plr + iVar2 + 0x4c) = iVar1;
	*(uint *)((int)plr + iVar2 + 0x34) = (uint)currlevel;
	*(undefined *)((int)plr + iVar2 + 0x13b) = 1;
	*(undefined *)((int)plr + iVar2 + 0x5592) = 0;
	((PlayerStruct *)((int)plr + iVar2))->_pmode = 10;
	*(undefined4 *)((int)plr + iVar2 + 0x20) = 0xffffffff;
	return;
}

BOOL multi_upgrade(int *pfExitProgram)

{
	BOOL BVar1;
	int local_3c;
	DWORD local_18[6];

	SNetPerformUpgrade(local_18);
	if (local_18[0] == 1) {
		BVar1 = 1;
	} else {
		if ((int)local_18[0] < 1) {
			if (local_18[0] == 0xffffffff) {
				DrawDlg(*(char **)(local_3c + -0x5c34));
			} else {
				if (-2 < (int)local_18[0]) {
					return 1;
				}
			}
		} else {
			if ((int)local_18[0] < 3) {
				*pfExitProgram = 1;
			}
		}
		BVar1 = 0;
	}
	return BVar1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void multi_handle_events(_SNETEVENT *pEvt)

{
	DWORD DVar1;
	uint *puVar2;
	undefined *puVar3;
	int iVar4;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;

	puVar3 = (undefined *)(ZEXT48(register0x0000000c) - 0xc0);
	*(BADSPACEBASE **)puVar3 = register0x0000000c;
	DVar1 = pEvt->eventid;
	if (DVar1 == 3) {
		*(undefined *)(pEvt->playerid + 0x100f42c1) = 1;
		iVar4 = 0;
		*(undefined *)(pEvt->playerid + 0x100f42b9) = 0;
		if (((int *)pEvt->data != (int *)0x0) && (3 < pEvt->databytes)) {
			iVar4 = *(int *)pEvt->data;
		}
		*(int *)(&DAT_1017b5e4 + pEvt->playerid * 4) = iVar4;
		if (iVar4 == 0x40000004) {
			DAT_1017de90 = 1;
		}
		*(undefined *)(pEvt->playerid + 0x100f42bd) = 0;
		dthread_remove_player(pEvt->playerid, *puVar3);
		if ((ulonglong)DAT_1017de91 == (ulonglong)pEvt->playerid) {
			DAT_1017de91 = 4;
		}
	} else {
		if ((int)DVar1 < 3) {
			if (DVar1 == 1) {
				puVar2 = (uint *)pEvt->data;
				*puVar2 = (uint) * (byte *)((int)puVar2 + 3) << 0x18 | (uint) * (byte *)((int)puVar2 + 2) << 0x10 | (uint) * (byte *)((int)puVar2 + 1) << 8 | (uint) * (byte *)puVar2;
				_DAT_1017b5dc = *puVar2;
				bRam1017b5e0 = *(byte *)(puVar2 + 1);
				*(undefined *)(pEvt->playerid + 0x100f42b9) = 1;
			}
		} else {
			if ((int)DVar1 < 5) {
				ConvertText_MacToWindows((char)pEvt->data, (char)(ZEXT48(register0x0000000c) - 0xc0) + '8', 0x80, in_r6,
				    in_r7, in_r8, in_r9, in_r10, puVar3[0xb], puVar3[0xf], *(undefined4 *)(puVar3 + 0x14));
				ErrorPlrMsg(puVar3 + 0x38, *puVar3);
			}
		}
	}
	return;
}

void multi_event_handler(BOOL add)

{
	BOOL bActivate;
	char *pcVar1;
	uint uVar2;
	BOOL *pBVar3;

	uVar2 = 0;
	pBVar3 = (BOOL *)&DAT_1010cbd0;
	do {
		bActivate = *pBVar3;
		fnMenu(bActivate);
		if ((bActivate == 0) && (add != 0)) {
			pcVar1 = TraceLastError();
			app_fatal("SNetRegisterEventHandler:\n%s", pcVar1);
		}
		uVar2 = uVar2 + 1;
		pBVar3 = pBVar3 + 1;
	} while (uVar2 < 3);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void NetClose(void)

{
	int local_2c;

	if (_DAT_100f42d4 != 0) {
		_DAT_100f42d4 = 0;
		nthread_cleanup();
		dthread_cleanup();
		tmsg_cleanup();
		multi_event_handler(0);
		SNetLeaveGame(3);
		msgcmd_cmd_cleanup();
		if (1 < **(byte **)(local_2c + -0x77f0)) {
			Sleep(2000);
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL multi_init_single(_SNETPROGRAMDATA *client_info, _SNETPLAYERDATA *user_info, _SNETUIDATA *ui_info)

{
	undefined *puVar1;
	int iVar2;
	BOOL BVar3;
	char *pcVar4;
	char *a11;
	int *playerID;
	int local_3c;

	iVar2 = SNetInitializeProvider(0, client_info, user_info, ui_info, &fileinfo);
	if (iVar2 == 0) {
		BVar3 = 0;
	} else {
		_DAT_1017b5dc = _DAT_1017b5dc << 0x18 | (_DAT_1017b5dc >> 8 & 0xff) << 0x10 | (_DAT_1017b5dc >> 0x10 & 0xff) << 8 | _DAT_1017b5dc >> 0x18;
		BVar3 = SNetCreateGame("local", "local", "local", 0, &DAT_1017b5dc, 8, 1, "local", a11, playerID);
		_DAT_1017b5dc = _DAT_1017b5dc << 0x18 | (_DAT_1017b5dc >> 8 & 0xff) << 0x10 | (_DAT_1017b5dc >> 0x10 & 0xff) << 8 | _DAT_1017b5dc >> 0x18;
		if (BVar3 == 0) {
			pcVar4 = TraceLastError();
			app_fatal(*(char **)(local_3c + -0x5c4c), pcVar4);
		}
		puVar1 = *(undefined **)(local_3c + -0x77f0);
		**(undefined4 **)(local_3c + -0x77ac) = 0;
		BVar3 = 1;
		*puVar1 = 1;
	}
	return BVar3;
}

BOOL multi_init_multi(_SNETPROGRAMDATA *client_info,
    _SNETPLAYERDATA *user_info,
    _SNETUIDATA *ui_info,
    int *pfExitProgram)

{
	bool bVar1;
	ulonglong uVar2;
	undefined8 uVar3;
	DWORD DVar4;
	BOOL BVar5;
	int iVar6;
	undefined in_r9;
	undefined in_r10;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff98;
	uint local_5c;
	uint local_38;
	int local_34[4];
	undefined4 local_24;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	uVar2 = 0x100f8fd0;
	local_24 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	bVar1 = true;
	do {
		local_34[0] = 0;
		if (DAT_1017de92 != '\0') {
			uVar3 = FUN_1000e110(0, client_info, user_info, ui_info, &fileinfo, local_34, in_r9, in_r10, in_stack_ffffff98);
			if ((int)uVar3 == 0) {
				if (!bVar1) {
					return 0;
				}
				DVar4 = SErrGetLastError();
				uVar2 = (ulonglong)local_5c;
				if (DVar4 != 0x85100077) {
					return 0;
				}
				BVar5 = multi_upgrade(pfExitProgram);
				if (BVar5 == 0) {
					return 0;
				}
			}
			if (local_34[0] == 0x424e4554) {
				plr[1]._pSplLvl[2] = '\x01';
			}
		}
		multi_event_handler(1);
		iVar6 = FUN_1000ed30(
		    1, client_info, (int)user_info, ui_info, &fileinfo, &local_38, in_r9, in_r10, in_stack_ffffff98);
		if (iVar6 != 0) {
			if (local_38 < 4) {
				myplr = local_38;
				**(undefined **)((int)uVar2 + -0x77f0) = 4;
				pfile_read_player_from_save();
				if (local_34[0] == 0x424e4554) {
					*(undefined *)((int)plr + myplr * 0x55ec + 0x5593) = 1;
				}
				BVar5 = 1;
			} else {
				BVar5 = 0;
			}
			return BVar5;
		}
		DAT_1017de92 = '\x01';
		bVar1 = false;
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL NetInit(BOOL bSinglePlayer, BOOL *pfExitProgram)

{
	undefined *puVar1;
	char cVar3;
	ulonglong uVar2;
	int l;
	time_t tVar4;
	HWND HVar6;
	ulonglong uVar5;
	BOOL BVar7;
	int iVar8;
	undefined uVar9;
	longlong in_r6;
	undefined uVar10;
	undefined8 in_r7;
	undefined uVar11;
	undefined8 in_r8;
	undefined uVar12;
	undefined in_r9;
	undefined in_r10;
	ulonglong uVar13;
	int *piVar14;
	int *piVar15;

	uVar5 = 0;
	uVar13 = ZEXT48(&PTR_LAB_100f4740);
	puVar1 = (undefined *)(ZEXT48(register0x0000000c) - 0x130);
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	while (true) {
		uVar12 = (undefined)in_r8;
		uVar11 = (undefined)in_r7;
		uVar10 = (undefined)in_r6;
		uVar9 = (undefined)uVar5;
		*pfExitProgram = 0;
		SetRndSeed(0, *puVar1);
		tVar4 = time(0, *puVar1);
		_DAT_1017b5dc = (undefined4)tVar4;
		cVar3 = (char)(ZEXT48(register0x0000000c) - 0x130);
		bRam1017b5e0 = (byte)_DAT_1012f31c;
		ZeroMemory(cVar3 + -100, 0x3c, uVar9, uVar10, uVar11, uVar12, in_r9, in_r10, puVar1[0xb], puVar1[0xf],
		    *(undefined4 *)(puVar1 + 0x14));
		*(undefined4 *)(puVar1 + 0x9c) = 0x3c;
		in_r8 = 0x2a;
		in_r7 = 4;
		in_r6 = 8;
		*(undefined4 *)(puVar1 + 0xa0) = *(undefined4 *)(*(int *)(puVar1 + 0x14) + -0x5c50);
		uVar9 = 0xf;
		*(int *)(puVar1 + 0xa4) = *(int *)(puVar1 + 0x14) + 0x3252;
		*(undefined4 *)(puVar1 + 0xa8) = 0x4452544c;
		*(undefined4 *)(puVar1 + 0xac) = 0x2a;
		*(undefined4 *)(puVar1 + 0xb4) = 4;
		*(undefined **)(puVar1 + 0xb8) = &DAT_1017b5dc;
		*(undefined4 *)(puVar1 + 0xbc) = 8;
		*(undefined4 *)(puVar1 + 0xc4) = 0xf;
		*(undefined4 *)(puVar1 + 0xd4) = 0x409;
		ZeroMemory(cVar3 + -0x74, 0x10, 0xf, 8, 4, 0x2a, in_r9, in_r10, puVar1[0xb], puVar1[0xf],
		    *(undefined4 *)(puVar1 + 0x14));
		*(undefined4 *)(puVar1 + 0x8c) = 0x10;
		ZeroMemory(cVar3 + '<', 0x50, uVar9, (char)in_r6, (char)in_r7, (char)in_r8, in_r9, in_r10, puVar1[0xb],
		    puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
		*(undefined4 *)(puVar1 + 0x3c) = 0x50;
		HVar6 = SDrawGetFrameWindow(0, *puVar1);
		l = *(int *)(puVar1 + 0x14);
		cVar3 = (char)l;
		*(HWND *)(puVar1 + 0x44) = HVar6;
		*(undefined4 *)(puVar1 + 0x48) = *(undefined4 *)(l + -0x7030);
		*(undefined4 *)(puVar1 + 0x50) = *(undefined4 *)(l + -0x7034);
		*(undefined4 *)(puVar1 + 0x54) = *(undefined4 *)(l + -0x7038);
		*(undefined4 *)(puVar1 + 0x5c) = *(undefined4 *)(l + -0x703c);
		*(undefined4 *)(puVar1 + 0x60) = *(undefined4 *)(l + -0x7040);
		*(undefined4 *)(puVar1 + 0x4c) = *(undefined4 *)(l + -0x7044);
		*(int *)(puVar1 + 0x68) = (int)uVar13;
		*(undefined ***)(puVar1 + 0x6c) = &PTR_LAB_100f4720;
		*(undefined ***)(puVar1 + 0x84) = &PTR_mainmenu_select_hero_dialog_100f4988;
		*(undefined ***)(puVar1 + 0x88) = &PTR_mainmenu_change_name_100f4990;
		*(undefined ***)(puVar1 + 0x80) = &PTR_LAB_100f4e68;
		*(undefined ***)(puVar1 + 0x78) = &PTR_LAB_100f4e70;
		uVar5 = UiProfileGetString(*puVar1);
		*(int *)(puVar1 + 0x7c) = (int)uVar5;
		ZeroMemory(cVar3 + -0x17, 4, uVar9, (char)in_r6, (char)in_r7, (char)in_r8, in_r9, in_r10, puVar1[0xb],
		    puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
		l = *(int *)(puVar1 + 0x14);
		**(undefined **)(l + -0x7064) = 0;
		ZeroMemory((char)l + -0xf, 4, uVar9, (char)in_r6, (char)in_r7, (char)in_r8, in_r9, in_r10, puVar1[0xb],
		    puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
		ZeroMemory((char)*(undefined4 *)(*(int *)(puVar1 + 0x14) + -0x5c20), 0x10, uVar9, (char)in_r6, (char)in_r7,
		    (char)in_r8, in_r9, in_r10, puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
		ZeroMemory((char)*(undefined4 *)(puVar1 + 0x14) + -0x13, 4, uVar9, (char)in_r6, (char)in_r7, (char)in_r8, in_r9,
		    in_r10, puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
		ZeroMemory(0xc0, 0xb0, uVar9, (char)in_r6, (char)in_r7, (char)in_r8, in_r9, in_r10, puVar1[0xb], puVar1[0xf],
		    *(undefined4 *)(puVar1 + 0x14));
		ZeroMemory(0x88, 8, uVar9, (char)in_r6, (char)in_r7, (char)in_r8, in_r9, in_r10, puVar1[0xb], puVar1[0xf],
		    *(undefined4 *)(puVar1 + 0x14));
		SNetSetBasePlayer(0, *puVar1);
		uVar2 = (ulonglong) * (uint *)(puVar1 + 0x14);
		if (bSinglePlayer == 0) {
			in_r6 = (longlong)(int)pfExitProgram;
			BVar7 = multi_init_multi(puVar1 + 0x9c, puVar1 + 0x8c, puVar1 + 0x3c, pfExitProgram, *puVar1);
			if (BVar7 == 0) {
				return 0;
			}
		} else {
			BVar7 = multi_init_single(puVar1 + 0x9c, puVar1 + 0x8c, puVar1 + 0x3c, *puVar1);
			if (BVar7 == 0) {
				return 0;
			}
		}
		*(undefined4 *)((int)uVar2 + -0x4cfc) = 1;
		*(undefined *)((int)uVar2 + -0x4d18) = 0;
		delta_init(*puVar1);
		InitPlrMsg(*puVar1);
		buffer_init(*(undefined4 *)((int)uVar2 + -0x5c14), *puVar1);
		buffer_init(*(undefined4 *)((int)uVar2 + -0x5c10), *puVar1);
		*(undefined4 *)((int)uVar2 + -0x4d00) = 0;
		sync_init(*puVar1);
		nthread_start((uint) * (byte *)(myplr + 0x100f42b9), *puVar1);
		dthread_start(*puVar1);
		tmsg_start(*puVar1);
		l = (int)uVar2;
		*(undefined4 *)(l + -0x4d08) = 0;
		*(undefined4 *)(l + -0x4d04) = 0;
		**(undefined **)(l + -0x7068) = (char)myplr;
		uVar5 = ZEXT48(*(undefined **)(l + -0x71fc));
		**(undefined **)(l + -0x71fc) = 0;
		nthread_send_and_recv_turn(0, 0, *puVar1);
		SetupLocalCoords(*puVar1);
		multi_send_pinfo(0xfffffffe, 0x36, *puVar1);
		l = myplr;
		*(undefined *)((int)plr + myplr * 0x55ec + 0x1d) = 1;
		**(undefined **)((int)uVar2 + -0x70a4) = 1;
		if (*(char *)(l + 0x100f42b9) == '\0')
			break;
		BVar7 = msg_wait_resync(*puVar1);
		l = (int)uVar2;
		if (BVar7 != 0)
			break;
		NetClose(*puVar1);
		**(undefined **)(l + -0x75b4) = 0;
	}
	_DAT_1012f31c = (uint)bRam1017b5e0;
	SetRndSeed(_DAT_1017b5dc, *puVar1);
	piVar15 = *(int **)((int)uVar2 + -0x75ec);
	l = 0;
	piVar14 = *(int **)((int)uVar2 + -0x71f8);
	do {
		iVar8 = GetRndSeed(*puVar1);
		*piVar15 = iVar8;
		iVar8 = InitLevelType(l, *puVar1);
		l = l + 1;
		*piVar14 = iVar8;
		piVar15 = piVar15 + 1;
		piVar14 = piVar14 + 1;
	} while (l < 0x11);
	BVar7 = SNetGetGameInfo(1, *(undefined4 *)((int)uVar2 + -0x77d0), 0x80, puVar1 + 0x38, *puVar1);
	l = *(int *)(puVar1 + 0x14);
	if (BVar7 == 0) {
		nthread_terminate_game(*(undefined4 *)(l + -0x5c54), *puVar1);
	}
	BVar7 = SNetGetGameInfo(2, *(undefined4 *)(l + -0x77d4), 0x80, puVar1 + 0x38, *puVar1);
	if (BVar7 == 0) {
		nthread_terminate_game(*(undefined4 *)(*(int *)(puVar1 + 0x14) + -0x5c58), *puVar1);
	}
	return 1;
}

void recv_plrinfo(int pnum, TCmdPlrInfoHdr *p, BOOL recv)

{
	char *pcVar1;
	int iVar2;
	PkPlayerStruct *pPack;
	undefined4 uVar3;
	size_t _Size;
	int *piVar4;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	longlong lVar5;
	undefined8 unaff_r26;
	WORD *pWVar6;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	int local_4c;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 local_28[2];
	undefined4 local_20;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar2 = 0x100f8fd0;
	local_20 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	piVar4 = &myplr;
	if ((myplr != pnum) && ((pWVar6 = (WORD *)(&DAT_1017dd88 + pnum * 2), p->wOffset == *pWVar6 || (*pWVar6 = 0, p->wOffset == 0)))) {
		if ((recv == 0) && (*pWVar6 == 0)) {
			iVar2 = 0x100f8fd0;
			multi_send_pinfo(pnum, '\x02');
		}
		_Size = (size_t)p->wBytes;
		lVar5 = (ulonglong) * (uint *)(iVar2 + -0x5c5c) + (longlong)pnum * 0x4f2;
		CopyMemory((char)lVar5 + (char)p->wOffset, (char)p + '\x05', (char)p->wBytes, (char)piVar4, (char)in_r7,
		    (char)in_r8, (char)in_r9, (char)in_r10, (char)in_stack_ffffffa8, in_stack_ffffffaf, local_4c);
		*pWVar6 = *pWVar6 + p->wBytes;
		if (*pWVar6 == 0x4f2) {
			*pWVar6 = 0;
			multi_player_left_msg(pnum, 0);
			iVar2 = pnum * 0x55ec;
			pPack = (PkPlayerStruct *)(*(int *)(local_4c + -0x5c60) + (int)((longlong)pnum * 0x4f2));
			*(undefined4 *)((int)plr + iVar2 + 0x214) = 0;
			local_28[0] = (undefined4)lVar5;
			memcpy(pPack, local_28, _Size);
			UnPackPlayer(pPack, pnum, 1);
			if (recv != 0) {
				pcVar1 = *(char **)(local_4c + -0x70a4);
				*(undefined *)((int)plr + iVar2 + 0x1d) = 1;
				*pcVar1 = *pcVar1 + '\x01';
				if (*(char *)(local_4c + -0x4d17 + pnum) == '\0') {
					uVar3 = *(undefined4 *)(local_4c + -0x5c68);
				} else {
					uVar3 = *(undefined4 *)(local_4c + -0x5c64);
				}
				EventPlrMsg(uVar3, iVar2 + 0x10186ffc, (int)*(char *)((int)plr + iVar2 + 0x1b4), piVar4, in_r7, in_r8,
				    in_r9, in_r10, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffb8, in_stack_ffffffbc,
				    in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0,
				    in_stack_ffffffd4);
				LoadPlrGFX(pnum, (player_graphic)0x1);
				SyncInitPlr(pnum);
				if ((uint) * *(byte **)(local_4c + -0x77e4) == *(uint *)((int)plr + iVar2 + 0x34)) {
					if (*(int *)((int)plr + iVar2 + 0x194) >> 6 == 0) {
						*(undefined4 *)((int)plr + iVar2 + 0x78) = 0;
						LoadPlrGFX(pnum, (player_graphic)0x80);
						((PlayerStruct *)((int)plr + iVar2))->_pmode = 8;
						NewPlrAnim(pnum, (BYTE *)((int)plr + iVar2 + 0x408), *(int *)((int)plr + iVar2 + 0x448), 1,
						    *(int *)((int)plr + iVar2 + 0x44c));
						piVar4 = *(int **)(local_4c + -0x779c);
						*(int *)((int)plr + iVar2 + 0x8c) = *(int *)((int)plr + iVar2 + 0x88) + -1;
						*(int *)((int)plr + iVar2 + 0x1ec) = *(int *)((int)plr + iVar2 + 0x88) << 1;
						iVar2 = *(int *)((int)plr + iVar2 + 0x38) * 0x70 + *(int *)((int)plr + iVar2 + 0x3c);
						*(byte *)(*piVar4 + iVar2) = *(byte *)(*piVar4 + iVar2) | 4;
					} else {
						StartStand(pnum, 0);
					}
				}
			}
		}
	}
	return;
}