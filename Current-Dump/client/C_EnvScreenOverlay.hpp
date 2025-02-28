#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_EnvScreenOverlay {
			 uintptr_t m_iszOverlayNames = 0x568; // CUtlSymbolLarge[10]
			 uintptr_t m_flOverlayTimes = 0x5b8; // float32[10]
			 uintptr_t m_flStartTime = 0x5e0; // GameTime_t
			 uintptr_t m_iDesiredOverlay = 0x5e4; // int32
			 uintptr_t m_bIsActive = 0x5e8; // bool
			 uintptr_t m_bWasActive = 0x5e9; // bool
			 uintptr_t m_iCachedDesiredOverlay = 0x5ec; // int32
			 uintptr_t m_iCurrentOverlay = 0x5f0; // int32
			 uintptr_t m_flCurrentOverlayTime = 0x5f4; // GameTime_t
		}
	}
}
