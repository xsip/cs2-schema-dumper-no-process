#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CFuncRotating {
			 uintptr_t m_OnStopped = 0x790;
			 uintptr_t m_OnStarted = 0x7b8;
			 uintptr_t m_OnReachedStart = 0x7e0;
			 uintptr_t m_localRotationVector = 0x808;
			 uintptr_t m_flFanFriction = 0x814;
			 uintptr_t m_flAttenuation = 0x818;
			 uintptr_t m_flVolume = 0x81c;
			 uintptr_t m_flTargetSpeed = 0x820;
			 uintptr_t m_flMaxSpeed = 0x824;
			 uintptr_t m_flBlockDamage = 0x828;
			 uintptr_t m_NoiseRunning = 0x830;
			 uintptr_t m_bReversed = 0x838;
			 uintptr_t m_bAccelDecel = 0x839;
			 uintptr_t m_prevLocalAngles = 0x844;
			 uintptr_t m_angStart = 0x850;
			 uintptr_t m_bStopAtStartPos = 0x85c;
			 uintptr_t m_vecClientOrigin = 0x860;
			 uintptr_t m_vecClientAngles = 0x86c;
		}
	}
}
