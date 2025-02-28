#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_ChladniWave {
			 uintptr_t m_nFieldOutput = 0x1c0; // ParticleAttributeIndex_t
			 uintptr_t m_flInputMin = 0x1c8; // CPerParticleFloatInput
			 uintptr_t m_flInputMax = 0x328; // CPerParticleFloatInput
			 uintptr_t m_flOutputMin = 0x488; // CPerParticleFloatInput
			 uintptr_t m_flOutputMax = 0x5e8; // CPerParticleFloatInput
			 uintptr_t m_vecWaveLength = 0x748; // CPerParticleVecInput
			 uintptr_t m_vecHarmonics = 0xdc0; // CPerParticleVecInput
			 uintptr_t m_nSetMethod = 0x1438; // ParticleSetMethod_t
			 uintptr_t m_nLocalSpaceControlPoint = 0x143c; // int32
			 uintptr_t m_b3D = 0x1440; // bool
		}
	}
}
