#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace CSosGroupActionSetSoundeventParameterSchema {
			 uintptr_t m_nMaxCount = 0x18; // int32
			 uintptr_t m_flMinValue = 0x1c; // float32
			 uintptr_t m_flMaxValue = 0x20; // float32
			 uintptr_t m_opvarName = 0x28; // CUtlString
			 uintptr_t m_nSortType = 0x30; // SosActionSortType_t
		}
	}
}
