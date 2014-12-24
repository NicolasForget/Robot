//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

using namespace std;

#include "EnRoute.hpp"

Etat* EnRoute::figer(Etat* e) {
	return Fige::getInstance(e);
}
