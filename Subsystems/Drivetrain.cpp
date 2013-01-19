// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "Drivetrain.h"
#include "../Robotmap.h"
#include "../Commands/TeleopDrive.h"
Drivetrain::Drivetrain() : Subsystem("Drivetrain") 
{
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	rightMotor = RobotMap::drivetrainRightMotor;
	leftMotor = RobotMap::drivetrainLeftMotor;
	tankDrive = RobotMap::drivetrainTankDrive;
	ultrasonicSensor = RobotMap::drivetrainUltrasonicSensor;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}
    
void Drivetrain::InitDefaultCommand() 
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new TeleopDrive());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
void Drivetrain::TankDrive(Joystick *right, Joystick *left)
{
	tankDrive->TankDrive(left, right);
}
