#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CNmSkeleton {
			 uintptr_t m_ID = 0x0; // CGlobalSymbol
			 uintptr_t m_boneIDs = 0x8; // CUtlLeanVector< CGlobalSymbol >
			 uintptr_t m_parentIndices = 0x18; // CUtlVector< int32 >
			 uintptr_t m_parentSpaceReferencePose = 0x30; // CUtlVector< CTransform >
			 uintptr_t m_modelSpaceReferencePose = 0x48; // CUtlVector< CTransform >
			 uintptr_t m_numBonesToSampleAtLowLOD = 0x60; // int32
			 uintptr_t m_boneMasks = 0x68; // CUtlLeanVector< CNmBoneMask >
		}
	}
}
