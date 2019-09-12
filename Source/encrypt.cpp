
void Decrypt(void *block, DWORD size, DWORD key)

{
	uint uVar1;
	ulonglong uVar2;
	uint *puVar3;
	ulonglong uVar4;
	ulonglong uVar5;
	uint uVar6;
	uint uVar7;
	int iVar8;

	uVar1 = size >> 2;
	uVar2 = (ulonglong)uVar1;
	iVar8 = -0x11111112;
	if (uVar1 != 0) {
		uVar4 = (ulonglong)(size >> 5);
		uVar5 = uVar2;
		puVar3 = (uint *)block;
		if (size >> 5 != 0) {
			do {
				*puVar3 = (uint) * (byte *)((int)puVar3 + 3) << 0x18 | (uint) * (byte *)((int)puVar3 + 2) << 0x10 | (uint) * (byte *)((int)puVar3 + 1) << 8 | (uint) * (byte *)puVar3;
				puVar3[1] = (uint) * (byte *)((int)puVar3 + 7) << 0x18 | (uint) * (byte *)((int)puVar3 + 6) << 0x10 | (uint) * (byte *)((int)puVar3 + 5) << 8 | (uint) * (byte *)(puVar3 + 1);
				puVar3[2] = (uint) * (byte *)((int)puVar3 + 0xb) << 0x18 | (uint) * (byte *)((int)puVar3 + 10) << 0x10 | (uint) * (byte *)((int)puVar3 + 9) << 8 | (uint) * (byte *)(puVar3 + 2);
				puVar3[3] = (uint) * (byte *)((int)puVar3 + 0xf) << 0x18 | (uint) * (byte *)((int)puVar3 + 0xe) << 0x10 | (uint) * (byte *)((int)puVar3 + 0xd) << 8 | (uint) * (byte *)(puVar3 + 3);
				puVar3[4] = (uint) * (byte *)((int)puVar3 + 0x13) << 0x18 | (uint) * (byte *)((int)puVar3 + 0x12) << 0x10 | (uint) * (byte *)((int)puVar3 + 0x11) << 8 | (uint) * (byte *)(puVar3 + 4);
				puVar3[5] = (uint) * (byte *)((int)puVar3 + 0x17) << 0x18 | (uint) * (byte *)((int)puVar3 + 0x16) << 0x10 | (uint) * (byte *)((int)puVar3 + 0x15) << 8 | (uint) * (byte *)(puVar3 + 5);
				puVar3[6] = (uint) * (byte *)((int)puVar3 + 0x1b) << 0x18 | (uint) * (byte *)((int)puVar3 + 0x1a) << 0x10 | (uint) * (byte *)((int)puVar3 + 0x19) << 8 | (uint) * (byte *)(puVar3 + 6);
				puVar3[7] = (uint) * (byte *)((int)puVar3 + 0x1f) << 0x18 | (uint) * (byte *)((int)puVar3 + 0x1e) << 0x10 | (uint) * (byte *)((int)puVar3 + 0x1d) << 8 | (uint) * (byte *)(puVar3 + 7);
				puVar3 = puVar3 + 8;
				uVar4 = uVar4 - 1;
			} while (uVar4 != 0);
			uVar5 = uVar2 & 7;
			if ((uVar1 & 7) == 0)
				goto LAB_1003c398;
		}
		do {
			*puVar3 = (uint) * (byte *)((int)puVar3 + 3) << 0x18 | (uint) * (byte *)((int)puVar3 + 2) << 0x10 | (uint) * (byte *)((int)puVar3 + 1) << 8 | (uint) * (byte *)puVar3;
			uVar5 = uVar5 - 1;
			puVar3 = puVar3 + 1;
		} while (uVar5 != 0);
	}
LAB_1003c398:
	if (uVar1 != 0) {
		uVar4 = (ulonglong)(size >> 4);
		uVar5 = uVar2;
		puVar3 = (uint *)block;
		if (size >> 4 != 0) {
			do {
				iVar8 = iVar8 + *(int *)((key & 0xff) * 4 + 0x1012e928);
				uVar6 = *puVar3 ^ iVar8 + key;
				*puVar3 = uVar6;
				uVar7 = key >> 0xb | (key << 0x15 ^ 0xffe00000) + 0x11111111;
				iVar8 = uVar6 + 3 + iVar8 * 0x21 + *(int *)((uVar7 & 0xff) * 4 + 0x1012e928);
				uVar6 = puVar3[1] ^ iVar8 + uVar7;
				puVar3[1] = uVar6;
				uVar7 = uVar7 >> 0xb | (uVar7 << 0x15 ^ 0xffe00000) + 0x11111111;
				iVar8 = uVar6 + 3 + iVar8 * 0x21 + *(int *)((uVar7 & 0xff) * 4 + 0x1012e928);
				uVar6 = puVar3[2] ^ iVar8 + uVar7;
				puVar3[2] = uVar6;
				uVar7 = uVar7 >> 0xb | (uVar7 << 0x15 ^ 0xffe00000) + 0x11111111;
				iVar8 = uVar6 + 3 + iVar8 * 0x21 + *(int *)((uVar7 & 0xff) * 4 + 0x1012e928);
				uVar6 = puVar3[3] ^ iVar8 + uVar7;
				puVar3[3] = uVar6;
				iVar8 = uVar6 + 3 + iVar8 * 0x21;
				puVar3 = puVar3 + 4;
				key = uVar7 >> 0xb | (uVar7 << 0x15 ^ 0xffe00000) + 0x11111111;
				uVar4 = uVar4 - 1;
			} while (uVar4 != 0);
			uVar5 = uVar2 & 3;
			if ((uVar1 & 3) == 0)
				goto LAB_1003c534;
		}
		do {
			iVar8 = iVar8 + *(int *)((key & 0xff) * 4 + 0x1012e928);
			uVar7 = *puVar3 ^ iVar8 + key;
			*puVar3 = uVar7;
			iVar8 = uVar7 + 3 + iVar8 * 0x21;
			key = key >> 0xb | (key << 0x15 ^ 0xffe00000) + 0x11111111;
			uVar5 = uVar5 - 1;
			puVar3 = puVar3 + 1;
		} while (uVar5 != 0);
	}
LAB_1003c534:
	if (uVar1 != 0) {
		uVar5 = (ulonglong)(size >> 5);
		if (size >> 5 != 0) {
			do {
				*(uint *)block = (uint) * (byte *)((int)block + 3) << 0x18 | (uint) * (byte *)((int)block + 2) << 0x10 | (uint) * (byte *)((int)block + 1) << 8 | (uint) * (byte *)block;
				((uint *)block)[1] = (uint) * (byte *)((int)block + 7) << 0x18 | (uint) * (byte *)((int)block + 6) << 0x10 | (uint) * (byte *)((int)block + 5) << 8 | (uint) * (byte *)((uint *)block + 1);
				((uint *)block)[2] = (uint) * (byte *)((int)block + 0xb) << 0x18 | (uint) * (byte *)((int)block + 10) << 0x10 | (uint) * (byte *)((int)block + 9) << 8 | (uint) * (byte *)((uint *)block + 2);
				((uint *)block)[3] = (uint) * (byte *)((int)block + 0xf) << 0x18 | (uint) * (byte *)((int)block + 0xe) << 0x10 | (uint) * (byte *)((int)block + 0xd) << 8 | (uint) * (byte *)((uint *)block + 3);
				((uint *)block)[4] = (uint) * (byte *)((int)block + 0x13) << 0x18 | (uint) * (byte *)((int)block + 0x12) << 0x10 | (uint) * (byte *)((int)block + 0x11) << 8 | (uint) * (byte *)((uint *)block + 4);
				((uint *)block)[5] = (uint) * (byte *)((int)block + 0x17) << 0x18 | (uint) * (byte *)((int)block + 0x16) << 0x10 | (uint) * (byte *)((int)block + 0x15) << 8 | (uint) * (byte *)((uint *)block + 5);
				((uint *)block)[6] = (uint) * (byte *)((int)block + 0x1b) << 0x18 | (uint) * (byte *)((int)block + 0x1a) << 0x10 | (uint) * (byte *)((int)block + 0x19) << 8 | (uint) * (byte *)((uint *)block + 6);
				((uint *)block)[7] = (uint) * (byte *)((int)block + 0x1f) << 0x18 | (uint) * (byte *)((int)block + 0x1e) << 0x10 | (uint) * (byte *)((int)block + 0x1d) << 8 | (uint) * (byte *)((uint *)block + 7);
				block = (uint *)block + 8;
				uVar5 = uVar5 - 1;
			} while (uVar5 != 0);
			uVar2 = uVar2 & 7;
			if ((uVar1 & 7) == 0) {
				return;
			}
		}
		do {
			*(uint *)block = (uint) * (byte *)((int)block + 3) << 0x18 | (uint) * (byte *)((int)block + 2) << 0x10 | (uint) * (byte *)((int)block + 1) << 8 | (uint) * (byte *)block;
			block = (uint *)block + 1;
			uVar2 = uVar2 - 1;
		} while (uVar2 != 0);
	}
	return;
}

