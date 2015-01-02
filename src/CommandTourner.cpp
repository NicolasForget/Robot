#include "CommandTourner.hpp"
#include "Invocateur.hpp"
#include <iostream>
using namespace std;
	    CommandTourner::CommandTourner(char dir) :CommandRobot(),_dir(dir){         
	    }

		Command* CommandTourner::constructeurVirtuel(Invocateur* invocateur){
			_dir = invocateur->getChar();		
			return new CommandTourner(_dir);
		}
		
		void CommandTourner::execute(){	     
		     robot->tourner(_dir);
		     robot->afficher();
		   
		}
		void CommandTourner::desexecute(){
		
		}
		bool CommandTourner::reversible(){
			return true;
		}