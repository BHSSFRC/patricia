#include <RobotMap.h>
#include <Subsystems/Lifter.h>

Lifter::Lifter() : Subsystem("Lifter") {
	lifter_bottompart = new Victor(LIFT_BOTTOM);
	lifter_top_front = new Victor(LIFT_TOP_FRONT);
	lifter_top_back = new Victor(LIFT_TOP_BACK);
}

void Lifter::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void Lifter::Lift(bool up, bool stop = false) {
	if (stop) {
		lifter_bottompart->Set(0);
		lifter_top_front->Set(0);
		lifter_top_back->Set(0);
		return;
	}
	if (up) {
		lifter_bottompart->Set(0.5);
		lifter_top_front->Set(0.5);
		lifter_top_back->Set(-0.5);
	} else {
		lifter_bottompart->Set(-0.5);
		lifter_top_front->Set(-0.5);
		lifter_top_back->Set(0.5);
	}
}