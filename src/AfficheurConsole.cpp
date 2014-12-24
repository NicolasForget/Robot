//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

using namespace std;

#include "AfficheurConsole.hpp"
#include "Etat.hpp"
#include "Fige.hpp"

#include <iostream>
#include <sstream>

using namespace std;

void AfficheurConsole::afficher() {
	
	string obs = "";
	string obj = "";
	ostringstream hauteur;
	ostringstream poid;
	string dir = "l'Ouest";
	Position* pst = this->_robot->getPosition();
	
	if(this->_robot->getDirection() == 'N'){ dir = "le Nord"; }
	if(this->_robot->getDirection() == 'S'){ dir = "le Sud"; }
	if(this->_robot->getDirection() == 'E'){ dir = "l'Est"; }

	if(this->_robot->getPlot()){
		int h = this->_robot->getPlot()->getHauteur();
		obs = "plot : " + static_cast<ostringstream*>( &(ostringstream() << h) )->str() + " m";
	}
		
    if(this->_robot->getObjet()){
		int p = this->_robot->getObjet()->getPoids();
		obs = "objet : " + static_cast<ostringstream*>( &(ostringstream() << p) )->str() + " kg";
	}
	
	string e = this->_robot->getEtat()->toString();
	
    cout << "Robot " << e << ", oriente vers " << dir << " a " << *pst << obs << obj << endl;
    
}
