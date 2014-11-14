//=======================================================================
// 	Analyse et conception
//		Position.hpp
//-----------------------------------------------------------------------
// 	Nicolas Forget - Jerome Rancati
// 		Si4 G2
//=======================================================================

#ifndef _POSITION_HPP
#define _POSITION_HPP

#include "Exception.hpp"

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
	class OutOfMapException:public Exception {};
	
	// Display
    friend ostream& operator<<(ostream& os, Position& pst);

};

#endif

