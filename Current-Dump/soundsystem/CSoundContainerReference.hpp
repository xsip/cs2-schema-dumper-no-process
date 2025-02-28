#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace CSoundContainerReference {
			 uintptr_t m_bUseReference = 0x0; // bool
			 uintptr_t m_sound = 0x8; // CStrongHandle< InfoForResourceTypeCVoiceContainerBase >
			 uintptr_t m_pSound = 0x10; // CVoiceContainerBase*
		}
	}
}
