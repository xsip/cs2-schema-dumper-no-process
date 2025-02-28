#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CSoundEventPathCornerEntity {
			 uintptr_t m_iszPathCorner = 0x598; // CUtlSymbolLarge
			 uintptr_t m_iCountMax = 0x5a0; // int32
			 uintptr_t m_flDistanceMax = 0x5a4; // float32
			 uintptr_t m_flDistMaxSqr = 0x5a8; // float32
			 uintptr_t m_flDotProductMax = 0x5ac; // float32
			 uintptr_t m_bPlaying = 0x5b0; // bool
			 uintptr_t m_vecCornerPairsNetworked = 0x5d8; // CNetworkUtlVectorBase< SoundeventPathCornerPairNetworked_t >
		}
	}
}
