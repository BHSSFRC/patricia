#ifndef ROBOTMAP_H
#define ROBOTMAP_H

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */

// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
// constexpr int LEFTMOTOR = 1;
// constexpr int RIGHTMOTOR = 2;
// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
// constexpr int RANGE_FINDER_PORT = 1;
// constexpr int RANGE_FINDER_MODULE = 1;

// drive motor PWM ports
constexpr int DRIVE_LEFT = 0;
constexpr int DRIVE_RIGHT = 1;
// shooter motor PWM ports
const int SHOOTER_MOTOR_LOW = 2;
const int SHOOTER_MOTOR_HIGH = 3;
// lift motor PWM ports
const int LIFT_BOTTOM = 6;
const int LIFT_TOP_FRONT = 4;
const int LIFT_TOP_BACK = 5;

// drive powers
const double FULL_FORWARD = 1;
const double THREE_QUARTER_FORWARD = 0.75;
const double HALF_FORWARD = 0.5;
const double QUARTER_FORWARD = 0.25;
const double QUARTER_BACKWARD = -QUARTER_FORWARD;
const double HALF_BACKWARD = -HALF_FORWARD;
const double THREE_QUARTER_BACKWARD = -THREE_QUARTER_FORWARD;
const double FULL_BACKWARD = -FULL_FORWARD;

#endif  // ROBOTMAP_H
