#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CCSPlayer_RadioServices {
			 uintptr_t m_flGotHostageTalkTimer = 0x40; // GameTime_t
			 uintptr_t m_flDefusingTalkTimer = 0x44; // GameTime_t
			 uintptr_t m_flC4PlantTalkTimer = 0x48; // GameTime_t
			 uintptr_t m_flRadioTokenSlots = 0x4c; // GameTime_t[3]
			 uintptr_t m_bIgnoreRadio = 0x58; // bool
		}
	}
}
