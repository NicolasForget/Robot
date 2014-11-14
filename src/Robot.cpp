//=======================================================================
// 	Analyse et conception
//		Robot.cpp
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

using namespace std;

#include "Robot.hpp"

#include <string>
	
//-----------------------------------------------------------------------
// Constructor :
//-----------------------------------------------------------------------

Robot::Robot(char dct, Position* pst){
	_direction = dct;
	_position = pst;
	_figer = 'N';
	_objet = nullptr;
	_obstacle = nullptr;
	
}

//-----------------------------------------------------------------------
// Methodes
//-----------------------------------------------------------------------
// Comm
void Robot::avancer(Position* pst){
	if(_figer == 'N'){
		cout << "action : aller en " << *pst << endl;
		_position = pst;
	} else {
		cout << "action impossible : le Robot est fige " << endl;
	}
}

// Comm
void Robot::tourner(char dir){
	if(_figer == 'N'){
		cout << "action : tourner vers " << dir << endl;
		_direction = dir;
	} else {
		cout << "action impossible : le Robot est fige " << endl;
	}	
}

// Comm
void Robot::saisir(Objet* obj){
	throw WrongStatExeption();
}

// Comm
void Robot::poser(){
	throw WrongStatExeption();
}

// Comm
int Robot::peser(){
	throw WrongStatExeption();
	return 0;
}

// Comm
void Robot::rencontrerObstacle(Obstacle* obs){
	throw WrongStatExeption();
}

// Comm
int Robot::evaluerObstacle(){
	throw WrongStatExeption();
	return 0;
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

Obstacle* Robot::getObstacle(){
	return _obstacle;
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
	
    os << "Le robot est " << fig << ", oriente vers " << dir << " a " << *pst << endl;
    return os;
}

