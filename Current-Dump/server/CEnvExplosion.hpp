#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CEnvExplosion {
			 uintptr_t m_iMagnitude = 0x790; // int32
			 uintptr_t m_flPlayerDamage = 0x794; // float32
			 uintptr_t m_iRadiusOverride = 0x798; // int32
			 uintptr_t m_flInnerRadius = 0x79c; // float32
			 uintptr_t m_spriteScale = 0x7a0; // int32
			 uintptr_t m_flDamageForce = 0x7a4; // float32
			 uintptr_t m_hInflictor = 0x7a8; // CHandle< CBaseEntity >
			 uintptr_t m_iCustomDamageType = 0x7ac; // DamageTypes_t
			 uintptr_t m_bCreateDebris = 0x7b0; // bool
			 uintptr_t m_iszExplosionType = 0x7b8; // CUtlSymbolLarge
			 uintptr_t m_iszCustomEffectName = 0x7c0; // CUtlSymbolLarge
			 uintptr_t m_iszCustomSoundName = 0x7c8; // CUtlSymbolLarge
			 uintptr_t m_iClassIgnore = 0x7d0; // Class_T
			 uintptr_t m_iClassIgnore2 = 0x7d4; // Class_T
			 uintptr_t m_iszEntityIgnoreName = 0x7d8; // CUtlSymbolLarge
			 uintptr_t m_hEntityIgnore = 0x7e0; // CHandle< CBaseEntity >
		}
	}
}
