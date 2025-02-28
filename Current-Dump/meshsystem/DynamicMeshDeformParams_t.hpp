#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace DynamicMeshDeformParams_t {
			 uintptr_t m_flTensionCompressScale = 0x0; // float32
			 uintptr_t m_flTensionStretchScale = 0x4; // float32
			 uintptr_t m_bRecomputeSmoothNormalsAfterAnimation = 0x8; // bool
			 uintptr_t m_bComputeDynamicMeshTensionAfterAnimation = 0x9; // bool
			 uintptr_t m_bSmoothNormalsAcrossUvSeams = 0xa; // bool
		}
	}
}
