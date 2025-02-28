#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBaseModelEntity {
			 uintptr_t m_CRenderComponent = 0x4e0; // CRenderComponent*
			 uintptr_t m_CHitboxComponent = 0x4e8; // CHitboxComponent
			 uintptr_t m_nDestructiblePartInitialStateDestructed0 = 0x510; // HitGroup_t
			 uintptr_t m_nDestructiblePartInitialStateDestructed1 = 0x514; // HitGroup_t
			 uintptr_t m_nDestructiblePartInitialStateDestructed2 = 0x518; // HitGroup_t
			 uintptr_t m_nDestructiblePartInitialStateDestructed3 = 0x51c; // HitGroup_t
			 uintptr_t m_nDestructiblePartInitialStateDestructed4 = 0x520; // HitGroup_t
			 uintptr_t m_nLastHitDestructiblePartIndex = 0x524; // int32
			 uintptr_t m_LastHitGroup = 0x550; // HitGroup_t
			 uintptr_t m_flDissolveStartTime = 0x554; // GameTime_t
			 uintptr_t m_OnIgnite = 0x558; // CEntityIOOutput
			 uintptr_t m_nRenderMode = 0x580; // RenderMode_t
			 uintptr_t m_nRenderFX = 0x581; // RenderFx_t
			 uintptr_t m_bAllowFadeInView = 0x582; // bool
			 uintptr_t m_clrRender = 0x5a0; // Color
			 uintptr_t m_vecRenderAttributes = 0x5a8; // CUtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t >
			 uintptr_t m_bRenderToCubemaps = 0x5f8; // bool
			 uintptr_t m_bNoInterpolate = 0x5f9; // bool
			 uintptr_t m_Collision = 0x600; // CCollisionProperty
			 uintptr_t m_Glow = 0x6b0; // CGlowProperty
			 uintptr_t m_flGlowBackfaceMult = 0x708; // float32
			 uintptr_t m_fadeMinDist = 0x70c; // float32
			 uintptr_t m_fadeMaxDist = 0x710; // float32
			 uintptr_t m_flFadeScale = 0x714; // float32
			 uintptr_t m_flShadowStrength = 0x718; // float32
			 uintptr_t m_nObjectCulling = 0x71c; // uint8
			 uintptr_t m_nAddDecal = 0x720; // int32
			 uintptr_t m_vDecalPosition = 0x724; // Vector
			 uintptr_t m_vDecalForwardAxis = 0x730; // Vector
			 uintptr_t m_flDecalHealBloodRate = 0x73c; // float32
			 uintptr_t m_flDecalHealHeightRate = 0x740; // float32
			 uintptr_t m_ConfigEntitiesToPropagateMaterialDecalsTo = 0x748; // CNetworkUtlVectorBase< CHandle< CBaseModelEntity > >
			 uintptr_t m_vecViewOffset = 0x760; // CNetworkViewOffsetVector
		}
	}
}
