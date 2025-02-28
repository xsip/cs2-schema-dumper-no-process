#include <Windows.h>


namespace xsip {
	namespace worldrenderer {
		namespace WorldBuilderParams_t {
			 uintptr_t m_flMinDrawVolumeSize = 0x0; // float32
			 uintptr_t m_bBuildBakedLighting = 0x4; // bool
			 uintptr_t m_bakedLightingInfo = 0x8; // BakedLightingInfo_t
			 uintptr_t m_nCompileTimestamp = 0x38; // uint64
			 uintptr_t m_nCompileFingerprint = 0x40; // uint64
		}
	}
}
