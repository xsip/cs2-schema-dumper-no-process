#include <Windows.h>


namespace xsip {
	namespace server {
		namespace dynpitchvol_base_t {
			 uintptr_t preset = 0x0; // int32
			 uintptr_t pitchrun = 0x4; // int32
			 uintptr_t pitchstart = 0x8; // int32
			 uintptr_t spinup = 0xc; // int32
			 uintptr_t spindown = 0x10; // int32
			 uintptr_t volrun = 0x14; // int32
			 uintptr_t volstart = 0x18; // int32
			 uintptr_t fadein = 0x1c; // int32
			 uintptr_t fadeout = 0x20; // int32
			 uintptr_t lfotype = 0x24; // int32
			 uintptr_t lforate = 0x28; // int32
			 uintptr_t lfomodpitch = 0x2c; // int32
			 uintptr_t lfomodvol = 0x30; // int32
			 uintptr_t cspinup = 0x34; // int32
			 uintptr_t cspincount = 0x38; // int32
			 uintptr_t pitch = 0x3c; // int32
			 uintptr_t spinupsav = 0x40; // int32
			 uintptr_t spindownsav = 0x44; // int32
			 uintptr_t pitchfrac = 0x48; // int32
			 uintptr_t vol = 0x4c; // int32
			 uintptr_t fadeinsav = 0x50; // int32
			 uintptr_t fadeoutsav = 0x54; // int32
			 uintptr_t volfrac = 0x58; // int32
			 uintptr_t lfofrac = 0x5c; // int32
			 uintptr_t lfomult = 0x60; // int32
		}
	}
}
