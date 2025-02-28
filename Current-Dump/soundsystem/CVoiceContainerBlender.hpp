#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace CVoiceContainerBlender {
			 uintptr_t m_firstSound = 0xc0; // CSoundContainerReference
			 uintptr_t m_secondSound = 0xd8; // CSoundContainerReference
			 uintptr_t m_flBlendFactor = 0xf0; // float32
		}
	}
}
