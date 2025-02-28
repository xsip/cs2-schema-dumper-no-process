#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace SkeletonAnimCapture_t {
			 uintptr_t m_nEntIndex = 0x0; // CEntityIndex
			 uintptr_t m_nEntParent = 0x4; // CEntityIndex
			 uintptr_t m_ImportedCollision = 0x8; // CUtlVector< CEntityIndex >
			 uintptr_t m_ModelName = 0x20; // CUtlString
			 uintptr_t m_CaptureName = 0x28; // CUtlString
			 uintptr_t m_ModelBindPose = 0x30; // CUtlVector< SkeletonAnimCapture_t::Bone_t >
			 uintptr_t m_FeModelInitPose = 0x48; // CUtlVector< SkeletonAnimCapture_t::Bone_t >
			 uintptr_t m_nFlexControllers = 0x60; // int32
			 uintptr_t m_bPredicted = 0x64; // bool
			 uintptr_t m_Frames = 0xa8; // CUtlVector< SkeletonAnimCapture_t::Frame_t >
		}
	}
}
