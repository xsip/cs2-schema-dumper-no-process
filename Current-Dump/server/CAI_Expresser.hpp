#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CAI_Expresser {
			 uintptr_t m_flStopTalkTime = 0x38; // GameTime_t
			 uintptr_t m_flStopTalkTimeWithoutDelay = 0x3c; // GameTime_t
			 uintptr_t m_flBlockedTalkTime = 0x40; // GameTime_t
			 uintptr_t m_voicePitch = 0x44; // int32
			 uintptr_t m_flLastTimeAcceptedSpeak = 0x48; // GameTime_t
			 uintptr_t m_bAllowSpeakingInterrupts = 0x4c; // bool
			 uintptr_t m_bConsiderSceneInvolvementAsSpeech = 0x4d; // bool
			 uintptr_t m_bSceneEntityDisabled = 0x4e; // bool
			 uintptr_t m_nLastSpokenPriority = 0x50; // int32
			 uintptr_t m_pOuter = 0x70; // CBaseFlex*
		}
	}
}
