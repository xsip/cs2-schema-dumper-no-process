#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_DistanceToCPInit {
			 uintptr_t m_nFieldOutput = 0x1c8; // ParticleAttributeIndex_t
			 uintptr_t m_flInputMin = 0x1d0; // CPerParticleFloatInput
			 uintptr_t m_flInputMax = 0x330; // CPerParticleFloatInput
			 uintptr_t m_flOutputMin = 0x490; // CPerParticleFloatInput
			 uintptr_t m_flOutputMax = 0x5f0; // CPerParticleFloatInput
			 uintptr_t m_nStartCP = 0x750; // int32
			 uintptr_t m_bLOS = 0x754; // bool
			 uintptr_t m_CollisionGroupName = 0x755; // char[128]
			 uintptr_t m_nTraceSet = 0x7d8; // ParticleTraceSet_t
			 uintptr_t m_flMaxTraceLength = 0x7e0; // CPerParticleFloatInput
			 uintptr_t m_flLOSScale = 0x940; // float32
			 uintptr_t m_nSetMethod = 0x944; // ParticleSetMethod_t
			 uintptr_t m_bActiveRange = 0x948; // bool
			 uintptr_t m_vecDistanceScale = 0x94c; // Vector
			 uintptr_t m_flRemapBias = 0x958; // float32
		}
	}
}
