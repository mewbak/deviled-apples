
void track_process(void)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	int iVar5;
	longlong lVar6;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	int local_2c;

	puVar4 = PTR_DAT_100f1978;
	puVar3 = PTR_DAT_100f1974;
	if ((((((_DAT_100f4558 != 0) && (iVar5 = *(int *)PTR_DAT_100f1978, -1 < iVar5)) && (iVar5 < 0x6f))
	         && ((iVar1 = *(int *)PTR_DAT_100f1974, -1 < iVar1 && (iVar1 < 0x6f))))
	        && ((lVar6 = (ulonglong) * (uint *)PTR_DAT_100f1824 * 0x55ec,
	            6 < *(int *)(PTR_DAT_100f1828 + (int)lVar6 + 0x1ec) || (*(int *)(PTR_DAT_100f1828 + (int)lVar6) == 0))))
	    && ((iVar2 = (int)(ZEXT48(PTR_DAT_100f1828) + lVar6), iVar5 != *(int *)(iVar2 + 0x48) || (iVar1 != *(int *)(iVar2 + 0x4c))))) {
		iVar5 = GetTickCount((char)(ZEXT48(PTR_DAT_100f1828) + lVar6), (char)PTR_DAT_100f1828, (char)iVar5, (char)iVar1, (char)lVar6, (char)in_r8, (char)in_r9, (char)in_r10,
		    (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
		if (299 < iVar5 - *(int *)(local_2c + -0x4a80)) {
			*(int *)(local_2c + -0x4a80) = iVar5;
			NetSendCmdLoc(1, 1, (ulonglong)(*(uint *)puVar4 & 0xff), (ulonglong)(*(uint *)puVar3 & 0xff), lVar6, in_r8, in_r9, in_r10, in_stack_ffffffc8);
			if (*(char *)(local_2c + -0x4a7c) == '\0') {
				*(undefined *)(local_2c + -0x4a7c) = 1;
			}
		}
	}
	return;
}

void track_repeat_walk(undefined8 uParm1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined4 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	uint uVar1;
	int iVar2;
	undefined4 uVar3;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	int local_2c;

	iVar2 = (int)uParm1;
	if (_DAT_100f4558 != iVar2) {
		if (iVar2 == 0) {
			_DAT_100f4558 = iVar2;
			if (DAT_100f4554 != '\0') {
				DAT_100f4554 = '\0';
				_DAT_100f4558 = iVar2;
			}
		} else {
			DAT_100f4554 = '\0';
			_DAT_100f4558 = iVar2;
			uVar3 = GetTickCount((char)uParm1, param_2, param_3, param_4, param_5, (char)uParm6, (char)uParm7,
			    (char)uParm8, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
			*(undefined4 *)(local_2c + -0x4a80) = uVar3;
			*(int *)(local_2c + -0x4a80) = *(int *)(local_2c + -0x4a80) + 0xfa;
			uVar1 = *(uint *)(local_2c + -0x4a80);
			*(int *)(local_2c + -0x4a80) = uVar1 - 300;
			NetSendCmdLoc(1, 1, (ulonglong)(**(uint **)(local_2c + -0x7658) & 0xff),
			    (ulonglong)(**(uint **)(local_2c + -0x765c) & 0xff), (ulonglong)uVar1, uParm6,
			    uParm7, uParm8, in_stack_ffffffc8);
		}
	}
	return;
}

ulonglong track_isscrolling(void)

{
	return (ulonglong)DAT_100f4554;
}
