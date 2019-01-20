/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <string>
#include <memory>

#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>

#include "Robots/FrcRobot.hpp"
#include "Controllers/FrcController.hpp"

class Robot : public frc::TimedRobot {
public:
    void RobotInit() override;
    void RobotPeriodic() override;
    void AutonomousInit() override;
    void AutonomousPeriodic() override;
    void TeleopInit() override;
    void TeleopPeriodic() override;
    void TestPeriodic() override;

    static std::shared_ptr<frc4783::FrcRobot> getRobot();
    static std::shared_ptr<frc4783::FrcController> getController();

private:
    frc::SendableChooser<std::string> m_chooser;
    const std::string kAutoNameDefault = "Default";
    const std::string kAutoNameCustom = "My Auto";
    std::string m_autoSelected;

    static std::shared_ptr<frc4783::FrcRobot> m_robot;
    static std::shared_ptr<frc4783::FrcController> m_controller;

};
