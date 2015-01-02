//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

using namespace std;

#ifndef _COMMANDTOURNER_HPP
#define _COMMANDTOURNER_HPP

#include "CommandRobot.hpp"

class CommandTourner : public CommandRobot{
	
private: 

	char _dir;
	
public:

	CommandTourner(char);
	Command* constructeurVirtuel(Invocateur* invocateur);

	void execute();
	void desexecute();
	bool reversible();
};

#endif
