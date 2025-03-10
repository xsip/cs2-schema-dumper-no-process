#include <Windows.h>


namespace xsip {
	namespace worldrenderer {
		namespace WorldNodeOnDiskBufferData_t {
			 uintptr_t m_nElementCount = 0x0; // int32
			 uintptr_t m_nElementSizeInBytes = 0x4; // int32
			 uintptr_t m_inputLayoutFields = 0x8; // CUtlVector< RenderInputLayoutField_t >
			 uintptr_t m_pData = 0x20; // CUtlVector< uint8 >
		}
	}
}
