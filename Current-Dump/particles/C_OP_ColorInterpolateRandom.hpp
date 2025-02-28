#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_ColorInterpolateRandom {
			 uintptr_t m_ColorFadeMin = 0x1c0; // Color
			 uintptr_t m_ColorFadeMax = 0x1dc; // Color
			 uintptr_t m_flFadeStartTime = 0x1ec; // float32
			 uintptr_t m_flFadeEndTime = 0x1f0; // float32
			 uintptr_t m_nFieldOutput = 0x1f4; // ParticleAttributeIndex_t
			 uintptr_t m_bEaseInOut = 0x1f8; // bool
		}
	}
}
