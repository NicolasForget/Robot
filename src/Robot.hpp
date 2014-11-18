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
#include "Obstacle.hpp"
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
	
	//obstacle, objet
	Obstacle* _obstacle;
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
	void rencontrerObstacle(Obstacle* obs);
	int evaluerObstacle();
	void figer();
	void repartir();
	
	//get
	char getDirection();
	char getFiger();
	Obstacle* getObstacle();
	Objet* getObjet();
	Position* getPosition();
	
	// Display
    friend ostream& operator<<(ostream& os, Robot& rbt);
    
    //Exception
    class WrongStatExeption {};

};

#endif

