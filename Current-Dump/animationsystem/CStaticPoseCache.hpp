#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CStaticPoseCache {
			 uintptr_t m_poses = 0x10; // CUtlVector< CCachedPose >
			 uintptr_t m_nBoneCount = 0x28; // int32
			 uintptr_t m_nMorphCount = 0x2c; // int32
		}
	}
}
