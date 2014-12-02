//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

#include "EnRoute.hpp"

#ifndef _EN_CHARGE_HPP
#define	_EN_CHARGE_HPP

using namespace std;

class EnCharge : public EnRoute {

private:
	
	static EnCharge* EnChargeUnique;
	
public:

	EnCharge(){};
	
	static EnCharge* getInstance();
	
	virtual void avancer();
	virtual Etat* tourner();
	virtual void peser();
	virtual Etat* rencontrerPlot();
	
};

#endif
