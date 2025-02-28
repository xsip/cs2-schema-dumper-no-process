#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RenderTonemapController {
			 uintptr_t m_flTonemapLevel = 0x210; // float32
			 uintptr_t m_flTonemapWeight = 0x214; // float32
			 uintptr_t m_nTonemapLevelField = 0x218; // ParticleAttributeIndex_t
			 uintptr_t m_nTonemapWeightField = 0x21c; // ParticleAttributeIndex_t
		}
	}
}
