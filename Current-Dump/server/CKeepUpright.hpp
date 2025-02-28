#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CKeepUpright {
			 uintptr_t m_worldGoalAxis = 0x4e8; // Vector
			 uintptr_t m_localTestAxis = 0x4f4; // Vector
			 uintptr_t m_nameAttach = 0x508; // CUtlSymbolLarge
			 uintptr_t m_attachedObject = 0x510; // CHandle< CBaseEntity >
			 uintptr_t m_angularLimit = 0x514; // float32
			 uintptr_t m_bActive = 0x518; // bool
			 uintptr_t m_bDampAllRotation = 0x519; // bool
		}
	}
}
