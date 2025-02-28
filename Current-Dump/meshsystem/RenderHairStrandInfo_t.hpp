#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace RenderHairStrandInfo_t {
			 uintptr_t m_nGuideHairIndices_nSurfaceTriIndex = 0x0; // uint32[2]
			 uintptr_t m_vGuideBary_vBaseBary = 0x8; // uint16[4]
			 uintptr_t m_vRootOffset_flLengthScale = 0x10; // uint16[4]
			 uintptr_t m_nPackedBaseUv = 0x18; // uint16[2]
			 uintptr_t m_nPackedSurfaceNormalOs = 0x1c; // uint32
			 uintptr_t m_nPackedSurfaceTangentOs = 0x20; // uint32
		}
	}
}
