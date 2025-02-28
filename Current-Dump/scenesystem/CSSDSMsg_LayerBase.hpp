#include <Windows.h>


namespace xsip {
	namespace scenesystem {
		namespace CSSDSMsg_LayerBase {
			 uintptr_t m_viewId = 0x0; // SceneViewId_t
			 uintptr_t m_ViewName = 0x10; // CUtlString
			 uintptr_t m_nLayerIndex = 0x18; // int32
			 uintptr_t m_nLayerId = 0x20; // uint64
			 uintptr_t m_LayerName = 0x28; // CUtlString
			 uintptr_t m_displayText = 0x30; // CUtlString
		}
	}
}
