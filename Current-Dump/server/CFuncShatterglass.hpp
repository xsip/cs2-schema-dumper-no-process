#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CFuncShatterglass {
			 uintptr_t m_matPanelTransform = 0x790; // matrix3x4_t
			 uintptr_t m_matPanelTransformWsTemp = 0x7c0; // matrix3x4_t
			 uintptr_t m_vecShatterGlassShards = 0x7f0; // CUtlVector< uint32 >
			 uintptr_t m_PanelSize = 0x808; // Vector2D
			 uintptr_t m_flLastShatterSoundEmitTime = 0x810; // GameTime_t
			 uintptr_t m_flLastCleanupTime = 0x814; // GameTime_t
			 uintptr_t m_flInitAtTime = 0x818; // GameTime_t
			 uintptr_t m_flGlassThickness = 0x81c; // float32
			 uintptr_t m_flSpawnInvulnerability = 0x820; // float32
			 uintptr_t m_bBreakSilent = 0x824; // bool
			 uintptr_t m_bBreakShardless = 0x825; // bool
			 uintptr_t m_bBroken = 0x826; // bool
			 uintptr_t m_bGlassNavIgnore = 0x827; // bool
			 uintptr_t m_bGlassInFrame = 0x828; // bool
			 uintptr_t m_bStartBroken = 0x829; // bool
			 uintptr_t m_iInitialDamageType = 0x82a; // uint8
			 uintptr_t m_szDamagePositioningEntityName01 = 0x830; // CUtlSymbolLarge
			 uintptr_t m_szDamagePositioningEntityName02 = 0x838; // CUtlSymbolLarge
			 uintptr_t m_szDamagePositioningEntityName03 = 0x840; // CUtlSymbolLarge
			 uintptr_t m_szDamagePositioningEntityName04 = 0x848; // CUtlSymbolLarge
			 uintptr_t m_vInitialDamagePositions = 0x850; // CUtlVector< Vector >
			 uintptr_t m_vExtraDamagePositions = 0x868; // CUtlVector< Vector >
			 uintptr_t m_vInitialPanelVertices = 0x880; // CUtlVector< Vector4D >
			 uintptr_t m_OnBroken = 0x898; // CEntityIOOutput
			 uintptr_t m_iSurfaceType = 0x8c0; // uint8
			 uintptr_t m_hMaterialDamageBase = 0x8c8; // CStrongHandle< InfoForResourceTypeIMaterial2 >
		}
	}
}
