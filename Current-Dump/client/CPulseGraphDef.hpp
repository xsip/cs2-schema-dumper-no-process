#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CPulseGraphDef {
			 uintptr_t m_DomainIdentifier = 0x8;
			 uintptr_t m_ParentMapName = 0x10;
			 uintptr_t m_ParentXmlName = 0x18;
			 uintptr_t m_vecGameBlackboards = 0x20;
			 uintptr_t m_Chunks = 0x38;
			 uintptr_t m_Cells = 0x50;
			 uintptr_t m_Vars = 0x68;
			 uintptr_t m_PublicOutputs = 0x80;
			 uintptr_t m_InvokeBindings = 0x98;
			 uintptr_t m_CallInfos = 0xb0;
			 uintptr_t m_Constants = 0xc8;
			 uintptr_t m_DomainValues = 0xe0;
			 uintptr_t m_BlackboardReferences = 0xf8;
			 uintptr_t m_OutputConnections = 0x110;
		}
	}
}
