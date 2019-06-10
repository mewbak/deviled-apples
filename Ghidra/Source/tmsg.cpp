
ulonglong tmsg_get(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	ulonglong uVar2;
	longlong lVar3;
	char cVar4;
	byte bVar5;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	int local_2c;

	if (_DAT_100f4520 == 0) {
		uVar2 = 0;
	} else {
		lVar3 = GetTickCount(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
		puVar1 = *(undefined4 **)(local_2c + -0x4ab0);
		if ((longlong)((ulonglong)(uint)puVar1[1] - lVar3) < 0) {
			cVar4 = (char)puVar1 + '\t';
			*(undefined4 *)(local_2c + -0x4ab0) = *puVar1;
			bVar5 = *(byte *)(puVar1 + 2);
			uVar2 = (ulonglong)bVar5;
			memcpy(param_1, cVar4, bVar5, param_4, param_5, param_6, param_7, param_8, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
			mem_free_dbg(ZEXT48(puVar1), cVar4, bVar5, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffc8);
		} else {
			uVar2 = 0;
		}
	}
	return uVar2;
}

void tmsg_add(undefined8 param_1, byte param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined4 *puVar2;
	int iVar3;
	undefined4 *puVar4;
	byte bVar5;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	int local_3c;

	bVar5 = param_2;
	puVar2 = (undefined4 *)DiabloAllocPtr((ulonglong)((int)(char)param_2 & 0xffU) + 0xc);
	*puVar2 = 0;
	iVar3 = GetTickCount((char)puVar2, bVar5, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	puVar2[1] = iVar3 + 500;
	*(byte *)(puVar2 + 2) = param_2;
	memcpy((char)puVar2 + '\t', (undefined)param_1, (char)((int)(char)param_2 & 0xffU), param_4,
	    param_5, param_6, param_7, param_8, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
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

undefined tmsg_cleanup(undefined param_1, char param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined4 *puVar1;
	undefined4 uVar2;
	int iVar3;
	ulonglong uVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	undefined4 in_stack_ffffffc8;

	lVar11 = (longlong)param_8;
	lVar10 = (longlong)param_7;
	lVar9 = (longlong)param_6;
	lVar8 = (longlong)param_5;
	lVar7 = (longlong)param_4;
	lVar6 = (longlong)param_3;
	lVar5 = (longlong)param_2;
	uVar4 = ZEXT48(&toc);
	while (iVar3 = (int)uVar4, *(int *)(iVar3 + -0x4ab0) != 0) {
		puVar1 = *(undefined4 **)(iVar3 + -0x4ab0);
		uVar2 = *puVar1;
		*(undefined4 *)(iVar3 + -0x4ab0) = 0;
		param_1 = mem_free_dbg(ZEXT48(puVar1), (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8,
		    (char)lVar9, (char)lVar10, (char)lVar11, in_stack_ffffffc8);
		*(undefined4 *)((int)uVar4 + -0x4ab0) = uVar2;
	}
	return param_1;
}
