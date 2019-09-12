

void FUN_100c8778(undefined4 *param_1, int *param_2)

{
	undefined *puVar1;
	undefined *puVar2;

	puVar1 = (undefined *)*param_1;
	puVar2 = (undefined *)*param_2;
	*(undefined **)param_1 = puVar1 + 0x20;
	*param_2 = *param_2 + 0x20;
	*puVar1 = *puVar2;
	puVar1[2] = puVar2[2];
	puVar1[4] = puVar2[4];
	puVar1[6] = puVar2[6];
	puVar1[8] = puVar2[8];
	puVar1[10] = puVar2[10];
	puVar1[0xc] = puVar2[0xc];
	puVar1[0xe] = puVar2[0xe];
	puVar1[0x10] = puVar2[0x10];
	puVar1[0x12] = puVar2[0x12];
	puVar1[0x14] = puVar2[0x14];
	puVar1[0x16] = puVar2[0x16];
	puVar1[0x18] = puVar2[0x18];
	puVar1[0x1a] = puVar2[0x1a];
	puVar1[0x1c] = puVar2[0x1c];
	puVar1[0x1e] = puVar2[0x1e];
	return;
}

void FUN_100c8818(int *param_1, int *param_2)

{
	int iVar1;
	int iVar2;

	iVar1 = *param_1;
	iVar2 = *param_2;
	*param_1 = iVar1 + 0x20;
	*param_2 = *param_2 + 0x20;
	*(undefined *)(iVar1 + 1) = *(undefined *)(iVar2 + 1);
	*(undefined *)(iVar1 + 3) = *(undefined *)(iVar2 + 3);
	*(undefined *)(iVar1 + 5) = *(undefined *)(iVar2 + 5);
	*(undefined *)(iVar1 + 7) = *(undefined *)(iVar2 + 7);
	*(undefined *)(iVar1 + 9) = *(undefined *)(iVar2 + 9);
	*(undefined *)(iVar1 + 0xb) = *(undefined *)(iVar2 + 0xb);
	*(undefined *)(iVar1 + 0xd) = *(undefined *)(iVar2 + 0xd);
	*(undefined *)(iVar1 + 0xf) = *(undefined *)(iVar2 + 0xf);
	*(undefined *)(iVar1 + 0x11) = *(undefined *)(iVar2 + 0x11);
	*(undefined *)(iVar1 + 0x13) = *(undefined *)(iVar2 + 0x13);
	*(undefined *)(iVar1 + 0x15) = *(undefined *)(iVar2 + 0x15);
	*(undefined *)(iVar1 + 0x17) = *(undefined *)(iVar2 + 0x17);
	*(undefined *)(iVar1 + 0x19) = *(undefined *)(iVar2 + 0x19);
	*(undefined *)(iVar1 + 0x1b) = *(undefined *)(iVar2 + 0x1b);
	*(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar2 + 0x1d);
	*(undefined *)(iVar1 + 0x1f) = *(undefined *)(iVar2 + 0x1f);
	return;
}

void FUN_100c88b8(undefined4 *param_1, int *param_2, uint param_3)

{
	undefined4 *puVar1;
	undefined4 *puVar2;

	puVar1 = (undefined4 *)*param_1;
	puVar2 = (undefined4 *)*param_2;
	*(undefined4 **)param_1 = puVar1 + 8;
	*param_2 = *param_2 + 0x20;
	if (param_3 == 0xffffffff) {
		*puVar1 = *puVar2;
		puVar1[1] = puVar2[1];
		puVar1[2] = puVar2[2];
		puVar1[3] = puVar2[3];
		puVar1[4] = puVar2[4];
		puVar1[5] = puVar2[5];
		puVar1[6] = puVar2[6];
		puVar1[7] = puVar2[7];
		return;
	}
	if ((param_3 & 0x80000000) != 0) {
		*(undefined *)puVar1 = *(undefined *)puVar2;
	}
	if ((param_3 & 0x40000000) != 0) {
		*(undefined *)((int)puVar1 + 1) = *(undefined *)((int)puVar2 + 1);
	}
	if ((param_3 & 0x20000000) != 0) {
		*(undefined *)((int)puVar1 + 2) = *(undefined *)((int)puVar2 + 2);
	}
	if ((param_3 & 0x10000000) != 0) {
		*(undefined *)((int)puVar1 + 3) = *(undefined *)((int)puVar2 + 3);
	}
	if ((param_3 & 0x8000000) != 0) {
		*(undefined *)(puVar1 + 1) = *(undefined *)(puVar2 + 1);
	}
	if ((param_3 & 0x4000000) != 0) {
		*(undefined *)((int)puVar1 + 5) = *(undefined *)((int)puVar2 + 5);
	}
	if ((param_3 & 0x2000000) != 0) {
		*(undefined *)((int)puVar1 + 6) = *(undefined *)((int)puVar2 + 6);
	}
	if ((param_3 & 0x1000000) != 0) {
		*(undefined *)((int)puVar1 + 7) = *(undefined *)((int)puVar2 + 7);
	}
	if ((param_3 & 0x800000) != 0) {
		*(undefined *)(puVar1 + 2) = *(undefined *)(puVar2 + 2);
	}
	if ((param_3 & 0x400000) != 0) {
		*(undefined *)((int)puVar1 + 9) = *(undefined *)((int)puVar2 + 9);
	}
	if ((param_3 & 0x200000) != 0) {
		*(undefined *)((int)puVar1 + 10) = *(undefined *)((int)puVar2 + 10);
	}
	if ((param_3 & 0x100000) != 0) {
		*(undefined *)((int)puVar1 + 0xb) = *(undefined *)((int)puVar2 + 0xb);
	}
	if ((param_3 & 0x80000) != 0) {
		*(undefined *)(puVar1 + 3) = *(undefined *)(puVar2 + 3);
	}
	if ((param_3 & 0x40000) != 0) {
		*(undefined *)((int)puVar1 + 0xd) = *(undefined *)((int)puVar2 + 0xd);
	}
	if ((param_3 & 0x20000) != 0) {
		*(undefined *)((int)puVar1 + 0xe) = *(undefined *)((int)puVar2 + 0xe);
	}
	if ((param_3 & 0x10000) != 0) {
		*(undefined *)((int)puVar1 + 0xf) = *(undefined *)((int)puVar2 + 0xf);
	}
	if ((param_3 & 0x8000) != 0) {
		*(undefined *)(puVar1 + 4) = *(undefined *)(puVar2 + 4);
	}
	if ((param_3 & 0x4000) != 0) {
		*(undefined *)((int)puVar1 + 0x11) = *(undefined *)((int)puVar2 + 0x11);
	}
	if ((param_3 & 0x2000) != 0) {
		*(undefined *)((int)puVar1 + 0x12) = *(undefined *)((int)puVar2 + 0x12);
	}
	if ((param_3 & 0x1000) != 0) {
		*(undefined *)((int)puVar1 + 0x13) = *(undefined *)((int)puVar2 + 0x13);
	}
	if ((param_3 & 0x800) != 0) {
		*(undefined *)(puVar1 + 5) = *(undefined *)(puVar2 + 5);
	}
	if ((param_3 & 0x400) != 0) {
		*(undefined *)((int)puVar1 + 0x15) = *(undefined *)((int)puVar2 + 0x15);
	}
	if ((param_3 & 0x200) != 0) {
		*(undefined *)((int)puVar1 + 0x16) = *(undefined *)((int)puVar2 + 0x16);
	}
	if ((param_3 & 0x100) != 0) {
		*(undefined *)((int)puVar1 + 0x17) = *(undefined *)((int)puVar2 + 0x17);
	}
	if ((param_3 & 0x80) != 0) {
		*(undefined *)(puVar1 + 6) = *(undefined *)(puVar2 + 6);
	}
	if ((param_3 & 0x40) != 0) {
		*(undefined *)((int)puVar1 + 0x19) = *(undefined *)((int)puVar2 + 0x19);
	}
	if ((param_3 & 0x20) != 0) {
		*(undefined *)((int)puVar1 + 0x1a) = *(undefined *)((int)puVar2 + 0x1a);
	}
	if ((param_3 & 0x10) != 0) {
		*(undefined *)((int)puVar1 + 0x1b) = *(undefined *)((int)puVar2 + 0x1b);
	}
	if ((param_3 & 8) != 0) {
		*(undefined *)(puVar1 + 7) = *(undefined *)(puVar2 + 7);
	}
	if ((param_3 & 4) != 0) {
		*(undefined *)((int)puVar1 + 0x1d) = *(undefined *)((int)puVar2 + 0x1d);
	}
	if ((param_3 & 2) != 0) {
		*(undefined *)((int)puVar1 + 0x1e) = *(undefined *)((int)puVar2 + 0x1e);
	}
	if ((param_3 & 1) == 0) {
		return;
	}
	*(undefined *)((int)puVar1 + 0x1f) = *(undefined *)((int)puVar2 + 0x1f);
	return;
}

