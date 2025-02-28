#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CEnvMicrophone {
			 uintptr_t m_bDisabled = 0x4e0;
			 uintptr_t m_hMeasureTarget = 0x4e4;
			 uintptr_t m_nSoundType = 0x4e8;
			 uintptr_t m_nSoundFlags = 0x4ea;
			 uintptr_t m_flSensitivity = 0x4ec;
			 uintptr_t m_flSmoothFactor = 0x4f0;
			 uintptr_t m_flMaxRange = 0x4f4;
			 uintptr_t m_iszSpeakerName = 0x4f8;
			 uintptr_t m_hSpeaker = 0x500;
			 uintptr_t m_bAvoidFeedback = 0x504;
			 uintptr_t m_iSpeakerDSPPreset = 0x508;
			 uintptr_t m_iszListenFilter = 0x510;
			 uintptr_t m_hListenFilter = 0x518;
			 uintptr_t m_SoundLevel = 0x520;
			 uintptr_t m_OnRoutedSound = 0x548;
			 uintptr_t m_OnHeardSound = 0x570;
			 uintptr_t m_szLastSound = 0x598;
			 uintptr_t m_iLastRoutedFrame = 0x698;
		}
	}
}
