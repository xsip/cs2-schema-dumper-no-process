#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CSoundEnt {
			 uintptr_t m_iFreeSound = 0x4e0;
			 uintptr_t m_iActiveSound = 0x4e4;
			 uintptr_t m_cLastActiveSounds = 0x4e8;
			 uintptr_t m_SoundPool = 0x4ec;
		}
	}
}
