#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBaseFlex {
			 uintptr_t m_flexWeight = 0x9a8; // CNetworkUtlVectorBase< float32 >
			 uintptr_t m_vLookTargetPosition = 0x9c0; // Vector
			 uintptr_t m_blinktoggle = 0x9cc; // bool
			 uintptr_t m_flAllowResponsesEndTime = 0xa20; // GameTime_t
			 uintptr_t m_flLastFlexAnimationTime = 0xa24; // GameTime_t
			 uintptr_t m_nNextSceneEventId = 0xa28; // SceneEventId_t
			 uintptr_t m_bUpdateLayerPriorities = 0xa2c; // bool
		}
	}
}
