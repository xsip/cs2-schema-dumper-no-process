#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RemapDensityToVector {
			 uintptr_t m_flRadiusScale = 0x1c0; // float32
			 uintptr_t m_nFieldOutput = 0x1c4; // ParticleAttributeIndex_t
			 uintptr_t m_flDensityMin = 0x1c8; // float32
			 uintptr_t m_flDensityMax = 0x1cc; // float32
			 uintptr_t m_vecOutputMin = 0x1d0; // Vector
			 uintptr_t m_vecOutputMax = 0x1dc; // Vector
			 uintptr_t m_bUseParentDensity = 0x1e8; // bool
			 uintptr_t m_nVoxelGridResolution = 0x1ec; // int32
		}
	}
}
