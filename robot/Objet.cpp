#include "Objet.h"

//Constructeur
Objet::Objet(int pds){
	if(pds >= 0){
		_poids = pds;
	}
	else{
		throw NegativePoidsException();
	}
}

Objet::Objet(){
	_poids = 0;
}

//Get
int Objet::getPoids() {
	return _poids;
}

//Display
ostream& operator<<(ostream& os, Objet& obj){
    os << obj.getPoids() << "kg" << endl;
    return os;
}