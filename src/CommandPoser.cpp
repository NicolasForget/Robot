#include "CommandPoser.hpp"
#include "Invocateur.hpp"
#include <iostream>
using namespace std;
	    CommandPoser::CommandPoser(){         
	    }

		Command* CommandPoser::constructeurVirtuel(Invocateur* invocateur){
               return new CommandPoser();
		}
		
		void CommandPoser::execute(){	     
		     robot->poser();
		     robot->afficher();
		   
		}
		void CommandPoser::desexecute(){
		
		}
		bool CommandPoser::reversible(){
			return true;
		}