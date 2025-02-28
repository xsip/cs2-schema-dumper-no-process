#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CEnvMicrophone {
			 uintptr_t m_bDisabled = 0x4e0; // bool
			 uintptr_t m_hMeasureTarget = 0x4e4; // CHandle< CBaseEntity >
			 uintptr_t m_nSoundType = 0x4e8; // SoundTypes_t
			 uintptr_t m_nSoundFlags = 0x4ea; // SoundFlags_t
			 uintptr_t m_flSensitivity = 0x4ec; // float32
			 uintptr_t m_flSmoothFactor = 0x4f0; // float32
			 uintptr_t m_flMaxRange = 0x4f4; // float32
			 uintptr_t m_iszSpeakerName = 0x4f8; // CUtlSymbolLarge
			 uintptr_t m_hSpeaker = 0x500; // CHandle< CBaseEntity >
			 uintptr_t m_bAvoidFeedback = 0x504; // bool
			 uintptr_t m_iSpeakerDSPPreset = 0x508; // int32
			 uintptr_t m_iszListenFilter = 0x510; // CUtlSymbolLarge
			 uintptr_t m_hListenFilter = 0x518; // CHandle< CBaseFilter >
			 uintptr_t m_SoundLevel = 0x520; // CEntityOutputTemplate< float32 >
			 uintptr_t m_OnRoutedSound = 0x548; // CEntityIOOutput
			 uintptr_t m_OnHeardSound = 0x570; // CEntityIOOutput
			 uintptr_t m_szLastSound = 0x598; // char[256]
			 uintptr_t m_iLastRoutedFrame = 0x698; // int32
		}
	}
}
