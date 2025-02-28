#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace AnimationSnapshotBase_t {
			 uintptr_t m_flRealTime = 0x0; // float32
			 uintptr_t m_rootToWorld = 0x10; // matrix3x4a_t
			 uintptr_t m_bBonesInWorldSpace = 0x40; // bool
			 uintptr_t m_boneSetupMask = 0x48; // CUtlVector< uint32 >
			 uintptr_t m_boneTransforms = 0x60; // CUtlVector< matrix3x4a_t >
			 uintptr_t m_flexControllers = 0x78; // CUtlVector< float32 >
			 uintptr_t m_SnapshotType = 0x90; // AnimationSnapshotType_t
			 uintptr_t m_bHasDecodeDump = 0x94; // bool
			 uintptr_t m_DecodeDump = 0x98; // AnimationDecodeDebugDumpElement_t
		}
	}
}
