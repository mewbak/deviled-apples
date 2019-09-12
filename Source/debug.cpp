
void LoadDebugGFX(void)

{
	int iVar1;
	BYTE *pBVar2;

	iVar1 = 0x100f8fd0;
	if (visiondebug != 0) {
		pBVar2 = LoadFileInMem("Data\\Square.CEL", (DWORD *)0x0);
		**(BYTE ***)(iVar1 + -0x760c) = pBVar2;
	}
	return;
}

void FreeDebugGFX(void)

{
	MemFreeDbg((int **)&DAT_10128fd8);
	return;
}