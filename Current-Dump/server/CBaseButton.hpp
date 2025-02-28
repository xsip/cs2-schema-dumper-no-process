#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBaseButton {
			 uintptr_t m_angMoveEntitySpace = 0x810; // QAngle
			 uintptr_t m_fStayPushed = 0x81c; // bool
			 uintptr_t m_fRotating = 0x81d; // bool
			 uintptr_t m_ls = 0x820; // locksound_t
			 uintptr_t m_sUseSound = 0x840; // CUtlSymbolLarge
			 uintptr_t m_sLockedSound = 0x848; // CUtlSymbolLarge
			 uintptr_t m_sUnlockedSound = 0x850; // CUtlSymbolLarge
			 uintptr_t m_sOverrideAnticipationName = 0x858; // CUtlSymbolLarge
			 uintptr_t m_bLocked = 0x860; // bool
			 uintptr_t m_bDisabled = 0x861; // bool
			 uintptr_t m_flUseLockedTime = 0x864; // GameTime_t
			 uintptr_t m_bSolidBsp = 0x868; // bool
			 uintptr_t m_OnDamaged = 0x870; // CEntityIOOutput
			 uintptr_t m_OnPressed = 0x898; // CEntityIOOutput
			 uintptr_t m_OnUseLocked = 0x8c0; // CEntityIOOutput
			 uintptr_t m_OnIn = 0x8e8; // CEntityIOOutput
			 uintptr_t m_OnOut = 0x910; // CEntityIOOutput
			 uintptr_t m_nState = 0x938; // int32
			 uintptr_t m_hConstraint = 0x93c; // CEntityHandle
			 uintptr_t m_hConstraintParent = 0x940; // CEntityHandle
			 uintptr_t m_bForceNpcExclude = 0x944; // bool
			 uintptr_t m_sGlowEntity = 0x948; // CUtlSymbolLarge
			 uintptr_t m_glowEntity = 0x950; // CHandle< CBaseModelEntity >
			 uintptr_t m_usable = 0x954; // bool
			 uintptr_t m_szDisplayText = 0x958; // CUtlSymbolLarge
		}
	}
}
