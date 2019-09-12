
int tmsg_get(BYTE *pbMsg, DWORD dwMaxLen)

{
	undefined4 *p;
	uint uVar1;
	DWORD DVar2;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	if (_DAT_100f4520 == 0) {
		uVar1 = 0;
	} else {
		DVar2 = GetTickCount();
		p = *(undefined4 **)(local_2c + -0x4ab0);
		if ((longlong)((ulonglong)(uint)p[1] - (longlong)(int)DVar2) < 0) {
			*(undefined4 *)(local_2c + -0x4ab0) = *p;
			uVar1 = (uint) * (byte *)(p + 2);
			CopyMemory((char)pbMsg, (char)p + '\t', *(byte *)(p + 2), in_r6, in_r7, in_r8, in_r9, in_r10,
			    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
			mem_free_dbg(p);
		} else {
			uVar1 = 0;
		}
	}
	return (int)uVar1;
}

void tmsg_add(BYTE *pbMsg, BYTE bLen)

{
	undefined4 *puVar1;
	undefined4 *puVar2;
	DWORD DVar3;
	undefined4 *puVar4;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	int local_3c;

	puVar2 = (undefined4 *)DiabloAllocPtr(((int)(char)bLen & 0xffU) + 0xc);
	*puVar2 = 0;
	DVar3 = GetTickCount();
	puVar2[1] = DVar3 + 500;
	*(BYTE *)(puVar2 + 2) = bLen;
	CopyMemory((char)puVar2 + '\t', (char)pbMsg, (char)((int)(char)bLen & 0xffU), in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	puVar1 = (undefined4 *)(local_3c + -0x4ab0);
	do {
		puVar4 = puVar1;
		puVar1 = (undefined4 *)*puVar4;
	} while (puVar1 != (undefined4 *)0x0);
	*(undefined4 **)puVar4 = puVar2;
	return;
}

void tmsg_start(void)

{
	return;
}

void *tmsg_cleanup(void)

{
	undefined4 *p;
	undefined4 uVar1;
	int iVar2;
	undefined8 uVar3;
	ulonglong in_r3;

	uVar3 = 0x100f8fd0;
	while (iVar2 = (int)uVar3, *(int *)(iVar2 + -0x4ab0) != 0) {
		p = *(undefined4 **)(iVar2 + -0x4ab0);
		in_r3 = ZEXT48(p);
		uVar1 = *p;
		*(undefined4 *)(iVar2 + -0x4ab0) = 0;
		mem_free_dbg(p);
		*(undefined4 *)((int)uVar3 + -0x4ab0) = uVar1;
	}
	return (void *)in_r3;
}
