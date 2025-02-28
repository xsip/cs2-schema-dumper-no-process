#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPulseCell_Outflow_ScriptedSequence {
			 uintptr_t m_szSyncGroup = 0x48; // CUtlString
			 uintptr_t m_nExpectedNumSequencesInSyncGroup = 0x50; // int32
			 uintptr_t m_bEnsureOnNavmeshOnFinish = 0x54; // bool
			 uintptr_t m_bDontTeleportAtEnd = 0x55; // bool
			 uintptr_t m_scriptedSequenceDataMain = 0x58; // PulseScriptedSequenceData_t
			 uintptr_t m_vecAdditionalActors = 0x90; // CUtlVector< PulseScriptedSequenceData_t >
			 uintptr_t m_OnFinished = 0xa8; // CPulse_ResumePoint
			 uintptr_t m_OnCanceled = 0xd8; // CPulse_ResumePoint
			 uintptr_t m_Triggers = 0x108; // CUtlVector< CPulse_OutflowConnection >
		}
	}
}
