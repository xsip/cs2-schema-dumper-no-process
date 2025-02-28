#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CSound {
			 uintptr_t m_hOwner = 0x0; // CHandle< CBaseEntity >
			 uintptr_t m_hTarget = 0x4; // CHandle< CBaseEntity >
			 uintptr_t m_iVolume = 0x8; // int32
			 uintptr_t m_flOcclusionScale = 0xc; // float32
			 uintptr_t m_Sound = 0x10; // AISound_t
			 uintptr_t m_iNextAudible = 0x14; // int32
			 uintptr_t m_flExpireTime = 0x18; // GameTime_t
			 uintptr_t m_iNext = 0x1c; // int16
			 uintptr_t m_bNoExpirationTime = 0x1e; // bool
			 uintptr_t m_ownerChannelIndex = 0x20; // int32
			 uintptr_t m_vecOrigin = 0x24; // Vector
			 uintptr_t m_bHasOwner = 0x30; // bool
		}
	}
}
