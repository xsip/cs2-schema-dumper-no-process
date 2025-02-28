#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace CVoiceContainerLoopTrigger {
			 uintptr_t m_sound = 0xc0; // CSoundContainerReference
			 uintptr_t m_flRetriggerTimeMin = 0xd8; // float32
			 uintptr_t m_flRetriggerTimeMax = 0xdc; // float32
			 uintptr_t m_flFadeTime = 0xe0; // float32
			 uintptr_t m_bCrossFade = 0xe4; // bool
		}
	}
}
