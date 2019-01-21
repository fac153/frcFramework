/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Robot.hpp"
#include "ctre/Phoenix.h"

#include <iostream>
#include <memory>

#include <frc/smartdashboard/SmartDashboard.h>

#include "frc4783Defs.h"

#include "Robots/FrcRobot.hpp"
#include "Robots/DeepSpace.hpp"
#include "Robots/PowerUp.hpp"

#include "Controllers/PS4Controller.hpp"
#include "Controllers/XboxController.hpp"

TalonSRX srx = {0};

std::shared_ptr<frc4783::FrcRobot> Robot::m_robot;
std::shared_ptr<frc4783::FrcController> Robot::m_controller;

void Robot::RobotInit() {

  printf("RobotInit\n");

    const frc4783::RobotType_e robotType = frc4783::POWERUP;

    m_chooser.SetDefaultOption(kAutoNameDefault, kAutoNameDefault);
    m_chooser.AddOption(kAutoNameCustom, kAutoNameCustom);
    frc::SmartDashboard::PutData("Auto Modes", &m_chooser);

    srx.Set(ControlMode::PercentOutput, 0);

    printf("robotType = %d\n", robotType);
    switch(robotType) {
    case frc4783::DEEPSPACE:
    printf("creating DeepSpace Robot\n");
        m_robot.reset(new frc4783::DeepSpace());
        break;
    case frc4783::POWERUP:
    printf("creating PowerUp Robot\n");
        m_robot.reset(new frc4783::PowerUp());
        break;
    default:
        break;
    }

    printf("creating controller\n");
    m_controller.reset(new frc4783::XboxController(0));
}

std::shared_ptr<frc4783::FrcRobot> Robot::getRobot() {
    return m_robot;
}

std::shared_ptr<frc4783::FrcController> Robot::getController() {
    return m_controller;
}

/**
 * This function is called every robot packet, no matter the mode. Use
 * this for items like diagnostics that you want ran during disabled,
 * autonomous, teleoperated and test.
 *
 * <p> This runs after the mode specific periodic functions, but before
 * LiveWindow and SmartDashboard integrated updating.
 */
void Robot::RobotPeriodic() {
  printf("RobotPeriodic\n");
}

/**
 * This autonomous (along with the chooser code above) shows how to select
 * between different autonomous modes using the dashboard. The sendable chooser
 * code works with the Java SmartDashboard. If you prefer the LabVIEW Dashboard,
 * remove all of the chooser code and uncomment the GetString line to get the
 * auto name from the text box below the Gyro.
 *
 * You can add additional auto modes by adding additional comparisons to the
 * if-else structure below with additional strings. If using the SendableChooser
 * make sure to add them to the chooser code above as well.
 */
void Robot::AutonomousInit() {
  m_autoSelected = m_chooser.GetSelected();
  // m_autoSelected = SmartDashboard::GetString("Auto Selector",
  //     kAutoNameDefault);
  std::cout << "Auto selected: " << m_autoSelected << std::endl;

  if (m_autoSelected == kAutoNameCustom) {
    // Custom Auto goes here
  } else {
    // Default Auto goes here
  }
}

void Robot::AutonomousPeriodic() {
  if (m_autoSelected == kAutoNameCustom) {
    // Custom Auto goes here
  } else {
    // Default Auto goes here
  }
}

void Robot::TeleopInit() {}

void Robot::TeleopPeriodic() {}

void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() { return frc::StartRobot<Robot>(); }
#endif