void FUN_100c8b28(int *param_1, undefined param_2)

{
	undefined *puVar1;

	puVar1 = (undefined *)*param_1;
	*(undefined **)param_1 = puVar1 + 0x20;
	puVar1[0x1e] = param_2;
	puVar1[0x1c] = param_2;
	puVar1[0x1a] = param_2;
	puVar1[0x18] = param_2;
	puVar1[0x16] = param_2;
	puVar1[0x14] = param_2;
	puVar1[0x12] = param_2;
	puVar1[0x10] = param_2;
	puVar1[0xe] = param_2;
	puVar1[0xc] = param_2;
	puVar1[10] = param_2;
	puVar1[8] = param_2;
	puVar1[6] = param_2;
	puVar1[4] = param_2;
	puVar1[2] = param_2;
	*puVar1 = param_2;
	return;
}

void FUN_100c8b78(int *param_1, undefined param_2)

{
	int iVar1;

	iVar1 = *param_1;
	*param_1 = iVar1 + 0x20;
	*(undefined *)(iVar1 + 0x1f) = param_2;
	*(undefined *)(iVar1 + 0x1d) = param_2;
	*(undefined *)(iVar1 + 0x1b) = param_2;
	*(undefined *)(iVar1 + 0x19) = param_2;
	*(undefined *)(iVar1 + 0x17) = param_2;
	*(undefined *)(iVar1 + 0x15) = param_2;
	*(undefined *)(iVar1 + 0x13) = param_2;
	*(undefined *)(iVar1 + 0x11) = param_2;
	*(undefined *)(iVar1 + 0xf) = param_2;
	*(undefined *)(iVar1 + 0xd) = param_2;
	*(undefined *)(iVar1 + 0xb) = param_2;
	*(undefined *)(iVar1 + 9) = param_2;
	*(undefined *)(iVar1 + 7) = param_2;
	*(undefined *)(iVar1 + 5) = param_2;
	*(undefined *)(iVar1 + 3) = param_2;
	*(undefined *)(iVar1 + 1) = param_2;
	return;
}

void FUN_100c8bc8(int *param_1, undefined4 param_2, uint param_3)

{
	undefined4 *puVar1;
	undefined uVar2;

	puVar1 = (undefined4 *)*param_1;
	*(undefined4 **)param_1 = puVar1 + 8;
	if (param_3 == 0xffffffff) {
		puVar1[7] = param_2;
		puVar1[6] = param_2;
		puVar1[5] = param_2;
		puVar1[4] = param_2;
		puVar1[3] = param_2;
		puVar1[2] = param_2;
		puVar1[1] = param_2;
		*puVar1 = param_2;
		return;
	}
	uVar2 = (undefined)param_2;
	if ((param_3 & 0x80000000) != 0) {
		*(undefined *)puVar1 = uVar2;
	}
	if ((param_3 & 0x40000000) != 0) {
		*(undefined *)((int)puVar1 + 1) = uVar2;
	}
	if ((param_3 & 0x20000000) != 0) {
		*(undefined *)((int)puVar1 + 2) = uVar2;
	}
	if ((param_3 & 0x10000000) != 0) {
		*(undefined *)((int)puVar1 + 3) = uVar2;
	}
	if ((param_3 & 0x8000000) != 0) {
		*(undefined *)(puVar1 + 1) = uVar2;
	}
	if ((param_3 & 0x4000000) != 0) {
		*(undefined *)((int)puVar1 + 5) = uVar2;
	}
	if ((param_3 & 0x2000000) != 0) {
		*(undefined *)((int)puVar1 + 6) = uVar2;
	}
	if ((param_3 & 0x1000000) != 0) {
		*(undefined *)((int)puVar1 + 7) = uVar2;
	}
	if ((param_3 & 0x800000) != 0) {
		*(undefined *)(puVar1 + 2) = uVar2;
	}
	if ((param_3 & 0x400000) != 0) {
		*(undefined *)((int)puVar1 + 9) = uVar2;
	}
	if ((param_3 & 0x200000) != 0) {
		*(undefined *)((int)puVar1 + 10) = uVar2;
	}
	if ((param_3 & 0x100000) != 0) {
		*(undefined *)((int)puVar1 + 0xb) = uVar2;
	}
	if ((param_3 & 0x80000) != 0) {
		*(undefined *)(puVar1 + 3) = uVar2;
	}
	if ((param_3 & 0x40000) != 0) {
		*(undefined *)((int)puVar1 + 0xd) = uVar2;
	}
	if ((param_3 & 0x20000) != 0) {
		*(undefined *)((int)puVar1 + 0xe) = uVar2;
	}
	if ((param_3 & 0x10000) != 0) {
		*(undefined *)((int)puVar1 + 0xf) = uVar2;
	}
	if ((param_3 & 0x8000) != 0) {
		*(undefined *)(puVar1 + 4) = uVar2;
	}
	if ((param_3 & 0x4000) != 0) {
		*(undefined *)((int)puVar1 + 0x11) = uVar2;
	}
	if ((param_3 & 0x2000) != 0) {
		*(undefined *)((int)puVar1 + 0x12) = uVar2;
	}
	if ((param_3 & 0x1000) != 0) {
		*(undefined *)((int)puVar1 + 0x13) = uVar2;
	}
	if ((param_3 & 0x800) != 0) {
		*(undefined *)(puVar1 + 5) = uVar2;
	}
	if ((param_3 & 0x400) != 0) {
		*(undefined *)((int)puVar1 + 0x15) = uVar2;
	}
	if ((param_3 & 0x200) != 0) {
		*(undefined *)((int)puVar1 + 0x16) = uVar2;
	}
	if ((param_3 & 0x100) != 0) {
		*(undefined *)((int)puVar1 + 0x17) = uVar2;
	}
	if ((param_3 & 0x80) != 0) {
		*(undefined *)(puVar1 + 6) = uVar2;
	}
	if ((param_3 & 0x40) != 0) {
		*(undefined *)((int)puVar1 + 0x19) = uVar2;
	}
	if ((param_3 & 0x20) != 0) {
		*(undefined *)((int)puVar1 + 0x1a) = uVar2;
	}
	if ((param_3 & 0x10) != 0) {
		*(undefined *)((int)puVar1 + 0x1b) = uVar2;
	}
	if ((param_3 & 8) != 0) {
		*(undefined *)(puVar1 + 7) = uVar2;
	}
	if ((param_3 & 4) != 0) {
		*(undefined *)((int)puVar1 + 0x1d) = uVar2;
	}
	if ((param_3 & 2) != 0) {
		*(undefined *)((int)puVar1 + 0x1e) = uVar2;
	}
	if ((param_3 & 1) == 0) {
		return;
	}
	*(undefined *)((int)puVar1 + 0x1f) = uVar2;
	return;
}

