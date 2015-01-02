//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

using namespace std;

#ifndef _COMMANDROBOT_HPP
#define _COMMANDROBOT_HPP

#include "Command.hpp"
#include "Robot.hpp"
#include "Position.hpp"

class CommandRobot : public Command{
	
protected:

	static Robot* robot;
	
};
#endif
