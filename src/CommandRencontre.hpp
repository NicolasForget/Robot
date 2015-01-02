//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

using namespace std;

#ifndef _COMMANDRENCONTRE_HPP
#define _COMMANDRENCONTRE_HPP

#include "CommandRobot.hpp"
#include "Plot.hpp"

class CommandRencontre : public CommandRobot{
	
private: 

        Plot* _plot;
        
public:

	CommandRencontre(Plot* plot);
	Command* constructeurVirtuel(Invocateur* invocateur);

	void execute();
	void desexecute();
	bool reversible();
};

#endif
