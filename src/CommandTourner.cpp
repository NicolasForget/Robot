//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

#include "CommandTourner.hpp"
#include "Invocateur.hpp"

#include <iostream>

using namespace std;

CommandTourner::CommandTourner(char dir) :CommandRobot(),_dir(dir){}

Command* CommandTourner::constructeurVirtuel(Invocateur* invocateur){
	_dir = invocateur->getChar();		
	return new CommandTourner(_dir);
}

void CommandTourner::execute(){	     
	robot->tourner(_dir);
	robot->afficher();
}

void CommandTourner::desexecute(){/**notYetImplemented*/}

bool CommandTourner::reversible(){
	return true;
}
