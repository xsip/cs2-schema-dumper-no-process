#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CLogicDistanceCheck {
			 uintptr_t m_iszEntityA = 0x4e0; // CUtlSymbolLarge
			 uintptr_t m_iszEntityB = 0x4e8; // CUtlSymbolLarge
			 uintptr_t m_flZone1Distance = 0x4f0; // float32
			 uintptr_t m_flZone2Distance = 0x4f4; // float32
			 uintptr_t m_InZone1 = 0x4f8; // CEntityIOOutput
			 uintptr_t m_InZone2 = 0x520; // CEntityIOOutput
			 uintptr_t m_InZone3 = 0x548; // CEntityIOOutput
		}
	}
}
