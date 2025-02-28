#include <Windows.h>


namespace xsip {
	namespace vphysics2 {
		namespace RnHull_t {
			 uintptr_t m_vCentroid = 0x0; // Vector
			 uintptr_t m_flMaxAngularRadius = 0xc; // float32
			 uintptr_t m_Bounds = 0x10; // AABB_t
			 uintptr_t m_vOrthographicAreas = 0x28; // Vector
			 uintptr_t m_MassProperties = 0x34; // matrix3x4_t
			 uintptr_t m_flVolume = 0x64; // float32
			 uintptr_t m_flSurfaceArea = 0x68; // float32
			 uintptr_t m_Vertices = 0x70; // CUtlVector< RnVertex_t >
			 uintptr_t m_VertexPositions = 0x88; // CUtlVector< Vector >
			 uintptr_t m_Edges = 0xa0; // CUtlVector< RnHalfEdge_t >
			 uintptr_t m_Faces = 0xb8; // CUtlVector< RnFace_t >
			 uintptr_t m_FacePlanes = 0xd0; // CUtlVector< RnPlane_t >
			 uintptr_t m_nFlags = 0xe8; // uint32
			 uintptr_t m_pRegionSVM = 0xf0; // CRegionSVM*
		}
	}
}
