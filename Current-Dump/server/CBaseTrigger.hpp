#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBaseTrigger {
			 uintptr_t m_bDisabled = 0x810;
			 uintptr_t m_iFilterName = 0x818;
			 uintptr_t m_hFilter = 0x820;
			 uintptr_t m_OnStartTouch = 0x828;
			 uintptr_t m_OnStartTouchAll = 0x850;
			 uintptr_t m_OnEndTouch = 0x878;
			 uintptr_t m_OnEndTouchAll = 0x8a0;
			 uintptr_t m_OnTouching = 0x8c8;
			 uintptr_t m_OnTouchingEachEntity = 0x8f0;
			 uintptr_t m_OnNotTouching = 0x918;
			 uintptr_t m_hTouchingEntities = 0x940;
			 uintptr_t m_bClientSidePredicted = 0x958;
		}
	}
}
