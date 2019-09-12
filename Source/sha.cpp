
void SHA1Init(undefined4 *param_1)

{
	*param_1 = 0x67452301;
	param_1[1] = 0xefcdab89;
	param_1[2] = 0x98badcfe;
	param_1[3] = 0x10325476;
	param_1[4] = 0xc3d2e1f0;
	param_1[5] = 0;
	param_1[6] = 0;
	return;
}

void SHA1ProcessMessageBlock(uint *param_1)

{
	byte *pbVar1;
	byte *pbVar2;
	byte *pbVar3;
	int *piVar4;
	int *piVar5;
	uint *puVar6;
	uint uVar7;
	uint uVar8;
	uint uVar9;
	uint *puVar10;
	uint uVar11;
	uint uVar12;
	uint *puVar13;
	int *piVar14;
	uint uVar15;
	uint uVar16;
	uint *puVar17;
	uint uVar18;
	longlong lVar19;
	longlong lVar20;
	uint local_160[16];
	uint local_120[4];
	int local_110[20];
	int local_c0[20];
	int local_70[28];

	lVar19 = 2;
	puVar13 = local_160;
	puVar17 = puVar13;
	puVar10 = param_1;
	do {
		*puVar17 = (uint) * (byte *)((int)puVar10 + 0x1f) << 0x18 | (uint) * (byte *)((int)puVar10 + 0x1e) << 0x10 | (uint) * (byte *)((int)puVar10 + 0x1d) << 8 | (uint) * (byte *)(puVar10 + 7);
		puVar17[1] = (uint) * (byte *)((int)puVar10 + 0x23) << 0x18 | (uint) * (byte *)((int)puVar10 + 0x22) << 0x10 | (uint) * (byte *)((int)puVar10 + 0x21) << 8 | (uint) * (byte *)(puVar10 + 8);
		puVar17[2] = (uint) * (byte *)((int)puVar10 + 0x27) << 0x18 | (uint) * (byte *)((int)puVar10 + 0x26) << 0x10 | (uint) * (byte *)((int)puVar10 + 0x25) << 8 | (uint) * (byte *)(puVar10 + 9);
		puVar17[3] = (uint) * (byte *)((int)puVar10 + 0x2b) << 0x18 | (uint) * (byte *)((int)puVar10 + 0x2a) << 0x10 | (uint) * (byte *)((int)puVar10 + 0x29) << 8 | (uint) * (byte *)(puVar10 + 10);
		puVar17[4] = (uint) * (byte *)((int)puVar10 + 0x2f) << 0x18 | (uint) * (byte *)((int)puVar10 + 0x2e) << 0x10 | (uint) * (byte *)((int)puVar10 + 0x2d) << 8 | (uint) * (byte *)(puVar10 + 0xb);
		puVar17[5] = (uint) * (byte *)((int)puVar10 + 0x33) << 0x18 | (uint) * (byte *)((int)puVar10 + 0x32) << 0x10 | (uint) * (byte *)((int)puVar10 + 0x31) << 8 | (uint) * (byte *)(puVar10 + 0xc);
		puVar6 = puVar10 + 0xe;
		puVar17[6] = (uint) * (byte *)((int)puVar10 + 0x37) << 0x18 | (uint) * (byte *)((int)puVar10 + 0x36) << 0x10 | (uint) * (byte *)((int)puVar10 + 0x35) << 8 | (uint) * (byte *)(puVar10 + 0xd);
		pbVar1 = (byte *)((int)puVar10 + 0x3b);
		pbVar2 = (byte *)((int)puVar10 + 0x3a);
		pbVar3 = (byte *)((int)puVar10 + 0x39);
		puVar10 = puVar10 + 8;
		puVar17[7] = (uint)*pbVar1 << 0x18 | (uint)*pbVar2 << 0x10 | (uint)*pbVar3 << 8 | (uint) * (byte *)puVar6;
		puVar17 = puVar17 + 8;
		lVar19 = lVar19 + -1;
	} while (lVar19 != 0);
	puVar17 = local_120;
	lVar19 = 8;
	do {
		*puVar17 = puVar17[-0x10] ^ puVar17[-0xe] ^ puVar17[-3] ^ puVar17[-8];
		puVar17[1] = puVar17[-0xf] ^ puVar17[-0xd] ^ puVar17[-2] ^ puVar17[-7];
		puVar17[2] = puVar17[-0xe] ^ puVar17[-0xc] ^ puVar17[-1] ^ puVar17[-6];
		puVar17[3] = puVar17[-0xd] ^ puVar17[-0xb] ^ *puVar17 ^ puVar17[-5];
		puVar17[4] = puVar17[-0xc] ^ puVar17[-10] ^ puVar17[1] ^ puVar17[-4];
		puVar17[5] = puVar17[-0xb] ^ puVar17[-9] ^ puVar17[2] ^ puVar17[-3];
		puVar17[6] = puVar17[-10] ^ puVar17[-8] ^ puVar17[3] ^ puVar17[-2];
		puVar17[7] = puVar17[-9] ^ puVar17[-7] ^ puVar17[4] ^ puVar17[-1];
		puVar17 = puVar17 + 8;
		lVar19 = lVar19 + -1;
	} while (lVar19 != 0);
	uVar18 = *param_1;
	lVar20 = 2;
	uVar12 = param_1[1];
	uVar15 = param_1[2];
	uVar7 = param_1[3];
	uVar9 = param_1[4];
	lVar19 = 0;
	do {
		uVar11 = uVar12 << 0x1e | (int)uVar12 >> 2;
		uVar12 = (uVar18 << 5 | (int)uVar18 >> 0x1b) + (uVar12 & uVar15 | uVar7 & ~uVar12) + uVar9 + *puVar13 + 0x5a827999;
		uVar16 = (uVar12 * 0x20 | (int)uVar12 >> 0x1b) + (uVar18 & uVar11 | uVar15 & ~uVar18) + uVar7 + puVar13[1] + 0x5a827999;
		uVar9 = uVar18 << 0x1e | (int)uVar18 >> 2;
		uVar7 = uVar12 * 0x40000000 | (int)uVar12 >> 2;
		uVar8 = (uVar16 * 0x20 | (int)uVar16 >> 0x1b) + (uVar12 & uVar9 | uVar11 & ~uVar12) + uVar15 + puVar13[2] + 0x5a827999;
		uVar12 = (uVar8 * 0x20 | (int)uVar8 >> 0x1b) + (uVar16 & uVar7 | uVar9 & ~uVar16) + uVar11 + puVar13[3] + 0x5a827999;
		uVar18 = uVar16 * 0x40000000 | (int)uVar16 >> 2;
		uVar15 = uVar8 * 0x40000000 | (int)uVar8 >> 2;
		uVar8 = (uVar12 * 0x20 | (int)uVar12 >> 0x1b) + (uVar8 & uVar18 | uVar7 & ~uVar8) + uVar9 + puVar13[4] + 0x5a827999;
		uVar11 = (uVar8 * 0x20 | (int)uVar8 >> 0x1b) + (uVar12 & uVar15 | uVar18 & ~uVar12) + uVar7 + puVar13[5] + 0x5a827999;
		puVar17 = puVar13 + 6;
		puVar10 = puVar13 + 7;
		uVar9 = uVar12 * 0x40000000 | (int)uVar12 >> 2;
		puVar13 = puVar13 + 8;
		lVar19 = lVar19 + 8;
		uVar7 = uVar8 * 0x40000000 | (int)uVar8 >> 2;
		uVar12 = (uVar11 * 0x20 | (int)uVar11 >> 0x1b) + (uVar8 & uVar9 | uVar15 & ~uVar8) + uVar18 + *puVar17 + 0x5a827999;
		uVar18 = (uVar12 * 0x20 | (int)uVar12 >> 0x1b) + (uVar11 & uVar7 | uVar9 & ~uVar11) + uVar15 + *puVar10 + 0x5a827999;
		uVar15 = uVar11 * 0x40000000 | (int)uVar11 >> 2;
		lVar20 = lVar20 + -1;
	} while (lVar20 != 0);
	puVar17 = local_160 + (int)lVar19;
	lVar20 = 0x14 - lVar19;
	uVar11 = uVar12;
	uVar8 = uVar9;
	if ((int)lVar19 < 0x14) {
		do {
			uVar9 = uVar7;
			uVar7 = uVar15;
			uVar12 = uVar18;
			uVar18 = *puVar17;
			puVar17 = puVar17 + 1;
			uVar18 = (uVar12 << 5 | (int)uVar12 >> 0x1b) + (uVar11 & uVar7 | uVar9 & ~uVar11) + uVar8 + uVar18 + 0x5a827999;
			uVar15 = uVar11 << 0x1e | (int)uVar11 >> 2;
			lVar20 = lVar20 + -1;
			uVar11 = uVar12;
			uVar8 = uVar9;
		} while (lVar20 != 0);
	}
	piVar14 = local_110;
	lVar20 = 2;
	lVar19 = 0x14;
	do {
		uVar11 = uVar12 << 0x1e | (int)uVar12 >> 2;
		uVar12 = (uVar18 << 5 | (int)uVar18 >> 0x1b) + (uVar7 ^ uVar12 ^ uVar15) + uVar9 + *piVar14 + 0x6ed9eba1;
		uVar16 = (uVar12 * 0x20 | (int)uVar12 >> 0x1b) + (uVar15 ^ uVar18 ^ uVar11) + uVar7 + piVar14[1] + 0x6ed9eba1;
		uVar9 = uVar18 << 0x1e | (int)uVar18 >> 2;
		uVar7 = uVar12 * 0x40000000 | (int)uVar12 >> 2;
		uVar8 = (uVar16 * 0x20 | (int)uVar16 >> 0x1b) + (uVar11 ^ uVar12 ^ uVar9) + uVar15 + piVar14[2] + 0x6ed9eba1;
		uVar12 = (uVar8 * 0x20 | (int)uVar8 >> 0x1b) + (uVar9 ^ uVar16 ^ uVar7) + uVar11 + piVar14[3] + 0x6ed9eba1;
		uVar18 = uVar16 * 0x40000000 | (int)uVar16 >> 2;
		uVar15 = uVar8 * 0x40000000 | (int)uVar8 >> 2;
		uVar8 = (uVar12 * 0x20 | (int)uVar12 >> 0x1b) + (uVar7 ^ uVar8 ^ uVar18) + uVar9 + piVar14[4] + 0x6ed9eba1;
		uVar11 = (uVar8 * 0x20 | (int)uVar8 >> 0x1b) + (uVar18 ^ uVar12 ^ uVar15) + uVar7 + piVar14[5] + 0x6ed9eba1;
		piVar4 = piVar14 + 6;
		piVar5 = piVar14 + 7;
		uVar9 = uVar12 * 0x40000000 | (int)uVar12 >> 2;
		piVar14 = piVar14 + 8;
		lVar19 = lVar19 + 8;
		uVar7 = uVar8 * 0x40000000 | (int)uVar8 >> 2;
		uVar12 = (uVar11 * 0x20 | (int)uVar11 >> 0x1b) + (uVar15 ^ uVar8 ^ uVar9) + uVar18 + *piVar4 + 0x6ed9eba1;
		uVar18 = (uVar12 * 0x20 | (int)uVar12 >> 0x1b) + (uVar9 ^ uVar11 ^ uVar7) + uVar15 + *piVar5 + 0x6ed9eba1;
		uVar15 = uVar11 * 0x40000000 | (int)uVar11 >> 2;
		lVar20 = lVar20 + -1;
	} while (lVar20 != 0);
	puVar17 = local_160 + (int)lVar19;
	lVar20 = 0x28 - lVar19;
	uVar11 = uVar7;
	uVar8 = uVar9;
	uVar16 = uVar12;
	if ((int)lVar19 < 0x28) {
		do {
			uVar12 = uVar18;
			uVar7 = uVar15;
			uVar9 = uVar11;
			uVar18 = *puVar17;
			puVar17 = puVar17 + 1;
			uVar18 = (uVar12 << 5 | (int)uVar12 >> 0x1b) + (uVar9 ^ uVar16 ^ uVar7) + uVar8 + uVar18 + 0x6ed9eba1;
			uVar15 = uVar16 << 0x1e | (int)uVar16 >> 2;
			lVar20 = lVar20 + -1;
			uVar11 = uVar7;
			uVar8 = uVar9;
			uVar16 = uVar12;
		} while (lVar20 != 0);
	}
	piVar14 = local_c0;
	lVar20 = 2;
	lVar19 = 0x28;
	do {
		uVar11 = uVar12 << 0x1e | (int)uVar12 >> 2;
		uVar12 = (uVar18 << 5 | (int)uVar18 >> 0x1b) + (uVar15 & uVar7 | uVar12 & (uVar15 | uVar7)) + uVar9 + *piVar14 + -0x70e44324;
		uVar16 = (uVar12 * 0x20 | (int)uVar12 >> 0x1b) + (uVar11 & uVar15 | uVar18 & (uVar11 | uVar15)) + uVar7 + piVar14[1] + -0x70e44324;
		uVar9 = uVar18 << 0x1e | (int)uVar18 >> 2;
		uVar7 = uVar12 * 0x40000000 | (int)uVar12 >> 2;
		uVar8 = (uVar16 * 0x20 | (int)uVar16 >> 0x1b) + (uVar9 & uVar11 | uVar12 & (uVar9 | uVar11)) + uVar15 + piVar14[2] + -0x70e44324;
		uVar12 = (uVar8 * 0x20 | (int)uVar8 >> 0x1b) + (uVar7 & uVar9 | uVar16 & (uVar7 | uVar9)) + uVar11 + piVar14[3] + -0x70e44324;
		uVar18 = uVar16 * 0x40000000 | (int)uVar16 >> 2;
		uVar15 = uVar8 * 0x40000000 | (int)uVar8 >> 2;
		uVar8 = (uVar12 * 0x20 | (int)uVar12 >> 0x1b) + (uVar18 & uVar7 | uVar8 & (uVar18 | uVar7)) + uVar9 + piVar14[4] + -0x70e44324;
		uVar11 = (uVar8 * 0x20 | (int)uVar8 >> 0x1b) + (uVar15 & uVar18 | uVar12 & (uVar15 | uVar18)) + uVar7 + piVar14[5] + -0x70e44324;
		piVar4 = piVar14 + 6;
		piVar5 = piVar14 + 7;
		uVar9 = uVar12 * 0x40000000 | (int)uVar12 >> 2;
		piVar14 = piVar14 + 8;
		lVar19 = lVar19 + 8;
		uVar7 = uVar8 * 0x40000000 | (int)uVar8 >> 2;
		uVar12 = (uVar11 * 0x20 | (int)uVar11 >> 0x1b) + (uVar9 & uVar15 | uVar8 & (uVar9 | uVar15)) + uVar18 + *piVar4 + -0x70e44324;
		uVar18 = (uVar12 * 0x20 | (int)uVar12 >> 0x1b) + (uVar7 & uVar9 | uVar11 & (uVar7 | uVar9)) + uVar15 + *piVar5 + -0x70e44324;
		uVar15 = uVar11 * 0x40000000 | (int)uVar11 >> 2;
		lVar20 = lVar20 + -1;
	} while (lVar20 != 0);
	puVar17 = local_160 + (int)lVar19;
	lVar20 = 0x3c - lVar19;
	uVar11 = uVar12;
	uVar8 = uVar9;
	uVar16 = uVar7;
	if ((int)lVar19 < 0x3c) {
		do {
			uVar7 = uVar15;
			uVar9 = uVar16;
			uVar12 = uVar18;
			uVar18 = *puVar17;
			puVar17 = puVar17 + 1;
			uVar18 = (uVar12 << 5 | (int)uVar12 >> 0x1b) + (uVar7 & uVar9 | uVar11 & (uVar7 | uVar9)) + uVar8 + uVar18 + -0x70e44324;
			uVar15 = uVar11 << 0x1e | (int)uVar11 >> 2;
			lVar20 = lVar20 + -1;
			uVar11 = uVar12;
			uVar8 = uVar9;
			uVar16 = uVar7;
		} while (lVar20 != 0);
	}
	piVar14 = local_70;
	lVar20 = 2;
	lVar19 = 0x3c;
	do {
		uVar11 = uVar12 << 0x1e | (int)uVar12 >> 2;
		uVar12 = (uVar18 << 5 | (int)uVar18 >> 0x1b) + (uVar7 ^ uVar12 ^ uVar15) + uVar9 + *piVar14 + -0x359d3e2a;
		uVar16 = (uVar12 * 0x20 | (int)uVar12 >> 0x1b) + (uVar15 ^ uVar18 ^ uVar11) + uVar7 + piVar14[1] + -0x359d3e2a;
		uVar9 = uVar18 << 0x1e | (int)uVar18 >> 2;
		uVar7 = uVar12 * 0x40000000 | (int)uVar12 >> 2;
		uVar8 = (uVar16 * 0x20 | (int)uVar16 >> 0x1b) + (uVar11 ^ uVar12 ^ uVar9) + uVar15 + piVar14[2] + -0x359d3e2a;
		uVar12 = (uVar8 * 0x20 | (int)uVar8 >> 0x1b) + (uVar9 ^ uVar16 ^ uVar7) + uVar11 + piVar14[3] + -0x359d3e2a;
		uVar18 = uVar16 * 0x40000000 | (int)uVar16 >> 2;
		uVar15 = uVar8 * 0x40000000 | (int)uVar8 >> 2;
		uVar8 = (uVar12 * 0x20 | (int)uVar12 >> 0x1b) + (uVar7 ^ uVar8 ^ uVar18) + uVar9 + piVar14[4] + -0x359d3e2a;
		uVar11 = (uVar8 * 0x20 | (int)uVar8 >> 0x1b) + (uVar18 ^ uVar12 ^ uVar15) + uVar7 + piVar14[5] + -0x359d3e2a;
		piVar4 = piVar14 + 6;
		piVar5 = piVar14 + 7;
		uVar9 = uVar12 * 0x40000000 | (int)uVar12 >> 2;
		piVar14 = piVar14 + 8;
		lVar19 = lVar19 + 8;
		uVar7 = uVar8 * 0x40000000 | (int)uVar8 >> 2;
		uVar12 = (uVar11 * 0x20 | (int)uVar11 >> 0x1b) + (uVar15 ^ uVar8 ^ uVar9) + uVar18 + *piVar4 + -0x359d3e2a;
		uVar18 = (uVar12 * 0x20 | (int)uVar12 >> 0x1b) + (uVar9 ^ uVar11 ^ uVar7) + uVar15 + *piVar5 + -0x359d3e2a;
		uVar15 = uVar11 * 0x40000000 | (int)uVar11 >> 2;
		lVar20 = lVar20 + -1;
	} while (lVar20 != 0);
	puVar17 = local_160 + (int)lVar19;
	lVar20 = 0x50 - lVar19;
	uVar11 = uVar12;
	uVar8 = uVar9;
	uVar16 = uVar7;
	if ((int)lVar19 < 0x50) {
		do {
			uVar7 = uVar15;
			uVar9 = uVar16;
			uVar12 = uVar18;
			uVar18 = *puVar17;
			puVar17 = puVar17 + 1;
			uVar18 = (uVar12 << 5 | (int)uVar12 >> 0x1b) + (uVar9 ^ uVar11 ^ uVar7) + uVar8 + uVar18 + -0x359d3e2a;
			uVar15 = uVar11 << 0x1e | (int)uVar11 >> 2;
			lVar20 = lVar20 + -1;
			uVar11 = uVar12;
			uVar8 = uVar9;
			uVar16 = uVar7;
		} while (lVar20 != 0);
	}
	*param_1 = *param_1 + uVar18;
	param_1[1] = param_1[1] + uVar12;
	param_1[2] = param_1[2] + uVar15;
	param_1[3] = param_1[3] + uVar7;
	param_1[4] = param_1[4] + uVar9;
	return;
}

