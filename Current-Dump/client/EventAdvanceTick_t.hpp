#include <Windows.h>


namespace xsip {
	namespace client {
		namespace EventAdvanceTick_t {
			 uintptr_t m_nCurrentTick = 0x30; // int32
			 uintptr_t m_nCurrentTickThisFrame = 0x34; // int32
			 uintptr_t m_nTotalTicksThisFrame = 0x38; // int32
			 uintptr_t m_nTotalTicks = 0x3c; // int32
		}
	}
}
