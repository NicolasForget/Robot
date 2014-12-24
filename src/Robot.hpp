//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

#ifndef _ROBOT_HPP
#define _ROBOT_HPP

#include "Position.hpp"
#include "Plot.hpp"
#include "Objet.hpp"
#include "Etat.hpp"
#include "Afficheur.hpp"

#include <vector>
#include <iostream>

using namespace std;

//~ class Etat;
class Afficheur;

class Robot {

private :

	//direction : N = Nord / E = Est / S = Sud / O = Ouest
	char _direction;
	Plot* _plot;
	Objet* _objet;
	Position* _position;
	Etat* _etat;
	//liste d'afficheur a notifier
	vector<Afficheur*> _listeAfficheurs;
	
public : 
	//Constructor
	Robot(char dct, Position* pst);
	
	//methodes
	void avancer(Position* pst);
	void tourner(char dir);
	void saisir(Objet* obj);
	void poser();
	int peser();
	void rencontrerPlot(Plot* obs);
	int evaluerPlot();
	void figer();
	void repartir();
	
	//get
	char getDirection();
	Plot* getPlot();
	Objet* getObjet();
	Position* getPosition();
	Etat* getEtat();
	
	// Display
	void attacherAfficheur(Afficheur* a);
	void detacherAfficheur(Afficheur* a);
	void afficher();
	
    friend ostream& operator<<(ostream& os, Robot& rbt);
    
    //Exception
    class WrongStatExeption {};

};

#endif

