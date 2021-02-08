#include <iostream>

using namespace std;

int main() {
    srand(time(NULL));
	Personnage p1;
    Arme a1;

    Arme a2(50,2,"force",5,500);

    cout << "Degats de l'arme = "<<a2.getDegats()<<endl;
    p1.setArme(&a2);
    p1.getArme()->setDegats(75);
    cout << "Degats de l'arme = "<<a2.getDegats()<<endl;

	p1.setNom("Henry");
	p1.setAttack(50);
	p1.showInfos();
	cout << endl;

	cout << "	personnage 2  " << endl;
	Personnage p2(p1);
	p2.setNom("Victor");
	p2.setAttack(600);
	p2.setArme(&a2);
	p2.getArme()->setDegats(100);
	cout << endl;


cout << "Degats de l'arme = "<<a2.getDegats()<<endl;
    cout << "Degats de l'arme depuis P1 = "<<p1.getArme()->getDegats()<<endl;
    cout << "Degats de l'arme depuis P2 = "<<p2.getArme()->getDegats()<<endl;

	p1.~Personnage();