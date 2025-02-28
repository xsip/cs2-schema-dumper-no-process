#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CTriggerBrush {
			 uintptr_t m_OnStartTouch = 0x790; // CEntityIOOutput
			 uintptr_t m_OnEndTouch = 0x7b8; // CEntityIOOutput
			 uintptr_t m_OnUse = 0x7e0; // CEntityIOOutput
			 uintptr_t m_iInputFilter = 0x808; // int32
			 uintptr_t m_iDontMessageParent = 0x80c; // int32
		}
	}
}
