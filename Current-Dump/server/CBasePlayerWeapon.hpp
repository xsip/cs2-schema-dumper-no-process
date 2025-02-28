#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBasePlayerWeapon {
			 uintptr_t m_nNextPrimaryAttackTick = 0xd30;
			 uintptr_t m_flNextPrimaryAttackTickRatio = 0xd34;
			 uintptr_t m_nNextSecondaryAttackTick = 0xd38;
			 uintptr_t m_flNextSecondaryAttackTickRatio = 0xd3c;
			 uintptr_t m_iClip1 = 0xd40;
			 uintptr_t m_iClip2 = 0xd44;
			 uintptr_t m_pReserveAmmo = 0xd48;
			 uintptr_t m_OnPlayerUse = 0xd50;
		}
	}
}
