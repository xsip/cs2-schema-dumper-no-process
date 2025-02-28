#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CItemGeneric {
			 uintptr_t m_bHasTriggerRadius = 0xa88; // bool
			 uintptr_t m_bHasPickupRadius = 0xa89; // bool
			 uintptr_t m_flPickupRadiusSqr = 0xa8c; // float32
			 uintptr_t m_flTriggerRadiusSqr = 0xa90; // float32
			 uintptr_t m_flLastPickupCheck = 0xa94; // GameTime_t
			 uintptr_t m_bPlayerCounterListenerAdded = 0xa98; // bool
			 uintptr_t m_bPlayerInTriggerRadius = 0xa99; // bool
			 uintptr_t m_hSpawnParticleEffect = 0xaa0; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
			 uintptr_t m_pAmbientSoundEffect = 0xaa8; // CUtlSymbolLarge
			 uintptr_t m_bAutoStartAmbientSound = 0xab0; // bool
			 uintptr_t m_pSpawnScriptFunction = 0xab8; // CUtlSymbolLarge
			 uintptr_t m_hPickupParticleEffect = 0xac0; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
			 uintptr_t m_pPickupSoundEffect = 0xac8; // CUtlSymbolLarge
			 uintptr_t m_pPickupScriptFunction = 0xad0; // CUtlSymbolLarge
			 uintptr_t m_hTimeoutParticleEffect = 0xad8; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
			 uintptr_t m_pTimeoutSoundEffect = 0xae0; // CUtlSymbolLarge
			 uintptr_t m_pTimeoutScriptFunction = 0xae8; // CUtlSymbolLarge
			 uintptr_t m_pPickupFilterName = 0xaf0; // CUtlSymbolLarge
			 uintptr_t m_hPickupFilter = 0xaf8; // CHandle< CBaseFilter >
			 uintptr_t m_OnPickup = 0xb00; // CEntityIOOutput
			 uintptr_t m_OnTimeout = 0xb28; // CEntityIOOutput
			 uintptr_t m_OnTriggerStartTouch = 0xb50; // CEntityIOOutput
			 uintptr_t m_OnTriggerTouch = 0xb78; // CEntityIOOutput
			 uintptr_t m_OnTriggerEndTouch = 0xba0; // CEntityIOOutput
			 uintptr_t m_pAllowPickupScriptFunction = 0xbc8; // CUtlSymbolLarge
			 uintptr_t m_flPickupRadius = 0xbd0; // float32
			 uintptr_t m_flTriggerRadius = 0xbd4; // float32
			 uintptr_t m_pTriggerSoundEffect = 0xbd8; // CUtlSymbolLarge
			 uintptr_t m_bGlowWhenInTrigger = 0xbe0; // bool
			 uintptr_t m_glowColor = 0xbe1; // Color
			 uintptr_t m_bUseable = 0xbe5; // bool
			 uintptr_t m_hTriggerHelper = 0xbe8; // CHandle< CItemGenericTriggerHelper >
		}
	}
}
