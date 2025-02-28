#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CAnimDesc {
			 uintptr_t m_name = 0x0; // CBufferString
			 uintptr_t m_flags = 0x10; // CAnimDesc_Flag
			 uintptr_t fps = 0x18; // float32
			 uintptr_t m_Data = 0x20; // CAnimEncodedFrames
			 uintptr_t m_movementArray = 0xf8; // CUtlVector< CAnimMovement >
			 uintptr_t m_xInitialOffset = 0x110; // CTransform
			 uintptr_t m_eventArray = 0x130; // CUtlVector< CAnimEventDefinition >
			 uintptr_t m_activityArray = 0x148; // CUtlVector< CAnimActivity >
			 uintptr_t m_hierarchyArray = 0x160; // CUtlVector< CAnimLocalHierarchy >
			 uintptr_t framestalltime = 0x178; // float32
			 uintptr_t m_vecRootMin = 0x17c; // Vector
			 uintptr_t m_vecRootMax = 0x188; // Vector
			 uintptr_t m_vecBoneWorldMin = 0x198; // CUtlVector< Vector >
			 uintptr_t m_vecBoneWorldMax = 0x1b0; // CUtlVector< Vector >
			 uintptr_t m_sequenceParams = 0x1c8; // CAnimSequenceParams
		}
	}
}
