#include <exception>
#include <string>
using namespace std;

#include "Robot.h"
#include "Etat.h"
#include "Position.h"
#include "Plot.h"
#include "Objet.h"
#include "Afficheur.h"

//Consturcteur
Robot::Robot(char dct, Position* pst){
	_direction = dct;
	_position = pst;
}

void Robot::avancer(int aX, int aY) {
	if ( _etat != NULL) {
    try {
     *_etat->avancer();
     position->setX(position->getX() + aX);
     position->setY(position->getY() + aY);
     }
 catch (EtatRobot::ActionException) {
     cout<<" Le robot ne peux pas avancer."<<endl;
}
}
}

void Robot::tourner(string aDirection) {
	try{
		*_etat = *_etat.tourner();
        _direction = aDirection;
	}
	catch(EtatRobot::ActionException){

	}


}

void Robot::saisir(Objet aO) {
	throw "Not yet implemented";
}

void Robot::poser() {
	throw "Not yet implemented";
}

int Robot::peser() {
	throw "Not yet implemented";
}

void Robot::rencontrerPlot(Plot aP) {
	throw "Not yet implemented";
}

int Robot::évaluerPlot() {
	throw "Not yet implemented";
}

void Robot::figer() {
	throw "Not yet implemented";
}

void Robot::repartir() {
	throw "Not yet implemented";
}

void Robot::afficher() {
	throw "Not yet implemented";
}

void Robot::attacherAfficheur() {
	throw "Not yet implemented";
}

void Robot::détacherAfficheur() {
	throw "Not yet implemented";
}

void Robot::setEtat(string aEtat_e) {
	throw "Not yet implemented";
}

Etat Robot::getEtat() {
	return this->_etat;
}

