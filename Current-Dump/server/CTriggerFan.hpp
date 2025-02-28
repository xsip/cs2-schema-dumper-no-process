#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CTriggerFan {
			 uintptr_t m_vFanOrigin = 0x960;
			 uintptr_t m_vFanEnd = 0x96c;
			 uintptr_t m_vNoise = 0x978;
			 uintptr_t m_flForce = 0x984;
			 uintptr_t m_flRopeForceScale = 0x988;
			 uintptr_t m_flPlayerForce = 0x98c;
			 uintptr_t m_flRampTime = 0x990;
			 uintptr_t m_bFalloff = 0x994;
			 uintptr_t m_bPushPlayer = 0x995;
			 uintptr_t m_bRampDown = 0x996;
			 uintptr_t m_bAddNoise = 0x997;
			 uintptr_t m_RampTimer = 0x998;
		}
	}
}
