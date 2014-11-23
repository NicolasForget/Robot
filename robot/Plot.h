#ifndef _PLOT_H
#define _PLOT_H

#include <iostream>
using namespace std;

class Plot {

private:
	int hauteur;

public:
	//Constructor
	Plot(int htr);
	Plot();

	//get
	int getHauter();

	//Exception
	class NegativeHauteurException{};

	//Display
	friend ostream& operator<<(ostream& os, Plot& obs);
};

#endif
