#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CFuseSymbolTable {
			 uintptr_t m_constants = 0x0;
			 uintptr_t m_variables = 0x18;
			 uintptr_t m_functions = 0x30;
			 uintptr_t m_constantMap = 0x48;
			 uintptr_t m_variableMap = 0x68;
			 uintptr_t m_functionMap = 0x88;
		}
	}
}
