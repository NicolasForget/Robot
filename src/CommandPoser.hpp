//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

using namespace std;

#ifndef _COMMANDPOSER_HPP
#define _COMMANDPOSER_HPP

#include "CommandRobot.hpp"

class CommandPoser : public CommandRobot{
	
public:

	CommandPoser();
	Command* constructeurVirtuel(Invocateur* invocateur);

	void execute();
	void desexecute();
	bool reversible();
};

#endif
