#include <exception>
#include <string>
using namespace std;

#ifndef __Robot_h__
#define __Robot_h__

#include "Etat.h"
#include "Position.h"
#include "Plot.h"
#include "Objet.h"
#include "Afficheur.h"

class Robot
{
	private:   
		//Nord,Est,Sud,Ouest
		string _direction;
		//en Route ou figé
	    Etat* _etat;
	    Set<Afficheur*> _listeAfficheur;

	    Position* _position;
	    Plot* _plot;
	    Objet* _objet;

	      
    public:
    	//Constructor
	     Robot(char dct, Position* pst);

	    //Exception
          class WrongStatExeption {};

    	//Methode
	      void avancer(int aX, int aY);
	      void tourner(string aDirection);
	      void saisir(Objet aO);
	      void poser();
	      int peser();
	      void rencontrerPlot(Plot aP);
	      int évaluerPlot();
	      void figer();
	      void repartir();

       //Get
	      string getDirection();
	      Plot* getPlot();
	      Objet* getObjet();
	      Position* getPosition();
	      bool getFiger();
	      Etat* getEtat();

       //Set
	      void setEtat(string aEtat_e);
       
       //Afficheur
	      void afficher();
          void attacherAfficheur();
	      void détacherAfficheur();
	     
	     
};

#endif
