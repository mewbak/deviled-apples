
void msg_get_next_packet(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	undefined4 uVar3;
	ulonglong uVar4;
	uint *puVar5;

	uVar4 = ZEXT48(&toc);
	uVar3 = DiabloAllocPtr(0x7d08, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
	iVar2 = (int)uVar4;
	*(undefined4 *)(iVar2 + -0x4d3c) = uVar3;
	uVar4 = uVar4 - 0x4d38;
	**(undefined4 **)(iVar2 + -0x4d3c) = 0;
	*(undefined4 *)(*(int *)(iVar2 + -0x4d3c) + 4) = 32000;
	do {
		puVar5 = (uint *)uVar4;
		uVar1 = *puVar5;
		uVar4 = (ulonglong)uVar1;
	} while (uVar1 != 0);
	*puVar5 = *(uint *)(iVar2 + -0x4d3c);
	return;
}

undefined msg_free_packets(undefined param_1, char param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined4 *puVar1;
	int iVar2;
	ulonglong uVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	undefined4 in_stack_ffffffc8;

	lVar10 = (longlong)param_8;
	lVar9 = (longlong)param_7;
	lVar8 = (longlong)param_6;
	lVar7 = (longlong)param_5;
	lVar6 = (longlong)param_4;
	lVar5 = (longlong)param_3;
	lVar4 = (longlong)param_2;
	uVar3 = ZEXT48(&toc);
	while (iVar2 = (int)uVar3, *(int *)(iVar2 + -0x4d38) != 0) {
		puVar1 = *(undefined4 **)(iVar2 + -0x4d38);
		*(undefined4 *)(iVar2 + -0x4d3c) = *puVar1;
		*(undefined4 *)(iVar2 + -0x4d38) = 0;
		param_1 = mem_free_dbg(ZEXT48(puVar1), (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7,
		    (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffc8);
		*(undefined4 *)((int)uVar3 + -0x4d38) = *(undefined4 *)((int)uVar3 + -0x4d3c);
	}
	return param_1;
}

void msg_pre_packet(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	undefined4 *puVar1;
	byte *pbVar2;
	uint *puVar3;
	int iVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	int iVar8;
	undefined4 *puVar9;
	ulonglong uVar10;
	undefined4 in_stack_ffffffb8;

	lVar7 = (longlong)param_8;
	lVar6 = (longlong)param_7;
	lVar5 = (longlong)param_6;
	uVar10 = 0xffffffffffffffff;
	puVar1 = _DAT_100f4298;
	while (puVar1 != (undefined4 *)0x0) {
		puVar9 = puVar1 + 2;
		iVar8 = 32000;
		while (iVar8 != puVar1[1]) {
			if (*(char *)puVar9 == '^') {
				uVar10 = (ulonglong) * (byte *)((int)puVar9 + 1);
				iVar8 = iVar8 + -2;
				puVar9 = (undefined4 *)((int)puVar9 + 2);
			} else {
				if (*(char *)puVar9 == '_') {
					iVar8 = iVar8 + -6;
					*(uint *)((int)puVar9 + 2) = (uint) * (byte *)((int)puVar9 + 5) << 0x18 | (uint) * (byte *)(puVar9 + 1) << 0x10 | (uint) * (byte *)((int)puVar9 + 3) << 8 | (uint) * (byte *)((int)puVar9 + 2);
					pbVar2 = (byte *)((int)puVar9 + 1);
					puVar3 = (uint *)((int)puVar9 + 2);
					puVar9 = (undefined4 *)((int)puVar9 + 6);
					FUN_1007ffb0((ulonglong)*pbVar2, (ulonglong)*puVar3, param_3, param_4, param_5, (int)lVar5,
					    (int)lVar6, (int)lVar7, in_stack_ffffffb8);
				} else {
					iVar4 = ParseCmd(uVar10, puVar9);
					puVar9 = (undefined4 *)((int)puVar9 + iVar4);
					iVar8 = iVar8 - iVar4;
				}
			}
		}
		puVar1 = (undefined4 *)*puVar1;
	}
	return;
}

void msg_send_packet(undefined8 param_1, undefined8 param_2, uint param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	char cVar1;
	undefined **ppuVar2;
	undefined uVar3;
	undefined uVar4;
	undefined4 param_9_00;
	undefined uVar5;
	undefined in_stack_ffffffbf;
	int local_3c;

	ppuVar2 = &toc;
	uVar3 = (undefined)param_2;
	uVar4 = (char)param_3;
	if ((int)param_1 != _DAT_100f4290) {
		uVar3 = (undefined)(ZEXT48(register0x0000000c) - 0x18);
		uVar4 = 2;
		ppuVar2 = &toc;
		_DAT_100f4290 = (int)param_1;
		msg_send_packet(param_1, ZEXT48(register0x0000000c) - 0x18, 2, param_4, param_5, param_6, param_7, param_8, param_9_00);
	}
	uVar5 = (undefined)param_9_00;
	if (*(uint *)(ppuVar2[-0x134f] + 4) < param_3) {
		msg_get_next_packet((char)ppuVar2[-0x134f], uVar3, uVar4, param_4, param_5, param_6, param_7, param_8,
		    param_9_00);
	}
	cVar1 = (char)ppuVar2[-0x134f];
	memcpy((cVar1 + '\b') - (char)*(undefined4 *)(ppuVar2[-0x134f] + 4), (undefined)param_2,
	    (char)param_3, cVar1, param_5, param_6, param_7, param_8, uVar5, in_stack_ffffffbf, local_3c);
	*(int *)(*(int *)(local_3c + -0x4d3c) + 4) = *(int *)(*(int *)(local_3c + -0x4d3c) + 4) - param_3;
	return;
}

void msg_send_drop_pkt(undefined8 param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	msg_send_packet(param_1, ZEXT48(register0x0000000c) - 8, 6, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	return;
}

undefined8
msg_wait_resync(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined4 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	undefined *puVar1;
	undefined **ppuVar2;
	undefined4 uVar4;
	undefined8 uVar3;
	undefined uVar5;
	uint uVar6;
	undefined4 uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined4 uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined uVar14;
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

	puVar1 = _DAT_100f1d14;
	ppuVar2 = &toc;
	msg_get_next_packet(param_1, param_2, param_3, param_4, param_5, (char)uParm6, (char)uParm7, (char)uParm8,
	    in_stack_ffffffc8);
	*(undefined *)(ppuVar2 + -0x134a) = 0x4c;
	*(undefined *)((int)ppuVar2 + -0x4d2f) = 0;
	*puVar1 = 1;
	ppuVar2[-0x1350] = (undefined *)0xffffffff;
	uVar4 = GetTickCount(1, param_2, param_3, param_4, param_5, (char)uParm6, (char)uParm7, (char)uParm8,
	    (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
	*(undefined4 *)(local_2c + -0x4d34) = uVar4;
	uVar7 = 1;
	uVar10 = 0x14;
	uVar6 = *(uint *)(local_2c + -0x5c6c);
	uVar4 = *(undefined4 *)(local_2c + -0x5c70);
	uVar3 = FUN_1000bc90((ulonglong) * *(uint **)(local_2c + -0x780c), (ulonglong)uVar6, 1, uVar4, 0x14,
	    (char)uParm6, (char)uParm7, (char)uParm8, in_stack_ffffffc8);
	uVar14 = (undefined)uParm8;
	uVar13 = (undefined)uParm7;
	uVar12 = (undefined)uParm6;
	uVar11 = (undefined)uVar10;
	uVar9 = (undefined)uVar4;
	uVar8 = (undefined)uVar7;
	uVar6._3_1_ = (undefined)uVar6;
	*puVar1 = 0;
	if ((int)uVar3 == 0) {
		msg_free_packets((char)uVar3, (undefined)uVar6, uVar8, uVar9, uVar11, uVar12, uVar13, uVar14,
		    in_stack_ffffffc8);
		uVar3 = 0;
	} else {
		if (**(char **)(local_2c + -0x7064) == '\0') {
			if (*(char *)(local_2c + -0x4d2f) == '\x15') {
				uVar3 = 1;
			} else {
				uVar5 = DrawDlg(*(undefined4 *)(local_2c + -0x5c78), uVar6, uVar7, uVar4, uVar10, uParm6,
				    uParm7, uParm8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffd8,
				    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
				msg_free_packets(uVar5, (undefined)uVar6, uVar8, uVar9, uVar11, uVar12, uVar13, uVar14,
				    in_stack_ffffffc8);
				uVar3 = 0;
			}
		} else {
			uVar5 = DrawDlg(*(undefined4 *)(local_2c + -0x5c74), uVar6, uVar7, uVar4, uVar10, uParm6,
			    uParm7, uParm8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffd8,
			    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8,
			    in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
			msg_free_packets(uVar5, (undefined)uVar6, uVar8, uVar9, uVar11, uVar12, uVar13, uVar14, in_stack_ffffffc8);
			uVar3 = 0;
		}
	}
	return uVar3;
}

void msg_process_net_packets(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	ulonglong uVar2;
	undefined uVar3;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined4 in_stack_ffffffc8;

	puVar1 = _DAT_100f1d14;
	uVar7 = (undefined)param_5;
	uVar6 = (undefined)param_4;
	uVar5 = (undefined)param_3;
	uVar4 = (undefined)param_2;
	uVar10 = (undefined)param_8;
	uVar9 = (undefined)param_7;
	uVar8 = (undefined)param_6;
	uVar2 = ZEXT48(PTR_DAT_100f17e0);
	if (*PTR_DAT_100f17e0 != '\x01') {
		*_DAT_100f1d14 = 2;
		uVar3 = msg_pre_packet(uVar2, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
		*puVar1 = 0;
		msg_free_packets(uVar3, uVar4, uVar5, uVar6, uVar7, uVar8, uVar9, uVar10, in_stack_ffffffc8);
	}
	return;
}

undefined *
DeltaExportItem(undefined *param_1, char *param_2, undefined param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	longlong lVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	undefined *puVar7;
	longlong lVar6;
	longlong lVar8;
	int iVar9;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	lVar5 = (longlong)param_8;
	lVar4 = (longlong)param_7;
	lVar3 = (longlong)param_6;
	lVar2 = (longlong)param_5;
	lVar1 = (longlong)param_4;
	lVar8 = (longlong)(int)param_2;
	lVar6 = (longlong)(int)param_1;
	iVar9 = 0;
	do {
		puVar7 = (undefined *)lVar6;
		if (*(char *)lVar8 == -1) {
			*puVar7 = 0xff;
			lVar6 = lVar6 + 1;
		} else {
			memcpy((char)lVar6, (char)lVar8, 0x16, (char)lVar1, (char)lVar2, (char)lVar3, (char)lVar4,
			    (char)lVar5, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
			*(ushort *)(puVar7 + 3) = CONCAT11(puVar7[4], puVar7[3]);
			*(ushort *)(puVar7 + 5) = CONCAT11(puVar7[6], puVar7[5]);
			*(uint *)(puVar7 + 7) = (uint)(byte)puVar7[10] << 0x18 | (uint)(byte)puVar7[9] << 0x10 | (uint)(byte)puVar7[8] << 8 | (uint)(byte)puVar7[7];
			*(ushort *)(puVar7 + 0x10) = CONCAT11(puVar7[0x11], puVar7[0x10]);
			*(uint *)(puVar7 + 0x12) = (uint)(byte)puVar7[0x15] << 0x18 | (uint)(byte)puVar7[0x14] << 0x10 | (uint)(byte)puVar7[0x13] << 8 | (uint)(byte)puVar7[0x12];
			lVar6 = lVar6 + 0x16;
		}
		iVar9 = iVar9 + 1;
		lVar8 = lVar8 + 0x16;
	} while (iVar9 < 0x7f);
	return (undefined *)lVar6;
}

char *DeltaImportItem(char *param_1, int param_2, undefined param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	int iVar9;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	lVar6 = (longlong)param_8;
	lVar5 = (longlong)param_7;
	lVar4 = (longlong)param_6;
	lVar3 = (longlong)param_5;
	lVar2 = (longlong)param_4;
	lVar8 = (longlong)param_2;
	lVar7 = (longlong)(int)param_1;
	iVar9 = 0;
	do {
		if (*(char *)lVar7 == -1) {
			memset((char)lVar8, 0x16, 0xff, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6,
			    in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
			lVar7 = lVar7 + 1;
		} else {
			memcpy((char)lVar8, (char)lVar7, 0x16, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5,
			    (char)lVar6, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
			iVar1 = (int)lVar8;
			*(undefined2 *)(iVar1 + 3) = CONCAT11(*(undefined *)(iVar1 + 4), *(undefined *)(iVar1 + 3));
			*(undefined2 *)(iVar1 + 5) = CONCAT11(*(undefined *)(iVar1 + 6), *(undefined *)(iVar1 + 5));
			*(uint *)(iVar1 + 7) = (uint) * (byte *)(iVar1 + 10) << 0x18 | (uint) * (byte *)(iVar1 + 9) << 0x10 | (uint) * (byte *)(iVar1 + 8) << 8 | (uint) * (byte *)(iVar1 + 7);
			*(undefined2 *)(iVar1 + 0x10) = CONCAT11(*(undefined *)(iVar1 + 0x11), *(undefined *)(iVar1 + 0x10));
			lVar7 = lVar7 + 0x16;
			*(uint *)(iVar1 + 0x12) = (uint) * (byte *)(iVar1 + 0x15) << 0x18 | (uint) * (byte *)(iVar1 + 0x14) << 0x10 | (uint) * (byte *)(iVar1 + 0x13) << 8 | (uint) * (byte *)(iVar1 + 0x12);
		}
		iVar9 = iVar9 + 1;
		lVar8 = lVar8 + 0x16;
	} while (iVar9 < 0x7f);
	return (char *)lVar7;
}

longlong DeltaExportObject(longlong param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	memcpy((char)param_1, param_2, 0x7f, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
	    in_stack_ffffffcf, local_2c);
	return param_1 + 0x7f;
}

longlong DeltaImportObject(longlong param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	memcpy(param_2, (char)param_1, 0x7f, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
	    in_stack_ffffffcf, local_2c);
	return param_1 + 0x7f;
}

undefined *
DeltaExportMonster(undefined *param_1, char *param_2, undefined param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	longlong lVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	undefined *puVar7;
	longlong lVar6;
	longlong lVar8;
	int iVar9;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	lVar5 = (longlong)param_8;
	lVar4 = (longlong)param_7;
	lVar3 = (longlong)param_6;
	lVar2 = (longlong)param_5;
	lVar1 = (longlong)param_4;
	lVar8 = (longlong)(int)param_2;
	lVar6 = (longlong)(int)param_1;
	iVar9 = 0;
	do {
		puVar7 = (undefined *)lVar6;
		if (*(char *)lVar8 == -1) {
			*puVar7 = 0xff;
			lVar6 = lVar6 + 1;
		} else {
			memcpy((char)lVar6, (char)lVar8, 9, (char)lVar1, (char)lVar2, (char)lVar3, (char)lVar4,
			    (char)lVar5, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
			*(uint *)(puVar7 + 5) = (uint)(byte)puVar7[8] << 0x18 | (uint)(byte)puVar7[7] << 0x10 | (uint)(byte)puVar7[6] << 8 | (uint)(byte)puVar7[5];
			lVar6 = lVar6 + 9;
		}
		iVar9 = iVar9 + 1;
		lVar8 = lVar8 + 9;
	} while (iVar9 < 200);
	return (undefined *)lVar6;
}

char *DeltaImportMonster(char *param_1, int param_2, undefined param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	int iVar9;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	lVar6 = (longlong)param_8;
	lVar5 = (longlong)param_7;
	lVar4 = (longlong)param_6;
	lVar3 = (longlong)param_5;
	lVar2 = (longlong)param_4;
	lVar8 = (longlong)param_2;
	lVar7 = (longlong)(int)param_1;
	iVar9 = 0;
	do {
		if (*(char *)lVar7 == -1) {
			memset((char)lVar8, 9, 0xff, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6,
			    in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
			lVar7 = lVar7 + 1;
		} else {
			memcpy((char)lVar8, (char)lVar7, 9, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5,
			    (char)lVar6, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
			iVar1 = (int)lVar8;
			lVar7 = lVar7 + 9;
			*(uint *)(iVar1 + 5) = (uint) * (byte *)(iVar1 + 8) << 0x18 | (uint) * (byte *)(iVar1 + 7) << 0x10 | (uint) * (byte *)(iVar1 + 6) << 8 | (uint) * (byte *)(iVar1 + 5);
		}
		iVar9 = iVar9 + 1;
		lVar8 = lVar8 + 9;
	} while (iVar9 < 200);
	return (char *)lVar7;
}

undefined *
DeltaExportJunk(undefined *param_1, undefined param_2, undefined param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	undefined **ppuVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	int iVar9;
	ulonglong uVar10;
	ulonglong uVar11;
	undefined *puVar12;
	undefined *puVar13;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined **local_3c;

	lVar7 = (longlong)param_8;
	lVar6 = (longlong)param_7;
	lVar5 = (longlong)param_6;
	lVar4 = (longlong)param_5;
	lVar3 = (longlong)param_4;
	lVar8 = (longlong)(int)param_1;
	ppuVar2 = &toc;
	uVar10 = ZEXT48(PTR_DAT_100f3354);
	iVar9 = 0;
	uVar11 = uVar10;
	do {
		if (*(char *)uVar11 == -1) {
			*(undefined *)lVar8 = 0xff;
			lVar8 = lVar8 + 1;
		} else {
			ppuVar2 = local_3c;
			memcpy((char)lVar8, (char)uVar11, 5, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6,
			    (char)lVar7, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
			lVar8 = lVar8 + 5;
			local_3c = ppuVar2;
		}
		iVar9 = iVar9 + 1;
		uVar11 = uVar11 + 5;
	} while (iVar9 < 4);
	puVar12 = ppuVar2[-0x1c1b];
	iVar9 = 0;
	puVar13 = ppuVar2[-0x1d81];
	do {
		if ((*(uint *)(puVar12 + 8) & 1) != 0) {
			iVar1 = (int)uVar10;
			*(undefined *)(iVar1 + 0x15) = (char)*(undefined4 *)(puVar13 + 0x14);
			*(undefined *)(iVar1 + 0x14) = puVar13[2];
			*(undefined *)(iVar1 + 0x16) = puVar13[0xf];
			memcpy((char)lVar8, (char)uVar10 + '\x14', 3, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
			lVar8 = lVar8 + 3;
			uVar10 = uVar10 + 3;
		}
		iVar9 = iVar9 + 1;
		puVar13 = puVar13 + 0x18;
		puVar12 = puVar12 + 0x14;
	} while (iVar9 < 0x10);
	return (undefined *)lVar8;
}

void DeltaImportJunk(char *param_1, undefined param_2, undefined param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	int iVar2;
	ulonglong uVar3;
	ulonglong uVar4;
	ulonglong uVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	int iVar9;
	byte *pbVar11;
	ulonglong uVar10;
	int iVar12;
	ulonglong uVar13;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	int local_3c;

	lVar7 = (longlong)param_8;
	lVar6 = (longlong)param_7;
	uVar5 = SEXT18(param_6);
	uVar4 = SEXT18(param_5);
	uVar3 = SEXT18(param_4);
	lVar8 = (longlong)(int)param_1;
	iVar12 = 0;
	uVar13 = ZEXT48(PTR_DAT_100f3354);
	uVar10 = uVar13;
	do {
		iVar2 = local_3c;
		if (*(char *)lVar8 == -1) {
			memset((char)uVar10, 5, 0xff, (char)uVar3, (char)uVar4, (char)uVar5, (char)lVar6, (char)lVar7,
			    in_stack_ffffffbb, in_stack_ffffffbf, iVar2);
			lVar8 = lVar8 + 1;
			uVar3 = 0;
			uVar4 = 0;
			uVar5 = 0;
			local_3c = iVar2;
			FUN_1009b2c0(iVar12, 0, 0, 0, 0, 0);
		} else {
			memcpy((char)uVar10, (char)lVar8, 5, (char)uVar3, (char)uVar4, (char)uVar5, (char)lVar6,
			    (char)lVar7, in_stack_ffffffbb, in_stack_ffffffbf, iVar2);
			pbVar11 = (byte *)uVar10;
			uVar3 = (ulonglong)pbVar11[1];
			uVar4 = (ulonglong)pbVar11[2];
			uVar5 = (ulonglong)pbVar11[3];
			lVar8 = lVar8 + 5;
			local_3c = iVar2;
			FUN_1009b2c0(iVar12, 1, (uint)*pbVar11, (uint)pbVar11[1], (uint)pbVar11[2], (uint)pbVar11[3]);
		}
		iVar12 = iVar12 + 1;
		uVar10 = uVar10 + 5;
	} while (iVar12 < 4);
	iVar12 = *(int *)(iVar2 + -0x706c);
	iVar2 = *(int *)(iVar2 + -0x7604);
	iVar9 = 0;
	do {
		if ((*(uint *)(iVar12 + 8) & 1) != 0) {
			memcpy((char)uVar13 + '\x14', (char)lVar8, 3, (char)uVar3, (char)uVar4, (char)uVar5, (char)lVar6, (char)lVar7, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
			iVar1 = (int)uVar13;
			lVar8 = lVar8 + 3;
			*(uint *)(iVar2 + 0x14) = (uint) * (byte *)(iVar1 + 0x15);
			*(undefined *)(iVar2 + 2) = *(undefined *)(iVar1 + 0x14);
			uVar13 = uVar13 + 3;
			*(undefined *)(iVar2 + 0xf) = *(undefined *)(iVar1 + 0x16);
		}
		iVar9 = iVar9 + 1;
		iVar2 = iVar2 + 0x18;
		iVar12 = iVar12 + 0x14;
	} while (iVar9 < 0x10);
	return;
}

longlong msg_comp_level(longlong param_1, longlong param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	ulonglong uVar2;
	undefined4 in_stack_ffffffc8;

	uVar2 = (param_2 - param_1) - 1;
	uVar1 = PkwareCompress((char *)param_1 + 1, uVar2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	*(char *)param_1 = '\x01' - (uVar1 == uVar2);
	return uVar1 + 1;
}

void DeltaExportData(undefined4 param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined **ppuVar1;
	longlong lVar2;
	undefined *puVar5;
	longlong lVar3;
	longlong lVar4;
	ulonglong uVar6;
	char cVar7;
	undefined uVar8;
	undefined uVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	undefined4 in_stack_ffffffa8;

	lVar13 = (longlong)param_8;
	lVar12 = (longlong)param_7;
	lVar11 = (longlong)param_6;
	lVar10 = (longlong)param_5;
	lVar4 = (longlong)param_4;
	lVar3 = (longlong)param_3;
	ppuVar1 = &toc;
	if (DAT_100f42a0 != '\0') {
		lVar2 = DiabloAllocPtr(0x1272, param_2);
		lVar2._7_1_ = (undefined)lVar2;
		lVar14 = 0;
		uVar6 = ZEXT48(ppuVar1[-0x1720]);
		do {
			uVar8 = (undefined)lVar3;
			uVar9 = (undefined)lVar4;
			puVar5 = DeltaExportItem((undefined *)((int)lVar2 + 1), (char *)uVar6, uVar8, uVar9, (char)lVar10,
			    (char)lVar11, (char)lVar12, (char)lVar13, in_stack_ffffffa8);
			lVar3 = DeltaExportObject((longlong)(int)puVar5, (char)uVar6 + -0x16, uVar8, uVar9, (char)lVar10,
			    (char)lVar11, (char)lVar12, (char)lVar13, in_stack_ffffffa8);
			puVar5 = DeltaExportMonster((undefined *)lVar3, (char *)uVar6 + 0xb69, uVar8, uVar9, (char)lVar10,
			    (char)lVar11, (char)lVar12, (char)lVar13, in_stack_ffffffa8);
			lVar4 = msg_comp_level(lVar2, (longlong)(int)puVar5, uVar8, uVar9, (char)lVar10, (char)lVar11,
			    (char)lVar12, (char)lVar13, in_stack_ffffffa8);
			cVar7 = (char)lVar14 + ':';
			lVar3 = lVar2;
			dthread_send_delta(param_1, cVar7, lVar2, lVar4, (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13,
			    in_stack_ffffffa8);
			param_8 = (char)lVar13;
			param_7 = (char)lVar12;
			param_6 = (char)lVar11;
			param_5 = (char)lVar10;
			uVar9 = (undefined)lVar4;
			uVar8 = (undefined)lVar3;
			lVar14 = lVar14 + 1;
			uVar6 = uVar6 + 0x1271;
		} while ((int)lVar14 < 0x11);
		puVar5 = DeltaExportJunk((undefined *)((int)lVar2 + 1), cVar7, uVar8, uVar9, param_5, param_6, param_7,
		    param_8, in_stack_ffffffa8);
		lVar3 = msg_comp_level(lVar2, (longlong)(int)puVar5, uVar8, uVar9, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
		uVar8 = (undefined)lVar3;
		uVar9 = 0x4b;
		dthread_send_delta(param_1, 0x4b, lVar2, lVar3, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
		mem_free_dbg(lVar2, uVar9, (undefined)lVar2, uVar8, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
	}
	dthread_send_delta(param_1, 0x4c, ZEXT48(register0x0000000c) - 0x28, 1, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	return;
}

void DeltaImportData(byte param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	char *pcVar2;
	int iVar3;
	undefined uVar4;
	undefined7 uVar5;
	undefined uVar6;
	undefined7 uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	longlong lVar12;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	pcVar2 = _DAT_100f334c;
	uVar7 = (undefined7)((ulonglong)param_5 >> 8);
	uVar8 = (undefined)param_5;
	uVar5 = (undefined7)((ulonglong)param_4 >> 8);
	uVar6 = (undefined)param_4;
	ppuVar1 = &toc;
	if (*_DAT_100f334c != '\0') {
		param_3 = 0x1271;
		ppuVar1 = &toc;
		PkwareDecompress(_DAT_100f334c + 1, (int)param_2, 0x1271, uVar6, uVar8, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffc8);
	}
	uVar4 = (undefined)param_3;
	uVar9 = (undefined)param_6;
	uVar10 = (undefined)param_7;
	uVar11 = (undefined)param_8;
	if (param_1 == 0x4b) {
		DeltaImportJunk(pcVar2 + 1, (char)param_2, uVar4, uVar6, uVar8, uVar9, uVar10, uVar11, in_stack_ffffffc8);
	} else {
		if ((param_1 < 0x3a) || (0x4a < param_1)) {
			app_fatal((int)ppuVar1[-0x1722], param_2, param_3, CONCAT71(uVar5, uVar6), CONCAT71(uVar7, uVar8), param_6, param_7, param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffd8,
			    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8,
			    in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
		} else {
			lVar12 = ZEXT48(ppuVar1[-0x1720]) + (ulonglong)((int)(char)param_1 - 0x3aU & 0xff) * 0x1271;
			iVar3 = (int)lVar12;
			pcVar2 = DeltaImportItem(pcVar2 + 1, iVar3, uVar4, uVar6, uVar8, uVar9, uVar10, uVar11, in_stack_ffffffc8);
			lVar12 = DeltaImportObject((longlong)(int)pcVar2, (char)lVar12 + -0x16, uVar4, uVar6, uVar8, uVar9,
			    uVar10, uVar11, in_stack_ffffffc8);
			DeltaImportMonster((char *)lVar12, iVar3 + 0xb69, uVar4, uVar6, uVar8, uVar9, uVar10, uVar11,
			    in_stack_ffffffc8);
		}
	}
	*(undefined *)(ppuVar1 + -0x134c) = 1;
	*(char *)((int)ppuVar1 + -0x4d2f) = *(char *)((int)ppuVar1 + -0x4d2f) + '\x01';
	return;
}

longlong On_DLEVEL(undefined8 param_1, byte *param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	ulonglong uVar2;
	undefined uVar3;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined4 in_stack_ffffffc8;
	undefined uVar8;
	undefined in_stack_ffffffcf;
	int local_2c;

	uVar8 = (undefined)in_stack_ffffffc8;
	uVar4 = (undefined)param_5;
	uVar3 = (undefined)param_4;
	uVar7 = (undefined)param_8;
	uVar6 = (undefined)param_7;
	uVar5 = (undefined)param_6;
	ppuVar1 = &toc;
	uVar2 = ZEXT48(_DAT_100f1f68);
	if ((uint)*_DAT_100f1f68 != (uint)param_1) {
		if ((*param_2 != 0x4c) && ((*param_2 != 0x3a || (*(short *)(param_2 + 1) != 0)))) {
			return (ulonglong) * (ushort *)(param_2 + 3) + 5;
		}
		*_DAT_100f1f68 = (byte)param_1;
		DAT_100f42a8 = 0x4c;
	}
	if (DAT_100f42a8 == 0x4c) {
		if (*param_2 == 0x4c) {
			DAT_100f42a1 = 0x14;
			return (ulonglong) * (ushort *)(param_2 + 3) + 5;
		}
		if ((*param_2 != 0x3a) || (*(short *)(param_2 + 1) != 0)) {
			return (ulonglong) * (ushort *)(param_2 + 3) + 5;
		}
		_DAT_100f42a4 = 0;
		DAT_100f42a8 = *param_2;
	} else {
		if (DAT_100f42a8 != *param_2) {
			ppuVar1 = &toc;
			DeltaImportData(DAT_100f42a8, (ulonglong)_DAT_100f42a4, uVar2, param_4, param_5, param_6, param_7,
			    param_8, in_stack_ffffffc8);
			if (*param_2 == 0x4c) {
				*(undefined *)((int)ppuVar1 + -0x4d2f) = 0x14;
				*(undefined *)(ppuVar1 + -0x134a) = 0x4c;
				return (ulonglong) * (ushort *)(param_2 + 3) + 5;
			}
			ppuVar1[-0x134b] = (undefined *)0x0;
			*(byte *)(ppuVar1 + -0x134a) = *param_2;
		}
	}
	memcpy((char)ppuVar1[-0x1721] + (char)*(undefined2 *)(param_2 + 1), (char)param_2 + '\x05',
	    (char)*(undefined2 *)(param_2 + 3), uVar3, uVar4, uVar5, uVar6, uVar7, uVar8,
	    in_stack_ffffffcf, local_2c);
	*(int *)(local_2c + -0x4d2c) = *(int *)(local_2c + -0x4d2c) + (uint) * (ushort *)(param_2 + 3);
	return (ulonglong) * (ushort *)(param_2 + 3) + 5;
}

void delta_init(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined uVar1;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	DAT_100f42a0 = 0;
	memset((char)PTR_DAT_100f3354, 0x20, 0xff, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	uVar1 = 0xff;
	memset((char)*(undefined4 *)(local_2c + -0x5c80), 0x81, 0xff, param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	memset((char)*(undefined4 *)(local_2c + -0x5c8c), 0x40, uVar1, param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	**(undefined4 **)(local_2c + -0x7070) = 0;
	return;
}

void delta_kill_monster(int param_1, undefined param_2, undefined param_3, uint param_4)

{
	undefined *puVar1;
	undefined *puVar2;

	puVar1 = PTR_DAT_100f187c;
	if (*PTR_DAT_100f17e0 == '\x01') {
		return;
	}
	DAT_100f42a0 = 1;
	puVar2 = (undefined *)(_DAT_100f3350 + (param_4 & 0xff) * 0x1271 + param_1 * 9 + 0xb69);
	*puVar2 = param_2;
	puVar2[1] = param_3;
	puVar2[2] = (char)*(undefined4 *)(puVar1 + param_1 * 0xe8 + 0x48);
	*(undefined4 *)(puVar2 + 5) = 0;
	return;
}

void delta_monster_hp(int param_1, int param_2, uint param_3)

{
	int iVar1;

	if (*PTR_DAT_100f17e0 == '\x01') {
		return;
	}
	DAT_100f42a0 = 1;
	iVar1 = _DAT_100f3350 + (param_3 & 0xff) * 0x1271 + param_1 * 9 + 0xb69;
	if (*(int *)(iVar1 + 5) <= param_2) {
		DAT_100f42a0 = 1;
		return;
	}
	*(int *)(iVar1 + 5) = param_2;
	return;
}

void delta_sync_monster(byte *param_1, uint param_2)

{
	byte *pbVar1;

	if (*PTR_DAT_100f17e0 == '\x01') {
		return;
	}
	DAT_100f42a0 = 1;
	pbVar1 = (byte *)(_DAT_100f3350 + (param_2 & 0xff) * 0x1271 + (uint)*param_1 * 9 + 0xb69);
	if (*(int *)(pbVar1 + 5) == 0) {
		DAT_100f42a0 = 1;
		return;
	}
	*pbVar1 = param_1[1];
	pbVar1[1] = param_1[2];
	pbVar1[4] = 0xff;
	pbVar1[3] = param_1[3];
	return;
}

void delta_sync_golem(int param_1, int param_2, uint param_3)

{
	undefined *puVar1;

	if (*PTR_DAT_100f17e0 == '\x01') {
		return;
	}
	DAT_100f42a0 = 1;
	puVar1 = (undefined *)(_DAT_100f3350 + (param_3 & 0xff) * 0x1271 + param_2 * 9 + 0xb69);
	*puVar1 = *(undefined *)(param_1 + 1);
	puVar1[1] = *(undefined *)(param_1 + 2);
	puVar1[4] = 0xff;
	puVar1[3] = *(undefined *)(param_1 + 4);
	puVar1[2] = *(undefined *)(param_1 + 3);
	*(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 5);
	return;
}

void delta_leave_sync(uint param_1, undefined param_2, undefined param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	int iVar2;
	int iVar3;
	undefined *puVar4;
	undefined *puVar5;
	ulonglong uVar6;
	undefined4 uVar8;
	ulonglong uVar7;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	undefined *puVar14;
	undefined *puVar15;
	int iVar16;
	int *piVar17;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 local_4c;

	puVar5 = PTR_DAT_100f19a4;
	puVar4 = PTR_DAT_100f187c;
	puVar14 = PTR_DAT_100f17ec;
	lVar13 = (longlong)param_8;
	lVar12 = (longlong)param_7;
	lVar11 = (longlong)param_6;
	lVar10 = (longlong)param_5;
	lVar9 = (longlong)param_4;
	uVar6 = ZEXT48(&toc);
	if (*PTR_DAT_100f17e0 != '\x01') {
		if (*PTR_DAT_100f17ec == '\0') {
			uVar8 = GetRndSeed((char)param_1, (char)PTR_DAT_100f17e0, param_3, param_4, param_5, param_6,
			    param_7, param_8, in_stack_ffffffa8);
			**(undefined4 **)((int)uVar6 + -0x75ec) = uVar8;
		}
		if (*puVar14 != '\0') {
			iVar1 = *(int *)((int)uVar6 + -0x5c80);
			piVar17 = *(int **)((int)uVar6 + -0x7628);
			iVar16 = 0;
			while (iVar3 = (int)uVar6, iVar16 < *(int *)puVar5) {
				iVar2 = *piVar17;
				if (*(int *)(puVar4 + iVar2 * 0xe8 + 0x98) != 0) {
					puVar15 = puVar4 + iVar2 * 0xe8;
					*(undefined *)(iVar3 + -0x4d30) = 1;
					puVar14 = (undefined *)(iVar1 + (param_1 & 0xff) * 0x1271 + iVar2 * 9 + 0xb69);
					*puVar14 = (char)*(undefined4 *)(puVar15 + 0x20);
					puVar14[1] = (char)*(undefined4 *)(puVar15 + 0x24);
					puVar14[2] = (char)*(undefined4 *)(puVar15 + 0x48);
					uVar7 = encode_enemy(iVar2);
					puVar14[3] = (char)uVar7;
					*(undefined4 *)(puVar14 + 5) = *(undefined4 *)(puVar15 + 0x98);
					puVar14[4] = puVar15[0xa4];
				}
				piVar17 = piVar17 + 1;
				iVar16 = iVar16 + 1;
			}
			memcpy((char)*(undefined4 *)(iVar3 + -0x5c8c) + (char)(param_1 & 0xff) * '@',
			    (char)*(undefined4 *)(iVar3 + -0x7798), 0x40, (char)lVar9, (char)lVar10, (char)lVar11,
			    (char)lVar12, (char)lVar13, (char)in_stack_ffffffa8, in_stack_ffffffaf, local_4c);
		}
	}
	return;
}

void delta_sync_object(int param_1, undefined param_2, uint param_3)

{
	if (*PTR_DAT_100f17e0 == '\x01') {
		return;
	}
	DAT_100f42a0 = 1;
	*(undefined *)(_DAT_100f3350 + (param_3 & 0xff) * 0x1271 + param_1 + 0xaea) = param_2;
	return;
}

undefined8
delta_get_item(int param_1, uint param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	byte bVar1;
	undefined **ppuVar2;
	undefined8 uVar3;
	byte *pbVar4;
	longlong lVar5;
	char *pcVar6;
	longlong lVar7;
	longlong lVar8;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	ppuVar2 = &toc;
	if (*PTR_DAT_100f17e0 == '\x01') {
		uVar3 = 1;
	} else {
		lVar5 = (ulonglong)_DAT_100f3350 + (ulonglong)(param_2 & 0xff) * 0x1271;
		lVar7 = 0x7f;
		lVar8 = lVar5;
		do {
			pbVar4 = (byte *)lVar8;
			bVar1 = *pbVar4;
			if ((((bVar1 != 0xff) && (*(short *)(pbVar4 + 3) == *(short *)(param_1 + 7))) && (*(short *)(pbVar4 + 5) == *(short *)(param_1 + 9))) && (*(int *)(pbVar4 + 7) == *(int *)(param_1 + 0xb))) {
				if (bVar1 == 1) {
					return 1;
				}
				if (bVar1 == 0) {
					DAT_100f42a0 = 1;
					*pbVar4 = 1;
					return 1;
				}
				if (bVar1 == 2) {
					DAT_100f42a0 = 1;
					*pbVar4 = 0xff;
					return 1;
				}
				ppuVar2 = &toc;
				app_fatal((int)PTR_s_delta_1_100f3340, (ulonglong)bVar1, lVar8, param_4, param_5, param_6,
				    param_7, param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffd8,
				    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8,
				    in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
				break;
			}
			lVar8 = lVar8 + 0x16;
			lVar7 = lVar7 + -1;
		} while (lVar7 != 0);
		if ((*(ushort *)(param_1 + 9) & 0x8000) == 0) {
			uVar3 = 0;
		} else {
			lVar8 = 0x7f;
			do {
				pcVar6 = (char *)lVar5;
				if (*pcVar6 == -1) {
					*(undefined *)(ppuVar2 + -0x134c) = 1;
					*pcVar6 = '\x01';
					pcVar6[1] = *(char *)(param_1 + 5);
					pcVar6[2] = *(char *)(param_1 + 6);
					*(undefined2 *)(pcVar6 + 3) = *(undefined2 *)(param_1 + 7);
					*(undefined2 *)(pcVar6 + 5) = *(undefined2 *)(param_1 + 9);
					*(undefined4 *)(pcVar6 + 7) = *(undefined4 *)(param_1 + 0xb);
					pcVar6[0xb] = *(char *)(param_1 + 0xf);
					pcVar6[0xc] = *(char *)(param_1 + 0x10);
					pcVar6[0xd] = *(char *)(param_1 + 0x11);
					pcVar6[0xe] = *(char *)(param_1 + 0x12);
					pcVar6[0xf] = *(char *)(param_1 + 0x13);
					*(undefined2 *)(pcVar6 + 0x10) = *(undefined2 *)(param_1 + 0x14);
					*(undefined4 *)(pcVar6 + 0x12) = *(undefined4 *)(param_1 + 0x16);
					return 1;
				}
				lVar5 = lVar5 + 0x16;
				lVar8 = lVar8 + -1;
			} while (lVar8 != 0);
			uVar3 = 1;
		}
	}
	return uVar3;
}

void delta_put_item(int param_1, byte param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
    int param_6, int param_7, int param_8, undefined4 param_9)

{
	byte bVar1;
	undefined *puVar2;
	ulonglong uVar3;
	undefined8 uVar4;
	ulonglong uVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	int iVar9;
	byte *pbVar11;
	longlong lVar10;
	longlong lVar12;
	char *pcVar13;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 local_4c;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar2 = PTR_s_Trying_to_drop_a_floor_item__100f333c;
	lVar8 = (longlong)param_8;
	lVar7 = (longlong)param_7;
	lVar6 = (longlong)param_6;
	uVar3 = ZEXT48(&toc);
	uVar5 = ZEXT48(PTR_DAT_100f17e0);
	if (*PTR_DAT_100f17e0 != '\x01') {
		lVar12 = (ulonglong)_DAT_100f3350 + (ulonglong)((uint)param_4 & 0xff) * 0x1271;
		iVar9 = 0;
		uVar4 = param_3;
		lVar10 = lVar12;
		do {
			pbVar11 = (byte *)lVar10;
			bVar1 = *pbVar11;
			if ((((bVar1 != 1) && (bVar1 != 0xff)) && (*(short *)(pbVar11 + 3) == *(short *)(param_1 + 3))) && ((*(short *)(pbVar11 + 5) == *(short *)(param_1 + 5) && (*(int *)(pbVar11 + 7) == *(int *)(param_1 + 7))))) {
				if (bVar1 == 2) {
					return;
				}
				app_fatal((int)puVar2, (ulonglong)bVar1, uVar4, param_4, uVar5, (int)lVar6, (int)lVar7,
				    (int)lVar8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffb8,
				    in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8,
				    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
			}
			iVar9 = iVar9 + 1;
			lVar10 = lVar10 + 0x16;
		} while (iVar9 < 0x7f);
		lVar10 = 0x7f;
		do {
			pcVar13 = (char *)lVar12;
			if (*pcVar13 == -1) {
				*(undefined *)((int)uVar3 + -0x4d30) = 1;
				memcpy((char)lVar12, (char)param_1, 0x16, (char)param_4, (char)uVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)in_stack_ffffffa8, in_stack_ffffffaf, local_4c);
				*pcVar13 = '\x02';
				pcVar13[1] = param_2;
				pcVar13[2] = (char)param_3;
				return;
			}
			lVar12 = lVar12 + 0x16;
			lVar10 = lVar10 + -1;
		} while (lVar10 != 0);
	}
	return;
}

undefined8 delta_portal_inited(int param_1)

{
	if (PTR_DAT_100f3354[param_1 * 5] == -1) {
		return 1;
	}
	return 0;
}

undefined8 delta_quest_inited(int param_1)

{
	if (PTR_DAT_100f3354[param_1 * 3 + 0x14] == -1) {
		return 0;
	}
	return 1;
}

void DeltaAddItem(int param_1)

{
	char cVar1;
	undefined *puVar2;
	longlong lVar3;
	int *piVar4;
	char *pcVar6;
	longlong lVar5;
	longlong lVar7;

	if (*PTR_DAT_100f17e0 == '\x01') {
		return;
	}
	piVar4 = (int *)(PTR_DAT_100f1940 + param_1 * 0x170);
	lVar3 = (ulonglong)_DAT_100f3350 + (ulonglong)(byte)*PTR_DAT_100f17ec * 0x1271;
	lVar7 = 0x7f;
	lVar5 = lVar3;
	do {
		pcVar6 = (char *)lVar5;
		cVar1 = *pcVar6;
		if ((((cVar1 != -1) && ((uint) * (ushort *)(pcVar6 + 3) == piVar4[0x5a])) && (*(short *)(pcVar6 + 5) == *(short *)(piVar4 + 1))) && (*(int *)(pcVar6 + 7) == *piVar4)) {
			if (cVar1 == '\x01') {
				return;
			}
			if (cVar1 == '\0') {
				return;
			}
		}
		lVar5 = lVar5 + 0x16;
		lVar7 = lVar7 + -1;
		if (lVar7 == 0) {
			lVar5 = 0x7f;
			do {
				pcVar6 = (char *)lVar3;
				if (*pcVar6 == -1) {
					puVar2 = PTR_DAT_100f1940 + param_1 * 0x170;
					DAT_100f42a0 = 1;
					*pcVar6 = '\0';
					pcVar6[1] = (char)*(undefined4 *)(puVar2 + 0xc);
					pcVar6[2] = (char)*(undefined4 *)(puVar2 + 0x10);
					*(short *)(pcVar6 + 3) = (short)*(undefined4 *)(puVar2 + 0x168);
					*(undefined2 *)(pcVar6 + 5) = *(undefined2 *)(puVar2 + 4);
					*(int *)(pcVar6 + 7) = *piVar4;
					pcVar6[0xb] = (char)*(undefined4 *)(puVar2 + 0x38);
					pcVar6[0xc] = (char)*(undefined4 *)(puVar2 + 0xec);
					pcVar6[0xd] = (char)*(undefined4 *)(puVar2 + 0xf0);
					pcVar6[0xe] = (char)*(undefined4 *)(puVar2 + 0xe4);
					pcVar6[0xf] = (char)*(undefined4 *)(puVar2 + 0xe8);
					*(short *)(pcVar6 + 0x10) = (short)*(undefined4 *)(puVar2 + 0xc4);
					return;
				}
				lVar3 = lVar3 + 0x16;
				lVar5 = lVar5 + -1;
			} while (lVar5 != 0);
			return;
		}
	} while (true);
}

void DeltaSaveLevel(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	byte bVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	ulonglong uVar5;
	longlong lVar6;
	undefined4 in_stack_ffffffc8;

	puVar4 = PTR_DAT_100f1828;
	puVar3 = PTR_DAT_100f1824;
	uVar5 = ZEXT48(PTR_DAT_100f1828);
	if (*PTR_DAT_100f17e0 != '\x01') {
		iVar2 = *(int *)PTR_DAT_100f1824;
		if (iVar2 != 0) {
			*(undefined4 *)(PTR_DAT_100f1828 + 0x214) = 0;
		}
		if (iVar2 != 1) {
			*(undefined4 *)(puVar4 + 0x5800) = 0;
		}
		if (iVar2 != 2) {
			*(undefined4 *)(puVar4 + 0xadec) = 0;
		}
		if (iVar2 != 3) {
			*(undefined4 *)(puVar4 + 0x103d8) = 0;
		}
		bVar1 = *PTR_DAT_100f17ec;
		lVar6 = uVar5 + (ulonglong) * (uint *)puVar3 * 0x55ec + (ulonglong)bVar1;
		*(undefined *)((int)lVar6 + 0x1f0) = 1;
		delta_leave_sync((uint)bVar1, (char)lVar6, 1, (char)iVar2, 3, param_6, param_7, param_8, in_stack_ffffffc8);
	}
	return;
}

void DeltaLoadLevel(undefined8 param_1, undefined8 param_2, ulonglong param_3, ulonglong param_4,
    longlong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	byte bVar1;
	byte bVar2;
	uint uVar3;
	int iVar4;
	undefined *puVar5;
	bool bVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	uint *puVar11;
	uint uVar12;
	ulonglong uVar13;
	int iVar15;
	undefined8 uVar14;
	char *pcVar16;
	ulonglong uVar17;
	int *piVar18;
	ulonglong uVar19;
	ulonglong uVar20;
	undefined *puVar21;
	ulonglong uVar22;
	int iVar24;
	longlong lVar23;
	longlong lVar25;
	uint uVar26;
	longlong lVar27;
	ulonglong uVar28;
	ulonglong uVar29;
	longlong lVar30;
	undefined4 in_stack_ffffff78;
	undefined in_stack_ffffff7f;
	uint local_7c;

	uVar12 = _DAT_100f3350;
	piVar18 = _DAT_100f1dec;
	puVar11 = _DAT_100f1ddc;
	puVar10 = PTR_DAT_100f19a4;
	puVar5 = PTR_DAT_100f1954;
	puVar9 = PTR_DAT_100f1944;
	puVar8 = PTR_DAT_100f1940;
	puVar7 = PTR_DAT_100f17ec;
	uVar13 = ZEXT48(&toc);
	uVar17 = (ulonglong)_DAT_100f1df0;
	uVar20 = (ulonglong)_DAT_100f3350;
	if (*PTR_DAT_100f17e0 != '\x01') {
		*(undefined4 *)PTR_DAT_100f1f60 = 1;
		if (*puVar7 != '\0') {
			uVar22 = 0;
			lVar25 = 0;
			puVar21 = PTR_DAT_100f187c;
			while (iVar24 = (int)uVar22, iVar24 < *(int *)puVar10) {
				iVar15 = (int)lVar25;
				if (*(char *)(uVar12 + (uint)(byte)*puVar7 * 0x1271 + iVar15 + 0xb69) != -1) {
					M_ClearSquares(iVar24);
					*(uint *)(puVar21 + 0x20) = (uint) * (byte *)(uVar12 + (uint)(byte)*puVar7 * 0x1271 + iVar15 + 0xb69);
					*(uint *)(puVar21 + 0x24) = (uint) * (byte *)(uVar12 + (uint)(byte)*puVar7 * 0x1271 + iVar15 + 0xb6a);
					*(undefined4 *)(puVar21 + 0x30) = *(undefined4 *)(puVar21 + 0x20);
					*(undefined4 *)(puVar21 + 0x34) = *(undefined4 *)(puVar21 + 0x24);
					*(undefined4 *)(puVar21 + 0x28) = *(undefined4 *)(puVar21 + 0x20);
					*(undefined4 *)(puVar21 + 0x2c) = *(undefined4 *)(puVar21 + 0x24);
					iVar4 = *(int *)(uVar12 + (uint)(byte)*puVar7 * 0x1271 + iVar15 + 0xb6e);
					if (iVar4 != -1) {
						*(int *)(puVar21 + 0x98) = iVar4;
					}
					iVar4 = uVar12 + (uint)(byte)*puVar7 * 0x1271 + iVar15;
					if (*(int *)(iVar4 + 0xb6e) == 0) {
						*(uint *)(puVar21 + 0x30) = (uint) * (byte *)(iVar4 + 0xb69);
						uVar19 = (ulonglong)(byte)*puVar7 * 0x1271 + lVar25;
						*(uint *)(puVar21 + 0x34) = (uint) * (byte *)(uVar12 + (int)uVar19 + 0xb6a);
						M_ClearSquares(iVar24);
						if (puVar21[0x9c] != '\x1b') {
							if (puVar21[0xc0] == '\0') {
								uVar19 = (ulonglong) * (uint *)(puVar21 + 0x24);
								param_3 = (ulonglong) * (byte *)(*(int *)(puVar21 + 0xe0) + 0x1fd);
								param_4 = (ulonglong) * (uint *)(puVar21 + 0x48);
								AddDead(*(int *)(puVar21 + 0x20), *(uint *)(puVar21 + 0x24),
								    (uint) * (byte *)(*(int *)(puVar21 + 0xe0) + 0x1fd),
								    *(uint *)(puVar21 + 0x48));
							} else {
								uVar19 = (ulonglong) * (uint *)(puVar21 + 0x24);
								param_3 = (ulonglong)(byte)puVar21[0xc2];
								param_4 = (ulonglong) * (uint *)(puVar21 + 0x48);
								AddDead(*(int *)(puVar21 + 0x20), *(uint *)(puVar21 + 0x24),
								    (uint)(byte)puVar21[0xc2], *(uint *)(puVar21 + 0x48));
							}
						}
						*(undefined4 *)(puVar21 + 0x70) = 1;
						M_UpdateLeader(uVar22, uVar19, param_3, param_4, param_5, (int)param_6, (int)param_7,
						    (int)param_8, in_stack_ffffff78);
					} else {
						uVar19 = (ulonglong) * (byte *)(iVar4 + 0xb6c);
						decode_enemy(iVar24, (uint) * (byte *)(iVar4 + 0xb6c));
						iVar4 = *(int *)(puVar21 + 0x20);
						if (((iVar4 != 0) && (iVar4 != 1)) || (*(int *)(puVar21 + 0x24) != 0)) {
							uVar19 = uVar22 + 1;
							param_3 = (ulonglong)(uint)(*(int *)(puVar21 + 0x24) * 2);
							*(undefined2 *)(*(int *)puVar5 + iVar4 * 0xe0 + *(int *)(puVar21 + 0x24) * 2) = (short)uVar19;
						}
						if (iVar24 < 4) {
							MAI_Golum(uVar22, uVar19, param_3, param_4, param_5, (int)param_6, (int)param_7,
							    (int)param_8, in_stack_ffffff78);
							*(uint *)(puVar21 + 0xa0) = *(uint *)(puVar21 + 0xa0) | 0x10;
							*(uint *)(puVar21 + 0xa0) = *(uint *)(puVar21 + 0xa0) | 0x20;
						} else {
							M_StartStand(iVar24, *(int *)(puVar21 + 0x48), (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff78);
						}
						puVar21[0xa4] = *(undefined *)(uVar12 + (uint)(byte)*puVar7 * 0x1271 + iVar15 + 0xb6d);
					}
				}
				lVar25 = lVar25 + 9;
				puVar21 = puVar21 + 0xe8;
				uVar22 = uVar22 + 1;
			}
			memcpy((char)*(undefined4 *)((int)uVar13 + -0x7798),
			    (char)*(undefined4 *)((int)uVar13 + -0x5c8c) + *puVar7 * '@', 0x40, (char)param_4,
			    (char)param_5, (char)param_6, (char)param_7, (char)param_8, (char)in_stack_ffffff78,
			    in_stack_ffffff7f, local_7c);
			uVar13 = (ulonglong)local_7c;
		}
		iVar24 = 0;
		lVar25 = 0;
		do {
			uVar22 = uVar20 + (ulonglong)(byte)*puVar7 * 0x1271 + lVar25;
			pcVar16 = (char *)uVar22;
			if (*pcVar16 != -1) {
				if (*pcVar16 == '\x01') {
					uVar22 = (ulonglong) * (uint *)(pcVar16 + 7);
					iVar15 = FindGetItem((uint) * (ushort *)(pcVar16 + 3), *(short *)(pcVar16 + 5),
					    *(uint *)(pcVar16 + 7));
					if (iVar15 != -1) {
						uVar3 = *(uint *)puVar9;
						uVar22 = (ulonglong)uVar3;
						param_4 = (longlong)iVar15 + 1;
						pcVar16 = (char *)(uVar3 + *(int *)(puVar8 + iVar15 * 0x170 + 0xc) * 0x70 + *(int *)(puVar8 + iVar15 * 0x170 + 0x10));
						if ((int)param_4 == (int)*pcVar16) {
							*pcVar16 = '\0';
						}
						DeleteItem(iVar15, iVar24);
					}
				}
				param_8 = uVar20 + (ulonglong)(byte)*puVar7 * 0x1271 + lVar25;
				pcVar16 = (char *)param_8;
				if (*pcVar16 == '\x02') {
					iVar15 = *piVar18;
					uVar3 = *puVar11;
					uVar19 = (ulonglong)uVar3;
					*puVar11 = puVar11[0x7e - iVar15];
					*(uint *)((int)uVar17 + iVar15 * 4) = uVar3;
					if (*(ushort *)(pcVar16 + 3) == 0x17) {
						param_6 = (ulonglong)(byte)pcVar16[0xd];
						param_7 = (ulonglong)(byte)pcVar16[0xe];
						param_8 = (ulonglong)(byte)pcVar16[0xf];
						RecreateEar(uVar3, (ulonglong) * (ushort *)(pcVar16 + 5), *(undefined4 *)(pcVar16 + 7),
						    (uint)(byte)pcVar16[0xb], (uint)(byte)pcVar16[0xc], (uint)(byte)pcVar16[0xd],
						    (uint)(byte)pcVar16[0xe], (uint)(byte)pcVar16[0xf], in_stack_ffffff78,
						    in_stack_ffffff7f, (uint) * (ushort *)(pcVar16 + 0x10),
						    *(undefined4 *)(pcVar16 + 0x12));
					} else {
						RecreateItem(uVar19, (uint) * (ushort *)(pcVar16 + 3), (ulonglong) * (ushort *)(pcVar16 + 5),
						    (ulonglong) * (uint *)(pcVar16 + 7), (uint) * (ushort *)(pcVar16 + 0x10),
						    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff78);
						iVar15 = uVar12 + (uint)(byte)*puVar7 * 0x1271 + (int)lVar25;
						if (*(char *)(iVar15 + 0xb) != '\0') {
							*(undefined4 *)(puVar8 + uVar3 * 0x170 + 0x38) = 1;
						}
						puVar5 = puVar8 + uVar3 * 0x170;
						*(uint *)(puVar5 + 0xec) = (uint) * (byte *)(iVar15 + 0xc);
						*(uint *)(puVar5 + 0xf0) = (uint) * (byte *)(iVar15 + 0xd);
						*(uint *)(puVar5 + 0xe4) = (uint) * (byte *)(iVar15 + 0xe);
						*(uint *)(puVar5 + 0xe8) = (uint) * (byte *)(iVar15 + 0xf);
					}
					iVar15 = uVar12 + (uint)(byte)*puVar7 * 0x1271 + (int)lVar25;
					bVar1 = *(byte *)(iVar15 + 1);
					uVar28 = (ulonglong)bVar1;
					uVar28._4_4_ = (uint)bVar1;
					bVar2 = *(byte *)(iVar15 + 2);
					uVar22 = (ulonglong)bVar2;
					uVar26 = (uint)bVar2;
					uVar14 = CanPut((uint)bVar1, (uint)bVar2);
					if ((int)uVar14 == 0) {
						bVar6 = false;
						lVar27 = 1;
						while (true) {
							uVar26 = (uint)uVar22;
							uVar28._4_4_ = (uint)uVar28;
							iVar15 = (int)lVar27;
							if ((0x31 < iVar15) || (bVar6))
								break;
							lVar23 = -lVar27;
							while (((int)lVar23 <= iVar15 && (!bVar6))) {
								uVar29 = uVar22 + lVar23;
								lVar30 = -lVar27;
								while (((int)lVar30 <= iVar15 && (!bVar6))) {
									uVar14 = CanPut((int)(uVar28 + lVar30), (int)uVar29);
									if ((int)uVar14 != 0) {
										bVar6 = true;
										uVar22 = uVar29;
										uVar28 = uVar28 + lVar30;
									}
									lVar30 = lVar30 + 1;
								}
								lVar23 = lVar23 + 1;
							}
							lVar27 = lVar27 + 1;
						}
					}
					param_5 = uVar19 + 1;
					puVar5 = puVar8 + uVar3 * 0x170;
					*(uint *)(puVar5 + 0xc) = uVar28._4_4_;
					*(uint *)(puVar5 + 0x10) = uVar26;
					param_4 = (ulonglong) * (uint *)(puVar5 + 0xc) * 0x70;
					uVar3 = *(uint *)puVar9;
					uVar22 = (ulonglong)uVar3;
					*(undefined *)(uVar3 + (int)param_4 + *(uint *)(puVar5 + 0x10)) = (char)param_5;
					RespawnItem(uVar19, 0, (char)uVar3, (char)param_4, (char)param_5, (char)param_6, (char)param_7,
					    (char)param_8, in_stack_ffffff78);
					*piVar18 = *piVar18 + 1;
				}
			}
			iVar15 = (int)uVar13;
			iVar24 = iVar24 + 1;
			lVar25 = lVar25 + 0x16;
		} while (iVar24 < 0x7f);
		if (*puVar7 != '\0') {
			uVar17 = 0;
			do {
				bVar1 = *(byte *)(uVar12 + (uint)(byte)*puVar7 * 0x1271 + (int)uVar17 + 0xaea);
				if (bVar1 == 0x2f) {
					SyncBreakObj(0xffffffffffffffff, uVar17);
				} else {
					if ((bVar1 < 0x2f) && (0x2a < bVar1)) {
						uVar22 = uVar17;
						SyncOpObject(0xffffffffffffffff, (ulonglong)bVar1, (int)uVar17, (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff78);
					}
				}
				uVar17 = uVar17 + 1;
			} while ((int)uVar17 < 0x7f);
			piVar18 = *(int **)((int)uVar13 + -0x7190);
			iVar24 = 0;
			while (iVar15 = (int)uVar13, iVar24 < **(int **)(iVar15 + -0x7194)) {
				iVar4 = *(int *)(*(int *)(iVar15 + -0x7688) + *piVar18 * 0x78);
				if ((iVar4 == 0x35) || (iVar4 == 0x36)) {
					Obj_Trap(*piVar18, (char)*(int *)(iVar15 + -0x7688), (char)uVar22, (char)param_4,
					    (char)param_5, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff78);
				}
				piVar18 = piVar18 + 1;
				iVar24 = iVar24 + 1;
			}
		}
		**(undefined4 **)(iVar15 + -0x7070) = 0;
	}
	return;
}

void NetSendCmd(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	if (param_1 == 0) {
		NetSendLoPri(ZEXT48(register0x0000000c) - 8, 1, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
	} else {
		NetSendHiPri(ZEXT48(register0x0000000c) - 8, 1, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
	}
	return;
}

void NetSendCmdGolem(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined8 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffb8;
	undefined4 local_13;
	undefined local_f;

	local_f = (undefined)param_6;
	local_13._2_1_ = (byte)((ulonglong)param_5 >> 8);
	local_13._1_1_ = (byte)((ulonglong)param_5 >> 0x10);
	local_13._0_1_ = (byte)((ulonglong)param_5 >> 0x18);
	local_13 = (int)param_5 << 0x18 | (uint)local_13._2_1_ << 0x10 | (uint)local_13._1_1_ << 8 | (uint)local_13._0_1_;
	NetSendLoPri(ZEXT48(register0x0000000c) - 0x18, 10, param_3, param_4, param_5, param_6, &local_13,
	    param_8, in_stack_ffffffb8);
	return;
}

void NetSendCmdLoc(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	if (param_1 == 0) {
		NetSendLoPri(ZEXT48(register0x0000000c) - 8, 3, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
	} else {
		NetSendHiPri(ZEXT48(register0x0000000c) - 8, 3, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
	}
	return;
}

void NetSendCmdLocParam1(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	if (param_1 == 0) {
		NetSendLoPri(ZEXT48(register0x0000000c) - 8, 5, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
	} else {
		NetSendHiPri(ZEXT48(register0x0000000c) - 8, 5, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
	}
	return;
}

void NetSendCmdLocParam2(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	if (param_1 == 0) {
		NetSendLoPri(ZEXT48(register0x0000000c) - 8, 7, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
	} else {
		NetSendHiPri(ZEXT48(register0x0000000c) - 8, 7, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
	}
	return;
}

void NetSendCmdLocParam3(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffb8;
	undefined2 local_11;

	local_11._1_1_ = (undefined)param_7;
	local_11._0_1_ = (undefined)((uint)param_7 >> 8);
	local_11 = CONCAT11((undefined)local_11, local_11._0_1_);
	if (param_1 == 0) {
		NetSendLoPri(ZEXT48(register0x0000000c) - 0x18, 9, param_3, param_4, param_5, param_6, param_7,
		    &local_11, in_stack_ffffffb8);
	} else {
		NetSendHiPri(ZEXT48(register0x0000000c) - 0x18, 9, param_3, param_4, param_5, param_6, param_7,
		    &local_11, in_stack_ffffffb8);
	}
	return;
}

void NetSendCmdParam1(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	if (param_1 == 0) {
		NetSendLoPri(ZEXT48(register0x0000000c) - 8, 3, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
	} else {
		NetSendHiPri(ZEXT48(register0x0000000c) - 8, 3, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
	}
	return;
}

void NetSendCmdParam2(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	if (param_1 == 0) {
		NetSendLoPri(ZEXT48(register0x0000000c) - 8, 5, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
	} else {
		NetSendHiPri(ZEXT48(register0x0000000c) - 8, 5, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
	}
	return;
}

void NetSendCmdParam3(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined8 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;
	undefined2 local_3;

	local_3._1_1_ = (undefined)param_5;
	local_3._0_1_ = (undefined)((ulonglong)param_5 >> 8);
	local_3 = CONCAT11((undefined)local_3, local_3._0_1_);
	if (param_1 == 0) {
		NetSendLoPri(ZEXT48(register0x0000000c) - 8, 7, param_3, param_4, param_5, &local_3, param_7, param_8,
		    in_stack_ffffffc8);
	} else {
		NetSendHiPri(ZEXT48(register0x0000000c) - 8, 7, param_3, param_4, param_5, &local_3, param_7, param_8,
		    in_stack_ffffffc8);
	}
	return;
}

void NetSendCmdQuest(int iParm1)

{
	undefined8 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;

	if (iParm1 == 0) {
		NetSendLoPri(ZEXT48(register0x0000000c) - 8, 5, 0x58, ZEXT48(PTR_DAT_100f19cc), in_r7, in_r8, in_r9,
		    in_r10, in_stack_ffffffc8);
	} else {
		NetSendHiPri(ZEXT48(register0x0000000c) - 8, 5, 0x58, ZEXT48(PTR_DAT_100f19cc), in_r7, in_r8, in_r9,
		    in_r10, in_stack_ffffffc8);
	}
	return;
}

void NetSendCmdGItem(int iParm1)

{
	uint uVar1;
	ulonglong uVar2;
	longlong in_r7;
	undefined *puVar3;
	undefined *puVar4;
	int iVar5;
	undefined4 in_stack_ffffffa8;

	uVar2 = ZEXT48(register0x0000000c);
	iVar5 = ((uint)in_r7 & 0xff) * 0x170;
	puVar4 = PTR_DAT_100f1940 + iVar5;
	if (*(int *)(puVar4 + 0x168) == 0x17) {
		uVar1 = (int)(char)puVar4[0x52] << 8;
		in_r7 = (longlong)(char)puVar4[0x53];
		puVar3 = (undefined *)(int)(char)puVar4[0x52];
		puVar4 = (undefined *)(uint)(byte)puVar4[0x53];
	} else {
		uVar1 = *(uint *)(puVar4 + 0xe8);
		puVar3 = PTR_DAT_100f17ec;
		puVar4 = PTR_DAT_100f1940;
	}
	if (iParm1 == 0) {
		NetSendLoPri(uVar2 - 0x28, 0x1e, uVar2 - 0xe, (ulonglong)uVar1, in_r7, puVar3, puVar4, iVar5,
		    in_stack_ffffffa8);
	} else {
		NetSendHiPri(uVar2 - 0x28, 0x1e, uVar2 - 0xe, (ulonglong)uVar1, in_r7, puVar3, puVar4, iVar5,
		    in_stack_ffffffa8);
	}
	return;
}

void NetSendCmdGItem2(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int iVar1;
	byte *pbVar2;
	ulonglong uVar3;
	int iVar4;
	undefined uVar5;
	undefined8 uVar6;
	undefined uVar7;
	undefined7 uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined7 uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined uVar14;
	undefined uVar15;
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
	byte local_1e;
	byte bStack29;
	byte bStack28;
	byte bStack27;

	uVar11 = (undefined7)((ulonglong)param_5 >> 8);
	uVar12 = (undefined)param_5;
	uVar8 = (undefined7)((ulonglong)param_4 >> 8);
	uVar9 = (undefined)param_4;
	uVar3 = ZEXT48(register0x0000000c);
	uVar6 = 0x1e;
	iVar1 = (int)(uVar3 - 0x70);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	uVar10 = uVar9;
	uVar5 = uVar12;
	memcpy((char)(uVar3 - 0x70) + '8', uVar12, 0x1e, uVar9, uVar12, (char)param_6, (char)param_7,
	    (char)param_8, *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf),
	    *(undefined4 *)(iVar1 + 0x14));
	uVar15 = (undefined)param_8;
	uVar14 = (undefined)param_7;
	uVar13 = (undefined)param_6;
	uVar7 = (undefined)uVar6;
	*(undefined *)(iVar1 + 0x38) = (undefined)param_2;
	*(undefined *)(iVar1 + 0x3a) = uVar9;
	*(undefined *)(iVar1 + 0x39) = (undefined)param_3;
	*(undefined2 *)(iVar1 + 0x3f) = CONCAT11(uStack48, local_31);
	*(undefined2 *)(iVar1 + 0x41) = CONCAT11(uStack46, local_2f);
	*(uint *)(iVar1 + 0x43) = (uint)bStack42 << 0x18 | (uint)bStack43 << 0x10 | (uint)bStack44 << 8 | (uint)local_2d;
	*(undefined2 *)(iVar1 + 0x4c) = CONCAT11(uStack35, local_24);
	pbVar2 = (byte *)(uVar3 - 0x22);
	*(uint *)(iVar1 + 0x4e) = (uint)pbVar2[3] << 0x18 | (uint)pbVar2[2] << 0x10 | (uint)pbVar2[1] << 8 | (uint)*pbVar2;
	if (param_1 == 0) {
		*(undefined4 *)(iVar1 + 0x52) = 0;
		*(uint *)(iVar1 + 0x52) = (uint)bStack27 << 0x18 | (uint)bStack28 << 0x10 | (uint)bStack29 << 8 | (uint)local_1e;
		NetSendHiPri(uVar3 - 0x38, 0x1e, uVar6, CONCAT71(uVar8, uVar10), CONCAT71(uVar11, uVar12), param_6,
		    param_7, param_8, *(undefined4 *)(iVar1 + 8));
	} else {
		iVar4 = GetTickCount((char)(uVar3 - 0x22), uVar5, uVar7, uVar10, uVar12, uVar13, uVar14, uVar15,
		    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf),
		    *(undefined4 *)(iVar1 + 0x14));
		if (*(int *)(iVar1 + 0x52) == 0) {
			*(int *)(iVar1 + 0x52) = iVar4;
		} else {
			if (5000 < iVar4 - *(int *)(iVar1 + 0x52)) {
				return;
			}
		}
		*(uint *)(iVar1 + 0x52) = (uint)bStack27 << 0x18 | (uint)bStack28 << 0x10 | (uint)bStack29 << 8 | (uint)local_1e;
		multi_msg_add(uVar3 - 0x38, 0x1e, uVar7, uVar10, uVar12, uVar13, uVar14, uVar15,
		    *(undefined4 *)(iVar1 + 8));
	}
	return;
}

undefined8
NetSendCmdReq2(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	longlong lVar1;
	int iVar2;
	undefined uVar4;
	int iVar3;
	undefined uVar5;
	undefined uVar6;
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

	uVar5 = 0x1e;
	lVar1 = ZEXT48(register0x0000000c) - 0x70;
	iVar2 = (int)lVar1;
	*(BADSPACEBASE **)iVar2 = register0x0000000c;
	uVar6 = param_4;
	uVar4 = memcpy((char)lVar1 + '8', param_4, 0x1e, param_4, param_5, param_6, param_7, param_8,
	    *(undefined *)(iVar2 + 0xb), *(undefined *)(iVar2 + 0xf),
	    *(undefined4 *)(iVar2 + 0x14));
	*(undefined *)(iVar2 + 0x38) = param_1;
	*(undefined *)(iVar2 + 0x3a) = param_3;
	*(undefined *)(iVar2 + 0x39) = param_2;
	iVar3 = GetTickCount(uVar4, param_4, uVar5, uVar6, param_5, param_6, param_7, param_8,
	    *(undefined *)(iVar2 + 0xb), *(undefined *)(iVar2 + 0xf),
	    *(undefined4 *)(iVar2 + 0x14));
	if (*(int *)(iVar2 + 0x52) == 0) {
		*(int *)(iVar2 + 0x52) = iVar3;
	} else {
		if (5000 < iVar3 - *(int *)(iVar2 + 0x52)) {
			return 0;
		}
	}
	*(undefined2 *)(iVar2 + 0x3f) = CONCAT11(uStack48, local_31);
	*(undefined2 *)(iVar2 + 0x41) = CONCAT11(uStack46, local_2f);
	*(uint *)(iVar2 + 0x43) = (uint)bStack42 << 0x18 | (uint)bStack43 << 0x10 | (uint)bStack44 << 8 | (uint)local_2d;
	*(undefined2 *)(iVar2 + 0x4c) = CONCAT11(uStack35, local_24);
	*(uint *)(iVar2 + 0x4e) = (uint)bStack31 << 0x18 | (uint)bStack32 << 0x10 | (uint)bStack33 << 8 | (uint)local_22;
	*(uint *)(iVar2 + 0x52) = (uint)bStack27 << 0x18 | (uint)bStack28 << 0x10 | (uint)bStack29 << 8 | (uint)local_1e;
	multi_msg_add(ZEXT48(register0x0000000c) - 0x38, 0x1e, uVar5, uVar6, param_5, param_6, param_7, param_8,
	    *(undefined4 *)(iVar2 + 8));
	return 1;
}

void NetSendCmdExtra(undefined param_1, undefined8 uParm2, undefined8 uParm3, undefined8 uParm4,
    undefined8 uParm5, undefined4 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	longlong lVar1;
	int iVar2;
	undefined8 uVar3;
	undefined7 uVar4;
	undefined uVar5;
	undefined7 uVar6;
	undefined uVar7;
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

	uVar7 = (undefined)uParm5;
	uVar6 = (undefined7)((ulonglong)uParm5 >> 8);
	uVar5 = (undefined)uParm4;
	uVar4 = (undefined7)((ulonglong)uParm4 >> 8);
	uVar3 = 0x1e;
	lVar1 = ZEXT48(register0x0000000c) - 0x60;
	iVar2 = (int)lVar1;
	*(BADSPACEBASE **)iVar2 = register0x0000000c;
	memcpy((char)lVar1 + '8', param_1, 0x1e, uVar5, uVar7, (char)uParm6, (char)uParm7, (char)uParm8,
	    *(undefined *)(iVar2 + 0xb), *(undefined *)(iVar2 + 0xf), *(undefined4 *)(iVar2 + 0x14));
	*(undefined *)(iVar2 + 0x38) = 0x55;
	*(undefined4 *)(iVar2 + 0x52) = 0;
	*(undefined2 *)(iVar2 + 0x3f) = CONCAT11(uStack32, local_21);
	*(undefined2 *)(iVar2 + 0x41) = CONCAT11(uStack30, local_1f);
	*(uint *)(iVar2 + 0x43) = (uint)bStack26 << 0x18 | (uint)bStack27 << 0x10 | (uint)bStack28 << 8 | (uint)local_1d;
	*(undefined2 *)(iVar2 + 0x4c) = CONCAT11(uStack19, local_14);
	*(uint *)(iVar2 + 0x4e) = (uint)bStack15 << 0x18 | (uint)bStack16 << 0x10 | (uint)bStack17 << 8 | (uint)local_12;
	*(uint *)(iVar2 + 0x52) = (uint)bStack11 << 0x18 | (uint)bStack12 << 0x10 | (uint)bStack13 << 8 | (uint)local_e;
	NetSendHiPri(ZEXT48(register0x0000000c) - 0x28, 0x1e, uVar3, CONCAT71(uVar4, uVar5),
	    CONCAT71(uVar6, uVar7), uParm6, uParm7, uParm8, *(undefined4 *)(iVar2 + 8));
	return;
}

void NetSendCmdPItem(int param_1, undefined8 param_2, undefined8 param_3, longlong param_4,
    longlong param_5, uint param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	undefined4 in_stack_ffffffb8;

	puVar2 = PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec;
	if (*(int *)(puVar2 + 0x553c) == 0x17) {
		param_6 = (uint)(byte)puVar2[0x5427];
		param_5 = (longlong)(char)puVar2[0x5426];
		uVar1 = (int)(char)puVar2[0x5426] << 8;
		param_4 = (longlong)(char)puVar2[0x5427];
	} else {
		uVar1 = *(uint *)(puVar2 + 0x54bc);
	}
	if (param_1 == 0) {
		NetSendLoPri(ZEXT48(register0x0000000c) - 0x18, 0x16, (ulonglong)uVar1, param_4, param_5, param_6,
		    param_7, param_8, in_stack_ffffffb8);
	} else {
		NetSendHiPri(ZEXT48(register0x0000000c) - 0x18, 0x16, (ulonglong)uVar1, param_4, param_5, param_6,
		    param_7, param_8, in_stack_ffffffb8);
	}
	return;
}

void NetSendCmdChItem(int iParm1)

{
	uint uVar1;
	undefined *puVar2;
	ulonglong uVar3;
	undefined4 in_r10;
	undefined4 in_stack_ffffffb8;
	undefined2 local_14;
	uint local_12;
	undefined local_e;

	uVar3 = ZEXT48(register0x0000000c);
	puVar2 = PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec;
	uVar1 = *(uint *)(puVar2 + 0x53d4);
	local_e = (undefined) * (undefined4 *)(puVar2 + 0x540c);
	local_14._1_1_ = (undefined) * (undefined2 *)(puVar2 + 0x53d8);
	local_14._0_1_ = (undefined)((ushort) * (undefined2 *)(puVar2 + 0x53d8) >> 8);
	local_14 = CONCAT11((undefined)local_14, local_14._0_1_);
	local_12 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
	if (iParm1 == 0) {
		NetSendLoPri(uVar3 - 0x18, 0xb, ZEXT48(PTR_DAT_100f1824), ZEXT48(PTR_DAT_100f1828), uVar3 - 0x16,
		    &local_14, &local_12, in_r10, in_stack_ffffffb8);
	} else {
		NetSendHiPri(uVar3 - 0x18, 0xb, ZEXT48(PTR_DAT_100f1824), ZEXT48(PTR_DAT_100f1828), uVar3 - 0x16,
		    &local_14, &local_12, in_r10, in_stack_ffffffb8);
	}
	return;
}

void NetSendCmdDelItem(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	if (param_1 == 0) {
		NetSendLoPri(ZEXT48(register0x0000000c) - 8, 2, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
	} else {
		NetSendHiPri(ZEXT48(register0x0000000c) - 8, 2, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
	}
	return;
}

void NetSendCmdDItem(int iParm1, longlong lParm2)

{
	uint uVar1;
	undefined *puVar2;
	ulonglong uVar3;
	uint in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffb8;

	lParm2 = lParm2 * 0x170;
	uVar3 = ZEXT48(PTR_DAT_100f1940);
	puVar2 = PTR_DAT_100f1940 + (int)lParm2;
	if (*(int *)(puVar2 + 0x168) == 0x17) {
		in_r8 = (uint)(byte)puVar2[0x53];
		lParm2 = (longlong)(char)puVar2[0x52];
		uVar1 = (int)(char)puVar2[0x52] << 8;
		uVar3 = SEXT18((char)puVar2[0x53]);
	} else {
		uVar1 = *(uint *)(puVar2 + 0xe8);
	}
	if (iParm1 == 0) {
		NetSendLoPri(ZEXT48(register0x0000000c) - 0x18, 0x16, (ulonglong)uVar1, uVar3, lParm2, in_r8, in_r9,
		    in_r10, in_stack_ffffffb8);
	} else {
		NetSendHiPri(ZEXT48(register0x0000000c) - 0x18, 0x16, (ulonglong)uVar1, uVar3, lParm2, in_r8, in_r9,
		    in_r10, in_stack_ffffffb8);
	}
	return;
}

ulonglong i_own_level(int param_1)

{
	char cVar1;
	int iVar2;
	undefined8 uVar3;
	int iVar4;

	iVar4 = 0;
	iVar2 = *(int *)PTR_DAT_100f1824;
	cVar1 = *_DAT_100f1d14;
	if ((((((PTR_DAT_100f1828[0x1d] == '\0') || (PTR_DAT_100f1828[0x13b] != '\0')) || (param_1 != *(int *)(PTR_DAT_100f1828 + 0x34))) || ((iVar2 == 0 && (cVar1 != '\0')))) && ((((iVar4 = 1, PTR_DAT_100f1828[0x5609] == '\0' || ((PTR_DAT_100f1828[0x5727] != '\0' || (param_1 != *(int *)(PTR_DAT_100f1828 + 0x5620))))) || ((iVar2 == 1 && (cVar1 != '\0')))) && ((((iVar4 = 2, PTR_DAT_100f1828[0xabf5] == '\0' || (PTR_DAT_100f1828[0xad13] != '\0')) || (param_1 != *(int *)(PTR_DAT_100f1828 + 0xac0c))) || ((iVar2 == 2 && (cVar1 != '\0'))))))))
	    && (((iVar4 = 3, PTR_DAT_100f1828[0x101e1] == '\0' || ((PTR_DAT_100f1828[0x102ff] != '\0' || (param_1 != *(int *)(PTR_DAT_100f1828 + 0x101f8))))) || ((iVar2 == 3 && (cVar1 != '\0')))))) {
		iVar4 = 4;
	}
	uVar3 = countLeadingZeros(iVar2 - iVar4);
	return (ulonglong)((uint)uVar3 >> 5 & 0xff);
}

void NetSendCmdDamage(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	undefined4 in_stack_ffffffc8;

	uVar1 = ZEXT48(register0x0000000c);
	if (param_1 == 0) {
		NetSendLoPri(uVar1 - 8, 6, param_3, uVar1 - 6, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	} else {
		NetSendHiPri(uVar1 - 8, 6, param_3, uVar1 - 6, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	}
	return;
}

void NetSendCmdString(uint param_1, uint param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	int iVar1;
	undefined4 in_stack_ffffff68;
	undefined auStack103[103];

	iVar1 = strlen(param_2);
	strcpy((int)auStack103, param_2);
	multi_send_msg_packet(param_1, ZEXT48(register0x0000000c) - 0x68, iVar1 + 2, param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffff68);
	return;
}

longlong On_STRING2(undefined8 param_1, longlong param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	int iVar2;

	ppuVar1 = &toc;
	iVar2 = strlen((int)param_2 + 1);
	if (*ppuVar1[-0x1caf] == '\0') {
		SendPlrMsg(param_1, param_2 + 1);
	}
	return (longlong)iVar2 + 2;
}

void delta_open_portal(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f3354;
	PTR_DAT_100f3354[param_1 * 5] = param_2;
	puVar1 = puVar1 + param_1 * 5;
	puVar1[1] = param_3;
	puVar1[2] = param_4;
	puVar1[3] = param_5;
	puVar1[4] = param_6;
	DAT_100f42a0 = 1;
	return;
}

void RemovePlrPortal(char param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	memset((char)PTR_DAT_100f3354 + param_1 * '\x05', 5, 0xff, param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	*(undefined *)(local_2c + -0x4d30) = 1;
	return;
}

void check_update_plr(int param_1, undefined8 param_2, ulonglong param_3, undefined4 param_4,
    undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	if ((*PTR_DAT_100f17e0 != '\x01') && (param_1 == *(int *)PTR_DAT_100f1824)) {
		pfile_update(1, ZEXT48(PTR_DAT_100f1824), param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
	}
	return;
}

void msg_errorf(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
    undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9, undefined param_10, undefined4 param_11, undefined4 param_12,
    undefined4 param_13, undefined4 param_14, undefined4 param_15, undefined4 param_16,
    undefined4 param_17, undefined4 param_18)

{
	longlong lVar1;
	undefined uVar2;
	undefined4 in_stack_fffffec8;
	undefined in_stack_fffffecf;
	int local_12c;
	undefined auStack264[264];

	lVar1 = GetTickCount((undefined)param_1, (undefined)param_2, (undefined)param_3, (undefined)param_4,
	    (undefined)param_5, (undefined)param_6, (undefined)param_7, (undefined)param_8,
	    (char)in_stack_fffffec8, in_stack_fffffecf, local_12c);
	if (4999 < (lVar1 - (ulonglong) * (uint *)(local_12c + -0x4d44) & 0xffffffff)) {
		*(undefined4 *)(local_12c + -0x4d44) = (int)lVar1;
		uVar2 = 0x1c;
		wvsprintf((int)auStack264, (undefined)param_1, 0x1c, (undefined)param_4, (undefined)param_5,
		    (undefined)param_6, (undefined)param_7, (undefined)param_8, in_stack_fffffec8);
		ErrorPlrMsg((int)auStack264, (undefined)param_1, uVar2, (undefined)param_4, (undefined)param_5,
		    (undefined)param_6, (undefined)param_7, (undefined)param_8, in_stack_fffffec8);
	}
	return;
}

void On_SYNCDATA(longlong param_1, int param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	sync_update(param_2, param_1, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

undefined8
On_WALKXY(int param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined4 in_stack_ffffffb8;

	if ((*_DAT_100f1d14 != '\x01') && (puVar1 = PTR_DAT_100f1828 + (int)param_2 * 0x55ec, (uint)(byte)*PTR_DAT_100f17ec == *(uint *)(puVar1 + 0x34))) {
		ClrPlrPath(param_2, param_2, ZEXT48(_DAT_100f1d14), ZEXT48(PTR_DAT_100f1828), param_5, param_6,
		    param_7, param_8, in_stack_ffffffb8);
		MakePlrPath(param_2, (ulonglong) * (byte *)(param_1 + 1), (ulonglong) * (byte *)(param_1 + 2), 1,
		    param_5, param_6, param_7, param_8, in_stack_ffffffb8);
		*(undefined4 *)(puVar1 + 0x20) = 0xffffffff;
	}
	return 3;
}

undefined8
On_ADDSTR(undefined8 param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	int iVar1;
	ulonglong uVar2;
	undefined4 in_stack_ffffffc8;

	uVar2 = ZEXT48(_DAT_100f1d14);
	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 3, (char)param_1, (char)param_5, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffc8);
	} else {
		iVar1 = (int)param_1;
		*(undefined2 *)(iVar1 + 1) = CONCAT11(*(undefined *)(iVar1 + 2), *(undefined *)(iVar1 + 1));
		if (*(ushort *)(iVar1 + 1) < 0x101) {
			ModifyPlrStr(param_2, (uint) * (ushort *)(iVar1 + 1), uVar2, param_1, param_5, param_6, param_7,
			    param_8, in_stack_ffffffc8);
		}
	}
	return 3;
}

undefined8
On_ADDMAG(undefined8 param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	int iVar1;
	ulonglong uVar2;
	undefined4 in_stack_ffffffc8;

	uVar2 = ZEXT48(_DAT_100f1d14);
	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 3, (char)param_1, (char)param_5, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffc8);
	} else {
		iVar1 = (int)param_1;
		*(undefined2 *)(iVar1 + 1) = CONCAT11(*(undefined *)(iVar1 + 2), *(undefined *)(iVar1 + 1));
		if (*(ushort *)(iVar1 + 1) < 0x101) {
			ModifyPlrMag(param_2, (uint) * (ushort *)(iVar1 + 1), uVar2, param_1, param_5, param_6, param_7,
			    param_8, in_stack_ffffffc8);
		}
	}
	return 3;
}

undefined8
On_ADDDEX(ulonglong param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    ulonglong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	int iVar1;
	ulonglong uVar2;
	undefined4 in_stack_ffffffc8;

	uVar2 = ZEXT48(_DAT_100f1d14);
	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 3, (char)param_1, (char)param_5, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffc8);
	} else {
		iVar1 = (int)param_1;
		*(undefined2 *)(iVar1 + 1) = CONCAT11(*(undefined *)(iVar1 + 2), *(undefined *)(iVar1 + 1));
		if (*(ushort *)(iVar1 + 1) < 0x101) {
			ModifyPlrDex(param_2, (uint) * (ushort *)(iVar1 + 1), uVar2, param_1, param_5, param_6, param_7,
			    param_8, in_stack_ffffffc8);
		}
	}
	return 3;
}

undefined8
On_ADDVIT(undefined8 param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	int iVar1;
	ulonglong uVar2;
	undefined4 in_stack_ffffffc8;

	uVar2 = ZEXT48(_DAT_100f1d14);
	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 3, (char)param_1, (char)param_5, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffc8);
	} else {
		iVar1 = (int)param_1;
		*(undefined2 *)(iVar1 + 1) = CONCAT11(*(undefined *)(iVar1 + 2), *(undefined *)(iVar1 + 1));
		if (*(ushort *)(iVar1 + 1) < 0x101) {
			ModifyPlrVit(param_2, (uint) * (ushort *)(iVar1 + 1), uVar2, param_1, param_5, param_6, param_7,
			    param_8, in_stack_ffffffc8);
		}
	}
	return 3;
}

undefined8 On_SBSPELL(int iParm1, int iParm2)

{
	ushort uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	puVar3 = PTR_DAT_100f1828;
	puVar2 = PTR_DAT_100f17ec;
	if (*_DAT_100f1d14 != '\x01') {
		*(undefined2 *)(iParm1 + 1) = CONCAT11(*(undefined *)(iParm1 + 2), *(undefined *)(iParm1 + 1));
		uVar1 = *(ushort *)(iParm1 + 1);
		if ((*puVar2 == '\0') && (*(int *)(PTR_DAT_100f1934 + (uint)uVar1 * 0x38 + 0x18) == 0)) {
			msg_errorf(PTR_s__s_has_cast_an_illegal_spell__100f3338, puVar3 + iParm2 * 0x55ec + 0x13c,
			    puVar2, puVar3, (uint)uVar1, in_r8, in_r9, in_r10, in_stack_ffffffc8, in_stack_ffffffcf,
			    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4,
			    in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
		} else {
			puVar3 = puVar3 + iParm2 * 0x55ec;
			*(uint *)(puVar3 + 0xa4) = (uint)uVar1;
			puVar3[0xa8] = puVar3[0xc0];
			puVar3[0xa9] = 1;
			*(undefined4 *)(puVar3 + 0x20) = 0xc;
		}
	}
	return 3;
}

undefined8
On_GOTOGETITEM(int param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined4 in_stack_ffffffc8;

	if ((*_DAT_100f1d14 != '\x01') && (puVar1 = PTR_DAT_100f1828 + (int)param_2 * 0x55ec, (uint)(byte)*PTR_DAT_100f17ec == *(uint *)(puVar1 + 0x34))) {
		*(undefined2 *)(param_1 + 3) = CONCAT11(*(undefined *)(param_1 + 4), *(undefined *)(param_1 + 3));
		MakePlrPath(param_2, (ulonglong) * (byte *)(param_1 + 1), (ulonglong) * (byte *)(param_1 + 2), 0,
		    param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		*(undefined4 *)(puVar1 + 0x20) = 0xf;
		*(uint *)(puVar1 + 0x24) = (uint) * (ushort *)(param_1 + 3);
	}
	return 5;
}

undefined8
On_REQUESTGITEM(longlong lParm1, int iParm2, undefined8 uParm3, undefined param_4, undefined param_5,
    uint uParm6, undefined4 uParm7, undefined4 uParm8)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	ulonglong uVar4;
	undefined8 uVar5;
	int iVar6;
	ulonglong uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffdc;

	puVar2 = PTR_DAT_100f1824;
	if (*_DAT_100f1d14 != '\x01') {
		iVar1 = (int)lParm1;
		*(undefined2 *)(iVar1 + 7) = CONCAT11(*(undefined *)(iVar1 + 8), *(undefined *)(iVar1 + 7));
		*(undefined2 *)(iVar1 + 9) = CONCAT11(*(undefined *)(iVar1 + 10), *(undefined *)(iVar1 + 9));
		*(uint *)(iVar1 + 0xb) = (uint) * (byte *)(iVar1 + 0xe) << 0x18 | (uint) * (byte *)(iVar1 + 0xd) << 0x10 | (uint) * (byte *)(iVar1 + 0xc) << 8 | (uint) * (byte *)(iVar1 + 0xb);
		*(undefined2 *)(iVar1 + 0x14) = CONCAT11(*(undefined *)(iVar1 + 0x15), *(undefined *)(iVar1 + 0x14));
		*(uint *)(iVar1 + 0x16) = (uint) * (byte *)(iVar1 + 0x19) << 0x18 | (uint) * (byte *)(iVar1 + 0x18) << 0x10 | (uint) * (byte *)(iVar1 + 0x17) << 8 | (uint) * (byte *)(iVar1 + 0x16);
		puVar3 = PTR_DAT_100f1828;
		*(uint *)(iVar1 + 0x1a) = (uint) * (byte *)(iVar1 + 0x1d) << 0x18 | (uint) * (byte *)(iVar1 + 0x1c) << 0x10 | (uint) * (byte *)(iVar1 + 0x1b) << 8 | (uint) * (byte *)(iVar1 + 0x1a);
		uVar4 = i_own_level(*(int *)(puVar3 + iParm2 * 0x55ec + 0x34));
		if (((int)uVar4 != 0) && (uVar5 = GetItemRecord(*(int *)(iVar1 + 0xb), *(short *)(iVar1 + 9), (uint) * (ushort *)(iVar1 + 7), param_4, param_5, (char)uParm6, (char)uParm7, (char)uParm8, in_stack_ffffffb8), (int)uVar5 != 0)) {
			iVar6 = FindGetItem((uint) * (ushort *)(iVar1 + 7), *(short *)(iVar1 + 9), *(int *)(iVar1 + 0xb));
			if (iVar6 == -1) {
				if ((iVar6 == -1) && (uVar5 = NetSendCmdReq2(0x27, (char)*(undefined4 *)puVar2, *(undefined *)(iVar1 + 2), (char)lParm1, param_5, (char)uParm6, (char)uParm7, (char)uParm8, in_stack_ffffffb8), (int)uVar5 == 0)) {
					NetSendCmdExtra(lParm1);
				}
			} else {
				uVar7 = (ulonglong) * (byte *)(iVar1 + 2);
				uVar4 = (ulonglong)(*(uint *)puVar2 & 0xff);
				NetSendCmdGItem2(0, 8, uVar4, uVar7, lParm1, uParm6, uParm7, uParm8, in_stack_ffffffb8);
				uVar10 = (undefined)uParm6;
				uVar9 = (undefined)lParm1;
				uVar8 = (undefined)uVar7;
				uVar12 = (undefined)uParm8;
				uVar11 = (undefined)uParm7;
				if ((uint) * (byte *)(iVar1 + 2) == *(uint *)puVar2) {
					InvGetItem(*(uint *)puVar2, iVar6, uVar4, uVar7, lParm1, uParm6, uParm7, uParm8,
					    in_stack_ffffffb8);
				} else {
					uVar10 = 3;
					uVar8 = (undefined) * (short *)(iVar1 + 9);
					uVar9 = (undefined) * (int *)(iVar1 + 0xb);
					SyncGetItem((uint) * (byte *)(iVar1 + 5), (uint) * (byte *)(iVar1 + 6),
					    (uint) * (ushort *)(iVar1 + 7), *(short *)(iVar1 + 9), *(int *)(iVar1 + 0xb), 3,
					    uVar11, uVar12, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffdc);
				}
				SetItemRecord(*(undefined4 *)(iVar1 + 0xb), *(undefined2 *)(iVar1 + 9),
				    (uint) * (ushort *)(iVar1 + 7), uVar8, uVar9, uVar10, uVar11, uVar12, in_stack_ffffffb8);
			}
		}
	}
	return 0x1e;
}

undefined8
On_GETITEM(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    longlong param_5, uint param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	int iVar7;
	undefined8 uVar6;
	ulonglong uVar8;
	ulonglong uVar9;
	undefined8 uVar10;
	ulonglong uVar11;
	ulonglong uVar12;
	uint uVar13;
	uint uVar14;
	uint uVar15;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffcc;

	puVar4 = PTR_DAT_100f1828;
	puVar3 = PTR_DAT_100f1824;
	ppuVar5 = &toc;
	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 0x1e, (char)param_1, (char)param_5, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffa8);
	} else {
		iVar2 = (int)param_1;
		*(undefined2 *)(iVar2 + 7) = CONCAT11(*(undefined *)(iVar2 + 8), *(undefined *)(iVar2 + 7));
		*(undefined2 *)(iVar2 + 9) = CONCAT11(*(undefined *)(iVar2 + 10), *(undefined *)(iVar2 + 9));
		*(uint *)(iVar2 + 0xb) = (uint) * (byte *)(iVar2 + 0xe) << 0x18 | (uint) * (byte *)(iVar2 + 0xd) << 0x10 | (uint) * (byte *)(iVar2 + 0xc) << 8 | (uint) * (byte *)(iVar2 + 0xb);
		*(undefined2 *)(iVar2 + 0x14) = CONCAT11(*(undefined *)(iVar2 + 0x15), *(undefined *)(iVar2 + 0x14));
		*(uint *)(iVar2 + 0x16) = (uint) * (byte *)(iVar2 + 0x19) << 0x18 | (uint) * (byte *)(iVar2 + 0x18) << 0x10 | (uint) * (byte *)(iVar2 + 0x17) << 8 | (uint) * (byte *)(iVar2 + 0x16);
		*(uint *)(iVar2 + 0x1a) = (uint) * (byte *)(iVar2 + 0x1d) << 0x18 | (uint) * (byte *)(iVar2 + 0x1c) << 0x10 | (uint) * (byte *)(iVar2 + 0x1b) << 8 | (uint) * (byte *)(iVar2 + 0x1a);
		uVar8 = (ulonglong) * (uint *)(iVar2 + 0xb);
		uVar10 = param_1;
		iVar7 = FindGetItem((uint) * (ushort *)(iVar2 + 7), *(short *)(iVar2 + 9), *(uint *)(iVar2 + 0xb));
		uVar6 = delta_get_item(iVar2, (uint) * (byte *)(iVar2 + 4), uVar8, uVar10, param_5, param_6, param_7,
		    param_8, in_stack_ffffffa8);
		if ((int)uVar6 == 0) {
			NetSendCmdGItem2(1, 8, (ulonglong) * (byte *)(iVar2 + 1), (ulonglong) * (byte *)(iVar2 + 2), param_1,
			    param_6, param_7, param_8, in_stack_ffffffa8);
		} else {
			uVar8 = (ulonglong)(byte)*ppuVar5[-0x1df9];
			if (((uVar8 == (ulonglong) * (byte *)(iVar2 + 4)) || ((uint) * (byte *)(iVar2 + 2) == *(uint *)puVar3)) && (uVar1 = *(uint *)puVar3, (uint) * (byte *)(iVar2 + 1) != uVar1)) {
				if ((uint) * (byte *)(iVar2 + 2) == uVar1) {
					if (uVar8 == (ulonglong) * (byte *)(iVar2 + 4)) {
						InvGetItem(uVar1, iVar7, uVar8, uVar10, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
					} else {
						uVar9 = (ulonglong) * (uint *)(puVar4 + uVar1 * 0x55ec + 0x3c);
						uVar11 = (ulonglong) * (ushort *)(iVar2 + 7);
						uVar12 = (ulonglong) * (ushort *)(iVar2 + 9);
						uVar13 = *(uint *)(iVar2 + 0xb);
						uVar14 = (uint) * (byte *)(iVar2 + 0xf);
						uVar15 = (uint) * (byte *)(iVar2 + 0x10);
						uVar8 = SyncPutItem(uVar1, (ulonglong) * (uint *)(puVar4 + uVar1 * 0x55ec + 0x38), uVar9,
						    (uint) * (ushort *)(iVar2 + 7), uVar12, (ulonglong)uVar13,
						    (uint) * (byte *)(iVar2 + 0xf), (uint) * (byte *)(iVar2 + 0x10),
						    in_stack_ffffffa8, in_stack_ffffffaf, (uint) * (byte *)(iVar2 + 0x11),
						    (uint) * (byte *)(iVar2 + 0x12), (uint) * (byte *)(iVar2 + 0x13),
						    (uint) * (ushort *)(iVar2 + 0x14), *(undefined4 *)(iVar2 + 0x16));
						if ((int)uVar8 != -1) {
							InvGetItem(*(int *)puVar3, (int)uVar8, uVar9, uVar11, uVar12, uVar13, uVar14, uVar15,
							    in_stack_ffffffa8);
						}
					}
				} else {
					SyncGetItem((uint) * (byte *)(iVar2 + 5), (uint) * (byte *)(iVar2 + 6),
					    (uint) * (ushort *)(iVar2 + 7), *(short *)(iVar2 + 9), *(int *)(iVar2 + 0xb), 4,
					    (char)param_7, (char)param_8, in_stack_ffffffa8, in_stack_ffffffaf,
					    in_stack_ffffffcc);
				}
			}
		}
	}
	return 0x1e;
}

undefined8
On_GOTOAGETITEM(int param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined4 in_stack_ffffffc8;

	if ((*_DAT_100f1d14 != '\x01') && (puVar1 = PTR_DAT_100f1828 + (int)param_2 * 0x55ec, (uint)(byte)*PTR_DAT_100f17ec == *(uint *)(puVar1 + 0x34))) {
		*(undefined2 *)(param_1 + 3) = CONCAT11(*(undefined *)(param_1 + 4), *(undefined *)(param_1 + 3));
		MakePlrPath(param_2, (ulonglong) * (byte *)(param_1 + 1), (ulonglong) * (byte *)(param_1 + 2), 0,
		    param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		*(undefined4 *)(puVar1 + 0x20) = 0x10;
		*(uint *)(puVar1 + 0x24) = (uint) * (ushort *)(param_1 + 3);
	}
	return 5;
}

undefined8
On_REQUESTAGITEM(ulonglong uParm1, int iParm2, undefined8 uParm3, undefined param_4, undefined param_5,
    undefined8 uParm6, undefined8 uParm7, undefined8 uParm8)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	ulonglong uVar4;
	undefined8 uVar5;
	int iVar6;
	ulonglong uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined4 uVar11;
	undefined4 uVar12;
	undefined uVar13;
	undefined4 uVar14;
	undefined4 uVar15;
	undefined uVar16;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffec;

	puVar2 = PTR_DAT_100f1824;
	uVar15 = (undefined4)uParm8;
	uVar14 = (undefined4)((ulonglong)uParm8 >> 0x20);
	uVar12 = (undefined4)uParm7;
	uVar11 = (undefined4)((ulonglong)uParm7 >> 0x20);
	if (*_DAT_100f1d14 != '\x01') {
		iVar1 = (int)uParm1;
		*(undefined2 *)(iVar1 + 7) = CONCAT11(*(undefined *)(iVar1 + 8), *(undefined *)(iVar1 + 7));
		*(undefined2 *)(iVar1 + 9) = CONCAT11(*(undefined *)(iVar1 + 10), *(undefined *)(iVar1 + 9));
		*(uint *)(iVar1 + 0xb) = (uint) * (byte *)(iVar1 + 0xe) << 0x18 | (uint) * (byte *)(iVar1 + 0xd) << 0x10 | (uint) * (byte *)(iVar1 + 0xc) << 8 | (uint) * (byte *)(iVar1 + 0xb);
		*(undefined2 *)(iVar1 + 0x14) = CONCAT11(*(undefined *)(iVar1 + 0x15), *(undefined *)(iVar1 + 0x14));
		*(uint *)(iVar1 + 0x16) = (uint) * (byte *)(iVar1 + 0x19) << 0x18 | (uint) * (byte *)(iVar1 + 0x18) << 0x10 | (uint) * (byte *)(iVar1 + 0x17) << 8 | (uint) * (byte *)(iVar1 + 0x16);
		puVar3 = PTR_DAT_100f1828;
		*(uint *)(iVar1 + 0x1a) = (uint) * (byte *)(iVar1 + 0x1d) << 0x18 | (uint) * (byte *)(iVar1 + 0x1c) << 0x10 | (uint) * (byte *)(iVar1 + 0x1b) << 8 | (uint) * (byte *)(iVar1 + 0x1a);
		uVar4 = i_own_level(*(int *)(puVar3 + iParm2 * 0x55ec + 0x34));
		if (((int)uVar4 != 0) && (uVar5 = GetItemRecord(*(int *)(iVar1 + 0xb), *(short *)(iVar1 + 9), (uint) * (ushort *)(iVar1 + 7), param_4, param_5, (char)uParm6, (char)uVar12, (char)uVar15, in_stack_ffffffc8), (int)uVar5 != 0)) {
			iVar6 = FindGetItem((uint) * (ushort *)(iVar1 + 7), *(short *)(iVar1 + 9), *(int *)(iVar1 + 0xb));
			if (iVar6 == -1) {
				if ((iVar6 == -1) && (uVar5 = NetSendCmdReq2(0x28, (char)*(undefined4 *)puVar2, *(undefined *)(iVar1 + 2), (char)uParm1, param_5, (char)uParm6, (char)uVar12, (char)uVar15, in_stack_ffffffc8), (int)uVar5 == 0)) {
					NetSendCmdExtra(uParm1);
				}
			} else {
				uVar7 = (ulonglong) * (byte *)(iVar1 + 2);
				uVar4 = (ulonglong)(*(uint *)puVar2 & 0xff);
				NetSendCmdGItem2(0, 9, uVar4, uVar7, uParm1, (int)uParm6, uVar12, uVar15, in_stack_ffffffc8);
				uVar10 = (undefined)uParm6;
				uVar9 = (undefined)uParm1;
				uVar8 = (undefined)uVar7;
				uVar16 = (undefined)uVar15;
				uVar13 = (undefined)uVar12;
				if ((uint) * (byte *)(iVar1 + 2) == *(uint *)puVar2) {
					AutoGetItem((ulonglong) * (uint *)puVar2, (ulonglong) * (byte *)(iVar1 + 3), uVar4, uVar7, uParm1, uParm6, CONCAT44(uVar11, uVar12), CONCAT44(uVar14, uVar15), in_stack_ffffffc8);
				} else {
					uVar10 = 5;
					uVar8 = (undefined) * (short *)(iVar1 + 9);
					uVar9 = (undefined) * (int *)(iVar1 + 0xb);
					SyncGetItem((uint) * (byte *)(iVar1 + 5), (uint) * (byte *)(iVar1 + 6),
					    (uint) * (ushort *)(iVar1 + 7), *(short *)(iVar1 + 9), *(int *)(iVar1 + 0xb), 5,
					    uVar13, uVar16, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffec);
				}
				SetItemRecord(*(undefined4 *)(iVar1 + 0xb), *(undefined2 *)(iVar1 + 9),
				    (uint) * (ushort *)(iVar1 + 7), uVar8, uVar9, uVar10, uVar13, uVar16, in_stack_ffffffc8);
			}
		}
	}
	return 0x1e;
}

undefined8
On_AGETITEM(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    ulonglong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	undefined8 uVar6;
	ulonglong uVar7;
	ulonglong uVar8;
	ulonglong uVar9;
	ulonglong uVar10;
	ulonglong uVar11;
	ulonglong uVar12;
	ulonglong uVar13;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffbc;

	puVar4 = PTR_DAT_100f1828;
	puVar3 = PTR_DAT_100f1824;
	ppuVar5 = &toc;
	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 0x1e, (char)param_1, (char)param_5, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffff98);
	} else {
		iVar2 = (int)param_1;
		*(undefined2 *)(iVar2 + 7) = CONCAT11(*(undefined *)(iVar2 + 8), *(undefined *)(iVar2 + 7));
		*(undefined2 *)(iVar2 + 9) = CONCAT11(*(undefined *)(iVar2 + 10), *(undefined *)(iVar2 + 9));
		*(uint *)(iVar2 + 0xb) = (uint) * (byte *)(iVar2 + 0xe) << 0x18 | (uint) * (byte *)(iVar2 + 0xd) << 0x10 | (uint) * (byte *)(iVar2 + 0xc) << 8 | (uint) * (byte *)(iVar2 + 0xb);
		*(undefined2 *)(iVar2 + 0x14) = CONCAT11(*(undefined *)(iVar2 + 0x15), *(undefined *)(iVar2 + 0x14));
		*(uint *)(iVar2 + 0x16) = (uint) * (byte *)(iVar2 + 0x19) << 0x18 | (uint) * (byte *)(iVar2 + 0x18) << 0x10 | (uint) * (byte *)(iVar2 + 0x17) << 8 | (uint) * (byte *)(iVar2 + 0x16);
		*(uint *)(iVar2 + 0x1a) = (uint) * (byte *)(iVar2 + 0x1d) << 0x18 | (uint) * (byte *)(iVar2 + 0x1c) << 0x10 | (uint) * (byte *)(iVar2 + 0x1b) << 8 | (uint) * (byte *)(iVar2 + 0x1a);
		uVar8 = (ulonglong) * (uint *)(iVar2 + 0xb);
		uVar7 = param_1;
		FindGetItem((uint) * (ushort *)(iVar2 + 7), *(short *)(iVar2 + 9), *(uint *)(iVar2 + 0xb));
		uVar6 = delta_get_item(iVar2, (uint) * (byte *)(iVar2 + 4), uVar8, uVar7, param_5, (int)param_6,
		    (int)param_7, (int)param_8, in_stack_ffffff98);
		if ((int)uVar6 == 0) {
			NetSendCmdGItem2(1, 9, (ulonglong) * (byte *)(iVar2 + 1), (ulonglong) * (byte *)(iVar2 + 2), param_1,
			    (int)param_6, (int)param_7, (int)param_8, in_stack_ffffff98);
		} else {
			uVar8 = (ulonglong)(byte)*ppuVar5[-0x1df9];
			if ((uVar8 == (ulonglong) * (byte *)(iVar2 + 4)) || ((uint) * (byte *)(iVar2 + 2) == *(uint *)puVar3)) {
				uVar1 = *(uint *)puVar3;
				if ((uint) * (byte *)(iVar2 + 1) != uVar1) {
					if ((uint) * (byte *)(iVar2 + 2) == uVar1) {
						if (uVar8 == (ulonglong) * (byte *)(iVar2 + 4)) {
							AutoGetItem((ulonglong)uVar1, (ulonglong) * (byte *)(iVar2 + 3), uVar8, uVar7, param_5,
							    param_6, param_7, param_8, in_stack_ffffff98);
						} else {
							uVar8 = (ulonglong) * (uint *)(puVar4 + uVar1 * 0x55ec + 0x3c);
							uVar9 = (ulonglong) * (ushort *)(iVar2 + 7);
							uVar10 = (ulonglong) * (ushort *)(iVar2 + 9);
							uVar11 = (ulonglong) * (uint *)(iVar2 + 0xb);
							uVar12 = (ulonglong) * (byte *)(iVar2 + 0xf);
							uVar13 = (ulonglong) * (byte *)(iVar2 + 0x10);
							uVar7 = SyncPutItem(uVar1, (ulonglong) * (uint *)(puVar4 + uVar1 * 0x55ec + 0x38), uVar8,
							    (uint) * (ushort *)(iVar2 + 7), uVar10, uVar11,
							    (uint) * (byte *)(iVar2 + 0xf), (uint) * (byte *)(iVar2 + 0x10),
							    in_stack_ffffff98, in_stack_ffffff9f, (uint) * (byte *)(iVar2 + 0x11), (uint) * (byte *)(iVar2 + 0x12), (uint) * (byte *)(iVar2 + 0x13),
							    (uint) * (ushort *)(iVar2 + 0x14), *(undefined4 *)(iVar2 + 0x16));
							if ((int)uVar7 != -1) {
								AutoGetItem((ulonglong) * (uint *)puVar3, uVar7, uVar8, uVar9, uVar10, uVar11, uVar12,
								    uVar13, in_stack_ffffff98);
							}
						}
					} else {
						SyncGetItem((uint) * (byte *)(iVar2 + 5), (uint) * (byte *)(iVar2 + 6),
						    (uint) * (ushort *)(iVar2 + 7), *(short *)(iVar2 + 9), *(int *)(iVar2 + 0xb), 6,
						    (char)param_7, (char)param_8, in_stack_ffffff98, in_stack_ffffff9f,
						    in_stack_ffffffbc);
					}
				}
			}
		}
	}
	return 0x1e;
}

undefined8
On_ITEMEXTRA(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined **ppuVar2;
	ulonglong uVar3;
	undefined uVar4;
	undefined uVar5;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffec;

	uVar5 = (undefined)param_8;
	uVar4 = (undefined)param_7;
	ppuVar2 = &toc;
	uVar3 = ZEXT48(_DAT_100f1d14);
	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 0x1e, (char)param_1, (char)param_5, (char)param_6, uVar4, uVar5,
		    in_stack_ffffffc8);
	} else {
		iVar1 = (int)param_1;
		*(undefined2 *)(iVar1 + 7) = CONCAT11(*(undefined *)(iVar1 + 8), *(undefined *)(iVar1 + 7));
		*(undefined2 *)(iVar1 + 9) = CONCAT11(*(undefined *)(iVar1 + 10), *(undefined *)(iVar1 + 9));
		*(uint *)(iVar1 + 0xb) = (uint) * (byte *)(iVar1 + 0xe) << 0x18 | (uint) * (byte *)(iVar1 + 0xd) << 0x10 | (uint) * (byte *)(iVar1 + 0xc) << 8 | (uint) * (byte *)(iVar1 + 0xb);
		*(undefined2 *)(iVar1 + 0x14) = CONCAT11(*(undefined *)(iVar1 + 0x15), *(undefined *)(iVar1 + 0x14));
		*(uint *)(iVar1 + 0x16) = (uint) * (byte *)(iVar1 + 0x19) << 0x18 | (uint) * (byte *)(iVar1 + 0x18) << 0x10 | (uint) * (byte *)(iVar1 + 0x17) << 8 | (uint) * (byte *)(iVar1 + 0x16);
		*(uint *)(iVar1 + 0x1a) = (uint) * (byte *)(iVar1 + 0x1d) << 0x18 | (uint) * (byte *)(iVar1 + 0x1c) << 0x10 | (uint) * (byte *)(iVar1 + 0x1b) << 8 | (uint) * (byte *)(iVar1 + 0x1a);
		delta_get_item(iVar1, (uint) * (byte *)(iVar1 + 4), uVar3, param_1, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
		if ((uint)(byte)*ppuVar2[-0x1df9] == *(uint *)(ppuVar2[-0x1dea] + (int)param_2 * 0x55ec + 0x34)) {
			SyncGetItem((uint) * (byte *)(iVar1 + 5), (uint) * (byte *)(iVar1 + 6),
			    (uint) * (ushort *)(iVar1 + 7), *(short *)(iVar1 + 9), *(int *)(iVar1 + 0xb), 7, uVar4,
			    uVar5, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffec);
		}
	}
	return 0x1e;
}

undefined8 On_PUTITEM(ulonglong uParm1, undefined8 uParm2)

{
	uint *puVar1;
	int iVar2;
	int iVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	ulonglong uVar7;
	ulonglong uVar8;
	undefined uVar11;
	uint uVar9;
	uint uVar10;
	undefined uVar13;
	undefined4 uVar12;
	undefined8 in_r8;
	undefined uVar15;
	uint uVar14;
	undefined8 in_r9;
	undefined uVar17;
	uint uVar16;
	undefined8 in_r10;
	undefined uVar19;
	uint uVar18;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;

	puVar6 = PTR_DAT_100f1940;
	puVar5 = PTR_DAT_100f1828;
	uVar18 = (uint)in_r10;
	uVar16 = (uint)in_r9;
	uVar14 = (uint)in_r8;
	uVar11 = SUB41(PTR_DAT_100f1828, 0);
	uVar15 = (undefined)in_r8;
	uVar17 = (undefined)in_r9;
	uVar19 = (undefined)in_r10;
	uVar13 = (undefined)uParm1;
	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(uParm2, uParm1, 0x16, uVar11, uVar13, uVar15, uVar17, uVar19, in_stack_ffffff98);
	} else {
		iVar2 = (int)uParm1;
		*(undefined2 *)(iVar2 + 3) = CONCAT11(*(undefined *)(iVar2 + 4), *(undefined *)(iVar2 + 3));
		*(undefined2 *)(iVar2 + 5) = CONCAT11(*(undefined *)(iVar2 + 6), *(undefined *)(iVar2 + 5));
		*(uint *)(iVar2 + 7) = (uint) * (byte *)(iVar2 + 10) << 0x18 | (uint) * (byte *)(iVar2 + 9) << 0x10 | (uint) * (byte *)(iVar2 + 8) << 8 | (uint) * (byte *)(iVar2 + 7);
		*(undefined2 *)(iVar2 + 0x10) = CONCAT11(*(undefined *)(iVar2 + 0x11), *(undefined *)(iVar2 + 0x10));
		puVar4 = PTR_DAT_100f17ec;
		iVar3 = (int)uParm2;
		*(uint *)(iVar2 + 0x12) = (uint) * (byte *)(iVar2 + 0x15) << 0x18 | (uint) * (byte *)(iVar2 + 0x14) << 0x10 | (uint) * (byte *)(iVar2 + 0x13) << 8 | (uint) * (byte *)(iVar2 + 0x12);
		puVar1 = (uint *)(puVar5 + iVar3 * 0x55ec + 0x34);
		if ((uint)(byte)*puVar4 == *puVar1) {
			if (iVar3 == *(int *)PTR_DAT_100f1824) {
				uVar7 = InvPutItem(iVar3, (ulonglong) * (byte *)(iVar2 + 1), (ulonglong) * (byte *)(iVar2 + 2),
				    uVar11, uVar13, uVar15, uVar17, uVar19, in_stack_ffffff98);
				uVar7._4_4_ = (int)uVar7;
			} else {
				uVar11 = (undefined) * (ushort *)(iVar2 + 3);
				uParm1 = (ulonglong) * (ushort *)(iVar2 + 5);
				uVar14 = *(uint *)(iVar2 + 7);
				uVar16 = (uint) * (byte *)(iVar2 + 0xb);
				uVar18 = (uint) * (byte *)(iVar2 + 0xc);
				uVar7 = SyncPutItem(iVar3, (ulonglong) * (byte *)(iVar2 + 1), (ulonglong) * (byte *)(iVar2 + 2),
				    (uint) * (ushort *)(iVar2 + 3), uParm1, (ulonglong)uVar14,
				    (uint) * (byte *)(iVar2 + 0xb), (uint) * (byte *)(iVar2 + 0xc),
				    in_stack_ffffff98, in_stack_ffffff9f, (uint) * (byte *)(iVar2 + 0xd),
				    (uint) * (byte *)(iVar2 + 0xe), (uint) * (byte *)(iVar2 + 0xf),
				    (uint) * (ushort *)(iVar2 + 0x10), *(undefined4 *)(iVar2 + 0x12));
				uVar7._4_4_ = (int)uVar7;
			}
			if (uVar7._4_4_ != -1) {
				PutItemRecord(*(int *)(iVar2 + 7), *(short *)(iVar2 + 5), (uint) * (ushort *)(iVar2 + 3), uVar11,
				    (char)uParm1, (char)uVar14, (char)uVar16, (char)uVar18, in_stack_ffffff98);
				uVar12 = (undefined4)uParm1;
				uVar10 = *(uint *)(puVar6 + uVar7._4_4_ * 0x170 + 0xc);
				uVar7 = (ulonglong)uVar10;
				uVar8 = (ulonglong) * (uint *)(puVar6 + uVar7._4_4_ * 0x170 + 0x10);
				uVar9 = *puVar1 & 0xff;
				delta_put_item(iVar2, (byte)uVar10, uVar8, (ulonglong)uVar9, uParm1, uVar14, uVar16, uVar18,
				    in_stack_ffffff98);
				check_update_plr(iVar3, uVar7, uVar8, uVar9, uVar12, uVar14, uVar16, uVar18, in_stack_ffffff98);
			}
		} else {
			PutItemRecord(*(int *)(iVar2 + 7), *(short *)(iVar2 + 5), (uint) * (ushort *)(iVar2 + 3), uVar11,
			    uVar13, uVar15, uVar17, uVar19, in_stack_ffffff98);
			uVar12 = (undefined4)uParm1;
			uVar7 = (ulonglong) * (byte *)(iVar2 + 1);
			uVar8 = (ulonglong) * (byte *)(iVar2 + 2);
			uVar10 = *puVar1 & 0xff;
			delta_put_item(iVar2, *(byte *)(iVar2 + 1), uVar8, (ulonglong)uVar10, uParm1, uVar14, uVar16, uVar18,
			    in_stack_ffffff98);
			check_update_plr(iVar3, uVar7, uVar8, uVar10, uVar12, uVar14, uVar16, uVar18, in_stack_ffffff98);
		}
	}
	return 0x16;
}

undefined8 On_SYNCPUTITEM(undefined8 uParm1, undefined8 uParm2)

{
	uint uVar1;
	uint *puVar2;
	int iVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	ulonglong uVar8;
	ulonglong uVar9;
	undefined uVar11;
	uint uVar10;
	ulonglong uVar12;
	undefined4 uVar13;
	undefined4 uVar14;
	undefined8 in_r8;
	uint uVar15;
	undefined8 in_r9;
	uint uVar16;
	undefined4 uVar17;
	undefined8 in_r10;
	uint uVar18;
	undefined4 uVar19;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;

	puVar7 = PTR_DAT_100f1940;
	puVar6 = PTR_DAT_100f1828;
	uVar19 = (undefined4)in_r10;
	uVar17 = (undefined4)in_r9;
	uVar13 = (undefined4)in_r8;
	uVar11 = SUB41(PTR_DAT_100f1828, 0);
	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(uParm2, uParm1, 0x16, uVar11, (char)uParm1, (char)in_r8, (char)in_r9, (char)in_r10,
		    in_stack_ffffff98);
	} else {
		iVar3 = (int)uParm1;
		*(undefined2 *)(iVar3 + 3) = CONCAT11(*(undefined *)(iVar3 + 4), *(undefined *)(iVar3 + 3));
		*(undefined2 *)(iVar3 + 5) = CONCAT11(*(undefined *)(iVar3 + 6), *(undefined *)(iVar3 + 5));
		*(uint *)(iVar3 + 7) = (uint) * (byte *)(iVar3 + 10) << 0x18 | (uint) * (byte *)(iVar3 + 9) << 0x10 | (uint) * (byte *)(iVar3 + 8) << 8 | (uint) * (byte *)(iVar3 + 7);
		*(undefined2 *)(iVar3 + 0x10) = CONCAT11(*(undefined *)(iVar3 + 0x11), *(undefined *)(iVar3 + 0x10));
		puVar5 = PTR_DAT_100f17ec;
		iVar4 = (int)uParm2;
		*(uint *)(iVar3 + 0x12) = (uint) * (byte *)(iVar3 + 0x15) << 0x18 | (uint) * (byte *)(iVar3 + 0x14) << 0x10 | (uint) * (byte *)(iVar3 + 0x13) << 8 | (uint) * (byte *)(iVar3 + 0x12);
		puVar2 = (uint *)(puVar6 + iVar4 * 0x55ec + 0x34);
		if ((uint)(byte)*puVar5 == *puVar2) {
			uVar11 = (undefined) * (ushort *)(iVar3 + 3);
			uVar12 = (ulonglong) * (ushort *)(iVar3 + 5);
			uVar15 = *(uint *)(iVar3 + 7);
			uVar16 = (uint) * (byte *)(iVar3 + 0xb);
			uVar18 = (uint) * (byte *)(iVar3 + 0xc);
			uVar8 = SyncPutItem(iVar4, (ulonglong) * (byte *)(iVar3 + 1), (ulonglong) * (byte *)(iVar3 + 2),
			    (uint) * (ushort *)(iVar3 + 3), uVar12, (ulonglong)uVar15,
			    (uint) * (byte *)(iVar3 + 0xb), (uint) * (byte *)(iVar3 + 0xc),
			    in_stack_ffffff98, in_stack_ffffff9f, (uint) * (byte *)(iVar3 + 0xd),
			    (uint) * (byte *)(iVar3 + 0xe), (uint) * (byte *)(iVar3 + 0xf),
			    (uint) * (ushort *)(iVar3 + 0x10), *(undefined4 *)(iVar3 + 0x12));
			if ((int)uVar8 != -1) {
				PutItemRecord(*(int *)(iVar3 + 7), *(short *)(iVar3 + 5), (uint) * (ushort *)(iVar3 + 3), uVar11,
				    (char)uVar12, (char)uVar15, (char)uVar16, (char)uVar18, in_stack_ffffff98);
				uVar13 = (undefined4)uVar12;
				uVar1 = *(uint *)(puVar7 + (int)uVar8 * 0x170 + 0xc);
				uVar9 = (ulonglong)uVar1;
				uVar8 = (ulonglong) * (uint *)(puVar7 + (int)uVar8 * 0x170 + 0x10);
				uVar10 = *puVar2 & 0xff;
				delta_put_item(iVar3, (byte)uVar1, uVar8, (ulonglong)uVar10, uVar12, uVar15, uVar16, uVar18,
				    in_stack_ffffff98);
				check_update_plr(iVar4, uVar9, uVar8, uVar10, uVar13, uVar15, uVar16, uVar18, in_stack_ffffff98);
			}
		} else {
			PutItemRecord(*(int *)(iVar3 + 7), *(short *)(iVar3 + 5), (uint) * (ushort *)(iVar3 + 3), uVar11,
			    (char)uParm1, (char)in_r8, (char)in_r9, (char)in_r10, in_stack_ffffff98);
			uVar14 = (undefined4)uParm1;
			uVar8 = (ulonglong) * (byte *)(iVar3 + 1);
			uVar12 = (ulonglong) * (byte *)(iVar3 + 2);
			uVar15 = *puVar2 & 0xff;
			delta_put_item(iVar3, *(byte *)(iVar3 + 1), uVar12, (ulonglong)uVar15, uParm1, uVar13, uVar17, uVar19,
			    in_stack_ffffff98);
			check_update_plr(iVar4, uVar8, uVar12, uVar15, uVar14, uVar13, uVar17, uVar19, in_stack_ffffff98);
		}
	}
	return 0x16;
}

undefined8 On_RESPAWNITEM(ulonglong uParm1, undefined8 uParm2)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined uVar5;
	undefined8 in_r8;
	uint uVar6;
	undefined8 in_r9;
	uint uVar7;
	undefined8 in_r10;
	uint uVar8;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;

	puVar4 = PTR_DAT_100f1828;
	uVar8 = (uint)in_r10;
	uVar7 = (uint)in_r9;
	uVar6 = (uint)in_r8;
	uVar5 = SUB41(PTR_DAT_100f1828, 0);
	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(uParm2, uParm1, 0x16, uVar5, (char)uParm1, (char)in_r8, (char)in_r9, (char)in_r10,
		    in_stack_ffffff98);
	} else {
		iVar1 = (int)uParm1;
		*(undefined2 *)(iVar1 + 3) = CONCAT11(*(undefined *)(iVar1 + 4), *(undefined *)(iVar1 + 3));
		*(undefined2 *)(iVar1 + 5) = CONCAT11(*(undefined *)(iVar1 + 6), *(undefined *)(iVar1 + 5));
		*(uint *)(iVar1 + 7) = (uint) * (byte *)(iVar1 + 10) << 0x18 | (uint) * (byte *)(iVar1 + 9) << 0x10 | (uint) * (byte *)(iVar1 + 8) << 8 | (uint) * (byte *)(iVar1 + 7);
		*(undefined2 *)(iVar1 + 0x10) = CONCAT11(*(undefined *)(iVar1 + 0x11), *(undefined *)(iVar1 + 0x10));
		puVar3 = PTR_DAT_100f17ec;
		iVar2 = (int)uParm2;
		*(uint *)(iVar1 + 0x12) = (uint) * (byte *)(iVar1 + 0x15) << 0x18 | (uint) * (byte *)(iVar1 + 0x14) << 0x10 | (uint) * (byte *)(iVar1 + 0x13) << 8 | (uint) * (byte *)(iVar1 + 0x12);
		if (((uint)(byte)*puVar3 == *(uint *)(puVar4 + iVar2 * 0x55ec + 0x34)) && (iVar2 != *(int *)PTR_DAT_100f1824)) {
			uVar5 = (undefined) * (ushort *)(iVar1 + 3);
			uParm1 = (ulonglong) * (ushort *)(iVar1 + 5);
			uVar6 = *(uint *)(iVar1 + 7);
			uVar7 = (uint) * (byte *)(iVar1 + 0xb);
			uVar8 = (uint) * (byte *)(iVar1 + 0xc);
			SyncPutItem(iVar2, (ulonglong) * (byte *)(iVar1 + 1), (ulonglong) * (byte *)(iVar1 + 2),
			    (uint) * (ushort *)(iVar1 + 3), uParm1, (ulonglong)uVar6, (uint) * (byte *)(iVar1 + 0xb), (uint) * (byte *)(iVar1 + 0xc), in_stack_ffffff98, in_stack_ffffff9f,
			    (uint) * (byte *)(iVar1 + 0xd), (uint) * (byte *)(iVar1 + 0xe),
			    (uint) * (byte *)(iVar1 + 0xf), (uint) * (ushort *)(iVar1 + 0x10),
			    *(undefined4 *)(iVar1 + 0x12));
		}
		PutItemRecord(*(int *)(iVar1 + 7), *(short *)(iVar1 + 5), (uint) * (ushort *)(iVar1 + 3), uVar5,
		    (char)uParm1, (char)uVar6, (char)uVar7, (char)uVar8, in_stack_ffffff98);
		delta_put_item(iVar1, *(byte *)(iVar1 + 1), (ulonglong) * (byte *)(iVar1 + 2),
		    (ulonglong)(*(uint *)(puVar4 + iVar2 * 0x55ec + 0x34) & 0xff), uParm1, uVar6, uVar7,
		    uVar8, in_stack_ffffff98);
	}
	return 0x16;
}

undefined8
On_ATTACKXY(int param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined4 in_stack_ffffffc8;

	if ((*_DAT_100f1d14 != '\x01') && (puVar1 = PTR_DAT_100f1828 + (int)param_2 * 0x55ec, (uint)(byte)*PTR_DAT_100f17ec == *(uint *)(puVar1 + 0x34))) {
		MakePlrPath(param_2, (ulonglong) * (byte *)(param_1 + 1), (ulonglong) * (byte *)(param_1 + 2), 0,
		    param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		*(undefined4 *)(puVar1 + 0x20) = 9;
		*(uint *)(puVar1 + 0x24) = (uint) * (byte *)(param_1 + 1);
		*(uint *)(puVar1 + 0x28) = (uint) * (byte *)(param_1 + 2);
	}
	return 3;
}

undefined8
On_SATTACKXY(int param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined4 in_stack_ffffffc8;

	if ((*_DAT_100f1d14 != '\x01') && (puVar1 = PTR_DAT_100f1828 + (int)param_2 * 0x55ec, (uint)(byte)*PTR_DAT_100f17ec == *(uint *)(puVar1 + 0x34))) {
		ClrPlrPath(param_2, param_2, ZEXT48(_DAT_100f1d14), ZEXT48(PTR_DAT_100f1828), param_5, param_6,
		    param_7, param_8, in_stack_ffffffc8);
		*(undefined4 *)(puVar1 + 0x20) = 9;
		*(uint *)(puVar1 + 0x24) = (uint) * (byte *)(param_1 + 1);
		*(uint *)(puVar1 + 0x28) = (uint) * (byte *)(param_1 + 2);
	}
	return 3;
}

undefined8
On_RATTACKXY(int param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined4 in_stack_ffffffc8;

	if ((*_DAT_100f1d14 != '\x01') && (puVar1 = PTR_DAT_100f1828 + (int)param_2 * 0x55ec, (uint)(byte)*PTR_DAT_100f17ec == *(uint *)(puVar1 + 0x34))) {
		ClrPlrPath(param_2, param_2, ZEXT48(_DAT_100f1d14), ZEXT48(PTR_DAT_100f1828), param_5, param_6,
		    param_7, param_8, in_stack_ffffffc8);
		*(undefined4 *)(puVar1 + 0x20) = 10;
		*(uint *)(puVar1 + 0x24) = (uint) * (byte *)(param_1 + 1);
		*(uint *)(puVar1 + 0x28) = (uint) * (byte *)(param_1 + 2);
	}
	return 3;
}

undefined8
On_SPELLXYD(int param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	byte bVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	ulonglong uVar5;
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
	puVar4 = PTR_DAT_100f17ec;
	uVar5 = ZEXT48(PTR_DAT_100f17ec);
	if (*_DAT_100f1d14 != '\x01') {
		iVar2 = (int)param_2 * 0x55ec;
		bVar1 = *PTR_DAT_100f17ec;
		if ((uint)bVar1 == *(uint *)(PTR_DAT_100f1828 + iVar2 + 0x34)) {
			*(undefined2 *)(param_1 + 3) = CONCAT11(*(undefined *)(param_1 + 4), *(undefined *)(param_1 + 3));
			*(undefined2 *)(param_1 + 5) = CONCAT11(*(undefined *)(param_1 + 6), *(undefined *)(param_1 + 5));
			*(undefined2 *)(param_1 + 7) = CONCAT11(*(undefined *)(param_1 + 8), *(undefined *)(param_1 + 7));
			if ((*puVar4 == '\0') && (*(int *)(PTR_DAT_100f1934 + (uint) * (ushort *)(param_1 + 3) * 0x38 + 0x18) == 0)) {
				msg_errorf(PTR_s__s_has_cast_an_illegal_spell__100f3338, puVar3 + iVar2 + 0x13c, (uint)bVar1, puVar4, (int)param_5, param_6, param_7, param_8, in_stack_ffffffb8,
				    in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0,
				    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0,
				    in_stack_ffffffe4);
			} else {
				ClrPlrPath(param_2, param_2, (ulonglong)bVar1, uVar5, param_5, param_6, param_7, param_8,
				    in_stack_ffffffb8);
				puVar3 = puVar3 + iVar2;
				*(undefined4 *)(puVar3 + 0x20) = 0x1a;
				*(uint *)(puVar3 + 0x24) = (uint) * (byte *)(param_1 + 1);
				*(uint *)(puVar3 + 0x28) = (uint) * (byte *)(param_1 + 2);
				*(uint *)(puVar3 + 0x2c) = (uint) * (ushort *)(param_1 + 5);
				*(uint *)(puVar3 + 0x30) = (uint) * (ushort *)(param_1 + 7);
				*(uint *)(puVar3 + 0xa4) = (uint) * (ushort *)(param_1 + 3);
				puVar3[0xa8] = puVar3[0xb8];
				puVar3[0xa9] = 0;
			}
		}
	}
	return 9;
}

undefined8
On_SPELLXY(int param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	byte bVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	ulonglong uVar5;
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
	puVar4 = PTR_DAT_100f17ec;
	uVar5 = ZEXT48(PTR_DAT_100f17ec);
	if (*_DAT_100f1d14 != '\x01') {
		iVar2 = (int)param_2 * 0x55ec;
		bVar1 = *PTR_DAT_100f17ec;
		if ((uint)bVar1 == *(uint *)(PTR_DAT_100f1828 + iVar2 + 0x34)) {
			*(undefined2 *)(param_1 + 3) = CONCAT11(*(undefined *)(param_1 + 4), *(undefined *)(param_1 + 3));
			*(undefined2 *)(param_1 + 5) = CONCAT11(*(undefined *)(param_1 + 6), *(undefined *)(param_1 + 5));
			if ((*puVar4 == '\0') && (*(int *)(PTR_DAT_100f1934 + (uint) * (ushort *)(param_1 + 3) * 0x38 + 0x18) == 0)) {
				msg_errorf(PTR_s__s_has_cast_an_illegal_spell__100f3338, puVar3 + iVar2 + 0x13c, (uint)bVar1, puVar4, (int)param_5, param_6, param_7, param_8, in_stack_ffffffb8,
				    in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0,
				    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0,
				    in_stack_ffffffe4);
			} else {
				ClrPlrPath(param_2, param_2, (ulonglong)bVar1, uVar5, param_5, param_6, param_7, param_8,
				    in_stack_ffffffb8);
				puVar3 = puVar3 + iVar2;
				*(undefined4 *)(puVar3 + 0x20) = 0xc;
				*(uint *)(puVar3 + 0x24) = (uint) * (byte *)(param_1 + 1);
				*(uint *)(puVar3 + 0x28) = (uint) * (byte *)(param_1 + 2);
				*(uint *)(puVar3 + 0x2c) = (uint) * (ushort *)(param_1 + 5);
				*(uint *)(puVar3 + 0xa4) = (uint) * (ushort *)(param_1 + 3);
				puVar3[0xa8] = puVar3[0xb8];
				puVar3[0xa9] = 0;
			}
		}
	}
	return 7;
}

undefined8
On_TSPELLXY(int param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	byte bVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	ulonglong uVar5;
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
	puVar4 = PTR_DAT_100f17ec;
	uVar5 = ZEXT48(PTR_DAT_100f17ec);
	if (*_DAT_100f1d14 != '\x01') {
		iVar2 = (int)param_2 * 0x55ec;
		bVar1 = *PTR_DAT_100f17ec;
		if ((uint)bVar1 == *(uint *)(PTR_DAT_100f1828 + iVar2 + 0x34)) {
			*(undefined2 *)(param_1 + 3) = CONCAT11(*(undefined *)(param_1 + 4), *(undefined *)(param_1 + 3));
			*(undefined2 *)(param_1 + 5) = CONCAT11(*(undefined *)(param_1 + 6), *(undefined *)(param_1 + 5));
			if ((*puVar4 == '\0') && (*(int *)(PTR_DAT_100f1934 + (uint) * (ushort *)(param_1 + 3) * 0x38 + 0x18) == 0)) {
				msg_errorf(PTR_s__s_has_cast_an_illegal_spell__100f3338, puVar3 + iVar2 + 0x13c, (uint)bVar1, puVar4, (int)param_5, param_6, param_7, param_8, in_stack_ffffffb8,
				    in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0,
				    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0,
				    in_stack_ffffffe4);
			} else {
				ClrPlrPath(param_2, param_2, (ulonglong)bVar1, uVar5, param_5, param_6, param_7, param_8,
				    in_stack_ffffffb8);
				puVar3 = puVar3 + iVar2;
				*(undefined4 *)(puVar3 + 0x20) = 0xc;
				*(uint *)(puVar3 + 0x24) = (uint) * (byte *)(param_1 + 1);
				*(uint *)(puVar3 + 0x28) = (uint) * (byte *)(param_1 + 2);
				*(uint *)(puVar3 + 0x2c) = (uint) * (ushort *)(param_1 + 5);
				*(uint *)(puVar3 + 0xa4) = (uint) * (ushort *)(param_1 + 3);
				puVar3[0xa8] = puVar3[0xb0];
				puVar3[0xa9] = 2;
			}
		}
	}
	return 7;
}

undefined8
On_OPOBJXY(int param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f1948;
	puVar2 = PTR_DAT_100f1828;
	if ((*_DAT_100f1d14 != '\x01') && (iVar1 = (int)param_2 * 0x55ec, (uint)(byte)*PTR_DAT_100f17ec == *(uint *)(PTR_DAT_100f1828 + iVar1 + 0x34))) {
		*(undefined2 *)(param_1 + 3) = CONCAT11(*(undefined *)(param_1 + 4), *(undefined *)(param_1 + 3));
		if ((*(int *)(puVar3 + (uint) * (ushort *)(param_1 + 3) * 0x78 + 0x38) == 0) && (*(int *)(puVar3 + (uint) * (ushort *)(param_1 + 3) * 0x78 + 0x4c) == 0)) {
			MakePlrPath(param_2, (ulonglong) * (byte *)(param_1 + 1), (ulonglong) * (byte *)(param_1 + 2), 1,
			    param_5, param_6, param_7, param_8, in_stack_ffffffb8);
		} else {
			MakePlrPath(param_2, (ulonglong) * (byte *)(param_1 + 1), (ulonglong) * (byte *)(param_1 + 2), 0,
			    param_5, param_6, param_7, param_8, in_stack_ffffffb8);
		}
		*(undefined4 *)(puVar2 + iVar1 + 0x20) = 0xd;
		*(uint *)(puVar2 + iVar1 + 0x24) = (uint) * (ushort *)(param_1 + 3);
	}
	return 5;
}

undefined8
On_DISARMXY(int param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f1948;
	puVar2 = PTR_DAT_100f1828;
	if ((*_DAT_100f1d14 != '\x01') && (iVar1 = (int)param_2 * 0x55ec, (uint)(byte)*PTR_DAT_100f17ec == *(uint *)(PTR_DAT_100f1828 + iVar1 + 0x34))) {
		*(undefined2 *)(param_1 + 3) = CONCAT11(*(undefined *)(param_1 + 4), *(undefined *)(param_1 + 3));
		if ((*(int *)(puVar3 + (uint) * (ushort *)(param_1 + 3) * 0x78 + 0x38) == 0) && (*(int *)(puVar3 + (uint) * (ushort *)(param_1 + 3) * 0x78 + 0x4c) == 0)) {
			MakePlrPath(param_2, (ulonglong) * (byte *)(param_1 + 1), (ulonglong) * (byte *)(param_1 + 2), 1,
			    param_5, param_6, param_7, param_8, in_stack_ffffffb8);
		} else {
			MakePlrPath(param_2, (ulonglong) * (byte *)(param_1 + 1), (ulonglong) * (byte *)(param_1 + 2), 0,
			    param_5, param_6, param_7, param_8, in_stack_ffffffb8);
		}
		*(undefined4 *)(puVar2 + iVar1 + 0x20) = 0xe;
		*(uint *)(puVar2 + iVar1 + 0x24) = (uint) * (ushort *)(param_1 + 3);
	}
	return 5;
}

undefined8 On_OPOBJT(int param_1, int param_2)

{
	undefined *puVar1;

	if ((*_DAT_100f1d14 != '\x01') && (puVar1 = PTR_DAT_100f1828 + param_2 * 0x55ec, (uint)(byte)*PTR_DAT_100f17ec == *(uint *)(puVar1 + 0x34))) {
		*(undefined2 *)(param_1 + 1) = CONCAT11(*(undefined *)(param_1 + 2), *(undefined *)(param_1 + 1));
		*(undefined4 *)(puVar1 + 0x20) = 0x12;
		*(uint *)(puVar1 + 0x24) = (uint) * (ushort *)(param_1 + 1);
	}
	return 3;
}

undefined8
On_ATTACKID(int param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined *puVar1;
	int iVar2;
	int iVar3;
	undefined *puVar4;
	undefined *puVar5;
	longlong lVar6;
	longlong lVar7;
	undefined *puVar8;
	undefined4 in_stack_ffffffa8;

	puVar5 = PTR_DAT_100f187c;
	puVar4 = PTR_DAT_100f1828;
	if (*_DAT_100f1d14 != '\x01') {
		iVar3 = (int)param_2 * 0x55ec;
		puVar1 = PTR_DAT_100f1828 + iVar3;
		if ((uint)(byte)*PTR_DAT_100f17ec == *(uint *)(puVar1 + 0x34)) {
			puVar8 = PTR_DAT_100f187c + 0x28;
			*(undefined2 *)(param_1 + 1) = CONCAT11(*(undefined *)(param_1 + 2), *(undefined *)(param_1 + 1));
			lVar6 = abs((ulonglong) * (uint *)(puVar1 + 0x38) - (ulonglong) * (uint *)(puVar8 + (uint) * (ushort *)(param_1 + 1) * 0xe8));
			lVar7 = abs((ulonglong) * (uint *)(puVar1 + 0x3c) - (ulonglong) * (uint *)(puVar5 + 0x2c + (uint) * (ushort *)(param_1 + 1) * 0xe8));
			if ((1 < (int)lVar6) || (1 < (int)lVar7)) {
				iVar2 = (uint) * (ushort *)(param_1 + 1) * 0xe8;
				MakePlrPath(param_2, (ulonglong) * (uint *)(puVar8 + iVar2),
				    (ulonglong) * (uint *)(puVar5 + 0x2c + iVar2), 0, param_5, param_6, param_7, param_8,
				    in_stack_ffffffa8);
			}
			*(undefined4 *)(puVar4 + iVar3 + 0x20) = 0x14;
			*(uint *)(puVar4 + iVar3 + 0x24) = (uint) * (ushort *)(param_1 + 1);
		}
	}
	return 3;
}

undefined8 On_ATTACKPID(int iParm1, ulonglong uParm2)

{
	undefined *puVar1;
	undefined *puVar2;
	ulonglong uVar3;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_DAT_100f1828;
	uVar3 = ZEXT48(PTR_DAT_100f1828);
	if ((*_DAT_100f1d14 != '\x01') && (puVar1 = PTR_DAT_100f1828 + (int)uParm2 * 0x55ec, (uint)(byte)*PTR_DAT_100f17ec == *(uint *)(puVar1 + 0x34))) {
		*(undefined2 *)(iParm1 + 1) = CONCAT11(*(undefined *)(iParm1 + 2), *(undefined *)(iParm1 + 1));
		MakePlrPath(uParm2, (ulonglong) * (uint *)(puVar2 + (uint) * (ushort *)(iParm1 + 1) * 0x55ec + 0x40), (ulonglong) * (uint *)(puVar2 + (uint) * (ushort *)(iParm1 + 1) * 0x55ec + 0x44), 0,
		    uVar3, in_r8, in_r9, in_r10, in_stack_ffffffc8);
		*(undefined4 *)(puVar1 + 0x20) = 0x15;
		*(uint *)(puVar1 + 0x24) = (uint) * (ushort *)(iParm1 + 1);
	}
	return 3;
}

undefined8
On_RATTACKID(int param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined *puVar1;
	ulonglong uVar2;
	ulonglong uVar3;
	undefined4 in_stack_ffffffc8;

	uVar2 = ZEXT48(_DAT_100f1d14);
	uVar3 = ZEXT48(PTR_DAT_100f1828);
	if ((*_DAT_100f1d14 != '\x01') && (puVar1 = PTR_DAT_100f1828 + (int)param_2 * 0x55ec, (uint)(byte)*PTR_DAT_100f17ec == *(uint *)(puVar1 + 0x34))) {
		*(undefined2 *)(param_1 + 1) = CONCAT11(*(undefined *)(param_1 + 2), *(undefined *)(param_1 + 1));
		ClrPlrPath(param_2, param_2, uVar2, uVar3, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		*(undefined4 *)(puVar1 + 0x20) = 0x16;
		*(uint *)(puVar1 + 0x24) = (uint) * (ushort *)(param_1 + 1);
	}
	return 3;
}

undefined8
On_RATTACKPID(int param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined *puVar1;
	ulonglong uVar2;
	ulonglong uVar3;
	undefined4 in_stack_ffffffc8;

	uVar2 = ZEXT48(_DAT_100f1d14);
	uVar3 = ZEXT48(PTR_DAT_100f1828);
	if ((*_DAT_100f1d14 != '\x01') && (puVar1 = PTR_DAT_100f1828 + (int)param_2 * 0x55ec, (uint)(byte)*PTR_DAT_100f17ec == *(uint *)(puVar1 + 0x34))) {
		*(undefined2 *)(param_1 + 1) = CONCAT11(*(undefined *)(param_1 + 2), *(undefined *)(param_1 + 1));
		ClrPlrPath(param_2, param_2, uVar2, uVar3, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		*(undefined4 *)(puVar1 + 0x20) = 0x17;
		*(uint *)(puVar1 + 0x24) = (uint) * (ushort *)(param_1 + 1);
	}
	return 3;
}

undefined8
On_SPELLID(int param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	byte bVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	ulonglong uVar5;
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
	puVar4 = PTR_DAT_100f17ec;
	uVar5 = ZEXT48(PTR_DAT_100f17ec);
	if (*_DAT_100f1d14 != '\x01') {
		iVar2 = (int)param_2 * 0x55ec;
		bVar1 = *PTR_DAT_100f17ec;
		if ((uint)bVar1 == *(uint *)(PTR_DAT_100f1828 + iVar2 + 0x34)) {
			*(undefined2 *)(param_1 + 1) = CONCAT11(*(undefined *)(param_1 + 2), *(undefined *)(param_1 + 1));
			*(undefined2 *)(param_1 + 3) = CONCAT11(*(undefined *)(param_1 + 4), *(undefined *)(param_1 + 3));
			*(undefined2 *)(param_1 + 5) = CONCAT11(*(undefined *)(param_1 + 6), *(undefined *)(param_1 + 5));
			if ((*puVar4 == '\0') && (*(int *)(PTR_DAT_100f1934 + (uint) * (ushort *)(param_1 + 3) * 0x38 + 0x18) == 0)) {
				msg_errorf(PTR_s__s_has_cast_an_illegal_spell__100f3338, puVar3 + iVar2 + 0x13c, (uint)bVar1, puVar4, (int)param_5, param_6, param_7, param_8, in_stack_ffffffb8,
				    in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0,
				    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0,
				    in_stack_ffffffe4);
			} else {
				ClrPlrPath(param_2, param_2, (ulonglong)bVar1, uVar5, param_5, param_6, param_7, param_8,
				    in_stack_ffffffb8);
				puVar3 = puVar3 + iVar2;
				*(undefined4 *)(puVar3 + 0x20) = 0x18;
				*(uint *)(puVar3 + 0x24) = (uint) * (ushort *)(param_1 + 1);
				*(uint *)(puVar3 + 0x28) = (uint) * (ushort *)(param_1 + 5);
				*(uint *)(puVar3 + 0xa4) = (uint) * (ushort *)(param_1 + 3);
				puVar3[0xa8] = puVar3[0xb8];
				puVar3[0xa9] = 0;
			}
		}
	}
	return 7;
}

undefined8
On_SPELLPID(int param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	byte bVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	ulonglong uVar5;
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
	puVar4 = PTR_DAT_100f17ec;
	uVar5 = ZEXT48(PTR_DAT_100f17ec);
	if (*_DAT_100f1d14 != '\x01') {
		iVar2 = (int)param_2 * 0x55ec;
		bVar1 = *PTR_DAT_100f17ec;
		if ((uint)bVar1 == *(uint *)(PTR_DAT_100f1828 + iVar2 + 0x34)) {
			*(undefined2 *)(param_1 + 1) = CONCAT11(*(undefined *)(param_1 + 2), *(undefined *)(param_1 + 1));
			*(undefined2 *)(param_1 + 3) = CONCAT11(*(undefined *)(param_1 + 4), *(undefined *)(param_1 + 3));
			*(undefined2 *)(param_1 + 5) = CONCAT11(*(undefined *)(param_1 + 6), *(undefined *)(param_1 + 5));
			if ((*puVar4 == '\0') && (*(int *)(PTR_DAT_100f1934 + (uint) * (ushort *)(param_1 + 3) * 0x38 + 0x18) == 0)) {
				msg_errorf(PTR_s__s_has_cast_an_illegal_spell__100f3338, puVar3 + iVar2 + 0x13c, (uint)bVar1, puVar4, (int)param_5, param_6, param_7, param_8, in_stack_ffffffb8,
				    in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0,
				    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0,
				    in_stack_ffffffe4);
			} else {
				ClrPlrPath(param_2, param_2, (ulonglong)bVar1, uVar5, param_5, param_6, param_7, param_8,
				    in_stack_ffffffb8);
				puVar3 = puVar3 + iVar2;
				*(undefined4 *)(puVar3 + 0x20) = 0x19;
				*(uint *)(puVar3 + 0x24) = (uint) * (ushort *)(param_1 + 1);
				*(uint *)(puVar3 + 0x28) = (uint) * (ushort *)(param_1 + 5);
				*(uint *)(puVar3 + 0xa4) = (uint) * (ushort *)(param_1 + 3);
				puVar3[0xa8] = puVar3[0xb8];
				puVar3[0xa9] = 0;
			}
		}
	}
	return 7;
}

undefined8
On_TSPELLID(int param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	byte bVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	ulonglong uVar5;
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
	puVar4 = PTR_DAT_100f17ec;
	uVar5 = ZEXT48(PTR_DAT_100f17ec);
	if (*_DAT_100f1d14 != '\x01') {
		iVar2 = (int)param_2 * 0x55ec;
		bVar1 = *PTR_DAT_100f17ec;
		if ((uint)bVar1 == *(uint *)(PTR_DAT_100f1828 + iVar2 + 0x34)) {
			*(undefined2 *)(param_1 + 1) = CONCAT11(*(undefined *)(param_1 + 2), *(undefined *)(param_1 + 1));
			*(undefined2 *)(param_1 + 3) = CONCAT11(*(undefined *)(param_1 + 4), *(undefined *)(param_1 + 3));
			*(undefined2 *)(param_1 + 5) = CONCAT11(*(undefined *)(param_1 + 6), *(undefined *)(param_1 + 5));
			if ((*puVar4 == '\0') && (*(int *)(PTR_DAT_100f1934 + (uint) * (ushort *)(param_1 + 3) * 0x38 + 0x18) == 0)) {
				msg_errorf(PTR_s__s_has_cast_an_illegal_spell__100f3338, puVar3 + iVar2 + 0x13c, (uint)bVar1, puVar4, (int)param_5, param_6, param_7, param_8, in_stack_ffffffb8,
				    in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0,
				    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0,
				    in_stack_ffffffe4);
			} else {
				ClrPlrPath(param_2, param_2, (ulonglong)bVar1, uVar5, param_5, param_6, param_7, param_8,
				    in_stack_ffffffb8);
				puVar3 = puVar3 + iVar2;
				*(undefined4 *)(puVar3 + 0x20) = 0x18;
				*(uint *)(puVar3 + 0x24) = (uint) * (ushort *)(param_1 + 1);
				*(uint *)(puVar3 + 0x28) = (uint) * (ushort *)(param_1 + 5);
				*(uint *)(puVar3 + 0xa4) = (uint) * (ushort *)(param_1 + 3);
				puVar3[0xa8] = puVar3[0xb0];
				puVar3[0xa9] = 2;
			}
		}
	}
	return 7;
}

undefined8
On_TSPELLPID(int param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	byte bVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	ulonglong uVar5;
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
	puVar4 = PTR_DAT_100f17ec;
	uVar5 = ZEXT48(PTR_DAT_100f17ec);
	if (*_DAT_100f1d14 != '\x01') {
		iVar2 = (int)param_2 * 0x55ec;
		bVar1 = *PTR_DAT_100f17ec;
		if ((uint)bVar1 == *(uint *)(PTR_DAT_100f1828 + iVar2 + 0x34)) {
			*(undefined2 *)(param_1 + 1) = CONCAT11(*(undefined *)(param_1 + 2), *(undefined *)(param_1 + 1));
			*(undefined2 *)(param_1 + 3) = CONCAT11(*(undefined *)(param_1 + 4), *(undefined *)(param_1 + 3));
			*(undefined2 *)(param_1 + 5) = CONCAT11(*(undefined *)(param_1 + 6), *(undefined *)(param_1 + 5));
			if ((*puVar4 == '\0') && (*(int *)(PTR_DAT_100f1934 + (uint) * (ushort *)(param_1 + 3) * 0x38 + 0x18) == 0)) {
				msg_errorf(PTR_s__s_has_cast_an_illegal_spell__100f3338, puVar3 + iVar2 + 0x13c, (uint)bVar1, puVar4, (int)param_5, param_6, param_7, param_8, in_stack_ffffffb8,
				    in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0,
				    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0,
				    in_stack_ffffffe4);
			} else {
				ClrPlrPath(param_2, param_2, (ulonglong)bVar1, uVar5, param_5, param_6, param_7, param_8,
				    in_stack_ffffffb8);
				puVar3 = puVar3 + iVar2;
				*(undefined4 *)(puVar3 + 0x20) = 0x19;
				*(uint *)(puVar3 + 0x24) = (uint) * (ushort *)(param_1 + 1);
				*(uint *)(puVar3 + 0x28) = (uint) * (ushort *)(param_1 + 5);
				*(uint *)(puVar3 + 0xa4) = (uint) * (ushort *)(param_1 + 3);
				puVar3[0xa8] = puVar3[0xb0];
				puVar3[0xa9] = 2;
			}
		}
	}
	return 7;
}

undefined8
On_KNOCKBACK(int param_1, longlong param_2, undefined8 param_3, ulonglong param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	short sVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined4 in_stack_ffffffc8;

	puVar3 = PTR_DAT_100f1828;
	puVar2 = PTR_DAT_100f17ec;
	if (*_DAT_100f1d14 != '\x01') {
		sVar1 = CONCAT11(*(undefined *)(param_1 + 2), *(undefined *)(param_1 + 1));
		*(short *)(param_1 + 1) = sVar1;
		if ((uint)(byte)*puVar2 == *(uint *)(puVar3 + (int)param_2 * 0x55ec + 0x34)) {
			M_GetKnockback((ulonglong) * (ushort *)(param_1 + 1), (ulonglong)(byte)*puVar2, (longlong)sVar1,
			    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
			M_StartHit((ulonglong) * (ushort *)(param_1 + 1), param_2, 0, param_4, param_5, param_6, param_7,
			    param_8, in_stack_ffffffc8);
		}
	}
	return 3;
}

undefined8
On_RESURRECT(ulonglong param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	int iVar1;
	ulonglong uVar2;
	ulonglong uVar3;
	undefined4 uVar4;
	undefined4 uVar5;
	undefined4 uVar6;
	undefined4 uVar7;
	undefined4 in_stack_ffffffc8;

	iVar1 = (int)param_1;
	uVar7 = (undefined4)param_8;
	uVar6 = (undefined4)param_7;
	uVar5 = (undefined4)param_6;
	uVar4 = (undefined4)param_5;
	uVar3 = ZEXT48(_DAT_100f1d14);
	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 3, (char)param_1, (char)param_5, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffc8);
	} else {
		*(undefined2 *)(iVar1 + 1) = CONCAT11(*(undefined *)(iVar1 + 2), *(undefined *)(iVar1 + 1));
		uVar2 = (ulonglong) * (ushort *)(iVar1 + 1);
		DoResurrect(param_2, uVar2, uVar3, param_1, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		check_update_plr((int)param_2, uVar2, uVar3, iVar1, uVar4, uVar5, uVar6, uVar7, in_stack_ffffffc8);
	}
	return 3;
}

undefined8
On_HEALOTHER(int param_1, int param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	byte bVar1;
	undefined4 in_stack_ffffffc8;

	if ((*_DAT_100f1d14 != '\x01') && (bVar1 = *PTR_DAT_100f17ec, (uint)bVar1 == *(uint *)(PTR_DAT_100f1828 + param_2 * 0x55ec + 0x34))) {
		*(undefined2 *)(param_1 + 1) = CONCAT11(*(undefined *)(param_1 + 2), *(undefined *)(param_1 + 1));
		DoHealOther(param_2, (ulonglong) * (ushort *)(param_1 + 1), bVar1, (char)param_1, param_5, param_6,
		    param_7, param_8, in_stack_ffffffc8);
	}
	return 3;
}

undefined8
On_TALKXY(int param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined4 in_stack_ffffffc8;

	if ((*_DAT_100f1d14 != '\x01') && (puVar1 = PTR_DAT_100f1828 + (int)param_2 * 0x55ec, (uint)(byte)*PTR_DAT_100f17ec == *(uint *)(puVar1 + 0x34))) {
		*(undefined2 *)(param_1 + 3) = CONCAT11(*(undefined *)(param_1 + 4), *(undefined *)(param_1 + 3));
		MakePlrPath(param_2, (ulonglong) * (byte *)(param_1 + 1), (ulonglong) * (byte *)(param_1 + 2), 0,
		    param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		*(undefined4 *)(puVar1 + 0x20) = 0x11;
		*(uint *)(puVar1 + 0x24) = (uint) * (ushort *)(param_1 + 3);
	}
	return 5;
}

undefined8
On_NEWLVL(ulonglong param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    ulonglong param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined4 in_stack_ffffffc8;

	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 5, (char)param_1, (char)param_5, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffc8);
	} else {
		if ((int)param_2 != *(int *)PTR_DAT_100f1824) {
			iVar1 = (int)param_1;
			*(undefined2 *)(iVar1 + 1) = CONCAT11(*(undefined *)(iVar1 + 2), *(undefined *)(iVar1 + 1));
			*(undefined2 *)(iVar1 + 3) = CONCAT11(*(undefined *)(iVar1 + 4), *(undefined *)(iVar1 + 3));
			StartNewLvl(param_2, (ulonglong) * (ushort *)(iVar1 + 1), (ulonglong) * (ushort *)(iVar1 + 3),
			    param_1, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		}
	}
	return 5;
}

undefined8
On_WARP(ulonglong param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    ulonglong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined4 uVar2;
	int iVar3;
	undefined **ppuVar4;
	ulonglong uVar5;
	longlong lVar6;
	undefined7 uVar7;
	undefined uVar8;
	longlong lVar9;
	undefined4 in_stack_ffffffc8;

	uVar7 = (undefined7)(param_5 >> 8);
	uVar8 = (undefined)param_5;
	ppuVar4 = &toc;
	uVar5 = ZEXT48(_DAT_100f1d14);
	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 3, (char)param_1, uVar8, (char)param_6, (char)param_7, (char)param_8,
		    in_stack_ffffffc8);
	} else {
		iVar3 = (int)param_1;
		*(undefined2 *)(iVar3 + 1) = CONCAT11(*(undefined *)(iVar3 + 2), *(undefined *)(iVar3 + 1));
		StartWarpLvl(param_2, (ulonglong) * (ushort *)(iVar3 + 1), uVar5, param_1, param_5, (int)param_6,
		    (int)param_7, (int)param_8, in_stack_ffffffc8);
		uVar1 = *(uint *)ppuVar4[-0x1deb];
		if (((uint)param_2 == uVar1) && (0xb < *(int *)ppuVar4[-0x1dd1])) {
			lVar9 = 0x2e;
			uVar5 = ZEXT48(ppuVar4[-0x1da4]) + 0xb688;
			lVar6 = ZEXT48(ppuVar4[-0x1dea]) + (ulonglong)uVar1 * 0x55ec + 0x53cc;
			do {
				lVar6 = lVar6 + 8;
				uVar2 = ((undefined4 *)lVar6)[1];
				uVar5 = uVar5 + 8;
				*(undefined4 *)uVar5 = *(undefined4 *)lVar6;
				((undefined4 *)uVar5)[1] = uVar2;
				lVar9 = lVar9 + -1;
			} while (lVar9 != 0);
			AutoGetItem((ulonglong)uVar1, 0x7f, lVar6, uVar5, CONCAT71(uVar7, uVar8), param_6, param_7, param_8,
			    in_stack_ffffffc8);
		}
	}
	return 3;
}

undefined8
On_MONSTDEATH(undefined8 param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined4 in_stack_ffffffc8;

	puVar3 = PTR_DAT_100f1828;
	puVar2 = PTR_DAT_100f17ec;
	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 5, (undefined)param_4, (char)param_5, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffc8);
	} else {
		if ((int)param_2 != *(int *)PTR_DAT_100f1824) {
			iVar1 = (int)param_1;
			*(undefined2 *)(iVar1 + 3) = CONCAT11(*(undefined *)(iVar1 + 4), *(undefined *)(iVar1 + 3));
			if ((uint)(byte)*puVar2 == *(uint *)(puVar3 + (int)param_2 * 0x55ec + 0x34)) {
				M_SyncStartKill((ulonglong) * (ushort *)(iVar1 + 3), (uint) * (byte *)(iVar1 + 1),
				    (ulonglong) * (byte *)(iVar1 + 2), param_2, param_5, param_6, param_7, param_8,
				    in_stack_ffffffc8);
			}
			delta_kill_monster((uint) * (ushort *)(iVar1 + 3), *(undefined *)(iVar1 + 1), *(undefined *)(iVar1 + 2),
			    *(uint *)(puVar3 + (int)param_2 * 0x55ec + 0x34) & 0xff);
		}
	}
	return 5;
}

undefined8
On_KILLGOLEM(undefined8 param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	int iVar4;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_DAT_100f17ec;
	ppuVar3 = &toc;
	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 5, (undefined)param_4, (char)param_5, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffc8);
	} else {
		iVar4 = (int)param_2;
		if (iVar4 != *(int *)PTR_DAT_100f1824) {
			iVar1 = (int)param_1;
			*(undefined2 *)(iVar1 + 3) = CONCAT11(*(undefined *)(iVar1 + 4), *(undefined *)(iVar1 + 3));
			if ((uint)(byte)*puVar2 == (uint) * (ushort *)(iVar1 + 3)) {
				ppuVar3 = &toc;
				M_SyncStartKill(param_2, (uint) * (byte *)(iVar1 + 1), (ulonglong) * (byte *)(iVar1 + 2), param_2,
				    param_5, param_6, param_7, param_8, in_stack_ffffffc8);
			}
			delta_kill_monster(iVar4, *(undefined *)(iVar1 + 1), *(undefined *)(iVar1 + 2),
			    *(uint *)(ppuVar3[-0x1dea] + iVar4 * 0x55ec + 0x34) & 0xff);
		}
	}
	return 5;
}

undefined8
On_AWAKEGOLEM(undefined8 param_1, undefined8 param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	bool bVar7;
	ulonglong uVar8;
	int *piVar9;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;

	puVar6 = PTR_DAT_100f196c;
	puVar1 = PTR_DAT_100f1828;
	puVar5 = PTR_DAT_100f17ec;
	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 10, (char)PTR_DAT_100f1828, (char)param_1, (char)PTR_DAT_100f196c,
		    param_7, param_8, in_stack_ffffffc8);
	} else {
		iVar2 = (int)param_1;
		iVar4 = (int)param_2;
		*(uint *)(iVar2 + 5) = (uint) * (byte *)(iVar2 + 8) << 0x18 | (uint) * (byte *)(iVar2 + 7) << 0x10 | (uint) * (byte *)(iVar2 + 6) << 8 | (uint) * (byte *)(iVar2 + 5);
		if ((uint)(byte)*puVar5 == *(uint *)(puVar1 + iVar4 * 0x55ec + 0x34)) {
			if (iVar4 != *(int *)PTR_DAT_100f1824) {
				bVar3 = true;
				uVar8 = (ulonglong) * (uint *)PTR_DAT_100f1968;
				piVar9 = (int *)PTR_DAT_100f1970;
				bVar7 = true;
				if (0 < (int)*(uint *)PTR_DAT_100f1968) {
					do {
						bVar3 = bVar7;
						if ((*(int *)(puVar6 + *piVar9 * 0xb4) == 0x21) && (iVar4 == *(int *)(puVar6 + *piVar9 * 0xb4 + 0x78))) {
							bVar3 = false;
						}
						piVar9 = piVar9 + 1;
						uVar8 = uVar8 - 1;
						bVar7 = bVar3;
					} while (uVar8 != 0);
				}
				if (bVar3) {
					puVar1 = puVar1 + iVar4 * 0x55ec;
					AddMissile((ulonglong) * (uint *)(puVar1 + 0x38), (ulonglong) * (uint *)(puVar1 + 0x3c),
					    (ulonglong) * (byte *)(iVar2 + 1), (ulonglong) * (byte *)(iVar2 + 2),
					    (ulonglong) * (byte *)(iVar2 + 3), 0x21, 0, param_2, in_stack_ffffffc8,
					    in_stack_ffffffcf, 0, 1);
				}
			}
		} else {
			delta_sync_golem(iVar2, iVar4, (uint) * (byte *)(iVar2 + 9));
		}
	}
	return 10;
}

undefined8
On_MONSTDAMAGE(undefined8 param_1, longlong param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	int iVar5;
	undefined *puVar6;
	undefined4 in_stack_ffffffc8;

	puVar3 = PTR_DAT_100f187c;
	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 5, (char)_DAT_100f1d14, param_5, (char)PTR_DAT_100f187c, param_7,
		    param_8, in_stack_ffffffc8);
	} else {
		if ((int)param_2 != *(int *)PTR_DAT_100f1824) {
			iVar5 = (int)param_1;
			*(undefined2 *)(iVar5 + 1) = CONCAT11(*(undefined *)(iVar5 + 2), *(undefined *)(iVar5 + 1));
			puVar6 = PTR_DAT_100f1828;
			puVar4 = PTR_DAT_100f17ec;
			*(undefined2 *)(iVar5 + 3) = CONCAT11(*(undefined *)(iVar5 + 4), *(undefined *)(iVar5 + 3));
			uVar1 = *(uint *)(puVar6 + (int)param_2 * 0x55ec + 0x34);
			if ((uint)(byte)*puVar4 == uVar1) {
				puVar4 = puVar3 + 0x98;
				puVar3 = puVar3 + (uint) * (ushort *)(iVar5 + 1) * 0xe8;
				puVar3[0xc3] = puVar3[0xc3] | (byte)(1 << param_2);
				iVar2 = *(int *)(puVar4 + (uint) * (ushort *)(iVar5 + 1) * 0xe8);
				if (iVar2 != 0) {
					*(uint *)(puVar4 + (uint) * (ushort *)(iVar5 + 1) * 0xe8) = iVar2 - (uint) * (ushort *)(iVar5 + 3);
					if (*(int *)(puVar4 + (uint) * (ushort *)(iVar5 + 1) * 0xe8) >> 6 < 1) {
						*(int *)(puVar4 + (uint) * (ushort *)(iVar5 + 1) * 0xe8) = 0x40;
					}
					delta_monster_hp((uint) * (ushort *)(iVar5 + 1),
					    *(int *)(puVar4 + (uint) * (ushort *)(iVar5 + 1) * 0xe8), uVar1 & 0xff);
				}
			}
		}
	}
	return 5;
}

undefined8
On_PLRDEAD(undefined8 param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	int iVar1;
	ulonglong uVar2;
	undefined4 in_stack_ffffffc8;

	uVar2 = ZEXT48(_DAT_100f1d14);
	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 3, (char)param_1, (char)param_5, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffc8);
	} else {
		iVar1 = (int)param_1;
		if ((int)param_2 == *(int *)PTR_DAT_100f1824) {
			check_update_plr((int)param_2, param_2, uVar2, iVar1, (int)param_5, (int)param_6, (int)param_7,
			    (int)param_8, in_stack_ffffffc8);
		} else {
			*(undefined2 *)(iVar1 + 1) = CONCAT11(*(undefined *)(iVar1 + 2), *(undefined *)(iVar1 + 1));
			StartPlayerKill(param_2, (uint) * (ushort *)(iVar1 + 1), uVar2, param_1, param_5, param_6, param_7,
			    param_8, in_stack_ffffffc8);
		}
	}
	return 3;
}

undefined8
On_PLRDAMAGE(int param_1, int param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	longlong lVar1;
	longlong lVar2;
	uint uVar3;
	uint uVar4;
	uint uVar5;
	uint *puVar6;
	int *piVar7;
	undefined *puVar8;
	undefined *puVar9;
	ulonglong uVar10;
	longlong lVar11;
	undefined4 in_stack_ffffffc8;

	puVar8 = PTR_DAT_100f1828;
	puVar9 = PTR_DAT_100f1824;
	uVar10 = ZEXT48(PTR_DAT_100f1828);
	*(uint *)(param_1 + 2) = (uint) * (byte *)(param_1 + 5) << 0x18 | (uint) * (byte *)(param_1 + 4) << 0x10 | (uint) * (byte *)(param_1 + 3) << 8 | (uint) * (byte *)(param_1 + 2);
	uVar3 = *(uint *)puVar9;
	if (((((uint) * (byte *)(param_1 + 1) == uVar3) && (*PTR_DAT_100f17ec != 0)) && (*_DAT_100f1d14 != '\x01')) && (((uint)(byte)*PTR_DAT_100f17ec == *(uint *)(puVar8 + param_2 * 0x55ec + 0x34) && (*(uint *)(param_1 + 2) < 0x2ee01)))) {
		lVar11 = (ulonglong)uVar3 * 0x55ec;
		lVar1 = uVar10 + lVar11 + 0x194;
		puVar6 = (uint *)lVar1;
		if ((int)*puVar6 >> 6 != 0) {
			puVar8 = puVar8 + (int)lVar11;
			*(undefined4 *)PTR_DAT_100f18e0 = 1;
			uVar4 = *(uint *)(param_1 + 2);
			*puVar6 = *puVar6 - uVar4;
			lVar2 = uVar10 + lVar11 + 0x18c;
			piVar7 = (int *)lVar2;
			*piVar7 = *(int *)((int)(uVar10 + lVar11) + 0x18c) - *(int *)(param_1 + 2);
			uVar5 = *(uint *)(puVar8 + 0x198);
			if ((int)uVar5 < (int)*puVar6) {
				*puVar6 = uVar5;
				*piVar7 = *(int *)(puVar8 + 400);
			}
			if ((int)*puVar6 >> 6 == 0) {
				SyncPlrKill((ulonglong)uVar3, 1, (ulonglong)uVar5, (ulonglong)uVar4, uVar10, lVar1, lVar11, lVar2,
				    in_stack_ffffffc8);
			}
		}
	}
	return 6;
}

undefined8
On_OPENDOOR(undefined8 param_1, undefined8 param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined uVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined4 in_stack_ffffffc8;

	puVar4 = PTR_DAT_100f1828;
	puVar3 = PTR_DAT_100f17ec;
	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	} else {
		iVar2 = (int)param_1;
		uVar1 = *(undefined *)(iVar2 + 1);
		*(undefined2 *)(iVar2 + 1) = CONCAT11(*(undefined *)(iVar2 + 2), uVar1);
		if ((uint)(byte)*puVar3 == *(uint *)(puVar4 + (int)param_2 * 0x55ec + 0x34)) {
			SyncOpObject(param_2, 0x2b, (uint) * (ushort *)(iVar2 + 1), uVar1, param_5, param_6, param_7, param_8,
			    in_stack_ffffffc8);
		}
		delta_sync_object((uint) * (ushort *)(iVar2 + 1), 0x2b,
		    *(uint *)(puVar4 + (int)param_2 * 0x55ec + 0x34) & 0xff);
	}
	return 3;
}

undefined8
On_CLOSEDOOR(undefined8 param_1, undefined8 param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined uVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined4 in_stack_ffffffc8;

	puVar4 = PTR_DAT_100f1828;
	puVar3 = PTR_DAT_100f17ec;
	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	} else {
		iVar2 = (int)param_1;
		uVar1 = *(undefined *)(iVar2 + 1);
		*(undefined2 *)(iVar2 + 1) = CONCAT11(*(undefined *)(iVar2 + 2), uVar1);
		if ((uint)(byte)*puVar3 == *(uint *)(puVar4 + (int)param_2 * 0x55ec + 0x34)) {
			SyncOpObject(param_2, 0x2c, (uint) * (ushort *)(iVar2 + 1), uVar1, param_5, param_6, param_7, param_8,
			    in_stack_ffffffc8);
		}
		delta_sync_object((uint) * (ushort *)(iVar2 + 1), 0x2c,
		    *(uint *)(puVar4 + (int)param_2 * 0x55ec + 0x34) & 0xff);
	}
	return 3;
}

undefined8
On_OPERATEOBJ(undefined8 param_1, undefined8 param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined uVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined4 in_stack_ffffffc8;

	puVar4 = PTR_DAT_100f1828;
	puVar3 = PTR_DAT_100f17ec;
	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	} else {
		iVar2 = (int)param_1;
		uVar1 = *(undefined *)(iVar2 + 1);
		*(undefined2 *)(iVar2 + 1) = CONCAT11(*(undefined *)(iVar2 + 2), uVar1);
		if ((uint)(byte)*puVar3 == *(uint *)(puVar4 + (int)param_2 * 0x55ec + 0x34)) {
			SyncOpObject(param_2, 0x2d, (uint) * (ushort *)(iVar2 + 1), uVar1, param_5, param_6, param_7, param_8,
			    in_stack_ffffffc8);
		}
		delta_sync_object((uint) * (ushort *)(iVar2 + 1), 0x2d,
		    *(uint *)(puVar4 + (int)param_2 * 0x55ec + 0x34) & 0xff);
	}
	return 3;
}

undefined8
On_PLROPOBJ(undefined8 param_1, undefined8 param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined4 in_stack_ffffffc8;

	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 5, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	} else {
		iVar1 = (int)param_1;
		*(undefined2 *)(iVar1 + 1) = CONCAT11(*(undefined *)(iVar1 + 2), *(undefined *)(iVar1 + 1));
		puVar3 = PTR_DAT_100f1828;
		puVar2 = PTR_DAT_100f17ec;
		*(undefined2 *)(iVar1 + 3) = CONCAT11(*(undefined *)(iVar1 + 4), *(undefined *)(iVar1 + 3));
		if ((uint)(byte)*puVar2 == *(uint *)(puVar3 + (int)param_2 * 0x55ec + 0x34)) {
			SyncOpObject((ulonglong) * (ushort *)(iVar1 + 1), 0x2e, (uint) * (ushort *)(iVar1 + 3), param_4,
			    param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		}
		delta_sync_object((uint) * (ushort *)(iVar1 + 3), 0x2e,
		    *(uint *)(puVar3 + (int)param_2 * 0x55ec + 0x34) & 0xff);
	}
	return 5;
}

undefined8
On_BREAKOBJ(undefined8 param_1, undefined8 param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined4 in_stack_ffffffc8;

	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 5, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	} else {
		iVar1 = (int)param_1;
		*(undefined2 *)(iVar1 + 1) = CONCAT11(*(undefined *)(iVar1 + 2), *(undefined *)(iVar1 + 1));
		puVar3 = PTR_DAT_100f1828;
		puVar2 = PTR_DAT_100f17ec;
		*(undefined2 *)(iVar1 + 3) = CONCAT11(*(undefined *)(iVar1 + 4), *(undefined *)(iVar1 + 3));
		if ((uint)(byte)*puVar2 == *(uint *)(puVar3 + (int)param_2 * 0x55ec + 0x34)) {
			SyncBreakObj((ulonglong) * (ushort *)(iVar1 + 1), (ulonglong) * (ushort *)(iVar1 + 3));
		}
		delta_sync_object((uint) * (ushort *)(iVar1 + 3), 0x2f,
		    *(uint *)(puVar3 + (int)param_2 * 0x55ec + 0x34) & 0xff);
	}
	return 5;
}

undefined8
On_CHANGEPLRITEMS(undefined8 uParm1, ulonglong uParm2, undefined8 uParm3, undefined param_4,
    undefined param_5, undefined8 uParm6, ulonglong uParm7, ulonglong uParm8)

{
	int iVar1;
	undefined *puVar2;
	undefined4 in_stack_ffffffc8;

	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(uParm2, uParm1, 0xb, param_4, param_5, (char)uParm1, (char)uParm7, (char)uParm8,
		    in_stack_ffffffc8);
	} else {
		iVar1 = (int)uParm1;
		*(undefined2 *)(iVar1 + 2) = CONCAT11(*(undefined *)(iVar1 + 3), *(undefined *)(iVar1 + 2));
		*(undefined2 *)(iVar1 + 4) = CONCAT11(*(undefined *)(iVar1 + 5), *(undefined *)(iVar1 + 4));
		puVar2 = PTR_DAT_100f1824;
		*(uint *)(iVar1 + 6) = (uint) * (byte *)(iVar1 + 9) << 0x18 | (uint) * (byte *)(iVar1 + 8) << 0x10 | (uint) * (byte *)(iVar1 + 7) << 8 | (uint) * (byte *)(iVar1 + 6);
		if ((int)uParm2 != *(int *)puVar2) {
			CheckInvSwap(uParm2, *(byte *)(iVar1 + 1), (uint) * (ushort *)(iVar1 + 2),
			    (ulonglong) * (ushort *)(iVar1 + 4), (ulonglong) * (uint *)(iVar1 + 6),
			    (ulonglong) * (byte *)(iVar1 + 10), uParm7, uParm8, in_stack_ffffffc8);
		}
	}
	return 0xb;
}

undefined8
On_DELPLRITEMS(ulonglong param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 2, (char)param_1, (char)param_5, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffc8);
	} else {
		if ((int)param_2 != *(int *)PTR_DAT_100f1824) {
			inv_update_rem_item(param_2, (uint) * (byte *)((int)param_1 + 1), ZEXT48(_DAT_100f1d14), param_1, param_5,
			    param_6, param_7, param_8, in_stack_ffffffc8);
		}
	}
	return 2;
}

undefined8
On_PLRLEVEL(undefined8 param_1, undefined8 param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined4 in_stack_ffffffc8;

	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 3, (char)param_1, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	} else {
		iVar1 = (int)param_1;
		*(undefined2 *)(iVar1 + 1) = CONCAT11(*(undefined *)(iVar1 + 2), *(undefined *)(iVar1 + 1));
		if ((*(ushort *)(iVar1 + 1) < 0x34) && ((int)param_2 != *(int *)PTR_DAT_100f1824)) {
			PTR_DAT_100f1828[(int)param_2 * 0x55ec + 0x1b4] = (char)*(ushort *)(iVar1 + 1);
		}
	}
	return 3;
}

undefined8
On_DROPITEM(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined4 in_stack_ffffffc8;

	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 0x16, (char)param_1, (char)param_5, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffc8);
	} else {
		iVar1 = (int)param_1;
		*(undefined2 *)(iVar1 + 3) = CONCAT11(*(undefined *)(iVar1 + 4), *(undefined *)(iVar1 + 3));
		*(undefined2 *)(iVar1 + 5) = CONCAT11(*(undefined *)(iVar1 + 6), *(undefined *)(iVar1 + 5));
		*(uint *)(iVar1 + 7) = (uint) * (byte *)(iVar1 + 10) << 0x18 | (uint) * (byte *)(iVar1 + 9) << 0x10 | (uint) * (byte *)(iVar1 + 8) << 8 | (uint) * (byte *)(iVar1 + 7);
		*(undefined2 *)(iVar1 + 0x10) = CONCAT11(*(undefined *)(iVar1 + 0x11), *(undefined *)(iVar1 + 0x10));
		puVar2 = PTR_DAT_100f1828;
		*(uint *)(iVar1 + 0x12) = (uint) * (byte *)(iVar1 + 0x15) << 0x18 | (uint) * (byte *)(iVar1 + 0x14) << 0x10 | (uint) * (byte *)(iVar1 + 0x13) << 8 | (uint) * (byte *)(iVar1 + 0x12);
		delta_put_item(iVar1, *(byte *)(iVar1 + 1), (ulonglong) * (byte *)(iVar1 + 2),
		    (ulonglong)(*(uint *)(puVar2 + (int)param_2 * 0x55ec + 0x34) & 0xff), param_5,
		    param_6, param_7, param_8, in_stack_ffffffc8);
	}
	return 0x16;
}

longlong On_SEND_PLRINFO(undefined8 param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    ulonglong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	byte *pbVar1;
	undefined8 uVar2;
	undefined4 in_stack_ffffffc8;
	undefined local_8;
	undefined uStack7;

	pbVar1 = (byte *)param_1;
	uStack7 = (undefined) * (undefined2 *)(pbVar1 + 3);
	local_8 = (undefined)((ushort) * (undefined2 *)(pbVar1 + 3) >> 8);
	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, (uint)CONCAT11(uStack7, local_8) + 5, (char)param_1, (char)param_5,
		    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffc8);
	} else {
		*(ushort *)(pbVar1 + 1) = CONCAT11(pbVar1[2], pbVar1[1]);
		*(ushort *)(pbVar1 + 3) = CONCAT11(pbVar1[4], pbVar1[3]);
		uVar2 = countLeadingZeros(2 - (uint)*pbVar1);
		recv_plrinfo(param_2, (int)pbVar1, (uint)uVar2 >> 5 & 0xff, param_1, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	}
	return (ulonglong)CONCAT11(uStack7, local_8) + 5;
}

void On_ACK_PLRINFO(undefined8 param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    ulonglong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	On_SEND_PLRINFO(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

undefined8
On_PLAYER_JOINLEVEL(undefined8 param_1, ulonglong param_2, undefined8 param_3, ulonglong param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	byte *pbVar1;
	int *piVar2;
	int iVar3;
	undefined4 *puVar4;
	undefined *puVar5;
	int iVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined8 uVar10;
	undefined **ppuVar11;
	int iVar12;
	undefined4 uVar13;
	ulonglong uVar14;
	ulonglong uVar15;
	longlong lVar16;
	undefined4 uVar17;
	undefined4 uVar18;
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

	puVar5 = PTR_DAT_100f1828;
	puVar7 = PTR_DAT_100f1824;
	ppuVar11 = &toc;
	uVar15 = ZEXT48(_DAT_100f1d14);
	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 5, (char)param_4, (undefined)param_5, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffa8);
	} else {
		iVar6 = (int)param_1;
		lVar16 = ZEXT48(PTR_DAT_100f1828) + param_2 * 0x55ec;
		*(undefined2 *)(iVar6 + 3) = CONCAT11(*(undefined *)(iVar6 + 4), *(undefined *)(iVar6 + 3));
		iVar12 = (int)lVar16;
		*(undefined *)(iVar12 + 0x13b) = 0;
		iVar3 = (int)(param_2 * 0x55ec);
		if ((*(char *)(iVar12 + 0x13c) != '\0') && (*(char *)(iVar12 + 0x1d) == '\0')) {
			*(undefined *)(iVar12 + 0x1d) = 1;
			puVar9 = PTR_s_Player___s___level__d__just_join_100f3334;
			puVar8 = PTR_DAT_100f1f2c;
			param_4 = ZEXT48(PTR_DAT_100f1f2c);
			*PTR_DAT_100f1f2c = *PTR_DAT_100f1f2c + '\x01';
			uVar15 = SEXT18(*(char *)(iVar12 + 0x1b4));
			ppuVar11 = &toc;
			EventPlrMsg(puVar9, puVar5 + iVar3 + 0x13c, (int)*(char *)(iVar12 + 0x1b4), puVar8, iVar12,
			    (int)param_6, (int)param_7, (int)param_8, in_stack_ffffffa8, in_stack_ffffffaf,
			    in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4,
			    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
		}
		puVar4 = (undefined4 *)(puVar5 + iVar3);
		if ((*(char *)((int)puVar4 + 0x1d) != '\0') && (*(int *)puVar7 != (int)param_2)) {
			pbVar1 = ppuVar11[-0x1df9];
			puVar4[0xe] = (uint) * (byte *)(iVar6 + 1);
			puVar4[0xf] = (uint) * (byte *)(iVar6 + 2);
			puVar4[0xd] = (uint) * (ushort *)(iVar6 + 3);
			puVar4[0x85] = 0;
			if ((uint)*pbVar1 == puVar4[0xd]) {
				uVar14 = 1;
				LoadPlrGFX(param_2);
				SyncInitPlr(param_2, uVar14, uVar15, param_4, lVar16, (int)param_6, (int)param_7, (int)param_8,
				    in_stack_ffffffa8);
				uVar18 = (undefined4)param_8;
				uVar17 = (undefined4)param_7;
				uVar13 = (undefined4)param_6;
				if ((int)puVar4[0x65] >> 6 == 0) {
					puVar4[0x1e] = 0;
					LoadPlrGFX(param_2, 0x80);
					*puVar4 = 8;
					NewPlrAnim(param_2, puVar4 + 0x102, (ulonglong)(uint)puVar4[0x112], 1,
					    (ulonglong)(uint)puVar4[0x113], uVar13, uVar17, uVar18, in_stack_ffffffa8);
					piVar2 = (int *)ppuVar11[-0x1de7];
					puVar4[0x23] = puVar4[0x22] + -1;
					puVar4[0x7b] = puVar4[0x22] << 1;
					iVar12 = puVar4[0xe] * 0x70 + puVar4[0xf];
					*(byte *)(*piVar2 + iVar12) = *(byte *)(*piVar2 + iVar12) | 4;
				} else {
					StartStand(param_2, 0, uVar15, param_4, lVar16, param_6, param_7, param_8, in_stack_ffffffa8);
				}
				puVar5 = puVar5 + iVar3;
				uVar10 = countLeadingZeros(*(int *)puVar7 - (int)param_2);
				uVar13 = FUN_100bb33c(puVar4[0xe], puVar4[0xf], (int)(char)puVar5[0x13a],
				    (uint)uVar10 >> 5 & 0xff);
				*(undefined4 *)(puVar5 + 0xa0) = uVar13;
				*(undefined4 *)(puVar5 + 0x9c) = 0xffffffff;
			}
		}
	}
	return 5;
}

undefined8
On_ACTIVATEPORTAL(undefined8 param_1, undefined8 param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	bool bVar2;
	undefined *puVar3;
	bool bVar4;
	ulonglong uVar5;
	undefined **ppuVar6;
	int iVar7;
	int *piVar8;
	byte bVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f196c;
	ppuVar6 = &toc;
	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 9, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	} else {
		iVar1 = (int)param_1;
		*(undefined2 *)(iVar1 + 3) = CONCAT11(*(undefined *)(iVar1 + 4), *(undefined *)(iVar1 + 3));
		*(undefined2 *)(iVar1 + 5) = CONCAT11(*(undefined *)(iVar1 + 6), *(undefined *)(iVar1 + 5));
		*(undefined2 *)(iVar1 + 7) = CONCAT11(*(undefined *)(iVar1 + 8), *(undefined *)(iVar1 + 7));
		bVar9 = *(byte *)(iVar1 + 2);
		uVar10 = (undefined) * (ushort *)(iVar1 + 3);
		uVar11 = (undefined) * (ushort *)(iVar1 + 5);
		uVar12 = (undefined) * (ushort *)(iVar1 + 7);
		iVar7 = (int)param_2;
		ActivatePortal(iVar7, (uint) * (byte *)(iVar1 + 1), (uint)bVar9, (uint) * (ushort *)(iVar1 + 3),
		    (uint) * (ushort *)(iVar1 + 5), (uint) * (ushort *)(iVar1 + 7));
		if (iVar7 != *(int *)ppuVar6[-0x1deb]) {
			if (*ppuVar6[-0x1df9] == 0) {
				AddInTownPortal(param_2, 0, bVar9, uVar10, uVar11, uVar12, param_7, param_8, in_stack_ffffffb8);
			} else {
				if ((uint)(byte)*ppuVar6[-0x1df9] == *(uint *)(ppuVar6[-0x1dea] + iVar7 * 0x55ec + 0x34)) {
					bVar2 = true;
					piVar8 = (int *)ppuVar6[-0x1d98];
					uVar5 = (ulonglong) * (uint *)ppuVar6[-0x1d9a];
					bVar4 = true;
					if (0 < (int)*(uint *)ppuVar6[-0x1d9a]) {
						do {
							bVar2 = bVar4;
							if ((*(int *)(puVar3 + *piVar8 * 0xb4) == 10) && (iVar7 == *(int *)(puVar3 + *piVar8 * 0xb4 + 0x78))) {
								bVar2 = false;
							}
							piVar8 = piVar8 + 1;
							uVar5 = uVar5 - 1;
							bVar4 = bVar2;
						} while (uVar5 != 0);
					}
					if (bVar2) {
						AddWarpMissile(param_2, (ulonglong) * (byte *)(iVar1 + 1), (ulonglong) * (byte *)(iVar1 + 2),
						    uVar10, uVar11, uVar12, param_7, param_8, in_stack_ffffffb8);
					}
				} else {
					RemovePortalMissile(param_2);
				}
			}
		}
		delta_open_portal(iVar7, *(undefined *)(iVar1 + 1), *(undefined *)(iVar1 + 2),
		    (char)*(undefined2 *)(iVar1 + 3), (char)*(undefined2 *)(iVar1 + 5),
		    (char)*(undefined2 *)(iVar1 + 7));
	}
	return 9;
}

undefined8
On_DEACTIVATEPORTAL(undefined8 param_1, undefined8 param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined8 uVar1;
	undefined uVar2;
	undefined uVar3;
	undefined uVar4;
	undefined4 in_stack_ffffffc8;

	uVar4 = (undefined)param_1;
	uVar3 = SUB41(_DAT_100f1d14, 0);
	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 1, uVar4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	} else {
		uVar2 = (char)param_2;
		uVar1 = PortalOnLevel((int)param_2);
		if ((int)uVar1 != 0) {
			RemovePortalMissile(param_2);
		}
		DeactivatePortal((int)param_2);
		RemovePlrPortal((char)param_2, uVar2, uVar3, uVar4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	}
	return 1;
}

undefined8
On_RETOWN(ulonglong param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    ulonglong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	char *pcVar2;
	ulonglong uVar3;
	ulonglong uVar4;
	undefined7 uVar5;
	undefined uVar6;
	undefined7 uVar7;
	undefined uVar8;
	undefined7 uVar9;
	undefined uVar10;
	undefined7 uVar11;
	undefined uVar12;
	undefined4 in_stack_ffffffc8;

	pcVar2 = _DAT_100f1d14;
	puVar1 = PTR_DAT_100f1a04;
	uVar11 = (undefined7)((ulonglong)param_8 >> 8);
	uVar12 = (undefined)param_8;
	uVar9 = (undefined7)((ulonglong)param_7 >> 8);
	uVar10 = (undefined)param_7;
	uVar7 = (undefined7)((ulonglong)param_6 >> 8);
	uVar8 = (undefined)param_6;
	uVar5 = (undefined7)(param_5 >> 8);
	uVar6 = (undefined)param_5;
	uVar4 = ZEXT48(_DAT_100f1d14);
	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 1, (char)param_1, uVar6, uVar8, uVar10, uVar12, in_stack_ffffffc8);
	} else {
		uVar3 = param_2;
		if ((int)param_2 == *(int *)PTR_DAT_100f1824) {
			*(undefined4 *)PTR_DAT_100f1a04 = 0;
			uVar3 = param_2;
			gamemenu_off((char)puVar1, (char)param_2, (char)pcVar2, (char)param_1, uVar6, uVar8, uVar10, uVar12,
			    in_stack_ffffffc8);
		}
		RestartTownLvl(param_2, uVar3, uVar4, param_1, CONCAT71(uVar5, uVar6), CONCAT71(uVar7, uVar8),
		    CONCAT71(uVar9, uVar10), CONCAT71(uVar11, uVar12), in_stack_ffffffc8);
	}
	return 1;
}

undefined8
On_SETSTR(ulonglong param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    ulonglong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	ushort uVar1;
	int iVar2;
	undefined4 in_stack_ffffffc8;

	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 3, (char)param_1, (char)param_5, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffc8);
	} else {
		iVar2 = (int)param_1;
		*(undefined2 *)(iVar2 + 1) = CONCAT11(*(undefined *)(iVar2 + 2), *(undefined *)(iVar2 + 1));
		uVar1 = *(ushort *)(iVar2 + 1);
		if ((uVar1 < 0x2ef) && ((int)param_2 != *(int *)PTR_DAT_100f1824)) {
			SetPlrStr(param_2, (uint)uVar1, (ulonglong)uVar1, param_1, param_5, param_6, param_7, param_8,
			    in_stack_ffffffc8);
		}
	}
	return 3;
}

undefined8
On_SETDEX(ulonglong param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    ulonglong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	ushort uVar1;
	int iVar2;
	undefined4 in_stack_ffffffc8;

	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 3, (char)param_1, (char)param_5, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffc8);
	} else {
		iVar2 = (int)param_1;
		*(undefined2 *)(iVar2 + 1) = CONCAT11(*(undefined *)(iVar2 + 2), *(undefined *)(iVar2 + 1));
		uVar1 = *(ushort *)(iVar2 + 1);
		if ((uVar1 < 0x2ef) && ((int)param_2 != *(int *)PTR_DAT_100f1824)) {
			SetPlrDex(param_2, (uint)uVar1, (ulonglong)uVar1, param_1, param_5, param_6, param_7, param_8,
			    in_stack_ffffffc8);
		}
	}
	return 3;
}

undefined8
On_SETMAG(ulonglong param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    ulonglong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	ushort uVar1;
	int iVar2;
	undefined4 in_stack_ffffffc8;

	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 3, (char)param_1, (char)param_5, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffc8);
	} else {
		iVar2 = (int)param_1;
		*(undefined2 *)(iVar2 + 1) = CONCAT11(*(undefined *)(iVar2 + 2), *(undefined *)(iVar2 + 1));
		uVar1 = *(ushort *)(iVar2 + 1);
		if ((uVar1 < 0x2ef) && ((int)param_2 != *(int *)PTR_DAT_100f1824)) {
			SetPlrMag(param_2, (uint)uVar1, (ulonglong)uVar1, param_1, param_5, param_6, param_7, param_8,
			    in_stack_ffffffc8);
		}
	}
	return 3;
}

undefined8
On_SETVIT(ulonglong param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    ulonglong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	ushort uVar1;
	int iVar2;
	undefined4 in_stack_ffffffc8;

	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 3, (char)param_1, (char)param_5, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffc8);
	} else {
		iVar2 = (int)param_1;
		*(undefined2 *)(iVar2 + 1) = CONCAT11(*(undefined *)(iVar2 + 2), *(undefined *)(iVar2 + 1));
		uVar1 = *(ushort *)(iVar2 + 1);
		if ((uVar1 < 0x2ef) && ((int)param_2 != *(int *)PTR_DAT_100f1824)) {
			SetPlrVit(param_2, (uint)uVar1, (ulonglong)uVar1, param_1, param_5, param_6, param_7, param_8,
			    in_stack_ffffffc8);
		}
	}
	return 3;
}

void On_STRING(longlong param_1, undefined8 param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	On_STRING2(param_2, param_1, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

undefined8
On_SYNCQUEST(undefined8 param_1, undefined8 param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined **ppuVar2;
	undefined4 in_stack_ffffffc8;

	ppuVar2 = &toc;
	if (*_DAT_100f1d14 == '\x01') {
		msg_send_packet(param_2, param_1, 5, (char)param_1, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	} else {
		if ((int)param_2 != *(int *)PTR_DAT_100f1824) {
			iVar1 = (int)param_1;
			ppuVar2 = &toc;
			SetMultiQuest((uint) * (byte *)(iVar1 + 1), (ulonglong) * (byte *)(iVar1 + 2),
			    (uint) * (byte *)(iVar1 + 3), (uint) * (byte *)(iVar1 + 4));
		}
		*(undefined *)(ppuVar2 + -0x134c) = 1;
	}
	return 5;
}

undefined8
On_ENDSHIELD(undefined8 param_1, int param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	int iVar7;
	uint *puVar8;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f196c;
	puVar2 = PTR_DAT_100f1968;
	lVar6 = (longlong)param_8;
	lVar5 = (longlong)param_7;
	lVar4 = (longlong)param_6;
	if (((*_DAT_100f1d14 != '\x01') && (param_2 != *(int *)PTR_DAT_100f1824)) && ((uint)(byte)*PTR_DAT_100f17ec == *(uint *)(PTR_DAT_100f1828 + param_2 * 0x55ec + 0x34))) {
		iVar7 = 0;
		puVar8 = (uint *)PTR_DAT_100f1970;
		while (iVar7 < *(int *)puVar2) {
			uVar1 = *puVar8;
			if ((*(int *)(puVar3 + uVar1 * 0xb4) == 0xd) && (param_2 == *(int *)(puVar3 + uVar1 * 0xb4 + 0x78))) {
				ClearMissileSpot(uVar1);
				DeleteMissile((ulonglong)uVar1, iVar7, param_3, param_4, param_5, (int)lVar4, (int)lVar5, (int)lVar6, in_stack_ffffffb8);
			}
			puVar8 = puVar8 + 1;
			iVar7 = iVar7 + 1;
		}
	}
	return 1;
}

undefined8
On_NOVA(int param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined4 in_stack_ffffffc8;

	if (((*_DAT_100f1d14 != '\x01') && (puVar1 = PTR_DAT_100f1828 + (int)param_2 * 0x55ec, (uint)(byte)*PTR_DAT_100f17ec == *(uint *)(puVar1 + 0x34))) && ((int)param_2 != *(int *)PTR_DAT_100f1824)) {
		ClrPlrPath(param_2, param_2, ZEXT48(_DAT_100f1d14), ZEXT48(PTR_DAT_100f1828), param_5, param_6,
		    param_7, param_8, in_stack_ffffffc8);
		*(undefined4 *)(puVar1 + 0xa4) = 0x12;
		puVar1[0xa8] = 4;
		puVar1[0xa9] = 3;
		*(undefined4 *)(puVar1 + 0x20) = 0xc;
		*(uint *)(puVar1 + 0x24) = (uint) * (byte *)(param_1 + 1);
		*(uint *)(puVar1 + 0x28) = (uint) * (byte *)(param_1 + 2);
	}
	return 3;
}

undefined8 On_SETSHIELD(undefined8 param_1, int param_2)

{
	if (*_DAT_100f1d14 != '\x01') {
		PTR_DAT_100f1828[param_2 * 0x55ec + 0x5594] = 1;
	}
	return 1;
}

undefined8 On_REMSHIELD(undefined8 param_1, int param_2)

{
	if (*_DAT_100f1d14 != '\x01') {
		PTR_DAT_100f1828[param_2 * 0x55ec + 0x5594] = 0;
	}
	return 1;
}

longlong ParseCmd(undefined8 uParm1, byte *pbParm2)

{
	byte bVar1;
	longlong lVar2;
	undefined8 uVar3;
	ulonglong uVar4;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	DAT_100f4288 = *pbParm2;
	uVar4 = (ulonglong)DAT_100f4288;
	if (((*(short *)(PTR_DAT_100f1f5c + (int)uParm1 * 2) == 0) || (DAT_100f4288 == 2)) || (DAT_100f4288 == 0x36)) {
		bVar1 = *pbParm2;
		if (bVar1 < 0x5e) {
			// WARNING: Could not recover jumptable at 0x1007f058. Too many branches
			// WARNING: Treating indirect jump as call
			uVar3 = (**(code **)(PTR_PTR_LAB_100f3330 + (uint)bVar1 * 4))();
			return uVar3;
		}
		if ((bVar1 < 0x3a) || (0x4c < bVar1)) {
			SNetDropPlayer((char)uParm1, 6, bVar1, DAT_100f4288, (char)uParm1, (char)in_r8, (char)in_r9,
			    (char)in_r10, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
			lVar2 = 0;
		} else {
			*(ushort *)(pbParm2 + 1) = CONCAT11(pbParm2[2], pbParm2[1]);
			*(ushort *)(pbParm2 + 3) = CONCAT11(pbParm2[4], pbParm2[3]);
			lVar2 = On_DLEVEL(uParm1, pbParm2, (ulonglong)bVar1, uVar4, uParm1, in_r8, in_r9, in_r10,
			    in_stack_ffffffc8);
		}
	} else {
		lVar2 = 0;
	}
	return lVar2;
}
