#ifndef _AFFICHAGE_HPP_
#define _AFFICHAGE_HPP_

#include <vector>
#include "AfficheurInterface.hpp"

using namespace std;

class Robot;
class AfficheurInterface;
class Affichage{
private:
	Robot* robot;
	vector<AfficheurInterface*> afficheurs;

public:
	Affichage(Robot*);

	void lier(AfficheurInterface*);
	void delier();
	void afficher();
};

#endif