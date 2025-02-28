#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_BulletHitModel {
			 uintptr_t m_matLocal = 0xf88; // matrix3x4_t
			 uintptr_t m_iBoneIndex = 0xfb8; // int32
			 uintptr_t m_hPlayerParent = 0xfbc; // CHandle< C_BaseEntity >
			 uintptr_t m_bIsHit = 0xfc0; // bool
			 uintptr_t m_flTimeCreated = 0xfc4; // float32
			 uintptr_t m_vecStartPos = 0xfc8; // Vector
		}
	}
}
