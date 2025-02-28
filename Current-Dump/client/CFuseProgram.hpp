#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CFuseProgram {
			 uintptr_t m_programBuffer = 0x0; // CUtlVector< uint8 >
			 uintptr_t m_variablesRead = 0x18; // CUtlVector< FuseVariableIndex_t >
			 uintptr_t m_variablesWritten = 0x30; // CUtlVector< FuseVariableIndex_t >
			 uintptr_t m_nMaxTempVarsUsed = 0x48; // int32
		}
	}
}
