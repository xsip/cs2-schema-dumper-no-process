#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_EnvScreenOverlay {
			 uintptr_t m_iszOverlayNames = 0x568;
			 uintptr_t m_flOverlayTimes = 0x5b8;
			 uintptr_t m_flStartTime = 0x5e0;
			 uintptr_t m_iDesiredOverlay = 0x5e4;
			 uintptr_t m_bIsActive = 0x5e8;
			 uintptr_t m_bWasActive = 0x5e9;
			 uintptr_t m_iCachedDesiredOverlay = 0x5ec;
			 uintptr_t m_iCurrentOverlay = 0x5f0;
			 uintptr_t m_flCurrentOverlayTime = 0x5f4;
		}
	}
}
