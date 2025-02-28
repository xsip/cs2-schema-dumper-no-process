#pragma once
#include <Windows.h>
class PtrCheck {
public:
	static bool IsBadReadPtr(void* p);
	static bool PtrIsInvalid(uintptr_t pPtr);
};