#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace CFootCycleDefinition {
			 uintptr_t m_vStancePositionMS = 0x0; // Vector
			 uintptr_t m_vMidpointPositionMS = 0xc; // Vector
			 uintptr_t m_flStanceDirectionMS = 0x18; // float32
			 uintptr_t m_vToStrideStartPos = 0x1c; // Vector
			 uintptr_t m_stanceCycle = 0x28; // CAnimCycle
			 uintptr_t m_footLiftCycle = 0x2c; // CFootCycle
			 uintptr_t m_footOffCycle = 0x30; // CFootCycle
			 uintptr_t m_footStrikeCycle = 0x34; // CFootCycle
			 uintptr_t m_footLandCycle = 0x38; // CFootCycle
		}
	}
}
