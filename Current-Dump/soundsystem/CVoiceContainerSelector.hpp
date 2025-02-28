#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace CVoiceContainerSelector {
			 uintptr_t m_mode = 0xc0; // PlayBackMode_t
			 uintptr_t m_soundsToPlay = 0xc8; // CSoundContainerReferenceArray
			 uintptr_t m_fProbabilityWeights = 0x100; // CUtlVector< float32 >
		}
	}
}
