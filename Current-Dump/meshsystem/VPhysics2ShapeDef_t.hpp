#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace VPhysics2ShapeDef_t {
			 uintptr_t m_spheres = 0x0; // CUtlVector< RnSphereDesc_t >
			 uintptr_t m_capsules = 0x18; // CUtlVector< RnCapsuleDesc_t >
			 uintptr_t m_hulls = 0x30; // CUtlVector< RnHullDesc_t >
			 uintptr_t m_meshes = 0x48; // CUtlVector< RnMeshDesc_t >
			 uintptr_t m_CollisionAttributeIndices = 0x60; // CUtlVector< uint16 >
		}
	}
}
