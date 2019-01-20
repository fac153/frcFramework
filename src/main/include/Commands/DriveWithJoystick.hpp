#ifndef COMMANDS_DRIVEWITHJOYSTICK_H
#define COMMANDS_DRIVEWITHJOYSTICK_H

#include <memory>

#include "frc/WPILib.h"
#include "Subsystems/Drivetrain.hpp"

namespace frc4783 {

class DriveWithJoystick : public frc::Command {
public:
    DriveWithJoystick(std::shared_ptr<frc4783::Drivetrain>drivetrain);
    void Initialize();
    void Execute();
    bool IsFinished();
    void End();
    void Interrupted();

protected:
    std::shared_ptr<frc4783::Drivetrain> m_drivetrain;
};

} // namespace frc4783

#endif  // COMMANDS_DRIVEWITHJOYSTICK_H