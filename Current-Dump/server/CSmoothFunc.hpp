#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CSmoothFunc {
			 uintptr_t m_flSmoothAmplitude = 0x8; // float32
			 uintptr_t m_flSmoothBias = 0xc; // float32
			 uintptr_t m_flSmoothDuration = 0x10; // float32
			 uintptr_t m_flSmoothRemainingTime = 0x14; // float32
			 uintptr_t m_nSmoothDir = 0x18; // int32
		}
	}
}
