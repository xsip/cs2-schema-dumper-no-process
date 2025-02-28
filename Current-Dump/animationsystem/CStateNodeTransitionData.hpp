#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CStateNodeTransitionData {
			 uintptr_t m_curve = 0x0; // CBlendCurve
			 uintptr_t m_blendDuration = 0x8; // CAnimValue< float32 >
			 uintptr_t m_resetCycleValue = 0x10; // CAnimValue< float32 >
			 uintptr_t m_bReset = 0x0; // bitfield:1
			 uintptr_t m_resetCycleOption = 0x0; // bitfield:3
		}
	}
}
