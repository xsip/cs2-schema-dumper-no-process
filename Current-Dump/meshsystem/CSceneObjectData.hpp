#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace CSceneObjectData {
			 uintptr_t m_vMinBounds = 0x0; // Vector
			 uintptr_t m_vMaxBounds = 0xc; // Vector
			 uintptr_t m_drawCalls = 0x18; // CUtlLeanVector< CMaterialDrawDescriptor >
			 uintptr_t m_drawBounds = 0x28; // CUtlLeanVector< AABB_t >
			 uintptr_t m_meshlets = 0x38; // CUtlLeanVector< CMeshletDescriptor >
			 uintptr_t m_vTintColor = 0x48; // Vector4D
		}
	}
}
