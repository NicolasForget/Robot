//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

using namespace std;

#ifndef _COMMANDFIGER_HPP
#define _COMMANDFIGER_HPP

#include "CommandRobot.hpp"

class CommandFiger : public CommandRobot{
	
public:

	CommandFiger();
	Command* constructeurVirtuel(Invocateur* invocateur);

	void execute();
	void desexecute();
	bool reversible();
};

#endif
