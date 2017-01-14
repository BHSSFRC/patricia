#include "Lift.h"

Lift::Lift() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(CommandBase::lifter);
}

// Called just before this Command runs the first time
void Lift::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void Lift::Execute() {
	int pov = CommandBase::oi->flight_one->GetPOV();
	if (pov != -1) {
		if (pov == 0) {
			lifter->Lift(true, false);
		} else if (pov == 180) {
			lifter->Lift(false, false);
		}
	} else {
		lifter->Lift(true, true);
	}
}

// Make this return true when this Command no longer needs to run execute()
bool Lift::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void Lift::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Lift::Interrupted() {

}
