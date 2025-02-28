#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CDamageRecord {
			 uintptr_t m_PlayerDamager = 0x28; // CHandle< CCSPlayerPawn >
			 uintptr_t m_PlayerRecipient = 0x2c; // CHandle< CCSPlayerPawn >
			 uintptr_t m_hPlayerControllerDamager = 0x30; // CHandle< CCSPlayerController >
			 uintptr_t m_hPlayerControllerRecipient = 0x34; // CHandle< CCSPlayerController >
			 uintptr_t m_szPlayerDamagerName = 0x38; // CUtlString
			 uintptr_t m_szPlayerRecipientName = 0x40; // CUtlString
			 uintptr_t m_DamagerXuid = 0x48; // uint64
			 uintptr_t m_RecipientXuid = 0x50; // uint64
			 uintptr_t m_iBulletsDamage = 0x58; // int32
			 uintptr_t m_iDamage = 0x5c; // int32
			 uintptr_t m_iActualHealthRemoved = 0x60; // int32
			 uintptr_t m_iNumHits = 0x64; // int32
			 uintptr_t m_iLastBulletUpdate = 0x68; // int32
			 uintptr_t m_bIsOtherEnemy = 0x6c; // bool
			 uintptr_t m_killType = 0x6d; // EKillTypes_t
		}
	}
}
