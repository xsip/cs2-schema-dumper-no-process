#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CTakeDamageInfo {
			 uintptr_t m_vecDamageForce = 0x8;
			 uintptr_t m_vecDamagePosition = 0x14;
			 uintptr_t m_vecReportedPosition = 0x20;
			 uintptr_t m_vecDamageDirection = 0x2c;
			 uintptr_t m_hInflictor = 0x38;
			 uintptr_t m_hAttacker = 0x3c;
			 uintptr_t m_hAbility = 0x40;
			 uintptr_t m_flDamage = 0x44;
			 uintptr_t m_flTotalledDamage = 0x48;
			 uintptr_t m_flTotalledDamageAbsorbed = 0x4c;
			 uintptr_t m_bitsDamageType = 0x50;
			 uintptr_t m_iDamageCustom = 0x54;
			 uintptr_t m_iAmmoType = 0x58;
			 uintptr_t m_flOriginalDamage = 0x68;
			 uintptr_t m_bShouldBleed = 0x6c;
			 uintptr_t m_bShouldSpark = 0x6d;
			 uintptr_t m_flDamageAbsorbed = 0x70;
			 uintptr_t m_nDamageFlags = 0x80;
			 uintptr_t m_nNumObjectsPenetrated = 0x88;
			 uintptr_t m_flFriendlyFireDamageReductionRatio = 0x8c;
			 uintptr_t m_hScriptInstance = 0x90;
			 uintptr_t m_bInTakeDamageFlow = 0xac;
		}
	}
}
