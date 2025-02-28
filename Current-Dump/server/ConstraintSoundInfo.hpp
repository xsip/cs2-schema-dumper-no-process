#include <Windows.h>


namespace xsip {
	namespace server {
		namespace ConstraintSoundInfo {
			 uintptr_t m_vSampler = 0x8; // VelocitySampler
			 uintptr_t m_soundProfile = 0x20; // SimpleConstraintSoundProfile
			 uintptr_t m_forwardAxis = 0x40; // Vector
			 uintptr_t m_iszTravelSoundFwd = 0x50; // CUtlSymbolLarge
			 uintptr_t m_iszTravelSoundBack = 0x58; // CUtlSymbolLarge
			 uintptr_t m_iszReversalSounds = 0x68; // CUtlSymbolLarge[3]
			 uintptr_t m_bPlayTravelSound = 0x80; // bool
			 uintptr_t m_bPlayReversalSound = 0x81; // bool
		}
	}
}