void FUN_100c8d88(undefined4 *param_1, byte **param_2, int param_3)

{
	undefined *puVar1;
	byte *pbVar2;

	puVar1 = (undefined *)*param_1;
	pbVar2 = *param_2;
	*(undefined **)param_1 = puVar1 + 0x20;
	*param_2 = *param_2 + 0x20;
	*puVar1 = *(undefined *)(param_3 + (uint)*pbVar2);
	puVar1[1] = *(undefined *)(param_3 + (uint)pbVar2[1]);
	puVar1[2] = *(undefined *)(param_3 + (uint)pbVar2[2]);
	puVar1[3] = *(undefined *)(param_3 + (uint)pbVar2[3]);
	puVar1[4] = *(undefined *)(param_3 + (uint)pbVar2[4]);
	puVar1[5] = *(undefined *)(param_3 + (uint)pbVar2[5]);
	puVar1[6] = *(undefined *)(param_3 + (uint)pbVar2[6]);
	puVar1[7] = *(undefined *)(param_3 + (uint)pbVar2[7]);
	puVar1[8] = *(undefined *)(param_3 + (uint)pbVar2[8]);
	puVar1[9] = *(undefined *)(param_3 + (uint)pbVar2[9]);
	puVar1[10] = *(undefined *)(param_3 + (uint)pbVar2[10]);
	puVar1[0xb] = *(undefined *)(param_3 + (uint)pbVar2[0xb]);
	puVar1[0xc] = *(undefined *)(param_3 + (uint)pbVar2[0xc]);
	puVar1[0xd] = *(undefined *)(param_3 + (uint)pbVar2[0xd]);
	puVar1[0xe] = *(undefined *)(param_3 + (uint)pbVar2[0xe]);
	puVar1[0xf] = *(undefined *)(param_3 + (uint)pbVar2[0xf]);
	puVar1[0x10] = *(undefined *)(param_3 + (uint)pbVar2[0x10]);
	puVar1[0x11] = *(undefined *)(param_3 + (uint)pbVar2[0x11]);
	puVar1[0x12] = *(undefined *)(param_3 + (uint)pbVar2[0x12]);
	puVar1[0x13] = *(undefined *)(param_3 + (uint)pbVar2[0x13]);
	puVar1[0x14] = *(undefined *)(param_3 + (uint)pbVar2[0x14]);
	puVar1[0x15] = *(undefined *)(param_3 + (uint)pbVar2[0x15]);
	puVar1[0x16] = *(undefined *)(param_3 + (uint)pbVar2[0x16]);
	puVar1[0x17] = *(undefined *)(param_3 + (uint)pbVar2[0x17]);
	puVar1[0x18] = *(undefined *)(param_3 + (uint)pbVar2[0x18]);
	puVar1[0x19] = *(undefined *)(param_3 + (uint)pbVar2[0x19]);
	puVar1[0x1a] = *(undefined *)(param_3 + (uint)pbVar2[0x1a]);
	puVar1[0x1b] = *(undefined *)(param_3 + (uint)pbVar2[0x1b]);
	puVar1[0x1c] = *(undefined *)(param_3 + (uint)pbVar2[0x1c]);
	puVar1[0x1d] = *(undefined *)(param_3 + (uint)pbVar2[0x1d]);
	puVar1[0x1e] = *(undefined *)(param_3 + (uint)pbVar2[0x1e]);
	puVar1[0x1f] = *(undefined *)(param_3 + (uint)pbVar2[0x1f]);
	return;
}

void FUN_100c8f28(undefined4 *param_1, byte **param_2, int param_3)

{
	undefined *puVar1;
	byte *pbVar2;

	puVar1 = (undefined *)*param_1;
	pbVar2 = *param_2;
	*(undefined **)param_1 = puVar1 + 0x20;
	*param_2 = *param_2 + 0x20;
	*puVar1 = *(undefined *)(param_3 + (uint)*pbVar2);
	puVar1[2] = *(undefined *)(param_3 + (uint)pbVar2[2]);
	puVar1[4] = *(undefined *)(param_3 + (uint)pbVar2[4]);
	puVar1[6] = *(undefined *)(param_3 + (uint)pbVar2[6]);
	puVar1[8] = *(undefined *)(param_3 + (uint)pbVar2[8]);
	puVar1[10] = *(undefined *)(param_3 + (uint)pbVar2[10]);
	puVar1[0xc] = *(undefined *)(param_3 + (uint)pbVar2[0xc]);
	puVar1[0xe] = *(undefined *)(param_3 + (uint)pbVar2[0xe]);
	puVar1[0x10] = *(undefined *)(param_3 + (uint)pbVar2[0x10]);
	puVar1[0x12] = *(undefined *)(param_3 + (uint)pbVar2[0x12]);
	puVar1[0x14] = *(undefined *)(param_3 + (uint)pbVar2[0x14]);
	puVar1[0x16] = *(undefined *)(param_3 + (uint)pbVar2[0x16]);
	puVar1[0x18] = *(undefined *)(param_3 + (uint)pbVar2[0x18]);
	puVar1[0x1a] = *(undefined *)(param_3 + (uint)pbVar2[0x1a]);
	puVar1[0x1c] = *(undefined *)(param_3 + (uint)pbVar2[0x1c]);
	puVar1[0x1e] = *(undefined *)(param_3 + (uint)pbVar2[0x1e]);
	return;
}

void FUN_100c9008(int *param_1, int *param_2, int param_3)

