#include <Windows.h>


namespace xsip {
	namespace server {
		namespace ConstraintSoundInfo {
			 uintptr_t m_vSampler = 0x8;
			 uintptr_t m_soundProfile = 0x20;
			 uintptr_t m_forwardAxis = 0x40;
			 uintptr_t m_iszTravelSoundFwd = 0x50;
			 uintptr_t m_iszTravelSoundBack = 0x58;
			 uintptr_t m_iszReversalSounds = 0x68;
			 uintptr_t m_bPlayTravelSound = 0x80;
			 uintptr_t m_bPlayReversalSound = 0x81;
		}
	}
}
