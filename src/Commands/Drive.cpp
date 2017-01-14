#include <Commands/Drive.h>
#include <Joystick.h>
#include <OI.h>
#include <Subsystems/Drivetrain.h>

Drive::Drive() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(CommandBase::driveTrain);
}

// Called just before this Command runs the first time
void Drive::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void Drive::Execute() {
	double leftax = CommandBase::oi->flight_one->GetRawAxis(1);
	double rightax = CommandBase::oi->flight_two->GetRawAxis(1);
	CommandBase::driveTrain->TankDrive(leftax * -1, rightax);
}

// Make this return true when this Command no longer needs to run execute()
bool Drive::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void Drive::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Drive::Interrupted() {

}
