#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace CSoundContainerReferenceArray {
			 uintptr_t m_bUseReference = 0x0; // bool
			 uintptr_t m_sounds = 0x8; // CUtlVector< CStrongHandle< InfoForResourceTypeCVoiceContainerBase > >
			 uintptr_t m_pSounds = 0x20; // CUtlVector< CVoiceContainerBase* >
		}
	}
}
