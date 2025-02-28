#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPropDoorRotating {
			 uintptr_t m_vecAxis = 0xee8;
			 uintptr_t m_flDistance = 0xef4;
			 uintptr_t m_eSpawnPosition = 0xef8;
			 uintptr_t m_eOpenDirection = 0xefc;
			 uintptr_t m_eCurrentOpenDirection = 0xf00;
			 uintptr_t m_flAjarAngle = 0xf04;
			 uintptr_t m_angRotationAjarDeprecated = 0xf08;
			 uintptr_t m_angRotationClosed = 0xf14;
			 uintptr_t m_angRotationOpenForward = 0xf20;
			 uintptr_t m_angRotationOpenBack = 0xf2c;
			 uintptr_t m_angGoal = 0xf38;
			 uintptr_t m_vecForwardBoundsMin = 0xf44;
			 uintptr_t m_vecForwardBoundsMax = 0xf50;
			 uintptr_t m_vecBackBoundsMin = 0xf5c;
			 uintptr_t m_vecBackBoundsMax = 0xf68;
			 uintptr_t m_bAjarDoorShouldntAlwaysOpen = 0xf74;
			 uintptr_t m_hEntityBlocker = 0xf78;
		}
	}
}
