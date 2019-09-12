
void Decrypt(uint *param_1, uint param_2, uint param_3)

{
	uint uVar1;
	int iVar2;
	ulonglong uVar3;
	uint *puVar4;
	ulonglong uVar5;
	ulonglong uVar6;
	uint uVar7;
	uint uVar8;
	int iVar9;

	iVar2 = _DAT_100f2d3c;
	uVar1 = param_2 >> 2;
	uVar3 = (ulonglong)uVar1;
	iVar9 = -0x11111112;
	if (uVar1 != 0) {
		uVar5 = (ulonglong)(param_2 >> 5);
		uVar6 = uVar3;
		puVar4 = param_1;
		if (param_2 >> 5 != 0) {
			do {
				*puVar4 = (uint) * (byte *)((int)puVar4 + 3) << 0x18 | (uint) * (byte *)((int)puVar4 + 2) << 0x10 | (uint) * (byte *)((int)puVar4 + 1) << 8 | (uint) * (byte *)puVar4;
				puVar4[1] = (uint) * (byte *)((int)puVar4 + 7) << 0x18 | (uint) * (byte *)((int)puVar4 + 6) << 0x10 | (uint) * (byte *)((int)puVar4 + 5) << 8
				    | (uint) * (byte *)(puVar4 + 1);
				puVar4[2] = (uint) * (byte *)((int)puVar4 + 0xb) << 0x18 | (uint) * (byte *)((int)puVar4 + 10) << 0x10 | (uint) * (byte *)((int)puVar4 + 9) << 8 | (uint) * (byte *)(puVar4 + 2);
				puVar4[3] = (uint) * (byte *)((int)puVar4 + 0xf) << 0x18 | (uint) * (byte *)((int)puVar4 + 0xe) << 0x10 | (uint) * (byte *)((int)puVar4 + 0xd) << 8 | (uint) * (byte *)(puVar4 + 3);
				puVar4[4] = (uint) * (byte *)((int)puVar4 + 0x13) << 0x18 | (uint) * (byte *)((int)puVar4 + 0x12) << 0x10 | (uint) * (byte *)((int)puVar4 + 0x11) << 8 | (uint) * (byte *)(puVar4 + 4);
				puVar4[5] = (uint) * (byte *)((int)puVar4 + 0x17) << 0x18 | (uint) * (byte *)((int)puVar4 + 0x16) << 0x10 | (uint) * (byte *)((int)puVar4 + 0x15) << 8 | (uint) * (byte *)(puVar4 + 5);
				puVar4[6] = (uint) * (byte *)((int)puVar4 + 0x1b) << 0x18 | (uint) * (byte *)((int)puVar4 + 0x1a) << 0x10 | (uint) * (byte *)((int)puVar4 + 0x19) << 8 | (uint) * (byte *)(puVar4 + 6);
				puVar4[7] = (uint) * (byte *)((int)puVar4 + 0x1f) << 0x18 | (uint) * (byte *)((int)puVar4 + 0x1e) << 0x10 | (uint) * (byte *)((int)puVar4 + 0x1d) << 8 | (uint) * (byte *)(puVar4 + 7);
				puVar4 = puVar4 + 8;
				uVar5 = uVar5 - 1;
			} while (uVar5 != 0);
			uVar6 = uVar3 & 7;
			if ((uVar1 & 7) == 0)
				goto LAB_1003c398;
		}
		do {
			*puVar4 = (uint) * (byte *)((int)puVar4 + 3) << 0x18 | (uint) * (byte *)((int)puVar4 + 2) << 0x10
			    | (uint) * (byte *)((int)puVar4 + 1) << 8 | (uint) * (byte *)puVar4;
			uVar6 = uVar6 - 1;
			puVar4 = puVar4 + 1;
		} while (uVar6 != 0);
	}
LAB_1003c398:
	if (uVar1 != 0) {
		uVar5 = (ulonglong)(param_2 >> 4);
		uVar6 = uVar3;
		puVar4 = param_1;
		if (param_2 >> 4 != 0) {
			do {
				iVar9 = iVar9 + *(int *)(iVar2 + (param_3 & 0xff) * 4 + 0x1000);
				uVar7 = *puVar4 ^ iVar9 + param_3;
				*puVar4 = uVar7;
				uVar8 = param_3 >> 0xb | (param_3 << 0x15 ^ 0xffe00000) + 0x11111111;
				iVar9 = uVar7 + 3 + iVar9 * 0x21 + *(int *)(iVar2 + (uVar8 & 0xff) * 4 + 0x1000);
				uVar7 = puVar4[1] ^ iVar9 + uVar8;
				puVar4[1] = uVar7;
				uVar8 = uVar8 >> 0xb | (uVar8 << 0x15 ^ 0xffe00000) + 0x11111111;
				iVar9 = uVar7 + 3 + iVar9 * 0x21 + *(int *)(iVar2 + (uVar8 & 0xff) * 4 + 0x1000);
				uVar7 = puVar4[2] ^ iVar9 + uVar8;
				puVar4[2] = uVar7;
				uVar8 = uVar8 >> 0xb | (uVar8 << 0x15 ^ 0xffe00000) + 0x11111111;
				iVar9 = uVar7 + 3 + iVar9 * 0x21 + *(int *)(iVar2 + (uVar8 & 0xff) * 4 + 0x1000);
				uVar7 = puVar4[3] ^ iVar9 + uVar8;
				puVar4[3] = uVar7;
				iVar9 = uVar7 + 3 + iVar9 * 0x21;
				puVar4 = puVar4 + 4;
				param_3 = uVar8 >> 0xb | (uVar8 << 0x15 ^ 0xffe00000) + 0x11111111;
				uVar5 = uVar5 - 1;
			} while (uVar5 != 0);
			uVar6 = uVar3 & 3;
			if ((uVar1 & 3) == 0)
				goto LAB_1003c534;
		}
		do {
			iVar9 = iVar9 + *(int *)(iVar2 + (param_3 & 0xff) * 4 + 0x1000);
			uVar8 = *puVar4 ^ iVar9 + param_3;
			*puVar4 = uVar8;
			iVar9 = uVar8 + 3 + iVar9 * 0x21;
			param_3 = param_3 >> 0xb | (param_3 << 0x15 ^ 0xffe00000) + 0x11111111;
			uVar6 = uVar6 - 1;
			puVar4 = puVar4 + 1;
		} while (uVar6 != 0);
	}
LAB_1003c534:
	if (uVar1 != 0) {
		uVar6 = (ulonglong)(param_2 >> 5);
		if (param_2 >> 5 != 0) {
			do {
				*param_1 = (uint) * (byte *)((int)param_1 + 3) << 0x18 | (uint) * (byte *)((int)param_1 + 2) << 0x10 | (uint) * (byte *)((int)param_1 + 1) << 8 | (uint) * (byte *)param_1;
				param_1[1] = (uint) * (byte *)((int)param_1 + 7) << 0x18 | (uint) * (byte *)((int)param_1 + 6) << 0x10 | (uint) * (byte *)((int)param_1 + 5) << 8 | (uint) * (byte *)(param_1 + 1);
				param_1[2] = (uint) * (byte *)((int)param_1 + 0xb) << 0x18 | (uint) * (byte *)((int)param_1 + 10) << 0x10 | (uint) * (byte *)((int)param_1 + 9) << 8 | (uint) * (byte *)(param_1 + 2);
				param_1[3] = (uint) * (byte *)((int)param_1 + 0xf) << 0x18 | (uint) * (byte *)((int)param_1 + 0xe) << 0x10 | (uint) * (byte *)((int)param_1 + 0xd) << 8 | (uint) * (byte *)(param_1 + 3);
				param_1[4] = (uint) * (byte *)((int)param_1 + 0x13) << 0x18 | (uint) * (byte *)((int)param_1 + 0x12) << 0x10 | (uint) * (byte *)((int)param_1 + 0x11) << 8 | (uint) * (byte *)(param_1 + 4);
				param_1[5] = (uint) * (byte *)((int)param_1 + 0x17) << 0x18 | (uint) * (byte *)((int)param_1 + 0x16) << 0x10 | (uint) * (byte *)((int)param_1 + 0x15) << 8 | (uint) * (byte *)(param_1 + 5);
				param_1[6] = (uint) * (byte *)((int)param_1 + 0x1b) << 0x18 | (uint) * (byte *)((int)param_1 + 0x1a) << 0x10 | (uint) * (byte *)((int)param_1 + 0x19) << 8 | (uint) * (byte *)(param_1 + 6);
				param_1[7] = (uint) * (byte *)((int)param_1 + 0x1f) << 0x18 | (uint) * (byte *)((int)param_1 + 0x1e) << 0x10 | (uint) * (byte *)((int)param_1 + 0x1d) << 8 | (uint) * (byte *)(param_1 + 7);
				param_1 = param_1 + 8;
				uVar6 = uVar6 - 1;
			} while (uVar6 != 0);
			uVar3 = uVar3 & 7;
			if ((uVar1 & 7) == 0) {
				return;
			}
		}
		do {
			*param_1 = (uint) * (byte *)((int)param_1 + 3) << 0x18 | (uint) * (byte *)((int)param_1 + 2) << 0x10 | (uint) * (byte *)((int)param_1 + 1) << 8
			    | (uint) * (byte *)param_1;
			param_1 = param_1 + 1;
			uVar3 = uVar3 - 1;
		} while (uVar3 != 0);
	}
	return;
}

