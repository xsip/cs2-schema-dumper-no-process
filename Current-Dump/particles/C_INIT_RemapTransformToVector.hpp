#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_RemapTransformToVector {
			 uintptr_t m_nFieldOutput = 0x1c8; // ParticleAttributeIndex_t
			 uintptr_t m_vInputMin = 0x1cc; // Vector
			 uintptr_t m_vInputMax = 0x1d8; // Vector
			 uintptr_t m_vOutputMin = 0x1e4; // Vector
			 uintptr_t m_vOutputMax = 0x1f0; // Vector
			 uintptr_t m_TransformInput = 0x200; // CParticleTransformInput
			 uintptr_t m_LocalSpaceTransform = 0x268; // CParticleTransformInput
			 uintptr_t m_flStartTime = 0x2d0; // float32
			 uintptr_t m_flEndTime = 0x2d4; // float32
			 uintptr_t m_nSetMethod = 0x2d8; // ParticleSetMethod_t
			 uintptr_t m_bOffset = 0x2dc; // bool
			 uintptr_t m_bAccelerate = 0x2dd; // bool
			 uintptr_t m_flRemapBias = 0x2e0; // float32
		}
	}
}
