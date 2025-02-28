#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CMolotovProjectile {
			 uintptr_t m_bIsIncGrenade = 0xb50; // bool
			 uintptr_t m_bDetonated = 0xb5c; // bool
			 uintptr_t m_stillTimer = 0xb60; // IntervalTimer
			 uintptr_t m_bHasBouncedOffPlayer = 0xc40; // bool
		}
	}
}
