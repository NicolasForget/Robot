//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

#ifndef _Plot_HPP
#define _Plot_HPP

#include "Position.hpp"
#include "Objet.hpp"

#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class Plot {
	
	//hauteur
	int _hauteur;
	Position* _position;
	Objet* _objet;

public : 
	//Constructor
	Plot(int htr, Position* pst, Objet* obj);
	Plot(int htr);
	Plot();
	
	//get
	int getHauteur();
	Position* getPosition();
	Objet* getObjet();
	
	//set
	void setHauteur();
	void setPosition();
	void setObjet();
	
	//Exception
	class BadArgumentForConstructorException {};
	class NoObjectFoundException {};
	
	// Display
    friend ostream& operator<<(ostream& os, Plot& obs);

};

#endif

