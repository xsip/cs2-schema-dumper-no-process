#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CTestEffect {
			 uintptr_t m_iLoop = 0x4e0; // int32
			 uintptr_t m_iBeam = 0x4e4; // int32
			 uintptr_t m_pBeam = 0x4e8; // CBeam*[24]
			 uintptr_t m_flBeamTime = 0x5a8; // GameTime_t[24]
			 uintptr_t m_flStartTime = 0x608; // GameTime_t
		}
	}
}
