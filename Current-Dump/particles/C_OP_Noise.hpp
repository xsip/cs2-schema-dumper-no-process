#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_Noise {
			 uintptr_t m_nFieldOutput = 0x1c0; // ParticleAttributeIndex_t
			 uintptr_t m_flOutputMin = 0x1c4; // float32
			 uintptr_t m_flOutputMax = 0x1c8; // float32
			 uintptr_t m_fl4NoiseScale = 0x1cc; // float32
			 uintptr_t m_bAdditive = 0x1d0; // bool
			 uintptr_t m_flNoiseAnimationTimeScale = 0x1d4; // float32
		}
	}
}
