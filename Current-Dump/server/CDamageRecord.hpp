#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CDamageRecord {
			 uintptr_t m_PlayerDamager = 0x28;
			 uintptr_t m_PlayerRecipient = 0x2c;
			 uintptr_t m_hPlayerControllerDamager = 0x30;
			 uintptr_t m_hPlayerControllerRecipient = 0x34;
			 uintptr_t m_szPlayerDamagerName = 0x38;
			 uintptr_t m_szPlayerRecipientName = 0x40;
			 uintptr_t m_DamagerXuid = 0x48;
			 uintptr_t m_RecipientXuid = 0x50;
			 uintptr_t m_iBulletsDamage = 0x58;
			 uintptr_t m_iDamage = 0x5c;
			 uintptr_t m_iActualHealthRemoved = 0x60;
			 uintptr_t m_iNumHits = 0x64;
			 uintptr_t m_iLastBulletUpdate = 0x68;
			 uintptr_t m_bIsOtherEnemy = 0x6c;
			 uintptr_t m_killType = 0x6d;
		}
	}
}
