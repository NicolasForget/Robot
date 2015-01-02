#include "CommandPeser.hpp"
#include "Invocateur.hpp"
#include <iostream>
using namespace std;
	    CommandPeser::CommandPeser() :CommandRobot(){         
	    }

		Command* CommandPeser::constructeurVirtuel(Invocateur* invocateur){
			return new CommandPeser();
		}
		
		void CommandPeser::execute(){	     
		     int i = robot->peser();
		     cout << i << "kg" << endl;
		     robot->afficher();
		   
		}
		void CommandPeser::desexecute(){
		
		}
		bool CommandPeser::reversible(){
			return true;
		}