void Encrypt(void *block, DWORD size, DWORD key)

{
	uint uVar1;
	uint uVar2;
	uint uVar3;
	ulonglong uVar4;
	uint *puVar5;
	ulonglong uVar6;
	uint uVar7;
	uint uVar8;
	ulonglong uVar9;
	int iVar10;

	uVar3 = size >> 2;
	uVar9 = (ulonglong)uVar3;
	iVar10 = -0x11111112;
	if (uVar3 != 0) {
		uVar4 = (ulonglong)(size >> 5);
		uVar6 = uVar9;
		puVar5 = (uint *)block;
		if (size >> 5 != 0) {
			do {
				*puVar5 = (uint) * (byte *)((int)puVar5 + 3) << 0x18 | (uint) * (byte *)((int)puVar5 + 2) << 0x10 | (uint) * (byte *)((int)puVar5 + 1) << 8 | (uint) * (byte *)puVar5;
				puVar5[1] = (uint) * (byte *)((int)puVar5 + 7) << 0x18 | (uint) * (byte *)((int)puVar5 + 6) << 0x10 | (uint) * (byte *)((int)puVar5 + 5) << 8 | (uint) * (byte *)(puVar5 + 1);
				puVar5[2] = (uint) * (byte *)((int)puVar5 + 0xb) << 0x18 | (uint) * (byte *)((int)puVar5 + 10) << 0x10 | (uint) * (byte *)((int)puVar5 + 9) << 8 | (uint) * (byte *)(puVar5 + 2);
				puVar5[3] = (uint) * (byte *)((int)puVar5 + 0xf) << 0x18 | (uint) * (byte *)((int)puVar5 + 0xe) << 0x10 | (uint) * (byte *)((int)puVar5 + 0xd) << 8 | (uint) * (byte *)(puVar5 + 3);
				puVar5[4] = (uint) * (byte *)((int)puVar5 + 0x13) << 0x18 | (uint) * (byte *)((int)puVar5 + 0x12) << 0x10 | (uint) * (byte *)((int)puVar5 + 0x11) << 8 | (uint) * (byte *)(puVar5 + 4);
				puVar5[5] = (uint) * (byte *)((int)puVar5 + 0x17) << 0x18 | (uint) * (byte *)((int)puVar5 + 0x16) << 0x10 | (uint) * (byte *)((int)puVar5 + 0x15) << 8 | (uint) * (byte *)(puVar5 + 5);
				puVar5[6] = (uint) * (byte *)((int)puVar5 + 0x1b) << 0x18 | (uint) * (byte *)((int)puVar5 + 0x1a) << 0x10 | (uint) * (byte *)((int)puVar5 + 0x19) << 8 | (uint) * (byte *)(puVar5 + 6);
				puVar5[7] = (uint) * (byte *)((int)puVar5 + 0x1f) << 0x18 | (uint) * (byte *)((int)puVar5 + 0x1e) << 0x10 | (uint) * (byte *)((int)puVar5 + 0x1d) << 8 | (uint) * (byte *)(puVar5 + 7);
				puVar5 = puVar5 + 8;
				uVar4 = uVar4 - 1;
			} while (uVar4 != 0);
			uVar6 = uVar9 & 7;
			if ((uVar3 & 7) == 0)
				goto LAB_1003c694;
		}
		do {
			*puVar5 = (uint) * (byte *)((int)puVar5 + 3) << 0x18 | (uint) * (byte *)((int)puVar5 + 2) << 0x10 | (uint) * (byte *)((int)puVar5 + 1) << 8 | (uint) * (byte *)puVar5;
			uVar6 = uVar6 - 1;
			puVar5 = puVar5 + 1;
		} while (uVar6 != 0);
	}
LAB_1003c694:
	if (uVar3 != 0) {
		uVar4 = (ulonglong)(size >> 4);
		uVar6 = uVar9;
		puVar5 = (uint *)block;
		if (size >> 4 != 0) {
			do {
				uVar1 = *puVar5;
				iVar10 = iVar10 + *(int *)((key & 0xff) * 4 + 0x1012e928);
				uVar7 = key >> 0xb | (key << 0x15 ^ 0xffe00000) + 0x11111111;
				*puVar5 = uVar1 ^ iVar10 + key;
				uVar2 = puVar5[1];
				iVar10 = uVar1 + iVar10 * 0x21 + 3 + *(int *)((uVar7 & 0xff) * 4 + 0x1012e928);
				uVar8 = uVar7 >> 0xb | (uVar7 << 0x15 ^ 0xffe00000) + 0x11111111;
				puVar5[1] = uVar2 ^ iVar10 + uVar7;
				uVar1 = puVar5[2];
				iVar10 = uVar2 + iVar10 * 0x21 + 3 + *(int *)((uVar8 & 0xff) * 4 + 0x1012e928);
				uVar7 = uVar8 >> 0xb | (uVar8 << 0x15 ^ 0xffe00000) + 0x11111111;
				puVar5[2] = uVar1 ^ iVar10 + uVar8;
				uVar2 = puVar5[3];
				iVar10 = uVar1 + iVar10 * 0x21 + 3 + *(int *)((uVar7 & 0xff) * 4 + 0x1012e928);
				puVar5[3] = uVar2 ^ iVar10 + uVar7;
				iVar10 = uVar2 + iVar10 * 0x21 + 3;
				key = uVar7 >> 0xb | (uVar7 << 0x15 ^ 0xffe00000) + 0x11111111;
				puVar5 = puVar5 + 4;
				uVar4 = uVar4 - 1;
			} while (uVar4 != 0);
			uVar6 = uVar9 & 3;
			if ((uVar3 & 3) == 0)
				goto LAB_1003c830;
		}
		do {
			uVar1 = *puVar5;
			iVar10 = iVar10 + *(int *)((key & 0xff) * 4 + 0x1012e928);
			*puVar5 = uVar1 ^ iVar10 + key;
			iVar10 = uVar1 + iVar10 * 0x21 + 3;
			key = key >> 0xb | (key << 0x15 ^ 0xffe00000) + 0x11111111;
			uVar6 = uVar6 - 1;
			puVar5 = puVar5 + 1;
		} while (uVar6 != 0);
	}
LAB_1003c830:
	if (uVar3 != 0) {
		uVar6 = (ulonglong)(size >> 5);
		if (size >> 5 != 0) {
			do {
				*(uint *)block = (uint) * (byte *)((int)block + 3) << 0x18 | (uint) * (byte *)((int)block + 2) << 0x10 | (uint) * (byte *)((int)block + 1) << 8 | (uint) * (byte *)block;
				((uint *)block)[1] = (uint) * (byte *)((int)block + 7) << 0x18 | (uint) * (byte *)((int)block + 6) << 0x10 | (uint) * (byte *)((int)block + 5) << 8 | (uint) * (byte *)((uint *)block + 1);
				((uint *)block)[2] = (uint) * (byte *)((int)block + 0xb) << 0x18 | (uint) * (byte *)((int)block + 10) << 0x10 | (uint) * (byte *)((int)block + 9) << 8 | (uint) * (byte *)((uint *)block + 2);
				((uint *)block)[3] = (uint) * (byte *)((int)block + 0xf) << 0x18 | (uint) * (byte *)((int)block + 0xe) << 0x10 | (uint) * (byte *)((int)block + 0xd) << 8 | (uint) * (byte *)((uint *)block + 3);
				((uint *)block)[4] = (uint) * (byte *)((int)block + 0x13) << 0x18 | (uint) * (byte *)((int)block + 0x12) << 0x10 | (uint) * (byte *)((int)block + 0x11) << 8 | (uint) * (byte *)((uint *)block + 4);
				((uint *)block)[5] = (uint) * (byte *)((int)block + 0x17) << 0x18 | (uint) * (byte *)((int)block + 0x16) << 0x10 | (uint) * (byte *)((int)block + 0x15) << 8 | (uint) * (byte *)((uint *)block + 5);
				((uint *)block)[6] = (uint) * (byte *)((int)block + 0x1b) << 0x18 | (uint) * (byte *)((int)block + 0x1a) << 0x10 | (uint) * (byte *)((int)block + 0x19) << 8 | (uint) * (byte *)((uint *)block + 6);
				((uint *)block)[7] = (uint) * (byte *)((int)block + 0x1f) << 0x18 | (uint) * (byte *)((int)block + 0x1e) << 0x10 | (uint) * (byte *)((int)block + 0x1d) << 8 | (uint) * (byte *)((uint *)block + 7);
				block = (uint *)block + 8;
				uVar6 = uVar6 - 1;
			} while (uVar6 != 0);
			uVar9 = uVar9 & 7;
			if ((uVar3 & 7) == 0) {
				return;
			}
		}
		do {
			*(uint *)block = (uint) * (byte *)((int)block + 3) << 0x18 | (uint) * (byte *)((int)block + 2) << 0x10 | (uint) * (byte *)((int)block + 1) << 8 | (uint) * (byte *)block;
			block = (uint *)block + 1;
			uVar9 = uVar9 - 1;
		} while (uVar9 != 0);
	}
	return;
}

