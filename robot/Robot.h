#include <exception>
#include <string>
using namespace std;

#ifndef __Robot_h__
#define __Robot_h__

#include "Etat.h"
#include "Position.h"
#include "Plot.h"
#include "Objet.h"
// #include "Afficheur.h"

class Etat;
class Position;
class Plot;
class Objet;
class Afficheur;
class Robot;

class Robot
{
	private: string _direction;
	private: Etat _etat;
	private: List _listeAfficheur;
	private: Position _position;
	private: Plot _plot;
	private: Objet _objet;
	public: Afficheur* _unnamed_Afficheur_;
	public: Position* _unnamed_Position_;
	public: Plot* _unnamed_Plot_;
	public: Objet* _unnamed_Objet_;
	public: Etat* _unnamed_Etat_;

	public: void avancer(int aX, int aY);

	public: void tourner(string aDirection);

	public: void saisir(Objet aO);

	public: void poser();

	public: int peser();

	public: void rencontrerPlot(Plot aP);

	public: int évaluerPlot();

	public: void figer();

	public: void repartir();

	public: void afficher();

	public: void attacherAfficheur();

	public: void détacherAfficheur();

	public: void setEtat(string aEtat_e);

	public: Etat getEtat();
};

#endif
