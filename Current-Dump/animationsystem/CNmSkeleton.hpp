#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CNmSkeleton {
			 uintptr_t m_ID = 0x0;
			 uintptr_t m_boneIDs = 0x8;
			 uintptr_t m_parentIndices = 0x18;
			 uintptr_t m_parentSpaceReferencePose = 0x30;
			 uintptr_t m_modelSpaceReferencePose = 0x48;
			 uintptr_t m_numBonesToSampleAtLowLOD = 0x60;
			 uintptr_t m_boneMasks = 0x68;
		}
	}
}
