//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

#include "EnRoute.hpp"

#ifndef _A_VIDE_FACE_PLOT_HPP
#define	_A_VIDE_FACE_PLOT_HPP

using namespace std;

class AVideFacePlot : public EnRoute {

private:
	
	static AVideFacePlot* AVideFacePlotUnique;
	
public:

	AVideFacePlot(){};
	
	static AVideFacePlot* getInstance();
	
	virtual Etat* tourner();
	virtual Etat* saisir();
	virtual void evaluerPlot();
	
};

#endif
