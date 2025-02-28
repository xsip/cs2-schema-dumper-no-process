#include <Windows.h>


namespace xsip {
	namespace server {
		namespace dynpitchvol_base_t {
			 uintptr_t preset = 0x0;
			 uintptr_t pitchrun = 0x4;
			 uintptr_t pitchstart = 0x8;
			 uintptr_t spinup = 0xc;
			 uintptr_t spindown = 0x10;
			 uintptr_t volrun = 0x14;
			 uintptr_t volstart = 0x18;
			 uintptr_t fadein = 0x1c;
			 uintptr_t fadeout = 0x20;
			 uintptr_t lfotype = 0x24;
			 uintptr_t lforate = 0x28;
			 uintptr_t lfomodpitch = 0x2c;
			 uintptr_t lfomodvol = 0x30;
			 uintptr_t cspinup = 0x34;
			 uintptr_t cspincount = 0x38;
			 uintptr_t pitch = 0x3c;
			 uintptr_t spinupsav = 0x40;
			 uintptr_t spindownsav = 0x44;
			 uintptr_t pitchfrac = 0x48;
			 uintptr_t vol = 0x4c;
			 uintptr_t fadeinsav = 0x50;
			 uintptr_t fadeoutsav = 0x54;
			 uintptr_t volfrac = 0x58;
			 uintptr_t lfofrac = 0x5c;
			 uintptr_t lfomult = 0x60;
		}
	}
}
