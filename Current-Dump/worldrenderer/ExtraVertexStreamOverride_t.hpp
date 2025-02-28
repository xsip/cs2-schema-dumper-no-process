#include <Windows.h>


namespace xsip {
	namespace worldrenderer {
		namespace ExtraVertexStreamOverride_t {
			 uintptr_t m_nSubSceneObject = 0x4; // uint32
			 uintptr_t m_nDrawCallIndex = 0x8; // uint32
			 uintptr_t m_nAdditionalMeshDrawPrimitiveFlags = 0xc; // MeshDrawPrimitiveFlags_t
			 uintptr_t m_extraBufferBinding = 0x10; // CRenderBufferBinding
		}
	}
}
