#include <Commands/Shoot.h>
#include <RobotMap.h>
#include <Subsystems/Shooter.h>

Shooter::Shooter() :
		Subsystem("Shooter") {
	shooter_t = new Victor(SHOOTER_MOTOR_HIGH);
	shooter_b = new Victor(SHOOTER_MOTOR_LOW);
}

void Shooter::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	SetDefaultCommand(new Shoot());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void Shooter::shoot() {
	shooter_t->Set(0.5);
	shooter_b->Set(0.5);
}

void Shooter::stop() {
	shooter_t->Set(0);
	shooter_b->Set(0);
}
