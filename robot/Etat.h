#include <exception>
using namespace std;

#ifndef __Etat_h__
#define __Etat_h__

// #include "Robot.h"

class Robot;
class Etat;

class Etat
{
	public: void avancer();

	public: void tourner();

	public: void saisir();

	public: void poser();

	public: int peser();

	public: void rencontrerPlot();

	public: int évaluerPLot();

	public: void figer();

	public: void repartir();
};

#endif
