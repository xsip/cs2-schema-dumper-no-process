#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CompMatPropertyMutator_t {
			 uintptr_t m_bEnabled = 0x0; // bool
			 uintptr_t m_nMutatorCommandType = 0x4; // CompMatPropertyMutatorType_t
			 uintptr_t m_strInitWith_Container = 0x8; // CUtlString
			 uintptr_t m_strCopyProperty_InputContainerSrc = 0x10; // CUtlString
			 uintptr_t m_strCopyProperty_InputContainerProperty = 0x18; // CUtlString
			 uintptr_t m_strCopyProperty_TargetProperty = 0x20; // CUtlString
			 uintptr_t m_strRandomRollInputVars_SeedInputVar = 0x28; // CUtlString
			 uintptr_t m_vecRandomRollInputVars_InputVarsToRoll = 0x30; // CUtlVector< CUtlString >
			 uintptr_t m_strCopyMatchingKeys_InputContainerSrc = 0x48; // CUtlString
			 uintptr_t m_strCopyKeysWithSuffix_InputContainerSrc = 0x50; // CUtlString
			 uintptr_t m_strCopyKeysWithSuffix_FindSuffix = 0x58; // CUtlString
			 uintptr_t m_strCopyKeysWithSuffix_ReplaceSuffix = 0x60; // CUtlString
			 uintptr_t m_nSetValue_Value = 0x68; // CompositeMaterialInputLooseVariable_t
			 uintptr_t m_strGenerateTexture_TargetParam = 0x2f0; // CUtlString
			 uintptr_t m_strGenerateTexture_InitialContainer = 0x2f8; // CUtlString
			 uintptr_t m_nResolution = 0x300; // int32
			 uintptr_t m_bIsScratchTarget = 0x304; // bool
			 uintptr_t m_bSplatDebugInfo = 0x305; // bool
			 uintptr_t m_bCaptureInRenderDoc = 0x306; // bool
			 uintptr_t m_vecTexGenInstructions = 0x308; // CUtlVector< CompMatPropertyMutator_t >
			 uintptr_t m_vecConditionalMutators = 0x320; // CUtlVector< CompMatPropertyMutator_t >
			 uintptr_t m_strPopInputQueue_Container = 0x338; // CUtlString
			 uintptr_t m_strDrawText_InputContainerSrc = 0x340; // CUtlString
			 uintptr_t m_strDrawText_InputContainerProperty = 0x348; // CUtlString
			 uintptr_t m_vecDrawText_Position = 0x350; // Vector2D
			 uintptr_t m_colDrawText_Color = 0x358; // Color
			 uintptr_t m_strDrawText_Font = 0x360; // CUtlString
			 uintptr_t m_vecConditions = 0x368; // CUtlVector< CompMatMutatorCondition_t >
		}
	}
}
