#include <Windows.h>


namespace xsip {
	namespace worldrenderer {
		namespace CVoxelVisibility {
			 uintptr_t m_nBaseClusterCount = 0x40; // uint32
			 uintptr_t m_nPVSBytesPerCluster = 0x44; // uint32
			 uintptr_t m_vMinBounds = 0x48; // Vector
			 uintptr_t m_vMaxBounds = 0x54; // Vector
			 uintptr_t m_flGridSize = 0x60; // float32
			 uintptr_t m_nSkyVisibilityCluster = 0x64; // uint32
			 uintptr_t m_nSunVisibilityCluster = 0x68; // uint32
			 uintptr_t m_NodeBlock = 0x6c; // VoxelVisBlockOffset_t
			 uintptr_t m_RegionBlock = 0x74; // VoxelVisBlockOffset_t
			 uintptr_t m_EnclosedClusterListBlock = 0x7c; // VoxelVisBlockOffset_t
			 uintptr_t m_EnclosedClustersBlock = 0x84; // VoxelVisBlockOffset_t
			 uintptr_t m_MasksBlock = 0x8c; // VoxelVisBlockOffset_t
			 uintptr_t m_nVisBlocks = 0x94; // VoxelVisBlockOffset_t
		}
	}
}
