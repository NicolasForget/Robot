//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

#include "Command.hpp"
#include <iostream>
#include "CommandAvancer.hpp"
#include "CommandTourner.hpp"
#include "CommandSaisir.hpp"
#include "CommandRencontre.hpp"
#include "CommandEvaluerPlot.hpp"
#include "CommandPeser.hpp"
#include "CommandPoser.hpp"
#include "CommandFiger.hpp"
#include "CommandRepartir.hpp"
#include "Invocateur.hpp"

using namespace std;

//map pour garder les commands
map<string,Command*> Command::commands = {
	{"AVANCER", new CommandAvancer(0,0)},
	{"TOURNER", new CommandTourner('S')},
	{"SAISIR", new CommandSaisir(NULL)},
	{"RENCONTRE", new CommandRencontre(NULL)},
	{"EVALUER", new CommandEvaluerPlot()},
	{"PESER", new CommandPeser()},
	{"POSER", new CommandPoser()},
	{"FIGER", new CommandFiger()},
	{"REPARTIR", new CommandRepartir()}
};

//constructeur 
Command::Command(){/**vide*/}

Command* Command::constructeurVirtuel(Invocateur* invocateur){
	return new Command();
}

Command* Command::nouvelleCommand(string c,Invocateur* invocateur){	
	if(commands[c] == NULL) throw new CommandNotExist();
	commands[c]->desexecute(); //Pourquoi ?
	return commands[c]->constructeurVirtuel(invocateur);
}
		
void Command::execute(){/**vide*/}

void Command::desexecute(){/**vide*/}

bool Command::reversible(){
	return true;
}
