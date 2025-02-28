#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CTriggerPush {
			 uintptr_t m_angPushEntitySpace = 0x960; // QAngle
			 uintptr_t m_vecPushDirEntitySpace = 0x96c; // Vector
			 uintptr_t m_bTriggerOnStartTouch = 0x978; // bool
			 uintptr_t m_bUsePathSimple = 0x979; // bool
			 uintptr_t m_iszPathSimpleName = 0x980; // CUtlSymbolLarge
			 uintptr_t m_PathSimple = 0x988; // CPathSimple*
			 uintptr_t m_splinePushType = 0x990; // uint32
		}
	}
}
