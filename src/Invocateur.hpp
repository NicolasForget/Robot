//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

#ifndef _INVOCATEUR_HPP
#define _INVOCATEUR_HPP

#include "Command.hpp"
#include "Objet.hpp"
#include "Plot.hpp"
#include "Robot.hpp"

#include <fstream>
#include <string>

class Invocateur{
	
private:

    Command* cmd;
    
    ifstream fichier;
    
public:

	void lancer(string path); 
	
	Command* getCommand(std::string c);
	
	int getInt();
	
	char getChar();
	
	Objet* getObjet();
	
	Plot* getPlot();
};

#endif
