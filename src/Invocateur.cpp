//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

#include "Invocateur.hpp"

#include <iostream>

using namespace std;

void Invocateur::lancer(string path){
	fichier.open(path);
	if(fichier){
		string mot;
		cout << "* Ouverture du fichier ["+path+"]" << endl;
		cout << "------------------------------------"<< endl << endl;
		
		while(!fichier.eof()){
			fichier >> mot;
			cout << " >> Recuperation de la commande ["+mot+"]" << endl;
			cmd = getCommand(mot);
			try{
				cmd->execute();
			}catch(Etat::WrongStatExeption){
				cerr << "*** [ERROR] WrongStatExeption : could not move ***" << endl;
			}
		}
		cout << " >> Fermeture du fichier ["+path+"]" << endl;
		cout << "------------------------------------"<< endl << endl;
		fichier.close();
	}else{
		cerr << "*** [ERROR] could not open : ["+path+"]" << endl;
	}
}

Command* Invocateur::getCommand(string c){
	try{
		return cmd->nouvelleCommand(c,this);
	}catch(Command::CommandNotExist e){
		cout<<"Command not exist"<<endl;
		return NULL;
	}
}

int Invocateur::getInt(){
	int i;
	fichier >> i;
	return i;
}


char Invocateur::getChar(){
	char c;
	fichier >> c;
	return c;
}


Objet* Invocateur::getObjet(){
	string s;
	fichier >> s;
	Objet* objet = Objet::objets[s];
	return objet;
}


Plot* Invocateur::getPlot(){
	string p;
	fichier >> p;
	Plot* plot = Plot::plots[p];
	return plot;
}
