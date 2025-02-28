#include <Windows.h>


namespace xsip {
	namespace scenesystem {
		namespace CSSDSMsg_ViewTargetList {
			 uintptr_t m_viewId = 0x0; // SceneViewId_t
			 uintptr_t m_ViewName = 0x10; // CUtlString
			 uintptr_t m_Targets = 0x18; // CUtlVector< CSSDSMsg_ViewTarget >
		}
	}
}
