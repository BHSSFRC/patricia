#ifndef Lifter_H
#define Lifter_H

#include <Commands/Subsystem.h>
#include <Victor.h>

class Lifter : public Subsystem {

private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor* lifter_bottompart;
	Victor* lifter_top_front;
	Victor* lifter_top_back;

public:
	Lifter();
	void InitDefaultCommand();
	void Lift(bool up, bool stop);
};

#endif  // Lifter_H
