#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_ColorCorrection {
			 uintptr_t m_vecOrigin = 0x568; // Vector
			 uintptr_t m_MinFalloff = 0x574; // float32
			 uintptr_t m_MaxFalloff = 0x578; // float32
			 uintptr_t m_flFadeInDuration = 0x57c; // float32
			 uintptr_t m_flFadeOutDuration = 0x580; // float32
			 uintptr_t m_flMaxWeight = 0x584; // float32
			 uintptr_t m_flCurWeight = 0x588; // float32
			 uintptr_t m_netlookupFilename = 0x58c; // char[512]
			 uintptr_t m_bEnabled = 0x78c; // bool
			 uintptr_t m_bMaster = 0x78d; // bool
			 uintptr_t m_bClientSide = 0x78e; // bool
			 uintptr_t m_bExclusive = 0x78f; // bool
			 uintptr_t m_bEnabledOnClient = 0x790; // bool[1]
			 uintptr_t m_flCurWeightOnClient = 0x794; // float32[1]
			 uintptr_t m_bFadingIn = 0x798; // bool[1]
			 uintptr_t m_flFadeStartWeight = 0x79c; // float32[1]
			 uintptr_t m_flFadeStartTime = 0x7a0; // float32[1]
			 uintptr_t m_flFadeDuration = 0x7a4; // float32[1]
		}
	}
}
