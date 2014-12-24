//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

using namespace std;

#include "Fige.hpp"

Fige* Fige::FigeUnique = new Fige();

Fige::Fige(){
	ancienEtat = AVide::getInstance();
}

Fige* Fige::getInstance(Etat* e){
	FigeUnique->setAncienEtat(e);
	return FigeUnique;
}

Etat* Fige::repartir() {
	return ancienEtat;
}

void Fige::setAncienEtat(Etat* e){
	ancienEtat = e;
}
