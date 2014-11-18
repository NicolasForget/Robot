//=======================================================================
// 	Analyse et conception
//		Obstacle.hpp
//-----------------------------------------------------------------------
// 	Nicolas Forget - Jerome Rancati
// 		Si4 G2
//=======================================================================

#ifndef _OBSTACLE_HPP
#define _OBSTACLE_HPP

#include <iostream>

using namespace std;

class Obstacle {
	
	//hauteur
	int _hauteur;

public : 
	//Constructor
	Obstacle(int htr);
	Obstacle();
	
	//get
	int getHauteur();
	
	//Exception
	class NegativeHauteurException {};
	
	// Display
    friend ostream& operator<<(ostream& os, Obstacle& obs);

};

#endif

