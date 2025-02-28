#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CEnvSoundscape {
			 uintptr_t m_OnPlay = 0x568; // CEntityIOOutput
			 uintptr_t m_flRadius = 0x590; // float32
			 uintptr_t m_soundEventName = 0x598; // CUtlSymbolLarge
			 uintptr_t m_bOverrideWithEvent = 0x5a0; // bool
			 uintptr_t m_soundscapeIndex = 0x5a4; // int32
			 uintptr_t m_soundscapeEntityListId = 0x5a8; // int32
			 uintptr_t m_positionNames = 0x5b0; // CUtlSymbolLarge[8]
			 uintptr_t m_hProxySoundscape = 0x5f0; // CHandle< CEnvSoundscape >
			 uintptr_t m_bDisabled = 0x5f4; // bool
			 uintptr_t m_soundscapeName = 0x5f8; // CUtlSymbolLarge
			 uintptr_t m_soundEventHash = 0x600; // uint32
		}
	}
}
