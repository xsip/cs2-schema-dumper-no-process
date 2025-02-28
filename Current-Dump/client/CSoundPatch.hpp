#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CSoundPatch {
			 uintptr_t m_pitch = 0x8; // CSoundEnvelope
			 uintptr_t m_volume = 0x18; // CSoundEnvelope
			 uintptr_t m_shutdownTime = 0x30; // float32
			 uintptr_t m_flLastTime = 0x34; // float32
			 uintptr_t m_iszSoundScriptName = 0x38; // CUtlSymbolLarge
			 uintptr_t m_hEnt = 0x40; // CHandle< C_BaseEntity >
			 uintptr_t m_soundEntityIndex = 0x44; // CEntityIndex
			 uintptr_t m_soundOrigin = 0x48; // Vector
			 uintptr_t m_isPlaying = 0x54; // int32
			 uintptr_t m_Filter = 0x58; // CCopyRecipientFilter
			 uintptr_t m_flCloseCaptionDuration = 0x80; // float32
			 uintptr_t m_bUpdatedSoundOrigin = 0x84; // bool
			 uintptr_t m_iszClassName = 0x88; // CUtlSymbolLarge
		}
	}
}
