/*
 * frc4783Defs.h
 */

#ifndef FRC4783DEFS_H_
#define FRC4783DEFS_H_

namespace frc4783 {

typedef enum robotType {
    PROTOCASE,
    STEAMWORKS,
    POWERUP,
    DEEPSPACE
} RobotType_e;

typedef enum motorControllerType {
    DriveFrontLeft,
    DriveFrontRight,
    DriveRearLeft,
    DriveRearRight
} MotorControllerType_e;

typedef enum controllerButtonType {
    Button_A,
    Button_Square = Button_A,
    Button_B,
    Button_Circle = Button_B,
    Button_X,
    Button_Y,
    Button_Triangle = Button_Y,
    Button_Left,
    Button_Back = Button_Left,
    Button_Share = Button_Left,
    Button_Right,
    Button_Start = Button_Right,
    Button_Options = Button_Right,
    Button_Centre,
    Button_Guide = Button_Centre,
    Button_PS4 = Button_Centre,
    Left_Bumper,
    Right_Bumper,
    Left_Trigger,
    Right_Trigger,
    Left_Stick,
    Right_Stick,
    TouchPad,
    Button_Max,
} ControllerButtonType_e;

typedef enum controllerAxesType {
    Left_X_Axis,
    Left_Y_Axis,
    Right_X_Axis,
    Right_Y_Axis
} ControllerAxesType_e;

typedef enum subsystemType {
    Common_drivetrain,  ///< all robots have a drivetrain subsystem
    PowerUp_begin,  ///< start of PowerUp specific subsystems
    PowerUp_Spine,  ///< spine subsystem for elevating spine
    PowerUp_Arm,  ///< arm subsystem for rotating arm
    PowerUp_Claw,  ///< claw subsystem for handling cubes
    PowerUp_end,   ///< end of PowerUp specific subsystems
    DeepSpace_begin,  ///< start of DeepSpace specific subsystems
    DeepSpace_Elevator,  ///< elevator subsystem to reach upper cargo and hatch levels
    DeepSpace_Hatch, ///< hatch subsystem for handling hatches
    DeepSpace_Cargo,  ///< cargo subsytem for handling cargo
    DeepSpace_end,  ///< end of DeepSpace specific subsystems
} SubsystemType_e;

} // namespace frc4783



#endif /* FRC4783DEFS_H_ */
