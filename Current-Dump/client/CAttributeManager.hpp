#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CAttributeManager {
			 uintptr_t m_Providers = 0x8; // CUtlVector< CHandle< C_BaseEntity > >
			 uintptr_t m_iReapplyProvisionParity = 0x20; // int32
			 uintptr_t m_hOuter = 0x24; // CHandle< C_BaseEntity >
			 uintptr_t m_bPreventLoopback = 0x28; // bool
			 uintptr_t m_ProviderType = 0x2c; // attributeprovidertypes_t
			 uintptr_t m_CachedResults = 0x30; // CUtlVector< CAttributeManager::cached_attribute_float_t >
		}
	}
}
