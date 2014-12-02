//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

using namespace std;

#include "EnChargeFacePlot.hpp"
#include "EnCharge.hpp"
#include "AVideFacePlot.hpp"

EnChargeFacePlot* EnChargeFacePlot::EnChargeFacePlotUnique = nullptr;

EnChargeFacePlot* EnChargeFacePlot::getInstance(){
	if(!EnChargeFacePlotUnique){EnChargeFacePlotUnique = new EnChargeFacePlot();};
	return EnChargeFacePlotUnique;
}

Etat* EnChargeFacePlot::tourner(){
	return EnCharge::getInstance();
}

Etat* EnChargeFacePlot::poser(){
	return AVideFacePlot::getInstance();
}

void EnChargeFacePlot::peser(){/** vide */}

void EnChargeFacePlot::evaluerPlot(){/** vide */}
