//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

#include "Etat.hpp"
#include "Fige.hpp"

#ifndef _EN_ROUTE_HPP
#define	_EN_ROUTE_HPP

using namespace std;

class EnRoute : public Etat {

public:

	EnRoute(){};
	
	Etat* figer(Etat* e);
	
};

#endif
