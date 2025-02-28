#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CMathRemap {
			 uintptr_t m_flInMin = 0x4e0;
			 uintptr_t m_flInMax = 0x4e4;
			 uintptr_t m_flOut1 = 0x4e8;
			 uintptr_t m_flOut2 = 0x4ec;
			 uintptr_t m_flOldInValue = 0x4f0;
			 uintptr_t m_bEnabled = 0x4f4;
			 uintptr_t m_OutValue = 0x4f8;
			 uintptr_t m_OnRoseAboveMin = 0x520;
			 uintptr_t m_OnRoseAboveMax = 0x548;
			 uintptr_t m_OnFellBelowMin = 0x570;
			 uintptr_t m_OnFellBelowMax = 0x598;
		}
	}
}
