#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace CMaterialDrawDescriptor {
			 uintptr_t m_flUvDensity = 0x0; // float32
			 uintptr_t m_vTintColor = 0x4; // Vector
			 uintptr_t m_flAlpha = 0x10; // float32
			 uintptr_t m_nNumMeshlets = 0x16; // uint16
			 uintptr_t m_nFirstMeshlet = 0x1c; // uint32
			 uintptr_t m_nPrimitiveType = 0x20; // RenderPrimitiveType_t
			 uintptr_t m_nBaseVertex = 0x24; // int32
			 uintptr_t m_nVertexCount = 0x28; // int32
			 uintptr_t m_nStartIndex = 0x2c; // int32
			 uintptr_t m_nIndexCount = 0x30; // int32
			 uintptr_t m_indexBuffer = 0x98; // CRenderBufferBinding
			 uintptr_t m_material = 0xc8; // CStrongHandle< InfoForResourceTypeIMaterial2 >
		}
	}
}
