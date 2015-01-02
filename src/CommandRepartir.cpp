#include "CommandRepartir.hpp"
#include "Invocateur.hpp"
#include <iostream>
using namespace std;
	    CommandRepartir::CommandRepartir(){         
	    }

		Command* CommandRepartir::constructeurVirtuel(Invocateur* invocateur){
			return new CommandRepartir();
		}
		
		void CommandRepartir::execute(){	     
		     robot->repartir();
		     robot->afficher();
		   
		}
		void CommandRepartir::desexecute(){
		
		}
		bool CommandRepartir::reversible(){
			return true;
		}