DWORD Hash(char *s, int type)

{
	char cVar1;
	ulonglong uVar2;
	longlong lVar3;

	uVar2 = 0x7fed7fed;
	lVar3 = -0x11111112;
	while (true) {
		if ((s == (char *)0x0) || (*s == '\0'))
			break;
		cVar1 = *s;
		s = s + 1;
		if ((int)cVar1 == 0xffffffff) {
			cVar1 = -1;
		} else {
			cVar1 = (&DAT_101235a8)[(int)cVar1 & 0xff];
		}
		uVar2 = uVar2 + lVar3 ^ (ulonglong) * (uint *)(&DAT_1012d928 + (int)cVar1 * 4 + type * 0x400);
		lVar3 = (longlong)cVar1 + uVar2 + (ulonglong)(uint)((int)lVar3 << 5) + 3 + lVar3;
	}
	return (DWORD)uVar2;
}

void InitHash(void)

{
	int iVar1;
	uint uVar2;
	uint uVar3;
	uint uVar4;
	uint uVar5;
	uint uVar6;
	uint uVar7;
	longlong lVar8;

	lVar8 = 0x100;
	uVar2 = 0x100001;
	iVar1 = 0;
	do {
		uVar6 = (uVar2 * 0x7d + 3) % 0x2aaaab;
		uVar5 = (uVar6 * 0x7d + 3) % 0x2aaaab;
		uVar4 = (uVar5 * 0x7d + 3) % 0x2aaaab;
		uVar3 = (uVar4 * 0x7d + 3) % 0x2aaaab;
		uVar2 = (uVar3 * 0x7d + 3) % 0x2aaaab;
		uVar7 = (uVar2 * 0x7d + 3) % 0x2aaaab;
		*(uint *)(&DAT_1012d928 + iVar1) = uVar6 * 0x10000 | uVar5 & 0xffff;
		*(uint *)(iVar1 + 0x1012dd28) = uVar4 * 0x10000 | uVar3 & 0xffff;
		*(uint *)(iVar1 + 0x1012e128) = uVar2 * 0x10000 | uVar7 & 0xffff;
		uVar3 = (uVar7 * 0x7d + 3) % 0x2aaaab;
		uVar5 = (uVar3 * 0x7d + 3) % 0x2aaaab;
		uVar4 = (uVar5 * 0x7d + 3) % 0x2aaaab;
		uVar2 = (uVar4 * 0x7d + 3) % 0x2aaaab;
		*(uint *)(iVar1 + 0x1012e528) = uVar3 * 0x10000 | uVar5 & 0xffff;
		*(uint *)(iVar1 + 0x1012e928) = uVar4 * 0x10000 | uVar2 & 0xffff;
		lVar8 = lVar8 + -1;
		iVar1 = iVar1 + 4;
	} while (lVar8 != 0);
	return;
}

