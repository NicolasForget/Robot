//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

using namespace std;

#ifndef _COMMANDEVALUERPLOT_HPP
#define _COMMANDEVALUERPLOT_HPP

#include "CommandRobot.hpp"

class CommandEvaluerPlot : public CommandRobot{
	
private: 

	int _x;
	int _y;
	
public:

	CommandEvaluerPlot();
	Command* constructeurVirtuel(Invocateur* invocateur);

	void execute();
	void desexecute();
	bool reversible();
};

#endif
