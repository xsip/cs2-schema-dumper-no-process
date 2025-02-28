#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CEnvWindShared {
			 uintptr_t m_flStartTime = 0x8; // GameTime_t
			 uintptr_t m_iWindSeed = 0xc; // uint32
			 uintptr_t m_iMinWind = 0x10; // uint16
			 uintptr_t m_iMaxWind = 0x12; // uint16
			 uintptr_t m_windRadius = 0x14; // int32
			 uintptr_t m_iMinGust = 0x18; // uint16
			 uintptr_t m_iMaxGust = 0x1a; // uint16
			 uintptr_t m_flMinGustDelay = 0x1c; // float32
			 uintptr_t m_flMaxGustDelay = 0x20; // float32
			 uintptr_t m_flGustDuration = 0x24; // float32
			 uintptr_t m_iGustDirChange = 0x28; // uint16
			 uintptr_t m_location = 0x2c; // Vector
			 uintptr_t m_iszGustSound = 0x38; // int32
			 uintptr_t m_iWindDir = 0x3c; // int32
			 uintptr_t m_flWindSpeed = 0x40; // float32
			 uintptr_t m_currentWindVector = 0x44; // Vector
			 uintptr_t m_CurrentSwayVector = 0x50; // Vector
			 uintptr_t m_PrevSwayVector = 0x5c; // Vector
			 uintptr_t m_iInitialWindDir = 0x68; // uint16
			 uintptr_t m_flInitialWindSpeed = 0x6c; // float32
			 uintptr_t m_OnGustStart = 0x70; // CEntityIOOutput
			 uintptr_t m_OnGustEnd = 0x98; // CEntityIOOutput
			 uintptr_t m_flVariationTime = 0xc0; // GameTime_t
			 uintptr_t m_flSwayTime = 0xc4; // GameTime_t
			 uintptr_t m_flSimTime = 0xc8; // GameTime_t
			 uintptr_t m_flSwitchTime = 0xcc; // GameTime_t
			 uintptr_t m_flAveWindSpeed = 0xd0; // float32
			 uintptr_t m_bGusting = 0xd4; // bool
			 uintptr_t m_flWindAngleVariation = 0xd8; // float32
			 uintptr_t m_flWindSpeedVariation = 0xdc; // float32
			 uintptr_t m_hEntOwner = 0xe0; // CHandle< CBaseEntity >
		}
	}
}
