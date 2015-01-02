//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

#include "CommandFiger.hpp"
#include "Invocateur.hpp"

#include <iostream>

using namespace std;

CommandFiger::CommandFiger(){}

Command* CommandFiger::constructeurVirtuel(Invocateur* invocateur){
	return new CommandFiger();
}

void CommandFiger::execute(){	     
	robot->figer();
	robot->afficher();
}

void CommandFiger::desexecute(){/**notYetImplemented*/}

bool CommandFiger::reversible(){
	return true;
}
