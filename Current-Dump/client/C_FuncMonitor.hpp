#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_FuncMonitor {
			 uintptr_t m_targetCamera = 0xd28; // CUtlString
			 uintptr_t m_nResolutionEnum = 0xd30; // int32
			 uintptr_t m_bRenderShadows = 0xd34; // bool
			 uintptr_t m_bUseUniqueColorTarget = 0xd35; // bool
			 uintptr_t m_brushModelName = 0xd38; // CUtlString
			 uintptr_t m_hTargetCamera = 0xd40; // CHandle< C_BaseEntity >
			 uintptr_t m_bEnabled = 0xd44; // bool
			 uintptr_t m_bDraw3DSkybox = 0xd45; // bool
		}
	}
}
