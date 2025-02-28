#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_EnvWindShared {
			 uintptr_t m_flStartTime = 0x8;
			 uintptr_t m_iWindSeed = 0xc;
			 uintptr_t m_iMinWind = 0x10;
			 uintptr_t m_iMaxWind = 0x12;
			 uintptr_t m_windRadius = 0x14;
			 uintptr_t m_iMinGust = 0x18;
			 uintptr_t m_iMaxGust = 0x1a;
			 uintptr_t m_flMinGustDelay = 0x1c;
			 uintptr_t m_flMaxGustDelay = 0x20;
			 uintptr_t m_flGustDuration = 0x24;
			 uintptr_t m_iGustDirChange = 0x28;
			 uintptr_t m_location = 0x2c;
			 uintptr_t m_iszGustSound = 0x38;
			 uintptr_t m_iWindDir = 0x3c;
			 uintptr_t m_flWindSpeed = 0x40;
			 uintptr_t m_currentWindVector = 0x44;
			 uintptr_t m_CurrentSwayVector = 0x50;
			 uintptr_t m_PrevSwayVector = 0x5c;
			 uintptr_t m_iInitialWindDir = 0x68;
			 uintptr_t m_flInitialWindSpeed = 0x6c;
			 uintptr_t m_flVariationTime = 0x70;
			 uintptr_t m_flSwayTime = 0x74;
			 uintptr_t m_flSimTime = 0x78;
			 uintptr_t m_flSwitchTime = 0x7c;
			 uintptr_t m_flAveWindSpeed = 0x80;
			 uintptr_t m_bGusting = 0x84;
			 uintptr_t m_flWindAngleVariation = 0x88;
			 uintptr_t m_flWindSpeedVariation = 0x8c;
			 uintptr_t m_hEntOwner = 0x90;
		}
	}
}
