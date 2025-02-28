#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_ColorInterpolate {
			 uintptr_t m_ColorFade = 0x1c0; // Color
			 uintptr_t m_flFadeStartTime = 0x1d0; // float32
			 uintptr_t m_flFadeEndTime = 0x1d4; // float32
			 uintptr_t m_nFieldOutput = 0x1d8; // ParticleAttributeIndex_t
			 uintptr_t m_bEaseInOut = 0x1dc; // bool
		}
	}
}
