#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CompositeMaterialEditorPoint_t {
			 uintptr_t m_ModelName = 0x0; // CResourceName
			 uintptr_t m_nSequenceIndex = 0xe0; // int32
			 uintptr_t m_flCycle = 0xe4; // float32
			 uintptr_t m_KVModelStateChoices = 0xe8; // KeyValues3
			 uintptr_t m_bEnableChildModel = 0xf8; // bool
			 uintptr_t m_ChildModelName = 0x100; // CResourceName
			 uintptr_t m_vecCompositeMaterialAssemblyProcedures = 0x1e0; // CUtlVector< CompositeMaterialAssemblyProcedure_t >
			 uintptr_t m_vecCompositeMaterials = 0x1f8; // CUtlVector< CompositeMaterial_t >
		}
	}
}
