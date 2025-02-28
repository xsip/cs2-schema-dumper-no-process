#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace CRenderSkeleton {
			 uintptr_t m_bones = 0x0; // CUtlVector< RenderSkeletonBone_t >
			 uintptr_t m_boneParents = 0x30; // CUtlVector< int32 >
			 uintptr_t m_nBoneWeightCount = 0x48; // int32
		}
	}
}
