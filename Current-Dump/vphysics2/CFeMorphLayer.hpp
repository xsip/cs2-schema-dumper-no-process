#include <Windows.h>


namespace xsip {
	namespace vphysics2 {
		namespace CFeMorphLayer {
			 uintptr_t m_Name = 0x0; // CUtlString
			 uintptr_t m_nNameHash = 0x8; // uint32
			 uintptr_t m_Nodes = 0x10; // CUtlVector< uint16 >
			 uintptr_t m_InitPos = 0x28; // CUtlVector< Vector >
			 uintptr_t m_Gravity = 0x40; // CUtlVector< float32 >
			 uintptr_t m_GoalStrength = 0x58; // CUtlVector< float32 >
			 uintptr_t m_GoalDamping = 0x70; // CUtlVector< float32 >
		}
	}
}
