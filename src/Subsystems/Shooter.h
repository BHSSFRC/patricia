#ifndef Shooter_H
#define Shooter_H

#include <Commands/Subsystem.h>
#include <Victor.h>

class Shooter: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	frc::Victor* shooter_t;
	frc::Victor* shooter_b;

public:
	Shooter();
	void InitDefaultCommand();
	void shoot();
	void stop();
};

#endif  // Shooter_H
