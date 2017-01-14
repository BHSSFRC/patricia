#include "Shoot.h"

Shoot::Shoot() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(CommandBase::shooter);
}

// Called just before this Command runs the first time
void Shoot::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void Shoot::Execute() {
	frc::Joystick* joy_one = CommandBase::oi.get()->flight_two;
	if (joy_one->GetRawButton(1)) {
		CommandBase::shooter->shoot();
	} else {
		CommandBase::shooter->stop();
	}
}

// Make this return true when this Command no longer needs to run execute()
bool Shoot::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void Shoot::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Shoot::Interrupted() {

}
