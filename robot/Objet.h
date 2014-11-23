#ifndef _OBJET_H
#define _OBJET_H

#include <iostream>
using namespace std;

class Objet {

private:
	int _poids;

public:
	//Constructor
	Objet(int pds);
	Objet();

	//Get
	int getPoids();

	//Exception
	class NegativePoidsException {};
	
	// Display
    friend ostream& operator<<(ostream& os, Objet& obj);
};

#endif