#include "CommandRencontre.hpp"
#include "Invocateur.hpp"
#include <iostream>
using namespace std;
	    CommandRencontre::CommandRencontre(Plot* plot) :CommandRobot(), _plot(plot) {         
	    }

		Command* CommandRencontre::constructeurVirtuel(Invocateur* invocateur){
            _plot = invocateur->getPlot();	
			return new CommandRencontre(_plot);
		}
		
		void CommandRencontre::execute(){	     
		     robot->rencontrerPlot(_plot);
		     robot->afficher();
		   
		}
		void CommandRencontre::desexecute(){
		
		}
		bool CommandRencontre::reversible(){
			return true;
		}