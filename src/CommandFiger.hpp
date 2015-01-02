#ifndef _COMMANDFIGER_HPP
#define _COMMANDFIGER_HPP
#include "CommandRobot.hpp"

class CommandFiger : public CommandRobot{
public:
	    CommandFiger();
		Command* constructeurVirtuel(Invocateur* invocateur);
        
		void execute();
		void desexecute();
		bool reversible();
};
#endif