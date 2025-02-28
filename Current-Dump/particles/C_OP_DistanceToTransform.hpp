#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_DistanceToTransform {
			 uintptr_t m_nFieldOutput = 0x1c0; // ParticleAttributeIndex_t
			 uintptr_t m_flInputMin = 0x1c8; // CPerParticleFloatInput
			 uintptr_t m_flInputMax = 0x328; // CPerParticleFloatInput
			 uintptr_t m_flOutputMin = 0x488; // CPerParticleFloatInput
			 uintptr_t m_flOutputMax = 0x5e8; // CPerParticleFloatInput
			 uintptr_t m_TransformStart = 0x748; // CParticleTransformInput
			 uintptr_t m_bLOS = 0x7b0; // bool
			 uintptr_t m_CollisionGroupName = 0x7b1; // char[128]
			 uintptr_t m_nTraceSet = 0x834; // ParticleTraceSet_t
			 uintptr_t m_flMaxTraceLength = 0x838; // float32
			 uintptr_t m_flLOSScale = 0x83c; // float32
			 uintptr_t m_nSetMethod = 0x840; // ParticleSetMethod_t
			 uintptr_t m_bActiveRange = 0x844; // bool
			 uintptr_t m_bAdditive = 0x845; // bool
			 uintptr_t m_vecComponentScale = 0x848; // CPerParticleVecInput
		}
	}
}
