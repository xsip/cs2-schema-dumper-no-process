#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_EnvWindShared {
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
			 uintptr_t m_flVariationTime = 0x70; // GameTime_t
			 uintptr_t m_flSwayTime = 0x74; // GameTime_t
			 uintptr_t m_flSimTime = 0x78; // GameTime_t
			 uintptr_t m_flSwitchTime = 0x7c; // GameTime_t
			 uintptr_t m_flAveWindSpeed = 0x80; // float32
			 uintptr_t m_bGusting = 0x84; // bool
			 uintptr_t m_flWindAngleVariation = 0x88; // float32
			 uintptr_t m_flWindSpeedVariation = 0x8c; // float32
			 uintptr_t m_hEntOwner = 0x90; // CHandle< C_BaseEntity >
		}
	}
}
