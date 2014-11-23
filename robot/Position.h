#ifndef _POSITION_H
#define _POSITION_H

#include <iostream>

using namespace std;

class Position {

private:

	//Coordonees
	int _x;
	int _y;

public:
    //Constructeur
    Position(int iniX, int iniY);
	Position();

	//Exception
	class OutOfMapException {};

	//Set
	void setx(int x);
    void sety(int y);

   //Get
	int getx();
	int gety();

	// Display
    friend ostream& operator<<(ostream& os, Position& pst);
};

#endif