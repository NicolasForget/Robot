#include "CommandFiger.hpp"
#include "Invocateur.hpp"
#include <iostream>
using namespace std;
	    CommandFiger::CommandFiger(){         
	    }

		Command* CommandFiger::constructeurVirtuel(Invocateur* invocateur){
			return new CommandFiger();
		}
		
		void CommandFiger::execute(){	     
		     robot->figer();
		     robot->afficher();
		   
		}
		void CommandFiger::desexecute(){
		
		}
		bool CommandFiger::reversible(){
			return true;
		}