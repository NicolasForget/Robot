//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

#include <string>
#include <exception>
#include <iostream>

using namespace std;

#ifndef __ETAT_HPP__
#define __ETAT_HPP__

class WrongStatExeption{};

class Etat {

public:

	Etat(){};
	
	virtual void avancer(){throw WrongStatExeption();};
	virtual Etat* tourner(){throw WrongStatExeption();};
	virtual Etat* saisir(){throw WrongStatExeption();};
	virtual Etat* poser(){throw WrongStatExeption();};
	virtual void peser(){throw WrongStatExeption();};
	virtual Etat* rencontrerPlot(){throw WrongStatExeption();};
	virtual void evaluerPlot(){throw WrongStatExeption();};
	virtual Etat* figer(Etat* e){throw WrongStatExeption();};
	virtual Etat* repartir(){throw WrongStatExeption();};
	
	virtual string toString(){return "";};
	
};

#endif
