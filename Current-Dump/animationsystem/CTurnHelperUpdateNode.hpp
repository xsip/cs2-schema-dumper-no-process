#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CTurnHelperUpdateNode {
			 uintptr_t m_facingTarget = 0x6c; // AnimValueSource
			 uintptr_t m_turnStartTimeOffset = 0x70; // float32
			 uintptr_t m_turnDuration = 0x74; // float32
			 uintptr_t m_bMatchChildDuration = 0x78; // bool
			 uintptr_t m_manualTurnOffset = 0x7c; // float32
			 uintptr_t m_bUseManualTurnOffset = 0x80; // bool
		}
	}
}