uint PkwareBufferRead(char *buf, uint *size, void *param)

{
	char cVar1;
	uint *puVar2;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	puVar2 = (uint *)(*(int *)((int)param + 0x10) - *(int *)((int)param + 4));
	if (size < puVar2) {
		puVar2 = size;
	}
	cVar1 = (char)*(int *)((int)param + 4);
	CopyMemory((char)buf, (char)*(undefined4 *)param + cVar1, (char)puVar2, cVar1, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	*(int *)((int)param + 4) = *(int *)((int)param + 4) + (int)puVar2;
	return (uint)puVar2;
}

void PkwareBufferWrite(char *buf, uint *size, void *param)

{
	char cVar1;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	cVar1 = (char)*(undefined4 *)((int)param + 8);
	CopyMemory(cVar1 + (char)*(undefined4 *)((int)param + 0xc), (char)buf, (char)size, cVar1, in_r7, in_r8, in_r9,
	    in_r10, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	*(int *)((int)param + 0xc) = *(int *)((int)param + 0xc) + (int)size;
	return;
}

int PkwareCompress(void *buf, int size)

{
	uint dwBytes;
	int iVar1;
	BYTE *p;
	BYTE *p_00;
	undefined uVar2;
	undefined uVar3;
	undefined uVar4;
	undefined in_r9;
	undefined in_r10;
	undefined4 in_stack_ffffffa8;
	undefined uVar5;
	undefined in_stack_ffffffaf;
	undefined4 local_4c;

	iVar1 = 0x100f8fd0;
	p = DiabloAllocPtr(0x8dd8);
	dwBytes = size << 1;
	if (dwBytes < 0x2000) {
		dwBytes = 0x2000;
	}
	p_00 = DiabloAllocPtr(dwBytes);
	uVar5 = (undefined)in_stack_ffffffa8;
	uVar2 = (undefined)(ZEXT48(register0x0000000c) - 0x28);
	uVar3 = 0;
	uVar4 = 0;
	implode(*(undefined4 *)(iVar1 + -0x6298), *(undefined4 *)(iVar1 + -0x629c), (longlong)(int)p,
	    (int)(ZEXT48(register0x0000000c) - 0x28), 0, 0x1000, in_r9, in_r10, in_stack_ffffffa8);
	if (size != 0) {
		CopyMemory((char)buf, (char)p_00, 0, uVar2, uVar3, uVar4, in_r9, in_r10, uVar5, in_stack_ffffffaf, local_4c);
		size = 0;
	}
	mem_free_dbg(p);
	mem_free_dbg(p_00);
	return size;
}

void PkwareDecompress(void *param, int recv_size, int dwMaxBytes)

{
	int iVar1;
	BYTE *p;
	BYTE *p_00;
	undefined uVar2;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined4 in_stack_ffffffa8;
	undefined uVar3;
	undefined in_stack_ffffffaf;
	undefined4 local_4c;

	iVar1 = 0x100f8fd0;
	p = DiabloAllocPtr(0x8dd8);
	p_00 = DiabloAllocPtr(dwMaxBytes);
	uVar3 = (undefined)in_stack_ffffffa8;
	uVar2 = (undefined)(ZEXT48(register0x0000000c) - 0x28);
	FUN_100d22a4(*(undefined4 *)(iVar1 + -0x6298), *(undefined4 *)(iVar1 + -0x629c), (longlong)(int)p,
	    (int)(ZEXT48(register0x0000000c) - 0x28), in_r7, in_r8, in_r9, in_r10, in_stack_ffffffa8);
	CopyMemory((char)param, (char)p_00, 0, uVar2, in_r7, in_r8, in_r9, in_r10, uVar3, in_stack_ffffffaf, local_4c);
	mem_free_dbg(p);
	mem_free_dbg(p_00);
	return;
}