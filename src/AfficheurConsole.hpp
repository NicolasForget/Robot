//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

using namespace std;

#ifndef _AFFICHEUR_CONSOLE_HPP
#define _AFFICHEUR_CONSOLE_HPP

#include "Afficheur.hpp"
#include "Robot.hpp"

class AfficheurConsole : public Afficheur {

private:

    Robot* _robot;
    
public:

	AfficheurConsole(Robot* robot) : _robot(robot) {};
	~AfficheurConsole(){};

    virtual void afficher();
};

#endif
