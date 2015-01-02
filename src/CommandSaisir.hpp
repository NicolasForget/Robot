#ifndef _COMMANDSAISIR_HPP
#define _COMMANDSAISIR_HPP
#include "CommandRobot.hpp"
#include "Objet.hpp"

class CommandSaisir : public CommandRobot{
private: 
	Objet* _obj;
public:
	    CommandSaisir(Objet* obj);
		Command* constructeurVirtuel(Invocateur* invocateur);
        
		void execute();
		void desexecute();
		bool reversible();
};
#endif