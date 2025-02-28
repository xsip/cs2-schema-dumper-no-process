#include <Windows.h>


namespace xsip {
	namespace client {
		namespace AmmoTypeInfo_t {
			 uintptr_t m_nMaxCarry = 0x10; // int32
			 uintptr_t m_nSplashSize = 0x1c; // CRangeInt
			 uintptr_t m_nFlags = 0x24; // AmmoFlags_t
			 uintptr_t m_flMass = 0x28; // float32
			 uintptr_t m_flSpeed = 0x2c; // CRangeFloat
		}
	}
}