{
	int iVar1;
	int iVar2;

	iVar1 = *param_1;
	iVar2 = *param_2;
	*param_1 = iVar1 + 0x20;
	*param_2 = *param_2 + 0x20;
	*(undefined *)(iVar1 + 1) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 1));
	*(undefined *)(iVar1 + 3) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 3));
	*(undefined *)(iVar1 + 5) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 5));
	*(undefined *)(iVar1 + 7) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 7));
	*(undefined *)(iVar1 + 9) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 9));
	*(undefined *)(iVar1 + 0xb) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 0xb));
	*(undefined *)(iVar1 + 0xd) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 0xd));
	*(undefined *)(iVar1 + 0xf) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 0xf));
	*(undefined *)(iVar1 + 0x11) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 0x11));
	*(undefined *)(iVar1 + 0x13) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 0x13));
	*(undefined *)(iVar1 + 0x15) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 0x15));
	*(undefined *)(iVar1 + 0x17) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 0x17));
	*(undefined *)(iVar1 + 0x19) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 0x19));
	*(undefined *)(iVar1 + 0x1b) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 0x1b));
	*(undefined *)(iVar1 + 0x1d) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 0x1d));
	*(undefined *)(iVar1 + 0x1f) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 0x1f));
	return;
}

void FUN_100c90e8(undefined4 *param_1, byte **param_2, int param_3, uint param_4)

{
	undefined *puVar1;
	byte *pbVar2;

	puVar1 = (undefined *)*param_1;
	pbVar2 = *param_2;
	*(undefined **)param_1 = puVar1 + 0x20;
	*param_2 = *param_2 + 0x20;
	if (param_4 == 0xffffffff) {
		*puVar1 = *(undefined *)(param_3 + (uint)*pbVar2);
		puVar1[1] = *(undefined *)(param_3 + (uint)pbVar2[1]);
		puVar1[2] = *(undefined *)(param_3 + (uint)pbVar2[2]);
		puVar1[3] = *(undefined *)(param_3 + (uint)pbVar2[3]);
		puVar1[4] = *(undefined *)(param_3 + (uint)pbVar2[4]);
		puVar1[5] = *(undefined *)(param_3 + (uint)pbVar2[5]);
		puVar1[6] = *(undefined *)(param_3 + (uint)pbVar2[6]);
		puVar1[7] = *(undefined *)(param_3 + (uint)pbVar2[7]);
		puVar1[8] = *(undefined *)(param_3 + (uint)pbVar2[8]);
		puVar1[9] = *(undefined *)(param_3 + (uint)pbVar2[9]);
		puVar1[10] = *(undefined *)(param_3 + (uint)pbVar2[10]);
		puVar1[0xb] = *(undefined *)(param_3 + (uint)pbVar2[0xb]);
		puVar1[0xc] = *(undefined *)(param_3 + (uint)pbVar2[0xc]);
		puVar1[0xd] = *(undefined *)(param_3 + (uint)pbVar2[0xd]);
		puVar1[0xe] = *(undefined *)(param_3 + (uint)pbVar2[0xe]);
		puVar1[0xf] = *(undefined *)(param_3 + (uint)pbVar2[0xf]);
		puVar1[0x10] = *(undefined *)(param_3 + (uint)pbVar2[0x10]);
		puVar1[0x11] = *(undefined *)(param_3 + (uint)pbVar2[0x11]);
		puVar1[0x12] = *(undefined *)(param_3 + (uint)pbVar2[0x12]);
		puVar1[0x13] = *(undefined *)(param_3 + (uint)pbVar2[0x13]);
		puVar1[0x14] = *(undefined *)(param_3 + (uint)pbVar2[0x14]);
		puVar1[0x15] = *(undefined *)(param_3 + (uint)pbVar2[0x15]);
		puVar1[0x16] = *(undefined *)(param_3 + (uint)pbVar2[0x16]);
		puVar1[0x17] = *(undefined *)(param_3 + (uint)pbVar2[0x17]);
		puVar1[0x18] = *(undefined *)(param_3 + (uint)pbVar2[0x18]);
		puVar1[0x19] = *(undefined *)(param_3 + (uint)pbVar2[0x19]);
		puVar1[0x1a] = *(undefined *)(param_3 + (uint)pbVar2[0x1a]);
		puVar1[0x1b] = *(undefined *)(param_3 + (uint)pbVar2[0x1b]);
		puVar1[0x1c] = *(undefined *)(param_3 + (uint)pbVar2[0x1c]);
		puVar1[0x1d] = *(undefined *)(param_3 + (uint)pbVar2[0x1d]);
		puVar1[0x1e] = *(undefined *)(param_3 + (uint)pbVar2[0x1e]);
		puVar1[0x1f] = *(undefined *)(param_3 + (uint)pbVar2[0x1f]);
		return;
	}
	if ((param_4 & 0x80000000) != 0) {
		*puVar1 = *(undefined *)(param_3 + (uint)*pbVar2);
	}
	if ((param_4 & 0x40000000) != 0) {
		puVar1[1] = *(undefined *)(param_3 + (uint)pbVar2[1]);
	}
	if ((param_4 & 0x20000000) != 0) {
		puVar1[2] = *(undefined *)(param_3 + (uint)pbVar2[2]);
	}
	if ((param_4 & 0x10000000) != 0) {
		puVar1[3] = *(undefined *)(param_3 + (uint)pbVar2[3]);
	}
	if ((param_4 & 0x8000000) != 0) {
		puVar1[4] = *(undefined *)(param_3 + (uint)pbVar2[4]);
	}
	if ((param_4 & 0x4000000) != 0) {
		puVar1[5] = *(undefined *)(param_3 + (uint)pbVar2[5]);
	}
	if ((param_4 & 0x2000000) != 0) {
		puVar1[6] = *(undefined *)(param_3 + (uint)pbVar2[6]);
	}
	if ((param_4 & 0x1000000) != 0) {
		puVar1[7] = *(undefined *)(param_3 + (uint)pbVar2[7]);
	}
	if ((param_4 & 0x800000) != 0) {
		puVar1[8] = *(undefined *)(param_3 + (uint)pbVar2[8]);
	}
	if ((param_4 & 0x400000) != 0) {
		puVar1[9] = *(undefined *)(param_3 + (uint)pbVar2[9]);
	}
	if ((param_4 & 0x200000) != 0) {
		puVar1[10] = *(undefined *)(param_3 + (uint)pbVar2[10]);
	}
	if ((param_4 & 0x100000) != 0) {
		puVar1[0xb] = *(undefined *)(param_3 + (uint)pbVar2[0xb]);
	}
	if ((param_4 & 0x80000) != 0) {
		puVar1[0xc] = *(undefined *)(param_3 + (uint)pbVar2[0xc]);
	}
	if ((param_4 & 0x40000) != 0) {
		puVar1[0xd] = *(undefined *)(param_3 + (uint)pbVar2[0xd]);
	}
	if ((param_4 & 0x20000) != 0) {
		puVar1[0xe] = *(undefined *)(param_3 + (uint)pbVar2[0xe]);
	}
	if ((param_4 & 0x10000) != 0) {
		puVar1[0xf] = *(undefined *)(param_3 + (uint)pbVar2[0xf]);
	}
	if ((param_4 & 0x8000) != 0) {
		puVar1[0x10] = *(undefined *)(param_3 + (uint)pbVar2[0x10]);
	}
	if ((param_4 & 0x4000) != 0) {
		puVar1[0x11] = *(undefined *)(param_3 + (uint)pbVar2[0x11]);
	}
	if ((param_4 & 0x2000) != 0) {
		puVar1[0x12] = *(undefined *)(param_3 + (uint)pbVar2[0x12]);
	}
	if ((param_4 & 0x1000) != 0) {
		puVar1[0x13] = *(undefined *)(param_3 + (uint)pbVar2[0x13]);
	}
	if ((param_4 & 0x800) != 0) {
		puVar1[0x14] = *(undefined *)(param_3 + (uint)pbVar2[0x14]);
	}
	if ((param_4 & 0x400) != 0) {
		puVar1[0x15] = *(undefined *)(param_3 + (uint)pbVar2[0x15]);
	}
	if ((param_4 & 0x200) != 0) {
		puVar1[0x16] = *(undefined *)(param_3 + (uint)pbVar2[0x16]);
	}
	if ((param_4 & 0x100) != 0) {
		puVar1[0x17] = *(undefined *)(param_3 + (uint)pbVar2[0x17]);
	}
	if ((param_4 & 0x80) != 0) {
		puVar1[0x18] = *(undefined *)(param_3 + (uint)pbVar2[0x18]);
	}
	if ((param_4 & 0x40) != 0) {
		puVar1[0x19] = *(undefined *)(param_3 + (uint)pbVar2[0x19]);
	}
	if ((param_4 & 0x20) != 0) {
		puVar1[0x1a] = *(undefined *)(param_3 + (uint)pbVar2[0x1a]);
	}
	if ((param_4 & 0x10) != 0) {
		puVar1[0x1b] = *(undefined *)(param_3 + (uint)pbVar2[0x1b]);
	}
	if ((param_4 & 8) != 0) {
		puVar1[0x1c] = *(undefined *)(param_3 + (uint)pbVar2[0x1c]);
	}
	if ((param_4 & 4) != 0) {
		puVar1[0x1d] = *(undefined *)(param_3 + (uint)pbVar2[0x1d]);
	}
	if ((param_4 & 2) != 0) {
		puVar1[0x1e] = *(undefined *)(param_3 + (uint)pbVar2[0x1e]);
	}
	if ((param_4 & 1) == 0) {
		return;
	}
	puVar1[0x1f] = *(undefined *)(param_3 + (uint)pbVar2[0x1f]);
	return;
}

