#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CRagdollProp {
			 uintptr_t m_ragdoll = 0x9b0; // ragdoll_t
			 uintptr_t m_bStartDisabled = 0x9e8; // bool
			 uintptr_t m_ragPos = 0x9f0; // CNetworkUtlVectorBase< Vector >
			 uintptr_t m_ragAngles = 0xa08; // CNetworkUtlVectorBase< QAngle >
			 uintptr_t m_hRagdollSource = 0xa20; // CHandle< CBaseEntity >
			 uintptr_t m_lastUpdateTickCount = 0xa24; // uint32
			 uintptr_t m_allAsleep = 0xa28; // bool
			 uintptr_t m_bFirstCollisionAfterLaunch = 0xa29; // bool
			 uintptr_t m_hDamageEntity = 0xa2c; // CHandle< CBaseEntity >
			 uintptr_t m_hKiller = 0xa30; // CHandle< CBaseEntity >
			 uintptr_t m_hPhysicsAttacker = 0xa34; // CHandle< CBasePlayerPawn >
			 uintptr_t m_flLastPhysicsInfluenceTime = 0xa38; // GameTime_t
			 uintptr_t m_flFadeOutStartTime = 0xa3c; // GameTime_t
			 uintptr_t m_flFadeTime = 0xa40; // float32
			 uintptr_t m_vecLastOrigin = 0xa44; // Vector
			 uintptr_t m_flAwakeTime = 0xa50; // GameTime_t
			 uintptr_t m_flLastOriginChangeTime = 0xa54; // GameTime_t
			 uintptr_t m_strOriginClassName = 0xa58; // CUtlSymbolLarge
			 uintptr_t m_strSourceClassName = 0xa60; // CUtlSymbolLarge
			 uintptr_t m_bHasBeenPhysgunned = 0xa68; // bool
			 uintptr_t m_bShouldTeleportPhysics = 0xa69; // bool
			 uintptr_t m_flBlendWeight = 0xa6c; // float32
			 uintptr_t m_flDefaultFadeScale = 0xa70; // float32
			 uintptr_t m_ragdollMins = 0xa78; // CUtlVector< Vector >
			 uintptr_t m_ragdollMaxs = 0xa90; // CUtlVector< Vector >
			 uintptr_t m_bShouldDeleteActivationRecord = 0xaa8; // bool
			 uintptr_t m_bValidatePoweredRagdollPose = 0xb08; // bool
		}
	}
}
