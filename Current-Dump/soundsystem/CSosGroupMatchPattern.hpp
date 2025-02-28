#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace CSosGroupMatchPattern {
			 uintptr_t m_matchSoundEventName = 0x10; // CUtlString
			 uintptr_t m_matchSoundEventSubString = 0x18; // CUtlString
			 uintptr_t m_flEntIndex = 0x20; // float32
			 uintptr_t m_flOpvar = 0x24; // float32
			 uintptr_t m_opvarString = 0x28; // CUtlString
		}
	}
}
