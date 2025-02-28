#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CNmClip {
			 uintptr_t m_skeleton = 0x0; // CStrongHandle< InfoForResourceTypeCNmSkeleton >
			 uintptr_t m_nNumFrames = 0x8; // uint32
			 uintptr_t m_flDuration = 0xc; // float32
			 uintptr_t m_compressedPoseData = 0x10; // CUtlBinaryBlock
			 uintptr_t m_trackCompressionSettings = 0x28; // CUtlVector< NmCompressionSettings_t >
			 uintptr_t m_compressedPoseOffsets = 0x40; // CUtlVector< uint32 >
			 uintptr_t m_syncTrack = 0xa0; // CNmSyncTrack
			 uintptr_t m_rootMotion = 0x150; // CNmRootMotionData
			 uintptr_t m_bIsAdditive = 0x1a0; // bool
		}
	}
}
