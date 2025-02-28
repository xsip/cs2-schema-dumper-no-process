#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_ChaoticAttractor {
			 uintptr_t m_flAParm = 0x1c8; // float32
			 uintptr_t m_flBParm = 0x1cc; // float32
			 uintptr_t m_flCParm = 0x1d0; // float32
			 uintptr_t m_flDParm = 0x1d4; // float32
			 uintptr_t m_flScale = 0x1d8; // float32
			 uintptr_t m_flSpeedMin = 0x1dc; // float32
			 uintptr_t m_flSpeedMax = 0x1e0; // float32
			 uintptr_t m_nBaseCP = 0x1e4; // int32
			 uintptr_t m_bUniformSpeed = 0x1e8; // bool
		}
	}
}
