#ifndef _SUJET_HPP
#define _SUJET_HPP

#include <vector>
#include "Afficheur.hpp"
using namespace std;
class Sujet{
protected:
	vector<Afficheur*> afficheurs;
public:
	Sujet();
	void detacherAfficheur(Afficheur *afficheur);
	void attacherAfficher(Afficheur *afficheur);
	void notify();
};


#endif