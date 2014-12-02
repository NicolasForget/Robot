//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

using namespace std;

#include "AVide.hpp"
#include "AVideFacePlot.hpp"

AVide* AVide::aVideUnique = nullptr;

AVide* AVide::getInstance(){
	if(!aVideUnique){aVideUnique = new AVide();};
	return aVideUnique;
}

void AVide::avancer(){/** vide */}

Etat* AVide::tourner(){
	return AVide::getInstance();
}

Etat* AVide::rencontrerPlot(){
	return AVideFacePlot::getInstance();
}
