#include <Windows.h>


namespace xsip {
	namespace client {
		namespace PulseGraphExecutionHistoryEntry_t {
			 uintptr_t nCursorID = 0x0; // PulseCursorID_t
			 uintptr_t nEditorID = 0x4; // PulseDocNodeID_t
			 uintptr_t flExecTime = 0x8; // float32
			 uintptr_t unFlags = 0xc; // uint32
			 uintptr_t tagName = 0x10; // CUtlSymbolLarge
		}
	}
}
