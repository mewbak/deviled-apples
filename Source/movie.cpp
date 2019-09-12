
void play_movie(char *pszMovie, BOOL user_can_close)

{
	WPARAM wParam;
	LPARAM lParam;

	if (user_can_close != 0x201) {
		if (user_can_close < 0x201) {
			if (user_can_close != 0x102) {
				if (0x101 < user_can_close) {
					if ((user_can_close == 0x112) && (wParam == 0xf060)) {
						DAT_100f425c = 0;
						return;
					}
					goto LAB_10076df8;
				}
				if (user_can_close != 0x100)
					goto LAB_10076df8;
			}
		} else {
			if ((user_can_close != 0x3a2) && ((0x3a1 < user_can_close || (user_can_close != 0x204))))
				goto LAB_10076df8;
		}
	}
	DAT_100f425c = 0;
LAB_10076df8:
	MainWndProc((HWND)pszMovie, user_can_close, wParam, lParam);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void play_movie(char *pszMovie, BOOL user_can_close)

{
	longlong lVar1;
	undefined *puVar2;
	char cVar3;
	WNDPROC *pWVar4;
	int iVar5;
	BOOL BVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	ulonglong uVar11;
	longlong lVar12;
	undefined in_r10;

	lVar1 = ZEXT48(register0x0000000c) - 0x70;
	puVar2 = (undefined *)lVar1;
	*(BADSPACEBASE **)puVar2 = register0x0000000c;
	if (_DAT_1013c968 != 0) {
		pWVar4 = SetWindowProc(&PTR_play_movie_100f4df0, *puVar2);
		InvalidateRect(_DAT_1012915c, 0, 0, *puVar2);
		UpdateWindow(_DAT_1012915c, *puVar2);
		iVar5 = *(int *)(puVar2 + 0x14);
		*(undefined *)(iVar5 + -0x4d74) = 1;
		sound_disable_music(1, *puVar2);
		sfx_stop(*puVar2);
		effects_play_sound(*(undefined4 *)(iVar5 + -0x5cc8), *puVar2);
		if (**(int **)(iVar5 + -0x70b0) == 0) {
			uVar11 = 0x10280808;
		} else {
			uVar11 = ZEXT48(&LAB_100c0808);
		}
		lVar12 = ZEXT48(register0x0000000c) - 0x1c;
		SVidPlayBegin(pszMovie, 0, 0, 0, 0, (int)uVar11, (int)lVar12, *puVar2);
		iVar5 = *(int *)(puVar2 + 0x14);
		do {
			if (((*(int *)(puVar2 + 0x54) == 0) || (_DAT_1013c968 == 0)) || ((user_can_close != 0 && (*(char *)(iVar5 + -0x4d74) == '\0'))))
				break;
			while (true) {
				cVar3 = (char)lVar1;
				uVar7 = 0;
				uVar8 = 0;
				uVar9 = 0;
				uVar10 = 1;
				iVar5 = PeekMessage(cVar3 + '8', 0, 0, 0, 1, (char)uVar11, (char)lVar12, in_r10, puVar2[0xb],
				    puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
				if (iVar5 == 0)
					break;
				if (*(int *)(puVar2 + 0x3c) != 0x12) {
					TranslateMessage(puVar2 + 0x38, *puVar2);
					DispatchMessage(cVar3 + '8', uVar7, uVar8, uVar9, uVar10, (char)uVar11, (char)lVar12, in_r10,
					    puVar2[0xb], puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
				}
			}
			BVar6 = SVidPlayContinue(*puVar2);
			iVar5 = *(int *)(puVar2 + 0x14);
		} while (BVar6 != 0);
		if (*(int *)(puVar2 + 0x54) != 0) {
			SVidPlayEnd(*(int *)(puVar2 + 0x54), *puVar2);
		}
		SetWindowProc(pWVar4, *puVar2);
		sound_disable_music(0, *puVar2);
	}
	return;
}