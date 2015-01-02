//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

using namespace std;

#ifndef _COMMAND_HPP
#define _COMMAND_HPP

#include <string>
#include <map>

class Invocateur;

class Command{
	
private:

	static std::map<std::string,Command*> commands;

public:
	    //exception
	    class CommandNotExist{};

		Command();
		virtual Command* constructeurVirtuel(Invocateur* invocateur);
		static Command* nouvelleCommand(std::string c,Invocateur* invocateur);

		virtual void execute();
		virtual void desexecute();
		virtual bool reversible();
};

#endif
