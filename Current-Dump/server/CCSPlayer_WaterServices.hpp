#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CCSPlayer_WaterServices {
			 uintptr_t m_NextDrownDamageTime = 0x40;
			 uintptr_t m_nDrownDmgRate = 0x44;
			 uintptr_t m_AirFinishedTime = 0x48;
			 uintptr_t m_flWaterJumpTime = 0x4c;
			 uintptr_t m_vecWaterJumpVel = 0x50;
			 uintptr_t m_flSwimSoundTime = 0x5c;
		}
	}
}
