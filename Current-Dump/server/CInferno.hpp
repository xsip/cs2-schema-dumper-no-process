#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CInferno {
			 uintptr_t m_firePositions = 0x7a0; // Vector[64]
			 uintptr_t m_fireParentPositions = 0xaa0; // Vector[64]
			 uintptr_t m_bFireIsBurning = 0xda0; // bool[64]
			 uintptr_t m_BurnNormal = 0xde0; // Vector[64]
			 uintptr_t m_fireCount = 0x10e0; // int32
			 uintptr_t m_nInfernoType = 0x10e4; // int32
			 uintptr_t m_nFireEffectTickBegin = 0x10e8; // int32
			 uintptr_t m_nFireLifetime = 0x10ec; // float32
			 uintptr_t m_bInPostEffectTime = 0x10f0; // bool
			 uintptr_t m_nFiresExtinguishCount = 0x10f4; // int32
			 uintptr_t m_bWasCreatedInSmoke = 0x10f8; // bool
			 uintptr_t m_extent = 0x1300; // Extent
			 uintptr_t m_damageTimer = 0x1318; // CountdownTimer
			 uintptr_t m_damageRampTimer = 0x1330; // CountdownTimer
			 uintptr_t m_splashVelocity = 0x1348; // Vector
			 uintptr_t m_InitialSplashVelocity = 0x1354; // Vector
			 uintptr_t m_startPos = 0x1360; // Vector
			 uintptr_t m_vecOriginalSpawnLocation = 0x136c; // Vector
			 uintptr_t m_activeTimer = 0x1378; // IntervalTimer
			 uintptr_t m_fireSpawnOffset = 0x1388; // int32
			 uintptr_t m_nMaxFlames = 0x138c; // int32
			 uintptr_t m_nSpreadCount = 0x1390; // int32
			 uintptr_t m_BookkeepingTimer = 0x1398; // CountdownTimer
			 uintptr_t m_NextSpreadTimer = 0x13b0; // CountdownTimer
			 uintptr_t m_nSourceItemDefIndex = 0x13c8; // uint16
		}
	}
}
