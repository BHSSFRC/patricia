#ifndef Lifter_CMD_H
#define Lifter_CMD_H

#include "../CommandBase.h"

class Lifter_CMD : public CommandBase {
public:
	Lifter_CMD();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // Lifter_CMD_H
