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
#include "Invocateur.hpp"
#include "Command.hpp"
#include <iostream>

int main(){

	cout << string(5, '\n');
	cout <<"====================================="<< endl;
	cout <<"Analyse et conception"<< endl;
	cout <<"    Simulateur de Robot"<< endl;
	cout <<"-------------------------------------"<< endl;
	cout <<"Nicolas Forget - Ying Jiang"<< endl;
	cout <<"    Si4 G1"<< endl;
	cout <<"====================================="<< endl << endl;
	
	cout <<"Creation d'objet"<< endl;
	cout <<"-------------------------------------"<< endl << endl;
	
	Objet obj1(10); Objet::objets["obj1"] = &obj1;
	cout << "* objet1 : " << obj1 << endl;
	Objet obj2(20); Objet::objets["obj2"] = &obj2;
	cout << "* objet2 : " << obj2 << endl;
	Objet obj3(30); Objet::objets["obj3"] = &obj3;
	cout << "* objet3 : " << obj3 << endl;
	cout << endl;
	
	cout <<"Creation de position"<< endl;
	cout <<"-------------------------------------"<< endl << endl;
	
	Position pst1(10, 10);
	cout << "* position1 : " << pst1 << endl;
	Position pst2(5, 5);
	cout << "* position2 : " << pst2 << endl;
	Position pst3(2, 8);
	cout << "* position3 : " << pst3 << endl;
	cout << endl;
	
	cout <<"Creation de Plots"<< endl;
	cout <<"-------------------------------------"<< endl << endl;
	
	Plot plo1(11, &pst1, &obj1); Plot::plots["plot1"] = &plo1;
	cout << "* Plot1 : " << plo1 << endl;
	Plot plo2(22, &pst2, &obj2); Plot::plots["plot2"] = &plo2;
	cout << "* Plot2 : " << plo2 << endl;
	Plot plo3(33, &pst3, &obj3); Plot::plots["plot3"] = &plo3;
	cout << "* Plot3 : " << plo3 << endl;
	cout << endl;
	
	cout <<"Creation du Robot"<< endl;
	cout <<"-------------------------------------"<< endl << endl;
	cout << "* Naissance de Eve " << endl;
	Robot Eve('E', new Position(1,1));
	cout << "Eve : " << Eve << endl;
	cout << endl;
	
	cout <<"Initialisation de l'afficheur"<< endl;
	cout <<"-------------------------------------"<< endl << endl;
	//Eve.attacherAfficheur(new AfficheurConsole(&Eve));
	cout << "* Afficheur console" << endl;
	cout << endl;
	
	cout << "====================================="<< endl;
	cout << "Lancement de la simulation ----------"<< endl;
	cout << "====================================="<< endl << endl;
	Eve.afficher();
	cout<< endl;
	
	
	//void avancer(Position* pst); OK
	Eve.avancer(new Position(4,4));
	Eve.afficher();
	cout << endl;
	
	//void tourner(char dir); OK
	Eve.tourner('S');
	Eve.afficher();
	cout << endl;
	
	//void rencontrerPlot(Plot* obs); OK
	Eve.rencontrerPlot(&plo2);
	Eve.afficher();
	cout << endl;
	
	//int evaluerPlot(); OK
	cout << Eve.evaluerPlot() << endl;
	Eve.afficher();
	cout << endl;
	
	//void saisir(Objet* obj); OK
	Eve.saisir(&obj2);
	Eve.afficher();
	cout << endl;
	
	//int peser(); OK
	cout << Eve.peser() << endl;
	Eve.afficher();
	cout << endl;
	
	//void poser(); OK
	Eve.poser();
	Eve.afficher();
	cout << endl;
	
	//void tourner(char dir); OK
	Eve.tourner('O');
	Eve.afficher();
	cout<< endl;
	
	//void figer();
	Eve.figer();
	Eve.afficher();
	cout << endl;
	
	try{Eve.tourner('O');}
	catch(Etat::WrongStatExeption){cout << "*** [ERROR] WrongStatExeption : could not turn while freez ***" << endl;};
	cout << endl;
	
	//void repartir();
	Eve.repartir();
	Eve.afficher();
	cout << endl;
	
	//test invocateur
	Invocateur invocateur;
	invocateur.lancer();

	cout << "====================================="<< endl;
	cout << "Fin de Test--------------------------"<< endl;
	cout << "====================================="<< endl << endl;

	return 0;
 }



