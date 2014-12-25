//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

/**
 * test class for the project
 * g++ -g -Wall -std=c++0x -o mainTest mainTest.cpp
 */
	 
using namespace std;

#include "Robot.hpp"
#include "AfficheurConsole.hpp"

#include <iostream>

int main(){

	cout << string(50, '\n');
	cout <<"====================================="<< endl;
	cout <<"Analyse et conception"<< endl;
	cout <<"    Simulateur de Robot"<< endl;
	cout <<"-------------------------------------"<< endl;
	cout <<"Nicolas Forget - Ying Jiang"<< endl;
	cout <<"    Si4 G1"<< endl;
	cout <<"====================================="<< endl << endl;
	
	cout <<"Creation d'objet"<< endl;
	cout <<"-------------------------------------"<< endl << endl;
	
	Objet obj1(10);
	cout << "* objet 1 : " << obj1 << endl;
	Objet obj2(20);
	cout << "* objet 2 : " << obj2 << endl;
	Objet obj3(30);
	cout << "* objet 3 : " << obj3 << endl;
	cout << endl;
	
	cout <<"Creation de position"<< endl;
	cout <<"-------------------------------------"<< endl << endl;
	
	Position pst1(1, 1);
	cout << "* position 1 : " << pst1 << endl;
	Position pst2(5, 5);
	cout << "* position 2 : " << pst2 << endl;
	Position pst3(2, 8);
	cout << "* position 3 : " << pst3 << endl;
	cout << endl;
	
	cout <<"Creation de Plots"<< endl;
	cout <<"-------------------------------------"<< endl << endl;
	
	Plot plo1(11, &pst1, &obj1);
	cout << "* Plot 1 : " << plo1 << endl;
	Plot plo2(22, &pst2, &obj2);
	cout << "* Plot 2 : " << plo2 << endl;
	Plot plo3(33, &pst3, &obj3);
	cout << "* Plot 3 : " << plo3 << endl;
	cout << endl;
	
	cout <<"Creation du Robot"<< endl;
	cout <<"-------------------------------------"<< endl << endl;
	cout << "* Naissance de Eve " << endl;
	Robot Eve('E', &pst1);
	cout << "Eve : " << Eve << endl;
	cout << endl;
	
	cout <<"Initialisation de l'afficheur"<< endl;
	cout <<"-------------------------------------"<< endl << endl;
	Eve.attacherAfficheur(new AfficheurConsole(&Eve));
	cout << "* Afficheur console" << endl;
	cout << endl;
	
	cout <<"-- LANCEMENT DE LA SIMULATION --"<< endl;
	cout <<"-------------------------------------"<< endl << endl;
	Eve.afficher();
	cout<< endl;
	
	try{
		Eve.tourner('S');
	}catch(WrongStatExeption* ws){
		cout << "pas normal :(" <<endl;
	}
	Eve.afficher();
	cout<< endl;
	
	try{
		Eve.avancer(&pst2);
	}catch(WrongStatExeption* ws){
		cout << "pas normal :(" <<endl;
	}
	Eve.afficher();
	cout<< endl;
	
	//Repartir --------------------------------
	
	try{
		Eve.figer();
	}catch(WrongStatExeption* ws){
		cout << "pas normal :(" <<endl;
	}
	Eve.afficher();
	cout<< endl;
	
	try{
		Eve.tourner('N');
	}catch(WrongStatExeption* ws){
		cout << "normal ;)" <<endl;
	}
	Eve.afficher();
	cout<< endl;
	
	try{
		Eve.avancer(&pst3);
	}catch(WrongStatExeption* ws){
		cout << "normal ;)" <<endl;
	}
	Eve.afficher();
	cout<< endl;
	
	//Repartir --------------------------------
	
	try{
		Eve.repartir();
	}catch(WrongStatExeption* ws){
		cout << "pas normal :(" <<endl;
	}
	Eve.afficher();
	cout<< endl;
	
	try{
		Eve.tourner('N');
	}catch(WrongStatExeption* ws){
		cout << "normal ;)" <<endl;
	}
	Eve.afficher();
	cout<< endl;
	
	try{
		Eve.avancer(&pst3);
	}catch(WrongStatExeption* ws){
		cout << "normal ;)" <<endl;
	}
	Eve.afficher();
	cout<< endl;
	
	cout << "====================================="<< endl;
	cout<< "Fin de Test---------------------------"<< endl;
	cout << "====================================="<< endl << endl;
	 
	return 0;
 }



