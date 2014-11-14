//=======================================================================
// 	Analyse et conception
//		Objet.hpp
//-----------------------------------------------------------------------
// 	Nicolas Forget - Jerome Rancati
// 		Si4 G2
//=======================================================================

#ifndef _OBJET_HPP
#define _OBJET_HPP

#include "Exception.hpp"

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
	class NegativePoidsException:public Exception {};
	
	// Display
    friend ostream& operator<<(ostream& os, Objet& obj);

};

#endif

