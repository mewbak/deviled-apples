
void InitHelp(void)

{
	_DAT_1013c638 = 0;
	_DAT_1013c63c = 0;
	_DAT_1013c640 = 0;
	return;
}

void DrawHelpLine(int always_0, int help_line_nr, char *text, char color)

{
	byte bVar1;
	longlong lVar2;
	longlong lVar3;

	lVar2 = 0;
	lVar3 = (longlong)always_0 + (ulonglong) * (uint *)(*(int *)(&DAT_1010f7b8 + help_line_nr * 4) * 4 + 0x1019f0b0) + 0x60;
	while (*text != 0) {
		bVar1 = *text;
		text = (char *)((byte *)text + 1);
		bVar1 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]];
		lVar2 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + lVar2 + 1;
		if (bVar1 != 0) {
			if ((int)lVar2 < 0x242) {
				CPrintString((int)lVar3, (uint)bVar1, color);
			}
		}
		lVar3 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + lVar3 + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void DrawHelp(void)

{
	longlong lVar1;
	int help_line_nr;
	byte *pbVar2;
	char *pcVar3;
	int iVar4;
	char color;
	longlong lVar5;
	longlong lVar6;

	lVar1 = 0x100f8fd0;
	DrawSTextHelp();
	DrawQTextBack();
	PrintSString(0, 2, 1, *(char **)((int)lVar1 + -0x6208), '\x03', 0);
	DrawSLine(5);
	lVar6 = lVar1 + 0x2980;
	help_line_nr = 0;
	while (help_line_nr < _DAT_1013c634) {
		iVar4 = 0;
		lVar5 = 0;
		while (*(char *)lVar6 == '\0') {
			lVar6 = lVar6 + 1;
		}
		if (*(char *)lVar6 == '$') {
			lVar6 = lVar6 + 1;
		}
		pbVar2 = &DAT_101282d4;
		if (*(char *)lVar6 != '&') {
			while ((*(char *)lVar6 != '|' && ((int)lVar5 < 0x241))) {
				while (*(byte *)lVar6 == 0) {
					lVar6 = lVar6 + 1;
				}
				*pbVar2 = *(byte *)lVar6;
				iVar4 = iVar4 + 1;
				lVar6 = lVar6 + 1;
				lVar5 = (ulonglong)(byte)(
				            &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar2]]]
				    + lVar5 + 1;
				pbVar2 = pbVar2 + 1;
			}
			if (0x240 < (int)lVar5) {
				pcVar3 = &DAT_101282d4 + iVar4;
				while (pcVar3 = pcVar3 + -1, *pcVar3 != ' ') {
					lVar6 = lVar6 + -1;
				}
			}
			if (*(char *)lVar6 == '|') {
				lVar6 = lVar6 + 1;
			}
		}
		help_line_nr = help_line_nr + 1;
	}
	help_line_nr = 7;
	do {
		iVar4 = 0;
		lVar5 = 0;
		while (*(char *)lVar6 == '\0') {
			lVar6 = lVar6 + 1;
		}
		if (*(char *)lVar6 == '$') {
			color = '\x02';
			lVar6 = lVar6 + 1;
		} else {
			color = '\0';
		}
		pbVar2 = &DAT_101282d4;
		if (*(char *)lVar6 == '&') {
			_DAT_1013c630 = _DAT_1013c634;
		} else {
			while ((*(char *)lVar6 != '|' && ((int)lVar5 < 0x241))) {
				while (*(byte *)lVar6 == 0) {
					lVar6 = lVar6 + 1;
				}
				*pbVar2 = *(byte *)lVar6;
				iVar4 = iVar4 + 1;
				lVar6 = lVar6 + 1;
				lVar5 = (ulonglong)(byte)(
				            &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar2]]]
				    + lVar5 + 1;
				pbVar2 = pbVar2 + 1;
			}
			if (0x240 < (int)lVar5) {
				pcVar3 = &DAT_101282d4 + iVar4;
				while (true) {
					pcVar3 = pcVar3 + -1;
					iVar4 = iVar4 + -1;
					if (*pcVar3 == ' ')
						break;
					lVar6 = lVar6 + -1;
				}
			}
			if (iVar4 != 0) {
				(&DAT_101282d4)[iVar4] = 0;
				DrawHelpLine(0, help_line_nr, &DAT_101282d4, color);
			}
			if (*(char *)lVar6 == '|') {
				lVar6 = lVar6 + 1;
			}
		}
		help_line_nr = help_line_nr + 1;
	} while (help_line_nr < 0x16);
	PrintSString(0, 0x17, 1, *(char **)((int)lVar1 + -0x6210), '\x03', 0);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DisplayHelp(void)

{
	_DAT_1013c630 = 5000;
	_DAT_1013c634 = 0;
	_DAT_1013c640 = 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void HelpScrollUp(void)

{
	if (_DAT_1013c634 < 1) {
		return;
	}
	_DAT_1013c634 = _DAT_1013c634 + -1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void HelpScrollDown(void)

{
	if (_DAT_1013c630 <= _DAT_1013c634) {
		return;
	}
	_DAT_1013c634 = _DAT_1013c634 + 1;
	return;
}
