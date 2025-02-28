#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace AnimationSnapshotBase_t {
			 uintptr_t m_flRealTime = 0x0;
			 uintptr_t m_rootToWorld = 0x10;
			 uintptr_t m_bBonesInWorldSpace = 0x40;
			 uintptr_t m_boneSetupMask = 0x48;
			 uintptr_t m_boneTransforms = 0x60;
			 uintptr_t m_flexControllers = 0x78;
			 uintptr_t m_SnapshotType = 0x90;
			 uintptr_t m_bHasDecodeDump = 0x94;
			 uintptr_t m_DecodeDump = 0x98;
		}
	}
}
