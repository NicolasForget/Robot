//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

#include "CommandEvaluerPlot.hpp"
#include "Invocateur.hpp"

#include <iostream>

using namespace std;

CommandEvaluerPlot::CommandEvaluerPlot() :CommandRobot(){}

Command* CommandEvaluerPlot::constructeurVirtuel(Invocateur* invocateur){
	return new CommandEvaluerPlot();
}

void CommandEvaluerPlot::execute(){	     
	int i = robot->evaluerPlot();
	cout << i << "cm" << endl;
	robot->afficher();	   
}

void CommandEvaluerPlot::desexecute(){/**notYetImplemented*/}

bool CommandEvaluerPlot::reversible(){
	return true;
}
