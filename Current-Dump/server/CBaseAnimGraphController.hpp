#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBaseAnimGraphController {
			 uintptr_t m_animGraphNetworkedVars = 0x18;
			 uintptr_t m_bSequenceFinished = 0x220;
			 uintptr_t m_flSoundSyncTime = 0x224;
			 uintptr_t m_nActiveIKChainMask = 0x228;
			 uintptr_t m_hSequence = 0x22c;
			 uintptr_t m_flSeqStartTime = 0x230;
			 uintptr_t m_flSeqFixedCycle = 0x234;
			 uintptr_t m_nAnimLoopMode = 0x238;
			 uintptr_t m_flPlaybackRate = 0x23c;
			 uintptr_t m_nNotifyState = 0x248;
			 uintptr_t m_bNetworkedAnimationInputsChanged = 0x24a;
			 uintptr_t m_bNetworkedSequenceChanged = 0x24b;
			 uintptr_t m_bLastUpdateSkipped = 0x24c;
			 uintptr_t m_flPrevAnimUpdateTime = 0x250;
		}
	}
}
