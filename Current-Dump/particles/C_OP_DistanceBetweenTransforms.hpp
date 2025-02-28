#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_DistanceBetweenTransforms {
			 uintptr_t m_nFieldOutput = 0x1c0; // ParticleAttributeIndex_t
			 uintptr_t m_TransformStart = 0x1c8; // CParticleTransformInput
			 uintptr_t m_TransformEnd = 0x230; // CParticleTransformInput
			 uintptr_t m_flInputMin = 0x298; // CPerParticleFloatInput
			 uintptr_t m_flInputMax = 0x3f8; // CPerParticleFloatInput
			 uintptr_t m_flOutputMin = 0x558; // CPerParticleFloatInput
			 uintptr_t m_flOutputMax = 0x6b8; // CPerParticleFloatInput
			 uintptr_t m_flMaxTraceLength = 0x818; // float32
			 uintptr_t m_flLOSScale = 0x81c; // float32
			 uintptr_t m_CollisionGroupName = 0x820; // char[128]
			 uintptr_t m_nTraceSet = 0x8a0; // ParticleTraceSet_t
			 uintptr_t m_bLOS = 0x8a4; // bool
			 uintptr_t m_nSetMethod = 0x8a8; // ParticleSetMethod_t
		}
	}
}
