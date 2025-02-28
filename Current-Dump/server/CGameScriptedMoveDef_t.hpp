#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CGameScriptedMoveDef_t {
			 uintptr_t m_nType = 0x0; // ScriptedMoveType_t
			 uintptr_t m_vDestOffset = 0x4; // Vector
			 uintptr_t m_hDestEntity = 0x10; // CHandle< CBaseEntity >
			 uintptr_t m_angDest = 0x14; // QAngle
			 uintptr_t m_flDuration = 0x20; // float32
			 uintptr_t m_flAngRate = 0x24; // float32
		}
	}
}
