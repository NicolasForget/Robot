//=======================================================================
// 	Analyse et conception
//		Objet.cpp
//-----------------------------------------------------------------------
// 	Nicolas Forget - JYing Jiang
// 		Si4 G1
//=======================================================================

#ifndef _OBJET_HPP
#define _OBJET_HPP

#include <iostream>

using namespace std;

class Objet {
	
	//poids
	int _poids;

public : 
	//Constructor
	Objet(int pds);
	Objet();
	
	//get
	int getPoids();
	
	//Exception
	class NegativePoidsException {};
	
	// Display
    friend ostream& operator<<(ostream& os, Objet& obj);

};

#endif

