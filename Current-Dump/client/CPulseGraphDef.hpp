#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CPulseGraphDef {
			 uintptr_t m_DomainIdentifier = 0x8; // CUtlSymbolLarge
			 uintptr_t m_ParentMapName = 0x10; // CUtlSymbolLarge
			 uintptr_t m_ParentXmlName = 0x18; // CUtlSymbolLarge
			 uintptr_t m_vecGameBlackboards = 0x20; // CUtlVector< CUtlSymbolLarge >
			 uintptr_t m_Chunks = 0x38; // CUtlVector< CPulse_Chunk* >
			 uintptr_t m_Cells = 0x50; // CUtlVector< CPulseCell_Base* >
			 uintptr_t m_Vars = 0x68; // CUtlVector< CPulse_Variable >
			 uintptr_t m_PublicOutputs = 0x80; // CUtlVector< CPulse_PublicOutput >
			 uintptr_t m_InvokeBindings = 0x98; // CUtlVector< CPulse_InvokeBinding* >
			 uintptr_t m_CallInfos = 0xb0; // CUtlVector< CPulse_CallInfo* >
			 uintptr_t m_Constants = 0xc8; // CUtlVector< CPulse_Constant >
			 uintptr_t m_DomainValues = 0xe0; // CUtlVector< CPulse_DomainValue >
			 uintptr_t m_BlackboardReferences = 0xf8; // CUtlVector< CPulse_BlackboardReference >
			 uintptr_t m_OutputConnections = 0x110; // CUtlVector< CPulse_OutputConnection* >
		}
	}
}
