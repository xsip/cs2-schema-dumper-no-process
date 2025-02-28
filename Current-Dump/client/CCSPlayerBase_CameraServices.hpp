#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CCSPlayerBase_CameraServices {
			 uintptr_t m_iFOV = 0x210; // uint32
			 uintptr_t m_iFOVStart = 0x214; // uint32
			 uintptr_t m_flFOVTime = 0x218; // GameTime_t
			 uintptr_t m_flFOVRate = 0x21c; // float32
			 uintptr_t m_hZoomOwner = 0x220; // CHandle< C_BaseEntity >
			 uintptr_t m_flLastShotFOV = 0x224; // float32
		}
	}
}
