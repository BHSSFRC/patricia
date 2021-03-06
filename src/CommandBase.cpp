#include "CommandBase.h"

#include <Commands/Scheduler.h>

#include "Subsystems/Drivetrain.h"
#include "OI.h"

// Initialize a single static instance of all of your subsystems. The following
// line should be repeated for each subsystem in the project.

std::unique_ptr<OI> CommandBase::oi = std::make_unique<OI>();
Drivetrain* CommandBase::driveTrain = NULL;
Shooter* CommandBase::shooter = NULL;
Lifter* CommandBase::lifter = NULL;

CommandBase::CommandBase(const std::string &name) :
		frc::Command(name) {

}

void CommandBase::init() {
	driveTrain = new Drivetrain();
	shooter = new Shooter();
	lifter = new Lifter();
}
