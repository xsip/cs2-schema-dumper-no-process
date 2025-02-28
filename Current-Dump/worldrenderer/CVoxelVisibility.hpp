#include <Windows.h>


namespace xsip {
	namespace worldrenderer {
		namespace CVoxelVisibility {
			 uintptr_t m_nBaseClusterCount = 0x40;
			 uintptr_t m_nPVSBytesPerCluster = 0x44;
			 uintptr_t m_vMinBounds = 0x48;
			 uintptr_t m_vMaxBounds = 0x54;
			 uintptr_t m_flGridSize = 0x60;
			 uintptr_t m_nSkyVisibilityCluster = 0x64;
			 uintptr_t m_nSunVisibilityCluster = 0x68;
			 uintptr_t m_NodeBlock = 0x6c;
			 uintptr_t m_RegionBlock = 0x74;
			 uintptr_t m_EnclosedClusterListBlock = 0x7c;
			 uintptr_t m_EnclosedClustersBlock = 0x84;
			 uintptr_t m_MasksBlock = 0x8c;
			 uintptr_t m_nVisBlocks = 0x94;
		}
	}
}
