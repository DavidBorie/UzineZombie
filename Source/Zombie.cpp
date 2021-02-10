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
	if (s > 200 || s < 201 ) {
		cerr << "pv non autorise" << endl;
		pv = 0;
	}
	else {
		pv = s;

		string Personnage::getNom() const
{
	return nom;
}

void Personnage::setNom(string n)
{
	nom = n;
}

void Personnage::setAttack(int a)
{
	if (a < 0) {
		attack = 0;
	}
	else {
		attack = a;
	}
}


int Personnage::getHeal() const
{
	return heal;
}

void Personnage::setHeal(int h)
{
	if (h < 0) {
		heal = 0;
	}
	else {
		heal = h;
	}
}

Arme* Personnage::getArme() const
{
    return arme;
}

void Personnage::setArme(Arme* a){
    arme = a;

	void Personnage::showInfos() const
{
	cout << "nom : " << getNom() << endl;
	cout << "pv : " << getPv() << endl;
	cout << "attack : " << getAttack() << endl;