#include <RobotMap.h>
#include <Commands/Lifter_CMD.h>
#include <Subsystems/Lifter.h>
#include <iostream>

Lifter::Lifter() :
		Subsystem("Lifter") {
	lifter_bottompart = new Victor(LIFT_BOTTOM);
	lifter_top_front = new Victor(LIFT_TOP_FRONT);
	lifter_top_back = new Victor(LIFT_TOP_BACK);
}

void Lifter::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	SetDefaultCommand(new Lifter_CMD());
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
		std::cout << "Lifting up" << std::endl;
		lifter_bottompart->Set(HALF_FORWARD);
		lifter_top_front->Set(HALF_FORWARD);
		lifter_top_back->Set(HALF_FORWARD);
	} else {
		std::cout << "Lifting down" << std::endl;
		lifter_bottompart->Set(HALF_BACKWARD);
		lifter_top_front->Set(HALF_BACKWARD);
		lifter_top_back->Set(HALF_BACKWARD);
	}
}
