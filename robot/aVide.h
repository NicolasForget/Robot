#include <exception>
using namespace std;

#ifndef __aVide_h__
#define __aVide_h__

#include "Etat.h"
#include "enRoute.h"

// class Etat;
// class enRoute;
class aVide;

class aVide: public enRoute
{
	private: static aVide _aVideUnique;

	public: void avancer();

	public: void rencontrerPlot();

	protected: aVide();

	public: static aVide instance() {
		throw "Not yet implemented";
	}

	public: Etat tourner();
};

#endif
