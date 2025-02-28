#include <cstdio>
#include <iostream>
#include <vector>
class Memory {
public:
	static uint8_t* PatternScan(const char* module_name, const char* signature) noexcept;
	static std::vector<uint8_t*> PatternScanList(const char* module_name, const char* signature) noexcept;
	static uintptr_t GetInstructionValue(uintptr_t pOffset, uintptr_t pInstructionSize, uintptr_t pOffsetLength) noexcept;
	template <typename T, int index, typename ...Args>
	static constexpr T CallVFunc(void* pThis, Args... args) noexcept
	{
		return reinterpret_cast<T(*)(void*, Args...)> (reinterpret_cast<void***>(pThis)[0][index])(pThis, args...);
	}

	template <int index>
	static constexpr uintptr_t GetVFunc(void* pThis) noexcept
	{
		return reinterpret_cast<uintptr_t> (reinterpret_cast<void***>(pThis)[0][index]);
	}

	inline static void**& getvtable(void* inst, size_t offset = 0)
	{
		return *reinterpret_cast<void***>((size_t)inst + offset);
	}
	inline static  const void** getvtable(const void* inst, size_t offset = 0)
	{
		return *reinterpret_cast<const void***>((size_t)inst + offset);
	}
};