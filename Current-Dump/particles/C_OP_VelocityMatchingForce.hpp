#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_VelocityMatchingForce {
			 uintptr_t m_flDirScale = 0x1c0; // float32
			 uintptr_t m_flSpdScale = 0x1c4; // float32
			 uintptr_t m_flNeighborDistance = 0x1c8; // float32
			 uintptr_t m_flFacingStrength = 0x1cc; // float32
			 uintptr_t m_bUseAABB = 0x1d0; // bool
			 uintptr_t m_nCPBroadcast = 0x1d4; // int32
		}
	}
}
