#include "Commands/DriveWithJoystick.hpp"

namespace frc4783 {

DriveWithJoystick::DriveWithJoystick() {
    //Requires(Robot::drivetrain.get());
}

void DriveWithJoystick::Initialize() {

}

void DriveWithJoystick::Execute() {
	float direction = -1;

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
}

void DriveWithJoystick::Interrupted() {
	End();
}

} // namespace frc4783