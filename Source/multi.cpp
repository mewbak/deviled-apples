
void buffer_init(undefined4 *param_1)

{
	*param_1 = 0;
	*(undefined *)(param_1 + 1) = 0;
	return;
}

ulonglong multi_check_pkt_valid(int *param_1)

{
	undefined8 uVar1;

	uVar1 = countLeadingZeros(-*param_1);
	return (ulonglong)((uint)uVar1 >> 5 & 0xff);
}

void multi_copy_packet(int *param_1, undefined8 param_2, byte param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	longlong lVar3;
	ulonglong uVar4;
	longlong lVar5;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	uVar2 = (int)(char)param_3 & 0xff;
	uVar1 = *param_1;
	uVar4 = (ulonglong)uVar1;
	if ((uVar4 + (ulonglong)uVar2 + 2 & 0xffffffff) < 0x1001) {
		lVar3 = (ulonglong)uVar2 + uVar4;
		lVar5 = (longlong)(int)param_1 + uVar4 + 4;
		*param_1 = (int)lVar3 + 1;
		*(byte *)lVar5 = param_3;
		lVar5 = lVar5 + 1;
		memcpy((char)lVar5, (undefined)param_2, (char)uVar2, (char)lVar3, (char)uVar1, param_6, param_7,
		    param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
		*(undefined *)((int)lVar5 + uVar2) = 0;
	}
	return;
}

longlong multi_recv_packet(longlong param_1, longlong param_2, uint *param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	byte bVar1;
	int *piVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	ulonglong uVar9;
	longlong lVar10;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	lVar7 = (longlong)param_8;
	lVar6 = (longlong)param_7;
	lVar5 = (longlong)param_6;
	lVar4 = (longlong)param_5;
	lVar3 = (longlong)param_4;
	piVar2 = (int *)param_1;
	if (*piVar2 != 0) {
		lVar8 = param_1 + 4;
		while (true) {
			bVar1 = *(byte *)lVar8;
			uVar9 = (ulonglong)bVar1;
			if ((bVar1 == 0) || ((ulonglong)*param_3 < uVar9))
				break;
			memcpy((char)param_2, (char)(lVar8 + 1), bVar1, (char)lVar3, (char)lVar4, (char)lVar5,
			    (char)lVar6, (char)lVar7, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
			lVar8 = lVar8 + 1 + uVar9;
			param_2 = param_2 + uVar9;
			*param_3 = *param_3 - (uint)bVar1;
		}
		lVar10 = lVar8 - (param_1 + 4);
		MoveMemory((char)(param_1 + 4), (char)lVar8, ((char)*piVar2 - (char)lVar10) + '\x01', (char)lVar3,
		    (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7, in_stack_ffffffbb, in_stack_ffffffbf,
		    local_3c);
		*piVar2 = *piVar2 - (int)lVar10;
	}
	return param_2;
}

void NetRecvPlrData(undefined *param_1)

{
	undefined *puVar1;
	undefined *puVar2;

	puVar1 = PTR_DAT_100f1824;
	*(undefined2 *)(param_1 + 0xf) = 0x6970;
	puVar2 = PTR_DAT_100f1828;
	*param_1 = (char)*(undefined4 *)(PTR_DAT_100f1828 + *(int *)puVar1 * 0x55ec + 0x38);
	param_1[1] = (char)*(undefined4 *)(puVar2 + *(int *)puVar1 * 0x55ec + 0x3c);
	param_1[2] = (char)*(undefined4 *)(puVar2 + *(int *)puVar1 * 0x55ec + 0x48);
	param_1[3] = (char)*(undefined4 *)(puVar2 + *(int *)puVar1 * 0x55ec + 0x4c);
	*(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar2 + *(int *)puVar1 * 0x55ec + 0x194);
	*(undefined4 *)(param_1 + 8) = *(undefined4 *)(puVar2 + *(int *)puVar1 * 0x55ec + 0x198);
	param_1[0xc] = (char)*(undefined4 *)(puVar2 + *(int *)puVar1 * 0x55ec + 0x164);
	param_1[0xd] = (char)*(undefined4 *)(puVar2 + *(int *)puVar1 * 0x55ec + 0x16c);
	param_1[0xe] = (char)*(undefined4 *)(puVar2 + *(int *)puVar1 * 0x55ec + 0x174);
	return;
}

void multi_msg_add(ulonglong param_1, byte param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	if (((param_1 & 0xffffffff) != 0) && (param_2 != 0)) {
		tmsg_add(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	}
	return;
}

void multi_send_packet(undefined8 param_1, uint param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	ushort uVar1;
	undefined *puVar2;
	int iVar3;
	longlong lVar4;
	undefined7 uVar5;
	undefined uVar6;
	undefined7 uVar7;
	undefined uVar8;
	ulonglong uVar9;
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

	uVar7 = (undefined7)((ulonglong)param_5 >> 8);
	uVar8 = (undefined)param_5;
	uVar5 = (undefined7)((ulonglong)param_4 >> 8);
	uVar6 = (undefined)param_4;
	lVar4 = ZEXT48(register0x0000000c) - 0x240;
	puVar2 = (undefined *)lVar4;
	*(BADSPACEBASE **)puVar2 = register0x0000000c;
	NetRecvPlrData(puVar2 + 0x38, *puVar2);
	*(short *)(puVar2 + 0x49) = (short)(param_2 & 0xff) + 0x13;
	uVar1 = *(ushort *)(puVar2 + 0x49);
	uVar9 = (ulonglong)uVar1;
	*(uint *)(puVar2 + 0x3c) = (uint)bStack513 << 0x18 | (uint)bStack514 << 0x10 | (uint)bStack515 << 8 | (uint)local_204;
	*(uint *)(puVar2 + 0x40) = (uint)bStack509 << 0x18 | (uint)bStack510 << 0x10 | (uint)bStack511 << 8 | (uint)local_200;
	*(ushort *)(puVar2 + 0x47) = CONCAT11(uStack504, local_1f9);
	*(ushort *)(puVar2 + 0x49) = CONCAT11(uStack502, local_1f7);
	memcpy((char)lVar4 + 'K', (undefined)param_1, (char)(param_2 & 0xff), uVar6, uVar8, (char)param_6,
	    (char)param_7, (char)param_8, puVar2[0xb], puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
	lVar4 = ZEXT48(register0x0000000c) - 0x208;
	iVar3 = SNetSendMessage((char)**(undefined4 **)(*(int *)(puVar2 + 0x14) + -0x77ac), (char)lVar4,
	    (char)uVar1, uVar6, uVar8, (char)param_6, (char)param_7, (char)param_8,
	    puVar2[0xb], puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
	if (iVar3 == 0) {
		nthread_terminate_game((ulonglong) * (uint *)(*(int *)(puVar2 + 0x14) + -0x5c0c), lVar4, uVar9,
		    CONCAT71(uVar5, uVar6), CONCAT71(uVar7, uVar8), param_6, param_7, param_8,
		    *(undefined4 *)(puVar2 + 8));
	}
	return;
}

void NetSendLoPri(longlong param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined7 uVar1;
	undefined uVar2;
	undefined7 uVar3;
	undefined uVar4;
	undefined4 uVar5;
	undefined4 in_stack_ffffffc8;

	uVar3 = (undefined7)((ulonglong)param_5 >> 8);
	uVar4 = (undefined)param_5;
	uVar1 = (undefined7)((ulonglong)param_4 >> 8);
	uVar2 = (undefined)param_4;
	if ((param_1 != 0) && (uVar5 = (undefined4)param_2, (param_2 & 0xff) != 0)) {
		multi_copy_packet(_DAT_100f33c0, param_1, (byte)param_2, uVar2, uVar4, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffc8);
		multi_send_packet(param_1, uVar5, param_2, CONCAT71(uVar1, uVar2), CONCAT71(uVar3, uVar4), param_6, param_7,
		    param_8, in_stack_ffffffc8);
	}
	return;
}

void NetSendHiPri(longlong param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	ulonglong uVar2;
	undefined **ppuVar3;
	longlong lVar4;
	int iVar5;
	undefined uVar7;
	longlong lVar6;
	undefined uVar9;
	longlong lVar8;
	undefined7 uVar10;
	undefined uVar11;
	undefined4 uVar12;
	ulonglong uVar13;
	undefined4 in_stack_fffffdb8;
	undefined in_stack_fffffdbf;
	int local_23c;
	uint local_218;
	undefined auStack532[4];
	uint local_210;
	uint local_20c;
	undefined2 local_205;
	undefined2 local_203;

	puVar1 = PTR_DAT_100f1fcc;
	uVar10 = (undefined7)((ulonglong)param_5 >> 8);
	uVar11 = (undefined)param_5;
	uVar2 = ZEXT48(register0x0000000c);
	ppuVar3 = &toc;
	uVar13 = ZEXT48(_DAT_100f33bc);
	if ((param_1 != 0) && (uVar12 = (undefined4)param_2, (param_2 & 0xff) != 0)) {
		ppuVar3 = &toc;
		multi_copy_packet(_DAT_100f33bc, param_1, (byte)param_2, (char)param_4, uVar11, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_fffffdb8);
		multi_send_packet(param_1, uVar12, param_2, param_4, CONCAT71(uVar10, uVar11), param_6, param_7, param_8,
		    in_stack_fffffdb8);
	}
	if (ppuVar3[-0x1340] == (undefined *)0x0) {
		ppuVar3[-0x1340] = (undefined *)0x1;
		NetRecvPlrData(auStack532);
		iVar5 = *(int *)puVar1;
		uVar9 = (undefined)iVar5;
		local_218 = iVar5 - 0x13;
		lVar4 = multi_recv_packet(uVar13, uVar2 - 0x201, &local_218, uVar9, uVar11, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_fffffdb8);
		uVar7 = (undefined)(uVar2 - 0x218);
		lVar4 = multi_recv_packet(ZEXT48(ppuVar3[-0x1704]), lVar4, (uint *)(uVar2 - 0x218), uVar9, uVar11,
		    (char)param_6, (char)param_7, (char)param_8, in_stack_fffffdb8);
		uVar13 = sync_all_monsters((undefined *)lVar4, (ulonglong)local_218, uVar7, uVar9, uVar11, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_fffffdb8);
		local_218 = (uint)uVar13;
		lVar8 = uVar2 - 0x203;
		lVar6 = (ulonglong) * (uint *)puVar1 - (uVar13 & 0xffffffff);
		local_210 = local_210 << 0x18 | (local_210 >> 8 & 0xff) << 0x10 | (local_210 >> 0x10 & 0xff) << 8 | local_210 >> 0x18;
		local_20c = local_20c << 0x18 | (local_20c >> 8 & 0xff) << 0x10 | (local_20c >> 0x10 & 0xff) << 8 | local_20c >> 0x18;
		local_205 = CONCAT11((undefined)local_205, local_205._0_1_);
		local_203 = CONCAT11(((undefined *)lVar8)[1], *(undefined *)lVar8);
		lVar4 = uVar2 - 0x214;
		iVar5 = SNetSendMessage(0xfe, (char)lVar4, (char)lVar6, (char)lVar8, uVar11, (char)param_6,
		    (char)param_7, (char)param_8, (char)in_stack_fffffdb8, in_stack_fffffdbf,
		    local_23c);
		if (iVar5 == 0) {
			nthread_terminate_game((ulonglong) * (uint *)(local_23c + -0x5c18), lVar4, lVar6, lVar8,
			    CONCAT71(uVar10, uVar11), param_6, param_7, param_8, in_stack_fffffdb8);
		}
	}
	return;
}

void multi_send_msg_packet(uint param_1, undefined8 param_2, uint param_3, undefined8 param_4, undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	undefined *puVar1;
	longlong lVar2;
	int iVar4;
	longlong lVar3;
	longlong lVar5;
	longlong lVar6;
	undefined7 uVar7;
	undefined uVar8;
	undefined7 uVar9;
	undefined uVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	ulonglong uVar14;
	uint uVar15;
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

	uVar9 = (undefined7)((ulonglong)param_5 >> 8);
	uVar10 = (undefined)param_5;
	uVar7 = (undefined7)((ulonglong)param_4 >> 8);
	uVar8 = (undefined)param_4;
	lVar13 = (longlong)param_8;
	lVar12 = (longlong)param_7;
	lVar11 = (longlong)param_6;
	lVar6 = ZEXT48(register0x0000000c) - 0x250;
	puVar1 = (undefined *)lVar6;
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	NetRecvPlrData(puVar1 + 0x38, *puVar1);
	lVar2 = (ulonglong)(param_3 & 0xff) + 0x13;
	*(short *)(puVar1 + 0x49) = (short)lVar2;
	memcpy((char)lVar6 + 'K', (undefined)param_2, (char)(param_3 & 0xff), uVar8, uVar10, (char)lVar11,
	    (char)lVar12, (char)lVar13, puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
	*(uint *)(puVar1 + 0x3c) = (uint)bStack529 << 0x18 | (uint)bStack530 << 0x10 | (uint)bStack531 << 8 | (uint)local_214;
	*(uint *)(puVar1 + 0x40) = (uint)bStack525 << 0x18 | (uint)bStack526 << 0x10 | (uint)bStack527 << 8 | (uint)local_210;
	*(ushort *)(puVar1 + 0x47) = CONCAT11(uStack520, local_209);
	uVar15 = 1;
	uVar14 = 0;
	*(ushort *)(puVar1 + 0x49) = CONCAT11(uStack518, local_207);
	do {
		if ((uVar15 & param_1) != 0) {
			lVar5 = ZEXT48(register0x0000000c) - 0x218;
			lVar6 = lVar2;
			iVar4 = SNetSendMessage((char)uVar14, (char)lVar5, (char)lVar2, uVar8, uVar10, (char)lVar11,
			    (char)lVar12, (char)lVar13, puVar1[0xb], puVar1[0xf],
			    *(undefined4 *)(puVar1 + 0x14));
			if (iVar4 == 0) {
				lVar3 = SErrGetLastError(0, (char)lVar5, (char)lVar6, uVar8, uVar10, (char)lVar11, (char)lVar12,
				    (char)lVar13, puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
				if ((lVar3 + 0x7af00000U & 0xffffffff) != 0x6a) {
					nthread_terminate_game((ulonglong) * (uint *)(*(int *)(puVar1 + 0x14) + -0x5c18), lVar5, lVar6,
					    CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10), (int)lVar11, (int)lVar12,
					    (int)lVar13, *(undefined4 *)(puVar1 + 8));
					return;
				}
			}
		}
		uVar14 = uVar14 + 1;
		uVar15 = uVar15 << 1;
	} while ((uVar14 & 0xffffffff) < 4);
	return;
}

void multi_mon_seeds(void)

{
	uint uVar1;
	int iVar2;
	int iVar3;
	undefined *puVar4;
	int iVar5;
	longlong lVar6;

	lVar6 = 5;
	_DAT_100f42c8 = _DAT_100f42c8 + 1;
	iVar5 = 0;
	uVar1 = _DAT_100f42c8 * 0x1000000 | _DAT_100f42c8 >> 8;
	puVar4 = PTR_DAT_100f187c;
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

void multi_handle_turn_upper_bit(int param_1)

{
	int iVar1;

	iVar1 = 0;
	if (((*(uint *)PTR_DAT_100f1fc8 & 0x10000) == 0) || (param_1 == 0)) {
		iVar1 = 1;
		if (((*(uint *)(PTR_DAT_100f1fc8 + 4) & 0x10000) == 0) || (param_1 == 1)) {
			iVar1 = 2;
			if ((((*(uint *)(PTR_DAT_100f1fc8 + 8) & 0x10000) == 0) || (param_1 == 2)) && ((iVar1 = 3, (*(uint *)(PTR_DAT_100f1fc8 + 0xc) & 0x10000) == 0 || (param_1 == 3)))) {
				iVar1 = 4;
			}
		}
	}
	if (*(int *)PTR_DAT_100f1824 == iVar1) {
		*(undefined *)(param_1 + 0x100f42bd) = 1;
		return;
	}
	if (*(int *)PTR_DAT_100f1824 != param_1) {
		return;
	}
	*_DAT_100f1f68 = (char)iVar1;
	return;
}

void multi_parse_turn(int param_1, uint param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined **ppuVar1;
	uint uVar2;

	ppuVar1 = &toc;
	if ((param_2 & 0x80000000) != 0) {
		ppuVar1 = &toc;
		multi_handle_turn_upper_bit(param_1);
	}
	uVar2 = param_2 & 0x7fffffff;
	if (ppuVar1[-0x1341] < (undefined *)(uVar2 + *(int *)ppuVar1[-0x1c18])) {
		if (0x7ffffffe < uVar2) {
			uVar2 = param_2 & 0xffff;
		}
		ppuVar1[-0x1341] = (undefined *)(uVar2 + *(int *)ppuVar1[-0x1c18]);
		ppuVar1[-0x1342] = (undefined *)(uVar2 * 4 * (uint)(byte)*ppuVar1[-0x1c03]);
	}
	return;
}

undefined multi_msg_countdown(undefined param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	byte *pbVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	int iVar8;
	byte **ppbVar9;
	int *piVar10;
	uint *puVar11;
	undefined4 in_stack_ffffffb8;

	lVar7 = (longlong)param_8;
	lVar6 = (longlong)param_7;
	lVar5 = (longlong)param_6;
	lVar4 = (longlong)param_5;
	lVar3 = (longlong)param_4;
	lVar2 = (longlong)param_3;
	iVar8 = 0;
	puVar11 = (uint *)PTR_DAT_100f1fc8;
	piVar10 = (int *)PTR_DAT_100f1fc0;
	ppbVar9 = (byte **)PTR_DAT_100f1fbc;
	do {
		if (((*puVar11 & 0x20000) != 0) && (*piVar10 == 4)) {
			pbVar1 = *ppbVar9;
			param_1 = multi_parse_turn(iVar8, (uint)pbVar1[3] << 0x18 | (uint)pbVar1[2] << 0x10 | (uint)pbVar1[1] << 8 | (uint)*pbVar1, (char)lVar2, (char)lVar3,
			    (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7, in_stack_ffffffb8);
		}
		iVar8 = iVar8 + 1;
		piVar10 = piVar10 + 1;
		ppbVar9 = ppbVar9 + 1;
		puVar11 = puVar11 + 1;
	} while (iVar8 < 4);
	return param_1;
}

void multi_player_left_msg(uint param_1, undefined8 param_2, ulonglong param_3, ulonglong param_4,
    ulonglong param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int iVar1;
	char *pcVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	undefined *puVar5;
	undefined8 uVar6;
	undefined4 uVar7;
	undefined4 uVar8;
	int iVar9;
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

	puVar3 = PTR_DAT_100f1828;
	ppuVar4 = &toc;
	iVar9 = param_1 * 0x55ec;
	pcVar2 = PTR_DAT_100f1828 + iVar9 + 0x1d;
	if (*pcVar2 != '\0') {
		uVar6 = param_2;
		RemovePlrFromMap(param_1);
		RemovePortalMissile(param_1);
		DeactivatePortal(param_1);
		RemovePlrPortal((char)param_1, (char)uVar6, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffffb8);
		uVar8 = (undefined4)param_5;
		uVar7 = (undefined4)param_4;
		RemovePlrMissiles(param_1, uVar6, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
		if ((int)param_2 != 0) {
			puVar5 = ppuVar4[-0x1707];
			iVar1 = *(int *)(ppuVar4[-0x1708] + param_1 * 4);
			if (iVar1 != 0x40000005) {
				if (iVar1 < 0x40000005) {
					if (0x40000003 < iVar1) {
						puVar5 = ppuVar4[-0x170a];
						*ppuVar4[-0x1c7f] = 1;
					}
				} else {
					if (iVar1 < 0x40000007) {
						puVar5 = ppuVar4[-0x1709];
					}
				}
			}
			EventPlrMsg(puVar5, puVar3 + iVar9 + 0x13c, iVar1, uVar7, uVar8, param_6, param_7, param_8,
			    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc,
			    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
			    in_stack_ffffffe0, in_stack_ffffffe4);
		}
		*pcVar2 = '\0';
		pcVar2 = ppuVar4[-0x1c29];
		puVar3[iVar9 + 0x13c] = 0;
		*pcVar2 = *pcVar2 + -1;
	}
	return;
}

void multi_clear_left_tbl(undefined8 param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	char *pcVar1;
	undefined7 uVar2;
	undefined uVar3;
	undefined7 uVar4;
	undefined uVar5;
	undefined7 uVar6;
	undefined uVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	undefined4 *puVar12;
	char *pcVar13;
	undefined4 in_stack_ffffffb8;

	pcVar1 = _DAT_100f1d14;
	uVar6 = (undefined7)((ulonglong)param_5 >> 8);
	uVar7 = (undefined)param_5;
	uVar4 = (undefined7)((ulonglong)param_4 >> 8);
	uVar5 = (undefined)param_4;
	uVar2 = (undefined7)(param_3 >> 8);
	uVar3 = (undefined)param_3;
	lVar10 = (longlong)param_8;
	lVar9 = (longlong)param_7;
	lVar8 = (longlong)param_6;
	lVar11 = 0;
	pcVar13 = (char *)0x100f42c1;
	puVar12 = _DAT_100f33b0;
	do {
		if (*pcVar13 != '\0') {
			if (*pcVar1 == '\x01') {
				msg_send_drop_pkt(lVar11, (char)*puVar12, uVar3, uVar5, uVar7, (char)lVar8, (char)lVar9, (char)lVar10,
				    in_stack_ffffffb8);
			} else {
				multi_player_left_msg((uint)lVar11, 1, CONCAT71(uVar2, uVar3), CONCAT71(uVar4, uVar5),
				    CONCAT71(uVar6, uVar7), (int)lVar8, (int)lVar9, (int)lVar10, in_stack_ffffffb8);
			}
			*pcVar13 = '\0';
			*puVar12 = 0;
		}
		lVar11 = lVar11 + 1;
		puVar12 = puVar12 + 1;
		pcVar13 = pcVar13 + 1;
	} while ((int)lVar11 < 4);
	return;
}

void multi_player_left(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint uVar1;
	ulonglong uVar2;
	undefined4 in_stack_ffffffc8;

	uVar1 = _DAT_100f33b0;
	uVar2 = (ulonglong)_DAT_100f33b0;
	*(undefined *)((int)param_1 + 0x100f42c1) = 1;
	*(undefined4 *)(uVar1 + (int)param_1 * 4) = (int)param_2;
	multi_clear_left_tbl(param_1, param_2, uVar2, 0x100f42c1, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void multi_net_ping(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 uVar1;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	DAT_100f42b8 = 1;
	uVar1 = GetTickCount(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	*(undefined4 *)(local_2c + -0x4d1c) = uVar1;
	return;
}

void multi_check_drop_player(undefined param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	longlong lVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	uint *puVar8;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	lVar6 = (longlong)param_8;
	lVar5 = (longlong)param_7;
	lVar4 = (longlong)param_6;
	lVar3 = (longlong)param_5;
	lVar2 = (longlong)param_4;
	lVar1 = (longlong)param_3;
	lVar7 = 0;
	puVar8 = (uint *)PTR_DAT_100f1fc8;
	do {
		if (((*puVar8 & 0x40000) == 0) && ((*puVar8 & 0x10000) != 0)) {
			SNetDropPlayer((char)lVar7, 6, (char)lVar1, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5,
			    (char)lVar6, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
		}
		lVar7 = lVar7 + 1;
		puVar8 = puVar8 + 1;
	} while ((int)lVar7 < 4);
	return;
}

void multi_begin_timeout(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint *puVar1;
	uint uVar2;
	undefined *puVar3;
	undefined *puVar4;
	int iVar5;
	int iVar6;
	byte bVar7;
	byte bVar8;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	int local_2c;

	puVar4 = _DAT_100f1f6c;
	puVar3 = PTR_DAT_100f1824;
	if (DAT_100f42b8 != '\0') {
		iVar5 = GetTickCount(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
		iVar5 = iVar5 - *(int *)(local_2c + -0x4d1c);
		if (iVar5 < 0x4e21) {
			if (9999 < iVar5) {
				puVar1 = *(uint **)(local_2c + -0x7008);
				iVar5 = -1;
				iVar6 = -1;
				bVar7 = 0;
				bVar8 = 0;
				if ((*puVar1 & 0x10000) != 0) {
					iVar6 = 0;
					if ((*puVar1 & 0x40000) == 0) {
						bVar8 = 1;
					} else {
						bVar7 = 1;
						iVar5 = 0;
					}
				}
				if ((puVar1[1] & 0x10000) != 0) {
					if (iVar6 == -1) {
						iVar6 = 1;
					}
					if ((puVar1[1] & 0x40000) == 0) {
						bVar8 = bVar8 + 1;
					} else {
						bVar7 = bVar7 + 1;
						if (iVar5 == -1) {
							iVar5 = 1;
						}
					}
				}
				if ((puVar1[2] & 0x10000) != 0) {
					if (iVar6 == -1) {
						iVar6 = 2;
					}
					if ((puVar1[2] & 0x40000) == 0) {
						bVar8 = bVar8 + 1;
					} else {
						bVar7 = bVar7 + 1;
						if (iVar5 == -1) {
							iVar5 = 2;
						}
					}
				}
				uVar2 = puVar1[3];
				if ((uVar2 & 0x10000) != 0) {
					if (iVar6 == -1) {
						iVar6 = 3;
					}
					if ((uVar2 & 0x40000) == 0) {
						bVar8 = bVar8 + 1;
					} else {
						bVar7 = bVar7 + 1;
						if (iVar5 == -1) {
							iVar5 = 3;
						}
					}
				}
				if (bVar7 < bVar8) {
					*puVar4 = 1;
				} else {
					if (bVar7 == bVar8) {
						if (iVar6 == iVar5) {
							if (iVar5 == *(int *)puVar3) {
								multi_check_drop_player(bVar7, (char)uVar2, (char)iVar5, (char)iVar6, bVar7, bVar8, param_7, param_8,
								    in_stack_ffffffc8);
							}
						} else {
							*puVar4 = 1;
						}
					} else {
						if (iVar5 == *(int *)puVar3) {
							multi_check_drop_player(bVar7, (char)uVar2, (char)iVar5, (char)iVar6, bVar7, bVar8, param_7, param_8,
							    in_stack_ffffffc8);
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

undefined8
multi_handle_delta(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	int iVar1;
	undefined8 uVar2;
	ulonglong uVar3;
	int iVar4;
	undefined uVar5;
	undefined7 uVar6;
	undefined uVar7;
	undefined7 uVar8;
	undefined uVar9;
	undefined7 uVar10;
	undefined uVar11;
	longlong lVar12;
	undefined4 uVar13;
	longlong lVar14;
	undefined4 uVar15;
	longlong lVar16;
	undefined4 uVar17;
	char *pcVar18;
	undefined4 in_stack_ffffffb8;
	int local_18[6];

	uVar10 = (undefined7)((ulonglong)param_5 >> 8);
	uVar11 = (undefined)param_5;
	uVar8 = (undefined7)((ulonglong)param_4 >> 8);
	uVar9 = (undefined)param_4;
	uVar6 = (undefined7)((ulonglong)param_3 >> 8);
	uVar7 = (undefined)param_3;
	lVar16 = (longlong)param_8;
	lVar14 = (longlong)param_7;
	lVar12 = (longlong)param_6;
	uVar3 = ZEXT48(&toc);
	if (*_DAT_100f1f6c == '\0') {
		pcVar18 = (char *)0x100f42bd;
		iVar4 = 0;
		do {
			if (*pcVar18 != '\0') {
				*pcVar18 = '\0';
				DeltaExportData(iVar4, (char)param_2, uVar7, uVar9, uVar11, (char)lVar12, (char)lVar14, (char)lVar16,
				    in_stack_ffffffb8);
			}
			uVar17 = (undefined4)lVar16;
			uVar15 = (undefined4)lVar14;
			uVar13 = (undefined4)lVar12;
			iVar1 = (int)uVar3;
			iVar4 = iVar4 + 1;
			pcVar18 = pcVar18 + 1;
		} while (iVar4 < 4);
		uVar5 = 1;
		uVar3 = nthread_send_and_recv_turn((ulonglong) * (uint *)(iVar1 + -0x4d04), 1, CONCAT71(uVar6, uVar7),
		    CONCAT71(uVar8, uVar9), CONCAT71(uVar10, uVar11), uVar13, uVar15, uVar17,
		    in_stack_ffffffb8);
		*(undefined4 *)(iVar1 + -0x4d04) = (int)uVar3;
		iVar4 = nthread_recv_turns(local_18);
		if (iVar4 == 0) {
			multi_begin_timeout(0, uVar5, uVar7, uVar9, uVar11, (char)uVar13, (char)uVar15, (char)uVar17,
			    in_stack_ffffffb8);
			uVar2 = 0;
		} else {
			*(undefined *)(iVar1 + -0x4d18) = 0;
			if (local_18[0] != 0) {
				if (*(int *)(iVar1 + -0x4d00) == 0) {
					NetSendHiPri(0, 0, CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9), CONCAT71(uVar10, uVar11),
					    uVar13, uVar15, uVar17, in_stack_ffffffb8);
					*(undefined4 *)(iVar1 + -0x4d00) = 0;
				} else {
					*(undefined4 *)(iVar1 + -0x4d00) = 0;
					uVar3 = multi_check_pkt_valid(*(int **)(iVar1 + -0x5c14));
					if ((int)uVar3 == 0) {
						NetSendHiPri(0, 0, CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9), CONCAT71(uVar10, uVar11),
						    uVar13, uVar15, uVar17, in_stack_ffffffb8);
					}
				}
			}
			multi_mon_seeds();
			uVar2 = 1;
		}
	} else {
		uVar2 = 0;
		*(undefined4 *)PTR_DAT_100f1a2c = 0;
	}
	return uVar2;
}

void multi_handle_all_packets(undefined8 param_1, longlong param_2, ulonglong param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	ulonglong uVar1;

	while (((param_3 & 0xffffffff) != 0 && (uVar1 = ParseCmd(param_1, param_2), (uVar1 & 0xffffffff) != 0))) {
		param_2 = param_2 + uVar1;
		param_3 = param_3 - uVar1;
	}
	return;
}

void multi_process_tmsgs(undefined param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	longlong lVar1;
	int iVar2;
	undefined *puVar3;
	ulonglong uVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;

	puVar3 = PTR_DAT_100f1824;
	lVar9 = (longlong)param_8;
	lVar8 = (longlong)param_7;
	lVar7 = (longlong)param_6;
	lVar6 = (longlong)param_5;
	lVar5 = (longlong)param_4;
	uVar4 = SEXT18(param_3);
	lVar1 = ZEXT48(register0x0000000c) - 0x240;
	iVar2 = (int)lVar1;
	*(BADSPACEBASE **)iVar2 = register0x0000000c;
	while (true) {
		uVar4 = tmsg_get((char)lVar1 + '8', 0, (char)uVar4, (char)lVar5, (char)lVar6, (char)lVar7,
		    (char)lVar8, (char)lVar9, *(undefined4 *)(iVar2 + 8));
		if (uVar4 == 0)
			break;
		multi_handle_all_packets((ulonglong) * (uint *)puVar3, ZEXT48(register0x0000000c) - 0x208, uVar4, (char)lVar5,
		    (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, *(undefined4 *)(iVar2 + 8));
	}
	return;
}

void multi_process_network_packets(undefined8 param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	uint uVar1;
	byte *pbVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	char *pcVar9;
	undefined *puVar10;
	ulonglong uVar11;
	undefined uVar15;
	longlong lVar12;
	int iVar14;
	longlong lVar13;
	undefined uVar17;
	longlong lVar16;
	undefined uVar19;
	ulonglong uVar18;
	undefined7 uVar20;
	undefined uVar21;
	undefined4 uVar22;
	longlong lVar23;
	undefined4 uVar24;
	longlong lVar25;
	undefined4 uVar26;
	ulonglong uVar27;

	puVar10 = PTR_DAT_100f1fb8;
	pcVar9 = _DAT_100f1d14;
	puVar8 = PTR_DAT_100f1950;
	puVar7 = PTR_DAT_100f1828;
	puVar6 = PTR_DAT_100f1824;
	puVar5 = PTR_DAT_100f17ec;
	uVar19 = (undefined)param_3;
	uVar17 = (undefined)param_2;
	uVar20 = (undefined7)((ulonglong)param_5 >> 8);
	uVar21 = (undefined)param_5;
	lVar25 = (longlong)param_8;
	lVar23 = (longlong)param_7;
	lVar13 = (longlong)param_6;
	uVar11 = ZEXT48(register0x0000000c);
	uVar27 = ZEXT48(PTR_DAT_100f1828);
	puVar3 = (undefined *)(uVar11 - 0x70);
	*(BADSPACEBASE **)puVar3 = register0x0000000c;
	uVar15 = multi_clear_left_tbl(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    *(undefined4 *)(puVar3 + 8));
	multi_process_tmsgs(uVar15, uVar17, uVar19, (char)param_4, uVar21, (char)lVar13, (char)lVar23, (char)lVar25,
	    *(undefined4 *)(puVar3 + 8));
	do {
		do {
			lVar16 = uVar11 - 0x34;
			uVar18 = uVar11 - 0x38;
			iVar14 = SNetReceiveMessage((char)(uVar11 - 0x70) + '@', (char)lVar16, (char)uVar18,
			    (char)param_4, uVar21, (char)lVar13, (char)lVar23, (char)lVar25,
			    puVar3[0xb], puVar3[0xf], *(undefined4 *)(puVar3 + 0x14));
			uVar26 = (undefined4)lVar25;
			uVar24 = (undefined4)lVar23;
			uVar22 = (undefined4)lVar13;
			if (iVar14 == 0) {
				lVar13 = SErrGetLastError(0, (char)lVar16, (char)uVar18, (char)param_4, uVar21, (char)lVar13,
				    (char)lVar23, (char)lVar25, puVar3[0xb], puVar3[0xf],
				    *(undefined4 *)(puVar3 + 0x14));
				if ((lVar13 + 0x7af00000U & 0xffffffff) != 0x6b) {
					nthread_terminate_game((ulonglong) * (uint *)(*(int *)(puVar3 + 0x14) + -0x5c2c), lVar16, uVar18, param_4, CONCAT71(uVar20, uVar21), uVar22, uVar24, uVar26, *(undefined4 *)(puVar3 + 8));
				}
				return;
			}
			uVar1 = *(uint *)puVar10;
			*(uint *)puVar10 = uVar1 + 1;
			multi_clear_left_tbl((ulonglong)uVar1, lVar16, uVar18, param_4, CONCAT71(uVar20, uVar21), uVar22, uVar24,
			    uVar26, *(undefined4 *)(puVar3 + 8));
			pbVar2 = *(byte **)(puVar3 + 0x3c);
			*(uint *)(pbVar2 + 4) = (uint)pbVar2[7] << 0x18 | (uint)pbVar2[6] << 0x10 | (uint)pbVar2[5] << 8 | (uint)pbVar2[4];
			*(uint *)(pbVar2 + 8) = (uint)pbVar2[0xb] << 0x18 | (uint)pbVar2[10] << 0x10 | (uint)pbVar2[9] << 8 | (uint)pbVar2[8];
			*(ushort *)(pbVar2 + 0xf) = CONCAT11(pbVar2[0x10], pbVar2[0xf]);
			*(ushort *)(pbVar2 + 0x11) = CONCAT11(pbVar2[0x12], pbVar2[0x11]);
		} while ((((*(uint *)(puVar3 + 0x38) < 0x13) || (uVar1 = *(uint *)(puVar3 + 0x40), uVar18 = (ulonglong)uVar1, 3 < uVar1)) || (*(short *)(pbVar2 + 0xf) != 0x6970)) || ((ulonglong) * (ushort *)(pbVar2 + 0x11) != (ulonglong) * (uint *)(puVar3 + 0x38)));
		puVar4 = puVar7 + uVar1 * 0x55ec;
		*(uint *)(puVar4 + 0x50) = (uint)*pbVar2;
		*(uint *)(puVar4 + 0x54) = (uint)pbVar2[1];
		if (uVar18 != (ulonglong) * (uint *)puVar6) {
			*(undefined4 *)(puVar4 + 0x194) = *(undefined4 *)(pbVar2 + 4);
			*(undefined4 *)(puVar4 + 0x198) = *(undefined4 *)(pbVar2 + 8);
			*(uint *)(puVar4 + 0x164) = (uint)pbVar2[0xc];
			*(uint *)(puVar4 + 0x16c) = (uint)pbVar2[0xd];
			*(uint *)(puVar4 + 0x174) = (uint)pbVar2[0xe];
			if (((*pcVar9 != '\x01') && (puVar4[0x1d] != '\0')) && (*(int *)(puVar4 + 0x194) != 0)) {
				if (((uint)(byte)*puVar5 == *(uint *)(puVar4 + 0x34)) && (puVar4[0x13b] == '\0')) {
					lVar16 = abs((ulonglong) * (uint *)(puVar4 + 0x38) - (ulonglong)*pbVar2, *puVar3);
					lVar12 = abs((ulonglong)
					            * (uint *)(puVar7 + *(int *)(puVar3 + 0x40) * 0x55ec + 0x3c)
					        - (ulonglong)pbVar2[1],
					    *puVar3);
					if ((int)lVar16 < 4) {
						if (3 < (int)lVar12)
							goto LAB_10080590;
					} else {
					LAB_10080590:
						uVar1 = *(uint *)puVar8;
						if (*(char *)(uVar1 + (uint)*pbVar2 * 0x70 + (uint)pbVar2[1]) == '\0') {
							FixPlrWalkTags((ulonglong) * (uint *)(puVar3 + 0x40), (ulonglong)uVar1, uVar18, param_4,
							    CONCAT71(uVar20, uVar21), (int)lVar13, (int)lVar23, (int)lVar25,
							    *(undefined4 *)(puVar3 + 8));
							uVar1 = *(uint *)(puVar3 + 0x40);
							lVar16 = uVar27 + (ulonglong)uVar1 * 0x55ec;
							iVar14 = (int)lVar16;
							*(undefined4 *)(iVar14 + 0x58) = *(undefined4 *)(iVar14 + 0x38);
							*(undefined4 *)(iVar14 + 0x5c) = *(undefined4 *)(iVar14 + 0x3c);
							FixPlrWalkTags((ulonglong)uVar1, lVar16, uVar18, param_4, CONCAT71(uVar20, uVar21),
							    (int)lVar13, (int)lVar23, (int)lVar25, *(undefined4 *)(puVar3 + 8));
							iVar14 = *(int *)(puVar3 + 0x40);
							puVar4 = puVar7 + iVar14 * 0x55ec;
							*(uint *)(puVar4 + 0x38) = (uint)*pbVar2;
							*(uint *)(puVar4 + 0x3c) = (uint)pbVar2[1];
							*(uint *)(puVar4 + 0x40) = (uint)*pbVar2;
							*(uint *)(puVar4 + 0x44) = (uint)pbVar2[1];
							*(char *)(*(int *)puVar8 + *(int *)(puVar4 + 0x38) * 0x70 + *(int *)(puVar4 + 0x3c)) = (char)iVar14 + '\x01';
						}
					}
					lVar16 = abs((ulonglong)
					            * (uint *)(puVar7 + *(int *)(puVar3 + 0x40) * 0x55ec + 0x40)
					        - (ulonglong)
					            * (uint *)(puVar7 + *(int *)(puVar3 + 0x40) * 0x55ec + 0x38),
					    *puVar3);
					lVar12 = abs((ulonglong)
					            * (uint *)(puVar7 + *(int *)(puVar3 + 0x40) * 0x55ec + 0x44)
					        - (ulonglong)
					            * (uint *)(puVar7 + *(int *)(puVar3 + 0x40) * 0x55ec + 0x3c),
					    *puVar3);
					if ((1 < (int)lVar16) || (1 < (int)lVar12)) {
						puVar4 = puVar7 + *(int *)(puVar3 + 0x40) * 0x55ec;
						*(undefined4 *)(puVar4 + 0x40) = *(undefined4 *)(puVar4 + 0x38);
						*(undefined4 *)(puVar4 + 0x44) = *(undefined4 *)(puVar4 + 0x3c);
					}
					param_4 = 1;
					MakePlrPath((ulonglong) * (uint *)(puVar3 + 0x40), (ulonglong)pbVar2[2], (ulonglong)pbVar2[3], 1, CONCAT71(uVar20, uVar21), (int)lVar13, (int)lVar23, (int)lVar25,
					    *(undefined4 *)(puVar3 + 8));
				} else {
					*(uint *)(puVar4 + 0x38) = (uint)*pbVar2;
					*(uint *)(puVar4 + 0x3c) = (uint)pbVar2[1];
					*(uint *)(puVar4 + 0x40) = (uint)*pbVar2;
					*(uint *)(puVar4 + 0x44) = (uint)pbVar2[1];
					*(uint *)(puVar4 + 0x48) = (uint)pbVar2[2];
					*(uint *)(puVar4 + 0x4c) = (uint)pbVar2[3];
				}
			}
		}
		multi_handle_all_packets((ulonglong) * (uint *)(puVar3 + 0x40), ZEXT48(pbVar2) + 0x13,
		    (ulonglong) * (uint *)(puVar3 + 0x38) - 0x13, (char)param_4, uVar21, (char)lVar13,
		    (char)lVar23, (char)lVar25, *(undefined4 *)(puVar3 + 8));
	} while (true);
}

void multi_send_zero_packet(undefined param_1, undefined8 uParm2, longlong lParm3, ulonglong uParm4,
    undefined8 uParm5, undefined4 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	undefined *puVar1;
	ulonglong uVar2;
	int iVar3;
	longlong lVar4;
	longlong lVar5;
	undefined7 uVar6;
	undefined uVar7;
	longlong lVar8;
	undefined4 in_stack_fffffd98;
	undefined in_stack_fffffd9f;
	int local_25c;
	undefined uStack550;

	puVar1 = PTR_DAT_100f1fb4;
	uVar7 = (undefined)uParm4;
	uVar6 = (undefined7)(uParm4 >> 8);
	lVar8 = ZEXT48(register0x0000000c) - 0x225;
	while (true) {
		if ((uParm4 & 0xffffffff) == 0) {
			return;
		}
		uVar2 = (ulonglong) * (uint *)puVar1 - 0x18;
		if ((uParm4 & 0xffffffff) < (uVar2 & 0xffffffff)) {
			uVar2 = uParm4;
		}
		memcpy(0xe0, (char)lParm3, (char)uVar2, uVar7, (char)lVar8, (char)uParm6, (char)uParm7,
		    (char)uParm8, (char)in_stack_fffffd98, in_stack_fffffd9f, local_25c);
		lVar5 = (uVar2 & 0xffff) + 0x18;
		uStack550 = (undefined)lVar5;
		lVar4 = ZEXT48(register0x0000000c) - 0x238;
		iVar3 = SNetSendMessage(param_1, (char)lVar4, uStack550, uVar7, (char)lVar8, (char)uParm6,
		    (char)uParm7, (char)uParm8, (char)in_stack_fffffd98, in_stack_fffffd9f,
		    local_25c);
		if (iVar3 == 0)
			break;
		lParm3 = lParm3 + uVar2;
		uParm4 = uParm4 - uVar2;
	}
	nthread_terminate_game((ulonglong) * (uint *)(local_25c + -0x5c30), lVar4, lVar5, CONCAT71(uVar6, uVar7), lVar8,
	    uParm6, uParm7, uParm8, in_stack_fffffd98);
	return;
}

void multi_send_pinfo(undefined4 param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	longlong lVar1;
	undefined uVar2;
	undefined4 in_stack_fffffab8;
	uint *local_518[2];
	uint auStack1296[324];

	uVar2 = 1;
	PackPlayer((int)auStack1296, *(int *)PTR_DAT_100f1824, 1, param_4, param_5, param_6, param_7, param_8,
	    in_stack_fffffab8);
	lVar1 = DiabloAllocPtr(0x4f2);
	lVar1._7_1_ = (undefined)lVar1;
	local_518[0] = (uint *)lVar1;
	FUN_1008fe2c(local_518, auStack1296, uVar2, param_4, param_5, param_6, param_7, param_8, in_stack_fffffab8);
	uVar2 = (undefined)(ZEXT48(local_518[0]) - lVar1);
	dthread_send_delta(param_1, param_2, lVar1, ZEXT48(local_518[0]) - lVar1, param_5, param_6, param_7, param_8,
	    in_stack_fffffab8);
	mem_free_dbg(lVar1, param_2, (undefined)lVar1, uVar2, param_5, param_6, param_7, param_8,
	    in_stack_fffffab8);
	return;
}

undefined8 InitNewSeed(int param_1)

{
	if (param_1 == 0) {
		return 0;
	}
	if ((0 < param_1) && (param_1 < 5)) {
		return 1;
	}
	if ((4 < param_1) && (param_1 < 9)) {
		return 2;
	}
	if ((8 < param_1) && (param_1 < 0xd)) {
		return 3;
	}
	return 4;
}

void SetupLocalCoords(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	undefined *puVar5;
	int iVar6;
	int iVar7;

	puVar5 = PTR_DAT_100f183c;
	puVar3 = PTR_DAT_100f1828;
	puVar1 = PTR_DAT_100f17ec;
	if ((*(int *)PTR_DAT_100f1d5c == 0) || (1 < (byte)*PTR_DAT_100f17e0)) {
		*PTR_DAT_100f17ec = 0;
		puVar2 = PTR_DAT_100f17f8;
		*puVar5 = 0;
		*puVar2 = 0;
	}
	iVar7 = *(int *)PTR_DAT_100f1824 * 4;
	iVar6 = *(int *)PTR_DAT_100f1824 * 0x55ec;
	iVar4 = *(int *)(PTR_DAT_100f1fac + iVar7);
	iVar7 = *(int *)(PTR_DAT_100f1fb0 + iVar7) + 0x4b;
	puVar5 = puVar3 + iVar6;
	*(int *)(puVar5 + 0x38) = iVar7;
	iVar4 = iVar4 + 0x44;
	*(int *)(puVar5 + 0x3c) = iVar4;
	*(int *)(puVar5 + 0x40) = iVar7;
	*(int *)(puVar5 + 0x44) = iVar4;
	*(int *)(puVar5 + 0x48) = iVar7;
	*(int *)(puVar5 + 0x4c) = iVar4;
	*(uint *)(puVar5 + 0x34) = (uint)(byte)*puVar1;
	puVar5[0x13b] = 1;
	puVar5[0x5592] = 0;
	*(undefined4 *)(puVar3 + iVar6) = 10;
	*(undefined4 *)(puVar5 + 0x20) = 0xffffffff;
	return;
}

undefined8
multi_upgrade(undefined4 *param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
    undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int iVar1;
	int iVar2;
	undefined8 uVar3;

	iVar2 = (int)(ZEXT48(register0x0000000c) - 0x50);
	*(BADSPACEBASE **)iVar2 = register0x0000000c;
	SNetPerformUpgrade((char)(ZEXT48(register0x0000000c) - 0x50) + '8', (char)param_2, (char)param_3,
	    (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8,
	    *(undefined *)(iVar2 + 0xb), *(undefined *)(iVar2 + 0xf),
	    *(undefined4 *)(iVar2 + 0x14));
	iVar1 = *(int *)(iVar2 + 0x38);
	if (iVar1 == 1) {
		uVar3 = 1;
	} else {
		if (iVar1 < 1) {
			if (iVar1 == -1) {
				DrawDlg(*(undefined4 *)(*(int *)(iVar2 + 0x14) + -0x5c34), param_2, param_3, param_4,
				    param_5, param_6, param_7, param_8, *(undefined4 *)(iVar2 + 8),
				    *(undefined *)(iVar2 + 0xf), *(undefined4 *)(iVar2 + 0x18),
				    *(undefined4 *)(iVar2 + 0x1c), *(undefined4 *)(iVar2 + 0x20),
				    *(undefined4 *)(iVar2 + 0x24), *(undefined4 *)(iVar2 + 0x28),
				    *(undefined4 *)(iVar2 + 0x2c), *(undefined4 *)(iVar2 + 0x30),
				    *(undefined4 *)(iVar2 + 0x34));
			} else {
				if (-2 < iVar1) {
					return 1;
				}
			}
		} else {
			if (iVar1 < 3) {
				*param_1 = 1;
			}
		}
		uVar3 = 0;
	}
	return uVar3;
}

void multi_event_handler(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	int iVar1;
	undefined8 uVar2;
	uint uVar3;
	ulonglong uVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	uint uVar8;
	uint *puVar9;
	ulonglong uVar10;
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

	iVar1 = _DAT_100f338c;
	lVar7 = (longlong)param_8;
	lVar6 = (longlong)param_7;
	lVar5 = (longlong)param_6;
	uVar10 = (ulonglong)_DAT_100f3390;
	uVar8 = 0;
	puVar9 = (uint *)PTR_DAT_100f3394;
	do {
		uVar4 = uVar10;
		uVar2 = FUN_100dbf44((ulonglong)*puVar9);
		if (((int)uVar2 == 0) && (param_1 != 0)) {
			uVar3 = TraceLastError(uVar2, uVar4, param_3, param_4, param_5, (int)lVar5, (int)lVar6, (int)lVar7,
			    in_stack_ffffffa8);
			app_fatal(iVar1, (longlong)(int)uVar3, param_3, param_4, param_5, (int)lVar5, (int)lVar6,
			    (int)lVar7, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffb8,
			    in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8,
			    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
		}
		uVar8 = uVar8 + 1;
		puVar9 = puVar9 + 1;
	} while (uVar8 < 3);
	return;
}

void NetClose(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined8 uVar1;
	undefined uVar2;
	undefined7 uVar3;
	undefined uVar4;
	undefined7 uVar5;
	undefined uVar6;
	undefined7 uVar7;
	undefined uVar8;
	undefined7 uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined4 in_stack_ffffffc8;
	undefined uVar14;
	undefined in_stack_ffffffcf;
	int local_2c;
	int iVar15;

	uVar9 = (undefined7)((ulonglong)param_5 >> 8);
	uVar10 = (undefined)param_5;
	uVar7 = (undefined7)((ulonglong)param_4 >> 8);
	uVar8 = (undefined)param_4;
	uVar5 = (undefined7)((ulonglong)param_3 >> 8);
	uVar6 = (undefined)param_3;
	uVar3 = (undefined7)((ulonglong)param_2 >> 8);
	uVar4 = (undefined)param_2;
	if (_DAT_100f42d4 != 0) {
		_DAT_100f42d4 = 0;
		uVar1 = nthread_cleanup(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
		uVar2 = dthread_cleanup(uVar1, CONCAT71(uVar3, uVar4), CONCAT71(uVar5, uVar6), CONCAT71(uVar7, uVar8),
		    CONCAT71(uVar9, uVar10), param_6, param_7, param_8, in_stack_ffffffc8);
		tmsg_cleanup(uVar2, uVar4, uVar6, uVar8, uVar10, (char)param_6, (char)param_7, (char)param_8,
		    in_stack_ffffffc8);
		uVar13 = (undefined)param_8;
		uVar12 = (undefined)param_7;
		uVar11 = (undefined)param_6;
		multi_event_handler(0, CONCAT71(uVar3, uVar4), CONCAT71(uVar5, uVar6), CONCAT71(uVar7, uVar8),
		    CONCAT71(uVar9, uVar10), param_6, param_7, param_8, in_stack_ffffffc8);
		uVar2 = SNetLeaveGame(3, uVar4, uVar6, uVar8, uVar10, uVar11, uVar12, uVar13, (char)in_stack_ffffffc8,
		    in_stack_ffffffcf, local_2c);
		uVar14 = (undefined)in_stack_ffffffc8;
		iVar15 = local_2c;
		msgcmd_cmd_cleanup(uVar2, uVar4, uVar6, uVar8, uVar10, uVar11, uVar12, uVar13, in_stack_ffffffc8);
		if (1 < **(byte **)(local_2c + -0x77f0)) {
			Sleep(0xd0, uVar4, uVar6, uVar8, uVar10, uVar11, uVar12, uVar13, uVar14, in_stack_ffffffcf, iVar15);
		}
	}
	return;
}

undefined8
multi_init_single(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	int iVar3;
	undefined8 uVar2;
	undefined uVar5;
	uint uVar4;
	ulonglong uVar6;
	undefined8 uVar7;
	undefined4 uVar8;
	undefined4 uVar9;
	undefined *puVar10;
	ulonglong uVar11;
	ulonglong uVar12;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	int local_3c;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar1 = PTR_DAT_100f3398;
	puVar10 = PTR_s_local_100f3388;
	uVar12 = ZEXT48(PTR_DAT_100f3398);
	uVar11 = ZEXT48(PTR_s_local_100f3388);
	iVar3 = SNetInitializeProvider(0, param_1, param_2, param_3, (char)PTR_DAT_100f1dc8, param_6, param_7, param_8,
	    (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
	if (iVar3 == 0) {
		uVar2 = 0;
	} else {
		*(uint *)puVar1 = (uint)(byte)puVar1[3] << 0x18 | (uint)(byte)puVar1[2] << 0x10 | (uint)(byte)puVar1[1] << 8
		    | (uint)(byte)*puVar1;
		uVar7 = 0;
		uVar8 = 8;
		uVar9 = 1;
		uVar5 = SUB41(puVar10, 0);
		uVar6 = uVar11;
		uVar2 = SNetCreateGame(uVar5, uVar5, uVar5, 0, (char)puVar1, 8, 1, uVar5, (char)in_stack_ffffffb8,
		    in_stack_ffffffbf, local_3c);
		*(uint *)puVar1 = (uint)(byte)puVar1[3] << 0x18 | (uint)(byte)puVar1[2] << 0x10 | (uint)(byte)puVar1[1] << 8
		    | (uint)(byte)*puVar1;
		if ((int)uVar2 == 0) {
			uVar4 = TraceLastError(uVar2, uVar11, uVar6, uVar7, uVar12, uVar8, uVar9, puVar10, in_stack_ffffffb8);
			app_fatal(*(int *)(local_3c + -0x5c4c), (longlong)(int)uVar4, uVar6, uVar7, uVar12, uVar8, uVar9,
			    puVar10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc,
			    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
			    in_stack_ffffffe0, in_stack_ffffffe4);
		}
		puVar10 = *(undefined **)(local_3c + -0x77f0);
		**(undefined4 **)(local_3c + -0x77ac) = 0;
		uVar2 = 1;
		*puVar10 = 1;
	}
	return uVar2;
}

undefined8
multi_init_multi(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    ulonglong param_5, longlong param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	bool bVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	ulonglong uVar6;
	undefined8 uVar7;
	longlong lVar8;
	int iVar10;
	undefined8 uVar9;
	undefined8 uVar11;
	undefined8 uVar12;
	int *piVar13;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	ulonglong uVar14;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
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

	puVar5 = PTR_DAT_100f1dc8;
	puVar1 = PTR_DAT_100f1a1c;
	puVar4 = PTR_DAT_100f1828;
	puVar3 = PTR_DAT_100f1824;
	uVar6 = ZEXT48(&toc);
	local_24 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar14 = ZEXT48(PTR_DAT_100f1dc8);
	bVar2 = true;
	uVar9 = param_2;
	uVar11 = param_3;
	uVar12 = param_4;
	do {
		piVar13 = (int *)param_6;
		local_34[0] = 0;
		if (*puVar1 != '\0') {
			piVar13 = local_34;
			uVar9 = param_1;
			uVar11 = param_2;
			uVar12 = param_3;
			param_5 = uVar14;
			uVar7 = FUN_1000e110(0, (int)param_1, (int)param_2, (int)param_3, puVar5, piVar13, (char)param_7,
			    (char)param_8, in_stack_ffffff98);
			if ((int)uVar7 == 0) {
				if (!bVar2) {
					return 0;
				}
				lVar8 = SErrGetLastError((char)uVar7, (char)uVar9, (char)uVar11, (char)uVar12, (char)param_5,
				    (char)piVar13, (char)param_7, (char)param_8, (char)in_stack_ffffff98,
				    in_stack_ffffff9f, local_5c);
				uVar6 = (ulonglong)local_5c;
				if ((lVar8 + 0x7af00000U & 0xffffffff) != 0x77) {
					return 0;
				}
				uVar7 = multi_upgrade((undefined4 *)param_4, (int)uVar9, (int)uVar11, (int)uVar12, (int)param_5,
				    piVar13, (int)param_7, (int)param_8, in_stack_ffffff98);
				if ((int)uVar7 == 0) {
					return 0;
				}
			}
			if (local_34[0] == 0x424e4554) {
				puVar4[0x5593] = 1;
			}
		}
		multi_event_handler(1, uVar9, uVar11, uVar12, param_5, piVar13, (int)param_7, (int)param_8, in_stack_ffffff98);
		param_6 = ZEXT48(register0x0000000c) - 0x38;
		uVar9 = param_1;
		uVar11 = param_2;
		uVar12 = param_3;
		param_5 = uVar14;
		iVar10 = UiSelectGame(1, (int)param_1, (int)param_2, (int)param_3, puVar5, (int)param_6, (char)param_7, (char)param_8, in_stack_ffffff98);
		if (iVar10 != 0) {
			if (local_38 < 4) {
				*(uint *)puVar3 = local_38;
				puVar1 = *(undefined **)((int)uVar6 + -0x77f0);
				*puVar1 = 4;
				pfile_read_player_from_save(ZEXT48(puVar1), uVar9, uVar11, uVar12, param_5, param_6, param_7, param_8,
				    in_stack_ffffff98);
				if (local_34[0] == 0x424e4554) {
					puVar4[*(int *)puVar3 * 0x55ec + 0x5593] = 1;
				}
				uVar9 = 1;
			} else {
				uVar9 = 0;
			}
			return uVar9;
		}
		*puVar1 = 1;
		bVar2 = false;
	} while (true);
}

undefined8
NetInit(int iParm1, undefined8 uParm2, undefined8 uParm3, undefined8 uParm4, ulonglong uParm5,
    longlong lParm6, undefined8 uParm7, undefined8 uParm8)

{
	uint uVar1;
	undefined *puVar2;
	char cVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined *puVar12;
	undefined *puVar13;
	ulonglong uVar14;
	char cVar16;
	ulonglong uVar15;
	undefined4 uVar20;
	ulonglong uVar17;
	undefined8 uVar18;
	undefined uVar24;
	undefined8 uVar19;
	undefined4 uVar21;
	int iVar22;
	int iVar23;
	longlong lVar25;
	undefined uVar27;
	longlong lVar26;
	undefined uVar28;
	undefined uVar29;
	undefined uVar30;
	undefined4 uVar31;
	undefined4 uVar32;
	undefined4 uVar33;
	ulonglong uVar34;
	byte *pbVar35;
	undefined4 *puVar36;
	undefined4 *puVar37;

	puVar13 = PTR_DAT_100f3398;
	puVar12 = PTR_PTR_LAB_100f1f84;
	puVar11 = PTR_PTR_LAB_100f1f80;
	puVar10 = PTR_PTR_LAB_100f1f7c;
	puVar9 = PTR_PTR_LAB_100f1f78;
	puVar8 = PTR_PTR_LAB_100f1f74;
	puVar7 = PTR_DAT_100f1f5c;
	puVar6 = PTR_DAT_100f1e4c;
	puVar5 = PTR_DAT_100f1828;
	puVar4 = PTR_DAT_100f1824;
	uVar33 = (undefined4)uParm8;
	uVar32 = (undefined4)((ulonglong)uParm8 >> 0x20);
	uVar31 = (undefined4)uParm7;
	uVar21 = (undefined4)((ulonglong)uParm7 >> 0x20);
	uVar14 = ZEXT48(register0x0000000c);
	uVar17 = 0;
	pbVar35 = PTR_DAT_100f3398 + 4;
	uVar34 = ZEXT48(PTR_PTR_LAB_100f1f88);
	puVar2 = (undefined *)(uVar14 - 0x130);
	*(BADSPACEBASE **)puVar2 = register0x0000000c;
	uVar18 = uParm2;
	while (true) {
		uVar30 = (undefined)lParm6;
		uVar29 = (undefined)uParm5;
		uVar28 = (undefined)uParm4;
		uVar27 = (undefined)uVar17;
		uVar24 = (undefined)uVar18;
		*(undefined4 *)uParm2 = 0;
		SetRndSeed(0, *puVar2);
		uVar20 = FUN_100d9060((undefined4 *)0x0, uVar24, uVar27, uVar28, uVar29, uVar30, (char)uVar31,
		    (char)uVar33, *(undefined4 *)(puVar2 + 8));
		*(undefined4 *)puVar13 = uVar20;
		cVar3 = (char)(uVar14 - 0x130);
		*pbVar35 = (byte) * (undefined4 *)puVar6;
		memset(cVar3 + -100, 0x3c, uVar27, uVar28, uVar29, uVar30, (char)uVar31, (char)uVar33, puVar2[0xb],
		    puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
		*(undefined4 *)(puVar2 + 0x9c) = 0x3c;
		lParm6 = 0x2a;
		uParm5 = 4;
		uParm4 = 8;
		*(undefined4 *)(puVar2 + 0xa0) = *(undefined4 *)(*(int *)(puVar2 + 0x14) + -0x5c50);
		uVar27 = 0xf;
		*(int *)(puVar2 + 0xa4) = *(int *)(puVar2 + 0x14) + 0x3252;
		*(undefined4 *)(puVar2 + 0xa8) = 0x4452544c;
		*(undefined4 *)(puVar2 + 0xac) = 0x2a;
		*(undefined4 *)(puVar2 + 0xb4) = 4;
		*(undefined **)(puVar2 + 0xb8) = puVar13;
		*(undefined4 *)(puVar2 + 0xbc) = 8;
		*(undefined4 *)(puVar2 + 0xc4) = 0xf;
		*(undefined4 *)(puVar2 + 0xd4) = 0x409;
		memset(cVar3 + -0x74, 0x10, 0xf, 8, 4, 0x2a, (char)uVar31, (char)uVar33, puVar2[0xb], puVar2[0xf],
		    *(undefined4 *)(puVar2 + 0x14));
		*(undefined4 *)(puVar2 + 0x8c) = 0x10;
		uVar24 = 0x50;
		memset(cVar3 + '<', 0x50, uVar27, (char)uParm4, (char)uParm5, (char)lParm6, (char)uVar31,
		    (char)uVar33, puVar2[0xb], puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
		*(undefined4 *)(puVar2 + 0x3c) = 0x50;
		uVar20 = SDrawGetFrameWindow(0, uVar24, uVar27, (char)uParm4, (char)uParm5, (char)lParm6, (char)uVar31, (char)uVar33, puVar2[0xb], puVar2[0xf],
		    *(undefined4 *)(puVar2 + 0x14));
		iVar23 = *(int *)(puVar2 + 0x14);
		cVar16 = (char)iVar23;
		*(undefined4 *)(puVar2 + 0x44) = uVar20;
		*(undefined4 *)(puVar2 + 0x48) = *(undefined4 *)(iVar23 + -0x7030);
		*(undefined4 *)(puVar2 + 0x50) = *(undefined4 *)(iVar23 + -0x7034);
		*(undefined4 *)(puVar2 + 0x54) = *(undefined4 *)(iVar23 + -0x7038);
		*(undefined4 *)(puVar2 + 0x5c) = *(undefined4 *)(iVar23 + -0x703c);
		*(undefined4 *)(puVar2 + 0x60) = *(undefined4 *)(iVar23 + -0x7040);
		*(undefined4 *)(puVar2 + 0x4c) = *(undefined4 *)(iVar23 + -0x7044);
		*(int *)(puVar2 + 0x68) = (int)uVar34;
		*(undefined **)(puVar2 + 0x6c) = puVar12;
		*(undefined **)(puVar2 + 0x84) = puVar11;
		*(undefined **)(puVar2 + 0x88) = puVar10;
		*(undefined **)(puVar2 + 0x80) = puVar9;
		*(undefined **)(puVar2 + 0x78) = puVar8;
		uVar17 = UiProfileGetString(*puVar2);
		*(int *)(puVar2 + 0x7c) = (int)uVar17;
		memset(cVar16 + -0x17, 4, uVar27, (char)uParm4, (char)uParm5, (char)lParm6, (char)uVar31,
		    (char)uVar33, puVar2[0xb], puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
		iVar23 = *(int *)(puVar2 + 0x14);
		**(undefined **)(iVar23 + -0x7064) = 0;
		memset((char)iVar23 + -0xf, 4, uVar27, (char)uParm4, (char)uParm5, (char)lParm6, (char)uVar31,
		    (char)uVar33, puVar2[0xb], puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
		memset((char)*(undefined4 *)(*(int *)(puVar2 + 0x14) + -0x5c20), 0x10, uVar27, (char)uParm4,
		    (char)uParm5, (char)lParm6, (char)uVar31, (char)uVar33, puVar2[0xb], puVar2[0xf],
		    *(undefined4 *)(puVar2 + 0x14));
		memset((char)*(undefined4 *)(puVar2 + 0x14) + -0x13, 4, uVar27, (char)uParm4, (char)uParm5,
		    (char)lParm6, (char)uVar31, (char)uVar33, puVar2[0xb], puVar2[0xf],
		    *(undefined4 *)(puVar2 + 0x14));
		memset((char)puVar5, 0xb0, uVar27, (char)uParm4, (char)uParm5, (char)lParm6, (char)uVar31,
		    (char)uVar33, puVar2[0xb], puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
		uVar24 = 8;
		memset((char)puVar7, 8, uVar27, (char)uParm4, (char)uParm5, (char)lParm6, (char)uVar31,
		    (char)uVar33, puVar2[0xb], puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
		SNetSetBasePlayer(0, uVar24, uVar27, (char)uParm4, (char)uParm5, (char)lParm6, (char)uVar31,
		    (char)uVar33, puVar2[0xb], puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
		uVar15 = (ulonglong) * (uint *)(puVar2 + 0x14);
		if (iParm1 == 0) {
			lVar25 = uVar14 - 0xa4;
			lVar26 = uVar14 - 0xf4;
			uParm4 = uParm2;
			uVar18 = multi_init_multi(uVar14 - 0x94, lVar25, lVar26, uParm2, uParm5, lParm6, CONCAT44(uVar21, uVar31), CONCAT44(uVar32, uVar33), *(undefined4 *)(puVar2 + 8));
			uVar24 = (undefined)uVar18;
			if ((int)uVar18 == 0) {
				return 0;
			}
		} else {
			lVar25 = uVar14 - 0xa4;
			lVar26 = uVar14 - 0xf4;
			uVar18 = multi_init_single(cVar3 + -100, (char)lVar25, (char)lVar26, (char)uParm4, (char)uParm5,
			    (char)lParm6, (char)uVar31, (char)uVar33, *(undefined4 *)(puVar2 + 8));
			uVar24 = (undefined)uVar18;
			if ((int)uVar18 == 0) {
				return 0;
			}
		}
		*(undefined4 *)((int)uVar15 + -0x4cfc) = 1;
		*(undefined *)((int)uVar15 + -0x4d18) = 0;
		uVar24 = delta_init(uVar24, (char)lVar25, (char)lVar26, (char)uParm4, (char)uParm5, (char)lParm6,
		    (char)uVar31, (char)uVar33, *(undefined4 *)(puVar2 + 8));
		InitPlrMsg(uVar24, (char)lVar25, (char)lVar26, (char)uParm4, (char)uParm5, (char)lParm6,
		    (char)uVar31, (char)uVar33, *(undefined4 *)(puVar2 + 8));
		buffer_init(*(undefined4 *)((int)uVar15 + -0x5c14), *puVar2);
		uVar24 = buffer_init(*(undefined4 *)((int)uVar15 + -0x5c10), *puVar2);
		*(undefined4 *)((int)uVar15 + -0x4d00) = 0;
		sync_init(uVar24, (char)lVar25, (char)lVar26, (char)uParm4, (char)uParm5, (char)lParm6,
		    (char)uVar31, (char)uVar33, *(undefined4 *)(puVar2 + 8));
		nthread_start((uint) * (byte *)(*(int *)puVar4 + 0x100f42b9), lVar25, lVar26, uParm4, uParm5,
		    (int)lParm6, uVar31, uVar33, *(undefined4 *)(puVar2 + 8));
		dthread_start();
		tmsg_start(*puVar2);
		iVar23 = (int)uVar15;
		*(undefined4 *)(iVar23 + -0x4d08) = 0;
		*(undefined4 *)(iVar23 + -0x4d04) = 0;
		**(undefined **)(iVar23 + -0x7068) = (char)*(undefined4 *)puVar4;
		uVar17 = ZEXT48(*(undefined **)(iVar23 + -0x71fc));
		**(undefined **)(iVar23 + -0x71fc) = 0;
		nthread_send_and_recv_turn(0, 0, uVar17, uParm4, uParm5, (int)lParm6, uVar31, uVar33, *(undefined4 *)(puVar2 + 8));
		SetupLocalCoords(*puVar2);
		uVar18 = 0x36;
		multi_send_pinfo(0xfffffffe, 0x36, (char)uVar17, (char)uParm4, (char)uParm5, (char)lParm6, (char)uVar31,
		    (char)uVar33, *(undefined4 *)(puVar2 + 8));
		iVar23 = *(int *)puVar4;
		puVar5[iVar23 * 0x55ec + 0x1d] = 1;
		**(undefined **)((int)uVar15 + -0x70a4) = 1;
		if (*(char *)(iVar23 + 0x100f42b9) == '\0')
			break;
		uVar19 = msg_wait_resync();
		iVar23 = (int)uVar15;
		if ((int)uVar19 != 0)
			break;
		NetClose(uVar19, uVar18, uVar17, uParm4, uParm5, (int)lParm6, uVar31, uVar33,
		    *(undefined4 *)(puVar2 + 8));
		**(undefined **)(iVar23 + -0x75b4) = 0;
	}
	*(uint *)puVar6 = (uint)*pbVar35;
	uVar19 = SetRndSeed(*(undefined4 *)puVar13, *puVar2);
	puVar37 = *(undefined4 **)((int)uVar15 + -0x75ec);
	iVar23 = 0;
	puVar36 = *(undefined4 **)((int)uVar15 + -0x71f8);
	do {
		uVar21 = GetRndSeed((char)uVar19, (char)uVar18, (char)uVar17, (char)uParm4, (char)uParm5,
		    (char)lParm6, (char)uVar31, (char)uVar33, *(undefined4 *)(puVar2 + 8));
		*puVar37 = uVar21;
		uVar19 = InitNewSeed(iVar23, *puVar2);
		uVar21 = (undefined4)lParm6;
		iVar23 = iVar23 + 1;
		*puVar36 = (int)uVar19;
		puVar37 = puVar37 + 1;
		puVar36 = puVar36 + 1;
	} while (iVar23 < 0x11);
	uVar1 = *(uint *)((int)uVar15 + -0x77d0);
	uVar17 = (ulonglong)uVar1;
	lVar25 = uVar14 - 0xf8;
	uVar18 = 0x80;
	iVar22 = SNetGetGameInfo(1, (char)uVar1, 0x80, (char)lVar25, (char)uParm5, (char)lParm6, (char)uVar31,
	    (char)uVar33, puVar2[0xb], puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
	iVar23 = *(int *)(puVar2 + 0x14);
	if (iVar22 == 0) {
		nthread_terminate_game((ulonglong) * (uint *)(iVar23 + -0x5c54), uVar17, uVar18, lVar25, uParm5, uVar21, uVar31,
		    uVar33, *(undefined4 *)(puVar2 + 8));
	}
	uVar17 = (ulonglong) * (uint *)(iVar23 + -0x77d4);
	lVar25 = uVar14 - 0xf8;
	uVar18 = 0x80;
	iVar23 = SNetGetGameInfo(2, (char)*(uint *)(iVar23 + -0x77d4), 0x80, (char)lVar25, (char)uParm5,
	    (char)uVar21, (char)uVar31, (char)uVar33, puVar2[0xb], puVar2[0xf],
	    *(undefined4 *)(puVar2 + 0x14));
	if (iVar23 == 0) {
		nthread_terminate_game((ulonglong) * (uint *)(*(int *)(puVar2 + 0x14) + -0x5c58), uVar17, uVar18, lVar25, uParm5, uVar21, uVar31, uVar33, *(undefined4 *)(puVar2 + 8));
	}
	return 1;
}

void recv_plrinfo(ulonglong param_1, int param_2, int param_3, undefined8 param_4, ulonglong param_5,
    undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined4 param_9)

{
	char *pcVar1;
	int *piVar2;
	undefined *puVar3;
	undefined4 *puVar4;
	undefined *puVar5;
	undefined **ppuVar6;
	uint *puVar7;
	int iVar8;
	ulonglong uVar9;
	undefined uVar10;
	ulonglong uVar11;
	undefined4 uVar12;
	undefined4 uVar13;
	undefined4 uVar14;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	longlong lVar15;
	undefined8 unaff_r26;
	short *psVar16;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	uint uVar17;
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
	byte *local_28[2];
	undefined4 local_20;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	puVar5 = PTR_DAT_100f1828;
	puVar3 = PTR_DAT_100f1824;
	ppuVar6 = &toc;
	local_20 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar11 = ZEXT48(PTR_DAT_100f1824);
	uVar17 = (uint)param_1;
	if ((*(uint *)PTR_DAT_100f1824 != uVar17) && ((psVar16 = (short *)(PTR_DAT_100f1f5c + uVar17 * 2), *(short *)(param_2 + 1) == *psVar16 || (*psVar16 = 0, *(short *)(param_2 + 1) == 0)))) {
		if ((param_3 == 0) && (*psVar16 == 0)) {
			ppuVar6 = &toc;
			multi_send_pinfo(uVar17, 2, 0, (char)puVar3, (char)param_5, (char)param_6, (char)param_7, (char)param_8,
			    in_stack_ffffffa8);
		}
		uVar9 = (ulonglong) * (ushort *)(param_2 + 3);
		lVar15 = ZEXT48(ppuVar6[-0x1717]) + param_1 * 0x4f2;
		memcpy((char)lVar15 + (char)*(undefined2 *)(param_2 + 1), (char)param_2 + '\x05',
		    (char)*(ushort *)(param_2 + 3), (char)uVar11, (char)param_5, (char)param_6, (char)param_7, (char)param_8, (char)in_stack_ffffffa8, in_stack_ffffffaf, local_4c);
		uVar10 = (undefined)uVar9;
		*psVar16 = *psVar16 + *(short *)(param_2 + 3);
		if (*psVar16 == 0x4f2) {
			*psVar16 = 0;
			multi_player_left_msg(uVar17, 0, uVar9, uVar11, param_5, (int)param_6, (int)param_7, (int)param_8,
			    in_stack_ffffffa8);
			puVar7 = (uint *)(*(int *)(local_4c + -0x5c60) + (int)(param_1 * 0x4f2));
			puVar3 = puVar5 + uVar17 * 0x55ec;
			*(undefined4 *)(puVar3 + 0x214) = 0;
			local_28[0] = (byte *)lVar15;
			FUN_1008f81c(puVar7, local_28, uVar10, (char)uVar11, (char)param_5, (char)param_6, (char)param_7,
			    (char)param_8, in_stack_ffffffa8);
			UnPackPlayer((int)puVar7, param_1, 1, uVar11, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
			if (param_3 != 0) {
				pcVar1 = *(char **)(local_4c + -0x70a4);
				puVar3[0x1d] = 1;
				*pcVar1 = *pcVar1 + '\x01';
				if (*(char *)(local_4c + -0x4d17 + uVar17) == '\0') {
					uVar12 = *(undefined4 *)(local_4c + -0x5c68);
				} else {
					uVar12 = *(undefined4 *)(local_4c + -0x5c64);
				}
				puVar4 = (undefined4 *)(puVar5 + uVar17 * 0x55ec);
				lVar15 = (longlong) * (char *)(puVar4 + 0x6d);
				EventPlrMsg(uVar12, puVar4 + 0x4f, (int)*(char *)(puVar4 + 0x6d), (int)uVar11, (int)param_5,
				    (int)param_6, (int)param_7, (int)param_8, in_stack_ffffffa8, in_stack_ffffffaf,
				    in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4,
				    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
				uVar9 = 1;
				LoadPlrGFX(param_1);
				SyncInitPlr(param_1, uVar9, lVar15, uVar11, param_5, (int)param_6, (int)param_7, (int)param_8,
				    in_stack_ffffffa8);
				uVar14 = (undefined4)param_8;
				uVar13 = (undefined4)param_7;
				uVar12 = (undefined4)param_6;
				if ((uint) * *(byte **)(local_4c + -0x77e4) == puVar4[0xd]) {
					if ((int)puVar4[0x65] >> 6 == 0) {
						puVar4[0x1e] = 0;
						LoadPlrGFX(param_1, 0x80);
						*puVar4 = 8;
						NewPlrAnim(param_1, puVar4 + 0x102, (ulonglong)(uint)puVar4[0x112], 1,
						    (ulonglong)(uint)puVar4[0x113], uVar12, uVar13, uVar14, in_stack_ffffffa8);
						piVar2 = *(int **)(local_4c + -0x779c);
						puVar4[0x23] = puVar4[0x22] + -1;
						puVar4[0x7b] = puVar4[0x22] << 1;
						iVar8 = puVar4[0xe] * 0x70 + puVar4[0xf];
						*(byte *)(*piVar2 + iVar8) = *(byte *)(*piVar2 + iVar8) | 4;
					} else {
						StartStand(param_1, 0, lVar15, uVar11, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
					}
				}
			}
		}
	}
	return;
}
