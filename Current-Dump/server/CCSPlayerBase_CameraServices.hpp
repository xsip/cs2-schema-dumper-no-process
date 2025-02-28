#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CCSPlayerBase_CameraServices {
			 uintptr_t m_iFOV = 0x170; // uint32
			 uintptr_t m_iFOVStart = 0x174; // uint32
			 uintptr_t m_flFOVTime = 0x178; // GameTime_t
			 uintptr_t m_flFOVRate = 0x17c; // float32
			 uintptr_t m_hZoomOwner = 0x180; // CHandle< CBaseEntity >
			 uintptr_t m_hTriggerFogList = 0x188; // CUtlVector< CHandle< CBaseEntity > >
			 uintptr_t m_hLastFogTrigger = 0x1a0; // CHandle< CBaseEntity >
		}
	}
}
