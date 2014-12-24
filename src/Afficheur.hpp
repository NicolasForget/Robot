//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

using namespace std;

#ifndef _AFFICHEUR_HPP
#define _AFFICHEUR_HPP

//~ #include "Robot.hpp"

//~ class Robot;

class Afficheur {


    
public:

	//~ Afficheur(Robot* robot) : _robot(robot) {};
	Afficheur() {};
	~Afficheur() {};
    
    virtual void afficher() {};
    
};
 
#endif
