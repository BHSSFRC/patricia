#ifndef Lift_H
#define Lift_H

#include "../CommandBase.h"

class Lift : public CommandBase {
public:
	Lift();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // Lift_H
