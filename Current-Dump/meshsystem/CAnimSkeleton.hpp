#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace CAnimSkeleton {
			 uintptr_t m_localSpaceTransforms = 0x10; // CUtlVector< CTransform >
			 uintptr_t m_modelSpaceTransforms = 0x28; // CUtlVector< CTransform >
			 uintptr_t m_boneNames = 0x40; // CUtlVector< CUtlString >
			 uintptr_t m_children = 0x58; // CUtlVector< CUtlVector< int32 > >
			 uintptr_t m_parents = 0x70; // CUtlVector< int32 >
			 uintptr_t m_feet = 0x88; // CUtlVector< CAnimFoot >
			 uintptr_t m_morphNames = 0xa0; // CUtlVector< CUtlString >
			 uintptr_t m_lodBoneCounts = 0xb8; // CUtlVector< int32 >
		}
	}
}
