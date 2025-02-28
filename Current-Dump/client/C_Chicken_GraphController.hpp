#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_Chicken_GraphController {
			 uintptr_t m_paramActivity = 0x60; // CAnimGraphParamRef< char* >
			 uintptr_t m_paramEndActivityImmediately = 0x88; // CAnimGraphParamRef< bool >
			 uintptr_t m_paramSnapToSquatting = 0xa8; // CAnimGraphParamRef< bool >
			 uintptr_t m_sActivityFinished = 0xc8; // CAnimGraphTagRef
			 uintptr_t m_flSquatProbability = 0xe0; // float32
		}
	}
}
