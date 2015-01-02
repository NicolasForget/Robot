//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

#ifndef _OBJET_HPP
#define _OBJET_HPP

#include <iostream>
#include <map>
#include <string>

class Objet {

protected:	
	//poids
	int _poids;
public : 
    //map pour objets
    static std::map<std::string,Objet*> objets;
	//Constructor
	Objet(int pds);
	Objet();
	
	//get
	int getPoids();
	
	//Exception
	class NegativePoidsException {};
	
	// Display
    friend std::ostream& operator << (std::ostream& os, Objet& obj);
};


#endif

