//=======================================================================
// 	Analyse et conception
//		mainTest.cpp
//-----------------------------------------------------------------------
// 	Nicolas Forget - Jerome Rancati
// 		Si4 G2
//=======================================================================

/**
 * test class for the project
 * g++ -g -Wall -std=c++0x -o mainTest mainTest.cpp
 */
	 
using namespace std;

#include "Robot.hpp"

#include <cstdlib>
#include <string>
#include <iostream>

int main(){

system("clear");

	cout <<"====================================="<< endl;
	cout <<"Test de Robot------------------------"<< endl;
	cout <<"====================================="<< endl << endl;
	
	string cmd;
	int ext = 0;
	
	cout <<"Creation du Robot"<< endl;
	cout <<"-------------------------------------"<< endl << endl;
	
	cout <<"Initialisation a (0;0)"<< endl;
	Position pst(0, 0);
	cout <<"Robot creer oriente vers l'est"<< endl;
	Robot wallE('E', &pst);
	cout <<"-------------------------------------"<< endl << endl;
	
	cout <<"Liste des commandes possible"<< endl;
	cout <<"-------------------------------------"<< endl;
	cout <<"\t notifier //affiche les information du robot"<< endl;
	cout <<"\t avancer //place le robot a une position"<< endl;
	cout <<"\t tourner //change l'orientation du robot"<< endl;
	/*cout <<"\t saisir"<< endl;
	cout <<"\t poser"<< endl;
	cout <<"\t peser"<< endl;
	cout <<"\t rencontrerObstacle"<< endl;
	cout <<"\t evaluerObstacle"<< endl;*/
	cout <<"\t figer //stop le robot"<< endl;
	cout <<"\t repartir //relance le robot"<< endl;
	cout <<"\t commandes //affiche la liste de commandes possible"<< endl;
	cout <<"\t quitter //quite le test du robot"<< endl;
	
	cout << endl;
	cout <<"Entrer votre commande :"<< endl;
	
	while(ext == 0){
		
		cout <<"cmd > ";
		cin >> cmd;
		
		if(cmd == "notifier"){cout << wallE;}
		
		if(cmd == "avancer"){
			cout << endl;
			cout <<"pour avancer vous devez indiquer des coordones"<< endl;
			cout <<"avancer.x > ";
			int x;
			cin >> x;
			cout <<"avancer.y > ";
			int y;
			cin >> y;
			Position p(x, y);
			wallE.avancer(&p);
		}
		
		if(cmd == "tourner"){
			cout << endl;
			cout <<"pour tourner vous devez indiquer une nouvelle direction"<< endl;
			cout <<"\t N = Nord \n\t E = Est \n\t S = Sud \n\t O = Ouest \n";
			cout <<"tourner.direction > ";
			char d;
			cin >> d;
			wallE.tourner(d);
		}
		
		if(cmd == "figer"){wallE.figer();}
		
		if(cmd == "repartir"){wallE.repartir();}
		
		if(cmd == "commandes"){
			cout <<"Liste des commandes possible"<< endl;
			cout <<"-------------------------------------"<< endl;
			cout <<"\t notifier"<< endl;
			cout <<"\t avancer"<< endl;
			cout <<"\t tourner"<< endl;
			/*cout <<"\t saisir"<< endl;
			cout <<"\t poser"<< endl;
			cout <<"\t peser"<< endl;
			cout <<"\t rencontrerObstacle"<< endl;
			cout <<"\t evaluerObstacle"<< endl;*/
			cout <<"\t figer"<< endl;
			cout <<"\t repartir"<< endl;
			cout <<"\t commandes"<< endl;
			cout <<"\t quitter"<< endl;
		}
		
		if(cmd == "quitter"){ext = 1;}
	}
	
	//system("clear");
	
	cout << endl;
	
	cout << "====================================="<< endl;
	cout << "Fin de Test--------------------------"<< endl;
	cout << "====================================="<< endl << endl;
	 
	return 0;
 }



