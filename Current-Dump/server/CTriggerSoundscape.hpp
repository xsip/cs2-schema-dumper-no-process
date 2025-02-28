#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CTriggerSoundscape {
			 uintptr_t m_hSoundscape = 0x960; // CHandle< CEnvSoundscapeTriggerable >
			 uintptr_t m_SoundscapeName = 0x968; // CUtlSymbolLarge
			 uintptr_t m_spectators = 0x970; // CUtlVector< CHandle< CBasePlayerPawn > >
		}
	}
}
