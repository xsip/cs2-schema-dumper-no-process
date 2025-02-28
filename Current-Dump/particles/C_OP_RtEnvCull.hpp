#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RtEnvCull {
			 uintptr_t m_vecTestDir = 0x1c0; // Vector
			 uintptr_t m_vecTestNormal = 0x1cc; // Vector
			 uintptr_t m_bCullOnMiss = 0x1d8; // bool
			 uintptr_t m_bStickInsteadOfCull = 0x1d9; // bool
			 uintptr_t m_RtEnvName = 0x1da; // char[128]
			 uintptr_t m_nRTEnvCP = 0x25c; // int32
			 uintptr_t m_nComponent = 0x260; // int32
		}
	}
}
