/**
 * Drivetrain.hpp 
 */

#ifndef SUBSYSTEM_DRIVETRAIN_H
#define SUBSYSTEM_DRIVETRAIN_H

#include "frc/Commands/Subsystem.h"
#include "frc/WPILib.h"

namespace frc4783 {

class Drivetrain : public frc::Subsystem {

public:

    Drivetrain();
    void InitDefaultCommand();
    void ArcadeDrive(double, double);
    float GetLeftDistance();
    float GetRightDistance();
    float GetLeftCount();
    float GetRightCount();
    void Debug();
    void TankDrive(double leftSpeed, double rightSpeed);
    void Reset();
    void ResetEncoder();
    void Stop();

protected:
    std::shared_ptr<frc::RobotDriveBase> m_drivetrain;
};

} // namespace frc4783

#endif // SUBSYSTEM_DRIVETRAIN_H