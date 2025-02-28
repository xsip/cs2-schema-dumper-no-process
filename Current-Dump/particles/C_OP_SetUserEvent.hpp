#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_SetUserEvent {
			 uintptr_t m_flInput = 0x1c0; // CPerParticleFloatInput
			 uintptr_t m_flRisingEdge = 0x320; // CPerParticleFloatInput
			 uintptr_t m_nRisingEventType = 0x480; // EventTypeSelection_t
			 uintptr_t m_flFallingEdge = 0x488; // CPerParticleFloatInput
			 uintptr_t m_nFallingEventType = 0x5e8; // EventTypeSelection_t
		}
	}
}
