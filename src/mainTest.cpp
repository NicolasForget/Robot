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
//~ #include "EnRoute.hpp"
//~ #include "Fige.hpp"

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
	
	cout <<"Creation de Plots"<< endl;
	cout <<"-------------------------------------"<< endl << endl;
	
	Plot plo1(11);
	cout << "* Plot 1 : " << plo1;
	Plot plo2(22);
	cout << "* Plot 2 : " << plo2;
	Plot plo3(33);
	cout << "* Plot 3 : " << plo3;
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
	
	//~ cout <<"Creation des Etat"<< endl;
	//~ cout <<"-------------------------------------"<< endl << endl;
	//~ 
	//~ cout << "* EnRoute " << endl;
	//~ EnRoute route();
	//~ cout << "* Fige " << endl;
	//~ Fige fige();
	
	cout <<"Creation du Robot"<< endl;
	cout <<"-------------------------------------"<< endl << endl;
	
	cout << "* naissance de Eve " << endl;
	Robot Eve('E', &pst1);
	cout << "* Eve est " << Eve;
	cout << endl;
	/*
	Eve.figer();
	Eve.tourner('N');
	cout << endl;
	
	cout << "* Eve est " << Eve;
	cout << endl;
	
	Eve.repartir();
	Eve.tourner('S');
	*/
	Eve.avancer(&pst2);
	cout << endl;
	
	cout << "* Eve est " << Eve;
	cout << endl;
	
	cout << "====================================="<< endl;
	cout<< "Fin de Test---------------------------"<< endl;
	cout << "====================================="<< endl << endl;
	 
	return 0;
 }



