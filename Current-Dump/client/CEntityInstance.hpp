#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CEntityInstance {
			 uintptr_t m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
			 uintptr_t m_pEntity = 0x10; // CEntityIdentity*
			 uintptr_t m_CScriptComponent = 0x28; // CScriptComponent*
			 uintptr_t m_bVisibleinPVS = 0x30; // bool
		}
	}
}
