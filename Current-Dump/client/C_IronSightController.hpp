#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_IronSightController {
			 uintptr_t m_bIronSightAvailable = 0x10; // bool
			 uintptr_t m_flIronSightAmount = 0x14; // float32
			 uintptr_t m_flIronSightAmountGained = 0x18; // float32
			 uintptr_t m_flIronSightAmountBiased = 0x1c; // float32
			 uintptr_t m_flIronSightAmount_Interpolated = 0x20; // float32
			 uintptr_t m_flIronSightAmountGained_Interpolated = 0x24; // float32
			 uintptr_t m_flIronSightAmountBiased_Interpolated = 0x28; // float32
			 uintptr_t m_flInterpolationLastUpdated = 0x2c; // float32
			 uintptr_t m_angDeltaAverage = 0x30; // QAngle[8]
			 uintptr_t m_angViewLast = 0x90; // QAngle
			 uintptr_t m_vecDotCoords = 0x9c; // Vector2D
			 uintptr_t m_flFiringInaccuracyExtraWidthMultiplier = 0xa4; // float32
			 uintptr_t m_flSpeedRatio = 0xa8; // float32
		}
	}
}
