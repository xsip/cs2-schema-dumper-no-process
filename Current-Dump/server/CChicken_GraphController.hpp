#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CChicken_GraphController {
			 uintptr_t m_paramActivity = 0x60; // CAnimGraphParamRef< char* >
			 uintptr_t m_paramEndActivityImmediately = 0x88; // CAnimGraphParamRef< bool >
			 uintptr_t m_sActivityFinished = 0xa8; // CAnimGraphTagRef
			 uintptr_t m_paramTurnAngle = 0xc0; // CAnimGraphParamRef< float32 >
		}
	}
}
