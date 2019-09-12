
void track_process(void)

{
	DWORD DVar1;
	int iVar2;
	int local_2c;

	if ((((((_DAT_100f4558 != 0) && (-1 < _DAT_10128600)) && (_DAT_10128600 < 0x6f)) && ((-1 < _DAT_101285fc && (_DAT_101285fc < 0x6f)))) && ((iVar2 = myplr * 0x55ec, 6 < *(int *)((int)plr + iVar2 + 0x1ec) || (((PlayerStruct *)((int)plr + iVar2))->_pmode == 0)))) && ((_DAT_10128600 != *(int *)((int)plr + iVar2 + 0x48) || (_DAT_101285fc != *(int *)((int)plr + iVar2 + 0x4c))))) {
		DVar1 = GetTickCount();
		if (299 < (int)(DVar1 - *(int *)(local_2c + -0x4a80))) {
			*(DWORD *)(local_2c + -0x4a80) = DVar1;
			NetSendCmdLoc(1, '\x01', (BYTE)_DAT_10128600, (BYTE)_DAT_101285fc);
			if (*(char *)(local_2c + -0x4a7c) == '\0') {
				*(undefined *)(local_2c + -0x4a7c) = 1;
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void track_repeat_walk(BOOL rep)

{
	DWORD DVar1;
	int local_2c;

	if (_DAT_100f4558 != rep) {
		if (rep == 0) {
			_DAT_100f4558 = rep;
			if (DAT_100f4554 != '\0') {
				DAT_100f4554 = '\0';
				_DAT_100f4558 = rep;
			}
		} else {
			DAT_100f4554 = '\0';
			_DAT_100f4558 = rep;
			DVar1 = GetTickCount();
			*(DWORD *)(local_2c + -0x4a80) = DVar1;
			*(int *)(local_2c + -0x4a80) = *(int *)(local_2c + -0x4a80) + 0xfa;
			*(int *)(local_2c + -0x4a80) = *(int *)(local_2c + -0x4a80) + -300;
			NetSendCmdLoc(1, '\x01', (BYTE) * *(undefined4 **)(local_2c + -0x7658),
			    (BYTE) * *(undefined4 **)(local_2c + -0x765c));
		}
	}
	return;
}

BOOL track_isscrolling(void)

{
	return (BOOL)(uint)DAT_100f4554;
}