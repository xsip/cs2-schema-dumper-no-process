#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_RtEnvCull {
			 uintptr_t m_vecTestDir = 0x1c8; // Vector
			 uintptr_t m_vecTestNormal = 0x1d4; // Vector
			 uintptr_t m_bUseVelocity = 0x1e0; // bool
			 uintptr_t m_bCullOnMiss = 0x1e1; // bool
			 uintptr_t m_bLifeAdjust = 0x1e2; // bool
			 uintptr_t m_RtEnvName = 0x1e3; // char[128]
			 uintptr_t m_nRTEnvCP = 0x264; // int32
			 uintptr_t m_nComponent = 0x268; // int32
		}
	}
}
