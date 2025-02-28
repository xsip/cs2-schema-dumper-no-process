#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace CAnimSkeleton {
			 uintptr_t m_localSpaceTransforms = 0x10;
			 uintptr_t m_modelSpaceTransforms = 0x28;
			 uintptr_t m_boneNames = 0x40;
			 uintptr_t m_children = 0x58;
			 uintptr_t m_parents = 0x70;
			 uintptr_t m_feet = 0x88;
			 uintptr_t m_morphNames = 0xa0;
			 uintptr_t m_lodBoneCounts = 0xb8;
		}
	}
}
