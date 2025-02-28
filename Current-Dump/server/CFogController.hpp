#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CFogController {
			 uintptr_t m_fog = 0x4e0; // fogparams_t
			 uintptr_t m_bUseAngles = 0x548; // bool
			 uintptr_t m_iChangedVariables = 0x54c; // int32
		}
	}
}
