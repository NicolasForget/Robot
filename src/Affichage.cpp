#include "Affichage.hpp"

Affichage::Affichage(Robot* robot):robot(robot){}

void Affichage::lier(AfficheurInterface* afficheur)
{
	afficheurs.push_back(afficheur);
}

void Affichage::delier()
{
	afficheurs.pop_back();
}

void Affichage::afficher()
{
	for(int i = 0, size = afficheurs.size(); i < size; ++i)
		afficheurs[i]->afficher(robot);
}