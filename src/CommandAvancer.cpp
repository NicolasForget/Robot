#include "CommandAvancer.hpp"
#include "Invocateur.hpp"
#include <iostream>
using namespace std;
	    CommandAvancer::CommandAvancer(int x,int y ) :CommandRobot(), _x(x),_y(y) {         
	    }

		Command* CommandAvancer::constructeurVirtuel(Invocateur* invocateur){
			_x = invocateur->getInt();
			_y = invocateur->getInt();
			
			return new CommandAvancer(_x,_y);
		}
		
		void CommandAvancer::execute(){	     
		     robot->avancer(new Position(_x,_y));
		     robot->afficher();
		   
		}
		void CommandAvancer::desexecute(){
		
		}
		bool CommandAvancer::reversible(){
			return true;
		}