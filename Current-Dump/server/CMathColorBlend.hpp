#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CMathColorBlend {
			 uintptr_t m_flInMin = 0x4e0; // float32
			 uintptr_t m_flInMax = 0x4e4; // float32
			 uintptr_t m_OutColor1 = 0x4e8; // Color
			 uintptr_t m_OutColor2 = 0x4ec; // Color
			 uintptr_t m_OutValue = 0x4f0; // CEntityOutputTemplate< Color >
		}
	}
}
