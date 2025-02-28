#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CAnimDesc {
			 uintptr_t m_name = 0x0;
			 uintptr_t m_flags = 0x10;
			 uintptr_t fps = 0x18;
			 uintptr_t m_Data = 0x20;
			 uintptr_t m_movementArray = 0xf8;
			 uintptr_t m_xInitialOffset = 0x110;
			 uintptr_t m_eventArray = 0x130;
			 uintptr_t m_activityArray = 0x148;
			 uintptr_t m_hierarchyArray = 0x160;
			 uintptr_t framestalltime = 0x178;
			 uintptr_t m_vecRootMin = 0x17c;
			 uintptr_t m_vecRootMax = 0x188;
			 uintptr_t m_vecBoneWorldMin = 0x198;
			 uintptr_t m_vecBoneWorldMax = 0x1b0;
			 uintptr_t m_sequenceParams = 0x1c8;
		}
	}
}
