#include <exception>
#include <string>
using namespace std;

#include "Robot.h"
#include "Etat.h"
#include "Position.h"
#include "Plot.h"
#include "Objet.h"
#include "Afficheur.h"

void Robot::avancer(int aX, int aY) {
	throw "Not yet implemented";
}

void Robot::tourner(string aDirection) {
	throw "Not yet implemented";
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

