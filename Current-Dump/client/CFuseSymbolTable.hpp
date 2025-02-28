#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CFuseSymbolTable {
			 uintptr_t m_constants = 0x0; // CUtlVector< ConstantInfo_t >
			 uintptr_t m_variables = 0x18; // CUtlVector< VariableInfo_t >
			 uintptr_t m_functions = 0x30; // CUtlVector< FunctionInfo_t >
			 uintptr_t m_constantMap = 0x48; // CUtlHashtable< CUtlStringToken, int32 >
			 uintptr_t m_variableMap = 0x68; // CUtlHashtable< CUtlStringToken, int32 >
			 uintptr_t m_functionMap = 0x88; // CUtlHashtable< CUtlStringToken, int32 >
		}
	}
}
