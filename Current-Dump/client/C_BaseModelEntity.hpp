#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_BaseModelEntity {
			 uintptr_t m_CRenderComponent = 0xa50; // CRenderComponent*
			 uintptr_t m_CHitboxComponent = 0xa58; // CHitboxComponent
			 uintptr_t m_LastHitGroup = 0xa80; // HitGroup_t
			 uintptr_t m_bInitModelEffects = 0xaa8; // bool
			 uintptr_t m_bIsStaticProp = 0xaa9; // bool
			 uintptr_t m_nLastAddDecal = 0xaac; // int32
			 uintptr_t m_nDecalsAdded = 0xab0; // int32
			 uintptr_t m_iOldHealth = 0xab4; // int32
			 uintptr_t m_nRenderMode = 0xab8; // RenderMode_t
			 uintptr_t m_nRenderFX = 0xab9; // RenderFx_t
			 uintptr_t m_bAllowFadeInView = 0xaba; // bool
			 uintptr_t m_clrRender = 0xad8; // Color
			 uintptr_t m_vecRenderAttributes = 0xae0; // C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t >
			 uintptr_t m_bRenderToCubemaps = 0xb48; // bool
			 uintptr_t m_bNoInterpolate = 0xb49; // bool
			 uintptr_t m_Collision = 0xb50; // CCollisionProperty
			 uintptr_t m_Glow = 0xc00; // CGlowProperty
			 uintptr_t m_flGlowBackfaceMult = 0xc58; // float32
			 uintptr_t m_fadeMinDist = 0xc5c; // float32
			 uintptr_t m_fadeMaxDist = 0xc60; // float32
			 uintptr_t m_flFadeScale = 0xc64; // float32
			 uintptr_t m_flShadowStrength = 0xc68; // float32
			 uintptr_t m_nObjectCulling = 0xc6c; // uint8
			 uintptr_t m_nAddDecal = 0xc70; // int32
			 uintptr_t m_vDecalPosition = 0xc74; // Vector
			 uintptr_t m_vDecalForwardAxis = 0xc80; // Vector
			 uintptr_t m_flDecalHealBloodRate = 0xc8c; // float32
			 uintptr_t m_flDecalHealHeightRate = 0xc90; // float32
			 uintptr_t m_ConfigEntitiesToPropagateMaterialDecalsTo = 0xc98; // C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > >
			 uintptr_t m_vecViewOffset = 0xcb0; // CNetworkViewOffsetVector
			 uintptr_t m_pClientAlphaProperty = 0xce0; // CClientAlphaProperty*
			 uintptr_t m_ClientOverrideTint = 0xce8; // Color
			 uintptr_t m_bUseClientOverrideTint = 0xcec; // bool
		}
	}
}
