#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPointPush {
			 uintptr_t m_bEnabled = 0x4e0; // bool
			 uintptr_t m_flMagnitude = 0x4e4; // float32
			 uintptr_t m_flRadius = 0x4e8; // float32
			 uintptr_t m_flInnerRadius = 0x4ec; // float32
			 uintptr_t m_flConeOfInfluence = 0x4f0; // float32
			 uintptr_t m_iszFilterName = 0x4f8; // CUtlSymbolLarge
			 uintptr_t m_hFilter = 0x500; // CHandle< CBaseFilter >
		}
	}
}
