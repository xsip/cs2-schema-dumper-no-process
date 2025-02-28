#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CNmGraphDefinition {
			 uintptr_t m_persistentNodeIndices = 0x0; // CUtlVector< int16 >
			 uintptr_t m_nRootNodeIdx = 0x18; // int16
			 uintptr_t m_controlParameterIDs = 0x20; // CUtlVector< CGlobalSymbol >
			 uintptr_t m_virtualParameterIDs = 0x38; // CUtlVector< CGlobalSymbol >
			 uintptr_t m_virtualParameterNodeIndices = 0x50; // CUtlVector< int16 >
			 uintptr_t m_childGraphSlots = 0x68; // CUtlVector< CNmGraphDefinition::ChildGraphSlot_t >
			 uintptr_t m_externalGraphSlots = 0x80; // CUtlVector< CNmGraphDefinition::ExternalGraphSlot_t >
			 uintptr_t m_nodePaths = 0x108; // CUtlVector< CUtlString >
			 uintptr_t m_runtimeVersionID = 0x120; // V_uuid_t
		}
	}
}
