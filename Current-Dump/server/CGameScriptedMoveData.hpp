#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CGameScriptedMoveData {
			 uintptr_t m_vAccumulatedRootMotion = 0x0;
			 uintptr_t m_vDest = 0xc;
			 uintptr_t m_vSrc = 0x18;
			 uintptr_t m_angSrc = 0x24;
			 uintptr_t m_angDst = 0x30;
			 uintptr_t m_angCurrent = 0x3c;
			 uintptr_t m_hDestEntity = 0x48;
			 uintptr_t m_flLockedSpeed = 0x4c;
			 uintptr_t m_flAngRate = 0x50;
			 uintptr_t m_flDuration = 0x54;
			 uintptr_t m_flStartTime = 0x58;
			 uintptr_t m_bActive = 0x5c;
			 uintptr_t m_bTeleportOnEnd = 0x5d;
			 uintptr_t m_bIgnoreRotation = 0x5e;
			 uintptr_t m_nType = 0x60;
			 uintptr_t m_bSuccess = 0x64;
			 uintptr_t m_nForcedCrouchState = 0x68;
			 uintptr_t m_bIgnoreCollisions = 0x6c;
		}
	}
}
