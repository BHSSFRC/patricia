#include <Commands/Drive.h>
#include <RobotMap.h>
#include <Subsystems/Drivetrain.h>
#include <iostream>
#include <Victor.h>

Drivetrain::Drivetrain() :
		Subsystem("DriveTrain") {
	drive_motor_l = new Victor(DRIVE_LEFT);
	drive_motor_r = new Victor(DRIVE_RIGHT);
}

void Drivetrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new Drive());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void Drivetrain::TankDrive(double left, double right) {
	drive_motor_l->Set(left);
	drive_motor_r->Set(right);
}
