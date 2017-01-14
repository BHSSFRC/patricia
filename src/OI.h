#ifndef OI_H
#define OI_H

#include <Joystick.h>

class OI {
public:
	OI();
	double GetJoystickY();
	frc::Joystick* flight_one;
	frc::Joystick* flight_two;
};

#endif  // OI_H
