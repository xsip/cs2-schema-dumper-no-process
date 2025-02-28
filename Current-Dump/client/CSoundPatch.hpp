#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CSoundPatch {
			 uintptr_t m_pitch = 0x8;
			 uintptr_t m_volume = 0x18;
			 uintptr_t m_shutdownTime = 0x30;
			 uintptr_t m_flLastTime = 0x34;
			 uintptr_t m_iszSoundScriptName = 0x38;
			 uintptr_t m_hEnt = 0x40;
			 uintptr_t m_soundEntityIndex = 0x44;
			 uintptr_t m_soundOrigin = 0x48;
			 uintptr_t m_isPlaying = 0x54;
			 uintptr_t m_Filter = 0x58;
			 uintptr_t m_flCloseCaptionDuration = 0x80;
			 uintptr_t m_bUpdatedSoundOrigin = 0x84;
			 uintptr_t m_iszClassName = 0x88;
		}
	}
}
