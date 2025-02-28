#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_VectorNoise {
			 uintptr_t m_nFieldOutput = 0x1c0; // ParticleAttributeIndex_t
			 uintptr_t m_vecOutputMin = 0x1c4; // Vector
			 uintptr_t m_vecOutputMax = 0x1d0; // Vector
			 uintptr_t m_fl4NoiseScale = 0x1dc; // float32
			 uintptr_t m_bAdditive = 0x1e0; // bool
			 uintptr_t m_bOffset = 0x1e1; // bool
			 uintptr_t m_flNoiseAnimationTimeScale = 0x1e4; // float32
		}
	}
}
