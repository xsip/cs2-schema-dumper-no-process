#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CSceneEventInfo {
			 uintptr_t m_iLayer = 0x0; // int32
			 uintptr_t m_iPriority = 0x4; // int32
			 uintptr_t m_hSequence = 0x8; // HSequence
			 uintptr_t m_flWeight = 0xc; // float32
			 uintptr_t m_bHasArrived = 0x10; // bool
			 uintptr_t m_nType = 0x14; // int32
			 uintptr_t m_flNext = 0x18; // GameTime_t
			 uintptr_t m_bIsGesture = 0x1c; // bool
			 uintptr_t m_bShouldRemove = 0x1d; // bool
			 uintptr_t m_hTarget = 0x44; // CHandle< C_BaseEntity >
			 uintptr_t m_nSceneEventId = 0x48; // SceneEventId_t
			 uintptr_t m_bClientSide = 0x4c; // bool
			 uintptr_t m_bStarted = 0x4d; // bool
		}
	}
}
