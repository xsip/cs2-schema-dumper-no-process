#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace CAudioPhonemeTag {
			 uintptr_t m_flStartTime = 0x0; // float32
			 uintptr_t m_flEndTime = 0x4; // float32
			 uintptr_t m_nPhonemeCode = 0x8; // int32
		}
	}
}
