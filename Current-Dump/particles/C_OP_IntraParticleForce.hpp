#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_IntraParticleForce {
			 uintptr_t m_flAttractionMinDistance = 0x1d0; // float32
			 uintptr_t m_flAttractionMaxDistance = 0x1d4; // float32
			 uintptr_t m_flAttractionMaxStrength = 0x1d8; // float32
			 uintptr_t m_flRepulsionMinDistance = 0x1dc; // float32
			 uintptr_t m_flRepulsionMaxDistance = 0x1e0; // float32
			 uintptr_t m_flRepulsionMaxStrength = 0x1e4; // float32
			 uintptr_t m_bUseAABB = 0x1e8; // bool
			 uintptr_t m_bThreadIt = 0x1e9; // bool
		}
	}
}
