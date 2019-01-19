/**
 * Drivetrain.cpp
 */

#include <memory>

#include "Subsystems/Drivetrain.hpp"
#include "Commands/DriveWithJoystick.hpp"

namespace frc4783 {

Drivetrain::Drivetrain() : Subsystem("DriveTrain") {
}

void Drivetrain::InitDefaultCommand() {
    SetDefaultCommand(new frc4783::DriveWithJoystick());
}

void Drivetrain::Reset(){
    Stop();
    ResetEncoder();
}

void Drivetrain::ArcadeDrive(double speed, double turn){
    if (m_drivetrain != nullptr) {
        std::dynamic_pointer_cast<frc::DifferentialDrive>(m_drivetrain)->ArcadeDrive(speed, turn);
    }
}

void Drivetrain::Stop(){
    ArcadeDrive(0,0);
}

float Drivetrain::GetLeftDistance(){
    //return leftDriveEncoder->GetDistance();
}

float Drivetrain::GetRightDistance(){
    //return rightDriveEncoder->GetDistance();
}

float Drivetrain::GetLeftCount(){
    //return leftDriveEncoder->Get();
}

float Drivetrain::GetRightCount(){
    //return rightDriveEncoder->Get();
}
void Drivetrain::TankDrive(double leftSpeed, double rightSpeed){
    if (m_drivetrain != nullptr) {
        std::dynamic_pointer_cast<frc::DifferentialDrive>(m_drivetrain)->TankDrive(leftSpeed, rightSpeed);
    }
}

void Drivetrain::ResetEncoder(){
    //rightDriveEncoder->Reset();
    //leftDriveEncoder->Reset();
}

} // namespace frc4783
