#include <Windows.h>


namespace xsip {
	namespace worldrenderer {
		namespace AggregateMeshInfo_t {
			 uintptr_t m_nVisClusterMemberOffset = 0x0; // uint32
			 uintptr_t m_nVisClusterMemberCount = 0x4; // uint8
			 uintptr_t m_bHasTransform = 0x5; // bool
			 uintptr_t m_nDrawCallIndex = 0x6; // int16
			 uintptr_t m_nLODSetupIndex = 0x8; // int16
			 uintptr_t m_nLODGroupMask = 0xa; // uint8
			 uintptr_t m_vTintColor = 0xb; // Color
			 uintptr_t m_objectFlags = 0x10; // ObjectTypeFlags_t
			 uintptr_t m_nLightProbeVolumePrecomputedHandshake = 0x14; // int32
		}
	}
}
