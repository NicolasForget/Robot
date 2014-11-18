#include <exception>
using namespace std;

#ifndef __aVideFacePlot_h__
#define __aVideFacePlot_h__

#include "Etat.h"
#include "enRoute.h"

// class Etat;
// class enRoute;
class aVideFacePlot;

class aVideFacePlot: public enRoute
{
	private: static aVideFacePlot _aVideFacePlotUnique;

	public: void int_évaluerPlot();

	public: void saisir();

	protected: aVideFacePlot();

	public: static aVideFacePlot instance() {
		throw "Not yet implemented";
	}

	public: Etat tourner();
};

#endif
