#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_RemapScalarToVector {
			 uintptr_t m_nFieldInput = 0x1c8;
			 uintptr_t m_nFieldOutput = 0x1cc;
			 uintptr_t m_flInputMin = 0x1d0;
			 uintptr_t m_flInputMax = 0x1d4;
			 uintptr_t m_vecOutputMin = 0x1d8;
			 uintptr_t m_vecOutputMax = 0x1e4;
			 uintptr_t m_flStartTime = 0x1f0;
			 uintptr_t m_flEndTime = 0x1f4;
			 uintptr_t m_nSetMethod = 0x1f8;
			 uintptr_t m_nControlPointNumber = 0x1fc;
			 uintptr_t m_bLocalCoords = 0x200;
			 uintptr_t m_flRemapBias = 0x204;
		}
	}
}
