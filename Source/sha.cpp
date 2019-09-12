
void SHA1Init(SHA1Context *context)

{
	context->state[0] = 0x67452301;
	context->state[1] = -0x10325477;
	context->state[2] = -0x67452302;
	context->state[3] = 0x10325476;
	context->state[4] = -0x3c2d1e10;
	context->count[0] = 0;
	context->count[1] = 0;
	return;
}

void SHA1ProcessMessageBlock(SHA1Context *context)

{
	uint *puVar1;
	int *piVar2;
	int *piVar3;
	char *pcVar4;
	char *pcVar5;
	char *pcVar6;
	char *pcVar7;
	uint uVar8;
	uint uVar9;
	uint uVar10;
	SHA1Context *pSVar11;
	uint uVar12;
	uint uVar13;
	uint *puVar14;
	int *piVar15;
	uint uVar16;
	uint uVar17;
	uint *puVar18;
	uint uVar19;
	longlong lVar20;
	longlong lVar21;
	uint local_160[16];
	uint local_120[4];
	int local_110[20];
	int local_c0[20];
	int local_70[28];

	lVar20 = 2;
	puVar14 = local_160;
	puVar18 = puVar14;
	pSVar11 = context;
	do {
		*puVar18 = (uint)(byte)pSVar11->buffer[3] << 0x18 | (uint)(byte)pSVar11->buffer[2] << 0x10 | (uint)(byte)pSVar11->buffer[1] << 8 | (uint)(byte)pSVar11->buffer[0];
		puVar18[1] = (uint)(byte)pSVar11->buffer[7] << 0x18 | (uint)(byte)pSVar11->buffer[6] << 0x10 | (uint)(byte)pSVar11->buffer[5] << 8 | (uint)(byte)pSVar11->buffer[4];
		puVar18[2] = (uint)(byte)pSVar11->buffer[0xb] << 0x18 | (uint)(byte)pSVar11->buffer[10] << 0x10 | (uint)(byte)pSVar11->buffer[9] << 8 | (uint)(byte)pSVar11->buffer[8];
		puVar18[3] = (uint)(byte)pSVar11->buffer[0xf] << 0x18 | (uint)(byte)pSVar11->buffer[0xe] << 0x10 | (uint)(byte)pSVar11->buffer[0xd] << 8 | (uint)(byte)pSVar11->buffer[0xc];
		puVar18[4] = (uint)(byte)pSVar11->buffer[0x13] << 0x18 | (uint)(byte)pSVar11->buffer[0x12] << 0x10 | (uint)(byte)pSVar11->buffer[0x11] << 8 | (uint)(byte)pSVar11->buffer[0x10];
		puVar18[5] = (uint)(byte)pSVar11->buffer[0x17] << 0x18 | (uint)(byte)pSVar11->buffer[0x16] << 0x10 | (uint)(byte)pSVar11->buffer[0x15] << 8 | (uint)(byte)pSVar11->buffer[0x14];
		pcVar4 = pSVar11->buffer;
		puVar18[6] = (uint)(byte)pSVar11->buffer[0x1b] << 0x18 | (uint)(byte)pSVar11->buffer[0x1a] << 0x10 | (uint)(byte)pSVar11->buffer[0x19] << 8 | (uint)(byte)pSVar11->buffer[0x18];
		pcVar5 = pSVar11->buffer;
		pcVar6 = pSVar11->buffer;
		pcVar7 = pSVar11->buffer;
		pSVar11 = (SHA1Context *)(pSVar11->buffer + 4);
		puVar18[7] = (uint)(byte)pcVar5[0x1f] << 0x18 | (uint)(byte)pcVar6[0x1e] << 0x10 | (uint)(byte)pcVar7[0x1d] << 8 | (uint)(byte)pcVar4[0x1c];
		puVar18 = puVar18 + 8;
		lVar20 = lVar20 + -1;
	} while (lVar20 != 0);
	puVar18 = local_120;
	lVar20 = 8;
	do {
		*puVar18 = puVar18[-0x10] ^ puVar18[-0xe] ^ puVar18[-3] ^ puVar18[-8];
		puVar18[1] = puVar18[-0xf] ^ puVar18[-0xd] ^ puVar18[-2] ^ puVar18[-7];
		puVar18[2] = puVar18[-0xe] ^ puVar18[-0xc] ^ puVar18[-1] ^ puVar18[-6];
		puVar18[3] = puVar18[-0xd] ^ puVar18[-0xb] ^ *puVar18 ^ puVar18[-5];
		puVar18[4] = puVar18[-0xc] ^ puVar18[-10] ^ puVar18[1] ^ puVar18[-4];
		puVar18[5] = puVar18[-0xb] ^ puVar18[-9] ^ puVar18[2] ^ puVar18[-3];
		puVar18[6] = puVar18[-10] ^ puVar18[-8] ^ puVar18[3] ^ puVar18[-2];
		puVar18[7] = puVar18[-9] ^ puVar18[-7] ^ puVar18[4] ^ puVar18[-1];
		puVar18 = puVar18 + 8;
		lVar20 = lVar20 + -1;
	} while (lVar20 != 0);
	uVar19 = context->state[0];
	lVar21 = 2;
	uVar13 = context->state[1];
	uVar16 = context->state[2];
	uVar8 = context->state[3];
	uVar10 = context->state[4];
	lVar20 = 0;
	do {
		uVar12 = uVar13 << 0x1e | (int)uVar13 >> 2;
		uVar13 = (uVar19 << 5 | (int)uVar19 >> 0x1b) + (uVar13 & uVar16 | uVar8 & ~uVar13) + uVar10 + *puVar14 + 0x5a827999;
		uVar17 = (uVar13 * 0x20 | (int)uVar13 >> 0x1b) + (uVar19 & uVar12 | uVar16 & ~uVar19) + uVar8 + puVar14[1] + 0x5a827999;
		uVar10 = uVar19 << 0x1e | (int)uVar19 >> 2;
		uVar8 = uVar13 * 0x40000000 | (int)uVar13 >> 2;
		uVar9 = (uVar17 * 0x20 | (int)uVar17 >> 0x1b) + (uVar13 & uVar10 | uVar12 & ~uVar13) + uVar16 + puVar14[2] + 0x5a827999;
		uVar13 = (uVar9 * 0x20 | (int)uVar9 >> 0x1b) + (uVar17 & uVar8 | uVar10 & ~uVar17) + uVar12 + puVar14[3] + 0x5a827999;
		uVar19 = uVar17 * 0x40000000 | (int)uVar17 >> 2;
		uVar16 = uVar9 * 0x40000000 | (int)uVar9 >> 2;
		uVar9 = (uVar13 * 0x20 | (int)uVar13 >> 0x1b) + (uVar9 & uVar19 | uVar8 & ~uVar9) + uVar10 + puVar14[4] + 0x5a827999;
		uVar12 = (uVar9 * 0x20 | (int)uVar9 >> 0x1b) + (uVar13 & uVar16 | uVar19 & ~uVar13) + uVar8 + puVar14[5] + 0x5a827999;
		puVar18 = puVar14 + 6;
		puVar1 = puVar14 + 7;
		uVar10 = uVar13 * 0x40000000 | (int)uVar13 >> 2;
		puVar14 = puVar14 + 8;
		lVar20 = lVar20 + 8;
		uVar8 = uVar9 * 0x40000000 | (int)uVar9 >> 2;
		uVar13 = (uVar12 * 0x20 | (int)uVar12 >> 0x1b) + (uVar9 & uVar10 | uVar16 & ~uVar9) + uVar19 + *puVar18 + 0x5a827999;
		uVar19 = (uVar13 * 0x20 | (int)uVar13 >> 0x1b) + (uVar12 & uVar8 | uVar10 & ~uVar12) + uVar16 + *puVar1 + 0x5a827999;
		uVar16 = uVar12 * 0x40000000 | (int)uVar12 >> 2;
		lVar21 = lVar21 + -1;
	} while (lVar21 != 0);
	puVar18 = local_160 + (int)lVar20;
	lVar21 = 0x14 - lVar20;
	uVar12 = uVar13;
	uVar9 = uVar10;
	if ((int)lVar20 < 0x14) {
		do {
			uVar10 = uVar8;
			uVar8 = uVar16;
			uVar13 = uVar19;
			uVar19 = *puVar18;
			puVar18 = puVar18 + 1;
			uVar19 = (uVar13 << 5 | (int)uVar13 >> 0x1b) + (uVar12 & uVar8 | uVar10 & ~uVar12) + uVar9 + uVar19 + 0x5a827999;
			uVar16 = uVar12 << 0x1e | (int)uVar12 >> 2;
			lVar21 = lVar21 + -1;
			uVar12 = uVar13;
			uVar9 = uVar10;
		} while (lVar21 != 0);
	}
	piVar15 = local_110;
	lVar21 = 2;
	lVar20 = 0x14;
	do {
		uVar12 = uVar13 << 0x1e | (int)uVar13 >> 2;
		uVar13 = (uVar19 << 5 | (int)uVar19 >> 0x1b) + (uVar8 ^ uVar13 ^ uVar16) + uVar10 + *piVar15 + 0x6ed9eba1;
		uVar17 = (uVar13 * 0x20 | (int)uVar13 >> 0x1b) + (uVar16 ^ uVar19 ^ uVar12) + uVar8 + piVar15[1] + 0x6ed9eba1;
		uVar10 = uVar19 << 0x1e | (int)uVar19 >> 2;
		uVar8 = uVar13 * 0x40000000 | (int)uVar13 >> 2;
		uVar9 = (uVar17 * 0x20 | (int)uVar17 >> 0x1b) + (uVar12 ^ uVar13 ^ uVar10) + uVar16 + piVar15[2] + 0x6ed9eba1;
		uVar13 = (uVar9 * 0x20 | (int)uVar9 >> 0x1b) + (uVar10 ^ uVar17 ^ uVar8) + uVar12 + piVar15[3] + 0x6ed9eba1;
		uVar19 = uVar17 * 0x40000000 | (int)uVar17 >> 2;
		uVar16 = uVar9 * 0x40000000 | (int)uVar9 >> 2;
		uVar9 = (uVar13 * 0x20 | (int)uVar13 >> 0x1b) + (uVar8 ^ uVar9 ^ uVar19) + uVar10 + piVar15[4] + 0x6ed9eba1;
		uVar12 = (uVar9 * 0x20 | (int)uVar9 >> 0x1b) + (uVar19 ^ uVar13 ^ uVar16) + uVar8 + piVar15[5] + 0x6ed9eba1;
		piVar2 = piVar15 + 6;
		piVar3 = piVar15 + 7;
		uVar10 = uVar13 * 0x40000000 | (int)uVar13 >> 2;
		piVar15 = piVar15 + 8;
		lVar20 = lVar20 + 8;
		uVar8 = uVar9 * 0x40000000 | (int)uVar9 >> 2;
		uVar13 = (uVar12 * 0x20 | (int)uVar12 >> 0x1b) + (uVar16 ^ uVar9 ^ uVar10) + uVar19 + *piVar2 + 0x6ed9eba1;
		uVar19 = (uVar13 * 0x20 | (int)uVar13 >> 0x1b) + (uVar10 ^ uVar12 ^ uVar8) + uVar16 + *piVar3 + 0x6ed9eba1;
		uVar16 = uVar12 * 0x40000000 | (int)uVar12 >> 2;
		lVar21 = lVar21 + -1;
	} while (lVar21 != 0);
	puVar18 = local_160 + (int)lVar20;
	lVar21 = 0x28 - lVar20;
	uVar12 = uVar8;
	uVar9 = uVar10;
	uVar17 = uVar13;
	if ((int)lVar20 < 0x28) {
		do {
			uVar13 = uVar19;
			uVar8 = uVar16;
			uVar10 = uVar12;
			uVar19 = *puVar18;
			puVar18 = puVar18 + 1;
			uVar19 = (uVar13 << 5 | (int)uVar13 >> 0x1b) + (uVar10 ^ uVar17 ^ uVar8) + uVar9 + uVar19 + 0x6ed9eba1;
			uVar16 = uVar17 << 0x1e | (int)uVar17 >> 2;
			lVar21 = lVar21 + -1;
			uVar12 = uVar8;
			uVar9 = uVar10;
			uVar17 = uVar13;
		} while (lVar21 != 0);
	}
	piVar15 = local_c0;
	lVar21 = 2;
	lVar20 = 0x28;
	do {
		uVar12 = uVar13 << 0x1e | (int)uVar13 >> 2;
		uVar13 = (uVar19 << 5 | (int)uVar19 >> 0x1b) + (uVar16 & uVar8 | uVar13 & (uVar16 | uVar8)) + uVar10 + *piVar15 + -0x70e44324;
		uVar17 = (uVar13 * 0x20 | (int)uVar13 >> 0x1b) + (uVar12 & uVar16 | uVar19 & (uVar12 | uVar16)) + uVar8 + piVar15[1] + -0x70e44324;
		uVar10 = uVar19 << 0x1e | (int)uVar19 >> 2;
		uVar8 = uVar13 * 0x40000000 | (int)uVar13 >> 2;
		uVar9 = (uVar17 * 0x20 | (int)uVar17 >> 0x1b) + (uVar10 & uVar12 | uVar13 & (uVar10 | uVar12)) + uVar16 + piVar15[2] + -0x70e44324;
		uVar13 = (uVar9 * 0x20 | (int)uVar9 >> 0x1b) + (uVar8 & uVar10 | uVar17 & (uVar8 | uVar10)) + uVar12 + piVar15[3] + -0x70e44324;
		uVar19 = uVar17 * 0x40000000 | (int)uVar17 >> 2;
		uVar16 = uVar9 * 0x40000000 | (int)uVar9 >> 2;
		uVar9 = (uVar13 * 0x20 | (int)uVar13 >> 0x1b) + (uVar19 & uVar8 | uVar9 & (uVar19 | uVar8)) + uVar10 + piVar15[4] + -0x70e44324;
		uVar12 = (uVar9 * 0x20 | (int)uVar9 >> 0x1b) + (uVar16 & uVar19 | uVar13 & (uVar16 | uVar19)) + uVar8 + piVar15[5] + -0x70e44324;
		piVar2 = piVar15 + 6;
		piVar3 = piVar15 + 7;
		uVar10 = uVar13 * 0x40000000 | (int)uVar13 >> 2;
		piVar15 = piVar15 + 8;
		lVar20 = lVar20 + 8;
		uVar8 = uVar9 * 0x40000000 | (int)uVar9 >> 2;
		uVar13 = (uVar12 * 0x20 | (int)uVar12 >> 0x1b) + (uVar10 & uVar16 | uVar9 & (uVar10 | uVar16)) + uVar19 + *piVar2 + -0x70e44324;
		uVar19 = (uVar13 * 0x20 | (int)uVar13 >> 0x1b) + (uVar8 & uVar10 | uVar12 & (uVar8 | uVar10)) + uVar16 + *piVar3 + -0x70e44324;
		uVar16 = uVar12 * 0x40000000 | (int)uVar12 >> 2;
		lVar21 = lVar21 + -1;
	} while (lVar21 != 0);
	puVar18 = local_160 + (int)lVar20;
	lVar21 = 0x3c - lVar20;
	uVar12 = uVar13;
	uVar9 = uVar10;
	uVar17 = uVar8;
	if ((int)lVar20 < 0x3c) {
		do {
			uVar8 = uVar16;
			uVar10 = uVar17;
			uVar13 = uVar19;
			uVar19 = *puVar18;
			puVar18 = puVar18 + 1;
			uVar19 = (uVar13 << 5 | (int)uVar13 >> 0x1b) + (uVar8 & uVar10 | uVar12 & (uVar8 | uVar10)) + uVar9 + uVar19 + -0x70e44324;
			uVar16 = uVar12 << 0x1e | (int)uVar12 >> 2;
			lVar21 = lVar21 + -1;
			uVar12 = uVar13;
			uVar9 = uVar10;
			uVar17 = uVar8;
		} while (lVar21 != 0);
	}
	piVar15 = local_70;
	lVar21 = 2;
	lVar20 = 0x3c;
	do {
		uVar12 = uVar13 << 0x1e | (int)uVar13 >> 2;
		uVar13 = (uVar19 << 5 | (int)uVar19 >> 0x1b) + (uVar8 ^ uVar13 ^ uVar16) + uVar10 + *piVar15 + -0x359d3e2a;
		uVar17 = (uVar13 * 0x20 | (int)uVar13 >> 0x1b) + (uVar16 ^ uVar19 ^ uVar12) + uVar8 + piVar15[1] + -0x359d3e2a;
		uVar10 = uVar19 << 0x1e | (int)uVar19 >> 2;
		uVar8 = uVar13 * 0x40000000 | (int)uVar13 >> 2;
		uVar9 = (uVar17 * 0x20 | (int)uVar17 >> 0x1b) + (uVar12 ^ uVar13 ^ uVar10) + uVar16 + piVar15[2] + -0x359d3e2a;
		uVar13 = (uVar9 * 0x20 | (int)uVar9 >> 0x1b) + (uVar10 ^ uVar17 ^ uVar8) + uVar12 + piVar15[3] + -0x359d3e2a;
		uVar19 = uVar17 * 0x40000000 | (int)uVar17 >> 2;
		uVar16 = uVar9 * 0x40000000 | (int)uVar9 >> 2;
		uVar9 = (uVar13 * 0x20 | (int)uVar13 >> 0x1b) + (uVar8 ^ uVar9 ^ uVar19) + uVar10 + piVar15[4] + -0x359d3e2a;
		uVar12 = (uVar9 * 0x20 | (int)uVar9 >> 0x1b) + (uVar19 ^ uVar13 ^ uVar16) + uVar8 + piVar15[5] + -0x359d3e2a;
		piVar2 = piVar15 + 6;
		piVar3 = piVar15 + 7;
		uVar10 = uVar13 * 0x40000000 | (int)uVar13 >> 2;
		piVar15 = piVar15 + 8;
		lVar20 = lVar20 + 8;
		uVar8 = uVar9 * 0x40000000 | (int)uVar9 >> 2;
		uVar13 = (uVar12 * 0x20 | (int)uVar12 >> 0x1b) + (uVar16 ^ uVar9 ^ uVar10) + uVar19 + *piVar2 + -0x359d3e2a;
		uVar19 = (uVar13 * 0x20 | (int)uVar13 >> 0x1b) + (uVar10 ^ uVar12 ^ uVar8) + uVar16 + *piVar3 + -0x359d3e2a;
		uVar16 = uVar12 * 0x40000000 | (int)uVar12 >> 2;
		lVar21 = lVar21 + -1;
	} while (lVar21 != 0);
	puVar18 = local_160 + (int)lVar20;
	lVar21 = 0x50 - lVar20;
	uVar12 = uVar13;
	uVar9 = uVar10;
	uVar17 = uVar8;
	if ((int)lVar20 < 0x50) {
		do {
			uVar8 = uVar16;
			uVar10 = uVar17;
			uVar13 = uVar19;
			uVar19 = *puVar18;
			puVar18 = puVar18 + 1;
			uVar19 = (uVar13 << 5 | (int)uVar13 >> 0x1b) + (uVar10 ^ uVar12 ^ uVar8) + uVar9 + uVar19 + -0x359d3e2a;
			uVar16 = uVar12 << 0x1e | (int)uVar12 >> 2;
			lVar21 = lVar21 + -1;
			uVar12 = uVar13;
			uVar9 = uVar10;
			uVar17 = uVar8;
		} while (lVar21 != 0);
	}
	context->state[0] = context->state[0] + uVar19;
	context->state[1] = context->state[1] + uVar13;
	context->state[2] = context->state[2] + uVar16;
	context->state[3] = context->state[3] + uVar8;
	context->state[4] = context->state[4] + uVar10;
	return;
}

