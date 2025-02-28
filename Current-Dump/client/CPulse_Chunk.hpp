#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CPulse_Chunk {
			 uintptr_t m_Instructions = 0x0; // CUtlLeanVector< PGDInstruction_t >
			 uintptr_t m_Registers = 0x10; // CUtlLeanVector< CPulse_RegisterInfo >
			 uintptr_t m_InstructionEditorIDs = 0x20; // CUtlLeanVector< PulseDocNodeID_t >
		}
	}
}
