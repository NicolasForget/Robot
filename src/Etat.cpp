//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

#include <exception>
using namespace std;

#include "Etat.hpp"

void Etat::avancer() {
	throw WrongStatExeption();
}

void Etat::tourner() {
	throw WrongStatExeption();
}

void Etat::saisir() {
	throw WrongStatExeption();
}

void Etat::poser() {
	throw WrongStatExeption();
}

int Etat::peser() {
	throw WrongStatExeption();
}

void Etat::rencontrerPlot() {
	throw WrongStatExeption();
}

int Etat::evaluerPlot() {
	throw WrongStatExeption();
}

void Etat::figer() {
	throw WrongStatExeption();
}

void Etat::repartir() {
	throw WrongStatExeption();
}

