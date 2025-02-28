#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CEnvGlobal {
			 uintptr_t m_outCounter = 0x4e0; // CEntityOutputTemplate< int32 >
			 uintptr_t m_globalstate = 0x508; // CUtlSymbolLarge
			 uintptr_t m_triggermode = 0x510; // int32
			 uintptr_t m_initialstate = 0x514; // int32
			 uintptr_t m_counter = 0x518; // int32
		}
	}
}
