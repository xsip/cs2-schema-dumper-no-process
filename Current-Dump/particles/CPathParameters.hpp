#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace CPathParameters {
			 uintptr_t m_nStartControlPointNumber = 0x0; // int32
			 uintptr_t m_nEndControlPointNumber = 0x4; // int32
			 uintptr_t m_nBulgeControl = 0x8; // int32
			 uintptr_t m_flBulge = 0xc; // float32
			 uintptr_t m_flMidPoint = 0x10; // float32
			 uintptr_t m_vStartPointOffset = 0x14; // Vector
			 uintptr_t m_vMidPointOffset = 0x20; // Vector
			 uintptr_t m_vEndOffset = 0x2c; // Vector
		}
	}
}
