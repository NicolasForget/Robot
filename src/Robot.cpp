//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================



#include "Robot.hpp"
#include "Afficheur.hpp"
#include <string>
	
//-----------------------------------------------------------------------
// Constructor :
//-----------------------------------------------------------------------

Robot::Robot(char dct, Position* pst){
	Sujet();
	_direction = dct;
	_position = pst;
	_figer = 'N';
	_objet = nullptr;
	_plot = nullptr;
	_etat = nullptr;
	
	
}

//-----------------------------------------------------------------------
// Methodes
//-----------------------------------------------------------------------
// Comm
void Robot::avancer(Position* pst){
	cout << "action : aller en " << *pst << endl;
	_position = pst;
	notify();
}

// Comm
void Robot::tourner(char dir){
	cout << "action : tourner vers " << dir << endl;
	_direction = dir;
}

// Comm
void Robot::saisir(Objet* obj){
	_objet = obj;
	_etat->saisir();
}

// Comm
void Robot::poser(){
	_etat->poser();
}

// Comm
int Robot::peser(){
	return _etat->peser();
}

// Comm
void Robot::rencontrerPlot(Plot* plo){
	_plot = plo;
	_etat->rencontrerPlot();
}

// Comm
int Robot::evaluerPlot(){
	return _etat->evaluerPlot();
}

// Comm
void Robot::figer(){
	cout << "action : Figer" << endl;
	_figer = 'Y';
}

// Comm
void Robot::repartir(){
	cout << "action : Repartir" << endl;
	_figer = 'N';
}

//-----------------------------------------------------------------------
// get
//-----------------------------------------------------------------------

char Robot::getDirection(){
	return _direction;
}

char Robot::getFiger(){
	return _figer;
}

Plot* Robot::getPlot(){
	return _plot;
}

Objet* Robot::getObjet(){
	return _objet;
}

Position* Robot::getPosition(){
	return _position;
}

//-----------------------------------------------------------------------
// Display
//-----------------------------------------------------------------------

ostream& operator<<(ostream& os, Robot& rbt){
	string dir = "";
	string fig = "";
	Position* pst = rbt.getPosition();
	
	if(rbt.getDirection() == 'N'){dir = "le Nord";}
	if(rbt.getDirection() == 'S'){dir = "le Sud";}
	if(rbt.getDirection() == 'E'){dir = "l'Est";}
	if(rbt.getDirection() == 'O'){dir = "l'Ouest";}
	
	if(rbt.getFiger() == 'Y'){fig = "fige";}
	if(rbt.getFiger() == 'N'){fig = "en route";}
	
    os << fig << ", oriente vers " << dir << " a " << *pst << endl;
    return os;
}
void Robot::notify() {
	for(Afficheur* a : afficheurs) {
			a->afficher(this);
	}
}
