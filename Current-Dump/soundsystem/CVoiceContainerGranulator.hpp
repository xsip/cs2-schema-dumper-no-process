#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace CVoiceContainerGranulator {
			 uintptr_t m_flGrainLength = 0xc0; // float32
			 uintptr_t m_flGrainCrossfadeAmount = 0xc4; // float32
			 uintptr_t m_flStartJitter = 0xc8; // float32
			 uintptr_t m_flPlaybackJitter = 0xcc; // float32
			 uintptr_t m_sourceAudio = 0xd0; // CStrongHandle< InfoForResourceTypeCVoiceContainerBase >
		}
	}
}
