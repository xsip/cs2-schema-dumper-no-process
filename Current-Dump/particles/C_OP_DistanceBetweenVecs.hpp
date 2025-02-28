#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_DistanceBetweenVecs {
			 uintptr_t m_nFieldOutput = 0x1c0; // ParticleAttributeIndex_t
			 uintptr_t m_vecPoint1 = 0x1c8; // CPerParticleVecInput
			 uintptr_t m_vecPoint2 = 0x840; // CPerParticleVecInput
			 uintptr_t m_flInputMin = 0xeb8; // CPerParticleFloatInput
			 uintptr_t m_flInputMax = 0x1018; // CPerParticleFloatInput
			 uintptr_t m_flOutputMin = 0x1178; // CPerParticleFloatInput
			 uintptr_t m_flOutputMax = 0x12d8; // CPerParticleFloatInput
			 uintptr_t m_nSetMethod = 0x1438; // ParticleSetMethod_t
			 uintptr_t m_bDeltaTime = 0x143c; // bool
		}
	}
}
