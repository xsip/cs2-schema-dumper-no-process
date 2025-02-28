#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CSound {
			 uintptr_t m_hOwner = 0x0;
			 uintptr_t m_hTarget = 0x4;
			 uintptr_t m_iVolume = 0x8;
			 uintptr_t m_flOcclusionScale = 0xc;
			 uintptr_t m_Sound = 0x10;
			 uintptr_t m_iNextAudible = 0x14;
			 uintptr_t m_flExpireTime = 0x18;
			 uintptr_t m_iNext = 0x1c;
			 uintptr_t m_bNoExpirationTime = 0x1e;
			 uintptr_t m_ownerChannelIndex = 0x20;
			 uintptr_t m_vecOrigin = 0x24;
			 uintptr_t m_bHasOwner = 0x30;
		}
	}
}
