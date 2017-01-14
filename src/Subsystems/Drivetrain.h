#ifndef Drivetrain_H
#define Drivetrain_H

#include <Commands/Subsystem.h>
#include <Victor.h>

class Drivetrain : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor* drive_motor_l;
	Victor* drive_motor_r;

public:
	Drivetrain();
	void InitDefaultCommand();
	void TankDrive(double left, double right);
};

#endif  // Drivetrain_H
