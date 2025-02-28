#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CInstancedSceneEntity {
			 uintptr_t m_hOwner = 0xa40; // CHandle< CBaseEntity >
			 uintptr_t m_bHadOwner = 0xa44; // bool
			 uintptr_t m_flPostSpeakDelay = 0xa48; // float32
			 uintptr_t m_flPreDelay = 0xa4c; // float32
			 uintptr_t m_bIsBackground = 0xa50; // bool
			 uintptr_t m_bRemoveOnCompletion = 0xa51; // bool
			 uintptr_t m_hTarget = 0xa54; // CHandle< CBaseEntity >
		}
	}
}
