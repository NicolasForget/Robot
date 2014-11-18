//=======================================================================
// 	Analyse et conception
//		Plot.hpp
//-----------------------------------------------------------------------
// 	Nicolas Forget - Jerome Rancati
// 		Si4 G2
//=======================================================================

#ifndef _Plot_HPP
#define _Plot_HPP

#include <iostream>

using namespace std;

class Plot {
	
	//hauteur
	int _hauteur;

public : 
	//Constructor
	Plot(int htr);
	Plot();
	
	//get
	int getHauteur();
	
	//Exception
	class NegativeHauteurException {};
	
	// Display
    friend ostream& operator<<(ostream& os, Plot& obs);

};

#endif

