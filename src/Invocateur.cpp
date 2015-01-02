#include "Invocateur.hpp"	
#include <iostream>
using namespace std;
//obtenir des commandes d'un clavier, les transforme en objets des commandes, puis, command.execute()
	void Invocateur::lancer(){
	  while(true){
		 try{  cout<< "@ please enter a command:\n"<<endl;
           string c;           
           cin >> c;
           cmd = getCommand(c);
           cmd->execute();
          }catch(Etat::WrongStatExeption)
               {cout << "*** [ERROR] WrongStatExeption : could not turn while freez ***" << endl;}
	    }
    }
//transformer des strings aux objets des commands
	Command* Invocateur::getCommand(string c){
		try{
           return cmd->nouvelleCommand(c,this);}
        catch(Command::CommandNotExist e){
        	cout<<"Command not exist"<<endl;
        	return NULL;
        }
	}
//obtenier des arguments de commande, par exemple: "4 5" pour "AVANCER 4 5"
	int Invocateur::getInt(){
		   int i;
		   cin >> i;
              return i;
	}
//obtenier des arguments de commande, par exemple: "SUD" pour "TOURNER SUD"
	char Invocateur::getChar(){
		   char i;
		   cin >> i;
              return i;
	}
//obtenier des objet pour le commande saisir
	Objet* Invocateur::getObjet(){
           string i;
           cin >> i;
           Objet* objet = Objet::objets[i];
           return objet;

	}
//obtenier des plot pour le commande rencontrePlot
	Plot* Invocateur::getPlot(){
           string i;
           cin >> i;
           Plot* plot = Plot::plots[i];
           return plot;

	}