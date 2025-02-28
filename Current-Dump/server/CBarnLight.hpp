#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBarnLight {
			 uintptr_t m_bEnabled = 0x790; // bool
			 uintptr_t m_nColorMode = 0x794; // int32
			 uintptr_t m_Color = 0x798; // Color
			 uintptr_t m_flColorTemperature = 0x79c; // float32
			 uintptr_t m_flBrightness = 0x7a0; // float32
			 uintptr_t m_flBrightnessScale = 0x7a4; // float32
			 uintptr_t m_nDirectLight = 0x7a8; // int32
			 uintptr_t m_nBakedShadowIndex = 0x7ac; // int32
			 uintptr_t m_nLuminaireShape = 0x7b0; // int32
			 uintptr_t m_flLuminaireSize = 0x7b4; // float32
			 uintptr_t m_flLuminaireAnisotropy = 0x7b8; // float32
			 uintptr_t m_LightStyleString = 0x7c0; // CUtlString
			 uintptr_t m_flLightStyleStartTime = 0x7c8; // GameTime_t
			 uintptr_t m_QueuedLightStyleStrings = 0x7d0; // CNetworkUtlVectorBase< CUtlString >
			 uintptr_t m_LightStyleEvents = 0x7e8; // CNetworkUtlVectorBase< CUtlString >
			 uintptr_t m_LightStyleTargets = 0x800; // CNetworkUtlVectorBase< CHandle< CBaseModelEntity > >
			 uintptr_t m_StyleEvent = 0x818; // CEntityIOOutput[4]
			 uintptr_t m_hLightCookie = 0x8d8; // CStrongHandle< InfoForResourceTypeCTextureBase >
			 uintptr_t m_flShape = 0x8e0; // float32
			 uintptr_t m_flSoftX = 0x8e4; // float32
			 uintptr_t m_flSoftY = 0x8e8; // float32
			 uintptr_t m_flSkirt = 0x8ec; // float32
			 uintptr_t m_flSkirtNear = 0x8f0; // float32
			 uintptr_t m_vSizeParams = 0x8f4; // Vector
			 uintptr_t m_flRange = 0x900; // float32
			 uintptr_t m_vShear = 0x904; // Vector
			 uintptr_t m_nBakeSpecularToCubemaps = 0x910; // int32
			 uintptr_t m_vBakeSpecularToCubemapsSize = 0x914; // Vector
			 uintptr_t m_nCastShadows = 0x920; // int32
			 uintptr_t m_nShadowMapSize = 0x924; // int32
			 uintptr_t m_nShadowPriority = 0x928; // int32
			 uintptr_t m_bContactShadow = 0x92c; // bool
			 uintptr_t m_nBounceLight = 0x930; // int32
			 uintptr_t m_flBounceScale = 0x934; // float32
			 uintptr_t m_flMinRoughness = 0x938; // float32
			 uintptr_t m_vAlternateColor = 0x93c; // Vector
			 uintptr_t m_fAlternateColorBrightness = 0x948; // float32
			 uintptr_t m_nFog = 0x94c; // int32
			 uintptr_t m_flFogStrength = 0x950; // float32
			 uintptr_t m_nFogShadows = 0x954; // int32
			 uintptr_t m_flFogScale = 0x958; // float32
			 uintptr_t m_bFogMixedShadows = 0x95c; // bool
			 uintptr_t m_flFadeSizeStart = 0x960; // float32
			 uintptr_t m_flFadeSizeEnd = 0x964; // float32
			 uintptr_t m_flShadowFadeSizeStart = 0x968; // float32
			 uintptr_t m_flShadowFadeSizeEnd = 0x96c; // float32
			 uintptr_t m_bPrecomputedFieldsValid = 0x970; // bool
			 uintptr_t m_vPrecomputedBoundsMins = 0x974; // Vector
			 uintptr_t m_vPrecomputedBoundsMaxs = 0x980; // Vector
			 uintptr_t m_vPrecomputedOBBOrigin = 0x98c; // Vector
			 uintptr_t m_vPrecomputedOBBAngles = 0x998; // QAngle
			 uintptr_t m_vPrecomputedOBBExtent = 0x9a4; // Vector
			 uintptr_t m_nPrecomputedSubFrusta = 0x9b0; // int32
			 uintptr_t m_vPrecomputedOBBOrigin0 = 0x9b4; // Vector
			 uintptr_t m_vPrecomputedOBBAngles0 = 0x9c0; // QAngle
			 uintptr_t m_vPrecomputedOBBExtent0 = 0x9cc; // Vector
			 uintptr_t m_vPrecomputedOBBOrigin1 = 0x9d8; // Vector
			 uintptr_t m_vPrecomputedOBBAngles1 = 0x9e4; // QAngle
			 uintptr_t m_vPrecomputedOBBExtent1 = 0x9f0; // Vector
			 uintptr_t m_vPrecomputedOBBOrigin2 = 0x9fc; // Vector
			 uintptr_t m_vPrecomputedOBBAngles2 = 0xa08; // QAngle
			 uintptr_t m_vPrecomputedOBBExtent2 = 0xa14; // Vector
			 uintptr_t m_vPrecomputedOBBOrigin3 = 0xa20; // Vector
			 uintptr_t m_vPrecomputedOBBAngles3 = 0xa2c; // QAngle
			 uintptr_t m_vPrecomputedOBBExtent3 = 0xa38; // Vector
			 uintptr_t m_vPrecomputedOBBOrigin4 = 0xa44; // Vector
			 uintptr_t m_vPrecomputedOBBAngles4 = 0xa50; // QAngle
			 uintptr_t m_vPrecomputedOBBExtent4 = 0xa5c; // Vector
			 uintptr_t m_vPrecomputedOBBOrigin5 = 0xa68; // Vector
			 uintptr_t m_vPrecomputedOBBAngles5 = 0xa74; // QAngle
			 uintptr_t m_vPrecomputedOBBExtent5 = 0xa80; // Vector
			 uintptr_t m_bPvsModifyEntity = 0xa8c; // bool
			 uintptr_t m_VisClusters = 0xa90; // CNetworkUtlVectorBase< uint16 >
		}
	}
}
