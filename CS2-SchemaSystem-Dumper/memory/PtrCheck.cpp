#include "PtrCheck.h"

bool PtrCheck::IsBadReadPtr(void* p)
{
	MEMORY_BASIC_INFORMATION mbi = { 0 };
	if (::VirtualQuery(p, &mbi, sizeof(mbi)))
	{
		DWORD mask = (PAGE_READONLY | PAGE_READWRITE | PAGE_WRITECOPY | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY);
		bool b = !(mbi.Protect & mask);
		// check the page is not a guard page
		if (mbi.Protect & (PAGE_GUARD | PAGE_NOACCESS)) b = true;

		return b;
	}
	return true;
}

bool PtrCheck::PtrIsInvalid(uintptr_t pPtr) {
	return (pPtr == 0x0 || !pPtr || pPtr == NULL || (pPtr != 0x0 && PtrCheck::IsBadReadPtr((void*)pPtr)));
}