void Encrypt(uint *param_1, uint param_2, uint param_3)

{
	uint uVar1;
	uint uVar2;
	uint uVar3;
	int iVar4;
	ulonglong uVar5;
	uint *puVar6;
	ulonglong uVar7;
	uint uVar8;
	uint uVar9;
	ulonglong uVar10;
	int iVar11;

	iVar4 = _DAT_100f2d3c;
	uVar3 = param_2 >> 2;
	uVar10 = (ulonglong)uVar3;
	iVar11 = -0x11111112;
	if (uVar3 != 0) {
		uVar5 = (ulonglong)(param_2 >> 5);
		uVar7 = uVar10;
		puVar6 = param_1;
		if (param_2 >> 5 != 0) {
			do {
				*puVar6 = (uint) * (byte *)((int)puVar6 + 3) << 0x18 | (uint) * (byte *)((int)puVar6 + 2) << 0x10 | (uint) * (byte *)((int)puVar6 + 1) << 8 | (uint) * (byte *)puVar6;
				puVar6[1] = (uint) * (byte *)((int)puVar6 + 7) << 0x18 | (uint) * (byte *)((int)puVar6 + 6) << 0x10 | (uint) * (byte *)((int)puVar6 + 5) << 8
				    | (uint) * (byte *)(puVar6 + 1);
				puVar6[2] = (uint) * (byte *)((int)puVar6 + 0xb) << 0x18 | (uint) * (byte *)((int)puVar6 + 10) << 0x10 | (uint) * (byte *)((int)puVar6 + 9) << 8 | (uint) * (byte *)(puVar6 + 2);
				puVar6[3] = (uint) * (byte *)((int)puVar6 + 0xf) << 0x18 | (uint) * (byte *)((int)puVar6 + 0xe) << 0x10 | (uint) * (byte *)((int)puVar6 + 0xd) << 8 | (uint) * (byte *)(puVar6 + 3);
				puVar6[4] = (uint) * (byte *)((int)puVar6 + 0x13) << 0x18 | (uint) * (byte *)((int)puVar6 + 0x12) << 0x10 | (uint) * (byte *)((int)puVar6 + 0x11) << 8 | (uint) * (byte *)(puVar6 + 4);
				puVar6[5] = (uint) * (byte *)((int)puVar6 + 0x17) << 0x18 | (uint) * (byte *)((int)puVar6 + 0x16) << 0x10 | (uint) * (byte *)((int)puVar6 + 0x15) << 8 | (uint) * (byte *)(puVar6 + 5);
				puVar6[6] = (uint) * (byte *)((int)puVar6 + 0x1b) << 0x18 | (uint) * (byte *)((int)puVar6 + 0x1a) << 0x10 | (uint) * (byte *)((int)puVar6 + 0x19) << 8 | (uint) * (byte *)(puVar6 + 6);
				puVar6[7] = (uint) * (byte *)((int)puVar6 + 0x1f) << 0x18 | (uint) * (byte *)((int)puVar6 + 0x1e) << 0x10 | (uint) * (byte *)((int)puVar6 + 0x1d) << 8 | (uint) * (byte *)(puVar6 + 7);
				puVar6 = puVar6 + 8;
				uVar5 = uVar5 - 1;
			} while (uVar5 != 0);
			uVar7 = uVar10 & 7;
			if ((uVar3 & 7) == 0)
				goto LAB_1003c694;
		}
		do {
			*puVar6 = (uint) * (byte *)((int)puVar6 + 3) << 0x18 | (uint) * (byte *)((int)puVar6 + 2) << 0x10
			    | (uint) * (byte *)((int)puVar6 + 1) << 8 | (uint) * (byte *)puVar6;
			uVar7 = uVar7 - 1;
			puVar6 = puVar6 + 1;
		} while (uVar7 != 0);
	}
LAB_1003c694:
	if (uVar3 != 0) {
		uVar5 = (ulonglong)(param_2 >> 4);
		uVar7 = uVar10;
		puVar6 = param_1;
		if (param_2 >> 4 != 0) {
			do {
				uVar1 = *puVar6;
				iVar11 = iVar11 + *(int *)(iVar4 + (param_3 & 0xff) * 4 + 0x1000);
				uVar8 = param_3 >> 0xb | (param_3 << 0x15 ^ 0xffe00000) + 0x11111111;
				*puVar6 = uVar1 ^ iVar11 + param_3;
				uVar2 = puVar6[1];
				iVar11 = uVar1 + iVar11 * 0x21 + 3 + *(int *)(iVar4 + (uVar8 & 0xff) * 4 + 0x1000);
				uVar9 = uVar8 >> 0xb | (uVar8 << 0x15 ^ 0xffe00000) + 0x11111111;
				puVar6[1] = uVar2 ^ iVar11 + uVar8;
				uVar1 = puVar6[2];
				iVar11 = uVar2 + iVar11 * 0x21 + 3 + *(int *)(iVar4 + (uVar9 & 0xff) * 4 + 0x1000);
				uVar8 = uVar9 >> 0xb | (uVar9 << 0x15 ^ 0xffe00000) + 0x11111111;
				puVar6[2] = uVar1 ^ iVar11 + uVar9;
				uVar2 = puVar6[3];
				iVar11 = uVar1 + iVar11 * 0x21 + 3 + *(int *)(iVar4 + (uVar8 & 0xff) * 4 + 0x1000);
				puVar6[3] = uVar2 ^ iVar11 + uVar8;
				iVar11 = uVar2 + iVar11 * 0x21 + 3;
				param_3 = uVar8 >> 0xb | (uVar8 << 0x15 ^ 0xffe00000) + 0x11111111;
				puVar6 = puVar6 + 4;
				uVar5 = uVar5 - 1;
			} while (uVar5 != 0);
			uVar7 = uVar10 & 3;
			if ((uVar3 & 3) == 0)
				goto LAB_1003c830;
		}
		do {
			uVar1 = *puVar6;
			iVar11 = iVar11 + *(int *)(iVar4 + (param_3 & 0xff) * 4 + 0x1000);
			*puVar6 = uVar1 ^ iVar11 + param_3;
			iVar11 = uVar1 + iVar11 * 0x21 + 3;
			param_3 = param_3 >> 0xb | (param_3 << 0x15 ^ 0xffe00000) + 0x11111111;
			uVar7 = uVar7 - 1;
			puVar6 = puVar6 + 1;
		} while (uVar7 != 0);
	}
LAB_1003c830:
	if (uVar3 != 0) {
		uVar7 = (ulonglong)(param_2 >> 5);
		if (param_2 >> 5 != 0) {
			do {
				*param_1 = (uint) * (byte *)((int)param_1 + 3) << 0x18 | (uint) * (byte *)((int)param_1 + 2) << 0x10 | (uint) * (byte *)((int)param_1 + 1) << 8 | (uint) * (byte *)param_1;
				param_1[1] = (uint) * (byte *)((int)param_1 + 7) << 0x18 | (uint) * (byte *)((int)param_1 + 6) << 0x10 | (uint) * (byte *)((int)param_1 + 5) << 8 | (uint) * (byte *)(param_1 + 1);
				param_1[2] = (uint) * (byte *)((int)param_1 + 0xb) << 0x18 | (uint) * (byte *)((int)param_1 + 10) << 0x10 | (uint) * (byte *)((int)param_1 + 9) << 8 | (uint) * (byte *)(param_1 + 2);
				param_1[3] = (uint) * (byte *)((int)param_1 + 0xf) << 0x18 | (uint) * (byte *)((int)param_1 + 0xe) << 0x10 | (uint) * (byte *)((int)param_1 + 0xd) << 8 | (uint) * (byte *)(param_1 + 3);
				param_1[4] = (uint) * (byte *)((int)param_1 + 0x13) << 0x18 | (uint) * (byte *)((int)param_1 + 0x12) << 0x10 | (uint) * (byte *)((int)param_1 + 0x11) << 8 | (uint) * (byte *)(param_1 + 4);
				param_1[5] = (uint) * (byte *)((int)param_1 + 0x17) << 0x18 | (uint) * (byte *)((int)param_1 + 0x16) << 0x10 | (uint) * (byte *)((int)param_1 + 0x15) << 8 | (uint) * (byte *)(param_1 + 5);
				param_1[6] = (uint) * (byte *)((int)param_1 + 0x1b) << 0x18 | (uint) * (byte *)((int)param_1 + 0x1a) << 0x10 | (uint) * (byte *)((int)param_1 + 0x19) << 8 | (uint) * (byte *)(param_1 + 6);
				param_1[7] = (uint) * (byte *)((int)param_1 + 0x1f) << 0x18 | (uint) * (byte *)((int)param_1 + 0x1e) << 0x10 | (uint) * (byte *)((int)param_1 + 0x1d) << 8 | (uint) * (byte *)(param_1 + 7);
				param_1 = param_1 + 8;
				uVar7 = uVar7 - 1;
			} while (uVar7 != 0);
			uVar10 = uVar10 & 7;
			if ((uVar3 & 7) == 0) {
				return;
			}
		}
		do {
			*param_1 = (uint) * (byte *)((int)param_1 + 3) << 0x18 | (uint) * (byte *)((int)param_1 + 2) << 0x10 | (uint) * (byte *)((int)param_1 + 1) << 8
			    | (uint) * (byte *)param_1;
			param_1 = param_1 + 1;
			uVar10 = uVar10 - 1;
		} while (uVar10 != 0);
	}
	return;
}

