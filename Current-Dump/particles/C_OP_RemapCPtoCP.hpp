#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RemapCPtoCP {
			 uintptr_t m_nInputControlPoint = 0x1c8;
			 uintptr_t m_nOutputControlPoint = 0x1cc;
			 uintptr_t m_nInputField = 0x1d0;
			 uintptr_t m_nOutputField = 0x1d4;
			 uintptr_t m_flInputMin = 0x1d8;
			 uintptr_t m_flInputMax = 0x1dc;
			 uintptr_t m_flOutputMin = 0x1e0;
			 uintptr_t m_flOutputMax = 0x1e4;
			 uintptr_t m_bDerivative = 0x1e8;
			 uintptr_t m_flInterpRate = 0x1ec;
		}
	}
}
