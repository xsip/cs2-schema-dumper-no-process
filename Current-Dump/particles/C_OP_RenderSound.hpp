#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RenderSound {
			 uintptr_t m_flDurationScale = 0x210; // float32
			 uintptr_t m_flSndLvlScale = 0x214; // float32
			 uintptr_t m_flPitchScale = 0x218; // float32
			 uintptr_t m_flVolumeScale = 0x21c; // float32
			 uintptr_t m_nSndLvlField = 0x220; // ParticleAttributeIndex_t
			 uintptr_t m_nDurationField = 0x224; // ParticleAttributeIndex_t
			 uintptr_t m_nPitchField = 0x228; // ParticleAttributeIndex_t
			 uintptr_t m_nVolumeField = 0x22c; // ParticleAttributeIndex_t
			 uintptr_t m_nChannel = 0x230; // int32
			 uintptr_t m_nCPReference = 0x234; // int32
			 uintptr_t m_pszSoundName = 0x238; // char[256]
			 uintptr_t m_bSuppressStopSoundEvent = 0x338; // bool
		}
	}
}
