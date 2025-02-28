#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CHintMessage {
			 uintptr_t m_hintString = 0x0; // char*
			 uintptr_t m_args = 0x8; // CUtlVector< char* >
			 uintptr_t m_duration = 0x20; // float32
		}
	}
}
