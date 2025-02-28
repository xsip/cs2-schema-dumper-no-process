#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace CVoiceContainerRandomSampler {
			 uintptr_t m_flAmplitude = 0xc0;
			 uintptr_t m_flAmplitudeJitter = 0xc4;
			 uintptr_t m_flTimeJitter = 0xc8;
			 uintptr_t m_flMaxLength = 0xcc;
			 uintptr_t m_nNumDelayVariations = 0xd0;
			 uintptr_t m_grainResources = 0xd8;
		}
	}
}
