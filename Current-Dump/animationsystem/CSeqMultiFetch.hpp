#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CSeqMultiFetch {
			 uintptr_t m_flags = 0x0; // CSeqMultiFetchFlag
			 uintptr_t m_localReferenceArray = 0x8; // CUtlVector< int16 >
			 uintptr_t m_nGroupSize = 0x20; // int32[2]
			 uintptr_t m_nLocalPose = 0x28; // int32[2]
			 uintptr_t m_poseKeyArray0 = 0x30; // CUtlVector< float32 >
			 uintptr_t m_poseKeyArray1 = 0x48; // CUtlVector< float32 >
			 uintptr_t m_nLocalCyclePoseParameter = 0x60; // int32
			 uintptr_t m_bCalculatePoseParameters = 0x64; // bool
			 uintptr_t m_bFixedBlendWeight = 0x65; // bool
			 uintptr_t m_flFixedBlendWeightVals = 0x68; // float32[2]
		}
	}
}
