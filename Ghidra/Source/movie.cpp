
void play_movie(undefined8 param_1, int param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, int param_8,
    undefined4 param_9)

{
	longlong lVar1;
	int iVar2;
	char cVar3;
	undefined *puVar4;
	undefined *puVar5;
	ulonglong uVar6;
	undefined uVar9;
	int iVar7;
	int iVar8;
	undefined8 uVar10;
	undefined uVar11;
	ulonglong uVar12;
	undefined uVar14;
	ulonglong uVar13;
	undefined uVar16;
	undefined8 uVar15;
	undefined uVar18;
	undefined8 uVar17;
	undefined uVar20;
	undefined4 uVar19;
	undefined uVar23;
	longlong lVar21;
	undefined4 uVar22;
	longlong lVar24;
	undefined4 uVar25;

	puVar5 = PTR_DAT_100f1dc0;
	puVar4 = PTR_DAT_100f17c4;
	lVar24 = (longlong)param_8;
	lVar1 = ZEXT48(register0x0000000c) - 0x70;
	iVar2 = (int)lVar1;
	*(BADSPACEBASE **)iVar2 = register0x0000000c;
	if (*(int *)puVar5 != 0) {
		uVar6 = SetWindowProc(PTR_PTR_LAB_100f330c, (char)param_2, (undefined)param_3, (char)param_4,
		    (char)param_5, (char)param_6, (char)param_7, (char)param_8,
		    *(undefined4 *)(iVar2 + 8));
		uVar10 = 0;
		uVar12 = 0;
		InvalidateRect((char)*(undefined4 *)puVar4, 0, 0, (char)param_4, (char)param_5, (char)param_6,
		    (char)param_7, (char)lVar24, *(undefined *)(iVar2 + 0xb),
		    *(undefined *)(iVar2 + 0xf), *(undefined4 *)(iVar2 + 0x14));
		UpdateWindow((char)*(undefined4 *)puVar4, (char)uVar10, (char)uVar12, (char)param_4, (char)param_5,
		    (char)param_6, (char)param_7, (char)lVar24, *(undefined *)(iVar2 + 0xb),
		    *(undefined *)(iVar2 + 0xf), *(undefined4 *)(iVar2 + 0x14));
		uVar23 = (undefined)param_7;
		uVar20 = (undefined)param_6;
		uVar18 = (undefined)param_5;
		uVar16 = (undefined)param_4;
		uVar14 = (undefined)uVar12;
		uVar11 = (undefined)uVar10;
		iVar7 = *(int *)(iVar2 + 0x14);
		*(undefined *)(iVar7 + -0x4d74) = 1;
		uVar9 = sound_disable_music(1, uVar10, uVar12, param_4, param_5, param_6, param_7, (int)lVar24,
		    *(undefined4 *)(iVar2 + 8));
		sfx_stop(uVar9, uVar11, uVar14, uVar16, uVar18, uVar20, uVar23, (char)lVar24,
		    *(undefined4 *)(iVar2 + 8));
		effects_play_sound((char)*(undefined4 *)(iVar7 + -0x5cc8), uVar11, uVar14, uVar16, uVar18, uVar20, uVar23,
		    (char)lVar24, *(undefined4 *)(iVar2 + 8));
		if (**(int **)(iVar7 + -0x70b0) == 0) {
			uVar12 = 0x10280808;
		} else {
			uVar12 = ZEXT48(&LAB_100c0808);
		}
		lVar21 = ZEXT48(register0x0000000c) - 0x1c;
		uVar10 = 0;
		uVar13 = 0;
		uVar15 = 0;
		uVar17 = 0;
		SVidPlayBegin((undefined)param_1, 0, 0, 0, 0, (char)uVar12, (char)lVar21, (char)lVar24,
		    *(undefined *)(iVar2 + 0xb), *(undefined *)(iVar2 + 0xf),
		    *(undefined4 *)(iVar2 + 0x14));
		iVar7 = *(int *)(iVar2 + 0x14);
		do {
			uVar25 = (undefined4)lVar24;
			uVar22 = (undefined4)lVar21;
			uVar19 = (undefined4)uVar12;
			if (((*(int *)(iVar2 + 0x54) == 0) || (*(int *)puVar5 == 0)) || ((param_2 != 0 && (*(char *)(iVar7 + -0x4d74) == '\0'))))
				break;
			while (true) {
				cVar3 = (char)lVar1;
				uVar10 = 0;
				uVar13 = 0;
				uVar15 = 0;
				uVar17 = 1;
				iVar7 = PeekMessage(cVar3 + '8', 0, 0, 0, 1, (char)uVar12, (char)lVar21, (char)lVar24,
				    *(undefined *)(iVar2 + 0xb), *(undefined *)(iVar2 + 0xf),
				    *(undefined4 *)(iVar2 + 0x14));
				uVar9 = (undefined)uVar10;
				uVar11 = (undefined)uVar13;
				uVar14 = (undefined)uVar15;
				uVar16 = (undefined)uVar17;
				if (iVar7 == 0)
					break;
				if (*(int *)(iVar2 + 0x3c) != 0x12) {
					TranslateMessage(cVar3 + '8', uVar9, uVar11, uVar14, uVar16, (char)uVar12, (char)lVar21,
					    (char)lVar24, *(undefined *)(iVar2 + 0xb), *(undefined *)(iVar2 + 0xf),
					    *(undefined4 *)(iVar2 + 0x14));
					DispatchMessage(cVar3 + '8', uVar9, uVar11, uVar14, uVar16, (char)uVar12, (char)lVar21,
					    (char)lVar24, *(undefined *)(iVar2 + 0xb), *(undefined *)(iVar2 + 0xf),
					    *(undefined4 *)(iVar2 + 0x14));
				}
			}
			iVar8 = SVidPlayContinue(0, uVar9, uVar11, uVar14, uVar16, (char)uVar12, (char)lVar21, (char)lVar24,
			    *(undefined *)(iVar2 + 0xb), *(undefined *)(iVar2 + 0xf),
			    *(undefined4 *)(iVar2 + 0x14));
			uVar25 = (undefined4)lVar24;
			uVar22 = (undefined4)lVar21;
			uVar19 = (undefined4)uVar12;
			iVar7 = *(int *)(iVar2 + 0x14);
		} while (iVar8 != 0);
		if (*(int *)(iVar2 + 0x54) != 0) {
			SVidPlayEnd((char)*(int *)(iVar2 + 0x54), (char)uVar10, (char)uVar13, (char)uVar15, (char)uVar17,
			    (char)uVar19, (char)uVar22, (char)uVar25, *(undefined *)(iVar2 + 0xb),
			    *(undefined *)(iVar2 + 0xf), *(undefined4 *)(iVar2 + 0x14));
		}
		SetWindowProc((undefined *)uVar6, (char)uVar10, (char)uVar13, (char)uVar15, (char)uVar17, (char)uVar19, (char)uVar22, (char)uVar25, *(undefined4 *)(iVar2 + 8));
		sound_disable_music(0, uVar10, uVar13, uVar15, uVar17, uVar19, uVar22, uVar25, *(undefined4 *)(iVar2 + 8));
	}
	return;
}
