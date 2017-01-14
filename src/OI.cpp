#include <OI.h>
#include <Joystick.h>

OI::OI() {
	// Process operator interface input here.

	// controllers
	flight_one = new frc::Joystick(0);
	flight_two = new frc::Joystick(1);
}