void FUN_100c9518(undefined4 *param_1, int *param_2, longlong param_3)

{
	undefined *puVar1;
	ulonglong uVar2;
	ulonglong uVar3;
	uint uVar4;
	undefined *puVar5;
	undefined *puVar6;

	puVar5 = (undefined *)*param_1;
	uVar4 = (uint)param_3;
	puVar6 = (undefined *)*param_2;
	*(undefined **)param_1 = puVar5 + uVar4;
	uVar3 = (ulonglong)(uVar4 >> 2);
	*param_2 = *param_2 + uVar4;
	if ((int)uVar4 < 4)
		goto LAB_100c960c;
	uVar2 = (ulonglong)(uVar4 >> 5);
	if (uVar4 >> 5 == 0) {
	LAB_100c95ec:
		do {
			*puVar5 = *puVar6;
			puVar1 = puVar6 + 2;
			puVar6 = puVar6 + 4;
			puVar5[2] = *puVar1;
			puVar5 = puVar5 + 4;
			uVar3 = uVar3 - 1;
		} while (uVar3 != 0);
	} else {
		do {
			*puVar5 = *puVar6;
			puVar5[2] = puVar6[2];
			puVar5[4] = puVar6[4];
			puVar5[6] = puVar6[6];
			puVar5[8] = puVar6[8];
			puVar5[10] = puVar6[10];
			puVar5[0xc] = puVar6[0xc];
			puVar5[0xe] = puVar6[0xe];
			puVar5[0x10] = puVar6[0x10];
			puVar5[0x12] = puVar6[0x12];
			puVar5[0x14] = puVar6[0x14];
			puVar5[0x16] = puVar6[0x16];
			puVar5[0x18] = puVar6[0x18];
			puVar5[0x1a] = puVar6[0x1a];
			puVar5[0x1c] = puVar6[0x1c];
			puVar1 = puVar6 + 0x1e;
			puVar6 = puVar6 + 0x20;
			puVar5[0x1e] = *puVar1;
			puVar5 = puVar5 + 0x20;
			uVar2 = uVar2 - 1;
		} while (uVar2 != 0);
		uVar3 = uVar3 & 7;
		if ((uVar4 >> 2 & 7) != 0)
			goto LAB_100c95ec;
	}
	param_3 = param_3 - (ulonglong)(uVar4 & 0xfffffffc);
LAB_100c960c:
	if ((int)param_3 != 0) {
		do {
			if (((uint)puVar5 & 1) == 0) {
				*puVar5 = *puVar6;
			}
			puVar5 = puVar5 + 1;
			puVar6 = puVar6 + 1;
			param_3 = param_3 + -1;
		} while (param_3 != 0);
		return;
	}
	return;
}

void FUN_100c9638(undefined4 *param_1, int *param_2, longlong param_3)

{
	undefined *puVar1;
	ulonglong uVar2;
	ulonglong uVar3;
	uint uVar4;
	undefined *puVar5;
	undefined *puVar6;

	puVar5 = (undefined *)*param_1;
	uVar4 = (uint)param_3;
	puVar6 = (undefined *)*param_2;
	*(undefined **)param_1 = puVar5 + uVar4;
	uVar3 = (ulonglong)(uVar4 >> 2);
	*param_2 = *param_2 + uVar4;
	if ((int)uVar4 < 4)
		goto LAB_100c972c;
	uVar2 = (ulonglong)(uVar4 >> 5);
	if (uVar4 >> 5 == 0) {
	LAB_100c970c:
		do {
			puVar5[1] = puVar6[1];
			puVar1 = puVar6 + 3;
			puVar6 = puVar6 + 4;
			puVar5[3] = *puVar1;
			puVar5 = puVar5 + 4;
			uVar3 = uVar3 - 1;
		} while (uVar3 != 0);
	} else {
		do {
			puVar5[1] = puVar6[1];
			puVar5[3] = puVar6[3];
			puVar5[5] = puVar6[5];
			puVar5[7] = puVar6[7];
			puVar5[9] = puVar6[9];
			puVar5[0xb] = puVar6[0xb];
			puVar5[0xd] = puVar6[0xd];
			puVar5[0xf] = puVar6[0xf];
			puVar5[0x11] = puVar6[0x11];
			puVar5[0x13] = puVar6[0x13];
			puVar5[0x15] = puVar6[0x15];
			puVar5[0x17] = puVar6[0x17];
			puVar5[0x19] = puVar6[0x19];
			puVar5[0x1b] = puVar6[0x1b];
			puVar5[0x1d] = puVar6[0x1d];
			puVar1 = puVar6 + 0x1f;
			puVar6 = puVar6 + 0x20;
			puVar5[0x1f] = *puVar1;
			puVar5 = puVar5 + 0x20;
			uVar2 = uVar2 - 1;
		} while (uVar2 != 0);
		uVar3 = uVar3 & 7;
		if ((uVar4 >> 2 & 7) != 0)
			goto LAB_100c970c;
	}
	param_3 = param_3 - (ulonglong)(uVar4 & 0xfffffffc);
LAB_100c972c:
	if ((int)param_3 != 0) {
		do {
			if (((uint)puVar5 & 1) != 0) {
				*puVar5 = *puVar6;
			}
			puVar5 = puVar5 + 1;
			puVar6 = puVar6 + 1;
			param_3 = param_3 + -1;
		} while (param_3 != 0);
		return;
	}
	return;
}

