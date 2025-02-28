#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CLogicMeasureMovement {
			 uintptr_t m_strMeasureTarget = 0x4e0; // CUtlSymbolLarge
			 uintptr_t m_strMeasureReference = 0x4e8; // CUtlSymbolLarge
			 uintptr_t m_strTargetReference = 0x4f0; // CUtlSymbolLarge
			 uintptr_t m_hMeasureTarget = 0x4f8; // CHandle< CBaseEntity >
			 uintptr_t m_hMeasureReference = 0x4fc; // CHandle< CBaseEntity >
			 uintptr_t m_hTarget = 0x500; // CHandle< CBaseEntity >
			 uintptr_t m_hTargetReference = 0x504; // CHandle< CBaseEntity >
			 uintptr_t m_flScale = 0x508; // float32
			 uintptr_t m_nMeasureType = 0x50c; // int32
		}
	}
}
