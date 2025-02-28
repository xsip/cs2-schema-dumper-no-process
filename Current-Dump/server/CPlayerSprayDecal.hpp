#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPlayerSprayDecal {
			 uintptr_t m_nUniqueID = 0x790; // int32
			 uintptr_t m_unAccountID = 0x794; // uint32
			 uintptr_t m_unTraceID = 0x798; // uint32
			 uintptr_t m_rtGcTime = 0x79c; // uint32
			 uintptr_t m_vecEndPos = 0x7a0; // Vector
			 uintptr_t m_vecStart = 0x7ac; // Vector
			 uintptr_t m_vecLeft = 0x7b8; // Vector
			 uintptr_t m_vecNormal = 0x7c4; // Vector
			 uintptr_t m_nPlayer = 0x7d0; // int32
			 uintptr_t m_nEntity = 0x7d4; // int32
			 uintptr_t m_nHitbox = 0x7d8; // int32
			 uintptr_t m_flCreationTime = 0x7dc; // float32
			 uintptr_t m_nTintID = 0x7e0; // int32
			 uintptr_t m_nVersion = 0x7e4; // uint8
			 uintptr_t m_ubSignature = 0x7e5; // uint8[128]
		}
	}
}
