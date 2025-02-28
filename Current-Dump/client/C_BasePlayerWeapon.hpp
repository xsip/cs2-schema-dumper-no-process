#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_BasePlayerWeapon {
			 uintptr_t m_nNextPrimaryAttackTick = 0x1668; // GameTick_t
			 uintptr_t m_flNextPrimaryAttackTickRatio = 0x166c; // float32
			 uintptr_t m_nNextSecondaryAttackTick = 0x1670; // GameTick_t
			 uintptr_t m_flNextSecondaryAttackTickRatio = 0x1674; // float32
			 uintptr_t m_iClip1 = 0x1678; // int32
			 uintptr_t m_iClip2 = 0x167c; // int32
			 uintptr_t m_pReserveAmmo = 0x1680; // int32[2]
		}
	}
}
