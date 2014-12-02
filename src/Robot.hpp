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
//~ #include "EnRoute.hpp"
//~ #include "Fige.hpp"

#include <iostream>

using namespace std;

class Etat;

//~ Etat* _route = new EnRoute();
//~ Etat* _fige = new Fige();

//~ EnRoute* _route = new Etat();
//~ Fige* _fige = new Etat();

//~ EnRoute* _route;
//~ Fige* _fige;

class Robot{
	
	//direction
	/**
	 * N = Nord
	 * E = Est
	 * S = Sud
	 * O = Ouest
	 **/
	char _direction;
	
	//EtatGeneral
	/**
	 * Y = Yes
	 * N = No
	 **/
	char _figer;
	
	//Plot, objet
	Plot* _plot;
	Objet* _objet;
	Position* _position;
	Etat* _etat;
	
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
	char getFiger();
	Plot* getPlot();
	Objet* getObjet();
	Position* getPosition();
	
	// Display
    friend ostream& operator<<(ostream& os, Robot& rbt);
    
    //Exception
    class WrongStatExeption {};

    //..........
    void notify();

};

#endif

