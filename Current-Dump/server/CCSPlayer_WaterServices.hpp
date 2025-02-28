#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CCSPlayer_WaterServices {
			 uintptr_t m_NextDrownDamageTime = 0x40; // float32
			 uintptr_t m_nDrownDmgRate = 0x44; // int32
			 uintptr_t m_AirFinishedTime = 0x48; // GameTime_t
			 uintptr_t m_flWaterJumpTime = 0x4c; // float32
			 uintptr_t m_vecWaterJumpVel = 0x50; // Vector
			 uintptr_t m_flSwimSoundTime = 0x5c; // float32
		}
	}
}
