#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace CBaseConstraint {
			 uintptr_t m_name = 0x28; // CUtlString
			 uintptr_t m_vUpVector = 0x30; // Vector
			 uintptr_t m_slaves = 0x40; // CUtlLeanVector< CConstraintSlave >
			 uintptr_t m_targets = 0x50; // CUtlVector< CConstraintTarget >
		}
	}
}
