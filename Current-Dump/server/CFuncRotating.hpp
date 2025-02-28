#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CFuncRotating {
			 uintptr_t m_OnStopped = 0x790; // CEntityIOOutput
			 uintptr_t m_OnStarted = 0x7b8; // CEntityIOOutput
			 uintptr_t m_OnReachedStart = 0x7e0; // CEntityIOOutput
			 uintptr_t m_localRotationVector = 0x808; // RotationVector
			 uintptr_t m_flFanFriction = 0x814; // float32
			 uintptr_t m_flAttenuation = 0x818; // float32
			 uintptr_t m_flVolume = 0x81c; // float32
			 uintptr_t m_flTargetSpeed = 0x820; // float32
			 uintptr_t m_flMaxSpeed = 0x824; // float32
			 uintptr_t m_flBlockDamage = 0x828; // float32
			 uintptr_t m_NoiseRunning = 0x830; // CUtlSymbolLarge
			 uintptr_t m_bReversed = 0x838; // bool
			 uintptr_t m_bAccelDecel = 0x839; // bool
			 uintptr_t m_prevLocalAngles = 0x844; // QAngle
			 uintptr_t m_angStart = 0x850; // QAngle
			 uintptr_t m_bStopAtStartPos = 0x85c; // bool
			 uintptr_t m_vecClientOrigin = 0x860; // Vector
			 uintptr_t m_vecClientAngles = 0x86c; // QAngle
		}
	}
}
