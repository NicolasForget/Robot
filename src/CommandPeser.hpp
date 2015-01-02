#ifndef _COMMANDPESER_HPP
#define _COMMANDPESER_HPP
#include "CommandRobot.hpp"

class CommandPeser : public CommandRobot{
private: 
	int _x;
	int _y;
public:
	    CommandPeser();
		Command* constructeurVirtuel(Invocateur* invocateur);
        
		void execute();
		void desexecute();
		bool reversible();
};
#endif