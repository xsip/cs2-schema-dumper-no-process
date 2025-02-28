#include <Windows.h>


namespace xsip {
	namespace client {
		namespace ResponseFollowup {
			 uintptr_t followup_concept = 0x0; // char*
			 uintptr_t followup_contexts = 0x8; // char*
			 uintptr_t followup_delay = 0x10; // float32
			 uintptr_t followup_target = 0x14; // char*
			 uintptr_t followup_entityiotarget = 0x1c; // char*
			 uintptr_t followup_entityioinput = 0x24; // char*
			 uintptr_t followup_entityiodelay = 0x2c; // float32
			 uintptr_t bFired = 0x30; // bool
		}
	}
}
