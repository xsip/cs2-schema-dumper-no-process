#include <Windows.h>


namespace xsip {
	namespace worldrenderer {
		namespace BakedLightingInfo_t {
			 uintptr_t m_nLightmapVersionNumber = 0x0; // uint32
			 uintptr_t m_nLightmapGameVersionNumber = 0x4; // uint32
			 uintptr_t m_vLightmapUvScale = 0x8; // Vector2D
			 uintptr_t m_bHasLightmaps = 0x10; // bool
			 uintptr_t m_bBakedShadowsGamma20 = 0x11; // bool
			 uintptr_t m_bCompressionEnabled = 0x12; // bool
			 uintptr_t m_nChartPackIterations = 0x13; // uint8
			 uintptr_t m_nVradQuality = 0x14; // uint8
			 uintptr_t m_lightMaps = 0x18; // CUtlVector< CStrongHandle< InfoForResourceTypeCTextureBase > >
		}
	}
}
