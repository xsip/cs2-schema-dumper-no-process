#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CPropDataComponent {
			 uintptr_t m_flDmgModBullet = 0x10; // float32
			 uintptr_t m_flDmgModClub = 0x14; // float32
			 uintptr_t m_flDmgModExplosive = 0x18; // float32
			 uintptr_t m_flDmgModFire = 0x1c; // float32
			 uintptr_t m_iszPhysicsDamageTableName = 0x20; // CUtlSymbolLarge
			 uintptr_t m_iszBasePropData = 0x28; // CUtlSymbolLarge
			 uintptr_t m_nInteractions = 0x30; // int32
			 uintptr_t m_bSpawnMotionDisabled = 0x34; // bool
			 uintptr_t m_nDisableTakePhysicsDamageSpawnFlag = 0x38; // int32
			 uintptr_t m_nMotionDisabledSpawnFlag = 0x3c; // int32
		}
	}
}
