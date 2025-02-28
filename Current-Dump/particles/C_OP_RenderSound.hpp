#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RenderSound {
			 uintptr_t m_flDurationScale = 0x210;
			 uintptr_t m_flSndLvlScale = 0x214;
			 uintptr_t m_flPitchScale = 0x218;
			 uintptr_t m_flVolumeScale = 0x21c;
			 uintptr_t m_nSndLvlField = 0x220;
			 uintptr_t m_nDurationField = 0x224;
			 uintptr_t m_nPitchField = 0x228;
			 uintptr_t m_nVolumeField = 0x22c;
			 uintptr_t m_nChannel = 0x230;
			 uintptr_t m_nCPReference = 0x234;
			 uintptr_t m_pszSoundName = 0x238;
			 uintptr_t m_bSuppressStopSoundEvent = 0x338;
		}
	}
}
