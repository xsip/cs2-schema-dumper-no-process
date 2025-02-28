#include <Windows.h>


namespace xsip {
	namespace worldrenderer {
		namespace PermEntityLumpData_t {
			 uintptr_t m_name = 0x8; // CUtlString
			 uintptr_t m_childLumps = 0x10; // CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > >
			 uintptr_t m_entityKeyValues = 0x28; // CUtlLeanVector< EntityKeyValueData_t >
		}
	}
}
