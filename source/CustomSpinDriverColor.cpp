#include "syati.h"
//As you can see... it was pretty simple to do it lmao.
void customSpinDriverColors(LiveActor* actor, const JMapInfoIter& iter) {
		MR::useStageSwitchAwake(actor, iter);
		f32 frame = 0;
		MR::getJMapInfoArg6NoInit(iter, &frame);
		MR::startBtpAndSetFrameAndStop(actor, "SpinDriverColor", frame);
	}
	
	kmCall(0x8030BBEC, customSpinDriverColors);