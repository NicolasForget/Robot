//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

using namespace std;

#include "Plot.hpp"

//-----------------------------------------------------------------------
// Constructor :
//-----------------------------------------------------------------------

Plot::Plot(int htr, Position* pst, Objet* obj){
	if(htr > 0 && pst != nullptr && obj != nullptr){
		_hauteur = htr;
		_position = pst;
		_objet = obj;
	}
	else{
		throw BadArgumentForConstructorException();
	}
}

Plot::Plot(int htr){
	if(htr > 0){
		_hauteur = htr;
	}
	else{
		throw BadArgumentForConstructorException();
	}
}

//-----------------------------------------------------------------------
// Default Constructor :
//-----------------------------------------------------------------------

Plot::Plot(){
	_objet = nullptr;
	_position = nullptr;
	_hauteur = 1;
}

//-----------------------------------------------------------------------
// get
//-----------------------------------------------------------------------

int Plot::getHauteur(){
	return _hauteur;
}

Position* Plot::getPosition(){
	return _position;
}

Objet* Plot::getObjet(){
	return _objet;
}

//TODO : setters

//-----------------------------------------------------------------------
// Display
//-----------------------------------------------------------------------

ostream& operator<<(ostream& os, Plot& obs){
	
	string obj = "null";
	Position* pst = obs.getPosition();
		
    if(obs.getObjet()){
		int p = obs.getObjet()->getPoids();
		obj = "objet : " + static_cast<ostringstream*>( &(ostringstream() << p) )->str() + " kg";
	}
	
    os << obs.getHauteur() << "cm de haut " << *pst << " " << obj;
    return os;
}
