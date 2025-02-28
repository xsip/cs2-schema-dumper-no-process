#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RemapCPtoVector {
			 uintptr_t m_nCPInput = 0x1c0;
			 uintptr_t m_nFieldOutput = 0x1c4;
			 uintptr_t m_nLocalSpaceCP = 0x1c8;
			 uintptr_t m_vInputMin = 0x1cc;
			 uintptr_t m_vInputMax = 0x1d8;
			 uintptr_t m_vOutputMin = 0x1e4;
			 uintptr_t m_vOutputMax = 0x1f0;
			 uintptr_t m_flStartTime = 0x1fc;
			 uintptr_t m_flEndTime = 0x200;
			 uintptr_t m_flInterpRate = 0x204;
			 uintptr_t m_nSetMethod = 0x208;
			 uintptr_t m_bOffset = 0x20c;
			 uintptr_t m_bAccelerate = 0x20d;
		}
	}
}
