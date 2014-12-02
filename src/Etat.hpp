//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

#include <exception>
using namespace std;

#ifndef __ETAT_HPP__
#define __ETAT_HPP__

#include "Robot.hpp"

//~ class Robot;
//~ class Etat;

class Etat {

public:
	void avancer();
	void tourner();
	void saisir();
	void poser();
	int peser();
	void rencontrerPlot();
	int evaluerPlot();
	void figer();
	void repartir();
	
	class WrongStatExeption{};
};

#endif
