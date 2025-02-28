#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RenderScreenShake {
			 uintptr_t m_flDurationScale = 0x210; // float32
			 uintptr_t m_flRadiusScale = 0x214; // float32
			 uintptr_t m_flFrequencyScale = 0x218; // float32
			 uintptr_t m_flAmplitudeScale = 0x21c; // float32
			 uintptr_t m_nRadiusField = 0x220; // ParticleAttributeIndex_t
			 uintptr_t m_nDurationField = 0x224; // ParticleAttributeIndex_t
			 uintptr_t m_nFrequencyField = 0x228; // ParticleAttributeIndex_t
			 uintptr_t m_nAmplitudeField = 0x22c; // ParticleAttributeIndex_t
			 uintptr_t m_nFilterCP = 0x230; // int32
		}
	}
}
