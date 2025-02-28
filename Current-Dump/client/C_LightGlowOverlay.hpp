#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_LightGlowOverlay {
			 uintptr_t m_vecOrigin = 0xd0; // Vector
			 uintptr_t m_vecDirection = 0xdc; // Vector
			 uintptr_t m_nMinDist = 0xe8; // int32
			 uintptr_t m_nMaxDist = 0xec; // int32
			 uintptr_t m_nOuterMaxDist = 0xf0; // int32
			 uintptr_t m_bOneSided = 0xf4; // bool
			 uintptr_t m_bModulateByDot = 0xf5; // bool
		}
	}
}
