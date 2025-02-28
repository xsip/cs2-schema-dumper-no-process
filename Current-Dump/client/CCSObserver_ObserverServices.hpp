#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CCSObserver_ObserverServices {
			 uintptr_t m_hLastObserverTarget = 0x58; // CEntityHandle
			 uintptr_t m_vecObserverInterpolateOffset = 0x5c; // Vector
			 uintptr_t m_vecObserverInterpStartPos = 0x68; // Vector
			 uintptr_t m_flObsInterp_PathLength = 0x74; // float32
			 uintptr_t m_qObsInterp_OrientationStart = 0x80; // Quaternion
			 uintptr_t m_qObsInterp_OrientationTravelDir = 0x90; // Quaternion
			 uintptr_t m_obsInterpState = 0xa0; // ObserverInterpState_t
			 uintptr_t m_bObserverInterpolationNeedsDeferredSetup = 0xa4; // bool
		}
	}
}
