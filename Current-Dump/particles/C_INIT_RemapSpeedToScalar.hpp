#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_RemapSpeedToScalar {
			 uintptr_t m_nFieldOutput = 0x1c8; // ParticleAttributeIndex_t
			 uintptr_t m_nControlPointNumber = 0x1cc; // int32
			 uintptr_t m_flStartTime = 0x1d0; // float32
			 uintptr_t m_flEndTime = 0x1d4; // float32
			 uintptr_t m_flInputMin = 0x1d8; // float32
			 uintptr_t m_flInputMax = 0x1dc; // float32
			 uintptr_t m_flOutputMin = 0x1e0; // float32
			 uintptr_t m_flOutputMax = 0x1e4; // float32
			 uintptr_t m_nSetMethod = 0x1e8; // ParticleSetMethod_t
			 uintptr_t m_bPerParticle = 0x1ec; // bool
		}
	}
}
