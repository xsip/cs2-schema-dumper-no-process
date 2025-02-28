#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CSmoothFunc {
			 uintptr_t m_flSmoothAmplitude = 0x8;
			 uintptr_t m_flSmoothBias = 0xc;
			 uintptr_t m_flSmoothDuration = 0x10;
			 uintptr_t m_flSmoothRemainingTime = 0x14;
			 uintptr_t m_nSmoothDir = 0x18;
		}
	}
}
