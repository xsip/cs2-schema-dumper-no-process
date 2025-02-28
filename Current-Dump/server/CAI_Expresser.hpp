#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CAI_Expresser {
			 uintptr_t m_flStopTalkTime = 0x38;
			 uintptr_t m_flStopTalkTimeWithoutDelay = 0x3c;
			 uintptr_t m_flBlockedTalkTime = 0x40;
			 uintptr_t m_voicePitch = 0x44;
			 uintptr_t m_flLastTimeAcceptedSpeak = 0x48;
			 uintptr_t m_bAllowSpeakingInterrupts = 0x4c;
			 uintptr_t m_bConsiderSceneInvolvementAsSpeech = 0x4d;
			 uintptr_t m_bSceneEntityDisabled = 0x4e;
			 uintptr_t m_nLastSpokenPriority = 0x50;
			 uintptr_t m_pOuter = 0x70;
		}
	}
}
