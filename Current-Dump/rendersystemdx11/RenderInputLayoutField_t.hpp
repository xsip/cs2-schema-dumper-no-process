#include <Windows.h>


namespace xsip {
	namespace rendersystemdx11 {
		namespace RenderInputLayoutField_t {
			 uintptr_t m_pSemanticName = 0x0; // uint8[32]
			 uintptr_t m_nSemanticIndex = 0x20; // int32
			 uintptr_t m_Format = 0x24; // uint32
			 uintptr_t m_nOffset = 0x28; // int32
			 uintptr_t m_nSlot = 0x2c; // int32
			 uintptr_t m_nSlotType = 0x30; // RenderSlotType_t
			 uintptr_t m_nInstanceStepRate = 0x34; // int32
		}
	}
}
