#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CMessageEntity {
			 uintptr_t m_radius = 0x4e0; // int32
			 uintptr_t m_messageText = 0x4e8; // CUtlSymbolLarge
			 uintptr_t m_drawText = 0x4f0; // bool
			 uintptr_t m_bDeveloperOnly = 0x4f1; // bool
			 uintptr_t m_bEnabled = 0x4f2; // bool
		}
	}
}
