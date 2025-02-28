#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPulseCell_Outflow_PlaySceneBase {
			 uintptr_t m_OnFinished = 0x48; // CPulse_ResumePoint
			 uintptr_t m_OnCanceled = 0x78; // CPulse_ResumePoint
			 uintptr_t m_Triggers = 0xa8; // CUtlVector< CPulse_OutflowConnection >
		}
	}
}
