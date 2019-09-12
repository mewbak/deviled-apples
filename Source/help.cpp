
void InitHelp(void)

{
	undefined *puVar1;
	undefined *puVar2;

	puVar2 = PTR_DAT_100f1dbc;
	*(undefined4 *)PTR_DAT_100f19fc = 0;
	puVar1 = PTR_DAT_100f1db8;
	*(undefined4 *)puVar2 = 0;
	*(undefined4 *)puVar1 = 0;
	return;
}

void DrawHelpLine(longlong param_1, int param_2, byte *param_3, undefined8 param_4, undefined8 param_5,
    int param_6, int param_7, int param_8, undefined4 param_9)

{
	byte bVar1;
	undefined8 uVar2;
	ulonglong uVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	undefined4 in_stack_ffffffa8;

	lVar6 = (longlong)param_8;
	lVar5 = (longlong)param_7;
	lVar4 = (longlong)param_6;
	uVar3 = ZEXT48(PTR_DAT_100f1db4);
	lVar7 = 0;
	param_1 = param_1 + (ulonglong) * (uint *)(PTR_DAT_100f1938 + *(int *)(PTR_DAT_100f1db4 + param_2 * 4) * 4 + 0x330) + 0x60;
	uVar2 = param_4;
	while (*param_3 != 0) {
		bVar1 = *param_3;
		param_3 = param_3 + 1;
		bVar1 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]];
		lVar7 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + lVar7 + 1;
		if (bVar1 != 0) {
			if ((int)lVar7 < 0x242) {
				CPrintString(param_1, (ulonglong)bVar1, param_4, uVar2, uVar3, (int)lVar4, (int)lVar5, (int)lVar6,
				    in_stack_ffffffa8);
			}
		}
		param_1 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + param_1 + 1;
	}
	return;
}

void DrawHelp(void)

{
	undefined *puVar1;
	int *piVar2;
	int *piVar3;
	ulonglong uVar4;
	int iVar5;
	byte *pbVar6;
	char *pcVar7;
	int iVar8;
	undefined8 uVar9;
	longlong lVar10;
	undefined8 uVar11;
	undefined4 in_r9;
	undefined4 in_r10;
	longlong lVar12;
	undefined4 in_stack_ffffffa8;

	piVar3 = _DAT_100f1db0;
	piVar2 = _DAT_100f1dac;
	puVar1 = PTR_DAT_100f191c;
	uVar4 = ZEXT48(&toc);
	DrawSTextHelp();
	DrawQTextBack();
	uVar11 = 0;
	PrintSString(0, 2, 1, (ulonglong) * (uint *)((int)uVar4 + -0x6208), 3);
	DrawSLine(5);
	lVar12 = uVar4 + 0x2980;
	iVar5 = 0;
	while (iVar5 < *piVar3) {
		iVar8 = 0;
		lVar10 = 0;
		while (*(char *)lVar12 == '\0') {
			lVar12 = lVar12 + 1;
		}
		if (*(char *)lVar12 == '$') {
			lVar12 = lVar12 + 1;
		}
		pbVar6 = puVar1;
		if (*(char *)lVar12 != '&') {
			while ((*(char *)lVar12 != '|' && ((int)lVar10 < 0x241))) {
				while (*(byte *)lVar12 == 0) {
					lVar12 = lVar12 + 1;
				}
				*pbVar6 = *(byte *)lVar12;
				iVar8 = iVar8 + 1;
				lVar12 = lVar12 + 1;
				lVar10 = (ulonglong)(byte)(&DAT_100f6230)
				             [(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar6]]]
				    + lVar10 + 1;
				pbVar6 = pbVar6 + 1;
			}
			if (0x240 < (int)lVar10) {
				pcVar7 = puVar1 + iVar8;
				while (pcVar7 = pcVar7 + -1, *pcVar7 != ' ') {
					lVar12 = lVar12 + -1;
				}
			}
			if (*(char *)lVar12 == '|') {
				lVar12 = lVar12 + 1;
			}
		}
		iVar5 = iVar5 + 1;
	}
	iVar5 = 7;
	do {
		iVar8 = 0;
		lVar10 = 0;
		while (*(char *)lVar12 == '\0') {
			lVar12 = lVar12 + 1;
		}
		if (*(char *)lVar12 == '$') {
			uVar9 = 2;
			lVar12 = lVar12 + 1;
		} else {
			uVar9 = 0;
		}
		pbVar6 = puVar1;
		if (*(char *)lVar12 == '&') {
			*piVar2 = *piVar3;
		} else {
			while ((*(char *)lVar12 != '|' && ((int)lVar10 < 0x241))) {
				while (*(byte *)lVar12 == 0) {
					lVar12 = lVar12 + 1;
				}
				*pbVar6 = *(byte *)lVar12;
				iVar8 = iVar8 + 1;
				lVar12 = lVar12 + 1;
				lVar10 = (ulonglong)(byte)(&DAT_100f6230)
				             [(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar6]]]
				    + lVar10 + 1;
				pbVar6 = pbVar6 + 1;
			}
			if (0x240 < (int)lVar10) {
				pcVar7 = puVar1 + iVar8;
				while (true) {
					pcVar7 = pcVar7 + -1;
					iVar8 = iVar8 + -1;
					if (*pcVar7 == ' ')
						break;
					lVar12 = lVar12 + -1;
				}
			}
			if (iVar8 != 0) {
				puVar1[iVar8] = 0;
				DrawHelpLine(0, iVar5, puVar1, uVar9, lVar10, (int)uVar11, in_r9, in_r10, in_stack_ffffffa8);
			}
			if (*(char *)lVar12 == '|') {
				lVar12 = lVar12 + 1;
			}
		}
		iVar5 = iVar5 + 1;
	} while (iVar5 < 0x16);
	PrintSString(0, 0x17, 1, (ulonglong) * (uint *)((int)uVar4 + -0x6210), 3, 0);
	return;
}

void DisplayHelp(void)

{
	undefined4 *puVar1;
	undefined4 *puVar2;

	puVar2 = _DAT_100f1db0;
	*(undefined4 *)PTR_DAT_100f19fc = 1;
	puVar1 = _DAT_100f1dac;
	*puVar2 = 0;
	*puVar1 = 5000;
	return;
}

void HelpScrollUp(void)

{
	if (*_DAT_100f1db0 < 1) {
		return;
	}
	*_DAT_100f1db0 = *_DAT_100f1db0 + -1;
	return;
}

void HelpScrollDown(void)

{
	if (*_DAT_100f1dac <= *_DAT_100f1db0) {
		return;
	}
	*_DAT_100f1db0 = *_DAT_100f1db0 + 1;
	return;
}
