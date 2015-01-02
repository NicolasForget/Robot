#include "CommandSaisir.hpp"
#include "Invocateur.hpp"
#include <iostream>
using namespace std;
	    CommandSaisir::CommandSaisir(Objet* obj) :CommandRobot(), _obj(obj) {         
	    }

		Command* CommandSaisir::constructeurVirtuel(Invocateur* invocateur){	
			Objet* obj = invocateur->getObjet();
			return new CommandSaisir(obj);
		}
		
		void CommandSaisir::execute(){	  

		     robot->saisir(_obj);
		     robot->afficher();
		   
		}
		void CommandSaisir::desexecute(){
		
		}
		bool CommandSaisir::reversible(){
			return true;
		}