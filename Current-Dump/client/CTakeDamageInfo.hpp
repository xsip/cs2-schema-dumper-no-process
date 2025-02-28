#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CTakeDamageInfo {
			 uintptr_t m_vecDamageForce = 0x8; // Vector
			 uintptr_t m_vecDamagePosition = 0x14; // Vector
			 uintptr_t m_vecReportedPosition = 0x20; // Vector
			 uintptr_t m_vecDamageDirection = 0x2c; // Vector
			 uintptr_t m_hInflictor = 0x38; // CHandle< C_BaseEntity >
			 uintptr_t m_hAttacker = 0x3c; // CHandle< C_BaseEntity >
			 uintptr_t m_hAbility = 0x40; // CHandle< C_BaseEntity >
			 uintptr_t m_flDamage = 0x44; // float32
			 uintptr_t m_flTotalledDamage = 0x48; // float32
			 uintptr_t m_flTotalledDamageAbsorbed = 0x4c; // float32
			 uintptr_t m_bitsDamageType = 0x50; // DamageTypes_t
			 uintptr_t m_iDamageCustom = 0x54; // int32
			 uintptr_t m_iAmmoType = 0x58; // AmmoIndex_t
			 uintptr_t m_flOriginalDamage = 0x68; // float32
			 uintptr_t m_bShouldBleed = 0x6c; // bool
			 uintptr_t m_bShouldSpark = 0x6d; // bool
			 uintptr_t m_flDamageAbsorbed = 0x70; // float32
			 uintptr_t m_nDamageFlags = 0x80; // TakeDamageFlags_t
			 uintptr_t m_nNumObjectsPenetrated = 0x88; // int32
			 uintptr_t m_flFriendlyFireDamageReductionRatio = 0x8c; // float32
			 uintptr_t m_hScriptInstance = 0x90; // HSCRIPT
			 uintptr_t m_bInTakeDamageFlow = 0xac; // bool
		}
	}
}
