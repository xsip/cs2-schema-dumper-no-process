#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CTriggerFan {
			 uintptr_t m_vFanOrigin = 0x960; // Vector
			 uintptr_t m_vFanEnd = 0x96c; // Vector
			 uintptr_t m_vNoise = 0x978; // Vector
			 uintptr_t m_flForce = 0x984; // float32
			 uintptr_t m_flRopeForceScale = 0x988; // float32
			 uintptr_t m_flPlayerForce = 0x98c; // float32
			 uintptr_t m_flRampTime = 0x990; // float32
			 uintptr_t m_bFalloff = 0x994; // bool
			 uintptr_t m_bPushPlayer = 0x995; // bool
			 uintptr_t m_bRampDown = 0x996; // bool
			 uintptr_t m_bAddNoise = 0x997; // bool
			 uintptr_t m_RampTimer = 0x998; // CountdownTimer
		}
	}
}
