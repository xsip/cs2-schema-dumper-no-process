#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CCachedPose {
			 uintptr_t m_transforms = 0x8; // CUtlVector< CTransform >
			 uintptr_t m_morphWeights = 0x20; // CUtlVector< float32 >
			 uintptr_t m_hSequence = 0x38; // HSequence
			 uintptr_t m_flCycle = 0x3c; // float32
		}
	}
}
