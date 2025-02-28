#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace RenderSkeletonBone_t {
			 uintptr_t m_boneName = 0x0; // CUtlString
			 uintptr_t m_parentName = 0x8; // CUtlString
			 uintptr_t m_invBindPose = 0x10; // matrix3x4_t
			 uintptr_t m_bbox = 0x40; // SkeletonBoneBounds_t
			 uintptr_t m_flSphereRadius = 0x58; // float32
		}
	}
}
