#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CPulse_CallInfo {
			 uintptr_t m_PortName = 0x0; // CUtlSymbolLarge
			 uintptr_t m_nEditorNodeID = 0x8; // PulseDocNodeID_t
			 uintptr_t m_RegisterMap = 0x10; // PulseRegisterMap_t
			 uintptr_t m_CallMethodID = 0x30; // PulseDocNodeID_t
			 uintptr_t m_nSrcChunk = 0x34; // PulseRuntimeChunkIndex_t
			 uintptr_t m_nSrcInstruction = 0x38; // int32
		}
	}
}
