#include <Windows.h>


namespace xsip {
	namespace worldrenderer {
		namespace NodeData_t {
			 uintptr_t m_nParent = 0x0; // int32
			 uintptr_t m_vOrigin = 0x4; // Vector
			 uintptr_t m_vMinBounds = 0x10; // Vector
			 uintptr_t m_vMaxBounds = 0x1c; // Vector
			 uintptr_t m_flMinimumDistance = 0x28; // float32
			 uintptr_t m_ChildNodeIndices = 0x30; // CUtlVector< int32 >
			 uintptr_t m_worldNodePrefix = 0x48; // CUtlString
		}
	}
}
