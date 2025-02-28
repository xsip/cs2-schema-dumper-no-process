#include <Windows.h>


namespace xsip {
	namespace vphysics2 {
		namespace RnMesh_t {
			 uintptr_t m_vMin = 0x0; // Vector
			 uintptr_t m_vMax = 0xc; // Vector
			 uintptr_t m_Nodes = 0x18; // CUtlVector< RnNode_t >
			 uintptr_t m_Vertices = 0x30; // CUtlVectorSIMDPaddedVector
			 uintptr_t m_Triangles = 0x48; // CUtlVector< RnTriangle_t >
			 uintptr_t m_Wings = 0x60; // CUtlVector< RnWing_t >
			 uintptr_t m_Materials = 0x78; // CUtlVector< uint8 >
			 uintptr_t m_vOrthographicAreas = 0x90; // Vector
			 uintptr_t m_nFlags = 0x9c; // uint32
			 uintptr_t m_nDebugFlags = 0xa0; // uint32
		}
	}
}
