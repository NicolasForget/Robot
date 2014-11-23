#include "Plot.h"

//Constructeur default
Plot::Plot(){
	_hauteur = 1;
}

//Constructeur with argument
Plot::Plot(int htr){
	if(htr > 0){
		_hauteur = htr;
	}
	else{
		throw NegativeHauteurException();
	}
}

//Get
int Plot::getHauteur(){
	return _hauteur;
}

//Display
ostream& operator<<(ostream& os, Plot& plot){
    os << plot.getHauteur() << "cm de haut" << endl;
    return os;
}