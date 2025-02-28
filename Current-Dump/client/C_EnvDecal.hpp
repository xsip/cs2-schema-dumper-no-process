#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_EnvDecal {
			 uintptr_t m_hDecalMaterial = 0xd28; // CStrongHandle< InfoForResourceTypeIMaterial2 >
			 uintptr_t m_flWidth = 0xd30; // float32
			 uintptr_t m_flHeight = 0xd34; // float32
			 uintptr_t m_flDepth = 0xd38; // float32
			 uintptr_t m_nRenderOrder = 0xd3c; // uint32
			 uintptr_t m_bProjectOnWorld = 0xd40; // bool
			 uintptr_t m_bProjectOnCharacters = 0xd41; // bool
			 uintptr_t m_bProjectOnWater = 0xd42; // bool
			 uintptr_t m_flDepthSortBias = 0xd44; // float32
		}
	}
}
