#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace VPhysXCollisionAttributes_t {
			 uintptr_t m_CollisionGroup = 0x0; // uint32
			 uintptr_t m_InteractAs = 0x8; // CUtlVector< uint32 >
			 uintptr_t m_InteractWith = 0x20; // CUtlVector< uint32 >
			 uintptr_t m_InteractExclude = 0x38; // CUtlVector< uint32 >
			 uintptr_t m_CollisionGroupString = 0x50; // CUtlString
			 uintptr_t m_InteractAsStrings = 0x58; // CUtlVector< CUtlString >
			 uintptr_t m_InteractWithStrings = 0x70; // CUtlVector< CUtlString >
			 uintptr_t m_InteractExcludeStrings = 0x88; // CUtlVector< CUtlString >
		}
	}
}
