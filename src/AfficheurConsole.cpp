//=======================================================================
// 	Analyse et conception
//		Simulateur de Robot
//-----------------------------------------------------------------------
// 	Nicolas Forget - Ying Jiang
// 		Si4 G1
//=======================================================================

#include "AfficheurConsole.hpp"
using namespace std;

AffichageConsole::AffichageConsole(string nom):
AfficheurInterface(), _nom(nom)
{}

void AfficheurConsole::afficher(Robot* robot){
    char c = robot->getDirection();
    cout<<"La direction est : "<<c<<endl;

    Plot* p= robot->getPlot();
    cout<<"La hauteur est : "<<p->getHauteur()<<endl;

    Objet* o = robot->getObjet();
    cout<<"Le poids est : "<<o->getPoids()<<endl;

    Position* pst =  robot->getPosition(); 
    cout<<"La position est :  ("<<pst->getX()<<","<<pst->getY()<<")"<<endl;

}
