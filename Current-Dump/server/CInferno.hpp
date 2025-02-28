#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CInferno {
			 uintptr_t m_firePositions = 0x7a0;
			 uintptr_t m_fireParentPositions = 0xaa0;
			 uintptr_t m_bFireIsBurning = 0xda0;
			 uintptr_t m_BurnNormal = 0xde0;
			 uintptr_t m_fireCount = 0x10e0;
			 uintptr_t m_nInfernoType = 0x10e4;
			 uintptr_t m_nFireEffectTickBegin = 0x10e8;
			 uintptr_t m_nFireLifetime = 0x10ec;
			 uintptr_t m_bInPostEffectTime = 0x10f0;
			 uintptr_t m_nFiresExtinguishCount = 0x10f4;
			 uintptr_t m_bWasCreatedInSmoke = 0x10f8;
			 uintptr_t m_extent = 0x1300;
			 uintptr_t m_damageTimer = 0x1318;
			 uintptr_t m_damageRampTimer = 0x1330;
			 uintptr_t m_splashVelocity = 0x1348;
			 uintptr_t m_InitialSplashVelocity = 0x1354;
			 uintptr_t m_startPos = 0x1360;
			 uintptr_t m_vecOriginalSpawnLocation = 0x136c;
			 uintptr_t m_activeTimer = 0x1378;
			 uintptr_t m_fireSpawnOffset = 0x1388;
			 uintptr_t m_nMaxFlames = 0x138c;
			 uintptr_t m_nSpreadCount = 0x1390;
			 uintptr_t m_BookkeepingTimer = 0x1398;
			 uintptr_t m_NextSpreadTimer = 0x13b0;
			 uintptr_t m_nSourceItemDefIndex = 0x13c8;
		}
	}
}
