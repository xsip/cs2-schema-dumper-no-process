#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace CRenderMesh {
			 uintptr_t m_sceneObjects = 0x10; // CUtlLeanVectorFixedGrowable< CSceneObjectData, 1 >
			 uintptr_t m_constraints = 0x78; // CUtlLeanVector< CBaseConstraint* >
			 uintptr_t m_skeleton = 0x88; // CRenderSkeleton
			 uintptr_t m_meshDeformParams = 0x1a8; // DynamicMeshDeformParams_t
			 uintptr_t m_pGroomData = 0x1b8; // CRenderGroom*
		}
	}
}
