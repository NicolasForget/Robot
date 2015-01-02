#ifndef _COMMANDROBOT_HPP
#define _COMMANDROBOT_HPP
#include "Command.hpp"
#include "Robot.hpp"
#include "Position.hpp"
#include "AfficheurConsole.hpp"
/*
* créer le lien entre robot et command
*/
class CommandRobot : public Command{
protected:
	static Robot* robot;
};
#endif