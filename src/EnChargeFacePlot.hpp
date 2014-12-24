//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

#include "EnRoute.hpp"

#ifndef _EN_CHARGE_FACE_PLOT_HPP
#define	_EN_CHARGE_FACE_PLOT_HPP

using namespace std;

class EnChargeFacePlot : public EnRoute {

private:
	
	static EnChargeFacePlot* EnChargeFacePlotUnique;
	
public:

	EnChargeFacePlot(){};
	
	static EnChargeFacePlot* getInstance();
	
	virtual Etat* tourner();
	virtual Etat* poser();
	virtual void peser();
	virtual void evaluerPlot();
	
	virtual string toString(){return "en charge face a un plot";};
	
};

#endif
