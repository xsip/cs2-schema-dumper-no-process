#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RemapDirectionToCPToVector {
			 uintptr_t m_nCP = 0x1c0; // int32
			 uintptr_t m_nFieldOutput = 0x1c4; // ParticleAttributeIndex_t
			 uintptr_t m_flScale = 0x1c8; // float32
			 uintptr_t m_flOffsetRot = 0x1cc; // float32
			 uintptr_t m_vecOffsetAxis = 0x1d0; // Vector
			 uintptr_t m_bNormalize = 0x1dc; // bool
			 uintptr_t m_nFieldStrength = 0x1e0; // ParticleAttributeIndex_t
		}
	}
}
