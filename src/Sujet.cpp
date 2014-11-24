#include "Sujet.hpp"
#include "AfficheurConsole.hpp"
Sujet::Sujet(){
     afficheurs.push_back(new AfficheurConsole());
}
void Sujet::detacherAfficheur(Afficheur *afficheur){

}
void Sujet::attacherAfficher(Afficheur *afficheur){
		afficheurs.push_back(afficheur);
	}
void Sujet::notify(){
     
	}