#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_BarnLight {
			 uintptr_t m_bEnabled = 0xd28; // bool
			 uintptr_t m_nColorMode = 0xd2c; // int32
			 uintptr_t m_Color = 0xd30; // Color
			 uintptr_t m_flColorTemperature = 0xd34; // float32
			 uintptr_t m_flBrightness = 0xd38; // float32
			 uintptr_t m_flBrightnessScale = 0xd3c; // float32
			 uintptr_t m_nDirectLight = 0xd40; // int32
			 uintptr_t m_nBakedShadowIndex = 0xd44; // int32
			 uintptr_t m_nLuminaireShape = 0xd48; // int32
			 uintptr_t m_flLuminaireSize = 0xd4c; // float32
			 uintptr_t m_flLuminaireAnisotropy = 0xd50; // float32
			 uintptr_t m_LightStyleString = 0xd58; // CUtlString
			 uintptr_t m_flLightStyleStartTime = 0xd60; // GameTime_t
			 uintptr_t m_QueuedLightStyleStrings = 0xd68; // C_NetworkUtlVectorBase< CUtlString >
			 uintptr_t m_LightStyleEvents = 0xd80; // C_NetworkUtlVectorBase< CUtlString >
			 uintptr_t m_LightStyleTargets = 0xd98; // C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > >
			 uintptr_t m_StyleEvent = 0xdb0; // CEntityIOOutput[4]
			 uintptr_t m_hLightCookie = 0xe50; // CStrongHandle< InfoForResourceTypeCTextureBase >
			 uintptr_t m_flShape = 0xe58; // float32
			 uintptr_t m_flSoftX = 0xe5c; // float32
			 uintptr_t m_flSoftY = 0xe60; // float32
			 uintptr_t m_flSkirt = 0xe64; // float32
			 uintptr_t m_flSkirtNear = 0xe68; // float32
			 uintptr_t m_vSizeParams = 0xe6c; // Vector
			 uintptr_t m_flRange = 0xe78; // float32
			 uintptr_t m_vShear = 0xe7c; // Vector
			 uintptr_t m_nBakeSpecularToCubemaps = 0xe88; // int32
			 uintptr_t m_vBakeSpecularToCubemapsSize = 0xe8c; // Vector
			 uintptr_t m_nCastShadows = 0xe98; // int32
			 uintptr_t m_nShadowMapSize = 0xe9c; // int32
			 uintptr_t m_nShadowPriority = 0xea0; // int32
			 uintptr_t m_bContactShadow = 0xea4; // bool
			 uintptr_t m_nBounceLight = 0xea8; // int32
			 uintptr_t m_flBounceScale = 0xeac; // float32
			 uintptr_t m_flMinRoughness = 0xeb0; // float32
			 uintptr_t m_vAlternateColor = 0xeb4; // Vector
			 uintptr_t m_fAlternateColorBrightness = 0xec0; // float32
			 uintptr_t m_nFog = 0xec4; // int32
			 uintptr_t m_flFogStrength = 0xec8; // float32
			 uintptr_t m_nFogShadows = 0xecc; // int32
			 uintptr_t m_flFogScale = 0xed0; // float32
			 uintptr_t m_bFogMixedShadows = 0xed4; // bool
			 uintptr_t m_flFadeSizeStart = 0xed8; // float32
			 uintptr_t m_flFadeSizeEnd = 0xedc; // float32
			 uintptr_t m_flShadowFadeSizeStart = 0xee0; // float32
			 uintptr_t m_flShadowFadeSizeEnd = 0xee4; // float32
			 uintptr_t m_bPrecomputedFieldsValid = 0xee8; // bool
			 uintptr_t m_vPrecomputedBoundsMins = 0xeec; // Vector
			 uintptr_t m_vPrecomputedBoundsMaxs = 0xef8; // Vector
			 uintptr_t m_vPrecomputedOBBOrigin = 0xf04; // Vector
			 uintptr_t m_vPrecomputedOBBAngles = 0xf10; // QAngle
			 uintptr_t m_vPrecomputedOBBExtent = 0xf1c; // Vector
			 uintptr_t m_nPrecomputedSubFrusta = 0xf28; // int32
			 uintptr_t m_vPrecomputedOBBOrigin0 = 0xf2c; // Vector
			 uintptr_t m_vPrecomputedOBBAngles0 = 0xf38; // QAngle
			 uintptr_t m_vPrecomputedOBBExtent0 = 0xf44; // Vector
			 uintptr_t m_vPrecomputedOBBOrigin1 = 0xf50; // Vector
			 uintptr_t m_vPrecomputedOBBAngles1 = 0xf5c; // QAngle
			 uintptr_t m_vPrecomputedOBBExtent1 = 0xf68; // Vector
			 uintptr_t m_vPrecomputedOBBOrigin2 = 0xf74; // Vector
			 uintptr_t m_vPrecomputedOBBAngles2 = 0xf80; // QAngle
			 uintptr_t m_vPrecomputedOBBExtent2 = 0xf8c; // Vector
			 uintptr_t m_vPrecomputedOBBOrigin3 = 0xf98; // Vector
			 uintptr_t m_vPrecomputedOBBAngles3 = 0xfa4; // QAngle
			 uintptr_t m_vPrecomputedOBBExtent3 = 0xfb0; // Vector
			 uintptr_t m_vPrecomputedOBBOrigin4 = 0xfbc; // Vector
			 uintptr_t m_vPrecomputedOBBAngles4 = 0xfc8; // QAngle
			 uintptr_t m_vPrecomputedOBBExtent4 = 0xfd4; // Vector
			 uintptr_t m_vPrecomputedOBBOrigin5 = 0xfe0; // Vector
			 uintptr_t m_vPrecomputedOBBAngles5 = 0xfec; // QAngle
			 uintptr_t m_vPrecomputedOBBExtent5 = 0xff8; // Vector
			 uintptr_t m_bInitialBoneSetup = 0x1048; // bool
			 uintptr_t m_VisClusters = 0x1050; // C_NetworkUtlVectorBase< uint16 >
		}
	}
}
