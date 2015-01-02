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
#include "AfficheurConsole.hpp"
#include <string>
	
//-----------------------------------------------------------------------
// Constructor :
//-----------------------------------------------------------------------

Robot::Robot(char dct, Position* pst){
	_direction = dct;
	_position = pst;
	_objet = nullptr;
	_plot = nullptr;
	_etat = new AVide(); 
	attacherAfficheur(new AfficheurConsole(this));
	
}

//-----------------------------------------------------------------------
// Methodes
//-----------------------------------------------------------------------
// Comm
void Robot::avancer(Position* pst){
	_position->setX(_position->getX()+pst->getX());
	_position->setY(_position->getY()+pst->getY());
	cout << "* Action : aller en " << *_position << endl;	
}

// Comm
void Robot::tourner(char dir){
	cout << "* Action : tourner vers " << dir << endl;
	_plot = nullptr;
	_direction = dir;
	_etat = _etat->tourner();
}

// Comm
void Robot::saisir(Objet* obj){
	cout << "* Action : saisir " << endl;
	_objet = obj;
	_etat = _etat->saisir();

}

// Comm
void Robot::poser(){
	cout << "* Action : poser " << *_objet << endl;
	_objet = nullptr;
	_etat = _etat->poser();
}

// Comm
int Robot::peser(){
	cout << "* Action : peser => ";
	int poid = _objet->getPoids();
	return poid;
}

// Comm
void Robot::rencontrerPlot(Plot* plo){
	cout << "* Action : rencontrer plot " << endl;
	_plot = plo;
	_etat = _etat->rencontrerPlot();
}

// Comm
int Robot::evaluerPlot(){
	cout << "* Action : evaluer plot => ";
	int hauteur = _plot->getHauteur();
	return hauteur;
}

// Comm
void Robot::figer(){
	cout << "* Action : Figer" << endl;
	_etat = _etat->figer(_etat);
}

// Comm
void Robot::repartir(){
	cout << "* Action : Repartir" << endl;
	_etat = _etat->repartir();	
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

void Robot::attacherAfficheur(Afficheur* a){
	
    for(unsigned int i = 0; i < _listeAfficheurs.size(); i++){
		
        if(this->_listeAfficheurs[i] == a){
            break;
		}
    }
    this->_listeAfficheurs.push_back(a);
}

void Robot::detacherAfficheur(Afficheur* a){
	
    for(unsigned int i = 0; i < _listeAfficheurs.size(); i++){
		
        if(this->_listeAfficheurs[i] == a){
            this->_listeAfficheurs.erase(_listeAfficheurs.begin() + i);
		}
    }
}

void Robot::afficher(){
    for(unsigned int i = 0; i < _listeAfficheurs.size(); i++){
        this->_listeAfficheurs[i]->afficher();
	}
}

ostream& operator<<(ostream& os, Robot& rbt){
	os << "coucou je suis le robot" << endl;
	return os;
}

