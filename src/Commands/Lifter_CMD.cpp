#include "Lifter_CMD.h"

Lifter_CMD::Lifter_CMD() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(CommandBase::lifter);
}

// Called just before this Command runs the first time
void Lifter_CMD::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void Lifter_CMD::Execute() {
	int pov = CommandBase::oi->flight_two->GetPOV();
	if (pov == -1) {
		CommandBase::lifter->Lift(true, true);
	} else if (pov == 0) {
		CommandBase::lifter->Lift(true, false);
	}
}

// Make this return true when this Command no longer needs to run execute()
bool Lifter_CMD::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void Lifter_CMD::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Lifter_CMD::Interrupted() {

}
