#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CPulseGraphExecutionHistory {
			 uintptr_t m_nInstanceID = 0x0; // PulseGraphInstanceID_t
			 uintptr_t m_strFileName = 0x8; // CUtlString
			 uintptr_t m_vecHistory = 0x10; // CUtlVector< PulseGraphExecutionHistoryEntry_t* >
			 uintptr_t m_mapCellDesc = 0x28; // CUtlOrderedMap< PulseDocNodeID_t, PulseGraphExecutionHistoryNodeDesc_t* >
			 uintptr_t m_mapCursorDesc = 0x50; // CUtlOrderedMap< PulseCursorID_t, PulseGraphExecutionHistoryCursorDesc_t* >
		}
	}
}
