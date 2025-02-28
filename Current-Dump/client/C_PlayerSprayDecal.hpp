#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_PlayerSprayDecal {
			 uintptr_t m_nUniqueID = 0xd28; // int32
			 uintptr_t m_unAccountID = 0xd2c; // uint32
			 uintptr_t m_unTraceID = 0xd30; // uint32
			 uintptr_t m_rtGcTime = 0xd34; // uint32
			 uintptr_t m_vecEndPos = 0xd38; // Vector
			 uintptr_t m_vecStart = 0xd44; // Vector
			 uintptr_t m_vecLeft = 0xd50; // Vector
			 uintptr_t m_vecNormal = 0xd5c; // Vector
			 uintptr_t m_nPlayer = 0xd68; // int32
			 uintptr_t m_nEntity = 0xd6c; // int32
			 uintptr_t m_nHitbox = 0xd70; // int32
			 uintptr_t m_flCreationTime = 0xd74; // float32
			 uintptr_t m_nTintID = 0xd78; // int32
			 uintptr_t m_nVersion = 0xd7c; // uint8
			 uintptr_t m_ubSignature = 0xd7d; // uint8[128]
			 uintptr_t m_SprayRenderHelper = 0xe08; // CPlayerSprayDecalRenderHelper
		}
	}
}
