//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

using namespace std;

#ifndef _COMMANDAVANCER_HPP
#define _COMMANDAVANCER_HPP

#include "CommandRobot.hpp"

class CommandAvancer : public CommandRobot{
	
private: 

	int _x;
	int _y;
public:

	CommandAvancer(int,int);
	Command* constructeurVirtuel(Invocateur* invocateur);
	
	void execute();
	void desexecute();
	bool reversible();
};

#endif
