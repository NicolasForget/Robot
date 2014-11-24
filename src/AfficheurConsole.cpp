#include "AfficheurConsole.hpp"
#include "Plot.hpp"
#include "Objet.hpp"
#include "Position.hpp"
void afficher(Robot* robot){
    char c = robot->getDirection();
    cout<<"La direction est : "<<c<<endl;

    Plot* p= robot->getPlot();
    cout<<"La hauteur est : "<<p->getHauteur()<<endl;

Objet* o = robot->getObjet();
cout<<"Le poids est : "<<o->getPoids()<<endl;

Position* pst =  robot->getPosition();
cout<<"La position est :  ("<<pst->getX()<<","<<pst->getY()<<")"<<endl;

}