#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_IronSightController {
			 uintptr_t m_bIronSightAvailable = 0x10;
			 uintptr_t m_flIronSightAmount = 0x14;
			 uintptr_t m_flIronSightAmountGained = 0x18;
			 uintptr_t m_flIronSightAmountBiased = 0x1c;
			 uintptr_t m_flIronSightAmount_Interpolated = 0x20;
			 uintptr_t m_flIronSightAmountGained_Interpolated = 0x24;
			 uintptr_t m_flIronSightAmountBiased_Interpolated = 0x28;
			 uintptr_t m_flInterpolationLastUpdated = 0x2c;
			 uintptr_t m_angDeltaAverage = 0x30;
			 uintptr_t m_angViewLast = 0x90;
			 uintptr_t m_vecDotCoords = 0x9c;
			 uintptr_t m_flFiringInaccuracyExtraWidthMultiplier = 0xa4;
			 uintptr_t m_flSpeedRatio = 0xa8;
		}
	}
}
