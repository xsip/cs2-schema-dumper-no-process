#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CCSObserver_ObserverServices {
			 uintptr_t m_hLastObserverTarget = 0x58;
			 uintptr_t m_vecObserverInterpolateOffset = 0x5c;
			 uintptr_t m_vecObserverInterpStartPos = 0x68;
			 uintptr_t m_flObsInterp_PathLength = 0x74;
			 uintptr_t m_qObsInterp_OrientationStart = 0x80;
			 uintptr_t m_qObsInterp_OrientationTravelDir = 0x90;
			 uintptr_t m_obsInterpState = 0xa0;
			 uintptr_t m_bObserverInterpolationNeedsDeferredSetup = 0xa4;
		}
	}
}
