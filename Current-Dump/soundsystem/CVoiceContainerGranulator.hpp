#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace CVoiceContainerGranulator {
			 uintptr_t m_flGrainLength = 0xc0;
			 uintptr_t m_flGrainCrossfadeAmount = 0xc4;
			 uintptr_t m_flStartJitter = 0xc8;
			 uintptr_t m_flPlaybackJitter = 0xcc;
			 uintptr_t m_sourceAudio = 0xd0;
		}
	}
}
