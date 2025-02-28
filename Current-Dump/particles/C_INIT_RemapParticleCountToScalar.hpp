#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_RemapParticleCountToScalar {
			 uintptr_t m_nFieldOutput = 0x1c8; // ParticleAttributeIndex_t
			 uintptr_t m_nInputMin = 0x1cc; // int32
			 uintptr_t m_nInputMax = 0x1d0; // int32
			 uintptr_t m_nScaleControlPoint = 0x1d4; // int32
			 uintptr_t m_nScaleControlPointField = 0x1d8; // int32
			 uintptr_t m_flOutputMin = 0x1dc; // float32
			 uintptr_t m_flOutputMax = 0x1e0; // float32
			 uintptr_t m_nSetMethod = 0x1e4; // ParticleSetMethod_t
			 uintptr_t m_bActiveRange = 0x1e8; // bool
			 uintptr_t m_bInvert = 0x1e9; // bool
			 uintptr_t m_bWrap = 0x1ea; // bool
			 uintptr_t m_flRemapBias = 0x1ec; // float32
		}
	}
}
