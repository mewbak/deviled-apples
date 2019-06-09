// Address range: 0x34344 - 0x34384
int32_t LoadDebugGFX(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7608); // 0x34348
	int32_t result;                          // 0x34368
	if (*(int32_t *)v1 != 0) {
		// 0x34360
		result = LoadFileInMem(*(int32_t *)(g23 - 0x6454), NULL);
		*(int32_t *)*(int32_t *)(g23 - 0x760c) = result;
		// branch -> 0x34374
	} else {
		result = v1;
	}
	// 0x34374
	return result;
}

// Address range: 0x34384 - 0x343a8
int32_t FreeDebugGFX(int32_t a1)
{
	int32_t result = MemFreeDbg((int32_t *)*(int32_t *)(g23 - 0x760c)); // 0x34394
	return result;
}