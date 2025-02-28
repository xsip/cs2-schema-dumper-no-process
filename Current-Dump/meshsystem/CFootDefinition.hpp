#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace CFootDefinition {
			 uintptr_t m_name = 0x0; // CUtlString
			 uintptr_t m_ankleBoneName = 0x8; // CUtlString
			 uintptr_t m_toeBoneName = 0x10; // CUtlString
			 uintptr_t m_vBallOffset = 0x18; // Vector
			 uintptr_t m_vHeelOffset = 0x24; // Vector
			 uintptr_t m_flFootLength = 0x30; // float32
			 uintptr_t m_flBindPoseDirectionMS = 0x34; // float32
			 uintptr_t m_flTraceHeight = 0x38; // float32
			 uintptr_t m_flTraceRadius = 0x3c; // float32
		}
	}
}
