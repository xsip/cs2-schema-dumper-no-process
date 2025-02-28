#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CEnvSoundscape {
			 uintptr_t m_OnPlay = 0x4e0; // CEntityIOOutput
			 uintptr_t m_flRadius = 0x508; // float32
			 uintptr_t m_soundEventName = 0x510; // CUtlSymbolLarge
			 uintptr_t m_bOverrideWithEvent = 0x518; // bool
			 uintptr_t m_soundscapeIndex = 0x51c; // int32
			 uintptr_t m_soundscapeEntityListId = 0x520; // int32
			 uintptr_t m_positionNames = 0x528; // CUtlSymbolLarge[8]
			 uintptr_t m_hProxySoundscape = 0x568; // CHandle< CEnvSoundscape >
			 uintptr_t m_bDisabled = 0x56c; // bool
			 uintptr_t m_soundscapeName = 0x570; // CUtlSymbolLarge
			 uintptr_t m_soundEventHash = 0x578; // uint32
		}
	}
}
