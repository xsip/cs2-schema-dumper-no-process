#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPathKeyFrame {
			 uintptr_t m_Origin = 0x4e0; // Vector
			 uintptr_t m_Angles = 0x4ec; // QAngle
			 uintptr_t m_qAngle = 0x500; // Quaternion
			 uintptr_t m_iNextKey = 0x510; // CUtlSymbolLarge
			 uintptr_t m_flNextTime = 0x518; // float32
			 uintptr_t m_pNextKey = 0x520; // CPathKeyFrame*
			 uintptr_t m_pPrevKey = 0x528; // CPathKeyFrame*
			 uintptr_t m_flMoveSpeed = 0x530; // float32
		}
	}
}
