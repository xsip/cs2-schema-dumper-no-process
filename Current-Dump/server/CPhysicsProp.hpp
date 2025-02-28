#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPhysicsProp {
			 uintptr_t m_MotionEnabled = 0xb60;
			 uintptr_t m_OnAwakened = 0xb88;
			 uintptr_t m_OnAwake = 0xbb0;
			 uintptr_t m_OnAsleep = 0xbd8;
			 uintptr_t m_OnPlayerUse = 0xc00;
			 uintptr_t m_OnOutOfWorld = 0xc28;
			 uintptr_t m_OnPlayerPickup = 0xc50;
			 uintptr_t m_bForceNavIgnore = 0xc78;
			 uintptr_t m_bNoNavmeshBlocker = 0xc79;
			 uintptr_t m_bForceNpcExclude = 0xc7a;
			 uintptr_t m_massScale = 0xc7c;
			 uintptr_t m_inertiaScale = 0xc80;
			 uintptr_t m_buoyancyScale = 0xc84;
			 uintptr_t m_damageType = 0xc88;
			 uintptr_t m_damageToEnableMotion = 0xc8c;
			 uintptr_t m_flForceToEnableMotion = 0xc90;
			 uintptr_t m_bThrownByPlayer = 0xc94;
			 uintptr_t m_bDroppedByPlayer = 0xc95;
			 uintptr_t m_bTouchedByPlayer = 0xc96;
			 uintptr_t m_bFirstCollisionAfterLaunch = 0xc97;
			 uintptr_t m_iExploitableByPlayer = 0xc98;
			 uintptr_t m_bHasBeenAwakened = 0xc9c;
			 uintptr_t m_bIsOverrideProp = 0xc9d;
			 uintptr_t m_fNextCheckDisableMotionContactsTime = 0xca0;
			 uintptr_t m_iInitialGlowState = 0xca4;
			 uintptr_t m_nGlowRange = 0xca8;
			 uintptr_t m_nGlowRangeMin = 0xcac;
			 uintptr_t m_glowColor = 0xcb0;
			 uintptr_t m_bShouldAutoConvertBackFromDebris = 0xcb4;
			 uintptr_t m_bMuteImpactEffects = 0xcb5;
			 uintptr_t m_bAcceptDamageFromHeldObjects = 0xcbf;
			 uintptr_t m_bEnableUseOutput = 0xcc0;
			 uintptr_t m_CrateType = 0xcc4;
			 uintptr_t m_strItemClass = 0xcc8;
			 uintptr_t m_nItemCount = 0xce8;
			 uintptr_t m_bRemovableForAmmoBalancing = 0xcf8;
			 uintptr_t m_bAwake = 0xcf9;
		}
	}
}
