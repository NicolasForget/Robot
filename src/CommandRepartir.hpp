#ifndef _COMMANDREPARTIR_HPP
#define _COMMANDREPARTIR_HPP
#include "CommandRobot.hpp"

class CommandRepartir : public CommandRobot{
private: 
	int _x;
	int _y;
public:
	    CommandRepartir();
		Command* constructeurVirtuel(Invocateur* invocateur);
        
		void execute();
		void desexecute();
		bool reversible();
};
#endif