//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

#include "EnRoute.hpp"

#ifndef _A_VIDE_HPP
#define	_A_VIDE_HPP

using namespace std;

class AVide : public EnRoute {

private:
	
	static AVide* aVideUnique;
	
public:

	AVide(){};
	
	static AVide* getInstance();
	
	virtual void avancer();
	virtual Etat* tourner();
	virtual Etat* rencontrerPlot();
	
};

#endif
