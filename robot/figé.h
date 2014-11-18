#include <exception>
using namespace std;

#ifndef __figé_h__
#define __figé_h__

#include "Etat.h"

// class Etat;
class figé;

class figé: public Etat
{
	private: static Figé _figéUnique;

	public: void repartir();

	protected: void figé();

	public: static figé instance() {
		throw "Not yet implemented";
	}
};

#endif
