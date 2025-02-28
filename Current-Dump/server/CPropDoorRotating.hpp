#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPropDoorRotating {
			 uintptr_t m_vecAxis = 0xee8; // Vector
			 uintptr_t m_flDistance = 0xef4; // float32
			 uintptr_t m_eSpawnPosition = 0xef8; // PropDoorRotatingSpawnPos_t
			 uintptr_t m_eOpenDirection = 0xefc; // PropDoorRotatingOpenDirection_e
			 uintptr_t m_eCurrentOpenDirection = 0xf00; // PropDoorRotatingOpenDirection_e
			 uintptr_t m_flAjarAngle = 0xf04; // float32
			 uintptr_t m_angRotationAjarDeprecated = 0xf08; // QAngle
			 uintptr_t m_angRotationClosed = 0xf14; // QAngle
			 uintptr_t m_angRotationOpenForward = 0xf20; // QAngle
			 uintptr_t m_angRotationOpenBack = 0xf2c; // QAngle
			 uintptr_t m_angGoal = 0xf38; // QAngle
			 uintptr_t m_vecForwardBoundsMin = 0xf44; // Vector
			 uintptr_t m_vecForwardBoundsMax = 0xf50; // Vector
			 uintptr_t m_vecBackBoundsMin = 0xf5c; // Vector
			 uintptr_t m_vecBackBoundsMax = 0xf68; // Vector
			 uintptr_t m_bAjarDoorShouldntAlwaysOpen = 0xf74; // bool
			 uintptr_t m_hEntityBlocker = 0xf78; // CHandle< CEntityBlocker >
		}
	}
}
