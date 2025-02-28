#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CCSPlayerController_InventoryServices {
			 uintptr_t m_unMusicID = 0x40; // uint16
			 uintptr_t m_rank = 0x44; // MedalRank_t[6]
			 uintptr_t m_nPersonaDataPublicLevel = 0x5c; // int32
			 uintptr_t m_nPersonaDataPublicCommendsLeader = 0x60; // int32
			 uintptr_t m_nPersonaDataPublicCommendsTeacher = 0x64; // int32
			 uintptr_t m_nPersonaDataPublicCommendsFriendly = 0x68; // int32
			 uintptr_t m_nPersonaDataXpTrailLevel = 0x6c; // int32
			 uintptr_t m_unEquippedPlayerSprayIDs = 0xf48; // uint32[1]
			 uintptr_t m_vecServerAuthoritativeWeaponSlots = 0xf50; // CUtlVectorEmbeddedNetworkVar< ServerAuthoritativeWeaponSlot_t >
		}
	}
}