ulonglong Hash(char *param_1, int param_2)

{
	char cVar1;
	ulonglong uVar2;
	longlong lVar3;

	uVar2 = 0x7fed7fed;
	lVar3 = -0x11111112;
	while (true) {
		if ((param_1 == (char *)0x0) || (*param_1 == '\0'))
			break;
		cVar1 = *param_1;
		param_1 = param_1 + 1;
		if ((int)cVar1 == 0xffffffff) {
			cVar1 = -1;
		} else {
			cVar1 = *(char *)(_DAT_100f1d24 + ((int)cVar1 & 0xffU));
		}
		uVar2 = uVar2 + lVar3 ^ (ulonglong) * (uint *)(_DAT_100f2d3c + param_2 * 0x400 + (int)cVar1 * 4);
		lVar3 = (longlong)cVar1 + uVar2 + (ulonglong)(uint)((int)lVar3 << 5) + 3 + lVar3;
	}
	return uVar2;
}

void InitHash(void)

{
	int iVar1;
	int iVar2;
	uint *puVar3;
	uint uVar4;
	uint uVar5;
	uint uVar6;
	uint uVar7;
	uint uVar8;
	uint uVar9;
	longlong lVar10;

	iVar1 = _DAT_100f2d3c;
	lVar10 = 0x100;
	uVar4 = 0x100001;
	iVar2 = 0;
	do {
		puVar3 = (uint *)(iVar1 + iVar2);
		uVar8 = (uVar4 * 0x7d + 3) % 0x2aaaab;
		uVar7 = (uVar8 * 0x7d + 3) % 0x2aaaab;
		uVar6 = (uVar7 * 0x7d + 3) % 0x2aaaab;
		uVar5 = (uVar6 * 0x7d + 3) % 0x2aaaab;
		uVar4 = (uVar5 * 0x7d + 3) % 0x2aaaab;
		uVar9 = (uVar4 * 0x7d + 3) % 0x2aaaab;
		*puVar3 = uVar8 * 0x10000 | uVar7 & 0xffff;
		puVar3[0x100] = uVar6 * 0x10000 | uVar5 & 0xffff;
		puVar3[0x200] = uVar4 * 0x10000 | uVar9 & 0xffff;
		uVar5 = (uVar9 * 0x7d + 3) % 0x2aaaab;
		iVar2 = iVar2 + 4;
		uVar7 = (uVar5 * 0x7d + 3) % 0x2aaaab;
		uVar6 = (uVar7 * 0x7d + 3) % 0x2aaaab;
		uVar4 = (uVar6 * 0x7d + 3) % 0x2aaaab;
		puVar3[0x300] = uVar5 * 0x10000 | uVar7 & 0xffff;
		puVar3[0x400] = uVar6 * 0x10000 | uVar4 & 0xffff;
		lVar10 = lVar10 + -1;
	} while (lVar10 != 0);
	return;
}

