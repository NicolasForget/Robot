#ifndef _INVOCATEUR_HPP
#define _INVOCATEUR_HPP

#include "Command.hpp"
#include "Objet.hpp"
#include "Plot.hpp"
#include "Robot.hpp"
#include <string>

class Invocateur{
private:
    Command* cmd;
public:
	void lancer(); 
	Command* getCommand(std::string c);
	int getInt();
	char getChar();
	Objet* getObjet();
	Plot* getPlot();
};

#endif