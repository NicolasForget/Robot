//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

#ifndef _AFFICHEURCONSOLE_H_
#define _AFFICHEURCONSOLE_H_

#include <string>
#include "Robot.hpp"
#include "AfficheurInterface.hpp"

class AffichageConsole : public AfficheurInterface
{

private:
	string _nom;

public:
	AffichageConsole(string);

	void afficher(Robot*);

};

#endif