ulonglong PkwareCompress(undefined4 param_1, ulonglong param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	ulonglong uVar2;
	undefined **ppuVar3;
	longlong lVar4;
	longlong lVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 local_4c;

	ppuVar3 = &toc;
	lVar4 = DiabloAllocPtr(0x8dd8, param_2, 0x10000, param_4, param_5, param_6);
	uVar1 = (int)param_2 << 1;
	uVar2 = (ulonglong)uVar1;
	if (uVar1 < 0x2000) {
		uVar2 = 0x2000;
	}
	lVar5 = DiabloAllocPtr(uVar2);
	uVar6 = SUB41(ppuVar3[-0x18a7], 0);
	uVar8 = (undefined)(ZEXT48(register0x0000000c) - 0x28);
	uVar9 = 0;
	uVar10 = 0;
	implode(ppuVar3[-0x18a6], ppuVar3[-0x18a7], lVar4, (int)(ZEXT48(register0x0000000c) - 0x28), 0,
	    0x1000, param_7, param_8, in_stack_ffffffa8);
	uVar7 = 0;
	if ((param_2 & 0xffffffff) != 0) {
		uVar6 = (char)lVar5;
		memcpy((undefined)param_1, (char)lVar5, 0, uVar8, uVar9, uVar10, param_7, param_8,
		    (char)in_stack_ffffffa8, in_stack_ffffffaf, local_4c);
		param_2 = 0;
	}
	mem_free_dbg(lVar4, uVar6, uVar7, uVar8, uVar9, uVar10, param_7, param_8, in_stack_ffffffa8);
	mem_free_dbg(lVar5, uVar6, uVar7, uVar8, uVar9, uVar10, param_7, param_8, in_stack_ffffffa8);
	return param_2;
}

void PkwareDecompress(undefined4 param_1, undefined4 param_2, undefined8 param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	longlong lVar2;
	longlong lVar3;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 local_4c;

	ppuVar1 = &toc;
	lVar2 = DiabloAllocPtr(0x8dd8);
	lVar3 = DiabloAllocPtr(param_3);
	uVar6 = (undefined)(ZEXT48(register0x0000000c) - 0x28);
	explode(ppuVar1[-0x18a6], ppuVar1[-0x18a7], lVar2, (int)(ZEXT48(register0x0000000c) - 0x28),
	    param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	uVar5 = 0;
	uVar4 = (undefined)lVar3;
	memcpy((undefined)param_1, uVar4, 0, uVar6, param_5, param_6, param_7, param_8,
	    (char)in_stack_ffffffa8, in_stack_ffffffaf, local_4c);
	mem_free_dbg(lVar2, uVar4, uVar5, uVar6, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	mem_free_dbg(lVar3, uVar4, uVar5, uVar6, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	return;
}
