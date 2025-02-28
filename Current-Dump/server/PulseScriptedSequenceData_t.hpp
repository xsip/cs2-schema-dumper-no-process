#include <Windows.h>


namespace xsip {
	namespace server {
		namespace PulseScriptedSequenceData_t {
			 uintptr_t m_nActorID = 0x0;
			 uintptr_t m_szPreIdleSequence = 0x8;
			 uintptr_t m_szEntrySequence = 0x10;
			 uintptr_t m_szSequence = 0x18;
			 uintptr_t m_szExitSequence = 0x20;
			 uintptr_t m_nMoveTo = 0x28;
			 uintptr_t m_nMoveToGait = 0x2c;
			 uintptr_t m_nHeldWeaponBehavior = 0x30;
			 uintptr_t m_bLoopPreIdleSequence = 0x34;
			 uintptr_t m_bLoopActionSequence = 0x35;
			 uintptr_t m_bLoopPostIdleSequence = 0x36;
			 uintptr_t m_bIgnoreLookAt = 0x37;
		}
	}
}
