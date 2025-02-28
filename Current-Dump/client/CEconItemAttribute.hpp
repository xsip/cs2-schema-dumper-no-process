#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CEconItemAttribute {
			 uintptr_t m_iAttributeDefinitionIndex = 0x30; // uint16
			 uintptr_t m_flValue = 0x34; // float32
			 uintptr_t m_flInitialValue = 0x38; // float32
			 uintptr_t m_nRefundableCurrency = 0x3c; // int32
			 uintptr_t m_bSetBonus = 0x40; // bool
		}
	}
}
