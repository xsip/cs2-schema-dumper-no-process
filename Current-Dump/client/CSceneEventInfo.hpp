#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CSceneEventInfo {
			 uintptr_t m_iLayer = 0x0;
			 uintptr_t m_iPriority = 0x4;
			 uintptr_t m_hSequence = 0x8;
			 uintptr_t m_flWeight = 0xc;
			 uintptr_t m_bHasArrived = 0x10;
			 uintptr_t m_nType = 0x14;
			 uintptr_t m_flNext = 0x18;
			 uintptr_t m_bIsGesture = 0x1c;
			 uintptr_t m_bShouldRemove = 0x1d;
			 uintptr_t m_hTarget = 0x44;
			 uintptr_t m_nSceneEventId = 0x48;
			 uintptr_t m_bClientSide = 0x4c;
			 uintptr_t m_bStarted = 0x4d;
		}
	}
}
