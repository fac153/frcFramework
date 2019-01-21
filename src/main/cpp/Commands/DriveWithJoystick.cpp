
#include "Robot.hpp"
#include "Commands/DriveWithJoystick.hpp"

namespace frc4783 {

DriveWithJoystick::DriveWithJoystick(std::shared_ptr<frc4783::Drivetrain>drivetrain) {
    printf("DriveWithJoystick ctor\n");
    Requires(std::dynamic_pointer_cast<frc::Subsystem>(drivetrain).get());
    m_drivetrain = drivetrain;
}

void DriveWithJoystick::Initialize() {
    printf("DriveWithJoystick::Initialize\n");
}

void DriveWithJoystick::Execute() {
    printf("DriveWithJoystick::Execute\n");
    float direction = -1;
    float speed = 0.0;
    float turn = 0.0;

    std::shared_ptr<frc4783::FrcController> ctrl = Robot::getController();
    if (ctrl != nullptr) {
        speed = direction * (-ctrl->getRawAxis(frc4783::Left_Y_Axis));
        turn = (-0.75 * ctrl->getRawAxis(frc4783::Right_X_Axis));
    }

    m_drivetrain->ArcadeDrive(speed, turn);

#if 0
    if (Robot::drivetrain->IsSpine == true){
        direction = 1;
    }

    float speed = direction * (-Robot::oi->driveStick->GetRawAxis(OI::LEFT_Y_AXIS));
    float turn = (-0.75 * Robot::oi->driveStick->GetRawAxis(OI::RIGHT_X_AXIS));

    if (Robot::oi->driveStick->GetRawButton(6)) {
        speed = 0.65 * speed;
    }

    if (Robot::oi->driveStick->GetRawButton(6)) {
        turn = 0.8 * turn;
    }
    speed = 0.85 * speed;
    Robot::drivetrain->ArcadeDrive(speed, turn);
#endif
}

bool DriveWithJoystick::IsFinished() {
	return false;
}

void DriveWithJoystick::End() {
     //Robot::drivetrain->Stop();
     if (m_drivetrain) {
         m_drivetrain->Stop();
     }
}

void DriveWithJoystick::Interrupted() {
	End();
}

} // namespace frc4783