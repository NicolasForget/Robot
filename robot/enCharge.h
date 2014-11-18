#include <exception>
using namespace std;

#ifndef __enCharge_h__
#define __enCharge_h__

#include "Etat.h"
#include "enRoute.h"

// class Etat;
// class enRoute;
class enCharge;

class enCharge: public enRoute
{
	private: static enCharge _enChargeUnique;

	public: void avancer();

	public: void int_peser();

	public: void rencontrerPlot();

	protected: enCharge();

	public: static enCharge instance() {
		throw "Not yet implemented";
	}

	public: Etat tourner();
};

#endif
