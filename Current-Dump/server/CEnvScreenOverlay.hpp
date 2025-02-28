#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CEnvScreenOverlay {
			 uintptr_t m_iszOverlayNames = 0x4e0; // CUtlSymbolLarge[10]
			 uintptr_t m_flOverlayTimes = 0x530; // float32[10]
			 uintptr_t m_flStartTime = 0x558; // GameTime_t
			 uintptr_t m_iDesiredOverlay = 0x55c; // int32
			 uintptr_t m_bIsActive = 0x560; // bool
		}
	}
}
