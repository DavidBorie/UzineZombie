#include "Zombie.h"


Personnage::Personnage(){
    pv = 200;
	nom = "Default";
	attack = 50;
	arme = new Arme();
	cout<<"Je suis personnage, j'ai 200 pv et ma force est de 50."<<endl
}

Personnage::Personnage(int p,int a,float pc){
    pv = p;
    attack = a;
}

Personnage::Personnage(string n){
    nom = n;
}

Personnage::~Personnage(){
    cout<<"Info: personnage est décédé"<<endl;
}


int Personnage::getPv() const
{
	return pv;
}

void Personnage::setPv(int s) {
	if (s > 1000 || s < 0) {
		cerr << "pv non autorisé" << endl;
		pv = 0;
	}
	else {
		pv = s;
	}
}
