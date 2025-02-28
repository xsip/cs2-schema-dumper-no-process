#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace CVoiceContainerRandomSampler {
			 uintptr_t m_flAmplitude = 0xc0; // float32
			 uintptr_t m_flAmplitudeJitter = 0xc4; // float32
			 uintptr_t m_flTimeJitter = 0xc8; // float32
			 uintptr_t m_flMaxLength = 0xcc; // float32
			 uintptr_t m_nNumDelayVariations = 0xd0; // int32
			 uintptr_t m_grainResources = 0xd8; // CUtlVector< CStrongHandle< InfoForResourceTypeCVoiceContainerBase > >
		}
	}
}
