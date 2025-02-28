#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBaseAnimGraphController {
			 uintptr_t m_animGraphNetworkedVars = 0x18; // CAnimGraphNetworkedVariables
			 uintptr_t m_bSequenceFinished = 0x220; // bool
			 uintptr_t m_flSoundSyncTime = 0x224; // float32
			 uintptr_t m_nActiveIKChainMask = 0x228; // uint32
			 uintptr_t m_hSequence = 0x22c; // HSequence
			 uintptr_t m_flSeqStartTime = 0x230; // GameTime_t
			 uintptr_t m_flSeqFixedCycle = 0x234; // float32
			 uintptr_t m_nAnimLoopMode = 0x238; // AnimLoopMode_t
			 uintptr_t m_flPlaybackRate = 0x23c; // CNetworkedQuantizedFloat
			 uintptr_t m_nNotifyState = 0x248; // SequenceFinishNotifyState_t
			 uintptr_t m_bNetworkedAnimationInputsChanged = 0x24a; // bool
			 uintptr_t m_bNetworkedSequenceChanged = 0x24b; // bool
			 uintptr_t m_bLastUpdateSkipped = 0x24c; // bool
			 uintptr_t m_flPrevAnimUpdateTime = 0x250; // GameTime_t
		}
	}
}
