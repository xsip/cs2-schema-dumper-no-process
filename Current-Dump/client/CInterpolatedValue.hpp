#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CInterpolatedValue {
			 uintptr_t m_flStartTime = 0x0; // float32
			 uintptr_t m_flEndTime = 0x4; // float32
			 uintptr_t m_flStartValue = 0x8; // float32
			 uintptr_t m_flEndValue = 0xc; // float32
			 uintptr_t m_nInterpType = 0x10; // int32
		}
	}
}