// WARNING: Removing unreachable block (ram,0x100a422c)

void SHA1Input(SHA1Context *context, char *message_array, int len)

{
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	longlong lVar1;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	lVar1 = (longlong)(int)message_array;
	context->count[0] = context->count[0] + len * 8;
	context->count[1] = context->count[1] + (len >> 0x1d);
	while (0x3f < len) {
		CopyMemory((char)context + '\x1c', (char)lVar1, 0x40, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb,
		    in_stack_ffffffbf, local_3c);
		SHA1ProcessMessageBlock(context);
		lVar1 = lVar1 + 0x40;
		len = len + -0x40;
	}
	return;
}

void SHA1Clear(void)

{
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	ZeroMemory(0x9c, 0x14, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	return;
}

void SHA1Result(int n, char Message_Digest[20])

{
	uint uVar1;
	uint *in_r4;

	if (in_r4 == (uint *)0x0) {
		return;
	}
	n = n * 0x5c;
	uVar1 = *(uint *)(&DAT_1019fd9c + n);
	*in_r4 = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00 | uVar1 >> 0x18;
	uVar1 = *(uint *)(n + 0x1019fda0);
	in_r4[1] = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00 | uVar1 >> 0x18;
	uVar1 = *(uint *)(n + 0x1019fda4);
	in_r4[2] = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00 | uVar1 >> 0x18;
	uVar1 = *(uint *)(n + 0x1019fda8);
	in_r4[3] = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00 | uVar1 >> 0x18;
	uVar1 = *(uint *)(n + 0x1019fdac);
	in_r4[4] = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00 | uVar1 >> 0x18;
	return;
}

void SHA1Calculate(int n, char *data, char Message_Digest[20])

{
	int in_r5;
	char Message_Digest_00[20];

	SHA1Input((SHA1Context *)(&DAT_1019fd9c + n * 0x5c), data, 0x40);
	if (in_r5 != 0) {
		SHA1Result(n, Message_Digest_00);
	}
	return;
}

void SHA1Reset(int n)

{
	SHA1Init((SHA1Context *)(&DAT_1019fd9c + n * 0x5c));
	return;
}
