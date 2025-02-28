#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CFuncMover {
			 uintptr_t m_bCreateMovableNavMesh = 0x790;
			 uintptr_t m_iszPathName = 0x798;
			 uintptr_t m_hPathMover = 0x7a0;
			 uintptr_t m_iszPathNodeStart = 0x7a8;
			 uintptr_t m_eMoveType = 0x7b0;
			 uintptr_t m_bIsReversing = 0x7b4;
			 uintptr_t m_vTarget = 0x7b8;
			 uintptr_t m_flStartSpeed = 0x7c4;
			 uintptr_t m_flPathLocation = 0x7c8;
			 uintptr_t m_flT = 0x7cc;
			 uintptr_t m_nCurrentNodeIndex = 0x7d0;
			 uintptr_t m_nPreviousNodeIndex = 0x7d4;
			 uintptr_t m_bFixedOrientation = 0x7d8;
			 uintptr_t m_bFixedPitch = 0x7d9;
			 uintptr_t m_eSolidType = 0x7da;
			 uintptr_t m_bIsMoving = 0x7db;
			 uintptr_t m_flTimeToReachMaxSpeed = 0x7dc;
			 uintptr_t m_flDistanceToReachMaxSpeed = 0x7e0;
			 uintptr_t m_flTimeToReachZeroSpeed = 0x7e4;
			 uintptr_t m_flDistanceToReachZeroSpeed = 0x7e8;
			 uintptr_t m_flTimeMovementStart = 0x7ec;
			 uintptr_t m_flTimeMovementStop = 0x7f0;
			 uintptr_t m_hStopAtNode = 0x7f4;
			 uintptr_t m_flPathLocationToBeginStop = 0x7f8;
			 uintptr_t m_iszStartForwardSound = 0x800;
			 uintptr_t m_iszLoopForwardSound = 0x808;
			 uintptr_t m_iszStopForwardSound = 0x810;
			 uintptr_t m_iszStartReverseSound = 0x818;
			 uintptr_t m_iszLoopReverseSound = 0x820;
			 uintptr_t m_iszStopReverseSound = 0x828;
			 uintptr_t m_iszArriveAtDestinationSound = 0x830;
			 uintptr_t m_OnMovementEnd = 0x840;
			 uintptr_t m_bStartAtEnd = 0x868;
			 uintptr_t m_eOrientationUpdate = 0x86c;
			 uintptr_t m_flTimeStartOrientationChange = 0x870;
			 uintptr_t m_flTimeToBlendToNewOrientation = 0x874;
			 uintptr_t m_flDurationBlendToNewOrientationRan = 0x878;
			 uintptr_t m_qOriginalOrientation = 0x880;
		}
	}
}