void FUN_100c9758(undefined4 *param_1, int *param_2, longlong param_3, int *param_4)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;

	iVar1 = (int)param_3;
	puVar2 = (undefined *)*param_1;
	puVar3 = (undefined *)*param_2;
	iVar4 = *param_4;
	*(undefined **)param_1 = puVar2 + iVar1;
	*param_2 = *param_2 + iVar1;
	if (iVar1 != 0) {
		do {
			if (iVar4 < 0) {
				*puVar2 = *puVar3;
			}
			iVar4 = iVar4 << 1;
			puVar2 = puVar2 + 1;
			puVar3 = puVar3 + 1;
			param_3 = param_3 + -1;
		} while (param_3 != 0);
	}
	*param_4 = iVar4;
	return;
}

void FUN_100c97ac(int *param_1, longlong param_2, undefined param_3)

{
	ulonglong uVar1;
	ulonglong uVar2;
	uint uVar3;
	undefined *puVar4;

	puVar4 = (undefined *)*param_1;
	uVar3 = (uint)param_2;
	*(undefined **)param_1 = puVar4 + uVar3;
	uVar2 = (ulonglong)(uVar3 >> 2);
	if ((int)uVar3 < 4)
		goto LAB_100c9844;
	uVar1 = (ulonglong)(uVar3 >> 5);
	if (uVar3 >> 5 == 0) {
	LAB_100c9830:
		do {
			puVar4[2] = param_3;
			*puVar4 = param_3;
			puVar4 = puVar4 + 4;
			uVar2 = uVar2 - 1;
		} while (uVar2 != 0);
	} else {
		do {
			puVar4[2] = param_3;
			*puVar4 = param_3;
			puVar4[6] = param_3;
			puVar4[4] = param_3;
			puVar4[10] = param_3;
			puVar4[8] = param_3;
			puVar4[0xe] = param_3;
			puVar4[0xc] = param_3;
			puVar4[0x12] = param_3;
			puVar4[0x10] = param_3;
			puVar4[0x16] = param_3;
			puVar4[0x14] = param_3;
			puVar4[0x1a] = param_3;
			puVar4[0x18] = param_3;
			puVar4[0x1e] = param_3;
			puVar4[0x1c] = param_3;
			puVar4 = puVar4 + 0x20;
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
		uVar2 = uVar2 & 7;
		if ((uVar3 >> 2 & 7) != 0)
			goto LAB_100c9830;
	}
	param_2 = param_2 - (ulonglong)(uVar3 & 0xfffffffc);
LAB_100c9844:
	if ((int)param_2 != 0) {
		do {
			if (((uint)puVar4 & 1) == 0) {
				*puVar4 = param_3;
			}
			puVar4 = puVar4 + 1;
			param_2 = param_2 + -1;
		} while (param_2 != 0);
		return;
	}
	return;
}

void FUN_100c986c(int *param_1, longlong param_2, undefined param_3)

{
	ulonglong uVar1;
	ulonglong uVar2;
	uint uVar3;
	undefined *puVar4;

	puVar4 = (undefined *)*param_1;
	uVar3 = (uint)param_2;
	*(undefined **)param_1 = puVar4 + uVar3;
	uVar2 = (ulonglong)(uVar3 >> 2);
	if ((int)uVar3 < 4)
		goto LAB_100c9904;
	uVar1 = (ulonglong)(uVar3 >> 5);
	if (uVar3 >> 5 == 0) {
	LAB_100c98f0:
		do {
			puVar4[3] = param_3;
			puVar4[1] = param_3;
			puVar4 = puVar4 + 4;
			uVar2 = uVar2 - 1;
		} while (uVar2 != 0);
	} else {
		do {
			puVar4[3] = param_3;
			puVar4[1] = param_3;
			puVar4[7] = param_3;
			puVar4[5] = param_3;
			puVar4[0xb] = param_3;
			puVar4[9] = param_3;
			puVar4[0xf] = param_3;
			puVar4[0xd] = param_3;
			puVar4[0x13] = param_3;
			puVar4[0x11] = param_3;
			puVar4[0x17] = param_3;
			puVar4[0x15] = param_3;
			puVar4[0x1b] = param_3;
			puVar4[0x19] = param_3;
			puVar4[0x1f] = param_3;
			puVar4[0x1d] = param_3;
			puVar4 = puVar4 + 0x20;
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
		uVar2 = uVar2 & 7;
		if ((uVar3 >> 2 & 7) != 0)
			goto LAB_100c98f0;
	}
	param_2 = param_2 - (ulonglong)(uVar3 & 0xfffffffc);
LAB_100c9904:
	if ((int)param_2 != 0) {
		do {
			if (((uint)puVar4 & 1) != 0) {
				*puVar4 = param_3;
			}
			puVar4 = puVar4 + 1;
			param_2 = param_2 + -1;
		} while (param_2 != 0);
		return;
	}
	return;
}

void FUN_100c992c(int *param_1, longlong param_2, int *param_3, undefined param_4)

{
	undefined *puVar1;
	int iVar2;

	puVar1 = (undefined *)*param_1;
	iVar2 = *param_3;
	*(undefined **)param_1 = puVar1 + (int)param_2;
	if ((int)param_2 != 0) {
		do {
			if (iVar2 < 0) {
				*puVar1 = param_4;
			}
			iVar2 = iVar2 << 1;
			puVar1 = puVar1 + 1;
			param_2 = param_2 + -1;
		} while (param_2 != 0);
	}
	*param_3 = iVar2;
	return;
}

void asm_Cel2DecDatOnly(undefined4 *param_1, byte **param_2, int param_3, uint param_4)

{
	byte bVar1;
	byte bVar2;
	uint uVar3;
	uint uVar4;
	byte *pbVar5;
	byte *pbVar6;
	byte *pbVar7;
	ulonglong uVar8;
	ulonglong uVar9;
	undefined *puVar10;
	byte *pbVar11;
	byte *pbVar12;

	puVar10 = (undefined *)*param_1;
	pbVar12 = *param_2;
	*(undefined **)param_1 = puVar10 + param_4;
	*param_2 = *param_2 + param_4;
	if ((param_4 & 1) != 0) {
		bVar1 = *pbVar12;
		pbVar12 = pbVar12 + 1;
		param_4 = param_4 - 1;
		*puVar10 = *(undefined *)(param_3 + (uint)bVar1);
		puVar10 = puVar10 + 1;
	}
	if ((param_4 & 2) != 0) {
		bVar1 = pbVar12[1];
		bVar2 = *pbVar12;
		pbVar12 = pbVar12 + 2;
		param_4 = param_4 - 2;
		*puVar10 = *(undefined *)(param_3 + ((int)CONCAT11(bVar1, bVar2) & 0xffU));
		puVar10[1] = *(undefined *)(param_3 + ((int)CONCAT11(bVar1, bVar2) >> 8 & 0xffU));
		puVar10 = puVar10 + 2;
	}
	uVar9 = (ulonglong)(param_4 >> 2);
	if (3 < (int)param_4) {
		uVar8 = (ulonglong)(param_4 >> 4);
		if (param_4 >> 4 != 0) {
			do {
				uVar3 = (int)((uint)pbVar12[3] << 0x18 | (uint)pbVar12[2] << 0x10 | (uint)pbVar12[1] << 8 | (uint)*pbVar12) >> 8;
				*puVar10 = *(undefined *)(param_3 + (uint)*pbVar12);
				uVar4 = (int)uVar3 >> 8;
				puVar10[1] = *(undefined *)(param_3 + (uVar3 & 0xff));
				puVar10[2] = *(undefined *)(param_3 + (uVar4 & 0xff));
				puVar10[3] = *(undefined *)(param_3 + ((int)uVar4 >> 8 & 0xffU));
				uVar3 = (int)((uint)pbVar12[7] << 0x18 | (uint)pbVar12[6] << 0x10 | (uint)pbVar12[5] << 8 | (uint)pbVar12[4]) >> 8;
				puVar10[4] = *(undefined *)(param_3 + (uint)pbVar12[4]);
				uVar4 = (int)uVar3 >> 8;
				puVar10[5] = *(undefined *)(param_3 + (uVar3 & 0xff));
				puVar10[6] = *(undefined *)(param_3 + (uVar4 & 0xff));
				puVar10[7] = *(undefined *)(param_3 + ((int)uVar4 >> 8 & 0xffU));
				pbVar11 = pbVar12 + 0xc;
				uVar3 = (int)((uint)pbVar12[0xb] << 0x18 | (uint)pbVar12[10] << 0x10 | (uint)pbVar12[9] << 8 | (uint)pbVar12[8]) >> 8;
				puVar10[8] = *(undefined *)(param_3 + (uint)pbVar12[8]);
				uVar4 = (int)uVar3 >> 8;
				puVar10[9] = *(undefined *)(param_3 + (uVar3 & 0xff));
				puVar10[10] = *(undefined *)(param_3 + (uVar4 & 0xff));
				puVar10[0xb] = *(undefined *)(param_3 + ((int)uVar4 >> 8 & 0xffU));
				pbVar5 = pbVar12 + 0xf;
				pbVar6 = pbVar12 + 0xe;
				pbVar7 = pbVar12 + 0xd;
				pbVar12 = pbVar12 + 0x10;
				uVar3 = (int)((uint)*pbVar5 << 0x18 | (uint)*pbVar6 << 0x10 | (uint)*pbVar7 << 8 | (uint)*pbVar11) >> 8;
				puVar10[0xc] = *(undefined *)(param_3 + (uint)*pbVar11);
				uVar4 = (int)uVar3 >> 8;
				puVar10[0xd] = *(undefined *)(param_3 + (uVar3 & 0xff));
				puVar10[0xe] = *(undefined *)(param_3 + (uVar4 & 0xff));
				puVar10[0xf] = *(undefined *)(param_3 + ((int)uVar4 >> 8 & 0xffU));
				puVar10 = puVar10 + 0x10;
				uVar8 = uVar8 - 1;
			} while (uVar8 != 0);
			uVar9 = uVar9 & 3;
			if ((param_4 >> 2 & 3) == 0) {
				return;
			}
		}
		do {
			pbVar5 = pbVar12 + 3;
			pbVar6 = pbVar12 + 2;
			pbVar7 = pbVar12 + 1;
			bVar1 = *pbVar12;
			pbVar12 = pbVar12 + 4;
			uVar3 = (int)((uint)*pbVar5 << 0x18 | (uint)*pbVar6 << 0x10 | (uint)*pbVar7 << 8 | (uint)bVar1) >> 8;
			*puVar10 = *(undefined *)(param_3 + (uint)bVar1);
			uVar4 = (int)uVar3 >> 8;
			puVar10[1] = *(undefined *)(param_3 + (uVar3 & 0xff));
			puVar10[2] = *(undefined *)(param_3 + (uVar4 & 0xff));
			puVar10[3] = *(undefined *)(param_3 + ((int)uVar4 >> 8 & 0xffU));
			puVar10 = puVar10 + 4;
			uVar9 = uVar9 - 1;
		} while (uVar9 != 0);
		return;
	}
	return;
}

void FUN_100c9b6c(undefined4 *param_1, byte **param_2, int param_3, longlong param_4)

{
	byte *pbVar1;
	ulonglong uVar2;
	ulonglong uVar3;
	uint uVar4;
	undefined *puVar5;
	byte *pbVar6;

	puVar5 = (undefined *)*param_1;
	uVar4 = (uint)param_4;
	pbVar6 = *param_2;
	*(undefined **)param_1 = puVar5 + uVar4;
	uVar3 = (ulonglong)(uVar4 >> 2);
	*param_2 = *param_2 + uVar4;
	if ((int)uVar4 < 4)
		goto LAB_100c9ca8;
	uVar2 = (ulonglong)(uVar4 >> 5);
	if (uVar4 >> 5 == 0) {
	LAB_100c9c80:
		do {
			*puVar5 = *(undefined *)(param_3 + (uint)*pbVar6);
			pbVar1 = pbVar6 + 2;
			pbVar6 = pbVar6 + 4;
			puVar5[2] = *(undefined *)(param_3 + (uint)*pbVar1);
			puVar5 = puVar5 + 4;
			uVar3 = uVar3 - 1;
		} while (uVar3 != 0);
	} else {
		do {
			*puVar5 = *(undefined *)(param_3 + (uint)*pbVar6);
			puVar5[2] = *(undefined *)(param_3 + (uint)pbVar6[2]);
			puVar5[4] = *(undefined *)(param_3 + (uint)pbVar6[4]);
			puVar5[6] = *(undefined *)(param_3 + (uint)pbVar6[6]);
			puVar5[8] = *(undefined *)(param_3 + (uint)pbVar6[8]);
			puVar5[10] = *(undefined *)(param_3 + (uint)pbVar6[10]);
			puVar5[0xc] = *(undefined *)(param_3 + (uint)pbVar6[0xc]);
			puVar5[0xe] = *(undefined *)(param_3 + (uint)pbVar6[0xe]);
			puVar5[0x10] = *(undefined *)(param_3 + (uint)pbVar6[0x10]);
			puVar5[0x12] = *(undefined *)(param_3 + (uint)pbVar6[0x12]);
			puVar5[0x14] = *(undefined *)(param_3 + (uint)pbVar6[0x14]);
			puVar5[0x16] = *(undefined *)(param_3 + (uint)pbVar6[0x16]);
			puVar5[0x18] = *(undefined *)(param_3 + (uint)pbVar6[0x18]);
			puVar5[0x1a] = *(undefined *)(param_3 + (uint)pbVar6[0x1a]);
			puVar5[0x1c] = *(undefined *)(param_3 + (uint)pbVar6[0x1c]);
			pbVar1 = pbVar6 + 0x1e;
			pbVar6 = pbVar6 + 0x20;
			puVar5[0x1e] = *(undefined *)(param_3 + (uint)*pbVar1);
			puVar5 = puVar5 + 0x20;
			uVar2 = uVar2 - 1;
		} while (uVar2 != 0);
		uVar3 = uVar3 & 7;
		if ((uVar4 >> 2 & 7) != 0)
			goto LAB_100c9c80;
	}
	param_4 = param_4 - (ulonglong)(uVar4 & 0xfffffffc);
LAB_100c9ca8:
	if ((int)param_4 != 0) {
		do {
			if (((uint)puVar5 & 1) == 0) {
				*puVar5 = *(undefined *)(param_3 + (uint)*pbVar6);
			}
			puVar5 = puVar5 + 1;
			pbVar6 = pbVar6 + 1;
			param_4 = param_4 + -1;
		} while (param_4 != 0);
		return;
	}
	return;
}

void FUN_100c9cd8(undefined4 *param_1, byte **param_2, int param_3, longlong param_4)

{
	byte *pbVar1;
	ulonglong uVar2;
	ulonglong uVar3;
	uint uVar4;
	undefined *puVar5;
	byte *pbVar6;

	puVar5 = (undefined *)*param_1;
	uVar4 = (uint)param_4;
	pbVar6 = *param_2;
	*(undefined **)param_1 = puVar5 + uVar4;
	uVar3 = (ulonglong)(uVar4 >> 2);
	*param_2 = *param_2 + uVar4;
	if ((int)uVar4 < 4)
		goto LAB_100c9e14;
	uVar2 = (ulonglong)(uVar4 >> 5);
	if (uVar4 >> 5 == 0) {
	LAB_100c9dec:
		do {
			puVar5[1] = *(undefined *)(param_3 + (uint)pbVar6[1]);
			pbVar1 = pbVar6 + 3;
			pbVar6 = pbVar6 + 4;
			puVar5[3] = *(undefined *)(param_3 + (uint)*pbVar1);
			puVar5 = puVar5 + 4;
			uVar3 = uVar3 - 1;
		} while (uVar3 != 0);
	} else {
		do {
			puVar5[1] = *(undefined *)(param_3 + (uint)pbVar6[1]);
			puVar5[3] = *(undefined *)(param_3 + (uint)pbVar6[3]);
			puVar5[5] = *(undefined *)(param_3 + (uint)pbVar6[5]);
			puVar5[7] = *(undefined *)(param_3 + (uint)pbVar6[7]);
			puVar5[9] = *(undefined *)(param_3 + (uint)pbVar6[9]);
			puVar5[0xb] = *(undefined *)(param_3 + (uint)pbVar6[0xb]);
			puVar5[0xd] = *(undefined *)(param_3 + (uint)pbVar6[0xd]);
			puVar5[0xf] = *(undefined *)(param_3 + (uint)pbVar6[0xf]);
			puVar5[0x11] = *(undefined *)(param_3 + (uint)pbVar6[0x11]);
			puVar5[0x13] = *(undefined *)(param_3 + (uint)pbVar6[0x13]);
			puVar5[0x15] = *(undefined *)(param_3 + (uint)pbVar6[0x15]);
			puVar5[0x17] = *(undefined *)(param_3 + (uint)pbVar6[0x17]);
			puVar5[0x19] = *(undefined *)(param_3 + (uint)pbVar6[0x19]);
			puVar5[0x1b] = *(undefined *)(param_3 + (uint)pbVar6[0x1b]);
			puVar5[0x1d] = *(undefined *)(param_3 + (uint)pbVar6[0x1d]);
			pbVar1 = pbVar6 + 0x1f;
			pbVar6 = pbVar6 + 0x20;
			puVar5[0x1f] = *(undefined *)(param_3 + (uint)*pbVar1);
			puVar5 = puVar5 + 0x20;
			uVar2 = uVar2 - 1;
		} while (uVar2 != 0);
		uVar3 = uVar3 & 7;
		if ((uVar4 >> 2 & 7) != 0)
			goto LAB_100c9dec;
	}
	param_4 = param_4 - (ulonglong)(uVar4 & 0xfffffffc);
LAB_100c9e14:
	if ((int)param_4 != 0) {
		do {
			if (((uint)puVar5 & 1) != 0) {
				*puVar5 = *(undefined *)(param_3 + (uint)*pbVar6);
			}
			puVar5 = puVar5 + 1;
			pbVar6 = pbVar6 + 1;
			param_4 = param_4 + -1;
		} while (param_4 != 0);
		return;
	}
	return;
}

void FUN_100c9e44(undefined4 *param_1, byte **param_2, int param_3, longlong param_4, int *param_5)

{
	int iVar1;
	undefined *puVar2;
	byte *pbVar3;
	int iVar4;

	iVar1 = (int)param_4;
	puVar2 = (undefined *)*param_1;
	pbVar3 = *param_2;
	iVar4 = *param_5;
	*(undefined **)param_1 = puVar2 + iVar1;
	*param_2 = *param_2 + iVar1;
	if (iVar1 != 0) {
		do {
			if (iVar4 < 0) {
				*puVar2 = *(undefined *)(param_3 + (uint)*pbVar3);
			}
			iVar4 = iVar4 << 1;
			puVar2 = puVar2 + 1;
			pbVar3 = pbVar3 + 1;
			param_4 = param_4 + -1;
		} while (param_4 != 0);
	}
	*param_5 = iVar4;
	return;
}

void asm_DrawFlask(byte **param_1, byte **param_2, uint param_3)

{
	byte bVar1;
	byte bVar2;
	uint uVar3;
	ulonglong uVar4;
	uint uVar5;
	byte *pbVar6;
	byte *pbVar7;

	pbVar6 = *param_1;
	pbVar7 = *param_2;
	*param_1 = pbVar6 + param_3;
	*param_2 = *param_2 + param_3;
	if ((param_3 & 1) != 0) {
		bVar1 = *pbVar7;
		pbVar7 = pbVar7 + 1;
		if (bVar1 != 0) {
			*pbVar6 = bVar1;
		}
		pbVar6 = pbVar6 + 1;
		param_3 = param_3 - 1;
	}
	if ((param_3 & 2) != 0) {
		bVar1 = pbVar7[1];
		bVar2 = *pbVar7;
		if (CONCAT11(bVar1, bVar2) != 0) {
			if (bVar2 != 0) {
				*pbVar6 = bVar2;
			}
			if (bVar1 != 0) {
				pbVar6[1] = bVar1;
			}
		}
		pbVar6 = pbVar6 + 2;
		pbVar7 = pbVar7 + 2;
		param_3 = param_3 - 2;
	}
	uVar4 = (ulonglong)(param_3 >> 2);
	if ((int)param_3 < 4) {
		return;
	}
	do {
		bVar1 = *pbVar7;
		uVar5 = (uint)pbVar7[3] << 0x18 | (uint)pbVar7[2] << 0x10 | (uint)pbVar7[1] << 8 | (uint)bVar1;
		if (uVar5 != 0) {
			uVar5 = (int)uVar5 >> 8;
			if (bVar1 != 0) {
				*pbVar6 = bVar1;
			}
			uVar3 = uVar5 & 0xff;
			uVar5 = (int)uVar5 >> 8;
			if (uVar3 != 0) {
				pbVar6[1] = (byte)uVar3;
			}
			uVar3 = uVar5 & 0xff;
			if (uVar3 != 0) {
				pbVar6[2] = (byte)uVar3;
			}
			uVar5 = (int)uVar5 >> 8 & 0xff;
			if (uVar5 != 0) {
				pbVar6[3] = (byte)uVar5;
			}
		}
		pbVar6 = pbVar6 + 4;
		pbVar7 = pbVar7 + 4;
		uVar4 = uVar4 - 1;
	} while (uVar4 != 0);
	return;
}