#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CMathRemap {
			 uintptr_t m_flInMin = 0x4e0; // float32
			 uintptr_t m_flInMax = 0x4e4; // float32
			 uintptr_t m_flOut1 = 0x4e8; // float32
			 uintptr_t m_flOut2 = 0x4ec; // float32
			 uintptr_t m_flOldInValue = 0x4f0; // float32
			 uintptr_t m_bEnabled = 0x4f4; // bool
			 uintptr_t m_OutValue = 0x4f8; // CEntityOutputTemplate< float32 >
			 uintptr_t m_OnRoseAboveMin = 0x520; // CEntityIOOutput
			 uintptr_t m_OnRoseAboveMax = 0x548; // CEntityIOOutput
			 uintptr_t m_OnFellBelowMin = 0x570; // CEntityIOOutput
			 uintptr_t m_OnFellBelowMax = 0x598; // CEntityIOOutput
		}
	}
}
