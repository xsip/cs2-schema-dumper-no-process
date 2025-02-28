#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBaseTrigger {
			 uintptr_t m_bDisabled = 0x810; // bool
			 uintptr_t m_iFilterName = 0x818; // CUtlSymbolLarge
			 uintptr_t m_hFilter = 0x820; // CHandle< CBaseFilter >
			 uintptr_t m_OnStartTouch = 0x828; // CEntityIOOutput
			 uintptr_t m_OnStartTouchAll = 0x850; // CEntityIOOutput
			 uintptr_t m_OnEndTouch = 0x878; // CEntityIOOutput
			 uintptr_t m_OnEndTouchAll = 0x8a0; // CEntityIOOutput
			 uintptr_t m_OnTouching = 0x8c8; // CEntityIOOutput
			 uintptr_t m_OnTouchingEachEntity = 0x8f0; // CEntityIOOutput
			 uintptr_t m_OnNotTouching = 0x918; // CEntityIOOutput
			 uintptr_t m_hTouchingEntities = 0x940; // CUtlVector< CHandle< CBaseEntity > >
			 uintptr_t m_bClientSidePredicted = 0x958; // bool
		}
	}
}
