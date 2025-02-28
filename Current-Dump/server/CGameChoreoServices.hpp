#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CGameChoreoServices {
			 uintptr_t m_hOwner = 0x8; // CHandle< CBaseAnimGraph >
			 uintptr_t m_hScriptedSequence = 0xc; // CHandle< CScriptedSequence >
			 uintptr_t m_scriptState = 0x10; // IChoreoServices::ScriptState_t
			 uintptr_t m_choreoState = 0x14; // IChoreoServices::ChoreoState_t
			 uintptr_t m_flTimeStartedState = 0x18; // GameTime_t
		}
	}
}
