#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CommandToolCommand_t {
			 uintptr_t m_bEnabled = 0x0; // bool
			 uintptr_t m_bOpened = 0x1; // bool
			 uintptr_t m_InternalId = 0x4; // uint32
			 uintptr_t m_ShortName = 0x8; // CUtlString
			 uintptr_t m_ExecMode = 0x10; // CommandExecMode_t
			 uintptr_t m_SpawnGroup = 0x18; // CUtlString
			 uintptr_t m_PeriodicExecDelay = 0x20; // float32
			 uintptr_t m_SpecType = 0x24; // CommandEntitySpecType_t
			 uintptr_t m_EntitySpec = 0x28; // CUtlString
			 uintptr_t m_Commands = 0x30; // CUtlString
			 uintptr_t m_SetDebugBits = 0x38; // DebugOverlayBits_t
			 uintptr_t m_ClearDebugBits = 0x40; // DebugOverlayBits_t
		}
	}
}
