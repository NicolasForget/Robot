//=======================================================================
// 	Analyse et conception
//		Robot.hpp
//-----------------------------------------------------------------------
// 	Nicolas Forget - Jerome Rancati
// 		Si4 G2
//=======================================================================

#ifndef _ROBOT_HPP
#define _ROBOT_HPP

#include "Position.hpp"
#include "Plot.hpp"
#include "Objet.hpp"

#include <iostream>

using namespace std;

class Robot {
	
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
	Plot* _Plot;
	Objet* _objet;
	Position* _position;
	
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

};

#endif

