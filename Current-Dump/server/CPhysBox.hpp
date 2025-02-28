#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPhysBox {
			 uintptr_t m_damageType = 0x868; // int32
			 uintptr_t m_damageToEnableMotion = 0x86c; // int32
			 uintptr_t m_flForceToEnableMotion = 0x870; // float32
			 uintptr_t m_angPreferredCarryAngles = 0x874; // QAngle
			 uintptr_t m_bNotSolidToWorld = 0x880; // bool
			 uintptr_t m_bEnableUseOutput = 0x881; // bool
			 uintptr_t m_iExploitableByPlayer = 0x884; // int32
			 uintptr_t m_flTouchOutputPerEntityDelay = 0x888; // float32
			 uintptr_t m_OnDamaged = 0x890; // CEntityIOOutput
			 uintptr_t m_OnAwakened = 0x8b8; // CEntityIOOutput
			 uintptr_t m_OnMotionEnabled = 0x8e0; // CEntityIOOutput
			 uintptr_t m_OnPlayerUse = 0x908; // CEntityIOOutput
			 uintptr_t m_OnStartTouch = 0x930; // CEntityIOOutput
			 uintptr_t m_hCarryingPlayer = 0x958; // CHandle< CBasePlayerPawn >
		}
	}
}
