#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CPulse_InvokeBinding {
			 uintptr_t m_RegisterMap = 0x0; // PulseRegisterMap_t
			 uintptr_t m_FuncName = 0x20; // CUtlSymbolLarge
			 uintptr_t m_nCellIndex = 0x28; // PulseRuntimeCellIndex_t
			 uintptr_t m_nSrcChunk = 0x2c; // PulseRuntimeChunkIndex_t
			 uintptr_t m_nSrcInstruction = 0x30; // int32
		}
	}
}
