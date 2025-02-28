#include <Windows.h>


namespace xsip {
	namespace server {
		namespace ActiveModelConfig_t {
			 uintptr_t m_Handle = 0x28; // ModelConfigHandle_t
			 uintptr_t m_Name = 0x30; // CUtlSymbolLarge
			 uintptr_t m_AssociatedEntities = 0x38; // CNetworkUtlVectorBase< CHandle< CBaseModelEntity > >
			 uintptr_t m_AssociatedEntityNames = 0x50; // CNetworkUtlVectorBase< CUtlSymbolLarge >
		}
	}
}
