#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CPulse_Variable {
			 uintptr_t m_Name = 0x0; // CUtlSymbolLarge
			 uintptr_t m_Description = 0x8; // CUtlString
			 uintptr_t m_Type = 0x10; // CPulseValueFullType
			 uintptr_t m_DefaultValue = 0x20; // KeyValues3
			 uintptr_t m_bIsPublic = 0x32; // bool
			 uintptr_t m_bIsObservable = 0x33; // bool
			 uintptr_t m_nEditorNodeID = 0x34; // PulseDocNodeID_t
		}
	}
}
