#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CBasePlayerWeaponVData {
			 uintptr_t m_szWorldModel = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
			 uintptr_t m_sToolsOnlyOwnerModelName = 0x108; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
			 uintptr_t m_bBuiltRightHanded = 0x1e8; // bool
			 uintptr_t m_bAllowFlipping = 0x1e9; // bool
			 uintptr_t m_sMuzzleAttachment = 0x1f0; // CAttachmentNameSymbolWithStorage
			 uintptr_t m_szMuzzleFlashParticle = 0x210; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
			 uintptr_t m_bLinkedCooldowns = 0x2f0; // bool
			 uintptr_t m_iFlags = 0x2f1; // ItemFlagTypes_t
			 uintptr_t m_nPrimaryAmmoType = 0x2f2; // AmmoIndex_t
			 uintptr_t m_nSecondaryAmmoType = 0x2f3; // AmmoIndex_t
			 uintptr_t m_iMaxClip1 = 0x2f4; // int32
			 uintptr_t m_iMaxClip2 = 0x2f8; // int32
			 uintptr_t m_iDefaultClip1 = 0x2fc; // int32
			 uintptr_t m_iDefaultClip2 = 0x300; // int32
			 uintptr_t m_bReserveAmmoAsClips = 0x304; // bool
			 uintptr_t m_iWeight = 0x308; // int32
			 uintptr_t m_bAutoSwitchTo = 0x30c; // bool
			 uintptr_t m_bAutoSwitchFrom = 0x30d; // bool
			 uintptr_t m_iRumbleEffect = 0x310; // RumbleEffect_t
			 uintptr_t m_iSlot = 0x314; // int32
			 uintptr_t m_iPosition = 0x318; // int32
			 uintptr_t m_aShootSounds = 0x320; // CUtlOrderedMap< WeaponSound_t, CSoundEventName >
		}
	}
}
