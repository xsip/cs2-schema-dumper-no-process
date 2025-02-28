#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPhysicsProp {
			 uintptr_t m_MotionEnabled = 0xb60; // CEntityIOOutput
			 uintptr_t m_OnAwakened = 0xb88; // CEntityIOOutput
			 uintptr_t m_OnAwake = 0xbb0; // CEntityIOOutput
			 uintptr_t m_OnAsleep = 0xbd8; // CEntityIOOutput
			 uintptr_t m_OnPlayerUse = 0xc00; // CEntityIOOutput
			 uintptr_t m_OnOutOfWorld = 0xc28; // CEntityIOOutput
			 uintptr_t m_OnPlayerPickup = 0xc50; // CEntityIOOutput
			 uintptr_t m_bForceNavIgnore = 0xc78; // bool
			 uintptr_t m_bNoNavmeshBlocker = 0xc79; // bool
			 uintptr_t m_bForceNpcExclude = 0xc7a; // bool
			 uintptr_t m_massScale = 0xc7c; // float32
			 uintptr_t m_inertiaScale = 0xc80; // float32
			 uintptr_t m_buoyancyScale = 0xc84; // float32
			 uintptr_t m_damageType = 0xc88; // int32
			 uintptr_t m_damageToEnableMotion = 0xc8c; // int32
			 uintptr_t m_flForceToEnableMotion = 0xc90; // float32
			 uintptr_t m_bThrownByPlayer = 0xc94; // bool
			 uintptr_t m_bDroppedByPlayer = 0xc95; // bool
			 uintptr_t m_bTouchedByPlayer = 0xc96; // bool
			 uintptr_t m_bFirstCollisionAfterLaunch = 0xc97; // bool
			 uintptr_t m_iExploitableByPlayer = 0xc98; // int32
			 uintptr_t m_bHasBeenAwakened = 0xc9c; // bool
			 uintptr_t m_bIsOverrideProp = 0xc9d; // bool
			 uintptr_t m_fNextCheckDisableMotionContactsTime = 0xca0; // GameTime_t
			 uintptr_t m_iInitialGlowState = 0xca4; // int32
			 uintptr_t m_nGlowRange = 0xca8; // int32
			 uintptr_t m_nGlowRangeMin = 0xcac; // int32
			 uintptr_t m_glowColor = 0xcb0; // Color
			 uintptr_t m_bShouldAutoConvertBackFromDebris = 0xcb4; // bool
			 uintptr_t m_bMuteImpactEffects = 0xcb5; // bool
			 uintptr_t m_bAcceptDamageFromHeldObjects = 0xcbf; // bool
			 uintptr_t m_bEnableUseOutput = 0xcc0; // bool
			 uintptr_t m_CrateType = 0xcc4; // CPhysicsProp::CrateType_t
			 uintptr_t m_strItemClass = 0xcc8; // CUtlSymbolLarge[4]
			 uintptr_t m_nItemCount = 0xce8; // int32[4]
			 uintptr_t m_bRemovableForAmmoBalancing = 0xcf8; // bool
			 uintptr_t m_bAwake = 0xcf9; // bool
		}
	}
}
