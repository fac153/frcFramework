#ifndef COMMANDS_DRIVEWITHJOYSTICK_H
#define COMMANDS_DRIVEWITHJOYSTICK_H

#include "frc/WPILib.h"

namespace frc4783 {

class DriveWithJoystick : public frc::Command {
public:
	DriveWithJoystick();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

} // namespace frc4783

#endif  // COMMANDS_DRIVEWITHJOYSTICK_H