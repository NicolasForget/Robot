//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

#ifndef _AFFICHEURINTERFACE_HPP_
#define _AFFICHEURINTERFACE_HPP_

#include "Robot.hpp"

class AfficheurInterface
{

public:
	virtual void afficher(Robot*) = 0;

};

#endif
