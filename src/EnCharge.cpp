//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

using namespace std;

#include "EnCharge.hpp"
#include "EnChargeFacePlot.hpp"

EnCharge* EnCharge::EnChargeUnique = nullptr;

EnCharge* EnCharge::getInstance(){
	if(!EnChargeUnique){EnChargeUnique = new EnCharge();};
	return EnChargeUnique;
}

void EnCharge::avancer(){/** vide */}

Etat* EnCharge::tourner(){
	return EnCharge::getInstance();
}

void EnCharge::peser(){/** vide */}

Etat* EnCharge::rencontrerPlot(){
	return EnChargeFacePlot::getInstance();
}
