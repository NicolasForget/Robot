//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

#include "CommandPoser.hpp"
#include "Invocateur.hpp"

#include <iostream>

using namespace std;

CommandPoser::CommandPoser(){}

Command* CommandPoser::constructeurVirtuel(Invocateur* invocateur){
	return new CommandPoser();
}

void CommandPoser::execute(){	     
	robot->poser();
	robot->afficher();
}

void CommandPoser::desexecute(){/**notYetImplemented*/}

bool CommandPoser::reversible(){
	return true;
}
