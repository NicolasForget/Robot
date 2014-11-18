#include <exception>
using namespace std;

#ifndef __enChargeFacePlot_h__
#define __enChargeFacePlot_h__

#include "Etat.h"
#include "enRoute.h"

// class Etat;
// class enRoute;
class enChargeFacePlot;

class enChargeFacePlot: public enRoute
{
	private: static enChargeFacePlot _enChargeFacePlotUnique;

	public: void poser();

	public: void int_peser();

	protected: enChargeFacePlot();

	public: static enChargeFacePlot instance() {
		throw "Not yet implemented";
	}

	public: Etat tourner();
};

#endif
