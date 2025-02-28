#include <Windows.h>


namespace xsip {
	namespace client {
		namespace EventPostAdvanceTick_t {
			 uintptr_t m_nCurrentTick = 0x30;
			 uintptr_t m_nCurrentTickThisFrame = 0x34;
			 uintptr_t m_nTotalTicksThisFrame = 0x38;
			 uintptr_t m_nTotalTicks = 0x3c;
		}
	}
}
