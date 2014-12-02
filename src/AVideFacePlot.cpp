//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

using namespace std;

#include "AVideFacePlot.hpp"
#include "AVide.hpp"
#include "EnChargeFacePlot.hpp"

AVideFacePlot* AVideFacePlot::AVideFacePlotUnique = nullptr;

AVideFacePlot* AVideFacePlot::getInstance(){
	if(!AVideFacePlotUnique){AVideFacePlotUnique = new AVideFacePlot();};
	return AVideFacePlotUnique;
}

Etat* AVideFacePlot::tourner(){
	return AVide::getInstance();
}

Etat* AVideFacePlot::saisir(){
	return EnChargeFacePlot::getInstance();
}

void AVideFacePlot::evaluerPlot(){/** vide */}
