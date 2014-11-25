//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

#ifndef _POSITION_HPP
#define _POSITION_HPP

#include <iostream>

using namespace std;

class Position {
	
	//Coordonees
	int _x;
	int _y;

public : 
	//Constructor
	Position(int iniX, int iniY);
	Position();
	
	//get
	int getX();
	int getY();
	
	//set
	void setX(int newX);
	void setY(int newY);
	
	//Exception
	class OutOfMapException {};
	
	// Display
    friend ostream& operator<<(ostream& os, Position& pst);

};

#endif

