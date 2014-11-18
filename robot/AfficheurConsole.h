#include <exception>
using namespace std;

#ifndef __AfficheurConsole_h__
#define __AfficheurConsole_h__

#include "Afficheur.h"

// class Afficheur;
class AfficheurConsole;

class AfficheurConsole: public Afficheur
{

	public: void afficher();
};

#endif
