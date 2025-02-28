#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CLogicCompare {
			 uintptr_t m_flInValue = 0x4e0; // float32
			 uintptr_t m_flCompareValue = 0x4e4; // float32
			 uintptr_t m_OnLessThan = 0x4e8; // CEntityOutputTemplate< float32 >
			 uintptr_t m_OnEqualTo = 0x510; // CEntityOutputTemplate< float32 >
			 uintptr_t m_OnNotEqualTo = 0x538; // CEntityOutputTemplate< float32 >
			 uintptr_t m_OnGreaterThan = 0x560; // CEntityOutputTemplate< float32 >
		}
	}
}
