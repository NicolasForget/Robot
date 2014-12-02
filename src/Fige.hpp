//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

#ifndef _FIGE_HPP
#define	_FIGE_HPP

#include "Etat.hpp"
#include "EnRoute.hpp"
#include "AVide.hpp"

using namespace std;

class Fige : public Etat {

private:

	static Fige* FigeUnique;
	Etat* ancienEtat;
	
public:

	Fige();
	
	static Fige* getInstance(Etat* e);
	
	virtual Etat* repartir();
	
	void setAncienEtat(Etat* e);
	
};

#endif
