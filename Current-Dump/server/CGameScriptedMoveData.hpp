#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CGameScriptedMoveData {
			 uintptr_t m_vAccumulatedRootMotion = 0x0; // Vector
			 uintptr_t m_vDest = 0xc; // Vector
			 uintptr_t m_vSrc = 0x18; // Vector
			 uintptr_t m_angSrc = 0x24; // QAngle
			 uintptr_t m_angDst = 0x30; // QAngle
			 uintptr_t m_angCurrent = 0x3c; // QAngle
			 uintptr_t m_hDestEntity = 0x48; // CHandle< CBaseEntity >
			 uintptr_t m_flLockedSpeed = 0x4c; // float32
			 uintptr_t m_flAngRate = 0x50; // float32
			 uintptr_t m_flDuration = 0x54; // float32
			 uintptr_t m_flStartTime = 0x58; // GameTime_t
			 uintptr_t m_bActive = 0x5c; // bool
			 uintptr_t m_bTeleportOnEnd = 0x5d; // bool
			 uintptr_t m_bIgnoreRotation = 0x5e; // bool
			 uintptr_t m_nType = 0x60; // ScriptedMoveType_t
			 uintptr_t m_bSuccess = 0x64; // bool
			 uintptr_t m_nForcedCrouchState = 0x68; // ForcedCrouchState_t
			 uintptr_t m_bIgnoreCollisions = 0x6c; // bool
		}
	}
}
