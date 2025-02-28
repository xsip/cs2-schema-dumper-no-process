#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CRagdollProp {
			 uintptr_t m_ragdoll = 0x9b0;
			 uintptr_t m_bStartDisabled = 0x9e8;
			 uintptr_t m_ragPos = 0x9f0;
			 uintptr_t m_ragAngles = 0xa08;
			 uintptr_t m_hRagdollSource = 0xa20;
			 uintptr_t m_lastUpdateTickCount = 0xa24;
			 uintptr_t m_allAsleep = 0xa28;
			 uintptr_t m_bFirstCollisionAfterLaunch = 0xa29;
			 uintptr_t m_hDamageEntity = 0xa2c;
			 uintptr_t m_hKiller = 0xa30;
			 uintptr_t m_hPhysicsAttacker = 0xa34;
			 uintptr_t m_flLastPhysicsInfluenceTime = 0xa38;
			 uintptr_t m_flFadeOutStartTime = 0xa3c;
			 uintptr_t m_flFadeTime = 0xa40;
			 uintptr_t m_vecLastOrigin = 0xa44;
			 uintptr_t m_flAwakeTime = 0xa50;
			 uintptr_t m_flLastOriginChangeTime = 0xa54;
			 uintptr_t m_strOriginClassName = 0xa58;
			 uintptr_t m_strSourceClassName = 0xa60;
			 uintptr_t m_bHasBeenPhysgunned = 0xa68;
			 uintptr_t m_bShouldTeleportPhysics = 0xa69;
			 uintptr_t m_flBlendWeight = 0xa6c;
			 uintptr_t m_flDefaultFadeScale = 0xa70;
			 uintptr_t m_ragdollMins = 0xa78;
			 uintptr_t m_ragdollMaxs = 0xa90;
			 uintptr_t m_bShouldDeleteActivationRecord = 0xaa8;
			 uintptr_t m_bValidatePoweredRagdollPose = 0xb08;
		}
	}
}
