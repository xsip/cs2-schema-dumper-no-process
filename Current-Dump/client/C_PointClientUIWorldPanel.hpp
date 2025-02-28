#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_PointClientUIWorldPanel {
			 uintptr_t m_bForceRecreateNextUpdate = 0xd60; // bool
			 uintptr_t m_bMoveViewToPlayerNextThink = 0xd61; // bool
			 uintptr_t m_bCheckCSSClasses = 0xd62; // bool
			 uintptr_t m_anchorDeltaTransform = 0xd70; // CTransform
			 uintptr_t m_pOffScreenIndicator = 0xf08; // CPointOffScreenIndicatorUi*
			 uintptr_t m_bIgnoreInput = 0xf30; // bool
			 uintptr_t m_bLit = 0xf31; // bool
			 uintptr_t m_bFollowPlayerAcrossTeleport = 0xf32; // bool
			 uintptr_t m_flWidth = 0xf34; // float32
			 uintptr_t m_flHeight = 0xf38; // float32
			 uintptr_t m_flDPI = 0xf3c; // float32
			 uintptr_t m_flInteractDistance = 0xf40; // float32
			 uintptr_t m_flDepthOffset = 0xf44; // float32
			 uintptr_t m_unOwnerContext = 0xf48; // uint32
			 uintptr_t m_unHorizontalAlign = 0xf4c; // uint32
			 uintptr_t m_unVerticalAlign = 0xf50; // uint32
			 uintptr_t m_unOrientation = 0xf54; // uint32
			 uintptr_t m_bAllowInteractionFromAllSceneWorlds = 0xf58; // bool
			 uintptr_t m_vecCSSClasses = 0xf60; // C_NetworkUtlVectorBase< CUtlSymbolLarge >
			 uintptr_t m_bOpaque = 0xf78; // bool
			 uintptr_t m_bNoDepth = 0xf79; // bool
			 uintptr_t m_bRenderBackface = 0xf7a; // bool
			 uintptr_t m_bUseOffScreenIndicator = 0xf7b; // bool
			 uintptr_t m_bExcludeFromSaveGames = 0xf7c; // bool
			 uintptr_t m_bGrabbable = 0xf7d; // bool
			 uintptr_t m_bOnlyRenderToTexture = 0xf7e; // bool
			 uintptr_t m_bDisableMipGen = 0xf7f; // bool
			 uintptr_t m_nExplicitImageLayout = 0xf80; // int32
		}
	}
}
