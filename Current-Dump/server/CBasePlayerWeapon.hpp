#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBasePlayerWeapon {
			 uintptr_t m_nNextPrimaryAttackTick = 0xd30; // GameTick_t
			 uintptr_t m_flNextPrimaryAttackTickRatio = 0xd34; // float32
			 uintptr_t m_nNextSecondaryAttackTick = 0xd38; // GameTick_t
			 uintptr_t m_flNextSecondaryAttackTickRatio = 0xd3c; // float32
			 uintptr_t m_iClip1 = 0xd40; // int32
			 uintptr_t m_iClip2 = 0xd44; // int32
			 uintptr_t m_pReserveAmmo = 0xd48; // int32[2]
			 uintptr_t m_OnPlayerUse = 0xd50; // CEntityIOOutput
		}
	}
}
