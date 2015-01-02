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



class Plot {
	
	//hauteur
	int _hauteur;
	Position* _position;
	Objet* _objet;

public : 
    //map pour plots
    static std::map<std::string,Plot*> plots;
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
    friend std::ostream& operator<<(std::ostream& os, Plot& obs);

};

#endif

