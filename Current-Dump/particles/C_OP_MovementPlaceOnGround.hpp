#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_MovementPlaceOnGround {
			 uintptr_t m_flOffset = 0x1c0;
			 uintptr_t m_flMaxTraceLength = 0x320;
			 uintptr_t m_flTolerance = 0x324;
			 uintptr_t m_flTraceOffset = 0x328;
			 uintptr_t m_flLerpRate = 0x32c;
			 uintptr_t m_CollisionGroupName = 0x330;
			 uintptr_t m_nTraceSet = 0x3b0;
			 uintptr_t m_nRefCP1 = 0x3b4;
			 uintptr_t m_nRefCP2 = 0x3b8;
			 uintptr_t m_nLerpCP = 0x3bc;
			 uintptr_t m_nTraceMissBehavior = 0x3c8;
			 uintptr_t m_bIncludeShotHull = 0x3cc;
			 uintptr_t m_bIncludeWater = 0x3cd;
			 uintptr_t m_bSetNormal = 0x3d0;
			 uintptr_t m_bScaleOffset = 0x3d1;
			 uintptr_t m_nPreserveOffsetCP = 0x3d4;
			 uintptr_t m_nIgnoreCP = 0x3d8;
		}
	}
}
