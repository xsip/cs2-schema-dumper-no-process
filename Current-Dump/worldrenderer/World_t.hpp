#include <Windows.h>


namespace xsip {
	namespace worldrenderer {
		namespace World_t {
			 uintptr_t m_builderParams = 0x0; // WorldBuilderParams_t
			 uintptr_t m_worldNodes = 0x48; // CUtlVector< NodeData_t >
			 uintptr_t m_worldLightingInfo = 0x60; // BakedLightingInfo_t
			 uintptr_t m_entityLumps = 0x90; // CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > >
		}
	}
}
