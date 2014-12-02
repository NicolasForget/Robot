//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

using namespace std;

#include "Robot.hpp"
#include "AVide.hpp"
#include "Fige.hpp"

#include <string>
#include <typeinfo>
	
//-----------------------------------------------------------------------
// Constructor :
//-----------------------------------------------------------------------

Robot::Robot(char dct, Position* pst){
	_direction = dct;
	_position = pst;
	_objet = nullptr;
	_plot = nullptr;
	_etat = new AVide();
	
}

//-----------------------------------------------------------------------
// Methodes
//-----------------------------------------------------------------------
// Comm
void Robot::avancer(Position* pst){
	cout << "action : aller en " << *pst << endl;
	_position = pst;
}

// Comm
void Robot::tourner(char dir){
	cout << "action : tourner vers " << dir << endl;
	_plot = nullptr;
	_direction = dir;
	_etat = _etat->tourner();
}

// Comm
void Robot::saisir(Objet* obj){
	cout << "action : saisir " << *obj << endl;
	_objet = obj;
	_etat = _etat->saisir();
}

// Comm
void Robot::poser(){
	cout << "action : poser " << _objet << endl;
	_objet = nullptr;
	_etat = _etat->poser();
}

// Comm
int Robot::peser(){
	cout << "action : peser " << _objet << endl;
	int poid = _objet->getPoids();
	return poid;
}

// Comm
void Robot::rencontrerPlot(Plot* plo){
	cout << "action : rencontrer plot " << *plo << endl;
	_plot = plo;
	_etat->rencontrerPlot();
}

// Comm
int Robot::evaluerPlot(){
	cout << "action : evaluer plot " << _plot << endl;
	int hauteur = _plot->getHauteur();
	return hauteur;
}

// Comm
void Robot::figer(){
	cout << "action : Figer" << endl;
	_etat->figer(_etat);
}

// Comm
void Robot::repartir(){
	cout << "action : Repartir" << endl;
	_etat->repartir();	
}

//-----------------------------------------------------------------------
// get
//-----------------------------------------------------------------------

char Robot::getDirection(){
	return _direction;
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

Etat* Robot::getEtat(){
	return _etat;
}

//-----------------------------------------------------------------------
// Display
//-----------------------------------------------------------------------

ostream& operator<<(ostream& os, Robot& rbt){
	string dir = "l'Ouest";
	string fig = "en route";
	Position* pst = rbt.getPosition();
	
	if(rbt.getDirection() == 'N'){dir = "le Nord";}
	if(rbt.getDirection() == 'S'){dir = "le Sud";}
	if(rbt.getDirection() == 'E'){dir = "l'Est";}
	
	if(typeid(rbt.getEtat()) == typeid(Fige::getInstance)){fig = "fige";}
	
    os << fig << ", oriente vers " << dir << " a " << *pst << endl;
    return os;
}