// WARNING: Removing unreachable block (ram,0x100a422c)

void SHA1Input(uint *param_1, undefined8 param_2, int param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	longlong lVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	lVar5 = (longlong)param_8;
	lVar4 = (longlong)param_7;
	lVar3 = (longlong)param_6;
	lVar2 = (longlong)param_5;
	lVar1 = (longlong)param_4;
	param_1[5] = param_1[5] + param_3 * 8;
	param_1[6] = param_1[6] + (param_3 >> 0x1d);
	while (0x3f < param_3) {
		memcpy((char)param_1 + '\x1c', (char)param_2, 0x40, (char)lVar1, (char)lVar2, (char)lVar3,
		    (char)lVar4, (char)lVar5, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
		SHA1ProcessMessageBlock(param_1);
		param_2._7_1_ = (char)param_2 + '@';
		param_3 = param_3 + -0x40;
	}
	return;
}

void SHA1Clear(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	memset((char)_DAT_100f37a4, 0x14, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	return;
}

void SHA1Result(int param_1, uint *param_2)

{
	uint uVar1;
	uint *puVar2;

	if (param_2 == (uint *)0x0) {
		return;
	}
	puVar2 = (uint *)(_DAT_100f37a4 + param_1 * 0x5c);
	uVar1 = *puVar2;
	*param_2 = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00 | uVar1 >> 0x18;
	uVar1 = puVar2[1];
	param_2[1] = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00 | uVar1 >> 0x18;
	uVar1 = puVar2[2];
	param_2[2] = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00 | uVar1 >> 0x18;
	uVar1 = puVar2[3];
	param_2[3] = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00 | uVar1 >> 0x18;
	uVar1 = puVar2[4];
	param_2[4] = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00 | uVar1 >> 0x18;
	return;
}

void SHA1Calculate(int param_1, undefined8 param_2, uint *param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	SHA1Input((uint *)(_DAT_100f37a4 + param_1 * 0x5c), param_2, 0x40, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	if (param_3 != (uint *)0x0) {
		SHA1Result(param_1, param_3);
	}
	return;
}

void SHA1Reset(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	SHA1Init((undefined4 *)(_DAT_100f37a4 + param_1 * 0x5c));
	return;
}
