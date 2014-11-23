//=======================================================================
// 	Analyse et conception
//		Objet.cpp
//-----------------------------------------------------------------------
// 	Nicolas Forget - JYing Jiang
// 		Si4 G1
//=======================================================================

/**
 * test class for the project
 * g++ -g -Wall -std=c++0x -o mainTest mainTest.cpp
 */
	 
using namespace std;

#include "Robot.hpp"

#include <iostream>

int main(){

	cout <<"====================================="<< endl;
	cout <<"Test de Robot--------------------"<< endl;
	cout <<"====================================="<< endl << endl;
	
	cout <<"Creation d'objet"<< endl;
	cout <<"-------------------------------------"<< endl << endl;
	
	Objet obj1(10);
	cout << "* objet 1 : " << obj1;
	Objet obj2(20);
	cout << "* objet 2 : " << obj2;
	Objet obj3(30);
	cout << "* objet 3 : " << obj3;
	cout << endl;
	
	cout <<"Creation d'obstacles"<< endl;
	cout <<"-------------------------------------"<< endl << endl;
	
	Obstacle obs1(11);
	cout << "* obstacle 1 : " << obs1;
	Obstacle obs2(22);
	cout << "* obstacle 2 : " << obs2;
	Obstacle obs3(33);
	cout << "* obstacle 3 : " << obs3;
	cout << endl;
	
	cout <<"Creation de position"<< endl;
	cout <<"-------------------------------------"<< endl << endl;
	
	Position pst1(0, 0);
	cout << "* position 1 : " << pst1;
	Position pst2(5, 5);
	cout << "* position 2 : " << pst2;
	Position pst3(2, 8);
	cout << "* position 3 : " << pst3;
	cout << endl;
	
	cout <<"Creation du Robot"<< endl;
	cout <<"-------------------------------------"<< endl << endl;
	
	Robot Eve('E', &pst1);
	cout << "* Eve : " << Eve;
	cout << endl;
	
	Eve.figer();
	Eve.tourner('N');
	cout << endl;
	
	cout << "* Eve : " << Eve;
	cout << endl;
	
	Eve.repartir();
	Eve.tourner('S');
	Eve.avancer(&pst2);
	cout << endl;
	
	cout << "* Eve : " << Eve;
	cout << endl;
	
	cout << "====================================="<< endl;
	cout<< "Fin de Test---------------------------"<< endl;
	cout << "====================================="<< endl << endl;
	 
	return 0;
 }



