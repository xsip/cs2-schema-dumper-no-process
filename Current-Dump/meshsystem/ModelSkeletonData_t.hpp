#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace ModelSkeletonData_t {
			 uintptr_t m_boneName = 0x0; // CUtlVector< CUtlString >
			 uintptr_t m_nParent = 0x18; // CUtlVector< int16 >
			 uintptr_t m_boneSphere = 0x30; // CUtlVector< float32 >
			 uintptr_t m_nFlag = 0x48; // CUtlVector< uint32 >
			 uintptr_t m_bonePosParent = 0x60; // CUtlVector< Vector >
			 uintptr_t m_boneRotParent = 0x78; // CUtlVector< QuaternionStorage >
			 uintptr_t m_boneScaleParent = 0x90; // CUtlVector< float32 >
		}
	}
}
